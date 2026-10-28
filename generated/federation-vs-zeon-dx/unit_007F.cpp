#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_007F[4096] = {
    1, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 6, 0,
    7, 0, 0, 0, 8, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0,
    0, 13, 0, 14, 0, 0, 15, 0, 0, 0, 16, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 19, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23,
    0, 0, 0, 24, 0, 25, 0, 0, 0, 26, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 32, 0, 0,
    33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 37, 0,
    0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0,
    0, 43, 0, 44, 0, 45, 0, 46, 0, 0, 0, 0, 47, 0, 48, 0, 49, 0, 0, 0, 50, 0, 0, 0, 51, 0, 52, 0, 53, 0, 0, 0,
    0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 56, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 59, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 62,
    0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 65, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 69,
    0, 70, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 77, 0, 78, 0, 0,
    0, 79, 0, 80, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 82, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0,
    0, 0, 87, 0, 0, 0, 88, 0, 89, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 0, 93, 0, 0,
    0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 97, 0, 98, 0, 0, 0, 99, 0, 100,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0,
    104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 0, 108, 0, 0, 0,
    0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 112, 0, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 116, 0, 0, 0, 0, 117, 0, 0, 118, 0, 0, 0, 0, 119,
    0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 123, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 0, 127, 0,
    0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 133, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 140, 0, 141, 0, 0, 142, 0, 0, 0, 0, 143, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 145, 0, 0, 0, 0, 146, 0, 0, 0, 147, 0, 0, 0,
    0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0,
    0, 0, 0, 152, 0, 153, 0, 154, 0, 0, 155, 0, 0, 0, 156, 0, 157, 0, 0, 0, 0, 158, 0, 159, 0, 160, 0, 0, 0, 161, 0, 162,
    0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 165, 0, 166, 0, 0, 0, 0, 0, 0, 0, 167, 0, 168, 0, 0, 169, 0, 0, 0, 0, 170, 0, 0, 171, 0, 0, 0, 0, 172,
    0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 179, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    181, 0, 0, 0, 182, 0, 0, 0, 0, 0, 183, 0, 184, 0, 185, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187,
    0, 188, 0, 0, 0, 189, 0, 0, 190, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 193,
    0, 0, 0, 0, 194, 0, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 198, 0, 0, 199, 0, 0, 0, 200,
    0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0,
    0, 203, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 206, 0,
    0, 207, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 211, 0, 0, 212, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 216, 0, 217,
    0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0,
    0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 222, 0, 223, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0,
    230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 238, 0, 0, 0, 239, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 241, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 244, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0,
    0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0,
    256, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 260, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 263, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 268, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0,
    0, 0, 274, 0, 0, 0, 275, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    278, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 281, 0, 0, 0,
    282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 286, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 293, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 295, 0, 296, 0, 0, 0, 0, 0,
    297, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 300, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 305,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0,
    0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 314, 0, 0, 0, 315, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 318, 0, 319, 0,
    0, 0, 0, 0, 320, 0, 0, 0, 0, 321, 0, 322, 0, 0, 323, 0, 0, 0, 324, 0, 325, 0, 326, 0, 327, 0, 0, 0, 0, 0, 0, 0,
    328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 331, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    333, 0, 0, 334, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 337, 0,
    0, 0, 0, 0, 338, 0, 0, 0, 339, 0, 0, 0, 0, 0, 340, 0, 341, 0, 0, 0, 0, 0, 342, 0, 343, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344,
    0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 351, 0, 0, 0,
    0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 359, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0,
    368, 0, 369, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_007F(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002FC000;
    case 2u: goto L_002FC018;
    case 3u: goto L_002FC02C;
    case 4u: goto L_002FC070;
    case 5u: goto L_002FC0E8;
    case 6u: goto L_002FC0F8;
    case 7u: goto L_002FC100;
    case 8u: goto L_002FC110;
    case 9u: goto L_002FC11C;
    case 10u: goto L_002FC18C;
    case 11u: goto L_002FC1B0;
    case 12u: goto L_002FC1F4;
    case 13u: goto L_002FC204;
    case 14u: goto L_002FC20C;
    case 15u: goto L_002FC218;
    case 16u: goto L_002FC228;
    case 17u: goto L_002FC238;
    case 18u: goto L_002FC248;
    case 19u: goto L_002FC254;
    case 20u: goto L_002FC260;
    case 21u: goto L_002FC298;
    case 22u: goto L_002FC2B0;
    case 23u: goto L_002FC2FC;
    case 24u: goto L_002FC30C;
    case 25u: goto L_002FC314;
    case 26u: goto L_002FC324;
    case 27u: goto L_002FC32C;
    case 28u: goto L_002FC3BC;
    case 29u: goto L_002FC3CC;
    case 30u: goto L_002FC3F0;
    case 31u: goto L_002FC468;
    case 32u: goto L_002FC474;
    case 33u: goto L_002FC480;
    case 34u: goto L_002FC4B0;
    case 35u: goto L_002FC4C0;
    case 36u: goto L_002FC4E0;
    case 37u: goto L_002FC4F8;
    case 38u: goto L_002FC510;
    case 39u: goto L_002FC530;
    case 40u: goto L_002FC53C;
    case 41u: goto L_002FC600;
    case 42u: goto L_002FC674;
    case 43u: goto L_002FC684;
    case 44u: goto L_002FC68C;
    case 45u: goto L_002FC694;
    case 46u: goto L_002FC69C;
    case 47u: goto L_002FC6B0;
    case 48u: goto L_002FC6B8;
    case 49u: goto L_002FC6C0;
    case 50u: goto L_002FC6D0;
    case 51u: goto L_002FC6E0;
    case 52u: goto L_002FC6E8;
    case 53u: goto L_002FC6F0;
    case 54u: goto L_002FC710;
    case 55u: goto L_002FC73C;
    case 56u: goto L_002FC790;
    case 57u: goto L_002FC79C;
    case 58u: goto L_002FC7C0;
    case 59u: goto L_002FC814;
    case 60u: goto L_002FC820;
    case 61u: goto L_002FC874;
    case 62u: goto L_002FC87C;
    case 63u: goto L_002FC884;
    case 64u: goto L_002FC8B4;
    case 65u: goto L_002FC90C;
    case 66u: goto L_002FC920;
    case 67u: goto L_002FC940;
    case 68u: goto L_002FC974;
    case 69u: goto L_002FC97C;
    case 70u: goto L_002FC984;
    case 71u: goto L_002FC98C;
    case 72u: goto L_002FC9B0;
    case 73u: goto L_002FC9C8;
    case 74u: goto L_002FC9DC;
    case 75u: goto L_002FCA30;
    case 76u: goto L_002FCA58;
    case 77u: goto L_002FCA6C;
    case 78u: goto L_002FCA74;
    case 79u: goto L_002FCA84;
    case 80u: goto L_002FCA8C;
    case 81u: goto L_002FCAA8;
    case 82u: goto L_002FCABC;
    case 83u: goto L_002FCACC;
    case 84u: goto L_002FCAEC;
    case 85u: goto L_002FCB50;
    case 86u: goto L_002FCB78;
    case 87u: goto L_002FCB88;
    case 88u: goto L_002FCB98;
    case 89u: goto L_002FCBA0;
    case 90u: goto L_002FCBBC;
    case 91u: goto L_002FCBD0;
    case 92u: goto L_002FCBE0;
    case 93u: goto L_002FCBF4;
    case 94u: goto L_002FCC14;
    case 95u: goto L_002FCC40;
    case 96u: goto L_002FCCD4;
    case 97u: goto L_002FCCDC;
    case 98u: goto L_002FCCE4;
    case 99u: goto L_002FCCF4;
    case 100u: goto L_002FCCFC;
    case 101u: goto L_002FCD30;
    case 102u: goto L_002FCD50;
    case 103u: goto L_002FCD70;
    case 104u: goto L_002FCD80;
    case 105u: goto L_002FCDC0;
    case 106u: goto L_002FCDCC;
    case 107u: goto L_002FCDDC;
    case 108u: goto L_002FCDF0;
    case 109u: goto L_002FCE14;
    case 110u: goto L_002FCE48;
    case 111u: goto L_002FCE60;
    case 112u: goto L_002FCE88;
    case 113u: goto L_002FCE98;
    case 114u: goto L_002FCEAC;
    case 115u: goto L_002FCEBC;
    case 116u: goto L_002FCEC8;
    case 117u: goto L_002FCEDC;
    case 118u: goto L_002FCEE8;
    case 119u: goto L_002FCEFC;
    case 120u: goto L_002FCF08;
    case 121u: goto L_002FCF70;
    case 122u: goto L_002FCF98;
    case 123u: goto L_002FCFA8;
    case 124u: goto L_002FCFC0;
    case 125u: goto L_002FCFD4;
    case 126u: goto L_002FCFE4;
    case 127u: goto L_002FCFF8;
    case 128u: goto L_002FD018;
    case 129u: goto L_002FD044;
    case 130u: goto L_002FD050;
    case 131u: goto L_002FD0B0;
    case 132u: goto L_002FD160;
    case 133u: goto L_002FD168;
    case 134u: goto L_002FD1B0;
    case 135u: goto L_002FD1CC;
    case 136u: goto L_002FD1E0;
    case 137u: goto L_002FD208;
    case 138u: goto L_002FD230;
    case 139u: goto L_002FD2B8;
    case 140u: goto L_002FD2C8;
    case 141u: goto L_002FD2D0;
    case 142u: goto L_002FD2DC;
    case 143u: goto L_002FD2F0;
    case 144u: goto L_002FD340;
    case 145u: goto L_002FD34C;
    case 146u: goto L_002FD360;
    case 147u: goto L_002FD370;
    case 148u: goto L_002FD384;
    case 149u: goto L_002FD3AC;
    case 150u: goto L_002FD3C0;
    case 151u: goto L_002FD3EC;
    case 152u: goto L_002FD40C;
    case 153u: goto L_002FD414;
    case 154u: goto L_002FD41C;
    case 155u: goto L_002FD428;
    case 156u: goto L_002FD438;
    case 157u: goto L_002FD440;
    case 158u: goto L_002FD454;
    case 159u: goto L_002FD45C;
    case 160u: goto L_002FD464;
    case 161u: goto L_002FD474;
    case 162u: goto L_002FD47C;
    case 163u: goto L_002FD488;
    case 164u: goto L_002FD4D0;
    case 165u: goto L_002FD50C;
    case 166u: goto L_002FD514;
    case 167u: goto L_002FD534;
    case 168u: goto L_002FD53C;
    case 169u: goto L_002FD548;
    case 170u: goto L_002FD55C;
    case 171u: goto L_002FD568;
    case 172u: goto L_002FD57C;
    case 173u: goto L_002FD590;
    case 174u: goto L_002FD5CC;
    case 175u: goto L_002FD5EC;
    case 176u: goto L_002FD618;
    case 177u: goto L_002FD6D0;
    case 178u: goto L_002FD734;
    case 179u: goto L_002FD740;
    case 180u: goto L_002FD74C;
    case 181u: goto L_002FD780;
    case 182u: goto L_002FD790;
    case 183u: goto L_002FD7A8;
    case 184u: goto L_002FD7B0;
    case 185u: goto L_002FD7B8;
    case 186u: goto L_002FD7D0;
    case 187u: goto L_002FD7FC;
    case 188u: goto L_002FD804;
    case 189u: goto L_002FD814;
    case 190u: goto L_002FD820;
    case 191u: goto L_002FD838;
    case 192u: goto L_002FD864;
    case 193u: goto L_002FD87C;
    case 194u: goto L_002FD890;
    case 195u: goto L_002FD8A4;
    case 196u: goto L_002FD8B4;
    case 197u: goto L_002FD8C4;
    case 198u: goto L_002FD8E0;
    case 199u: goto L_002FD8EC;
    case 200u: goto L_002FD8FC;
    case 201u: goto L_002FD920;
    case 202u: goto L_002FD974;
    case 203u: goto L_002FD984;
    case 204u: goto L_002FD994;
    case 205u: goto L_002FD9F0;
    case 206u: goto L_002FD9F8;
    case 207u: goto L_002FDA04;
    case 208u: goto L_002FDA0C;
    case 209u: goto L_002FDA30;
    case 210u: goto L_002FDA54;
    case 211u: goto L_002FDA64;
    case 212u: goto L_002FDA70;
    case 213u: goto L_002FDB24;
    case 214u: goto L_002FDB40;
    case 215u: goto L_002FDB64;
    case 216u: goto L_002FDB74;
    case 217u: goto L_002FDB7C;
    case 218u: goto L_002FDB88;
    case 219u: goto L_002FDBF0;
    case 220u: goto L_002FDC04;
    case 221u: goto L_002FDC38;
    case 222u: goto L_002FDC40;
    case 223u: goto L_002FDC48;
    case 224u: goto L_002FDC58;
    case 225u: goto L_002FDCB0;
    case 226u: goto L_002FDD10;
    case 227u: goto L_002FDD70;
    case 228u: goto L_002FDDC0;
    case 229u: goto L_002FDDE0;
    case 230u: goto L_002FDE00;
    case 231u: goto L_002FDE6C;
    case 232u: goto L_002FDEEC;
    case 233u: goto L_002FDF18;
    case 234u: goto L_002FDF30;
    case 235u: goto L_002FDF4C;
    case 236u: goto L_002FDF88;
    case 237u: goto L_002FDFD0;
    case 238u: goto L_002FDFE0;
    case 239u: goto L_002FDFF0;
    case 240u: goto L_002FE058;
    case 241u: goto L_002FE088;
    case 242u: goto L_002FE0A4;
    case 243u: goto L_002FE0B8;
    case 244u: goto L_002FE108;
    case 245u: goto L_002FE110;
    case 246u: goto L_002FE140;
    case 247u: goto L_002FE14C;
    case 248u: goto L_002FE1F4;
    case 249u: goto L_002FE230;
    case 250u: goto L_002FE250;
    case 251u: goto L_002FE2B0;
    case 252u: goto L_002FE3F4;
    case 253u: goto L_002FE404;
    case 254u: goto L_002FE438;
    case 255u: goto L_002FE470;
    case 256u: goto L_002FE480;
    case 257u: goto L_002FE4A0;
    case 258u: goto L_002FE4EC;
    case 259u: goto L_002FE534;
    case 260u: goto L_002FE590;
    case 261u: goto L_002FE59C;
    case 262u: goto L_002FE5C0;
    case 263u: goto L_002FE5D0;
    case 264u: goto L_002FE5E0;
    case 265u: goto L_002FE644;
    case 266u: goto L_002FE674;
    case 267u: goto L_002FE6A8;
    case 268u: goto L_002FE6C0;
    case 269u: goto L_002FE6D0;
    case 270u: goto L_002FE6EC;
    case 271u: goto L_002FE738;
    case 272u: goto L_002FE740;
    case 273u: goto L_002FE770;
    case 274u: goto L_002FE788;
    case 275u: goto L_002FE798;
    case 276u: goto L_002FE7A4;
    case 277u: goto L_002FE844;
    case 278u: goto L_002FE880;
    case 279u: goto L_002FE8A0;
    case 280u: goto L_002FE968;
    case 281u: goto L_002FE970;
    case 282u: goto L_002FE980;
    case 283u: goto L_002FE9B0;
    case 284u: goto L_002FE9BC;
    case 285u: goto L_002FE9E0;
    case 286u: goto L_002FE9F0;
    case 287u: goto L_002FEA40;
    case 288u: goto L_002FEAE8;
    case 289u: goto L_002FEBC0;
    case 290u: goto L_002FEC00;
    case 291u: goto L_002FEC90;
    case 292u: goto L_002FED20;
    case 293u: goto L_002FED30;
    case 294u: goto L_002FED40;
    case 295u: goto L_002FED60;
    case 296u: goto L_002FED68;
    case 297u: goto L_002FED80;
    case 298u: goto L_002FEDA0;
    case 299u: goto L_002FEECC;
    case 300u: goto L_002FEED4;
    case 301u: goto L_002FEEF0;
    case 302u: goto L_002FEF24;
    case 303u: goto L_002FEF30;
    case 304u: goto L_002FEF60;
    case 305u: goto L_002FEF7C;
    case 306u: goto L_002FEFC0;
    case 307u: goto L_002FEFDC;
    case 308u: goto L_002FF030;
    case 309u: goto L_002FF070;
    case 310u: goto L_002FF0CC;
    case 311u: goto L_002FF0E8;
    case 312u: goto L_002FF108;
    case 313u: goto L_002FF14C;
    case 314u: goto L_002FF190;
    case 315u: goto L_002FF1A0;
    case 316u: goto L_002FF1B0;
    case 317u: goto L_002FF1D0;
    case 318u: goto L_002FF1F0;
    case 319u: goto L_002FF1F8;
    case 320u: goto L_002FF210;
    case 321u: goto L_002FF224;
    case 322u: goto L_002FF22C;
    case 323u: goto L_002FF238;
    case 324u: goto L_002FF248;
    case 325u: goto L_002FF250;
    case 326u: goto L_002FF258;
    case 327u: goto L_002FF260;
    case 328u: goto L_002FF280;
    case 329u: goto L_002FF2E4;
    case 330u: goto L_002FF330;
    case 331u: goto L_002FF338;
    case 332u: goto L_002FF350;
    case 333u: goto L_002FF400;
    case 334u: goto L_002FF40C;
    case 335u: goto L_002FF414;
    case 336u: goto L_002FF464;
    case 337u: goto L_002FF478;
    case 338u: goto L_002FF490;
    case 339u: goto L_002FF4A0;
    case 340u: goto L_002FF4B8;
    case 341u: goto L_002FF4C0;
    case 342u: goto L_002FF4D8;
    case 343u: goto L_002FF4E0;
    case 344u: goto L_002FF57C;
    case 345u: goto L_002FF590;
    case 346u: goto L_002FF5B0;
    case 347u: goto L_002FF64C;
    case 348u: goto L_002FF690;
    case 349u: goto L_002FF768;
    case 350u: goto L_002FF85C;
    case 351u: goto L_002FF870;
    case 352u: goto L_002FF890;
    case 353u: goto L_002FF8AC;
    case 354u: goto L_002FF8C4;
    case 355u: goto L_002FF944;
    case 356u: goto L_002FF970;
    case 357u: goto L_002FFAE0;
    case 358u: goto L_002FFC40;
    case 359u: goto L_002FFC50;
    case 360u: goto L_002FFC60;
    case 361u: goto L_002FFCEC;
    case 362u: goto L_002FFD48;
    case 363u: goto L_002FFDB4;
    case 364u: goto L_002FFDDC;
    case 365u: goto L_002FFE0C;
    case 366u: goto L_002FFE34;
    case 367u: goto L_002FFE5C;
    case 368u: goto L_002FFE80;
    case 369u: goto L_002FFE88;
    case 370u: goto L_002FFE9C;
    case 371u: goto L_002FFEF0;
    case 372u: goto L_002FFF40;
    case 373u: goto L_002FFF60;
    default: bad_entry(c, 0x002FC000u); return;
    }
L_002FC000:
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    mmi::paddub(c.r[5], c.r[18], c.r[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC018u); mmi::paddub(c.r[6], c.r[17], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FC018u) [[unlikely]] return; }
L_002FC018:
    set32(c.r[7], 0u + 2u);
    mmi::paddub(c.r[5], c.r[18], c.r[0]);
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC02Cu); mmi::paddub(c.r[6], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_007F(c, 41u, depth + 1u); else { c.pc = 0x002FC600u; return; } if (c.pc != 0x002FC02Cu) [[unlikely]] return; }
L_002FC02C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 760u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002FC04C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 1260u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002FC04C; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[19].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002FC04C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002FC070:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[7], c.r[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 6u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FE90000u);
    c.r[5].d[0] = c.r[2].d[0] | 47710ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3EDD0000u);
    c.r[3].d[0] = c.r[2].d[0] | 28836ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[4].w[0] + 6u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[4].w[0] + 104u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 108u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 160u), c.r[2].w[0]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], c.r[2].w[0] + 2304u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[2], c.r[28].w[0] - 28264u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[18], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC0E8u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002FC0E8u) [[unlikely]] return; }
L_002FC0E8:
    c.f[13] = ld32((c.r[18].w[0] + 4u));
    c.f[14] = ld32((c.r[18].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC0F8u); c.f[12] = ld32((c.r[18].w[0]));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002FC0F8u) [[unlikely]] return; }
L_002FC0F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC100u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 16u, depth + 1u); else { c.pc = 0x0013C860u; return; } if (c.pc != 0x002FC100u) [[unlikely]] return; }
L_002FC100:
    set32(c.r[4], c.r[17].w[0] + 48u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC110u); set32(c.r[6], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002FC110u) [[unlikely]] return; }
L_002FC110:
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC11Cu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x002FC11Cu) [[unlikely]] return; }
L_002FC11C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[3].d[0] = c.r[3].d[0] | 4719ull;
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[17].w[0] + 48u);  if (t) { goto L_002FC184; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[29].w[0] + 64u);
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(0u));
    c.f[3] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[17].w[0] + 32u), c.f[3]);
    st32((c.r[17].w[0] + 36u), c.f[2]);
    st32((c.r[17].w[0] + 40u), c.f[1]);
    st32((c.r[17].w[0] + 44u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002FC18C; } }
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.budget -= 1;
L_002FC184:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC18Cu);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x002FC18Cu) [[unlikely]] return; }
L_002FC18C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002FC1B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], c.r[2].w[0] + 2304u);
    set32(c.r[2], c.r[28].w[0] - 28264u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[17], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC1F4u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002FC1F4u) [[unlikely]] return; }
L_002FC1F4:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC204u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002FC204u) [[unlikely]] return; }
L_002FC204:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC20Cu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 16u, depth + 1u); else { c.pc = 0x0013C860u; return; } if (c.pc != 0x002FC20Cu) [[unlikely]] return; }
L_002FC20C:
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC218u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_007F(c, 38u, depth + 1u); else { c.pc = 0x002FC510u; return; } if (c.pc != 0x002FC218u) [[unlikely]] return; }
L_002FC218:
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC228u); set32(c.r[6], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002FC228u) [[unlikely]] return; }
L_002FC228:
    set32(c.r[4], c.r[16].w[0] + 48u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC238u); set32(c.r[6], 0u + 2048u);  if (depth < kMaxDepth) unit_005B(c, 297u, depth + 1u); else { c.pc = 0x0026F960u; return; } if (c.pc != 0x002FC238u) [[unlikely]] return; }
L_002FC238:
    c.f[12] = ld32((c.r[16].w[0] + 104u));
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC248u); set32(c.r[5], c.r[16].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x002FC248u) [[unlikely]] return; }
L_002FC248:
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC254u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x002FC254u) [[unlikely]] return; }
L_002FC254:
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC260u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x002FC260u) [[unlikely]] return; }
L_002FC260:
    c.f[1] = ld32((c.r[16].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002FC298; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 6u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], c.r[16].w[0] + 32u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC298u); st32((c.r[16].w[0] + 160u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002FC298u) [[unlikely]] return; }
L_002FC298:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002FC2B0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], c.r[2].w[0] + 2304u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[2], c.r[28].w[0] - 28264u);
    mmi::paddub(c.r[16], c.r[7], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[18], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC2FCu); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002FC2FCu) [[unlikely]] return; }
L_002FC2FC:
    c.f[13] = ld32((c.r[18].w[0] + 4u));
    c.f[14] = ld32((c.r[18].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC30Cu); c.f[12] = ld32((c.r[18].w[0]));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002FC30Cu) [[unlikely]] return; }
L_002FC30C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC314u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 16u, depth + 1u); else { c.pc = 0x0013C860u; return; } if (c.pc != 0x002FC314u) [[unlikely]] return; }
L_002FC314:
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC324u); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002FC324u) [[unlikely]] return; }
L_002FC324:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC32Cu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 20u, depth + 1u); else { c.pc = 0x0013C9E0u; return; } if (c.pc != 0x002FC32Cu) [[unlikely]] return; }
L_002FC32C:
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.f[2] = ld32((c.r[17].w[0] + 160u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 160u), c.f[1]);  if (t) { goto L_002FC39C; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[29].w[0] + 80u);
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(0u));
    c.f[3] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[17].w[0] + 32u), c.f[3]);
    st32((c.r[17].w[0] + 36u), c.f[2]);
    st32((c.r[17].w[0] + 40u), c.f[1]);
    st32((c.r[17].w[0] + 44u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002FC3CC; } }
L_002FC39C:
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    set32(c.r[4], c.r[29].w[0] + 64u);
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    fpu_div(c, 12u, c.f[0], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC3BCu);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x002FC3BCu) [[unlikely]] return; }
L_002FC3BC:
    set32(c.r[4], c.r[17].w[0] + 32u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC3CCu); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x002FC3CCu) [[unlikely]] return; }
L_002FC3CC:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002FC3F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 4u)));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[4], 0u + 3u);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_002FC430; } }
    c.r[3].d[0] = ld8((c.r[6].w[0] + 742u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002FC42C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_002FC430; } }
L_002FC42C:
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_002FC430:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002FC490; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    set32(c.r[3], 0u + 255u);
    set32(c.r[4], c.r[16].w[0] + 32u);
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC468u); st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0047(c, 214u, depth + 1u); else { c.pc = 0x0021ED70u; return; } if (c.pc != 0x002FC468u) [[unlikely]] return; }
L_002FC468:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[18], c.r[2].w[0] + 2432u);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 3;
L_002FC474:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC480u); mmi::paddub(c.r[5], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_004C(c, 283u, depth + 1u); else { c.pc = 0x002335D0u; return; } if (c.pc != 0x002FC480u) [[unlikely]] return; }
L_002FC480:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FC474u | kUnwind; return; } goto L_002FC474; } }
L_002FC490:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002FC4B0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_002FC4C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], ld32((c.r[4].w[0] + 264u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 7u)));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC4E0u); set32(c.r[5], c.r[16].w[0] + 320u);  if (depth < kMaxDepth) unit_007F(c, 41u, depth + 1u); else { c.pc = 0x002FC600u; return; } if (c.pc != 0x002FC4E0u) [[unlikely]] return; }
L_002FC4E0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 184u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC4F8u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_000F(c, 36u, depth + 1u); else { c.pc = 0x0013CD20u; return; } if (c.pc != 0x002FC4F8u) [[unlikely]] return; }
L_002FC4F8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002FC510:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[20] = ld32((c.r[4].w[0] + 104u));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC530u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x002FC530u) [[unlikely]] return; }
L_002FC530:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[4], c.r[3].w[0] + 2368u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 3;
L_002FC53C:
    c.f[1] = ld32((c.r[4].w[0]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002FC560; } }
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[3].d[0] = c.r[5].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FC53Cu | kUnwind; return; } goto L_002FC53C; } }
L_002FC560:
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[20]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x3EDD0000u);  if (t) { goto L_002FC5B0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3EDD0000u);
    c.r[3].d[0] = c.r[3].d[0] | 28836ull;
    c.f[0] = fp::sub(c.f[1], c.f[20]);
    c.f[2] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 9;
    if (!(c.fcr31 & kFpuCondition)) { c.f[20] = fp::add(c.f[20], c.f[2]);  goto L_002FC5A4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = c.f[1];  if (t) { goto L_002FC5DC; } }
    c.f[20] = fp::add(c.f[20], c.f[2]);
    c.budget -= 1;
L_002FC5A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 104u), c.f[20]);  if (t) { goto L_002FC5E0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3EDD0000u);
    c.budget -= 1;
L_002FC5B0:
    c.r[3].d[0] = c.r[3].d[0] | 28836ull;
    c.f[0] = fp::sub(c.f[20], c.f[1]);
    c.f[2] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 8;
    if (!(c.fcr31 & kFpuCondition)) { c.f[20] = fp::sub(c.f[20], c.f[2]);  goto L_002FC5DC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = c.f[1];  if (t) { goto L_002FC5DC; } }
    c.f[20] = fp::sub(c.f[20], c.f[2]);
    c.budget -= 1;
L_002FC5DC:
    st32((c.r[16].w[0] + 104u), c.f[20]);
    c.budget -= 1;
L_002FC5E0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002FC600:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], 0u + 2u);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 10;
    { const bool t = c.r[7].d[0] == c.r[3].d[0]; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { goto L_002FC6C8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[3].d[0]; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002FC6A8; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_002FC644; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);  if (t) { goto L_002FC6F4; } }
L_002FC644:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], c.r[2].w[0] + 2304u);
    set32(c.r[2], c.r[28].w[0] - 28264u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[18], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC674u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002FC674u) [[unlikely]] return; }
L_002FC674:
    c.f[13] = ld32((c.r[18].w[0] + 4u));
    c.f[14] = ld32((c.r[18].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC684u); c.f[12] = ld32((c.r[18].w[0]));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002FC684u) [[unlikely]] return; }
L_002FC684:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC68Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002FC68Cu) [[unlikely]] return; }
L_002FC68C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC694u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 16u, depth + 1u); else { c.pc = 0x0013C860u; return; } if (c.pc != 0x002FC694u) [[unlikely]] return; }
L_002FC694:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC69Cu); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002FC69Cu) [[unlikely]] return; }
L_002FC69C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FC6F0; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002FC6A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC6B0u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002FC6B0u) [[unlikely]] return; }
L_002FC6B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC6B8u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 17u, depth + 1u); else { c.pc = 0x0013C880u; return; } if (c.pc != 0x002FC6B8u) [[unlikely]] return; }
L_002FC6B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC6C0u); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002FC6C0u) [[unlikely]] return; }
L_002FC6C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FC6F0; } }
L_002FC6C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC6D0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002FC6D0u) [[unlikely]] return; }
L_002FC6D0:
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC6E0u); set32(c.r[6], c.r[17].w[0] + 128u);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x002FC6E0u) [[unlikely]] return; }
L_002FC6E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC6E8u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 17u, depth + 1u); else { c.pc = 0x0013C880u; return; } if (c.pc != 0x002FC6E8u) [[unlikely]] return; }
L_002FC6E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC6F0u); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002FC6F0u) [[unlikely]] return; }
L_002FC6F0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002FC6F4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002FC710:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[4], 0u + 1u);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    mmi::paddub(c.r[6], c.r[4], c.r[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC73Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x002FC73Cu) [[unlikely]] return; }
L_002FC73C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[2], c.r[0]);  if (t) { goto L_002FC79C; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 17u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 16u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00300000u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[18].w[0]));
    set32(c.r[2], c.r[2].w[0] - 14400u);
    st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00300000u);
    set32(c.r[2], c.r[2].w[0] - 10352u);
    st32((c.r[16].w[0] + 168u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 8400u)));
    set32(c.r[7], c.r[18].w[0] + 6u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC790u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0016(c, 134u, depth + 1u); else { c.pc = 0x0015B550u; return; } if (c.pc != 0x002FC790u) [[unlikely]] return; }
L_002FC790:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC79Cu); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 114u, depth + 1u); else { c.pc = 0x00305C00u; return; } if (c.pc != 0x002FC79Cu) [[unlikely]] return; }
L_002FC79C:
    mmi::paddub(c.r[2], c.r[16], c.r[0]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002FC7C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 264u)));
    set32(c.r[5], c.r[4].w[0] + 320u);
    c.r[1].d[0] = c.r[9].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[7], c.r[6].w[0] + 320u);  if (t) { goto L_002FC7F8; } }
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 4u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[8].d[0] != c.r[3].d[0];  if (t) { goto L_002FC7F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002FC814; } }
L_002FC7F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] + 3184u);
    set32(c.r[3], c.r[9].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC814u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FC814u) [[unlikely]] return; }
L_002FC814:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002FC820:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    mmi::paddub(c.r[17], c.r[6], c.r[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[7].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 6u));
    c.r[3].d[0] = c.r[3].d[0] & 16ull;
    c.budget -= 15;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[16], c.r[7], c.r[0]);  if (t) { goto L_002FC920; } }
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 5u);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC874u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002FC874u) [[unlikely]] return; }
L_002FC874:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC87Cu); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002FC87Cu) [[unlikely]] return; }
L_002FC87C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC884u); set32(c.r[4], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 16u, depth + 1u); else { c.pc = 0x0013C860u; return; } if (c.pc != 0x002FC884u) [[unlikely]] return; }
L_002FC884:
    c.f[0] = ld32((c.r[18].w[0] + 16u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBEE60000u);
    c.r[2].d[0] = c.r[2].d[0] | 26214ull;
    set32(c.r[4], c.r[19].w[0] + 48u);
    c.f[12] = c.r[2].w[0];
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    st32((c.r[19].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 20u));
    st32((c.r[19].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 24u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC8B4u); st32((c.r[19].w[0] + 56u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x002FC8B4u) [[unlikely]] return; }
L_002FC8B4:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 4u)));
    set32(c.r[2], 0u + 600u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x41000000u);
    set32(c.r[3], 0u + 224u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[19].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st16((c.r[19].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    set32(c.r[2], 0u + 64u);
    set32(c.r[5], 0u + 3u);
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[16].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 6u)));
    c.r[8].d[0] = c.r[8].d[0] & 15ull;
    st8((c.r[19].w[0] + 10u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st32((c.r[19].w[0] + 160u), c.r[7].w[0]);
    st8((c.r[19].w[0] + 579u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[19].w[0] + 530u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[19].w[0] + 520u), 0u);
    set32(c.r[6], 0u + 2u);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC90Cu); st32((c.r[19].w[0] + 524u), 0u);  if (depth < kMaxDepth) unit_0081(c, 12u, depth + 1u); else { c.pc = 0x00304300u; return; } if (c.pc != 0x002FC90Cu) [[unlikely]] return; }
L_002FC90C:
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    mmi::paddub(c.r[5], c.r[18], c.r[0]);
    mmi::paddub(c.r[6], c.r[17], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC920u); mmi::paddub(c.r[7], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_007F(c, 67u, depth + 1u); else { c.pc = 0x002FC940u; return; } if (c.pc != 0x002FC920u) [[unlikely]] return; }
L_002FC920:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002FC940:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] + 3200u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 13;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC974u); mmi::paddub(c.r[17], c.r[5], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FC974u) [[unlikely]] return; }
L_002FC974:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC97Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002FC97Cu) [[unlikely]] return; }
L_002FC97C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC984u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 17u, depth + 1u); else { c.pc = 0x0013C880u; return; } if (c.pc != 0x002FC984u) [[unlikely]] return; }
L_002FC984:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC98Cu); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002FC98Cu) [[unlikely]] return; }
L_002FC98C:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002FC9B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[5], c.r[6], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC9C8u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_007F(c, 225u, depth + 1u); else { c.pc = 0x002FDCB0u; return; } if (c.pc != 0x002FC9C8u) [[unlikely]] return; }
L_002FC9C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FCA18; } }
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC9DCu); set32(c.r[5], c.r[16].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x002FC9DCu) [[unlikely]] return; }
L_002FC9DC:
    c.f[2] = ld32((c.r[16].w[0] + 160u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 160u), c.f[1]);  if (t) { goto L_002FCA18; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41900000u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[16].w[0] + 160u), c.r[3].w[0]);
    c.budget -= 5;
L_002FCA18:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002FCA30:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[18], c.r[6], c.r[0]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCA58u); mmi::paddub(c.r[5], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_007F(c, 225u, depth + 1u); else { c.pc = 0x002FDCB0u; return; } if (c.pc != 0x002FCA58u) [[unlikely]] return; }
L_002FCA58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FCB30; } }
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCA6Cu); set32(c.r[5], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x002FCA6Cu) [[unlikely]] return; }
L_002FCA6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCA74u); set32(c.r[4], c.r[18].w[0] + 2048u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002FCA74u) [[unlikely]] return; }
L_002FCA74:
    set32(c.r[2], ld32((c.r[18].w[0] + 7916u)));
    c.r[3].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCA84u); c.r[4].d[0] = c.r[2].d[0] & c.r[3].d[0];  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002FCA84u) [[unlikely]] return; }
L_002FCA84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCA8Cu); c.r[4].d[0] = ld16((c.r[18].w[0] + 7912u));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002FCA8Cu) [[unlikely]] return; }
L_002FCA8C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] + 2576u);
    set32(c.r[5], c.r[17].w[0] + 144u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCAA8u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002FCAA8u) [[unlikely]] return; }
L_002FCAA8:
    set32(c.r[6], c.r[17].w[0] + 128u);
    set32(c.r[7], 0u + 512u);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCABCu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_007F(c, 201u, depth + 1u); else { c.pc = 0x002FD920u; return; } if (c.pc != 0x002FCABCu) [[unlikely]] return; }
L_002FCABC:
    set32(c.r[5], c.r[17].w[0] + 144u);
    set32(c.r[6], 0u + 768u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCACCu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 119u, depth + 1u); else { c.pc = 0x002DD5A0u; return; } if (c.pc != 0x002FCACCu) [[unlikely]] return; }
L_002FCACC:
    c.f[1] = ld32((c.r[17].w[0] + 160u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[17].w[0] + 32u);
    set32(c.r[5], c.r[17].w[0] + 144u);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCAECu); st32((c.r[17].w[0] + 160u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x002FCAECu) [[unlikely]] return; }
L_002FCAEC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002FCB24; } }
    c.f[1] = ld32((c.r[17].w[0] + 160u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002FCB30; } }
L_002FCB24:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_002FCB30:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002FCB50:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[6], c.r[0]);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCB78u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_007F(c, 225u, depth + 1u); else { c.pc = 0x002FDCB0u; return; } if (c.pc != 0x002FCB78u) [[unlikely]] return; }
L_002FCB78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FCD30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCB88u); set32(c.r[4], c.r[16].w[0] + 2048u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002FCB88u) [[unlikely]] return; }
L_002FCB88:
    set32(c.r[2], ld32((c.r[16].w[0] + 7916u)));
    c.r[3].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCB98u); c.r[4].d[0] = c.r[2].d[0] & c.r[3].d[0];  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002FCB98u) [[unlikely]] return; }
L_002FCB98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCBA0u); c.r[4].d[0] = ld16((c.r[16].w[0] + 7912u));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002FCBA0u) [[unlikely]] return; }
L_002FCBA0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] + 2576u);
    set32(c.r[5], c.r[18].w[0] + 144u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCBBCu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002FCBBCu) [[unlikely]] return; }
L_002FCBBC:
    set32(c.r[6], c.r[18].w[0] + 128u);
    set32(c.r[7], 0u + 1024u);
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCBD0u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_007F(c, 201u, depth + 1u); else { c.pc = 0x002FD920u; return; } if (c.pc != 0x002FCBD0u) [[unlikely]] return; }
L_002FCBD0:
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[18].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCBE0u); set32(c.r[6], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002FCBE0u) [[unlikely]] return; }
L_002FCBE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D800000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCBF4u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x002FCBF4u) [[unlikely]] return; }
L_002FCBF4:
    c.f[1] = ld32((c.r[29].w[0] + 64u));
    c.f[0] = ld32((c.r[29].w[0] + 68u));
    c.f[2] = ld32((c.r[29].w[0] + 72u));
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.facc = fp::add(c.f[1], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCC14u); c.f[12] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002FCC14u) [[unlikely]] return; }
L_002FCC14:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002FCC40; } }
    set32(c.r[4], c.r[18].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCC40u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x002FCC40u) [[unlikely]] return; }
L_002FCC40:
    set32(c.r[2], ld32((c.r[16].w[0] + 520u)));
    st32((c.r[18].w[0] + 520u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 524u)));
    st32((c.r[18].w[0] + 524u), c.r[2].w[0]);
    c.f[3] = ld32((c.r[16].w[0] + 1328u));
    c.f[2] = ld32((c.r[16].w[0] + 1332u));
    c.f[1] = ld32((c.r[16].w[0] + 1336u));
    c.f[0] = ld32((c.r[16].w[0] + 1340u));
    st32((c.r[18].w[0] + 128u), c.f[3]);
    st32((c.r[18].w[0] + 132u), c.f[2]);
    st32((c.r[18].w[0] + 136u), c.f[1]);
    st32((c.r[18].w[0] + 140u), c.f[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 520u)));
    c.budget -= 15;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (t) { goto L_002FCD28; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FCD24; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FCD24; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FCD24; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E000000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[18].w[0] + 104u), 0u);
    st32((c.r[18].w[0] + 108u), c.r[3].w[0]);
    st16((c.r[18].w[0] + 516u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[6], 0u + 2u);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCCD4u); st16((c.r[18].w[0] + 514u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0081(c, 12u, depth + 1u); else { c.pc = 0x00304300u; return; } if (c.pc != 0x002FCCD4u) [[unlikely]] return; }
L_002FCCD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCCDCu); set32(c.r[4], c.r[16].w[0] + 2048u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002FCCDCu) [[unlikely]] return; }
L_002FCCDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCCE4u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 16u, depth + 1u); else { c.pc = 0x0013C860u; return; } if (c.pc != 0x002FCCE4u) [[unlikely]] return; }
L_002FCCE4:
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[18].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCCF4u); mmi::paddub(c.r[6], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002FCCF4u) [[unlikely]] return; }
L_002FCCF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCCFCu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x002FCCFCu) [[unlikely]] return; }
L_002FCCFC:
    set32(c.r[3], c.r[29].w[0] + 64u);
    c.f[3] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[18].w[0] + 64u), c.f[3]);
    st32((c.r[18].w[0] + 68u), c.f[2]);
    st32((c.r[18].w[0] + 72u), c.f[1]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 76u), c.f[0]);  if (t) { goto L_002FCD30; } }
L_002FCD24:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 1;
L_002FCD28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCD30u);  if (depth < kMaxDepth) unit_0081(c, 9u, depth + 1u); else { c.pc = 0x00304280u; return; } if (c.pc != 0x002FCD30u) [[unlikely]] return; }
L_002FCD30:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002FCD50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCD70u); mmi::paddub(c.r[5], c.r[6], c.r[0]);  if (depth < kMaxDepth) unit_007F(c, 225u, depth + 1u); else { c.pc = 0x002FDCB0u; return; } if (c.pc != 0x002FCD70u) [[unlikely]] return; }
L_002FCD70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FCE48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCD80u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_007F(c, 227u, depth + 1u); else { c.pc = 0x002FDD70u; return; } if (c.pc != 0x002FCD80u) [[unlikely]] return; }
L_002FCD80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FCE48; } }
    c.f[1] = ld32((c.r[17].w[0] + 108u));
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    c.f[2] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[17].w[0] + 104u), c.f[0]);  if (t) { goto L_002FCDB0; } }
    st32((c.r[17].w[0] + 104u), c.r[2].w[0]);
    c.budget -= 1;
L_002FCDB0:
    c.f[12] = ld32((c.r[17].w[0] + 104u));
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCDC0u); set32(c.r[5], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x002FCDC0u) [[unlikely]] return; }
L_002FCDC0:
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCDCCu); set32(c.r[5], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x002FCDCCu) [[unlikely]] return; }
L_002FCDCC:
    set32(c.r[4], c.r[17].w[0] + 144u);
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCDDCu); set32(c.r[6], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x002FCDDCu) [[unlikely]] return; }
L_002FCDDC:
    set32(c.r[6], c.r[17].w[0] + 144u);
    set32(c.r[7], 0u + 2048u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCDF0u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_007F(c, 201u, depth + 1u); else { c.pc = 0x002FD920u; return; } if (c.pc != 0x002FCDF0u) [[unlikely]] return; }
L_002FCDF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FCE48; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    set32(c.r[4], c.r[17].w[0] + 48u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[12] = ld32((c.r[17].w[0] + 104u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCE14u); set32(c.r[5], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x002FCE14u) [[unlikely]] return; }
L_002FCE14:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] + 3056u);
    set32(c.r[5], c.r[17].w[0] + 128u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCE48u); st32((c.r[16].w[0] + 64u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_007F(c, 209u, depth + 1u); else { c.pc = 0x002FDA30u; return; } if (c.pc != 0x002FCE48u) [[unlikely]] return; }
L_002FCE48:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002FCE60:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[6], c.r[0]);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCE88u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_007F(c, 225u, depth + 1u); else { c.pc = 0x002FDCB0u; return; } if (c.pc != 0x002FCE88u) [[unlikely]] return; }
L_002FCE88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FCF58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCE98u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_007F(c, 227u, depth + 1u); else { c.pc = 0x002FDD70u; return; } if (c.pc != 0x002FCE98u) [[unlikely]] return; }
L_002FCE98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FCF58; } }
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCEACu); set32(c.r[5], c.r[16].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x002FCEACu) [[unlikely]] return; }
L_002FCEAC:
    set32(c.r[6], ld32((c.r[18].w[0] + 64u)));
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCEBCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_007F(c, 186u, depth + 1u); else { c.pc = 0x002FD7D0u; return; } if (c.pc != 0x002FCEBCu) [[unlikely]] return; }
L_002FCEBC:
    set32(c.r[5], c.r[16].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCEC8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_007F(c, 209u, depth + 1u); else { c.pc = 0x002FDA30u; return; } if (c.pc != 0x002FCEC8u) [[unlikely]] return; }
L_002FCEC8:
    set32(c.r[6], c.r[16].w[0] + 128u);
    set32(c.r[7], 0u + 256u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCEDCu); mmi::paddub(c.r[5], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_007F(c, 201u, depth + 1u); else { c.pc = 0x002FD920u; return; } if (c.pc != 0x002FCEDCu) [[unlikely]] return; }
L_002FCEDC:
    set32(c.r[5], c.r[16].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCEE8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_007F(c, 214u, depth + 1u); else { c.pc = 0x002FDB40u; return; } if (c.pc != 0x002FCEE8u) [[unlikely]] return; }
L_002FCEE8:
    c.r[6].d[0] = c.r[2].d[0] << 48;
    set32(c.r[5], c.r[16].w[0] + 144u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCEFCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 119u, depth + 1u); else { c.pc = 0x002DD5A0u; return; } if (c.pc != 0x002FCEFCu) [[unlikely]] return; }
L_002FCEFC:
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCF08u); set32(c.r[5], c.r[16].w[0] + 144u);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x002FCF08u) [[unlikely]] return; }
L_002FCF08:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002FCF58; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 64u)));
    set32(c.r[3], 0u - 1u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], c.r[5].w[0] + 16u);  if (t) { goto L_002FCF54; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42000000u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 160u), c.r[3].w[0]);  if (t) { goto L_002FCF58; } }
    set32(c.r[3], c.r[5].w[0] + 16u);
    c.budget -= 1;
L_002FCF54:
    st32((c.r[18].w[0] + 64u), c.r[3].w[0]);
    c.budget -= 1;
L_002FCF58:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002FCF70:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[6], c.r[0]);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCF98u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_007F(c, 225u, depth + 1u); else { c.pc = 0x002FDCB0u; return; } if (c.pc != 0x002FCF98u) [[unlikely]] return; }
L_002FCF98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FD08C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCFA8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_007F(c, 227u, depth + 1u); else { c.pc = 0x002FDD70u; return; } if (c.pc != 0x002FCFA8u) [[unlikely]] return; }
L_002FCFA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FD08C; } }
    set32(c.r[6], ld32((c.r[18].w[0] + 64u)));
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCFC0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_007F(c, 186u, depth + 1u); else { c.pc = 0x002FD7D0u; return; } if (c.pc != 0x002FCFC0u) [[unlikely]] return; }
L_002FCFC0:
    set32(c.r[6], c.r[16].w[0] + 128u);
    set32(c.r[7], 0u + 1024u);
    mmi::paddub(c.r[5], c.r[18], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCFD4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_007F(c, 201u, depth + 1u); else { c.pc = 0x002FD920u; return; } if (c.pc != 0x002FCFD4u) [[unlikely]] return; }
L_002FCFD4:
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[16].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCFE4u); set32(c.r[6], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002FCFE4u) [[unlikely]] return; }
L_002FCFE4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D800000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCFF8u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x002FCFF8u) [[unlikely]] return; }
L_002FCFF8:
    c.f[1] = ld32((c.r[29].w[0] + 64u));
    c.f[0] = ld32((c.r[29].w[0] + 68u));
    c.f[2] = ld32((c.r[29].w[0] + 72u));
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.facc = fp::add(c.f[1], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD018u); c.f[12] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002FD018u) [[unlikely]] return; }
L_002FD018:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002FD048; } }
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD044u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x002FD044u) [[unlikely]] return; }
L_002FD044:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002FD048:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD050u);  if (depth < kMaxDepth) unit_0077(c, 237u, depth + 1u); else { c.pc = 0x002DEC00u; return; } if (c.pc != 0x002FD050u) [[unlikely]] return; }
L_002FD050:
    c.f[2] = ld32((c.r[16].w[0] + 160u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 160u), c.f[1]);  if (t) { goto L_002FD08C; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[16].w[0] + 160u), c.r[3].w[0]);
    c.budget -= 5;
L_002FD08C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002FD0B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 524u)));
    mmi::paddub(c.r[16], c.r[6], c.r[0]);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { goto L_002FD150; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 520u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[6], c.r[17].w[0] + 128u);  if (t) { goto L_002FD154; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FD150; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FD150; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FD150; } }
    c.f[3] = ld32((c.r[3].w[0] + 80u));
    c.f[2] = ld32((c.r[3].w[0] + 84u));
    c.f[1] = ld32((c.r[3].w[0] + 88u));
    c.f[0] = ld32((c.r[3].w[0] + 92u));
    st32((c.r[17].w[0] + 128u), c.f[3]);
    st32((c.r[17].w[0] + 132u), c.f[2]);
    st32((c.r[17].w[0] + 136u), c.f[1]);
    st32((c.r[17].w[0] + 140u), c.f[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 20u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002FD150; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FD150; } }
    st32((c.r[17].w[0] + 520u), 0u);
    c.budget -= 1;
L_002FD150:
    set32(c.r[6], c.r[17].w[0] + 128u);
    c.budget -= 1;
L_002FD154:
    set32(c.r[7], 0u + 1024u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD160u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_007F(c, 201u, depth + 1u); else { c.pc = 0x002FD920u; return; } if (c.pc != 0x002FD160u) [[unlikely]] return; }
L_002FD160:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD168u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 237u, depth + 1u); else { c.pc = 0x002DEC00u; return; } if (c.pc != 0x002FD168u) [[unlikely]] return; }
L_002FD168:
    c.f[2] = ld32((c.r[17].w[0] + 160u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 160u), c.f[1]);  if (t) { goto L_002FD208; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1580u)));
    c.r[3].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002FD208; } }
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    c.budget -= 1;
L_002FD1B0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD1CCu); set32(c.r[19], c.r[18].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0077(c, 64u, depth + 1u); else { c.pc = 0x002DC7B0u; return; } if (c.pc != 0x002FD1CCu) [[unlikely]] return; }
L_002FD1CC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_002FD1E4; }
    set32(c.r[5], c.r[19].w[0] + 98u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD1E0u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0079(c, 182u, depth + 1u); else { c.pc = 0x002E62A0u; return; } if (c.pc != 0x002FD1E0u) [[unlikely]] return; }
L_002FD1E0:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_002FD1E4:
    c.r[2].d[0] = c.r[18].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FD1B0u | kUnwind; return; } goto L_002FD1B0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42700000u);
    st32((c.r[17].w[0] + 160u), c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD208u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 35u, depth + 1u); else { c.pc = 0x00198550u; return; } if (c.pc != 0x002FD208u) [[unlikely]] return; }
L_002FD208:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002FD230:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.f[2] = 0u;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[1] = ld32((c.r[4].w[0] + 160u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 13;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 160u), c.f[0]);  if (t) { goto L_002FD2DC; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    mmi::paddub(c.r[5], c.r[6], c.r[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E000000u);
    set32(c.r[2], c.r[28].w[0] - 28248u);
    set32(c.r[6], c.r[7].w[0] + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[16].w[0] + 104u), 0u);
    st32((c.r[16].w[0] + 108u), c.r[3].w[0]);
    c.f[3] = ld32((c.r[16].w[0] + 32u));
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = ld32((c.r[16].w[0] + 44u));
    st32((c.r[16].w[0] + 128u), c.f[3]);
    st32((c.r[16].w[0] + 132u), c.f[2]);
    st32((c.r[16].w[0] + 136u), c.f[1]);
    st32((c.r[16].w[0] + 140u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD2B8u); set32(c.r[6], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_007F(c, 186u, depth + 1u); else { c.pc = 0x002FD7D0u; return; } if (c.pc != 0x002FD2B8u) [[unlikely]] return; }
L_002FD2B8:
    set32(c.r[4], c.r[16].w[0] + 64u);
    set32(c.r[5], c.r[16].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD2C8u); set32(c.r[6], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002FD2C8u) [[unlikely]] return; }
L_002FD2C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD2D0u); set32(c.r[4], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x002FD2D0u) [[unlikely]] return; }
L_002FD2D0:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD2DCu); st8((c.r[16].w[0] + 530u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0081(c, 9u, depth + 1u); else { c.pc = 0x00304280u; return; } if (c.pc != 0x002FD2DCu) [[unlikely]] return; }
L_002FD2DC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002FD2F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[1] = ld32((c.r[4].w[0] + 108u));
    c.f[0] = ld32((c.r[4].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    c.f[2] = c.r[2].w[0];
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 15;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[4].w[0] + 104u), c.f[0]);  if (t) { goto L_002FD330; } }
    st32((c.r[17].w[0] + 104u), c.r[2].w[0]);
    c.budget -= 1;
L_002FD330:
    c.f[12] = ld32((c.r[17].w[0] + 104u));
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD340u); set32(c.r[5], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x002FD340u) [[unlikely]] return; }
L_002FD340:
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD34Cu); set32(c.r[5], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x002FD34Cu) [[unlikely]] return; }
L_002FD34C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD360u); set32(c.r[5], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x002FD360u) [[unlikely]] return; }
L_002FD360:
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD370u); mmi::paddub(c.r[6], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x002FD370u) [[unlikely]] return; }
L_002FD370:
    set32(c.r[6], c.r[29].w[0] + 48u);
    set32(c.r[7], 0u + 2048u);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD384u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_007F(c, 201u, depth + 1u); else { c.pc = 0x002FD920u; return; } if (c.pc != 0x002FD384u) [[unlikely]] return; }
L_002FD384:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FD3AC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    set32(c.r[4], c.r[17].w[0] + 48u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(0u));
    c.f[12] = ld32((c.r[17].w[0] + 104u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD3ACu); set32(c.r[5], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x002FD3ACu) [[unlikely]] return; }
L_002FD3AC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002FD3C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], c.r[18].w[0] + 32u);
    set32(c.r[5], c.r[18].w[0] + 48u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD3ECu); mmi::paddub(c.r[16], c.r[6], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x002FD3ECu) [[unlikely]] return; }
L_002FD3EC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    set32(c.r[2], c.r[28].w[0] - 28256u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD40Cu); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x002FD40Cu) [[unlikely]] return; }
L_002FD40C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD414u); set32(c.r[4], c.r[18].w[0] + 144u);  if (depth < kMaxDepth) unit_000F(c, 16u, depth + 1u); else { c.pc = 0x0013C860u; return; } if (c.pc != 0x002FD414u) [[unlikely]] return; }
L_002FD414:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD41Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x002FD41Cu) [[unlikely]] return; }
L_002FD41C:
    set32(c.r[5], c.r[18].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD428u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_007F(c, 209u, depth + 1u); else { c.pc = 0x002FDA30u; return; } if (c.pc != 0x002FD428u) [[unlikely]] return; }
L_002FD428:
    set32(c.r[5], c.r[18].w[0] + 144u);
    set32(c.r[6], 0u + 2048u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD438u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 119u, depth + 1u); else { c.pc = 0x002DD5A0u; return; } if (c.pc != 0x002FD438u) [[unlikely]] return; }
L_002FD438:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD440u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002FD440u) [[unlikely]] return; }
L_002FD440:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD454u); set32(c.r[5], c.r[18].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x002FD454u) [[unlikely]] return; }
L_002FD454:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD45Cu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x002FD45Cu) [[unlikely]] return; }
L_002FD45C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD464u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002FD464u) [[unlikely]] return; }
L_002FD464:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[4], c.r[2].w[0] + 2544u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD474u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 15u, depth + 1u); else { c.pc = 0x0013C690u; return; } if (c.pc != 0x002FD474u) [[unlikely]] return; }
L_002FD474:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD47Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002FD47Cu) [[unlikely]] return; }
L_002FD47C:
    set32(c.r[4], c.r[18].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD488u); set32(c.r[5], c.r[18].w[0] + 144u);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x002FD488u) [[unlikely]] return; }
L_002FD488:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002FD4B8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D800000u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[18].w[0] + 160u), c.r[3].w[0]);
    c.budget -= 5;
L_002FD4B8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002FD4D0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    mmi::paddub(c.r[16], c.r[6], c.r[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 5u);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD50Cu); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002FD50Cu) [[unlikely]] return; }
L_002FD50C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD514u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 16u, depth + 1u); else { c.pc = 0x0013C860u; return; } if (c.pc != 0x002FD514u) [[unlikely]] return; }
L_002FD514:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    set32(c.r[2], c.r[28].w[0] - 28256u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD534u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002FD534u) [[unlikely]] return; }
L_002FD534:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD53Cu); set32(c.r[4], c.r[18].w[0] + 144u);  if (depth < kMaxDepth) unit_000F(c, 16u, depth + 1u); else { c.pc = 0x0013C860u; return; } if (c.pc != 0x002FD53Cu) [[unlikely]] return; }
L_002FD53C:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD548u); set32(c.r[5], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 25u, depth + 1u); else { c.pc = 0x0013CB10u; return; } if (c.pc != 0x002FD548u) [[unlikely]] return; }
L_002FD548:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD55Cu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x002FD55Cu) [[unlikely]] return; }
L_002FD55C:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD568u); set32(c.r[5], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x002FD568u) [[unlikely]] return; }
L_002FD568:
    set32(c.r[6], c.r[29].w[0] + 64u);
    set32(c.r[7], 0u + 1024u);
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD57Cu); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_007F(c, 201u, depth + 1u); else { c.pc = 0x002FD920u; return; } if (c.pc != 0x002FD57Cu) [[unlikely]] return; }
L_002FD57C:
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[18].w[0] + 144u);
    set32(c.r[6], c.r[18].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD590u); mmi::paddub(c.r[17], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002FD590u) [[unlikely]] return; }
L_002FD590:
    c.f[1] = ld32((c.r[18].w[0] + 160u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002FD5CC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 64u);
    fpu_div(c, 12u, c.f[0], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD5CCu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x002FD5CCu) [[unlikely]] return; }
L_002FD5CC:
    c.f[1] = ld32((c.r[29].w[0] + 64u));
    c.f[0] = ld32((c.r[29].w[0] + 68u));
    c.f[2] = ld32((c.r[29].w[0] + 72u));
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.facc = fp::add(c.f[1], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD5ECu); c.f[12] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002FD5ECu) [[unlikely]] return; }
L_002FD5EC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[3].d[0] = c.r[3].d[0] | 4719ull;
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002FD618; } }
    set32(c.r[4], c.r[18].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD618u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x002FD618u) [[unlikely]] return; }
L_002FD618:
    c.f[1] = ld32((c.r[18].w[0] + 160u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[18].w[0] + 160u), c.f[0]);  if (t) { goto L_002FD690; } }
    c.f[1] = ld32((c.r[18].w[0] + 160u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002FD690; } }
    st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(0u));
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[18].w[0] + 520u), 0u);
    st32((c.r[18].w[0] + 524u), 0u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    set32(c.r[6], c.r[16].w[0] + 320u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(0u));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 320u));
    if (c.r[6].d[0] == 0) c.r[5].d[0] = c.r[4].d[0];
    c.r[4].d[0] = c.r[5].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 320u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 16;
L_002FD690:
    c.f[1] = ld32((c.r[18].w[0] + 160u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002FD6B0; } }
    st32((c.r[18].w[0] + 160u), 0u);
    c.budget -= 1;
L_002FD6B0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002FD6D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[6].w[0] + 742u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002FD70C; } }
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002FD714; } }
L_002FD70C:
    set32(c.r[3], 0u + 3u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002FD714:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 6u));
    c.r[3].d[0] = c.r[3].d[0] & 16ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002FD75C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD734u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0047(c, 214u, depth + 1u); else { c.pc = 0x0021ED70u; return; } if (c.pc != 0x002FD734u) [[unlikely]] return; }
L_002FD734:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[18], c.r[2].w[0] + 3120u);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 3;
L_002FD740:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD74Cu); mmi::paddub(c.r[5], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_004C(c, 283u, depth + 1u); else { c.pc = 0x002335D0u; return; } if (c.pc != 0x002FD74Cu) [[unlikely]] return; }
L_002FD74C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FD740u | kUnwind; return; } goto L_002FD740; } }
L_002FD75C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002FD780:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_002FD790:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD7A8u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002FD7A8u) [[unlikely]] return; }
L_002FD7A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD7B0u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 17u, depth + 1u); else { c.pc = 0x0013C880u; return; } if (c.pc != 0x002FD7B0u) [[unlikely]] return; }
L_002FD7B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD7B8u); set32(c.r[4], ld32((c.r[16].w[0] + 188u)));  if (depth < kMaxDepth) unit_000F(c, 36u, depth + 1u); else { c.pc = 0x0013CD20u; return; } if (c.pc != 0x002FD7B8u) [[unlikely]] return; }
L_002FD7B8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002FD7D0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], c.r[17].w[0] + 8320u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD7FCu); mmi::paddub(c.r[16], c.r[6], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002FD7FCu) [[unlikely]] return; }
L_002FD7FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD804u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 17u, depth + 1u); else { c.pc = 0x0013C880u; return; } if (c.pc != 0x002FD804u) [[unlikely]] return; }
L_002FD804:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD814u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 211u, depth + 1u); else { c.pc = 0x00102548u; return; } if (c.pc != 0x002FD814u) [[unlikely]] return; }
L_002FD814:
    set32(c.r[4], c.r[18].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD820u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002FD820u) [[unlikely]] return; }
L_002FD820:
    set32(c.r[19], c.r[29].w[0] + 88u);
    c.f[1] = ld32((c.r[29].w[0] + 80u));
    c.f[0] = ld32((c.r[19].w[0]));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD838u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002FD838u) [[unlikely]] return; }
L_002FD838:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002FD870; } }
    c.f[12] = ld32((c.r[29].w[0] + 80u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD864u); c.f[13] = ld32((c.r[19].w[0]));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x002FD864u) [[unlikely]] return; }
L_002FD864:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[19], c.r[2], c.r[0]);  if (t) { goto L_002FD874; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_002FD870:
    mmi::paddub(c.r[19], c.r[2], c.r[0]);
    c.budget -= 1;
L_002FD874:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD87Cu);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002FD87Cu) [[unlikely]] return; }
L_002FD87C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 2u)));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    set32(c.r[2], c.r[2].w[0] << 12);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD890u); set32(c.r[4], c.r[19].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002FD890u) [[unlikely]] return; }
L_002FD890:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 2u)));
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD8A4u); set32(c.r[4], c.r[2].w[0] << 12);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002FD8A4u) [[unlikely]] return; }
L_002FD8A4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[4], c.r[2].w[0] + 2560u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD8B4u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x002FD8B4u) [[unlikely]] return; }
L_002FD8B4:
    c.f[12] = ld32((c.r[16].w[0] + 4u));
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD8C4u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x002FD8C4u) [[unlikely]] return; }
L_002FD8C4:
    c.f[1] = ld32((c.r[29].w[0] + 84u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41080000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[17].w[0] + 8320u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD8E0u); st32((c.r[29].w[0] + 84u), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002FD8E0u) [[unlikely]] return; }
L_002FD8E0:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD8ECu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x002FD8ECu) [[unlikely]] return; }
L_002FD8EC:
    set32(c.r[4], c.r[18].w[0] + 144u);
    set32(c.r[6], c.r[18].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD8FCu); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x002FD8FCu) [[unlikely]] return; }
L_002FD8FC:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002FD920:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[0] = ld32((c.r[5].w[0] + 16u));
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[12] = c.r[2].w[0];
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 20u));
    mmi::paddub(c.r[17], c.r[6], c.r[0]);
    mmi::paddub(c.r[19], c.r[7], c.r[0]);
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 24u));
    st32((c.r[29].w[0] + 88u), c.f[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD974u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x002FD974u) [[unlikely]] return; }
L_002FD974:
    set32(c.r[6], c.r[18].w[0] + 32u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD984u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002FD984u) [[unlikely]] return; }
L_002FD984:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD994u); set32(c.r[6], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_005B(c, 291u, depth + 1u); else { c.pc = 0x0026F830u; return; } if (c.pc != 0x002FD994u) [[unlikely]] return; }
L_002FD994:
    mmi::paddub(c.r[17], c.r[2], c.r[0]);
    c.budget -= 3;
    { const bool t = c.r[17].sd[0] < 0; set32(c.r[18], 0u + 1u);  if (t) { goto L_002FD9C0; } }
    c.r[2].d[0] = c.r[19].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[5], c.r[29].w[0] + 112u);  if (t) { goto L_002FD9E4; } }
    mmi::paddub(c.r[17], c.r[2], c.r[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[18], c.r[0], c.r[0]);  if (t) { goto L_002FD9E0; } }
L_002FD9C0:
    c.r[2].d[0] = c.r[19].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.r[1].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002FD9E0; } }
    mmi::paddub(c.r[17], c.r[2], c.r[0]);
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    c.budget -= 2;
L_002FD9E0:
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.budget -= 1;
L_002FD9E4:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD9F0u); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 147u, depth + 1u); else { c.pc = 0x0026E4D0u; return; } if (c.pc != 0x002FD9F0u) [[unlikely]] return; }
L_002FD9F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD9F8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002FD9F8u) [[unlikely]] return; }
L_002FD9F8:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDA04u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0013C000u; return; } if (c.pc != 0x002FDA04u) [[unlikely]] return; }
L_002FDA04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDA0Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002FDA0Cu) [[unlikely]] return; }
L_002FDA0C:
    mmi::paddub(c.r[2], c.r[18], c.r[0]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002FDA30:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[4], c.r[17].w[0] + 48u);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDA54u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_000F(c, 20u, depth + 1u); else { c.pc = 0x0013C9E0u; return; } if (c.pc != 0x002FDA54u) [[unlikely]] return; }
L_002FDA54:
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.f[20] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDA64u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x002FDA64u) [[unlikely]] return; }
L_002FDA64:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], c.r[2].w[0] + 2608u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 3;
L_002FDA70:
    c.f[1] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002FDA98; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[4].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FDA70u | kUnwind; return; } goto L_002FDA70; } }
    c.budget -= 1;
L_002FDA98:
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[20]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002FDAD8; } }
    c.f[0] = fp::sub(c.f[1], c.f[20]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E000000u);
    c.f[2] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 8;
    if (!(c.fcr31 & kFpuCondition)) { c.f[20] = fp::add(c.f[20], c.f[2]);  goto L_002FDAD8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = c.f[1];  if (t) { goto L_002FDAD8; } }
    c.f[20] = fp::add(c.f[20], c.f[2]);
    c.budget -= 1;
L_002FDAD8:
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[17].w[0] + 48u);  if (t) { goto L_002FDB18; } }
    c.f[0] = fp::sub(c.f[20], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E000000u);
    c.f[2] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 8;
    if (!(c.fcr31 & kFpuCondition)) { c.f[20] = fp::sub(c.f[20], c.f[2]);  goto L_002FDB14; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = c.f[1];  if (t) { goto L_002FDB14; } }
    c.f[20] = fp::sub(c.f[20], c.f[2]);
    c.budget -= 1;
L_002FDB14:
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.budget -= 1;
L_002FDB18:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDB24u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x002FDB24u) [[unlikely]] return; }
L_002FDB24:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002FDB40:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDB64u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 21u, depth + 1u); else { c.pc = 0x0013CA20u; return; } if (c.pc != 0x002FDB64u) [[unlikely]] return; }
L_002FDB64:
    set32(c.r[6], c.r[17].w[0] + 32u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDB74u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002FDB74u) [[unlikely]] return; }
L_002FDB74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDB7Cu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x002FDB7Cu) [[unlikely]] return; }
L_002FDB7C:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDB88u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x002FDB88u) [[unlikely]] return; }
L_002FDB88:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_002FDBA8; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_002FDBA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);  if (t) { goto L_002FDBC4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[12] = c.f[0];  if (t) { goto L_002FDBE8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.budget -= 1;
L_002FDBC4:
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002FDBE4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[1];  if (t) { goto L_002FDBE4; } }
L_002FDBE4:
    c.f[12] = c.f[0];
    c.budget -= 1;
L_002FDBE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDBF0u);  if (depth < kMaxDepth) unit_000E(c, 285u, depth + 1u); else { c.pc = 0x0013B410u; return; } if (c.pc != 0x002FDBF0u) [[unlikely]] return; }
L_002FDBF0:
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);
    c.f[0] = c.r[16].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDC04u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 291u, depth + 1u); else { c.pc = 0x0013B4D0u; return; } if (c.pc != 0x002FDC04u) [[unlikely]] return; }
L_002FDC04:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x46800000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002FDC2C; } }
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 1));
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);
    c.budget -= 3;
L_002FDC2C:
    c.f[0] = c.r[16].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDC38u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 291u, depth + 1u); else { c.pc = 0x0013B4D0u; return; } if (c.pc != 0x002FDC38u) [[unlikely]] return; }
L_002FDC38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDC40u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002FDC40u) [[unlikely]] return; }
L_002FDC40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDC48u); mmi::paddub(c.r[4], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x002FDC48u) [[unlikely]] return; }
L_002FDC48:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDC58u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002FDC58u) [[unlikely]] return; }
L_002FDC58:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[1].d[0] = c.r[3].sd[0] < 3585ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; c.r[2].d[0] = c.r[3].d[0] << 48;  if (t) { goto L_002FDC74; } }
    set32(c.r[3], 0u + 3584u);
    c.r[2].d[0] = c.r[3].d[0] << 48;
    c.budget -= 2;
L_002FDC74:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[1].d[0] = c.r[2].sd[0] < 768ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002FDC88; } }
    set32(c.r[3], 0u + 768u);
    c.budget -= 1;
L_002FDC88:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[3].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002FDCB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[4].w[0] + 520u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002FDD3C; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 9u);  if (t) { goto L_002FDCEC; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FDCE8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FDD18; } }
L_002FDCE8:
    set32(c.r[2], 0u + 9u);
    c.budget -= 1;
L_002FDCEC:
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[4].w[0] + 520u), 0u);
    st32((c.r[4].w[0] + 524u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    st32((c.r[4].w[0] + 104u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E000000u);
    st32((c.r[4].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDD10u); st8((c.r[4].w[0] + 530u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0081(c, 9u, depth + 1u); else { c.pc = 0x00304280u; return; } if (c.pc != 0x002FDD10u) [[unlikely]] return; }
L_002FDD10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002FDD60; } }
L_002FDD18:
    c.f[3] = ld32((c.r[3].w[0] + 80u));
    c.f[2] = ld32((c.r[3].w[0] + 84u));
    c.f[1] = ld32((c.r[3].w[0] + 88u));
    c.f[0] = ld32((c.r[3].w[0] + 92u));
    st32((c.r[4].w[0] + 128u), c.f[3]);
    st32((c.r[4].w[0] + 132u), c.f[2]);
    st32((c.r[4].w[0] + 136u), c.f[1]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 140u), c.f[0]);  if (t) { goto L_002FDD5C; } }
L_002FDD3C:
    c.f[3] = ld32((c.r[5].w[0] + 1328u));
    c.f[2] = ld32((c.r[5].w[0] + 1332u));
    c.f[1] = ld32((c.r[5].w[0] + 1336u));
    c.f[0] = ld32((c.r[5].w[0] + 1340u));
    st32((c.r[4].w[0] + 128u), c.f[3]);
    st32((c.r[4].w[0] + 132u), c.f[2]);
    st32((c.r[4].w[0] + 136u), c.f[1]);
    st32((c.r[4].w[0] + 140u), c.f[0]);
    c.budget -= 8;
L_002FDD5C:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_002FDD60:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002FDD70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002FDDCC; } }
    set32(c.r[2], 0u + 9u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[4].w[0] + 520u), 0u);
    st32((c.r[4].w[0] + 524u), 0u);
    st32((c.r[4].w[0] + 28u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    st32((c.r[4].w[0] + 104u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E000000u);
    st32((c.r[4].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDDC0u); st8((c.r[4].w[0] + 530u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0081(c, 9u, depth + 1u); else { c.pc = 0x00304280u; return; } if (c.pc != 0x002FDDC0u) [[unlikely]] return; }
L_002FDDC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002FDDCC; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_002FDDCC:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002FDDE0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] + 4528u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002FC000u < 16384u) { entry = entries_007F[(t - 0x002FC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002FDE00:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[3], c.r[2].w[0] + 3248u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] + 4544u);
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[6], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[17], c.r[3].w[0] + c.r[5].w[0]);
    st128((c.r[6].w[0]) & ~15u, c.r[2]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    set32(c.r[16], c.r[18].w[0] + 320u);
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 44u)));
    st16((c.r[4].w[0] + 320u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDE6Cu); set32(c.r[4], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x002FDE6Cu) [[unlikely]] return; }
L_002FDE6C:
    c.f[3] = ld32((c.r[17].w[0] + 16u));
    c.f[2] = ld32((c.r[17].w[0] + 20u));
    c.f[1] = ld32((c.r[17].w[0] + 24u));
    c.f[0] = ld32((c.r[17].w[0] + 28u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00300000u);
    set32(c.r[3], c.r[2].w[0] - 8208u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[2].w[0] - 11824u);
    st32((c.r[18].w[0] + 48u), c.f[3]);
    st32((c.r[18].w[0] + 52u), c.f[2]);
    st32((c.r[18].w[0] + 56u), c.f[1]);
    st32((c.r[18].w[0] + 60u), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 32u)));
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    st32((c.r[18].w[0] + 80u), c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 34u)));
    st32((c.r[18].w[0] + 84u), c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 36u)));
    st32((c.r[18].w[0] + 88u), c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 38u)));
    st32((c.r[18].w[0] + 92u), c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 40u)));
    st32((c.r[18].w[0] + 96u), c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 42u)));
    st32((c.r[18].w[0] + 100u), c.r[5].w[0]);
    st32((c.r[18].w[0] + 168u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] << 5);
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDEECu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0016(c, 134u, depth + 1u); else { c.pc = 0x0015B550u; return; } if (c.pc != 0x002FDEECu) [[unlikely]] return; }
L_002FDEEC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] + 4256u);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    st16((c.r[16].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0] + 176u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDF18u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_007F(c, 234u, depth + 1u); else { c.pc = 0x002FDF30u; return; } if (c.pc != 0x002FDF18u) [[unlikely]] return; }
L_002FDF18:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002FDF30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDF4Cu); set32(c.r[5], c.r[16].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x002FDF4Cu) [[unlikely]] return; }
L_002FDF4C:
    set32(c.r[3], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 92u)));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDF88u); st32((c.r[16].w[0] + 88u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005D(c, 686u, depth + 1u); else { c.pc = 0x00276330u; return; } if (c.pc != 0x002FDF88u) [[unlikely]] return; }
L_002FDF88:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[3] = ld32((c.r[16].w[0] + 32u));
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.f[0] = ld32((c.r[16].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] + 4896u);
    st32((c.r[3].w[0]), c.f[3]);
    st32((c.r[3].w[0] + 4u), c.f[2]);
    st32((c.r[3].w[0] + 8u), c.f[1]);
    st32((c.r[3].w[0] + 12u), c.f[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002FDFD0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_002FDFE0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_002FDFF0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 184u)));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[19], c.r[16].w[0] + 320u);  if (t) { goto L_002FE208; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 176u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], c.r[3].w[0] - 8576u);
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    mmi::paddub(c.r[20], c.r[0], c.r[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 14u)));
    set32(c.r[4], c.r[5].w[0] << 5);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 5);
    set32(c.r[17], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[21], c.r[17], c.r[0]);  if (t) { goto L_002FE0C8; } }
L_002FE058:
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[20], c.r[20].w[0] + 4u);  goto L_002FE0BC; }
    c.r[4].d[0] = ld16((c.r[19].w[0] + 2u));
    set32(c.r[3], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << (c.r[18].w[0] & 31u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002FE0B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE088u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002FE088u) [[unlikely]] return; }
L_002FE088:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FE0A8; } }
    c.f[13] = ld32((c.r[21].w[0] + 68u));
    c.f[14] = ld32((c.r[21].w[0] + 72u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE0A4u); c.f[12] = ld32((c.r[21].w[0] + 64u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002FE0A4u) [[unlikely]] return; }
L_002FE0A4:
    c.budget -= 1;
L_002FE0A8:
    set32(c.r[2], ld32((c.r[16].w[0] + 184u)));
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE0B8u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_000F(c, 36u, depth + 1u); else { c.pc = 0x0013CD20u; return; } if (c.pc != 0x002FE0B8u) [[unlikely]] return; }
L_002FE0B8:
    set32(c.r[20], c.r[20].w[0] + 4u);
    c.budget -= 1;
L_002FE0BC:
    set32(c.r[21], c.r[21].w[0] + 240u);
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 3;
L_002FE0C8:
    set32(c.r[4], ld32((c.r[16].w[0] + 184u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], c.r[4].w[0] + c.r[20].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FE058u | kUnwind; return; } goto L_002FE058; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], c.r[3].w[0] + 4432u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[18], ld32((c.r[3].w[0])));
    c.budget -= 8;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002FE208; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[29].w[0] + 160u);  if (t) { goto L_002FE1F8; } }
L_002FE108:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE110u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002FE110u) [[unlikely]] return; }
L_002FE110:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 112u);  if (t) { goto L_002FE144; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 7u));
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.f[13] = ld32((c.r[2].w[0] + 68u));
    c.f[14] = ld32((c.r[2].w[0] + 72u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE140u); c.f[12] = ld32((c.r[2].w[0] + 64u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002FE140u) [[unlikely]] return; }
L_002FE140:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 1;
L_002FE144:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE14Cu);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002FE14Cu) [[unlikely]] return; }
L_002FE14C:
    set32(c.r[6], ld32((c.r[18].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    set32(c.r[3], c.r[28].w[0] - 28240u);
    st32((c.r[1].w[0] - 20340u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20400u), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    set32(c.r[4], c.r[2].w[0] - 11824u);
    c.r[2].d[0] = ld8((c.r[18].w[0] + 8u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] << 5);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[1].w[0] - 20364u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[18].w[0] + 4u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20354u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[18].w[0] + 6u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 20347u));
    c.budget -= 34;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002FE1E0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] - 20352u), c.r[20].w[0]);  if (t) { goto L_002FE1E8; } }
L_002FE1E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20352u), 0u);
    c.budget -= 2;
L_002FE1E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE1F4u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001B(c, 162u, depth + 1u); else { c.pc = 0x0016EA60u; return; } if (c.pc != 0x002FE1F4u) [[unlikely]] return; }
L_002FE1F4:
    set32(c.r[18], c.r[18].w[0] + 12u);
    c.budget -= 1;
L_002FE1F8:
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FE108u | kUnwind; return; } goto L_002FE108; } }
    c.budget -= 1;
L_002FE208:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_002FE230:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] + 4912u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002FC000u < 16384u) { entry = entries_007F[(t - 0x002FC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002FE250:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] + 4928u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[6], c.r[29].w[0] + 48u);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[16], c.r[17].w[0] + 320u);
    st128((c.r[6].w[0]) & ~15u, c.r[3]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] + 4560u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 88u), 0u);
    st32((c.r[4].w[0] + 84u), 0u);
    st32((c.r[4].w[0] + 80u), 0u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE2B0u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x002FE2B0u) [[unlikely]] return; }
L_002FE2B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00300000u);
    set32(c.r[2], c.r[2].w[0] - 6688u);
    st32((c.r[17].w[0] + 168u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[4], c.r[2].w[0] + 4721u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], c.r[2].w[0] + 4722u);
    set32(c.r[9], 0u + 4u);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[6], c.r[29].w[0] + 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[10], c.r[2].w[0] + 4723u);
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[8], c.r[2].w[0] + 4752u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[7], c.r[2].w[0] + 4756u);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = ld8((c.r[2].w[0]));
    st16((c.r[16].w[0] + 62u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[5], c.r[2].w[0] + 4760u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], c.r[2].w[0] + 4764u);
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    c.r[10].d[0] = ld8((c.r[10].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] + 4560u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    st16((c.r[16].w[0] + 60u), static_cast<std::uint16_t>(c.r[10].w[0]));
    st8((c.r[17].w[0] + 268u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    set32(c.r[9], c.r[9].w[0] << 4);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[8], ld32((c.r[8].w[0])));
    st32((c.r[16].w[0] + 36u), c.r[8].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    set32(c.r[8], c.r[8].w[0] << 4);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], ld32((c.r[7].w[0])));
    st32((c.r[16].w[0] + 40u), c.r[7].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    set32(c.r[7], c.r[7].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    st32((c.r[16].w[0] + 44u), c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[16].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[7], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 36u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 60u)));
    set32(c.r[5], c.r[7].w[0] - c.r[5].w[0]);
    mmi::div(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[7], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 40u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 60u)));
    set32(c.r[5], c.r[7].w[0] - c.r[5].w[0]);
    mmi::div(c, 1, c.r[5].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 81;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE3F4u); set32(c.r[5], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x002FE3F4u) [[unlikely]] return; }
L_002FE3F4:
    set32(c.r[4], c.r[16].w[0] + 16u);
    set32(c.r[6], c.r[17].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE404u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002FE404u) [[unlikely]] return; }
L_002FE404:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 60u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.f[0] = c.r[2].w[0];
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 12u, c.f[0], c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE438u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x002FE438u) [[unlikely]] return; }
L_002FE438:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], c.r[2].w[0] + 4720u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[2].w[0] - 11824u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE470u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0016(c, 134u, depth + 1u); else { c.pc = 0x0015B550u; return; } if (c.pc != 0x002FE470u) [[unlikely]] return; }
L_002FE470:
    set32(c.r[2], ld32((c.r[17].w[0] + 176u)));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE480u); st32((c.r[16].w[0] + 32u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_007F(c, 257u, depth + 1u); else { c.pc = 0x002FE4A0u; return; } if (c.pc != 0x002FE480u) [[unlikely]] return; }
L_002FE480:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002FE4A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 26488u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { goto L_002FE590; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[17].w[0] + 320u);  if (t) { goto L_002FE4EC; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002FE4EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE4ECu); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_0025(c, 351u, depth + 1u); else { c.pc = 0x00197C30u; return; } if (c.pc != 0x002FE4ECu) [[unlikely]] return; }
L_002FE4EC:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 60u)));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st16((c.r[16].w[0] + 60u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_002FE590; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FE53C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[4], c.r[17].w[0] + 32u);
    set32(c.r[5], c.r[16].w[0] + 16u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE534u); st32((c.r[16].w[0] + 40u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x002FE534u) [[unlikely]] return; }
L_002FE534:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_002FE594; } }
L_002FE53C:
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], 0u + 4u);
    st32((c.r[16].w[0] + 36u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    st32((c.r[16].w[0] + 40u), c.r[4].w[0]);
    c.f[3] = ld32((c.r[16].w[0]));
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    st32((c.r[17].w[0] + 32u), c.f[3]);
    st32((c.r[17].w[0] + 36u), c.f[2]);
    st32((c.r[17].w[0] + 40u), c.f[1]);
    st32((c.r[17].w[0] + 44u), c.f[0]);
    st8((c.r[28].w[0] - 26488u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.budget -= 18;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002FE590; } }
    set32(c.r[5], 0u + 21u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE590u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 351u, depth + 1u); else { c.pc = 0x00197C30u; return; } if (c.pc != 0x002FE590u) [[unlikely]] return; }
L_002FE590:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_002FE594:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE59Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_005D(c, 686u, depth + 1u); else { c.pc = 0x00276330u; return; } if (c.pc != 0x002FE59Cu) [[unlikely]] return; }
L_002FE59C:
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002FE5C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_002FE5D0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_002FE5E0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 184u)));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[19], c.r[16].w[0] + 320u);  if (t) { goto L_002FE858; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 176u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], c.r[3].w[0] - 8576u);
    mmi::paddub(c.r[20], c.r[0], c.r[0]);
    mmi::paddub(c.r[18], c.r[19], c.r[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 14u)));
    set32(c.r[4], c.r[5].w[0] << 5);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 5);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_002FE6F8; } }
L_002FE644:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 184u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[5], c.r[5].w[0] + c.r[20].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 10;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[18], c.r[18].w[0] + 4u);  goto L_002FE6F4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE674u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002FE674u) [[unlikely]] return; }
L_002FE674:
    set32(c.r[2], ld32((c.r[19].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FE6D0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    set32(c.r[3], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.f[13] = ld32((c.r[2].w[0] + 68u));
    c.f[14] = ld32((c.r[2].w[0] + 72u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE6A8u); c.f[12] = ld32((c.r[2].w[0] + 64u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002FE6A8u) [[unlikely]] return; }
L_002FE6A8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002FE6C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE6C0u); set32(c.r[4], ld32((c.r[18].w[0] + 36u)));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002FE6C0u) [[unlikely]] return; }
L_002FE6C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));  if (t) { goto L_002FE6D4; } }
L_002FE6C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE6D0u); set32(c.r[4], ld32((c.r[18].w[0] + 36u)));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002FE6D0u) [[unlikely]] return; }
L_002FE6D0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    c.budget -= 1;
L_002FE6D4:
    set32(c.r[2], ld32((c.r[16].w[0] + 184u)));
    set32(c.r[3], c.r[3].w[0] + c.r[20].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE6ECu); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_000F(c, 36u, depth + 1u); else { c.pc = 0x0013CD20u; return; } if (c.pc != 0x002FE6ECu) [[unlikely]] return; }
L_002FE6EC:
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.budget -= 2;
L_002FE6F4:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_002FE6F8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 62u)));
    c.r[3].d[0] = c.r[20].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FE644u | kUnwind; return; } goto L_002FE644; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], c.r[3].w[0] + 4880u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[18], ld32((c.r[3].w[0])));
    c.budget -= 8;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002FE858; } }
    set32(c.r[3], c.r[20].w[0] << 2);
    set32(c.r[20], c.r[19].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[21], c.r[29].w[0] + 160u);  if (t) { goto L_002FE848; } }
L_002FE738:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE740u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002FE740u) [[unlikely]] return; }
L_002FE740:
    set32(c.r[2], ld32((c.r[19].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 112u);  if (t) { goto L_002FE79C; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 6u));
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.f[13] = ld32((c.r[2].w[0] + 68u));
    c.f[14] = ld32((c.r[2].w[0] + 72u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE770u); c.f[12] = ld32((c.r[2].w[0] + 64u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002FE770u) [[unlikely]] return; }
L_002FE770:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002FE790; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE788u); set32(c.r[4], ld32((c.r[20].w[0] + 36u)));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002FE788u) [[unlikely]] return; }
L_002FE788:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FE798; } }
L_002FE790:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE798u); set32(c.r[4], ld32((c.r[20].w[0] + 36u)));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002FE798u) [[unlikely]] return; }
L_002FE798:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 1;
L_002FE79C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE7A4u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002FE7A4u) [[unlikely]] return; }
L_002FE7A4:
    set32(c.r[6], ld32((c.r[18].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[4], c.r[2].w[0] + 4720u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    st32((c.r[1].w[0] - 20340u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20400u), c.r[5].w[0]);
    set32(c.r[3], c.r[28].w[0] - 28236u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[6], c.r[2].w[0] - 11824u);
    c.r[2].d[0] = ld8((c.r[18].w[0] + 7u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[7].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[5], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[2].w[0] - 20416u);
    set32(c.r[2], c.r[7].w[0] << 5);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[1].w[0] - 20364u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[18].w[0] + 4u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20354u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[18].w[0] + 5u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 40;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE844u); st32((c.r[1].w[0] - 20352u), c.r[21].w[0]);  if (depth < kMaxDepth) unit_001B(c, 162u, depth + 1u); else { c.pc = 0x0016EA60u; return; } if (c.pc != 0x002FE844u) [[unlikely]] return; }
L_002FE844:
    set32(c.r[18], c.r[18].w[0] + 8u);
    c.budget -= 1;
L_002FE848:
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FE738u | kUnwind; return; } goto L_002FE738; } }
    c.budget -= 1;
L_002FE858:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_002FE880:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] + 5120u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002FC000u < 16384u) { entry = entries_007F[(t - 0x002FC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002FE8A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], c.r[2].w[0] + 4944u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00300000u);
    set32(c.r[6], c.r[2].w[0] - 4800u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0] + 88u), 0u);
    st32((c.r[4].w[0] + 84u), 0u);
    st32((c.r[4].w[0] + 80u), 0u);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[7], c.r[2].w[0] + 5105u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[2], c.r[8].w[0] << 4);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[4].w[0] + 32u), c.f[3]);
    st32((c.r[4].w[0] + 36u), c.f[2]);
    st32((c.r[4].w[0] + 40u), c.f[1]);
    st32((c.r[4].w[0] + 44u), c.f[0]);
    st32((c.r[4].w[0] + 168u), c.r[6].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], c.r[2].w[0] + 5104u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[2].w[0] - 11824u);
    set32(c.r[8], c.r[8].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    c.r[7].d[0] = ld8((c.r[7].w[0]));
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    st8((c.r[4].w[0] + 10u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[4].w[0] + 268u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[3], c.r[3].w[0] << 5);
    c.budget -= 50;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE968u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0016(c, 134u, depth + 1u); else { c.pc = 0x0015B550u; return; } if (c.pc != 0x002FE968u) [[unlikely]] return; }
L_002FE968:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE970u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_007F(c, 282u, depth + 1u); else { c.pc = 0x002FE980u; return; } if (c.pc != 0x002FE970u) [[unlikely]] return; }
L_002FE970:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002FE980:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] + 5136u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 12;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE9B0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FE9B0u) [[unlikely]] return; }
L_002FE9B0:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE9BCu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_005D(c, 686u, depth + 1u); else { c.pc = 0x00276330u; return; } if (c.pc != 0x002FE9BCu) [[unlikely]] return; }
L_002FE9BC:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002FE9E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002FE9F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 26487u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 8;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { goto L_002FEAFC; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00860000u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[16], c.r[3].w[0] + 26144u);  if (t) { goto L_002FEA40; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00860000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 26418u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002FEA40; } }
    set32(c.r[2], c.r[5].w[0] + 1u);
    set32(c.r[5], 0u + 11u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FEA40u); st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0025(c, 351u, depth + 1u); else { c.pc = 0x00197C30u; return; } if (c.pc != 0x002FEA40u) [[unlikely]] return; }
L_002FEA40:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00860000u);
    c.f[2] = ld32((c.r[1].w[0] + 29140u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[4], 0u + 1u);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00860000u);
    c.f[3] = ld32((c.r[1].w[0] + 29144u));
    if (c.r[5].d[0] != 0) c.r[6].d[0] = c.r[4].d[0];
    set32(c.r[3], c.r[3].w[0] + 5072u);
    set32(c.r[5], c.r[6].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00860000u);
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[0] = ld32((c.r[1].w[0] + 29136u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    set32(c.r[3], c.r[3].w[0] + 5076u);
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[17].w[0] + 32u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 8024u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], c.r[3].w[0] + 5080u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.f[1] = fp::add(c.f[2], c.f[1]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[0] = fp::add(c.f[3], c.f[0]);
    st32((c.r[17].w[0] + 40u), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    set32(c.r[3], c.r[4].w[0] + 1u);
    c.r[1].d[0] = c.r[4].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 36;
    { const bool t = c.r[1].d[0] != 0ull; st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002FEBE8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002FEBE8; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 166u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FEAE8u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_004F(c, 379u, depth + 1u); else { c.pc = 0x0023FF90u; return; } if (c.pc != 0x002FEAE8u) [[unlikely]] return; }
L_002FEAE8:
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 166u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002FEBE8; } }
L_002FEAFC:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_002FEBE8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 6u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002FEB38; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBDCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    st32((c.r[17].w[0] + 72u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 56u), 0u);
    set32(c.r[3], 0u + 10u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 9;
L_002FEB38:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 166u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002FEB50; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002FEBE8; } }
L_002FEB50:
    c.f[1] = ld32((c.r[17].w[0] + 72u));
    c.f[0] = ld32((c.r[17].w[0] + 56u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44720000u);
    c.r[3].d[0] = c.r[3].d[0] | 29491ull;
    c.f[2] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 56u), c.f[1]);
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 13;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 40u), c.f[0]);  if (t) { goto L_002FEBE8; } }
    st32((c.r[17].w[0] + 40u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[17].w[0] + 56u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E990000u);
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    c.f[0] = c.r[3].w[0];
    c.f[1] = c.f[1] ^ fp::kSign;
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 56u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002FEBC0; } }
    set32(c.r[5], 0u + 94u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FEBC0u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0048(c, 72u, depth + 1u); else { c.pc = 0x002211C0u; return; } if (c.pc != 0x002FEBC0u) [[unlikely]] return; }
L_002FEBC0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[1].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002FEBE8; } }
    set32(c.r[3], 0u + 3u);
    st8((c.r[28].w[0] - 26487u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002FEBE8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002FEC00:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002FEC84; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002FEC4C; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002FEC2C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FEC84; } }
L_002FEC2C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 26488u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002FEC84; } }
    set32(c.r[3], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBD230000u);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    st32((c.r[4].w[0] + 56u), c.r[3].w[0]);
    c.budget -= 5;
L_002FEC4C:
    c.f[1] = ld32((c.r[4].w[0] + 56u));
    c.f[0] = ld32((c.r[4].w[0] + 40u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x446F0000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.f[2] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 40u), c.f[0]);  if (t) { goto L_002FEC84; } }
    st32((c.r[4].w[0] + 40u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_002FEC84:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002FEC90:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002FED14; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002FECDC; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002FECBC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FED14; } }
L_002FECBC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 26486u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002FED14; } }
    set32(c.r[3], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBD230000u);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    st32((c.r[4].w[0] + 56u), c.r[3].w[0]);
    c.budget -= 5;
L_002FECDC:
    c.f[1] = ld32((c.r[4].w[0] + 56u));
    c.f[0] = ld32((c.r[4].w[0] + 40u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x446D0000u);
    c.r[3].d[0] = c.r[3].d[0] | 49152ull;
    c.f[2] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 40u), c.f[0]);  if (t) { goto L_002FED14; } }
    st32((c.r[4].w[0] + 40u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_002FED14:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002FED20:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_002FED30:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_002FED40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 188u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002FED68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FED60u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002FED60u) [[unlikely]] return; }
L_002FED60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FED68u); set32(c.r[4], ld32((c.r[16].w[0] + 188u)));  if (depth < kMaxDepth) unit_000F(c, 36u, depth + 1u); else { c.pc = 0x0013CD20u; return; } if (c.pc != 0x002FED68u) [[unlikely]] return; }
L_002FED68:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002FED80:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] + 5872u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002FC000u < 16384u) { entry = entries_007F[(t - 0x002FC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002FEDA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], c.r[2].w[0] + 5168u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[4].w[0] + 336u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[4].w[0] + 88u), 0u);
    st32((c.r[4].w[0] + 84u), 0u);
    st32((c.r[4].w[0] + 80u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[6], c.r[2].w[0] + 5520u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00300000u);
    set32(c.r[9], c.r[2].w[0] - 3664u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[2], c.r[5].w[0] << 4);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[8], c.r[2].w[0] + 5473u);
    st32((c.r[4].w[0] + 32u), c.f[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st32((c.r[4].w[0] + 36u), c.f[2]);
    set32(c.r[7], c.r[2].w[0] + 5824u);
    st32((c.r[4].w[0] + 40u), c.f[1]);
    st32((c.r[4].w[0] + 44u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[5], c.r[2].w[0] + 5825u);
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], c.r[2].w[0] + 5472u);
    set32(c.r[2], c.r[10].w[0] << 4);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    st32((c.r[4].w[0] + 48u), c.f[3]);
    st32((c.r[4].w[0] + 52u), c.f[2]);
    st32((c.r[4].w[0] + 56u), c.f[1]);
    st32((c.r[4].w[0] + 60u), c.f[0]);
    st32((c.r[4].w[0] + 168u), c.r[9].w[0]);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[2].w[0] - 11824u);
    set32(c.r[9], c.r[9].w[0] << 1);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    c.r[8].d[0] = ld8((c.r[8].w[0]));
    st8((c.r[4].w[0] + 10u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[8], c.r[8].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    st8((c.r[4].w[0] + 337u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[7], c.r[7].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    st8((c.r[4].w[0] + 338u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[3], c.r[3].w[0] << 5);
    c.budget -= 75;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FEECCu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0016(c, 134u, depth + 1u); else { c.pc = 0x0015B550u; return; } if (c.pc != 0x002FEECCu) [[unlikely]] return; }
L_002FEECC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FEED4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_007F(c, 301u, depth + 1u); else { c.pc = 0x002FEEF0u; return; } if (c.pc != 0x002FEED4u) [[unlikely]] return; }
L_002FEED4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002FEEF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 337u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] + 5888u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 13;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FEF24u); set32(c.r[17], c.r[16].w[0] + 320u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FEF24u) [[unlikely]] return; }
L_002FEF24:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FEF30u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_005D(c, 686u, depth + 1u); else { c.pc = 0x00276330u; return; } if (c.pc != 0x002FEF30u) [[unlikely]] return; }
L_002FEF30:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002FEF44; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002FEF44:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002FEF60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FEF7Cu); set32(c.r[5], c.r[16].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x002FEF7Cu) [[unlikely]] return; }
L_002FEF7C:
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC4810000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002FEFA4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x45780000u);
    st32((c.r[16].w[0] + 40u), c.r[3].w[0]);
    c.budget -= 2;
L_002FEFA4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002FEFC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FEFDCu); set32(c.r[5], c.r[16].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x002FEFDCu) [[unlikely]] return; }
L_002FEFDC:
    c.f[1] = ld32((c.r[16].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43280000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002FF004; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42880000u);
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 2;
L_002FF004:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[3].w[0] - 16u);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[3], c.r[3].w[0] << 15);
    set32(c.r[2], c.r[2].w[0] << 6);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF030u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x002FF030u) [[unlikely]] return; }
L_002FF030:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E570000u);
    c.r[3].d[0] = c.r[3].d[0] | 2621ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 36u), c.f[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002FF070:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[16], c.r[17].w[0] + 320u);  if (t) { goto L_002FF158; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002FF10C; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], c.r[4].w[0] + 1u);  goto L_002FF0B4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_002FF17C; } }
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_002FF0B4:
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 16u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    st8((c.r[16].w[0] + 19u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF0CCu); st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0081(c, 173u, depth + 1u); else { c.pc = 0x00306C30u; return; } if (c.pc != 0x002FF0CCu) [[unlikely]] return; }
L_002FF0CC:
    set32(c.r[3], 0u - 16384u);
    c.r[2].d[0] = c.r[2].d[0] & 32767ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 16);
    set32(c.r[2], c.r[2].w[0] >> 16);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF0E8u); st32((c.r[17].w[0] + 80u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0081(c, 173u, depth + 1u); else { c.pc = 0x00306C30u; return; } if (c.pc != 0x002FF0E8u) [[unlikely]] return; }
L_002FF0E8:
    c.r[2].d[0] = c.r[2].d[0] & 32767ull;
    set32(c.r[2], c.r[2].w[0] - 16384u);
    set32(c.r[2], c.r[2].w[0] << 16);
    set32(c.r[2], c.r[2].w[0] >> 16);
    set32(c.r[2], c.r[2].w[0] + 32767u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF108u); st32((c.r[17].w[0] + 84u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0081(c, 173u, depth + 1u); else { c.pc = 0x00306C30u; return; } if (c.pc != 0x002FF108u) [[unlikely]] return; }
L_002FF108:
    st16((c.r[16].w[0] + 20u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_002FF10C:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    set32(c.r[3], c.r[4].w[0] + 1u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 2));
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st8((c.r[16].w[0] + 19u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 19u)));
    c.r[3].d[0] = c.r[3].sd[0] < 12ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002FF178; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF14Cu); st8((c.r[16].w[0] + 16u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0081(c, 173u, depth + 1u); else { c.pc = 0x00306C30u; return; } if (c.pc != 0x002FF14Cu) [[unlikely]] return; }
L_002FF14C:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[17].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_002FF158:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 166u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[17].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002FF178; } }
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_002FF178:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002FF17C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002FF190:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_002FF1A0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_002FF1B0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 338u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] + 5904u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002FC000u < 16384u) { entry = entries_007F[(t - 0x002FC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002FF1D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 188u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002FF1F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF1F0u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002FF1F0u) [[unlikely]] return; }
L_002FF1F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF1F8u); set32(c.r[4], ld32((c.r[16].w[0] + 188u)));  if (depth < kMaxDepth) unit_000F(c, 36u, depth + 1u); else { c.pc = 0x0013CD20u; return; } if (c.pc != 0x002FF1F8u) [[unlikely]] return; }
L_002FF1F8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002FF210:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF224u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002FF224u) [[unlikely]] return; }
L_002FF224:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF22Cu); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002FF22Cu) [[unlikely]] return; }
L_002FF22C:
    set32(c.r[2], ld32((c.r[28].w[0] - 26224u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF238u); set32(c.r[4], c.r[2].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x002FF238u) [[unlikely]] return; }
L_002FF238:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF248u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 210u, depth + 1u); else { c.pc = 0x00102500u; return; } if (c.pc != 0x002FF248u) [[unlikely]] return; }
L_002FF248:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF250u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_000E(c, 328u, depth + 1u); else { c.pc = 0x0013BEC0u; return; } if (c.pc != 0x002FF250u) [[unlikely]] return; }
L_002FF250:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF258u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002FF258u) [[unlikely]] return; }
L_002FF258:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF260u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_000E(c, 331u, depth + 1u); else { c.pc = 0x0013BF80u; return; } if (c.pc != 0x002FF260u) [[unlikely]] return; }
L_002FF260:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC0400000u);
    c.f[13] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF280u);  if (depth < kMaxDepth) unit_000F(c, 18u, depth + 1u); else { c.pc = 0x0013C8A0u; return; } if (c.pc != 0x002FF280u) [[unlikely]] return; }
L_002FF280:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.r[1].d[0] = c.r[2].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002FF2B8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], c.r[2].w[0] + 5920u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 11540u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20340u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] - 20364u), c.r[2].w[0]);  if (t) { goto L_002FF2DC; } }
L_002FF2B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], c.r[2].w[0] + 6176u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 11476u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20340u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[2].w[0]);
    c.budget -= 9;
L_002FF2DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF2E4u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002FF2E4u) [[unlikely]] return; }
L_002FF2E4:
    set32(c.r[2], c.r[29].w[0] + 96u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20400u), c.r[2].w[0]);
    set32(c.r[2], c.r[28].w[0] - 28232u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20352u), 0u);
    set32(c.r[2], 0u + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20354u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] - 20416u);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF330u); st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_001B(c, 162u, depth + 1u); else { c.pc = 0x0016EA60u; return; } if (c.pc != 0x002FF330u) [[unlikely]] return; }
L_002FF330:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF338u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x002FF338u) [[unlikely]] return; }
L_002FF338:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_002FF350:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 188u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002FF478; } }
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[2].d[0] = c.r[2].d[0] | 55040ull;
    c.f[0] = c.r[2].w[0];
    c.f[2] = 0u;
    c.f[21] = fp::sub(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[2]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x3ECC0000u);  if (t) { goto L_002FF3A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[21] = c.f[2];  if (t) { goto L_002FF3C4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3ECC0000u);
    c.budget -= 1;
L_002FF3A4:
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x3ECC0000u);  if (t) { goto L_002FF3C8; } }
    c.f[21] = c.f[0];
    c.budget -= 1;
L_002FF3C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3ECC0000u);
    c.budget -= 1;
L_002FF3C8:
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[16].w[0] + 192u);
    fpu_div(c, 2u, c.f[21], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[3].d[0] = c.r[2].d[0] | 52429ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E990000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF400u); c.f[20] = fp::sub(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002FF400u) [[unlikely]] return; }
L_002FF400:
    set32(c.r[4], ld32((c.r[16].w[0] + 188u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF40Cu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_000F(c, 41u, depth + 1u); else { c.pc = 0x0013CE00u; return; } if (c.pc != 0x002FF40Cu) [[unlikely]] return; }
L_002FF40C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF414u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002FF414u) [[unlikely]] return; }
L_002FF414:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E190000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.f[3] = c.r[2].w[0];
    c.f[2] = ld32((c.r[29].w[0] + 96u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.f[1] = fp::mul(c.f[0], c.f[21]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[0] = fp::mul(c.f[2], c.f[3]);
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 100u));
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::add(c.f[2], c.f[1]);
    st32((c.r[29].w[0] + 100u), c.f[1]);
    c.f[1] = ld32((c.r[29].w[0] + 104u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF464u); st32((c.r[29].w[0] + 104u), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002FF464u) [[unlikely]] return; }
L_002FF464:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], ld32((c.r[16].w[0] + 188u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF478u); c.f[12] = fp::mul(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_000F(c, 41u, depth + 1u); else { c.pc = 0x0013CE00u; return; } if (c.pc != 0x002FF478u) [[unlikely]] return; }
L_002FF478:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002FF490:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002FF350u | kUnwind; return; } goto L_002FF350; }
L_002FF4A0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], c.r[4].w[0] + 320u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF4B8u); set32(c.r[4], c.r[4].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002FF4B8u) [[unlikely]] return; }
L_002FF4B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF4C0u); c.r[4].d[0] = ld16((c.r[16].w[0] + 20u));  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002FF4C0u) [[unlikely]] return; }
L_002FF4C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC5830000u);
    c.f[12] = 0u;
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    c.f[14] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF4D8u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002FF4D8u) [[unlikely]] return; }
L_002FF4D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF4E0u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002FF4E0u) [[unlikely]] return; }
L_002FF4E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20348u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[29].w[0] + 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20400u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], c.r[2].w[0] + 6448u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 11572u)));
    set32(c.r[5], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20388u), c.r[3].w[0]);
    set32(c.r[3], c.r[28].w[0] - 28228u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], c.r[3].w[0] + 6432u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20384u), c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 19u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], c.r[3].w[0] + 6464u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[1].w[0] - 20368u), c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], 0u + 2u);
    st32((c.r[1].w[0] - 20364u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] - 20416u);
    c.budget -= 39;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF57Cu); st32((c.r[1].w[0] - 20352u), 0u);  if (depth < kMaxDepth) unit_001C(c, 77u, depth + 1u); else { c.pc = 0x001719F0u; return; } if (c.pc != 0x002FF57Cu) [[unlikely]] return; }
L_002FF57C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002FF590:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] + 9488u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002FC000u < 16384u) { entry = entries_007F[(t - 0x002FC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002FF5B0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[6], c.r[3].w[0] + 26144u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00300000u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[7], c.r[8].w[0] << 5);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[4].w[0] + 88u), 0u);
    set32(c.r[7], c.r[7].w[0] << 8);
    st32((c.r[4].w[0] + 84u), 0u);
    set32(c.r[3], c.r[3].w[0] - 928u);
    st32((c.r[4].w[0] + 80u), 0u);
    st32((c.r[4].w[0] + 168u), c.r[3].w[0]);
    set32(c.r[8], c.r[6].w[0] + c.r[7].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[6], c.r[3].w[0] + 6896u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 8386u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[5], c.r[3].w[0] + 6928u);
    set32(c.r[2], c.r[4].w[0] + 320u);
    set32(c.r[3], c.r[6].w[0] + c.r[7].w[0]);
    c.r[6].d[0] = ld8((c.r[3].w[0]));
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    st8((c.r[4].w[0] + 10u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 8386u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], c.r[3].w[0] + 6932u);
    set32(c.r[6], c.r[6].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[4].w[0] + 112u), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 8386u)));
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[4].w[0] + 116u), c.f[0]);
    c.r[3].d[0] = c.r[7].d[0] << 56;
    c.budget -= 39;
L_002FF64C:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0] + 60u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[7].w[0] + 1u);
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0] + 60u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[7].w[0] + 2u);
    c.r[7].d[0] = c.r[3].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    c.r[3].d[0] = c.r[7].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[7].d[0] << 56;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FF64Cu | kUnwind; return; } goto L_002FF64C; } }
    c.budget -= 2;
    {  goto L_002FF690; }
L_002FF690:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    mmi::paddub(c.r[20], c.r[4], c.r[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00860000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 26487u)));
    set32(c.r[3], c.r[3].w[0] + 26144u);
    set32(c.r[4], c.r[5].w[0] << 5);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 8);
    set32(c.r[17], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], 0u + 1u);
    c.budget -= 20;
    { const bool t = c.r[2].d[0] != c.r[4].d[0]; set32(c.r[16], c.r[20].w[0] + 320u);  if (t) { goto L_002FF938; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 5u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002FF930; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_002FF878; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002FF708; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (t) { goto L_002FF93C; } }
L_002FF708:
    st16((c.r[20].w[0] + 164u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], 0u + 10u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 373u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002FF73C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] + 6800u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[10], ld32((c.r[2].w[0])));  if (t) { goto L_002FF744; } }
L_002FF73C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[10], c.r[2].w[0] + 6704u);
    c.budget -= 2;
L_002FF744:
    set32(c.r[3], 0u + 17u);
    set32(c.r[5], 0u + 19u);
    set32(c.r[4], 0u + 1u);
    mmi::paddub(c.r[8], c.r[0], c.r[0]);
    mmi::paddub(c.r[9], c.r[16], c.r[0]);
    mmi::paddub(c.r[11], c.r[16], c.r[0]);
    mmi::paddub(c.r[12], c.r[16], c.r[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[7].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_002FF800; } }
L_002FF768:
    st32((c.r[9].w[0] + 32u), c.r[7].w[0]);
    c.r[2].d[0] = ld8((c.r[10].w[0]));
    set32(c.r[14], c.r[16].w[0] + c.r[13].w[0]);
    st8((c.r[14].w[0] + 56u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[10].w[0] + 2u)));
    st16((c.r[11].w[0] + 48u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[10].w[0] + 4u));
    st32((c.r[12].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[10].w[0] + 8u));
    st32((c.r[12].w[0] + 4u), c.f[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8386u)));
    c.budget -= 13;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002FF7A8; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[5].d[0]; set32(c.r[2], c.r[6].w[0] - 1u);  if (t) { goto L_002FF7B4; } }
    c.budget -= 1;
L_002FF7A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[14].w[0] + 60u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_002FF7E0; } }
    set32(c.r[2], c.r[6].w[0] - 1u);
    c.budget -= 1;
L_002FF7B4:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002FF7C8; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[3].d[0]; c.r[1].d[0] = c.r[13].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_002FF7D4; } }
L_002FF7C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[14].w[0] + 60u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002FF7E0; } }
    c.r[1].d[0] = c.r[13].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 1;
L_002FF7D4:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], c.r[8].w[0] + 1u);  if (t) { goto L_002FF7E4; } }
    st8((c.r[14].w[0] + 60u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 1;
L_002FF7E0:
    set32(c.r[2], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_002FF7E4:
    c.r[8].d[0] = c.r[2].d[0] << 56;
    set32(c.r[9], c.r[9].w[0] + 4u);
    set32(c.r[10], c.r[10].w[0] + 12u);
    set32(c.r[11], c.r[11].w[0] + 2u);
    set32(c.r[12], c.r[12].w[0] + 8u);
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    c.budget -= 7;
L_002FF800:
    c.r[13].d[0] = c.r[8].d[0] << 56;
    c.r[13].d[0] = static_cast<std::uint64_t>(c.r[13].sd[0] >> 56);
    c.r[2].d[0] = c.r[13].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FF768u | kUnwind; return; } goto L_002FF768; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 5u)));
    set32(c.r[2], 0u + 10u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[20].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 373u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[5], 0u + 5u);  if (t) { goto L_002FF868; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], c.r[2].w[0] + 9456u);
    set32(c.r[2], 0u + 255u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[5].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_002FF938; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF85Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 351u, depth + 1u); else { c.pc = 0x00197C30u; return; } if (c.pc != 0x002FF85Cu) [[unlikely]] return; }
L_002FF85C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FF938; } }
    set32(c.r[5], 0u + 5u);
    c.budget -= 1;
L_002FF868:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF870u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 365u, depth + 1u); else { c.pc = 0x00197E70u; return; } if (c.pc != 0x002FF870u) [[unlikely]] return; }
L_002FF870:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FF938; } }
L_002FF878:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 164u)));
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    mmi::paddub(c.r[19], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_002FF8F8; } }
L_002FF890:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8386u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (t) { goto L_002FF8B8; } }
    mmi::paddub(c.r[4], c.r[20], c.r[0]);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF8ACu); mmi::paddub(c.r[6], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_007F(c, 356u, depth + 1u); else { c.pc = 0x002FF970u; return; } if (c.pc != 0x002FF8ACu) [[unlikely]] return; }
L_002FF8AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[16].w[0] + c.r[21].w[0]);  if (t) { goto L_002FF8CC; } }
    mmi::paddub(c.r[4], c.r[20], c.r[0]);
    c.budget -= 1;
L_002FF8B8:
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF8C4u); mmi::paddub(c.r[6], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_007F(c, 357u, depth + 1u); else { c.pc = 0x002FFAE0u; return; } if (c.pc != 0x002FF8C4u) [[unlikely]] return; }
L_002FF8C4:
    set32(c.r[2], c.r[16].w[0] + c.r[21].w[0]);
    c.budget -= 2;
L_002FF8CC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[19].w[0] + 1u);  if (t) { goto L_002FF8EC; } }
    set32(c.r[2], c.r[18].w[0] + 1u);
    c.r[18].d[0] = c.r[2].d[0] << 56;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 56);
    set32(c.r[2], c.r[19].w[0] + 1u);
    c.budget -= 5;
L_002FF8EC:
    c.r[19].d[0] = c.r[2].d[0] << 56;
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 56);
    c.budget -= 3;
L_002FF8F8:
    c.r[21].d[0] = c.r[19].d[0] << 56;
    c.r[21].d[0] = static_cast<std::uint64_t>(c.r[21].sd[0] >> 56);
    c.r[2].d[0] = c.r[21].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FF890u | kUnwind; return; } goto L_002FF890; } }
    c.r[3].d[0] = c.r[18].d[0] << 56;
    set32(c.r[2], 0u + 4u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002FF938; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002FF938; } }
L_002FF930:
    st8((c.r[20].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 26487u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002FF938:
    mmi::paddub(c.r[4], c.r[20], c.r[0]);
    c.budget -= 1;
L_002FF93C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF944u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_005D(c, 686u, depth + 1u); else { c.pc = 0x00276330u; return; } if (c.pc != 0x002FF944u) [[unlikely]] return; }
L_002FF944:
    set32(c.r[3], 0u + 1u);
    st8((c.r[20].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002FF970:
    c.r[7].d[0] = c.r[6].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    set32(c.r[3], c.r[7].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 48u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = c.r[7].d[0] & 1ull;  if (t) { goto L_002FF9A0; } }
    set32(c.r[3], c.r[7].w[0] + c.r[5].w[0]);
    st8((c.r[3].w[0] + 60u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = c.r[7].d[0] & 1ull;
    c.budget -= 3;
L_002FF9A0:
    c.budget -= 2;
    { const bool t = c.r[7].sd[0] >= 0;  if (t) { goto L_002FF9B4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002FF9B4; } }
    set32(c.r[3], c.r[3].w[0] - 2u);
    c.budget -= 1;
L_002FF9B4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002FFAA0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[1].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[3].sd[0] < 11ll ? 1ull : 0ull;  if (t) { goto L_002FFA04; } }
    set32(c.r[3], c.r[7].w[0] << 3);
    set32(c.r[4], c.r[5].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4u), c.f[0]);  if (t) { goto L_002FFAD4; } }
    c.r[1].d[0] = c.r[3].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 1;
L_002FFA04:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[7].w[0] << 3);  if (t) { goto L_002FFA44; } }
    set32(c.r[3], c.r[7].w[0] << 3);
    set32(c.r[4], c.r[5].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3C6A0000u);
    c.r[3].d[0] = c.r[3].d[0] | 3749ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4u), c.f[0]);  if (t) { goto L_002FFAD4; } }
    set32(c.r[3], c.r[7].w[0] << 3);
    c.budget -= 1;
L_002FFA44:
    set32(c.r[6], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    c.f[1] = ld32((c.r[6].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBC880000u);
    c.r[3].d[0] = c.r[3].d[0] | 34953ull;
    c.f[0] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBCBF0000u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.r[5].d[0] = c.r[3].d[0] | 9613ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBD080000u);
    c.r[3].d[0] = c.r[3].d[0] | 34953ull;
    st32((c.r[6].w[0]), c.f[0]);
    c.f[2] = ld32((c.r[6].w[0] + 4u));
    c.f[1] = c.r[5].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[2], c.f[1]);
    st32((c.r[6].w[0] + 4u), c.f[1]);
    c.f[1] = ld32((c.r[4].w[0] + 32u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 23;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 32u), c.f[0]);  if (t) { goto L_002FFAD4; } }
L_002FFAA0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[3].d[0] = c.r[3].sd[0] < 25ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002FFAD4; } }
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    c.f[1] = ld32((c.r[4].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBD230000u);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 32u), c.f[0]);
    c.budget -= 9;
L_002FFAD4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002FFAE0:
    c.r[7].d[0] = c.r[6].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    set32(c.r[3], c.r[7].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 48u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = c.r[7].d[0] & 1ull;  if (t) { goto L_002FFB10; } }
    set32(c.r[3], c.r[7].w[0] + c.r[5].w[0]);
    st8((c.r[3].w[0] + 60u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = c.r[7].d[0] & 1ull;
    c.budget -= 3;
L_002FFB10:
    c.budget -= 2;
    { const bool t = c.r[7].sd[0] >= 0;  if (t) { goto L_002FFB24; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002FFB24; } }
    set32(c.r[3], c.r[3].w[0] - 2u);
    c.budget -= 1;
L_002FFB24:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002FFC04; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[1].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[3].sd[0] < 11ll ? 1ull : 0ull;  if (t) { goto L_002FFB74; } }
    set32(c.r[3], c.r[7].w[0] << 3);
    set32(c.r[4], c.r[5].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4u), c.f[0]);  if (t) { goto L_002FFC38; } }
    c.r[1].d[0] = c.r[3].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 1;
L_002FFB74:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[7].w[0] << 3);  if (t) { goto L_002FFBB4; } }
    set32(c.r[3], c.r[7].w[0] << 3);
    set32(c.r[4], c.r[5].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3C6A0000u);
    c.r[3].d[0] = c.r[3].d[0] | 3749ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4u), c.f[0]);  if (t) { goto L_002FFC38; } }
    set32(c.r[3], c.r[7].w[0] << 3);
    c.budget -= 1;
L_002FFBB4:
    set32(c.r[6], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[6].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBC880000u);
    c.r[3].d[0] = c.r[3].d[0] | 34953ull;
    c.f[2] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBD080000u);
    c.f[0] = fp::add(c.f[0], c.f[2]);
    c.r[3].d[0] = c.r[3].d[0] | 34953ull;
    st32((c.r[6].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[6].w[0] + 4u), c.f[1]);
    c.f[1] = ld32((c.r[4].w[0] + 32u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 20;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 32u), c.f[0]);  if (t) { goto L_002FFC38; } }
L_002FFC04:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[3].d[0] = c.r[3].sd[0] < 25ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002FFC38; } }
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    c.f[1] = ld32((c.r[4].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBD230000u);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 32u), c.f[0]);
    c.budget -= 9;
L_002FFC38:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002FFC40:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_002FFC50:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_002FFC60:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    mmi::paddub(c.r[21], c.r[4], c.r[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[30], c.r[21].w[0] + 320u);
    set32(c.r[5], c.r[6].w[0] << 5);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] + 26144u);
    set32(c.r[5], c.r[5].w[0] << 8);
    set32(c.r[16], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[29].w[0] + 160u);
    st32((c.r[1].w[0] - 20400u), c.r[4].w[0]);
    set32(c.r[4], c.r[28].w[0] - 28224u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20352u), 0u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 373u)));
    set32(c.r[3], 0u + 10u);
    c.budget -= 33;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; mmi::paddub(c.r[18], c.r[0], c.r[0]);  if (t) { goto L_002FFCF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFCECu); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_001E(c, 201u, depth + 1u); else { c.pc = 0x0017BBC0u; return; } if (c.pc != 0x002FFCECu) [[unlikely]] return; }
L_002FFCEC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] - 20364u), c.r[2].w[0]);  if (t) { goto L_002FFD08; } }
L_002FFCF8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 19464u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[3].w[0]);
    c.budget -= 4;
L_002FFD08:
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[3].w[0]);
    set32(c.r[3], 0u + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20348u), static_cast<std::uint8_t>(0u));
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    mmi::paddub(c.r[23], c.r[0], c.r[0]);
    mmi::paddub(c.r[19], c.r[0], c.r[0]);
    mmi::paddub(c.r[20], c.r[30], c.r[0]);
    mmi::paddub(c.r[22], c.r[30], c.r[0]);
    c.budget -= 16;
L_002FFD48:
    set32(c.r[4], c.r[30].w[0] + c.r[17].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 60u)));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_002FFEF4; }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 56u));
    set32(c.r[2], 0u + 93u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 94u);  if (t) { goto L_002FFD74; } }
    set32(c.r[18], 0u + 1u);
    set32(c.r[2], 0u + 94u);
    c.budget -= 3;
L_002FFD74:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 4u);  if (t) { goto L_002FFD84; } }
    set32(c.r[18], 0u + 2u);
    set32(c.r[2], 0u + 4u);
    c.budget -= 2;
L_002FFD84:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 95u);  if (t) { goto L_002FFD94; } }
    set32(c.r[18], 0u + 3u);
    set32(c.r[2], 0u + 95u);
    c.budget -= 2;
L_002FFD94:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002FFDA0; } }
    set32(c.r[18], 0u + 4u);
    c.budget -= 1;
L_002FFDA0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 10u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFDB4u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002FFDB4u) [[unlikely]] return; }
L_002FFDB4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] + 7104u);
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[23].w[0] + c.r[2].w[0]);
    c.f[13] = ld32((c.r[2].w[0] + 4u));
    c.f[14] = ld32((c.r[2].w[0] + 8u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFDDCu); c.f[12] = ld32((c.r[2].w[0]));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002FFDDCu) [[unlikely]] return; }
L_002FFDDC:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] + 8448u);
    c.r[5].d[0] = 0ull | 65535ull;
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFE0Cu); c.r[4].d[0] = c.r[2].d[0] & c.r[5].d[0];  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002FFE0Cu) [[unlikely]] return; }
L_002FFE0C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] + 8448u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFE34u); c.r[4].d[0] = ld16((c.r[2].w[0] + 4u));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002FFE34u) [[unlikely]] return; }
L_002FFE34:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] + 8448u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFE5Cu); c.r[4].d[0] = ld16((c.r[2].w[0]));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002FFE5Cu) [[unlikely]] return; }
L_002FFE5C:
    c.f[3] = ld32((c.r[21].w[0] + 112u));
    c.f[2] = ld32((c.r[20].w[0]));
    c.f[1] = ld32((c.r[21].w[0] + 116u));
    c.f[0] = ld32((c.r[20].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.f[12] = fp::mul(c.f[3], c.f[2]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFE80u); c.f[13] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 18u, depth + 1u); else { c.pc = 0x0013C8A0u; return; } if (c.pc != 0x002FFE80u) [[unlikely]] return; }
L_002FFE80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFE88u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002FFE88u) [[unlikely]] return; }
L_002FFE88:
    c.f[0] = ld32((c.r[22].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFE9Cu); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x002FFE9Cu) [[unlikely]] return; }
L_002FFE9C:
    st8((c.r[28].w[0] - 28221u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] + 9584u);
    set32(c.r[3], c.r[18].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20388u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] + 9504u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20384u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] + 9664u);
    set32(c.r[3], c.r[18].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20368u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFEF0u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001C(c, 77u, depth + 1u); else { c.pc = 0x001719F0u; return; } if (c.pc != 0x002FFEF0u) [[unlikely]] return; }
L_002FFEF0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002FFEF4:
    c.r[3].d[0] = c.r[17].sd[0] < 4ll ? 1ull : 0ull;
    set32(c.r[23], c.r[23].w[0] + 16u);
    set32(c.r[19], c.r[19].w[0] + 12u);
    set32(c.r[20], c.r[20].w[0] + 8u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[22], c.r[22].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FFD48u | kUnwind; return; } goto L_002FFD48; } }
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_002FFF40:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] + 9792u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002FC000u < 16384u) { entry = entries_007F[(t - 0x002FC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002FFF60:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00300000u);
    set32(c.r[2], c.r[2].w[0] + 544u);
    set32(c.r[16], c.r[18].w[0] + 320u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 168u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 88u), 0u);
    st32((c.r[4].w[0] + 80u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], c.r[2].w[0] + 9712u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[6], c.r[2].w[0] + 9716u);
    set32(c.r[17], c.r[18].w[0] + 432u);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    st8((c.r[4].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[8], c.r[2].w[0] + 9720u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[5], c.r[2].w[0] + 9724u);
    set32(c.r[7], c.r[9].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[9].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.f[0] = ld32((c.r[6].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], c.r[2].w[0] + 9728u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.budget -= 40;
    [[clang::musttail]] return unit_0080(c, 1u, depth);
}

}
