#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0072[4096] = {
    1, 2, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 5, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0,
    0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 16, 0, 0, 0, 17, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0,
    19, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 22, 0, 0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 27, 0, 28,
    0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 32, 0,
    0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0, 0, 36, 0, 0, 0, 37, 0, 0, 0, 38, 0, 0, 0,
    39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 42, 0, 0, 0,
    0, 43, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 46, 0, 47, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 54, 0, 55, 0, 0, 0, 0,
    0, 0, 0, 0, 56, 0, 0, 0, 0, 57, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 63, 0,
    0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 66, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 68,
    0, 0, 0, 0, 69, 0, 0, 0, 0, 70, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 75, 0, 76, 0, 0, 0, 77, 0, 0,
    0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0,
    0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 95, 0, 0, 96, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 111,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 112, 0, 0, 113, 0, 0, 114, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0,
    123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0,
    132, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 135, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 139, 0, 0, 140, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 151, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0,
    0, 153, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0,
    0, 158, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0,
    0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 175, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 178, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 181, 0,
    0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 185, 0, 0, 0, 0, 0,
    0, 186, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 191, 0,
    0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0,
    0, 0, 0, 0, 195, 0, 196, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 202, 0, 203, 0,
    0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0,
    0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 212, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 215, 0, 216, 0, 0, 0, 217, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 219, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0,
    0, 222, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 224, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 226, 0, 0, 227, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 232, 0, 0, 0, 233, 0, 234, 0, 0, 0, 0,
    0, 0, 0, 0, 235, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 238, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 240, 0, 0,
    241, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 243, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 249,
    0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 253, 0,
    0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0,
    256, 0, 0, 0, 257, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0,
    0, 264, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 267, 0, 268, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 270, 0, 0, 271, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 274, 0, 0, 275,
    0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0,
    0, 0, 0, 280, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 282, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0,
    0, 285, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 290,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 295, 0, 0, 296, 0, 0,
    0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 300, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    303, 0, 304, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 307, 0, 308, 0, 0, 0, 0,
    0, 0, 0, 0, 309, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 313, 0, 0, 0, 0, 314, 0, 315, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317,
    0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 321, 0, 322, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 324, 0, 0, 0, 0, 325, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 330, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0,
    0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 335, 0, 336, 0, 0, 0, 0, 337, 0, 0, 0,
    0, 0, 0, 0, 338, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 341, 0, 342, 0, 0, 0, 0, 0, 0, 0, 343, 0,
    0, 344, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 346, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0,
    349, 0, 350, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 357, 0,
    0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0072(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002C8000;
    case 2u: goto L_002C8004;
    case 3u: goto L_002C800C;
    case 4u: goto L_002C8030;
    case 5u: goto L_002C8044;
    case 6u: goto L_002C804C;
    case 7u: goto L_002C809C;
    case 8u: goto L_002C80B8;
    case 9u: goto L_002C80D0;
    case 10u: goto L_002C80EC;
    case 11u: goto L_002C8128;
    case 12u: goto L_002C814C;
    case 13u: goto L_002C8174;
    case 14u: goto L_002C8190;
    case 15u: goto L_002C81B0;
    case 16u: goto L_002C81C4;
    case 17u: goto L_002C81D4;
    case 18u: goto L_002C81E8;
    case 19u: goto L_002C8200;
    case 20u: goto L_002C8224;
    case 21u: goto L_002C8240;
    case 22u: goto L_002C828C;
    case 23u: goto L_002C82A0;
    case 24u: goto L_002C82B4;
    case 25u: goto L_002C82BC;
    case 26u: goto L_002C82E0;
    case 27u: goto L_002C82F4;
    case 28u: goto L_002C82FC;
    case 29u: goto L_002C8318;
    case 30u: goto L_002C8330;
    case 31u: goto L_002C835C;
    case 32u: goto L_002C8378;
    case 33u: goto L_002C8398;
    case 34u: goto L_002C83AC;
    case 35u: goto L_002C83BC;
    case 36u: goto L_002C83D0;
    case 37u: goto L_002C83E0;
    case 38u: goto L_002C83F0;
    case 39u: goto L_002C8400;
    case 40u: goto L_002C8444;
    case 41u: goto L_002C845C;
    case 42u: goto L_002C8470;
    case 43u: goto L_002C8484;
    case 44u: goto L_002C848C;
    case 45u: goto L_002C84B0;
    case 46u: goto L_002C84C4;
    case 47u: goto L_002C84CC;
    case 48u: goto L_002C84E8;
    case 49u: goto L_002C8530;
    case 50u: goto L_002C8558;
    case 51u: goto L_002C8594;
    case 52u: goto L_002C85AC;
    case 53u: goto L_002C85D0;
    case 54u: goto L_002C85E4;
    case 55u: goto L_002C85EC;
    case 56u: goto L_002C8610;
    case 57u: goto L_002C8624;
    case 58u: goto L_002C862C;
    case 59u: goto L_002C865C;
    case 60u: goto L_002C86A0;
    case 61u: goto L_002C86CC;
    case 62u: goto L_002C86EC;
    case 63u: goto L_002C86F8;
    case 64u: goto L_002C8710;
    case 65u: goto L_002C8730;
    case 66u: goto L_002C8744;
    case 67u: goto L_002C8758;
    case 68u: goto L_002C877C;
    case 69u: goto L_002C8790;
    case 70u: goto L_002C87A4;
    case 71u: goto L_002C87AC;
    case 72u: goto L_002C87D0;
    case 73u: goto L_002C882C;
    case 74u: goto L_002C8840;
    case 75u: goto L_002C885C;
    case 76u: goto L_002C8864;
    case 77u: goto L_002C8874;
    case 78u: goto L_002C8888;
    case 79u: goto L_002C88D4;
    case 80u: goto L_002C88F0;
    case 81u: goto L_002C8930;
    case 82u: goto L_002C8968;
    case 83u: goto L_002C8988;
    case 84u: goto L_002C8A00;
    case 85u: goto L_002C8A70;
    case 86u: goto L_002C8AC4;
    case 87u: goto L_002C8B00;
    case 88u: goto L_002C8B74;
    case 89u: goto L_002C8BB0;
    case 90u: goto L_002C8C10;
    case 91u: goto L_002C8C30;
    case 92u: goto L_002C8C50;
    case 93u: goto L_002C8CA0;
    case 94u: goto L_002C8CD8;
    case 95u: goto L_002C8CE4;
    case 96u: goto L_002C8CF0;
    case 97u: goto L_002C8D20;
    case 98u: goto L_002C8D64;
    case 99u: goto L_002C8DB0;
    case 100u: goto L_002C8E08;
    case 101u: goto L_002C8E50;
    case 102u: goto L_002C8E6C;
    case 103u: goto L_002C8EB8;
    case 104u: goto L_002C8EEC;
    case 105u: goto L_002C8F18;
    case 106u: goto L_002C8F30;
    case 107u: goto L_002C8FA8;
    case 108u: goto L_002C9008;
    case 109u: goto L_002C90A0;
    case 110u: goto L_002C90E8;
    case 111u: goto L_002C90FC;
    case 112u: goto L_002C928C;
    case 113u: goto L_002C9298;
    case 114u: goto L_002C92A4;
    case 115u: goto L_002C92B0;
    case 116u: goto L_002C92D4;
    case 117u: goto L_002C9300;
    case 118u: goto L_002C9340;
    case 119u: goto L_002C936C;
    case 120u: goto L_002C939C;
    case 121u: goto L_002C93C8;
    case 122u: goto L_002C93E0;
    case 123u: goto L_002C9400;
    case 124u: goto L_002C942C;
    case 125u: goto L_002C9470;
    case 126u: goto L_002C94B4;
    case 127u: goto L_002C94CC;
    case 128u: goto L_002C94F0;
    case 129u: goto L_002C951C;
    case 130u: goto L_002C9548;
    case 131u: goto L_002C9560;
    case 132u: goto L_002C9580;
    case 133u: goto L_002C95A4;
    case 134u: goto L_002C95DC;
    case 135u: goto L_002C95F0;
    case 136u: goto L_002C9618;
    case 137u: goto L_002C9658;
    case 138u: goto L_002C9684;
    case 139u: goto L_002C9714;
    case 140u: goto L_002C9720;
    case 141u: goto L_002C9738;
    case 142u: goto L_002C9750;
    case 143u: goto L_002C979C;
    case 144u: goto L_002C9804;
    case 145u: goto L_002C982C;
    case 146u: goto L_002C9838;
    case 147u: goto L_002C9850;
    case 148u: goto L_002C9870;
    case 149u: goto L_002C9898;
    case 150u: goto L_002C98D8;
    case 151u: goto L_002C98F4;
    case 152u: goto L_002C9978;
    case 153u: goto L_002C9984;
    case 154u: goto L_002C999C;
    case 155u: goto L_002C99C0;
    case 156u: goto L_002C99FC;
    case 157u: goto L_002C9A78;
    case 158u: goto L_002C9A84;
    case 159u: goto L_002C9A9C;
    case 160u: goto L_002C9AC0;
    case 161u: goto L_002C9B14;
    case 162u: goto L_002C9B2C;
    case 163u: goto L_002C9B40;
    case 164u: goto L_002C9C30;
    case 165u: goto L_002C9D04;
    case 166u: goto L_002C9D34;
    case 167u: goto L_002C9D4C;
    case 168u: goto L_002C9D70;
    case 169u: goto L_002C9D90;
    case 170u: goto L_002C9E24;
    case 171u: goto L_002C9E2C;
    case 172u: goto L_002C9E60;
    case 173u: goto L_002C9E8C;
    case 174u: goto L_002C9EBC;
    case 175u: goto L_002C9F08;
    case 176u: goto L_002C9F10;
    case 177u: goto L_002C9F58;
    case 178u: goto L_002C9F70;
    case 179u: goto L_002CA034;
    case 180u: goto L_002CA058;
    case 181u: goto L_002CA078;
    case 182u: goto L_002CA090;
    case 183u: goto L_002CA0BC;
    case 184u: goto L_002CA0DC;
    case 185u: goto L_002CA0E8;
    case 186u: goto L_002CA104;
    case 187u: goto L_002CA120;
    case 188u: goto L_002CA170;
    case 189u: goto L_002CA1D8;
    case 190u: goto L_002CA1E8;
    case 191u: goto L_002CA1F8;
    case 192u: goto L_002CA214;
    case 193u: goto L_002CA230;
    case 194u: goto L_002CA278;
    case 195u: goto L_002CA290;
    case 196u: goto L_002CA298;
    case 197u: goto L_002CA2B0;
    case 198u: goto L_002CA2E0;
    case 199u: goto L_002CA320;
    case 200u: goto L_002CA334;
    case 201u: goto L_002CA35C;
    case 202u: goto L_002CA370;
    case 203u: goto L_002CA378;
    case 204u: goto L_002CA38C;
    case 205u: goto L_002CA3C0;
    case 206u: goto L_002CA3F0;
    case 207u: goto L_002CA404;
    case 208u: goto L_002CA42C;
    case 209u: goto L_002CA434;
    case 210u: goto L_002CA488;
    case 211u: goto L_002CA4CC;
    case 212u: goto L_002CA510;
    case 213u: goto L_002CA51C;
    case 214u: goto L_002CA5C4;
    case 215u: goto L_002CA5D8;
    case 216u: goto L_002CA5E0;
    case 217u: goto L_002CA5F0;
    case 218u: goto L_002CA630;
    case 219u: goto L_002CA64C;
    case 220u: goto L_002CA654;
    case 221u: goto L_002CA678;
    case 222u: goto L_002CA684;
    case 223u: goto L_002CA6A4;
    case 224u: goto L_002CA6B0;
    case 225u: goto L_002CA6C8;
    case 226u: goto L_002CA6DC;
    case 227u: goto L_002CA6E8;
    case 228u: goto L_002CA744;
    case 229u: goto L_002CA774;
    case 230u: goto L_002CA7A4;
    case 231u: goto L_002CA7C0;
    case 232u: goto L_002CA7D4;
    case 233u: goto L_002CA7E4;
    case 234u: goto L_002CA7EC;
    case 235u: goto L_002CA810;
    case 236u: goto L_002CA81C;
    case 237u: goto L_002CA83C;
    case 238u: goto L_002CA848;
    case 239u: goto L_002CA860;
    case 240u: goto L_002CA874;
    case 241u: goto L_002CA880;
    case 242u: goto L_002CA890;
    case 243u: goto L_002CA8AC;
    case 244u: goto L_002CA8B4;
    case 245u: goto L_002CA930;
    case 246u: goto L_002CA944;
    case 247u: goto L_002CA9B0;
    case 248u: goto L_002CA9E0;
    case 249u: goto L_002CA9FC;
    case 250u: goto L_002CAA10;
    case 251u: goto L_002CAA34;
    case 252u: goto L_002CAA68;
    case 253u: goto L_002CAA78;
    case 254u: goto L_002CAA8C;
    case 255u: goto L_002CAAE4;
    case 256u: goto L_002CAB00;
    case 257u: goto L_002CAB10;
    case 258u: goto L_002CAB28;
    case 259u: goto L_002CAB50;
    case 260u: goto L_002CAB58;
    case 261u: goto L_002CABA4;
    case 262u: goto L_002CABC0;
    case 263u: goto L_002CABF0;
    case 264u: goto L_002CAC04;
    case 265u: goto L_002CAC10;
    case 266u: goto L_002CAC30;
    case 267u: goto L_002CAC44;
    case 268u: goto L_002CAC4C;
    case 269u: goto L_002CAC54;
    case 270u: goto L_002CAC88;
    case 271u: goto L_002CAC94;
    case 272u: goto L_002CACAC;
    case 273u: goto L_002CACDC;
    case 274u: goto L_002CACF0;
    case 275u: goto L_002CACFC;
    case 276u: goto L_002CAD10;
    case 277u: goto L_002CAD3C;
    case 278u: goto L_002CAD44;
    case 279u: goto L_002CAD74;
    case 280u: goto L_002CAD8C;
    case 281u: goto L_002CADA4;
    case 282u: goto L_002CADB8;
    case 283u: goto L_002CADC4;
    case 284u: goto L_002CAE60;
    case 285u: goto L_002CAE84;
    case 286u: goto L_002CAE8C;
    case 287u: goto L_002CAEC0;
    case 288u: goto L_002CAFA0;
    case 289u: goto L_002CAFF0;
    case 290u: goto L_002CAFFC;
    case 291u: goto L_002CB028;
    case 292u: goto L_002CB038;
    case 293u: goto L_002CB08C;
    case 294u: goto L_002CB0D8;
    case 295u: goto L_002CB0E8;
    case 296u: goto L_002CB0F4;
    case 297u: goto L_002CB104;
    case 298u: goto L_002CB140;
    case 299u: goto L_002CB174;
    case 300u: goto L_002CB19C;
    case 301u: goto L_002CB1A4;
    case 302u: goto L_002CB1D8;
    case 303u: goto L_002CB280;
    case 304u: goto L_002CB288;
    case 305u: goto L_002CB2A0;
    case 306u: goto L_002CB2D0;
    case 307u: goto L_002CB2E4;
    case 308u: goto L_002CB2EC;
    case 309u: goto L_002CB310;
    case 310u: goto L_002CB31C;
    case 311u: goto L_002CB340;
    case 312u: goto L_002CB39C;
    case 313u: goto L_002CB3B0;
    case 314u: goto L_002CB3C4;
    case 315u: goto L_002CB3CC;
    case 316u: goto L_002CB3D4;
    case 317u: goto L_002CB3FC;
    case 318u: goto L_002CB408;
    case 319u: goto L_002CB430;
    case 320u: goto L_002CB440;
    case 321u: goto L_002CB45C;
    case 322u: goto L_002CB464;
    case 323u: goto L_002CB4D0;
    case 324u: goto L_002CB4D8;
    case 325u: goto L_002CB4EC;
    case 326u: goto L_002CB514;
    case 327u: goto L_002CB530;
    case 328u: goto L_002CB544;
    case 329u: goto L_002CB56C;
    case 330u: goto L_002CB574;
    case 331u: goto L_002CB5D0;
    case 332u: goto L_002CB5F0;
    case 333u: goto L_002CB608;
    case 334u: goto L_002CB640;
    case 335u: goto L_002CB654;
    case 336u: goto L_002CB65C;
    case 337u: goto L_002CB670;
    case 338u: goto L_002CB690;
    case 339u: goto L_002CB6A4;
    case 340u: goto L_002CB6C4;
    case 341u: goto L_002CB6D0;
    case 342u: goto L_002CB6D8;
    case 343u: goto L_002CB6F8;
    case 344u: goto L_002CB704;
    case 345u: goto L_002CB71C;
    case 346u: goto L_002CB730;
    case 347u: goto L_002CB744;
    case 348u: goto L_002CB76C;
    case 349u: goto L_002CB780;
    case 350u: goto L_002CB788;
    case 351u: goto L_002CB79C;
    case 352u: goto L_002CB7D0;
    case 353u: goto L_002CB7E4;
    case 354u: goto L_002CB81C;
    case 355u: goto L_002CB834;
    case 356u: goto L_002CB858;
    case 357u: goto L_002CB878;
    case 358u: goto L_002CB88C;
    case 359u: goto L_002CB8C0;
    default: bad_entry(c, 0x002C8000u); return;
    }
L_002C8000:
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 1;
L_002C8004:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C800Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0072(c, 85u, depth + 1u); else { c.pc = 0x002C8A70u; return; } if (c.pc != 0x002C800Cu) [[unlikely]] return; }
L_002C800C:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002C8028; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7813u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002C803C; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002C8028:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8030u);  if (depth < kMaxDepth) unit_0072(c, 81u, depth + 1u); else { c.pc = 0x002C8930u; return; } if (c.pc != 0x002C8030u) [[unlikely]] return; }
L_002C8030:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002C81EC; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002C803C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8044u);  if (depth < kMaxDepth) unit_0073(c, 8u, depth + 1u); else { c.pc = 0x002CC460u; return; } if (c.pc != 0x002C8044u) [[unlikely]] return; }
L_002C8044:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C804Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 28u, depth + 1u); else { c.pc = 0x002CC780u; return; } if (c.pc != 0x002C804Cu) [[unlikely]] return; }
L_002C804C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C80C0; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 583u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 108u), 0u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], c.r[2].w[0] - 18464u);
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBDF30000u);
    c.r[2].d[0] = c.r[2].d[0] | 46662ull;
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[1] = ld32((c.r[3].w[0]));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 36u), c.f[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C809Cu); st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0073(c, 26u, depth + 1u); else { c.pc = 0x002CC6F0u; return; } if (c.pc != 0x002C809Cu) [[unlikely]] return; }
L_002C809C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41500000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 4u);
    set32(c.r[6], 0u + 16u);
    set32(c.r[7], 0u + 8u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C80B8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002C80B8u) [[unlikely]] return; }
L_002C80B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C81E8; } }
L_002C80C0:
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = ld32((c.r[16].w[0] + 7780u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C80D0u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002C80D0u) [[unlikely]] return; }
L_002C80D0:
    set32(c.r[5], ld32((c.r[16].w[0] + 84u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.f[12] = c.r[3].w[0];
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C80ECu); st32((c.r[16].w[0] + 84u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0074(c, 75u, depth + 1u); else { c.pc = 0x002D07A0u; return; } if (c.pc != 0x002C80ECu) [[unlikely]] return; }
L_002C80EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);  if (t) { goto L_002C811C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44520000u);
    c.r[2].d[0] = c.r[2].d[0] | 9345ull;
    st32((c.r[16].w[0] + 1216u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 591u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C8118; } }
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[16].w[0] + 1216u), c.f[0]);
    c.budget -= 3;
L_002C8118:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.budget -= 1;
L_002C811C:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8128u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 75u, depth + 1u); else { c.pc = 0x002D07A0u; return; } if (c.pc != 0x002C8128u) [[unlikely]] return; }
L_002C8128:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x421C0000u);  if (t) { goto L_002C8140; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E6B0000u);
    c.r[2].d[0] = c.r[2].d[0] | 60922ull;
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x421C0000u);
    c.budget -= 4;
L_002C8140:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C814Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 75u, depth + 1u); else { c.pc = 0x002D07A0u; return; } if (c.pc != 0x002C814Cu) [[unlikely]] return; }
L_002C814C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x428E0000u);  if (t) { goto L_002C8168; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E990000u);
    st32((c.r[16].w[0] + 1216u), 0u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x428E0000u);
    c.budget -= 5;
L_002C8168:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8174u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 75u, depth + 1u); else { c.pc = 0x002D07A0u; return; } if (c.pc != 0x002C8174u) [[unlikely]] return; }
L_002C8174:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x42800000u);  if (t) { goto L_002C8184; } }
    st32((c.r[16].w[0] + 104u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42800000u);
    c.budget -= 2;
L_002C8184:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8190u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 75u, depth + 1u); else { c.pc = 0x002D07A0u; return; } if (c.pc != 0x002C8190u) [[unlikely]] return; }
L_002C8190:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x428A0000u);  if (t) { goto L_002C81C8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C81C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C81B0u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0075(c, 244u, depth + 1u); else { c.pc = 0x002D78B0u; return; } if (c.pc != 0x002C81B0u) [[unlikely]] return; }
L_002C81B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C81C4; } }
    set32(c.r[5], 0u + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C81C4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x00197670u; return; } if (c.pc != 0x002C81C4u) [[unlikely]] return; }
L_002C81C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x428A0000u);
    c.budget -= 1;
L_002C81C8:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C81D4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 75u, depth + 1u); else { c.pc = 0x002D07A0u; return; } if (c.pc != 0x002C81D4u) [[unlikely]] return; }
L_002C81D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C81E8; } }
    set32(c.r[5], 0u + 46u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C81E8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x00197670u; return; } if (c.pc != 0x002C81E8u) [[unlikely]] return; }
L_002C81E8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002C81EC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C8200:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8224u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 6u, depth + 1u); else { c.pc = 0x002CC360u; return; } if (c.pc != 0x002C8224u) [[unlikely]] return; }
L_002C8224:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C8248; } }
    set32(c.r[2], 0u + 2u);
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    st8((c.r[16].w[0] + 583u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8240u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0071(c, 334u, depth + 1u); else { c.pc = 0x002C7A60u; return; } if (c.pc != 0x002C8240u) [[unlikely]] return; }
L_002C8240:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_002C8290; } }
L_002C8248:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 586u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E190000u);
    c.r[3].d[0] = c.r[2].d[0] | 39322ull;
    set32(c.r[2], 0u + 2u);
    c.f[12] = 0u;
    set32(c.r[6], 0u + 71u);
    set32(c.r[5], c.r[5].w[0] + 32767u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[5].d[0] = c.r[5].d[0] & 65535ull;
    st32((c.r[16].w[0] + 84u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 104u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 108u), 0u);
    set32(c.r[5], 0u + 4u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    st8((c.r[16].w[0] + 741u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C828Cu); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002C828Cu) [[unlikely]] return; }
L_002C828C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002C8290:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C82A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C82B4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002C82B4u) [[unlikely]] return; }
L_002C82B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C82BCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0072(c, 85u, depth + 1u); else { c.pc = 0x002C8A70u; return; } if (c.pc != 0x002C82BCu) [[unlikely]] return; }
L_002C82BC:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002C82D8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7813u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002C82EC; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002C82D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C82E0u);  if (depth < kMaxDepth) unit_0072(c, 81u, depth + 1u); else { c.pc = 0x002C8930u; return; } if (c.pc != 0x002C82E0u) [[unlikely]] return; }
L_002C82E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002C83D4; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002C82EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C82F4u);  if (depth < kMaxDepth) unit_0073(c, 8u, depth + 1u); else { c.pc = 0x002CC460u; return; } if (c.pc != 0x002C82F4u) [[unlikely]] return; }
L_002C82F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C82FCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 28u, depth + 1u); else { c.pc = 0x002CC780u; return; } if (c.pc != 0x002C82FCu) [[unlikely]] return; }
L_002C82FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);  if (t) { goto L_002C8324; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBD730000u);
    c.r[2].d[0] = c.r[2].d[0] | 46662ull;
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8318u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0072(c, 101u, depth + 1u); else { c.pc = 0x002C8E50u; return; } if (c.pc != 0x002C8318u) [[unlikely]] return; }
L_002C8318:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C83D0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.budget -= 1;
L_002C8324:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8330u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 75u, depth + 1u); else { c.pc = 0x002D07A0u; return; } if (c.pc != 0x002C8330u) [[unlikely]] return; }
L_002C8330:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x42EA0000u);  if (t) { goto L_002C8350; } }
    set32(c.r[2], 0u + 5u);
    st8((c.r[16].w[0] + 741u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    st16((c.r[16].w[0] + 812u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42EA0000u);
    c.budget -= 6;
L_002C8350:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C835Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 75u, depth + 1u); else { c.pc = 0x002D07A0u; return; } if (c.pc != 0x002C835Cu) [[unlikely]] return; }
L_002C835C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x42DE0000u);  if (t) { goto L_002C836C; } }
    st32((c.r[16].w[0] + 104u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42DE0000u);
    c.budget -= 2;
L_002C836C:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8378u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 75u, depth + 1u); else { c.pc = 0x002D07A0u; return; } if (c.pc != 0x002C8378u) [[unlikely]] return; }
L_002C8378:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x42EC0000u);  if (t) { goto L_002C83B0; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C83AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8398u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0075(c, 244u, depth + 1u); else { c.pc = 0x002D78B0u; return; } if (c.pc != 0x002C8398u) [[unlikely]] return; }
L_002C8398:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C83AC; } }
    set32(c.r[5], 0u + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C83ACu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x00197670u; return; } if (c.pc != 0x002C83ACu) [[unlikely]] return; }
L_002C83AC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42EC0000u);
    c.budget -= 1;
L_002C83B0:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C83BCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 75u, depth + 1u); else { c.pc = 0x002D07A0u; return; } if (c.pc != 0x002C83BCu) [[unlikely]] return; }
L_002C83BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C83D0; } }
    set32(c.r[5], 0u + 46u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C83D0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x00197670u; return; } if (c.pc != 0x002C83D0u) [[unlikely]] return; }
L_002C83D0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002C83D4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C83E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C83F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C8400:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 591u)));
    set32(c.r[16], 0u + 56u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { goto L_002C8424; } }
    set32(c.r[16], 0u + 57u);
    c.budget -= 1;
L_002C8424:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 812u)));
    set32(c.r[2], 0u + 5u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.r[3].d[0] = c.r[3].d[0] | 8192ull;
    st16((c.r[17].w[0] + 812u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 741u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8444u); st8((c.r[17].w[0] + 736u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0073(c, 7u, depth + 1u); else { c.pc = 0x002CC3E0u; return; } if (c.pc != 0x002C8444u) [[unlikely]] return; }
L_002C8444:
    set32(c.r[5], 0u + 4u);
    c.f[12] = 0u;
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    mmi::paddub(c.r[6], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C845Cu); mmi::paddub(c.r[7], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002C845Cu) [[unlikely]] return; }
L_002C845C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C8470:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8484u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002C8484u) [[unlikely]] return; }
L_002C8484:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C848Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0072(c, 85u, depth + 1u); else { c.pc = 0x002C8A70u; return; } if (c.pc != 0x002C848Cu) [[unlikely]] return; }
L_002C848C:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002C84A8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7813u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002C84BC; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002C84A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C84B0u);  if (depth < kMaxDepth) unit_0072(c, 81u, depth + 1u); else { c.pc = 0x002C8930u; return; } if (c.pc != 0x002C84B0u) [[unlikely]] return; }
L_002C84B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002C851C; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002C84BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C84C4u);  if (depth < kMaxDepth) unit_0073(c, 8u, depth + 1u); else { c.pc = 0x002CC460u; return; } if (c.pc != 0x002C84C4u) [[unlikely]] return; }
L_002C84C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C84CCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 28u, depth + 1u); else { c.pc = 0x002CC780u; return; } if (c.pc != 0x002C84CCu) [[unlikely]] return; }
L_002C84CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C84F0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBD730000u);
    c.r[2].d[0] = c.r[2].d[0] | 46662ull;
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C84E8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0072(c, 101u, depth + 1u); else { c.pc = 0x002C8E50u; return; } if (c.pc != 0x002C84E8u) [[unlikely]] return; }
L_002C84E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C8518; } }
L_002C84F0:
    c.f[1] = ld32((c.r[16].w[0] + 104u));
    c.f[0] = ld32((c.r[16].w[0] + 108u));
    c.f[2] = 0u;
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C8518; } }
    st32((c.r[16].w[0] + 104u), 0u);
    st32((c.r[16].w[0] + 108u), 0u);
    c.budget -= 2;
L_002C8518:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002C851C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C8530:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8558u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0073(c, 6u, depth + 1u); else { c.pc = 0x002CC360u; return; } if (c.pc != 0x002C8558u) [[unlikely]] return; }
L_002C8558:
    mmi::paddub(c.r[16], c.r[2], c.r[0]);
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; st8((c.r[18].w[0] + 591u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002C8570; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[18].w[0] + 591u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002C8570:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 812u)));
    set32(c.r[2], 0u + 5u);
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.r[3].d[0] = c.r[3].d[0] | 8192ull;
    st16((c.r[18].w[0] + 812u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[18].w[0] + 741u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8594u); st8((c.r[18].w[0] + 736u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0073(c, 7u, depth + 1u); else { c.pc = 0x002CC3E0u; return; } if (c.pc != 0x002C8594u) [[unlikely]] return; }
L_002C8594:
    set32(c.r[6], c.r[16].w[0] + 32u);
    c.f[12] = 0u;
    set32(c.r[7], 0u + 4u);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C85ACu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002C85ACu) [[unlikely]] return; }
L_002C85AC:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002C85D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C85E4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002C85E4u) [[unlikely]] return; }
L_002C85E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C85ECu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0072(c, 85u, depth + 1u); else { c.pc = 0x002C8A70u; return; } if (c.pc != 0x002C85ECu) [[unlikely]] return; }
L_002C85EC:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002C8608; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7813u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002C861C; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002C8608:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8610u);  if (depth < kMaxDepth) unit_0072(c, 81u, depth + 1u); else { c.pc = 0x002C8930u; return; } if (c.pc != 0x002C8610u) [[unlikely]] return; }
L_002C8610:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002C8690; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002C861C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8624u);  if (depth < kMaxDepth) unit_0073(c, 8u, depth + 1u); else { c.pc = 0x002CC460u; return; } if (c.pc != 0x002C8624u) [[unlikely]] return; }
L_002C8624:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C862Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 28u, depth + 1u); else { c.pc = 0x002CC780u; return; } if (c.pc != 0x002C862Cu) [[unlikely]] return; }
L_002C862C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C8664; } }
    set32(c.r[2], 0u + 10u);
    st8((c.r[16].w[0] + 583u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBDF30000u);
    st32((c.r[16].w[0] + 108u), 0u);
    c.r[2].d[0] = c.r[2].d[0] | 46662ull;
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C865Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 26u, depth + 1u); else { c.pc = 0x002CC6F0u; return; } if (c.pc != 0x002C865Cu) [[unlikely]] return; }
L_002C865C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C868C; } }
L_002C8664:
    c.f[1] = ld32((c.r[16].w[0] + 104u));
    c.f[0] = ld32((c.r[16].w[0] + 108u));
    c.f[2] = 0u;
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C868C; } }
    st32((c.r[16].w[0] + 104u), 0u);
    st32((c.r[16].w[0] + 108u), 0u);
    c.budget -= 2;
L_002C868C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002C8690:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C86A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    set32(c.r[16], 0u + 32u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C86CCu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 6u, depth + 1u); else { c.pc = 0x002CC360u; return; } if (c.pc != 0x002C86CCu) [[unlikely]] return; }
L_002C86CC:
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], 0u + 34u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; st8((c.r[18].w[0] + 591u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002C86E4; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[18].w[0] + 591u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002C86E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C86ECu); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 26u, depth + 1u); else { c.pc = 0x002CC6F0u; return; } if (c.pc != 0x002C86ECu) [[unlikely]] return; }
L_002C86EC:
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C86F8u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 20u, depth + 1u); else { c.pc = 0x002CC590u; return; } if (c.pc != 0x002C86F8u) [[unlikely]] return; }
L_002C86F8:
    c.f[12] = 0u;
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    mmi::paddub(c.r[6], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8710u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002C8710u) [[unlikely]] return; }
L_002C8710:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002C8730:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8744u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0072(c, 85u, depth + 1u); else { c.pc = 0x002C8A70u; return; } if (c.pc != 0x002C8744u) [[unlikely]] return; }
L_002C8744:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002C8760; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8758u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0072(c, 81u, depth + 1u); else { c.pc = 0x002C8930u; return; } if (c.pc != 0x002C8758u) [[unlikely]] return; }
L_002C8758:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002C8780; } }
L_002C8760:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[2], c.r[28].w[0] - 28680u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C877Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C877Cu) [[unlikely]] return; }
L_002C877C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002C8780:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C8790:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C87A4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 23u, depth + 1u); else { c.pc = 0x002CC650u; return; } if (c.pc != 0x002C87A4u) [[unlikely]] return; }
L_002C87A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C87ACu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 30u, depth + 1u); else { c.pc = 0x002CC870u; return; } if (c.pc != 0x002C87ACu) [[unlikely]] return; }
L_002C87AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C87D8; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBCF30000u);
    c.r[2].d[0] = c.r[2].d[0] | 46662ull;
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C87D0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 27u, depth + 1u); else { c.pc = 0x002CC730u; return; } if (c.pc != 0x002C87D0u) [[unlikely]] return; }
L_002C87D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002C8830; } }
L_002C87D8:
    c.f[1] = ld32((c.r[16].w[0] + 7796u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], 0u + 1u);  if (t) { goto L_002C87FC; } }
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 1;
L_002C87FC:
    c.f[1] = ld32((c.r[16].w[0] + 52u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C881C; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_002C881C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C882C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C882Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002C882Cu) [[unlikely]] return; }
L_002C882C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002C8830:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C8840:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C885Cu); mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 8u, depth + 1u); else { c.pc = 0x002CC460u; return; } if (c.pc != 0x002C885Cu) [[unlikely]] return; }
L_002C885C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8864u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 28u, depth + 1u); else { c.pc = 0x002CC780u; return; } if (c.pc != 0x002C8864u) [[unlikely]] return; }
L_002C8864:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_002C8880; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8874u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0072(c, 81u, depth + 1u); else { c.pc = 0x002C8930u; return; } if (c.pc != 0x002C8874u) [[unlikely]] return; }
L_002C8874:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_002C88D8; } }
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_002C8880:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8888u);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002C8888u) [[unlikely]] return; }
L_002C8888:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C8894; } }
    c.r[16].d[0] = c.r[16].d[0] | 1ull;
    c.budget -= 1;
L_002C8894:
    c.f[1] = ld32((c.r[17].w[0] + 104u));
    c.f[0] = ld32((c.r[17].w[0] + 108u));
    c.f[2] = 0u;
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 3u);  if (t) { goto L_002C88C4; } }
    st32((c.r[17].w[0] + 104u), 0u);
    st32((c.r[17].w[0] + 108u), 0u);
    c.r[16].d[0] = c.r[16].d[0] | 2ull;
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
L_002C88C4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[3].d[0];  if (t) { goto L_002C88D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C88D4u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0072(c, 81u, depth + 1u); else { c.pc = 0x002C8930u; return; } if (c.pc != 0x002C88D4u) [[unlikely]] return; }
L_002C88D4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002C88D8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C88F0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C8908; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002C8928; } }
L_002C8908:
    st32((c.r[4].w[0] + 108u), 0u);
    st32((c.r[4].w[0] + 104u), 0u);
    st8((c.r[4].w[0] + 7775u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 3u);
    st8((c.r[4].w[0] + 7815u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 1260u), 0u);
    c.budget -= 8;
L_002C8928:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C8930:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 108u), 0u);
    st32((c.r[4].w[0] + 104u), 0u);
    st8((c.r[4].w[0] + 7775u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 7815u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 533u)));
    c.r[3].d[0] = c.r[3].d[0] & 16ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002C8968; } }
    set32(c.r[6], 0u + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8968u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0072(c, 92u, depth + 1u); else { c.pc = 0x002C8C50u; return; } if (c.pc != 0x002C8968u) [[unlikely]] return; }
L_002C8968:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 533u)));
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 11u);  if (t) { goto L_002C898C; } }
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 129u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8988u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0072(c, 92u, depth + 1u); else { c.pc = 0x002C8C50u; return; } if (c.pc != 0x002C8988u) [[unlikely]] return; }
L_002C8988:
    set32(c.r[3], 0u + 11u);
    c.budget -= 1;
L_002C898C:
    st8((c.r[16].w[0] + 583u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 30u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 1260u), 0u);
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 640u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C89BC; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 584u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[16].d[0];  if (t) { goto L_002C89BC; } }
    st8((c.r[4].w[0] + 642u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_002C89BC:
    set32(c.r[5], ld32((c.r[16].w[0] + 604u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    c.r[1].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002C89EC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C89EC; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << (c.r[4].w[0] & 31u));
    st32((c.r[5].w[0] + 1272u), c.r[3].w[0]);
    c.budget -= 4;
L_002C89EC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C8A00:
    c.f[1] = ld32((c.r[4].w[0] + 1200u));
    c.f[2] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C8A3C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 1200u), c.f[0]);  if (t) { goto L_002C8A64; } }
L_002C8A3C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C8A64; } }
    set32(c.r[3], 0u + 3u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_002C8A64:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C8A70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 534u)));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[3].d[0] = c.r[5].d[0] & 1ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002C8B08; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 533u)));
    c.r[3].d[0] = c.r[5].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C8AC8; } }
    set32(c.r[2], 0u - 2u);
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    st8((c.r[16].w[0] + 533u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 533u)));
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.r[2].d[0] = c.r[2].d[0] | 16ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8AC4u); st8((c.r[16].w[0] + 533u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0072(c, 92u, depth + 1u); else { c.pc = 0x002C8C50u; return; } if (c.pc != 0x002C8AC4u) [[unlikely]] return; }
L_002C8AC4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002C8AC8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 533u)));
    c.r[3].d[0] = c.r[4].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C8BB4; } }
    set32(c.r[2], 0u - 3u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    st8((c.r[16].w[0] + 533u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 533u)));
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[6], c.r[5], c.r[0]);
    c.r[2].d[0] = c.r[2].d[0] | 32ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8B00u); st8((c.r[16].w[0] + 533u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0072(c, 92u, depth + 1u); else { c.pc = 0x002C8C50u; return; } if (c.pc != 0x002C8B00u) [[unlikely]] return; }
L_002C8B00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002C8BB4; } }
L_002C8B08:
    c.r[3].d[0] = c.r[5].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C8BB4; } }
    c.r[5].d[0] = ld8((c.r[16].w[0] + 583u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], c.r[3].w[0] - 17440u);
    c.f[0] = ld32((c.r[16].w[0] + 1224u));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.f[1] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C8BB4; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 533u)));
    c.r[3].d[0] = c.r[5].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C8B78; } }
    set32(c.r[2], 0u - 2u);
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    st8((c.r[16].w[0] + 533u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 533u)));
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.r[2].d[0] = c.r[2].d[0] | 16ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8B74u); st8((c.r[16].w[0] + 533u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0072(c, 92u, depth + 1u); else { c.pc = 0x002C8C50u; return; } if (c.pc != 0x002C8B74u) [[unlikely]] return; }
L_002C8B74:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_002C8B78:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 533u)));
    c.r[3].d[0] = c.r[4].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C8BB4; } }
    set32(c.r[2], 0u - 3u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    st8((c.r[16].w[0] + 533u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 533u)));
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[6], c.r[5], c.r[0]);
    c.r[2].d[0] = c.r[2].d[0] | 32ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8BB0u); st8((c.r[16].w[0] + 533u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0072(c, 92u, depth + 1u); else { c.pc = 0x002C8C50u; return; } if (c.pc != 0x002C8BB0u) [[unlikely]] return; }
L_002C8BB0:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_002C8BB4:
    c.f[1] = ld32((c.r[16].w[0] + 1200u));
    c.f[2] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[2]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C8C34; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 1200u), c.f[0]);  if (t) { goto L_002C8C34; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 533u)));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C8C10; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8C10u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0072(c, 92u, depth + 1u); else { c.pc = 0x002C8C50u; return; } if (c.pc != 0x002C8C10u) [[unlikely]] return; }
L_002C8C10:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 533u)));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_002C8C34; } }
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 129u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8C30u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0072(c, 92u, depth + 1u); else { c.pc = 0x002C8C50u; return; } if (c.pc != 0x002C8C30u) [[unlikely]] return; }
L_002C8C30:
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_002C8C34:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C8C50:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[0] = ld32((c.r[4].w[0] + 2096u));
    set32(c.r[16], c.r[29].w[0] + 84u);
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    c.r[2].d[0] = c.r[6].d[0] & 128ull;
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 2100u));
    mmi::paddub(c.r[17], c.r[6], c.r[0]);
    c.r[5].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 2104u));
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8CA0u); st32((c.r[29].w[0] + 88u), c.f[0]);  if (depth < kMaxDepth) unit_002A(c, 384u, depth + 1u); else { c.pc = 0x001AB3A0u; return; } if (c.pc != 0x002C8CA0u) [[unlikely]] return; }
L_002C8CA0:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 331u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 10u);  if (t) { goto L_002C8CDC; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8384u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 6u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002C8CD8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8391u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C8CD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8CD8u);  if (depth < kMaxDepth) unit_0024(c, 186u, depth + 1u); else { c.pc = 0x00193000u; return; } if (c.pc != 0x002C8CD8u) [[unlikely]] return; }
L_002C8CD8:
    set32(c.r[5], 0u + 10u);
    c.budget -= 1;
L_002C8CDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8CE4u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x00197670u; return; } if (c.pc != 0x002C8CE4u) [[unlikely]] return; }
L_002C8CE4:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8384u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8CF0u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_0023(c, 144u, depth + 1u); else { c.pc = 0x0018DAB0u; return; } if (c.pc != 0x002C8CF0u) [[unlikely]] return; }
L_002C8CF0:
    c.f[3] = ld32((c.r[19].w[0] + 32u));
    c.f[2] = ld32((c.r[19].w[0] + 36u));
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = ld32((c.r[19].w[0] + 44u));
    set32(c.r[2], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[19].w[0] + 32u);
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8D20u); st32((c.r[2].w[0] + 12u), c.f[0]);  if (depth < kMaxDepth) unit_0045(c, 199u, depth + 1u); else { c.pc = 0x00217650u; return; } if (c.pc != 0x002C8D20u) [[unlikely]] return; }
L_002C8D20:
    st32((c.r[16].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 36u));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8386u)));
    c.f[0] = c.f[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], c.r[3].w[0] - 18464u);
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C8D64; } }
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8D64u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_004B(c, 27u, depth + 1u); else { c.pc = 0x0022C720u; return; } if (c.pc != 0x002C8D64u) [[unlikely]] return; }
L_002C8D64:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_002C8D88; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8386u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], c.r[3].w[0] - 17952u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[3].w[0])));  if (t) { goto L_002C8DA4; } }
L_002C8D88:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8386u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], c.r[3].w[0] - 17856u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.budget -= 7;
L_002C8DA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[17].d[0] & 127ull;  if (t) { goto L_002C8E20; } }
    c.r[3].d[0] = c.r[4].d[0] & 128ull;
    c.budget -= 1;
L_002C8DB0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[6].d[0] = c.r[4].d[0] & 127ull;  if (t) { goto L_002C8DD8; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 1260u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] << (c.r[6].w[0] & 31u));
    c.r[4].d[0] = ~(c.r[4].d[0] | 0ull);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 1260u), c.r[3].w[0]);  if (t) { goto L_002C8E20; } }
L_002C8DD8:
    set32(c.r[3], ld32((c.r[19].w[0] + 1260u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[18], c.r[4].w[0] << (c.r[6].w[0] & 31u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[18].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C8E08; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_002C8E08; } }
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8E08u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_004C(c, 118u, depth + 1u); else { c.pc = 0x002320C0u; return; } if (c.pc != 0x002C8E08u) [[unlikely]] return; }
L_002C8E08:
    set32(c.r[3], ld32((c.r[19].w[0] + 1260u)));
    c.r[4].d[0] = ~(c.r[18].d[0] | 0ull);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    st32((c.r[19].w[0] + 1260u), c.r[3].w[0]);
    c.budget -= 6;
L_002C8E20:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[3].d[0] = c.r[4].d[0] & 128ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C8DB0u | kUnwind; return; } goto L_002C8DB0; } }
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002C8E50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 732u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 733u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8E6Cu); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 26u, depth + 1u); else { c.pc = 0x002CC6F0u; return; } if (c.pc != 0x002C8E6Cu) [[unlikely]] return; }
L_002C8E6C:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 583u));
    set32(c.r[3], 0u + 9u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_002C8E88; } }
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 583u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002C8F18; } }
L_002C8E88:
    st8((c.r[16].w[0] + 583u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7786u)));
    c.r[1].d[0] = c.r[4].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[4].w[0] - 56u);  if (t) { goto L_002C8EC0; } }
    set32(c.r[6], c.r[4].w[0] + 9u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    set32(c.r[5], 0u + 4u);
    c.f[12] = c.r[2].w[0];
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8EB8u); mmi::paddub(c.r[7], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002C8EB8u) [[unlikely]] return; }
L_002C8EB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002C8F1C; } }
L_002C8EC0:
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[4].w[0] - 68u);  if (t) { goto L_002C8EF4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 4u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 591u)));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[7], c.r[5], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8EECu); set32(c.r[6], c.r[2].w[0] + 54u);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002C8EECu) [[unlikely]] return; }
L_002C8EEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C8F18; } }
L_002C8EF4:
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002C8F18; } }
    c.f[12] = 0u;
    set32(c.r[5], 0u + 4u);
    set32(c.r[6], 0u + 26u);
    set32(c.r[7], 0u + 15u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8F18u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002C8F18u) [[unlikely]] return; }
L_002C8F18:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002C8F1C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C8F30:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[5].w[0] + 264u)));
    mmi::paddub(c.r[21], c.r[5], c.r[0]);
    set32(c.r[3], 0u - 129u);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 578u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 16;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[22], c.r[4], c.r[0]);  if (t) { goto L_002C92D4; } }
    c.r[3].d[0] = c.r[5].d[0] & 16ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[17], ld32((c.r[22].w[0] + 612u)));  if (t) { goto L_002C8F9C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[20], 0u + 16u);  if (t) { goto L_002C8F90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u + 20u);  if (t) { goto L_002C8F94; } }
L_002C8F90:
    set32(c.r[18], 0u + 19u);
    c.budget -= 1;
L_002C8F94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[19], c.r[18], c.r[0]);  if (t) { goto L_002C8FB0; } }
L_002C8F9C:
    c.r[20].d[0] = ld8((c.r[17].w[0] + 6u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8FA8u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 5u, depth + 1u); else { c.pc = 0x002CC280u; return; } if (c.pc != 0x002C8FA8u) [[unlikely]] return; }
L_002C8FA8:
    mmi::paddub(c.r[18], c.r[2], c.r[0]);
    mmi::paddub(c.r[19], c.r[18], c.r[0]);
    c.budget -= 2;
L_002C8FB0:
    c.budget -= 2;
    { const bool t = c.r[20].sd[0] > 0;  if (t) { goto L_002C8FBC; } }
    set32(c.r[20], 0u + 1u);
    c.budget -= 1;
L_002C8FBC:
    st8((c.r[22].w[0] + 582u), static_cast<std::uint8_t>(c.r[20].w[0]));
    st8((c.r[21].w[0] + 582u), static_cast<std::uint8_t>(c.r[20].w[0]));
    c.r[3].d[0] = ld8((c.r[21].w[0] + 576u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C8FDC; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 264u)));
    st8((c.r[3].w[0] + 582u), static_cast<std::uint8_t>(c.r[20].w[0]));
    c.budget -= 2;
L_002C8FDC:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0] + 514u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C9010; } }
    set32(c.r[2], 0u + 14u);
    st8((c.r[22].w[0] + 580u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[22].w[0] + 590u), static_cast<std::uint8_t>(c.r[18].w[0]));
    st8((c.r[22].w[0] + 7775u), static_cast<std::uint8_t>(0u));
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    mmi::paddub(c.r[4], c.r[22], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9008u); st8((c.r[22].w[0] + 7815u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0071(c, 272u, depth + 1u); else { c.pc = 0x002C7000u; return; } if (c.pc != 0x002C9008u) [[unlikely]] return; }
L_002C9008:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);  if (t) { goto L_002C92D8; } }
L_002C9010:
    c.r[5].d[0] = ld8((c.r[22].w[0] + 578u));
    c.r[3].d[0] = c.r[5].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C9080; } }
    c.r[3].d[0] = c.r[5].d[0] & 128ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C9080; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0] + 844u)));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 4u));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; mmi::paddub(c.r[19], c.r[18], c.r[0]);  if (t) { goto L_002C9078; } }
    c.r[3].d[0] = c.r[5].d[0] & 32ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[19], c.r[18], c.r[0]);  if (t) { goto L_002C9054; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u + 15u);  if (t) { goto L_002C90B4; } }
L_002C9054:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[18], 0u + 10u);  if (t) { goto L_002C906C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u + 11u);  if (t) { goto L_002C90B4; } }
    set32(c.r[18], 0u + 10u);
    c.budget -= 1;
L_002C906C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 15u);  if (t) { goto L_002C90B8; } }
    mmi::paddub(c.r[19], c.r[18], c.r[0]);
    c.budget -= 1;
L_002C9078:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u + 15u);  if (t) { goto L_002C90B4; } }
L_002C9080:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0] + 842u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_002C90A8; } }
    mmi::paddub(c.r[19], c.r[18], c.r[0]);
    set32(c.r[5], 0u + 17u);
    set32(c.r[18], 0u + 15u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C90A0u); mmi::paddub(c.r[4], c.r[22], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x002C90A0u) [[unlikely]] return; }
L_002C90A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C90B4; } }
L_002C90A8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0] + 840u)));
    st16((c.r[22].w[0] + 842u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[22].w[0] + 838u), static_cast<std::uint16_t>(0u));
    c.budget -= 3;
L_002C90B4:
    set32(c.r[5], 0u + 15u);
    c.budget -= 1;
L_002C90B8:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[5].d[0];  if (t) { goto L_002C92D4; } }
    st8((c.r[22].w[0] + 7775u), static_cast<std::uint8_t>(0u));
    st8((c.r[22].w[0] + 7815u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = ld8((c.r[22].w[0] + 531u));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 531u));
    c.budget -= 6;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[5], 0u + 9u);  goto L_002C90F4; }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[22].d[0];  if (t) { goto L_002C90F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C90E8u); mmi::paddub(c.r[4], c.r[22], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x002C90E8u) [[unlikely]] return; }
L_002C90E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0] + 8386u)));  if (t) { goto L_002C9100; } }
L_002C90F0:
    set32(c.r[5], 0u + 9u);
    c.budget -= 1;
L_002C90F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C90FCu); mmi::paddub(c.r[4], c.r[22], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x002C90FCu) [[unlikely]] return; }
L_002C90FC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0] + 8386u)));
    c.budget -= 1;
L_002C9100:
    set32(c.r[4], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00180000u);
    c.r[2].d[0] = c.r[2].d[0] | 1973ull;
    set32(c.r[3], c.r[4].w[0] << (c.r[3].w[0] & 31u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C913C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0] + 758u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C9134; } }
    st8((c.r[22].w[0] + 748u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[22].w[0] + 803u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_002C913C; } }
L_002C9134:
    st8((c.r[22].w[0] + 748u), static_cast<std::uint8_t>(0u));
    st8((c.r[22].w[0] + 803u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_002C913C:
    c.f[1] = ld32((c.r[22].w[0] + 1240u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C9174; } }
    c.r[3].d[0] = ld8((c.r[22].w[0] + 580u));
    set32(c.r[2], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002C9174; } }
    mmi::paddub(c.r[19], c.r[18], c.r[0]);
    c.r[2].d[0] = c.r[18].d[0] | 1ull;
    c.r[18].d[0] = c.r[2].d[0] & 7ull;
    c.budget -= 3;
L_002C9174:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0] + 800u)));
    c.r[2].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C91B0; } }
    set32(c.r[2], 0u - 1u);
    st8((c.r[22].w[0] + 800u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 128u);
    st8((c.r[22].w[0] + 532u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st32((c.r[22].w[0] + 1068u), c.r[2].w[0]);
    set32(c.r[2], 0u + 8u);
    c.budget -= 9;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_002C91B0; } }
    mmi::paddub(c.r[19], c.r[18], c.r[0]);
    set32(c.r[18], 0u + 1u);
    c.budget -= 2;
L_002C91B0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0] + 8386u)));
    set32(c.r[3], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00070000u);
    set32(c.r[3], c.r[3].w[0] << (c.r[4].w[0] & 31u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 11u);  if (t) { goto L_002C9204; } }
    c.r[1].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u + 16u);  if (t) { goto L_002C91E4; } }
    c.r[2].d[0] = c.r[18].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);  if (t) { goto L_002C91E8; } }
L_002C91E4:
    set32(c.r[3], 0u + 17u);
    c.budget -= 1;
L_002C91E8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[19], c.r[18], c.r[0]);  if (t) { goto L_002C91FC; } }
    set32(c.r[3], 0u + 18u);
    mmi::paddub(c.r[19], c.r[18], c.r[0]);
    c.budget -= 2;
L_002C91FC:
    mmi::paddub(c.r[18], c.r[3], c.r[0]);
    set32(c.r[2], 0u + 11u);
    c.budget -= 2;
L_002C9204:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_002C9244; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 12288ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C9244; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0] + 758u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C9238; } }
    set32(c.r[2], ld32((c.r[22].w[0] + 84u)));
    set32(c.r[2], c.r[2].w[0] - 16384u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[22].w[0] + 84u), c.r[2].w[0]);  if (t) { goto L_002C9244; } }
L_002C9238:
    set32(c.r[2], ld32((c.r[22].w[0] + 84u)));
    set32(c.r[2], c.r[2].w[0] + 16384u);
    st32((c.r[22].w[0] + 84u), c.r[2].w[0]);
    c.budget -= 3;
L_002C9244:
    st8((c.r[22].w[0] + 580u), static_cast<std::uint8_t>(c.r[18].w[0]));
    st8((c.r[22].w[0] + 590u), static_cast<std::uint8_t>(c.r[19].w[0]));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0] + 812u)));
    set32(c.r[3], 0u - 29184u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    set32(c.r[5], 0u + 48u);
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    st16((c.r[22].w[0] + 812u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0] + 812u)));
    mmi::paddub(c.r[4], c.r[22], c.r[0]);
    c.r[3].d[0] = c.r[3].d[0] | 4096ull;
    st16((c.r[22].w[0] + 812u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[22].w[0] + 792u), static_cast<std::uint8_t>(0u));
    st8((c.r[22].w[0] + 737u), static_cast<std::uint8_t>(0u));
    st16((c.r[22].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st32((c.r[22].w[0] + 1240u), c.r[2].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C928Cu); st32((c.r[22].w[0] + 1244u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0076(c, 55u, depth + 1u); else { c.pc = 0x002D8DE0u; return; } if (c.pc != 0x002C928Cu) [[unlikely]] return; }
L_002C928C:
    set32(c.r[5], 0u + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9298u); mmi::paddub(c.r[4], c.r[22], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 54u, depth + 1u); else { c.pc = 0x002D8D10u; return; } if (c.pc != 0x002C9298u) [[unlikely]] return; }
L_002C9298:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C92A4u); mmi::paddub(c.r[4], c.r[22], c.r[0]);  if (depth < kMaxDepth) unit_003C(c, 227u, depth + 1u); else { c.pc = 0x001F3160u; return; } if (c.pc != 0x002C92A4u) [[unlikely]] return; }
L_002C92A4:
    mmi::paddub(c.r[4], c.r[22], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C92B0u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 40u, depth + 1u); else { c.pc = 0x002CCAD0u; return; } if (c.pc != 0x002C92B0u) [[unlikely]] return; }
L_002C92B0:
    c.r[3].d[0] = ld8((c.r[22].w[0] + 580u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 29792u);
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C92D4u); mmi::paddub(c.r[4], c.r[22], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C92D4u) [[unlikely]] return; }
L_002C92D4:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002C92D8:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002C9300:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[5].w[0] + 13u));
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_002C9334; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_002C9340; } }
L_002C9334:
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9340u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 6u, depth + 1u); else { c.pc = 0x002CC360u; return; } if (c.pc != 0x002C9340u) [[unlikely]] return; }
L_002C9340:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[5], 0u + 1u);  if (t) { goto L_002C9390; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 13u));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C9374; } }
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C936Cu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 6u, depth + 1u); else { c.pc = 0x002CC360u; return; } if (c.pc != 0x002C936Cu) [[unlikely]] return; }
L_002C936C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);  if (t) { goto L_002C93A0; } }
L_002C9374:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 580u));
    set32(c.r[2], 0u + 6u);
    set32(c.r[16], 0u + 4u);
    st8((c.r[18].w[0] + 590u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 580u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002C93A0; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_002C9390:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C939Cu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 6u, depth + 1u); else { c.pc = 0x002CC360u; return; } if (c.pc != 0x002C939Cu) [[unlikely]] return; }
L_002C939C:
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 1;
L_002C93A0:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; st8((c.r[18].w[0] + 591u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002C93B4; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[18].w[0] + 591u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002C93B4:
    set32(c.r[2], 0u + 2u);
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    st8((c.r[18].w[0] + 741u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C93C8u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 7u, depth + 1u); else { c.pc = 0x002CC3E0u; return; } if (c.pc != 0x002C93C8u) [[unlikely]] return; }
L_002C93C8:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 4u);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    mmi::paddub(c.r[6], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C93E0u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002C93E0u) [[unlikely]] return; }
L_002C93E0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002C9400:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    set32(c.r[5], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    set32(c.r[16], 0u + 30u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C942Cu); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 6u, depth + 1u); else { c.pc = 0x002CC360u; return; } if (c.pc != 0x002C942Cu) [[unlikely]] return; }
L_002C942C:
    c.r[5].d[0] = ld8((c.r[18].w[0] + 581u));
    set32(c.r[4], 0u + 1u);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00070000u);
    c.r[2].d[0] = c.r[3].d[0] | 59384ull;
    set32(c.r[4], c.r[4].w[0] << (c.r[5].w[0] & 31u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 31u);  if (t) { goto L_002C9484; } }
    c.r[2].d[0] = c.r[3].d[0] | 1920ull;
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C9468; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 2u);  if (t) { goto L_002C9480; } }
L_002C9468:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9470u);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x002C9470u) [[unlikely]] return; }
L_002C9470:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C9480; } }
    set32(c.r[16], c.r[16].w[0] + 2u);
    c.budget -= 1;
L_002C9480:
    set32(c.r[2], 0u + 31u);
    c.budget -= 1;
L_002C9484:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; st8((c.r[18].w[0] + 591u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002C9498; } }
    set32(c.r[2], 0u + 33u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_002C94A4; } }
L_002C9498:
    set32(c.r[2], 0u + 1u);
    st8((c.r[18].w[0] + 591u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
L_002C94A4:
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    st8((c.r[18].w[0] + 741u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C94B4u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 7u, depth + 1u); else { c.pc = 0x002CC3E0u; return; } if (c.pc != 0x002C94B4u) [[unlikely]] return; }
L_002C94B4:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 4u);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    mmi::paddub(c.r[6], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C94CCu); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002C94CCu) [[unlikely]] return; }
L_002C94CC:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002C94F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    set32(c.r[16], 0u + 5u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C951Cu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 6u, depth + 1u); else { c.pc = 0x002CC360u; return; } if (c.pc != 0x002C951Cu) [[unlikely]] return; }
L_002C951C:
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], 0u + 7u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; st8((c.r[18].w[0] + 591u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002C9534; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[18].w[0] + 591u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002C9534:
    set32(c.r[2], 0u + 2u);
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    st8((c.r[18].w[0] + 741u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9548u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 7u, depth + 1u); else { c.pc = 0x002CC3E0u; return; } if (c.pc != 0x002C9548u) [[unlikely]] return; }
L_002C9548:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 4u);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    mmi::paddub(c.r[6], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9560u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002C9560u) [[unlikely]] return; }
L_002C9560:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002C9580:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[16], 0u + 34u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C95A4u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 6u, depth + 1u); else { c.pc = 0x002CC360u; return; } if (c.pc != 0x002C95A4u) [[unlikely]] return; }
L_002C95A4:
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], 0u + 36u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; st8((c.r[17].w[0] + 591u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002C95BC; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 591u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002C95BC:
    set32(c.r[2], 0u + 5u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 4u);
    mmi::paddub(c.r[6], c.r[16], c.r[0]);
    st8((c.r[17].w[0] + 741u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C95DCu); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002C95DCu) [[unlikely]] return; }
L_002C95DC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C95F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9618u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0073(c, 6u, depth + 1u); else { c.pc = 0x002CC360u; return; } if (c.pc != 0x002C9618u) [[unlikely]] return; }
L_002C9618:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 3u);  if (t) { goto L_002C9664; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[16], 0u + 18u);  if (t) { goto L_002C9638; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 22u);  if (t) { goto L_002C9688; } }
L_002C9638:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (t) { goto L_002C9650; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 23u);  if (t) { goto L_002C9688; } }
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 1;
L_002C9650:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9658u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 6u, depth + 1u); else { c.pc = 0x002CC360u; return; } if (c.pc != 0x002C9658u) [[unlikely]] return; }
L_002C9658:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);  if (t) { goto L_002C9688; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 1;
L_002C9664:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[16], 0u + 9u);  if (t) { goto L_002C9674; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 13u);  if (t) { goto L_002C9688; } }
L_002C9674:
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9684u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 6u, depth + 1u); else { c.pc = 0x002CC360u; return; } if (c.pc != 0x002C9684u) [[unlikely]] return; }
L_002C9684:
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 1;
L_002C9688:
    set32(c.r[2], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; st8((c.r[18].w[0] + 591u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002C96B8; } }
    set32(c.r[2], 0u + 13u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_002C96BC; } }
    set32(c.r[2], 0u + 20u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_002C96B8; } }
    set32(c.r[2], 0u + 22u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 10u);  if (t) { goto L_002C96C4; } }
L_002C96B8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002C96BC:
    st8((c.r[18].w[0] + 591u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 10u);
    c.budget -= 2;
L_002C96C4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; st32((c.r[18].w[0] + 1216u), 0u);  if (t) { goto L_002C96D8; } }
    set32(c.r[2], 0u + 19u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 12u);  if (t) { goto L_002C96E8; } }
L_002C96D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44230000u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    st32((c.r[18].w[0] + 1216u), c.r[2].w[0]);
    set32(c.r[2], 0u + 12u);
    c.budget -= 4;
L_002C96E8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0xC4230000u);  if (t) { goto L_002C9700; } }
    set32(c.r[2], 0u + 21u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (t) { goto L_002C970C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC4230000u);
    c.budget -= 1;
L_002C9700:
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    st32((c.r[18].w[0] + 1216u), c.r[2].w[0]);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
L_002C970C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9714u);  if (depth < kMaxDepth) unit_0073(c, 26u, depth + 1u); else { c.pc = 0x002CC6F0u; return; } if (c.pc != 0x002C9714u) [[unlikely]] return; }
L_002C9714:
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9720u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 20u, depth + 1u); else { c.pc = 0x002CC590u; return; } if (c.pc != 0x002C9720u) [[unlikely]] return; }
L_002C9720:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 4u);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    mmi::paddub(c.r[6], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9738u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002C9738u) [[unlikely]] return; }
L_002C9738:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002C9750:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 736u)));
    set32(c.r[16], 0u + 38u);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[18], c.r[4], c.r[0]);  if (t) { goto L_002C977C; } }
    set32(c.r[16], 0u + 46u);
    c.budget -= 1;
L_002C977C:
    set32(c.r[5], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44A30000u);
    st8((c.r[18].w[0] + 591u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    st32((c.r[18].w[0] + 1216u), c.r[2].w[0]);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C979Cu); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 6u, depth + 1u); else { c.pc = 0x002CC360u; return; } if (c.pc != 0x002C979Cu) [[unlikely]] return; }
L_002C979C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C97B8; } }
    st8((c.r[18].w[0] + 591u), static_cast<std::uint8_t>(0u));
    c.f[0] = ld32((c.r[18].w[0] + 1216u));
    set32(c.r[16], c.r[16].w[0] + 2u);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[18].w[0] + 1216u), c.f[0]);
    c.budget -= 5;
L_002C97B8:
    c.r[5].d[0] = ld8((c.r[18].w[0] + 581u));
    set32(c.r[4], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00070000u);
    c.r[2].d[0] = c.r[3].d[0] | 59384ull;
    set32(c.r[4], c.r[4].w[0] << (c.r[5].w[0] & 31u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C97FC; } }
    c.r[2].d[0] = c.r[3].d[0] | 1920ull;
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (t) { goto L_002C9824; } }
    c.f[0] = ld32((c.r[18].w[0] + 1216u));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 1216u), c.f[0]);  if (t) { goto L_002C9820; } }
L_002C97FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9804u);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x002C9804u) [[unlikely]] return; }
L_002C9804:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C9820; } }
    c.f[0] = ld32((c.r[18].w[0] + 1216u));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[18].w[0] + 1216u), c.f[0]);
    c.budget -= 4;
L_002C9820:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 1;
L_002C9824:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C982Cu);  if (depth < kMaxDepth) unit_0073(c, 26u, depth + 1u); else { c.pc = 0x002CC6F0u; return; } if (c.pc != 0x002C982Cu) [[unlikely]] return; }
L_002C982C:
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9838u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 20u, depth + 1u); else { c.pc = 0x002CC590u; return; } if (c.pc != 0x002C9838u) [[unlikely]] return; }
L_002C9838:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 4u);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    mmi::paddub(c.r[6], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9850u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002C9850u) [[unlikely]] return; }
L_002C9850:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002C9870:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9898u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0073(c, 6u, depth + 1u); else { c.pc = 0x002CC360u; return; } if (c.pc != 0x002C9898u) [[unlikely]] return; }
L_002C9898:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_002C98E4; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[16], 0u + 24u);  if (t) { goto L_002C98B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 28u);  if (t) { goto L_002C98F8; } }
L_002C98B8:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (t) { goto L_002C98D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 29u);  if (t) { goto L_002C98F8; } }
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 1;
L_002C98D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C98D8u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 6u, depth + 1u); else { c.pc = 0x002CC360u; return; } if (c.pc != 0x002C98D8u) [[unlikely]] return; }
L_002C98D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);  if (t) { goto L_002C98F8; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_002C98E4:
    set32(c.r[16], 0u + 14u);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C98F4u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 6u, depth + 1u); else { c.pc = 0x002CC360u; return; } if (c.pc != 0x002C98F4u) [[unlikely]] return; }
L_002C98F4:
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 1;
L_002C98F8:
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; st8((c.r[18].w[0] + 591u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002C991C; } }
    set32(c.r[2], 0u + 26u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_002C9920; } }
    set32(c.r[2], 0u + 28u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 15u);  if (t) { goto L_002C9928; } }
L_002C991C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002C9920:
    st8((c.r[18].w[0] + 591u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 15u);
    c.budget -= 2;
L_002C9928:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; st32((c.r[18].w[0] + 1216u), 0u);  if (t) { goto L_002C993C; } }
    set32(c.r[2], 0u + 25u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 17u);  if (t) { goto L_002C994C; } }
L_002C993C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44230000u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    st32((c.r[18].w[0] + 1216u), c.r[2].w[0]);
    set32(c.r[2], 0u + 17u);
    c.budget -= 4;
L_002C994C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0xC4230000u);  if (t) { goto L_002C9964; } }
    set32(c.r[2], 0u + 27u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (t) { goto L_002C9970; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC4230000u);
    c.budget -= 1;
L_002C9964:
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    st32((c.r[18].w[0] + 1216u), c.r[2].w[0]);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
L_002C9970:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9978u);  if (depth < kMaxDepth) unit_0073(c, 26u, depth + 1u); else { c.pc = 0x002CC6F0u; return; } if (c.pc != 0x002C9978u) [[unlikely]] return; }
L_002C9978:
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9984u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 20u, depth + 1u); else { c.pc = 0x002CC590u; return; } if (c.pc != 0x002C9984u) [[unlikely]] return; }
L_002C9984:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 4u);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    mmi::paddub(c.r[6], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C999Cu); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002C999Cu) [[unlikely]] return; }
L_002C999C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002C99C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 736u)));
    set32(c.r[16], 0u + 42u);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[18], c.r[4], c.r[0]);  if (t) { goto L_002C99EC; } }
    set32(c.r[16], 0u + 50u);
    c.budget -= 1;
L_002C99EC:
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C99FCu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 6u, depth + 1u); else { c.pc = 0x002CC360u; return; } if (c.pc != 0x002C99FCu) [[unlikely]] return; }
L_002C99FC:
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[18].w[0] + 591u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 44u);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_002C9A20; } }
    set32(c.r[2], 0u + 52u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 43u);  if (t) { goto L_002C9A28; } }
L_002C9A20:
    st8((c.r[18].w[0] + 591u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 43u);
    c.budget -= 2;
L_002C9A28:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; st32((c.r[18].w[0] + 1216u), 0u);  if (t) { goto L_002C9A3C; } }
    set32(c.r[2], 0u + 51u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 45u);  if (t) { goto L_002C9A4C; } }
L_002C9A3C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44230000u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    st32((c.r[18].w[0] + 1216u), c.r[2].w[0]);
    set32(c.r[2], 0u + 45u);
    c.budget -= 4;
L_002C9A4C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0xC4230000u);  if (t) { goto L_002C9A64; } }
    set32(c.r[2], 0u + 53u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (t) { goto L_002C9A70; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC4230000u);
    c.budget -= 1;
L_002C9A64:
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    st32((c.r[18].w[0] + 1216u), c.r[2].w[0]);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
L_002C9A70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9A78u);  if (depth < kMaxDepth) unit_0073(c, 26u, depth + 1u); else { c.pc = 0x002CC6F0u; return; } if (c.pc != 0x002C9A78u) [[unlikely]] return; }
L_002C9A78:
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9A84u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 20u, depth + 1u); else { c.pc = 0x002CC590u; return; } if (c.pc != 0x002C9A84u) [[unlikely]] return; }
L_002C9A84:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 4u);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    mmi::paddub(c.r[6], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9A9Cu); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002C9A9Cu) [[unlikely]] return; }
L_002C9A9C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002C9AC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 591u)));
    set32(c.r[16], 0u + 56u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { goto L_002C9AE4; } }
    set32(c.r[16], 0u + 57u);
    c.budget -= 1;
L_002C9AE4:
    set32(c.r[2], 0u + 128u);
    st8((c.r[17].w[0] + 532u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st32((c.r[17].w[0] + 1068u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 812u)));
    set32(c.r[2], 0u + 5u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.r[3].d[0] = c.r[3].d[0] | 8192ull;
    st16((c.r[17].w[0] + 812u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 741u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9B14u); st8((c.r[17].w[0] + 736u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0073(c, 7u, depth + 1u); else { c.pc = 0x002CC3E0u; return; } if (c.pc != 0x002C9B14u) [[unlikely]] return; }
L_002C9B14:
    set32(c.r[5], 0u + 4u);
    c.f[12] = 0u;
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    mmi::paddub(c.r[6], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9B2Cu); mmi::paddub(c.r[7], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002C9B2Cu) [[unlikely]] return; }
L_002C9B2C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C9B40:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 11u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 586u)));
    c.r[6].d[0] = 0ull | 65535ull;
    set32(c.r[2], 0u + 9u);
    set32(c.r[5], c.r[5].w[0] << 12);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & c.r[6].d[0];
    st16((c.r[4].w[0] + 586u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 586u)));
    st32((c.r[4].w[0] + 1312u), c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    c.budget -= 13;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_002C9BAC; } }
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_002C9BAC; } }
    set32(c.r[2], 0u + 19u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 11u);  if (t) { goto L_002C9BBC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8387u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002C9BB8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 758u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002C9BB8; } }
L_002C9BAC:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 586u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 84u), c.r[2].w[0]);  if (t) { goto L_002C9BF4; } }
L_002C9BB8:
    set32(c.r[2], 0u + 11u);
    c.budget -= 1;
L_002C9BBC:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_002C9BE0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 758u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C9BE0; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 586u)));
    set32(c.r[2], c.r[2].w[0] + 16384u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 84u), c.r[2].w[0]);  if (t) { goto L_002C9BF4; } }
L_002C9BE0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 586u)));
    set32(c.r[2], c.r[2].w[0] + 32767u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    st32((c.r[4].w[0] + 84u), c.r[2].w[0]);
    c.budget -= 5;
L_002C9BF4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3ED10000u);
    c.r[2].d[0] = c.r[2].d[0] | 60293ull;
    st32((c.r[4].w[0] + 104u), c.r[2].w[0]);
    set32(c.r[2], 0u + 2u);
    c.f[12] = 0u;
    st32((c.r[4].w[0] + 108u), 0u);
    st8((c.r[4].w[0] + 741u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[4].w[0] + 736u), static_cast<std::uint8_t>(0u));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 758u)));
    set32(c.r[6], 0u + 30u);
    c.budget -= 12;
    { mmi::paddub(c.r[7], c.r[0], c.r[0]);  [[clang::musttail]] return unit_0073(c, 41u, depth); }
L_002C9C30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 11u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 586u)));
    c.r[6].d[0] = 0ull | 65535ull;
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[2], 0u + 9u);
    set32(c.r[5], c.r[5].w[0] << 12);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & c.r[6].d[0];
    st16((c.r[4].w[0] + 586u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 586u)));
    st32((c.r[4].w[0] + 1312u), c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    c.budget -= 19;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_002C9CB4; } }
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_002C9CB4; } }
    set32(c.r[2], 0u + 19u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 11u);  if (t) { goto L_002C9CC4; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8387u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002C9CC0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 758u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002C9CC0; } }
L_002C9CB4:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 586u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 84u), c.r[2].w[0]);  if (t) { goto L_002C9CFC; } }
L_002C9CC0:
    set32(c.r[2], 0u + 11u);
    c.budget -= 1;
L_002C9CC4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_002C9CE8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 758u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C9CE8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 586u)));
    set32(c.r[2], c.r[2].w[0] + 16384u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 84u), c.r[2].w[0]);  if (t) { goto L_002C9CFC; } }
L_002C9CE8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 586u)));
    set32(c.r[2], c.r[2].w[0] + 32767u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    st32((c.r[17].w[0] + 84u), c.r[2].w[0]);
    c.budget -= 5;
L_002C9CFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9D04u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 26u, depth + 1u); else { c.pc = 0x002CC6F0u; return; } if (c.pc != 0x002C9D04u) [[unlikely]] return; }
L_002C9D04:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 584u)));
    set32(c.r[3], c.r[3].w[0] << 12);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st16((c.r[17].w[0] + 584u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 11u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 586u)));
    set32(c.r[3], c.r[3].w[0] << 12);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st16((c.r[17].w[0] + 586u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9D34u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 584u)));  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x002C9D34u) [[unlikely]] return; }
L_002C9D34:
    c.f[1] = 0u;
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9D4Cu); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 584u)));  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x002C9D4Cu) [[unlikely]] return; }
L_002C9D4C:
    c.f[12] = 0u;
    set32(c.r[6], 0u + 31u);
    c.f[0] = fp::mul(c.f[12], c.f[0]);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    st32((c.r[17].w[0] + 52u), c.f[0]);
    st8((c.r[17].w[0] + 1601u), static_cast<std::uint8_t>(0u));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 758u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9D70u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002C9D70u) [[unlikely]] return; }
L_002C9D70:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C9D90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 12u);
    st8((c.r[4].w[0] + 580u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[4].w[0] + 733u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 6u);
    st8((c.r[4].w[0] + 734u), static_cast<std::uint8_t>(0u));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F1E0000u);
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(0u));
    c.r[2].d[0] = c.r[2].d[0] | 58930ull;
    st32((c.r[4].w[0] + 104u), c.r[2].w[0]);
    set32(c.r[2], 0u + 128u);
    st8((c.r[4].w[0] + 532u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st32((c.r[4].w[0] + 1068u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 84u)));
    st32((c.r[4].w[0] + 1312u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 591u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 23;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002C9DFC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1312u)));
    set32(c.r[2], c.r[2].w[0] - 16384u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1312u), c.r[2].w[0]);  if (t) { goto L_002C9E08; } }
L_002C9DFC:
    set32(c.r[2], ld32((c.r[16].w[0] + 1312u)));
    set32(c.r[2], c.r[2].w[0] + 16384u);
    st32((c.r[16].w[0] + 1312u), c.r[2].w[0]);
    c.budget -= 3;
L_002C9E08:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 591u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 4u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9E24u); set32(c.r[6], c.r[2].w[0] + 60u);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002C9E24u) [[unlikely]] return; }
L_002C9E24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9E2Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 283u, depth + 1u); else { c.pc = 0x002D7FF0u; return; } if (c.pc != 0x002C9E2Cu) [[unlikely]] return; }
L_002C9E2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C9E44; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    set32(c.r[3], 0u - 12289u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st16((c.r[16].w[0] + 812u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_002C9E44:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C9E60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 84u)));
    set32(c.r[2], 0u + 12u);
    st32((c.r[4].w[0] + 1312u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 580u));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002C9EC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9E8Cu); c.r[5].d[0] = ld16((c.r[16].w[0] + 704u));  if (depth < kMaxDepth) unit_0075(c, 91u, depth + 1u); else { c.pc = 0x002D52F0u; return; } if (c.pc != 0x002C9E8Cu) [[unlikely]] return; }
L_002C9E8C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 13u);  if (t) { goto L_002C9EC8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1308u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 591u)));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 15));
    set32(c.r[3], c.r[3].w[0] << 1);
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9EBCu); st8((c.r[16].w[0] + 591u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0072(c, 169u, depth + 1u); else { c.pc = 0x002C9D90u; return; } if (c.pc != 0x002C9EBCu) [[unlikely]] return; }
L_002C9EBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002C9F5C; } }
L_002C9EC4:
    set32(c.r[2], 0u + 13u);
    c.budget -= 1;
L_002C9EC8:
    c.f[12] = 0u;
    st8((c.r[16].w[0] + 580u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 734u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[3], 0u + 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[5], 0u + 4u);
    st32((c.r[16].w[0] + 1312u), c.r[6].w[0]);
    st8((c.r[16].w[0] + 532u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 1068u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 591u)));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9F08u); set32(c.r[6], c.r[2].w[0] + 58u);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002C9F08u) [[unlikely]] return; }
L_002C9F08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9F10u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 283u, depth + 1u); else { c.pc = 0x002D7FF0u; return; } if (c.pc != 0x002C9F10u) [[unlikely]] return; }
L_002C9F10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C9F2C; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    set32(c.r[3], 0u - 12289u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 812u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002C9F58; } }
L_002C9F2C:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[3], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00050000u);
    c.r[2].d[0] = c.r[2].d[0] | 65528ull;
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[3], c.r[3].w[0] << (c.r[5].w[0] & 31u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[5], 0u + 37u);
    set32(c.r[2], 0u + 36u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9F58u); if (c.r[3].d[0] == 0) c.r[5].d[0] = c.r[2].d[0];  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x002C9F58u) [[unlikely]] return; }
L_002C9F58:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002C9F5C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C9F70:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 580u));
    set32(c.r[2], 0u + 16u);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[18], c.r[4], c.r[0]);  if (t) { goto L_002CA024; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 584u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], c.r[2].w[0] - 27120u);
    c.r[6].d[0] = 0ull | 65535ull;
    set32(c.r[2], c.r[5].w[0] << 12);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & c.r[6].d[0];
    st16((c.r[18].w[0] + 584u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 11u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 586u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FD90000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.f[3] = c.r[2].w[0];
    set32(c.r[16], 0u + 36u);
    set32(c.r[5], c.r[5].w[0] << 12);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st16((c.r[18].w[0] + 586u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[17].w[0] + 9u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42000000u);
    c.f[1] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[2] = ld32((c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBDAE0000u);
    c.r[2].d[0] = c.r[2].d[0] | 5243ull;
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 104u), c.f[0]);
    c.budget -= 35;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 108u), c.r[2].w[0]);  if (t) { goto L_002CA058; } }
L_002CA024:
    set32(c.r[5], 0u + 1u);
    set32(c.r[16], 0u + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA034u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 6u, depth + 1u); else { c.pc = 0x002CC360u; return; } if (c.pc != 0x002CA034u) [[unlikely]] return; }
L_002CA034:
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], 0u + 34u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; st8((c.r[18].w[0] + 591u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002CA04C; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[18].w[0] + 591u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002CA04C:
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA058u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 7u, depth + 1u); else { c.pc = 0x002CC3E0u; return; } if (c.pc != 0x002CA058u) [[unlikely]] return; }
L_002CA058:
    set32(c.r[2], 0u + 2u);
    c.f[12] = 0u;
    mmi::paddub(c.r[6], c.r[16], c.r[0]);
    st8((c.r[18].w[0] + 741u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA078u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002CA078u) [[unlikely]] return; }
L_002CA078:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002CA090:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    set32(c.r[16], 0u + 32u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA0BCu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 6u, depth + 1u); else { c.pc = 0x002CC360u; return; } if (c.pc != 0x002CA0BCu) [[unlikely]] return; }
L_002CA0BC:
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], 0u + 34u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; st8((c.r[18].w[0] + 591u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002CA0D4; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[18].w[0] + 591u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002CA0D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA0DCu); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 26u, depth + 1u); else { c.pc = 0x002CC6F0u; return; } if (c.pc != 0x002CA0DCu) [[unlikely]] return; }
L_002CA0DC:
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA0E8u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 20u, depth + 1u); else { c.pc = 0x002CC590u; return; } if (c.pc != 0x002CA0E8u) [[unlikely]] return; }
L_002CA0E8:
    c.f[12] = 0u;
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    mmi::paddub(c.r[6], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA104u); st8((c.r[18].w[0] + 1601u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002CA104u) [[unlikely]] return; }
L_002CA104:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002CA120:
    set32(c.r[2], 0u + 2u);
    c.f[12] = 0u;
    st8((c.r[4].w[0] + 741u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[4].w[0] + 736u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 586u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[6], 0u + 37u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    st32((c.r[4].w[0] + 1312u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 586u)));
    set32(c.r[3], c.r[3].w[0] + 32767u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    st32((c.r[4].w[0] + 84u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 104u), c.r[2].w[0]);
    c.budget -= 18;
    { st32((c.r[4].w[0] + 108u), 0u);  [[clang::musttail]] return unit_0073(c, 41u, depth); }
L_002CA170:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 586u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F430000u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    c.f[2] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42000000u);
    c.f[0] = c.r[2].w[0];
    st32((c.r[4].w[0] + 1312u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 586u)));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 32767u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    st32((c.r[4].w[0] + 84u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[1].w[0] - 27072u));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 584u)));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_div(c, 20u, c.f[1], c.f[0]);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA1D8u);  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x002CA1D8u) [[unlikely]] return; }
L_002CA1D8:
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA1E8u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 584u)));  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x002CA1E8u) [[unlikely]] return; }
L_002CA1E8:
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA1F8u); st32((c.r[16].w[0] + 52u), c.f[0]);  if (depth < kMaxDepth) unit_0073(c, 26u, depth + 1u); else { c.pc = 0x002CC6F0u; return; } if (c.pc != 0x002CA1F8u) [[unlikely]] return; }
L_002CA1F8:
    c.f[12] = 0u;
    set32(c.r[6], 0u + 38u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA214u); st8((c.r[16].w[0] + 1601u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002CA214u) [[unlikely]] return; }
L_002CA214:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002CA230:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x46800000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[29], c.r[29].w[0] - 48u);
    fpu_div(c, 0u, c.f[0], c.f[12]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[6].d[0] = ld8((c.r[4].w[0] + 580u));
    set32(c.r[3], 0u + 21u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    st8((c.r[4].w[0] + 590u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[4].w[0] + 580u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 1216u), c.f[12]);
    c.f[20] = 0u;
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA278u); st32((c.r[4].w[0] + 1220u), c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002CA278u) [[unlikely]] return; }
L_002CA278:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 758u)));
    c.f[12] = c.f[20];
    mmi::paddub(c.r[7], c.r[2], c.r[0]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA290u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002CA290u) [[unlikely]] return; }
L_002CA290:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA298u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 94u, depth + 1u); else { c.pc = 0x002D94C0u; return; } if (c.pc != 0x002CA298u) [[unlikely]] return; }
L_002CA298:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002CA2B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 580u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 29888u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 12;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA2E0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002CA2E0u) [[unlikely]] return; }
L_002CA2E0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002CA304; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 800u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002CA304; } }
    st8((c.r[16].w[0] + 800u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_002CA304:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002CA320:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA334u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002CA334u) [[unlikely]] return; }
L_002CA334:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002CA384; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[5], 0u + 11u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002CA368; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41300000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA35Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0072(c, 193u, depth + 1u); else { c.pc = 0x002CA230u; return; } if (c.pc != 0x002CA35Cu) [[unlikely]] return; }
L_002CA35C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002CA3A8; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002CA368:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA370u);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002CA370u) [[unlikely]] return; }
L_002CA370:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA378u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x002CA378u) [[unlikely]] return; }
L_002CA378:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CA3A4; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002CA384:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA38Cu);  if (depth < kMaxDepth) unit_0075(c, 283u, depth + 1u); else { c.pc = 0x002D7FF0u; return; } if (c.pc != 0x002CA38Cu) [[unlikely]] return; }
L_002CA38C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CA3A4; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    set32(c.r[3], 0u - 12289u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st16((c.r[16].w[0] + 812u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_002CA3A4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002CA3A8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002CA3C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 7784u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002CA3F8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7786u)));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { mmi::paddub(c.r[4], c.r[16], c.r[0]);  goto L_002CA3FC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA3F0u);  if (depth < kMaxDepth) unit_0072(c, 199u, depth + 1u); else { c.pc = 0x002CA320u; return; } if (c.pc != 0x002CA3F0u) [[unlikely]] return; }
L_002CA3F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002CA5E4; } }
L_002CA3F8:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002CA3FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA404u);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002CA404u) [[unlikely]] return; }
L_002CA404:
    c.f[1] = ld32((c.r[16].w[0] + 7796u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[3].sd[0] = static_cast<std::int32_t>(0x3ED10000u);  if (t) { goto L_002CA528; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA42Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 8u, depth + 1u); else { c.pc = 0x002CC460u; return; } if (c.pc != 0x002CA42Cu) [[unlikely]] return; }
L_002CA42C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA434u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 28u, depth + 1u); else { c.pc = 0x002CC780u; return; } if (c.pc != 0x002CA434u) [[unlikely]] return; }
L_002CA434:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CA524; } }
    set32(c.r[3], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBD730000u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] | 46662ull;
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 580u));
    st8((c.r[16].w[0] + 590u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 580u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7786u)));
    c.r[1].d[0] = c.r[3].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = c.r[3].sd[0] < 30ll ? 1ull : 0ull;  if (t) { goto L_002CA494; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    set32(c.r[5], 0u + 4u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[6], c.r[3].w[0] + 9u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA488u); mmi::paddub(c.r[7], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002CA488u) [[unlikely]] return; }
L_002CA488:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002CA514; } }
    c.r[2].d[0] = c.r[3].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 1;
L_002CA494:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[3].sd[0] < 34ll ? 1ull : 0ull;  if (t) { goto L_002CA4D8; } }
    c.r[1].d[0] = c.r[3].sd[0] < 34ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002CA4D4; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 591u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 4u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[6], c.r[2].w[0] + 9u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA4CCu); mmi::paddub(c.r[7], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002CA4CCu) [[unlikely]] return; }
L_002CA4CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CA510; } }
L_002CA4D4:
    c.r[2].d[0] = c.r[3].sd[0] < 34ll ? 1ull : 0ull;
    c.budget -= 1;
L_002CA4D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002CA510; } }
    c.r[1].d[0] = c.r[3].sd[0] < 38ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002CA510; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 591u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 4u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[6], c.r[2].w[0] + 9u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA510u); mmi::paddub(c.r[7], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002CA510u) [[unlikely]] return; }
L_002CA510:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002CA514:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA51Cu);  if (depth < kMaxDepth) unit_0073(c, 26u, depth + 1u); else { c.pc = 0x002CC6F0u; return; } if (c.pc != 0x002CA51Cu) [[unlikely]] return; }
L_002CA51C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CA5E0; } }
L_002CA524:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3ED10000u);
    c.budget -= 1;
L_002CA528:
    c.r[3].d[0] = c.r[3].d[0] | 60293ull;
    c.f[2] = c.r[3].w[0];
    set32(c.r[3], ld32((c.r[16].w[0] + 612u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 9u));
    c.r[1].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002CA570; } }
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[4], c.r[3].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], c.r[3].w[0] - 27120u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42000000u);
    c.f[0] = c.r[3].w[0];
    fpu_div(c, 2u, c.f[1], c.f[0]);
    c.budget -= 11;
L_002CA570:
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002CA598; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 104u), c.f[2]);
    st32((c.r[16].w[0] + 108u), 0u);
    c.budget -= 5;
L_002CA598:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7813u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002CA5E0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[5], 0u + 11u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002CA5D0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41300000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA5C4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0072(c, 193u, depth + 1u); else { c.pc = 0x002CA230u; return; } if (c.pc != 0x002CA5C4u) [[unlikely]] return; }
L_002CA5C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CA5E0; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002CA5D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA5D8u);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002CA5D8u) [[unlikely]] return; }
L_002CA5D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA5E0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x002CA5E0u) [[unlikely]] return; }
L_002CA5E0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002CA5E4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002CA5F0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 800u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002CA610; } }
    set32(c.r[2], 0u + 128u);
    st8((c.r[4].w[0] + 532u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st32((c.r[4].w[0] + 1068u), c.r[2].w[0]);
    c.budget -= 4;
L_002CA610:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 30072u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002C8000u < 16384u) { entry = entries_0072[(t - 0x002C8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002CA630:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 2u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA64Cu); st8((c.r[4].w[0] + 1601u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0073(c, 23u, depth + 1u); else { c.pc = 0x002CC650u; return; } if (c.pc != 0x002CA64Cu) [[unlikely]] return; }
L_002CA64C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA654u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 30u, depth + 1u); else { c.pc = 0x002CC870u; return; } if (c.pc != 0x002CA654u) [[unlikely]] return; }
L_002CA654:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CA6F0; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBCF30000u);
    c.r[2].d[0] = c.r[2].d[0] | 46662ull;
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA678u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 27u, depth + 1u); else { c.pc = 0x002CC730u; return; } if (c.pc != 0x002CA678u) [[unlikely]] return; }
L_002CA678:
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA684u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_004B(c, 27u, depth + 1u); else { c.pc = 0x0022C720u; return; } if (c.pc != 0x002CA684u) [[unlikely]] return; }
L_002CA684:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 4u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 591u)));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA6A4u); set32(c.r[6], c.r[2].w[0] + 56u);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002CA6A4u) [[unlikely]] return; }
L_002CA6A4:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA6B0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x002CA6B0u) [[unlikely]] return; }
L_002CA6B0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002CA6DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA6C8u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0075(c, 244u, depth + 1u); else { c.pc = 0x002D78B0u; return; } if (c.pc != 0x002CA6C8u) [[unlikely]] return; }
L_002CA6C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CA6DC; } }
    set32(c.r[5], 0u + 30u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA6DCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x002CA6DCu) [[unlikely]] return; }
L_002CA6DC:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA6E8u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_0023(c, 144u, depth + 1u); else { c.pc = 0x0018DAB0u; return; } if (c.pc != 0x002CA6E8u) [[unlikely]] return; }
L_002CA6E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002CA7B4; } }
L_002CA6F0:
    c.f[1] = ld32((c.r[16].w[0] + 7796u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], 0u + 1u);  if (t) { goto L_002CA714; } }
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 1;
L_002CA714:
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002CA734; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_002CA734:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002CA7B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA744u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002CA744u) [[unlikely]] return; }
L_002CA744:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CA774; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 4u);
    set32(c.r[7], 0u + 10u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 591u)));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA774u); set32(c.r[6], c.r[2].w[0] + 54u);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002CA774u) [[unlikely]] return; }
L_002CA774:
    c.f[1] = ld32((c.r[16].w[0] + 7796u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002CA7B0; } }
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = ld32((c.r[16].w[0] + 7780u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA7A4u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002CA7A4u) [[unlikely]] return; }
L_002CA7A4:
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 84u), c.r[3].w[0]);
    c.budget -= 3;
L_002CA7B0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002CA7B4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002CA7C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA7D4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002CA7D4u) [[unlikely]] return; }
L_002CA7D4:
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 1601u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA7E4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 23u, depth + 1u); else { c.pc = 0x002CC650u; return; } if (c.pc != 0x002CA7E4u) [[unlikely]] return; }
L_002CA7E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA7ECu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 30u, depth + 1u); else { c.pc = 0x002CC870u; return; } if (c.pc != 0x002CA7ECu) [[unlikely]] return; }
L_002CA7EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CA880; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBCF30000u);
    c.r[2].d[0] = c.r[2].d[0] | 46662ull;
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA810u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 27u, depth + 1u); else { c.pc = 0x002CC730u; return; } if (c.pc != 0x002CA810u) [[unlikely]] return; }
L_002CA810:
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA81Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_004B(c, 27u, depth + 1u); else { c.pc = 0x0022C720u; return; } if (c.pc != 0x002CA81Cu) [[unlikely]] return; }
L_002CA81C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 591u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 4u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[6], c.r[3].w[0] + 56u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA83Cu); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002CA83Cu) [[unlikely]] return; }
L_002CA83C:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA848u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x002CA848u) [[unlikely]] return; }
L_002CA848:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002CA874; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA860u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0075(c, 244u, depth + 1u); else { c.pc = 0x002D78B0u; return; } if (c.pc != 0x002CA860u) [[unlikely]] return; }
L_002CA860:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CA874; } }
    set32(c.r[5], 0u + 30u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA874u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x002CA874u) [[unlikely]] return; }
L_002CA874:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA880u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_0023(c, 144u, depth + 1u); else { c.pc = 0x0018DAB0u; return; } if (c.pc != 0x002CA880u) [[unlikely]] return; }
L_002CA880:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002CA890:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA8ACu); mmi::paddub(c.r[17], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 8u, depth + 1u); else { c.pc = 0x002CC460u; return; } if (c.pc != 0x002CA8ACu) [[unlikely]] return; }
L_002CA8AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA8B4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002CA8B4u) [[unlikely]] return; }
L_002CA8B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CA8C0; } }
    c.r[17].d[0] = c.r[17].d[0] | 1ull;
    c.budget -= 1;
L_002CA8C0:
    c.f[1] = ld32((c.r[16].w[0] + 104u));
    c.f[0] = ld32((c.r[16].w[0] + 108u));
    c.f[2] = 0u;
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002CA8EC; } }
    st32((c.r[16].w[0] + 104u), 0u);
    st32((c.r[16].w[0] + 108u), 0u);
    c.r[17].d[0] = c.r[17].d[0] | 2ull;
    c.budget -= 3;
L_002CA8EC:
    c.f[1] = ld32((c.r[16].w[0] + 7796u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 3u);  if (t) { goto L_002CA920; } }
    set32(c.r[2], 0u + 128u);
    st8((c.r[16].w[0] + 532u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st32((c.r[16].w[0] + 1068u), c.r[2].w[0]);
    set32(c.r[2], 0u + 3u);
    c.budget -= 5;
L_002CA920:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002CA93C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA930u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0072(c, 172u, depth + 1u); else { c.pc = 0x002C9E60u; return; } if (c.pc != 0x002CA930u) [[unlikely]] return; }
L_002CA930:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_002CAA00; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002CA93C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA944u);  if (depth < kMaxDepth) unit_0073(c, 28u, depth + 1u); else { c.pc = 0x002CC780u; return; } if (c.pc != 0x002CA944u) [[unlikely]] return; }
L_002CA944:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CA9FC; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 108u), 0u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], c.r[2].w[0] - 18464u);
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBDF30000u);
    c.r[2].d[0] = c.r[2].d[0] | 46662ull;
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 36u), c.f[0]);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[2].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 23;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002CA9D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA9B0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 283u, depth + 1u); else { c.pc = 0x002D7FF0u; return; } if (c.pc != 0x002CA9B0u) [[unlikely]] return; }
L_002CA9B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CA9D4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x428C0000u);
    st32((c.r[16].w[0] + 1068u), c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    set32(c.r[3], 0u - 12289u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 812u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002CA9FC; } }
L_002CA9D4:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002CA9D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA9E0u);  if (depth < kMaxDepth) unit_0073(c, 26u, depth + 1u); else { c.pc = 0x002CC6F0u; return; } if (c.pc != 0x002CA9E0u) [[unlikely]] return; }
L_002CA9E0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 591u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 4u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA9FCu); set32(c.r[6], c.r[2].w[0] + 54u);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002CA9FCu) [[unlikely]] return; }
L_002CA9FC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002CAA00:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002CAA10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 128u);
    st8((c.r[4].w[0] + 532u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAA34u); st32((c.r[4].w[0] + 1068u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0073(c, 8u, depth + 1u); else { c.pc = 0x002CC460u; return; } if (c.pc != 0x002CAA34u) [[unlikely]] return; }
L_002CAA34:
    c.f[1] = ld32((c.r[16].w[0] + 104u));
    c.f[0] = ld32((c.r[16].w[0] + 108u));
    c.f[2] = 0u;
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002CAA60; } }
    st32((c.r[16].w[0] + 104u), 0u);
    st32((c.r[16].w[0] + 108u), 0u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
L_002CAA60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAA68u);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002CAA68u) [[unlikely]] return; }
L_002CAA68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002CAA84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAA78u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0072(c, 172u, depth + 1u); else { c.pc = 0x002C9E60u; return; } if (c.pc != 0x002CAA78u) [[unlikely]] return; }
L_002CAA78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002CAB04; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002CAA84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAA8Cu);  if (depth < kMaxDepth) unit_0073(c, 28u, depth + 1u); else { c.pc = 0x002CC780u; return; } if (c.pc != 0x002CAA8Cu) [[unlikely]] return; }
L_002CAA8C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CAB00; } }
    set32(c.r[5], 0u + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[16].w[0] + 108u), 0u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], c.r[2].w[0] - 18464u);
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBDF30000u);
    c.r[2].d[0] = c.r[2].d[0] | 46662ull;
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[1] = ld32((c.r[3].w[0]));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 36u), c.f[0]);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 580u));
    st8((c.r[16].w[0] + 590u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAAE4u); st8((c.r[16].w[0] + 580u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (depth < kMaxDepth) unit_0073(c, 26u, depth + 1u); else { c.pc = 0x002CC6F0u; return; } if (c.pc != 0x002CAAE4u) [[unlikely]] return; }
L_002CAAE4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 591u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 4u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAB00u); set32(c.r[6], c.r[2].w[0] + 54u);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002CAB00u) [[unlikely]] return; }
L_002CAB00:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002CAB04:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002CAB10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAB28u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002CAB28u) [[unlikely]] return; }
L_002CAB28:
    c.f[1] = ld32((c.r[16].w[0] + 7796u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002CABC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAB50u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 8u, depth + 1u); else { c.pc = 0x002CC460u; return; } if (c.pc != 0x002CAB50u) [[unlikely]] return; }
L_002CAB50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAB58u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 28u, depth + 1u); else { c.pc = 0x002CC780u; return; } if (c.pc != 0x002CAB58u) [[unlikely]] return; }
L_002CAB58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CABC8; } }
    c.f[20] = ld32((c.r[16].w[0] + 7796u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002CAB84; } }
    c.f[20] = c.f[0];
    c.budget -= 1;
L_002CAB84:
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 108u), 0u);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 580u));
    set32(c.r[2], 0u + 11u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    st8((c.r[16].w[0] + 590u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CABA4u); st8((c.r[16].w[0] + 580u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0073(c, 26u, depth + 1u); else { c.pc = 0x002CC6F0u; return; } if (c.pc != 0x002CABA4u) [[unlikely]] return; }
L_002CABA4:
    st8((c.r[16].w[0] + 1601u), static_cast<std::uint8_t>(0u));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 758u)));
    set32(c.r[6], 0u + 31u);
    c.f[12] = c.f[20];
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CABC0u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002CABC0u) [[unlikely]] return; }
L_002CABC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_002CAC14; } }
L_002CABC8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7813u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002CAC10; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[5], 0u + 11u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002CABFC; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CABF0u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002CABF0u) [[unlikely]] return; }
L_002CABF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002CAC08; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002CABFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAC04u);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002CAC04u) [[unlikely]] return; }
L_002CAC04:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002CAC08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAC10u);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x002CAC10u) [[unlikely]] return; }
L_002CAC10:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002CAC14:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002CAC30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAC44u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002CAC44u) [[unlikely]] return; }
L_002CAC44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAC4Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 23u, depth + 1u); else { c.pc = 0x002CC650u; return; } if (c.pc != 0x002CAC4Cu) [[unlikely]] return; }
L_002CAC4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAC54u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 30u, depth + 1u); else { c.pc = 0x002CC870u; return; } if (c.pc != 0x002CAC54u) [[unlikely]] return; }
L_002CAC54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CACB4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3ED10000u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[2].d[0] | 60293ull;
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 108u), 0u);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 580u));
    set32(c.r[2], 0u + 10u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    st8((c.r[16].w[0] + 590u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAC88u); st8((c.r[16].w[0] + 580u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0073(c, 27u, depth + 1u); else { c.pc = 0x002CC730u; return; } if (c.pc != 0x002CAC88u) [[unlikely]] return; }
L_002CAC88:
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAC94u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_004B(c, 27u, depth + 1u); else { c.pc = 0x0022C720u; return; } if (c.pc != 0x002CAC94u) [[unlikely]] return; }
L_002CAC94:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 758u)));
    c.f[12] = ld32((c.r[16].w[0] + 7796u));
    set32(c.r[6], 0u + 30u);
    set32(c.r[7], 0u + 3u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CACACu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002CACACu) [[unlikely]] return; }
L_002CACAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002CAD00; } }
L_002CACB4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7813u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002CACFC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[5], 0u + 11u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002CACE8; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CACDCu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 79u, depth + 1u); else { c.pc = 0x002D9240u; return; } if (c.pc != 0x002CACDCu) [[unlikely]] return; }
L_002CACDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 11u);  if (t) { goto L_002CACF4; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002CACE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CACF0u);  if (depth < kMaxDepth) unit_0076(c, 79u, depth + 1u); else { c.pc = 0x002D9240u; return; } if (c.pc != 0x002CACF0u) [[unlikely]] return; }
L_002CACF0:
    set32(c.r[5], 0u + 11u);
    c.budget -= 1;
L_002CACF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CACFCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 76u, depth + 1u); else { c.pc = 0x002D91D0u; return; } if (c.pc != 0x002CACFCu) [[unlikely]] return; }
L_002CACFC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002CAD00:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002CAD10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], 0u + 128u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 532u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    st32((c.r[4].w[0] + 1068u), c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAD3Cu); set32(c.r[5], ld32((c.r[17].w[0] + 1312u)));  if (depth < kMaxDepth) unit_0075(c, 105u, depth + 1u); else { c.pc = 0x002D56C0u; return; } if (c.pc != 0x002CAD3Cu) [[unlikely]] return; }
L_002CAD3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAD44u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002CAD44u) [[unlikely]] return; }
L_002CAD44:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41600000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[3], 0u + 6u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    set32(c.r[2], c.r[5].w[0] - 1u);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAD74u); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0074(c, 73u, depth + 1u); else { c.pc = 0x002D0720u; return; } if (c.pc != 0x002CAD74u) [[unlikely]] return; }
L_002CAD74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CAE60; } }
    set32(c.r[5], 0u + 63u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAD8Cu); mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x002CAD8Cu) [[unlikely]] return; }
L_002CAD8C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002CADB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CADA4u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0075(c, 244u, depth + 1u); else { c.pc = 0x002D78B0u; return; } if (c.pc != 0x002CADA4u) [[unlikely]] return; }
L_002CADA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CADB8; } }
    set32(c.r[5], 0u + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CADB8u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x002CADB8u) [[unlikely]] return; }
L_002CADB8:
    c.r[5].d[0] = ld16((c.r[17].w[0] + 704u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CADC4u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 91u, depth + 1u); else { c.pc = 0x002D52F0u; return; } if (c.pc != 0x002CADC4u) [[unlikely]] return; }
L_002CADC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CADEC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 1308u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 591u)));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 15));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002CADEC; } }
    set32(c.r[16], 0u + 1u);
    c.budget -= 1;
L_002CADEC:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 166u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    st16((c.r[17].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CAE28; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002CAE28; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 734u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CAE60; } }
L_002CAE28:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 591u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 166u)));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    st8((c.r[17].w[0] + 591u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 166u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[3], c.r[3].w[0] << 15);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[17].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAE60u); st32((c.r[17].w[0] + 1312u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0072(c, 172u, depth + 1u); else { c.pc = 0x002C9E60u; return; } if (c.pc != 0x002CAE60u) [[unlikely]] return; }
L_002CAE60:
    set32(c.r[2], ld32((c.r[17].w[0] + 724u)));
    c.r[2].d[0] = c.r[2].d[0] & 63ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_002CAE7C; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 734u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 3;
L_002CAE7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAE84u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 234u, depth + 1u); else { c.pc = 0x002DEB00u; return; } if (c.pc != 0x002CAE84u) [[unlikely]] return; }
L_002CAE84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAE8Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 283u, depth + 1u); else { c.pc = 0x002D7FF0u; return; } if (c.pc != 0x002CAE8Cu) [[unlikely]] return; }
L_002CAE8C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CAEA4; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 812u)));
    set32(c.r[3], 0u - 12289u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st16((c.r[17].w[0] + 812u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_002CAEA4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002CAEC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 10;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[2], 0u + 128u);  goto L_002CB078; }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 369u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002CB074; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8386u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002CB074; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8391u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x007A0000u);  if (t) { goto L_002CB074; } }
    set32(c.r[4], c.r[3].w[0] + 25952u);
    c.r[3].d[0] = ld8((c.r[17].w[0] + 344u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[16], c.r[17].w[0] + 320u);  if (t) { goto L_002CB074; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2070u)));
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[6].d[0];  if (t) { goto L_002CB074; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 2068u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[6].d[0];  if (t) { goto L_002CB074; } }
    c.f[1] = ld32((c.r[17].w[0] + 1228u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_002CB040; } }
    st32((c.r[17].w[0] + 1228u), 0u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 7814u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3E990000u);  if (t) { goto L_002CAF78; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0] + 7740u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 7780u), c.r[2].w[0]);  if (t) { goto L_002CAF84; } }
L_002CAF78:
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    st32((c.r[17].w[0] + 7740u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 7780u), c.r[2].w[0]);
    c.budget -= 3;
L_002CAF84:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 514u)));
    set32(c.r[2], 0u + 32767u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    st16((c.r[17].w[0] + 516u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[17].w[0] + 514u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAFA0u); st16((c.r[17].w[0] + 842u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002CAFA0u) [[unlikely]] return; }
L_002CAFA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002CB004; } }
    st8((c.r[17].w[0] + 532u), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0] + 1068u), 0u);
    st32((c.r[17].w[0] + 1052u), 0u);
    st8((c.r[17].w[0] + 741u), static_cast<std::uint8_t>(0u));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 812u)));
    set32(c.r[4], 0u - 12289u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[2], 0u + 4u);
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    st16((c.r[17].w[0] + 812u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st32((c.r[17].w[0] + 7740u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 7780u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 840u)));
    set32(c.r[5], 0u + 10u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    st16((c.r[17].w[0] + 842u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAFF0u); st8((c.r[17].w[0] + 518u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002CAFF0u) [[unlikely]] return; }
L_002CAFF0:
    set32(c.r[5], 0u + 10u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAFFCu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 60u, depth + 1u); else { c.pc = 0x002D8F40u; return; } if (c.pc != 0x002CAFFCu) [[unlikely]] return; }
L_002CAFFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 24u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002CB06C; } }
L_002CB004:
    st8((c.r[17].w[0] + 8052u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 4u);
    st8((c.r[17].w[0] + 8053u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 8u);
    st8((c.r[17].w[0] + 518u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB028u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 75u, depth + 1u); else { c.pc = 0x002D07A0u; return; } if (c.pc != 0x002CB028u) [[unlikely]] return; }
L_002CB028:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 36u);  if (t) { goto L_002CB124; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB038u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x002CB038u) [[unlikely]] return; }
L_002CB038:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CB06C; } }
L_002CB040:
    c.f[0] = c.r[3].w[0];
    set32(c.r[5], 0u + 4u);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[3], 0u + 8u);
    st32((c.r[17].w[0] + 1228u), c.f[0]);
    st8((c.r[17].w[0] + 8052u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[17].w[0] + 8053u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[17].w[0] + 532u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[17].w[0] + 1068u), c.r[4].w[0]);
    st8((c.r[17].w[0] + 518u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 11;
L_002CB06C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_002CB128; } }
L_002CB074:
    set32(c.r[2], 0u + 128u);
    c.budget -= 1;
L_002CB078:
    st8((c.r[17].w[0] + 532u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st32((c.r[17].w[0] + 1068u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB08Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002CB08Cu) [[unlikely]] return; }
L_002CB08C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_002CB0FC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    st32((c.r[17].w[0] + 1068u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    st32((c.r[17].w[0] + 1052u), c.r[2].w[0]);
    st8((c.r[17].w[0] + 741u), static_cast<std::uint8_t>(0u));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 812u)));
    set32(c.r[3], 0u - 12289u);
    set32(c.r[2], 0u + 11u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st16((c.r[17].w[0] + 812u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8386u)));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[5], 0u + 10u);  if (t) { goto L_002CB0E0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB0D8u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0072(c, 193u, depth + 1u); else { c.pc = 0x002CA230u; return; } if (c.pc != 0x002CB0D8u) [[unlikely]] return; }
L_002CB0D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CB124; } }
L_002CB0E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB0E8u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002CB0E8u) [[unlikely]] return; }
L_002CB0E8:
    set32(c.r[5], 0u + 10u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB0F4u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 60u, depth + 1u); else { c.pc = 0x002D8F40u; return; } if (c.pc != 0x002CB0F4u) [[unlikely]] return; }
L_002CB0F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CB124; } }
L_002CB0FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB104u);  if (depth < kMaxDepth) unit_0075(c, 283u, depth + 1u); else { c.pc = 0x002D7FF0u; return; } if (c.pc != 0x002CB104u) [[unlikely]] return; }
L_002CB104:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x42480000u);  if (t) { goto L_002CB124; } }
    st32((c.r[17].w[0] + 1068u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 1052u), 0u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 812u)));
    set32(c.r[3], 0u - 12289u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st16((c.r[17].w[0] + 812u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 6;
L_002CB124:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002CB128:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002CB140:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 580u));
    set32(c.r[2], 0u + 17u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002CB16C; } }
    set32(c.r[2], 0u + 128u);
    st8((c.r[16].w[0] + 532u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st32((c.r[16].w[0] + 1068u), c.r[2].w[0]);
    c.budget -= 4;
L_002CB16C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB174u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002CB174u) [[unlikely]] return; }
L_002CB174:
    c.f[1] = ld32((c.r[16].w[0] + 7796u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[3].sd[0] = static_cast<std::int32_t>(0x3ED10000u);  if (t) { goto L_002CB1E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB19Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 8u, depth + 1u); else { c.pc = 0x002CC460u; return; } if (c.pc != 0x002CB19Cu) [[unlikely]] return; }
L_002CB19C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB1A4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 28u, depth + 1u); else { c.pc = 0x002CC780u; return; } if (c.pc != 0x002CB1A4u) [[unlikely]] return; }
L_002CB1A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CB1E0; } }
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBD730000u);
    st32((c.r[16].w[0] + 108u), 0u);
    c.r[2].d[0] = c.r[2].d[0] | 46662ull;
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 580u));
    set32(c.r[2], 0u + 18u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    st8((c.r[16].w[0] + 590u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB1D8u); st8((c.r[16].w[0] + 580u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0073(c, 26u, depth + 1u); else { c.pc = 0x002CC6F0u; return; } if (c.pc != 0x002CB1D8u) [[unlikely]] return; }
L_002CB1D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1601u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002CB288; } }
L_002CB1E0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3ED10000u);
    c.budget -= 1;
L_002CB1E4:
    c.r[3].d[0] = c.r[3].d[0] | 60293ull;
    c.f[2] = c.r[3].w[0];
    set32(c.r[3], ld32((c.r[16].w[0] + 612u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 9u));
    c.r[1].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002CB22C; } }
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[4], c.r[3].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], c.r[3].w[0] - 27120u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42000000u);
    c.f[0] = c.r[3].w[0];
    fpu_div(c, 2u, c.f[1], c.f[0]);
    c.budget -= 11;
L_002CB22C:
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002CB248; } }
    st32((c.r[16].w[0] + 104u), c.f[2]);
    st32((c.r[16].w[0] + 108u), 0u);
    c.budget -= 2;
L_002CB248:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7813u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002CB288; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 580u));
    set32(c.r[2], 0u + 17u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[5], 0u + 11u);  if (t) { goto L_002CB278; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    st32((c.r[16].w[0] + 1068u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    st32((c.r[16].w[0] + 1052u), c.r[2].w[0]);
    set32(c.r[5], 0u + 11u);
    c.budget -= 5;
L_002CB278:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB280u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002CB280u) [[unlikely]] return; }
L_002CB280:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB288u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x002CB288u) [[unlikely]] return; }
L_002CB288:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002CB2A0:
    set32(c.r[2], 0u + 128u);
    st8((c.r[4].w[0] + 532u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st32((c.r[4].w[0] + 1068u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 30088u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 12;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002C8000u < 16384u) { entry = entries_0072[(t - 0x002C8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002CB2D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB2E4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 23u, depth + 1u); else { c.pc = 0x002CC650u; return; } if (c.pc != 0x002CB2E4u) [[unlikely]] return; }
L_002CB2E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB2ECu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 30u, depth + 1u); else { c.pc = 0x002CC870u; return; } if (c.pc != 0x002CB2ECu) [[unlikely]] return; }
L_002CB2EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CB348; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBCF30000u);
    c.r[2].d[0] = c.r[2].d[0] | 46662ull;
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB310u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 27u, depth + 1u); else { c.pc = 0x002CC730u; return; } if (c.pc != 0x002CB310u) [[unlikely]] return; }
L_002CB310:
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB31Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_004B(c, 27u, depth + 1u); else { c.pc = 0x0022C720u; return; } if (c.pc != 0x002CB31Cu) [[unlikely]] return; }
L_002CB31C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[3], 0u + 16u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[5], 0u + 11u);  if (t) { goto L_002CB338; } }
    set32(c.r[3], 0u + 17u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002CB39C; } }
L_002CB338:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB340u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 22u, depth + 1u); else { c.pc = 0x00198340u; return; } if (c.pc != 0x002CB340u) [[unlikely]] return; }
L_002CB340:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002CB3A0; } }
L_002CB348:
    c.f[1] = ld32((c.r[16].w[0] + 7796u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], 0u + 1u);  if (t) { goto L_002CB36C; } }
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 1;
L_002CB36C:
    c.f[1] = ld32((c.r[16].w[0] + 52u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002CB38C; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_002CB38C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002CB39C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB39Cu);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002CB39Cu) [[unlikely]] return; }
L_002CB39C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002CB3A0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002CB3B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB3C4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002CB3C4u) [[unlikely]] return; }
L_002CB3C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB3CCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 23u, depth + 1u); else { c.pc = 0x002CC650u; return; } if (c.pc != 0x002CB3CCu) [[unlikely]] return; }
L_002CB3CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB3D4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 30u, depth + 1u); else { c.pc = 0x002CC870u; return; } if (c.pc != 0x002CB3D4u) [[unlikely]] return; }
L_002CB3D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CB430; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBDAE0000u);
    c.r[2].d[0] = c.r[2].d[0] | 5243ull;
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB3FCu); st32((c.r[16].w[0] + 108u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0073(c, 27u, depth + 1u); else { c.pc = 0x002CC730u; return; } if (c.pc != 0x002CB3FCu) [[unlikely]] return; }
L_002CB3FC:
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB408u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_004B(c, 27u, depth + 1u); else { c.pc = 0x0022C720u; return; } if (c.pc != 0x002CB408u) [[unlikely]] return; }
L_002CB408:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[3], 0u + 16u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[5], 0u + 11u);  if (t) { goto L_002CB428; } }
    set32(c.r[3], 0u + 17u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002CB430; } }
    set32(c.r[5], 0u + 11u);
    c.budget -= 1;
L_002CB428:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB430u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 22u, depth + 1u); else { c.pc = 0x00198340u; return; } if (c.pc != 0x002CB430u) [[unlikely]] return; }
L_002CB430:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002CB440:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB45Cu); mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 8u, depth + 1u); else { c.pc = 0x002CC460u; return; } if (c.pc != 0x002CB45Cu) [[unlikely]] return; }
L_002CB45C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB464u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002CB464u) [[unlikely]] return; }
L_002CB464:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CB470; } }
    c.r[16].d[0] = c.r[16].d[0] | 1ull;
    c.budget -= 1;
L_002CB470:
    c.f[1] = ld32((c.r[17].w[0] + 104u));
    c.f[0] = ld32((c.r[17].w[0] + 108u));
    c.f[2] = 0u;
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 3u);  if (t) { goto L_002CB4A0; } }
    st32((c.r[17].w[0] + 104u), 0u);
    st32((c.r[17].w[0] + 108u), 0u);
    c.r[16].d[0] = c.r[16].d[0] | 2ull;
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
L_002CB4A0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_002CB4E4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    st32((c.r[17].w[0] + 1068u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    st32((c.r[17].w[0] + 1052u), c.r[2].w[0]);
    st8((c.r[17].w[0] + 800u), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0] + 1240u), 0u);
    set32(c.r[5], 0u + 11u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB4D0u); st32((c.r[17].w[0] + 1244u), 0u);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002CB4D0u) [[unlikely]] return; }
L_002CB4D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB4D8u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x002CB4D8u) [[unlikely]] return; }
L_002CB4D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_002CB51C; } }
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_002CB4E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB4ECu);  if (depth < kMaxDepth) unit_0073(c, 28u, depth + 1u); else { c.pc = 0x002CC780u; return; } if (c.pc != 0x002CB4ECu) [[unlikely]] return; }
L_002CB4EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CB518; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBDF30000u);
    st32((c.r[17].w[0] + 108u), 0u);
    c.r[2].d[0] = c.r[2].d[0] | 46662ull;
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB514u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 26u, depth + 1u); else { c.pc = 0x002CC6F0u; return; } if (c.pc != 0x002CB514u) [[unlikely]] return; }
L_002CB514:
    st8((c.r[17].w[0] + 1601u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_002CB518:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002CB51C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002CB530:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB544u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002CB544u) [[unlikely]] return; }
L_002CB544:
    c.f[0] = ld32((c.r[16].w[0] + 7796u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42240000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x42240000u);  if (t) { goto L_002CB5FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB56Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 8u, depth + 1u); else { c.pc = 0x002CC460u; return; } if (c.pc != 0x002CB56Cu) [[unlikely]] return; }
L_002CB56C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB574u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 28u, depth + 1u); else { c.pc = 0x002CC780u; return; } if (c.pc != 0x002CB574u) [[unlikely]] return; }
L_002CB574:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CB5F8; } }
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBD730000u);
    st32((c.r[16].w[0] + 108u), 0u);
    c.r[2].d[0] = c.r[2].d[0] | 46662ull;
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 580u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    set32(c.r[3], 0u + 20u);
    c.f[0] = c.r[2].w[0];
    st8((c.r[16].w[0] + 590u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 580u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[12] = ld32((c.r[16].w[0] + 7796u));
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 16;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002CB5D8; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 758u)));
    set32(c.r[6], 0u + 37u);
    set32(c.r[7], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB5D0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002CB5D0u) [[unlikely]] return; }
L_002CB5D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CB5F0; } }
L_002CB5D8:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 758u)));
    c.f[12] = 0u;
    set32(c.r[6], 0u + 11u);
    set32(c.r[7], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB5F0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002CB5F0u) [[unlikely]] return; }
L_002CB5F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002CB660; } }
L_002CB5F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42240000u);
    c.budget -= 1;
L_002CB5FC:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB608u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 75u, depth + 1u); else { c.pc = 0x002D07A0u; return; } if (c.pc != 0x002CB608u) [[unlikely]] return; }
L_002CB608:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CB614; } }
    st32((c.r[16].w[0] + 104u), 0u);
    c.budget -= 1;
L_002CB614:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7813u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002CB65C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[2], 0u + 11u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[5], 0u + 12u);  if (t) { goto L_002CB64C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB640u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0072(c, 193u, depth + 1u); else { c.pc = 0x002CA230u; return; } if (c.pc != 0x002CB640u) [[unlikely]] return; }
L_002CB640:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CB65C; } }
    set32(c.r[5], 0u + 12u);
    c.budget -= 1;
L_002CB64C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB654u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002CB654u) [[unlikely]] return; }
L_002CB654:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB65Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x002CB65Cu) [[unlikely]] return; }
L_002CB65C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002CB660:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002CB670:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    set32(c.r[2], c.r[28].w[0] - 28672u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002C8000u < 16384u) { entry = entries_0072[(t - 0x002C8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002CB690:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB6A4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002CB6A4u) [[unlikely]] return; }
L_002CB6A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002CB6C8; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 758u)));
    c.f[12] = 0u;
    set32(c.r[6], 0u + 6u);
    set32(c.r[7], 0u + 18u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB6C4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002CB6C4u) [[unlikely]] return; }
L_002CB6C4:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002CB6C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB6D0u);  if (depth < kMaxDepth) unit_0073(c, 23u, depth + 1u); else { c.pc = 0x002CC650u; return; } if (c.pc != 0x002CB6D0u) [[unlikely]] return; }
L_002CB6D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB6D8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 30u, depth + 1u); else { c.pc = 0x002CC870u; return; } if (c.pc != 0x002CB6D8u) [[unlikely]] return; }
L_002CB6D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CB71C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB6F8u); st32((c.r[16].w[0] + 104u), 0u);  if (depth < kMaxDepth) unit_0073(c, 27u, depth + 1u); else { c.pc = 0x002CC730u; return; } if (c.pc != 0x002CB6F8u) [[unlikely]] return; }
L_002CB6F8:
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB704u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_004B(c, 27u, depth + 1u); else { c.pc = 0x0022C720u; return; } if (c.pc != 0x002CB704u) [[unlikely]] return; }
L_002CB704:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 758u)));
    c.f[12] = 0u;
    set32(c.r[6], 0u + 11u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB71Cu); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002CB71Cu) [[unlikely]] return; }
L_002CB71C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002CB730:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB744u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002CB744u) [[unlikely]] return; }
L_002CB744:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002CB794; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[5], 0u + 11u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002CB778; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41300000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB76Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0072(c, 193u, depth + 1u); else { c.pc = 0x002CA230u; return; } if (c.pc != 0x002CB76Cu) [[unlikely]] return; }
L_002CB76C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002CB7B8; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002CB778:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB780u);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002CB780u) [[unlikely]] return; }
L_002CB780:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB788u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x002CB788u) [[unlikely]] return; }
L_002CB788:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CB7B4; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002CB794:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB79Cu);  if (depth < kMaxDepth) unit_0075(c, 283u, depth + 1u); else { c.pc = 0x002D7FF0u; return; } if (c.pc != 0x002CB79Cu) [[unlikely]] return; }
L_002CB79C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CB7B4; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    set32(c.r[3], 0u - 12289u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st16((c.r[16].w[0] + 812u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_002CB7B4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002CB7B8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002CB7D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB7E4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002CB7E4u) [[unlikely]] return; }
L_002CB7E4:
    c.f[2] = ld32((c.r[16].w[0] + 7780u));
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 1216u), c.f[1]);  if (t) { goto L_002CB83C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 590u)));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB81Cu); st8((c.r[16].w[0] + 580u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002CB81Cu) [[unlikely]] return; }
L_002CB81C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002CB8A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB834u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x002CB834u) [[unlikely]] return; }
L_002CB834:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002CB8A8; } }
L_002CB83C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 758u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CB868; } }
    c.f[1] = ld32((c.r[16].w[0] + 1220u));
    c.f[0] = ld32((c.r[16].w[0] + 7780u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB858u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002CB858u) [[unlikely]] return; }
L_002CB858:
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 84u), c.r[2].w[0]);  if (t) { goto L_002CB884; } }
L_002CB868:
    c.f[1] = ld32((c.r[16].w[0] + 1220u));
    c.f[0] = ld32((c.r[16].w[0] + 7780u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB878u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002CB878u) [[unlikely]] return; }
L_002CB878:
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    st32((c.r[16].w[0] + 84u), c.r[2].w[0]);
    c.budget -= 3;
L_002CB884:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB88Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 283u, depth + 1u); else { c.pc = 0x002D7FF0u; return; } if (c.pc != 0x002CB88Cu) [[unlikely]] return; }
L_002CB88C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CB8A4; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    set32(c.r[3], 0u - 12289u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st16((c.r[16].w[0] + 812u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_002CB8A4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002CB8A8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002CB8C0:
    set32(c.r[3], ld32((c.r[4].w[0] + 608u)));
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 270u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[6], ld32((c.r[4].w[0] + 264u)));
    c.r[10].d[0] = ld8((c.r[3].w[0] + 1u));
    c.r[1].d[0] = c.r[9].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], c.r[2].w[0] - 21984u);  if (t) { goto L_002CBBB8; } }
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = c.r[9].d[0] == 0ull;  if (t) { goto L_002CB904; } }
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 4u)));
    c.r[1].d[0] = c.r[11].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002CB904; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 8390u)));  if (t) { goto L_002CB928; } }
L_002CB904:
    c.r[12].d[0] = ld8((c.r[4].w[0] + 531u));
    c.budget -= 3;
    { const bool t = c.r[12].d[0] != 0ull; set32(c.r[11], 0u + 1u);  if (t) { goto L_002CB918; } }
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 8u)));
    c.budget -= 2;
L_002CB918:
    c.budget -= 2;
    { const bool t = c.r[12].d[0] != c.r[11].d[0];  if (t) { goto L_002CB928; } }
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 9u)));
    c.budget -= 2;
L_002CB928:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] == 0ull;  if (t) { goto L_002CBA44; } }
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 4u)));
    c.r[1].d[0] = c.r[11].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002CBA44; } }
    set32(c.r[12], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[11], 0u + 2u);
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[12].w[0])));
    c.budget -= 5;
    { const bool t = c.r[12].d[0] != c.r[11].d[0];  if (t) { goto L_002CBA00; } }
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { goto L_002CB9A0; } }
    c.r[15].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 8386u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[12], c.r[8].w[0] - 23856u);
    c.r[13].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 8437u)));
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 8391u)));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 8438u)));
    set32(c.r[14], c.r[15].w[0] << 4);
    set32(c.r[14], c.r[14].w[0] - c.r[15].w[0]);
    set32(c.r[14], c.r[12].w[0] + c.r[14].w[0]);
    set32(c.r[12], c.r[13].w[0] << 1);
    set32(c.r[12], c.r[12].w[0] + c.r[13].w[0]);
    set32(c.r[12], c.r[12].w[0] + c.r[14].w[0]);
    set32(c.r[11], c.r[11].w[0] + c.r[12].w[0]);
    set32(c.r[8], c.r[8].w[0] + c.r[11].w[0]);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));  if (t) { goto L_002CB9E0; } }
L_002CB9A0:
    c.r[15].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 8386u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[12], c.r[8].w[0] - 24016u);
    c.r[13].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 8437u)));
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 8391u)));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 8438u)));
    set32(c.r[14], c.r[15].w[0] << 4);
    set32(c.r[14], c.r[14].w[0] - c.r[15].w[0]);
    set32(c.r[14], c.r[12].w[0] + c.r[14].w[0]);
    set32(c.r[12], c.r[13].w[0] << 1);
    set32(c.r[12], c.r[12].w[0] + c.r[13].w[0]);
    set32(c.r[12], c.r[12].w[0] + c.r[14].w[0]);
    set32(c.r[11], c.r[11].w[0] + c.r[12].w[0]);
    set32(c.r[8], c.r[8].w[0] + c.r[11].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    c.budget -= 16;
L_002CB9E0:
    c.r[8].d[0] = c.r[8].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    mmi::mult(c, 0, c.r[10].w[0], c.r[8].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    c.budget -= 5;
    { const bool t = c.r[8].sd[0] >= 0; set32(c.r[10], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 5));  if (t) { goto L_002CBA44; } }
    set32(c.r[8], c.r[8].w[0] + 31u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[10], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 5));  if (t) { goto L_002CBA44; } }
L_002CBA00:
    c.r[13].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 269u)));
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[12], c.r[11].w[0] - 2704u);
    c.r[11].d[0] = ld8((c.r[3].w[0] + 2u));
    set32(c.r[13], c.r[13].w[0] << 2);
    set32(c.r[13], c.r[12].w[0] + c.r[13].w[0]);
    set32(c.r[12], c.r[11].w[0] << 2);
    set32(c.r[11], ld32((c.r[13].w[0])));
    set32(c.r[11], c.r[11].w[0] + c.r[12].w[0]);
    set32(c.r[11], ld32((c.r[11].w[0])));
    set32(c.r[8], c.r[11].w[0] + c.r[8].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    mmi::mult(c, 0, c.r[10].w[0], c.r[8].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    c.budget -= 15;
    { const bool t = c.r[8].sd[0] >= 0; set32(c.r[10], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 5));  if (t) { goto L_002CBA44; } }
    set32(c.r[8], c.r[8].w[0] + 31u);
    set32(c.r[10], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 5));
    c.budget -= 2;
L_002CBA44:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] == 0ull;  if (t) { goto L_002CBAE8; } }
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 4u)));
    c.r[1].d[0] = c.r[8].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002CBAE8; } }
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 8384u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[9], c.r[7].w[0] - 28672u);
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 512u)));
    set32(c.r[7], 0u + 32u);
    set32(c.r[11], c.r[11].w[0] << 1);
    set32(c.r[9], c.r[9].w[0] + c.r[11].w[0]);
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0])));
    set32(c.r[9], c.r[9].w[0] << 5);
    mmi::div(c, 0, c.r[9].w[0], c.r[8].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    set32(c.r[7], c.r[7].w[0] - c.r[8].w[0]);
    c.r[8].d[0] = c.r[7].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 17;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { goto L_002CBAA4; } }
    set32(c.r[7], 0u + 31u);
    c.budget -= 1;
L_002CBAA4:
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 8391u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[9], c.r[8].w[0] - 2696u);
    c.r[8].d[0] = ld8((c.r[3].w[0] + 3u));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[11], c.r[9].w[0] + c.r[11].w[0]);
    set32(c.r[9], c.r[8].w[0] << 2);
    set32(c.r[8], ld32((c.r[11].w[0])));
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[8], ld32((c.r[8].w[0])));
    set32(c.r[8], c.r[8].w[0] + c.r[7].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    mmi::mult(c, 0, c.r[10].w[0], c.r[8].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    c.budget -= 15;
    { const bool t = c.r[8].sd[0] >= 0; set32(c.r[10], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 5));  if (t) { goto L_002CBAE8; } }
    set32(c.r[8], c.r[8].w[0] + 31u);
    set32(c.r[10], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 5));
    c.budget -= 2;
L_002CBAE8:
    c.r[9].d[0] = ld8((c.r[4].w[0] + 531u));
    c.budget -= 3;
    { const bool t = c.r[9].d[0] == 0ull; set32(c.r[8], 0u + 1u);  if (t) { goto L_002CBAFC; } }
    c.budget -= 2;
    { const bool t = c.r[9].d[0] != c.r[8].d[0];  if (t) { goto L_002CBCC0; } }
L_002CBAFC:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] != 0ull; set32(c.r[8], 0u + 1u);  if (t) { goto L_002CBB30; } }
    set32(c.r[8], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[7], 0u + 32u);
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0] + 290u)));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0] + 288u)));
    set32(c.r[9], c.r[9].w[0] << 5);
    mmi::div(c, 0, c.r[9].w[0], c.r[8].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    c.budget -= 11;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] - c.r[8].w[0]);  if (t) { goto L_002CBB60; } }
L_002CBB30:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] != c.r[8].d[0]; c.r[8].d[0] = c.r[7].sd[0] < 32ll ? 1ull : 0ull;  if (t) { goto L_002CBB64; } }
    set32(c.r[8], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[7], 0u + 32u);
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0] + 296u)));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0] + 294u)));
    set32(c.r[9], c.r[9].w[0] << 5);
    mmi::div(c, 0, c.r[9].w[0], c.r[8].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    set32(c.r[7], c.r[7].w[0] - c.r[8].w[0]);
    c.budget -= 10;
L_002CBB60:
    c.r[8].d[0] = c.r[7].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 1;
L_002CBB64:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { goto L_002CBB70; } }
    set32(c.r[7], 0u + 31u);
    c.budget -= 1;
L_002CBB70:
    c.r[3].d[0] = ld8((c.r[3].w[0] + 3u));
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 269u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[9], c.r[8].w[0] - 2688u);
    set32(c.r[8], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[11].w[0] << 2);
    set32(c.r[3], c.r[9].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    mmi::mult(c, 0, c.r[10].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 15;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[10], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));  if (t) { goto L_002CBCC0; } }
    set32(c.r[3], c.r[3].w[0] + 31u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[10], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));  if (t) { goto L_002CBCC0; } }
L_002CBBB8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002CBCC0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 4u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002CBCC0; } }
    set32(c.r[8], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u + 2u);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != c.r[3].d[0];  if (t) { goto L_002CBC58; } }
    c.budget -= 2;
    { const bool t = c.r[9].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 16u);  if (t) { goto L_002CBC20; } }
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 8386u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[3], c.r[3].w[0] - 14016u);
    set32(c.r[8], c.r[8].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    mmi::mult(c, 0, c.r[10].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[10], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));  if (t) { goto L_002CBC1C; } }
    set32(c.r[3], c.r[3].w[0] + 31u);
    set32(c.r[10], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));
    c.budget -= 2;
L_002CBC1C:
    set32(c.r[3], 0u + 16u);
    c.budget -= 1;
L_002CBC20:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] != c.r[3].d[0];  if (t) { goto L_002CBCC0; } }
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 2u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[3], c.r[3].w[0] - 14400u);
    set32(c.r[8], c.r[8].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    mmi::mult(c, 0, c.r[10].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[10], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));  if (t) { goto L_002CBCC0; } }
    set32(c.r[3], c.r[3].w[0] + 31u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[10], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));  if (t) { goto L_002CBCC0; } }
L_002CBC58:
    c.r[8].d[0] = ld8((c.r[4].w[0] + 531u));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_002CBC90; } }
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 8u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], c.r[3].w[0] - 18928u);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    mmi::mult(c, 0, c.r[10].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 8;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[10], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));  if (t) { goto L_002CBCC0; } }
    set32(c.r[3], c.r[3].w[0] + 31u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[10], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));  if (t) { goto L_002CBCC0; } }
L_002CBC90:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != c.r[3].d[0];  if (t) { goto L_002CBCC0; } }
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 9u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], c.r[3].w[0] - 18928u);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    mmi::mult(c, 0, c.r[10].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 8;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[10], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));  if (t) { goto L_002CBCC0; } }
    set32(c.r[3], c.r[3].w[0] + 31u);
    set32(c.r[10], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));
    c.budget -= 2;
L_002CBCC0:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    c.r[1].d[0] = c.r[8].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[8].sd[0] < 17ll ? 1ull : 0ull;  if (t) { goto L_002CBF8C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CBDF0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 4u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002CBDF0; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u + 2u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_002CBDA8; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { goto L_002CBD48; } }
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8386u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[8], c.r[3].w[0] - 24352u);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8437u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8391u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8438u)));
    set32(c.r[11], c.r[12].w[0] << 4);
    set32(c.r[11], c.r[11].w[0] - c.r[12].w[0]);
    set32(c.r[11], c.r[8].w[0] + c.r[11].w[0]);
    set32(c.r[8], c.r[9].w[0] << 1);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[8], c.r[8].w[0] + c.r[11].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));  if (t) { goto L_002CBD88; } }
L_002CBD48:
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8386u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[8], c.r[3].w[0] - 24512u);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8437u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8391u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8438u)));
    set32(c.r[11], c.r[12].w[0] << 4);
    set32(c.r[11], c.r[11].w[0] - c.r[12].w[0]);
    set32(c.r[11], c.r[8].w[0] + c.r[11].w[0]);
    set32(c.r[8], c.r[9].w[0] << 1);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[8], c.r[8].w[0] + c.r[11].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 16;
L_002CBD88:
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    mmi::mult(c, 0, c.r[10].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[10], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));  if (t) { goto L_002CBDF0; } }
    set32(c.r[3], c.r[3].w[0] + 31u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[10], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));  if (t) { goto L_002CBDF0; } }
L_002CBDA8:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8391u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[8], c.r[3].w[0] - 2680u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8390u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8386u)));
    set32(c.r[9], c.r[9].w[0] << 2);
    set32(c.r[9], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[8], c.r[3].w[0] << 2);
    set32(c.r[3], ld32((c.r[9].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    mmi::mult(c, 0, c.r[10].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 16;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[10], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));  if (t) { goto L_002CBDF0; } }
    set32(c.r[3], c.r[3].w[0] + 31u);
    set32(c.r[10], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));
    c.budget -= 2;
L_002CBDF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CBE94; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 4u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002CBE94; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[6], c.r[2].w[0] - 28672u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 512u)));
    set32(c.r[2], 0u + 32u);
    set32(c.r[7], c.r[7].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    set32(c.r[6], c.r[6].w[0] << 5);
    mmi::div(c, 0, c.r[6].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[7], c.r[2].w[0] - c.r[3].w[0]);
    c.r[2].d[0] = c.r[7].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 17;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002CBE50; } }
    set32(c.r[7], 0u + 31u);
    c.budget -= 1;
L_002CBE50:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8391u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[2].w[0] - 2672u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8386u)));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[6].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    mmi::mult(c, 0, c.r[10].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 15;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[10], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));  if (t) { goto L_002CBE94; } }
    set32(c.r[2], c.r[2].w[0] + 31u);
    set32(c.r[10], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.budget -= 2;
L_002CBE94:
    c.r[3].d[0] = ld8((c.r[5].w[0] + 531u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002CBEA8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_0073(c, 3u, depth); } }
L_002CBEA8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002CBEDC; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], 0u + 32u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 290u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 288u)));
    set32(c.r[6], c.r[6].w[0] << 5);
    mmi::div(c, 0, c.r[6].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 11;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[2].w[0] - c.r[3].w[0]);  if (t) { goto L_002CBF0C; } }
L_002CBEDC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[7].sd[0] < 32ll ? 1ull : 0ull;  if (t) { goto L_002CBF10; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], 0u + 32u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 296u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 294u)));
    set32(c.r[6], c.r[6].w[0] << 5);
    mmi::div(c, 0, c.r[6].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[7], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 10;
L_002CBF0C:
    c.r[2].d[0] = c.r[7].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 1;
L_002CBF10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002CBF1C; } }
    set32(c.r[7], 0u + 31u);
    c.budget -= 1;
L_002CBF1C:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8391u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[2].w[0] - 2664u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8386u)));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[6].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    mmi::mult(c, 0, c.r[10].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 15;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));  if (t) { goto L_002CBF60; } }
    set32(c.r[2], c.r[2].w[0] + 31u);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.budget -= 2;
L_002CBF60:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 800u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[2], c.r[2].w[0] - 18864u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    mmi::mult(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[10], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));  if (t) { [[clang::musttail]] return unit_0073(c, 3u, depth); } }
    set32(c.r[2], c.r[2].w[0] + 31u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[10], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));  if (t) { [[clang::musttail]] return unit_0073(c, 3u, depth); } }
L_002CBF8C:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0073(c, 3u, depth); } }
    set32(c.r[7], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u + 2u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.budget -= 5;
    { const bool t = c.r[7].d[0] != c.r[3].d[0];  if (t) { goto L_002CBFDC; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != c.r[3].d[0];  if (t) { [[clang::musttail]] return unit_0073(c, 3u, depth); } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 800u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[2], c.r[2].w[0] - 18864u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    mmi::mult(c, 0, c.r[10].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[10], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));  if (t) { [[clang::musttail]] return unit_0073(c, 3u, depth); } }
    set32(c.r[2], c.r[2].w[0] + 31u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[10], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));  if (t) { [[clang::musttail]] return unit_0073(c, 3u, depth); } }
L_002CBFDC:
    c.r[6].d[0] = ld8((c.r[6].w[0] + 531u));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { [[clang::musttail]] return unit_0073(c, 2u, depth); } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 8u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[2], c.r[2].w[0] - 18896u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    mmi::mult(c, 0, c.r[10].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 6;
    [[clang::musttail]] return unit_0073(c, 1u, depth);
}

}
