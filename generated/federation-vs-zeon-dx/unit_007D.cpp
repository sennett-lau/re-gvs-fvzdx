#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_007D[4096] = {
    1, 2, 0, 3, 4, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 7, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0,
    9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    11, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0,
    15, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0,
    0, 22, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 28, 0, 29, 0,
    30, 0, 31, 0, 0, 32, 0, 0, 0, 0, 33, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 36, 0, 0, 0,
    0, 0, 0, 0, 37, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0,
    0, 0, 43, 0, 44, 0, 45, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0,
    0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 53, 0, 54, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0,
    56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 60, 0, 0, 0, 61, 0, 0, 62, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 64, 0, 0, 0, 65, 0, 66, 0, 0, 67, 0, 0, 0, 0, 68, 0, 0, 69, 0, 0, 0, 70, 0, 0, 71, 0, 0,
    72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 74, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 78, 0, 79,
    0, 0, 0, 80, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 83, 0,
    0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 87, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    89, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 93,
    0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 96, 0, 0, 0, 97, 0, 0, 98, 0, 0, 0, 0, 99, 0,
    0, 0, 0, 0, 0, 100, 0, 0, 101, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0,
    0, 0, 0, 0, 0, 108, 0, 0, 0, 109, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0,
    0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 116, 0, 117,
    0, 118, 0, 119, 0, 0, 0, 0, 120, 0, 121, 0, 122, 0, 0, 0, 123, 0, 0, 0, 124, 0, 125, 0, 126, 0, 0, 0, 0, 0, 0, 0,
    127, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    129, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 133, 0, 0, 134, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136,
    0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 139, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 144, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 147, 0, 0, 148, 0, 0, 0, 0, 0,
    0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 155, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 159, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    169, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 175, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 179, 0, 0, 0, 0, 0, 180, 0, 181, 0, 182, 0, 0, 0, 0, 0,
    183, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0,
    0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 192, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 197, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 203, 0, 204, 0, 205, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 207, 0, 0, 0, 208, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 210, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0,
    220, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 223, 0, 0, 0, 224, 0, 0, 0, 225, 0, 0, 226, 0, 227, 0, 0, 0, 228,
    0, 229, 0, 230, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 234, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 236, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 239, 0, 0, 0, 240, 0, 0, 0, 241, 0, 0, 0, 242, 0, 243,
    0, 0, 0, 244, 0, 245, 0, 246, 0, 0, 247, 0, 248, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0,
    0, 251, 0, 0, 0, 252, 0, 0, 253, 0, 254, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 257, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 259, 0, 0, 0, 260, 0, 0, 0, 0,
    261, 0, 0, 262, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 265, 0, 0, 266, 0, 0, 267, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 271, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0,
    0, 0, 274, 0, 275, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 283, 0, 284, 0, 0, 0, 285, 0, 286, 0, 0, 0, 287, 0, 288, 0, 0, 0, 289, 0, 290, 0,
    0, 0, 291, 0, 292, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0,
    0, 0, 0, 0, 295, 0, 0, 0, 296, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0,
    0, 0, 0, 301, 0, 302, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 314,
    0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 317, 0, 0, 318, 0, 319, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 322, 0, 323, 0, 0,
    0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 326, 0, 327, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 331, 0, 0, 0, 332, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 338, 0, 0, 0, 0, 339,
    0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0,
    344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0,
    0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 354, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 356, 0, 357, 0, 358, 0, 359, 0, 360, 0, 361, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 365, 0, 366, 0, 367, 0, 368, 0, 0, 0,
};

void unit_007D(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002F4000;
    case 2u: goto L_002F4004;
    case 3u: goto L_002F400C;
    case 4u: goto L_002F4010;
    case 5u: goto L_002F4030;
    case 6u: goto L_002F4060;
    case 7u: goto L_002F4078;
    case 8u: goto L_002F40DC;
    case 9u: goto L_002F4100;
    case 10u: goto L_002F4130;
    case 11u: goto L_002F4200;
    case 12u: goto L_002F4214;
    case 13u: goto L_002F4230;
    case 14u: goto L_002F42EC;
    case 15u: goto L_002F4300;
    case 16u: goto L_002F4320;
    case 17u: goto L_002F4360;
    case 18u: goto L_002F439C;
    case 19u: goto L_002F43BC;
    case 20u: goto L_002F43D0;
    case 21u: goto L_002F43F0;
    case 22u: goto L_002F4404;
    case 23u: goto L_002F4420;
    case 24u: goto L_002F4440;
    case 25u: goto L_002F4490;
    case 26u: goto L_002F4538;
    case 27u: goto L_002F4560;
    case 28u: goto L_002F4570;
    case 29u: goto L_002F4578;
    case 30u: goto L_002F4580;
    case 31u: goto L_002F4588;
    case 32u: goto L_002F4594;
    case 33u: goto L_002F45A8;
    case 34u: goto L_002F45B0;
    case 35u: goto L_002F45DC;
    case 36u: goto L_002F45F0;
    case 37u: goto L_002F4610;
    case 38u: goto L_002F4624;
    case 39u: goto L_002F4640;
    case 40u: goto L_002F4664;
    case 41u: goto L_002F46B0;
    case 42u: goto L_002F46F8;
    case 43u: goto L_002F4708;
    case 44u: goto L_002F4710;
    case 45u: goto L_002F4718;
    case 46u: goto L_002F4720;
    case 47u: goto L_002F474C;
    case 48u: goto L_002F4760;
    case 49u: goto L_002F47A0;
    case 50u: goto L_002F47F4;
    case 51u: goto L_002F4808;
    case 52u: goto L_002F4838;
    case 53u: goto L_002F4848;
    case 54u: goto L_002F4850;
    case 55u: goto L_002F4860;
    case 56u: goto L_002F4880;
    case 57u: goto L_002F48CC;
    case 58u: goto L_002F48F0;
    case 59u: goto L_002F493C;
    case 60u: goto L_002F4950;
    case 61u: goto L_002F4960;
    case 62u: goto L_002F496C;
    case 63u: goto L_002F49C0;
    case 64u: goto L_002F4A14;
    case 65u: goto L_002F4A24;
    case 66u: goto L_002F4A2C;
    case 67u: goto L_002F4A38;
    case 68u: goto L_002F4A4C;
    case 69u: goto L_002F4A58;
    case 70u: goto L_002F4A68;
    case 71u: goto L_002F4A74;
    case 72u: goto L_002F4A80;
    case 73u: goto L_002F4AC0;
    case 74u: goto L_002F4AC8;
    case 75u: goto L_002F4AE8;
    case 76u: goto L_002F4B10;
    case 77u: goto L_002F4B64;
    case 78u: goto L_002F4B74;
    case 79u: goto L_002F4B7C;
    case 80u: goto L_002F4B8C;
    case 81u: goto L_002F4B98;
    case 82u: goto L_002F4BF0;
    case 83u: goto L_002F4BF8;
    case 84u: goto L_002F4C18;
    case 85u: goto L_002F4C40;
    case 86u: goto L_002F4CB8;
    case 87u: goto L_002F4CC4;
    case 88u: goto L_002F4CD0;
    case 89u: goto L_002F4D00;
    case 90u: goto L_002F4D10;
    case 91u: goto L_002F4D30;
    case 92u: goto L_002F4D58;
    case 93u: goto L_002F4D7C;
    case 94u: goto L_002F4D90;
    case 95u: goto L_002F4DC0;
    case 96u: goto L_002F4DC8;
    case 97u: goto L_002F4DD8;
    case 98u: goto L_002F4DE4;
    case 99u: goto L_002F4DF8;
    case 100u: goto L_002F4E14;
    case 101u: goto L_002F4E20;
    case 102u: goto L_002F4E38;
    case 103u: goto L_002F4E84;
    case 104u: goto L_002F4F00;
    case 105u: goto L_002F4F2C;
    case 106u: goto L_002F4F50;
    case 107u: goto L_002F4F70;
    case 108u: goto L_002F4F94;
    case 109u: goto L_002F4FA4;
    case 110u: goto L_002F4FB0;
    case 111u: goto L_002F506C;
    case 112u: goto L_002F5090;
    case 113u: goto L_002F50CC;
    case 114u: goto L_002F50F0;
    case 115u: goto L_002F5164;
    case 116u: goto L_002F5174;
    case 117u: goto L_002F517C;
    case 118u: goto L_002F5184;
    case 119u: goto L_002F518C;
    case 120u: goto L_002F51A0;
    case 121u: goto L_002F51A8;
    case 122u: goto L_002F51B0;
    case 123u: goto L_002F51C0;
    case 124u: goto L_002F51D0;
    case 125u: goto L_002F51D8;
    case 126u: goto L_002F51E0;
    case 127u: goto L_002F5200;
    case 128u: goto L_002F5224;
    case 129u: goto L_002F5280;
    case 130u: goto L_002F52A0;
    case 131u: goto L_002F52D0;
    case 132u: goto L_002F53B0;
    case 133u: goto L_002F53B8;
    case 134u: goto L_002F53C4;
    case 135u: goto L_002F53E0;
    case 136u: goto L_002F547C;
    case 137u: goto L_002F5484;
    case 138u: goto L_002F54A8;
    case 139u: goto L_002F54B4;
    case 140u: goto L_002F54BC;
    case 141u: goto L_002F54E0;
    case 142u: goto L_002F5508;
    case 143u: goto L_002F5558;
    case 144u: goto L_002F5570;
    case 145u: goto L_002F562C;
    case 146u: goto L_002F5650;
    case 147u: goto L_002F565C;
    case 148u: goto L_002F5668;
    case 149u: goto L_002F5684;
    case 150u: goto L_002F56CC;
    case 151u: goto L_002F56D4;
    case 152u: goto L_002F5718;
    case 153u: goto L_002F5754;
    case 154u: goto L_002F579C;
    case 155u: goto L_002F57B0;
    case 156u: goto L_002F57BC;
    case 157u: goto L_002F5844;
    case 158u: goto L_002F5868;
    case 159u: goto L_002F5870;
    case 160u: goto L_002F58A4;
    case 161u: goto L_002F58B4;
    case 162u: goto L_002F591C;
    case 163u: goto L_002F5940;
    case 164u: goto L_002F5998;
    case 165u: goto L_002F59A8;
    case 166u: goto L_002F59D0;
    case 167u: goto L_002F5A34;
    case 168u: goto L_002F5A44;
    case 169u: goto L_002F5A80;
    case 170u: goto L_002F5AA0;
    case 171u: goto L_002F5AC8;
    case 172u: goto L_002F5AD0;
    case 173u: goto L_002F5B10;
    case 174u: goto L_002F5B44;
    case 175u: goto L_002F5B50;
    case 176u: goto L_002F5B5C;
    case 177u: goto L_002F5B88;
    case 178u: goto L_002F5BB0;
    case 179u: goto L_002F5BC0;
    case 180u: goto L_002F5BD8;
    case 181u: goto L_002F5BE0;
    case 182u: goto L_002F5BE8;
    case 183u: goto L_002F5C00;
    case 184u: goto L_002F5C24;
    case 185u: goto L_002F5C74;
    case 186u: goto L_002F5C90;
    case 187u: goto L_002F5CB0;
    case 188u: goto L_002F5D50;
    case 189u: goto L_002F5ED0;
    case 190u: goto L_002F5EFC;
    case 191u: goto L_002F5F4C;
    case 192u: goto L_002F5F54;
    case 193u: goto L_002F5F70;
    case 194u: goto L_002F6024;
    case 195u: goto L_002F6038;
    case 196u: goto L_002F6060;
    case 197u: goto L_002F6068;
    case 198u: goto L_002F6094;
    case 199u: goto L_002F60C4;
    case 200u: goto L_002F60D0;
    case 201u: goto L_002F6118;
    case 202u: goto L_002F6154;
    case 203u: goto L_002F6160;
    case 204u: goto L_002F6168;
    case 205u: goto L_002F6170;
    case 206u: goto L_002F61D0;
    case 207u: goto L_002F61E0;
    case 208u: goto L_002F61F0;
    case 209u: goto L_002F6228;
    case 210u: goto L_002F6234;
    case 211u: goto L_002F6250;
    case 212u: goto L_002F6290;
    case 213u: goto L_002F6304;
    case 214u: goto L_002F638C;
    case 215u: goto L_002F6418;
    case 216u: goto L_002F64A4;
    case 217u: goto L_002F6508;
    case 218u: goto L_002F6528;
    case 219u: goto L_002F65E0;
    case 220u: goto L_002F6600;
    case 221u: goto L_002F6608;
    case 222u: goto L_002F6630;
    case 223u: goto L_002F6638;
    case 224u: goto L_002F6648;
    case 225u: goto L_002F6658;
    case 226u: goto L_002F6664;
    case 227u: goto L_002F666C;
    case 228u: goto L_002F667C;
    case 229u: goto L_002F6684;
    case 230u: goto L_002F668C;
    case 231u: goto L_002F66A0;
    case 232u: goto L_002F6704;
    case 233u: goto L_002F67A4;
    case 234u: goto L_002F67B8;
    case 235u: goto L_002F67C4;
    case 236u: goto L_002F680C;
    case 237u: goto L_002F6814;
    case 238u: goto L_002F683C;
    case 239u: goto L_002F6844;
    case 240u: goto L_002F6854;
    case 241u: goto L_002F6864;
    case 242u: goto L_002F6874;
    case 243u: goto L_002F687C;
    case 244u: goto L_002F688C;
    case 245u: goto L_002F6894;
    case 246u: goto L_002F689C;
    case 247u: goto L_002F68A8;
    case 248u: goto L_002F68B0;
    case 249u: goto L_002F68C0;
    case 250u: goto L_002F68F8;
    case 251u: goto L_002F6904;
    case 252u: goto L_002F6914;
    case 253u: goto L_002F6920;
    case 254u: goto L_002F6928;
    case 255u: goto L_002F6930;
    case 256u: goto L_002F6968;
    case 257u: goto L_002F6974;
    case 258u: goto L_002F6AD4;
    case 259u: goto L_002F6ADC;
    case 260u: goto L_002F6AEC;
    case 261u: goto L_002F6B00;
    case 262u: goto L_002F6B0C;
    case 263u: goto L_002F6B18;
    case 264u: goto L_002F6B48;
    case 265u: goto L_002F6B50;
    case 266u: goto L_002F6B5C;
    case 267u: goto L_002F6B68;
    case 268u: goto L_002F6C2C;
    case 269u: goto L_002F6CB0;
    case 270u: goto L_002F6CD8;
    case 271u: goto L_002F6CF0;
    case 272u: goto L_002F6D48;
    case 273u: goto L_002F6D6C;
    case 274u: goto L_002F6D88;
    case 275u: goto L_002F6D90;
    case 276u: goto L_002F6DA0;
    case 277u: goto L_002F6DD0;
    case 278u: goto L_002F6DF0;
    case 279u: goto L_002F6E40;
    case 280u: goto L_002F6E90;
    case 281u: goto L_002F6EE4;
    case 282u: goto L_002F6F18;
    case 283u: goto L_002F6F28;
    case 284u: goto L_002F6F30;
    case 285u: goto L_002F6F40;
    case 286u: goto L_002F6F48;
    case 287u: goto L_002F6F58;
    case 288u: goto L_002F6F60;
    case 289u: goto L_002F6F70;
    case 290u: goto L_002F6F78;
    case 291u: goto L_002F6F88;
    case 292u: goto L_002F6F90;
    case 293u: goto L_002F6FA0;
    case 294u: goto L_002F6FF0;
    case 295u: goto L_002F7010;
    case 296u: goto L_002F7020;
    case 297u: goto L_002F7030;
    case 298u: goto L_002F70B4;
    case 299u: goto L_002F70CC;
    case 300u: goto L_002F70F4;
    case 301u: goto L_002F710C;
    case 302u: goto L_002F7114;
    case 303u: goto L_002F7130;
    case 304u: goto L_002F71D0;
    case 305u: goto L_002F71E4;
    case 306u: goto L_002F725C;
    case 307u: goto L_002F7320;
    case 308u: goto L_002F7400;
    case 309u: goto L_002F743C;
    case 310u: goto L_002F74F0;
    case 311u: goto L_002F7590;
    case 312u: goto L_002F75D8;
    case 313u: goto L_002F7668;
    case 314u: goto L_002F767C;
    case 315u: goto L_002F76A0;
    case 316u: goto L_002F7728;
    case 317u: goto L_002F7738;
    case 318u: goto L_002F7744;
    case 319u: goto L_002F774C;
    case 320u: goto L_002F775C;
    case 321u: goto L_002F77E0;
    case 322u: goto L_002F77EC;
    case 323u: goto L_002F77F4;
    case 324u: goto L_002F7810;
    case 325u: goto L_002F784C;
    case 326u: goto L_002F785C;
    case 327u: goto L_002F7864;
    case 328u: goto L_002F78C8;
    case 329u: goto L_002F790C;
    case 330u: goto L_002F79A8;
    case 331u: goto L_002F79B0;
    case 332u: goto L_002F79C0;
    case 333u: goto L_002F79D0;
    case 334u: goto L_002F7A34;
    case 335u: goto L_002F7A3C;
    case 336u: goto L_002F7A60;
    case 337u: goto L_002F7ADC;
    case 338u: goto L_002F7AE8;
    case 339u: goto L_002F7AFC;
    case 340u: goto L_002F7B04;
    case 341u: goto L_002F7C00;
    case 342u: goto L_002F7C54;
    case 343u: goto L_002F7C5C;
    case 344u: goto L_002F7C80;
    case 345u: goto L_002F7D40;
    case 346u: goto L_002F7D4C;
    case 347u: goto L_002F7DA0;
    case 348u: goto L_002F7DBC;
    case 349u: goto L_002F7DD4;
    case 350u: goto L_002F7DF4;
    case 351u: goto L_002F7E10;
    case 352u: goto L_002F7EA0;
    case 353u: goto L_002F7EC0;
    case 354u: goto L_002F7ED0;
    case 355u: goto L_002F7ED8;
    case 356u: goto L_002F7F10;
    case 357u: goto L_002F7F18;
    case 358u: goto L_002F7F20;
    case 359u: goto L_002F7F28;
    case 360u: goto L_002F7F30;
    case 361u: goto L_002F7F38;
    case 362u: goto L_002F7F58;
    case 363u: goto L_002F7F80;
    case 364u: goto L_002F7FC8;
    case 365u: goto L_002F7FD8;
    case 366u: goto L_002F7FE0;
    case 367u: goto L_002F7FE8;
    case 368u: goto L_002F7FF0;
    default: bad_entry(c, 0x002F4000u); return;
    }
L_002F4000:
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 1;
L_002F4004:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F400Cu); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_0025(c, 323u, depth + 1u); else { c.pc = 0x00197790u; return; } if (c.pc != 0x002F400Cu) [[unlikely]] return; }
L_002F400C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002F4010:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002F4030:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 369u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[17], c.r[5], c.r[0]);  if (t) { goto L_002F4068; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4060u);  if (depth < kMaxDepth) unit_007E(c, 409u, depth + 1u); else { c.pc = 0x002FB8F0u; return; } if (c.pc != 0x002F4060u) [[unlikely]] return; }
L_002F4060:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);  if (t) { goto L_002F40E4; } }
L_002F4068:
    set32(c.r[4], 0u + 1u);
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4078u); mmi::paddub(c.r[6], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x002F4078u) [[unlikely]] return; }
L_002F4078:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[2], c.r[0]);  if (t) { goto L_002F40DC; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 17u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 18u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[2], c.r[2].w[0] + 16640u);
    st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    set32(c.r[2], c.r[2].w[0] + 19728u);
    st32((c.r[16].w[0] + 168u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 180u)));
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[16].w[0] + 184u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 184u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F40DCu); st32((c.r[16].w[0] + 188u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0081(c, 114u, depth + 1u); else { c.pc = 0x00305C00u; return; } if (c.pc != 0x002F40DCu) [[unlikely]] return; }
L_002F40DC:
    mmi::paddub(c.r[2], c.r[16], c.r[0]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    c.budget -= 2;
L_002F40E4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002F4100:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[6], ld32((c.r[4].w[0] + 264u)));
    set32(c.r[2], c.r[2].w[0] - 7344u);
    set32(c.r[5], c.r[4].w[0] + 320u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[7], c.r[6].w[0] + 320u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002F4000u < 16384u) { entry = entries_007D[(t - 0x002F4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002F4130:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    c.r[4].d[0] = ld8((c.r[6].w[0] + 742u));
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == 0ull; mmi::paddub(c.r[16], c.r[6], c.r[0]);  if (t) { goto L_002F4174; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002F4174; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002F4214; } }
L_002F4174:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_002F41A0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002F419C; } }
    st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(0u));
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 6u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002F4214; } }
L_002F419C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_002F41A0:
    set32(c.r[2], 0u + 100u);
    st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[18].w[0] + 514u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[18].w[0] + 516u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    set32(c.r[6], 0u + 41u);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 4u));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    st8((c.r[17].w[0] + 64u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4200u); st8((c.r[17].w[0] + 65u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0081(c, 12u, depth + 1u); else { c.pc = 0x00304300u; return; } if (c.pc != 0x002F4200u) [[unlikely]] return; }
L_002F4200:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    mmi::paddub(c.r[6], c.r[16], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4214u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_007D(c, 114u, depth + 1u); else { c.pc = 0x002F50F0u; return; } if (c.pc != 0x002F4214u) [[unlikely]] return; }
L_002F4214:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002F4230:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 4u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_002F4258; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 514u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002F4268; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_002F4258:
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 6u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002F42EC; } }
L_002F4268:
    c.r[3].d[0] = ld8((c.r[5].w[0] + 64u));
    c.r[2].d[0] = ld8((c.r[5].w[0] + 65u));
    st8((c.r[5].w[0] + 66u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[5].w[0] + 67u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 4u));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    st8((c.r[5].w[0] + 64u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    st8((c.r[5].w[0] + 65u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 64u));
    c.r[2].d[0] = ld8((c.r[5].w[0] + 66u));
    c.budget -= 18;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F42CC; } }
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 6u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 520u), 0u);
    st32((c.r[4].w[0] + 128u), 0u);
    st32((c.r[4].w[0] + 132u), 0u);
    st32((c.r[4].w[0] + 136u), 0u);
    st32((c.r[4].w[0] + 96u), 0u);
    c.budget -= 7;
L_002F42CC:
    c.r[3].d[0] = ld8((c.r[5].w[0] + 64u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] - 7328u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F42ECu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F42ECu) [[unlikely]] return; }
L_002F42EC:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002F4300:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    mmi::paddub(c.r[16], c.r[6], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4320u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_007D(c, 114u, depth + 1u); else { c.pc = 0x002F50F0u; return; } if (c.pc != 0x002F4320u) [[unlikely]] return; }
L_002F4320:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 760u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002F4340; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1260u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F4340; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002F4340:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002F4360:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[18], c.r[6], c.r[0]);
    mmi::paddub(c.r[20], c.r[4], c.r[0]);
    mmi::paddub(c.r[19], c.r[5], c.r[0]);
    mmi::paddub(c.r[17], c.r[7], c.r[0]);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    mmi::paddub(c.r[5], c.r[20], c.r[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F439Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0081(c, 114u, depth + 1u); else { c.pc = 0x00305C00u; return; } if (c.pc != 0x002F439Cu) [[unlikely]] return; }
L_002F439C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 3u)));
    set32(c.r[2], c.r[28].w[0] - 28316u);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[21].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F43BCu); mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 64u, depth + 1u); else { c.pc = 0x002DC7B0u; return; } if (c.pc != 0x002F43BCu) [[unlikely]] return; }
L_002F43BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F43D4; } }
    mmi::paddub(c.r[4], c.r[20], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F43D0u); mmi::paddub(c.r[5], c.r[21], c.r[0]);  if (depth < kMaxDepth) unit_0079(c, 182u, depth + 1u); else { c.pc = 0x002E62A0u; return; } if (c.pc != 0x002F43D0u) [[unlikely]] return; }
L_002F43D0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002F43D4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 3u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002F4408; } }
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F43F0u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 64u, depth + 1u); else { c.pc = 0x002DC7B0u; return; } if (c.pc != 0x002F43F0u) [[unlikely]] return; }
L_002F43F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F4408; } }
    set32(c.r[5], c.r[21].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4404u); mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_0079(c, 182u, depth + 1u); else { c.pc = 0x002E62A0u; return; } if (c.pc != 0x002F4404u) [[unlikely]] return; }
L_002F4404:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002F4408:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002F4420; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8386u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4420u); mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 35u, depth + 1u); else { c.pc = 0x00198550u; return; } if (c.pc != 0x002F4420u) [[unlikely]] return; }
L_002F4420:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 3u)));
    set32(c.r[7], 0u + 1u);
    mmi::paddub(c.r[5], c.r[19], c.r[0]);
    mmi::paddub(c.r[4], c.r[20], c.r[0]);
    mmi::paddub(c.r[6], c.r[18], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4440u); st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_007D(c, 114u, depth + 1u); else { c.pc = 0x002F50F0u; return; } if (c.pc != 0x002F4440u) [[unlikely]] return; }
L_002F4440:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 760u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002F4460; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 1260u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F4460; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[20].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002F4460:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002F4490:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 6u)));
    mmi::paddub(c.r[19], c.r[5], c.r[0]);
    mmi::paddub(c.r[18], c.r[6], c.r[0]);
    mmi::paddub(c.r[17], c.r[7], c.r[0]);
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[20], c.r[4], c.r[0]);  if (t) { goto L_002F44E0; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[20].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[20].w[0] + 80u), 0u);
    st32((c.r[20].w[0] + 84u), 0u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 84u)));
    st32((c.r[20].w[0] + 92u), c.r[2].w[0]);
    c.budget -= 6;
L_002F44E0:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 578u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F4540; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 3u)));
    set32(c.r[8], 0u + 48u);
    set32(c.r[2], 0u + 3u);
    mmi::paddub(c.r[6], c.r[18], c.r[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[19].w[0] + 64u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[19].w[0] + 65u), static_cast<std::uint8_t>(0u));
    st8((c.r[20].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st8((c.r[20].w[0] + 6u), static_cast<std::uint8_t>(0u));
    st32((c.r[20].w[0] + 520u), 0u);
    st32((c.r[20].w[0] + 128u), 0u);
    st32((c.r[20].w[0] + 132u), 0u);
    st32((c.r[20].w[0] + 136u), 0u);
    mmi::paddub(c.r[4], c.r[20], c.r[0]);
    mmi::paddub(c.r[5], c.r[19], c.r[0]);
    mmi::paddub(c.r[7], c.r[17], c.r[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4538u); st32((c.r[20].w[0] + 96u), 0u);  if (depth < kMaxDepth) unit_007D(c, 41u, depth + 1u); else { c.pc = 0x002F46B0u; return; } if (c.pc != 0x002F4538u) [[unlikely]] return; }
L_002F4538:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);  if (t) { goto L_002F4688; } }
L_002F4540:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 3u)));
    set32(c.r[2], c.r[28].w[0] - 28320u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4560u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002F4560u) [[unlikely]] return; }
L_002F4560:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 92u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4570u); set32(c.r[4], c.r[2].w[0] - c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002F4570u) [[unlikely]] return; }
L_002F4570:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4578u); set32(c.r[4], ld32((c.r[20].w[0] + 84u)));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002F4578u) [[unlikely]] return; }
L_002F4578:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4580u); set32(c.r[4], ld32((c.r[20].w[0] + 80u)));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002F4580u) [[unlikely]] return; }
L_002F4580:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4588u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002F4588u) [[unlikely]] return; }
L_002F4588:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4594u); mmi::paddub(c.r[5], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 114u, depth + 1u); else { c.pc = 0x00305C00u; return; } if (c.pc != 0x002F4594u) [[unlikely]] return; }
L_002F4594:
    set32(c.r[6], c.r[18].w[0] + 1328u);
    set32(c.r[7], 0u + 512u);
    mmi::paddub(c.r[4], c.r[20], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F45A8u); mmi::paddub(c.r[5], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_007D(c, 94u, depth + 1u); else { c.pc = 0x002F4D90u; return; } if (c.pc != 0x002F45A8u) [[unlikely]] return; }
L_002F45A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F45B0u); mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 237u, depth + 1u); else { c.pc = 0x002DEC00u; return; } if (c.pc != 0x002F45B0u) [[unlikely]] return; }
L_002F45B0:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 65u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[7], 0u + 1u);  if (t) { goto L_002F4654; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 3u)));
    set32(c.r[2], c.r[28].w[0] - 28316u);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[21].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F45DCu); mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 64u, depth + 1u); else { c.pc = 0x002DC7B0u; return; } if (c.pc != 0x002F45DCu) [[unlikely]] return; }
L_002F45DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F45F4; } }
    mmi::paddub(c.r[4], c.r[20], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F45F0u); mmi::paddub(c.r[5], c.r[21], c.r[0]);  if (depth < kMaxDepth) unit_0079(c, 182u, depth + 1u); else { c.pc = 0x002E62A0u; return; } if (c.pc != 0x002F45F0u) [[unlikely]] return; }
L_002F45F0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002F45F4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 3u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002F4628; } }
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4610u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 64u, depth + 1u); else { c.pc = 0x002DC7B0u; return; } if (c.pc != 0x002F4610u) [[unlikely]] return; }
L_002F4610:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F4628; } }
    set32(c.r[5], c.r[21].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4624u); mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_0079(c, 182u, depth + 1u); else { c.pc = 0x002E62A0u; return; } if (c.pc != 0x002F4624u) [[unlikely]] return; }
L_002F4624:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002F4628:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002F4640; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8386u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4640u); mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 35u, depth + 1u); else { c.pc = 0x00198550u; return; } if (c.pc != 0x002F4640u) [[unlikely]] return; }
L_002F4640:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 3u)));
    set32(c.r[3], 0u + 32u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[7], 0u + 1u);
    c.budget -= 5;
L_002F4654:
    mmi::paddub(c.r[5], c.r[19], c.r[0]);
    mmi::paddub(c.r[4], c.r[20], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4664u); mmi::paddub(c.r[6], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_007D(c, 114u, depth + 1u); else { c.pc = 0x002F50F0u; return; } if (c.pc != 0x002F4664u) [[unlikely]] return; }
L_002F4664:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 760u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002F4684; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 1260u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F4684; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[20].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002F4684:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002F4688:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002F46B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[2], c.r[28].w[0] - 28320u);
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    mmi::paddub(c.r[16], c.r[7], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    mmi::paddub(c.r[17], c.r[6], c.r[0]);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F46F8u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002F46F8u) [[unlikely]] return; }
L_002F46F8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 92u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4708u); set32(c.r[4], c.r[2].w[0] - c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002F4708u) [[unlikely]] return; }
L_002F4708:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4710u); set32(c.r[4], ld32((c.r[19].w[0] + 84u)));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002F4710u) [[unlikely]] return; }
L_002F4710:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4718u); set32(c.r[4], ld32((c.r[19].w[0] + 80u)));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002F4718u) [[unlikely]] return; }
L_002F4718:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4720u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002F4720u) [[unlikely]] return; }
L_002F4720:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 6u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] - 7312u);
    mmi::paddub(c.r[7], c.r[16], c.r[0]);
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    mmi::paddub(c.r[5], c.r[18], c.r[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F474Cu); mmi::paddub(c.r[6], c.r[17], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F474Cu) [[unlikely]] return; }
L_002F474C:
    set32(c.r[7], 0u + 2u);
    mmi::paddub(c.r[5], c.r[18], c.r[0]);
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4760u); mmi::paddub(c.r[6], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_007D(c, 114u, depth + 1u); else { c.pc = 0x002F50F0u; return; } if (c.pc != 0x002F4760u) [[unlikely]] return; }
L_002F4760:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 760u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002F4780; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 1260u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F4780; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[19].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002F4780:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002F47A0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[7], c.r[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 6u)));
    mmi::paddub(c.r[18], c.r[6], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FE90000u);
    c.r[6].d[0] = c.r[2].d[0] | 47710ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3EDD0000u);
    c.r[3].d[0] = c.r[2].d[0] | 28836ull;
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[4].w[0] + 6u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[4].w[0] + 104u), c.r[6].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    st32((c.r[4].w[0] + 108u), c.r[3].w[0]);
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F47F4u); st32((c.r[4].w[0] + 160u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_007D(c, 104u, depth + 1u); else { c.pc = 0x002F4F00u; return; } if (c.pc != 0x002F47F4u) [[unlikely]] return; }
L_002F47F4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.f[12] = c.r[2].w[0];
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4808u); mmi::paddub(c.r[5], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_007D(c, 112u, depth + 1u); else { c.pc = 0x002F5090u; return; } if (c.pc != 0x002F4808u) [[unlikely]] return; }
L_002F4808:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], c.r[2].w[0] - 7536u);
    set32(c.r[2], c.r[28].w[0] - 28320u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4838u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002F4838u) [[unlikely]] return; }
L_002F4838:
    c.f[13] = ld32((c.r[16].w[0] + 4u));
    c.f[14] = ld32((c.r[16].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4848u); c.f[12] = ld32((c.r[16].w[0]));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002F4848u) [[unlikely]] return; }
L_002F4848:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4850u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000F(c, 16u, depth + 1u); else { c.pc = 0x0013C860u; return; } if (c.pc != 0x002F4850u) [[unlikely]] return; }
L_002F4850:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4860u); set32(c.r[6], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002F4860u) [[unlikely]] return; }
L_002F4860:
    c.f[1] = ld32((c.r[29].w[0] + 80u));
    c.f[0] = ld32((c.r[29].w[0] + 84u));
    c.f[2] = ld32((c.r[29].w[0] + 88u));
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.facc = fp::add(c.f[1], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4880u); c.f[12] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002F4880u) [[unlikely]] return; }
L_002F4880:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[3].d[0] = c.r[3].d[0] | 4719ull;
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[5], c.r[19].w[0] + 64u);  if (t) { goto L_002F48C4; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[19].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[19].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st8((c.r[19].w[0] + 6u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002F48CC; } }
    set32(c.r[5], c.r[19].w[0] + 64u);
    c.budget -= 1;
L_002F48C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F48CCu); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 21u, depth + 1u); else { c.pc = 0x0013CA20u; return; } if (c.pc != 0x002F48CCu) [[unlikely]] return; }
L_002F48CC:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002F48F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[1] = ld32((c.r[4].w[0] + 108u));
    c.f[0] = ld32((c.r[4].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40AC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[2] = c.r[2].w[0];
    mmi::paddub(c.r[16], c.r[6], c.r[0]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 16;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[4].w[0] + 104u), c.f[0]);  if (t) { goto L_002F4934; } }
    st32((c.r[17].w[0] + 104u), c.r[2].w[0]);
    c.budget -= 1;
L_002F4934:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F493Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_007D(c, 104u, depth + 1u); else { c.pc = 0x002F4F00u; return; } if (c.pc != 0x002F493Cu) [[unlikely]] return; }
L_002F493C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.f[12] = c.r[2].w[0];
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4950u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_007D(c, 112u, depth + 1u); else { c.pc = 0x002F5090u; return; } if (c.pc != 0x002F4950u) [[unlikely]] return; }
L_002F4950:
    c.f[12] = ld32((c.r[17].w[0] + 104u));
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4960u); set32(c.r[5], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x002F4960u) [[unlikely]] return; }
L_002F4960:
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F496Cu); set32(c.r[5], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x002F496Cu) [[unlikely]] return; }
L_002F496C:
    c.f[2] = ld32((c.r[17].w[0] + 160u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 160u), c.f[1]);  if (t) { goto L_002F49A0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 6u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_002F49A0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002F49C0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], c.r[2].w[0] - 7536u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[2], c.r[28].w[0] - 28320u);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    mmi::paddub(c.r[17], c.r[6], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4A14u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002F4A14u) [[unlikely]] return; }
L_002F4A14:
    c.f[13] = ld32((c.r[16].w[0] + 4u));
    c.f[14] = ld32((c.r[16].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4A24u); c.f[12] = ld32((c.r[16].w[0]));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002F4A24u) [[unlikely]] return; }
L_002F4A24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4A2Cu); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 16u, depth + 1u); else { c.pc = 0x0013C860u; return; } if (c.pc != 0x002F4A2Cu) [[unlikely]] return; }
L_002F4A2C:
    mmi::paddub(c.r[5], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4A38u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_007D(c, 104u, depth + 1u); else { c.pc = 0x002F4F00u; return; } if (c.pc != 0x002F4A38u) [[unlikely]] return; }
L_002F4A38:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.f[12] = c.r[2].w[0];
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4A4Cu); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_007D(c, 112u, depth + 1u); else { c.pc = 0x002F5090u; return; } if (c.pc != 0x002F4A4Cu) [[unlikely]] return; }
L_002F4A4C:
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4A58u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_007D(c, 107u, depth + 1u); else { c.pc = 0x002F4F70u; return; } if (c.pc != 0x002F4A58u) [[unlikely]] return; }
L_002F4A58:
    set32(c.r[5], c.r[29].w[0] + 80u);
    set32(c.r[6], 0u + 2048u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4A68u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 130u, depth + 1u); else { c.pc = 0x002DD720u; return; } if (c.pc != 0x002F4A68u) [[unlikely]] return; }
L_002F4A68:
    set32(c.r[4], c.r[19].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4A74u); set32(c.r[5], c.r[19].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x002F4A74u) [[unlikely]] return; }
L_002F4A74:
    set32(c.r[4], c.r[19].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4A80u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x002F4A80u) [[unlikely]] return; }
L_002F4A80:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F4AE8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 6u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    set32(c.r[4], c.r[19].w[0] + 64u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[19].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], c.r[19].w[0] + 32u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4AC0u); st32((c.r[19].w[0] + 160u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002F4AC0u) [[unlikely]] return; }
L_002F4AC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4AC8u); set32(c.r[4], c.r[19].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 20u, depth + 1u); else { c.pc = 0x0013C9E0u; return; } if (c.pc != 0x002F4AC8u) [[unlikely]] return; }
L_002F4AC8:
    c.f[1] = ld32((c.r[19].w[0] + 160u));
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 104u), c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4AE8u); c.f[12] = ld32((c.r[19].w[0] + 160u));  if (depth < kMaxDepth) unit_007D(c, 112u, depth + 1u); else { c.pc = 0x002F5090u; return; } if (c.pc != 0x002F4AE8u) [[unlikely]] return; }
L_002F4AE8:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002F4B10:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], c.r[2].w[0] - 7536u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[2], c.r[28].w[0] - 28320u);
    mmi::paddub(c.r[17], c.r[7], c.r[0]);
    mmi::paddub(c.r[18], c.r[6], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4B64u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002F4B64u) [[unlikely]] return; }
L_002F4B64:
    c.f[13] = ld32((c.r[16].w[0] + 4u));
    c.f[14] = ld32((c.r[16].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4B74u); c.f[12] = ld32((c.r[16].w[0]));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002F4B74u) [[unlikely]] return; }
L_002F4B74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4B7Cu); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 16u, depth + 1u); else { c.pc = 0x0013C860u; return; } if (c.pc != 0x002F4B7Cu) [[unlikely]] return; }
L_002F4B7C:
    c.f[12] = ld32((c.r[19].w[0] + 104u));
    set32(c.r[4], c.r[19].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4B8Cu); set32(c.r[5], c.r[19].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x002F4B8Cu) [[unlikely]] return; }
L_002F4B8C:
    set32(c.r[4], c.r[19].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4B98u); set32(c.r[5], c.r[19].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x002F4B98u) [[unlikely]] return; }
L_002F4B98:
    c.f[2] = ld32((c.r[19].w[0] + 160u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[19].w[0] + 160u), c.f[1]);  if (t) { goto L_002F4BE0; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[19].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[19].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st8((c.r[19].w[0] + 6u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002F4C18; } }
L_002F4BE0:
    set32(c.r[4], c.r[19].w[0] + 64u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4BF0u); set32(c.r[6], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002F4BF0u) [[unlikely]] return; }
L_002F4BF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4BF8u); set32(c.r[4], c.r[19].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 20u, depth + 1u); else { c.pc = 0x0013C9E0u; return; } if (c.pc != 0x002F4BF8u) [[unlikely]] return; }
L_002F4BF8:
    c.f[1] = ld32((c.r[19].w[0] + 160u));
    mmi::paddub(c.r[5], c.r[18], c.r[0]);
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 104u), c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4C18u); c.f[12] = ld32((c.r[19].w[0] + 160u));  if (depth < kMaxDepth) unit_007D(c, 112u, depth + 1u); else { c.pc = 0x002F5090u; return; } if (c.pc != 0x002F4C18u) [[unlikely]] return; }
L_002F4C18:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002F4C40:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 4u)));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[4], 0u + 3u);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_002F4C80; } }
    c.r[3].d[0] = ld8((c.r[6].w[0] + 742u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F4C7C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_002F4C80; } }
L_002F4C7C:
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_002F4C80:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002F4CE0; } }
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4CB8u); st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0047(c, 214u, depth + 1u); else { c.pc = 0x0021ED70u; return; } if (c.pc != 0x002F4CB8u) [[unlikely]] return; }
L_002F4CB8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[18], c.r[2].w[0] - 7408u);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 3;
L_002F4CC4:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4CD0u); mmi::paddub(c.r[5], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_004C(c, 283u, depth + 1u); else { c.pc = 0x002335D0u; return; } if (c.pc != 0x002F4CD0u) [[unlikely]] return; }
L_002F4CD0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F4CC4u | kUnwind; return; } goto L_002F4CC4; } }
L_002F4CE0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002F4D00:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_002F4D10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], ld32((c.r[4].w[0] + 264u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 7u)));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4D30u); set32(c.r[5], c.r[16].w[0] + 320u);  if (depth < kMaxDepth) unit_007D(c, 114u, depth + 1u); else { c.pc = 0x002F50F0u; return; } if (c.pc != 0x002F4D30u) [[unlikely]] return; }
L_002F4D30:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F4D60; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 184u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4D58u); set32(c.r[4], ld32((c.r[16].w[0] + 264u)));  if (depth < kMaxDepth) unit_001B(c, 92u, depth + 1u); else { c.pc = 0x0016DB00u; return; } if (c.pc != 0x002F4D58u) [[unlikely]] return; }
L_002F4D58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002F4D80; } }
L_002F4D60:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 184u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4D7Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_001B(c, 92u, depth + 1u); else { c.pc = 0x0016DB00u; return; } if (c.pc != 0x002F4D7Cu) [[unlikely]] return; }
L_002F4D7C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002F4D80:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002F4D90:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    mmi::paddub(c.r[16], c.r[6], c.r[0]);
    mmi::paddub(c.r[17], c.r[7], c.r[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4DC0u); mmi::paddub(c.r[4], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002F4DC0u) [[unlikely]] return; }
L_002F4DC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4DC8u); set32(c.r[4], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 17u, depth + 1u); else { c.pc = 0x0013C880u; return; } if (c.pc != 0x002F4DC8u) [[unlikely]] return; }
L_002F4DC8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4DD8u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 211u, depth + 1u); else { c.pc = 0x00102548u; return; } if (c.pc != 0x002F4DD8u) [[unlikely]] return; }
L_002F4DD8:
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4DE4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002F4DE4u) [[unlikely]] return; }
L_002F4DE4:
    set32(c.r[19], c.r[29].w[0] + 104u);
    c.f[12] = ld32((c.r[29].w[0] + 96u));
    c.f[13] = ld32((c.r[19].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4DF8u); set32(c.r[20], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x002F4DF8u) [[unlikely]] return; }
L_002F4DF8:
    c.f[1] = ld32((c.r[29].w[0] + 96u));
    c.f[0] = ld32((c.r[19].w[0]));
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4E14u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002F4E14u) [[unlikely]] return; }
L_002F4E14:
    c.f[12] = ld32((c.r[29].w[0] + 100u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4E20u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x002F4E20u) [[unlikely]] return; }
L_002F4E20:
    c.f[0] = c.r[16].w[0];
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.f[12] = fp::cvt_s_w(c.f[0]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4E38u); set32(c.r[19], 0u - c.r[2].w[0]);  if (depth < kMaxDepth) unit_000E(c, 291u, depth + 1u); else { c.pc = 0x0013B4D0u; return; } if (c.pc != 0x002F4E38u) [[unlikely]] return; }
L_002F4E38:
    c.f[1] = c.r[17].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F4E78; } }
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0; c.r[16].d[0] = c.r[17].d[0] << 48;  if (t) { goto L_002F4E70; } }
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u - c.r[2].w[0]);  if (t) { goto L_002F4E74; } }
    c.r[16].d[0] = c.r[17].d[0] << 48;
    c.budget -= 1;
L_002F4E70:
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);
    c.budget -= 1;
L_002F4E74:
    mmi::paddub(c.r[20], c.r[0], c.r[0]);
    c.budget -= 1;
L_002F4E78:
    c.f[0] = c.r[19].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4E84u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 291u, depth + 1u); else { c.pc = 0x0013B4D0u; return; } if (c.pc != 0x002F4E84u) [[unlikely]] return; }
L_002F4E84:
    c.f[1] = c.r[17].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F4EC4; } }
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] >= 0; c.r[19].d[0] = c.r[17].d[0] << 48;  if (t) { goto L_002F4EBC; } }
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[19], 0u - c.r[2].w[0]);  if (t) { goto L_002F4EC0; } }
    c.r[19].d[0] = c.r[17].d[0] << 48;
    c.budget -= 1;
L_002F4EBC:
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 48);
    c.budget -= 1;
L_002F4EC0:
    mmi::paddub(c.r[20], c.r[0], c.r[0]);
    c.budget -= 1;
L_002F4EC4:
    set32(c.r[3], ld32((c.r[18].w[0] + 80u)));
    mmi::paddub(c.r[2], c.r[20], c.r[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    st32((c.r[18].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 84u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[18].w[0] + 84u), c.r[3].w[0]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002F4F00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[0] = ld32((c.r[4].w[0] + 80u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F700000u);
    c.r[2].d[0] = c.r[2].d[0] | 41943ull;
    c.f[1] = c.r[2].w[0];
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4F2Cu); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002F4F2Cu) [[unlikely]] return; }
L_002F4F2C:
    st32((c.r[16].w[0] + 80u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 84u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F700000u);
    c.r[2].d[0] = c.r[2].d[0] | 41943ull;
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4F50u); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002F4F50u) [[unlikely]] return; }
L_002F4F50:
    st32((c.r[16].w[0] + 84u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002F4F70:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[4], c.r[16].w[0] + 48u);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4F94u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_000F(c, 20u, depth + 1u); else { c.pc = 0x0013C9E0u; return; } if (c.pc != 0x002F4F94u) [[unlikely]] return; }
L_002F4F94:
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.f[20] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4FA4u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x002F4FA4u) [[unlikely]] return; }
L_002F4FA4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], c.r[2].w[0] - 7472u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 3;
L_002F4FB0:
    c.f[1] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F4FD8; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[4].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F4FB0u | kUnwind; return; } goto L_002F4FB0; } }
    c.budget -= 1;
L_002F4FD8:
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[20]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F501C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3EDD0000u);
    c.r[2].d[0] = c.r[2].d[0] | 28836ull;
    c.f[0] = fp::sub(c.f[1], c.f[20]);
    c.f[2] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 9;
    if (!(c.fcr31 & kFpuCondition)) { c.f[20] = fp::add(c.f[20], c.f[2]);  goto L_002F501C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = c.f[1];  if (t) { goto L_002F501C; } }
    c.f[20] = fp::add(c.f[20], c.f[2]);
    c.budget -= 1;
L_002F501C:
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[16].w[0] + 48u);  if (t) { goto L_002F5060; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3EDD0000u);
    c.r[2].d[0] = c.r[2].d[0] | 28836ull;
    c.f[0] = fp::sub(c.f[20], c.f[1]);
    c.f[2] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 9;
    if (!(c.fcr31 & kFpuCondition)) { c.f[20] = fp::sub(c.f[20], c.f[2]);  goto L_002F505C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = c.f[1];  if (t) { goto L_002F505C; } }
    c.f[20] = fp::sub(c.f[20], c.f[2]);
    c.budget -= 1;
L_002F505C:
    set32(c.r[4], c.r[16].w[0] + 48u);
    c.budget -= 1;
L_002F5060:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F506Cu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x002F506Cu) [[unlikely]] return; }
L_002F506C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002F5090:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 92u)));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 12u, c.f[0], c.f[12]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F50CCu);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002F50CCu) [[unlikely]] return; }
L_002F50CC:
    set32(c.r[3], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    st32((c.r[16].w[0] + 92u), c.r[3].w[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002F50F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], 0u + 2u);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 10;
    { const bool t = c.r[7].d[0] == c.r[3].d[0]; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { goto L_002F51B8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[3].d[0]; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002F5198; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_002F5134; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);  if (t) { goto L_002F51E4; } }
L_002F5134:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], c.r[2].w[0] - 7536u);
    set32(c.r[2], c.r[28].w[0] - 28320u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[18], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5164u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002F5164u) [[unlikely]] return; }
L_002F5164:
    c.f[13] = ld32((c.r[18].w[0] + 4u));
    c.f[14] = ld32((c.r[18].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5174u); c.f[12] = ld32((c.r[18].w[0]));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002F5174u) [[unlikely]] return; }
L_002F5174:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F517Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002F517Cu) [[unlikely]] return; }
L_002F517C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5184u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 16u, depth + 1u); else { c.pc = 0x0013C860u; return; } if (c.pc != 0x002F5184u) [[unlikely]] return; }
L_002F5184:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F518Cu); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002F518Cu) [[unlikely]] return; }
L_002F518C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F51E0; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002F5198:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F51A0u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002F51A0u) [[unlikely]] return; }
L_002F51A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F51A8u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 17u, depth + 1u); else { c.pc = 0x0013C880u; return; } if (c.pc != 0x002F51A8u) [[unlikely]] return; }
L_002F51A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F51B0u); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002F51B0u) [[unlikely]] return; }
L_002F51B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F51E0; } }
L_002F51B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F51C0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002F51C0u) [[unlikely]] return; }
L_002F51C0:
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F51D0u); set32(c.r[6], c.r[17].w[0] + 128u);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x002F51D0u) [[unlikely]] return; }
L_002F51D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F51D8u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 17u, depth + 1u); else { c.pc = 0x0013C880u; return; } if (c.pc != 0x002F51D8u) [[unlikely]] return; }
L_002F51D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F51E0u); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002F51E0u) [[unlikely]] return; }
L_002F51E0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002F51E4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002F5200:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[4], 0u + 1u);
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    mmi::paddub(c.r[6], c.r[4], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5224u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x002F5224u) [[unlikely]] return; }
L_002F5224:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[2], c.r[0]);  if (t) { goto L_002F5280; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 17u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 19u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    set32(c.r[2], c.r[2].w[0] + 21152u);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    set32(c.r[2], c.r[2].w[0] + 23488u);
    st32((c.r[16].w[0] + 168u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 180u)));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[16].w[0] + 184u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 184u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5280u); st32((c.r[16].w[0] + 188u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0081(c, 114u, depth + 1u); else { c.pc = 0x00305C00u; return; } if (c.pc != 0x002F5280u) [[unlikely]] return; }
L_002F5280:
    mmi::paddub(c.r[2], c.r[16], c.r[0]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002F52A0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] - 7232u);
    set32(c.r[5], c.r[4].w[0] + 320u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002F4000u < 16384u) { entry = entries_007D[(t - 0x002F4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002F52D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    set32(c.r[6], 0u + 32u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xBED00000u);
    set32(c.r[3], 0u + 160u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st32((c.r[4].w[0] + 52u), c.r[5].w[0]);
    st8((c.r[4].w[0] + 576u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 224u);
    st8((c.r[4].w[0] + 579u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x45610000u);
    st32((c.r[4].w[0] + 132u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43960000u);
    st32((c.r[4].w[0] + 128u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 264u)));
    c.budget -= 23;
    { const bool t = c.r[5].d[0] == 0ull; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { goto L_002F535C; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_002F5360; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8386u)));
    set32(c.r[3], 0u + 39u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002F535C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002F5390; } }
L_002F535C:
    set32(c.r[3], 0u + 3u);
    c.budget -= 1;
L_002F5360:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002F53C4; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002F53C4; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8386u)));
    set32(c.r[3], 0u + 39u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002F53C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 352u), 0u);  if (t) { goto L_002F53C4; } }
L_002F5390:
    st32((c.r[16].w[0] + 64u), 0u);
    c.f[0] = ld32((c.r[5].w[0] + 2096u));
    st32((c.r[17].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 2100u));
    st32((c.r[17].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 2104u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F53B0u); st32((c.r[17].w[0] + 40u), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002F53B0u) [[unlikely]] return; }
L_002F53B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F53B8u); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002F53B8u) [[unlikely]] return; }
L_002F53B8:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F53C4u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_007D(c, 135u, depth + 1u); else { c.pc = 0x002F53E0u; return; } if (c.pc != 0x002F53C4u) [[unlikely]] return; }
L_002F53C4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002F53E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[7], ld32((c.r[4].w[0] + 264u)));
    c.budget -= 6;
    { const bool t = c.r[7].d[0] == 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002F5428; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 1u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_002F542C; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 8386u)));
    set32(c.r[3], 0u + 39u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_002F5428; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002F545C; } }
L_002F5428:
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_002F542C:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull; st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002F54C4; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 1u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002F54C4; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 8386u)));
    set32(c.r[3], 0u + 39u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002F54C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0] + 352u), 0u);  if (t) { goto L_002F54C4; } }
L_002F545C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] - 7216u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F547Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F547Cu) [[unlikely]] return; }
L_002F547C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5484u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002F5484u) [[unlikely]] return; }
L_002F5484:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[4], c.r[16].w[0] + 32u);  if (t) { goto L_002F54AC; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[4], 0u + 384u);  if (t) { goto L_002F54A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F54A8u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002F54A8u) [[unlikely]] return; }
L_002F54A8:
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 1;
L_002F54AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F54B4u);  if (depth < kMaxDepth) unit_000F(c, 17u, depth + 1u); else { c.pc = 0x0013C880u; return; } if (c.pc != 0x002F54B4u) [[unlikely]] return; }
L_002F54B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F54BCu); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002F54BCu) [[unlikely]] return; }
L_002F54BC:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002F54C4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002F54E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[1] = ld32((c.r[4].w[0] + 52u));
    c.f[0] = ld32((c.r[4].w[0] + 36u));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 36u), c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5508u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0045(c, 192u, depth + 1u); else { c.pc = 0x00217510u; return; } if (c.pc != 0x002F5508u) [[unlikely]] return; }
L_002F5508:
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F5520; } }
    st32((c.r[16].w[0] + 36u), c.f[0]);
    c.budget -= 1;
L_002F5520:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002F5558; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[6], 0u + 61u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5558u); st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0081(c, 12u, depth + 1u); else { c.pc = 0x00304300u; return; } if (c.pc != 0x002F5558u) [[unlikely]] return; }
L_002F5558:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002F5570:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[0] = ld32((c.r[4].w[0] + 132u));
    set32(c.r[3], ld32((c.r[4].w[0] + 264u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[2], 0u - 97u);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    set32(c.r[16], c.r[3].w[0] + 320u);
    st32((c.r[4].w[0] + 132u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 530u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 20;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[20], c.r[4], c.r[0]);  if (t) { goto L_002F55D0; } }
    c.f[0] = ld32((c.r[20].w[0] + 128u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 128u), c.f[0]);  if (t) { goto L_002F55D8; } }
L_002F55D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43960000u);
    st32((c.r[20].w[0] + 128u), c.r[2].w[0]);
    c.budget -= 2;
L_002F55D8:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 578u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F5614; } }
    c.f[0] = ld32((c.r[20].w[0] + 132u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F5614; } }
    c.f[0] = ld32((c.r[20].w[0] + 128u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F5634; } }
L_002F5614:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 4u)));
    mmi::paddub(c.r[4], c.r[20], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[20].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F562Cu); st32((c.r[16].w[0] + 32u), 0u);  if (depth < kMaxDepth) unit_0081(c, 9u, depth + 1u); else { c.pc = 0x00304280u; return; } if (c.pc != 0x002F562Cu) [[unlikely]] return; }
L_002F562C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);  if (t) { goto L_002F5920; } }
L_002F5634:
    set32(c.r[2], ld32((c.r[20].w[0] + 520u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F56AC; } }
    set32(c.r[5], c.r[2].w[0] + 80u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5650u); set32(c.r[6], c.r[20].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002F5650u) [[unlikely]] return; }
L_002F5650:
    c.f[13] = ld32((c.r[29].w[0] + 120u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F565Cu); c.f[12] = ld32((c.r[29].w[0] + 112u));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x002F565Cu) [[unlikely]] return; }
L_002F565C:
    mmi::paddub(c.r[17], c.r[2], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5668u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x002F5668u) [[unlikely]] return; }
L_002F5668:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3EED0000u);
    c.r[2].d[0] = c.r[2].d[0] | 315ull;
    c.f[1] = c.r[2].w[0];
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5684u); st32((c.r[20].w[0] + 48u), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x002F5684u) [[unlikely]] return; }
L_002F5684:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3EED0000u);
    c.r[2].d[0] = c.r[2].d[0] | 315ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBE810000u);
    c.r[2].d[0] = c.r[2].d[0] | 28416ull;
    st32((c.r[20].w[0] + 56u), c.f[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_002F56C0; } }
L_002F56AC:
    st32((c.r[20].w[0] + 48u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBE810000u);
    st32((c.r[20].w[0] + 56u), 0u);
    c.r[2].d[0] = c.r[2].d[0] | 28416ull;
    st32((c.r[20].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 5;
L_002F56C0:
    set32(c.r[4], c.r[20].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F56CCu); set32(c.r[5], c.r[20].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x002F56CCu) [[unlikely]] return; }
L_002F56CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F56D4u); set32(c.r[4], c.r[20].w[0] + 32u);  if (depth < kMaxDepth) unit_0045(c, 192u, depth + 1u); else { c.pc = 0x00217510u; return; } if (c.pc != 0x002F56D4u) [[unlikely]] return; }
L_002F56D4:
    c.f[2] = ld32((c.r[20].w[0] + 36u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x405E0000u);
    c.r[3].d[0] = c.r[3].d[0] | 47186ull;
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F5720; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 4u)));
    mmi::paddub(c.r[4], c.r[20], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[20].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[20].w[0] + 36u), c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5718u); st32((c.r[16].w[0] + 32u), 0u);  if (depth < kMaxDepth) unit_0081(c, 9u, depth + 1u); else { c.pc = 0x00304280u; return; } if (c.pc != 0x002F5718u) [[unlikely]] return; }
L_002F5718:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F591C; } }
L_002F5720:
    set32(c.r[4], ld32((c.r[20].w[0] + 520u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F575C; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 640u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F575C; } }
    set32(c.r[2], 0u + 4u);
    st8((c.r[20].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[20].w[0] + 520u), 0u);
    mmi::paddub(c.r[4], c.r[20], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5754u); st32((c.r[20].w[0] + 524u), 0u);  if (depth < kMaxDepth) unit_0081(c, 9u, depth + 1u); else { c.pc = 0x00304280u; return; } if (c.pc != 0x002F5754u) [[unlikely]] return; }
L_002F5754:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F591C; } }
L_002F575C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F591C; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[17], ld32((c.r[4].w[0] + 20u)));  if (t) { goto L_002F5778; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 112u);  if (t) { goto L_002F5790; } }
L_002F5778:
    set32(c.r[3], 0u + 4u);
    st8((c.r[20].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[20].w[0] + 520u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 524u), 0u);  if (t) { goto L_002F591C; } }
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 1;
L_002F5790:
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F579Cu); set32(c.r[6], c.r[20].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002F579Cu) [[unlikely]] return; }
L_002F579C:
    c.f[1] = ld32((c.r[29].w[0] + 112u));
    c.f[0] = ld32((c.r[29].w[0] + 120u));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F57B0u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002F57B0u) [[unlikely]] return; }
L_002F57B0:
    set32(c.r[4], c.r[20].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F57BCu); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_0045(c, 192u, depth + 1u); else { c.pc = 0x00217510u; return; } if (c.pc != 0x002F57BCu) [[unlikely]] return; }
L_002F57BC:
    c.f[2] = ld32((c.r[20].w[0] + 36u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41D80000u);
    c.f[1] = c.r[3].w[0];
    c.f[2] = fp::sub(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F591C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F591C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41EC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 10486ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F591C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002F591C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002F591C; } }
    set32(c.r[18], c.r[29].w[0] + 128u);
    mmi::paddub(c.r[3], c.r[0], c.r[0]);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
L_002F5844:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[3].w[0] + 2u);
    c.r[2].d[0] = c.r[3].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F5844u | kUnwind; return; } goto L_002F5844; } }
    mmi::paddub(c.r[19], c.r[0], c.r[0]);
    mmi::paddub(c.r[17], c.r[18], c.r[0]);
    c.budget -= 2;
L_002F5868:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5870u);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x002F5870u) [[unlikely]] return; }
L_002F5870:
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[5], c.r[2].w[0] + 128u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < 16ll ? 1ull : 0ull;
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F5868u | kUnwind; return; } goto L_002F5868; } }
    mmi::paddub(c.r[19], c.r[0], c.r[0]);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 2;
L_002F58A4:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    mmi::paddub(c.r[4], c.r[20], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F58B4u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_004F(c, 283u, depth + 1u); else { c.pc = 0x0023ECC0u; return; } if (c.pc != 0x002F58B4u) [[unlikely]] return; }
L_002F58B4:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[19], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F58A4u | kUnwind; return; } goto L_002F58A4; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; set32(c.r[3], 0u + 4u);  if (t) { goto L_002F58F8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 5u)));
    set32(c.r[3], 0u + 40u);
    set32(c.r[2], 0u + 2u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[20].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st16((c.r[20].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 32u), c.r[2].w[0]);  if (t) { goto L_002F5914; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 1;
L_002F58F8:
    st8((c.r[20].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[20].w[0] + 48u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBE810000u);
    st32((c.r[20].w[0] + 56u), 0u);
    c.r[2].d[0] = c.r[2].d[0] | 28416ull;
    st32((c.r[20].w[0] + 52u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 32u), c.r[3].w[0]);
    c.budget -= 7;
L_002F5914:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F591Cu); mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 9u, depth + 1u); else { c.pc = 0x00304280u; return; } if (c.pc != 0x002F591Cu) [[unlikely]] return; }
L_002F591C:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002F5920:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_002F5940:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { goto L_002F59B0; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    set32(c.r[3], 0u + 180u);
    set32(c.r[2], 0u + 20u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[6], 0u + 58u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5998u); st16((c.r[17].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0081(c, 12u, depth + 1u); else { c.pc = 0x00304300u; return; } if (c.pc != 0x002F5998u) [[unlikely]] return; }
L_002F5998:
    set32(c.r[5], 0u + 20u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F59A8u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 25u, depth + 1u); else { c.pc = 0x00198370u; return; } if (c.pc != 0x002F59A8u) [[unlikely]] return; }
L_002F59A8:
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 64u), c.r[3].w[0]);
    c.budget -= 2;
L_002F59B0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002F59D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 264u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[5].w[0] + 320u);  if (t) { goto L_002F5A48; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBE810000u);
    c.r[3].d[0] = c.r[2].d[0] | 28416ull;
    set32(c.r[2], 0u + 4u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[17].w[0] + 48u), 0u);
    st32((c.r[17].w[0] + 56u), 0u);
    st32((c.r[17].w[0] + 52u), c.r[3].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5A34u); st32((c.r[6].w[0] + 32u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0081(c, 9u, depth + 1u); else { c.pc = 0x00304280u; return; } if (c.pc != 0x002F5A34u) [[unlikely]] return; }
L_002F5A34:
    set32(c.r[5], 0u + 20u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5A44u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 29u, depth + 1u); else { c.pc = 0x00198460u; return; } if (c.pc != 0x002F5A44u) [[unlikely]] return; }
L_002F5A44:
    st32((c.r[16].w[0] + 64u), 0u);
    c.budget -= 1;
L_002F5A48:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.r[1].d[0] = c.r[3].sd[0] < 41ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002F5A84; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 166u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[17].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002F5A84; } }
    set32(c.r[2], 0u + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5A80u); st16((c.r[17].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0081(c, 113u, depth + 1u); else { c.pc = 0x00305BD0u; return; } if (c.pc != 0x002F5A80u) [[unlikely]] return; }
L_002F5A80:
    st16((c.r[17].w[0] + 572u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_002F5A84:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002F5AA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 264u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[5], c.r[17].w[0] + 48u);
    set32(c.r[16], c.r[2].w[0] + 320u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5AC8u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x002F5AC8u) [[unlikely]] return; }
L_002F5AC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5AD0u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0045(c, 192u, depth + 1u); else { c.pc = 0x00217510u; return; } if (c.pc != 0x002F5AD0u) [[unlikely]] return; }
L_002F5AD0:
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F5AF8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[17].w[0] + 36u), c.f[0]);
    st32((c.r[16].w[0] + 32u), 0u);
    c.budget -= 5;
L_002F5AF8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002F5B10:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    mmi::paddub(c.r[19], c.r[5], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5B44u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0047(c, 214u, depth + 1u); else { c.pc = 0x0021ED70u; return; } if (c.pc != 0x002F5B44u) [[unlikely]] return; }
L_002F5B44:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[18], c.r[2].w[0] - 7296u);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 3;
L_002F5B50:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5B5Cu); mmi::paddub(c.r[5], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_004C(c, 283u, depth + 1u); else { c.pc = 0x002335D0u; return; } if (c.pc != 0x002F5B5Cu) [[unlikely]] return; }
L_002F5B5C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F5B50u | kUnwind; return; } goto L_002F5B50; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F5B88; } }
    set32(c.r[5], 0u + 20u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5B88u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 29u, depth + 1u); else { c.pc = 0x00198460u; return; } if (c.pc != 0x002F5B88u) [[unlikely]] return; }
L_002F5B88:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002F5BB0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_002F5BC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5BD8u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x002F5BD8u) [[unlikely]] return; }
L_002F5BD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5BE0u); set32(c.r[4], ld32((c.r[16].w[0] + 188u)));  if (depth < kMaxDepth) unit_000F(c, 36u, depth + 1u); else { c.pc = 0x0013CD20u; return; } if (c.pc != 0x002F5BE0u) [[unlikely]] return; }
L_002F5BE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5BE8u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x002F5BE8u) [[unlikely]] return; }
L_002F5BE8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002F5C00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[4], 0u + 1u);
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5C24u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x002F5C24u) [[unlikely]] return; }
L_002F5C24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[2], c.r[0]);  if (t) { goto L_002F5C74; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    set32(c.r[4], 0u + 17u);
    set32(c.r[3], 0u + 20u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] + 23696u);
    st32((c.r[16].w[0] + 24u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    set32(c.r[2], c.r[2].w[0] + 25072u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    st32((c.r[16].w[0] + 168u), c.r[2].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5C74u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 114u, depth + 1u); else { c.pc = 0x00305C00u; return; } if (c.pc != 0x002F5C74u) [[unlikely]] return; }
L_002F5C74:
    mmi::paddub(c.r[2], c.r[16], c.r[0]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002F5C90:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] - 7168u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002F4000u < 16384u) { entry = entries_007D[(t - 0x002F4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002F5CB0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[17], ld32((c.r[4].w[0] + 24u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], 0u + 33u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[4].w[0] + 112u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 116u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 120u), c.r[5].w[0]);
    set32(c.r[2], 0u + 96u);
    st8((c.r[4].w[0] + 576u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 579u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[4].w[0] + 92u), 0u);
    st32((c.r[4].w[0] + 96u), 0u);
    st32((c.r[4].w[0] + 100u), 0u);
    st32((c.r[4].w[0] + 80u), 0u);
    st32((c.r[4].w[0] + 84u), 0u);
    st32((c.r[4].w[0] + 88u), 0u);
    set32(c.r[18], c.r[16].w[0] + 320u);
    st32((c.r[4].w[0] + 336u), 0u);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[5], c.r[2].w[0] - 11744u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[4], c.r[2].w[0] - 12256u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[3], c.r[2].w[0] - 12768u);
    set32(c.r[12], c.r[8].w[0] - 13792u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[2], c.r[2].w[0] - 13280u);
    set32(c.r[10], c.r[8].w[0] - 14304u);
    c.budget -= 40;
L_002F5D50:
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[8].d[0] = c.r[6].sd[0] < 25ll ? 1ull : 0ull;
    set32(c.r[9], c.r[11].w[0] << 2);
    set32(c.r[11], c.r[9].w[0] + c.r[11].w[0]);
    set32(c.r[9], c.r[11].w[0] << 2);
    set32(c.r[9], c.r[11].w[0] + c.r[9].w[0]);
    set32(c.r[9], c.r[9].w[0] << 2);
    set32(c.r[9], c.r[5].w[0] + c.r[9].w[0]);
    set32(c.r[9], c.r[7].w[0] + c.r[9].w[0]);
    st32((c.r[9].w[0]), 0u);
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    set32(c.r[9], c.r[11].w[0] << 2);
    set32(c.r[11], c.r[9].w[0] + c.r[11].w[0]);
    set32(c.r[9], c.r[11].w[0] << 2);
    set32(c.r[9], c.r[11].w[0] + c.r[9].w[0]);
    set32(c.r[9], c.r[9].w[0] << 2);
    set32(c.r[9], c.r[4].w[0] + c.r[9].w[0]);
    set32(c.r[9], c.r[7].w[0] + c.r[9].w[0]);
    st32((c.r[9].w[0]), 0u);
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    set32(c.r[9], c.r[11].w[0] << 2);
    set32(c.r[11], c.r[9].w[0] + c.r[11].w[0]);
    set32(c.r[9], c.r[11].w[0] << 2);
    set32(c.r[9], c.r[11].w[0] + c.r[9].w[0]);
    set32(c.r[9], c.r[9].w[0] << 2);
    set32(c.r[9], c.r[3].w[0] + c.r[9].w[0]);
    set32(c.r[9], c.r[7].w[0] + c.r[9].w[0]);
    st32((c.r[9].w[0]), 0u);
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    set32(c.r[9], c.r[11].w[0] << 2);
    set32(c.r[11], c.r[9].w[0] + c.r[11].w[0]);
    set32(c.r[9], c.r[11].w[0] << 2);
    set32(c.r[9], c.r[11].w[0] + c.r[9].w[0]);
    set32(c.r[9], c.r[9].w[0] << 2);
    set32(c.r[9], c.r[2].w[0] + c.r[9].w[0]);
    set32(c.r[9], c.r[7].w[0] + c.r[9].w[0]);
    st32((c.r[9].w[0]), 0u);
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    set32(c.r[9], c.r[11].w[0] << 2);
    set32(c.r[11], c.r[9].w[0] + c.r[11].w[0]);
    set32(c.r[9], c.r[11].w[0] << 2);
    set32(c.r[9], c.r[11].w[0] + c.r[9].w[0]);
    set32(c.r[9], c.r[9].w[0] << 2);
    set32(c.r[9], c.r[12].w[0] + c.r[9].w[0]);
    set32(c.r[9], c.r[7].w[0] + c.r[9].w[0]);
    st32((c.r[9].w[0]), 0u);
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    set32(c.r[9], c.r[11].w[0] << 2);
    set32(c.r[11], c.r[9].w[0] + c.r[11].w[0]);
    set32(c.r[9], c.r[11].w[0] << 2);
    set32(c.r[9], c.r[11].w[0] + c.r[9].w[0]);
    set32(c.r[9], c.r[9].w[0] << 2);
    set32(c.r[9], c.r[10].w[0] + c.r[9].w[0]);
    set32(c.r[9], c.r[7].w[0] + c.r[9].w[0]);
    set32(c.r[7], c.r[7].w[0] + 4u);
    c.budget -= 58;
    { const bool t = c.r[8].d[0] != 0ull; st32((c.r[9].w[0]), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F5D50u | kUnwind; return; } goto L_002F5D50; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[4], c.r[2].w[0] - 14336u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[3], c.r[2].w[0] - 14368u);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[4], c.r[2].w[0] - 14400u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[5], c.r[2].w[0] - 14432u);
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), 0u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[3], c.r[2].w[0] - 14464u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[2], c.r[2].w[0] - 14496u);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    st32((c.r[4].w[0]), 0u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    set32(c.r[4], c.r[17].w[0] + 2624u);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    st32((c.r[5].w[0]), 0u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0]), 0u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 38;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5ED0u); st32((c.r[2].w[0]), 0u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002F5ED0u) [[unlikely]] return; }
L_002F5ED0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF330000u);
    c.r[2].d[0] = c.r[2].d[0] | 13107ull;
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5EFCu); st32((c.r[29].w[0] + 72u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002F5EFCu) [[unlikely]] return; }
L_002F5EFC:
    set32(c.r[2], 0u + 8u);
    st8((c.r[18].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[3], c.r[2].w[0] - 3616u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 20u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[2], c.r[2].w[0] - 5616u);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[5].w[0] << 6);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[5].w[0] << 4);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5F4Cu); set32(c.r[7], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_000C(c, 444u, depth + 1u); else { c.pc = 0x00133A20u; return; } if (c.pc != 0x002F5F4Cu) [[unlikely]] return; }
L_002F5F4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5F54u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_007D(c, 193u, depth + 1u); else { c.pc = 0x002F5F70u; return; } if (c.pc != 0x002F5F54u) [[unlikely]] return; }
L_002F5F54:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002F5F70:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[16], ld32((c.r[4].w[0] + 24u)));
    mmi::paddub(c.r[20], c.r[4], c.r[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 514u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 14;
    { const bool t = c.r[3].sd[0] > 0; set32(c.r[17], c.r[20].w[0] + 320u);  if (t) { goto L_002F5FC4; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 742u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F5FC4; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002F61A0; } }
L_002F5FC4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[4].w[0] + 192u);  goto L_002F6030; }
    set32(c.r[2], 0u + 8u);
    st8((c.r[17].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[12] = c.r[2].w[0];
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 20u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[2], c.r[2].w[0] - 3616u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[5], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[5].w[0] << 6);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[2], c.r[2].w[0] - 5616u);
    set32(c.r[3], c.r[5].w[0] << 4);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6024u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000C(c, 444u, depth + 1u); else { c.pc = 0x00133A20u; return; } if (c.pc != 0x002F6024u) [[unlikely]] return; }
L_002F6024:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);  if (t) { goto L_002F61A4; } }
    set32(c.r[4], c.r[4].w[0] + 192u);
    c.budget -= 1;
L_002F6030:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6038u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002F6038u) [[unlikely]] return; }
L_002F6038:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC80000u);
    set32(c.r[18], c.r[29].w[0] + 116u);
    st32((c.r[29].w[0] + 112u), 0u);
    c.r[2].d[0] = c.r[2].d[0] | 62915ull;
    set32(c.r[19], c.r[29].w[0] + 120u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 112u);
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6060u); st32((c.r[19].w[0]), 0u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002F6060u) [[unlikely]] return; }
L_002F6060:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6068u); set32(c.r[4], c.r[16].w[0] + 2624u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002F6068u) [[unlikely]] return; }
L_002F6068:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    st32((c.r[29].w[0] + 112u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF330000u);
    c.r[2].d[0] = c.r[2].d[0] | 13107ull;
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[20].w[0] + 32u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6094u); st32((c.r[19].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002F6094u) [[unlikely]] return; }
L_002F6094:
    c.f[5] = ld32((c.r[17].w[0]));
    c.f[4] = ld32((c.r[20].w[0] + 32u));
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = ld32((c.r[20].w[0] + 40u));
    c.f[3] = ld32((c.r[17].w[0] + 4u));
    c.f[2] = ld32((c.r[20].w[0] + 36u));
    c.f[4] = fp::sub(c.f[5], c.f[4]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[4], c.f[4]);
    c.f[20] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F60C4u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002F60C4u) [[unlikely]] return; }
L_002F60C4:
    c.facc = fp::mul(c.f[20], c.f[20]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F60D0u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002F60D0u) [[unlikely]] return; }
L_002F60D0:
    st32((c.r[17].w[0] + 16u), c.f[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 369u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F6120; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[2], c.r[2].w[0] - 3616u);
    set32(c.r[5], c.r[20].w[0] + 32u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    mmi::paddub(c.r[6], c.r[17], c.r[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6118u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000C(c, 447u, depth + 1u); else { c.pc = 0x00133AA0u; return; } if (c.pc != 0x002F6118u) [[unlikely]] return; }
L_002F6118:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (t) { goto L_002F6158; } }
L_002F6120:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[2], c.r[2].w[0] - 3616u);
    set32(c.r[5], c.r[20].w[0] + 32u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[7], 0u + 1u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6154u); mmi::paddub(c.r[6], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000C(c, 447u, depth + 1u); else { c.pc = 0x00133AA0u; return; } if (c.pc != 0x002F6154u) [[unlikely]] return; }
L_002F6154:
    mmi::paddub(c.r[4], c.r[20], c.r[0]);
    c.budget -= 1;
L_002F6158:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6160u);  if (depth < kMaxDepth) unit_007D(c, 211u, depth + 1u); else { c.pc = 0x002F6250u; return; } if (c.pc != 0x002F6160u) [[unlikely]] return; }
L_002F6160:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6168u); mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_007D(c, 219u, depth + 1u); else { c.pc = 0x002F65E0u; return; } if (c.pc != 0x002F6168u) [[unlikely]] return; }
L_002F6168:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6170u); mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_007D(c, 231u, depth + 1u); else { c.pc = 0x002F66A0u; return; } if (c.pc != 0x002F6170u) [[unlikely]] return; }
L_002F6170:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 748u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002F61A0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 760u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002F61A0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1260u)));
    c.r[3].d[0] = c.r[3].d[0] & 1024ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F61A0; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[20].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002F61A0:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002F61A4:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002F61D0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_002F61E0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_002F61F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 24u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[3], 0u + 26064u);
    set32(c.r[2], c.r[2].w[0] + 27600u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    set32(c.r[5], c.r[4].w[0] + 192u);
    set32(c.r[6], 0u + 64u);
    mmi::mult(c, 0, c.r[7].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6228u); set32(c.r[4], c.r[2].w[0] + 20928u);  if (depth < kMaxDepth) unit_0005(c, 230u, depth + 1u); else { c.pc = 0x00116C60u; return; } if (c.pc != 0x002F6228u) [[unlikely]] return; }
L_002F6228:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6234u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_001B(c, 111u, depth + 1u); else { c.pc = 0x0016E040u; return; } if (c.pc != 0x002F6234u) [[unlikely]] return; }
L_002F6234:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002F6250:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[0] = ld32((c.r[4].w[0] + 336u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[2].w[0];
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    set32(c.r[17], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[16], c.r[18].w[0] + 320u);
    fpu_div(c, 12u, c.f[0], c.f[1]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6290u);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002F6290u) [[unlikely]] return; }
L_002F6290:
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    c.r[6].d[0] = c.r[2].d[0] << 48;
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull; c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);  if (t) { goto L_002F630C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 20u)));
    c.r[1].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (t) { goto L_002F650C; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[3], c.r[2].w[0] - 3616u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 20u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[2], c.r[2].w[0] - 5616u);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[5].w[0] << 6);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[5].w[0] << 4);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6304u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000C(c, 444u, depth + 1u); else { c.pc = 0x00133A20u; return; } if (c.pc != 0x002F6304u) [[unlikely]] return; }
L_002F6304:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F6508; } }
L_002F630C:
    set32(c.r[3], c.r[4].w[0] - 3u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u + 5u);  if (t) { goto L_002F6398; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 20u)));
    c.r[1].d[0] = c.r[4].sd[0] < 26ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002F6508; } }
    c.r[3].d[0] = c.r[6].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002F6508; } }
    st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[3], c.r[2].w[0] - 3616u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 20u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[2], c.r[2].w[0] - 5616u);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[5].w[0] << 6);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[5].w[0] << 4);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F638Cu); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000C(c, 444u, depth + 1u); else { c.pc = 0x00133A20u; return; } if (c.pc != 0x002F638Cu) [[unlikely]] return; }
L_002F638C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F6508; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 1;
L_002F6398:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], c.r[4].w[0] - 1u);  if (t) { goto L_002F6424; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 20u)));
    c.r[1].d[0] = c.r[5].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002F6508; } }
    c.r[4].d[0] = c.r[6].d[0] << 48;
    set32(c.r[3], c.r[5].w[0] - 5u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002F6508; } }
    set32(c.r[2], c.r[5].w[0] - 1u);
    st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[3], c.r[2].w[0] - 3616u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 20u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[2], c.r[2].w[0] - 5616u);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[5].w[0] << 6);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[5].w[0] << 4);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6418u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000C(c, 444u, depth + 1u); else { c.pc = 0x00133A20u; return; } if (c.pc != 0x002F6418u) [[unlikely]] return; }
L_002F6418:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F6508; } }
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.budget -= 1;
L_002F6424:
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002F6508; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 20u)));
    c.r[1].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002F6508; } }
    c.r[4].d[0] = c.r[6].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;  if (t) { goto L_002F64B0; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[3], c.r[2].w[0] - 3616u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 20u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[2], c.r[2].w[0] - 5616u);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[5].w[0] << 6);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[5].w[0] << 4);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F64A4u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000C(c, 444u, depth + 1u); else { c.pc = 0x00133A20u; return; } if (c.pc != 0x002F64A4u) [[unlikely]] return; }
L_002F64A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F6508; } }
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 1;
L_002F64B0:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002F6508; } }
    set32(c.r[2], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[3], c.r[2].w[0] - 3616u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 20u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[2], c.r[2].w[0] - 5616u);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[5].w[0] << 6);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[5].w[0] << 4);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6508u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000C(c, 444u, depth + 1u); else { c.pc = 0x00133A20u; return; } if (c.pc != 0x002F6508u) [[unlikely]] return; }
L_002F6508:
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 1;
L_002F650C:
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[9], c.r[6].w[0] - 5616u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[3], c.r[3].w[0] - 5616u);
    set32(c.r[7], c.r[6].w[0] - 5616u);
    c.budget -= 7;
L_002F6528:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 20u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] != 0ull) { set32(c.r[4], c.r[4].w[0] + 1u);  goto L_002F65B4; }
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    c.f[0] = ld32((c.r[16].w[0]));
    set32(c.r[6], c.r[8].w[0] << 2);
    set32(c.r[8], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[8].w[0] << 2);
    set32(c.r[6], c.r[8].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[6], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[5].w[0] + c.r[6].w[0]);
    st32((c.r[6].w[0]), c.f[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    set32(c.r[6], c.r[8].w[0] << 2);
    set32(c.r[8], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[8].w[0] << 2);
    set32(c.r[6], c.r[8].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[6], c.r[9].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[5].w[0] + c.r[6].w[0]);
    st32((c.r[6].w[0] + 4u), c.f[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    set32(c.r[6], c.r[8].w[0] << 2);
    set32(c.r[8], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[8].w[0] << 2);
    set32(c.r[6], c.r[8].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[6], c.r[7].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[5].w[0] + c.r[6].w[0]);
    st32((c.r[6].w[0] + 8u), c.f[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 31;
L_002F65B4:
    c.r[6].d[0] = c.r[4].sd[0] < 25ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F6528u | kUnwind; return; } goto L_002F6528; } }
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002F65E0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[5], c.r[16].w[0] + 320u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6600u); set32(c.r[6], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002F6600u) [[unlikely]] return; }
L_002F6600:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6608u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 29u, depth + 1u); else { c.pc = 0x0013CBB0u; return; } if (c.pc != 0x002F6608u) [[unlikely]] return; }
L_002F6608:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F6650; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6630u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x002F6630u) [[unlikely]] return; }
L_002F6630:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6638u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002F6638u) [[unlikely]] return; }
L_002F6638:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[4], c.r[2].w[0] - 7184u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6648u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 15u, depth + 1u); else { c.pc = 0x0013C690u; return; } if (c.pc != 0x002F6648u) [[unlikely]] return; }
L_002F6648:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 48u);  if (t) { goto L_002F665C; } }
L_002F6650:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6658u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002F6658u) [[unlikely]] return; }
L_002F6658:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 1;
L_002F665C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6664u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002F6664u) [[unlikely]] return; }
L_002F6664:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F666Cu);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002F666Cu) [[unlikely]] return; }
L_002F666C:
    c.f[13] = ld32((c.r[16].w[0] + 36u));
    c.f[14] = ld32((c.r[16].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F667Cu); c.f[12] = ld32((c.r[16].w[0] + 32u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002F667Cu) [[unlikely]] return; }
L_002F667C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6684u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000E(c, 331u, depth + 1u); else { c.pc = 0x0013BF80u; return; } if (c.pc != 0x002F6684u) [[unlikely]] return; }
L_002F6684:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F668Cu); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002F668Cu) [[unlikely]] return; }
L_002F668C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002F66A0:
    set32(c.r[29], c.r[29].w[0] - 368u);
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
    set32(c.r[19], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 28448u);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    mmi::paddub(c.r[20], c.r[0], c.r[0]);
    mmi::paddub(c.r[21], c.r[0], c.r[0]);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    c.budget -= 25;
L_002F6704:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] - 5616u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[3], c.r[2].w[0] - 5616u);
    set32(c.r[23], c.r[29].w[0] + 180u);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    set32(c.r[22], c.r[29].w[0] + 184u);
    set32(c.r[4], c.r[16].w[0] + 192u);
    st32((c.r[29].w[0] + 176u), c.f[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[2], c.r[2].w[0] - 5616u);
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    st32((c.r[23].w[0]), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8384u)));
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    c.budget -= 40;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F67A4u); st32((c.r[22].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002F67A4u) [[unlikely]] return; }
L_002F67A4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[2].d[0] = c.r[2].d[0] | 244ull;
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F67B8u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 211u, depth + 1u); else { c.pc = 0x00102548u; return; } if (c.pc != 0x002F67B8u) [[unlikely]] return; }
L_002F67B8:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F67C4u); set32(c.r[5], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002F67C4u) [[unlikely]] return; }
L_002F67C4:
    c.r[1].d[0] = c.r[17].sd[0] < 24ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002F68A0; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[3], c.r[2].w[0] - 5616u);
    set32(c.r[2], c.r[17].w[0] + 1u);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[3].w[0] + c.r[20].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F680Cu); set32(c.r[4], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002F680Cu) [[unlikely]] return; }
L_002F680C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6814u); set32(c.r[4], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_000F(c, 29u, depth + 1u); else { c.pc = 0x0013CBB0u; return; } if (c.pc != 0x002F6814u) [[unlikely]] return; }
L_002F6814:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F685C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F683Cu); set32(c.r[4], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x002F683Cu) [[unlikely]] return; }
L_002F683C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6844u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002F6844u) [[unlikely]] return; }
L_002F6844:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[4], c.r[2].w[0] - 7184u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6854u); set32(c.r[5], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_000F(c, 15u, depth + 1u); else { c.pc = 0x0013C690u; return; } if (c.pc != 0x002F6854u) [[unlikely]] return; }
L_002F6854:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 240u);  if (t) { goto L_002F686C; } }
L_002F685C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6864u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002F6864u) [[unlikely]] return; }
L_002F6864:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 2;
L_002F686C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6874u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002F6874u) [[unlikely]] return; }
L_002F6874:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F687Cu);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002F687Cu) [[unlikely]] return; }
L_002F687C:
    c.f[13] = ld32((c.r[16].w[0] + 36u));
    c.f[14] = ld32((c.r[16].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F688Cu); c.f[12] = ld32((c.r[16].w[0] + 32u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002F688Cu) [[unlikely]] return; }
L_002F688C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6894u); set32(c.r[4], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_000E(c, 331u, depth + 1u); else { c.pc = 0x0013BF80u; return; } if (c.pc != 0x002F6894u) [[unlikely]] return; }
L_002F6894:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F689Cu); set32(c.r[4], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002F689Cu) [[unlikely]] return; }
L_002F689C:
    c.budget -= 1;
L_002F68A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F68A8u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002F68A8u) [[unlikely]] return; }
L_002F68A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F68B0u); set32(c.r[4], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_000E(c, 330u, depth + 1u); else { c.pc = 0x0013BF40u; return; } if (c.pc != 0x002F68B0u) [[unlikely]] return; }
L_002F68B0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F68C0u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 210u, depth + 1u); else { c.pc = 0x00102500u; return; } if (c.pc != 0x002F68C0u) [[unlikely]] return; }
L_002F68C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[3], c.r[2].w[0] - 5616u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8384u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[5], c.r[2].w[0] + 16u);
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F68F8u); set32(c.r[6], c.r[20].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002F68F8u) [[unlikely]] return; }
L_002F68F8:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6904u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x002F6904u) [[unlikely]] return; }
L_002F6904:
    set32(c.r[30], c.r[29].w[0] + 200u);
    c.f[13] = ld32((c.r[30].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6914u); c.f[12] = ld32((c.r[29].w[0] + 192u));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x002F6914u) [[unlikely]] return; }
L_002F6914:
    c.r[3].d[0] = 0ull | 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6920u); c.r[18].d[0] = c.r[2].d[0] & c.r[3].d[0];  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002F6920u) [[unlikely]] return; }
L_002F6920:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6928u); set32(c.r[4], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_000E(c, 330u, depth + 1u); else { c.pc = 0x0013BF40u; return; } if (c.pc != 0x002F6928u) [[unlikely]] return; }
L_002F6928:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6930u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002F6930u) [[unlikely]] return; }
L_002F6930:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBE440000u);
    c.r[2].d[0] = c.r[2].d[0] | 39846ull;
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    st32((c.r[23].w[0]), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E440000u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    st32((c.r[22].w[0]), 0u);
    c.r[2].d[0] = c.r[2].d[0] | 39846ull;
    set32(c.r[18], c.r[29].w[0] + 196u);
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    st32((c.r[18].w[0]), 0u);
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6968u); st32((c.r[30].w[0]), 0u);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x002F6968u) [[unlikely]] return; }
L_002F6968:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6974u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x002F6974u) [[unlikely]] return; }
L_002F6974:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[4], c.r[2].w[0] - 11744u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[3], c.r[2].w[0] - 12256u);
    c.f[1] = ld32((c.r[29].w[0] + 208u));
    c.f[0] = ld32((c.r[29].w[0] + 176u));
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[6], c.r[2].w[0] - 12768u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[5], c.r[2].w[0] - 13280u);
    c.f[2] = ld32((c.r[29].w[0] + 212u));
    c.f[0] = ld32((c.r[23].w[0]));
    set32(c.r[20], c.r[20].w[0] + 16u);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.f[0] = fp::add(c.f[2], c.f[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[4], c.r[2].w[0] - 13792u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[3], c.r[2].w[0] - 14304u);
    c.f[3] = ld32((c.r[29].w[0] + 216u));
    c.f[0] = ld32((c.r[22].w[0]));
    set32(c.r[2], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[7].w[0] << 2);
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    c.f[0] = fp::add(c.f[3], c.f[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.f[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8384u)));
    c.f[0] = ld32((c.r[29].w[0] + 192u));
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[2].w[0] + c.r[6].w[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.f[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8384u)));
    c.f[0] = ld32((c.r[18].w[0]));
    c.r[2].d[0] = c.r[17].sd[0] < 25ll ? 1ull : 0ull;
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[5].w[0] + c.r[6].w[0]);
    c.f[0] = fp::add(c.f[2], c.f[0]);
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[21].w[0] + c.r[4].w[0]);
    st32((c.r[4].w[0]), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8384u)));
    c.f[0] = ld32((c.r[30].w[0]));
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    c.f[0] = fp::add(c.f[3], c.f[0]);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    set32(c.r[21], c.r[21].w[0] + 4u);
    c.budget -= 86;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0]), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F6704u | kUnwind; return; } goto L_002F6704; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6AD4u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002F6AD4u) [[unlikely]] return; }
L_002F6AD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6ADCu); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 330u, depth + 1u); else { c.pc = 0x0013BF40u; return; } if (c.pc != 0x002F6ADCu) [[unlikely]] return; }
L_002F6ADC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6AECu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 210u, depth + 1u); else { c.pc = 0x00102500u; return; } if (c.pc != 0x002F6AECu) [[unlikely]] return; }
L_002F6AEC:
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[6], c.r[16].w[0] + 32u);
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6B00u); set32(c.r[5], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002F6B00u) [[unlikely]] return; }
L_002F6B00:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6B0Cu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x002F6B0Cu) [[unlikely]] return; }
L_002F6B0C:
    c.f[13] = ld32((c.r[30].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6B18u); c.f[12] = ld32((c.r[29].w[0] + 192u));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x002F6B18u) [[unlikely]] return; }
L_002F6B18:
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBE440000u);
    c.r[2].d[0] = c.r[2].d[0] | 39846ull;
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    st32((c.r[23].w[0]), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E440000u);
    st32((c.r[22].w[0]), 0u);
    c.r[2].d[0] = c.r[2].d[0] | 39846ull;
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    st32((c.r[18].w[0]), 0u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6B48u); st32((c.r[30].w[0]), 0u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002F6B48u) [[unlikely]] return; }
L_002F6B48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6B50u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002F6B50u) [[unlikely]] return; }
L_002F6B50:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6B5Cu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x002F6B5Cu) [[unlikely]] return; }
L_002F6B5C:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6B68u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x002F6B68u) [[unlikely]] return; }
L_002F6B68:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[4], c.r[2].w[0] - 14336u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[3], c.r[2].w[0] - 14368u);
    c.f[0] = ld32((c.r[29].w[0] + 176u));
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[4], c.r[2].w[0] - 14400u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[7], c.r[2].w[0] - 14432u);
    c.f[0] = ld32((c.r[23].w[0]));
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[6], c.r[2].w[0] - 14464u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[3], c.r[2].w[0] - 14496u);
    c.f[0] = ld32((c.r[22].w[0]));
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.f[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8384u)));
    c.f[0] = ld32((c.r[29].w[0] + 192u));
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    st32((c.r[7].w[0]), c.f[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8384u)));
    c.f[0] = ld32((c.r[18].w[0]));
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    st32((c.r[6].w[0]), c.f[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8384u)));
    c.f[0] = ld32((c.r[30].w[0]));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[3].w[0]), c.f[0]);
    st32((c.r[29].w[0] + 176u), 0u);
    st32((c.r[23].w[0]), 0u);
    c.budget -= 49;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6C2Cu); st32((c.r[22].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x002F6C2Cu) [[unlikely]] return; }
L_002F6C2C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[5], c.r[3].w[0] - 5648u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8384u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[3].w[0] - 5680u);
    c.f[0] = ld32((c.r[29].w[0] + 176u));
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8384u)));
    c.f[0] = ld32((c.r[23].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[3], c.r[3].w[0] - 5712u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[4].w[0]), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8384u)));
    c.f[0] = ld32((c.r[22].w[0]));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.f[0]);
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
    c.budget -= 33;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 368u);  c.pc = t; return; }
L_002F6CB0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6CD8u); mmi::paddub(c.r[17], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_007D(c, 183u, depth + 1u); else { c.pc = 0x002F5C00u; return; } if (c.pc != 0x002F6CD8u) [[unlikely]] return; }
L_002F6CD8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[2], c.r[0]);  if (t) { goto L_002F6DB0; } }
    set32(c.r[4], 0u + 1u);
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6CF0u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x002F6CF0u) [[unlikely]] return; }
L_002F6CF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[17], c.r[2], c.r[0]);  if (t) { goto L_002F6DB0; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    set32(c.r[4], 0u + 17u);
    set32(c.r[3], 0u + 21u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(c.r[18].w[0]));
    set32(c.r[2], c.r[2].w[0] + 28112u);
    st32((c.r[17].w[0] + 24u), c.r[19].w[0]);
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00300000u);
    set32(c.r[2], c.r[2].w[0] - 32448u);
    st32((c.r[17].w[0] + 168u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 28u), c.r[16].w[0]);
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6D48u); st32((c.r[16].w[0] + 28u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_0081(c, 114u, depth + 1u); else { c.pc = 0x00305C00u; return; } if (c.pc != 0x002F6D48u) [[unlikely]] return; }
L_002F6D48:
    c.r[2].d[0] = c.r[18].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F6D74; } }
    set32(c.r[5], ld32((c.r[19].w[0] + 176u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], 0u + 5u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6D6Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0016(c, 134u, depth + 1u); else { c.pc = 0x0015B550u; return; } if (c.pc != 0x002F6D6Cu) [[unlikely]] return; }
L_002F6D6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[17], c.r[0]);  if (t) { goto L_002F6DB4; } }
L_002F6D74:
    set32(c.r[5], ld32((c.r[19].w[0] + 176u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], 0u + 6u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6D88u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0016(c, 134u, depth + 1u); else { c.pc = 0x0015B550u; return; } if (c.pc != 0x002F6D88u) [[unlikely]] return; }
L_002F6D88:
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    set32(c.r[2], c.r[16].w[0] + 119u);
    c.budget -= 2;
L_002F6D90:
    c.r[5].d[0] = c.r[2].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6DA0u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0049(c, 74u, depth + 1u); else { c.pc = 0x00224FD0u; return; } if (c.pc != 0x002F6DA0u) [[unlikely]] return; }
L_002F6DA0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] + 119u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F6D90u | kUnwind; return; } goto L_002F6D90; } }
L_002F6DB0:
    mmi::paddub(c.r[2], c.r[17], c.r[0]);
    c.budget -= 1;
L_002F6DB4:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002F6DD0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] - 7152u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002F4000u < 16384u) { entry = entries_007D[(t - 0x002F4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002F6DF0:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[5], 0u + 33u);
    set32(c.r[3], 0u + 96u);
    set32(c.r[2], 0u + 4u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[4].w[0] + 576u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 579u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 275u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[4].w[0] + 277u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 80u), 0u);
    st32((c.r[4].w[0] + 84u), 0u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 88u), 0u);
    st8((c.r[4].w[0] + 532u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 17;
    { st8((c.r[4].w[0] + 420u), static_cast<std::uint8_t>(0u));  goto L_002F6E40; }
L_002F6E40:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 24u)));
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    set32(c.r[5], c.r[18].w[0] + 320u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 514u)));
    c.budget -= 11;
    { const bool t = c.r[3].sd[0] > 0; set32(c.r[17], c.r[16].w[0] + 320u);  if (t) { goto L_002F6E98; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 742u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F6E98; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6E90u); st8((c.r[18].w[0] + 532u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0081(c, 9u, depth + 1u); else { c.pc = 0x00304280u; return; } if (c.pc != 0x002F6E90u) [[unlikely]] return; }
L_002F6E90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);  if (t) { goto L_002F6FF4; } }
L_002F6E98:
    c.f[3] = ld32((c.r[18].w[0] + 32u));
    c.f[2] = ld32((c.r[18].w[0] + 36u));
    c.f[1] = ld32((c.r[18].w[0] + 40u));
    c.f[0] = ld32((c.r[18].w[0] + 44u));
    st32((c.r[18].w[0] + 128u), c.f[3]);
    st32((c.r[18].w[0] + 132u), c.f[2]);
    st32((c.r[18].w[0] + 136u), c.f[1]);
    st32((c.r[18].w[0] + 140u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002F6EEC; } }
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 20u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    st8((c.r[18].w[0] + 274u), static_cast<std::uint8_t>(0u));
    st8((c.r[18].w[0] + 532u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6EE4u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 9u, depth + 1u); else { c.pc = 0x00304280u; return; } if (c.pc != 0x002F6EE4u) [[unlikely]] return; }
L_002F6EE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F6FF0; } }
L_002F6EEC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002F6FA0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], c.r[4].w[0] + 26944u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x002F4000u < 16384u) { entry = entries_007D[(t - 0x002F4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002F6F18:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    mmi::paddub(c.r[6], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6F28u); mmi::paddub(c.r[7], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_007D(c, 297u, depth + 1u); else { c.pc = 0x002F7030u; return; } if (c.pc != 0x002F6F28u) [[unlikely]] return; }
L_002F6F28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 748u)));  if (t) { goto L_002F6FA4; } }
L_002F6F30:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    mmi::paddub(c.r[6], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6F40u); mmi::paddub(c.r[7], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_007D(c, 303u, depth + 1u); else { c.pc = 0x002F7130u; return; } if (c.pc != 0x002F6F40u) [[unlikely]] return; }
L_002F6F40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F6FA0; } }
L_002F6F48:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    mmi::paddub(c.r[6], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6F58u); mmi::paddub(c.r[7], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_007D(c, 308u, depth + 1u); else { c.pc = 0x002F7400u; return; } if (c.pc != 0x002F6F58u) [[unlikely]] return; }
L_002F6F58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F6FA0; } }
L_002F6F60:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    mmi::paddub(c.r[6], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6F70u); mmi::paddub(c.r[7], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_007D(c, 311u, depth + 1u); else { c.pc = 0x002F7590u; return; } if (c.pc != 0x002F6F70u) [[unlikely]] return; }
L_002F6F70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F6FA0; } }
L_002F6F78:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    mmi::paddub(c.r[6], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6F88u); mmi::paddub(c.r[7], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_007D(c, 324u, depth + 1u); else { c.pc = 0x002F7810u; return; } if (c.pc != 0x002F6F88u) [[unlikely]] return; }
L_002F6F88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F6FA0; } }
L_002F6F90:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    mmi::paddub(c.r[6], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6FA0u); mmi::paddub(c.r[7], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_007D(c, 336u, depth + 1u); else { c.pc = 0x002F7A60u; return; } if (c.pc != 0x002F6FA0u) [[unlikely]] return; }
L_002F6FA0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 748u)));
    c.budget -= 1;
L_002F6FA4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002F6FD4; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 760u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002F6FD4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1260u)));
    c.r[3].d[0] = c.r[3].d[0] & 1024ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F6FF0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002F6FF0; } }
L_002F6FD4:
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 20u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    st8((c.r[18].w[0] + 274u), static_cast<std::uint8_t>(0u));
    st8((c.r[18].w[0] + 532u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6FF0u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 9u, depth + 1u); else { c.pc = 0x00304280u; return; } if (c.pc != 0x002F6FF0u) [[unlikely]] return; }
L_002F6FF0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002F6FF4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002F7010:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_002F7020:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_002F7030:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[4].w[0] + 532u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 20u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[16], c.r[6], c.r[0]);  if (t) { goto L_002F70A0; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    c.r[4].d[0] = 0ull | 57344ull;
    set32(c.r[3], 0u - 3584u);
    set32(c.r[2], 0u + 2u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], ld32((c.r[16].w[0] + 84u)));
    st32((c.r[17].w[0] + 84u), c.r[6].w[0]);
    st32((c.r[17].w[0] + 80u), c.r[4].w[0]);
    st32((c.r[17].w[0] + 88u), 0u);
    st32((c.r[5].w[0] + 4u), 0u);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    st32((c.r[5].w[0] + 96u), 0u);
    st8((c.r[5].w[0] + 100u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 575u), static_cast<std::uint8_t>(0u));
    c.budget -= 18;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002F70C0; } }
L_002F70A0:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F70BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F70B4u);  if (depth < kMaxDepth) unit_007D(c, 344u, depth + 1u); else { c.pc = 0x002F7C80u; return; } if (c.pc != 0x002F70B4u) [[unlikely]] return; }
L_002F70B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[16].w[0] + 2624u);  if (t) { goto L_002F70C4; } }
L_002F70BC:
    st8((c.r[7].w[0] + 20u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_002F70C0:
    set32(c.r[4], c.r[16].w[0] + 2624u);
    c.budget -= 1;
L_002F70C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F70CCu);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002F70CCu) [[unlikely]] return; }
L_002F70CC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF330000u);
    c.r[2].d[0] = c.r[2].d[0] | 13107ull;
    c.f[13] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[14] = c.r[2].w[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F70F4u);  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002F70F4u) [[unlikely]] return; }
L_002F70F4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBFC80000u);
    c.f[12] = 0u;
    c.r[2].d[0] = c.r[2].d[0] | 62915ull;
    c.f[13] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F710Cu); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002F710Cu) [[unlikely]] return; }
L_002F710C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7114u); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002F7114u) [[unlikely]] return; }
L_002F7114:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002F7130:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 100u)));
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    mmi::paddub(c.r[17], c.r[6], c.r[0]);
    mmi::paddub(c.r[16], c.r[7], c.r[0]);
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[18], c.r[5], c.r[0]);  if (t) { goto L_002F71D4; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 88u)));
    c.r[4].d[0] = 0ull | 65535ull;
    st32((c.r[18].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[18].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 96u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    st32((c.r[18].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    st32((c.r[19].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[19].w[0] + 88u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[19].w[0] + 88u));
    st32((c.r[19].w[0] + 88u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[19].w[0] + 532u));
    c.budget -= 21;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (t) { goto L_002F71D8; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 88u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002F71D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F71D0u);  if (depth < kMaxDepth) unit_0081(c, 113u, depth + 1u); else { c.pc = 0x00305BD0u; return; } if (c.pc != 0x002F71D0u) [[unlikely]] return; }
L_002F71D0:
    st16((c.r[17].w[0] + 572u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_002F71D4:
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 1;
L_002F71D8:
    mmi::paddub(c.r[5], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F71E4u); mmi::paddub(c.r[6], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_007D(c, 363u, depth + 1u); else { c.pc = 0x002F7F80u; return; } if (c.pc != 0x002F71E4u) [[unlikely]] return; }
L_002F71E4:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 6u)));
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_002F735C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_002F727C; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002F7210; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 100u)));  if (t) { goto L_002F73B8; } }
L_002F7210:
    c.f[1] = ld32((c.r[18].w[0] + 4u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.f[0] = c.r[4].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);  if (t) { goto L_002F7268; } }
    set32(c.r[3], c.r[6].w[0] + 1u);
    st8((c.r[19].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[18].w[0] + 4u), c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[19].w[0] + 532u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F73B4; } }
    set32(c.r[6], 0u + 6u);
    st8((c.r[19].w[0] + 532u), static_cast<std::uint8_t>(0u));
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F725Cu); st8((c.r[19].w[0] + 575u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0081(c, 12u, depth + 1u); else { c.pc = 0x00304300u; return; } if (c.pc != 0x002F725Cu) [[unlikely]] return; }
L_002F725C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F73B4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.budget -= 1;
L_002F7268:
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4u), c.f[0]);  if (t) { goto L_002F73B4; } }
L_002F727C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_002F72A4; } }
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002F72A4; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002F7328; } }
L_002F72A4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 6u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[19].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[18].w[0] + 100u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.r[2].d[0] = c.r[3].sd[0] < -1536ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] + 64u);  if (t) { goto L_002F72D4; } }
    set32(c.r[2], 0u - 1536u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[2].w[0]);  if (t) { goto L_002F72D8; } }
    set32(c.r[2], c.r[3].w[0] + 64u);
    c.budget -= 1;
L_002F72D4:
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_002F72D8:
    set32(c.r[3], ld32((c.r[19].w[0] + 88u)));
    c.r[2].d[0] = 0ull | 42326ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002F7310; } }
    c.r[1].d[0] = 0ull | 47787ull;
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002F730C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[19].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[19].w[0] + 6u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_002F730C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002F7310:
    st8((c.r[19].w[0] + 274u), static_cast<std::uint8_t>(0u));
    st8((c.r[19].w[0] + 532u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7320u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 9u, depth + 1u); else { c.pc = 0x00304280u; return; } if (c.pc != 0x002F7320u) [[unlikely]] return; }
L_002F7320:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F73B4; } }
L_002F7328:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 100u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002F73B4; } }
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.r[1].d[0] = c.r[3].sd[0] < -5460ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], c.r[3].w[0] - 256u);  goto L_002F7354; }
    set32(c.r[3], 0u - 5461u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[3].w[0]);  if (t) { goto L_002F73B4; } }
    set32(c.r[3], c.r[3].w[0] - 256u);
    c.budget -= 1;
L_002F7354:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[3].w[0]);  if (t) { goto L_002F73B4; } }
L_002F735C:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.r[3].d[0] = c.r[4].sd[0] < -1536ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[4].w[0] + 64u);  if (t) { goto L_002F737C; } }
    set32(c.r[3], 0u - 1536u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[3].w[0]);  if (t) { goto L_002F7380; } }
    set32(c.r[3], c.r[4].w[0] + 64u);
    c.budget -= 1;
L_002F737C:
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_002F7380:
    set32(c.r[4], ld32((c.r[19].w[0] + 88u)));
    c.r[3].d[0] = 0ull | 42326ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002F73B4; } }
    c.r[1].d[0] = 0ull | 47787ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002F73B4; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[19].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[19].w[0] + 6u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_002F73B4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 100u)));
    c.budget -= 1;
L_002F73B8:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_002F73E0; }
    c.r[3].d[0] = ld8((c.r[19].w[0] + 575u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F73E4; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[19].w[0] + 575u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 100u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002F73E4; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_002F73E0:
    st8((c.r[18].w[0] + 100u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_002F73E4:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002F7400:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 20u)));
    set32(c.r[2], 0u + 4u);
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    mmi::paddub(c.r[17], c.r[6], c.r[0]);
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[16], c.r[7], c.r[0]);  if (t) { goto L_002F7444; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F743Cu);  if (depth < kMaxDepth) unit_007D(c, 344u, depth + 1u); else { c.pc = 0x002F7C80u; return; } if (c.pc != 0x002F743Cu) [[unlikely]] return; }
L_002F743C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);  if (t) { goto L_002F7570; } }
L_002F7444:
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.r[2].d[0] = c.r[3].sd[0] < -1536ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] + 64u);  if (t) { goto L_002F7464; } }
    set32(c.r[2], 0u - 1536u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[2].w[0]);  if (t) { goto L_002F7468; } }
    set32(c.r[2], c.r[3].w[0] + 64u);
    c.budget -= 1;
L_002F7464:
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_002F7468:
    c.f[1] = ld32((c.r[18].w[0] + 4u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_002F7490; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4u), 0u);  if (t) { goto L_002F74A0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_002F7490:
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 4u), c.f[0]);
    c.budget -= 4;
L_002F74A0:
    set32(c.r[3], ld32((c.r[18].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.r[7].d[0] = 0ull | 65535ull;
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    mmi::paddub(c.r[5], c.r[18], c.r[0]);
    mmi::paddub(c.r[6], c.r[17], c.r[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[18].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 96u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[7].d[0];
    st32((c.r[18].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    st32((c.r[19].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[19].w[0] + 88u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[19].w[0] + 88u));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F74F0u); st32((c.r[19].w[0] + 88u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_007D(c, 363u, depth + 1u); else { c.pc = 0x002F7F80u; return; } if (c.pc != 0x002F74F0u) [[unlikely]] return; }
L_002F74F0:
    c.f[0] = ld32((c.r[18].w[0] + 4u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F7534; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 20u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002F752C; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002F7534; } }
L_002F752C:
    st8((c.r[19].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_002F7534:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002F756C; } }
    c.f[1] = ld32((c.r[18].w[0] + 4u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F756C; } }
    st8((c.r[19].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_002F756C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002F7570:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002F7590:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    mmi::paddub(c.r[17], c.r[6], c.r[0]);
    mmi::paddub(c.r[16], c.r[7], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 369u)));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[19], c.r[4], c.r[0]);  if (t) { goto L_002F7754; } }
    c.f[1] = ld32((c.r[19].w[0] + 68u));
    c.f[0] = ld32((c.r[19].w[0] + 52u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F75D8u); st32((c.r[19].w[0] + 52u), c.f[0]);  if (depth < kMaxDepth) unit_007E(c, 33u, depth + 1u); else { c.pc = 0x002F81F0u; return; } if (c.pc != 0x002F75D8u) [[unlikely]] return; }
L_002F75D8:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 575u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F7604; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 20u)));
    set32(c.r[2], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F7604; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[19].w[0] + 32u);  if (t) { goto L_002F7674; } }
L_002F7604:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 5u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[3], 0u + 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBDCC0000u);
    c.r[5].d[0] = c.r[2].d[0] | 52429ull;
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[19].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[19].w[0] + 48u));
    set32(c.r[2], 0u + 1u);
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[19].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 56u));
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[19].w[0] + 56u), c.f[0]);
    st32((c.r[19].w[0] + 52u), 0u);
    st32((c.r[19].w[0] + 68u), c.r[5].w[0]);
    st8((c.r[19].w[0] + 274u), static_cast<std::uint8_t>(0u));
    st8((c.r[18].w[0] + 100u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[18].w[0] + 101u), static_cast<std::uint8_t>(0u));
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7668u); st8((c.r[19].w[0] + 532u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0081(c, 9u, depth + 1u); else { c.pc = 0x00304280u; return; } if (c.pc != 0x002F7668u) [[unlikely]] return; }
L_002F7668:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[5], c.r[18], c.r[0]);  if (t) { goto L_002F773C; } }
    set32(c.r[4], c.r[19].w[0] + 32u);
    c.budget -= 1;
L_002F7674:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F767Cu);  if (depth < kMaxDepth) unit_0045(c, 192u, depth + 1u); else { c.pc = 0x00217510u; return; } if (c.pc != 0x002F767Cu) [[unlikely]] return; }
L_002F767C:
    c.f[1] = ld32((c.r[19].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F7738; } }
    set32(c.r[4], c.r[19].w[0] + 128u);
    set32(c.r[5], c.r[19].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F76A0u); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0046(c, 159u, depth + 1u); else { c.pc = 0x0021B030u; return; } if (c.pc != 0x002F76A0u) [[unlikely]] return; }
L_002F76A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F7738; } }
    set32(c.r[2], c.r[29].w[0] + 80u);
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    st32((c.r[19].w[0] + 32u), c.f[3]);
    st32((c.r[19].w[0] + 36u), c.f[2]);
    st32((c.r[19].w[0] + 40u), c.f[1]);
    st32((c.r[19].w[0] + 44u), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 5u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[4] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBDCC0000u);
    c.r[3].d[0] = c.r[2].d[0] | 52429ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[19].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.f[0] = ld32((c.r[19].w[0] + 48u));
    set32(c.r[2], 0u + 8u);
    fpu_div(c, 0u, c.f[0], c.f[4]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[19].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 56u));
    fpu_div(c, 0u, c.f[0], c.f[4]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[19].w[0] + 56u), c.f[0]);
    st32((c.r[19].w[0] + 52u), 0u);
    st32((c.r[19].w[0] + 68u), c.r[3].w[0]);
    st8((c.r[19].w[0] + 274u), static_cast<std::uint8_t>(0u));
    st8((c.r[18].w[0] + 100u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7728u); st8((c.r[18].w[0] + 101u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0050(c, 273u, depth + 1u); else { c.pc = 0x00241B50u; return; } if (c.pc != 0x002F7728u) [[unlikely]] return; }
L_002F7728:
    set32(c.r[2], 0u + 1u);
    st8((c.r[19].w[0] + 532u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7738u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 9u, depth + 1u); else { c.pc = 0x00304280u; return; } if (c.pc != 0x002F7738u) [[unlikely]] return; }
L_002F7738:
    mmi::paddub(c.r[5], c.r[18], c.r[0]);
    c.budget -= 1;
L_002F773C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7744u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_007E(c, 34u, depth + 1u); else { c.pc = 0x002F8230u; return; } if (c.pc != 0x002F7744u) [[unlikely]] return; }
L_002F7744:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F774Cu); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_007E(c, 44u, depth + 1u); else { c.pc = 0x002F82D0u; return; } if (c.pc != 0x002F774Cu) [[unlikely]] return; }
L_002F774C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);  if (t) { goto L_002F77F8; } }
L_002F7754:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F775Cu);  if (depth < kMaxDepth) unit_007E(c, 33u, depth + 1u); else { c.pc = 0x002F81F0u; return; } if (c.pc != 0x002F775Cu) [[unlikely]] return; }
L_002F775C:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 575u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F7788; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 20u)));
    set32(c.r[2], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F7788; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[5], c.r[18], c.r[0]);  if (t) { goto L_002F77E4; } }
L_002F7788:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 5u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[3], 0u + 8u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[19].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.f[0] = ld32((c.r[19].w[0] + 48u));
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 56u));
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 52u));
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 52u), c.f[0]);
    st8((c.r[19].w[0] + 274u), static_cast<std::uint8_t>(0u));
    st8((c.r[18].w[0] + 100u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[18].w[0] + 101u), static_cast<std::uint8_t>(0u));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F77E0u); st8((c.r[19].w[0] + 532u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0081(c, 9u, depth + 1u); else { c.pc = 0x00304280u; return; } if (c.pc != 0x002F77E0u) [[unlikely]] return; }
L_002F77E0:
    mmi::paddub(c.r[5], c.r[18], c.r[0]);
    c.budget -= 1;
L_002F77E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F77ECu); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_007E(c, 34u, depth + 1u); else { c.pc = 0x002F8230u; return; } if (c.pc != 0x002F77ECu) [[unlikely]] return; }
L_002F77EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F77F4u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_007E(c, 44u, depth + 1u); else { c.pc = 0x002F82D0u; return; } if (c.pc != 0x002F77F4u) [[unlikely]] return; }
L_002F77F4:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002F77F8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002F7810:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    mmi::paddub(c.r[17], c.r[6], c.r[0]);
    mmi::paddub(c.r[16], c.r[7], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 369u)));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[19], c.r[4], c.r[0]);  if (t) { goto L_002F79B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F784Cu);  if (depth < kMaxDepth) unit_007E(c, 58u, depth + 1u); else { c.pc = 0x002F84E0u; return; } if (c.pc != 0x002F784Cu) [[unlikely]] return; }
L_002F784C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[5], c.r[18], c.r[0]);  if (t) { goto L_002F79A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F785Cu); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_007E(c, 33u, depth + 1u); else { c.pc = 0x002F81F0u; return; } if (c.pc != 0x002F785Cu) [[unlikely]] return; }
L_002F785C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7864u); set32(c.r[4], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_0045(c, 192u, depth + 1u); else { c.pc = 0x00217510u; return; } if (c.pc != 0x002F7864u) [[unlikely]] return; }
L_002F7864:
    c.f[3] = ld32((c.r[19].w[0] + 36u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[4] = c.r[2].w[0];
    c.f[1] = fp::sub(c.f[3], c.f[4]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F790C; } }
    c.f[2] = ld32((c.r[19].w[0] + 132u));
    c.f[1] = fp::sub(c.f[0], c.f[1]);
    c.f[2] = fp::sub(c.f[2], c.f[3]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[2]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[19].w[0] + 128u);  if (t) { goto L_002F78BC; } }
    c.f[0] = fp::add(c.f[4], c.f[0]);
    st32((c.r[19].w[0] + 36u), c.f[0]);
    st32((c.r[19].w[0] + 52u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 68u), 0u);  if (t) { goto L_002F78E8; } }
    set32(c.r[4], c.r[19].w[0] + 128u);
    c.budget -= 1;
L_002F78BC:
    set32(c.r[5], c.r[19].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F78C8u); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0046(c, 159u, depth + 1u); else { c.pc = 0x0021B030u; return; } if (c.pc != 0x002F78C8u) [[unlikely]] return; }
L_002F78C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_002F78EC; } }
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    set32(c.r[2], 0u + 1u);
    st32((c.r[19].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 88u));
    st32((c.r[19].w[0] + 40u), c.f[0]);
    st8((c.r[18].w[0] + 101u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
L_002F78E8:
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_002F78EC:
    st8((c.r[18].w[0] + 100u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 101u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F790C; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[18].w[0] + 101u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F790Cu); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0050(c, 273u, depth + 1u); else { c.pc = 0x00241B50u; return; } if (c.pc != 0x002F790Cu) [[unlikely]] return; }
L_002F790C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 20u)));
    set32(c.r[2], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F792C; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F7968; } }
L_002F792C:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 5u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBD4C0000u);
    c.r[3].d[0] = c.r[2].d[0] | 52429ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D990000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40200000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[19].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[18].w[0] + 12u), c.r[4].w[0]);
    st32((c.r[18].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 20u), 0u);
    st32((c.r[18].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 532u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002F799C; } }
L_002F7968:
    c.f[1] = ld32((c.r[19].w[0] + 52u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC0000000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F7990; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_002F799C; } }
L_002F7990:
    c.f[0] = ld32((c.r[19].w[0] + 68u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[19].w[0] + 52u), c.f[0]);
    c.budget -= 3;
L_002F799C:
    mmi::paddub(c.r[5], c.r[18], c.r[0]);
    c.budget -= 1;
L_002F79A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F79A8u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_007E(c, 34u, depth + 1u); else { c.pc = 0x002F8230u; return; } if (c.pc != 0x002F79A8u) [[unlikely]] return; }
L_002F79A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F79B0u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_007E(c, 44u, depth + 1u); else { c.pc = 0x002F82D0u; return; } if (c.pc != 0x002F79B0u) [[unlikely]] return; }
L_002F79B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);  if (t) { goto L_002F7A40; } }
L_002F79B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F79C0u);  if (depth < kMaxDepth) unit_007E(c, 58u, depth + 1u); else { c.pc = 0x002F84E0u; return; } if (c.pc != 0x002F79C0u) [[unlikely]] return; }
L_002F79C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[5], c.r[18], c.r[0]);  if (t) { goto L_002F7A2C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F79D0u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_007E(c, 33u, depth + 1u); else { c.pc = 0x002F81F0u; return; } if (c.pc != 0x002F79D0u) [[unlikely]] return; }
L_002F79D0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 20u)));
    set32(c.r[2], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F79F0; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F7A28; } }
L_002F79F0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 5u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBD4C0000u);
    set32(c.r[4], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40200000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[19].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[19].w[0] + 532u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[18].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 16u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D990000u);
    st32((c.r[18].w[0] + 20u), 0u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    st32((c.r[18].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 14;
L_002F7A28:
    mmi::paddub(c.r[5], c.r[18], c.r[0]);
    c.budget -= 1;
L_002F7A2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7A34u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_007E(c, 34u, depth + 1u); else { c.pc = 0x002F8230u; return; } if (c.pc != 0x002F7A34u) [[unlikely]] return; }
L_002F7A34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7A3Cu); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_007E(c, 44u, depth + 1u); else { c.pc = 0x002F82D0u; return; } if (c.pc != 0x002F7A3Cu) [[unlikely]] return; }
L_002F7A3C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002F7A40:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002F7A60:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[0] = ld32((c.r[6].w[0] + 2672u));
    set32(c.r[2], c.r[29].w[0] + 100u);
    set32(c.r[3], c.r[29].w[0] + 104u);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 2676u));
    mmi::paddub(c.r[16], c.r[7], c.r[0]);
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    mmi::paddub(c.r[17], c.r[6], c.r[0]);
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 2680u));
    st32((c.r[3].w[0]), c.f[0]);
    c.f[5] = ld32((c.r[4].w[0] + 32u));
    c.f[4] = ld32((c.r[29].w[0] + 96u));
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[0] = ld32((c.r[4].w[0] + 40u));
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[4].w[0] + 36u));
    c.f[4] = fp::sub(c.f[4], c.f[5]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[4], c.f[4]);
    c.f[20] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7ADCu); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002F7ADCu) [[unlikely]] return; }
L_002F7ADC:
    c.facc = fp::mul(c.f[20], c.f[20]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7AE8u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002F7AE8u) [[unlikely]] return; }
L_002F7AE8:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.f[20] = c.f[0];
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7AFCu); set32(c.r[6], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002F7AFCu) [[unlikely]] return; }
L_002F7AFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7B04u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x002F7B04u) [[unlikely]] return; }
L_002F7B04:
    c.f[1] = ld32((c.r[18].w[0] + 16u));
    c.f[0] = ld32((c.r[18].w[0] + 12u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[18].w[0] + 12u), c.f[0]);  if (t) { goto L_002F7B30; } }
    st32((c.r[18].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 16u), 0u);
    c.budget -= 2;
L_002F7B30:
    c.f[1] = ld32((c.r[29].w[0] + 112u));
    c.f[0] = ld32((c.r[18].w[0] + 12u));
    c.f[2] = 0u;
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[19].w[0] + 48u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 116u));
    c.f[0] = ld32((c.r[18].w[0] + 12u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[19].w[0] + 52u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 120u));
    c.f[0] = ld32((c.r[18].w[0] + 12u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[19].w[0] + 56u), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 24u));
    c.f[0] = ld32((c.r[18].w[0] + 20u));
    c.f[1] = fp::add(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[2]));
    c.budget -= 20;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[18].w[0] + 20u), c.f[1]);  if (t) { goto L_002F7BAC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F7BB0; } }
    c.f[0] = ld32((c.r[18].w[0] + 24u));
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 24u), c.f[0]);  if (t) { goto L_002F7BB0; } }
L_002F7BAC:
    st32((c.r[18].w[0] + 20u), 0u);
    c.budget -= 1;
L_002F7BB0:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 369u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);  if (t) { goto L_002F7BD4; } }
    c.f[1] = ld32((c.r[18].w[0] + 20u));
    c.f[0] = ld32((c.r[19].w[0] + 52u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 52u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.budget -= 5;
L_002F7BD4:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (t) { goto L_002F7BF8; } }
    st8((c.r[19].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(0u));
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 3;
L_002F7BF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7C00u);  if (depth < kMaxDepth) unit_007E(c, 33u, depth + 1u); else { c.pc = 0x002F81F0u; return; } if (c.pc != 0x002F7C00u) [[unlikely]] return; }
L_002F7C00:
    c.f[2] = ld32((c.r[17].w[0] + 32u));
    c.f[1] = ld32((c.r[17].w[0] + 128u));
    c.f[0] = ld32((c.r[19].w[0] + 32u));
    mmi::paddub(c.r[5], c.r[18], c.r[0]);
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 32u), c.f[0]);
    c.f[2] = ld32((c.r[17].w[0] + 36u));
    c.f[1] = ld32((c.r[17].w[0] + 132u));
    c.f[0] = ld32((c.r[19].w[0] + 36u));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 36u), c.f[0]);
    c.f[2] = ld32((c.r[17].w[0] + 40u));
    c.f[1] = ld32((c.r[17].w[0] + 136u));
    c.f[0] = ld32((c.r[19].w[0] + 40u));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7C54u); st32((c.r[19].w[0] + 40u), c.f[0]);  if (depth < kMaxDepth) unit_007E(c, 34u, depth + 1u); else { c.pc = 0x002F8230u; return; } if (c.pc != 0x002F7C54u) [[unlikely]] return; }
L_002F7C54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7C5Cu); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_007E(c, 44u, depth + 1u); else { c.pc = 0x002F82D0u; return; } if (c.pc != 0x002F7C5Cu) [[unlikely]] return; }
L_002F7C5C:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002F7C80:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 3u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[6].w[0] + 520u)));
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    st32((c.r[4].w[0] + 520u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 524u)));
    st32((c.r[4].w[0] + 524u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 240u));
    st32((c.r[4].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 244u));
    st32((c.r[4].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 248u));
    st32((c.r[4].w[0] + 40u), c.f[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 369u)));
    c.budget -= 24;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[6], c.r[0]);  if (t) { goto L_002F7E64; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 520u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F7DEC; } }
    c.f[1] = ld32((c.r[2].w[0] + 80u));
    c.f[0] = ld32((c.r[18].w[0] + 32u));
    set32(c.r[19], c.r[29].w[0] + 84u);
    set32(c.r[3], c.r[29].w[0] + 88u);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 80u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 520u)));
    c.f[0] = ld32((c.r[18].w[0] + 36u));
    c.f[1] = ld32((c.r[2].w[0] + 84u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[19].w[0]), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 520u)));
    c.f[0] = ld32((c.r[18].w[0] + 40u));
    c.f[1] = ld32((c.r[2].w[0] + 88u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[3].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 80u));
    c.f[0] = c.f[0];
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7D40u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002F7D40u) [[unlikely]] return; }
L_002F7D40:
    c.f[12] = ld32((c.r[19].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7D4Cu); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x002F7D4Cu) [[unlikely]] return; }
L_002F7D4C:
    c.r[19].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[1].d[0] = c.r[2].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].d[0] = 0ull | 32769ull;  if (t) { goto L_002F7D78; } }
    c.r[1].d[0] = c.r[19].sd[0] < 8193ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002F7D74; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], 0u + 8192u);  if (t) { goto L_002F7D98; } }
L_002F7D74:
    c.r[1].d[0] = 0ull | 32769ull;
    c.budget -= 1;
L_002F7D78:
    c.r[1].d[0] = c.r[19].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002F7D98; } }
    c.r[2].d[0] = 0ull | 57344ull;
    c.r[1].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002F7D98; } }
    mmi::paddub(c.r[19], c.r[2], c.r[0]);
    c.budget -= 1;
L_002F7D98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7DA0u); set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x002F7DA0u) [[unlikely]] return; }
L_002F7DA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 48u), c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7DBCu); set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x002F7DBCu) [[unlikely]] return; }
L_002F7DBC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[1] = c.r[2].w[0];
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7DD4u); st32((c.r[18].w[0] + 56u), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x002F7DD4u) [[unlikely]] return; }
L_002F7DD4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 52u), c.f[0]);  if (t) { goto L_002F7E28; } }
L_002F7DEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7DF4u); set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x002F7DF4u) [[unlikely]] return; }
L_002F7DF4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 48u), c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7E10u); set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x002F7E10u) [[unlikely]] return; }
L_002F7E10:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 56u), c.f[0]);
    st32((c.r[18].w[0] + 52u), 0u);
    c.budget -= 6;
L_002F7E28:
    c.f[2] = ld32((c.r[16].w[0] + 52u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = ld32((c.r[18].w[0] + 52u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBDCC0000u);
    c.r[3].d[0] = c.r[2].d[0] | 52429ull;
    c.f[1] = fp::add(c.f[1], c.f[2]);
    c.r[2].d[0] = 0ull | 49152ull;
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 52u), c.f[0]);
    st32((c.r[18].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    st32((c.r[18].w[0] + 84u), c.r[3].w[0]);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 80u), c.r[2].w[0]);  if (t) { goto L_002F7F38; } }
L_002F7E64:
    set32(c.r[2], ld32((c.r[18].w[0] + 520u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[16].w[0] + 8320u);  if (t) { goto L_002F7E98; } }
    c.f[0] = ld32((c.r[2].w[0] + 80u));
    st32((c.r[29].w[0] + 80u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 520u)));
    c.f[0] = ld32((c.r[2].w[0] + 84u));
    st32((c.r[29].w[0] + 84u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 520u)));
    c.f[0] = ld32((c.r[2].w[0] + 88u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 88u), c.f[0]);  if (t) { goto L_002F7EC0; } }
    set32(c.r[4], c.r[16].w[0] + 8320u);
    c.budget -= 1;
L_002F7E98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7EA0u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002F7EA0u) [[unlikely]] return; }
L_002F7EA0:
    st32((c.r[29].w[0] + 80u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[29].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43480000u);
    st32((c.r[29].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7EC0u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002F7EC0u) [[unlikely]] return; }
L_002F7EC0:
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7ED0u); set32(c.r[6], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002F7ED0u) [[unlikely]] return; }
L_002F7ED0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7ED8u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x002F7ED8u) [[unlikely]] return; }
L_002F7ED8:
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[4], c.r[16].w[0] + 8320u);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 100u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 104u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 56u), c.f[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7F10u); st32((c.r[18].w[0] + 68u), 0u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002F7F10u) [[unlikely]] return; }
L_002F7F10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7F18u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002F7F18u) [[unlikely]] return; }
L_002F7F18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7F20u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002F7F20u) [[unlikely]] return; }
L_002F7F20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7F28u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_000E(c, 330u, depth + 1u); else { c.pc = 0x0013BF40u; return; } if (c.pc != 0x002F7F28u) [[unlikely]] return; }
L_002F7F28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7F30u); c.r[4].d[0] = 0ull | 49152ull;  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002F7F30u) [[unlikely]] return; }
L_002F7F30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7F38u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002F7F38u) [[unlikely]] return; }
L_002F7F38:
    set32(c.r[5], 0u + 2u);
    st8((c.r[18].w[0] + 274u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[17].w[0] + 100u), static_cast<std::uint8_t>(0u));
    st8((c.r[18].w[0] + 532u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], 0u + 5u);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7F58u); st8((c.r[18].w[0] + 575u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0081(c, 12u, depth + 1u); else { c.pc = 0x00304300u; return; } if (c.pc != 0x002F7F58u) [[unlikely]] return; }
L_002F7F58:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002F7F80:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 369u)));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[17], c.r[6], c.r[0]);  if (t) { [[clang::musttail]] return unit_007E(c, 9u, depth); } }
    c.f[21] = ld32((c.r[17].w[0] + 2676u));
    c.f[22] = ld32((c.r[17].w[0] + 2680u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7FC8u); c.f[20] = ld32((c.r[17].w[0] + 2672u));  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002F7FC8u) [[unlikely]] return; }
L_002F7FC8:
    c.f[12] = c.f[20];
    c.f[13] = c.f[21];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7FD8u); c.f[14] = c.f[22];  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002F7FD8u) [[unlikely]] return; }
L_002F7FD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7FE0u); set32(c.r[4], ld32((c.r[17].w[0] + 84u)));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002F7FE0u) [[unlikely]] return; }
L_002F7FE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7FE8u); set32(c.r[4], 0u + 8192u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002F7FE8u) [[unlikely]] return; }
L_002F7FE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7FF0u); set32(c.r[4], ld32((c.r[18].w[0] + 96u)));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002F7FF0u) [[unlikely]] return; }
L_002F7FF0:
    st32((c.r[29].w[0] + 80u), 0u);
    st32((c.r[29].w[0] + 84u), 0u);
    c.f[1] = ld32((c.r[18].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC80000u);
    c.budget -= 4;
    [[clang::musttail]] return unit_007E(c, 1u, depth);
}

}
