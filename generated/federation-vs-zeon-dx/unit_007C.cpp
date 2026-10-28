#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_007C[4096] = {
    1, 2, 0, 3, 4, 0, 0, 5, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 9, 0, 0, 10,
    0, 0, 11, 0, 0, 12, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0,
    0, 15, 0, 0, 16, 0, 0, 17, 0, 0, 18, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 22, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 28,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0,
    33, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 36, 0,
    0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 39,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 41, 0, 42, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 44, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    47, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 50, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0,
    53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 55, 0, 0, 0, 56, 0, 0, 0,
    0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 58, 0, 59, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 66, 0, 67, 0,
    68, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 75, 0, 76, 0, 0,
    0, 77, 0, 78, 0, 0, 0, 0, 0, 0, 79, 0, 80, 0, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0,
    0, 0, 86, 0, 0, 0, 87, 0, 88, 0, 0, 0, 0, 0, 0, 89, 0, 90, 0, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 0, 93,
    0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 97, 0, 98, 0, 99, 0, 0,
    0, 100, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0,
    104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 0, 108, 0, 0, 0,
    0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 112, 0, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 116, 0, 0, 0, 0, 117, 0, 0, 118, 0, 0, 0, 0, 119,
    0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 123, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 0, 127, 0,
    0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 133, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 140, 0, 141, 0, 0, 142, 0, 0, 0, 0, 143, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 145, 0, 0, 0, 0, 146, 0, 0, 0, 147, 0, 0, 0,
    0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0,
    0, 0, 0, 152, 0, 153, 0, 154, 0, 0, 155, 0, 0, 0, 156, 0, 157, 0, 0, 0, 0, 158, 0, 159, 0, 160, 0, 0, 0, 161, 0, 162,
    0, 163, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 167, 0, 0, 0, 0, 0, 0, 0, 168, 0, 169, 0, 170, 0, 0, 171, 0, 0, 0, 0, 172, 0,
    0, 173, 0, 0, 0, 0, 174, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0,
    0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 181, 0, 0, 182, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 184, 0, 0, 0, 0, 0, 185, 0, 186, 0, 187, 0, 0, 0, 0, 0, 188, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0,
    0, 0, 0, 0, 192, 0, 193, 0, 0, 0, 0, 194, 0, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0,
    0, 198, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 202, 0, 203, 0, 0, 0, 204, 0, 0, 205, 0, 0, 0, 0, 206, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 208,
    0, 0, 209, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 213, 0, 214, 0, 215, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0,
    217, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 219, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0,
    0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 224, 0, 225, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 229, 0, 230, 0, 231, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0,
    239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0,
    0, 0, 0, 0, 0, 244, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 248, 0, 249, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254,
    0, 255, 0, 256, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    258, 0, 0, 0, 259, 0, 0, 260, 0, 261, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    264, 0, 265, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 270, 0, 271, 0, 272, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 277, 0, 0, 0, 0, 278, 0, 0, 279, 0, 280, 0, 0, 0, 281, 0, 282, 0, 283, 0, 284, 0, 0, 285, 0, 0, 0, 286,
    0, 0, 287, 0, 288, 0, 0, 0, 0, 289, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 293, 0, 0, 0, 294, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0,
    0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 300, 0, 0, 0, 0, 301, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0,
    0, 0, 303, 0, 304, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0,
    0, 310, 0, 311, 0, 0, 0, 312, 0, 0, 0, 0, 313, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 320, 0, 0,
    0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 325, 0, 326, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 329, 0, 0, 330, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 333, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 338, 0, 0, 0, 339, 0, 0, 0, 0, 340, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 343, 0, 0, 344, 0, 0, 0, 0, 0, 345, 0, 0,
    346, 0, 0, 0, 0, 347, 0, 348, 0, 0, 0, 349, 0, 0, 350, 0, 351, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    356, 0, 0, 0, 357, 0, 0, 0, 358, 0, 0, 0, 0, 0, 359, 0, 360, 0, 361, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 364, 0, 0, 365, 0, 0, 0, 0, 366, 0, 0, 0, 0, 367, 0, 0, 0, 368, 0, 0, 0,
    369, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 374, 0, 0, 0, 375, 0, 0, 376, 0, 0, 0, 0, 377, 0, 0, 0, 0,
    0, 0, 378, 0, 0, 379, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 383, 0, 384, 0, 385, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 388, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 391, 0, 0, 392, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0,
};

void unit_007C(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002F0000;
    case 2u: goto L_002F0004;
    case 3u: goto L_002F000C;
    case 4u: goto L_002F0010;
    case 5u: goto L_002F001C;
    case 6u: goto L_002F0030;
    case 7u: goto L_002F0054;
    case 8u: goto L_002F00E4;
    case 9u: goto L_002F00F0;
    case 10u: goto L_002F00FC;
    case 11u: goto L_002F0108;
    case 12u: goto L_002F0114;
    case 13u: goto L_002F0120;
    case 14u: goto L_002F04F8;
    case 15u: goto L_002F0504;
    case 16u: goto L_002F0510;
    case 17u: goto L_002F051C;
    case 18u: goto L_002F0528;
    case 19u: goto L_002F0534;
    case 20u: goto L_002F0830;
    case 21u: goto L_002F086C;
    case 22u: goto L_002F0910;
    case 23u: goto L_002F0918;
    case 24u: goto L_002F09E8;
    case 25u: goto L_002F0AB0;
    case 26u: goto L_002F0CF0;
    case 27u: goto L_002F0D64;
    case 28u: goto L_002F0D7C;
    case 29u: goto L_002F0DB0;
    case 30u: goto L_002F0DF8;
    case 31u: goto L_002F0EA4;
    case 32u: goto L_002F0EDC;
    case 33u: goto L_002F0F00;
    case 34u: goto L_002F0F20;
    case 35u: goto L_002F0F60;
    case 36u: goto L_002F0F78;
    case 37u: goto L_002F0F90;
    case 38u: goto L_002F0FDC;
    case 39u: goto L_002F0FFC;
    case 40u: goto L_002F1054;
    case 41u: goto L_002F1068;
    case 42u: goto L_002F1070;
    case 43u: goto L_002F10A0;
    case 44u: goto L_002F10B0;
    case 45u: goto L_002F10C0;
    case 46u: goto L_002F10D0;
    case 47u: goto L_002F1100;
    case 48u: goto L_002F1118;
    case 49u: goto L_002F116C;
    case 50u: goto L_002F1178;
    case 51u: goto L_002F11A0;
    case 52u: goto L_002F11F4;
    case 53u: goto L_002F1200;
    case 54u: goto L_002F1258;
    case 55u: goto L_002F1260;
    case 56u: goto L_002F1270;
    case 57u: goto L_002F1288;
    case 58u: goto L_002F12A8;
    case 59u: goto L_002F12B0;
    case 60u: goto L_002F12B8;
    case 61u: goto L_002F1314;
    case 62u: goto L_002F1330;
    case 63u: goto L_002F1358;
    case 64u: goto L_002F13A0;
    case 65u: goto L_002F13E8;
    case 66u: goto L_002F13F0;
    case 67u: goto L_002F13F8;
    case 68u: goto L_002F1400;
    case 69u: goto L_002F1408;
    case 70u: goto L_002F1430;
    case 71u: goto L_002F1448;
    case 72u: goto L_002F145C;
    case 73u: goto L_002F14B0;
    case 74u: goto L_002F14D8;
    case 75u: goto L_002F14EC;
    case 76u: goto L_002F14F4;
    case 77u: goto L_002F1504;
    case 78u: goto L_002F150C;
    case 79u: goto L_002F1528;
    case 80u: goto L_002F1530;
    case 81u: goto L_002F1544;
    case 82u: goto L_002F1554;
    case 83u: goto L_002F1574;
    case 84u: goto L_002F15D0;
    case 85u: goto L_002F15F8;
    case 86u: goto L_002F1608;
    case 87u: goto L_002F1618;
    case 88u: goto L_002F1620;
    case 89u: goto L_002F163C;
    case 90u: goto L_002F1644;
    case 91u: goto L_002F1658;
    case 92u: goto L_002F1668;
    case 93u: goto L_002F167C;
    case 94u: goto L_002F169C;
    case 95u: goto L_002F16C8;
    case 96u: goto L_002F175C;
    case 97u: goto L_002F1764;
    case 98u: goto L_002F176C;
    case 99u: goto L_002F1774;
    case 100u: goto L_002F1784;
    case 101u: goto L_002F178C;
    case 102u: goto L_002F17D0;
    case 103u: goto L_002F17F0;
    case 104u: goto L_002F1800;
    case 105u: goto L_002F1840;
    case 106u: goto L_002F184C;
    case 107u: goto L_002F185C;
    case 108u: goto L_002F1870;
    case 109u: goto L_002F1894;
    case 110u: goto L_002F18C8;
    case 111u: goto L_002F18E0;
    case 112u: goto L_002F1908;
    case 113u: goto L_002F1918;
    case 114u: goto L_002F192C;
    case 115u: goto L_002F193C;
    case 116u: goto L_002F1948;
    case 117u: goto L_002F195C;
    case 118u: goto L_002F1968;
    case 119u: goto L_002F197C;
    case 120u: goto L_002F1988;
    case 121u: goto L_002F19F0;
    case 122u: goto L_002F1A18;
    case 123u: goto L_002F1A28;
    case 124u: goto L_002F1A40;
    case 125u: goto L_002F1A54;
    case 126u: goto L_002F1A64;
    case 127u: goto L_002F1A78;
    case 128u: goto L_002F1A98;
    case 129u: goto L_002F1AC4;
    case 130u: goto L_002F1AD0;
    case 131u: goto L_002F1B30;
    case 132u: goto L_002F1BE0;
    case 133u: goto L_002F1BE8;
    case 134u: goto L_002F1C30;
    case 135u: goto L_002F1C4C;
    case 136u: goto L_002F1C68;
    case 137u: goto L_002F1C90;
    case 138u: goto L_002F1CB0;
    case 139u: goto L_002F1D38;
    case 140u: goto L_002F1D48;
    case 141u: goto L_002F1D50;
    case 142u: goto L_002F1D5C;
    case 143u: goto L_002F1D70;
    case 144u: goto L_002F1DC0;
    case 145u: goto L_002F1DCC;
    case 146u: goto L_002F1DE0;
    case 147u: goto L_002F1DF0;
    case 148u: goto L_002F1E04;
    case 149u: goto L_002F1E2C;
    case 150u: goto L_002F1E40;
    case 151u: goto L_002F1E6C;
    case 152u: goto L_002F1E8C;
    case 153u: goto L_002F1E94;
    case 154u: goto L_002F1E9C;
    case 155u: goto L_002F1EA8;
    case 156u: goto L_002F1EB8;
    case 157u: goto L_002F1EC0;
    case 158u: goto L_002F1ED4;
    case 159u: goto L_002F1EDC;
    case 160u: goto L_002F1EE4;
    case 161u: goto L_002F1EF4;
    case 162u: goto L_002F1EFC;
    case 163u: goto L_002F1F04;
    case 164u: goto L_002F1F10;
    case 165u: goto L_002F1F60;
    case 166u: goto L_002F1FA0;
    case 167u: goto L_002F1FA8;
    case 168u: goto L_002F1FC8;
    case 169u: goto L_002F1FD0;
    case 170u: goto L_002F1FD8;
    case 171u: goto L_002F1FE4;
    case 172u: goto L_002F1FF8;
    case 173u: goto L_002F2004;
    case 174u: goto L_002F2018;
    case 175u: goto L_002F202C;
    case 176u: goto L_002F2068;
    case 177u: goto L_002F2088;
    case 178u: goto L_002F20B4;
    case 179u: goto L_002F2170;
    case 180u: goto L_002F21D4;
    case 181u: goto L_002F21E0;
    case 182u: goto L_002F21EC;
    case 183u: goto L_002F2220;
    case 184u: goto L_002F2230;
    case 185u: goto L_002F2248;
    case 186u: goto L_002F2250;
    case 187u: goto L_002F2258;
    case 188u: goto L_002F2270;
    case 189u: goto L_002F22B4;
    case 190u: goto L_002F22CC;
    case 191u: goto L_002F22F8;
    case 192u: goto L_002F2310;
    case 193u: goto L_002F2318;
    case 194u: goto L_002F232C;
    case 195u: goto L_002F2340;
    case 196u: goto L_002F2350;
    case 197u: goto L_002F2360;
    case 198u: goto L_002F2384;
    case 199u: goto L_002F238C;
    case 200u: goto L_002F23C4;
    case 201u: goto L_002F23E0;
    case 202u: goto L_002F2414;
    case 203u: goto L_002F241C;
    case 204u: goto L_002F242C;
    case 205u: goto L_002F2438;
    case 206u: goto L_002F244C;
    case 207u: goto L_002F2460;
    case 208u: goto L_002F247C;
    case 209u: goto L_002F2488;
    case 210u: goto L_002F249C;
    case 211u: goto L_002F24E8;
    case 212u: goto L_002F2534;
    case 213u: goto L_002F2544;
    case 214u: goto L_002F254C;
    case 215u: goto L_002F2554;
    case 216u: goto L_002F255C;
    case 217u: goto L_002F2580;
    case 218u: goto L_002F25A4;
    case 219u: goto L_002F25B4;
    case 220u: goto L_002F25C0;
    case 221u: goto L_002F2674;
    case 222u: goto L_002F2690;
    case 223u: goto L_002F26B4;
    case 224u: goto L_002F26C4;
    case 225u: goto L_002F26CC;
    case 226u: goto L_002F26D8;
    case 227u: goto L_002F2740;
    case 228u: goto L_002F2754;
    case 229u: goto L_002F2788;
    case 230u: goto L_002F2790;
    case 231u: goto L_002F2798;
    case 232u: goto L_002F27A8;
    case 233u: goto L_002F2800;
    case 234u: goto L_002F2860;
    case 235u: goto L_002F28C0;
    case 236u: goto L_002F290C;
    case 237u: goto L_002F2930;
    case 238u: goto L_002F2968;
    case 239u: goto L_002F2980;
    case 240u: goto L_002F29E8;
    case 241u: goto L_002F2A10;
    case 242u: goto L_002F2A40;
    case 243u: goto L_002F2A70;
    case 244u: goto L_002F2A94;
    case 245u: goto L_002F2AA0;
    case 246u: goto L_002F2B10;
    case 247u: goto L_002F2B34;
    case 248u: goto L_002F2B3C;
    case 249u: goto L_002F2B44;
    case 250u: goto L_002F2B4C;
    case 251u: goto L_002F2B80;
    case 252u: goto L_002F2BB0;
    case 253u: goto L_002F2BD4;
    case 254u: goto L_002F2BFC;
    case 255u: goto L_002F2C04;
    case 256u: goto L_002F2C0C;
    case 257u: goto L_002F2C14;
    case 258u: goto L_002F2C80;
    case 259u: goto L_002F2C90;
    case 260u: goto L_002F2C9C;
    case 261u: goto L_002F2CA4;
    case 262u: goto L_002F2CB0;
    case 263u: goto L_002F2D34;
    case 264u: goto L_002F2D80;
    case 265u: goto L_002F2D88;
    case 266u: goto L_002F2D90;
    case 267u: goto L_002F2DC0;
    case 268u: goto L_002F2E0C;
    case 269u: goto L_002F2E28;
    case 270u: goto L_002F2E84;
    case 271u: goto L_002F2E8C;
    case 272u: goto L_002F2E94;
    case 273u: goto L_002F2E9C;
    case 274u: goto L_002F2ED0;
    case 275u: goto L_002F2F34;
    case 276u: goto L_002F2F58;
    case 277u: goto L_002F2F90;
    case 278u: goto L_002F2FA4;
    case 279u: goto L_002F2FB0;
    case 280u: goto L_002F2FB8;
    case 281u: goto L_002F2FC8;
    case 282u: goto L_002F2FD0;
    case 283u: goto L_002F2FD8;
    case 284u: goto L_002F2FE0;
    case 285u: goto L_002F2FEC;
    case 286u: goto L_002F2FFC;
    case 287u: goto L_002F3008;
    case 288u: goto L_002F3010;
    case 289u: goto L_002F3024;
    case 290u: goto L_002F302C;
    case 291u: goto L_002F3058;
    case 292u: goto L_002F3090;
    case 293u: goto L_002F3108;
    case 294u: goto L_002F3118;
    case 295u: goto L_002F3128;
    case 296u: goto L_002F3144;
    case 297u: goto L_002F3170;
    case 298u: goto L_002F3194;
    case 299u: goto L_002F31D4;
    case 300u: goto L_002F31E0;
    case 301u: goto L_002F31F4;
    case 302u: goto L_002F3278;
    case 303u: goto L_002F3288;
    case 304u: goto L_002F3290;
    case 305u: goto L_002F32A0;
    case 306u: goto L_002F32C0;
    case 307u: goto L_002F32E4;
    case 308u: goto L_002F333C;
    case 309u: goto L_002F3374;
    case 310u: goto L_002F3384;
    case 311u: goto L_002F338C;
    case 312u: goto L_002F339C;
    case 313u: goto L_002F33B0;
    case 314u: goto L_002F33BC;
    case 315u: goto L_002F343C;
    case 316u: goto L_002F3470;
    case 317u: goto L_002F3524;
    case 318u: goto L_002F352C;
    case 319u: goto L_002F3560;
    case 320u: goto L_002F3574;
    case 321u: goto L_002F3598;
    case 322u: goto L_002F35C0;
    case 323u: goto L_002F35EC;
    case 324u: goto L_002F364C;
    case 325u: goto L_002F365C;
    case 326u: goto L_002F3664;
    case 327u: goto L_002F3694;
    case 328u: goto L_002F36B0;
    case 329u: goto L_002F3708;
    case 330u: goto L_002F3714;
    case 331u: goto L_002F3728;
    case 332u: goto L_002F37AC;
    case 333u: goto L_002F37B4;
    case 334u: goto L_002F37C4;
    case 335u: goto L_002F37E0;
    case 336u: goto L_002F3840;
    case 337u: goto L_002F38A4;
    case 338u: goto L_002F38AC;
    case 339u: goto L_002F38BC;
    case 340u: goto L_002F38D0;
    case 341u: goto L_002F38DC;
    case 342u: goto L_002F393C;
    case 343u: goto L_002F3950;
    case 344u: goto L_002F395C;
    case 345u: goto L_002F3974;
    case 346u: goto L_002F3980;
    case 347u: goto L_002F3994;
    case 348u: goto L_002F399C;
    case 349u: goto L_002F39AC;
    case 350u: goto L_002F39B8;
    case 351u: goto L_002F39C0;
    case 352u: goto L_002F39D4;
    case 353u: goto L_002F3A58;
    case 354u: goto L_002F3AAC;
    case 355u: goto L_002F3AC0;
    case 356u: goto L_002F3B00;
    case 357u: goto L_002F3B10;
    case 358u: goto L_002F3B20;
    case 359u: goto L_002F3B38;
    case 360u: goto L_002F3B40;
    case 361u: goto L_002F3B48;
    case 362u: goto L_002F3B60;
    case 363u: goto L_002F3BA0;
    case 364u: goto L_002F3BAC;
    case 365u: goto L_002F3BB8;
    case 366u: goto L_002F3BCC;
    case 367u: goto L_002F3BE0;
    case 368u: goto L_002F3BF0;
    case 369u: goto L_002F3C00;
    case 370u: goto L_002F3C24;
    case 371u: goto L_002F3C2C;
    case 372u: goto L_002F3C80;
    case 373u: goto L_002F3CB4;
    case 374u: goto L_002F3CBC;
    case 375u: goto L_002F3CCC;
    case 376u: goto L_002F3CD8;
    case 377u: goto L_002F3CEC;
    case 378u: goto L_002F3D08;
    case 379u: goto L_002F3D14;
    case 380u: goto L_002F3D28;
    case 381u: goto L_002F3D74;
    case 382u: goto L_002F3DC0;
    case 383u: goto L_002F3DD0;
    case 384u: goto L_002F3DD8;
    case 385u: goto L_002F3DE0;
    case 386u: goto L_002F3E10;
    case 387u: goto L_002F3EB8;
    case 388u: goto L_002F3EC8;
    case 389u: goto L_002F3ED0;
    case 390u: goto L_002F3F30;
    case 391u: goto L_002F3F94;
    case 392u: goto L_002F3FA0;
    case 393u: goto L_002F3FAC;
    case 394u: goto L_002F3FF8;
    default: bad_entry(c, 0x002F0000u); return;
    }
L_002F0000:
    c.budget -= 1;
L_002F0004:
    c.r[1].d[0] = c.r[22].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002F0034; } }
    goto L_002F0010;
L_002F000C:
    c.budget -= 1;
L_002F0010:
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F001Cu); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 46u)));  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002F001Cu) [[unlikely]] return; }
L_002F001C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FD60000u);
    c.r[2].d[0] = c.r[2].d[0] | 38537ull;
    st32((c.r[29].w[0] + 196u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 212u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 228u), c.r[2].w[0]);  if (t) { goto L_002F0040; } }
    goto L_002F0034;
L_002F0030:
    st32((c.r[29].w[0] + 228u), c.r[2].w[0]);
    c.budget -= 1;
L_002F0034:
    st32((c.r[29].w[0] + 196u), 0u);
    st32((c.r[29].w[0] + 212u), 0u);
    st32((c.r[29].w[0] + 228u), 0u);
    c.budget -= 3;
L_002F0040:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBEBE0000u);
    c.r[3].d[0] = c.r[2].d[0] | 5243ull;
    set32(c.r[2], c.r[29].w[0] + 200u);
    st32((c.r[29].w[0] + 192u), 0u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 5;
L_002F0054:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBEA40000u);
    c.r[2].d[0] = c.r[2].d[0] | 40232ull;
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E3E0000u);
    c.r[3].d[0] = c.r[2].d[0] | 5243ull;
    set32(c.r[2], c.r[29].w[0] + 216u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3EA40000u);
    c.r[2].d[0] = c.r[2].d[0] | 40232ull;
    st32((c.r[29].w[0] + 224u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 232u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[29].w[0] + 244u);
    st32((c.r[29].w[0] + 240u), 0u);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[2], c.r[29].w[0] + 248u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBFC00000u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBFA60000u);
    c.r[2].d[0] = c.r[2].d[0] | 18140ull;
    st32((c.r[29].w[0] + 256u), c.r[2].w[0]);
    set32(c.r[30], c.r[29].w[0] + 260u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FA60000u);
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[23], c.r[29].w[0] + 264u);
    st32((c.r[30].w[0]), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    st32((c.r[23].w[0]), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 18140ull;
    set32(c.r[16], c.r[29].w[0] + 276u);
    st32((c.r[29].w[0] + 272u), c.r[2].w[0]);
    set32(c.r[18], c.r[29].w[0] + 280u);
    st32((c.r[16].w[0]), 0u);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.budget -= 36;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F00E4u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x002F00E4u) [[unlikely]] return; }
L_002F00E4:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F00F0u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x002F00F0u) [[unlikely]] return; }
L_002F00F0:
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F00FCu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x002F00FCu) [[unlikely]] return; }
L_002F00FC:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0108u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x002F0108u) [[unlikely]] return; }
L_002F0108:
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0114u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x002F0114u) [[unlikely]] return; }
L_002F0114:
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0120u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x002F0120u) [[unlikely]] return; }
L_002F0120:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    c.f[1] = ld32((c.r[29].w[0] + 192u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[2], c.r[2].w[0] - 5188u);
    set32(c.r[19], c.r[29].w[0] + 196u);
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = fp::add(c.f[1], c.f[22]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[3], c.r[2].w[0] - 5540u);
    c.f[3] = ld32((c.r[19].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    set32(c.r[4], c.r[2].w[0] - 5892u);
    set32(c.r[20], c.r[29].w[0] + 212u);
    c.f[0] = fp::add(c.f[3], c.f[20]);
    set32(c.r[21], c.r[29].w[0] + 228u);
    set32(c.r[2], c.r[5].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.f[0]);
    set32(c.r[2], c.r[29].w[0] + 200u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    c.f[4] = ld32((c.r[2].w[0]));
    c.r[1].d[0] = c.r[22].sd[0] < 16ll ? 1ull : 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[3], c.r[2].w[0] - 6244u);
    c.f[0] = fp::add(c.f[4], c.f[21]);
    set32(c.r[2], c.r[5].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 208u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[5], c.r[2].w[0] - 6596u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[4], c.r[2].w[0] - 6948u);
    c.f[2] = fp::add(c.f[1], c.f[0]);
    set32(c.r[2], c.r[6].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.f[0] = fp::add(c.f[0], c.f[22]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    set32(c.r[3], c.r[2].w[0] - 7300u);
    c.f[1] = fp::add(c.f[3], c.f[0]);
    set32(c.r[2], c.r[6].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.f[0] = fp::add(c.f[0], c.f[20]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.f[0]);
    set32(c.r[2], c.r[29].w[0] + 216u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    c.f[3] = ld32((c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[7], c.r[2].w[0] - 7652u);
    c.f[0] = fp::add(c.f[4], c.f[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[8], c.r[2].w[0] - 8004u);
    set32(c.r[2], c.r[5].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.f[3] = fp::add(c.f[3], c.f[21]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.f[3]);
    c.f[3] = ld32((c.r[29].w[0] + 224u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[6], c.r[2].w[0] - 8356u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[5], c.r[2].w[0] - 8708u);
    c.f[2] = fp::add(c.f[3], c.f[2]);
    set32(c.r[2], c.r[4].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.f[3] = fp::add(c.f[3], c.f[22]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.f[3]);
    c.f[3] = ld32((c.r[21].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[4], c.r[2].w[0] - 9060u);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[3], c.r[2].w[0] - 9412u);
    c.f[1] = fp::add(c.f[3], c.f[1]);
    set32(c.r[2], c.r[9].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[9].w[0]);
    c.f[3] = fp::add(c.f[3], c.f[20]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.f[3]);
    set32(c.r[2], c.r[29].w[0] + 232u);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    c.f[3] = ld32((c.r[2].w[0]));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[10], c.r[7].w[0] - 10116u);
    set32(c.r[7], c.r[9].w[0] << 4);
    c.f[0] = fp::add(c.f[3], c.f[0]);
    set32(c.r[7], c.r[7].w[0] + c.r[9].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    c.f[3] = fp::add(c.f[3], c.f[21]);
    set32(c.r[7], c.r[8].w[0] + c.r[7].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    st32((c.r[7].w[0]), c.f[3]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[9], c.r[7].w[0] - 10468u);
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[8], c.r[7].w[0] - 10820u);
    c.f[3] = ld32((c.r[29].w[0] + 240u));
    set32(c.r[2], c.r[2].w[0] - 9764u);
    set32(c.r[7], c.r[11].w[0] << 4);
    set32(c.r[7], c.r[7].w[0] + c.r[11].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    st32((c.r[6].w[0]), c.f[3]);
    set32(c.r[6], c.r[29].w[0] + 244u);
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    c.f[3] = ld32((c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[7], c.r[6].w[0] - 11172u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[4] = c.r[6].w[0];
    set32(c.r[6], c.r[11].w[0] << 4);
    set32(c.r[6], c.r[6].w[0] + c.r[11].w[0]);
    fpu_div(c, 2u, c.f[2], c.f[4]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    st32((c.r[5].w[0]), c.f[3]);
    set32(c.r[5], c.r[29].w[0] + 248u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    c.f[3] = ld32((c.r[5].w[0]));
    set32(c.r[5], c.r[6].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[4].w[0]), c.f[3]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    c.f[3] = ld32((c.r[29].w[0] + 256u));
    set32(c.r[4], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[22] = fp::add(c.f[22], c.f[2]);
    st32((c.r[3].w[0]), c.f[3]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    c.f[2] = ld32((c.r[30].w[0]));
    fpu_div(c, 1u, c.f[1], c.f[4]);
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    c.f[2] = ld32((c.r[23].w[0]));
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[10].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    c.f[2] = ld32((c.r[29].w[0] + 272u));
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    fpu_div(c, 0u, c.f[0], c.f[4]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[9].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    c.f[2] = ld32((c.r[16].w[0]));
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[8].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    c.f[2] = ld32((c.r[18].w[0]));
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.f[2]);
    c.f[20] = fp::add(c.f[20], c.f[1]);
    c.budget -= 195;
    { const bool t = c.r[1].d[0] == 0ull; c.f[21] = fp::add(c.f[21], c.f[0]);  if (t) { goto L_002F0444; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FD60000u);
    c.r[2].d[0] = c.r[2].d[0] | 38525ull;
    st32((c.r[19].w[0]), c.r[2].w[0]);
    st32((c.r[20].w[0]), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0]), c.r[2].w[0]);  if (t) { goto L_002F0450; } }
L_002F0444:
    st32((c.r[19].w[0]), 0u);
    st32((c.r[20].w[0]), 0u);
    st32((c.r[21].w[0]), 0u);
    c.budget -= 3;
L_002F0450:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBE7D0000u);
    c.r[3].d[0] = c.r[2].d[0] | 28836ull;
    set32(c.r[2], c.r[29].w[0] + 200u);
    st32((c.r[29].w[0] + 192u), 0u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBE5B0000u);
    c.r[2].d[0] = c.r[2].d[0] | 31797ull;
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DFD0000u);
    c.r[3].d[0] = c.r[2].d[0] | 28836ull;
    set32(c.r[2], c.r[29].w[0] + 216u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E5B0000u);
    c.r[2].d[0] = c.r[2].d[0] | 31797ull;
    st32((c.r[29].w[0] + 224u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 232u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F8C0000u);
    set32(c.r[2], c.r[29].w[0] + 244u);
    st32((c.r[29].w[0] + 240u), 0u);
    c.r[4].d[0] = c.r[3].d[0] | 36004ull;
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.r[4].d[0] = c.r[3].d[0] | 35991ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF820000u);
    c.r[3].d[0] = c.r[2].d[0] | 52744ull;
    set32(c.r[2], c.r[29].w[0] + 248u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF620000u);
    c.r[2].d[0] = c.r[2].d[0] | 36750ull;
    st32((c.r[29].w[0] + 256u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F020000u);
    c.r[3].d[0] = c.r[2].d[0] | 52731ull;
    st32((c.r[30].w[0]), c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F620000u);
    st32((c.r[23].w[0]), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 36750ull;
    st32((c.r[29].w[0] + 272u), c.r[2].w[0]);
    st32((c.r[16].w[0]), c.r[4].w[0]);
    set32(c.r[4], c.r[29].w[0] + 192u);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.budget -= 42;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F04F8u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x002F04F8u) [[unlikely]] return; }
L_002F04F8:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0504u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x002F0504u) [[unlikely]] return; }
L_002F0504:
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0510u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x002F0510u) [[unlikely]] return; }
L_002F0510:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F051Cu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x002F051Cu) [[unlikely]] return; }
L_002F051C:
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0528u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x002F0528u) [[unlikely]] return; }
L_002F0528:
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0534u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x002F0534u) [[unlikely]] return; }
L_002F0534:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[5], c.r[3].w[0] - 5184u);
    c.f[0] = ld32((c.r[29].w[0] + 192u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    set32(c.r[4], c.r[3].w[0] - 5536u);
    c.f[0] = fp::add(c.f[0], c.f[22]);
    set32(c.r[3], c.r[6].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[6], c.r[3].w[0] - 5888u);
    c.f[0] = ld32((c.r[19].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    set32(c.r[5], c.r[3].w[0] - 6240u);
    c.f[0] = fp::add(c.f[0], c.f[20]);
    set32(c.r[3], c.r[7].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.f[0]);
    set32(c.r[3], c.r[29].w[0] + 200u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    c.f[0] = ld32((c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[4], c.r[3].w[0] - 6592u);
    c.f[0] = fp::add(c.f[0], c.f[21]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[9], c.r[3].w[0] - 6944u);
    set32(c.r[3], c.r[7].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[10], c.r[3].w[0] - 7296u);
    c.f[0] = ld32((c.r[29].w[0] + 208u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    set32(c.r[8], c.r[3].w[0] - 7648u);
    c.f[0] = fp::add(c.f[0], c.f[22]);
    set32(c.r[3], c.r[6].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[7], c.r[3].w[0] - 8000u);
    c.f[0] = ld32((c.r[20].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    set32(c.r[6], c.r[3].w[0] - 8352u);
    c.f[0] = fp::add(c.f[0], c.f[20]);
    set32(c.r[3], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.f[0]);
    set32(c.r[3], c.r[29].w[0] + 216u);
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    c.f[0] = ld32((c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[5], c.r[3].w[0] - 8704u);
    c.f[0] = fp::add(c.f[0], c.f[21]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[4], c.r[3].w[0] - 9056u);
    set32(c.r[3], c.r[11].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[9].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 224u));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    set32(c.r[12], c.r[9].w[0] - 9760u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.f[0] = fp::add(c.f[0], c.f[22]);
    set32(c.r[3], c.r[3].w[0] - 9408u);
    set32(c.r[9], c.r[11].w[0] << 4);
    set32(c.r[9], c.r[9].w[0] + c.r[11].w[0]);
    set32(c.r[9], c.r[9].w[0] << 2);
    set32(c.r[9], c.r[10].w[0] + c.r[9].w[0]);
    st32((c.r[9].w[0]), c.f[0]);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[11], c.r[9].w[0] - 10112u);
    c.f[0] = ld32((c.r[21].w[0]));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.r[13].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    set32(c.r[10], c.r[9].w[0] - 10464u);
    c.f[0] = fp::add(c.f[0], c.f[20]);
    set32(c.r[9], c.r[13].w[0] << 4);
    set32(c.r[9], c.r[9].w[0] + c.r[13].w[0]);
    set32(c.r[9], c.r[9].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    st32((c.r[8].w[0]), c.f[0]);
    set32(c.r[8], c.r[29].w[0] + 232u);
    c.r[14].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    c.f[0] = ld32((c.r[8].w[0]));
    set32(c.r[13], c.r[14].w[0] << 4);
    set32(c.r[13], c.r[13].w[0] + c.r[14].w[0]);
    c.f[0] = fp::add(c.f[0], c.f[21]);
    set32(c.r[13], c.r[13].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[13].w[0]);
    st32((c.r[7].w[0]), c.f[0]);
    c.r[13].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    c.f[0] = ld32((c.r[29].w[0] + 240u));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[9], c.r[8].w[0] - 10816u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[7], c.r[13].w[0] << 4);
    set32(c.r[7], c.r[7].w[0] + c.r[13].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    st32((c.r[6].w[0]), c.f[0]);
    set32(c.r[6], c.r[29].w[0] + 244u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    c.f[0] = ld32((c.r[6].w[0]));
    set32(c.r[8], c.r[8].w[0] - 11168u);
    set32(c.r[6], c.r[7].w[0] << 4);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    st32((c.r[5].w[0]), c.f[0]);
    set32(c.r[5], c.r[29].w[0] + 248u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    c.f[0] = ld32((c.r[5].w[0]));
    set32(c.r[5], c.r[6].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[4].w[0]), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    c.f[0] = ld32((c.r[29].w[0] + 256u));
    set32(c.r[4], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    c.f[0] = ld32((c.r[30].w[0]));
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[12].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    c.f[0] = ld32((c.r[23].w[0]));
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[11].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    c.f[0] = ld32((c.r[29].w[0] + 272u));
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[10].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    c.f[0] = ld32((c.r[16].w[0]));
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[9].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    c.f[0] = ld32((c.r[18].w[0]));
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[8].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.f[0]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 191;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 288u);  c.pc = t; return; }
L_002F0830:
    set32(c.r[29], c.r[29].w[0] - 192u);
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
    set32(c.r[16], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[5], 0u + 2u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F086Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0028(c, 93u, depth + 1u); else { c.pc = 0x001A13C0u; return; } if (c.pc != 0x002F086Cu) [[unlikely]] return; }
L_002F086C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[4], c.r[4].w[0] - 6304u);
    st32((c.r[29].w[0] + 176u), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[30], c.r[4].w[0] - 6656u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[23], c.r[4].w[0] - 7008u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[5], c.r[4].w[0] - 9472u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[6], c.r[4].w[0] - 9824u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[7], c.r[4].w[0] - 10176u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[8], c.r[4].w[0] - 7360u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[9], c.r[4].w[0] - 7712u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[10], c.r[4].w[0] - 8064u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[11], c.r[4].w[0] - 10528u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[12], c.r[4].w[0] - 10880u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[13], c.r[4].w[0] - 11232u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[14], c.r[4].w[0] - 5248u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[15], c.r[4].w[0] - 5600u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[24], c.r[4].w[0] - 5952u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[25], c.r[4].w[0] - 8416u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[31], c.r[4].w[0] - 8768u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[3], c.r[3].w[0] - 9840u);
    set32(c.r[17], c.r[4].w[0] - 9120u);
    mmi::paddub(c.r[18], c.r[2], c.r[0]);
    st32((c.r[29].w[0] + 160u), 0u);
    c.budget -= 41;
L_002F0910:
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 2;
L_002F0918:
    c.r[22].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    set32(c.r[19], ld32((c.r[3].w[0])));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[21].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[20], c.r[22].w[0] << 4);
    set32(c.r[20], c.r[20].w[0] + c.r[22].w[0]);
    set32(c.r[22], c.r[20].w[0] << 2);
    set32(c.r[20], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[19], c.r[19].w[0] << 4);
    set32(c.r[19], c.r[18].w[0] + c.r[19].w[0]);
    set32(c.r[3], c.r[3].w[0] + 4u);
    set32(c.r[20], c.r[20].w[0] + c.r[22].w[0]);
    c.f[0] = ld32((c.r[20].w[0]));
    st32((c.r[19].w[0]), c.f[0]);
    c.r[22].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    set32(c.r[20], c.r[22].w[0] << 4);
    set32(c.r[20], c.r[20].w[0] + c.r[22].w[0]);
    set32(c.r[20], c.r[20].w[0] << 2);
    set32(c.r[20], c.r[30].w[0] + c.r[20].w[0]);
    c.f[0] = ld32((c.r[20].w[0]));
    st32((c.r[19].w[0] + 4u), c.f[0]);
    c.r[22].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    set32(c.r[20], c.r[22].w[0] << 4);
    set32(c.r[20], c.r[20].w[0] + c.r[22].w[0]);
    set32(c.r[20], c.r[20].w[0] << 2);
    set32(c.r[20], c.r[23].w[0] + c.r[20].w[0]);
    c.f[0] = ld32((c.r[20].w[0]));
    st32((c.r[19].w[0] + 8u), c.f[0]);
    c.r[22].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    set32(c.r[20], c.r[22].w[0] << 4);
    set32(c.r[20], c.r[20].w[0] + c.r[22].w[0]);
    set32(c.r[20], c.r[20].w[0] << 2);
    set32(c.r[20], c.r[5].w[0] + c.r[20].w[0]);
    c.f[0] = ld32((c.r[20].w[0]));
    st32((c.r[19].w[0] + 16u), c.f[0]);
    c.r[22].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    set32(c.r[20], c.r[22].w[0] << 4);
    set32(c.r[20], c.r[20].w[0] + c.r[22].w[0]);
    set32(c.r[20], c.r[20].w[0] << 2);
    set32(c.r[20], c.r[6].w[0] + c.r[20].w[0]);
    c.f[0] = ld32((c.r[20].w[0]));
    st32((c.r[19].w[0] + 20u), c.f[0]);
    c.r[22].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    set32(c.r[20], c.r[22].w[0] << 4);
    set32(c.r[20], c.r[20].w[0] + c.r[22].w[0]);
    set32(c.r[20], c.r[20].w[0] << 2);
    set32(c.r[20], c.r[7].w[0] + c.r[20].w[0]);
    c.f[0] = ld32((c.r[20].w[0]));
    c.budget -= 50;
    { const bool t = c.r[21].d[0] != 0ull; st32((c.r[19].w[0] + 24u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F0918u | kUnwind; return; } goto L_002F0918; } }
    mmi::paddub(c.r[19], c.r[0], c.r[0]);
    c.budget -= 2;
L_002F09E8:
    c.r[22].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[20].d[0] = c.r[19].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[21], c.r[22].w[0] << 4);
    set32(c.r[21], c.r[21].w[0] + c.r[22].w[0]);
    set32(c.r[21], c.r[21].w[0] << 2);
    set32(c.r[21], c.r[8].w[0] + c.r[21].w[0]);
    c.f[0] = ld32((c.r[21].w[0]));
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[4], c.r[18].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + 4u);
    st32((c.r[4].w[0]), c.f[0]);
    c.r[22].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    set32(c.r[21], c.r[22].w[0] << 4);
    set32(c.r[21], c.r[21].w[0] + c.r[22].w[0]);
    set32(c.r[21], c.r[21].w[0] << 2);
    set32(c.r[21], c.r[9].w[0] + c.r[21].w[0]);
    c.f[0] = ld32((c.r[21].w[0]));
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.r[22].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    set32(c.r[21], c.r[22].w[0] << 4);
    set32(c.r[21], c.r[21].w[0] + c.r[22].w[0]);
    set32(c.r[21], c.r[21].w[0] << 2);
    set32(c.r[21], c.r[10].w[0] + c.r[21].w[0]);
    c.f[0] = ld32((c.r[21].w[0]));
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.r[22].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    set32(c.r[21], c.r[22].w[0] << 4);
    set32(c.r[21], c.r[21].w[0] + c.r[22].w[0]);
    set32(c.r[21], c.r[21].w[0] << 2);
    set32(c.r[21], c.r[11].w[0] + c.r[21].w[0]);
    c.f[0] = ld32((c.r[21].w[0]));
    st32((c.r[4].w[0] + 16u), c.f[0]);
    c.r[22].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    set32(c.r[21], c.r[22].w[0] << 4);
    set32(c.r[21], c.r[21].w[0] + c.r[22].w[0]);
    set32(c.r[21], c.r[21].w[0] << 2);
    set32(c.r[21], c.r[12].w[0] + c.r[21].w[0]);
    c.f[0] = ld32((c.r[21].w[0]));
    st32((c.r[4].w[0] + 20u), c.f[0]);
    c.r[22].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    set32(c.r[21], c.r[22].w[0] << 4);
    set32(c.r[21], c.r[21].w[0] + c.r[22].w[0]);
    set32(c.r[21], c.r[21].w[0] << 2);
    set32(c.r[21], c.r[13].w[0] + c.r[21].w[0]);
    c.f[0] = ld32((c.r[21].w[0]));
    c.budget -= 49;
    { const bool t = c.r[20].d[0] != 0ull; st32((c.r[4].w[0] + 24u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F09E8u | kUnwind; return; } goto L_002F09E8; } }
    mmi::paddub(c.r[19], c.r[0], c.r[0]);
    c.budget -= 1;
L_002F0AB0:
    c.r[22].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[20].d[0] = c.r[19].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[21], c.r[22].w[0] << 4);
    set32(c.r[21], c.r[21].w[0] + c.r[22].w[0]);
    set32(c.r[21], c.r[21].w[0] << 2);
    set32(c.r[21], c.r[14].w[0] + c.r[21].w[0]);
    c.f[0] = ld32((c.r[21].w[0]));
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[4], c.r[18].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + 4u);
    st32((c.r[4].w[0]), c.f[0]);
    c.r[22].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    set32(c.r[21], c.r[22].w[0] << 4);
    set32(c.r[21], c.r[21].w[0] + c.r[22].w[0]);
    set32(c.r[21], c.r[21].w[0] << 2);
    set32(c.r[21], c.r[15].w[0] + c.r[21].w[0]);
    c.f[0] = ld32((c.r[21].w[0]));
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.r[22].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    set32(c.r[21], c.r[22].w[0] << 4);
    set32(c.r[21], c.r[21].w[0] + c.r[22].w[0]);
    set32(c.r[21], c.r[21].w[0] << 2);
    set32(c.r[21], c.r[24].w[0] + c.r[21].w[0]);
    c.f[0] = ld32((c.r[21].w[0]));
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.r[22].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    set32(c.r[21], c.r[22].w[0] << 4);
    set32(c.r[21], c.r[21].w[0] + c.r[22].w[0]);
    set32(c.r[21], c.r[21].w[0] << 2);
    set32(c.r[21], c.r[25].w[0] + c.r[21].w[0]);
    c.f[0] = ld32((c.r[21].w[0]));
    st32((c.r[4].w[0] + 16u), c.f[0]);
    c.r[22].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    set32(c.r[21], c.r[22].w[0] << 4);
    set32(c.r[21], c.r[21].w[0] + c.r[22].w[0]);
    set32(c.r[21], c.r[21].w[0] << 2);
    set32(c.r[21], c.r[31].w[0] + c.r[21].w[0]);
    c.f[0] = ld32((c.r[21].w[0]));
    st32((c.r[4].w[0] + 20u), c.f[0]);
    c.r[22].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    set32(c.r[21], c.r[22].w[0] << 4);
    set32(c.r[21], c.r[21].w[0] + c.r[22].w[0]);
    set32(c.r[21], c.r[21].w[0] << 2);
    set32(c.r[21], c.r[17].w[0] + c.r[21].w[0]);
    c.f[0] = ld32((c.r[21].w[0]));
    c.budget -= 49;
    { const bool t = c.r[20].d[0] != 0ull; st32((c.r[4].w[0] + 24u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F0AB0u | kUnwind; return; } goto L_002F0AB0; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[30], c.r[30].w[0] + 4u);
    set32(c.r[23], c.r[23].w[0] + 4u);
    set32(c.r[5], c.r[5].w[0] + 4u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    st32((c.r[29].w[0] + 176u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[6], c.r[6].w[0] + 4u);
    set32(c.r[7], c.r[7].w[0] + 4u);
    set32(c.r[8], c.r[8].w[0] + 4u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[29].w[0] + 160u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[9], c.r[9].w[0] + 4u);
    set32(c.r[10], c.r[10].w[0] + 4u);
    set32(c.r[11], c.r[11].w[0] + 4u);
    c.r[4].d[0] = c.r[4].sd[0] < 17ll ? 1ull : 0ull;
    set32(c.r[12], c.r[12].w[0] + 4u);
    set32(c.r[13], c.r[13].w[0] + 4u);
    set32(c.r[14], c.r[14].w[0] + 4u);
    set32(c.r[15], c.r[15].w[0] + 4u);
    set32(c.r[24], c.r[24].w[0] + 4u);
    set32(c.r[25], c.r[25].w[0] + 4u);
    set32(c.r[31], c.r[31].w[0] + 4u);
    c.budget -= 26;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F0910u | kUnwind; return; } goto L_002F0910; } }
    set32(c.r[6], ld32((c.r[3].w[0])));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[4], c.r[3].w[0] - 5184u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[7], c.r[3].w[0] - 5536u);
    set32(c.r[3], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[18], c.r[18].w[0] + c.r[6].w[0]);
    st32((c.r[18].w[0]), c.f[0]);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[6], c.r[3].w[0] - 5888u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[5], c.r[3].w[0] - 8352u);
    set32(c.r[8], c.r[9].w[0] << 4);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    c.f[0] = ld32((c.r[7].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[4], c.r[3].w[0] - 8704u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[3], c.r[3].w[0] - 9056u);
    st32((c.r[18].w[0] + 4u), c.f[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    set32(c.r[7], c.r[8].w[0] << 4);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.f[0] = ld32((c.r[6].w[0]));
    st32((c.r[18].w[0] + 8u), c.f[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    set32(c.r[6], c.r[7].w[0] << 4);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[18].w[0] + 16u), c.f[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    set32(c.r[5], c.r[6].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[4].w[0]));
    st32((c.r[18].w[0] + 20u), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    set32(c.r[4], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[18].w[0] + 24u), c.f[0]);
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
    c.budget -= 69;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_002F0CF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[5], ld32((c.r[4].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 404u)));
    set32(c.r[7], c.r[4].w[0] + 320u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 320u);  if (t) { goto L_002F0D6C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 85u)));
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[7].w[0] + 85u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 2u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F0D34; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F0D50; } }
L_002F0D34:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 85u)));
    c.r[2].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F0D5C; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[7].w[0] + 85u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002F0D5C; } }
L_002F0D50:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 85u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    st8((c.r[7].w[0] + 85u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_002F0D5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0D64u); c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 85u)));  if (depth < kMaxDepth) unit_007C(c, 29u, depth + 1u); else { c.pc = 0x002F0DB0u; return; } if (c.pc != 0x002F0D64u) [[unlikely]] return; }
L_002F0D64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_002F0DA4; } }
L_002F0D6C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 84u)));
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[7].w[0] + 84u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_002F0D7C:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 16u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 48u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].d[0] = c.r[6].sd[0] < 16ll ? 1ull : 0ull;
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    st16((c.r[7].w[0] + 16u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F0D7Cu | kUnwind; return; } goto L_002F0D7C; } }
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 2;
L_002F0DA4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002F0DB0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].d[0] = c.r[5].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    set32(c.r[3], c.r[2].w[0] << 2);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] - 9872u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[19], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[17], c.r[4].w[0] + 320u);
    set32(c.r[16], ld32((c.r[2].w[0])));
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    mmi::paddub(c.r[20], c.r[17], c.r[0]);
    c.budget -= 18;
L_002F0DF8:
    c.r[6].d[0] = ld16((c.r[16].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 16u)));
    c.r[2].d[0] = 0ull | 32768ull;
    set32(c.r[3], c.r[6].w[0] - c.r[3].w[0]);
    st16((c.r[20].w[0] + 48u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 48u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 2u);  if (t) { goto L_002F0E60; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 16u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x2AAA0000u);
    c.r[2].d[0] = c.r[2].d[0] | 43691ull;
    set32(c.r[3], c.r[3].w[0] - c.r[6].w[0]);
    st16((c.r[20].w[0] + 48u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 48u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] >> 31);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st16((c.r[20].w[0] + 48u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 48u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 48u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_002F0E88; } }
L_002F0E60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x2AAA0000u);
    c.r[2].d[0] = c.r[2].d[0] | 43691ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] >> 31);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st16((c.r[20].w[0] + 48u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 10;
L_002F0E88:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 48u)));
    c.f[0] = ld32((c.r[19].w[0] + 7740u));
    c.f[1] = c.r[2].w[0];
    c.f[12] = fp::cvt_s_w(c.f[1]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0EA4u); c.f[12] = fp::mul(c.f[12], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002F0EA4u) [[unlikely]] return; }
L_002F0EA4:
    set32(c.r[18], c.r[18].w[0] + 1u);
    st16((c.r[20].w[0] + 48u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[18].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F0DF8u | kUnwind; return; } goto L_002F0DF8; } }
    set32(c.r[2], 0u + 6u);
    st8((c.r[17].w[0] + 84u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 84u)));
    c.f[0] = ld32((c.r[19].w[0] + 7740u));
    c.f[1] = c.r[2].w[0];
    c.f[12] = fp::cvt_s_w(c.f[1]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0EDCu); c.f[12] = fp::mul(c.f[12], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002F0EDCu) [[unlikely]] return; }
L_002F0EDC:
    st8((c.r[17].w[0] + 84u), static_cast<std::uint8_t>(c.r[2].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002F0F00:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] - 9424u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002F0000u < 16384u) { entry = entries_007C[(t - 0x002F0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002F0F20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[2], 0u + 12u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[4].w[0] + 112u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 116u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 120u), c.r[3].w[0]);
    set32(c.r[6], 0u + 4u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0F60u); st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0081(c, 12u, depth + 1u); else { c.pc = 0x00304300u; return; } if (c.pc != 0x002F0F60u) [[unlikely]] return; }
L_002F0F60:
    set32(c.r[2], 0u + 33u);
    st8((c.r[16].w[0] + 576u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 96u);
    st8((c.r[16].w[0] + 579u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0F78u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_007C(c, 37u, depth + 1u); else { c.pc = 0x002F0F90u; return; } if (c.pc != 0x002F0F78u) [[unlikely]] return; }
L_002F0F78:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002F0F90:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[18], ld32((c.r[4].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[19], c.r[4], c.r[0]);  if (t) { goto L_002F1078; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 578u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002F1078; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[16].w[0] + 320u);  if (t) { goto L_002F0FEC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0FDCu);  if (depth < kMaxDepth) unit_0081(c, 113u, depth + 1u); else { c.pc = 0x00305BD0u; return; } if (c.pc != 0x002F0FDCu) [[unlikely]] return; }
L_002F0FDC:
    st16((c.r[18].w[0] + 572u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 12u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_002F0FF4; } }
L_002F0FEC:
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[19].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002F0FF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0FFCu); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002F0FFCu) [[unlikely]] return; }
L_002F0FFC:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 10u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[3], c.r[2].w[0] - 5248u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[6], c.r[4].w[0] << 3);
    set32(c.r[4], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 5600u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    c.f[13] = ld32((c.r[2].w[0]));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[2], c.r[2].w[0] - 5952u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    c.f[14] = ld32((c.r[2].w[0]));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1054u); c.f[12] = ld32((c.r[3].w[0]));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002F1054u) [[unlikely]] return; }
L_002F1054:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 10u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1068u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002F1068u) [[unlikely]] return; }
L_002F1068:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1070u); set32(c.r[4], c.r[19].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002F1070u) [[unlikely]] return; }
L_002F1070:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);  if (t) { goto L_002F1088; } }
L_002F1078:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[19].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    c.budget -= 4;
L_002F1088:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002F10A0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_002F10B0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_002F10C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F10D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 369u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[17], c.r[5], c.r[0]);  if (t) { goto L_002F1108; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1100u);  if (depth < kMaxDepth) unit_007F(c, 54u, depth + 1u); else { c.pc = 0x002FC710u; return; } if (c.pc != 0x002F1100u) [[unlikely]] return; }
L_002F1100:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[16], c.r[2], c.r[0]);  if (t) { goto L_002F1178; } }
L_002F1108:
    set32(c.r[4], 0u + 1u);
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1118u); mmi::paddub(c.r[6], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x002F1118u) [[unlikely]] return; }
L_002F1118:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[2], c.r[0]);  if (t) { goto L_002F1178; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 17u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 16u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[2], c.r[2].w[0] + 4512u);
    st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    set32(c.r[2], c.r[2].w[0] + 8752u);
    st32((c.r[16].w[0] + 168u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 8400u)));
    set32(c.r[7], c.r[17].w[0] + 6u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F116Cu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0016(c, 134u, depth + 1u); else { c.pc = 0x0015B550u; return; } if (c.pc != 0x002F116Cu) [[unlikely]] return; }
L_002F116C:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1178u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 114u, depth + 1u); else { c.pc = 0x00305C00u; return; } if (c.pc != 0x002F1178u) [[unlikely]] return; }
L_002F1178:
    mmi::paddub(c.r[2], c.r[16], c.r[0]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002F11A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 264u)));
    set32(c.r[5], c.r[4].w[0] + 320u);
    c.r[1].d[0] = c.r[9].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[7], c.r[6].w[0] + 320u);  if (t) { goto L_002F11D8; } }
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 4u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[8].d[0] != c.r[3].d[0];  if (t) { goto L_002F11D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002F11F4; } }
L_002F11D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] - 8768u);
    set32(c.r[3], c.r[9].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F11F4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F11F4u) [[unlikely]] return; }
L_002F11F4:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002F1200:
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
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[16], c.r[7], c.r[0]);  if (t) { goto L_002F1314; } }
    set32(c.r[2], c.r[28].w[0] - 28380u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1258u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x002F1258u) [[unlikely]] return; }
L_002F1258:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1260u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002F1260u) [[unlikely]] return; }
L_002F1260:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[4], c.r[2].w[0] - 9408u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1270u); set32(c.r[5], c.r[19].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x002F1270u) [[unlikely]] return; }
L_002F1270:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3EE60000u);
    c.r[2].d[0] = c.r[2].d[0] | 26214ull;
    set32(c.r[4], c.r[19].w[0] + 48u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1288u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x002F1288u) [[unlikely]] return; }
L_002F1288:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    set32(c.r[2], c.r[28].w[0] - 28376u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F12A8u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002F12A8u) [[unlikely]] return; }
L_002F12A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F12B0u); set32(c.r[4], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 16u, depth + 1u); else { c.pc = 0x0013C860u; return; } if (c.pc != 0x002F12B0u) [[unlikely]] return; }
L_002F12B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F12B8u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x002F12B8u) [[unlikely]] return; }
L_002F12B8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 4u)));
    set32(c.r[2], 0u + 600u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x41000000u);
    set32(c.r[3], 0u + 224u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[19].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st16((c.r[19].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    set32(c.r[2], 0u + 64u);
    mmi::paddub(c.r[5], c.r[18], c.r[0]);
    mmi::paddub(c.r[6], c.r[17], c.r[0]);
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    set32(c.r[9], c.r[9].w[0] + c.r[16].w[0]);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 6u)));
    mmi::paddub(c.r[7], c.r[16], c.r[0]);
    c.r[9].d[0] = c.r[9].d[0] & 15ull;
    st8((c.r[19].w[0] + 10u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st32((c.r[19].w[0] + 160u), c.r[8].w[0]);
    st8((c.r[19].w[0] + 579u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[19].w[0] + 530u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[19].w[0] + 520u), 0u);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1314u); st32((c.r[19].w[0] + 524u), 0u);  if (depth < kMaxDepth) unit_007C(c, 62u, depth + 1u); else { c.pc = 0x002F1330u; return; } if (c.pc != 0x002F1314u) [[unlikely]] return; }
L_002F1314:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002F1330:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], c.r[17].w[0] + 32u);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1358u); mmi::paddub(c.r[18], c.r[6], c.r[0]);  if (depth < kMaxDepth) unit_0045(c, 192u, depth + 1u); else { c.pc = 0x00217510u; return; } if (c.pc != 0x002F1358u) [[unlikely]] return; }
L_002F1358:
    st32((c.r[29].w[0] + 76u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40900000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = ld32((c.r[29].w[0] + 76u));
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F1388; } }
    c.f[0] = fp::add(c.f[2], c.f[1]);
    st32((c.r[17].w[0] + 36u), c.f[0]);
    c.budget -= 2;
L_002F1388:
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40900000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 76u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F13A0u); c.f[12] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0075(c, 273u, depth + 1u); else { c.pc = 0x002D7D90u; return; } if (c.pc != 0x002F13A0u) [[unlikely]] return; }
L_002F13A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F13C0; } }
    c.f[1] = ld32((c.r[29].w[0] + 76u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40900000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 36u), c.f[0]);
    c.budget -= 6;
L_002F13C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] - 8752u);
    mmi::paddub(c.r[6], c.r[18], c.r[0]);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F13E8u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F13E8u) [[unlikely]] return; }
L_002F13E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F13F0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x002F13F0u) [[unlikely]] return; }
L_002F13F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F13F8u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 17u, depth + 1u); else { c.pc = 0x0013C880u; return; } if (c.pc != 0x002F13F8u) [[unlikely]] return; }
L_002F13F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1400u); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002F1400u) [[unlikely]] return; }
L_002F1400:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1408u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x002F1408u) [[unlikely]] return; }
L_002F1408:
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002F1430:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[5], c.r[6], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1448u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_007C(c, 233u, depth + 1u); else { c.pc = 0x002F2800u; return; } if (c.pc != 0x002F1448u) [[unlikely]] return; }
L_002F1448:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F1498; } }
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F145Cu); set32(c.r[5], c.r[16].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x002F145Cu) [[unlikely]] return; }
L_002F145C:
    c.f[2] = ld32((c.r[16].w[0] + 160u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 160u), c.f[1]);  if (t) { goto L_002F1498; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41900000u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[16].w[0] + 160u), c.r[3].w[0]);
    c.budget -= 5;
L_002F1498:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002F14B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[18], c.r[6], c.r[0]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F14D8u); mmi::paddub(c.r[5], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_007C(c, 233u, depth + 1u); else { c.pc = 0x002F2800u; return; } if (c.pc != 0x002F14D8u) [[unlikely]] return; }
L_002F14D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F15B8; } }
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F14ECu); set32(c.r[5], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x002F14ECu) [[unlikely]] return; }
L_002F14EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F14F4u); set32(c.r[4], c.r[18].w[0] + 2048u);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x002F14F4u) [[unlikely]] return; }
L_002F14F4:
    set32(c.r[2], ld32((c.r[18].w[0] + 7916u)));
    c.r[3].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1504u); c.r[4].d[0] = c.r[2].d[0] & c.r[3].d[0];  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002F1504u) [[unlikely]] return; }
L_002F1504:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F150Cu); c.r[4].d[0] = ld16((c.r[18].w[0] + 7912u));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002F150Cu) [[unlikely]] return; }
L_002F150C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] - 9376u);
    set32(c.r[5], c.r[17].w[0] + 144u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1528u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002F1528u) [[unlikely]] return; }
L_002F1528:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1530u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x002F1530u) [[unlikely]] return; }
L_002F1530:
    set32(c.r[6], c.r[17].w[0] + 128u);
    set32(c.r[7], 0u + 512u);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1544u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_007C(c, 201u, depth + 1u); else { c.pc = 0x002F23E0u; return; } if (c.pc != 0x002F1544u) [[unlikely]] return; }
L_002F1544:
    set32(c.r[5], c.r[17].w[0] + 144u);
    set32(c.r[6], 0u + 768u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1554u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 119u, depth + 1u); else { c.pc = 0x002DD5A0u; return; } if (c.pc != 0x002F1554u) [[unlikely]] return; }
L_002F1554:
    c.f[1] = ld32((c.r[17].w[0] + 160u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[17].w[0] + 32u);
    set32(c.r[5], c.r[17].w[0] + 144u);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1574u); st32((c.r[17].w[0] + 160u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x002F1574u) [[unlikely]] return; }
L_002F1574:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F15AC; } }
    c.f[1] = ld32((c.r[17].w[0] + 160u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F15B8; } }
L_002F15AC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_002F15B8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002F15D0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[6], c.r[0]);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F15F8u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_007C(c, 233u, depth + 1u); else { c.pc = 0x002F2800u; return; } if (c.pc != 0x002F15F8u) [[unlikely]] return; }
L_002F15F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F17B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1608u); set32(c.r[4], c.r[16].w[0] + 2048u);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x002F1608u) [[unlikely]] return; }
L_002F1608:
    set32(c.r[2], ld32((c.r[16].w[0] + 7916u)));
    c.r[3].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1618u); c.r[4].d[0] = c.r[2].d[0] & c.r[3].d[0];  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002F1618u) [[unlikely]] return; }
L_002F1618:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1620u); c.r[4].d[0] = ld16((c.r[16].w[0] + 7912u));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002F1620u) [[unlikely]] return; }
L_002F1620:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] - 9376u);
    set32(c.r[5], c.r[18].w[0] + 144u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F163Cu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002F163Cu) [[unlikely]] return; }
L_002F163C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1644u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x002F1644u) [[unlikely]] return; }
L_002F1644:
    set32(c.r[6], c.r[18].w[0] + 128u);
    set32(c.r[7], 0u + 1024u);
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1658u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_007C(c, 201u, depth + 1u); else { c.pc = 0x002F23E0u; return; } if (c.pc != 0x002F1658u) [[unlikely]] return; }
L_002F1658:
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[18].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1668u); set32(c.r[6], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002F1668u) [[unlikely]] return; }
L_002F1668:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D800000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F167Cu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x002F167Cu) [[unlikely]] return; }
L_002F167C:
    c.f[1] = ld32((c.r[29].w[0] + 64u));
    c.f[0] = ld32((c.r[29].w[0] + 68u));
    c.f[2] = ld32((c.r[29].w[0] + 72u));
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.facc = fp::add(c.f[1], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F169Cu); c.f[12] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002F169Cu) [[unlikely]] return; }
L_002F169C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[3].d[0] = c.r[3].d[0] | 4719ull;
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F16C8; } }
    set32(c.r[4], c.r[18].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F16C8u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x002F16C8u) [[unlikely]] return; }
L_002F16C8:
    set32(c.r[3], ld32((c.r[16].w[0] + 520u)));
    st32((c.r[18].w[0] + 520u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 524u)));
    st32((c.r[18].w[0] + 524u), c.r[3].w[0]);
    c.f[3] = ld32((c.r[16].w[0] + 1328u));
    c.f[2] = ld32((c.r[16].w[0] + 1332u));
    c.f[1] = ld32((c.r[16].w[0] + 1336u));
    c.f[0] = ld32((c.r[16].w[0] + 1340u));
    st32((c.r[18].w[0] + 128u), c.f[3]);
    st32((c.r[18].w[0] + 132u), c.f[2]);
    st32((c.r[18].w[0] + 136u), c.f[1]);
    st32((c.r[18].w[0] + 140u), c.f[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 520u)));
    c.budget -= 15;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F17B0; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F17B0; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F17B0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F17B0; } }
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F175Cu); st16((c.r[18].w[0] + 514u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0081(c, 12u, depth + 1u); else { c.pc = 0x00304300u; return; } if (c.pc != 0x002F175Cu) [[unlikely]] return; }
L_002F175C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1764u); set32(c.r[4], c.r[16].w[0] + 2048u);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x002F1764u) [[unlikely]] return; }
L_002F1764:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F176Cu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 16u, depth + 1u); else { c.pc = 0x0013C860u; return; } if (c.pc != 0x002F176Cu) [[unlikely]] return; }
L_002F176C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1774u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x002F1774u) [[unlikely]] return; }
L_002F1774:
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[18].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1784u); mmi::paddub(c.r[6], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002F1784u) [[unlikely]] return; }
L_002F1784:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F178Cu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x002F178Cu) [[unlikely]] return; }
L_002F178C:
    set32(c.r[3], c.r[29].w[0] + 64u);
    c.f[3] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[18].w[0] + 64u), c.f[3]);
    st32((c.r[18].w[0] + 68u), c.f[2]);
    st32((c.r[18].w[0] + 72u), c.f[1]);
    st32((c.r[18].w[0] + 76u), c.f[0]);
    c.budget -= 9;
L_002F17B0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002F17D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F17F0u); mmi::paddub(c.r[5], c.r[6], c.r[0]);  if (depth < kMaxDepth) unit_007C(c, 233u, depth + 1u); else { c.pc = 0x002F2800u; return; } if (c.pc != 0x002F17F0u) [[unlikely]] return; }
L_002F17F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F18C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1800u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_007C(c, 235u, depth + 1u); else { c.pc = 0x002F28C0u; return; } if (c.pc != 0x002F1800u) [[unlikely]] return; }
L_002F1800:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F18C8; } }
    c.f[1] = ld32((c.r[17].w[0] + 108u));
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    c.f[2] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[17].w[0] + 104u), c.f[0]);  if (t) { goto L_002F1830; } }
    st32((c.r[17].w[0] + 104u), c.r[2].w[0]);
    c.budget -= 1;
L_002F1830:
    c.f[12] = ld32((c.r[17].w[0] + 104u));
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1840u); set32(c.r[5], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x002F1840u) [[unlikely]] return; }
L_002F1840:
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F184Cu); set32(c.r[5], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x002F184Cu) [[unlikely]] return; }
L_002F184C:
    set32(c.r[4], c.r[17].w[0] + 144u);
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F185Cu); set32(c.r[6], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x002F185Cu) [[unlikely]] return; }
L_002F185C:
    set32(c.r[6], c.r[17].w[0] + 144u);
    set32(c.r[7], 0u + 2048u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1870u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_007C(c, 201u, depth + 1u); else { c.pc = 0x002F23E0u; return; } if (c.pc != 0x002F1870u) [[unlikely]] return; }
L_002F1870:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F18C8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    set32(c.r[4], c.r[17].w[0] + 48u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[12] = ld32((c.r[17].w[0] + 104u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1894u); set32(c.r[5], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x002F1894u) [[unlikely]] return; }
L_002F1894:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] - 8896u);
    set32(c.r[5], c.r[17].w[0] + 128u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F18C8u); st32((c.r[16].w[0] + 64u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_007C(c, 217u, depth + 1u); else { c.pc = 0x002F2580u; return; } if (c.pc != 0x002F18C8u) [[unlikely]] return; }
L_002F18C8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002F18E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[6], c.r[0]);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1908u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_007C(c, 233u, depth + 1u); else { c.pc = 0x002F2800u; return; } if (c.pc != 0x002F1908u) [[unlikely]] return; }
L_002F1908:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F19D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1918u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_007C(c, 235u, depth + 1u); else { c.pc = 0x002F28C0u; return; } if (c.pc != 0x002F1918u) [[unlikely]] return; }
L_002F1918:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F19D8; } }
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F192Cu); set32(c.r[5], c.r[16].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x002F192Cu) [[unlikely]] return; }
L_002F192C:
    set32(c.r[6], ld32((c.r[18].w[0] + 64u)));
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F193Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_007C(c, 188u, depth + 1u); else { c.pc = 0x002F2270u; return; } if (c.pc != 0x002F193Cu) [[unlikely]] return; }
L_002F193C:
    set32(c.r[5], c.r[16].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1948u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_007C(c, 217u, depth + 1u); else { c.pc = 0x002F2580u; return; } if (c.pc != 0x002F1948u) [[unlikely]] return; }
L_002F1948:
    set32(c.r[6], c.r[16].w[0] + 128u);
    set32(c.r[7], 0u + 256u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F195Cu); mmi::paddub(c.r[5], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_007C(c, 201u, depth + 1u); else { c.pc = 0x002F23E0u; return; } if (c.pc != 0x002F195Cu) [[unlikely]] return; }
L_002F195C:
    set32(c.r[5], c.r[16].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1968u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_007C(c, 222u, depth + 1u); else { c.pc = 0x002F2690u; return; } if (c.pc != 0x002F1968u) [[unlikely]] return; }
L_002F1968:
    c.r[6].d[0] = c.r[2].d[0] << 48;
    set32(c.r[5], c.r[16].w[0] + 144u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F197Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 119u, depth + 1u); else { c.pc = 0x002DD5A0u; return; } if (c.pc != 0x002F197Cu) [[unlikely]] return; }
L_002F197C:
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1988u); set32(c.r[5], c.r[16].w[0] + 144u);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x002F1988u) [[unlikely]] return; }
L_002F1988:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F19D8; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 64u)));
    set32(c.r[3], 0u - 1u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], c.r[5].w[0] + 16u);  if (t) { goto L_002F19D4; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42000000u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 160u), c.r[3].w[0]);  if (t) { goto L_002F19D8; } }
    set32(c.r[3], c.r[5].w[0] + 16u);
    c.budget -= 1;
L_002F19D4:
    st32((c.r[18].w[0] + 64u), c.r[3].w[0]);
    c.budget -= 1;
L_002F19D8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002F19F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[6], c.r[0]);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1A18u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_007C(c, 233u, depth + 1u); else { c.pc = 0x002F2800u; return; } if (c.pc != 0x002F1A18u) [[unlikely]] return; }
L_002F1A18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F1B0C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1A28u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_007C(c, 235u, depth + 1u); else { c.pc = 0x002F28C0u; return; } if (c.pc != 0x002F1A28u) [[unlikely]] return; }
L_002F1A28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F1B0C; } }
    set32(c.r[6], ld32((c.r[18].w[0] + 64u)));
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1A40u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_007C(c, 188u, depth + 1u); else { c.pc = 0x002F2270u; return; } if (c.pc != 0x002F1A40u) [[unlikely]] return; }
L_002F1A40:
    set32(c.r[6], c.r[16].w[0] + 128u);
    set32(c.r[7], 0u + 1024u);
    mmi::paddub(c.r[5], c.r[18], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1A54u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_007C(c, 201u, depth + 1u); else { c.pc = 0x002F23E0u; return; } if (c.pc != 0x002F1A54u) [[unlikely]] return; }
L_002F1A54:
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[16].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1A64u); set32(c.r[6], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002F1A64u) [[unlikely]] return; }
L_002F1A64:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D800000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1A78u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x002F1A78u) [[unlikely]] return; }
L_002F1A78:
    c.f[1] = ld32((c.r[29].w[0] + 64u));
    c.f[0] = ld32((c.r[29].w[0] + 68u));
    c.f[2] = ld32((c.r[29].w[0] + 72u));
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.facc = fp::add(c.f[1], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1A98u); c.f[12] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002F1A98u) [[unlikely]] return; }
L_002F1A98:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002F1AC8; } }
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1AC4u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x002F1AC4u) [[unlikely]] return; }
L_002F1AC4:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002F1AC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1AD0u);  if (depth < kMaxDepth) unit_0077(c, 237u, depth + 1u); else { c.pc = 0x002DEC00u; return; } if (c.pc != 0x002F1AD0u) [[unlikely]] return; }
L_002F1AD0:
    c.f[2] = ld32((c.r[16].w[0] + 160u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 160u), c.f[1]);  if (t) { goto L_002F1B0C; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[16].w[0] + 160u), c.r[3].w[0]);
    c.budget -= 5;
L_002F1B0C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002F1B30:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 524u)));
    mmi::paddub(c.r[16], c.r[6], c.r[0]);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { goto L_002F1BD0; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 520u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[6], c.r[17].w[0] + 128u);  if (t) { goto L_002F1BD4; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F1BD0; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F1BD0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F1BD0; } }
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
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002F1BD0; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F1BD0; } }
    st32((c.r[17].w[0] + 520u), 0u);
    c.budget -= 1;
L_002F1BD0:
    set32(c.r[6], c.r[17].w[0] + 128u);
    c.budget -= 1;
L_002F1BD4:
    set32(c.r[7], 0u + 1024u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1BE0u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_007C(c, 201u, depth + 1u); else { c.pc = 0x002F23E0u; return; } if (c.pc != 0x002F1BE0u) [[unlikely]] return; }
L_002F1BE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1BE8u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 237u, depth + 1u); else { c.pc = 0x002DEC00u; return; } if (c.pc != 0x002F1BE8u) [[unlikely]] return; }
L_002F1BE8:
    c.f[2] = ld32((c.r[17].w[0] + 160u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 160u), c.f[1]);  if (t) { goto L_002F1C90; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1580u)));
    c.r[3].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002F1C90; } }
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    c.budget -= 1;
L_002F1C30:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1C4Cu); set32(c.r[19], c.r[18].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0077(c, 64u, depth + 1u); else { c.pc = 0x002DC7B0u; return; } if (c.pc != 0x002F1C4Cu) [[unlikely]] return; }
L_002F1C4C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_002F1C6C; }
    set32(c.r[2], ld32((c.r[17].w[0] + 520u)));
    set32(c.r[5], c.r[19].w[0] + 98u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1C68u); st32((c.r[17].w[0] + 524u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0079(c, 182u, depth + 1u); else { c.pc = 0x002E62A0u; return; } if (c.pc != 0x002F1C68u) [[unlikely]] return; }
L_002F1C68:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_002F1C6C:
    c.r[2].d[0] = c.r[18].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F1C30u | kUnwind; return; } goto L_002F1C30; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42700000u);
    st32((c.r[17].w[0] + 160u), c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1C90u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 35u, depth + 1u); else { c.pc = 0x00198550u; return; } if (c.pc != 0x002F1C90u) [[unlikely]] return; }
L_002F1C90:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002F1CB0:
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
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 160u), c.f[0]);  if (t) { goto L_002F1D5C; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    mmi::paddub(c.r[5], c.r[6], c.r[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E000000u);
    set32(c.r[2], c.r[28].w[0] - 28368u);
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1D38u); set32(c.r[6], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_007C(c, 188u, depth + 1u); else { c.pc = 0x002F2270u; return; } if (c.pc != 0x002F1D38u) [[unlikely]] return; }
L_002F1D38:
    set32(c.r[4], c.r[16].w[0] + 64u);
    set32(c.r[5], c.r[16].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1D48u); set32(c.r[6], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002F1D48u) [[unlikely]] return; }
L_002F1D48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1D50u); set32(c.r[4], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x002F1D50u) [[unlikely]] return; }
L_002F1D50:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1D5Cu); st8((c.r[16].w[0] + 530u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0081(c, 9u, depth + 1u); else { c.pc = 0x00304280u; return; } if (c.pc != 0x002F1D5Cu) [[unlikely]] return; }
L_002F1D5C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002F1D70:
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
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[4].w[0] + 104u), c.f[0]);  if (t) { goto L_002F1DB0; } }
    st32((c.r[17].w[0] + 104u), c.r[2].w[0]);
    c.budget -= 1;
L_002F1DB0:
    c.f[12] = ld32((c.r[17].w[0] + 104u));
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1DC0u); set32(c.r[5], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x002F1DC0u) [[unlikely]] return; }
L_002F1DC0:
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1DCCu); set32(c.r[5], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x002F1DCCu) [[unlikely]] return; }
L_002F1DCC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1DE0u); set32(c.r[5], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x002F1DE0u) [[unlikely]] return; }
L_002F1DE0:
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1DF0u); mmi::paddub(c.r[6], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x002F1DF0u) [[unlikely]] return; }
L_002F1DF0:
    set32(c.r[6], c.r[29].w[0] + 48u);
    set32(c.r[7], 0u + 2048u);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1E04u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_007C(c, 201u, depth + 1u); else { c.pc = 0x002F23E0u; return; } if (c.pc != 0x002F1E04u) [[unlikely]] return; }
L_002F1E04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F1E2C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    set32(c.r[4], c.r[17].w[0] + 48u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(0u));
    c.f[12] = ld32((c.r[17].w[0] + 104u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1E2Cu); set32(c.r[5], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x002F1E2Cu) [[unlikely]] return; }
L_002F1E2C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002F1E40:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1E6Cu); mmi::paddub(c.r[16], c.r[6], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x002F1E6Cu) [[unlikely]] return; }
L_002F1E6C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    set32(c.r[2], c.r[28].w[0] - 28376u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1E8Cu); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x002F1E8Cu) [[unlikely]] return; }
L_002F1E8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1E94u); set32(c.r[4], c.r[18].w[0] + 144u);  if (depth < kMaxDepth) unit_000F(c, 16u, depth + 1u); else { c.pc = 0x0013C860u; return; } if (c.pc != 0x002F1E94u) [[unlikely]] return; }
L_002F1E94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1E9Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x002F1E9Cu) [[unlikely]] return; }
L_002F1E9C:
    set32(c.r[5], c.r[18].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1EA8u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_007C(c, 217u, depth + 1u); else { c.pc = 0x002F2580u; return; } if (c.pc != 0x002F1EA8u) [[unlikely]] return; }
L_002F1EA8:
    set32(c.r[5], c.r[18].w[0] + 144u);
    set32(c.r[6], 0u + 2048u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1EB8u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 119u, depth + 1u); else { c.pc = 0x002DD5A0u; return; } if (c.pc != 0x002F1EB8u) [[unlikely]] return; }
L_002F1EB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1EC0u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x002F1EC0u) [[unlikely]] return; }
L_002F1EC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1ED4u); set32(c.r[5], c.r[18].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x002F1ED4u) [[unlikely]] return; }
L_002F1ED4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1EDCu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x002F1EDCu) [[unlikely]] return; }
L_002F1EDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1EE4u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002F1EE4u) [[unlikely]] return; }
L_002F1EE4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[4], c.r[2].w[0] - 9408u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1EF4u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 15u, depth + 1u); else { c.pc = 0x0013C690u; return; } if (c.pc != 0x002F1EF4u) [[unlikely]] return; }
L_002F1EF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1EFCu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002F1EFCu) [[unlikely]] return; }
L_002F1EFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1F04u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x002F1F04u) [[unlikely]] return; }
L_002F1F04:
    set32(c.r[4], c.r[18].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1F10u); set32(c.r[5], c.r[18].w[0] + 144u);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x002F1F10u) [[unlikely]] return; }
L_002F1F10:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F1F40; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D800000u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[18].w[0] + 160u), c.r[3].w[0]);
    c.budget -= 5;
L_002F1F40:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002F1F60:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[2], c.r[28].w[0] - 28380u);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    mmi::paddub(c.r[16], c.r[6], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1FA0u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x002F1FA0u) [[unlikely]] return; }
L_002F1FA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1FA8u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 16u, depth + 1u); else { c.pc = 0x0013C860u; return; } if (c.pc != 0x002F1FA8u) [[unlikely]] return; }
L_002F1FA8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    set32(c.r[2], c.r[28].w[0] - 28376u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1FC8u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002F1FC8u) [[unlikely]] return; }
L_002F1FC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1FD0u); set32(c.r[4], c.r[18].w[0] + 144u);  if (depth < kMaxDepth) unit_000F(c, 16u, depth + 1u); else { c.pc = 0x0013C860u; return; } if (c.pc != 0x002F1FD0u) [[unlikely]] return; }
L_002F1FD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1FD8u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x002F1FD8u) [[unlikely]] return; }
L_002F1FD8:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1FE4u); set32(c.r[5], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 25u, depth + 1u); else { c.pc = 0x0013CB10u; return; } if (c.pc != 0x002F1FE4u) [[unlikely]] return; }
L_002F1FE4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1FF8u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x002F1FF8u) [[unlikely]] return; }
L_002F1FF8:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2004u); set32(c.r[5], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x002F2004u) [[unlikely]] return; }
L_002F2004:
    set32(c.r[6], c.r[29].w[0] + 64u);
    set32(c.r[7], 0u + 1024u);
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2018u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_007C(c, 201u, depth + 1u); else { c.pc = 0x002F23E0u; return; } if (c.pc != 0x002F2018u) [[unlikely]] return; }
L_002F2018:
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[18].w[0] + 144u);
    set32(c.r[6], c.r[18].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F202Cu); mmi::paddub(c.r[17], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002F202Cu) [[unlikely]] return; }
L_002F202C:
    c.f[1] = ld32((c.r[18].w[0] + 160u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F2068; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 64u);
    fpu_div(c, 12u, c.f[0], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2068u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x002F2068u) [[unlikely]] return; }
L_002F2068:
    c.f[1] = ld32((c.r[29].w[0] + 64u));
    c.f[0] = ld32((c.r[29].w[0] + 68u));
    c.f[2] = ld32((c.r[29].w[0] + 72u));
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.facc = fp::add(c.f[1], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2088u); c.f[12] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002F2088u) [[unlikely]] return; }
L_002F2088:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[3].d[0] = c.r[3].d[0] | 4719ull;
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F20B4; } }
    set32(c.r[4], c.r[18].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F20B4u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x002F20B4u) [[unlikely]] return; }
L_002F20B4:
    c.f[1] = ld32((c.r[18].w[0] + 160u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[18].w[0] + 160u), c.f[0]);  if (t) { goto L_002F212C; } }
    c.f[1] = ld32((c.r[18].w[0] + 160u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F212C; } }
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
L_002F212C:
    c.f[1] = ld32((c.r[18].w[0] + 160u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F214C; } }
    st32((c.r[18].w[0] + 160u), 0u);
    c.budget -= 1;
L_002F214C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002F2170:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[6].w[0] + 742u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002F21AC; } }
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002F21B4; } }
L_002F21AC:
    set32(c.r[3], 0u + 3u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002F21B4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 6u));
    c.r[3].d[0] = c.r[3].d[0] & 16ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F21FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F21D4u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0047(c, 214u, depth + 1u); else { c.pc = 0x0021ED70u; return; } if (c.pc != 0x002F21D4u) [[unlikely]] return; }
L_002F21D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[18], c.r[2].w[0] - 8832u);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 3;
L_002F21E0:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F21ECu); mmi::paddub(c.r[5], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_004C(c, 283u, depth + 1u); else { c.pc = 0x002335D0u; return; } if (c.pc != 0x002F21ECu) [[unlikely]] return; }
L_002F21EC:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F21E0u | kUnwind; return; } goto L_002F21E0; } }
L_002F21FC:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002F2220:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_002F2230:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2248u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002F2248u) [[unlikely]] return; }
L_002F2248:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2250u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 17u, depth + 1u); else { c.pc = 0x0013C880u; return; } if (c.pc != 0x002F2250u) [[unlikely]] return; }
L_002F2250:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2258u); set32(c.r[4], ld32((c.r[16].w[0] + 188u)));  if (depth < kMaxDepth) unit_000F(c, 36u, depth + 1u); else { c.pc = 0x0013CD20u; return; } if (c.pc != 0x002F2258u) [[unlikely]] return; }
L_002F2258:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002F2270:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[0] = ld32((c.r[5].w[0] + 2096u));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    mmi::paddub(c.r[16], c.r[6], c.r[0]);
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[6], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 2100u));
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 2104u));
    set32(c.r[5], c.r[17].w[0] + 128u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F22B4u); st32((c.r[29].w[0] + 72u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002F22B4u) [[unlikely]] return; }
L_002F22B4:
    set32(c.r[18], c.r[29].w[0] + 88u);
    c.f[1] = ld32((c.r[29].w[0] + 80u));
    c.f[0] = ld32((c.r[18].w[0]));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F22CCu); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002F22CCu) [[unlikely]] return; }
L_002F22CC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002F2304; } }
    c.f[12] = ld32((c.r[29].w[0] + 80u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F22F8u); c.f[13] = ld32((c.r[18].w[0]));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x002F22F8u) [[unlikely]] return; }
L_002F22F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[18], c.r[2], c.r[0]);  if (t) { goto L_002F2308; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_002F2304:
    mmi::paddub(c.r[18], c.r[2], c.r[0]);
    c.budget -= 1;
L_002F2308:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2310u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x002F2310u) [[unlikely]] return; }
L_002F2310:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2318u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002F2318u) [[unlikely]] return; }
L_002F2318:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 2u)));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    set32(c.r[2], c.r[2].w[0] << 12);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F232Cu); set32(c.r[4], c.r[18].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002F232Cu) [[unlikely]] return; }
L_002F232C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 2u)));
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2340u); set32(c.r[4], c.r[2].w[0] << 12);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002F2340u) [[unlikely]] return; }
L_002F2340:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[4], c.r[2].w[0] - 9392u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2350u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x002F2350u) [[unlikely]] return; }
L_002F2350:
    c.f[12] = ld32((c.r[16].w[0] + 4u));
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2360u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x002F2360u) [[unlikely]] return; }
L_002F2360:
    c.f[1] = ld32((c.r[29].w[0] + 84u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41080000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[17].w[0] + 144u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    set32(c.r[6], c.r[17].w[0] + 128u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2384u); st32((c.r[29].w[0] + 84u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x002F2384u) [[unlikely]] return; }
L_002F2384:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F238Cu); set32(c.r[4], c.r[17].w[0] + 144u);  if (depth < kMaxDepth) unit_0045(c, 192u, depth + 1u); else { c.pc = 0x00217510u; return; } if (c.pc != 0x002F238Cu) [[unlikely]] return; }
L_002F238C:
    c.f[1] = ld32((c.r[17].w[0] + 148u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40900000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], 0u + 1u);  if (t) { goto L_002F23BC; } }
    c.f[0] = fp::add(c.f[2], c.f[0]);
    st32((c.r[17].w[0] + 148u), c.f[0]);
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
L_002F23BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F23C4u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x002F23C4u) [[unlikely]] return; }
L_002F23C4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002F23E0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    mmi::paddub(c.r[18], c.r[6], c.r[0]);
    mmi::paddub(c.r[16], c.r[7], c.r[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2414u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x002F2414u) [[unlikely]] return; }
L_002F2414:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F241Cu); set32(c.r[4], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 17u, depth + 1u); else { c.pc = 0x0013C880u; return; } if (c.pc != 0x002F241Cu) [[unlikely]] return; }
L_002F241C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F242Cu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 211u, depth + 1u); else { c.pc = 0x00102548u; return; } if (c.pc != 0x002F242Cu) [[unlikely]] return; }
L_002F242C:
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2438u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002F2438u) [[unlikely]] return; }
L_002F2438:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F244Cu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x002F244Cu) [[unlikely]] return; }
L_002F244C:
    set32(c.r[18], c.r[29].w[0] + 100u);
    c.f[12] = ld32((c.r[29].w[0] + 96u));
    c.f[13] = ld32((c.r[18].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2460u); set32(c.r[20], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x002F2460u) [[unlikely]] return; }
L_002F2460:
    c.f[1] = ld32((c.r[29].w[0] + 96u));
    c.f[0] = ld32((c.r[18].w[0]));
    c.r[19].d[0] = c.r[2].d[0] << 48;
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 48);
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F247Cu); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002F247Cu) [[unlikely]] return; }
L_002F247C:
    c.f[12] = ld32((c.r[29].w[0] + 104u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2488u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x002F2488u) [[unlikely]] return; }
L_002F2488:
    c.f[0] = c.r[19].w[0];
    c.r[18].d[0] = c.r[2].d[0] << 48;
    c.f[12] = fp::cvt_s_w(c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F249Cu); c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);  if (depth < kMaxDepth) unit_000E(c, 291u, depth + 1u); else { c.pc = 0x0013B4D0u; return; } if (c.pc != 0x002F249Cu) [[unlikely]] return; }
L_002F249C:
    c.f[1] = c.r[16].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F24DC; } }
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] >= 0; c.r[19].d[0] = c.r[16].d[0] << 48;  if (t) { goto L_002F24D4; } }
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[19], 0u - c.r[2].w[0]);  if (t) { goto L_002F24D8; } }
    c.r[19].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_002F24D4:
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 48);
    c.budget -= 1;
L_002F24D8:
    mmi::paddub(c.r[20], c.r[0], c.r[0]);
    c.budget -= 1;
L_002F24DC:
    c.f[0] = c.r[18].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F24E8u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 291u, depth + 1u); else { c.pc = 0x0013B4D0u; return; } if (c.pc != 0x002F24E8u) [[unlikely]] return; }
L_002F24E8:
    c.f[1] = c.r[16].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_002F252C; } }
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] >= 0; c.r[18].d[0] = c.r[16].d[0] << 48;  if (t) { goto L_002F2520; } }
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u - c.r[2].w[0]);  if (t) { goto L_002F2524; } }
    c.r[18].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_002F2520:
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);
    c.budget -= 1;
L_002F2524:
    mmi::paddub(c.r[20], c.r[0], c.r[0]);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 2;
L_002F252C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2534u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002F2534u) [[unlikely]] return; }
L_002F2534:
    set32(c.r[2], 0u - c.r[19].w[0]);
    c.r[3].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2544u); c.r[4].d[0] = c.r[2].d[0] & c.r[3].d[0];  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002F2544u) [[unlikely]] return; }
L_002F2544:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F254Cu); c.r[4].d[0] = c.r[18].d[0] & 65535ull;  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002F254Cu) [[unlikely]] return; }
L_002F254C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2554u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002F2554u) [[unlikely]] return; }
L_002F2554:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F255Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x002F255Cu) [[unlikely]] return; }
L_002F255C:
    mmi::paddub(c.r[2], c.r[20], c.r[0]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002F2580:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[4], c.r[17].w[0] + 48u);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F25A4u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_000F(c, 20u, depth + 1u); else { c.pc = 0x0013C9E0u; return; } if (c.pc != 0x002F25A4u) [[unlikely]] return; }
L_002F25A4:
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.f[20] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F25B4u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x002F25B4u) [[unlikely]] return; }
L_002F25B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], c.r[2].w[0] - 9344u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 3;
L_002F25C0:
    c.f[1] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F25E8; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[4].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F25C0u | kUnwind; return; } goto L_002F25C0; } }
    c.budget -= 1;
L_002F25E8:
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[20]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F2628; } }
    c.f[0] = fp::sub(c.f[1], c.f[20]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E000000u);
    c.f[2] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 8;
    if (!(c.fcr31 & kFpuCondition)) { c.f[20] = fp::add(c.f[20], c.f[2]);  goto L_002F2628; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = c.f[1];  if (t) { goto L_002F2628; } }
    c.f[20] = fp::add(c.f[20], c.f[2]);
    c.budget -= 1;
L_002F2628:
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[17].w[0] + 48u);  if (t) { goto L_002F2668; } }
    c.f[0] = fp::sub(c.f[20], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E000000u);
    c.f[2] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 8;
    if (!(c.fcr31 & kFpuCondition)) { c.f[20] = fp::sub(c.f[20], c.f[2]);  goto L_002F2664; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = c.f[1];  if (t) { goto L_002F2664; } }
    c.f[20] = fp::sub(c.f[20], c.f[2]);
    c.budget -= 1;
L_002F2664:
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.budget -= 1;
L_002F2668:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2674u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x002F2674u) [[unlikely]] return; }
L_002F2674:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002F2690:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F26B4u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 21u, depth + 1u); else { c.pc = 0x0013CA20u; return; } if (c.pc != 0x002F26B4u) [[unlikely]] return; }
L_002F26B4:
    set32(c.r[6], c.r[17].w[0] + 32u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F26C4u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002F26C4u) [[unlikely]] return; }
L_002F26C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F26CCu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x002F26CCu) [[unlikely]] return; }
L_002F26CC:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F26D8u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x002F26D8u) [[unlikely]] return; }
L_002F26D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_002F26F8; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_002F26F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);  if (t) { goto L_002F2714; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[12] = c.f[0];  if (t) { goto L_002F2738; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.budget -= 1;
L_002F2714:
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F2734; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[1];  if (t) { goto L_002F2734; } }
L_002F2734:
    c.f[12] = c.f[0];
    c.budget -= 1;
L_002F2738:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2740u);  if (depth < kMaxDepth) unit_000E(c, 285u, depth + 1u); else { c.pc = 0x0013B410u; return; } if (c.pc != 0x002F2740u) [[unlikely]] return; }
L_002F2740:
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);
    c.f[0] = c.r[16].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2754u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 291u, depth + 1u); else { c.pc = 0x0013B4D0u; return; } if (c.pc != 0x002F2754u) [[unlikely]] return; }
L_002F2754:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x46800000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F277C; } }
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 1));
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);
    c.budget -= 3;
L_002F277C:
    c.f[0] = c.r[16].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2788u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 291u, depth + 1u); else { c.pc = 0x0013B4D0u; return; } if (c.pc != 0x002F2788u) [[unlikely]] return; }
L_002F2788:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2790u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002F2790u) [[unlikely]] return; }
L_002F2790:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2798u); mmi::paddub(c.r[4], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x002F2798u) [[unlikely]] return; }
L_002F2798:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F27A8u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002F27A8u) [[unlikely]] return; }
L_002F27A8:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[1].d[0] = c.r[3].sd[0] < 3585ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; c.r[2].d[0] = c.r[3].d[0] << 48;  if (t) { goto L_002F27C4; } }
    set32(c.r[3], 0u + 3584u);
    c.r[2].d[0] = c.r[3].d[0] << 48;
    c.budget -= 2;
L_002F27C4:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[1].d[0] = c.r[2].sd[0] < 768ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002F27D8; } }
    set32(c.r[3], 0u + 768u);
    c.budget -= 1;
L_002F27D8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[3].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002F2800:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[4].w[0] + 520u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F288C; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 9u);  if (t) { goto L_002F283C; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F2838; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F2868; } }
L_002F2838:
    set32(c.r[2], 0u + 9u);
    c.budget -= 1;
L_002F283C:
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[4].w[0] + 520u), 0u);
    st32((c.r[4].w[0] + 524u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    st32((c.r[4].w[0] + 104u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E000000u);
    st32((c.r[4].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2860u); st8((c.r[4].w[0] + 530u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0081(c, 9u, depth + 1u); else { c.pc = 0x00304280u; return; } if (c.pc != 0x002F2860u) [[unlikely]] return; }
L_002F2860:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002F28B0; } }
L_002F2868:
    c.f[3] = ld32((c.r[3].w[0] + 80u));
    c.f[2] = ld32((c.r[3].w[0] + 84u));
    c.f[1] = ld32((c.r[3].w[0] + 88u));
    c.f[0] = ld32((c.r[3].w[0] + 92u));
    st32((c.r[4].w[0] + 128u), c.f[3]);
    st32((c.r[4].w[0] + 132u), c.f[2]);
    st32((c.r[4].w[0] + 136u), c.f[1]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 140u), c.f[0]);  if (t) { goto L_002F28AC; } }
L_002F288C:
    c.f[3] = ld32((c.r[5].w[0] + 1328u));
    c.f[2] = ld32((c.r[5].w[0] + 1332u));
    c.f[1] = ld32((c.r[5].w[0] + 1336u));
    c.f[0] = ld32((c.r[5].w[0] + 1340u));
    st32((c.r[4].w[0] + 128u), c.f[3]);
    st32((c.r[4].w[0] + 132u), c.f[2]);
    st32((c.r[4].w[0] + 136u), c.f[1]);
    st32((c.r[4].w[0] + 140u), c.f[0]);
    c.budget -= 8;
L_002F28AC:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_002F28B0:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002F28C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002F2918; } }
    set32(c.r[2], 0u + 9u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[4].w[0] + 520u), 0u);
    st32((c.r[4].w[0] + 524u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    st32((c.r[4].w[0] + 104u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E000000u);
    st32((c.r[4].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F290Cu); st8((c.r[4].w[0] + 530u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0081(c, 9u, depth + 1u); else { c.pc = 0x00304280u; return; } if (c.pc != 0x002F290Cu) [[unlikely]] return; }
L_002F290C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002F2918; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_002F2918:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002F2930:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 369u)));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[17], c.r[6], c.r[0]);  if (t) { goto L_002F2970; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2968u);  if (depth < kMaxDepth) unit_007E(c, 239u, depth + 1u); else { c.pc = 0x002FA2E0u; return; } if (c.pc != 0x002F2968u) [[unlikely]] return; }
L_002F2968:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);  if (t) { goto L_002F29F0; } }
L_002F2970:
    set32(c.r[4], 0u + 1u);
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2980u); mmi::paddub(c.r[6], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x002F2980u) [[unlikely]] return; }
L_002F2980:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[2], c.r[0]);  if (t) { goto L_002F29E8; } }
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 17u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[18].w[0]));
    st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    st16((c.r[16].w[0] + 514u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] + 10768u);
    st16((c.r[16].w[0] + 516u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    set32(c.r[2], c.r[2].w[0] + 15136u);
    st32((c.r[16].w[0] + 168u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 180u)));
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[16].w[0] + 184u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 184u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F29E8u); st32((c.r[16].w[0] + 188u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0081(c, 114u, depth + 1u); else { c.pc = 0x00305C00u; return; } if (c.pc != 0x002F29E8u) [[unlikely]] return; }
L_002F29E8:
    mmi::paddub(c.r[2], c.r[16], c.r[0]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    c.budget -= 2;
L_002F29F0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002F2A10:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[6], ld32((c.r[4].w[0] + 264u)));
    set32(c.r[2], c.r[2].w[0] - 7584u);
    set32(c.r[5], c.r[4].w[0] + 320u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[7], c.r[6].w[0] + 320u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002F0000u < 16384u) { entry = entries_007C[(t - 0x002F0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002F2A40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 4u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { mmi::paddub(c.r[5], c.r[7], c.r[0]);  goto L_002F2A68; }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 514u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F2A78; } }
    mmi::paddub(c.r[5], c.r[7], c.r[0]);
    c.budget -= 1;
L_002F2A68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2A70u);  if (depth < kMaxDepth) unit_007C(c, 390u, depth + 1u); else { c.pc = 0x002F3F30u; return; } if (c.pc != 0x002F2A70u) [[unlikely]] return; }
L_002F2A70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_002F2A98; } }
L_002F2A78:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[2], c.r[28].w[0] - 28328u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2A94u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F2A94u) [[unlikely]] return; }
L_002F2A94:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_002F2A98:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002F2AA0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[4], c.r[3].w[0] + 16u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 16u));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[16], c.r[6], c.r[0]);  if (t) { goto L_002F2B60; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    set32(c.r[3], 0u - 16384u);
    set32(c.r[2], 0u + 224u);
    set32(c.r[4], c.r[16].w[0] + 2048u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[18].w[0] + 104u), 0u);
    st32((c.r[18].w[0] + 80u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 84u), 0u);
    st8((c.r[18].w[0] + 579u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2B10u); st32((c.r[17].w[0] + 108u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002F2B10u) [[unlikely]] return; }
L_002F2B10:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] - 8704u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[13] = ld32((c.r[2].w[0] + 4u));
    c.f[14] = ld32((c.r[2].w[0] + 8u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2B34u); c.f[12] = ld32((c.r[2].w[0]));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002F2B34u) [[unlikely]] return; }
L_002F2B34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2B3Cu); set32(c.r[4], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 16u, depth + 1u); else { c.pc = 0x0013C860u; return; } if (c.pc != 0x002F2B3Cu) [[unlikely]] return; }
L_002F2B3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2B44u); set32(c.r[4], ld32((c.r[18].w[0] + 80u)));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002F2B44u) [[unlikely]] return; }
L_002F2B44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2B4Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002F2B4Cu) [[unlikely]] return; }
L_002F2B4C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 760u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002F2B60; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[18].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002F2B60:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002F2B80:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[17], c.r[6], c.r[0]);
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], c.r[17].w[0] + 2048u);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2BB0u); mmi::paddub(c.r[16], c.r[7], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002F2BB0u) [[unlikely]] return; }
L_002F2BB0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 10u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] - 8704u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[13] = ld32((c.r[2].w[0] + 4u));
    c.f[14] = ld32((c.r[2].w[0] + 8u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2BD4u); c.f[12] = ld32((c.r[2].w[0]));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002F2BD4u) [[unlikely]] return; }
L_002F2BD4:
    c.f[1] = ld32((c.r[19].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBFA00000u);
    c.f[0] = c.r[2].w[0];
    c.f[12] = 0u;
    c.f[13] = c.f[12];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[19].w[0] + 104u), c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2BFCu); c.f[14] = c.f[0];  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002F2BFCu) [[unlikely]] return; }
L_002F2BFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2C04u); set32(c.r[4], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 16u, depth + 1u); else { c.pc = 0x0013C860u; return; } if (c.pc != 0x002F2C04u) [[unlikely]] return; }
L_002F2C04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2C0Cu); set32(c.r[4], ld32((c.r[19].w[0] + 80u)));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002F2C0Cu) [[unlikely]] return; }
L_002F2C0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2C14u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002F2C14u) [[unlikely]] return; }
L_002F2C14:
    c.f[1] = ld32((c.r[19].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2200000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (t) { goto L_002F2D78; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 4u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[17].w[0] + 2048u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[19].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[19].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st8((c.r[19].w[0] + 6u), static_cast<std::uint8_t>(0u));
    st32((c.r[19].w[0] + 92u), 0u);
    st32((c.r[19].w[0] + 96u), 0u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st8((c.r[2].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 10u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2C80u); st8((c.r[2].w[0] + 16u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002F2C80u) [[unlikely]] return; }
L_002F2C80:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2C90u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 211u, depth + 1u); else { c.pc = 0x00102548u; return; } if (c.pc != 0x002F2C90u) [[unlikely]] return; }
L_002F2C90:
    set32(c.r[4], c.r[19].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2C9Cu); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002F2C9Cu) [[unlikely]] return; }
L_002F2C9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2CA4u);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x002F2CA4u) [[unlikely]] return; }
L_002F2CA4:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2CB0u); c.r[16].d[0] = c.r[2].d[0] & 1ull;  if (depth < kMaxDepth) unit_000F(c, 20u, depth + 1u); else { c.pc = 0x0013C9E0u; return; } if (c.pc != 0x002F2CB0u) [[unlikely]] return; }
L_002F2CB0:
    set32(c.r[2], c.r[28].w[0] - 28360u);
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[19].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    set32(c.r[3], c.r[16].w[0] << 4);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] - 8672u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[19].w[0] + 108u), c.f[0]);
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    set32(c.r[3], c.r[29].w[0] + 80u);
    st32((c.r[19].w[0] + 128u), c.f[3]);
    st32((c.r[19].w[0] + 132u), c.f[2]);
    st32((c.r[19].w[0] + 136u), c.f[1]);
    st32((c.r[19].w[0] + 140u), c.f[0]);
    st32((c.r[19].w[0] + 144u), 0u);
    st32((c.r[19].w[0] + 148u), 0u);
    st32((c.r[19].w[0] + 152u), 0u);
    c.f[3] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    set32(c.r[2], 0u + 793u);
    st32((c.r[19].w[0] + 112u), c.f[3]);
    st32((c.r[19].w[0] + 116u), c.f[2]);
    st32((c.r[19].w[0] + 120u), c.f[1]);
    st32((c.r[19].w[0] + 124u), c.f[0]);
    c.budget -= 33;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2D34u); st32((c.r[19].w[0] + 88u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x002F2D34u) [[unlikely]] return; }
L_002F2D34:
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] - 8640u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[19].w[0] + 100u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 10u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F2D74; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 88u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    st32((c.r[19].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 100u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    st32((c.r[19].w[0] + 100u), c.r[2].w[0]);
    c.budget -= 6;
L_002F2D74:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 1;
L_002F2D78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2D80u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002F2D80u) [[unlikely]] return; }
L_002F2D80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2D88u); set32(c.r[4], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 17u, depth + 1u); else { c.pc = 0x0013C880u; return; } if (c.pc != 0x002F2D88u) [[unlikely]] return; }
L_002F2D88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2D90u); set32(c.r[4], c.r[19].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002F2D90u) [[unlikely]] return; }
L_002F2D90:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 760u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002F2DA4; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[19].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002F2DA4:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002F2DC0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 4u)));
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    mmi::paddub(c.r[16], c.r[7], c.r[0]);
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[17], c.r[6], c.r[0]);  if (t) { goto L_002F2E00; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 514u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F2E14; } }
L_002F2E00:
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2E0Cu); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_007C(c, 390u, depth + 1u); else { c.pc = 0x002F3F30u; return; } if (c.pc != 0x002F2E0Cu) [[unlikely]] return; }
L_002F2E0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);  if (t) { goto L_002F2EB4; } }
L_002F2E14:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 5u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F2E58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2E28u); set32(c.r[4], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_0045(c, 192u, depth + 1u); else { c.pc = 0x00217510u; return; } if (c.pc != 0x002F2E28u) [[unlikely]] return; }
L_002F2E28:
    c.f[1] = ld32((c.r[19].w[0] + 36u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40990000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.f[2] = c.r[2].w[0];
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F2E58; } }
    c.f[0] = fp::add(c.f[2], c.f[0]);
    st32((c.r[19].w[0] + 36u), c.f[0]);
    c.budget -= 2;
L_002F2E58:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 5u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] - 7568u);
    mmi::paddub(c.r[7], c.r[16], c.r[0]);
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    mmi::paddub(c.r[5], c.r[18], c.r[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2E84u); mmi::paddub(c.r[6], c.r[17], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F2E84u) [[unlikely]] return; }
L_002F2E84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2E8Cu); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002F2E8Cu) [[unlikely]] return; }
L_002F2E8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2E94u); set32(c.r[4], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 17u, depth + 1u); else { c.pc = 0x0013C880u; return; } if (c.pc != 0x002F2E94u) [[unlikely]] return; }
L_002F2E94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2E9Cu); set32(c.r[4], c.r[19].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002F2E9Cu) [[unlikely]] return; }
L_002F2E9C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 760u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002F2EB0; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[19].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002F2EB0:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002F2EB4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002F2ED0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[6], c.r[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 88u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[1] = c.r[2].w[0];
    mmi::paddub(c.r[17], c.r[7], c.r[0]);
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    set32(c.r[2], c.r[6].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0] + 92u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 100u)));
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[4].w[0] + 96u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 80u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2F34u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002F2F34u) [[unlikely]] return; }
L_002F2F34:
    st32((c.r[19].w[0] + 80u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[19].w[0] + 84u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2F58u); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002F2F58u) [[unlikely]] return; }
L_002F2F58:
    st32((c.r[19].w[0] + 84u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[19].w[0] + 108u));
    c.f[1] = ld32((c.r[19].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.f[2] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[19].w[0] + 128u);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    set32(c.r[6], c.r[19].w[0] + 144u);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2F90u); st32((c.r[19].w[0] + 104u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002F2F90u) [[unlikely]] return; }
L_002F2F90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D800000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2FA4u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x002F2FA4u) [[unlikely]] return; }
L_002F2FA4:
    set32(c.r[4], c.r[19].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2FB0u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x002F2FB0u) [[unlikely]] return; }
L_002F2FB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2FB8u); set32(c.r[4], c.r[16].w[0] + 2048u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002F2FB8u) [[unlikely]] return; }
L_002F2FB8:
    c.f[13] = ld32((c.r[19].w[0] + 148u));
    c.f[14] = ld32((c.r[19].w[0] + 152u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2FC8u); c.f[12] = ld32((c.r[19].w[0] + 144u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002F2FC8u) [[unlikely]] return; }
L_002F2FC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2FD0u); set32(c.r[4], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 16u, depth + 1u); else { c.pc = 0x0013C860u; return; } if (c.pc != 0x002F2FD0u) [[unlikely]] return; }
L_002F2FD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2FD8u); set32(c.r[4], ld32((c.r[19].w[0] + 96u)));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002F2FD8u) [[unlikely]] return; }
L_002F2FD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2FE0u); set32(c.r[4], ld32((c.r[19].w[0] + 92u)));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002F2FE0u) [[unlikely]] return; }
L_002F2FE0:
    set32(c.r[4], c.r[19].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2FECu); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x002F2FECu) [[unlikely]] return; }
L_002F2FEC:
    c.f[12] = ld32((c.r[19].w[0] + 104u));
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2FFCu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x002F2FFCu) [[unlikely]] return; }
L_002F2FFC:
    set32(c.r[4], c.r[19].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3008u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x002F3008u) [[unlikely]] return; }
L_002F3008:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3010u); set32(c.r[4], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 17u, depth + 1u); else { c.pc = 0x0013C880u; return; } if (c.pc != 0x002F3010u) [[unlikely]] return; }
L_002F3010:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 10u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 80u)));
    set32(c.r[3], c.r[3].w[0] << 15);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3024u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002F3024u) [[unlikely]] return; }
L_002F3024:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F302Cu); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002F302Cu) [[unlikely]] return; }
L_002F302C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 8u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F3150; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 520u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002F3058; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3058u); mmi::paddub(c.r[5], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 114u, depth + 1u); else { c.pc = 0x00305C00u; return; } if (c.pc != 0x002F3058u) [[unlikely]] return; }
L_002F3058:
    set32(c.r[16], ld32((c.r[19].w[0] + 520u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002F314C; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 2u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F314C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F314C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F314C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3090u); set32(c.r[4], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_0045(c, 192u, depth + 1u); else { c.pc = 0x00217510u; return; } if (c.pc != 0x002F3090u) [[unlikely]] return; }
L_002F3090:
    c.f[1] = ld32((c.r[19].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F3150; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 5u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F230000u);
    c.r[3].d[0] = c.r[2].d[0] | 55050ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[19].w[0] + 5u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[19].w[0] + 104u), c.r[5].w[0]);
    st32((c.r[19].w[0] + 108u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[3].d[0] & 15ull;
    st8((c.r[19].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[18].w[0] + 100u), c.r[2].w[0]);
    c.f[3] = ld32((c.r[16].w[0] + 80u));
    c.f[2] = ld32((c.r[16].w[0] + 84u));
    c.f[1] = ld32((c.r[16].w[0] + 88u));
    c.f[0] = ld32((c.r[16].w[0] + 92u));
    st32((c.r[18].w[0] + 64u), c.f[3]);
    st32((c.r[18].w[0] + 68u), c.f[2]);
    st32((c.r[18].w[0] + 72u), c.f[1]);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3108u); st32((c.r[18].w[0] + 76u), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002F3108u) [[unlikely]] return; }
L_002F3108:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[4], c.r[2].w[0] - 8608u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3118u); set32(c.r[5], c.r[19].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x002F3118u) [[unlikely]] return; }
L_002F3118:
    c.f[12] = ld32((c.r[19].w[0] + 104u));
    set32(c.r[4], c.r[19].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3128u); set32(c.r[5], c.r[19].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x002F3128u) [[unlikely]] return; }
L_002F3128:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 530u));
    set32(c.r[6], 0u + 34u);
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3144u); st8((c.r[19].w[0] + 530u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0081(c, 12u, depth + 1u); else { c.pc = 0x00304300u; return; } if (c.pc != 0x002F3144u) [[unlikely]] return; }
L_002F3144:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);  if (t) { goto L_002F3154; } }
L_002F314C:
    st32((c.r[19].w[0] + 520u), 0u);
    c.budget -= 1;
L_002F3150:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002F3154:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002F3170:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3194u); mmi::paddub(c.r[18], c.r[6], c.r[0]);  if (depth < kMaxDepth) unit_007C(c, 386u, depth + 1u); else { c.pc = 0x002F3E10u; return; } if (c.pc != 0x002F3194u) [[unlikely]] return; }
L_002F3194:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F32A0; } }
    c.f[1] = ld32((c.r[17].w[0] + 108u));
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41180000u);
    c.f[2] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[17].w[0] + 104u), c.f[0]);  if (t) { goto L_002F31C4; } }
    st32((c.r[17].w[0] + 104u), c.r[2].w[0]);
    c.budget -= 1;
L_002F31C4:
    c.f[12] = ld32((c.r[17].w[0] + 104u));
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F31D4u); set32(c.r[5], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x002F31D4u) [[unlikely]] return; }
L_002F31D4:
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F31E0u); set32(c.r[5], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x002F31E0u) [[unlikely]] return; }
L_002F31E0:
    set32(c.r[6], c.r[16].w[0] + 64u);
    set32(c.r[7], 0u + 512u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F31F4u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_007C(c, 372u, depth + 1u); else { c.pc = 0x002F3C80u; return; } if (c.pc != 0x002F31F4u) [[unlikely]] return; }
L_002F31F4:
    c.f[2] = ld32((c.r[16].w[0] + 100u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 100u), c.f[1]);  if (t) { goto L_002F32A0; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    set32(c.r[4], 0u + 300u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    set32(c.r[3], c.r[28].w[0] - 28352u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(0u));
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st32((c.r[16].w[0] + 100u), c.r[2].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    mmi::paddub(c.r[6], c.r[18], c.r[0]);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.r[7].d[0] = c.r[7].d[0] & 1ull;
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[7].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3278u); st32((c.r[16].w[0] + 96u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_007C(c, 362u, depth + 1u); else { c.pc = 0x002F3B60u; return; } if (c.pc != 0x002F3278u) [[unlikely]] return; }
L_002F3278:
    set32(c.r[5], c.r[16].w[0] + 80u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3288u); set32(c.r[6], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002F3288u) [[unlikely]] return; }
L_002F3288:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3290u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x002F3290u) [[unlikely]] return; }
L_002F3290:
    c.f[12] = ld32((c.r[17].w[0] + 104u));
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F32A0u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x002F32A0u) [[unlikely]] return; }
L_002F32A0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002F32C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F32E4u); mmi::paddub(c.r[16], c.r[6], c.r[0]);  if (depth < kMaxDepth) unit_007C(c, 386u, depth + 1u); else { c.pc = 0x002F3E10u; return; } if (c.pc != 0x002F32E4u) [[unlikely]] return; }
L_002F32E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F3458; } }
    c.f[1] = ld32((c.r[17].w[0] + 100u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_002F3448; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 164u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 6u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002F333C; } }
    set32(c.r[2], c.r[28].w[0] - 28344u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F333Cu); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 35u, depth + 1u); else { c.pc = 0x00198550u; return; } if (c.pc != 0x002F333Cu) [[unlikely]] return; }
L_002F333C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 6u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[18].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[2].d[0] = c.r[2].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[6], c.r[16], c.r[0]);  if (t) { goto L_002F3368; } }
    set32(c.r[2], 0u + 10u);
    st8((c.r[18].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[6], c.r[16], c.r[0]);
    c.budget -= 3;
L_002F3368:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3374u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_007C(c, 362u, depth + 1u); else { c.pc = 0x002F3B60u; return; } if (c.pc != 0x002F3374u) [[unlikely]] return; }
L_002F3374:
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[17].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3384u); set32(c.r[6], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002F3384u) [[unlikely]] return; }
L_002F3384:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F338Cu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 20u, depth + 1u); else { c.pc = 0x0013C9E0u; return; } if (c.pc != 0x002F338Cu) [[unlikely]] return; }
L_002F338C:
    c.f[12] = ld32((c.r[18].w[0] + 104u));
    set32(c.r[4], c.r[18].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F339Cu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x002F339Cu) [[unlikely]] return; }
L_002F339C:
    set32(c.r[6], c.r[17].w[0] + 64u);
    set32(c.r[7], 0u + 3072u);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F33B0u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_007C(c, 372u, depth + 1u); else { c.pc = 0x002F3C80u; return; } if (c.pc != 0x002F33B0u) [[unlikely]] return; }
L_002F33B0:
    set32(c.r[4], c.r[18].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F33BCu); set32(c.r[5], c.r[17].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x002F33BCu) [[unlikely]] return; }
L_002F33BC:
    c.f[1] = ld32((c.r[18].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F33DC; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[18].w[0] + 32u);  if (t) { goto L_002F3434; } }
L_002F33DC:
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[3], 0u - 1u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 300u);  if (t) { goto L_002F3410; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42700000u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[18].w[0] + 6u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), c.r[3].w[0]);  if (t) { goto L_002F3458; } }
    set32(c.r[3], 0u + 300u);
    c.budget -= 1;
L_002F3410:
    st8((c.r[18].w[0] + 6u), static_cast<std::uint8_t>(0u));
    st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41400000u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    st32((c.r[17].w[0] + 96u), c.r[4].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), c.r[3].w[0]);  if (t) { goto L_002F3458; } }
    set32(c.r[4], c.r[18].w[0] + 32u);
    c.budget -= 1;
L_002F3434:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F343Cu); set32(c.r[5], c.r[18].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x002F343Cu) [[unlikely]] return; }
L_002F343C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);  if (t) { goto L_002F345C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_002F3448:
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 100u), c.f[0]);
    c.budget -= 4;
L_002F3458:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002F345C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002F3470:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 524u)));
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    mmi::paddub(c.r[16], c.r[6], c.r[0]);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[18], c.r[4], c.r[0]);  if (t) { goto L_002F3510; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 520u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[6], c.r[17].w[0] + 64u);  if (t) { goto L_002F3514; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F3510; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F3510; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F3510; } }
    c.f[3] = ld32((c.r[3].w[0] + 80u));
    c.f[2] = ld32((c.r[3].w[0] + 84u));
    c.f[1] = ld32((c.r[3].w[0] + 88u));
    c.f[0] = ld32((c.r[3].w[0] + 92u));
    st32((c.r[17].w[0] + 64u), c.f[3]);
    st32((c.r[17].w[0] + 68u), c.f[2]);
    st32((c.r[17].w[0] + 72u), c.f[1]);
    st32((c.r[17].w[0] + 76u), c.f[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 20u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002F3510; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F3510; } }
    st32((c.r[18].w[0] + 520u), 0u);
    c.budget -= 1;
L_002F3510:
    set32(c.r[6], c.r[17].w[0] + 64u);
    c.budget -= 1;
L_002F3514:
    set32(c.r[7], 0u + 1024u);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3524u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_007C(c, 372u, depth + 1u); else { c.pc = 0x002F3C80u; return; } if (c.pc != 0x002F3524u) [[unlikely]] return; }
L_002F3524:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F352Cu); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 237u, depth + 1u); else { c.pc = 0x002DEC00u; return; } if (c.pc != 0x002F352Cu) [[unlikely]] return; }
L_002F352C:
    c.f[2] = ld32((c.r[17].w[0] + 100u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 100u), c.f[1]);  if (t) { goto L_002F35A4; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3560u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 64u, depth + 1u); else { c.pc = 0x002DC7B0u; return; } if (c.pc != 0x002F3560u) [[unlikely]] return; }
L_002F3560:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F3598; } }
    set32(c.r[5], 0u + 33u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3574u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0079(c, 182u, depth + 1u); else { c.pc = 0x002E62A0u; return; } if (c.pc != 0x002F3574u) [[unlikely]] return; }
L_002F3574:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42700000u);
    st32((c.r[17].w[0] + 100u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    set32(c.r[2], c.r[28].w[0] - 28336u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3598u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 35u, depth + 1u); else { c.pc = 0x00198550u; return; } if (c.pc != 0x002F3598u) [[unlikely]] return; }
L_002F3598:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_002F35A4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002F35C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    mmi::paddub(c.r[18], c.r[6], c.r[0]);
    set32(c.r[6], c.r[16].w[0] + 64u);
    set32(c.r[7], 0u + 1024u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F35ECu); mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_007C(c, 372u, depth + 1u); else { c.pc = 0x002F3C80u; return; } if (c.pc != 0x002F35ECu) [[unlikely]] return; }
L_002F35EC:
    c.f[2] = ld32((c.r[16].w[0] + 100u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 100u), c.f[1]);  if (t) { goto L_002F3694; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] - 7680u);
    mmi::paddub(c.r[6], c.r[18], c.r[0]);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F364Cu); st32((c.r[16].w[0] + 96u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_007C(c, 362u, depth + 1u); else { c.pc = 0x002F3B60u; return; } if (c.pc != 0x002F364Cu) [[unlikely]] return; }
L_002F364C:
    set32(c.r[4], c.r[17].w[0] + 64u);
    set32(c.r[5], c.r[16].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F365Cu); set32(c.r[6], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002F365Cu) [[unlikely]] return; }
L_002F365C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3664u); set32(c.r[4], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x002F3664u) [[unlikely]] return; }
L_002F3664:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    st32((c.r[17].w[0] + 104u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F230000u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    st32((c.r[17].w[0] + 108u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    st32((c.r[16].w[0] + 100u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[17].w[0] + 530u));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.r[2].d[0] = c.r[2].d[0] & 191ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3694u); st8((c.r[17].w[0] + 530u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0081(c, 9u, depth + 1u); else { c.pc = 0x00304280u; return; } if (c.pc != 0x002F3694u) [[unlikely]] return; }
L_002F3694:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002F36B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[1] = ld32((c.r[4].w[0] + 108u));
    c.f[0] = ld32((c.r[4].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41180000u);
    c.f[2] = c.r[2].w[0];
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    mmi::paddub(c.r[16], c.r[6], c.r[0]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 17;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[4].w[0] + 104u), c.f[0]);  if (t) { goto L_002F36F8; } }
    st32((c.r[18].w[0] + 104u), c.r[2].w[0]);
    c.budget -= 1;
L_002F36F8:
    c.f[12] = ld32((c.r[18].w[0] + 104u));
    set32(c.r[4], c.r[18].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3708u); set32(c.r[5], c.r[18].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x002F3708u) [[unlikely]] return; }
L_002F3708:
    set32(c.r[4], c.r[18].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3714u); set32(c.r[5], c.r[18].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x002F3714u) [[unlikely]] return; }
L_002F3714:
    set32(c.r[6], c.r[17].w[0] + 64u);
    set32(c.r[7], 0u + 3072u);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3728u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_007C(c, 372u, depth + 1u); else { c.pc = 0x002F3C80u; return; } if (c.pc != 0x002F3728u) [[unlikely]] return; }
L_002F3728:
    c.f[2] = ld32((c.r[17].w[0] + 100u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 100u), c.f[1]);  if (t) { goto L_002F37C4; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2200000u);
    c.f[0] = c.r[2].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x41180000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41400000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[2], c.r[6].w[0] + 1u);
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[18].w[0] + 6u), static_cast<std::uint8_t>(0u));
    st32((c.r[18].w[0] + 104u), c.r[5].w[0]);
    st32((c.r[17].w[0] + 100u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 2096u));
    set32(c.r[5], c.r[17].w[0] + 80u);
    set32(c.r[6], c.r[18].w[0] + 32u);
    st32((c.r[17].w[0] + 80u), c.f[1]);
    c.f[1] = ld32((c.r[16].w[0] + 2100u));
    st32((c.r[17].w[0] + 84u), c.f[1]);
    c.f[1] = ld32((c.r[16].w[0] + 2104u));
    st32((c.r[17].w[0] + 88u), c.f[1]);
    c.f[1] = ld32((c.r[17].w[0] + 84u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F37ACu); st32((c.r[17].w[0] + 84u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002F37ACu) [[unlikely]] return; }
L_002F37AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F37B4u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x002F37B4u) [[unlikely]] return; }
L_002F37B4:
    c.f[12] = ld32((c.r[18].w[0] + 104u));
    set32(c.r[4], c.r[18].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F37C4u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x002F37C4u) [[unlikely]] return; }
L_002F37C4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002F37E0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.f[0] = 0u;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[1] = ld32((c.r[5].w[0] + 100u));
    mmi::paddub(c.r[17], c.r[6], c.r[0]);
    mmi::paddub(c.r[16], c.r[7], c.r[0]);
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 15;
    { const bool t = !(c.fcr31 & kFpuCondition); mmi::paddub(c.r[18], c.r[5], c.r[0]);  if (t) { goto L_002F3AC8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 6u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002F3840; } }
    set32(c.r[2], c.r[28].w[0] - 28344u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3840u); c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8386u)));  if (depth < kMaxDepth) unit_0026(c, 35u, depth + 1u); else { c.pc = 0x00198550u; return; } if (c.pc != 0x002F3840u) [[unlikely]] return; }
L_002F3840:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 6u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[19].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[2].d[0] = c.r[2].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F3868; } }
    set32(c.r[2], 0u + 10u);
    st8((c.r[19].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002F3868:
    c.f[1] = ld32((c.r[17].w[0] + 2096u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2200000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[18].w[0] + 80u);
    st32((c.r[18].w[0] + 80u), c.f[1]);
    c.f[1] = ld32((c.r[17].w[0] + 2100u));
    set32(c.r[6], c.r[19].w[0] + 32u);
    st32((c.r[18].w[0] + 84u), c.f[1]);
    c.f[1] = ld32((c.r[17].w[0] + 2104u));
    st32((c.r[18].w[0] + 88u), c.f[1]);
    c.f[1] = ld32((c.r[18].w[0] + 84u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F38A4u); st32((c.r[18].w[0] + 84u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002F38A4u) [[unlikely]] return; }
L_002F38A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F38ACu); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 20u, depth + 1u); else { c.pc = 0x0013C9E0u; return; } if (c.pc != 0x002F38ACu) [[unlikely]] return; }
L_002F38AC:
    c.f[12] = ld32((c.r[19].w[0] + 104u));
    set32(c.r[4], c.r[19].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F38BCu); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x002F38BCu) [[unlikely]] return; }
L_002F38BC:
    set32(c.r[6], c.r[18].w[0] + 80u);
    set32(c.r[7], 0u + 3072u);
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F38D0u); mmi::paddub(c.r[5], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_007C(c, 372u, depth + 1u); else { c.pc = 0x002F3C80u; return; } if (c.pc != 0x002F38D0u) [[unlikely]] return; }
L_002F38D0:
    set32(c.r[4], c.r[19].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F38DCu); set32(c.r[5], c.r[18].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x002F38DCu) [[unlikely]] return; }
L_002F38DC:
    c.f[1] = ld32((c.r[19].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[19].w[0] + 32u);  if (t) { goto L_002F3AB8; } }
    c.f[3] = ld32((c.r[18].w[0] + 80u));
    c.f[2] = ld32((c.r[18].w[0] + 84u));
    c.f[1] = ld32((c.r[18].w[0] + 88u));
    c.f[0] = ld32((c.r[18].w[0] + 92u));
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[17].w[0] + 2048u);
    st32((c.r[19].w[0] + 32u), c.f[3]);
    st32((c.r[19].w[0] + 36u), c.f[2]);
    st32((c.r[19].w[0] + 40u), c.f[1]);
    st32((c.r[19].w[0] + 44u), c.f[0]);
    st8((c.r[19].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[19].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st8((c.r[19].w[0] + 6u), static_cast<std::uint8_t>(0u));
    st32((c.r[19].w[0] + 520u), 0u);
    st32((c.r[19].w[0] + 524u), 0u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F393Cu); st8((c.r[2].w[0] + 8u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002F393Cu) [[unlikely]] return; }
L_002F393C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[2].d[0] = c.r[2].d[0] | 244ull;
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3950u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 211u, depth + 1u); else { c.pc = 0x00102548u; return; } if (c.pc != 0x002F3950u) [[unlikely]] return; }
L_002F3950:
    set32(c.r[4], c.r[19].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F395Cu); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002F395Cu) [[unlikely]] return; }
L_002F395C:
    st32((c.r[19].w[0] + 96u), 0u);
    c.f[1] = ld32((c.r[29].w[0] + 80u));
    c.f[0] = ld32((c.r[29].w[0] + 88u));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3974u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002F3974u) [[unlikely]] return; }
L_002F3974:
    c.f[12] = ld32((c.r[29].w[0] + 84u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3980u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x002F3980u) [[unlikely]] return; }
L_002F3980:
    st32((c.r[19].w[0] + 92u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 80u), 0u);
    set32(c.r[4], c.r[17].w[0] + 2048u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3994u); st32((c.r[19].w[0] + 84u), 0u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002F3994u) [[unlikely]] return; }
L_002F3994:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F399Cu); set32(c.r[4], ld32((c.r[19].w[0] + 92u)));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002F399Cu) [[unlikely]] return; }
L_002F399C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F39ACu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 211u, depth + 1u); else { c.pc = 0x00102548u; return; } if (c.pc != 0x002F39ACu) [[unlikely]] return; }
L_002F39AC:
    set32(c.r[4], c.r[19].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F39B8u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002F39B8u) [[unlikely]] return; }
L_002F39B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F39C0u);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x002F39C0u) [[unlikely]] return; }
L_002F39C0:
    c.r[16].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 108u)));
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F39D4u); st8((c.r[19].w[0] + 10u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000F(c, 20u, depth + 1u); else { c.pc = 0x0013C9E0u; return; } if (c.pc != 0x002F39D4u) [[unlikely]] return; }
L_002F39D4:
    set32(c.r[2], c.r[28].w[0] - 28360u);
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[19].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    set32(c.r[3], c.r[16].w[0] << 4);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] - 8672u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[19].w[0] + 108u), c.f[0]);
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    set32(c.r[3], c.r[29].w[0] + 80u);
    st32((c.r[19].w[0] + 128u), c.f[3]);
    st32((c.r[19].w[0] + 132u), c.f[2]);
    st32((c.r[19].w[0] + 136u), c.f[1]);
    st32((c.r[19].w[0] + 140u), c.f[0]);
    st32((c.r[19].w[0] + 144u), 0u);
    st32((c.r[19].w[0] + 148u), 0u);
    st32((c.r[19].w[0] + 152u), 0u);
    c.f[3] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    set32(c.r[2], 0u + 793u);
    st32((c.r[19].w[0] + 112u), c.f[3]);
    st32((c.r[19].w[0] + 116u), c.f[2]);
    st32((c.r[19].w[0] + 120u), c.f[1]);
    st32((c.r[19].w[0] + 124u), c.f[0]);
    c.budget -= 33;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3A58u); st32((c.r[19].w[0] + 88u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x002F3A58u) [[unlikely]] return; }
L_002F3A58:
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] - 8640u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[19].w[0] + 100u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 10u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F3A98; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 88u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    st32((c.r[19].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 100u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    st32((c.r[19].w[0] + 100u), c.r[2].w[0]);
    c.budget -= 6;
L_002F3A98:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 530u));
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.r[2].d[0] = c.r[2].d[0] & 191ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3AACu); st8((c.r[19].w[0] + 530u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0081(c, 9u, depth + 1u); else { c.pc = 0x00304280u; return; } if (c.pc != 0x002F3AACu) [[unlikely]] return; }
L_002F3AAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);  if (t) { goto L_002F3AE0; } }
    set32(c.r[4], c.r[19].w[0] + 32u);
    c.budget -= 1;
L_002F3AB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3AC0u); set32(c.r[5], c.r[19].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x002F3AC0u) [[unlikely]] return; }
L_002F3AC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F3ADC; } }
L_002F3AC8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 100u), c.f[0]);
    c.budget -= 5;
L_002F3ADC:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002F3AE0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002F3B00:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_002F3B10:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_002F3B20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3B38u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002F3B38u) [[unlikely]] return; }
L_002F3B38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3B40u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 17u, depth + 1u); else { c.pc = 0x0013C880u; return; } if (c.pc != 0x002F3B40u) [[unlikely]] return; }
L_002F3B40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3B48u); set32(c.r[4], ld32((c.r[16].w[0] + 188u)));  if (depth < kMaxDepth) unit_000F(c, 36u, depth + 1u); else { c.pc = 0x0013CD20u; return; } if (c.pc != 0x002F3B48u) [[unlikely]] return; }
L_002F3B48:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002F3B60:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[0] = ld32((c.r[6].w[0] + 2096u));
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[17].w[0] + 64u);
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 2100u));
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 2104u));
    set32(c.r[6], c.r[29].w[0] + 64u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3BA0u); st32((c.r[29].w[0] + 72u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002F3BA0u) [[unlikely]] return; }
L_002F3BA0:
    c.f[13] = ld32((c.r[29].w[0] + 88u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3BACu); c.f[12] = ld32((c.r[29].w[0] + 80u));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x002F3BACu) [[unlikely]] return; }
L_002F3BAC:
    set32(c.r[16], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3BB8u); mmi::paddub(c.r[18], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002F3BB8u) [[unlikely]] return; }
L_002F3BB8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 2u)));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    set32(c.r[2], c.r[2].w[0] << 12);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3BCCu); set32(c.r[4], c.r[18].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002F3BCCu) [[unlikely]] return; }
L_002F3BCC:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 2u)));
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3BE0u); set32(c.r[4], c.r[2].w[0] << 12);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002F3BE0u) [[unlikely]] return; }
L_002F3BE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[4], c.r[2].w[0] - 8592u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3BF0u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x002F3BF0u) [[unlikely]] return; }
L_002F3BF0:
    c.f[12] = ld32((c.r[16].w[0] + 4u));
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3C00u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x002F3C00u) [[unlikely]] return; }
L_002F3C00:
    c.f[1] = ld32((c.r[29].w[0] + 84u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[17].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    set32(c.r[6], c.r[17].w[0] + 64u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3C24u); st32((c.r[29].w[0] + 84u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x002F3C24u) [[unlikely]] return; }
L_002F3C24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3C2Cu); set32(c.r[4], c.r[17].w[0] + 80u);  if (depth < kMaxDepth) unit_0045(c, 192u, depth + 1u); else { c.pc = 0x00217510u; return; } if (c.pc != 0x002F3C2Cu) [[unlikely]] return; }
L_002F3C2C:
    c.f[1] = ld32((c.r[17].w[0] + 84u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40990000u);
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    c.f[2] = c.r[3].w[0];
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F3C5C; } }
    c.f[0] = fp::add(c.f[2], c.f[0]);
    st32((c.r[17].w[0] + 84u), c.f[0]);
    c.budget -= 2;
L_002F3C5C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002F3C80:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    mmi::paddub(c.r[17], c.r[6], c.r[0]);
    mmi::paddub(c.r[20], c.r[7], c.r[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3CB4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002F3CB4u) [[unlikely]] return; }
L_002F3CB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3CBCu); set32(c.r[4], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 17u, depth + 1u); else { c.pc = 0x0013C880u; return; } if (c.pc != 0x002F3CBCu) [[unlikely]] return; }
L_002F3CBC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3CCCu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 211u, depth + 1u); else { c.pc = 0x00102548u; return; } if (c.pc != 0x002F3CCCu) [[unlikely]] return; }
L_002F3CCC:
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3CD8u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002F3CD8u) [[unlikely]] return; }
L_002F3CD8:
    set32(c.r[17], c.r[29].w[0] + 100u);
    c.f[12] = ld32((c.r[29].w[0] + 96u));
    c.f[13] = ld32((c.r[17].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3CECu); set32(c.r[19], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x002F3CECu) [[unlikely]] return; }
L_002F3CEC:
    c.f[1] = ld32((c.r[29].w[0] + 96u));
    c.f[0] = ld32((c.r[17].w[0]));
    c.r[18].d[0] = c.r[2].d[0] << 48;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3D08u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002F3D08u) [[unlikely]] return; }
L_002F3D08:
    c.f[12] = ld32((c.r[29].w[0] + 104u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3D14u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x002F3D14u) [[unlikely]] return; }
L_002F3D14:
    c.f[0] = c.r[18].w[0];
    c.r[17].d[0] = c.r[2].d[0] << 48;
    c.f[12] = fp::cvt_s_w(c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3D28u); c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);  if (depth < kMaxDepth) unit_000E(c, 291u, depth + 1u); else { c.pc = 0x0013B4D0u; return; } if (c.pc != 0x002F3D28u) [[unlikely]] return; }
L_002F3D28:
    c.f[1] = c.r[20].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F3D68; } }
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] >= 0; c.r[18].d[0] = c.r[20].d[0] << 48;  if (t) { goto L_002F3D60; } }
    c.r[2].d[0] = c.r[20].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u - c.r[2].w[0]);  if (t) { goto L_002F3D64; } }
    c.r[18].d[0] = c.r[20].d[0] << 48;
    c.budget -= 1;
L_002F3D60:
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);
    c.budget -= 1;
L_002F3D64:
    mmi::paddub(c.r[19], c.r[0], c.r[0]);
    c.budget -= 1;
L_002F3D68:
    c.f[0] = c.r[17].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3D74u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 291u, depth + 1u); else { c.pc = 0x0013B4D0u; return; } if (c.pc != 0x002F3D74u) [[unlikely]] return; }
L_002F3D74:
    c.f[1] = c.r[20].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002F3DB8; } }
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0; c.r[17].d[0] = c.r[20].d[0] << 48;  if (t) { goto L_002F3DAC; } }
    c.r[2].d[0] = c.r[20].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u - c.r[2].w[0]);  if (t) { goto L_002F3DB0; } }
    c.r[17].d[0] = c.r[20].d[0] << 48;
    c.budget -= 1;
L_002F3DAC:
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);
    c.budget -= 1;
L_002F3DB0:
    mmi::paddub(c.r[19], c.r[0], c.r[0]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 2;
L_002F3DB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3DC0u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002F3DC0u) [[unlikely]] return; }
L_002F3DC0:
    set32(c.r[2], 0u - c.r[18].w[0]);
    c.r[3].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3DD0u); c.r[4].d[0] = c.r[2].d[0] & c.r[3].d[0];  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002F3DD0u) [[unlikely]] return; }
L_002F3DD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3DD8u); c.r[4].d[0] = c.r[17].d[0] & 65535ull;  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002F3DD8u) [[unlikely]] return; }
L_002F3DD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3DE0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002F3DE0u) [[unlikely]] return; }
L_002F3DE0:
    mmi::paddub(c.r[2], c.r[19], c.r[0]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002F3E10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 520u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull; mmi::paddub(c.r[16], c.r[5], c.r[0]);  if (t) { goto L_002F3F14; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F3E7C; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 2u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F3E7C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F3E7C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F3E7C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002F3EF4; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F3EF4; } }
L_002F3E7C:
    st32((c.r[17].w[0] + 520u), 0u);
    set32(c.r[2], 0u + 5u);
    st32((c.r[17].w[0] + 524u), 0u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] - 7680u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3EB8u); st32((c.r[16].w[0] + 96u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_007C(c, 362u, depth + 1u); else { c.pc = 0x002F3B60u; return; } if (c.pc != 0x002F3EB8u) [[unlikely]] return; }
L_002F3EB8:
    set32(c.r[4], c.r[17].w[0] + 64u);
    set32(c.r[5], c.r[16].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3EC8u); set32(c.r[6], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002F3EC8u) [[unlikely]] return; }
L_002F3EC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3ED0u); set32(c.r[4], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x002F3ED0u) [[unlikely]] return; }
L_002F3ED0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    st32((c.r[17].w[0] + 104u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F230000u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    st32((c.r[17].w[0] + 108u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    st32((c.r[16].w[0] + 100u), c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002F3F18; } }
L_002F3EF4:
    c.f[3] = ld32((c.r[4].w[0] + 80u));
    c.f[2] = ld32((c.r[4].w[0] + 84u));
    c.f[1] = ld32((c.r[4].w[0] + 88u));
    c.f[0] = ld32((c.r[4].w[0] + 92u));
    st32((c.r[16].w[0] + 64u), c.f[3]);
    st32((c.r[16].w[0] + 68u), c.f[2]);
    st32((c.r[16].w[0] + 72u), c.f[1]);
    st32((c.r[16].w[0] + 76u), c.f[0]);
    c.budget -= 8;
L_002F3F14:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_002F3F18:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002F3F30:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 2u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[6], 0u + 255u);
    set32(c.r[3], 0u + 90u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st8((c.r[2].w[0] + 8u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st8((c.r[2].w[0] + 20u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 18u)));
    set32(c.r[4], c.r[16].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[5].w[0] + 18u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3F94u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_002A(c, 384u, depth + 1u); else { c.pc = 0x001AB3A0u; return; } if (c.pc != 0x002F3F94u) [[unlikely]] return; }
L_002F3F94:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[18], c.r[2].w[0] - 7648u);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 3;
L_002F3FA0:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3FACu); mmi::paddub(c.r[5], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_004C(c, 283u, depth + 1u); else { c.pc = 0x002335D0u; return; } if (c.pc != 0x002F3FACu) [[unlikely]] return; }
L_002F3FAC:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F3FA0u | kUnwind; return; } goto L_002F3FA0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[4], c.r[16].w[0] + 32u);  if (t) { [[clang::musttail]] return unit_007D(c, 2u, depth); } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 640u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_007D(c, 1u, depth); } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_007D(c, 3u, depth); } }
    set32(c.r[5], 0u + 9u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3FF8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x00197670u; return; } if (c.pc != 0x002F3FF8u) [[unlikely]] return; }
L_002F3FF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);  if (t) { [[clang::musttail]] return unit_007D(c, 4u, depth); } }
    [[clang::musttail]] return unit_007D(c, 1u, depth);
}

}
