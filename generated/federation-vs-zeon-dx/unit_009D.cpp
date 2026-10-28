#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_009D[4096] = {
    1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8,
    0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 25, 0, 0, 0, 26, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    30, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0,
    34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    47, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0,
    52, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 58, 0, 0, 0,
    0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 64, 0,
    0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 70,
    0, 0, 0, 71, 0, 0, 0, 72, 0, 0, 0, 73, 0, 74, 0, 75, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77,
    0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 80, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 82, 0, 83, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 85, 0, 0, 0, 86, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 89, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 0, 95, 0, 0, 0, 96, 0, 97,
    0, 98, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 100, 0, 101, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 103, 0,
    104, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 108, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 109, 0, 110, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 112, 0, 0, 113, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0,
    0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 121, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    123, 0, 0, 0, 0, 124, 0, 125, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0,
    129, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 133, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137,
    0, 0, 0, 0, 138, 0, 0, 0, 139, 0, 0, 0, 0, 140, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 146, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0,
    150, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 157, 0, 0, 158, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 164, 0, 0, 165, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 170, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 175,
    0, 176, 0, 177, 0, 178, 0, 179, 0, 180, 0, 181, 0, 182, 0, 183, 0, 184, 0, 185, 0, 186, 0, 187, 0, 188, 0, 189, 0, 190, 0, 191,
    0, 192, 0, 193, 0, 0, 0, 194, 0, 195, 0, 196, 0, 197, 0, 198, 0, 199, 0, 200, 0, 201, 0, 202, 0, 0, 0, 0, 0, 0, 0, 203,
    0, 204, 0, 205, 0, 206, 0, 207, 0, 208, 0, 209, 0, 210, 0, 211, 0, 212, 0, 213, 0, 214, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 222, 0, 223, 0,
    0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0,
    226, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 230,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0,
    232, 0, 0, 0, 0, 0, 233, 0, 234, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 242, 0, 0, 0,
    0, 243, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 246, 0, 0, 0, 0, 0, 0, 0, 247,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 255, 0, 256, 0, 257, 0, 0, 258, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0,
    261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 267,
    0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 276, 0, 0, 0, 277, 0, 0, 0, 0, 0, 278, 0, 0, 0,
    279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 281, 0, 282, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 284, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 296, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0,
    0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 325, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 327, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_009D(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00374000;
    case 2u: goto L_00374004;
    case 3u: goto L_00374040;
    case 4u: goto L_00374064;
    case 5u: goto L_003740A8;
    case 6u: goto L_003740D4;
    case 7u: goto L_00374100;
    case 8u: goto L_0037417C;
    case 9u: goto L_00374190;
    case 10u: goto L_00374250;
    case 11u: goto L_00374330;
    case 12u: goto L_00374390;
    case 13u: goto L_003743CC;
    case 14u: goto L_003743F0;
    case 15u: goto L_00374520;
    case 16u: goto L_00374570;
    case 17u: goto L_003745CC;
    case 18u: goto L_00374610;
    case 19u: goto L_00374640;
    case 20u: goto L_003746B0;
    case 21u: goto L_003746D0;
    case 22u: goto L_003746E0;
    case 23u: goto L_00374710;
    case 24u: goto L_00374720;
    case 25u: goto L_00374790;
    case 26u: goto L_003747A0;
    case 27u: goto L_003747A8;
    case 28u: goto L_003747D4;
    case 29u: goto L_00374810;
    case 30u: goto L_00374880;
    case 31u: goto L_003748A0;
    case 32u: goto L_003748C0;
    case 33u: goto L_003748EC;
    case 34u: goto L_00374900;
    case 35u: goto L_00374950;
    case 36u: goto L_00374968;
    case 37u: goto L_00374990;
    case 38u: goto L_003749CC;
    case 39u: goto L_003749F0;
    case 40u: goto L_00374A2C;
    case 41u: goto L_00374A3C;
    case 42u: goto L_00374A60;
    case 43u: goto L_00374AB0;
    case 44u: goto L_00374AF8;
    case 45u: goto L_00374B90;
    case 46u: goto L_00374BD8;
    case 47u: goto L_00374C80;
    case 48u: goto L_00374CA0;
    case 49u: goto L_00374CB0;
    case 50u: goto L_00374CE0;
    case 51u: goto L_00374CF0;
    case 52u: goto L_00374D00;
    case 53u: goto L_00374D10;
    case 54u: goto L_00374D30;
    case 55u: goto L_00374D60;
    case 56u: goto L_00374DB0;
    case 57u: goto L_00374DE8;
    case 58u: goto L_00374DF0;
    case 59u: goto L_00374E10;
    case 60u: goto L_00374E30;
    case 61u: goto L_00374E50;
    case 62u: goto L_00374EB0;
    case 63u: goto L_00374ED8;
    case 64u: goto L_00374EF8;
    case 65u: goto L_00374F18;
    case 66u: goto L_00374F38;
    case 67u: goto L_00374F58;
    case 68u: goto L_00374FA0;
    case 69u: goto L_00374FEC;
    case 70u: goto L_00374FFC;
    case 71u: goto L_0037500C;
    case 72u: goto L_0037501C;
    case 73u: goto L_0037502C;
    case 74u: goto L_00375034;
    case 75u: goto L_0037503C;
    case 76u: goto L_00375054;
    case 77u: goto L_0037507C;
    case 78u: goto L_00375090;
    case 79u: goto L_003750B4;
    case 80u: goto L_003750C4;
    case 81u: goto L_003750D8;
    case 82u: goto L_003750F0;
    case 83u: goto L_003750F8;
    case 84u: goto L_00375124;
    case 85u: goto L_00375134;
    case 86u: goto L_00375144;
    case 87u: goto L_00375154;
    case 88u: goto L_003751A8;
    case 89u: goto L_003751B0;
    case 90u: goto L_003751B8;
    case 91u: goto L_00375244;
    case 92u: goto L_003752AC;
    case 93u: goto L_003752C4;
    case 94u: goto L_003752D4;
    case 95u: goto L_003752E4;
    case 96u: goto L_003752F4;
    case 97u: goto L_003752FC;
    case 98u: goto L_00375304;
    case 99u: goto L_0037531C;
    case 100u: goto L_00375338;
    case 101u: goto L_00375340;
    case 102u: goto L_00375358;
    case 103u: goto L_00375378;
    case 104u: goto L_00375380;
    case 105u: goto L_00375388;
    case 106u: goto L_003753C0;
    case 107u: goto L_003753E0;
    case 108u: goto L_003753F0;
    case 109u: goto L_00375418;
    case 110u: goto L_00375420;
    case 111u: goto L_00375430;
    case 112u: goto L_00375484;
    case 113u: goto L_00375490;
    case 114u: goto L_003754A0;
    case 115u: goto L_003754F8;
    case 116u: goto L_00375520;
    case 117u: goto L_00375544;
    case 118u: goto L_00375578;
    case 119u: goto L_00375588;
    case 120u: goto L_003755BC;
    case 121u: goto L_003755C4;
    case 122u: goto L_003755D8;
    case 123u: goto L_00375600;
    case 124u: goto L_00375614;
    case 125u: goto L_0037561C;
    case 126u: goto L_00375628;
    case 127u: goto L_00375660;
    case 128u: goto L_00375670;
    case 129u: goto L_00375680;
    case 130u: goto L_00375690;
    case 131u: goto L_003756CC;
    case 132u: goto L_003756D4;
    case 133u: goto L_00375710;
    case 134u: goto L_0037571C;
    case 135u: goto L_00375770;
    case 136u: goto L_003757A0;
    case 137u: goto L_003757FC;
    case 138u: goto L_00375810;
    case 139u: goto L_00375820;
    case 140u: goto L_00375834;
    case 141u: goto L_00375848;
    case 142u: goto L_00375920;
    case 143u: goto L_0037594C;
    case 144u: goto L_00375960;
    case 145u: goto L_0037599C;
    case 146u: goto L_003759B0;
    case 147u: goto L_003759C4;
    case 148u: goto L_00375A30;
    case 149u: goto L_00375A6C;
    case 150u: goto L_00375A80;
    case 151u: goto L_00375A98;
    case 152u: goto L_00375B00;
    case 153u: goto L_00375B3C;
    case 154u: goto L_00375B50;
    case 155u: goto L_00375B90;
    case 156u: goto L_00375BD8;
    case 157u: goto L_00375BEC;
    case 158u: goto L_00375BF8;
    case 159u: goto L_00375C34;
    case 160u: goto L_00375C54;
    case 161u: goto L_00375C60;
    case 162u: goto L_00375C90;
    case 163u: goto L_00375CCC;
    case 164u: goto L_00375CE0;
    case 165u: goto L_00375CEC;
    case 166u: goto L_00375D80;
    case 167u: goto L_00375E30;
    case 168u: goto L_00375E48;
    case 169u: goto L_00375E5C;
    case 170u: goto L_00375E74;
    case 171u: goto L_00375EB0;
    case 172u: goto L_00375ED0;
    case 173u: goto L_00375F30;
    case 174u: goto L_00375F64;
    case 175u: goto L_00375F7C;
    case 176u: goto L_00375F84;
    case 177u: goto L_00375F8C;
    case 178u: goto L_00375F94;
    case 179u: goto L_00375F9C;
    case 180u: goto L_00375FA4;
    case 181u: goto L_00375FAC;
    case 182u: goto L_00375FB4;
    case 183u: goto L_00375FBC;
    case 184u: goto L_00375FC4;
    case 185u: goto L_00375FCC;
    case 186u: goto L_00375FD4;
    case 187u: goto L_00375FDC;
    case 188u: goto L_00375FE4;
    case 189u: goto L_00375FEC;
    case 190u: goto L_00375FF4;
    case 191u: goto L_00375FFC;
    case 192u: goto L_00376004;
    case 193u: goto L_0037600C;
    case 194u: goto L_0037601C;
    case 195u: goto L_00376024;
    case 196u: goto L_0037602C;
    case 197u: goto L_00376034;
    case 198u: goto L_0037603C;
    case 199u: goto L_00376044;
    case 200u: goto L_0037604C;
    case 201u: goto L_00376054;
    case 202u: goto L_0037605C;
    case 203u: goto L_0037607C;
    case 204u: goto L_00376084;
    case 205u: goto L_0037608C;
    case 206u: goto L_00376094;
    case 207u: goto L_0037609C;
    case 208u: goto L_003760A4;
    case 209u: goto L_003760AC;
    case 210u: goto L_003760B4;
    case 211u: goto L_003760BC;
    case 212u: goto L_003760C4;
    case 213u: goto L_003760CC;
    case 214u: goto L_003760D4;
    case 215u: goto L_003760E4;
    case 216u: goto L_00376124;
    case 217u: goto L_00376150;
    case 218u: goto L_003761AC;
    case 219u: goto L_003761DC;
    case 220u: goto L_00376214;
    case 221u: goto L_00376258;
    case 222u: goto L_00376270;
    case 223u: goto L_00376278;
    case 224u: goto L_0037628C;
    case 225u: goto L_003762E4;
    case 226u: goto L_00376300;
    case 227u: goto L_00376310;
    case 228u: goto L_00376340;
    case 229u: goto L_00376374;
    case 230u: goto L_0037637C;
    case 231u: goto L_003763E8;
    case 232u: goto L_00376400;
    case 233u: goto L_00376418;
    case 234u: goto L_00376420;
    case 235u: goto L_00376434;
    case 236u: goto L_0037648C;
    case 237u: goto L_003764A8;
    case 238u: goto L_003764B8;
    case 239u: goto L_003764E8;
    case 240u: goto L_0037651C;
    case 241u: goto L_00376668;
    case 242u: goto L_00376670;
    case 243u: goto L_00376684;
    case 244u: goto L_00376690;
    case 245u: goto L_003766D4;
    case 246u: goto L_003766DC;
    case 247u: goto L_003766FC;
    case 248u: goto L_00376728;
    case 249u: goto L_00376750;
    case 250u: goto L_0037679C;
    case 251u: goto L_003767AC;
    case 252u: goto L_003767E0;
    case 253u: goto L_00376828;
    case 254u: goto L_00376840;
    case 255u: goto L_00376888;
    case 256u: goto L_00376890;
    case 257u: goto L_00376898;
    case 258u: goto L_003768A4;
    case 259u: goto L_003768C0;
    case 260u: goto L_003768E0;
    case 261u: goto L_00376900;
    case 262u: goto L_00376950;
    case 263u: goto L_00376960;
    case 264u: goto L_00376990;
    case 265u: goto L_003769B4;
    case 266u: goto L_003769D8;
    case 267u: goto L_003769FC;
    case 268u: goto L_00376A20;
    case 269u: goto L_00376A44;
    case 270u: goto L_00376A70;
    case 271u: goto L_00376A9C;
    case 272u: goto L_00376AD0;
    case 273u: goto L_00376AE4;
    case 274u: goto L_00376B10;
    case 275u: goto L_00376B38;
    case 276u: goto L_00376B48;
    case 277u: goto L_00376B58;
    case 278u: goto L_00376B70;
    case 279u: goto L_00376B80;
    case 280u: goto L_00376BB8;
    case 281u: goto L_00376BC0;
    case 282u: goto L_00376BC8;
    case 283u: goto L_00376BE0;
    case 284u: goto L_00376C0C;
    case 285u: goto L_00376C20;
    case 286u: goto L_00376C48;
    case 287u: goto L_00376C50;
    case 288u: goto L_00376C98;
    case 289u: goto L_00376CB0;
    case 290u: goto L_00376D3C;
    case 291u: goto L_00376D50;
    case 292u: goto L_00376DA0;
    case 293u: goto L_00376E2C;
    case 294u: goto L_00376E40;
    case 295u: goto L_00376EA0;
    case 296u: goto L_00376EB0;
    case 297u: goto L_00376EC0;
    case 298u: goto L_00376F28;
    case 299u: goto L_00376F50;
    case 300u: goto L_00377050;
    case 301u: goto L_003770C0;
    case 302u: goto L_003770E0;
    case 303u: goto L_003771C0;
    case 304u: goto L_003771E8;
    case 305u: goto L_00377240;
    case 306u: goto L_0037729C;
    case 307u: goto L_003772BC;
    case 308u: goto L_003772F8;
    case 309u: goto L_00377318;
    case 310u: goto L_003773A0;
    case 311u: goto L_003773B4;
    case 312u: goto L_00377420;
    case 313u: goto L_00377434;
    case 314u: goto L_00377460;
    case 315u: goto L_003774BC;
    case 316u: goto L_003774DC;
    case 317u: goto L_00377518;
    case 318u: goto L_00377538;
    case 319u: goto L_00377620;
    case 320u: goto L_003776A0;
    case 321u: goto L_003776CC;
    case 322u: goto L_0037771C;
    case 323u: goto L_00377748;
    case 324u: goto L_003777DC;
    case 325u: goto L_003777F0;
    case 326u: goto L_0037785C;
    case 327u: goto L_00377870;
    case 328u: goto L_003778A0;
    case 329u: goto L_00377920;
    case 330u: goto L_00377968;
    case 331u: goto L_003779C4;
    case 332u: goto L_00377A0C;
    case 333u: goto L_00377AAC;
    case 334u: goto L_00377AC0;
    case 335u: goto L_00377B2C;
    case 336u: goto L_00377B40;
    case 337u: goto L_00377B70;
    case 338u: goto L_00377C44;
    case 339u: goto L_00377C74;
    case 340u: goto L_00377CBC;
    case 341u: goto L_00377CEC;
    case 342u: goto L_00377D1C;
    case 343u: goto L_00377D4C;
    case 344u: goto L_00377D98;
    case 345u: goto L_00377DC8;
    case 346u: goto L_00377E28;
    case 347u: goto L_00377EB0;
    case 348u: goto L_00377EE8;
    case 349u: goto L_00377F68;
    case 350u: goto L_00377FC8;
    default: bad_entry(c, 0x00374000u); return;
    }
L_00374000:
    c.budget -= 1;
L_00374004:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8u));
    set32(c.r[2], 0u + 255u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);  if (t) { goto L_003740B4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_00374070; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C70000u);
    c.f[13] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00374040u); set32(c.r[4], c.r[2].w[0] - 21536u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x00374040u) [[unlikely]] return; }
L_00374040:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43D30000u);
    c.f[13] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00374064u); set32(c.r[4], c.r[2].w[0] - 21504u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x00374064u) [[unlikely]] return; }
L_00374064:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);  if (t) { goto L_003740D8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_00374070:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.f[14] = c.r[2].w[0];
    c.f[12] = ld32((c.r[28].w[0] - 27128u));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[13] = ld32((c.r[28].w[0] - 27124u));
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 3);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[2], c.r[2].w[0] + 15040u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003740A8u); set32(c.r[4], c.r[2].w[0] + 72u);  if (depth < kMaxDepth) unit_0099(c, 110u, depth + 1u); else { c.pc = 0x003655A0u; return; } if (c.pc != 0x003740A8u) [[unlikely]] return; }
L_003740A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003740D4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.budget -= 1;
L_003740B4:
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C70000u);
    c.f[13] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003740D4u); set32(c.r[4], c.r[2].w[0] - 21472u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x003740D4u) [[unlikely]] return; }
L_003740D4:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    c.budget -= 1;
L_003740D8:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00374100:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[6], ld32((c.r[4].w[0] + 28u)));  if (t) { goto L_00374138; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[3], c.r[5].w[0] + 1u);  if (t) { goto L_0037412C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_00374180; } }
    set32(c.r[3], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_0037412C:
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[6].w[0] + 7u));
    st8((c.r[4].w[0] + 285u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00374138:
    c.r[5].d[0] = ld8((c.r[4].w[0] + 285u));
    c.r[3].d[0] = ld8((c.r[6].w[0] + 7u));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0037417C; } }
    st8((c.r[4].w[0] + 285u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[6].d[0] = ld8((c.r[6].w[0] + 7u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[2].w[0] + 20984u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037417Cu); c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));  if (depth < kMaxDepth) unit_009D(c, 274u, depth + 1u); else { c.pc = 0x00376B10u; return; } if (c.pc != 0x0037417Cu) [[unlikely]] return; }
L_0037417C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_00374180:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00374190:
    c.f[2] = ld32((c.r[28].w[0] - 24880u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43A80000u);
    c.f[1] = c.r[3].w[0];
    set32(c.r[6], ld32((c.r[4].w[0] + 28u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437A0000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    set32(c.r[3], 0u + 2u);
    st32((c.r[4].w[0] + 32u), c.f[1]);
    c.f[1] = ld32((c.r[28].w[0] - 24884u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[4].w[0] + 36u), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 17;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00374218; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003741FC; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[3], c.r[5].w[0] + 1u);  if (t) { goto L_003741F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00374244; } }
    set32(c.r[3], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_003741F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00374244; } }
L_003741FC:
    c.r[3].d[0] = ld8((c.r[6].w[0] + 12u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00374244; } }
    set32(c.r[3], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(0u));  if (t) { goto L_00374244; } }
L_00374218:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00374240; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00374244; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_00374240:
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_00374244:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00374250:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  if (t) { goto L_0037428C; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[3], c.r[6].w[0] + 1u);  if (t) { goto L_0037427C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0037437C; } }
    set32(c.r[3], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_0037427C:
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 255u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 285u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00374378; } }
L_0037428C:
    c.r[5].d[0] = ld8((c.r[4].w[0] + 285u));
    c.r[7].d[0] = ld8((c.r[3].w[0] + 8u));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[7].d[0];  if (t) { goto L_00374378; } }
    set32(c.r[5], 0u + 255u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[5].d[0];  if (t) { goto L_003742EC; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_003742EC; } }
    set32(c.r[5], c.r[7].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[5].w[0] << 3);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[5], c.r[5].w[0] + 14716u);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].d[0] = ld8((c.r[5].w[0]));
    c.budget -= 11;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_003742EC; } }
    set32(c.r[3], 0u + 128u);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 285u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00374378; } }
L_003742EC:
    st8((c.r[4].w[0] + 285u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[6].d[0] = ld8((c.r[3].w[0] + 8u));
    set32(c.r[5], 0u + 255u);
    c.budget -= 5;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_00374374; } }
    set32(c.r[5], 0u + 1u);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_00374338; } }
    c.r[3].d[0] = ld8((c.r[3].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 21680u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00374330u); c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));  if (depth < kMaxDepth) unit_009D(c, 274u, depth + 1u); else { c.pc = 0x00376B10u; return; } if (c.pc != 0x00374330u) [[unlikely]] return; }
L_00374330:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00374378; } }
L_00374338:
    c.r[7].d[0] = ld8((c.r[3].w[0] + 8u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[6], c.r[5].w[0] + 21728u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[5], c.r[5].w[0] + 21732u);
    set32(c.r[7], c.r[7].w[0] << 3);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.f[0] = ld32((c.r[6].w[0]));
    st32((c.r[4].w[0] + 32u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 8u));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 36u), c.f[0]);  if (t) { goto L_00374378; } }
L_00374374:
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00374378:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_0037437C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00374390:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[7], c.r[2].w[0] + 21952u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[9], c.r[2].w[0] + 21952u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[8], 0u + 64u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 29968u);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    mmi::paddub(c.r[10], c.r[8], c.r[0]);
    mmi::paddub(c.r[11], c.r[0], c.r[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003743CCu); st64((c.r[29].w[0]), 0ull);  if (depth < kMaxDepth) unit_0001(c, 342u, depth + 1u); else { c.pc = 0x00106C88u; return; } if (c.pc != 0x003743CCu) [[unlikely]] return; }
L_003743CC:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_003743D8; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_003743D8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003743F0:
    set32(c.r[2], 0u + 1394u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 4658u);  if (t) { goto L_003744C8; } }
    set32(c.r[2], 0u + 1424u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 29u);  if (t) { goto L_00374454; } }
    set32(c.r[2], 0u + 1499u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 6u);  if (t) { goto L_00374420; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00374504; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 1;
L_00374420:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_00374434; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00374448; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_00374434:
    st8((c.r[28].w[0] - 25832u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 25836u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0037450C; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_00374448:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00374510; } }
    set32(c.r[2], 0u + 29u);
    c.budget -= 1;
L_00374454:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], 0u - 1u);  if (t) { goto L_003744B0; } }
    set32(c.r[2], 0u + 26u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], 0u - 1u);  if (t) { goto L_003744A4; } }
    set32(c.r[2], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], 0u - 1u);  if (t) { goto L_00374498; } }
    set32(c.r[2], 0u + 14u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], 0u - 1u);  if (t) { goto L_0037448C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003744BC; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_0037448C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00374510; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_00374498:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00374510; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_003744A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00374510; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_003744B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00374510; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_003744BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00374510; } }
    set32(c.r[2], 0u + 4658u);
    c.budget -= 1;
L_003744C8:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_003744E8; } }
    set32(c.r[2], 0u + 4722u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_003744E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003744F8; } }
L_003744E4:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_003744E8:
    st8((c.r[28].w[0] - 25832u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 25836u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0037450C; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_003744F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00374510; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_00374504:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00374510; } }
L_0037450C:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_00374510:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00374520:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 24868u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { mmi::paddub(c.r[2], c.r[0], c.r[0]);  goto L_00374560; }
    c.r[3].d[0] = ld8((c.r[28].w[0] - 24864u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0037455C; } }
    c.r[3].d[0] = ld8((c.r[28].w[0] - 24860u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0037455C; } }
    c.r[3].d[0] = ld8((c.r[28].w[0] - 24856u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0037455C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00374560; } }
L_0037455C:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_00374560:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00374570:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[9], ld32((c.r[1].w[0] + 29952u)));
    c.r[10].d[0] = 0ull | 65535ull;
    set32(c.r[8], 0u + 999u);
    set32(c.r[3], 0u + 2u);
    c.r[9].d[0] = c.r[9].d[0] & c.r[10].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 29956u)));
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 24584u)));
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    st16((c.r[7].w[0]), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[4].d[0] = ld8((c.r[28].w[0] - 25832u));
    c.budget -= 19;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; mmi::paddub(c.r[16], c.r[7], c.r[0]);  if (t) { goto L_003745C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_003745FC; } }
L_003745C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003745CCu); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00A0(c, 263u, depth + 1u); else { c.pc = 0x003828D0u; return; } if (c.pc != 0x003745CCu) [[unlikely]] return; }
L_003745CC:
    set32(c.r[4], ld32((c.r[29].w[0] + 44u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x51EB0000u);
    c.r[3].d[0] = c.r[3].d[0] | 34079ull;
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] >> 31);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 12;
L_003745FC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00374610:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 21920u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 6u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00374000u < 16384u) { entry = entries_009D[(t - 0x00374000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00374640:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 24860u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0037468C; } }
    c.r[2].d[0] = ld8((c.r[28].w[0] - 24856u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00374670; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 11u);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0037469C; } }
L_00374670:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 8u);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 8u), static_cast<std::uint16_t>(0u));  if (t) { goto L_0037469C; } }
L_0037468C:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 2u);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 4;
L_0037469C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003746B0:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 2u);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(c.r[4].w[0]));  c.pc = t; return; }
L_003746D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003746E0u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009D(c, 12u, depth + 1u); else { c.pc = 0x00374390u; return; } if (c.pc != 0x003746E0u) [[unlikely]] return; }
L_003746E0:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[5], 0u + 3u);
    set32(c.r[4], 0u + 180u);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st16((c.r[3].w[0] + 8u), static_cast<std::uint16_t>(c.r[4].w[0]));
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00374710:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00374720u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_009D(c, 12u, depth + 1u); else { c.pc = 0x00374390u; return; } if (c.pc != 0x00374720u) [[unlikely]] return; }
L_00374720:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[2], c.r[2].w[0] + 21952u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00374740; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));  if (t) { goto L_0037474C; } }
L_00374740:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st16((c.r[2].w[0] + 8u), static_cast<std::uint16_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 3;
L_0037474C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; st16((c.r[4].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00374768; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00374780; } }
L_00374768:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 4u);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    st16((c.r[3].w[0] + 8u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 6;
L_00374780:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00374790:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003747A0u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_009D(c, 12u, depth + 1u); else { c.pc = 0x00374390u; return; } if (c.pc != 0x003747A0u) [[unlikely]] return; }
L_003747A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003747A8u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_009D(c, 12u, depth + 1u); else { c.pc = 0x00374390u; return; } if (c.pc != 0x003747A8u) [[unlikely]] return; }
L_003747A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[2], c.r[2].w[0] + 21952u);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[4], 0u + 3u);  if (t) { goto L_003747CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[28].w[0] - 24856u));  if (t) { goto L_0037484C; } }
    set32(c.r[4], 0u + 3u);
    c.budget -= 1;
L_003747CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003747D4u);  if (depth < kMaxDepth) unit_009D(c, 12u, depth + 1u); else { c.pc = 0x00374390u; return; } if (c.pc != 0x003747D4u) [[unlikely]] return; }
L_003747D4:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 24856u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003747F4; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 14u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00374870; } }
L_003747F4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[2], c.r[2].w[0] + 21952u);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[2], c.r[2].w[0] + 21952u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00374810u); set32(c.r[5], ld32((c.r[2].w[0] + 4u)));  if (depth < kMaxDepth) unit_009D(c, 14u, depth + 1u); else { c.pc = 0x003743F0u; return; } if (c.pc != 0x00374810u) [[unlikely]] return; }
L_00374810:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00374838; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st32((c.r[1].w[0] + 29952u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[3], 0u + 6u);
    st32((c.r[1].w[0] + 29956u), c.r[5].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00374870; } }
L_00374838:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 5u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00374870; } }
    c.r[2].d[0] = ld8((c.r[28].w[0] - 24856u));
    c.budget -= 1;
L_0037484C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00374864; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 15u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00374870; } }
L_00374864:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 5u);
    st8((c.r[2].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00374870:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00374880:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 13u);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(c.r[4].w[0]));  c.pc = t; return; }
L_003748A0:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 7u);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0] + 7u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_003748C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 21984u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 7u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003748ECu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003748ECu) [[unlikely]] return; }
L_003748EC:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00374900:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[3].d[0] = ld8((c.r[28].w[0] - 25832u));
    set32(c.r[5], 0u + 2u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_00374920; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));  if (t) { goto L_00374978; } }
L_00374920:
    c.r[4].d[0] = ld8((c.r[28].w[0] - 25836u));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], 0u + 17u);  goto L_0037495C; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[5].d[0]; set32(c.r[4], 0u + 15u);  if (t) { goto L_00374944; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));  if (t) { goto L_0037496C; } }
    set32(c.r[4], 0u + 15u);
    c.budget -= 1;
L_00374944:
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00374950u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000D(c, 103u, depth + 1u); else { c.pc = 0x00135520u; return; } if (c.pc != 0x00374950u) [[unlikely]] return; }
L_00374950:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00374968; } }
    set32(c.r[4], 0u + 17u);
    c.budget -= 1;
L_0037495C:
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00374968u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000D(c, 103u, depth + 1u); else { c.pc = 0x00135520u; return; } if (c.pc != 0x00374968u) [[unlikely]] return; }
L_00374968:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 1;
L_0037496C:
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 7u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 3;
L_00374978:
    set32(c.r[4], 0u + 30u);
    st16((c.r[3].w[0] + 8u), static_cast<std::uint16_t>(c.r[4].w[0]));
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00374990:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 8u)));
    set32(c.r[3], c.r[4].w[0] - 1u);
    st16((c.r[5].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = 0ll < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003749E4; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 13u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003749CCu); st16((c.r[2].w[0] + 8u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_000D(c, 103u, depth + 1u); else { c.pc = 0x00135520u; return; } if (c.pc != 0x003749CCu) [[unlikely]] return; }
L_003749CC:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[5], 0u + 30u);
    set32(c.r[4], 0u + 2u);
    st16((c.r[3].w[0] + 8u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 7u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 6;
L_003749E4:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003749F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 8u)));
    set32(c.r[3], c.r[4].w[0] - 1u);
    st16((c.r[5].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = 0ll < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00374A54; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 11u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00374A2Cu); st16((c.r[2].w[0] + 8u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_000D(c, 103u, depth + 1u); else { c.pc = 0x00135520u; return; } if (c.pc != 0x00374A2Cu) [[unlikely]] return; }
L_00374A2C:
    set32(c.r[4], 0u + 16u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00374A3Cu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000D(c, 103u, depth + 1u); else { c.pc = 0x00135520u; return; } if (c.pc != 0x00374A3Cu) [[unlikely]] return; }
L_00374A3C:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[5], 0u + 30u);
    set32(c.r[4], 0u + 3u);
    st16((c.r[3].w[0] + 8u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 7u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 6;
L_00374A54:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00374A60:
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 8u)));
    set32(c.r[3], c.r[4].w[0] - 1u);
    st16((c.r[5].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = 0ll < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00374AA8; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], 0u + 8u);
    st16((c.r[5].w[0] + 8u), static_cast<std::uint16_t>(0u));
    st8((c.r[28].w[0] - 24860u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 7u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st16((c.r[3].w[0] + 10u), static_cast<std::uint16_t>(0u));
    c.budget -= 11;
L_00374AA8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00374AB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; st16((c.r[4].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00374AD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00374B84; } }
L_00374AD8:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 21904u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01270000u);
    c.r[5].d[0] = c.r[2].d[0] | 48ull;
    st16((c.r[3].w[0] + 8u), static_cast<std::uint16_t>(0u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00374AF8u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0001(c, 330u, depth + 1u); else { c.pc = 0x00106AB8u; return; } if (c.pc != 0x00374AF8u) [[unlikely]] return; }
L_00374AF8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00374B14; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 13u);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00374B84; } }
L_00374B14:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 21940u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00374B64; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 10u);
    st16((c.r[2].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 10u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st16((c.r[4].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[3].sd[0] < 12ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00374B5C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 13u);
    st8((c.r[2].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 4;
L_00374B5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_00374B88; } }
L_00374B64:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 9u);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st16((c.r[3].w[0] + 8u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st16((c.r[3].w[0] + 10u), static_cast<std::uint16_t>(0u));
    c.budget -= 8;
L_00374B84:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_00374B88:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00374B90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; st16((c.r[4].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00374BB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00374C6C; } }
L_00374BB8:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 21856u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01270000u);
    c.r[5].d[0] = c.r[2].d[0] | 64ull;
    st16((c.r[3].w[0] + 8u), static_cast<std::uint16_t>(0u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00374BD8u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0001(c, 330u, depth + 1u); else { c.pc = 0x00106AB8u; return; } if (c.pc != 0x00374BD8u) [[unlikely]] return; }
L_00374BD8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00374BF4; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 13u);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00374C6C; } }
L_00374BF4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 21892u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00374C44; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 10u);
    st16((c.r[2].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 10u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st16((c.r[4].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[3].sd[0] < 12ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00374C3C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 13u);
    st8((c.r[2].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 4;
L_00374C3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_00374C70; } }
L_00374C44:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], 0u + 1u);
    st8((c.r[28].w[0] - 24856u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], 0u + 10u);
    st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    st16((c.r[3].w[0] + 8u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st16((c.r[3].w[0] + 10u), static_cast<std::uint16_t>(0u));
    c.budget -= 10;
L_00374C6C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_00374C70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00374C80:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], 0u + 1u);
    st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st16((c.r[3].w[0] + 8u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[3].w[0] + 10u), static_cast<std::uint16_t>(0u));  c.pc = t; return; }
L_00374CA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00374CB0u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_009D(c, 12u, depth + 1u); else { c.pc = 0x00374390u; return; } if (c.pc != 0x00374CB0u) [[unlikely]] return; }
L_00374CB0:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 2u);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st16((c.r[3].w[0] + 8u), static_cast<std::uint16_t>(0u));
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00374CE0:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_00374CF0:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_00374D00:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_00374D10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[3].d[0] = ld8((c.r[28].w[0] - 24856u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00374D94; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00374D30u);  if (depth < kMaxDepth) unit_009D(c, 56u, depth + 1u); else { c.pc = 0x00374DB0u; return; } if (c.pc != 0x00374D30u) [[unlikely]] return; }
L_00374D30:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00374DA0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 29960u)));
    c.r[1].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00374D60; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[2], c.r[2].w[0] + 21952u);
    set32(c.r[4], 0u + 6u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00374D60u); st32((c.r[2].w[0]), c.r[3].w[0]);  if (depth < kMaxDepth) unit_009D(c, 12u, depth + 1u); else { c.pc = 0x00374390u; return; } if (c.pc != 0x00374D60u) [[unlikely]] return; }
L_00374D60:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 29960u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00374D84; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 13u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00374DA0; } }
L_00374D84:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 12u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00374DA0; } }
L_00374D94:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 13u);
    st8((c.r[2].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00374DA0:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00374DB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 7u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[1].d[0] == 0ull) { mmi::paddub(c.r[2], c.r[0], c.r[0]);  goto L_00374F8C; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[3].w[0] - 21440u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00374000u < 16384u) { entry = entries_009D[(t - 0x00374000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00374DE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00374DF0u);  if (depth < kMaxDepth) unit_00A0(c, 183u, depth + 1u); else { c.pc = 0x00381D60u; return; } if (c.pc != 0x00374DF0u) [[unlikely]] return; }
L_00374DF0:
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 30u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 7u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st16((c.r[2].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00374F88; } }
L_00374E10:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00374F88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00374E30u);  if (depth < kMaxDepth) unit_00A0(c, 223u, depth + 1u); else { c.pc = 0x00382230u; return; } if (c.pc != 0x00374E30u) [[unlikely]] return; }
L_00374E30:
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 30u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 7u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st16((c.r[2].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00374F88; } }
L_00374E50:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00374F88; } }
    c.r[3].d[0] = ld8((c.r[28].w[0] - 25832u));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00374E80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));  if (t) { goto L_00374EBC; } }
L_00374E80:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 25836u));
    set32(c.r[2], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 15u);  if (t) { goto L_00374E9C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00374EA8; } }
    set32(c.r[2], 0u + 15u);
    c.budget -= 1;
L_00374E9C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 29960u), c.r[2].w[0]);  if (t) { goto L_00374EB8; } }
L_00374EA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00374EB0u);  if (depth < kMaxDepth) unit_00A0(c, 253u, depth + 1u); else { c.pc = 0x00382670u; return; } if (c.pc != 0x00374EB0u) [[unlikely]] return; }
L_00374EB0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st32((c.r[1].w[0] + 29960u), c.r[2].w[0]);
    c.budget -= 2;
L_00374EB8:
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 1;
L_00374EBC:
    set32(c.r[3], 0u + 30u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 7u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[2].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00374F88; } }
L_00374ED8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00374F88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00374EF8u);  if (depth < kMaxDepth) unit_00A0(c, 294u, depth + 1u); else { c.pc = 0x00382B20u; return; } if (c.pc != 0x00374EF8u) [[unlikely]] return; }
L_00374EF8:
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 30u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 7u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st16((c.r[2].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00374F88; } }
L_00374F18:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00374F88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00374F38u);  if (depth < kMaxDepth) unit_00A0(c, 211u, depth + 1u); else { c.pc = 0x00382060u; return; } if (c.pc != 0x00374F38u) [[unlikely]] return; }
L_00374F38:
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 30u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 7u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st16((c.r[2].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00374F88; } }
L_00374F58:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00374F88; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], 0u + 1u);
    st8((c.r[3].w[0] + 7u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 8u), static_cast<std::uint16_t>(0u));  if (t) { goto L_00374F8C; } }
L_00374F88:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_00374F8C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00374FA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st32((c.r[1].w[0] + 29952u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st32((c.r[1].w[0] + 29956u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], 0u + 14u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    st32((c.r[1].w[0] + 29960u), 0u);
    st8((c.r[28].w[0] - 25836u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 25832u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 24868u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 24864u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 24860u), static_cast<std::uint8_t>(0u));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00374FECu); st8((c.r[28].w[0] - 24856u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_000D(c, 103u, depth + 1u); else { c.pc = 0x00135520u; return; } if (c.pc != 0x00374FECu) [[unlikely]] return; }
L_00374FEC:
    set32(c.r[4], 0u + 19u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00374FFCu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000D(c, 103u, depth + 1u); else { c.pc = 0x00135520u; return; } if (c.pc != 0x00374FFCu) [[unlikely]] return; }
L_00374FFC:
    set32(c.r[4], 0u + 20u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037500Cu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000D(c, 103u, depth + 1u); else { c.pc = 0x00135520u; return; } if (c.pc != 0x0037500Cu) [[unlikely]] return; }
L_0037500C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[16], ld32((c.r[1].w[0] - 10504u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037501Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x0037501Cu) [[unlikely]] return; }
L_0037501C:
    set32(c.r[5], c.r[2].w[0] + 1u);
    set32(c.r[4], 0u + 18u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037502Cu); mmi::paddub(c.r[6], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000D(c, 103u, depth + 1u); else { c.pc = 0x00135520u; return; } if (c.pc != 0x0037502Cu) [[unlikely]] return; }
L_0037502C:
    set32(c.r[2], 0u + 1u);
    st8((c.r[28].w[0] - 24868u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00375034:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037503Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 73u, depth + 1u); else { c.pc = 0x00100B48u; return; } if (c.pc != 0x0037503Cu) [[unlikely]] return; }
L_0037503C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 29968u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01270000u);
    c.r[5].d[0] = c.r[2].d[0] | 16ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00375054u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0001(c, 330u, depth + 1u); else { c.pc = 0x00106AB8u; return; } if (c.pc != 0x00375054u) [[unlikely]] return; }
L_00375054:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00375034u | kUnwind; return; } goto L_00375034; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 30004u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00375034u | kUnwind; return; } goto L_00375034; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26220u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; st8((c.r[28].w[0] - 24864u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00375184; } }
L_0037507C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 10480u)));
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00375090u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0002(c, 406u, depth + 1u); else { c.pc = 0x0010B730u; return; } if (c.pc != 0x00375090u) [[unlikely]] return; }
L_00375090:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; mmi::paddub(c.r[16], c.r[2], c.r[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037507Cu | kUnwind; return; } goto L_0037507C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[6], c.r[2].w[0] - 21416u);
    set32(c.r[4], 0u + 29u);
    set32(c.r[5], 0u + 7u);
    set32(c.r[7], c.r[29].w[0] + 40u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003750B4u); mmi::paddub(c.r[8], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000D(c, 106u, depth + 1u); else { c.pc = 0x00135580u; return; } if (c.pc != 0x003750B4u) [[unlikely]] return; }
L_003750B4:
    set32(c.r[3], ld32((c.r[29].w[0] + 40u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 13u);  if (t) { goto L_00375118; } }
L_003750C4:
    set32(c.r[7], c.r[29].w[0] + 44u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003750D8u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0002(c, 374u, depth + 1u); else { c.pc = 0x0010B100u; return; } if (c.pc != 0x003750D8u) [[unlikely]] return; }
L_003750D8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; st32((c.r[29].w[0] + 40u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003750C4u | kUnwind; return; } goto L_003750C4; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 40u)));
    c.r[1].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00375184; } }
L_003750F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003750F8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0002(c, 381u, depth + 1u); else { c.pc = 0x0010B308u; return; } if (c.pc != 0x003750F8u) [[unlikely]] return; }
L_003750F8:
    st32((c.r[29].w[0] + 40u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003750F0u | kUnwind; return; } goto L_003750F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00375184; } }
    set32(c.r[4], 0u + 13u);
    c.budget -= 1;
L_00375118:
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00375124u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000D(c, 103u, depth + 1u); else { c.pc = 0x00135520u; return; } if (c.pc != 0x00375124u) [[unlikely]] return; }
L_00375124:
    set32(c.r[4], 0u + 11u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00375134u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000D(c, 103u, depth + 1u); else { c.pc = 0x00135520u; return; } if (c.pc != 0x00375134u) [[unlikely]] return; }
L_00375134:
    set32(c.r[4], 0u + 16u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00375144u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000D(c, 103u, depth + 1u); else { c.pc = 0x00135520u; return; } if (c.pc != 0x00375144u) [[unlikely]] return; }
L_00375144:
    set32(c.r[4], 0u + 30u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00375154u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000D(c, 103u, depth + 1u); else { c.pc = 0x00135520u; return; } if (c.pc != 0x00375154u) [[unlikely]] return; }
L_00375154:
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st32((c.r[1].w[0] + 29952u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st32((c.r[1].w[0] + 29956u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 40u), c.r[2].w[0]);
    st8((c.r[28].w[0] - 24860u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 2u);
    st8((c.r[28].w[0] - 25832u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 5u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 25836u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003752FC; } }
L_00375184:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[3], 0u + 9u);
    set32(c.r[2], c.r[2].w[0] + 21952u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[2], c.r[2].w[0] + 21952u);
    set32(c.r[3], 0u + 12u);
    set32(c.r[16], c.r[2].w[0] + 4u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 9;
L_003751A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003751B0u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 73u, depth + 1u); else { c.pc = 0x00100B48u; return; } if (c.pc != 0x003751B0u) [[unlikely]] return; }
L_003751B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003751B8u); set32(c.r[4], 0u + 5u);  if (depth < kMaxDepth) unit_009D(c, 12u, depth + 1u); else { c.pc = 0x00374390u; return; } if (c.pc != 0x003751B8u) [[unlikely]] return; }
L_003751B8:
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003751A8u | kUnwind; return; } goto L_003751A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[2], c.r[2].w[0] + 21952u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00375210; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003751F8; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003751F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 40u)));  if (t) { goto L_003753CC; } }
L_003751F8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st32((c.r[1].w[0] + 29952u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st32((c.r[1].w[0] + 29956u), 0u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 40u), 0u);  if (t) { goto L_003753C8; } }
L_00375210:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[2], c.r[2].w[0] + 21952u);
    st32((c.r[1].w[0] + 29952u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st32((c.r[1].w[0] + 29956u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 29952u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00375244u); set32(c.r[5], ld32((c.r[1].w[0] + 29956u)));  if (depth < kMaxDepth) unit_009D(c, 14u, depth + 1u); else { c.pc = 0x003743F0u; return; } if (c.pc != 0x00375244u) [[unlikely]] return; }
L_00375244:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00375264; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st32((c.r[1].w[0] + 29952u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st32((c.r[1].w[0] + 29956u), 0u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 40u), 0u);  if (t) { goto L_003753C8; } }
L_00375264:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 25832u));
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_0037527C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 11u);  if (t) { goto L_003752D8; } }
L_0037527C:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 25836u));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], 0u + 17u);  goto L_003752B8; }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; set32(c.r[4], 0u + 15u);  if (t) { goto L_003752A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 13u);  if (t) { goto L_003752C8; } }
    set32(c.r[4], 0u + 15u);
    c.budget -= 1;
L_003752A0:
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003752ACu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000D(c, 103u, depth + 1u); else { c.pc = 0x00135520u; return; } if (c.pc != 0x003752ACu) [[unlikely]] return; }
L_003752AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003752C4; } }
    set32(c.r[4], 0u + 17u);
    c.budget -= 1;
L_003752B8:
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003752C4u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000D(c, 103u, depth + 1u); else { c.pc = 0x00135520u; return; } if (c.pc != 0x003752C4u) [[unlikely]] return; }
L_003752C4:
    set32(c.r[4], 0u + 13u);
    c.budget -= 1;
L_003752C8:
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003752D4u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000D(c, 103u, depth + 1u); else { c.pc = 0x00135520u; return; } if (c.pc != 0x003752D4u) [[unlikely]] return; }
L_003752D4:
    set32(c.r[4], 0u + 11u);
    c.budget -= 1;
L_003752D8:
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003752E4u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000D(c, 103u, depth + 1u); else { c.pc = 0x00135520u; return; } if (c.pc != 0x003752E4u) [[unlikely]] return; }
L_003752E4:
    set32(c.r[4], 0u + 16u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003752F4u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000D(c, 103u, depth + 1u); else { c.pc = 0x00135520u; return; } if (c.pc != 0x003752F4u) [[unlikely]] return; }
L_003752F4:
    set32(c.r[2], 0u + 1u);
    st8((c.r[28].w[0] - 24860u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_003752FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00375304u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 73u, depth + 1u); else { c.pc = 0x00100B48u; return; } if (c.pc != 0x00375304u) [[unlikely]] return; }
L_00375304:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 21904u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01270000u);
    c.r[5].d[0] = c.r[2].d[0] | 48ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037531Cu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0001(c, 330u, depth + 1u); else { c.pc = 0x00106AB8u; return; } if (c.pc != 0x0037531Cu) [[unlikely]] return; }
L_0037531C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003752FCu | kUnwind; return; } goto L_003752FC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 21940u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003752FCu | kUnwind; return; } goto L_003752FC; } }
    c.budget -= 1;
L_00375338:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00375340u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 73u, depth + 1u); else { c.pc = 0x00100B48u; return; } if (c.pc != 0x00375340u) [[unlikely]] return; }
L_00375340:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 21856u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01270000u);
    c.r[5].d[0] = c.r[2].d[0] | 64ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00375358u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0001(c, 330u, depth + 1u); else { c.pc = 0x00106AB8u; return; } if (c.pc != 0x00375358u) [[unlikely]] return; }
L_00375358:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00375338u | kUnwind; return; } goto L_00375338; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 21892u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00375338u | kUnwind; return; } goto L_00375338; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[28].w[0] - 24856u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00375378:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00375380u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 73u, depth + 1u); else { c.pc = 0x00100B48u; return; } if (c.pc != 0x00375380u) [[unlikely]] return; }
L_00375380:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00375388u);  if (depth < kMaxDepth) unit_009D(c, 56u, depth + 1u); else { c.pc = 0x00374DB0u; return; } if (c.pc != 0x00375388u) [[unlikely]] return; }
L_00375388:
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00375378u | kUnwind; return; } goto L_00375378; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 29960u)));
    c.r[1].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003753C4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[2], c.r[2].w[0] + 21952u);
    set32(c.r[4], 0u + 6u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003753C0u); st32((c.r[2].w[0]), c.r[3].w[0]);  if (depth < kMaxDepth) unit_009D(c, 12u, depth + 1u); else { c.pc = 0x00374390u; return; } if (c.pc != 0x003753C0u) [[unlikely]] return; }
L_003753C0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003753C4:
    st32((c.r[29].w[0] + 40u), c.r[2].w[0]);
    c.budget -= 1;
L_003753C8:
    set32(c.r[2], ld32((c.r[29].w[0] + 40u)));
    c.budget -= 1;
L_003753CC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003753E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003753F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[2], c.r[2].w[0] + 24896u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    st32((c.r[28].w[0] - 25964u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] - 9392u);
    set32(c.r[6], 0u + 26u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00375418u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x00375418u) [[unlikely]] return; }
L_00375418:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00375420u);  if (depth < kMaxDepth) unit_0099(c, 30u, depth + 1u); else { c.pc = 0x00364540u; return; } if (c.pc != 0x00375420u) [[unlikely]] return; }
L_00375420:
    set32(c.r[2], 0u + 1u);
    st8((c.r[28].w[0] - 25328u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00375430u); st8((c.r[28].w[0] - 25984u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_000E(c, 28u, depth + 1u); else { c.pc = 0x00138590u; return; } if (c.pc != 0x00375430u) [[unlikely]] return; }
L_00375430:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[6], c.r[3].w[0] + 188u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 188u)));
    c.budget -= 5;
    if (c.r[3].sd[0] >= 0) { set32(c.r[2], 0u + 1u);  goto L_00375458; }
    st8((c.r[28].w[0] - 26144u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 26148u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 26152u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00375484; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00375458:
    st8((c.r[28].w[0] - 26144u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[4], c.r[2].w[0] - 3616u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01B90000u);
    c.r[5].d[0] = c.r[2].d[0] | 61440ull;
    st8((c.r[28].w[0] - 26148u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[6], 0u + 1600u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00375484u); st8((c.r[28].w[0] - 26152u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0005(c, 230u, depth + 1u); else { c.pc = 0x00116C60u; return; } if (c.pc != 0x00375484u) [[unlikely]] return; }
L_00375484:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00375490:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003754A0u);  if (depth < kMaxDepth) unit_009D(c, 261u, depth + 1u); else { c.pc = 0x00376900u; return; } if (c.pc != 0x003754A0u) [[unlikely]] return; }
L_003754A0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 9392u));
    set32(c.r[2], 0u + 4u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003755E4; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00375598; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0037554C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00375518; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003754E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00375648; } }
L_003754E8:
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[28].w[0] - 25320u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003754F8u); st8((c.r[2].w[0] + 5508u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00A5(c, 362u, depth + 1u); else { c.pc = 0x00397FC0u; return; } if (c.pc != 0x003754F8u) [[unlikely]] return; }
L_003754F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00375644; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 9392u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] - 9392u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00375644; } }
L_00375518:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00375520u);  if (depth < kMaxDepth) unit_009D(c, 303u, depth + 1u); else { c.pc = 0x003771C0u; return; } if (c.pc != 0x00375520u) [[unlikely]] return; }
L_00375520:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 9391u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 22000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00375544u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00375544u) [[unlikely]] return; }
L_00375544:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00375644; } }
L_0037554C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[2], c.r[2].w[0] - 9392u);
    st32((c.r[2].w[0]), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[2], c.r[2].w[0] - 9388u);
    st32((c.r[2].w[0]), 0u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 25328u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00375580; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00375578u); set32(c.r[4], 0u + 16u);  if (depth < kMaxDepth) unit_009E(c, 27u, depth + 1u); else { c.pc = 0x003783E0u; return; } if (c.pc != 0x00375578u) [[unlikely]] return; }
L_00375578:
    set32(c.r[2], 0u + 1u);
    st8((c.r[28].w[0] - 25328u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00375580:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00375588u);  if (depth < kMaxDepth) unit_009D(c, 279u, depth + 1u); else { c.pc = 0x00376B80u; return; } if (c.pc != 0x00375588u) [[unlikely]] return; }
L_00375588:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st64((c.r[3].w[0]), c.r[2].d[0]);  if (t) { goto L_00375648; } }
L_00375598:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[3], 0u + 513u);
    set32(c.r[2], c.r[2].w[0] - 9392u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[2], c.r[2].w[0] - 9388u);
    st32((c.r[2].w[0]), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003755BCu); st8((c.r[28].w[0] - 25320u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_009D(c, 279u, depth + 1u); else { c.pc = 0x00376B80u; return; } if (c.pc != 0x003755BCu) [[unlikely]] return; }
L_003755BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003755C4u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 38u, depth + 1u); else { c.pc = 0x00378520u; return; } if (c.pc != 0x003755C4u) [[unlikely]] return; }
L_003755C4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 25328u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00375644; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003755D8u); set32(c.r[4], 0u + 16u);  if (depth < kMaxDepth) unit_009E(c, 27u, depth + 1u); else { c.pc = 0x003783E0u; return; } if (c.pc != 0x003755D8u) [[unlikely]] return; }
L_003755D8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 25328u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00375644; } }
L_003755E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[2], c.r[2].w[0] - 9392u);
    st32((c.r[2].w[0]), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[2], c.r[2].w[0] - 9388u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00375600u); st32((c.r[2].w[0]), 0u);  if (depth < kMaxDepth) unit_009D(c, 279u, depth + 1u); else { c.pc = 0x00376B80u; return; } if (c.pc != 0x00375600u) [[unlikely]] return; }
L_00375600:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 25328u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00375630; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00375614u); set32(c.r[4], 0u + 16u);  if (depth < kMaxDepth) unit_009E(c, 27u, depth + 1u); else { c.pc = 0x003783E0u; return; } if (c.pc != 0x00375614u) [[unlikely]] return; }
L_00375614:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037561Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 23u, depth + 1u); else { c.pc = 0x003783A0u; return; } if (c.pc != 0x0037561Cu) [[unlikely]] return; }
L_0037561C:
    set32(c.r[4], 0u + 30u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00375628u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 26u, depth + 1u); else { c.pc = 0x003783D0u; return; } if (c.pc != 0x00375628u) [[unlikely]] return; }
L_00375628:
    set32(c.r[2], 0u + 1u);
    st8((c.r[28].w[0] - 25328u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00375630:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 2u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st64((c.r[3].w[0]), c.r[4].d[0]);  if (t) { goto L_00375648; } }
L_00375644:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_00375648:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00375660:
    set32(c.r[3], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[1].w[0] - 9392u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00375670:
    set32(c.r[3], 0u + 3u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[1].w[0] - 9392u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00375680:
    set32(c.r[3], 0u + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[1].w[0] - 9392u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00375690:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[4].d[0] = ld8((c.r[1].w[0] - 9390u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003756E4; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], c.r[4].w[0] + 1u);  goto L_003756C0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_00375764; } }
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_003756C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003756CCu); st8((c.r[1].w[0] - 9390u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009D(c, 279u, depth + 1u); else { c.pc = 0x00376B80u; return; } if (c.pc != 0x003756CCu) [[unlikely]] return; }
L_003756CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003756D4u);  if (depth < kMaxDepth) unit_009E(c, 31u, depth + 1u); else { c.pc = 0x00378420u; return; } if (c.pc != 0x003756D4u) [[unlikely]] return; }
L_003756D4:
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00375760; } }
L_003756E4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 9384u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 9384u)));
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_00375760; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00375710u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 38u, depth + 1u); else { c.pc = 0x00378520u; return; } if (c.pc != 0x00375710u) [[unlikely]] return; }
L_00375710:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037571Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 29u, depth + 1u); else { c.pc = 0x00378400u; return; } if (c.pc != 0x0037571Cu) [[unlikely]] return; }
L_0037571C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 9391u));
    st8((c.r[28].w[0] - 25736u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 25740u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 25744u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 25748u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st8((c.r[1].w[0] - 9391u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st8((c.r[1].w[0] - 9390u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st8((c.r[1].w[0] - 9389u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st8((c.r[1].w[0] - 9388u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st8((c.r[1].w[0] - 9387u), static_cast<std::uint8_t>(0u));
    c.budget -= 17;
L_00375760:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_00375764:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00375770:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 9391u));
    set32(c.r[4], 0u + 1u);
    st8((c.r[28].w[0] - 25812u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st8((c.r[1].w[0] - 9391u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st8((c.r[1].w[0] - 9390u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[1].w[0] - 9389u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_003757A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[4].d[0] = ld8((c.r[1].w[0] - 9390u));
    set32(c.r[3], 0u + 2u);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00375928; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0037583C; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], c.r[4].w[0] + 1u);  goto L_003757DC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_00375950; } }
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_003757DC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st8((c.r[1].w[0] - 9390u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st8((c.r[1].w[0] - 9389u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st8((c.r[1].w[0] - 9388u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003757FCu); st8((c.r[28].w[0] - 25968u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_009D(c, 279u, depth + 1u); else { c.pc = 0x00376B80u; return; } if (c.pc != 0x003757FCu) [[unlikely]] return; }
L_003757FC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] - 9424u);
    set32(c.r[6], 0u + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00375810u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x00375810u) [[unlikely]] return; }
L_00375810:
    set32(c.r[4], c.r[28].w[0] - 25920u);
    set32(c.r[6], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00375820u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x00375820u) [[unlikely]] return; }
L_00375820:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[4], c.r[2].w[0] - 32016u);
    set32(c.r[6], 0u + 128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00375834u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x00375834u) [[unlikely]] return; }
L_00375834:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037594C; } }
L_0037583C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00375848u); set32(c.r[4], c.r[2].w[0] - 9424u);  if (depth < kMaxDepth) unit_0095(c, 46u, depth + 1u); else { c.pc = 0x00354830u; return; } if (c.pc != 0x00375848u) [[unlikely]] return; }
L_00375848:
    set32(c.r[3], 0u + 4u);
    c.r[5].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00375918; } }
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_003758F8; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003758D4; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003758B0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0037588C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037594C; } }
L_0037588C:
    st8((c.r[28].w[0] - 25784u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 9390u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st8((c.r[1].w[0] - 9390u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] - 9389u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_0037594C; } }
L_003758B0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 9390u));
    st8((c.r[28].w[0] - 25784u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st8((c.r[1].w[0] - 9390u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] - 9389u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_0037594C; } }
L_003758D4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 9390u));
    st8((c.r[28].w[0] - 25784u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st8((c.r[1].w[0] - 9390u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] - 9389u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_0037594C; } }
L_003758F8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 9390u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st8((c.r[1].w[0] - 9390u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] - 9389u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_0037594C; } }
L_00375918:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00375920u);  if (depth < kMaxDepth) unit_009D(c, 127u, depth + 1u); else { c.pc = 0x00375660u; return; } if (c.pc != 0x00375920u) [[unlikely]] return; }
L_00375920:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037594C; } }
L_00375928:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 9389u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 22048u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0037594Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0037594Cu) [[unlikely]] return; }
L_0037594C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_00375950:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00375960:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[4].d[0] = ld8((c.r[1].w[0] - 9388u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003759B8; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], c.r[4].w[0] + 1u);  goto L_00375990; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_00375A24; } }
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_00375990:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037599Cu); st8((c.r[1].w[0] - 9388u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009D(c, 279u, depth + 1u); else { c.pc = 0x00376B80u; return; } if (c.pc != 0x0037599Cu) [[unlikely]] return; }
L_0037599C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[4], c.r[2].w[0] - 6576u);
    set32(c.r[6], 0u + 52u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003759B0u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x003759B0u) [[unlikely]] return; }
L_003759B0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    st8((c.r[1].w[0] - 6570u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_003759B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003759C4u); set32(c.r[4], c.r[2].w[0] - 6576u);  if (depth < kMaxDepth) unit_0095(c, 175u, depth + 1u); else { c.pc = 0x00355890u; return; } if (c.pc != 0x003759C4u) [[unlikely]] return; }
L_003759C4:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    set32(c.r[4], 0u + 1u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00375A10; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_003759EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00375A20; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_003759EC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st8((c.r[1].w[0] - 9390u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st8((c.r[1].w[0] - 9389u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st8((c.r[1].w[0] - 9388u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] - 9387u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00375A20; } }
L_00375A10:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st8((c.r[1].w[0] - 9390u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st8((c.r[1].w[0] - 9388u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_00375A20:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_00375A24:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00375A30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[4].d[0] = ld8((c.r[1].w[0] - 9388u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00375A8C; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], c.r[4].w[0] + 1u);  goto L_00375A60; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_00375AF8; } }
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_00375A60:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00375A6Cu); st8((c.r[1].w[0] - 9388u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009D(c, 279u, depth + 1u); else { c.pc = 0x00376B80u; return; } if (c.pc != 0x00375A6Cu) [[unlikely]] return; }
L_00375A6C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[4], c.r[2].w[0] - 6576u);
    set32(c.r[6], 0u + 52u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00375A80u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x00375A80u) [[unlikely]] return; }
L_00375A80:
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    st8((c.r[1].w[0] - 6570u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00375A8C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00375A98u); set32(c.r[4], c.r[2].w[0] - 6576u);  if (depth < kMaxDepth) unit_0095(c, 175u, depth + 1u); else { c.pc = 0x00355890u; return; } if (c.pc != 0x00375A98u) [[unlikely]] return; }
L_00375A98:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    set32(c.r[4], 0u + 1u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00375AE4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_00375AC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00375AF4; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_00375AC0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st8((c.r[1].w[0] - 9390u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st8((c.r[1].w[0] - 9389u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st8((c.r[1].w[0] - 9388u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] - 9387u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00375AF4; } }
L_00375AE4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st8((c.r[1].w[0] - 9390u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st8((c.r[1].w[0] - 9388u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_00375AF4:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_00375AF8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00375B00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[4].d[0] = ld8((c.r[1].w[0] - 9388u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00375B50; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], c.r[4].w[0] + 1u);  goto L_00375B30; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_00375B88; } }
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_00375B30:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00375B3Cu); st8((c.r[1].w[0] - 9388u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009D(c, 279u, depth + 1u); else { c.pc = 0x00376B80u; return; } if (c.pc != 0x00375B3Cu) [[unlikely]] return; }
L_00375B3C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] - 9424u);
    set32(c.r[6], 0u + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00375B50u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x00375B50u) [[unlikely]] return; }
L_00375B50:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 9391u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st8((c.r[1].w[0] - 9391u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st8((c.r[1].w[0] - 9390u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st8((c.r[1].w[0] - 9389u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st8((c.r[1].w[0] - 9388u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st8((c.r[1].w[0] - 9387u), static_cast<std::uint8_t>(0u));
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 14;
L_00375B88:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00375B90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[4].d[0] = ld8((c.r[1].w[0] - 9388u));
    set32(c.r[3], 0u + 2u);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00375C3C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00375BEC; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], c.r[4].w[0] + 1u);  goto L_00375BCC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_00375C58; } }
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_00375BCC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00375BD8u); st8((c.r[1].w[0] - 9388u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009D(c, 279u, depth + 1u); else { c.pc = 0x00376B80u; return; } if (c.pc != 0x00375BD8u) [[unlikely]] return; }
L_00375BD8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[4], c.r[2].w[0] - 6576u);
    set32(c.r[6], 0u + 52u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00375BECu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x00375BECu) [[unlikely]] return; }
L_00375BEC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00375BF8u); set32(c.r[4], c.r[2].w[0] - 6576u);  if (depth < kMaxDepth) unit_0095(c, 366u, depth + 1u); else { c.pc = 0x003574A0u; return; } if (c.pc != 0x00375BF8u) [[unlikely]] return; }
L_00375BF8:
    c.r[4].d[0] = c.r[2].d[0] << 48;
    set32(c.r[3], 0u - 1u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00375C54; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00375C1C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00375C54; } }
L_00375C1C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 9388u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00375C34u); st8((c.r[1].w[0] - 9388u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009D(c, 279u, depth + 1u); else { c.pc = 0x00376B80u; return; } if (c.pc != 0x00375C34u) [[unlikely]] return; }
L_00375C34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00375C54; } }
L_00375C3C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st8((c.r[1].w[0] - 9390u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00375C54u); st8((c.r[1].w[0] - 9388u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_009E(c, 38u, depth + 1u); else { c.pc = 0x00378520u; return; } if (c.pc != 0x00375C54u) [[unlikely]] return; }
L_00375C54:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_00375C58:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00375C60:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 9391u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st8((c.r[1].w[0] - 9391u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st8((c.r[1].w[0] - 9390u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st8((c.r[1].w[0] - 9389u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[1].w[0] - 9388u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_00375C90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[4].d[0] = ld8((c.r[1].w[0] - 9390u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00375CE0; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], c.r[4].w[0] + 1u);  goto L_00375CC0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_00375D78; } }
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_00375CC0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00375CCCu); st8((c.r[1].w[0] - 9390u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009D(c, 279u, depth + 1u); else { c.pc = 0x00376B80u; return; } if (c.pc != 0x00375CCCu) [[unlikely]] return; }
L_00375CCC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] - 9424u);
    set32(c.r[6], 0u + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00375CE0u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x00375CE0u) [[unlikely]] return; }
L_00375CE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00375CECu); set32(c.r[4], c.r[2].w[0] - 9424u);  if (depth < kMaxDepth) unit_0095(c, 19u, depth + 1u); else { c.pc = 0x003542D0u; return; } if (c.pc != 0x00375CECu) [[unlikely]] return; }
L_00375CEC:
    c.r[4].d[0] = c.r[2].d[0] << 48;
    set32(c.r[3], 0u + 2u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00375D4C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00375D14; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00375D74; } }
L_00375D14:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 9391u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st8((c.r[1].w[0] - 9391u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st8((c.r[1].w[0] - 9390u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st8((c.r[1].w[0] - 9389u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st8((c.r[1].w[0] - 9388u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] - 9387u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00375D74; } }
L_00375D4C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st8((c.r[1].w[0] - 9391u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st8((c.r[1].w[0] - 9390u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st8((c.r[1].w[0] - 9389u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st8((c.r[1].w[0] - 9388u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st8((c.r[1].w[0] - 9387u), static_cast<std::uint8_t>(0u));
    c.budget -= 10;
L_00375D74:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_00375D78:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00375D80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[8].d[0] = ld8((c.r[1].w[0] - 9388u));
    set32(c.r[3], 0u + 14u);
    c.budget -= 7;
    { const bool t = c.r[8].d[0] == c.r[3].d[0];  if (t) { goto L_00376610; } }
    set32(c.r[5], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == c.r[5].d[0];  if (t) { goto L_00376384; } }
    set32(c.r[7], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == c.r[7].d[0];  if (t) { goto L_0037621C; } }
    set32(c.r[6], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == c.r[6].d[0];  if (t) { goto L_003760EC; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == c.r[5].d[0];  if (t) { goto L_003760DC; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == c.r[4].d[0];  if (t) { goto L_00375F28; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_00375DE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0037682C; } }
L_00375DE8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 9387u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[7].d[0];  if (t) { goto L_00375EE0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_00375E84; } }
    c.budget -= 2;
    if (c.r[3].d[0] == c.r[5].d[0]) { set32(c.r[2], c.r[3].w[0] + 1u);  goto L_00375E68; }
    c.budget -= 2;
    if (c.r[3].d[0] == c.r[4].d[0]) { set32(c.r[2], c.r[3].w[0] + 1u);  goto L_00375E3C; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], c.r[3].w[0] + 1u);  goto L_00375E24; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00376828; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_00375E24:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00375E30u); st8((c.r[1].w[0] - 9387u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0096(c, 186u, depth + 1u); else { c.pc = 0x0035A530u; return; } if (c.pc != 0x00375E30u) [[unlikely]] return; }
L_00375E30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 25732u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00376828; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_00375E3C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00375E48u); st8((c.r[1].w[0] - 9387u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009D(c, 279u, depth + 1u); else { c.pc = 0x00376B80u; return; } if (c.pc != 0x00375E48u) [[unlikely]] return; }
L_00375E48:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] - 9424u);
    set32(c.r[6], 0u + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00375E5Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x00375E5Cu) [[unlikely]] return; }
L_00375E5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00376828; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_00375E68:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00375E74u); st8((c.r[1].w[0] - 9387u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009E(c, 31u, depth + 1u); else { c.pc = 0x00378420u; return; } if (c.pc != 0x00375E74u) [[unlikely]] return; }
L_00375E74:
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00376828; } }
L_00375E84:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 9384u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 9384u)));
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_00376828; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00375EB0u);  if (depth < kMaxDepth) unit_009E(c, 38u, depth + 1u); else { c.pc = 0x00378520u; return; } if (c.pc != 0x00375EB0u) [[unlikely]] return; }
L_00375EB0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 9387u));
    set32(c.r[4], 0u + 30u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00375ED0u); st8((c.r[1].w[0] - 9387u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009E(c, 24u, depth + 1u); else { c.pc = 0x003783B0u; return; } if (c.pc != 0x00375ED0u) [[unlikely]] return; }
L_00375ED0:
    set32(c.r[3], 0u + 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00376828; } }
L_00375EE0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 9384u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_00376828; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 9388u));
    st8((c.r[28].w[0] - 25328u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st8((c.r[1].w[0] - 9388u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] - 9387u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00376828; } }
L_00375F28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00375F30u);  if (depth < kMaxDepth) unit_0096(c, 205u, depth + 1u); else { c.pc = 0x0035A750u; return; } if (c.pc != 0x00375F30u) [[unlikely]] return; }
L_00375F30:
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[3], c.r[3].w[0] + 31u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(35ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00376828; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[4].w[0] - 21408u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00374000u < 16384u) { entry = entries_009D[(t - 0x00374000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00375F64:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 9388u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00375F7Cu); st8((c.r[1].w[0] - 9388u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0096(c, 207u, depth + 1u); else { c.pc = 0x0035A790u; return; } if (c.pc != 0x00375F7Cu) [[unlikely]] return; }
L_00375F7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00376828; } }
L_00375F84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00375F8Cu); set32(c.r[4], 0u + 37u);  if (depth < kMaxDepth) unit_009D(c, 254u, depth + 1u); else { c.pc = 0x00376840u; return; } if (c.pc != 0x00375F8Cu) [[unlikely]] return; }
L_00375F8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00376828; } }
L_00375F94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00375F9Cu); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_009D(c, 254u, depth + 1u); else { c.pc = 0x00376840u; return; } if (c.pc != 0x00375F9Cu) [[unlikely]] return; }
L_00375F9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00376828; } }
L_00375FA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00375FACu); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_009D(c, 254u, depth + 1u); else { c.pc = 0x00376840u; return; } if (c.pc != 0x00375FACu) [[unlikely]] return; }
L_00375FAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00376828; } }
L_00375FB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00375FBCu); set32(c.r[4], 0u + 10u);  if (depth < kMaxDepth) unit_009D(c, 254u, depth + 1u); else { c.pc = 0x00376840u; return; } if (c.pc != 0x00375FBCu) [[unlikely]] return; }
L_00375FBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00376828; } }
L_00375FC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00375FCCu); set32(c.r[4], 0u + 37u);  if (depth < kMaxDepth) unit_009D(c, 254u, depth + 1u); else { c.pc = 0x00376840u; return; } if (c.pc != 0x00375FCCu) [[unlikely]] return; }
L_00375FCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00376828; } }
L_00375FD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00375FDCu); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_009D(c, 254u, depth + 1u); else { c.pc = 0x00376840u; return; } if (c.pc != 0x00375FDCu) [[unlikely]] return; }
L_00375FDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00376828; } }
L_00375FE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00375FECu); set32(c.r[4], 0u + 7u);  if (depth < kMaxDepth) unit_009D(c, 254u, depth + 1u); else { c.pc = 0x00376840u; return; } if (c.pc != 0x00375FECu) [[unlikely]] return; }
L_00375FEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00376828; } }
L_00375FF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00375FFCu); set32(c.r[4], 0u + 75u);  if (depth < kMaxDepth) unit_009D(c, 259u, depth + 1u); else { c.pc = 0x003768C0u; return; } if (c.pc != 0x00375FFCu) [[unlikely]] return; }
L_00375FFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00376828; } }
L_00376004:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037600Cu);  if (depth < kMaxDepth) unit_0096(c, 185u, depth + 1u); else { c.pc = 0x0035A520u; return; } if (c.pc != 0x0037600Cu) [[unlikely]] return; }
L_0037600C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00376828; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037601Cu);  if (depth < kMaxDepth) unit_009D(c, 279u, depth + 1u); else { c.pc = 0x00376B80u; return; } if (c.pc != 0x0037601Cu) [[unlikely]] return; }
L_0037601C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00376024u);  if (depth < kMaxDepth) unit_009D(c, 128u, depth + 1u); else { c.pc = 0x00375670u; return; } if (c.pc != 0x00376024u) [[unlikely]] return; }
L_00376024:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00376828; } }
L_0037602C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00376034u); set32(c.r[4], 0u + 68u);  if (depth < kMaxDepth) unit_009D(c, 254u, depth + 1u); else { c.pc = 0x00376840u; return; } if (c.pc != 0x00376034u) [[unlikely]] return; }
L_00376034:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00376828; } }
L_0037603C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00376044u); set32(c.r[4], 0u + 79u);  if (depth < kMaxDepth) unit_009D(c, 254u, depth + 1u); else { c.pc = 0x00376840u; return; } if (c.pc != 0x00376044u) [[unlikely]] return; }
L_00376044:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00376828; } }
L_0037604C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00376054u);  if (depth < kMaxDepth) unit_009D(c, 129u, depth + 1u); else { c.pc = 0x00375680u; return; } if (c.pc != 0x00376054u) [[unlikely]] return; }
L_00376054:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00376828; } }
L_0037605C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], 0u + 14u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st8((c.r[1].w[0] - 9388u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] - 9387u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00376828; } }
L_0037607C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00376084u); set32(c.r[4], 0u + 41u);  if (depth < kMaxDepth) unit_009D(c, 259u, depth + 1u); else { c.pc = 0x003768C0u; return; } if (c.pc != 0x00376084u) [[unlikely]] return; }
L_00376084:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00376828; } }
L_0037608C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00376094u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_009D(c, 259u, depth + 1u); else { c.pc = 0x003768C0u; return; } if (c.pc != 0x00376094u) [[unlikely]] return; }
L_00376094:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00376828; } }
L_0037609C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003760A4u); set32(c.r[4], 0u + 80u);  if (depth < kMaxDepth) unit_009D(c, 259u, depth + 1u); else { c.pc = 0x003768C0u; return; } if (c.pc != 0x003760A4u) [[unlikely]] return; }
L_003760A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00376828; } }
L_003760AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003760B4u); set32(c.r[4], 0u + 54u);  if (depth < kMaxDepth) unit_009D(c, 259u, depth + 1u); else { c.pc = 0x003768C0u; return; } if (c.pc != 0x003760B4u) [[unlikely]] return; }
L_003760B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00376828; } }
L_003760BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003760C4u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009D(c, 260u, depth + 1u); else { c.pc = 0x003768E0u; return; } if (c.pc != 0x003760C4u) [[unlikely]] return; }
L_003760C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00376828; } }
L_003760CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003760D4u); set32(c.r[4], 0u + 43u);  if (depth < kMaxDepth) unit_009D(c, 260u, depth + 1u); else { c.pc = 0x003768E0u; return; } if (c.pc != 0x003760D4u) [[unlikely]] return; }
L_003760D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00376828; } }
L_003760DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003760E4u);  if (depth < kMaxDepth) unit_0096(c, 208u, depth + 1u); else { c.pc = 0x0035A7A0u; return; } if (c.pc != 0x003760E4u) [[unlikely]] return; }
L_003760E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00376828; } }
L_003760EC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[4].d[0] = ld8((c.r[1].w[0] - 9387u));
    set32(c.r[3], 0u + 2u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003761E4; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00376158; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0037611C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00376828; } }
L_0037611C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00376124u);  if (depth < kMaxDepth) unit_0096(c, 185u, depth + 1u); else { c.pc = 0x0035A520u; return; } if (c.pc != 0x00376124u) [[unlikely]] return; }
L_00376124:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00376828; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 9387u));
    set32(c.r[2], 0u + 900u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st8((c.r[1].w[0] - 9387u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00376150u); st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009E(c, 31u, depth + 1u); else { c.pc = 0x00378420u; return; } if (c.pc != 0x00376150u) [[unlikely]] return; }
L_00376150:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00376828; } }
L_00376158:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 9384u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[1].d[0] = c.r[3].sd[0] < 541ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00376828; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 9384u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_003761B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003761ACu); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x003761ACu) [[unlikely]] return; }
L_003761AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00376828; } }
L_003761B4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 9387u));
    set32(c.r[5], 0u + 20u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st8((c.r[1].w[0] - 9387u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003761DCu); st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[5].w[0]));  if (depth < kMaxDepth) unit_009E(c, 30u, depth + 1u); else { c.pc = 0x00378410u; return; } if (c.pc != 0x003761DCu) [[unlikely]] return; }
L_003761DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00376828; } }
L_003761E4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 9384u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_00376828; } }
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00376214u); st8((c.r[28].w[0] - 25732u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0096(c, 263u, depth + 1u); else { c.pc = 0x0035B180u; return; } if (c.pc != 0x00376214u) [[unlikely]] return; }
L_00376214:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00376828; } }
L_0037621C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[4].d[0] = ld8((c.r[1].w[0] - 9387u));
    set32(c.r[3], 0u + 2u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00376348; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_00376294; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0xFF000000u);  if (t) { goto L_00376250; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00376828; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 1;
L_00376250:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00376258u);  if (depth < kMaxDepth) unit_009E(c, 29u, depth + 1u); else { c.pc = 0x00378400u; return; } if (c.pc != 0x00376258u) [[unlikely]] return; }
L_00376258:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 9387u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00376270u); st8((c.r[1].w[0] - 9387u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009D(c, 279u, depth + 1u); else { c.pc = 0x00376B80u; return; } if (c.pc != 0x00376270u) [[unlikely]] return; }
L_00376270:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00376278u);  if (depth < kMaxDepth) unit_009D(c, 283u, depth + 1u); else { c.pc = 0x00376BE0u; return; } if (c.pc != 0x00376278u) [[unlikely]] return; }
L_00376278:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037628Cu); c.r[4].d[0] = ld8((c.r[1].w[0] - 9368u));  if (depth < kMaxDepth) unit_0094(c, 199u, depth + 1u); else { c.pc = 0x00352520u; return; } if (c.pc != 0x0037628Cu) [[unlikely]] return; }
L_0037628C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00376828; } }
L_00376294:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 9384u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 9384u)));
    c.r[3].d[0] = c.r[4].sd[0] < 600ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[4].sd[0] < 60ll ? 1ull : 0ull;  if (t) { goto L_003762F0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 9387u));
    set32(c.r[5], 0u + 20u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st8((c.r[1].w[0] - 9387u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003762E4u); st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[5].w[0]));  if (depth < kMaxDepth) unit_009E(c, 30u, depth + 1u); else { c.pc = 0x00378410u; return; } if (c.pc != 0x003762E4u) [[unlikely]] return; }
L_003762E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00376828; } }
    c.r[3].d[0] = c.r[4].sd[0] < 60ll ? 1ull : 0ull;
    c.budget -= 1;
L_003762F0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00376828; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00376300u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x00376300u) [[unlikely]] return; }
L_00376300:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00376318; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00376310u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x00376310u) [[unlikely]] return; }
L_00376310:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00376828; } }
L_00376318:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 9387u));
    set32(c.r[5], 0u + 20u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st8((c.r[1].w[0] - 9387u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00376340u); st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[5].w[0]));  if (depth < kMaxDepth) unit_009E(c, 30u, depth + 1u); else { c.pc = 0x00378410u; return; } if (c.pc != 0x00376340u) [[unlikely]] return; }
L_00376340:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00376828; } }
L_00376348:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 9384u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_00376828; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00376374u);  if (depth < kMaxDepth) unit_009D(c, 279u, depth + 1u); else { c.pc = 0x00376B80u; return; } if (c.pc != 0x00376374u) [[unlikely]] return; }
L_00376374:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037637Cu);  if (depth < kMaxDepth) unit_009D(c, 128u, depth + 1u); else { c.pc = 0x00375670u; return; } if (c.pc != 0x0037637Cu) [[unlikely]] return; }
L_0037637C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00376828; } }
L_00376384:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[4].d[0] = ld8((c.r[1].w[0] - 9387u));
    set32(c.r[3], 0u + 4u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_003765C4; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_00376578; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003764F0; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_0037643C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003763CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00376828; } }
L_003763CC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 9368u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0xFF000000u);  if (t) { goto L_003763F8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003763E8u); st8((c.r[1].w[0] - 9387u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_009D(c, 279u, depth + 1u); else { c.pc = 0x00376B80u; return; } if (c.pc != 0x003763E8u) [[unlikely]] return; }
L_003763E8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(0u));  if (t) { goto L_00376828; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 1;
L_003763F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00376400u);  if (depth < kMaxDepth) unit_009E(c, 29u, depth + 1u); else { c.pc = 0x00378400u; return; } if (c.pc != 0x00376400u) [[unlikely]] return; }
L_00376400:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 9387u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00376418u); st8((c.r[1].w[0] - 9387u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009D(c, 279u, depth + 1u); else { c.pc = 0x00376B80u; return; } if (c.pc != 0x00376418u) [[unlikely]] return; }
L_00376418:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00376420u);  if (depth < kMaxDepth) unit_009D(c, 283u, depth + 1u); else { c.pc = 0x00376BE0u; return; } if (c.pc != 0x00376420u) [[unlikely]] return; }
L_00376420:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00376434u); c.r[4].d[0] = ld8((c.r[1].w[0] - 9368u));  if (depth < kMaxDepth) unit_0094(c, 199u, depth + 1u); else { c.pc = 0x00352520u; return; } if (c.pc != 0x00376434u) [[unlikely]] return; }
L_00376434:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00376828; } }
L_0037643C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 9384u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 9384u)));
    c.r[3].d[0] = c.r[4].sd[0] < 480ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[4].sd[0] < 60ll ? 1ull : 0ull;  if (t) { goto L_00376498; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 9387u));
    set32(c.r[5], 0u + 20u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st8((c.r[1].w[0] - 9387u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037648Cu); st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[5].w[0]));  if (depth < kMaxDepth) unit_009E(c, 30u, depth + 1u); else { c.pc = 0x00378410u; return; } if (c.pc != 0x0037648Cu) [[unlikely]] return; }
L_0037648C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00376828; } }
    c.r[3].d[0] = c.r[4].sd[0] < 60ll ? 1ull : 0ull;
    c.budget -= 1;
L_00376498:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00376828; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003764A8u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x003764A8u) [[unlikely]] return; }
L_003764A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003764C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003764B8u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x003764B8u) [[unlikely]] return; }
L_003764B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00376828; } }
L_003764C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 9387u));
    set32(c.r[5], 0u + 20u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st8((c.r[1].w[0] - 9387u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003764E8u); st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[5].w[0]));  if (depth < kMaxDepth) unit_009E(c, 30u, depth + 1u); else { c.pc = 0x00378410u; return; } if (c.pc != 0x003764E8u) [[unlikely]] return; }
L_003764E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00376828; } }
L_003764F0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 9384u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_00376828; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037651Cu);  if (depth < kMaxDepth) unit_0096(c, 178u, depth + 1u); else { c.pc = 0x0035A410u; return; } if (c.pc != 0x0037651Cu) [[unlikely]] return; }
L_0037651C:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0037655C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00376544; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00376828; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00376828; } }
L_00376544:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 9387u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] - 9387u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00376828; } }
L_0037655C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 9387u));
    set32(c.r[3], c.r[3].w[0] + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] - 9387u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00376828; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_00376578:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st8((c.r[1].w[0] - 9392u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st8((c.r[1].w[0] - 9391u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st8((c.r[1].w[0] - 9390u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st8((c.r[1].w[0] - 9389u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st8((c.r[1].w[0] - 9388u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st8((c.r[28].w[0] - 25740u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 25744u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 25748u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 25776u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 25736u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 18;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] - 9387u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00376828; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_003765C4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st8((c.r[1].w[0] - 9392u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st8((c.r[1].w[0] - 9391u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st8((c.r[1].w[0] - 9390u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st8((c.r[1].w[0] - 9389u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st8((c.r[1].w[0] - 9388u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st8((c.r[28].w[0] - 25744u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 25748u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 25776u), static_cast<std::uint8_t>(0u));
    st8((c.r[1].w[0] - 9387u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 25736u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 25740u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00376828; } }
L_00376610:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[4].d[0] = ld8((c.r[1].w[0] - 9387u));
    set32(c.r[3], 0u + 4u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003767B4; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00376758; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], c.r[28].w[0] - 25792u);  goto L_003766C8; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00376690; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], c.r[4].w[0] + 1u);  goto L_0037665C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00376828; } }
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_0037665C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00376668u); st8((c.r[1].w[0] - 9387u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009D(c, 279u, depth + 1u); else { c.pc = 0x00376B80u; return; } if (c.pc != 0x00376668u) [[unlikely]] return; }
L_00376668:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00376670u);  if (depth < kMaxDepth) unit_009D(c, 283u, depth + 1u); else { c.pc = 0x00376BE0u; return; } if (c.pc != 0x00376670u) [[unlikely]] return; }
L_00376670:
    set32(c.r[5], c.r[28].w[0] - 25792u);
    set32(c.r[4], 0u + 78u);
    st16((c.r[28].w[0] - 25788u), static_cast<std::uint16_t>(0u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00376684u); st16((c.r[28].w[0] - 25792u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0094(c, 201u, depth + 1u); else { c.pc = 0x00352570u; return; } if (c.pc != 0x00376684u) [[unlikely]] return; }
L_00376684:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00376690u); c.r[4].sd[0] = static_cast<std::int32_t>(0xFF000000u);  if (depth < kMaxDepth) unit_009E(c, 29u, depth + 1u); else { c.pc = 0x00378400u; return; } if (c.pc != 0x00376690u) [[unlikely]] return; }
L_00376690:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 25788u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[28].w[0] - 25788u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[3].d[0] = c.r[3].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00376828; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 9387u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st8((c.r[1].w[0] - 9387u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[28].w[0] - 25792u);
    c.budget -= 6;
L_003766C8:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003766D4u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_009D(c, 305u, depth + 1u); else { c.pc = 0x00377240u; return; } if (c.pc != 0x003766D4u) [[unlikely]] return; }
L_003766D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003766DCu); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x003766DCu) [[unlikely]] return; }
L_003766DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 64u);  if (t) { goto L_00376720; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], 0u + 4u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003766FCu); st8((c.r[2].w[0] + 5511u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x003766FCu) [[unlikely]] return; }
L_003766FC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 9387u));
    set32(c.r[4], 0u + 16u);
    st16((c.r[28].w[0] - 25788u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] - 9387u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00376828; } }
    set32(c.r[4], 0u + 64u);
    c.budget -= 1;
L_00376720:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00376728u);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x00376728u) [[unlikely]] return; }
L_00376728:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00376828; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 25792u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00376828; } }
    set32(c.r[2], 0u + 1u);
    set32(c.r[5], 0u + 54u);
    st16((c.r[28].w[0] - 25792u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00376750u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x00376750u) [[unlikely]] return; }
L_00376750:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00376828; } }
L_00376758:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 25788u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[28].w[0] - 25788u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_00376828; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 25792u)));
    set32(c.r[3], c.r[4].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st8((c.r[1].w[0] - 9387u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[5].w[0]));  if (t) { goto L_003767A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037679Cu); c.r[4].sd[0] = static_cast<std::int32_t>(0xFF000000u);  if (depth < kMaxDepth) unit_009E(c, 30u, depth + 1u); else { c.pc = 0x00378410u; return; } if (c.pc != 0x0037679Cu) [[unlikely]] return; }
L_0037679C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00376828; } }
L_003767A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003767ACu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 30u, depth + 1u); else { c.pc = 0x00378410u; return; } if (c.pc != 0x003767ACu) [[unlikely]] return; }
L_003767AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00376828; } }
L_003767B4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 9384u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_00376828; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003767E0u);  if (depth < kMaxDepth) unit_009D(c, 279u, depth + 1u); else { c.pc = 0x00376B80u; return; } if (c.pc != 0x003767E0u) [[unlikely]] return; }
L_003767E0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 25792u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00376820; } }
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st8((c.r[1].w[0] - 9388u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st8((c.r[28].w[0] - 25740u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 25744u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 25748u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 25752u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 25756u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 25776u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 25736u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] - 9387u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00376828; } }
L_00376820:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00376828u);  if (depth < kMaxDepth) unit_009D(c, 128u, depth + 1u); else { c.pc = 0x00375670u; return; } if (c.pc != 0x00376828u) [[unlikely]] return; }
L_00376828:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_0037682C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00376840:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[28].w[0] - 25736u));
    set32(c.r[2], 0u + 21u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_00376864; } }
    set32(c.r[2], 0u + 3u);
    st8((c.r[28].w[0] - 25968u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00376864:
    set32(c.r[2], 0u + 3u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st8((c.r[1].w[0] - 9388u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st8((c.r[1].w[0] - 9387u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 600u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00376888u); st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009D(c, 279u, depth + 1u); else { c.pc = 0x00376B80u; return; } if (c.pc != 0x00376888u) [[unlikely]] return; }
L_00376888:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00376890u);  if (depth < kMaxDepth) unit_009D(c, 283u, depth + 1u); else { c.pc = 0x00376BE0u; return; } if (c.pc != 0x00376890u) [[unlikely]] return; }
L_00376890:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00376898u); c.r[4].d[0] = c.r[16].d[0] & 255ull;  if (depth < kMaxDepth) unit_0094(c, 199u, depth + 1u); else { c.pc = 0x00352520u; return; } if (c.pc != 0x00376898u) [[unlikely]] return; }
L_00376898:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003768A4u); c.r[4].sd[0] = static_cast<std::int32_t>(0xFF000000u);  if (depth < kMaxDepth) unit_009E(c, 29u, depth + 1u); else { c.pc = 0x00378400u; return; } if (c.pc != 0x003768A4u) [[unlikely]] return; }
L_003768A4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003768C0:
    set32(c.r[3], 0u + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st8((c.r[1].w[0] - 9388u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st8((c.r[1].w[0] - 9387u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[1].w[0] - 9368u), static_cast<std::uint8_t>(c.r[4].w[0]));  c.pc = t; return; }
L_003768E0:
    set32(c.r[3], 0u + 5u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st8((c.r[1].w[0] - 9388u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st8((c.r[1].w[0] - 9387u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[1].w[0] - 9368u), static_cast<std::uint8_t>(c.r[4].w[0]));  c.pc = t; return; }
L_00376900:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.r[4].d[0] = ld16((c.r[1].w[0] + 3344u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.r[3].d[0] = ld16((c.r[1].w[0] + 3346u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st16((c.r[1].w[0] - 9440u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st16((c.r[1].w[0] - 9438u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 9438u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 9440u)));
    c.r[4].d[0] = ~(c.r[4].d[0] | 0ull);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[1].w[0] - 9436u), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00376950:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00376960:
    c.r[3].d[0] = c.r[5].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00376A64; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], c.r[5].w[0] - 21264u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00374000u < 16384u) { entry = entries_009D[(t - 0x00374000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00376990:
    c.r[3].d[0] = c.r[6].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[5], c.r[3].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] + 22064u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 40u), c.f[0]);  if (t) { goto L_00376A64; } }
L_003769B4:
    c.r[3].d[0] = c.r[6].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[5], c.r[3].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] + 22240u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 40u), c.f[0]);  if (t) { goto L_00376A64; } }
L_003769D8:
    c.r[3].d[0] = c.r[6].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[5], c.r[3].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] + 22336u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 40u), c.f[0]);  if (t) { goto L_00376A64; } }
L_003769FC:
    c.r[3].d[0] = c.r[6].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[5], c.r[3].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] + 22656u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 40u), c.f[0]);  if (t) { goto L_00376A64; } }
L_00376A20:
    c.r[3].d[0] = c.r[6].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[5], c.r[3].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] + 22752u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 40u), c.f[0]);  if (t) { goto L_00376A64; } }
L_00376A44:
    c.r[3].d[0] = c.r[6].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[5], c.r[3].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] + 22896u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[4].w[0] + 40u), c.f[0]);
    c.budget -= 8;
L_00376A64:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00376A70:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    mmi::paddub(c.r[17], c.r[6], c.r[0]);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00376A9Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0038(c, 134u, depth + 1u); else { c.pc = 0x001E1BA0u; return; } if (c.pc != 0x00376A9Cu) [[unlikely]] return; }
L_00376A9C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[2], c.r[0]);  if (t) { goto L_00376AEC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[19], c.r[0]);
    mmi::paddub(c.r[6], c.r[18], c.r[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 12u), c.r[17].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00376AD0u); st16((c.r[16].w[0] + 92u), static_cast<std::uint16_t>(c.r[19].w[0]));  if (depth < kMaxDepth) unit_0038(c, 154u, depth + 1u); else { c.pc = 0x001E1F10u; return; } if (c.pc != 0x00376AD0u) [[unlikely]] return; }
L_00376AD0:
    c.r[5].d[0] = c.r[19].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    mmi::paddub(c.r[6], c.r[18], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00376AE4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_009D(c, 263u, depth + 1u); else { c.pc = 0x00376960u; return; } if (c.pc != 0x00376AE4u) [[unlikely]] return; }
L_00376AE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[16], c.r[0]);  if (t) { goto L_00376AF0; } }
L_00376AEC:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_00376AF0:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00376B10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 132u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull; mmi::paddub(c.r[16], c.r[5], c.r[0]);  if (t) { goto L_00376B38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00376B38u);  if (depth < kMaxDepth) unit_0038(c, 55u, depth + 1u); else { c.pc = 0x001E0940u; return; } if (c.pc != 0x00376B38u) [[unlikely]] return; }
L_00376B38:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 92u)));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00376B48u); mmi::paddub(c.r[6], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0038(c, 154u, depth + 1u); else { c.pc = 0x001E1F10u; return; } if (c.pc != 0x00376B48u) [[unlikely]] return; }
L_00376B48:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 92u)));
    mmi::paddub(c.r[6], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00376B58u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_009D(c, 263u, depth + 1u); else { c.pc = 0x00376960u; return; } if (c.pc != 0x00376B58u) [[unlikely]] return; }
L_00376B58:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00376B70:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E1C80u | kUnwind; return; } [[clang::musttail]] return unit_0038(c, 138u, depth); }
L_00376B80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[28].w[0] - 25320u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 25324u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 255u);
    st8((c.r[2].w[0] + 5225u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st16((c.r[2].w[0] + 5226u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5509u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00376BB8u); st8((c.r[2].w[0] + 5508u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_009E(c, 61u, depth + 1u); else { c.pc = 0x00378660u; return; } if (c.pc != 0x00376BB8u) [[unlikely]] return; }
L_00376BB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00376BC0u);  if (depth < kMaxDepth) unit_0038(c, 128u, depth + 1u); else { c.pc = 0x001E1A70u; return; } if (c.pc != 0x00376BC0u) [[unlikely]] return; }
L_00376BC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00376BC8u);  if (depth < kMaxDepth) unit_0038(c, 38u, depth + 1u); else { c.pc = 0x001E0470u; return; } if (c.pc != 0x00376BC8u) [[unlikely]] return; }
L_00376BC8:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00376BE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 25324u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00376C14; } }
    set32(c.r[5], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] + 26960u);
    st8((c.r[28].w[0] - 25324u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00376C0Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x00376C0Cu) [[unlikely]] return; }
L_00376C0C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st32((c.r[2].w[0] + 40u), c.r[3].w[0]);
    c.budget -= 2;
L_00376C14:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00376C20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_00376C98; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00376C48u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0017(c, 229u, depth + 1u); else { c.pc = 0x0015E250u; return; } if (c.pc != 0x00376C48u) [[unlikely]] return; }
L_00376C48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00376C50u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x00376C50u) [[unlikely]] return; }
L_00376C50:
    c.f[2] = ld32((c.r[16].w[0] + 32u));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 285u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43B70000u);
    c.f[0] = c.r[2].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    c.f[12] = fp::add(c.f[0], c.f[2]);
    set32(c.r[2], c.r[2].w[0] + 23040u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x43640000u);
    c.f[0] = c.r[5].w[0];
    c.f[14] = c.r[4].w[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00376C98u); c.f[13] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x00376C98u) [[unlikely]] return; }
L_00376C98:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00376CB0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[3].d[0] = c.r[5].d[0] << 56;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].d[0] = c.r[3].sd[0] < 15ll ? 1ull : 0ull;
    c.f[21] = c.f[12];
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull; c.f[20] = c.f[13];  if (t) { goto L_00376CEC; } }
    set32(c.r[5], 0u + 14u);
    c.budget -= 1;
L_00376CEC:
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[4], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[4], c.r[3].w[0] << 1);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] + 23104u);
    set32(c.r[6], c.r[3].w[0] + c.r[4].w[0]);
    c.r[4].d[0] = c.r[5].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[17], c.r[3].w[0] + c.r[6].w[0]);
    c.r[16].d[0] = c.r[5].d[0] & 255ull;
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    c.budget -= 20;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[19], c.r[17], c.r[0]);  if (t) { goto L_00376D68; } }
L_00376D3C:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 2u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] + 27680u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00376D50u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x00376D50u) [[unlikely]] return; }
L_00376D50:
    st32((c.r[2].w[0] + 32u), c.f[21]);
    st32((c.r[2].w[0] + 36u), c.f[20]);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[18].w[0]));
    set32(c.r[19], c.r[19].w[0] + 2u);
    set32(c.r[18], c.r[18].w[0] + 1u);
    st8((c.r[2].w[0] + 285u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.budget -= 6;
L_00376D68:
    c.r[3].d[0] = ld16((c.r[17].w[0]));
    c.r[3].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00376D3Cu | kUnwind; return; } goto L_00376D3C; } }
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00376DA0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[3].d[0] = c.r[5].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].d[0] = c.r[3].sd[0] < 15ll ? 1ull : 0ull;
    c.f[22] = c.f[12];
    c.f[21] = c.f[13];
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != 0ull; c.f[20] = c.f[14];  if (t) { goto L_00376DE0; } }
    set32(c.r[5], 0u + 14u);
    c.budget -= 1;
L_00376DE0:
    c.r[6].d[0] = c.r[4].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.r[4].d[0] = c.r[5].d[0] << 56;
    set32(c.r[3], c.r[6].w[0] << 4);
    set32(c.r[5], c.r[3].w[0] - c.r[6].w[0]);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[5], c.r[3].w[0] << 1);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] + 23296u);
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[16], c.r[3].w[0] + c.r[5].w[0]);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 19;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[18], c.r[16], c.r[0]);  if (t) { goto L_00376E60; } }
L_00376E2C:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 2u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] + 26960u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00376E40u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x00376E40u) [[unlikely]] return; }
L_00376E40:
    st32((c.r[2].w[0] + 32u), c.f[22]);
    st32((c.r[2].w[0] + 36u), c.f[21]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    set32(c.r[18], c.r[18].w[0] + 2u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.f[0] = fp::add(c.f[0], c.f[20]);
    st32((c.r[2].w[0] + 40u), c.f[0]);
    c.budget -= 8;
L_00376E60:
    c.r[3].d[0] = ld16((c.r[16].w[0]));
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00376E2Cu | kUnwind; return; } goto L_00376E2C; } }
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00376EA0:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 640u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] & 3ull;  c.pc = t; return; }
L_00376EB0:
    st8((c.r[4].w[0] + 290u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 288u), static_cast<std::uint16_t>(0u));  c.pc = t; return; }
L_00376EC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 290u)));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[16].w[0] + 288u);  if (t) { goto L_00376EE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));  if (t) { goto L_00376F0C; } }
L_00376EE8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 100u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    c.budget -= 9;
L_00376F0C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[20] = c.r[2].w[0];
    set32(c.r[2], c.r[3].w[0] + 1u);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00376F28u); set32(c.r[4], c.r[2].w[0] << 11);  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x00376F28u) [[unlikely]] return; }
L_00376F28:
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    c.f[0] = fp::add(c.f[20], c.f[0]);
    st32((c.r[16].w[0] + 108u), c.f[0]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    st32((c.r[16].w[0] + 100u), c.f[0]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00376F50:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 290u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[5], c.r[4].w[0] + 288u);  if (t) { goto L_00376FF4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00376F94; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00376F7C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00377040; } }
L_00376F7C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 2u)));
    set32(c.r[2], 0u + 16u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0037703C; } }
L_00376F94:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_00376FC8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    st32((c.r[4].w[0] + 108u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 104u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 100u), c.r[2].w[0]);  if (t) { goto L_00376FD4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_00376FC8:
    st32((c.r[4].w[0] + 108u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 104u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 100u), c.r[2].w[0]);
    c.budget -= 3;
L_00376FD4:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0037703C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 2u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00377040; } }
L_00376FF4:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_00377028; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    st32((c.r[4].w[0] + 108u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 104u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 100u), c.r[2].w[0]);  if (t) { goto L_00377034; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_00377028:
    st32((c.r[4].w[0] + 108u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 104u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 100u), c.r[2].w[0]);
    c.budget -= 3;
L_00377034:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00377040; } }
L_0037703C:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_00377040:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00377050:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 290u)));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[16].w[0] + 288u);  if (t) { goto L_00377078; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));  if (t) { goto L_003770A4; } }
L_00377078:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 2u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 108u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 104u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 100u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 96u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    c.budget -= 11;
L_003770A4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[20] = c.r[2].w[0];
    set32(c.r[2], c.r[3].w[0] + 1u);
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003770C0u); set32(c.r[4], c.r[2].w[0] << 11);  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x003770C0u) [[unlikely]] return; }
L_003770C0:
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    c.f[0] = fp::add(c.f[20], c.f[0]);
    st32((c.r[16].w[0] + 96u), c.f[0]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003770E0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 290u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[5], c.r[4].w[0] + 288u);  if (t) { goto L_00377174; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00377124; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0037710C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_003771B0; } }
L_0037710C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 2u)));
    set32(c.r[2], 0u + 16u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003771AC; } }
L_00377124:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_00377150; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 96u), c.r[2].w[0]);  if (t) { goto L_00377154; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_00377150:
    st32((c.r[4].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 1;
L_00377154:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003771AC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 2u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003771B0; } }
L_00377174:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_003771A0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 96u), c.r[2].w[0]);  if (t) { goto L_003771A4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_003771A0:
    st32((c.r[4].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 1;
L_003771A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003771B0; } }
L_003771AC:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_003771B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003771C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[2].d[0] = ld8((c.r[28].w[0] - 25312u));
    st8((c.r[28].w[0] - 25311u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[28].w[0] - 25309u));
    st8((c.r[28].w[0] - 25308u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[28].w[0] - 25309u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 25312u), static_cast<std::uint8_t>(0u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003771E8u); st8((c.r[28].w[0] - 25310u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00A6(c, 17u, depth + 1u); else { c.pc = 0x003982E0u; return; } if (c.pc != 0x003771E8u) [[unlikely]] return; }
L_003771E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00377230; } }
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    st8((c.r[28].w[0] - 25309u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[2].w[0] + 2u));
    st8((c.r[28].w[0] - 25312u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = ld8((c.r[28].w[0] - 25312u));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0037721C; } }
    c.r[3].d[0] = ld8((c.r[28].w[0] - 25311u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0037721C; } }
    st8((c.r[28].w[0] - 25310u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 1;
L_0037721C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 25308u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 25309u)));
    c.r[3].d[0] = ~(c.r[3].d[0] | 0ull);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st8((c.r[28].w[0] - 25307u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
L_00377230:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00377240:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[6].d[0] & 255ull;
    c.r[3].d[0] = c.r[16].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[16].d[0] ^ 2ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    c.budget -= 16;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[17], c.r[5], c.r[0]);  if (t) { goto L_0037728C; } }
    set32(c.r[19], 0u + 8192u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[20], 0u + 4096u);  if (t) { goto L_00377294; } }
L_0037728C:
    set32(c.r[19], 0u + 2048u);
    set32(c.r[20], 0u + 1024u);
    c.budget -= 2;
L_00377294:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037729Cu); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x0037729Cu) [[unlikely]] return; }
L_0037729C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (t) { goto L_003772B4; } }
    set32(c.r[2], 0u + 20u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[28].w[0] - 24828u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003773C0; } }
    mmi::paddub(c.r[4], c.r[20], c.r[0]);
    c.budget -= 1;
L_003772B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003772BCu);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x003772BCu) [[unlikely]] return; }
L_003772BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003772D0; } }
    set32(c.r[2], 0u + 20u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[28].w[0] - 24828u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00377338; } }
L_003772D0:
    c.r[2].d[0] = ld16((c.r[28].w[0] - 24828u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (t) { goto L_003772F0; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[28].w[0] - 24828u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00377438; } }
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 1;
L_003772F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003772F8u);  if (depth < kMaxDepth) unit_009E(c, 21u, depth + 1u); else { c.pc = 0x00378370u; return; } if (c.pc != 0x003772F8u) [[unlikely]] return; }
L_003772F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (t) { goto L_00377310; } }
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[28].w[0] - 24828u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003773C0; } }
    mmi::paddub(c.r[4], c.r[20], c.r[0]);
    c.budget -= 1;
L_00377310:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00377318u);  if (depth < kMaxDepth) unit_009E(c, 21u, depth + 1u); else { c.pc = 0x00378370u; return; } if (c.pc != 0x00377318u) [[unlikely]] return; }
L_00377318:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00377330; } }
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[28].w[0] - 24828u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00377338; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_00377330:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);  if (t) { goto L_0037743C; } }
L_00377338:
    c.r[1].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00377368; } }
    c.r[3].d[0] = ld8((c.r[18].w[0]));
    c.r[2].d[0] = c.r[17].d[0] & 255ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[3].w[0] + 1u);  if (t) { goto L_00377360; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_00377388; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_00377360:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00377388; } }
L_00377368:
    c.r[3].d[0] = ld8((c.r[18].w[0]));
    c.r[2].d[0] = c.r[17].d[0] & 255ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[3].w[0] + 1u);  if (t) { goto L_00377384; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00377438; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_00377384:
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_00377388:
    c.r[2].d[0] = c.r[16].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 43u);  if (t) { goto L_003773AC; } }
    set32(c.r[5], 0u + 43u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003773A0u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x003773A0u) [[unlikely]] return; }
L_003773A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003773B8; } }
    set32(c.r[5], 0u + 43u);
    c.budget -= 1;
L_003773AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003773B4u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x003773B4u) [[unlikely]] return; }
L_003773B4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003773B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00377438; } }
L_003773C0:
    c.r[1].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003773EC; } }
    c.r[2].d[0] = ld8((c.r[18].w[0]));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[2].w[0] - 1u);  goto L_003773E4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[17].w[0]));  if (t) { goto L_00377408; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 1;
L_003773E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00377408; } }
L_003773EC:
    c.r[2].d[0] = ld8((c.r[18].w[0]));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[2].w[0] - 1u);  goto L_00377404; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00377438; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 1;
L_00377404:
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_00377408:
    c.r[2].d[0] = c.r[16].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 43u);  if (t) { goto L_0037742C; } }
    set32(c.r[5], 0u + 43u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00377420u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x00377420u) [[unlikely]] return; }
L_00377420:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00377438; } }
    set32(c.r[5], 0u + 43u);
    c.budget -= 1;
L_0037742C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00377434u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x00377434u) [[unlikely]] return; }
L_00377434:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00377438:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0037743C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00377460:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[6].d[0] & 255ull;
    c.r[3].d[0] = c.r[16].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[16].d[0] ^ 2ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    c.budget -= 16;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[17], c.r[5], c.r[0]);  if (t) { goto L_003774AC; } }
    set32(c.r[19], 0u + 8192u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[20], 0u + 4096u);  if (t) { goto L_003774B4; } }
L_003774AC:
    set32(c.r[19], 0u + 2048u);
    set32(c.r[20], 0u + 1024u);
    c.budget -= 2;
L_003774B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003774BCu); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x003774BCu) [[unlikely]] return; }
L_003774BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (t) { goto L_003774D4; } }
    set32(c.r[2], 0u + 20u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[28].w[0] - 24832u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003775B0; } }
    mmi::paddub(c.r[4], c.r[20], c.r[0]);
    c.budget -= 1;
L_003774D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003774DCu);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x003774DCu) [[unlikely]] return; }
L_003774DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003774F0; } }
    set32(c.r[2], 0u + 20u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[28].w[0] - 24832u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00377558; } }
L_003774F0:
    c.r[2].d[0] = ld16((c.r[28].w[0] - 24832u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (t) { goto L_00377510; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[28].w[0] - 24832u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_003775FC; } }
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 1;
L_00377510:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00377518u);  if (depth < kMaxDepth) unit_009E(c, 21u, depth + 1u); else { c.pc = 0x00378370u; return; } if (c.pc != 0x00377518u) [[unlikely]] return; }
L_00377518:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (t) { goto L_00377530; } }
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[28].w[0] - 24832u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003775B0; } }
    mmi::paddub(c.r[4], c.r[20], c.r[0]);
    c.budget -= 1;
L_00377530:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00377538u);  if (depth < kMaxDepth) unit_009E(c, 21u, depth + 1u); else { c.pc = 0x00378370u; return; } if (c.pc != 0x00377538u) [[unlikely]] return; }
L_00377538:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00377550; } }
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[28].w[0] - 24832u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00377558; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_00377550:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);  if (t) { goto L_00377600; } }
L_00377558:
    c.r[1].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00377588; } }
    c.r[3].d[0] = ld8((c.r[18].w[0]));
    c.r[2].d[0] = c.r[17].d[0] & 255ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[3].w[0] + 1u);  if (t) { goto L_00377580; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_003775A8; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_00377580:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003775A8; } }
L_00377588:
    c.r[3].d[0] = ld8((c.r[18].w[0]));
    c.r[2].d[0] = c.r[17].d[0] & 255ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[3].w[0] + 1u);  if (t) { goto L_003775A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_003775FC; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_003775A4:
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_003775A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003775FC; } }
L_003775B0:
    c.r[1].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003775DC; } }
    c.r[2].d[0] = ld8((c.r[18].w[0]));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[2].w[0] - 1u);  goto L_003775D4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[17].w[0]));  if (t) { goto L_003775F8; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 1;
L_003775D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003775F8; } }
L_003775DC:
    c.r[2].d[0] = ld8((c.r[18].w[0]));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[2].w[0] - 1u);  goto L_003775F4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_003775FC; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 1;
L_003775F4:
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_003775F8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003775FC:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00377600:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00377620:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[20].d[0] = c.r[6].d[0] & 255ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[3].d[0] = c.r[20].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[20].d[0] ^ 2ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[22], c.r[4], c.r[0]);
    c.budget -= 19;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[21], c.r[5], c.r[0]);  if (t) { goto L_00377684; } }
    set32(c.r[23], 0u + 8192u);
    set32(c.r[17], 0u + 4096u);
    set32(c.r[18], 0u + 82u);
    set32(c.r[19], 0u + 81u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[28].w[0] - 24836u);  if (t) { goto L_00377698; } }
L_00377684:
    set32(c.r[23], 0u + 2048u);
    set32(c.r[17], 0u + 1024u);
    set32(c.r[18], 0u + 80u);
    set32(c.r[19], 0u + 79u);
    set32(c.r[16], c.r[28].w[0] - 24834u);
    c.budget -= 5;
L_00377698:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003776A0u); mmi::paddub(c.r[4], c.r[23], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x003776A0u) [[unlikely]] return; }
L_003776A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 20u);  if (t) { goto L_003776B8; } }
    c.r[2].d[0] = ld8((c.r[28].w[0] - 25310u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[18].d[0]; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_003776C4; } }
    set32(c.r[2], 0u + 20u);
    c.budget -= 1;
L_003776B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003777FC; } }
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_003776C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003776CCu);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x003776CCu) [[unlikely]] return; }
L_003776CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 20u);  if (t) { goto L_003776E4; } }
    c.r[2].d[0] = ld8((c.r[28].w[0] - 25310u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[19].d[0];  if (t) { goto L_003776EC; } }
    set32(c.r[2], 0u + 20u);
    c.budget -= 1;
L_003776E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00377774; } }
L_003776EC:
    c.r[2].d[0] = ld16((c.r[16].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[23], c.r[0]);  if (t) { goto L_00377714; } }
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00377874; } }
    mmi::paddub(c.r[4], c.r[23], c.r[0]);
    c.budget -= 1;
L_00377714:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037771Cu);  if (depth < kMaxDepth) unit_009E(c, 21u, depth + 1u); else { c.pc = 0x00378370u; return; } if (c.pc != 0x0037771Cu) [[unlikely]] return; }
L_0037771C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 10u);  if (t) { goto L_00377734; } }
    c.r[2].d[0] = ld8((c.r[28].w[0] - 25312u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[18].d[0]; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_00377740; } }
    set32(c.r[2], 0u + 10u);
    c.budget -= 1;
L_00377734:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003777FC; } }
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_00377740:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00377748u);  if (depth < kMaxDepth) unit_009E(c, 21u, depth + 1u); else { c.pc = 0x00378370u; return; } if (c.pc != 0x00377748u) [[unlikely]] return; }
L_00377748:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 10u);  if (t) { goto L_00377760; } }
    c.r[2].d[0] = ld8((c.r[28].w[0] - 25312u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[19].d[0]; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0037776C; } }
    set32(c.r[2], 0u + 10u);
    c.budget -= 1;
L_00377760:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00377774; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_0037776C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 128u) & ~15u, c.r[31]);  if (t) { goto L_00377878; } }
L_00377774:
    c.r[1].d[0] = c.r[20].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003777A4; } }
    c.r[3].d[0] = ld8((c.r[22].w[0]));
    c.r[2].d[0] = c.r[21].d[0] & 255ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[3].w[0] + 1u);  if (t) { goto L_0037779C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[22].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_003777C4; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_0037779C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[22].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003777C4; } }
L_003777A4:
    c.r[3].d[0] = ld8((c.r[22].w[0]));
    c.r[2].d[0] = c.r[21].d[0] & 255ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[3].w[0] + 1u);  if (t) { goto L_003777C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00377874; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_003777C0:
    st8((c.r[22].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_003777C4:
    c.r[2].d[0] = c.r[20].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 43u);  if (t) { goto L_003777E8; } }
    set32(c.r[5], 0u + 43u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003777DCu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x003777DCu) [[unlikely]] return; }
L_003777DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003777F4; } }
    set32(c.r[5], 0u + 43u);
    c.budget -= 1;
L_003777E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003777F0u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x003777F0u) [[unlikely]] return; }
L_003777F0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003777F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00377874; } }
L_003777FC:
    c.r[1].d[0] = c.r[20].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00377828; } }
    c.r[2].d[0] = ld8((c.r[22].w[0]));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[2].w[0] - 1u);  goto L_00377820; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[22].w[0]), static_cast<std::uint8_t>(c.r[21].w[0]));  if (t) { goto L_00377844; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 1;
L_00377820:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[22].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00377844; } }
L_00377828:
    c.r[2].d[0] = ld8((c.r[22].w[0]));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[2].w[0] - 1u);  goto L_00377840; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00377874; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 1;
L_00377840:
    st8((c.r[22].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_00377844:
    c.r[2].d[0] = c.r[20].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 43u);  if (t) { goto L_00377868; } }
    set32(c.r[5], 0u + 43u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037785Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x0037785Cu) [[unlikely]] return; }
L_0037785C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00377874; } }
    set32(c.r[5], 0u + 43u);
    c.budget -= 1;
L_00377868:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00377870u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x00377870u) [[unlikely]] return; }
L_00377870:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00377874:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00377878:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_003778A0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[20].d[0] = c.r[6].d[0] & 255ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[3].d[0] = c.r[20].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[20].d[0] ^ 2ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[22], c.r[4], c.r[0]);
    c.budget -= 19;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[21], c.r[5], c.r[0]);  if (t) { goto L_00377904; } }
    set32(c.r[23], 0u + 8192u);
    set32(c.r[17], 0u + 4096u);
    set32(c.r[18], 0u + 82u);
    set32(c.r[19], 0u + 81u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[28].w[0] - 24840u);  if (t) { goto L_00377918; } }
L_00377904:
    set32(c.r[23], 0u + 2048u);
    set32(c.r[17], 0u + 1024u);
    set32(c.r[18], 0u + 80u);
    set32(c.r[19], 0u + 79u);
    set32(c.r[16], c.r[28].w[0] - 24838u);
    c.budget -= 5;
L_00377918:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00377920u); mmi::paddub(c.r[4], c.r[23], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x00377920u) [[unlikely]] return; }
L_00377920:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 20u);  if (t) { goto L_00377954; } }
    c.r[3].d[0] = ld8((c.r[28].w[0] - 25310u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[18].d[0];  if (t) { goto L_00377950; } }
    set32(c.r[2], 0u + 43u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_00377960; } }
    c.r[2].d[0] = ld8((c.r[28].w[0] - 25309u));
    c.r[2].d[0] = c.r[2].d[0] & 34ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037795C; } }
L_00377950:
    set32(c.r[2], 0u + 20u);
    c.budget -= 1;
L_00377954:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00377ACC; } }
L_0037795C:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_00377960:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00377968u);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x00377968u) [[unlikely]] return; }
L_00377968:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 20u);  if (t) { goto L_0037798C; } }
    c.r[3].d[0] = ld8((c.r[28].w[0] - 25310u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[19].d[0];  if (t) { goto L_00377988; } }
    set32(c.r[2], 0u + 43u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00377994; } }
L_00377988:
    set32(c.r[2], 0u + 20u);
    c.budget -= 1;
L_0037798C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00377A44; } }
L_00377994:
    c.r[2].d[0] = ld16((c.r[16].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[23], c.r[0]);  if (t) { goto L_003779BC; } }
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00377B44; } }
    mmi::paddub(c.r[4], c.r[23], c.r[0]);
    c.budget -= 1;
L_003779BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003779C4u);  if (depth < kMaxDepth) unit_009E(c, 21u, depth + 1u); else { c.pc = 0x00378370u; return; } if (c.pc != 0x003779C4u) [[unlikely]] return; }
L_003779C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 10u);  if (t) { goto L_003779F8; } }
    c.r[3].d[0] = ld8((c.r[28].w[0] - 25312u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[18].d[0];  if (t) { goto L_003779F4; } }
    set32(c.r[2], 0u + 43u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_00377A04; } }
    c.r[2].d[0] = ld8((c.r[28].w[0] - 25309u));
    c.r[2].d[0] = c.r[2].d[0] & 34ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00377A00; } }
L_003779F4:
    set32(c.r[2], 0u + 10u);
    c.budget -= 1;
L_003779F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00377ACC; } }
L_00377A00:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_00377A04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00377A0Cu);  if (depth < kMaxDepth) unit_009E(c, 21u, depth + 1u); else { c.pc = 0x00378370u; return; } if (c.pc != 0x00377A0Cu) [[unlikely]] return; }
L_00377A0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 10u);  if (t) { goto L_00377A30; } }
    c.r[3].d[0] = ld8((c.r[28].w[0] - 25312u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[19].d[0];  if (t) { goto L_00377A2C; } }
    set32(c.r[2], 0u + 43u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00377A3C; } }
L_00377A2C:
    set32(c.r[2], 0u + 10u);
    c.budget -= 1;
L_00377A30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00377A44; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_00377A3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 128u) & ~15u, c.r[31]);  if (t) { goto L_00377B48; } }
L_00377A44:
    c.r[1].d[0] = c.r[20].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00377A74; } }
    c.r[3].d[0] = ld8((c.r[22].w[0]));
    c.r[2].d[0] = c.r[21].d[0] & 255ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[3].w[0] + 1u);  if (t) { goto L_00377A6C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[22].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_00377A94; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_00377A6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[22].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00377A94; } }
L_00377A74:
    c.r[3].d[0] = ld8((c.r[22].w[0]));
    c.r[2].d[0] = c.r[21].d[0] & 255ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[3].w[0] + 1u);  if (t) { goto L_00377A90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00377B44; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_00377A90:
    st8((c.r[22].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_00377A94:
    c.r[2].d[0] = c.r[20].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 43u);  if (t) { goto L_00377AB8; } }
    set32(c.r[5], 0u + 43u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00377AACu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x00377AACu) [[unlikely]] return; }
L_00377AAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00377AC4; } }
    set32(c.r[5], 0u + 43u);
    c.budget -= 1;
L_00377AB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00377AC0u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x00377AC0u) [[unlikely]] return; }
L_00377AC0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00377AC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00377B44; } }
L_00377ACC:
    c.r[1].d[0] = c.r[20].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00377AF8; } }
    c.r[2].d[0] = ld8((c.r[22].w[0]));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[2].w[0] - 1u);  goto L_00377AF0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[22].w[0]), static_cast<std::uint8_t>(c.r[21].w[0]));  if (t) { goto L_00377B14; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 1;
L_00377AF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[22].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00377B14; } }
L_00377AF8:
    c.r[2].d[0] = ld8((c.r[22].w[0]));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[2].w[0] - 1u);  goto L_00377B10; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00377B44; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 1;
L_00377B10:
    st8((c.r[22].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_00377B14:
    c.r[2].d[0] = c.r[20].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 43u);  if (t) { goto L_00377B38; } }
    set32(c.r[5], 0u + 43u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00377B2Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x00377B2Cu) [[unlikely]] return; }
L_00377B2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00377B44; } }
    set32(c.r[5], 0u + 43u);
    c.budget -= 1;
L_00377B38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00377B40u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x00377B40u) [[unlikely]] return; }
L_00377B40:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00377B44:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00377B48:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00377B70:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[20], c.r[4], c.r[0]);
    c.r[4].d[0] = ld8((c.r[28].w[0] - 25310u));
    set32(c.r[2], 0u + 43u);
    mmi::paddub(c.r[19], c.r[5], c.r[0]);
    mmi::paddub(c.r[18], c.r[6], c.r[0]);
    mmi::paddub(c.r[17], c.r[7], c.r[0]);
    c.budget -= 15;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; mmi::paddub(c.r[16], c.r[8], c.r[0]);  if (t) { goto L_00377BC8; } }
    c.r[2].d[0] = ld8((c.r[28].w[0] - 25309u));
    c.r[2].d[0] = c.r[2].d[0] & 34ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 43u);  if (t) { goto L_00377BCC; } }
    set32(c.r[2], 0u + 20u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[28].w[0] - 24848u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00377EB8; } }
L_00377BC8:
    set32(c.r[3], 0u + 43u);
    c.budget -= 1;
L_00377BCC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00377BE0; } }
    set32(c.r[2], 0u + 20u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[28].w[0] - 24848u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00377DF8; } }
L_00377BE0:
    c.r[2].d[0] = ld16((c.r[28].w[0] - 24848u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00377BF8; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[28].w[0] - 24848u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00377C38; } }
L_00377BF8:
    c.r[4].d[0] = ld8((c.r[28].w[0] - 25312u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[2], 0u + 43u);  if (t) { goto L_00377C24; } }
    c.r[2].d[0] = ld8((c.r[28].w[0] - 25309u));
    c.r[2].d[0] = c.r[2].d[0] & 34ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00377C20; } }
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[28].w[0] - 24848u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00377EB8; } }
L_00377C20:
    set32(c.r[2], 0u + 43u);
    c.budget -= 1;
L_00377C24:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 8192u);  if (t) { goto L_00377C3C; } }
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[28].w[0] - 24848u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00377DF8; } }
L_00377C38:
    set32(c.r[4], 0u + 8192u);
    c.budget -= 1;
L_00377C3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00377C44u);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x00377C44u) [[unlikely]] return; }
L_00377C44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 20u);  if (t) { goto L_00377C60; } }
    c.r[3].d[0] = ld8((c.r[28].w[0] - 25310u));
    set32(c.r[2], 0u + 82u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 4096u);  if (t) { goto L_00377C6C; } }
    set32(c.r[2], 0u + 20u);
    c.budget -= 1;
L_00377C60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[28].w[0] - 24846u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00377FD0; } }
    set32(c.r[4], 0u + 4096u);
    c.budget -= 1;
L_00377C6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00377C74u);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x00377C74u) [[unlikely]] return; }
L_00377C74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 20u);  if (t) { goto L_00377C90; } }
    c.r[3].d[0] = ld8((c.r[28].w[0] - 25310u));
    set32(c.r[2], 0u + 81u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00377C98; } }
    set32(c.r[2], 0u + 20u);
    c.budget -= 1;
L_00377C90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[28].w[0] - 24846u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00377F70; } }
L_00377C98:
    c.r[2].d[0] = ld16((c.r[28].w[0] - 24846u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 8192u);  if (t) { goto L_00377CB4; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[28].w[0] - 24846u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00377D10; } }
    set32(c.r[4], 0u + 8192u);
    c.budget -= 1;
L_00377CB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00377CBCu);  if (depth < kMaxDepth) unit_009E(c, 21u, depth + 1u); else { c.pc = 0x00378370u; return; } if (c.pc != 0x00377CBCu) [[unlikely]] return; }
L_00377CBC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 10u);  if (t) { goto L_00377CD8; } }
    c.r[3].d[0] = ld8((c.r[28].w[0] - 25312u));
    set32(c.r[2], 0u + 82u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 4096u);  if (t) { goto L_00377CE4; } }
    set32(c.r[2], 0u + 10u);
    c.budget -= 1;
L_00377CD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[28].w[0] - 24846u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00377FD0; } }
    set32(c.r[4], 0u + 4096u);
    c.budget -= 1;
L_00377CE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00377CECu);  if (depth < kMaxDepth) unit_009E(c, 21u, depth + 1u); else { c.pc = 0x00378370u; return; } if (c.pc != 0x00377CECu) [[unlikely]] return; }
L_00377CEC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 10u);  if (t) { goto L_00377D08; } }
    c.r[3].d[0] = ld8((c.r[28].w[0] - 25312u));
    set32(c.r[2], 0u + 81u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 2048u);  if (t) { goto L_00377D14; } }
    set32(c.r[2], 0u + 10u);
    c.budget -= 1;
L_00377D08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[28].w[0] - 24846u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00377F70; } }
L_00377D10:
    set32(c.r[4], 0u + 2048u);
    c.budget -= 1;
L_00377D14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00377D1Cu);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x00377D1Cu) [[unlikely]] return; }
L_00377D1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 20u);  if (t) { goto L_00377D38; } }
    c.r[3].d[0] = ld8((c.r[28].w[0] - 25310u));
    set32(c.r[2], 0u + 80u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 1024u);  if (t) { goto L_00377D44; } }
    set32(c.r[2], 0u + 20u);
    c.budget -= 1;
L_00377D38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[28].w[0] - 24844u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { [[clang::musttail]] return unit_009E(c, 6u, depth); } }
    set32(c.r[4], 0u + 1024u);
    c.budget -= 1;
L_00377D44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00377D4Cu);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x00377D4Cu) [[unlikely]] return; }
L_00377D4C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 20u);  if (t) { goto L_00377D68; } }
    c.r[3].d[0] = ld8((c.r[28].w[0] - 25310u));
    set32(c.r[2], 0u + 79u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00377D70; } }
    set32(c.r[2], 0u + 20u);
    c.budget -= 1;
L_00377D68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[28].w[0] - 24844u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { [[clang::musttail]] return unit_009E(c, 4u, depth); } }
L_00377D70:
    c.r[2].d[0] = ld16((c.r[28].w[0] - 24844u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 2048u);  if (t) { goto L_00377D90; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[28].w[0] - 24844u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { [[clang::musttail]] return unit_009E(c, 8u, depth); } }
    set32(c.r[4], 0u + 2048u);
    c.budget -= 1;
L_00377D90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00377D98u);  if (depth < kMaxDepth) unit_009E(c, 21u, depth + 1u); else { c.pc = 0x00378370u; return; } if (c.pc != 0x00377D98u) [[unlikely]] return; }
L_00377D98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 10u);  if (t) { goto L_00377DB4; } }
    c.r[3].d[0] = ld8((c.r[28].w[0] - 25312u));
    set32(c.r[2], 0u + 80u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 1024u);  if (t) { goto L_00377DC0; } }
    set32(c.r[2], 0u + 10u);
    c.budget -= 1;
L_00377DB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[28].w[0] - 24844u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { [[clang::musttail]] return unit_009E(c, 6u, depth); } }
    set32(c.r[4], 0u + 1024u);
    c.budget -= 1;
L_00377DC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00377DC8u);  if (depth < kMaxDepth) unit_009E(c, 21u, depth + 1u); else { c.pc = 0x00378370u; return; } if (c.pc != 0x00377DC8u) [[unlikely]] return; }
L_00377DC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 10u);  if (t) { goto L_00377DE4; } }
    c.r[3].d[0] = ld8((c.r[28].w[0] - 25312u));
    set32(c.r[2], 0u + 79u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00377DF0; } }
    set32(c.r[2], 0u + 10u);
    c.budget -= 1;
L_00377DE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[28].w[0] - 24844u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { [[clang::musttail]] return unit_009E(c, 4u, depth); } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_00377DF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);  if (t) { [[clang::musttail]] return unit_009E(c, 9u, depth); } }
L_00377DF8:
    c.r[3].d[0] = c.r[18].d[0] & 255ull;
    c.r[2].d[0] = c.r[17].d[0] & 255ull;
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    set32(c.r[6], c.r[2].w[0] - 1u);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    mmi::paddub(c.r[4], c.r[3], c.r[0]);
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 12;
L_00377E28:
    c.r[2].d[0] = c.r[2].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] + 1u);  if (t) { goto L_00377E40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[3], c.r[0], c.r[0]);  if (t) { goto L_00377E48; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_00377E40:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 2;
L_00377E48:
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_00377E74; } }
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[1].d[0] = c.r[6].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] & 255ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00377E28u | kUnwind; return; } goto L_00377E28; } }
    c.r[2].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 2;
L_00377E74:
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[2].d[0] = c.r[3].d[0] & 1ull;  if (t) { goto L_00377E8C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { [[clang::musttail]] return unit_009E(c, 8u, depth); } }
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 1;
L_00377E8C:
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));  if (t) { goto L_00377EA0; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_00377EA0:
    set32(c.r[5], 0u + 43u);
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00377EB0u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x00377EB0u) [[unlikely]] return; }
L_00377EB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { [[clang::musttail]] return unit_009E(c, 8u, depth); } }
L_00377EB8:
    c.r[3].d[0] = c.r[18].d[0] & 255ull;
    c.r[2].d[0] = c.r[17].d[0] & 255ull;
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    set32(c.r[5], c.r[2].w[0] - 1u);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    mmi::paddub(c.r[7], c.r[4], c.r[0]);
    c.r[3].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 12;
L_00377EE8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[2], c.r[4].w[0] - 1u);  if (t) { goto L_00377EFC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[4], c.r[3], c.r[0]);  if (t) { goto L_00377F00; } }
    set32(c.r[2], c.r[4].w[0] - 1u);
    c.budget -= 1;
L_00377EFC:
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_00377F00:
    c.r[2].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[7].d[0] & 255ull;  if (t) { goto L_00377F2C; } }
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[1].d[0] = c.r[5].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00377EE8u | kUnwind; return; } goto L_00377EE8; } }
    c.r[2].d[0] = c.r[7].d[0] & 255ull;
    c.budget -= 2;
L_00377F2C:
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[2].d[0] = c.r[3].d[0] & 1ull;  if (t) { goto L_00377F44; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { [[clang::musttail]] return unit_009E(c, 8u, depth); } }
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 1;
L_00377F44:
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));  if (t) { goto L_00377F58; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_00377F58:
    set32(c.r[5], 0u + 43u);
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00377F68u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x00377F68u) [[unlikely]] return; }
L_00377F68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { [[clang::musttail]] return unit_009E(c, 8u, depth); } }
L_00377F70:
    c.r[3].d[0] = ld8((c.r[19].w[0]));
    c.r[2].d[0] = c.r[17].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[3].w[0] + 1u);  if (t) { goto L_00377F90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_00377FBC; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_00377F90:
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[19].w[0]));
    c.r[3].d[0] = ld8((c.r[20].w[0]));
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 43u);  if (t) { goto L_00377FC0; } }
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00377FBC:
    set32(c.r[5], 0u + 43u);
    c.budget -= 1;
L_00377FC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00377FC8u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x00377FC8u) [[unlikely]] return; }
L_00377FC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { [[clang::musttail]] return unit_009E(c, 8u, depth); } }
L_00377FD0:
    c.r[2].d[0] = ld8((c.r[19].w[0]));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[2].w[0] - 1u);  goto L_00377FF4; }
    c.r[2].d[0] = c.r[17].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { [[clang::musttail]] return unit_009E(c, 2u, depth); } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 1;
L_00377FF4:
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[19].w[0]));
    c.r[3].d[0] = ld8((c.r[20].w[0]));
    c.budget -= 3;
    [[clang::musttail]] return unit_009E(c, 1u, depth);
}

}
