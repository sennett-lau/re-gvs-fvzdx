#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_009B[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 3, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 5,
    0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 9, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0,
    14, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0,
    18, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 21, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 25, 0, 0, 0, 26, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0,
    0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    39, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 48, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0,
    0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 0,
    0, 59, 0, 0, 0, 0, 60, 0, 0, 0, 0, 61, 0, 0, 0, 0, 62, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    64, 0, 65, 0, 0, 0, 0, 66, 0, 67, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 70, 0, 0, 0, 0,
    71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 75, 0, 0, 0, 76,
    0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 78, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 80, 0, 81, 0, 0, 0, 0, 0,
    82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 85, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0,
    87, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 91, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 95, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 98, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0,
    100, 0, 101, 0, 0, 102, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 106, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 110, 0, 0, 0,
    0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0,
    0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 117, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 119, 0, 120,
    0, 0, 121, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0,
    0, 0, 130, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    134, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 140, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 142, 0, 0, 143, 0, 0, 0, 0, 0, 0,
    0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 148, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 156,
    0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 160, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    168, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 173, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 177, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 180, 0, 0,
    0, 0, 0, 0, 181, 0, 0, 0, 182, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 185, 0, 186, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 0, 0, 189, 0, 0,
    0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 198,
    0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 201, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0,
    204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 0, 0,
    207, 0, 208, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 0, 0, 217, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221,
    0, 222, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226,
    0, 0, 0, 0, 227, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 230, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 236,
    0, 237, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 240, 0, 241, 0, 0, 0, 0, 0,
    0, 242, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 248, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 250, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 253, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 255, 0, 256, 0, 0, 0, 0, 257, 0, 0, 0, 0, 258, 0, 0, 0, 0, 259, 0, 0, 0, 0, 260, 0, 261, 0, 262, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 266, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 271, 0, 272, 0, 273, 0, 0, 0, 0, 0, 0, 274, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276,
    0, 277, 0, 0, 0, 278, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 283, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 286, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 291, 0, 292, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 295, 0, 0, 296,
    0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 299, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 302, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 304, 0, 305, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 306, 0, 307, 0, 0, 0, 0, 0, 0, 0, 308, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 312, 0, 313, 0, 0, 0, 0, 314, 0, 0, 0, 0, 315, 0, 0, 0, 0,
    316, 0, 0, 0, 0, 317, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 325, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 330, 0, 0, 0,
    0, 0, 0, 0, 0, 331, 0, 332, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 335,
    0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 338, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 340, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 342, 0, 0, 0, 0, 343, 0, 0, 0, 0, 344, 0, 0, 0, 0,
    345, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 349, 0, 0, 0, 0, 350, 0,
    0, 0, 0, 0, 351, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 355,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 359, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 366, 0, 0, 0, 0, 367, 0, 0, 0, 0, 368, 0, 0, 0, 0, 369, 0, 0, 0, 0,
    370, 0, 0, 0, 0, 371, 0, 0, 372, 0, 0, 0, 373, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 375, 0, 0, 0, 0, 376, 0, 0, 0,
    0, 377, 0, 0, 0, 0, 378, 0, 0, 0, 0, 379, 0, 0, 0, 380, 0, 381, 0, 0, 0, 0, 382, 0, 0, 0, 0, 383, 0, 0, 0, 0,
    384, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0,
    395, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 401, 0, 0, 402, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 404, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 407, 0, 408, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0,
    411, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 414, 0, 0, 0, 0,
    0, 415, 0, 0, 0, 416, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 419,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    421, 0, 0, 0, 0, 0, 422, 0, 0, 0, 423, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0,
    429, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 433, 0, 0, 0, 0, 434, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 438, 0, 439, 0,
    0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 443, 0, 0, 0, 0,
    0, 0, 0, 0, 444, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 447, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0,
    0, 0, 449, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 452, 0, 453, 0, 0, 454, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 455, 0, 456, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    459, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_009B(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0036C000;
    case 2u: goto L_0036C030;
    case 3u: goto L_0036C050;
    case 4u: goto L_0036C058;
    case 5u: goto L_0036C07C;
    case 6u: goto L_0036C0A0;
    case 7u: goto L_0036C0B0;
    case 8u: goto L_0036C0E0;
    case 9u: goto L_0036C0E8;
    case 10u: goto L_0036C130;
    case 11u: goto L_0036C144;
    case 12u: goto L_0036C154;
    case 13u: goto L_0036C178;
    case 14u: goto L_0036C180;
    case 15u: goto L_0036C198;
    case 16u: goto L_0036C1CC;
    case 17u: goto L_0036C1F8;
    case 18u: goto L_0036C200;
    case 19u: goto L_0036C214;
    case 20u: goto L_0036C250;
    case 21u: goto L_0036C28C;
    case 22u: goto L_0036C29C;
    case 23u: goto L_0036C2AC;
    case 24u: goto L_0036C2DC;
    case 25u: goto L_0036C2E4;
    case 26u: goto L_0036C2F4;
    case 27u: goto L_0036C324;
    case 28u: goto L_0036C338;
    case 29u: goto L_0036C36C;
    case 30u: goto L_0036C388;
    case 31u: goto L_0036C3A8;
    case 32u: goto L_0036C3BC;
    case 33u: goto L_0036C3EC;
    case 34u: goto L_0036C41C;
    case 35u: goto L_0036C464;
    case 36u: goto L_0036C4B4;
    case 37u: goto L_0036C4D0;
    case 38u: goto L_0036C530;
    case 39u: goto L_0036C580;
    case 40u: goto L_0036C5A0;
    case 41u: goto L_0036C5E4;
    case 42u: goto L_0036C60C;
    case 43u: goto L_0036C66C;
    case 44u: goto L_0036C694;
    case 45u: goto L_0036C6B0;
    case 46u: goto L_0036C700;
    case 47u: goto L_0036C764;
    case 48u: goto L_0036C778;
    case 49u: goto L_0036C7A0;
    case 50u: goto L_0036C7B0;
    case 51u: goto L_0036C80C;
    case 52u: goto L_0036C870;
    case 53u: goto L_0036C884;
    case 54u: goto L_0036C8AC;
    case 55u: goto L_0036C8C0;
    case 56u: goto L_0036C930;
    case 57u: goto L_0036CAE0;
    case 58u: goto L_0036CAF0;
    case 59u: goto L_0036CB04;
    case 60u: goto L_0036CB18;
    case 61u: goto L_0036CB2C;
    case 62u: goto L_0036CB40;
    case 63u: goto L_0036CB54;
    case 64u: goto L_0036CB80;
    case 65u: goto L_0036CB88;
    case 66u: goto L_0036CB9C;
    case 67u: goto L_0036CBA4;
    case 68u: goto L_0036CBB0;
    case 69u: goto L_0036CBDC;
    case 70u: goto L_0036CBEC;
    case 71u: goto L_0036CC00;
    case 72u: goto L_0036CC28;
    case 73u: goto L_0036CC38;
    case 74u: goto L_0036CC58;
    case 75u: goto L_0036CC6C;
    case 76u: goto L_0036CC7C;
    case 77u: goto L_0036CC9C;
    case 78u: goto L_0036CCB0;
    case 79u: goto L_0036CCC0;
    case 80u: goto L_0036CCE0;
    case 81u: goto L_0036CCE8;
    case 82u: goto L_0036CD00;
    case 83u: goto L_0036CD5C;
    case 84u: goto L_0036CDC0;
    case 85u: goto L_0036CDD4;
    case 86u: goto L_0036CDE4;
    case 87u: goto L_0036CE00;
    case 88u: goto L_0036CE24;
    case 89u: goto L_0036CE48;
    case 90u: goto L_0036CE60;
    case 91u: goto L_0036CF08;
    case 92u: goto L_0036CF20;
    case 93u: goto L_0036CF44;
    case 94u: goto L_0036CF58;
    case 95u: goto L_0036CF8C;
    case 96u: goto L_0036CFA0;
    case 97u: goto L_0036CFCC;
    case 98u: goto L_0036CFD4;
    case 99u: goto L_0036CFE0;
    case 100u: goto L_0036D000;
    case 101u: goto L_0036D008;
    case 102u: goto L_0036D014;
    case 103u: goto L_0036D024;
    case 104u: goto L_0036D034;
    case 105u: goto L_0036D058;
    case 106u: goto L_0036D070;
    case 107u: goto L_0036D0AC;
    case 108u: goto L_0036D140;
    case 109u: goto L_0036D15C;
    case 110u: goto L_0036D170;
    case 111u: goto L_0036D194;
    case 112u: goto L_0036D1A8;
    case 113u: goto L_0036D1DC;
    case 114u: goto L_0036D1F0;
    case 115u: goto L_0036D210;
    case 116u: goto L_0036D240;
    case 117u: goto L_0036D248;
    case 118u: goto L_0036D254;
    case 119u: goto L_0036D274;
    case 120u: goto L_0036D27C;
    case 121u: goto L_0036D288;
    case 122u: goto L_0036D290;
    case 123u: goto L_0036D2CC;
    case 124u: goto L_0036D2D4;
    case 125u: goto L_0036D314;
    case 126u: goto L_0036D34C;
    case 127u: goto L_0036D354;
    case 128u: goto L_0036D37C;
    case 129u: goto L_0036D46C;
    case 130u: goto L_0036D488;
    case 131u: goto L_0036D49C;
    case 132u: goto L_0036D4BC;
    case 133u: goto L_0036D4D0;
    case 134u: goto L_0036D500;
    case 135u: goto L_0036D514;
    case 136u: goto L_0036D530;
    case 137u: goto L_0036D5C8;
    case 138u: goto L_0036D5F0;
    case 139u: goto L_0036D618;
    case 140u: goto L_0036D62C;
    case 141u: goto L_0036D640;
    case 142u: goto L_0036D658;
    case 143u: goto L_0036D664;
    case 144u: goto L_0036D684;
    case 145u: goto L_0036D6A8;
    case 146u: goto L_0036D748;
    case 147u: goto L_0036D764;
    case 148u: goto L_0036D778;
    case 149u: goto L_0036D7A0;
    case 150u: goto L_0036D7B0;
    case 151u: goto L_0036D7F0;
    case 152u: goto L_0036D8F4;
    case 153u: goto L_0036D998;
    case 154u: goto L_0036D9BC;
    case 155u: goto L_0036D9E8;
    case 156u: goto L_0036D9FC;
    case 157u: goto L_0036DA18;
    case 158u: goto L_0036DA30;
    case 159u: goto L_0036DA68;
    case 160u: goto L_0036DA78;
    case 161u: goto L_0036DAA8;
    case 162u: goto L_0036DAB8;
    case 163u: goto L_0036DAD4;
    case 164u: goto L_0036DAE8;
    case 165u: goto L_0036DB2C;
    case 166u: goto L_0036DB3C;
    case 167u: goto L_0036DB58;
    case 168u: goto L_0036DB80;
    case 169u: goto L_0036DB90;
    case 170u: goto L_0036DBA0;
    case 171u: goto L_0036DBD0;
    case 172u: goto L_0036DBE0;
    case 173u: goto L_0036DC0C;
    case 174u: goto L_0036DC24;
    case 175u: goto L_0036DC70;
    case 176u: goto L_0036DCA0;
    case 177u: goto L_0036DCA8;
    case 178u: goto L_0036DCB8;
    case 179u: goto L_0036DCE4;
    case 180u: goto L_0036DCF4;
    case 181u: goto L_0036DD10;
    case 182u: goto L_0036DD20;
    case 183u: goto L_0036DD28;
    case 184u: goto L_0036DD68;
    case 185u: goto L_0036DD70;
    case 186u: goto L_0036DD78;
    case 187u: goto L_0036DDCC;
    case 188u: goto L_0036DDDC;
    case 189u: goto L_0036DDF4;
    case 190u: goto L_0036DE04;
    case 191u: goto L_0036DE4C;
    case 192u: goto L_0036DE70;
    case 193u: goto L_0036DED0;
    case 194u: goto L_0036DF08;
    case 195u: goto L_0036DF8C;
    case 196u: goto L_0036DFBC;
    case 197u: goto L_0036DFE0;
    case 198u: goto L_0036DFFC;
    case 199u: goto L_0036E020;
    case 200u: goto L_0036E028;
    case 201u: goto L_0036E088;
    case 202u: goto L_0036E098;
    case 203u: goto L_0036E0F0;
    case 204u: goto L_0036E100;
    case 205u: goto L_0036E15C;
    case 206u: goto L_0036E16C;
    case 207u: goto L_0036E180;
    case 208u: goto L_0036E188;
    case 209u: goto L_0036E190;
    case 210u: goto L_0036E1C8;
    case 211u: goto L_0036E1D0;
    case 212u: goto L_0036E240;
    case 213u: goto L_0036E254;
    case 214u: goto L_0036E280;
    case 215u: goto L_0036E2C8;
    case 216u: goto L_0036E2D8;
    case 217u: goto L_0036E2EC;
    case 218u: goto L_0036E314;
    case 219u: goto L_0036E344;
    case 220u: goto L_0036E34C;
    case 221u: goto L_0036E37C;
    case 222u: goto L_0036E384;
    case 223u: goto L_0036E394;
    case 224u: goto L_0036E3B4;
    case 225u: goto L_0036E3C4;
    case 226u: goto L_0036E3FC;
    case 227u: goto L_0036E410;
    case 228u: goto L_0036E418;
    case 229u: goto L_0036E464;
    case 230u: goto L_0036E48C;
    case 231u: goto L_0036E494;
    case 232u: goto L_0036E4C0;
    case 233u: goto L_0036E500;
    case 234u: goto L_0036E548;
    case 235u: goto L_0036E564;
    case 236u: goto L_0036E57C;
    case 237u: goto L_0036E584;
    case 238u: goto L_0036E58C;
    case 239u: goto L_0036E5C0;
    case 240u: goto L_0036E5E0;
    case 241u: goto L_0036E5E8;
    case 242u: goto L_0036E604;
    case 243u: goto L_0036E60C;
    case 244u: goto L_0036E64C;
    case 245u: goto L_0036E654;
    case 246u: goto L_0036E690;
    case 247u: goto L_0036E6C4;
    case 248u: goto L_0036E6CC;
    case 249u: goto L_0036E6DC;
    case 250u: goto L_0036E708;
    case 251u: goto L_0036E724;
    case 252u: goto L_0036E740;
    case 253u: goto L_0036E754;
    case 254u: goto L_0036E75C;
    case 255u: goto L_0036E788;
    case 256u: goto L_0036E790;
    case 257u: goto L_0036E7A4;
    case 258u: goto L_0036E7B8;
    case 259u: goto L_0036E7CC;
    case 260u: goto L_0036E7E0;
    case 261u: goto L_0036E7E8;
    case 262u: goto L_0036E7F0;
    case 263u: goto L_0036E818;
    case 264u: goto L_0036E834;
    case 265u: goto L_0036E860;
    case 266u: goto L_0036E874;
    case 267u: goto L_0036E89C;
    case 268u: goto L_0036E8A8;
    case 269u: goto L_0036E8D0;
    case 270u: goto L_0036E8E0;
    case 271u: goto L_0036E908;
    case 272u: goto L_0036E910;
    case 273u: goto L_0036E918;
    case 274u: goto L_0036E934;
    case 275u: goto L_0036E93C;
    case 276u: goto L_0036E97C;
    case 277u: goto L_0036E984;
    case 278u: goto L_0036E994;
    case 279u: goto L_0036E99C;
    case 280u: goto L_0036E9C0;
    case 281u: goto L_0036E9C8;
    case 282u: goto L_0036EA10;
    case 283u: goto L_0036EA30;
    case 284u: goto L_0036EA38;
    case 285u: goto L_0036EA70;
    case 286u: goto L_0036EA78;
    case 287u: goto L_0036EAA8;
    case 288u: goto L_0036EAB0;
    case 289u: goto L_0036EAD4;
    case 290u: goto L_0036EAE0;
    case 291u: goto L_0036EB14;
    case 292u: goto L_0036EB1C;
    case 293u: goto L_0036EB2C;
    case 294u: goto L_0036EB58;
    case 295u: goto L_0036EB70;
    case 296u: goto L_0036EB7C;
    case 297u: goto L_0036EB8C;
    case 298u: goto L_0036EBA8;
    case 299u: goto L_0036EBBC;
    case 300u: goto L_0036EBC4;
    case 301u: goto L_0036EBEC;
    case 302u: goto L_0036EBF4;
    case 303u: goto L_0036EC3C;
    case 304u: goto L_0036EC5C;
    case 305u: goto L_0036EC64;
    case 306u: goto L_0036EC9C;
    case 307u: goto L_0036ECA4;
    case 308u: goto L_0036ECC4;
    case 309u: goto L_0036ECCC;
    case 310u: goto L_0036ECF0;
    case 311u: goto L_0036ED24;
    case 312u: goto L_0036ED3C;
    case 313u: goto L_0036ED44;
    case 314u: goto L_0036ED58;
    case 315u: goto L_0036ED6C;
    case 316u: goto L_0036ED80;
    case 317u: goto L_0036ED94;
    case 318u: goto L_0036ED9C;
    case 319u: goto L_0036EDE8;
    case 320u: goto L_0036EE1C;
    case 321u: goto L_0036EE30;
    case 322u: goto L_0036EE5C;
    case 323u: goto L_0036EEA4;
    case 324u: goto L_0036EECC;
    case 325u: goto L_0036EED4;
    case 326u: goto L_0036EEE8;
    case 327u: goto L_0036EF10;
    case 328u: goto L_0036EF40;
    case 329u: goto L_0036EF68;
    case 330u: goto L_0036EF70;
    case 331u: goto L_0036EF94;
    case 332u: goto L_0036EF9C;
    case 333u: goto L_0036EFA4;
    case 334u: goto L_0036EFEC;
    case 335u: goto L_0036EFFC;
    case 336u: goto L_0036F004;
    case 337u: goto L_0036F03C;
    case 338u: goto L_0036F044;
    case 339u: goto L_0036F064;
    case 340u: goto L_0036F070;
    case 341u: goto L_0036F0B0;
    case 342u: goto L_0036F0C4;
    case 343u: goto L_0036F0D8;
    case 344u: goto L_0036F0EC;
    case 345u: goto L_0036F100;
    case 346u: goto L_0036F124;
    case 347u: goto L_0036F12C;
    case 348u: goto L_0036F154;
    case 349u: goto L_0036F164;
    case 350u: goto L_0036F178;
    case 351u: goto L_0036F190;
    case 352u: goto L_0036F1A0;
    case 353u: goto L_0036F1C0;
    case 354u: goto L_0036F1E8;
    case 355u: goto L_0036F1FC;
    case 356u: goto L_0036F224;
    case 357u: goto L_0036F238;
    case 358u: goto L_0036F260;
    case 359u: goto L_0036F274;
    case 360u: goto L_0036F29C;
    case 361u: goto L_0036F2CC;
    case 362u: goto L_0036F2EC;
    case 363u: goto L_0036F340;
    case 364u: goto L_0036F358;
    case 365u: goto L_0036F3A0;
    case 366u: goto L_0036F3B0;
    case 367u: goto L_0036F3C4;
    case 368u: goto L_0036F3D8;
    case 369u: goto L_0036F3EC;
    case 370u: goto L_0036F400;
    case 371u: goto L_0036F414;
    case 372u: goto L_0036F420;
    case 373u: goto L_0036F430;
    case 374u: goto L_0036F448;
    case 375u: goto L_0036F45C;
    case 376u: goto L_0036F470;
    case 377u: goto L_0036F484;
    case 378u: goto L_0036F498;
    case 379u: goto L_0036F4AC;
    case 380u: goto L_0036F4BC;
    case 381u: goto L_0036F4C4;
    case 382u: goto L_0036F4D8;
    case 383u: goto L_0036F4EC;
    case 384u: goto L_0036F500;
    case 385u: goto L_0036F508;
    case 386u: goto L_0036F530;
    case 387u: goto L_0036F54C;
    case 388u: goto L_0036F560;
    case 389u: goto L_0036F5AC;
    case 390u: goto L_0036F5C0;
    case 391u: goto L_0036F5F0;
    case 392u: goto L_0036F61C;
    case 393u: goto L_0036F63C;
    case 394u: goto L_0036F668;
    case 395u: goto L_0036F680;
    case 396u: goto L_0036F690;
    case 397u: goto L_0036F6B4;
    case 398u: goto L_0036F6F4;
    case 399u: goto L_0036F720;
    case 400u: goto L_0036F750;
    case 401u: goto L_0036F760;
    case 402u: goto L_0036F76C;
    case 403u: goto L_0036F7A0;
    case 404u: goto L_0036F7A8;
    case 405u: goto L_0036F7B8;
    case 406u: goto L_0036F810;
    case 407u: goto L_0036F89C;
    case 408u: goto L_0036F8A4;
    case 409u: goto L_0036F8BC;
    case 410u: goto L_0036F8E4;
    case 411u: goto L_0036F900;
    case 412u: goto L_0036F924;
    case 413u: goto L_0036F960;
    case 414u: goto L_0036F96C;
    case 415u: goto L_0036F984;
    case 416u: goto L_0036F994;
    case 417u: goto L_0036F9A0;
    case 418u: goto L_0036F9E4;
    case 419u: goto L_0036F9FC;
    case 420u: goto L_0036FA30;
    case 421u: goto L_0036FB00;
    case 422u: goto L_0036FB18;
    case 423u: goto L_0036FB28;
    case 424u: goto L_0036FB40;
    case 425u: goto L_0036FBC0;
    case 426u: goto L_0036FBFC;
    case 427u: goto L_0036FC48;
    case 428u: goto L_0036FC70;
    case 429u: goto L_0036FC80;
    case 430u: goto L_0036FC9C;
    case 431u: goto L_0036FCB0;
    case 432u: goto L_0036FCC8;
    case 433u: goto L_0036FCDC;
    case 434u: goto L_0036FCF0;
    case 435u: goto L_0036FD3C;
    case 436u: goto L_0036FD44;
    case 437u: goto L_0036FD68;
    case 438u: goto L_0036FD70;
    case 439u: goto L_0036FD78;
    case 440u: goto L_0036FD9C;
    case 441u: goto L_0036FDC0;
    case 442u: goto L_0036FDE4;
    case 443u: goto L_0036FDEC;
    case 444u: goto L_0036FE10;
    case 445u: goto L_0036FE18;
    case 446u: goto L_0036FE4C;
    case 447u: goto L_0036FE54;
    case 448u: goto L_0036FE68;
    case 449u: goto L_0036FE88;
    case 450u: goto L_0036FE9C;
    case 451u: goto L_0036FEC0;
    case 452u: goto L_0036FED0;
    case 453u: goto L_0036FED8;
    case 454u: goto L_0036FEE4;
    case 455u: goto L_0036FF1C;
    case 456u: goto L_0036FF24;
    case 457u: goto L_0036FF48;
    case 458u: goto L_0036FF50;
    case 459u: goto L_0036FF80;
    case 460u: goto L_0036FFC0;
    default: bad_entry(c, 0x0036C000u); return;
    }
L_0036C000:
    c.r[6].d[0] = ld8((c.r[1].w[0] + 24884u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], c.r[2].w[0] - 23112u);
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[6].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C030u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0006(c, 7u, depth + 1u); else { c.pc = 0x001180C0u; return; } if (c.pc != 0x0036C030u) [[unlikely]] return; }
L_0036C030:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[12] = ld32((c.r[1].w[0] + 19784u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[13] = ld32((c.r[1].w[0] + 19788u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C050u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x0036C050u) [[unlikely]] return; }
L_0036C050:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C058u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x0036C058u) [[unlikely]] return; }
L_0036C058:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[12] = ld32((c.r[1].w[0] + 19792u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[13] = ld32((c.r[1].w[0] + 19796u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C07Cu); set32(c.r[4], c.r[2].w[0] - 23104u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x0036C07Cu) [[unlikely]] return; }
L_0036C07C:
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 8147u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_0036C18C; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 25960u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 3u);  if (t) { goto L_0036C13C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C0A0u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x0036C0A0u) [[unlikely]] return; }
L_0036C0A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C0B0u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0017(c, 229u, depth + 1u); else { c.pc = 0x0015E250u; return; } if (c.pc != 0x0036C0B0u) [[unlikely]] return; }
L_0036C0B0:
    set32(c.r[6], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[2].w[0] + 19856u);
    c.r[5].d[0] = ld8((c.r[6].w[0] + 5240u));
    c.r[2].d[0] = ld8((c.r[6].w[0] + 5241u));
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C0E0u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0006(c, 36u, depth + 1u); else { c.pc = 0x00118760u; return; } if (c.pc != 0x0036C0E0u) [[unlikely]] return; }
L_0036C0E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C0E8u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x0036C0E8u) [[unlikely]] return; }
L_0036C0E8:
    c.f[0] = c.r[2].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.f[13] = ld32((c.r[1].w[0] + 19804u));
    c.f[1] = c.r[6].w[0];
    c.f[0] = c.r[5].w[0];
    fpu_div(c, 1u, c.f[2], c.f[1]);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[1] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = c.r[3].w[0];
    c.f[14] = c.r[2].w[0];
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C130u); c.f[12] = fp::sub(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x0036C130u) [[unlikely]] return; }
L_0036C130:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036C178; } }
    set32(c.r[4], 0u + 3u);
    c.budget -= 1;
L_0036C13C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C144u);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x0036C144u) [[unlikely]] return; }
L_0036C144:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C154u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0017(c, 229u, depth + 1u); else { c.pc = 0x0015E250u; return; } if (c.pc != 0x0036C154u) [[unlikely]] return; }
L_0036C154:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42600000u);
    c.f[12] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.f[13] = ld32((c.r[1].w[0] + 19804u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C178u); set32(c.r[4], c.r[2].w[0] - 23088u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x0036C178u) [[unlikely]] return; }
L_0036C178:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C180u);  if (depth < kMaxDepth) unit_0096(c, 82u, depth + 1u); else { c.pc = 0x00358F00u; return; } if (c.pc != 0x0036C180u) [[unlikely]] return; }
L_0036C180:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);  if (t) { goto L_0036C4B8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_0036C18C:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C198u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0017(c, 229u, depth + 1u); else { c.pc = 0x0015E250u; return; } if (c.pc != 0x0036C198u) [[unlikely]] return; }
L_0036C198:
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    c.r[17].d[0] = ld16((c.r[1].w[0] + 24890u));
    c.r[1].d[0] = c.r[17].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 8149u)));  if (t) { goto L_0036C1B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_0036C1C0; } }
L_0036C1B8:
    set32(c.r[17], 0u + 10u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 2;
L_0036C1C0:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C1CCu); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0017(c, 229u, depth + 1u); else { c.pc = 0x0015E250u; return; } if (c.pc != 0x0036C1CCu) [[unlikely]] return; }
L_0036C1CC:
    c.r[1].d[0] = 0ll < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[18], c.r[0], c.r[0]);  if (t) { goto L_0036C400; } }
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[2].w[0] << 3);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[2], c.r[2].w[0] - 2016u);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
L_0036C1F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C200u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x0036C200u) [[unlikely]] return; }
L_0036C200:
    c.r[6].d[0] = ld16((c.r[16].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C214u); set32(c.r[5], c.r[2].w[0] - 23040u);  if (depth < kMaxDepth) unit_0006(c, 7u, depth + 1u); else { c.pc = 0x001180C0u; return; } if (c.pc != 0x0036C214u) [[unlikely]] return; }
L_0036C214:
    c.f[0] = c.r[18].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41D00000u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x42A40000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[1] = c.r[2].w[0];
    c.f[12] = c.r[3].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[5].w[0];
    c.f[14] = c.r[2].w[0];
    c.f[20] = fp::add(c.f[0], c.f[1]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C250u); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x0036C250u) [[unlikely]] return; }
L_0036C250:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 4u));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[4], 0u + 4u);  if (t) { goto L_0036C284; } }
    set32(c.r[2], c.r[3].w[0] - 4u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0036C280; } }
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (t) { goto L_0036C330; } }
    c.budget -= 1;
L_0036C280:
    set32(c.r[4], 0u + 4u);
    c.budget -= 1;
L_0036C284:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C28Cu);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x0036C28Cu) [[unlikely]] return; }
L_0036C28C:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[6], 0u + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C29Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x0036C29Cu) [[unlikely]] return; }
L_0036C29C:
    set32(c.r[5], c.r[16].w[0] + 8u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C2ACu); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_0006(c, 60u, depth + 1u); else { c.pc = 0x00118D18u; return; } if (c.pc != 0x0036C2ACu) [[unlikely]] return; }
L_0036C2AC:
    c.f[0] = c.r[18].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42B00000u);
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[1] = ld32((c.r[28].w[0] - 27196u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[0] = ld32((c.r[28].w[0] - 27200u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[12] = c.r[3].w[0];
    c.f[14] = c.r[2].w[0];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C2DCu); c.f[13] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x0036C2DCu) [[unlikely]] return; }
L_0036C2DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C2E4u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x0036C2E4u) [[unlikely]] return; }
L_0036C2E4:
    set32(c.r[5], c.r[16].w[0] + 14u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C2F4u); set32(c.r[6], 0u + 18u);  if (depth < kMaxDepth) unit_0006(c, 60u, depth + 1u); else { c.pc = 0x00118D18u; return; } if (c.pc != 0x0036C2F4u) [[unlikely]] return; }
L_0036C2F4:
    c.f[0] = c.r[18].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x432C0000u);
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[1] = ld32((c.r[28].w[0] - 27196u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[0] = ld32((c.r[28].w[0] - 27200u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[12] = c.r[3].w[0];
    c.f[14] = c.r[2].w[0];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C324u); c.f[13] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x0036C324u) [[unlikely]] return; }
L_0036C324:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[16].w[0] + 4u));  if (t) { goto L_0036C374; } }
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 1;
L_0036C330:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C338u);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x0036C338u) [[unlikely]] return; }
L_0036C338:
    c.f[0] = c.r[18].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x42B00000u);
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[1] = ld32((c.r[28].w[0] - 27196u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[2].w[0] - 23024u);
    c.f[0] = ld32((c.r[28].w[0] - 27200u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[12] = c.r[5].w[0];
    c.f[14] = c.r[3].w[0];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C36Cu); c.f[13] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x0036C36Cu) [[unlikely]] return; }
L_0036C36C:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 4u));
    c.budget -= 2;
L_0036C374:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (t) { goto L_0036C3B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C388u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x0036C388u) [[unlikely]] return; }
L_0036C388:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], ld32((c.r[1].w[0] + 19836u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C3A8u); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x0036C3A8u) [[unlikely]] return; }
L_0036C3A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { goto L_0036C3F4; } }
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 1;
L_0036C3B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C3BCu);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x0036C3BCu) [[unlikely]] return; }
L_0036C3BC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    c.f[12] = c.r[2].w[0];
    c.r[3].d[0] = ld8((c.r[16].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 19824u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C3ECu); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x0036C3ECu) [[unlikely]] return; }
L_0036C3EC:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 2;
L_0036C3F4:
    c.r[3].d[0] = c.r[18].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 328u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036C1F8u | kUnwind; return; } goto L_0036C1F8; } }
L_0036C400:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    c.r[3].d[0] = ld16((c.r[1].w[0] + 24890u));
    c.r[1].d[0] = c.r[3].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0036C4B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C41Cu); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x0036C41Cu) [[unlikely]] return; }
L_0036C41C:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 8149u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 8150u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[1].d[0] = c.r[3].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0036C440; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0036C464; } }
L_0036C440:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[12] = ld32((c.r[1].w[0] + 19808u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[13] = ld32((c.r[1].w[0] + 19812u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C464u); set32(c.r[4], c.r[2].w[0] - 22992u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x0036C464u) [[unlikely]] return; }
L_0036C464:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    c.r[3].d[0] = ld16((c.r[1].w[0] + 24890u));
    c.r[1].d[0] = c.r[3].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0036C4B4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[3], c.r[3].w[0] - 11u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8149u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0036C4B4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[12] = ld32((c.r[1].w[0] + 19816u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[13] = ld32((c.r[1].w[0] + 19820u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C4B4u); set32(c.r[4], c.r[2].w[0] - 22984u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x0036C4B4u) [[unlikely]] return; }
L_0036C4B4:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0036C4B8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_0036C4D0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0036C524; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0036C504; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[3], c.r[5].w[0] + 1u);  if (t) { goto L_0036C500; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036C524; } }
    set32(c.r[3], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_0036C500:
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_0036C504:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 8146u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0036C520; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0036C524; } }
L_0036C520:
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0036C524:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036C530:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0036C558; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[3], c.r[5].w[0] + 1u);  if (t) { goto L_0036C554; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036C578; } }
    set32(c.r[3], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_0036C554:
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_0036C558:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 8147u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0036C574; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0036C578; } }
L_0036C574:
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0036C578:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036C580:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 19872u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0036C000u < 16384u) { entry = entries_009B[(t - 0x0036C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0036C5A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_0036C674; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0036C5E4; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], c.r[5].w[0] + 1u);  goto L_0036C5DC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0036C698; } }
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_0036C5DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C5E4u); st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009D(c, 296u, depth + 1u); else { c.pc = 0x00376EB0u; return; } if (c.pc != 0x0036C5E4u) [[unlikely]] return; }
L_0036C5E4:
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 8147u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036C600; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0036C604; } }
L_0036C600:
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0036C604:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C60Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_009D(c, 297u, depth + 1u); else { c.pc = 0x00376EC0u; return; } if (c.pc != 0x0036C60Cu) [[unlikely]] return; }
L_0036C60C:
    set32(c.r[5], ld32((c.r[28].w[0] - 25964u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[4], c.r[3].w[0] + 19888u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] + 19892u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8150u)));
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[4].w[0]));
    st32((c.r[16].w[0] + 32u), c.f[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8150u)));
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[16].w[0] + 36u), c.f[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 5245u));
    c.budget -= 20;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0036C694; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C66Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_009D(c, 296u, depth + 1u); else { c.pc = 0x00376EB0u; return; } if (c.pc != 0x0036C66Cu) [[unlikely]] return; }
L_0036C66C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036C694; } }
L_0036C674:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 5245u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0036C68C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0036C694; } }
L_0036C68C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C694u);  if (depth < kMaxDepth) unit_009D(c, 299u, depth + 1u); else { c.pc = 0x00376F50u; return; } if (c.pc != 0x0036C694u) [[unlikely]] return; }
L_0036C694:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0036C698:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0036C6B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_0036C780; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0036C700; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], c.r[5].w[0] + 1u);  goto L_0036C6EC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0036C7A4; } }
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_0036C6EC:
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.r[2].d[0] = c.r[2].d[0] | 26214ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C700u); st32((c.r[16].w[0] + 112u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_009D(c, 296u, depth + 1u); else { c.pc = 0x00376EB0u; return; } if (c.pc != 0x0036C700u) [[unlikely]] return; }
L_0036C700:
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[3], c.r[28].w[0] - 27192u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3340000u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 5242u));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[16].w[0] + 32u), c.f[0]);
    st32((c.r[16].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 8146u));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036C740; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0036C744; } }
L_0036C740:
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0036C744:
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 5245u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_0036C770; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C764u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_009D(c, 296u, depth + 1u); else { c.pc = 0x00376EB0u; return; } if (c.pc != 0x0036C764u) [[unlikely]] return; }
L_0036C764:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036C7A0; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_0036C770:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C778u);  if (depth < kMaxDepth) unit_009D(c, 297u, depth + 1u); else { c.pc = 0x00376EC0u; return; } if (c.pc != 0x0036C778u) [[unlikely]] return; }
L_0036C778:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036C7A0; } }
L_0036C780:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 5245u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0036C798; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0036C7A0; } }
L_0036C798:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C7A0u);  if (depth < kMaxDepth) unit_009D(c, 299u, depth + 1u); else { c.pc = 0x00376F50u; return; } if (c.pc != 0x0036C7A0u) [[unlikely]] return; }
L_0036C7A0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0036C7A4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0036C7B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_0036C88C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0036C80C; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], c.r[5].w[0] + 1u);  goto L_0036C7EC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0036C8B0; } }
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_0036C7EC:
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F860000u);
    c.r[2].d[0] = c.r[2].d[0] | 26214ull;
    st32((c.r[16].w[0] + 112u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 116u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C80Cu); st32((c.r[16].w[0] + 120u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_009D(c, 296u, depth + 1u); else { c.pc = 0x00376EB0u; return; } if (c.pc != 0x0036C80Cu) [[unlikely]] return; }
L_0036C80C:
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[2].w[0] + 19984u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 19992u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 5240u));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[16].w[0] + 32u), c.f[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 5241u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[16].w[0] + 36u), c.f[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 5243u));
    c.budget -= 20;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_0036C87C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C870u); st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009D(c, 296u, depth + 1u); else { c.pc = 0x00376EB0u; return; } if (c.pc != 0x0036C870u) [[unlikely]] return; }
L_0036C870:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036C8AC; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_0036C87C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C884u);  if (depth < kMaxDepth) unit_009D(c, 297u, depth + 1u); else { c.pc = 0x00376EC0u; return; } if (c.pc != 0x0036C884u) [[unlikely]] return; }
L_0036C884:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036C8AC; } }
L_0036C88C:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 5243u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0036C8A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0036C8AC; } }
L_0036C8A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C8ACu);  if (depth < kMaxDepth) unit_009D(c, 299u, depth + 1u); else { c.pc = 0x00376F50u; return; } if (c.pc != 0x0036C8ACu) [[unlikely]] return; }
L_0036C8AC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0036C8B0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0036C8C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_0036C968; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], c.r[5].w[0] + 1u);  goto L_0036C8F0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0036CAC8; } }
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_0036C8F0:
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    c.r[5].d[0] = ld8((c.r[1].w[0] + 24884u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[2].w[0] + 20024u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    set32(c.r[6], c.r[5].w[0] - 1u);
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C930u); c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));  if (depth < kMaxDepth) unit_009D(c, 274u, depth + 1u); else { c.pc = 0x00376B10u; return; } if (c.pc != 0x0036C930u) [[unlikely]] return; }
L_0036C930:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[4], c.r[3].w[0] + 20000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] + 20004u);
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[4].w[0]));
    st32((c.r[16].w[0] + 32u), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[16].w[0] + 36u), c.f[0]);
    c.budget -= 14;
L_0036C968:
    set32(c.r[6], ld32((c.r[28].w[0] - 25964u)));
    c.r[3].d[0] = ld8((c.r[6].w[0] + 8147u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0036C980; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0036CAC4; } }
L_0036C980:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0036CA6C; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_0036CA20; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0036C9AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036CAC4; } }
L_0036C9AC:
    c.r[3].d[0] = ld8((c.r[6].w[0] + 8146u));
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[5].d[0]) { mmi::paddub(c.r[5], c.r[0], c.r[0]);  goto L_0036C9C4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036C9C4; } }
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 1;
L_0036C9C4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 24884u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0036C9FC; } }
    c.r[3].d[0] = ld16((c.r[6].w[0] + 8142u));
    c.r[1].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0036C9F4; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0036CAC4; } }
L_0036C9F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0036CAC4; } }
L_0036C9FC:
    c.r[3].d[0] = ld16((c.r[6].w[0] + 8144u));
    c.r[1].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0036CA18; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0036CAC4; } }
L_0036CA18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0036CAC4; } }
L_0036CA20:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 24884u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0036CA50; } }
    c.r[3].d[0] = ld16((c.r[6].w[0] + 8144u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0036CA48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_0036CAC4; } }
L_0036CA48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0036CAC4; } }
L_0036CA50:
    c.r[3].d[0] = ld16((c.r[6].w[0] + 8142u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0036CA64; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_0036CAC4; } }
L_0036CA64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0036CAC4; } }
L_0036CA6C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 24884u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0036CAA4; } }
    c.r[3].d[0] = ld16((c.r[6].w[0] + 8144u));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0036CA9C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0036CAC4; } }
L_0036CA9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0036CAC4; } }
L_0036CAA4:
    c.r[3].d[0] = ld16((c.r[6].w[0] + 8142u));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0036CAC0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0036CAC4; } }
L_0036CAC0:
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0036CAC4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0036CAC8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0036CAE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CAF0u);  if (depth < kMaxDepth) unit_009D(c, 283u, depth + 1u); else { c.pc = 0x00376BE0u; return; } if (c.pc != 0x0036CAF0u) [[unlikely]] return; }
L_0036CAF0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] - 13392u);
    set32(c.r[4], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CB04u); set32(c.r[5], 0u + 50u);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x0036CB04u) [[unlikely]] return; }
L_0036CB04:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] + 26960u);
    set32(c.r[4], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CB18u); set32(c.r[5], 0u + 51u);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x0036CB18u) [[unlikely]] return; }
L_0036CB18:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] + 26960u);
    set32(c.r[4], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CB2Cu); set32(c.r[5], 0u + 52u);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x0036CB2Cu) [[unlikely]] return; }
L_0036CB2C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] + 26960u);
    set32(c.r[4], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CB40u); set32(c.r[5], 0u + 53u);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x0036CB40u) [[unlikely]] return; }
L_0036CB40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] - 13056u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CB54u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x0036CB54u) [[unlikely]] return; }
L_0036CB54:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3890000u);
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.f[12] = c.r[2].w[0];
    c.r[3].d[0] = ld8((c.r[1].w[0] + 24884u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43430000u);
    c.f[13] = c.r[2].w[0];
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.r[4].d[0] = c.r[2].d[0] << 56;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CB80u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);  if (depth < kMaxDepth) unit_0095(c, 16u, depth + 1u); else { c.pc = 0x00354240u; return; } if (c.pc != 0x0036CB80u) [[unlikely]] return; }
L_0036CB80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CB88u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009B(c, 87u, depth + 1u); else { c.pc = 0x0036CE00u; return; } if (c.pc != 0x0036CB88u) [[unlikely]] return; }
L_0036CB88:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] + 26960u);
    set32(c.r[4], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CB9Cu); set32(c.r[5], 0u + 20u);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x0036CB9Cu) [[unlikely]] return; }
L_0036CB9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CBA4u);  if (depth < kMaxDepth) unit_009A(c, 532u, depth + 1u); else { c.pc = 0x0036B670u; return; } if (c.pc != 0x0036CBA4u) [[unlikely]] return; }
L_0036CBA4:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0036CBB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 20048u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[5], c.r[29].w[0] + 16u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.r[2]);
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CBDCu); st128((c.r[5].w[0] + 16u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x0036CBDCu) [[unlikely]] return; }
L_0036CBDC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CBECu); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0017(c, 229u, depth + 1u); else { c.pc = 0x0015E250u; return; } if (c.pc != 0x0036CBECu) [[unlikely]] return; }
L_0036CBEC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    c.f[12] = ld32((c.r[29].w[0] + 16u));
    c.f[13] = ld32((c.r[29].w[0] + 20u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CC00u); c.r[4].d[0] = ld8((c.r[1].w[0] + 24880u));  if (depth < kMaxDepth) unit_0095(c, 18u, depth + 1u); else { c.pc = 0x003542A0u; return; } if (c.pc != 0x0036CC00u) [[unlikely]] return; }
L_0036CC00:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 25960u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 3u);  if (t) { goto L_0036CCA8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].d[0] = ld16((c.r[3].w[0] + 8152u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[4], 0u + 4u);  if (t) { goto L_0036CC64; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CC28u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x0036CC28u) [[unlikely]] return; }
L_0036CC28:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CC38u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0017(c, 229u, depth + 1u); else { c.pc = 0x0015E250u; return; } if (c.pc != 0x0036CC38u) [[unlikely]] return; }
L_0036CC38:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43300000u);
    c.f[12] = c.r[2].w[0];
    c.f[13] = ld32((c.r[29].w[0] + 44u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CC58u); set32(c.r[4], c.r[2].w[0] - 22976u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x0036CC58u) [[unlikely]] return; }
L_0036CC58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036CCE0; } }
    set32(c.r[4], 0u + 4u);
    c.budget -= 1;
L_0036CC64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CC6Cu);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x0036CC6Cu) [[unlikely]] return; }
L_0036CC6C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CC7Cu); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0017(c, 229u, depth + 1u); else { c.pc = 0x0015E250u; return; } if (c.pc != 0x0036CC7Cu) [[unlikely]] return; }
L_0036CC7C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.f[13] = ld32((c.r[29].w[0] + 44u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x436C0000u);
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CC9Cu); set32(c.r[4], c.r[2].w[0] - 22944u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x0036CC9Cu) [[unlikely]] return; }
L_0036CC9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036CCE0; } }
    set32(c.r[4], 0u + 3u);
    c.budget -= 1;
L_0036CCA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CCB0u);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x0036CCB0u) [[unlikely]] return; }
L_0036CCB0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CCC0u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0017(c, 229u, depth + 1u); else { c.pc = 0x0015E250u; return; } if (c.pc != 0x0036CCC0u) [[unlikely]] return; }
L_0036CCC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42600000u);
    c.f[12] = c.r[2].w[0];
    c.f[13] = ld32((c.r[29].w[0] + 44u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CCE0u); set32(c.r[4], c.r[2].w[0] - 22928u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x0036CCE0u) [[unlikely]] return; }
L_0036CCE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CCE8u);  if (depth < kMaxDepth) unit_0096(c, 82u, depth + 1u); else { c.pc = 0x00358F00u; return; } if (c.pc != 0x0036CCE8u) [[unlikely]] return; }
L_0036CCE8:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0036CD00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_0036CDDC; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0036CD5C; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], c.r[5].w[0] + 1u);  goto L_0036CD3C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0036CDE8; } }
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_0036CD3C:
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F860000u);
    c.r[2].d[0] = c.r[2].d[0] | 26214ull;
    st32((c.r[16].w[0] + 112u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 116u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CD5Cu); st32((c.r[16].w[0] + 120u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_009D(c, 296u, depth + 1u); else { c.pc = 0x00376EB0u; return; } if (c.pc != 0x0036CD5Cu) [[unlikely]] return; }
L_0036CD5C:
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[2].w[0] + 20080u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 20084u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 5240u));
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[16].w[0] + 32u), c.f[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 5240u));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[16].w[0] + 36u), c.f[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 5243u));
    c.budget -= 20;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_0036CDCC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CDC0u); st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009D(c, 296u, depth + 1u); else { c.pc = 0x00376EB0u; return; } if (c.pc != 0x0036CDC0u) [[unlikely]] return; }
L_0036CDC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036CDE4; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_0036CDCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CDD4u);  if (depth < kMaxDepth) unit_009D(c, 297u, depth + 1u); else { c.pc = 0x00376EC0u; return; } if (c.pc != 0x0036CDD4u) [[unlikely]] return; }
L_0036CDD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036CDE4; } }
L_0036CDDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CDE4u);  if (depth < kMaxDepth) unit_009D(c, 299u, depth + 1u); else { c.pc = 0x00376F50u; return; } if (c.pc != 0x0036CDE4u) [[unlikely]] return; }
L_0036CDE4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0036CDE8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0036CE00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] + 26960u);
    set32(c.r[4], 0u + 2u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CE24u); set32(c.r[5], 0u + 21u);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x0036CE24u) [[unlikely]] return; }
L_0036CE24:
    c.r[2].d[0] = c.r[16].d[0] & 255ull;
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[28].w[0] - 27184u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    set32(c.r[4], 0u + 2u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CE48u); set32(c.r[6], c.r[2].w[0] - 12704u);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x0036CE48u) [[unlikely]] return; }
L_0036CE48:
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[16].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0036CE60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0036CEA0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[3], c.r[5].w[0] + 1u);  if (t) { goto L_0036CE8C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0036CF0C; } }
    set32(c.r[3], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_0036CE8C:
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 120u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(0u));  if (t) { goto L_0036CF08; } }
L_0036CEA0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0036CF08; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_0036CF08; } }
    set32(c.r[2], 0u + 120u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 166u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 166u)));
    c.r[1].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0036CEEC; } }
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_0036CEEC:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 166u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 22880u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CF08u); c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));  if (depth < kMaxDepth) unit_009D(c, 274u, depth + 1u); else { c.pc = 0x00376B10u; return; } if (c.pc != 0x0036CF08u) [[unlikely]] return; }
L_0036CF08:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_0036CF0C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0036CF20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    st8((c.r[28].w[0] - 24896u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 24904u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 24900u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 24908u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 24924u), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CF44u); st8((c.r[28].w[0] - 24928u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_009D(c, 279u, depth + 1u); else { c.pc = 0x00376B80u; return; } if (c.pc != 0x0036CF44u) [[unlikely]] return; }
L_0036CF44:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 25920u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036CF70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CF58u); set32(c.r[4], c.r[28].w[0] - 25920u);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x0036CF58u) [[unlikely]] return; }
L_0036CF58:
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0036CF70; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 24932u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0036CF74; } }
L_0036CF70:
    st8((c.r[28].w[0] - 24932u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0036CF74:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 26624u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[5], c.r[2].w[0] - 3616u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CF8Cu); set32(c.r[6], 0u + 1600u);  if (depth < kMaxDepth) unit_0005(c, 230u, depth + 1u); else { c.pc = 0x00116C60u; return; } if (c.pc != 0x0036CF8Cu) [[unlikely]] return; }
L_0036CF8C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0036CFA0:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.f[12] = c.r[2].w[0];
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CFCCu); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0017(c, 229u, depth + 1u); else { c.pc = 0x0015E250u; return; } if (c.pc != 0x0036CFCCu) [[unlikely]] return; }
L_0036CFCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CFD4u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x0036CFD4u) [[unlikely]] return; }
L_0036CFD4:
    set32(c.r[4], c.r[28].w[0] - 25920u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CFE0u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0096(c, 45u, depth + 1u); else { c.pc = 0x003586F0u; return; } if (c.pc != 0x0036CFE0u) [[unlikely]] return; }
L_0036CFE0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[12] = ld32((c.r[1].w[0] + 20096u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[13] = ld32((c.r[1].w[0] + 20100u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D000u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x0036D000u) [[unlikely]] return; }
L_0036D000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D008u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x0036D008u) [[unlikely]] return; }
L_0036D008:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D014u); set32(c.r[4], c.r[2].w[0] - 32016u);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x0036D014u) [[unlikely]] return; }
L_0036D014:
    mmi::paddub(c.r[18], c.r[2], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[19], c.r[2].w[0] - 32016u);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 4;
L_0036D024:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[6], 0u + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D034u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x0036D034u) [[unlikely]] return; }
L_0036D034:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] <= 0;  if (t) { goto L_0036D0C0; } }
    c.r[1].d[0] = c.r[18].sd[0] < 24ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 80u);  if (t) { goto L_0036D064; } }
    set32(c.r[4], c.r[29].w[0] + 80u);
    mmi::paddub(c.r[5], c.r[19], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D058u); mmi::paddub(c.r[6], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0006(c, 60u, depth + 1u); else { c.pc = 0x00118D18u; return; } if (c.pc != 0x0036D058u) [[unlikely]] return; }
L_0036D058:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036D070; } }
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 1;
L_0036D064:
    set32(c.r[6], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D070u); mmi::paddub(c.r[5], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0006(c, 60u, depth + 1u); else { c.pc = 0x00118D18u; return; } if (c.pc != 0x0036D070u) [[unlikely]] return; }
L_0036D070:
    c.f[0] = c.r[17].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[1] = ld32((c.r[1].w[0] + 20112u));
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[18], c.r[18].w[0] - 24u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[0] = ld32((c.r[1].w[0] + 20108u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[12] = ld32((c.r[1].w[0] + 20104u));
    c.f[14] = c.r[2].w[0];
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D0ACu); c.f[13] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x0036D0ACu) [[unlikely]] return; }
L_0036D0AC:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 24u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036D024u | kUnwind; return; } goto L_0036D024; } }
    c.budget -= 1;
L_0036D0C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24920u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x42FA0000u);  if (t) { goto L_0036D0DC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC2FA0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 32u), c.r[3].w[0]);  if (t) { goto L_0036D0E0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42FA0000u);
    c.budget -= 1;
L_0036D0DC:
    st32((c.r[16].w[0] + 32u), c.r[3].w[0]);
    c.budget -= 1;
L_0036D0E0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0036D1C0; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0036D178; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0036D140; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], c.r[4].w[0] + 1u);  goto L_0036D11C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);  if (t) { goto L_0036D1F4; } }
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_0036D11C:
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC33C0000u);
    st32((c.r[16].w[0] + 36u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    st32((c.r[16].w[0] + 40u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D140u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_009D(c, 296u, depth + 1u); else { c.pc = 0x00376EB0u; return; } if (c.pc != 0x0036D140u) [[unlikely]] return; }
L_0036D140:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 24924u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_0036D168; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D15Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_009D(c, 296u, depth + 1u); else { c.pc = 0x00376EB0u; return; } if (c.pc != 0x0036D15Cu) [[unlikely]] return; }
L_0036D15C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036D1F0; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_0036D168:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D170u);  if (depth < kMaxDepth) unit_009D(c, 297u, depth + 1u); else { c.pc = 0x00376EC0u; return; } if (c.pc != 0x0036D170u) [[unlikely]] return; }
L_0036D170:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036D1F0; } }
L_0036D178:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 24924u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_0036D1A0; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D194u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_009D(c, 296u, depth + 1u); else { c.pc = 0x00376EB0u; return; } if (c.pc != 0x0036D194u) [[unlikely]] return; }
L_0036D194:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036D1F0; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_0036D1A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D1A8u);  if (depth < kMaxDepth) unit_009D(c, 299u, depth + 1u); else { c.pc = 0x00376F50u; return; } if (c.pc != 0x0036D1A8u) [[unlikely]] return; }
L_0036D1A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036D1F0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0036D1F0; } }
L_0036D1C0:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 24924u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_0036D1E8; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D1DCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_009D(c, 296u, depth + 1u); else { c.pc = 0x00376EB0u; return; } if (c.pc != 0x0036D1DCu) [[unlikely]] return; }
L_0036D1DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036D1F0; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_0036D1E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D1F0u);  if (depth < kMaxDepth) unit_009D(c, 297u, depth + 1u); else { c.pc = 0x00376EC0u; return; } if (c.pc != 0x0036D1F0u) [[unlikely]] return; }
L_0036D1F0:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0036D1F4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_0036D210:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 285u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[18], c.r[4], c.r[0]);  if (t) { goto L_0036D390; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D240u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0017(c, 229u, depth + 1u); else { c.pc = 0x0015E250u; return; } if (c.pc != 0x0036D240u) [[unlikely]] return; }
L_0036D240:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D248u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x0036D248u) [[unlikely]] return; }
L_0036D248:
    set32(c.r[4], c.r[28].w[0] - 25920u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D254u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0096(c, 45u, depth + 1u); else { c.pc = 0x003586F0u; return; } if (c.pc != 0x0036D254u) [[unlikely]] return; }
L_0036D254:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[12] = ld32((c.r[1].w[0] + 20128u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[13] = ld32((c.r[1].w[0] + 20132u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D274u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x0036D274u) [[unlikely]] return; }
L_0036D274:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D27Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x0036D27Cu) [[unlikely]] return; }
L_0036D27C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[17], c.r[2].w[0] + 20160u);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 3;
L_0036D288:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D290u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x0036D290u) [[unlikely]] return; }
L_0036D290:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[1] = ld32((c.r[1].w[0] + 20140u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24908u)));
    c.f[0] = ld32((c.r[17].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[12] = ld32((c.r[1].w[0] + 20136u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.f[13] = fp::add(c.f[1], c.f[0]);
    set32(c.r[2], c.r[2].w[0] - 3616u);
    set32(c.r[3], c.r[3].w[0] << 5);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D2CCu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x0036D2CCu) [[unlikely]] return; }
L_0036D2CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D2D4u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x0036D2D4u) [[unlikely]] return; }
L_0036D2D4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[1] = ld32((c.r[1].w[0] + 20148u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24908u)));
    c.f[0] = ld32((c.r[17].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.f[12] = ld32((c.r[1].w[0] + 20144u));
    set32(c.r[2], c.r[2].w[0] - 3616u);
    c.f[13] = fp::add(c.f[1], c.f[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D314u); set32(c.r[4], c.r[2].w[0] + 8u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x0036D314u) [[unlikely]] return; }
L_0036D314:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24908u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[3], c.r[3].w[0] - 3616u);
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[4].w[0] << 5);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 9;
    if (c.r[3].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_0036D384; }
    set32(c.r[6], ld32((c.r[4].w[0] + 28u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], c.r[2].w[0] - 22688u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D34Cu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0006(c, 7u, depth + 1u); else { c.pc = 0x001180C0u; return; } if (c.pc != 0x0036D34Cu) [[unlikely]] return; }
L_0036D34C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D354u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x0036D354u) [[unlikely]] return; }
L_0036D354:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[1] = ld32((c.r[1].w[0] + 20156u));
    c.f[0] = ld32((c.r[17].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[12] = ld32((c.r[1].w[0] + 20152u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D37Cu); c.f[13] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x0036D37Cu) [[unlikely]] return; }
L_0036D37C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 2;
L_0036D384:
    c.r[3].d[0] = c.r[16].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036D288u | kUnwind; return; } goto L_0036D288; } }
L_0036D390:
    set32(c.r[3], 0u + 1u);
    st8((c.r[18].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24900u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[7], c.r[4].w[0] - 22804u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[8], c.r[8].w[0] << 7);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.f[0] = ld32((c.r[6].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[8], c.r[4].w[0] - 22816u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[7], c.r[4].w[0] - 22812u);
    st32((c.r[18].w[0] + 112u), c.f[0]);
    st32((c.r[18].w[0] + 116u), c.r[5].w[0]);
    st32((c.r[18].w[0] + 120u), c.r[5].w[0]);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24900u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[5].d[0] = c.r[4].d[0] | 52429ull;
    set32(c.r[4], 0u + 3u);
    set32(c.r[9], c.r[9].w[0] << 7);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    c.f[0] = ld32((c.r[6].w[0]));
    st32((c.r[18].w[0] + 32u), c.f[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24900u)));
    set32(c.r[8], c.r[8].w[0] << 7);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.f[0] = ld32((c.r[6].w[0]));
    st32((c.r[18].w[0] + 36u), c.f[0]);
    st32((c.r[18].w[0] + 40u), c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    c.budget -= 42;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_0036D4E8; } }
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_0036D4A4; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0036D46C; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], c.r[5].w[0] + 1u);  goto L_0036D460; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);  if (t) { goto L_0036D518; } }
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_0036D460:
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D46Cu); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_009D(c, 296u, depth + 1u); else { c.pc = 0x00376EB0u; return; } if (c.pc != 0x0036D46Cu) [[unlikely]] return; }
L_0036D46C:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 24924u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (t) { goto L_0036D494; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D488u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_009D(c, 296u, depth + 1u); else { c.pc = 0x00376EB0u; return; } if (c.pc != 0x0036D488u) [[unlikely]] return; }
L_0036D488:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036D514; } }
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 1;
L_0036D494:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D49Cu);  if (depth < kMaxDepth) unit_009D(c, 297u, depth + 1u); else { c.pc = 0x00376EC0u; return; } if (c.pc != 0x0036D49Cu) [[unlikely]] return; }
L_0036D49C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036D514; } }
L_0036D4A4:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 24924u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (t) { goto L_0036D4C8; } }
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D4BCu); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_009D(c, 296u, depth + 1u); else { c.pc = 0x00376EB0u; return; } if (c.pc != 0x0036D4BCu) [[unlikely]] return; }
L_0036D4BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036D514; } }
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 1;
L_0036D4C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D4D0u);  if (depth < kMaxDepth) unit_009D(c, 299u, depth + 1u); else { c.pc = 0x00376F50u; return; } if (c.pc != 0x0036D4D0u) [[unlikely]] return; }
L_0036D4D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036D514; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0036D514; } }
L_0036D4E8:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 24924u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (t) { goto L_0036D50C; } }
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D500u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_009D(c, 296u, depth + 1u); else { c.pc = 0x00376EB0u; return; } if (c.pc != 0x0036D500u) [[unlikely]] return; }
L_0036D500:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036D514; } }
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 1;
L_0036D50C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D514u);  if (depth < kMaxDepth) unit_009D(c, 297u, depth + 1u); else { c.pc = 0x00376EC0u; return; } if (c.pc != 0x0036D514u) [[unlikely]] return; }
L_0036D514:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0036D518:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_0036D530:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 32u), 0u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24920u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[5], c.r[3].w[0] + 20192u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.r[3].d[0] = c.r[3].d[0] | 26214ull;
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[4].w[0] + 36u), c.f[0]);
    st32((c.r[4].w[0] + 116u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.r[1].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 18;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_0036D58C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24904u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0036D58C; } }
    set32(c.r[3], 0u + 4u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0036D58C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0036D5F8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0036D5C8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], c.r[4].w[0] + 1u);  if (t) { goto L_0036D5BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_0036D624; } }
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_0036D5BC:
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D5C8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_009D(c, 296u, depth + 1u); else { c.pc = 0x00376EB0u; return; } if (c.pc != 0x0036D5C8u) [[unlikely]] return; }
L_0036D5C8:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 24928u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_0036D5E8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0036D62C; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_0036D5E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D5F0u);  if (depth < kMaxDepth) unit_009D(c, 300u, depth + 1u); else { c.pc = 0x00377050u; return; } if (c.pc != 0x0036D5F0u) [[unlikely]] return; }
L_0036D5F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0036D630; } }
L_0036D5F8:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 24928u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_0036D610; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0036D62C; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_0036D610:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D618u);  if (depth < kMaxDepth) unit_009D(c, 302u, depth + 1u); else { c.pc = 0x003770E0u; return; } if (c.pc != 0x0036D618u) [[unlikely]] return; }
L_0036D618:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036D62C; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_0036D624:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D62Cu);  if (depth < kMaxDepth) unit_009D(c, 278u, depth + 1u); else { c.pc = 0x00376B70u; return; } if (c.pc != 0x0036D62Cu) [[unlikely]] return; }
L_0036D62C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0036D630:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0036D640:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D658u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x0036D658u) [[unlikely]] return; }
L_0036D658:
    set32(c.r[4], c.r[28].w[0] - 25920u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D664u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0096(c, 45u, depth + 1u); else { c.pc = 0x003586F0u; return; } if (c.pc != 0x0036D664u) [[unlikely]] return; }
L_0036D664:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.f[12] = ld32((c.r[1].w[0] - 22640u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.f[13] = ld32((c.r[1].w[0] - 22636u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D684u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x0036D684u) [[unlikely]] return; }
L_0036D684:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.f[12] = ld32((c.r[1].w[0] - 22632u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.f[13] = ld32((c.r[1].w[0] - 22628u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D6A8u); set32(c.r[4], c.r[2].w[0] - 5672u);  if (depth < kMaxDepth) unit_0099(c, 110u, depth + 1u); else { c.pc = 0x003655A0u; return; } if (c.pc != 0x0036D6A8u) [[unlikely]] return; }
L_0036D6A8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[3].w[0] - 22672u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24900u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[6], c.r[3].w[0] - 22668u);
    set32(c.r[3], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 32u), c.f[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24900u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], c.r[3].w[0] - 22660u);
    set32(c.r[3], 0u + 2u);
    set32(c.r[7], c.r[7].w[0] << 4);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.f[0] = ld32((c.r[6].w[0]));
    st32((c.r[16].w[0] + 36u), c.f[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24900u)));
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[16].w[0] + 112u), c.f[0]);
    st32((c.r[16].w[0] + 116u), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.budget -= 27;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0036D780; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0036D748; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], c.r[4].w[0] + 1u);  goto L_0036D734; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0036D7A4; } }
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_0036D734:
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC31A0000u);
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D748u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_009D(c, 296u, depth + 1u); else { c.pc = 0x00376EB0u; return; } if (c.pc != 0x0036D748u) [[unlikely]] return; }
L_0036D748:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 24924u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_0036D770; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D764u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_009D(c, 296u, depth + 1u); else { c.pc = 0x00376EB0u; return; } if (c.pc != 0x0036D764u) [[unlikely]] return; }
L_0036D764:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036D7A0; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_0036D770:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D778u);  if (depth < kMaxDepth) unit_009D(c, 297u, depth + 1u); else { c.pc = 0x00376EC0u; return; } if (c.pc != 0x0036D778u) [[unlikely]] return; }
L_0036D778:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036D7A0; } }
L_0036D780:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 24924u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_0036D798; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0036D7A0; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_0036D798:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D7A0u);  if (depth < kMaxDepth) unit_009D(c, 299u, depth + 1u); else { c.pc = 0x00376F50u; return; } if (c.pc != 0x0036D7A0u) [[unlikely]] return; }
L_0036D7A0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0036D7A4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0036D7B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[5].d[0] = ld8((c.r[5].w[0] + 5509u));
    c.r[4].d[0] = ld8((c.r[4].w[0] + 285u));
    c.budget -= 10;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_0036D7E8; } }
    set32(c.r[4], 0u + 76u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_0036D7F8; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_0036D7E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D7F0u);  if (depth < kMaxDepth) unit_009D(c, 278u, depth + 1u); else { c.pc = 0x00376B70u; return; } if (c.pc != 0x0036D7F0u) [[unlikely]] return; }
L_0036D7F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0036DA1C; } }
L_0036D7F8:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[4], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_0036D9F4; } }
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[4], 0u + 1u);  if (t) { goto L_0036D92C; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_0036D8FC; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[2], c.r[5].w[0] + 1u);  if (t) { goto L_0036D82C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036D9F0; } }
L_0036D82C:
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 100u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);  if (t) { goto L_0036D8A4; } }
    set32(c.r[4], c.r[2].w[0] + 20224u);
    c.r[6].d[0] = ld8((c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[5], c.r[2].w[0] + 20228u);
    set32(c.r[2], c.r[6].w[0] << 3);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[16].w[0] + 32u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3EAE0000u);
    c.r[4].d[0] = c.r[2].d[0] | 5243ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[16].w[0] + 36u), c.f[0]);
    st32((c.r[16].w[0] + 112u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 116u), c.r[2].w[0]);
    c.budget -= 20;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 120u), c.r[2].w[0]);  if (t) { goto L_0036D8D8; } }
L_0036D8A4:
    c.r[5].d[0] = ld8((c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[4], c.r[2].w[0] + 20248u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F0C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 36u), c.f[0]);
    st32((c.r[16].w[0] + 112u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 116u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 120u), c.r[3].w[0]);
    c.budget -= 13;
L_0036D8D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    st32((c.r[16].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[2], 0u + 32u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D8F4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_009D(c, 296u, depth + 1u); else { c.pc = 0x00376EB0u; return; } if (c.pc != 0x0036D8F4u) [[unlikely]] return; }
L_0036D8F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036DA18; } }
L_0036D8FC:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0036DA18; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0036DA18; } }
L_0036D92C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036D974; } }
    c.r[5].d[0] = ld8((c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[4], c.r[2].w[0] + 20224u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 20228u);
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[4].w[0]));
    st32((c.r[16].w[0] + 32u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 36u), c.f[0]);  if (t) { goto L_0036D990; } }
L_0036D974:
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 20248u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[16].w[0] + 36u), c.f[0]);
    c.budget -= 7;
L_0036D990:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D998u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_009D(c, 297u, depth + 1u); else { c.pc = 0x00376EC0u; return; } if (c.pc != 0x0036D998u) [[unlikely]] return; }
L_0036D998:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 5511u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0036D9BC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D9BCu); st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009D(c, 296u, depth + 1u); else { c.pc = 0x00376EB0u; return; } if (c.pc != 0x0036D9BCu) [[unlikely]] return; }
L_0036D9BC:
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 285u));
    c.r[4].d[0] = ld8((c.r[4].w[0] + 5509u));
    c.budget -= 5;
    if (c.r[4].d[0] == c.r[3].d[0]) { mmi::paddub(c.r[4], c.r[16], c.r[0]);  goto L_0036D9E0; }
    set32(c.r[3], 0u + 76u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0036DA18; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_0036D9E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D9E8u);  if (depth < kMaxDepth) unit_009D(c, 278u, depth + 1u); else { c.pc = 0x00376B70u; return; } if (c.pc != 0x0036D9E8u) [[unlikely]] return; }
L_0036D9E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036DA18; } }
L_0036D9F0:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_0036D9F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D9FCu);  if (depth < kMaxDepth) unit_009D(c, 299u, depth + 1u); else { c.pc = 0x00376F50u; return; } if (c.pc != 0x0036D9FCu) [[unlikely]] return; }
L_0036D9FC:
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 285u));
    c.r[4].d[0] = ld8((c.r[4].w[0] + 5509u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_0036DA18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DA18u);  if (depth < kMaxDepth) unit_009D(c, 278u, depth + 1u); else { c.pc = 0x00376B70u; return; } if (c.pc != 0x0036DA18u) [[unlikely]] return; }
L_0036DA18:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0036DA1C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0036DA30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24904u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0036DAF0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0036DA60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036DB34; } }
L_0036DA60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DA68u);  if (depth < kMaxDepth) unit_0097(c, 178u, depth + 1u); else { c.pc = 0x0035D5B0u; return; } if (c.pc != 0x0036DA68u) [[unlikely]] return; }
L_0036DA68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036DB80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DA78u);  if (depth < kMaxDepth) unit_009E(c, 18u, depth + 1u); else { c.pc = 0x003782D0u; return; } if (c.pc != 0x0036DA78u) [[unlikely]] return; }
L_0036DA78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036DAB0; } }
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24904u)));
    st8((c.r[28].w[0] - 24924u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 16u);
    st32((c.r[28].w[0] - 24912u), c.r[2].w[0]);
    set32(c.r[5], 0u + 4u);
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[28].w[0] - 24904u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DAA8u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x0036DAA8u) [[unlikely]] return; }
L_0036DAA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0036DB84; } }
L_0036DAB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DAB8u);  if (depth < kMaxDepth) unit_009E(c, 19u, depth + 1u); else { c.pc = 0x00378310u; return; } if (c.pc != 0x0036DAB8u) [[unlikely]] return; }
L_0036DAB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_0036DAE0; } }
    set32(c.r[2], 0u + 4u);
    set32(c.r[5], 0u + 54u);
    st8((c.r[28].w[0] - 24900u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DAD4u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x0036DAD4u) [[unlikely]] return; }
L_0036DAD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036DB80; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_0036DAE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DAE8u);  if (depth < kMaxDepth) unit_009B(c, 352u, depth + 1u); else { c.pc = 0x0036F1A0u; return; } if (c.pc != 0x0036DAE8u) [[unlikely]] return; }
L_0036DAE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 24900u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0036DB80; } }
L_0036DAF0:
    set32(c.r[3], ld32((c.r[28].w[0] - 24912u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[28].w[0] - 24912u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 24912u)));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_0036DB80; } }
    set32(c.r[2], c.r[4].w[0] + 1u);
    set32(c.r[7], 0u + 6u);
    set32(c.r[6], c.r[28].w[0] - 25920u);
    st8((c.r[28].w[0] - 24904u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    mmi::paddub(c.r[8], c.r[7], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DB2Cu); st8((c.r[28].w[0] - 24924u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_009E(c, 67u, depth + 1u); else { c.pc = 0x003788B0u; return; } if (c.pc != 0x0036DB2Cu) [[unlikely]] return; }
L_0036DB2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036DB80; } }
L_0036DB34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DB3Cu);  if (depth < kMaxDepth) unit_009E(c, 95u, depth + 1u); else { c.pc = 0x00378F00u; return; } if (c.pc != 0x0036DB3Cu) [[unlikely]] return; }
L_0036DB3C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036DB80; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 25920u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st8((c.r[28].w[0] - 24904u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0036DB70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DB58u); set32(c.r[4], c.r[28].w[0] - 25920u);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x0036DB58u) [[unlikely]] return; }
L_0036DB58:
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0036DB70; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 24932u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0036DB74; } }
L_0036DB70:
    st8((c.r[28].w[0] - 24932u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0036DB74:
    set32(c.r[5], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DB80u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x0036DB80u) [[unlikely]] return; }
L_0036DB80:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0036DB84:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0036DB90:
    c.budget -= 2;
    { mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0036DA30u | kUnwind; return; } goto L_0036DA30; }
L_0036DBA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24904u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0036DC2C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0036DBC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 10u);  if (t) { goto L_0036DC60; } }
L_0036DBC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DBD0u);  if (depth < kMaxDepth) unit_0097(c, 178u, depth + 1u); else { c.pc = 0x0035D5B0u; return; } if (c.pc != 0x0036DBD0u) [[unlikely]] return; }
L_0036DBD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036DC64; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DBE0u);  if (depth < kMaxDepth) unit_009E(c, 18u, depth + 1u); else { c.pc = 0x003782D0u; return; } if (c.pc != 0x0036DBE0u) [[unlikely]] return; }
L_0036DBE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (t) { goto L_0036DC1C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24904u)));
    set32(c.r[2], 0u + 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 4u);
    set32(c.r[2], c.r[3].w[0] + 1u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DC0Cu); st8((c.r[28].w[0] - 24904u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x0036DC0Cu) [[unlikely]] return; }
L_0036DC0C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 24924u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0036DC64; } }
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 1;
L_0036DC1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DC24u);  if (depth < kMaxDepth) unit_009B(c, 352u, depth + 1u); else { c.pc = 0x0036F1A0u; return; } if (c.pc != 0x0036DC24u) [[unlikely]] return; }
L_0036DC24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 24900u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0036DC64; } }
L_0036DC2C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 9384u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0036DC64; } }
    set32(c.r[3], c.r[4].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 24904u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0036DC64; } }
    set32(c.r[3], 0u + 10u);
    c.budget -= 1;
L_0036DC60:
    st8((c.r[28].w[0] - 24896u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_0036DC64:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0036DC70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24904u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(18ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_0036E67C; } }
    set32(c.r[5], c.r[4].w[0] - 22624u);
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x0036C000u < 16384u) { entry = entries_009B[(t - 0x0036C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0036DCA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DCA8u);  if (depth < kMaxDepth) unit_0097(c, 178u, depth + 1u); else { c.pc = 0x0035D5B0u; return; } if (c.pc != 0x0036DCA8u) [[unlikely]] return; }
L_0036DCA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036E67C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DCB8u);  if (depth < kMaxDepth) unit_009E(c, 18u, depth + 1u); else { c.pc = 0x003782D0u; return; } if (c.pc != 0x0036DCB8u) [[unlikely]] return; }
L_0036DCB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 16u);  if (t) { goto L_0036DCEC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24904u)));
    st32((c.r[28].w[0] - 24912u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[28].w[0] - 24924u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 4u);
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[28].w[0] - 24904u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DCE4u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x0036DCE4u) [[unlikely]] return; }
L_0036DCE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0036E680; } }
L_0036DCEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DCF4u);  if (depth < kMaxDepth) unit_009E(c, 19u, depth + 1u); else { c.pc = 0x00378310u; return; } if (c.pc != 0x0036DCF4u) [[unlikely]] return; }
L_0036DCF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (t) { goto L_0036DD18; } }
    set32(c.r[2], 0u + 4u);
    set32(c.r[5], 0u + 54u);
    st8((c.r[28].w[0] - 24900u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DD10u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x0036DD10u) [[unlikely]] return; }
L_0036DD10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036E67C; } }
L_0036DD18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DD20u);  if (depth < kMaxDepth) unit_009B(c, 352u, depth + 1u); else { c.pc = 0x0036F1A0u; return; } if (c.pc != 0x0036DD20u) [[unlikely]] return; }
L_0036DD20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 24900u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0036E67C; } }
L_0036DD28:
    set32(c.r[4], ld32((c.r[28].w[0] - 24912u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    st32((c.r[28].w[0] - 24912u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 24912u)));
    c.budget -= 6;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { goto L_0036E67C; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[28].w[0] - 24904u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] - 10960u);
    set32(c.r[5], 0u + 7u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    st8((c.r[28].w[0] - 24924u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 24928u), static_cast<std::uint8_t>(0u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DD68u); st8((c.r[28].w[0] - 24920u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x0036DD68u) [[unlikely]] return; }
L_0036DD68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036E67C; } }
L_0036DD70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DD78u);  if (depth < kMaxDepth) unit_009E(c, 18u, depth + 1u); else { c.pc = 0x003782D0u; return; } if (c.pc != 0x0036DD78u) [[unlikely]] return; }
L_0036DD78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036DDD4; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24908u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24920u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[2], c.r[2].w[0] + 26624u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0036DDD4; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24904u)));
    st8((c.r[28].w[0] - 24928u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 16u);
    st32((c.r[28].w[0] - 24912u), c.r[2].w[0]);
    set32(c.r[5], 0u + 4u);
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[28].w[0] - 24904u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DDCCu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x0036DDCCu) [[unlikely]] return; }
L_0036DDCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036E67C; } }
L_0036DDD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DDDCu);  if (depth < kMaxDepth) unit_009E(c, 19u, depth + 1u); else { c.pc = 0x00378310u; return; } if (c.pc != 0x0036DDDCu) [[unlikely]] return; }
L_0036DDDC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 8192u);  if (t) { goto L_0036DDFC; } }
    set32(c.r[5], 0u + 54u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DDF4u); st8((c.r[28].w[0] - 24904u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x0036DDF4u) [[unlikely]] return; }
L_0036DDF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036E67C; } }
L_0036DDFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DE04u);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x0036DE04u) [[unlikely]] return; }
L_0036DE04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036DE34; } }
    c.r[3].d[0] = ld8((c.r[28].w[0] - 25310u));
    set32(c.r[2], 0u + 82u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 43u);  if (t) { goto L_0036DE34; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 4096u);  if (t) { goto L_0036DEC8; } }
    c.r[2].d[0] = ld8((c.r[28].w[0] - 25309u));
    c.r[2].d[0] = c.r[2].d[0] & 34ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036DEC8; } }
L_0036DE34:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24920u)));
    set32(c.r[5], 0u + 43u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DE4Cu); st8((c.r[28].w[0] - 24920u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x0036DE4Cu) [[unlikely]] return; }
L_0036DE4C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24920u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_0036E67C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24908u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_0036DEBC; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[5], c.r[3].w[0] + 26624u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 3;
L_0036DE70:
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].d[0] = c.r[4].sd[0] < 5ll ? 1ull : 0ull;  if (t) { goto L_0036DE94; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[3].d[0] = c.r[4].sd[0] < 50ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036DE70u | kUnwind; return; } goto L_0036DE70; } }
    c.r[1].d[0] = c.r[4].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 2;
L_0036DE94:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[4].w[0] - 5u);  if (t) { goto L_0036DEAC; } }
    set32(c.r[3], c.r[4].w[0] - 1u);
    if (c.r[4].d[0] == 0) c.r[3].d[0] = 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 24920u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0036E67C; } }
L_0036DEAC:
    st8((c.r[28].w[0] - 24908u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 24920u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0036E67C; } }
L_0036DEBC:
    st8((c.r[28].w[0] - 24908u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 24920u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0036E67C; } }
L_0036DEC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DED0u);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x0036DED0u) [[unlikely]] return; }
L_0036DED0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036DEF0; } }
    c.r[4].d[0] = ld8((c.r[28].w[0] - 25310u));
    set32(c.r[3], 0u + 81u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 43u);  if (t) { goto L_0036DEF0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0036E67C; } }
L_0036DEF0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24920u)));
    set32(c.r[5], 0u + 43u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DF08u); st8((c.r[28].w[0] - 24920u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x0036DF08u) [[unlikely]] return; }
L_0036DF08:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24920u)));
    c.r[1].d[0] = c.r[6].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0036DF60; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24908u)));
    set32(c.r[3], c.r[5].w[0] + c.r[6].w[0]);
    c.r[1].d[0] = c.r[3].sd[0] < 50ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[3].w[0] << 5);  if (t) { goto L_0036DF44; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[3], c.r[3].w[0] + 26624u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[5].w[0] + 1u);  if (t) { goto L_0036DF50; } }
L_0036DF44:
    st8((c.r[28].w[0] - 24920u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 24908u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0036E67C; } }
L_0036DF50:
    st8((c.r[28].w[0] - 24908u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 24920u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0036E67C; } }
L_0036DF60:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24908u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[3], c.r[3].w[0] + 26624u);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[6].w[0] - 1u);  if (t) { goto L_0036E67C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 24920u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0036E67C; } }
L_0036DF8C:
    set32(c.r[4], ld32((c.r[28].w[0] - 24912u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    st32((c.r[28].w[0] - 24912u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 24912u)));
    c.budget -= 6;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { goto L_0036E67C; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[28].w[0] - 24904u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 32u);
    st32((c.r[28].w[0] - 24912u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DFBCu); st8((c.r[28].w[0] - 24928u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0095(c, 14u, depth + 1u); else { c.pc = 0x003541E0u; return; } if (c.pc != 0x0036DFBCu) [[unlikely]] return; }
L_0036DFBC:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] - 10320u);
    set32(c.r[5], 0u + 6u);
    st8((c.r[3].w[0] + 5510u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DFE0u); st8((c.r[2].w[0] + 5511u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x0036DFE0u) [[unlikely]] return; }
L_0036DFE0:
    set32(c.r[3], 0u + 15u);
    st8((c.r[2].w[0] + 285u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[3], c.r[3].w[0] + 5510u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 28u), c.r[3].w[0]);  if (t) { goto L_0036E67C; } }
L_0036DFFC:
    set32(c.r[4], ld32((c.r[28].w[0] - 24912u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    st32((c.r[28].w[0] - 24912u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 24912u)));
    c.budget -= 6;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { goto L_0036E67C; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 24904u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0036E67C; } }
L_0036E020:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E028u); set32(c.r[4], 0u + 8192u);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x0036E028u) [[unlikely]] return; }
L_0036E028:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036E058; } }
    c.r[3].d[0] = ld8((c.r[28].w[0] - 25310u));
    set32(c.r[2], 0u + 82u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 43u);  if (t) { goto L_0036E058; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 4096u);  if (t) { goto L_0036E090; } }
    c.r[2].d[0] = ld8((c.r[28].w[0] - 25309u));
    c.r[2].d[0] = c.r[2].d[0] & 34ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036E090; } }
L_0036E058:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 5510u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[3].w[0] + 5510u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[3], c.r[2].w[0] + 5510u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 5510u)));
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[5], 0u + 43u);  if (t) { goto L_0036E080; } }
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0036E080:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E088u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x0036E088u) [[unlikely]] return; }
L_0036E088:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036E67C; } }
L_0036E090:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E098u);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x0036E098u) [[unlikely]] return; }
L_0036E098:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036E0B8; } }
    c.r[3].d[0] = ld8((c.r[28].w[0] - 25310u));
    set32(c.r[2], 0u + 81u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 43u);  if (t) { goto L_0036E0B8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0036E0F8; } }
L_0036E0B8:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 5510u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 5510u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[3], c.r[2].w[0] + 5510u);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 5510u));
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[5], 0u + 43u);  if (t) { goto L_0036E0E8; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0036E0E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E0F0u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x0036E0F0u) [[unlikely]] return; }
L_0036E0F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036E67C; } }
L_0036E0F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E100u);  if (depth < kMaxDepth) unit_009E(c, 18u, depth + 1u); else { c.pc = 0x003782D0u; return; } if (c.pc != 0x0036E100u) [[unlikely]] return; }
L_0036E100:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036E164; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24908u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24920u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[2], c.r[2].w[0] + 26624u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036E164; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24904u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], 0u + 16u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[28].w[0] - 24904u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[3].w[0] + 5511u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[5], 0u + 4u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E15Cu); st32((c.r[28].w[0] - 24912u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x0036E15Cu) [[unlikely]] return; }
L_0036E15C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036E67C; } }
L_0036E164:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E16Cu);  if (depth < kMaxDepth) unit_009E(c, 19u, depth + 1u); else { c.pc = 0x00378310u; return; } if (c.pc != 0x0036E16Cu) [[unlikely]] return; }
L_0036E16C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 54u);  if (t) { goto L_0036E67C; } }
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E180u); st8((c.r[28].w[0] - 24904u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x0036E180u) [[unlikely]] return; }
L_0036E180:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E188u); set32(c.r[4], 0u + 15u);  if (depth < kMaxDepth) unit_0094(c, 215u, depth + 1u); else { c.pc = 0x00352810u; return; } if (c.pc != 0x0036E188u) [[unlikely]] return; }
L_0036E188:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036E67C; } }
L_0036E190:
    set32(c.r[4], ld32((c.r[28].w[0] - 24912u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    st32((c.r[28].w[0] - 24912u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 24912u)));
    c.budget -= 6;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { goto L_0036E67C; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[28].w[0] - 24904u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 12u);
    set32(c.r[4], 0u + 15u);
    st8((c.r[3].w[0] + 5511u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E1C8u); st32((c.r[28].w[0] - 24912u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0094(c, 215u, depth + 1u); else { c.pc = 0x00352810u; return; } if (c.pc != 0x0036E1C8u) [[unlikely]] return; }
L_0036E1C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036E67C; } }
L_0036E1D0:
    set32(c.r[4], ld32((c.r[28].w[0] - 24912u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    st32((c.r[28].w[0] - 24912u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 24912u)));
    c.budget -= 6;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { goto L_0036E67C; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[4], 0u + 2u);
    c.r[5].d[0] = ld8((c.r[5].w[0] + 5510u));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[4], 0u + 1u);  if (t) { goto L_0036E278; } }
    c.budget -= 2;
    if (c.r[5].d[0] == c.r[4].d[0]) { set32(c.r[3], c.r[3].w[0] + 1u);  goto L_0036E270; }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0036E214; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036E67C; } }
L_0036E214:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24908u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24920u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[2], c.r[2].w[0] + 26624u);
    set32(c.r[4], c.r[28].w[0] - 25920u);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[28].w[0] - 24904u), static_cast<std::uint8_t>(0u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E240u); st8((c.r[28].w[0] - 24928u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0006(c, 36u, depth + 1u); else { c.pc = 0x00118760u; return; } if (c.pc != 0x0036E240u) [[unlikely]] return; }
L_0036E240:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 25920u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[28].w[0] - 25920u);  if (t) { goto L_0036E268; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E254u);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x0036E254u) [[unlikely]] return; }
L_0036E254:
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0036E268; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 24932u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0036E67C; } }
L_0036E268:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 24932u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0036E67C; } }
L_0036E270:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 24904u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0036E67C; } }
L_0036E278:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 24904u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0036E67C; } }
L_0036E280:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[28].w[0] - 24904u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24908u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24920u)));
    set32(c.r[4], 0u + 1u);
    st8((c.r[28].w[0] - 24916u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], 0u + 32u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[2].w[0] << 5);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[2], c.r[2].w[0] + 26624u);
    st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[5], c.r[28].w[0] - 24916u);
    set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], 0u + 60u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E2C8u); st8((c.r[28].w[0] - 24928u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0094(c, 204u, depth + 1u); else { c.pc = 0x00352600u; return; } if (c.pc != 0x0036E2C8u) [[unlikely]] return; }
L_0036E2C8:
    set32(c.r[4], c.r[28].w[0] - 25928u);
    set32(c.r[6], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E2D8u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x0036E2D8u) [[unlikely]] return; }
L_0036E2D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[4], c.r[2].w[0] - 32048u);
    set32(c.r[6], 0u + 18u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E2ECu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x0036E2ECu) [[unlikely]] return; }
L_0036E2EC:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24908u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24920u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[2], c.r[2].w[0] + 26624u);
    set32(c.r[4], c.r[28].w[0] - 25928u);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[6], 0u + 8u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E314u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0006(c, 60u, depth + 1u); else { c.pc = 0x00118D18u; return; } if (c.pc != 0x0036E314u) [[unlikely]] return; }
L_0036E314:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24908u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24920u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[4], c.r[2].w[0] - 32048u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[2], c.r[2].w[0] + 26624u);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], 0u + 18u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E344u); set32(c.r[5], c.r[2].w[0] + 8u);  if (depth < kMaxDepth) unit_0006(c, 60u, depth + 1u); else { c.pc = 0x00118D18u; return; } if (c.pc != 0x0036E344u) [[unlikely]] return; }
L_0036E344:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036E67C; } }
L_0036E34C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 9384u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = c.r[4].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[4].sd[0] > 0;  if (t) { goto L_0036E67C; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 24904u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0036E67C; } }
L_0036E37C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E384u);  if (depth < kMaxDepth) unit_009E(c, 19u, depth + 1u); else { c.pc = 0x00378310u; return; } if (c.pc != 0x0036E384u) [[unlikely]] return; }
L_0036E384:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 54u);  if (t) { goto L_0036E3BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E394u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x0036E394u) [[unlikely]] return; }
L_0036E394:
    set32(c.r[2], 0u + 1u);
    st8((c.r[28].w[0] - 25892u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 12u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], 0u + 60u);
    st8((c.r[28].w[0] - 24904u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E3B4u); st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0094(c, 215u, depth + 1u); else { c.pc = 0x00352810u; return; } if (c.pc != 0x0036E3B4u) [[unlikely]] return; }
L_0036E3B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036E67C; } }
L_0036E3BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E3C4u);  if (depth < kMaxDepth) unit_009E(c, 18u, depth + 1u); else { c.pc = 0x003782D0u; return; } if (c.pc != 0x0036E3C4u) [[unlikely]] return; }
L_0036E3C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[28].w[0] - 24916u);  if (t) { goto L_0036E404; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24904u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], 0u + 16u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[28].w[0] - 24904u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[3].w[0] + 5511u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[5], 0u + 4u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E3FCu); st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x0036E3FCu) [[unlikely]] return; }
L_0036E3FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036E67C; } }
L_0036E404:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E410u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009D(c, 319u, depth + 1u); else { c.pc = 0x00377620u; return; } if (c.pc != 0x0036E410u) [[unlikely]] return; }
L_0036E410:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036E67C; } }
L_0036E418:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 9384u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 9384u)));
    c.budget -= 9;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { goto L_0036E67C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24916u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] + 1u);  if (t) { goto L_0036E46C; } }
    set32(c.r[2], 0u + 13u);
    st8((c.r[28].w[0] - 24904u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 12u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], 0u + 60u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E464u); st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0094(c, 215u, depth + 1u); else { c.pc = 0x00352810u; return; } if (c.pc != 0x0036E464u) [[unlikely]] return; }
L_0036E464:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036E67C; } }
L_0036E46C:
    st8((c.r[28].w[0] - 24904u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    st8((c.r[28].w[0] - 25892u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 12u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], 0u + 60u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E48Cu); st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0094(c, 215u, depth + 1u); else { c.pc = 0x00352810u; return; } if (c.pc != 0x0036E48Cu) [[unlikely]] return; }
L_0036E48C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036E67C; } }
L_0036E494:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 9384u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0036E67C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 24904u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0036E67C; } }
L_0036E4C0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24908u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24920u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[3], c.r[2].w[0] + 26624u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[2], c.r[2].w[0] + 26624u);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[6], c.r[4].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] << 5);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[6].w[0] << 5);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], 0u + 50u);
    set32(c.r[2], c.r[2].w[0] - c.r[6].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E500u); set32(c.r[6], c.r[2].w[0] << 5);  if (depth < kMaxDepth) unit_0005(c, 230u, depth + 1u); else { c.pc = 0x00116C60u; return; } if (c.pc != 0x0036E500u) [[unlikely]] return; }
L_0036E500:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 26144u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st8((c.r[1].w[0] + 28192u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st8((c.r[1].w[0] + 28200u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[1].w[0] + 28220u), 0u);  if (t) { goto L_0036E550; } }
    set32(c.r[2], 0u + 15u);
    st8((c.r[28].w[0] - 24904u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    st8((c.r[28].w[0] - 25892u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[4], c.r[2].w[0] - 3616u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[5], c.r[2].w[0] + 26624u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E548u); set32(c.r[6], 0u + 1600u);  if (depth < kMaxDepth) unit_0005(c, 230u, depth + 1u); else { c.pc = 0x00116C60u; return; } if (c.pc != 0x0036E548u) [[unlikely]] return; }
L_0036E548:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036E67C; } }
L_0036E550:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24904u)));
    st8((c.r[28].w[0] - 25892u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E564u); st8((c.r[28].w[0] - 24904u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0020(c, 80u, depth + 1u); else { c.pc = 0x00180B50u; return; } if (c.pc != 0x0036E564u) [[unlikely]] return; }
L_0036E564:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[5], c.r[2].w[0] + 26624u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01B90000u);
    set32(c.r[6], 0u + 1600u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E57Cu); c.r[4].d[0] = c.r[2].d[0] | 61440ull;  if (depth < kMaxDepth) unit_0005(c, 230u, depth + 1u); else { c.pc = 0x00116C60u; return; } if (c.pc != 0x0036E57Cu) [[unlikely]] return; }
L_0036E57C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036E67C; } }
L_0036E584:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E58Cu);  if (depth < kMaxDepth) unit_0020(c, 81u, depth + 1u); else { c.pc = 0x00180B60u; return; } if (c.pc != 0x0036E58Cu) [[unlikely]] return; }
L_0036E58C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 15u);  if (t) { goto L_0036E67C; } }
    st8((c.r[28].w[0] - 24904u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; st8((c.r[28].w[0] - 25892u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0036E5C8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 26624u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[5], c.r[2].w[0] - 3616u);
    set32(c.r[6], 0u + 1600u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E5C0u); st8((c.r[28].w[0] - 24904u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0005(c, 230u, depth + 1u); else { c.pc = 0x00116C60u; return; } if (c.pc != 0x0036E5C0u) [[unlikely]] return; }
L_0036E5C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036E67C; } }
L_0036E5C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[4], c.r[2].w[0] - 3616u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[5], c.r[2].w[0] + 26624u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E5E0u); set32(c.r[6], 0u + 1600u);  if (depth < kMaxDepth) unit_0005(c, 230u, depth + 1u); else { c.pc = 0x00116C60u; return; } if (c.pc != 0x0036E5E0u) [[unlikely]] return; }
L_0036E5E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036E67C; } }
L_0036E5E8:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[28].w[0] - 24904u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 152u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], 0u + 145u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E604u); st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0094(c, 199u, depth + 1u); else { c.pc = 0x00352520u; return; } if (c.pc != 0x0036E604u) [[unlikely]] return; }
L_0036E604:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036E67C; } }
L_0036E60C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 9384u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = c.r[4].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[4].sd[0] > 0;  if (t) { goto L_0036E67C; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[28].w[0] - 24904u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 12u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], 0u + 145u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E64Cu); st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0094(c, 215u, depth + 1u); else { c.pc = 0x00352810u; return; } if (c.pc != 0x0036E64Cu) [[unlikely]] return; }
L_0036E64C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036E67C; } }
L_0036E654:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 9384u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0036E67C; } }
    st8((c.r[28].w[0] - 24904u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0036E67C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_0036E680:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0036E690:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24904u)));
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0036EAD4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[3].w[0] - 22544u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0036C000u < 16384u) { entry = entries_009B[(t - 0x0036C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0036E6C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E6CCu);  if (depth < kMaxDepth) unit_0097(c, 178u, depth + 1u); else { c.pc = 0x0035D5B0u; return; } if (c.pc != 0x0036E6CCu) [[unlikely]] return; }
L_0036E6CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036EAD4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E6DCu);  if (depth < kMaxDepth) unit_009E(c, 18u, depth + 1u); else { c.pc = 0x003782D0u; return; } if (c.pc != 0x0036E6DCu) [[unlikely]] return; }
L_0036E6DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036E71C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24932u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0036EAD4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24904u)));
    set32(c.r[5], 0u + 4u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E708u); st8((c.r[28].w[0] - 24904u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x0036E708u) [[unlikely]] return; }
L_0036E708:
    set32(c.r[3], 0u + 16u);
    st32((c.r[28].w[0] - 24912u), c.r[3].w[0]);
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 24924u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0036EAD4; } }
L_0036E71C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E724u);  if (depth < kMaxDepth) unit_009E(c, 19u, depth + 1u); else { c.pc = 0x00378310u; return; } if (c.pc != 0x0036E724u) [[unlikely]] return; }
L_0036E724:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (t) { goto L_0036E74C; } }
    set32(c.r[2], 0u + 4u);
    set32(c.r[5], 0u + 54u);
    st8((c.r[28].w[0] - 24900u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E740u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x0036E740u) [[unlikely]] return; }
L_0036E740:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0036EAD8; } }
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 1;
L_0036E74C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E754u);  if (depth < kMaxDepth) unit_009B(c, 352u, depth + 1u); else { c.pc = 0x0036F1A0u; return; } if (c.pc != 0x0036E754u) [[unlikely]] return; }
L_0036E754:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 24900u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0036EAD4; } }
L_0036E75C:
    set32(c.r[3], ld32((c.r[28].w[0] - 24912u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[28].w[0] - 24912u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 24912u)));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0036EAD4; } }
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[28].w[0] - 24904u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[28].w[0] - 24920u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E788u); st8((c.r[28].w[0] - 24924u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_009D(c, 279u, depth + 1u); else { c.pc = 0x00376B80u; return; } if (c.pc != 0x0036E788u) [[unlikely]] return; }
L_0036E788:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E790u);  if (depth < kMaxDepth) unit_009D(c, 283u, depth + 1u); else { c.pc = 0x00376BE0u; return; } if (c.pc != 0x0036E790u) [[unlikely]] return; }
L_0036E790:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] + 26960u);
    set32(c.r[4], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E7A4u); set32(c.r[5], 0u + 58u);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x0036E7A4u) [[unlikely]] return; }
L_0036E7A4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] + 26960u);
    set32(c.r[4], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E7B8u); set32(c.r[5], 0u + 59u);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x0036E7B8u) [[unlikely]] return; }
L_0036E7B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] + 26960u);
    set32(c.r[4], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E7CCu); set32(c.r[5], 0u + 30u);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x0036E7CCu) [[unlikely]] return; }
L_0036E7CC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] - 12384u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E7E0u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x0036E7E0u) [[unlikely]] return; }
L_0036E7E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036EAD4; } }
L_0036E7E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E7F0u);  if (depth < kMaxDepth) unit_009E(c, 65u, depth + 1u); else { c.pc = 0x00378720u; return; } if (c.pc != 0x0036E7F0u) [[unlikely]] return; }
L_0036E7F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036E820; } }
    set32(c.r[8], 0u + 3u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[6], c.r[2].w[0] - 32016u);
    set32(c.r[7], 0u + 96u);
    st8((c.r[28].w[0] - 24904u), static_cast<std::uint8_t>(c.r[8].w[0]));
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E818u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 67u, depth + 1u); else { c.pc = 0x003788B0u; return; } if (c.pc != 0x0036E818u) [[unlikely]] return; }
L_0036E818:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036EAD4; } }
L_0036E820:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24920u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 2048u);  if (t) { goto L_0036E86C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E834u); set32(c.r[4], 0u + 1024u);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x0036E834u) [[unlikely]] return; }
L_0036E834:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0036E850; } }
    c.r[3].d[0] = ld8((c.r[28].w[0] - 25310u));
    set32(c.r[2], 0u + 79u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 32u);  if (t) { goto L_0036E8A0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0036E850:
    set32(c.r[5], 0u + 43u);
    st8((c.r[28].w[0] - 24920u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E860u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x0036E860u) [[unlikely]] return; }
L_0036E860:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036E89C; } }
    set32(c.r[4], 0u + 2048u);
    c.budget -= 1;
L_0036E86C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E874u);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x0036E874u) [[unlikely]] return; }
L_0036E874:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 43u);  if (t) { goto L_0036E890; } }
    c.r[3].d[0] = ld8((c.r[28].w[0] - 25310u));
    set32(c.r[2], 0u + 80u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0036E89C; } }
    set32(c.r[5], 0u + 43u);
    c.budget -= 1;
L_0036E890:
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E89Cu); st8((c.r[28].w[0] - 24920u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x0036E89Cu) [[unlikely]] return; }
L_0036E89C:
    set32(c.r[4], 0u + 32u);
    c.budget -= 1;
L_0036E8A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E8A8u);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x0036E8A8u) [[unlikely]] return; }
L_0036E8A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036E8D8; } }
    set32(c.r[2], 0u + 16u);
    st32((c.r[28].w[0] - 24912u), c.r[2].w[0]);
    set32(c.r[5], 0u + 4u);
    set32(c.r[2], 0u + 1u);
    st8((c.r[28].w[0] - 24904u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[28].w[0] - 24924u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E8D0u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x0036E8D0u) [[unlikely]] return; }
L_0036E8D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036EAD4; } }
L_0036E8D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E8E0u);  if (depth < kMaxDepth) unit_009E(c, 19u, depth + 1u); else { c.pc = 0x00378310u; return; } if (c.pc != 0x0036E8E0u) [[unlikely]] return; }
L_0036E8E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036EAD4; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24920u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0036EAD4; } }
    set32(c.r[2], 0u + 1u);
    set32(c.r[5], 0u + 54u);
    st8((c.r[28].w[0] - 24920u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E908u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x0036E908u) [[unlikely]] return; }
L_0036E908:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036EAD4; } }
L_0036E910:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E918u);  if (depth < kMaxDepth) unit_009E(c, 95u, depth + 1u); else { c.pc = 0x00378F00u; return; } if (c.pc != 0x0036E918u) [[unlikely]] return; }
L_0036E918:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036EAD4; } }
    set32(c.r[2], 0u + 2u);
    set32(c.r[5], 0u + 4u);
    st8((c.r[28].w[0] - 24904u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E934u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x0036E934u) [[unlikely]] return; }
L_0036E934:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036EAD4; } }
L_0036E93C:
    set32(c.r[3], ld32((c.r[28].w[0] - 24912u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[28].w[0] - 24912u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 24912u)));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0036EAD4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24920u)));
    set32(c.r[3], c.r[5].w[0] + 1u);
    st8((c.r[28].w[0] - 24904u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; st8((c.r[28].w[0] - 24924u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0036E98C; } }
    set32(c.r[2], 0u + 92u);
    st32((c.r[28].w[0] - 24912u), c.r[2].w[0]);
    st8((c.r[28].w[0] - 24916u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E97Cu); c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(92ll);  if (depth < kMaxDepth) unit_0094(c, 199u, depth + 1u); else { c.pc = 0x00352520u; return; } if (c.pc != 0x0036E97Cu) [[unlikely]] return; }
L_0036E97C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E984u); st8((c.r[28].w[0] - 25892u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0098(c, 336u, depth + 1u); else { c.pc = 0x00362640u; return; } if (c.pc != 0x0036E984u) [[unlikely]] return; }
L_0036E984:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036EAD4; } }
L_0036E98C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E994u);  if (depth < kMaxDepth) unit_009B(c, 92u, depth + 1u); else { c.pc = 0x0036CF20u; return; } if (c.pc != 0x0036E994u) [[unlikely]] return; }
L_0036E994:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036EAD4; } }
L_0036E99C:
    set32(c.r[3], ld32((c.r[28].w[0] - 24912u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[28].w[0] - 24912u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 24912u)));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0036EAD4; } }
    set32(c.r[3], c.r[5].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 24904u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0036EAD4; } }
L_0036E9C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E9C8u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009B(c, 351u, depth + 1u); else { c.pc = 0x0036F190u; return; } if (c.pc != 0x0036E9C8u) [[unlikely]] return; }
L_0036E9C8:
    c.r[4].d[0] = c.r[2].d[0] << 56;
    set32(c.r[3], 0u + 2u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 5;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 8u);  goto L_0036EA1C; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 7u);  goto L_0036E9FC; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0036EAD4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036EAD4; } }
    set32(c.r[2], 0u + 7u);
    c.budget -= 1;
L_0036E9FC:
    c.r[4].d[0] = ld8((c.r[28].w[0] - 24916u));
    st8((c.r[28].w[0] - 24904u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 12u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036EA10u); st32((c.r[28].w[0] - 24912u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0094(c, 215u, depth + 1u); else { c.pc = 0x00352810u; return; } if (c.pc != 0x0036EA10u) [[unlikely]] return; }
L_0036EA10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036EAD4; } }
    set32(c.r[2], 0u + 8u);
    c.budget -= 1;
L_0036EA1C:
    c.r[4].d[0] = ld8((c.r[28].w[0] - 24916u));
    st8((c.r[28].w[0] - 24904u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 12u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036EA30u); st32((c.r[28].w[0] - 24912u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0094(c, 215u, depth + 1u); else { c.pc = 0x00352810u; return; } if (c.pc != 0x0036EA30u) [[unlikely]] return; }
L_0036EA30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036EAD4; } }
L_0036EA38:
    set32(c.r[3], ld32((c.r[28].w[0] - 24912u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[28].w[0] - 24912u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 24912u)));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0036EAD4; } }
    set32(c.r[2], 0u + 9u);
    st8((c.r[28].w[0] - 24904u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 92u);
    st32((c.r[28].w[0] - 24912u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A70000u);
    set32(c.r[4], 0u + 20u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036EA70u); set32(c.r[5], c.r[2].w[0] + 28384u);  if (depth < kMaxDepth) unit_0094(c, 207u, depth + 1u); else { c.pc = 0x003526A0u; return; } if (c.pc != 0x0036EA70u) [[unlikely]] return; }
L_0036EA70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036EAD4; } }
L_0036EA78:
    set32(c.r[3], ld32((c.r[28].w[0] - 24912u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[28].w[0] - 24912u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 24912u)));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0036EAD4; } }
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[28].w[0] - 24904u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 92u);
    set32(c.r[4], 0u + 129u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036EAA8u); st32((c.r[28].w[0] - 24912u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0094(c, 199u, depth + 1u); else { c.pc = 0x00352520u; return; } if (c.pc != 0x0036EAA8u) [[unlikely]] return; }
L_0036EAA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036EAD4; } }
L_0036EAB0:
    set32(c.r[3], ld32((c.r[28].w[0] - 24912u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[28].w[0] - 24912u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 24912u)));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0036EAD4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036EAD4u); st8((c.r[28].w[0] - 25892u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 345u, depth + 1u); else { c.pc = 0x00362760u; return; } if (c.pc != 0x0036EAD4u) [[unlikely]] return; }
L_0036EAD4:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_0036EAD8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0036EAE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24904u)));
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0036ECDC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[3].w[0] - 22496u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0036C000u < 16384u) { entry = entries_009B[(t - 0x0036C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0036EB14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036EB1Cu);  if (depth < kMaxDepth) unit_0097(c, 178u, depth + 1u); else { c.pc = 0x0035D5B0u; return; } if (c.pc != 0x0036EB1Cu) [[unlikely]] return; }
L_0036EB1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036ECDC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036EB2Cu);  if (depth < kMaxDepth) unit_009E(c, 18u, depth + 1u); else { c.pc = 0x003782D0u; return; } if (c.pc != 0x0036EB2Cu) [[unlikely]] return; }
L_0036EB2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036EB84; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24932u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0036ECDC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24904u)));
    set32(c.r[5], 0u + 4u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036EB58u); st8((c.r[28].w[0] - 24904u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x0036EB58u) [[unlikely]] return; }
L_0036EB58:
    set32(c.r[2], 0u + 62u);
    st32((c.r[28].w[0] - 24912u), c.r[2].w[0]);
    set32(c.r[2], 0u + 114u);
    st8((c.r[28].w[0] - 24916u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036EB70u); c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(114ll);  if (depth < kMaxDepth) unit_0094(c, 199u, depth + 1u); else { c.pc = 0x00352520u; return; } if (c.pc != 0x0036EB70u) [[unlikely]] return; }
L_0036EB70:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036EB7Cu); st8((c.r[28].w[0] - 24924u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 338u, depth + 1u); else { c.pc = 0x00362680u; return; } if (c.pc != 0x0036EB7Cu) [[unlikely]] return; }
L_0036EB7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0036ECE0; } }
L_0036EB84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036EB8Cu);  if (depth < kMaxDepth) unit_009E(c, 19u, depth + 1u); else { c.pc = 0x00378310u; return; } if (c.pc != 0x0036EB8Cu) [[unlikely]] return; }
L_0036EB8C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (t) { goto L_0036EBB4; } }
    set32(c.r[2], 0u + 4u);
    set32(c.r[5], 0u + 54u);
    st8((c.r[28].w[0] - 24900u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036EBA8u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x0036EBA8u) [[unlikely]] return; }
L_0036EBA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036ECDC; } }
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 1;
L_0036EBB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036EBBCu);  if (depth < kMaxDepth) unit_009B(c, 352u, depth + 1u); else { c.pc = 0x0036F1A0u; return; } if (c.pc != 0x0036EBBCu) [[unlikely]] return; }
L_0036EBBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 24900u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0036ECDC; } }
L_0036EBC4:
    set32(c.r[3], ld32((c.r[28].w[0] - 24912u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[28].w[0] - 24912u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 24912u)));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0036ECDC; } }
    set32(c.r[3], c.r[5].w[0] + 1u);
    st8((c.r[28].w[0] - 24904u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 24924u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0036ECDC; } }
L_0036EBEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036EBF4u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009B(c, 351u, depth + 1u); else { c.pc = 0x0036F190u; return; } if (c.pc != 0x0036EBF4u) [[unlikely]] return; }
L_0036EBF4:
    c.r[4].d[0] = c.r[2].d[0] << 56;
    set32(c.r[3], 0u + 2u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 5;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 5u);  goto L_0036EC48; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 3u);  goto L_0036EC28; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0036ECDC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036ECDC; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_0036EC28:
    c.r[4].d[0] = ld8((c.r[28].w[0] - 24916u));
    st8((c.r[28].w[0] - 24904u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036EC3Cu); st32((c.r[28].w[0] - 24912u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0094(c, 215u, depth + 1u); else { c.pc = 0x00352810u; return; } if (c.pc != 0x0036EC3Cu) [[unlikely]] return; }
L_0036EC3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036ECDC; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 1;
L_0036EC48:
    c.r[4].d[0] = ld8((c.r[28].w[0] - 24916u));
    st8((c.r[28].w[0] - 24904u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036EC5Cu); st32((c.r[28].w[0] - 24912u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0094(c, 215u, depth + 1u); else { c.pc = 0x00352810u; return; } if (c.pc != 0x0036EC5Cu) [[unlikely]] return; }
L_0036EC5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036ECDC; } }
L_0036EC64:
    set32(c.r[3], ld32((c.r[28].w[0] - 24912u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[28].w[0] - 24912u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 24912u)));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0036ECDC; } }
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[28].w[0] - 24904u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 92u);
    st32((c.r[28].w[0] - 24912u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A70000u);
    set32(c.r[4], 0u + 20u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036EC9Cu); set32(c.r[5], c.r[2].w[0] + 28384u);  if (depth < kMaxDepth) unit_0094(c, 207u, depth + 1u); else { c.pc = 0x003526A0u; return; } if (c.pc != 0x0036EC9Cu) [[unlikely]] return; }
L_0036EC9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036ECDC; } }
L_0036ECA4:
    set32(c.r[3], ld32((c.r[28].w[0] - 24912u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[28].w[0] - 24912u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 24912u)));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0036ECDC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036ECC4u);  if (depth < kMaxDepth) unit_0098(c, 345u, depth + 1u); else { c.pc = 0x00362760u; return; } if (c.pc != 0x0036ECC4u) [[unlikely]] return; }
L_0036ECC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036ECDC; } }
L_0036ECCC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24896u)));
    st8((c.r[28].w[0] - 24904u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[28].w[0] - 24896u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_0036ECDC:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_0036ECE0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0036ECF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24904u)));
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0036F064; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[3].w[0] - 22464u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0036C000u < 16384u) { entry = entries_009B[(t - 0x0036C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0036ED24:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24904u)));
    st8((c.r[28].w[0] - 24900u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 24924u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036ED3Cu); st8((c.r[28].w[0] - 24904u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009D(c, 279u, depth + 1u); else { c.pc = 0x00376B80u; return; } if (c.pc != 0x0036ED3Cu) [[unlikely]] return; }
L_0036ED3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036ED44u);  if (depth < kMaxDepth) unit_009D(c, 283u, depth + 1u); else { c.pc = 0x00376BE0u; return; } if (c.pc != 0x0036ED44u) [[unlikely]] return; }
L_0036ED44:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] - 10688u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036ED58u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x0036ED58u) [[unlikely]] return; }
L_0036ED58:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] + 26960u);
    set32(c.r[4], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036ED6Cu); set32(c.r[5], 0u + 58u);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x0036ED6Cu) [[unlikely]] return; }
L_0036ED6C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] + 26960u);
    set32(c.r[4], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036ED80u); set32(c.r[5], 0u + 59u);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x0036ED80u) [[unlikely]] return; }
L_0036ED80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] + 26960u);
    set32(c.r[4], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036ED94u); set32(c.r[5], 0u + 32u);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x0036ED94u) [[unlikely]] return; }
L_0036ED94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036ED9Cu);  if (depth < kMaxDepth) unit_009A(c, 532u, depth + 1u); else { c.pc = 0x0036B670u; return; } if (c.pc != 0x0036ED9Cu) [[unlikely]] return; }
L_0036ED9C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    c.r[4].d[0] = ld8((c.r[1].w[0] - 5673u));
    set32(c.r[3], 0u + 3u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0036EDD4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    c.r[3].d[0] = ld16((c.r[1].w[0] - 5678u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0036EDD4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[3], 0u + 5u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 5232u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0036F064; } }
L_0036EDD4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] + 26960u);
    set32(c.r[5], 0u + 9u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036EDE8u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x0036EDE8u) [[unlikely]] return; }
L_0036EDE8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F730000u);
    c.r[3].d[0] = c.r[3].d[0] | 13107ull;
    st32((c.r[2].w[0] + 112u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[2].w[0] + 116u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 120u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC2FA0000u);
    st32((c.r[2].w[0] + 32u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC33C0000u);
    st32((c.r[2].w[0] + 36u), c.r[3].w[0]);
    set32(c.r[3], 0u + 1u);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 24900u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0036F064; } }
L_0036EE1C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24900u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036EE64; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036EE30u); set32(c.r[4], 0u + 1024u);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x0036EE30u) [[unlikely]] return; }
L_0036EE30:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0036EE4C; } }
    c.r[3].d[0] = ld8((c.r[28].w[0] - 25310u));
    set32(c.r[2], 0u + 79u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0036EECC; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0036EE4C:
    set32(c.r[5], 0u + 43u);
    st8((c.r[28].w[0] - 24900u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036EE5Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x0036EE5Cu) [[unlikely]] return; }
L_0036EE5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036EECC; } }
L_0036EE64:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 5673u));
    set32(c.r[2], 0u + 3u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0036EECC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    c.r[2].d[0] = ld16((c.r[1].w[0] - 5678u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036EECC; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[2], 0u + 5u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 5232u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0036EECC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036EEA4u); set32(c.r[4], 0u + 2048u);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x0036EEA4u) [[unlikely]] return; }
L_0036EEA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 43u);  if (t) { goto L_0036EEC0; } }
    c.r[3].d[0] = ld8((c.r[28].w[0] - 25310u));
    set32(c.r[2], 0u + 80u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0036EECC; } }
    set32(c.r[5], 0u + 43u);
    c.budget -= 1;
L_0036EEC0:
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036EECCu); st8((c.r[28].w[0] - 24900u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x0036EECCu) [[unlikely]] return; }
L_0036EECC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036EED4u);  if (depth < kMaxDepth) unit_009E(c, 18u, depth + 1u); else { c.pc = 0x003782D0u; return; } if (c.pc != 0x0036EED4u) [[unlikely]] return; }
L_0036EED4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036EF38; } }
    set32(c.r[5], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036EEE8u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x0036EEE8u) [[unlikely]] return; }
L_0036EEE8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24900u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0036EF20; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24904u)));
    set32(c.r[2], 0u + 62u);
    st32((c.r[28].w[0] - 24912u), c.r[2].w[0]);
    set32(c.r[4], 0u + 52u);
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036EF10u); st8((c.r[28].w[0] - 24904u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0094(c, 199u, depth + 1u); else { c.pc = 0x00352520u; return; } if (c.pc != 0x0036EF10u) [[unlikely]] return; }
L_0036EF10:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 24924u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0036F064; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0036EF20:
    st8((c.r[28].w[0] - 24924u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 6u);
    st8((c.r[28].w[0] - 24904u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 16u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 24912u), c.r[3].w[0]);  if (t) { goto L_0036F064; } }
L_0036EF38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036EF40u);  if (depth < kMaxDepth) unit_009E(c, 19u, depth + 1u); else { c.pc = 0x00378310u; return; } if (c.pc != 0x0036EF40u) [[unlikely]] return; }
L_0036EF40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036F064; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24900u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0036F064; } }
    set32(c.r[2], 0u + 1u);
    set32(c.r[5], 0u + 54u);
    st8((c.r[28].w[0] - 24900u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036EF68u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x0036EF68u) [[unlikely]] return; }
L_0036EF68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0036F068; } }
L_0036EF70:
    set32(c.r[3], ld32((c.r[28].w[0] - 24912u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[28].w[0] - 24912u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 24912u)));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0036F064; } }
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036EF94u); st8((c.r[28].w[0] - 24904u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 340u, depth + 1u); else { c.pc = 0x003626C0u; return; } if (c.pc != 0x0036EF94u) [[unlikely]] return; }
L_0036EF94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036F064; } }
L_0036EF9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036EFA4u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009B(c, 351u, depth + 1u); else { c.pc = 0x0036F190u; return; } if (c.pc != 0x0036EFA4u) [[unlikely]] return; }
L_0036EFA4:
    c.r[4].d[0] = c.r[2].d[0] << 56;
    set32(c.r[3], 0u + 2u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0036EFF4; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 4u);  goto L_0036EFD8; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0036F064; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036F064; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_0036EFD8:
    st8((c.r[28].w[0] - 24904u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 16u);
    set32(c.r[4], 0u + 76u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036EFECu); st32((c.r[28].w[0] - 24912u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0094(c, 215u, depth + 1u); else { c.pc = 0x00352810u; return; } if (c.pc != 0x0036EFECu) [[unlikely]] return; }
L_0036EFEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036F064; } }
L_0036EFF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036EFFCu);  if (depth < kMaxDepth) unit_0098(c, 342u, depth + 1u); else { c.pc = 0x00362700u; return; } if (c.pc != 0x0036EFFCu) [[unlikely]] return; }
L_0036EFFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036F064; } }
L_0036F004:
    set32(c.r[3], ld32((c.r[28].w[0] - 24912u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[28].w[0] - 24912u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 24912u)));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0036F064; } }
    set32(c.r[2], 0u + 6u);
    st8((c.r[28].w[0] - 24904u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 92u);
    st32((c.r[28].w[0] - 24912u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A70000u);
    set32(c.r[4], 0u + 20u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F03Cu); set32(c.r[5], c.r[2].w[0] + 28384u);  if (depth < kMaxDepth) unit_0094(c, 207u, depth + 1u); else { c.pc = 0x003526A0u; return; } if (c.pc != 0x0036F03Cu) [[unlikely]] return; }
L_0036F03C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036F064; } }
L_0036F044:
    set32(c.r[3], ld32((c.r[28].w[0] - 24912u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[28].w[0] - 24912u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 24912u)));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0036F064; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F064u);  if (depth < kMaxDepth) unit_0098(c, 345u, depth + 1u); else { c.pc = 0x00362760u; return; } if (c.pc != 0x0036F064u) [[unlikely]] return; }
L_0036F064:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_0036F068:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0036F070:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24896u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0036F15C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0036F134; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], c.r[3].w[0] + 1u);  goto L_0036F0A8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 25892u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0036F170; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_0036F0A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F0B0u); st8((c.r[28].w[0] - 24896u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009D(c, 283u, depth + 1u); else { c.pc = 0x00376BE0u; return; } if (c.pc != 0x0036F0B0u) [[unlikely]] return; }
L_0036F0B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] + 26960u);
    set32(c.r[4], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F0C4u); set32(c.r[5], 0u + 56u);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x0036F0C4u) [[unlikely]] return; }
L_0036F0C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] + 26960u);
    set32(c.r[4], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F0D8u); set32(c.r[5], 0u + 57u);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x0036F0D8u) [[unlikely]] return; }
L_0036F0D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] + 26960u);
    set32(c.r[4], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F0ECu); set32(c.r[5], 0u + 28u);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x0036F0ECu) [[unlikely]] return; }
L_0036F0EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] - 11760u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F100u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x0036F100u) [[unlikely]] return; }
L_0036F100:
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 285u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 5232u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0036F124; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F124u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_009B(c, 87u, depth + 1u); else { c.pc = 0x0036CE00u; return; } if (c.pc != 0x0036F124u) [[unlikely]] return; }
L_0036F124:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F12Cu);  if (depth < kMaxDepth) unit_009A(c, 532u, depth + 1u); else { c.pc = 0x0036B670u; return; } if (c.pc != 0x0036F12Cu) [[unlikely]] return; }
L_0036F12C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0036F17C; } }
L_0036F134:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24900u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 20272u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F154u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036F154u) [[unlikely]] return; }
L_0036F154:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036F178; } }
L_0036F15C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F164u);  if (depth < kMaxDepth) unit_009B(c, 310u, depth + 1u); else { c.pc = 0x0036ECF0u; return; } if (c.pc != 0x0036F164u) [[unlikely]] return; }
L_0036F164:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036F178; } }
    st8((c.r[28].w[0] - 25892u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_0036F170:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F178u);  if (depth < kMaxDepth) unit_0098(c, 348u, depth + 1u); else { c.pc = 0x003627A0u; return; } if (c.pc != 0x0036F178u) [[unlikely]] return; }
L_0036F178:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_0036F17C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0036F190:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 25912u)));  c.pc = t; return; }
L_0036F1A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[4], 0u + 8192u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F1C0u); mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x0036F1C0u) [[unlikely]] return; }
L_0036F1C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 43u);  if (t) { goto L_0036F1DC; } }
    c.r[3].d[0] = ld8((c.r[28].w[0] - 25310u));
    set32(c.r[2], 0u + 82u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 4096u);  if (t) { goto L_0036F1F4; } }
    set32(c.r[5], 0u + 43u);
    c.budget -= 1;
L_0036F1DC:
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F1E8u); c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x0036F1E8u) [[unlikely]] return; }
L_0036F1E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[17].d[0] & 255ull;  if (t) { goto L_0036F2F0; } }
    set32(c.r[4], 0u + 4096u);
    c.budget -= 1;
L_0036F1F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F1FCu);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x0036F1FCu) [[unlikely]] return; }
L_0036F1FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 43u);  if (t) { goto L_0036F218; } }
    c.r[3].d[0] = ld8((c.r[28].w[0] - 25310u));
    set32(c.r[2], 0u + 81u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 2048u);  if (t) { goto L_0036F230; } }
    set32(c.r[5], 0u + 43u);
    c.budget -= 1;
L_0036F218:
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F224u); c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(2ll);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x0036F224u) [[unlikely]] return; }
L_0036F224:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036F2EC; } }
    set32(c.r[4], 0u + 2048u);
    c.budget -= 1;
L_0036F230:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F238u);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x0036F238u) [[unlikely]] return; }
L_0036F238:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 43u);  if (t) { goto L_0036F254; } }
    c.r[3].d[0] = ld8((c.r[28].w[0] - 25310u));
    set32(c.r[2], 0u + 80u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 1024u);  if (t) { goto L_0036F26C; } }
    set32(c.r[5], 0u + 43u);
    c.budget -= 1;
L_0036F254:
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F260u); c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(3ll);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x0036F260u) [[unlikely]] return; }
L_0036F260:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036F2EC; } }
    set32(c.r[4], 0u + 1024u);
    c.budget -= 1;
L_0036F26C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F274u);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x0036F274u) [[unlikely]] return; }
L_0036F274:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 43u);  if (t) { goto L_0036F290; } }
    c.r[3].d[0] = ld8((c.r[28].w[0] - 25310u));
    set32(c.r[2], 0u + 79u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[5], 0u + 43u);  if (t) { goto L_0036F2A8; } }
    set32(c.r[5], 0u + 43u);
    c.budget -= 1;
L_0036F290:
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F29Cu); c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(4ll);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x0036F29Cu) [[unlikely]] return; }
L_0036F29C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036F2EC; } }
    set32(c.r[5], 0u + 43u);
    c.budget -= 1;
L_0036F2A8:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[5].d[0]) { set32(c.r[5], 0u + 43u);  goto L_0036F2D8; }
    c.r[2].d[0] = ld8((c.r[28].w[0] - 25309u));
    c.r[2].d[0] = c.r[2].d[0] & 34ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036F2D4; } }
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F2CCu); c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(6ll);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x0036F2CCu) [[unlikely]] return; }
L_0036F2CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036F2EC; } }
L_0036F2D4:
    set32(c.r[5], 0u + 43u);
    c.budget -= 1;
L_0036F2D8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_0036F2EC; } }
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F2ECu); c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(5ll);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x0036F2ECu) [[unlikely]] return; }
L_0036F2EC:
    c.r[4].d[0] = c.r[17].d[0] & 255ull;
    c.budget -= 1;
L_0036F2F0:
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[4], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[5], c.r[4].w[0] + c.r[3].w[0]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[4].w[0] - 22864u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24900u)));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[2].d[0] = c.r[16].d[0] & 255ull;
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0036F340:
    set32(c.r[7], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[8], c.r[28].w[0] - 24888u);
    set32(c.r[9], c.r[28].w[0] - 24886u);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 6;
L_0036F358:
    c.r[3].d[0] = ld16((c.r[7].w[0] + 1402u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_0036F370; } }
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[8].w[0] + 1u);  if (t) { goto L_0036F380; } }
L_0036F370:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[4].d[0]) { set32(c.r[6], c.r[6].w[0] + 1u);  goto L_0036F384; }
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.budget -= 2;
L_0036F380:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_0036F384:
    c.r[3].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 704u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036F358u | kUnwind; return; } goto L_0036F358; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036F3A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F3B0u);  if (depth < kMaxDepth) unit_009B(c, 363u, depth + 1u); else { c.pc = 0x0036F340u; return; } if (c.pc != 0x0036F3B0u) [[unlikely]] return; }
L_0036F3B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] + 26960u);
    set32(c.r[4], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F3C4u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x0036F3C4u) [[unlikely]] return; }
L_0036F3C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] + 26960u);
    set32(c.r[4], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F3D8u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x0036F3D8u) [[unlikely]] return; }
L_0036F3D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] + 26960u);
    set32(c.r[4], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F3ECu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x0036F3ECu) [[unlikely]] return; }
L_0036F3EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] + 26960u);
    set32(c.r[4], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F400u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x0036F400u) [[unlikely]] return; }
L_0036F400:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] - 2272u);
    set32(c.r[4], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F414u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x0036F414u) [[unlikely]] return; }
L_0036F414:
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F420u); st8((c.r[2].w[0] + 272u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_009B(c, 396u, depth + 1u); else { c.pc = 0x0036F690u; return; } if (c.pc != 0x0036F420u) [[unlikely]] return; }
L_0036F420:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0036F430:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F448u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_009B(c, 363u, depth + 1u); else { c.pc = 0x0036F340u; return; } if (c.pc != 0x0036F448u) [[unlikely]] return; }
L_0036F448:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] + 26960u);
    set32(c.r[4], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F45Cu); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x0036F45Cu) [[unlikely]] return; }
L_0036F45C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] + 26960u);
    set32(c.r[4], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F470u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x0036F470u) [[unlikely]] return; }
L_0036F470:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] + 26960u);
    set32(c.r[4], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F484u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x0036F484u) [[unlikely]] return; }
L_0036F484:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] + 26960u);
    set32(c.r[4], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F498u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x0036F498u) [[unlikely]] return; }
L_0036F498:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] - 2272u);
    set32(c.r[4], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F4ACu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x0036F4ACu) [[unlikely]] return; }
L_0036F4AC:
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F4BCu); st8((c.r[2].w[0] + 272u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_009B(c, 396u, depth + 1u); else { c.pc = 0x0036F690u; return; } if (c.pc != 0x0036F4BCu) [[unlikely]] return; }
L_0036F4BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F4C4u);  if (depth < kMaxDepth) unit_009B(c, 428u, depth + 1u); else { c.pc = 0x0036FC70u; return; } if (c.pc != 0x0036F4C4u) [[unlikely]] return; }
L_0036F4C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] + 26960u);
    set32(c.r[4], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F4D8u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x0036F4D8u) [[unlikely]] return; }
L_0036F4D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[4], 0u + 3u);
    set32(c.r[6], c.r[2].w[0] + 26960u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F4ECu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x0036F4ECu) [[unlikely]] return; }
L_0036F4EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] + 26960u);
    set32(c.r[4], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F500u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x0036F500u) [[unlikely]] return; }
L_0036F500:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F508u);  if (depth < kMaxDepth) unit_009B(c, 391u, depth + 1u); else { c.pc = 0x0036F5F0u; return; } if (c.pc != 0x0036F508u) [[unlikely]] return; }
L_0036F508:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 25888u));
    c.r[2].d[0] = ld8((c.r[28].w[0] - 25884u));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0036F538; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 25640u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036F538; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F530u);  if (depth < kMaxDepth) unit_009F(c, 320u, depth + 1u); else { c.pc = 0x0037F180u; return; } if (c.pc != 0x0036F530u) [[unlikely]] return; }
L_0036F530:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_0036F5AC; } }
L_0036F538:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[17], c.r[2].w[0] + 20464u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[18], c.r[2].w[0] + 20496u);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 5;
L_0036F54C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] + 26960u);
    set32(c.r[5], 0u + 9u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F560u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x0036F560u) [[unlikely]] return; }
L_0036F560:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F020000u);
    c.r[3].d[0] = c.r[3].d[0] | 36700ull;
    st32((c.r[2].w[0] + 112u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F700000u);
    c.r[3].d[0] = c.r[3].d[0] | 41943ull;
    st32((c.r[2].w[0] + 116u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[2].w[0] + 120u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[17].w[0]));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    st32((c.r[2].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0]));
    set32(c.r[17], c.r[17].w[0] + 8u);
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.budget -= 17;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[2].w[0] + 36u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036F54Cu | kUnwind; return; } goto L_0036F54C; } }
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 2;
L_0036F5AC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] - 1488u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F5C0u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x0036F5C0u) [[unlikely]] return; }
L_0036F5C0:
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[16].w[0]));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036F5ACu | kUnwind; return; } goto L_0036F5AC; } }
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0036F5F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[3].d[0] = ld8((c.r[28].w[0] - 25888u));
    c.r[2].d[0] = c.r[3].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036F644; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] + 26960u);
    set32(c.r[4], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F61Cu); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x0036F61Cu) [[unlikely]] return; }
L_0036F61C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1A00000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    st32((c.r[2].w[0] + 32u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] + 26960u);
    set32(c.r[4], 0u + 3u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F63Cu); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x0036F63Cu) [[unlikely]] return; }
L_0036F63C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 32u), 0u);  if (t) { goto L_0036F66C; } }
L_0036F644:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 20512u);
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[4], 0u + 3u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F668u); set32(c.r[6], c.r[2].w[0] + 26960u);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x0036F668u) [[unlikely]] return; }
L_0036F668:
    st32((c.r[2].w[0] + 32u), 0u);
    c.budget -= 1;
L_0036F66C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] + 26960u);
    set32(c.r[4], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F680u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x0036F680u) [[unlikely]] return; }
L_0036F680:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0036F690:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], c.r[28].w[0] - 24888u);
    set32(c.r[18], c.r[2].w[0] + 20528u);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 9;
L_0036F6B4:
    c.r[4].d[0] = ld8((c.r[17].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.f[12] = ld32((c.r[18].w[0]));
    c.f[13] = ld32((c.r[18].w[0] + 4u));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1402u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1370u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[4].d[0] = c.r[2].d[0] << 56;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F6F4u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);  if (depth < kMaxDepth) unit_009D(c, 289u, depth + 1u); else { c.pc = 0x00376CB0u; return; } if (c.pc != 0x0036F6F4u) [[unlikely]] return; }
L_0036F6F4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036F6B4u | kUnwind; return; } goto L_0036F6B4; } }
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0036F720:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.f[12] = c.r[2].w[0];
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[20], c.r[4], c.r[0]);
    c.f[13] = c.f[12];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F750u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0017(c, 229u, depth + 1u); else { c.pc = 0x0015E250u; return; } if (c.pc != 0x0036F750u) [[unlikely]] return; }
L_0036F750:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[18], c.r[28].w[0] - 24888u);
    set32(c.r[19], c.r[2].w[0] + 20304u);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 4;
L_0036F760:
    c.r[17].d[0] = ld8((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F76Cu); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x0036F76Cu) [[unlikely]] return; }
L_0036F76C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.f[12] = ld32((c.r[19].w[0] + 32u));
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[17].w[0]);
    c.f[13] = ld32((c.r[19].w[0] + 36u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[17], c.r[3].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F7A0u); set32(c.r[4], c.r[2].w[0] + 1344u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x0036F7A0u) [[unlikely]] return; }
L_0036F7A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F7A8u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x0036F7A8u) [[unlikely]] return; }
L_0036F7A8:
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F7B8u); set32(c.r[4], c.r[2].w[0] + 1352u);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x0036F7B8u) [[unlikely]] return; }
L_0036F7B8:
    set32(c.r[2], c.r[2].w[0] >> 1);
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], 0u + 8u);
    set32(c.r[3], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 3);
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));  if (t) { goto L_0036F7E4; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_0036F7E4:
    c.f[1] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.f[0] = ld32((c.r[19].w[0]));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[13] = ld32((c.r[19].w[0] + 4u));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.f[12] = fp::add(c.f[0], c.f[1]);
    c.f[14] = c.r[3].w[0];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F810u); set32(c.r[4], c.r[2].w[0] + 1352u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x0036F810u) [[unlikely]] return; }
L_0036F810:
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[3], c.r[2].w[0] + c.r[17].w[0]);
    c.r[2].d[0] = ld16((c.r[3].w[0] + 1372u));
    c.r[1].d[0] = c.r[2].sd[0] < 10000ll ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], 0u + 9999u);  goto L_0036F834; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = ld16((c.r[3].w[0] + 1374u));  if (t) { goto L_0036F838; } }
    set32(c.r[2], 0u + 9999u);
    c.budget -= 1;
L_0036F834:
    c.r[4].d[0] = ld16((c.r[3].w[0] + 1374u));
    c.budget -= 1;
L_0036F838:
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    c.r[3].d[0] = ld16((c.r[3].w[0] + 1376u));
    set32(c.r[2], c.r[4].w[0] + c.r[3].w[0]);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(10000ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 9999u);  if (t) { goto L_0036F864; } }
    c.r[2].d[0] = c.r[4].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_0036F864; } }
    set32(c.r[2], 0u + 9999u);
    c.budget -= 1;
L_0036F864:
    c.r[8].d[0] = c.r[2].d[0] & 65535ull;
    c.r[7].d[0] = c.r[5].d[0] & 65535ull;
    set32(c.r[2], c.r[7].w[0] + c.r[8].w[0]);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(10000ll) ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], 0u + 9999u);  goto L_0036F888; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_0036F888; } }
    set32(c.r[2], 0u + 9999u);
    c.budget -= 1;
L_0036F888:
    c.r[6].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F89Cu); set32(c.r[5], c.r[2].w[0] - 22432u);  if (depth < kMaxDepth) unit_0006(c, 7u, depth + 1u); else { c.pc = 0x001180C0u; return; } if (c.pc != 0x0036F89Cu) [[unlikely]] return; }
L_0036F89C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F8A4u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x0036F8A4u) [[unlikely]] return; }
L_0036F8A4:
    c.f[12] = ld32((c.r[19].w[0] + 24u));
    c.f[13] = ld32((c.r[19].w[0] + 28u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F8BCu); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x0036F8BCu) [[unlikely]] return; }
L_0036F8BC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 40u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036F760u | kUnwind; return; } goto L_0036F760; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036F908; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F8E4u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x0036F8E4u) [[unlikely]] return; }
L_0036F8E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.f[12] = ld32((c.r[28].w[0] - 27168u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.f[13] = ld32((c.r[28].w[0] - 27164u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F900u); set32(c.r[4], c.r[2].w[0] - 22416u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x0036F900u) [[unlikely]] return; }
L_0036F900:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);  if (t) { goto L_0036FA14; } }
L_0036F908:
    c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 25860u)));
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] >= 0; set32(c.r[4], 0u + 4u);  if (t) { goto L_0036F91C; } }
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    set32(c.r[4], 0u + 4u);
    c.budget -= 2;
L_0036F91C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F924u);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x0036F924u) [[unlikely]] return; }
L_0036F924:
    c.r[6].d[0] = c.r[16].d[0] << 48;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x88880000u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.r[2].d[0] = c.r[2].d[0] | 34953ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[6].w[0]);
    set32(c.r[3], c.r[6].w[0] >> 31);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], c.r[2].w[0] - 22368u);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F960u); c.r[6].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0006(c, 7u, depth + 1u); else { c.pc = 0x001180C0u; return; } if (c.pc != 0x0036F960u) [[unlikely]] return; }
L_0036F960:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F96Cu); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0096(c, 45u, depth + 1u); else { c.pc = 0x003586F0u; return; } if (c.pc != 0x0036F96Cu) [[unlikely]] return; }
L_0036F96C:
    c.f[12] = ld32((c.r[28].w[0] - 27176u));
    c.f[13] = ld32((c.r[28].w[0] - 27172u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F984u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x0036F984u) [[unlikely]] return; }
L_0036F984:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[16], c.r[28].w[0] - 24888u);
    set32(c.r[17], c.r[2].w[0] + 20304u);
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    c.budget -= 4;
L_0036F994:
    c.r[19].d[0] = ld8((c.r[16].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F9A0u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x0036F9A0u) [[unlikely]] return; }
L_0036F9A0:
    set32(c.r[2], c.r[19].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[6].d[0] = ld16((c.r[2].w[0] + 1392u));
    c.r[7].d[0] = ld16((c.r[2].w[0] + 1394u));
    c.r[8].d[0] = ld16((c.r[2].w[0] + 1396u));
    c.r[3].d[0] = ld16((c.r[2].w[0] + 1398u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], c.r[2].w[0] - 22432u);
    set32(c.r[2], c.r[8].w[0] + c.r[3].w[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F9E4u); c.r[8].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0006(c, 7u, depth + 1u); else { c.pc = 0x001180C0u; return; } if (c.pc != 0x0036F9E4u) [[unlikely]] return; }
L_0036F9E4:
    c.f[12] = ld32((c.r[17].w[0] + 8u));
    c.f[13] = ld32((c.r[17].w[0] + 12u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F9FCu); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x0036F9FCu) [[unlikely]] return; }
L_0036F9FC:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 4ll ? 1ull : 0ull;
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 40u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036F994u | kUnwind; return; } goto L_0036F994; } }
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0036FA14:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_0036FA30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0036FB20; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0036FA8C; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], c.r[5].w[0] + 1u);  goto L_0036FA68; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0036FB2C; } }
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_0036FA68:
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F0C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    st32((c.r[4].w[0] + 112u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.r[2].d[0] = c.r[2].d[0] | 26214ull;
    st32((c.r[4].w[0] + 116u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 120u), c.r[2].w[0]);
    c.budget -= 9;
L_0036FA8C:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[3], c.r[28].w[0] - 24888u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 20464u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[7].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[28].w[0] - 25852u);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[5].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[2].w[0] + 20496u);
    set32(c.r[2], c.r[28].w[0] - 25856u);
    st32((c.r[4].w[0] + 32u), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[4].w[0] + 36u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 27;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036FB08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036FB00u);  if (depth < kMaxDepth) unit_009D(c, 297u, depth + 1u); else { c.pc = 0x00376EC0u; return; } if (c.pc != 0x0036FB00u) [[unlikely]] return; }
L_0036FB00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036FB28; } }
L_0036FB08:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036FB18u); st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009D(c, 296u, depth + 1u); else { c.pc = 0x00376EB0u; return; } if (c.pc != 0x0036FB18u) [[unlikely]] return; }
L_0036FB18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036FB28; } }
L_0036FB20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036FB28u);  if (depth < kMaxDepth) unit_009D(c, 299u, depth + 1u); else { c.pc = 0x00376F50u; return; } if (c.pc != 0x0036FB28u) [[unlikely]] return; }
L_0036FB28:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_0036FB2C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0036FB40:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0036FB74; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[3], c.r[5].w[0] + 1u);  if (t) { goto L_0036FB64; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036FBAC; } }
    set32(c.r[3], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_0036FB64:
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 60u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0036FBAC; } }
L_0036FB74:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_0036FBAC; } }
    set32(c.r[3], 0u + 30u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 272u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 272u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
L_0036FBAC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036FBC0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[16], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[28].w[0] - 27160u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[4], 0u + 3u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036FBFCu); set32(c.r[6], c.r[2].w[0] - 1216u);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x0036FBFCu) [[unlikely]] return; }
L_0036FBFC:
    c.r[3].d[0] = c.r[17].d[0] & 255ull;
    set32(c.r[4], c.r[3].w[0] << 3);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] + 20560u);
    set32(c.r[17], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[17].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] + 20564u);
    set32(c.r[18], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0]));
    set32(c.r[3], c.r[28].w[0] - 27158u);
    set32(c.r[4], c.r[3].w[0] + c.r[16].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00370000u);
    st32((c.r[2].w[0] + 36u), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    set32(c.r[6], c.r[3].w[0] - 1216u);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036FC48u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x0036FC48u) [[unlikely]] return; }
L_0036FC48:
    c.f[0] = ld32((c.r[17].w[0]));
    st32((c.r[2].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0]));
    st32((c.r[2].w[0] + 36u), c.f[0]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0036FC70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036FC80u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_009D(c, 295u, depth + 1u); else { c.pc = 0x00376EA0u; return; } if (c.pc != 0x0036FC80u) [[unlikely]] return; }
L_0036FC80:
    mmi::paddub(c.r[16], c.r[2], c.r[0]);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_0036FCA8; } }
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036FC9Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009B(c, 425u, depth + 1u); else { c.pc = 0x0036FBC0u; return; } if (c.pc != 0x0036FC9Cu) [[unlikely]] return; }
L_0036FC9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] & 2ull;  if (t) { goto L_0036FCB4; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_0036FCA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036FCB0u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009B(c, 425u, depth + 1u); else { c.pc = 0x0036FBC0u; return; } if (c.pc != 0x0036FCB0u) [[unlikely]] return; }
L_0036FCB0:
    c.r[2].d[0] = c.r[16].d[0] & 2ull;
    c.budget -= 1;
L_0036FCB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_0036FCD4; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036FCC8u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009B(c, 425u, depth + 1u); else { c.pc = 0x0036FBC0u; return; } if (c.pc != 0x0036FCC8u) [[unlikely]] return; }
L_0036FCC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0036FCE0; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_0036FCD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036FCDCu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_009B(c, 425u, depth + 1u); else { c.pc = 0x0036FBC0u; return; } if (c.pc != 0x0036FCDCu) [[unlikely]] return; }
L_0036FCDC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0036FCE0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0036FCF0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + 20696u);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].d[0] = ld64((c.r[2].w[0]));
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[17], c.r[2].w[0] - 6576u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    st64((c.r[4].w[0]), c.r[3].d[0]);
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036FD3Cu); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0017(c, 229u, depth + 1u); else { c.pc = 0x0015E250u; return; } if (c.pc != 0x0036FD3Cu) [[unlikely]] return; }
L_0036FD3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036FD44u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x0036FD44u) [[unlikely]] return; }
L_0036FD44:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[12] = ld32((c.r[1].w[0] + 20576u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[13] = ld32((c.r[1].w[0] + 20580u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036FD68u); set32(c.r[4], c.r[2].w[0] - 22336u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x0036FD68u) [[unlikely]] return; }
L_0036FD68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036FD70u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x0036FD70u) [[unlikely]] return; }
L_0036FD70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036FD78u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x0036FD78u) [[unlikely]] return; }
L_0036FD78:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[12] = ld32((c.r[1].w[0] + 20592u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[13] = ld32((c.r[1].w[0] + 20596u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036FD9Cu); set32(c.r[4], c.r[2].w[0] - 22320u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x0036FD9Cu) [[unlikely]] return; }
L_0036FD9C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[12] = ld32((c.r[1].w[0] + 20600u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[13] = ld32((c.r[1].w[0] + 20604u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036FDC0u); set32(c.r[4], c.r[2].w[0] - 22312u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x0036FDC0u) [[unlikely]] return; }
L_0036FDC0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[12] = ld32((c.r[1].w[0] + 20608u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[13] = ld32((c.r[1].w[0] + 20612u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036FDE4u); set32(c.r[4], c.r[2].w[0] - 22304u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x0036FDE4u) [[unlikely]] return; }
L_0036FDE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036FDECu); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x0036FDECu) [[unlikely]] return; }
L_0036FDEC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[12] = ld32((c.r[1].w[0] + 20640u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[13] = ld32((c.r[1].w[0] + 20644u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036FE10u); set32(c.r[4], c.r[2].w[0] - 22288u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x0036FE10u) [[unlikely]] return; }
L_0036FE10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036FE18u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x0036FE18u) [[unlikely]] return; }
L_0036FE18:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 6558u));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[4], 0u + 2u);  if (t) { goto L_0036FE94; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[12] = ld32((c.r[1].w[0] + 20616u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[13] = ld32((c.r[1].w[0] + 20620u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036FE4Cu); set32(c.r[4], c.r[2].w[0] - 22240u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x0036FE4Cu) [[unlikely]] return; }
L_0036FE4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036FE54u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x0036FE54u) [[unlikely]] return; }
L_0036FE54:
    c.r[6].d[0] = ld8((c.r[17].w[0] + 18u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036FE68u); set32(c.r[5], c.r[2].w[0] - 22368u);  if (depth < kMaxDepth) unit_0006(c, 7u, depth + 1u); else { c.pc = 0x001180C0u; return; } if (c.pc != 0x0036FE68u) [[unlikely]] return; }
L_0036FE68:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[12] = ld32((c.r[1].w[0] + 20624u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[13] = ld32((c.r[1].w[0] + 20628u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036FE88u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x0036FE88u) [[unlikely]] return; }
L_0036FE88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036FEC0; } }
    set32(c.r[4], 0u + 2u);
    c.budget -= 1;
L_0036FE94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036FE9Cu);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x0036FE9Cu) [[unlikely]] return; }
L_0036FE9C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[12] = ld32((c.r[1].w[0] + 20632u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[13] = ld32((c.r[1].w[0] + 20636u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036FEC0u); set32(c.r[4], c.r[2].w[0] - 22208u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x0036FEC0u) [[unlikely]] return; }
L_0036FEC0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[18], c.r[3].w[0] + 28224u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_0036FF88; } }
L_0036FED0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036FED8u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x0036FED8u) [[unlikely]] return; }
L_0036FED8:
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036FEE4u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0096(c, 45u, depth + 1u); else { c.pc = 0x003586F0u; return; } if (c.pc != 0x0036FEE4u) [[unlikely]] return; }
L_0036FEE4:
    c.f[1] = c.r[16].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = ld32((c.r[1].w[0] + 20660u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[2] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[20] = fp::mul(c.f[2], c.f[1]);
    c.f[12] = ld32((c.r[1].w[0] + 20656u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036FF1Cu); c.f[13] = fp::add(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x0036FF1Cu) [[unlikely]] return; }
L_0036FF1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036FF24u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x0036FF24u) [[unlikely]] return; }
L_0036FF24:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[0] = ld32((c.r[1].w[0] + 20660u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    set32(c.r[4], c.r[18].w[0] + 8u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[12] = ld32((c.r[1].w[0] + 20664u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036FF48u); c.f[13] = fp::add(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x0036FF48u) [[unlikely]] return; }
L_0036FF48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036FF50u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x0036FF50u) [[unlikely]] return; }
L_0036FF50:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    c.f[0] = ld32((c.r[1].w[0] + 20660u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[12] = ld32((c.r[1].w[0] + 20668u));
    set32(c.r[4], ld32((c.r[2].w[0] + 128u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036FF80u); c.f[13] = fp::add(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x0036FF80u) [[unlikely]] return; }
L_0036FF80:
    set32(c.r[18], c.r[18].w[0] + 32u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 2;
L_0036FF88:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 7u));
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036FED0u | kUnwind; return; } goto L_0036FED0; } }
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0036FFC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[16], c.r[3].w[0] - 6576u);
    set32(c.r[3], 0u + 2u);
    c.budget -= 10;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { [[clang::musttail]] return unit_009C(c, 9u, depth); } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { [[clang::musttail]] return unit_009C(c, 5u, depth); } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], c.r[5].w[0] + 1u);  [[clang::musttail]] return unit_009C(c, 3u, depth); }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { [[clang::musttail]] return unit_009C(c, 11u, depth); } }
    [[clang::musttail]] return unit_009C(c, 2u, depth);
}

}
