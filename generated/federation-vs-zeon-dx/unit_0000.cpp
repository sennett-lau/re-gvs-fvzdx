#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0000[4096] = {
    0, 0, 1, 2, 3, 0, 4, 0, 5, 6, 7, 0, 8, 0, 9, 0, 10, 0, 11, 0, 12, 0, 0, 13, 14, 0, 15, 0, 0, 0, 16, 0,
    17, 18, 0, 19, 20, 21, 0, 0, 0, 0, 0, 22, 23, 24, 0, 0, 25, 0, 26, 0, 27, 0, 28, 0, 29, 30, 0, 0, 0, 0, 0, 31,
    32, 0, 33, 0, 34, 0, 0, 0, 35, 0, 36, 0, 37, 0, 0, 38, 39, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 42, 0, 43, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 45, 0, 0, 0, 0, 0, 0, 46, 47, 0, 0, 48, 0, 0, 0,
    49, 0, 0, 0, 0, 0, 0, 50, 51, 0, 0, 0, 0, 52, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    55, 56, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 63,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 75, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83,
    0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 88, 0, 0,
    0, 0, 0, 89, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 96, 0, 0, 0,
    0, 97, 0, 0, 98, 0, 0, 99, 0, 100, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0,
    108, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 115,
    0, 0, 0, 0, 116, 0, 0, 117, 0, 0, 0, 0, 0, 0, 118, 0, 119, 120, 0, 0, 0, 0, 121, 0, 0, 122, 0, 0, 0, 0, 0, 0,
    123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0,
    0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0,
    137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 141, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    146, 0, 0, 0, 147, 0, 0, 0, 148, 0, 0, 0, 0, 0, 149, 0, 150, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0,
    153, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 158, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0,
    0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0,
    0, 0, 167, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 171, 0, 0, 0, 0, 0,
    172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 183, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0,
    186, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    188, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 191, 0, 0, 0,
    0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 195, 0, 0, 0,
    0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0,
    0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 205, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    207, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 214, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 216, 217, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0,
    220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 224, 0,
    0, 0, 225, 0, 0, 0, 226, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 242, 0, 0, 0,
    0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0,
    246, 0, 0, 247, 0, 0, 0, 248, 0, 0, 0, 249, 0, 0, 0, 250, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 254, 0, 0, 0, 255, 0, 0, 256, 0, 0, 0, 257, 0, 0, 258, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 262, 0, 0, 263, 0, 0, 0, 0,
    0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 280,
    281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0,
    0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 293, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 302, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    312, 0, 313, 0, 314, 0, 315, 0, 316, 0, 317, 0, 318, 0, 319, 0, 320, 0, 321, 0, 322, 0, 323, 0, 324, 0, 325, 0, 326, 0, 327, 0,
    328, 0, 329, 0, 330, 0, 331, 0, 332, 0, 333, 0, 334, 0, 335, 0, 336, 0, 337, 0, 338, 0, 339, 0, 340, 0, 341, 0, 342, 0, 343, 0,
    344, 0, 345, 0, 346, 0, 347, 0, 348, 0, 349, 0, 350, 0, 351, 0, 352, 0, 353, 0, 354, 0, 355, 0, 356, 0, 357, 0, 358, 0, 359, 0,
    360, 0, 361, 0, 362, 0, 363, 0, 364, 0, 365, 0, 366, 0, 367, 0, 368, 0, 369, 0, 370, 0, 371, 0, 372, 0, 373, 0, 374, 0, 375, 0,
    376, 0, 377, 0, 378, 0, 379, 0, 380, 0, 381, 0, 382, 0, 383, 0, 384, 0, 385, 0, 386, 0, 387, 0, 388, 0, 389, 0, 390, 0, 391, 0,
    392, 0, 393, 0, 394, 0, 395, 0, 396, 0, 397, 0, 398, 0, 399, 0, 400, 0, 401, 0, 402, 0, 403, 0, 404, 0, 405, 0, 406, 0, 407, 0,
    408, 0, 409, 0, 410, 0, 411, 0, 412, 0, 413, 0, 414, 0, 415, 0, 416, 0, 417, 0, 418, 0, 419, 0, 420, 0, 421, 0, 422, 0, 423, 0,
    424, 0, 425, 0, 426, 0, 427, 0, 428, 0, 429, 0, 430, 0, 431, 0, 432, 0, 433, 0, 434, 0, 435, 0, 436, 0, 437, 0, 438, 0, 439, 0,
    440, 0, 441, 0, 442, 0, 443, 0, 444, 0, 445, 0, 446, 0, 447, 0, 448, 0, 449, 0, 450, 0, 451, 0, 452, 0, 453, 0, 454, 0, 455, 0,
    456, 0, 457, 0, 458, 0, 459, 0, 460, 0, 461, 0, 462, 0, 463, 464, 465, 0, 466, 0, 467, 0, 468, 0, 469, 0, 470, 0, 471, 0, 472, 0,
    473, 0, 474, 0, 475, 0, 476, 0, 477, 0, 478, 0, 479, 0, 480, 0, 481, 0, 482, 0, 483, 0, 484, 0, 485, 0, 486, 0, 487, 0, 488, 0,
    489, 0, 490, 0, 491, 0, 492, 0, 493, 0, 494, 0, 495, 0, 496, 0, 497, 0, 498, 0, 499, 0, 500, 0, 501, 0, 502, 0, 503, 0, 504, 0,
    505, 0, 506, 0, 507, 0, 508, 0, 509, 0, 510, 0, 511, 0, 512, 0, 513, 0, 514, 0, 515, 0, 516, 0, 517, 0, 518, 0, 519, 0, 520, 0,
    521, 0, 522, 0, 523, 0, 524, 0, 525, 0, 526, 0, 527, 0, 528, 0, 529, 0, 530, 0, 531, 0, 532, 0, 533, 0, 534, 0, 535, 0, 536, 0,
    537, 0, 538, 0, 539, 0, 540, 0, 541, 0, 542, 0, 543, 0, 544, 0, 545, 0, 546, 0, 547, 0, 548, 0, 549, 0, 550, 0, 551, 0, 552, 0,
    553, 0, 554, 0, 555, 0, 556, 0, 557, 0, 558, 0, 559, 0, 560, 0, 561, 0, 562, 0, 563, 0, 564, 0, 565, 0, 566, 0, 567, 0, 568, 0,
    569, 0, 570, 0, 571, 0, 572, 0, 573, 0, 574, 0, 575, 0, 576, 0, 577, 0, 578, 0, 579, 0, 580, 0, 581, 0, 582, 0, 583, 0, 584, 0,
};

void unit_0000(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00100008;
    case 2u: goto L_0010000C;
    case 3u: goto L_00100010;
    case 4u: goto L_00100018;
    case 5u: goto L_00100020;
    case 6u: goto L_00100024;
    case 7u: goto L_00100028;
    case 8u: goto L_00100030;
    case 9u: goto L_00100038;
    case 10u: goto L_00100040;
    case 11u: goto L_00100048;
    case 12u: goto L_00100050;
    case 13u: goto L_0010005C;
    case 14u: goto L_00100060;
    case 15u: goto L_00100068;
    case 16u: goto L_00100078;
    case 17u: goto L_00100080;
    case 18u: goto L_00100084;
    case 19u: goto L_0010008C;
    case 20u: goto L_00100090;
    case 21u: goto L_00100094;
    case 22u: goto L_001000AC;
    case 23u: goto L_001000B0;
    case 24u: goto L_001000B4;
    case 25u: goto L_001000C0;
    case 26u: goto L_001000C8;
    case 27u: goto L_001000D0;
    case 28u: goto L_001000D8;
    case 29u: goto L_001000E0;
    case 30u: goto L_001000E4;
    case 31u: goto L_001000FC;
    case 32u: goto L_00100100;
    case 33u: goto L_00100108;
    case 34u: goto L_00100110;
    case 35u: goto L_00100120;
    case 36u: goto L_00100128;
    case 37u: goto L_00100130;
    case 38u: goto L_0010013C;
    case 39u: goto L_00100140;
    case 40u: goto L_00100150;
    case 41u: goto L_00100160;
    case 42u: goto L_00100170;
    case 43u: goto L_00100178;
    case 44u: goto L_001001C0;
    case 45u: goto L_001001C4;
    case 46u: goto L_001001E0;
    case 47u: goto L_001001E4;
    case 48u: goto L_001001F0;
    case 49u: goto L_00100200;
    case 50u: goto L_0010021C;
    case 51u: goto L_00100220;
    case 52u: goto L_00100234;
    case 53u: goto L_00100240;
    case 54u: goto L_00100290;
    case 55u: goto L_00100300;
    case 56u: goto L_00100304;
    case 57u: goto L_00100310;
    case 58u: goto L_00100378;
    case 59u: goto L_001003C8;
    case 60u: goto L_00100408;
    case 61u: goto L_001005C0;
    case 62u: goto L_001005E8;
    case 63u: goto L_001005FC;
    case 64u: goto L_001006A8;
    case 65u: goto L_001006D8;
    case 66u: goto L_00100770;
    case 67u: goto L_00100800;
    case 68u: goto L_00100834;
    case 69u: goto L_00100958;
    case 70u: goto L_00100A60;
    case 71u: goto L_00100A98;
    case 72u: goto L_00100B0C;
    case 73u: goto L_00100B48;
    case 74u: goto L_00100B5C;
    case 75u: goto L_00100B74;
    case 76u: goto L_00100BB0;
    case 77u: goto L_00100BE0;
    case 78u: goto L_00100C18;
    case 79u: goto L_00100C58;
    case 80u: goto L_00100CA8;
    case 81u: goto L_00100CD8;
    case 82u: goto L_00100D18;
    case 83u: goto L_00100D7C;
    case 84u: goto L_00100D94;
    case 85u: goto L_00100DAC;
    case 86u: goto L_00100DC4;
    case 87u: goto L_00100DDC;
    case 88u: goto L_00100DF4;
    case 89u: goto L_00100E0C;
    case 90u: goto L_00100E24;
    case 91u: goto L_00100E3C;
    case 92u: goto L_00100E54;
    case 93u: goto L_00100E6C;
    case 94u: goto L_00100EF8;
    case 95u: goto L_00100F64;
    case 96u: goto L_00100F70;
    case 97u: goto L_00100F84;
    case 98u: goto L_00100F90;
    case 99u: goto L_00100F9C;
    case 100u: goto L_00100FA4;
    case 101u: goto L_00100FBC;
    case 102u: goto L_00101010;
    case 103u: goto L_0010103C;
    case 104u: goto L_00101040;
    case 105u: goto L_00101080;
    case 106u: goto L_001010C0;
    case 107u: goto L_001010E0;
    case 108u: goto L_00101100;
    case 109u: goto L_00101118;
    case 110u: goto L_00101140;
    case 111u: goto L_00101180;
    case 112u: goto L_001011B0;
    case 113u: goto L_00101220;
    case 114u: goto L_00101260;
    case 115u: goto L_0010127C;
    case 116u: goto L_00101290;
    case 117u: goto L_0010129C;
    case 118u: goto L_001012B8;
    case 119u: goto L_001012C0;
    case 120u: goto L_001012C4;
    case 121u: goto L_001012D8;
    case 122u: goto L_001012E4;
    case 123u: goto L_00101300;
    case 124u: goto L_00101388;
    case 125u: goto L_00101414;
    case 126u: goto L_0010143C;
    case 127u: goto L_00101448;
    case 128u: goto L_00101568;
    case 129u: goto L_001015F0;
    case 130u: goto L_0010163C;
    case 131u: goto L_0010164C;
    case 132u: goto L_00101674;
    case 133u: goto L_00101690;
    case 134u: goto L_001016AC;
    case 135u: goto L_001016C8;
    case 136u: goto L_001016E4;
    case 137u: goto L_00101700;
    case 138u: goto L_00101748;
    case 139u: goto L_00101778;
    case 140u: goto L_00101820;
    case 141u: goto L_0010183C;
    case 142u: goto L_00101840;
    case 143u: goto L_00101880;
    case 144u: goto L_001018C0;
    case 145u: goto L_001018D8;
    case 146u: goto L_00101900;
    case 147u: goto L_00101910;
    case 148u: goto L_00101920;
    case 149u: goto L_00101938;
    case 150u: goto L_00101940;
    case 151u: goto L_00101948;
    case 152u: goto L_00101970;
    case 153u: goto L_00101980;
    case 154u: goto L_00101998;
    case 155u: goto L_001019C0;
    case 156u: goto L_001019D0;
    case 157u: goto L_00101A34;
    case 158u: goto L_00101A3C;
    case 159u: goto L_00101A40;
    case 160u: goto L_00101A78;
    case 161u: goto L_00101A88;
    case 162u: goto L_00101C3C;
    case 163u: goto L_00101C60;
    case 164u: goto L_00101C98;
    case 165u: goto L_00101CC0;
    case 166u: goto L_00101CF8;
    case 167u: goto L_00101D08;
    case 168u: goto L_00101D20;
    case 169u: goto L_00101D98;
    case 170u: goto L_00101DD8;
    case 171u: goto L_00101DE8;
    case 172u: goto L_00101E00;
    case 173u: goto L_00101E3C;
    case 174u: goto L_00101E80;
    case 175u: goto L_00101EC0;
    case 176u: goto L_00101ED0;
    case 177u: goto L_00101EE8;
    case 178u: goto L_00101F68;
    case 179u: goto L_00101F98;
    case 180u: goto L_00101FA8;
    case 181u: goto L_00101FC0;
    case 182u: goto L_00102030;
    case 183u: goto L_0010203C;
    case 184u: goto L_00102040;
    case 185u: goto L_00102070;
    case 186u: goto L_00102080;
    case 187u: goto L_00102098;
    case 188u: goto L_00102100;
    case 189u: goto L_00102120;
    case 190u: goto L_00102160;
    case 191u: goto L_00102170;
    case 192u: goto L_00102188;
    case 193u: goto L_00102210;
    case 194u: goto L_00102260;
    case 195u: goto L_00102270;
    case 196u: goto L_00102288;
    case 197u: goto L_001022D8;
    case 198u: goto L_00102330;
    case 199u: goto L_00102340;
    case 200u: goto L_00102358;
    case 201u: goto L_001023A8;
    case 202u: goto L_001023F0;
    case 203u: goto L_00102408;
    case 204u: goto L_00102438;
    case 205u: goto L_0010243C;
    case 206u: goto L_0010244C;
    case 207u: goto L_00102480;
    case 208u: goto L_001024A0;
    case 209u: goto L_001024C8;
    case 210u: goto L_00102500;
    case 211u: goto L_00102548;
    case 212u: goto L_001025B8;
    case 213u: goto L_001025D8;
    case 214u: goto L_001025F8;
    case 215u: goto L_00102620;
    case 216u: goto L_00102638;
    case 217u: goto L_0010263C;
    case 218u: goto L_00102650;
    case 219u: goto L_00102668;
    case 220u: goto L_00102680;
    case 221u: goto L_001026B0;
    case 222u: goto L_001026C0;
    case 223u: goto L_001026E8;
    case 224u: goto L_001026F8;
    case 225u: goto L_00102708;
    case 226u: goto L_00102718;
    case 227u: goto L_00102728;
    case 228u: goto L_00102750;
    case 229u: goto L_001027C8;
    case 230u: goto L_0010280C;
    case 231u: goto L_0010283C;
    case 232u: goto L_00102840;
    case 233u: goto L_00102870;
    case 234u: goto L_001028B4;
    case 235u: goto L_001028E8;
    case 236u: goto L_00102918;
    case 237u: goto L_0010293C;
    case 238u: goto L_0010295C;
    case 239u: goto L_00102990;
    case 240u: goto L_001029C0;
    case 241u: goto L_001029E0;
    case 242u: goto L_001029F0;
    case 243u: goto L_00102A10;
    case 244u: goto L_00102A38;
    case 245u: goto L_00102A6C;
    case 246u: goto L_00102A80;
    case 247u: goto L_00102A8C;
    case 248u: goto L_00102A9C;
    case 249u: goto L_00102AAC;
    case 250u: goto L_00102ABC;
    case 251u: goto L_00102AC8;
    case 252u: goto L_00102AE8;
    case 253u: goto L_00102B20;
    case 254u: goto L_00102B2C;
    case 255u: goto L_00102B3C;
    case 256u: goto L_00102B48;
    case 257u: goto L_00102B58;
    case 258u: goto L_00102B64;
    case 259u: goto L_00102B8C;
    case 260u: goto L_00102BA8;
    case 261u: goto L_00102BD4;
    case 262u: goto L_00102BE0;
    case 263u: goto L_00102BEC;
    case 264u: goto L_00102C10;
    case 265u: goto L_00102C3C;
    case 266u: goto L_00102C98;
    case 267u: goto L_00102CC0;
    case 268u: goto L_00102CE8;
    case 269u: goto L_00102D18;
    case 270u: goto L_00102E3C;
    case 271u: goto L_00102EA8;
    case 272u: goto L_00102EB8;
    case 273u: goto L_00102F00;
    case 274u: goto L_00102F48;
    case 275u: goto L_00102F68;
    case 276u: goto L_00102F98;
    case 277u: goto L_00102FB0;
    case 278u: goto L_00102FF8;
    case 279u: goto L_00103058;
    case 280u: goto L_0010307C;
    case 281u: goto L_00103080;
    case 282u: goto L_001030C0;
    case 283u: goto L_001030E8;
    case 284u: goto L_00103148;
    case 285u: goto L_0010315C;
    case 286u: goto L_001031B0;
    case 287u: goto L_001031C4;
    case 288u: goto L_00103218;
    case 289u: goto L_00103230;
    case 290u: goto L_00103278;
    case 291u: goto L_0010329C;
    case 292u: goto L_00103300;
    case 293u: goto L_00103384;
    case 294u: goto L_00103390;
    case 295u: goto L_001033C0;
    case 296u: goto L_0010343C;
    case 297u: goto L_00103450;
    case 298u: goto L_00103478;
    case 299u: goto L_001034B8;
    case 300u: goto L_001034CC;
    case 301u: goto L_00103520;
    case 302u: goto L_00103530;
    case 303u: goto L_00103548;
    case 304u: goto L_00103578;
    case 305u: goto L_00103600;
    case 306u: goto L_00103638;
    case 307u: goto L_0010363C;
    case 308u: goto L_00103690;
    case 309u: goto L_001036C8;
    case 310u: goto L_00103700;
    case 311u: goto L_00103730;
    case 312u: goto L_00103780;
    case 313u: goto L_00103788;
    case 314u: goto L_00103790;
    case 315u: goto L_00103798;
    case 316u: goto L_001037A0;
    case 317u: goto L_001037A8;
    case 318u: goto L_001037B0;
    case 319u: goto L_001037B8;
    case 320u: goto L_001037C0;
    case 321u: goto L_001037C8;
    case 322u: goto L_001037D0;
    case 323u: goto L_001037D8;
    case 324u: goto L_001037E0;
    case 325u: goto L_001037E8;
    case 326u: goto L_001037F0;
    case 327u: goto L_001037F8;
    case 328u: goto L_00103800;
    case 329u: goto L_00103808;
    case 330u: goto L_00103810;
    case 331u: goto L_00103818;
    case 332u: goto L_00103820;
    case 333u: goto L_00103828;
    case 334u: goto L_00103830;
    case 335u: goto L_00103838;
    case 336u: goto L_00103840;
    case 337u: goto L_00103848;
    case 338u: goto L_00103850;
    case 339u: goto L_00103858;
    case 340u: goto L_00103860;
    case 341u: goto L_00103868;
    case 342u: goto L_00103870;
    case 343u: goto L_00103878;
    case 344u: goto L_00103880;
    case 345u: goto L_00103888;
    case 346u: goto L_00103890;
    case 347u: goto L_00103898;
    case 348u: goto L_001038A0;
    case 349u: goto L_001038A8;
    case 350u: goto L_001038B0;
    case 351u: goto L_001038B8;
    case 352u: goto L_001038C0;
    case 353u: goto L_001038C8;
    case 354u: goto L_001038D0;
    case 355u: goto L_001038D8;
    case 356u: goto L_001038E0;
    case 357u: goto L_001038E8;
    case 358u: goto L_001038F0;
    case 359u: goto L_001038F8;
    case 360u: goto L_00103900;
    case 361u: goto L_00103908;
    case 362u: goto L_00103910;
    case 363u: goto L_00103918;
    case 364u: goto L_00103920;
    case 365u: goto L_00103928;
    case 366u: goto L_00103930;
    case 367u: goto L_00103938;
    case 368u: goto L_00103940;
    case 369u: goto L_00103948;
    case 370u: goto L_00103950;
    case 371u: goto L_00103958;
    case 372u: goto L_00103960;
    case 373u: goto L_00103968;
    case 374u: goto L_00103970;
    case 375u: goto L_00103978;
    case 376u: goto L_00103980;
    case 377u: goto L_00103988;
    case 378u: goto L_00103990;
    case 379u: goto L_00103998;
    case 380u: goto L_001039A0;
    case 381u: goto L_001039A8;
    case 382u: goto L_001039B0;
    case 383u: goto L_001039B8;
    case 384u: goto L_001039C0;
    case 385u: goto L_001039C8;
    case 386u: goto L_001039D0;
    case 387u: goto L_001039D8;
    case 388u: goto L_001039E0;
    case 389u: goto L_001039E8;
    case 390u: goto L_001039F0;
    case 391u: goto L_001039F8;
    case 392u: goto L_00103A00;
    case 393u: goto L_00103A08;
    case 394u: goto L_00103A10;
    case 395u: goto L_00103A18;
    case 396u: goto L_00103A20;
    case 397u: goto L_00103A28;
    case 398u: goto L_00103A30;
    case 399u: goto L_00103A38;
    case 400u: goto L_00103A40;
    case 401u: goto L_00103A48;
    case 402u: goto L_00103A50;
    case 403u: goto L_00103A58;
    case 404u: goto L_00103A60;
    case 405u: goto L_00103A68;
    case 406u: goto L_00103A70;
    case 407u: goto L_00103A78;
    case 408u: goto L_00103A80;
    case 409u: goto L_00103A88;
    case 410u: goto L_00103A90;
    case 411u: goto L_00103A98;
    case 412u: goto L_00103AA0;
    case 413u: goto L_00103AA8;
    case 414u: goto L_00103AB0;
    case 415u: goto L_00103AB8;
    case 416u: goto L_00103AC0;
    case 417u: goto L_00103AC8;
    case 418u: goto L_00103AD0;
    case 419u: goto L_00103AD8;
    case 420u: goto L_00103AE0;
    case 421u: goto L_00103AE8;
    case 422u: goto L_00103AF0;
    case 423u: goto L_00103AF8;
    case 424u: goto L_00103B00;
    case 425u: goto L_00103B08;
    case 426u: goto L_00103B10;
    case 427u: goto L_00103B18;
    case 428u: goto L_00103B20;
    case 429u: goto L_00103B28;
    case 430u: goto L_00103B30;
    case 431u: goto L_00103B38;
    case 432u: goto L_00103B40;
    case 433u: goto L_00103B48;
    case 434u: goto L_00103B50;
    case 435u: goto L_00103B58;
    case 436u: goto L_00103B60;
    case 437u: goto L_00103B68;
    case 438u: goto L_00103B70;
    case 439u: goto L_00103B78;
    case 440u: goto L_00103B80;
    case 441u: goto L_00103B88;
    case 442u: goto L_00103B90;
    case 443u: goto L_00103B98;
    case 444u: goto L_00103BA0;
    case 445u: goto L_00103BA8;
    case 446u: goto L_00103BB0;
    case 447u: goto L_00103BB8;
    case 448u: goto L_00103BC0;
    case 449u: goto L_00103BC8;
    case 450u: goto L_00103BD0;
    case 451u: goto L_00103BD8;
    case 452u: goto L_00103BE0;
    case 453u: goto L_00103BE8;
    case 454u: goto L_00103BF0;
    case 455u: goto L_00103BF8;
    case 456u: goto L_00103C00;
    case 457u: goto L_00103C08;
    case 458u: goto L_00103C10;
    case 459u: goto L_00103C18;
    case 460u: goto L_00103C20;
    case 461u: goto L_00103C28;
    case 462u: goto L_00103C30;
    case 463u: goto L_00103C38;
    case 464u: goto L_00103C3C;
    case 465u: goto L_00103C40;
    case 466u: goto L_00103C48;
    case 467u: goto L_00103C50;
    case 468u: goto L_00103C58;
    case 469u: goto L_00103C60;
    case 470u: goto L_00103C68;
    case 471u: goto L_00103C70;
    case 472u: goto L_00103C78;
    case 473u: goto L_00103C80;
    case 474u: goto L_00103C88;
    case 475u: goto L_00103C90;
    case 476u: goto L_00103C98;
    case 477u: goto L_00103CA0;
    case 478u: goto L_00103CA8;
    case 479u: goto L_00103CB0;
    case 480u: goto L_00103CB8;
    case 481u: goto L_00103CC0;
    case 482u: goto L_00103CC8;
    case 483u: goto L_00103CD0;
    case 484u: goto L_00103CD8;
    case 485u: goto L_00103CE0;
    case 486u: goto L_00103CE8;
    case 487u: goto L_00103CF0;
    case 488u: goto L_00103CF8;
    case 489u: goto L_00103D00;
    case 490u: goto L_00103D08;
    case 491u: goto L_00103D10;
    case 492u: goto L_00103D18;
    case 493u: goto L_00103D20;
    case 494u: goto L_00103D28;
    case 495u: goto L_00103D30;
    case 496u: goto L_00103D38;
    case 497u: goto L_00103D40;
    case 498u: goto L_00103D48;
    case 499u: goto L_00103D50;
    case 500u: goto L_00103D58;
    case 501u: goto L_00103D60;
    case 502u: goto L_00103D68;
    case 503u: goto L_00103D70;
    case 504u: goto L_00103D78;
    case 505u: goto L_00103D80;
    case 506u: goto L_00103D88;
    case 507u: goto L_00103D90;
    case 508u: goto L_00103D98;
    case 509u: goto L_00103DA0;
    case 510u: goto L_00103DA8;
    case 511u: goto L_00103DB0;
    case 512u: goto L_00103DB8;
    case 513u: goto L_00103DC0;
    case 514u: goto L_00103DC8;
    case 515u: goto L_00103DD0;
    case 516u: goto L_00103DD8;
    case 517u: goto L_00103DE0;
    case 518u: goto L_00103DE8;
    case 519u: goto L_00103DF0;
    case 520u: goto L_00103DF8;
    case 521u: goto L_00103E00;
    case 522u: goto L_00103E08;
    case 523u: goto L_00103E10;
    case 524u: goto L_00103E18;
    case 525u: goto L_00103E20;
    case 526u: goto L_00103E28;
    case 527u: goto L_00103E30;
    case 528u: goto L_00103E38;
    case 529u: goto L_00103E40;
    case 530u: goto L_00103E48;
    case 531u: goto L_00103E50;
    case 532u: goto L_00103E58;
    case 533u: goto L_00103E60;
    case 534u: goto L_00103E68;
    case 535u: goto L_00103E70;
    case 536u: goto L_00103E78;
    case 537u: goto L_00103E80;
    case 538u: goto L_00103E88;
    case 539u: goto L_00103E90;
    case 540u: goto L_00103E98;
    case 541u: goto L_00103EA0;
    case 542u: goto L_00103EA8;
    case 543u: goto L_00103EB0;
    case 544u: goto L_00103EB8;
    case 545u: goto L_00103EC0;
    case 546u: goto L_00103EC8;
    case 547u: goto L_00103ED0;
    case 548u: goto L_00103ED8;
    case 549u: goto L_00103EE0;
    case 550u: goto L_00103EE8;
    case 551u: goto L_00103EF0;
    case 552u: goto L_00103EF8;
    case 553u: goto L_00103F00;
    case 554u: goto L_00103F08;
    case 555u: goto L_00103F10;
    case 556u: goto L_00103F18;
    case 557u: goto L_00103F20;
    case 558u: goto L_00103F28;
    case 559u: goto L_00103F30;
    case 560u: goto L_00103F38;
    case 561u: goto L_00103F40;
    case 562u: goto L_00103F48;
    case 563u: goto L_00103F50;
    case 564u: goto L_00103F58;
    case 565u: goto L_00103F60;
    case 566u: goto L_00103F68;
    case 567u: goto L_00103F70;
    case 568u: goto L_00103F78;
    case 569u: goto L_00103F80;
    case 570u: goto L_00103F88;
    case 571u: goto L_00103F90;
    case 572u: goto L_00103F98;
    case 573u: goto L_00103FA0;
    case 574u: goto L_00103FA8;
    case 575u: goto L_00103FB0;
    case 576u: goto L_00103FB8;
    case 577u: goto L_00103FC0;
    case 578u: goto L_00103FC8;
    case 579u: goto L_00103FD0;
    case 580u: goto L_00103FD8;
    case 581u: goto L_00103FE0;
    case 582u: goto L_00103FE8;
    case 583u: goto L_00103FF0;
    case 584u: goto L_00103FF8;
    default: bad_entry(c, 0x00100000u); return;
    }
L_00100008:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 1;
L_0010000C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    c.budget -= 1;
L_00100010:
    set32(c.r[2], c.r[2].w[0] - 1408u);
    set32(c.r[3], c.r[3].w[0] - 12800u);
    c.budget -= 2;
L_00100018:
    st128((c.r[2].w[0]) & ~15u, c.r[0]);
    c.budget -= 2;
L_00100020:
    c.r[1].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_00100024:
    c.budget -= 1;
L_00100028:
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], c.r[2].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00100018u | kUnwind; return; } goto L_00100018; } }
    goto L_00100034;
L_00100030:
    set32(c.r[2], c.r[2].w[0] + 16u);
    c.budget -= 1;
L_00100034:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 1;
L_00100038:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00000000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.budget -= 2;
L_00100040:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.budget -= 2;
L_00100048:
    set32(c.r[4], c.r[4].w[0] + 25456u);
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.budget -= 2;
L_00100050:
    set32(c.r[6], c.r[6].w[0]);
    set32(c.r[7], c.r[7].w[0] + 1024u);
    set32(c.r[8], c.r[8].w[0] + 192u);
    c.budget -= 3;
L_0010005C:
    c.r[28].d[0] = c.r[4].d[0] | 0ull;
    c.budget -= 1;
L_00100060:
    set32(c.r[3], 0u + 60u);
    c.budget -= 1;
    c.pc = 0x00100068u; syscall(c, 0x00100064u); if (c.pc != 0x00100068u) return;
    c.budget -= 1;
L_00100068:
    c.r[29].d[0] = c.r[2].d[0] | 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00000000u);
    set32(c.r[4], c.r[4].w[0] - 12800u);
    c.budget -= 4;
L_00100078:
    set32(c.r[5], c.r[5].w[0] - 1u);
    set32(c.r[3], 0u + 61u);
    c.budget -= 2;
L_00100080:
    c.pc = 0x00100084u; syscall(c, 0x00100080u); if (c.pc != 0x00100084u) return;
    c.budget -= 1;
L_00100084:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010008Cu);  if (depth < kMaxDepth) unit_0002(c, 456u, depth + 1u); else { c.pc = 0x0010BDE8u; return; } if (c.pc != 0x0010008Cu) [[unlikely]] return; }
L_0010008C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00100094u); c.r[4].d[0] = 0ull | 0ull;  if (depth < kMaxDepth) unit_0000(c, 525u, depth + 1u); else { c.pc = 0x00103E20u; return; } if (c.pc != 0x00100094u) [[unlikely]] return; }
    goto L_00100094;
L_00100090:
    c.r[4].d[0] = 0ull | 0ull;
    c.budget -= 1;
L_00100094:
    set_interrupts(c, true);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] + 1024u);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001000ACu); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_001F(c, 269u, depth + 1u); else { c.pc = 0x0017F710u; return; } if (c.pc != 0x001000ACu) [[unlikely]] return; }
L_001000AC:
    c.budget -= 2;
    { c.r[4].d[0] = c.r[2].d[0] | 0ull;  goto L_001037C0; }
L_001000B0:
    c.r[4].d[0] = c.r[2].d[0] | 0ull;
    c.budget -= 1;
L_001000B4:
    c.budget -= 3;
    { c.r[4].d[0] = 0ull | 0ull;  goto L_001037C0; }
L_001000C0:
    set32(c.r[3], 0u + 35u);
    c.budget -= 1;
    c.pc = 0x001000C8u; syscall(c, 0x001000C4u); if (c.pc != 0x001000C8u) return;
    c.budget -= 1;
L_001000C8:
    c.budget -= 2;
L_001000D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] <= 0; st128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_001000EC; } }
    goto L_001000DC;
L_001000D8:
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_001000DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001000E4u);  if (depth < kMaxDepth) unit_0006(c, 216u, depth + 1u); else { c.pc = 0x0011B480u; return; } if (c.pc != 0x001000E4u) [[unlikely]] return; }
    goto L_001000E4;
L_001000E0:
    c.budget -= 1;
L_001000E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0010010C; } }
L_001000EC:
    c.r[3].d[0] = c.r[4].d[0] >> 1;
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001000FCu); c.r[4].d[0] = c.r[3].d[0] | c.r[2].d[0];  if (depth < kMaxDepth) unit_0006(c, 216u, depth + 1u); else { c.pc = 0x0011B480u; return; } if (c.pc != 0x001000FCu) [[unlikely]] return; }
L_001000FC:
    mmi::paddub(c.r[4], c.r[2], c.r[0]);
    c.budget -= 1;
L_00100100:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00100108u); mmi::paddub(c.r[5], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0007(c, 14u, depth + 1u); else { c.pc = 0x0011CB00u; return; } if (c.pc != 0x00100108u) [[unlikely]] return; }
L_00100108:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_0010010C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00100110:
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 1;
    c.pc = 0x00100114u; [[clang::musttail]] return dispatch(c, 0u, depth);
L_00100120:
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.budget -= 3;
    { c.r[4].d[0] = c.r[4].d[0] >> 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001000D0u | kUnwind; return; } goto L_001000D0; }
L_00100128:
    c.r[4].d[0] = c.r[4].d[0] >> 32;
    c.budget -= 1;
    c.pc = 0x0010012Cu; [[clang::musttail]] return dispatch(c, 0u, depth);
L_00100130:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00100140u);  if (depth < kMaxDepth) unit_0007(c, 43u, depth + 1u); else { c.pc = 0x0011D0E8u; return; } if (c.pc != 0x00100140u) [[unlikely]] return; }
    goto L_00100140;
L_0010013C:
    c.budget -= 1;
L_00100140:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[2].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00100150:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00100160u);  if (depth < kMaxDepth) unit_0007(c, 43u, depth + 1u); else { c.pc = 0x0011D0E8u; return; } if (c.pc != 0x00100160u) [[unlikely]] return; }
L_00100160:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00100170:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[4], c.r[4].w[0] << 16);
    c.budget -= 2;
L_00100178:
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    set32(c.r[5], c.r[5].w[0] << 16);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    set32(c.r[6], c.r[6].w[0] << 16);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    set32(c.r[7], c.r[7].w[0] << 16);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 16));
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 16));
    set32(c.r[18], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 16));
    set32(c.r[2], 0u + 1u);
    c.budget -= 14;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[19], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 16));  if (t) { goto L_00100270; } }
    c.r[2].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 5u);  goto L_001001CC; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_001001DC; } }
    goto L_001001C4;
L_001001C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_001001C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_001002EC; } }
L_001001CC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_00100288; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_001002EC; } }
L_001001DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001001E4u);  if (depth < kMaxDepth) unit_0000(c, 55u, depth + 1u); else { c.pc = 0x00100300u; return; } if (c.pc != 0x001001E4u) [[unlikely]] return; }
    goto L_001001E4;
L_001001E0:
    c.budget -= 1;
L_001001E4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x12000000u);
    set32(c.r[4], 0u + 512u);
    c.r[3].d[0] = c.r[3].d[0] | 4096ull;
    c.budget -= 3;
L_001001F0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    st64((c.r[3].w[0]), c.r[4].d[0]);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[17].w[0]));
    c.r[4].d[0] = 0ull | 65280ull;
    c.budget -= 4;
L_00100200:
    c.r[2].d[0] = ld64((c.r[3].w[0]));
    st16((c.r[16].w[0] + 2u), static_cast<std::uint16_t>(c.r[18].w[0]));
    c.r[2].d[0] = c.r[2].d[0] >> 16;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010021Cu); st16((c.r[16].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 549u, depth + 1u); else { c.pc = 0x00103EE0u; return; } if (c.pc != 0x0010021Cu) [[unlikely]] return; }
L_0010021C:
    c.r[3].d[0] = 0ull < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_00100220:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st16((c.r[16].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00100248; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00100234u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0001(c, 45u, depth + 1u); else { c.pc = 0x001045C8u; return; } if (c.pc != 0x00100234u) [[unlikely]] return; }
L_00100234:
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00100240u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 348u, depth + 1u); else { c.pc = 0x001038A0u; return; } if (c.pc != 0x00100240u) [[unlikely]] return; }
L_00100240:
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 2;
L_00100248:
    c.r[4].d[0] = c.r[17].d[0] & 1ull;
    c.r[5].d[0] = c.r[18].d[0] & 255ull;
    c.r[6].d[0] = c.r[19].d[0] & 1ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 10;
    { set32(c.r[29], c.r[29].w[0] + 80u);  goto L_001037A0; }
L_00100270:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x12000000u);
    set32(c.r[3], 0u + 256u);
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    st64((c.r[2].w[0]), c.r[3].d[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_001002E8; } }
L_00100288:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00100290u);  if (depth < kMaxDepth) unit_0000(c, 55u, depth + 1u); else { c.pc = 0x00100300u; return; } if (c.pc != 0x00100290u) [[unlikely]] return; }
L_00100290:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x12000000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] | 4096ull;
    c.r[6].d[0] = 0ull < c.r[19].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = ld64((c.r[3].w[0]));
    c.r[4].d[0] = c.r[17].d[0] & 1ull;
    st16((c.r[16].w[0] + 4u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[5].d[0] = c.r[18].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] >> 16;
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[17].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    st16((c.r[16].w[0] + 2u), static_cast<std::uint16_t>(c.r[18].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[6].d[0] = c.r[19].d[0] & 1ull;
    st16((c.r[16].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 22;
    { set32(c.r[29], c.r[29].w[0] + 80u);  goto L_001037A0; }
L_001002E8:
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_001002EC:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00100300:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.budget -= 1;
L_00100304:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 19600u);  c.pc = t; return; }
L_00100310:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[7], 0u + 1u);
    c.r[2].d[0] = c.r[2].d[0] | 15376ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[2].w[0]), c.r[7].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 15392ull;
    set32(c.r[2], 0u + 2u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[4], cfc2(c, 28u));
    c.r[4].d[0] = c.r[4].d[0] | 512ull;
    ctc2(c, 28u, c.r[4].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[5], c.r[5].w[0] + 19616u);
    c.r[6].d[0] = c.r[6].d[0] | 20480ull;
    ld128((c.r[5].w[0]) & ~15u, c.r[4]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] | 12288ull;
    st128((c.r[6].w[0]) & ~15u, c.r[4]);
    ld128((c.r[5].w[0] + 16u) & ~15u, c.r[2]);
    st128((c.r[6].w[0]) & ~15u, c.r[2]);
    c.budget -= 26;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0]), c.r[7].w[0]);  c.pc = t; return; }
L_00100378:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[5], c.r[5].w[0] << 16);
    st64((c.r[29].w[0] + 80u), c.r[21].d[0]);
    set32(c.r[6], c.r[6].w[0] << 16);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    set32(c.r[7], c.r[7].w[0] << 16);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    set32(c.r[8], c.r[8].w[0] << 16);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    set32(c.r[9], c.r[9].w[0] << 16);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    set32(c.r[21], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 16));
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 16));
    set32(c.r[19], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 16));
    set32(c.r[20], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 16));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001003C8u); set32(c.r[18], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 16));  if (depth < kMaxDepth) unit_0000(c, 55u, depth + 1u); else { c.pc = 0x00100300u; return; } if (c.pc != 0x001003C8u) [[unlikely]] return; }
L_001003C8:
    set32(c.r[3], 0u + 102u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    st64((c.r[17].w[0]), c.r[3].d[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = ld16((c.r[6].w[0]));  if (t) { goto L_001003F4; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_001003F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001003F8; } }
L_001003F4:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_001003F8:
    st64((c.r[17].w[0] + 8u), c.r[2].d[0]);
    set32(c.r[2], c.r[16].w[0] + 63u);
    c.r[3].d[0] = c.r[21].d[0] & 15ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 6));
    c.budget -= 4;
L_00100408:
    c.r[3].d[0] = c.r[3].d[0] << 15;
    c.r[2].d[0] = c.r[2].d[0] & 63ull;
    set32(c.r[4], 0u + 2u);
    c.r[2].d[0] = c.r[2].d[0] << 9;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st64((c.r[17].w[0] + 16u), c.r[3].d[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 2u)));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] != c.r[4].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_001004CC; } }
    set32(c.r[2], c.r[7].w[0] << 16);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[2], c.r[16].w[0] + 2559u);  if (t) { goto L_00100494; } }
    set32(c.r[3], c.r[18].w[0] + 50u);
    mmi::div(c, 0, c.r[2].w[0], c.r[16].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 4095ull;
    c.budget -= 5;
    if (c.r[16].d[0] == 0ull) { breakpoint(c, 0x00100450u);  goto L_00100454; }
L_00100454:
    c.r[7].d[0] = c.r[3].d[0] << 12;
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 4u)));
    c.r[2].d[0] = c.lo.d[0];
    mmi::mult(c, 1, c.r[20].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[1];
    mmi::mult(c, 0, c.r[2].w[0], c.r[16].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[3].d[0] = c.r[5].d[0] + static_cast<std::uint64_t>(636ll);
    c.r[10].d[0] = c.r[2].d[0] << 23;
    c.r[5].d[0] = c.r[3].d[0] & 4095ull;
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 12;
    { const bool t = c.r[6].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] << 32;  if (t) { goto L_0010053C; } }
    set32(c.r[2], c.r[19].w[0] << 1);
    c.r[3].d[0] = c.r[10].d[0] | c.r[3].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 1u);  if (t) { goto L_00100544; } }
L_00100494:
    set32(c.r[6], c.r[19].w[0] - 1u);
    mmi::div(c, 0, c.r[2].w[0], c.r[16].w[0]);
    c.r[6].d[0] = c.r[6].d[0] << 44;
    set32(c.r[5], c.r[18].w[0] + 25u);
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { breakpoint(c, 0x001004A8u);  goto L_001004AC; }
L_001004AC:
    c.r[5].d[0] = c.r[5].d[0] & 4095ull;
    c.r[5].d[0] = c.r[5].d[0] << 12;
    c.r[2].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[20].w[0], c.r[2].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    mmi::mult(c, 1, c.r[2].w[0], c.r[16].w[0]);
    c.r[4].d[0] = c.lo.d[1];
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[7].d[0] + static_cast<std::uint64_t>(636ll);  if (t) { goto L_00100590; } }
L_001004CC:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (t) { goto L_001005B8; } }
    set32(c.r[2], c.r[7].w[0] << 16);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[2], c.r[16].w[0] + 2559u);  if (t) { goto L_0010055C; } }
    set32(c.r[3], c.r[18].w[0] + 72u);
    mmi::div(c, 0, c.r[2].w[0], c.r[16].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 4095ull;
    c.budget -= 5;
    if (c.r[16].d[0] == 0ull) { breakpoint(c, 0x001004F8u);  goto L_001004FC; }
L_001004FC:
    c.r[7].d[0] = c.r[3].d[0] << 12;
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 4u)));
    c.r[2].d[0] = c.lo.d[0];
    mmi::mult(c, 1, c.r[20].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[1];
    mmi::mult(c, 0, c.r[2].w[0], c.r[16].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[3].d[0] = c.r[5].d[0] + static_cast<std::uint64_t>(656ll);
    c.r[10].d[0] = c.r[2].d[0] << 23;
    c.r[5].d[0] = c.r[3].d[0] & 4095ull;
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 12;
    { const bool t = c.r[6].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] << 32;  if (t) { goto L_0010053C; } }
    set32(c.r[2], c.r[19].w[0] << 1);
    c.r[3].d[0] = c.r[10].d[0] | c.r[3].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 1u);  if (t) { goto L_00100544; } }
L_0010053C:
    set32(c.r[2], c.r[19].w[0] - 1u);
    c.r[3].d[0] = c.r[10].d[0] | c.r[3].d[0];
    c.budget -= 2;
L_00100544:
    c.r[2].d[0] = c.r[2].d[0] << 44;
    c.r[2].d[0] = c.r[5].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[3].d[0] | c.r[7].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st64((c.r[17].w[0] + 24u), c.r[2].d[0]);  if (t) { goto L_001005C0; } }
L_0010055C:
    set32(c.r[6], c.r[19].w[0] - 1u);
    mmi::div(c, 0, c.r[2].w[0], c.r[16].w[0]);
    c.r[6].d[0] = c.r[6].d[0] << 44;
    set32(c.r[5], c.r[18].w[0] + 36u);
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { breakpoint(c, 0x00100570u);  goto L_00100574; }
L_00100574:
    c.r[5].d[0] = c.r[5].d[0] & 4095ull;
    c.r[5].d[0] = c.r[5].d[0] << 12;
    c.r[2].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[20].w[0], c.r[2].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    mmi::mult(c, 1, c.r[2].w[0], c.r[16].w[0]);
    c.r[4].d[0] = c.lo.d[1];
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[3].d[0] = c.r[7].d[0] + static_cast<std::uint64_t>(656ll);
    c.budget -= 7;
L_00100590:
    c.r[2].d[0] = c.r[2].d[0] << 23;
    c.r[3].d[0] = c.r[3].d[0] & 4095ull;
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st64((c.r[17].w[0] + 24u), c.r[2].d[0]);  if (t) { goto L_001005C0; } }
L_001005B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001005C0u); set32(c.r[4], c.r[4].w[0] + 1664u);  if (depth < kMaxDepth) unit_0005(c, 313u, depth + 1u); else { c.pc = 0x00117F48u; return; } if (c.pc != 0x001005C0u) [[unlikely]] return; }
L_001005C0:
    st64((c.r[17].w[0] + 32u), 0ull);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001005E8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001005FCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 55u, depth + 1u); else { c.pc = 0x00100300u; return; } if (c.pc != 0x001005FCu) [[unlikely]] return; }
L_001005FC:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 6u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = ld64((c.r[16].w[0]));  if (t) { goto L_0010064C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x12000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x12000000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x12000000u);
    st64((c.r[2].w[0]), c.r[4].d[0]);
    c.r[3].d[0] = c.r[3].d[0] | 112ull;
    c.r[6].d[0] = c.r[6].d[0] | 128ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x12000000u);
    c.r[5].d[0] = ld64((c.r[16].w[0] + 16u));
    c.r[4].d[0] = c.r[4].d[0] | 192ull;
    st64((c.r[3].w[0]), c.r[5].d[0]);
    c.r[2].d[0] = ld64((c.r[16].w[0] + 24u));
    st64((c.r[6].w[0]), c.r[2].d[0]);
    c.r[3].d[0] = ld64((c.r[16].w[0] + 32u));
    st64((c.r[4].w[0]), c.r[3].d[0]);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00100698; } }
L_0010064C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x12000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x12000000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x12000000u);
    st64((c.r[3].w[0]), c.r[4].d[0]);
    c.r[2].d[0] = c.r[2].d[0] | 32ull;
    c.r[6].d[0] = c.r[6].d[0] | 144ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x12000000u);
    c.r[3].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[5].d[0] = c.r[5].d[0] | 160ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x12000000u);
    st64((c.r[2].w[0]), c.r[3].d[0]);
    c.r[4].d[0] = c.r[4].d[0] | 224ull;
    c.r[2].d[0] = ld64((c.r[16].w[0] + 16u));
    st64((c.r[6].w[0]), c.r[2].d[0]);
    c.r[3].d[0] = ld64((c.r[16].w[0] + 24u));
    st64((c.r[5].w[0]), c.r[3].d[0]);
    c.r[2].d[0] = ld64((c.r[16].w[0] + 32u));
    st64((c.r[4].w[0]), c.r[2].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 19;
L_00100698:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001006A8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[6], c.r[6].w[0] << 16);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[17], c.r[4].w[0] << 16);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    set32(c.r[16], c.r[5].w[0] << 16);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 16));
    set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[17].w[0]) >> 16));
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001006D8u); set32(c.r[18], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 16));  if (depth < kMaxDepth) unit_0000(c, 55u, depth + 1u); else { c.pc = 0x00100300u; return; } if (c.pc != 0x001006D8u) [[unlikely]] return; }
L_001006D8:
    set32(c.r[3], c.r[16].w[0] + 63u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u - 1u);
    set32(c.r[16], c.r[16].w[0] + 126u);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.r[17].d[0] = c.r[17].d[0] & 2ull;
    if (c.r[2].d[0] != 0) c.r[16].d[0] = c.r[3].d[0];
    c.budget -= 9;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 6));  if (t) { goto L_00100714; } }
    set32(c.r[2], c.r[18].w[0] + 63u);
    set32(c.r[3], c.r[18].w[0] + 126u);
    c.r[4].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    if (c.r[4].d[0] != 0) c.r[3].d[0] = c.r[2].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 6));  if (t) { goto L_00100728; } }
L_00100714:
    set32(c.r[2], c.r[18].w[0] + 31u);
    set32(c.r[3], c.r[18].w[0] + 62u);
    c.r[4].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    if (c.r[4].d[0] != 0) c.r[3].d[0] = c.r[2].d[0];
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));
    c.budget -= 5;
L_00100728:
    c.r[2].d[0] = ld64((c.r[5].w[0]));
    c.r[3].d[0] = 0ull | 65535ull;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    set32(c.r[4], 0u + 1u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[4].d[0]; mmi::mult(c, 0, c.r[16].w[0], c.r[6].w[0]); c.r[2].d[0] = c.lo.d[0];  if (t) { goto L_00100750; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] << 16);  if (t) { goto L_00100754; } }
L_00100750:
    set32(c.r[2], c.r[2].w[0] << 17);
    c.budget -= 1;
L_00100754:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00100770:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[6], c.r[6].w[0] << 16);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    set32(c.r[5], c.r[5].w[0] << 16);
    set32(c.r[18], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 16));
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    set32(c.r[2], c.r[18].w[0] + 63u);
    set32(c.r[20], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 16));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 6));
    c.r[3].d[0] = c.r[20].d[0] & 15ull;
    c.r[2].d[0] = c.r[2].d[0] & 63ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[3].d[0] = c.r[3].d[0] << 24;
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st64((c.r[29].w[0] + 80u), c.r[21].d[0]);
    set32(c.r[7], c.r[7].w[0] << 16);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    set32(c.r[8], c.r[8].w[0] << 16);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    set32(c.r[9], c.r[9].w[0] << 16);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    set32(c.r[3], 0u + 76u);
    set32(c.r[4], 0u + 78u);
    set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 16));
    set32(c.r[21], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 16));
    set32(c.r[19], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 16));
    st64((c.r[16].w[0] + 8u), c.r[3].d[0]);
    st64((c.r[16].w[0]), c.r[2].d[0]);
    c.budget -= 32;
    { const bool t = c.r[21].d[0] != 0ull; st64((c.r[16].w[0] + 24u), c.r[4].d[0]);  if (t) { goto L_00100824; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00100800u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 64u, depth + 1u); else { c.pc = 0x001006A8u; return; } if (c.pc != 0x00100800u) [[unlikely]] return; }
L_00100800:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = c.r[19].d[0] & 15ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[3].d[0] = c.r[3].d[0] << 24;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[4].d[0] = 0ull | 32768ull;
    c.r[4].d[0] = c.r[4].d[0] << 17;
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];  if (t) { goto L_00100848; } }
L_00100824:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00100834u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 64u, depth + 1u); else { c.pc = 0x001006A8u; return; } if (c.pc != 0x00100834u) [[unlikely]] return; }
L_00100834:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = c.r[19].d[0] & 15ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[3].d[0] = c.r[3].d[0] << 24;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 5;
L_00100848:
    st64((c.r[16].w[0] + 16u), c.r[2].d[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[17].w[0]) >> 1));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[18].w[0]) >> 1));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    set32(c.r[4], 0u + 2048u);
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[2].d[0] = c.r[4].d[0] - c.r[2].d[0];
    c.r[4].d[0] = c.r[4].d[0] - c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 36;
    set32(c.r[6], c.r[18].w[0] - 1u);
    set32(c.r[5], c.r[17].w[0] - 1u);
    c.r[4].d[0] = c.r[4].d[0] << 4;
    c.r[3].d[0] = ld64((c.r[16].w[0] + 64u));
    c.r[7].d[0] = ld64((c.r[16].w[0] + 80u));
    c.r[5].d[0] = c.r[5].d[0] << 48;
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.r[6].d[0] = c.r[6].d[0] << 16;
    set32(c.r[11], 0u + 1u);
    c.r[6].d[0] = c.r[6].d[0] | c.r[5].d[0];
    set32(c.r[2], 0u + 24u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[11].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[11].d[0];
    set32(c.r[5], 0u + 64u);
    set32(c.r[8], 0u + 26u);
    set32(c.r[9], 0u + 70u);
    set32(c.r[10], 0u + 69u);
    st64((c.r[16].w[0] + 40u), c.r[2].d[0]);
    st64((c.r[16].w[0] + 32u), c.r[4].d[0]);
    c.r[2].d[0] = c.r[20].d[0] & 2ull;
    st64((c.r[16].w[0] + 56u), c.r[5].d[0]);
    st64((c.r[16].w[0] + 48u), c.r[6].d[0]);
    st64((c.r[16].w[0] + 72u), c.r[8].d[0]);
    st64((c.r[16].w[0] + 64u), c.r[3].d[0]);
    st64((c.r[16].w[0] + 88u), c.r[9].d[0]);
    st64((c.r[16].w[0] + 80u), c.r[7].d[0]);
    c.budget -= 39;
    { const bool t = c.r[2].d[0] == 0ull; st64((c.r[16].w[0] + 104u), c.r[10].d[0]);  if (t) { goto L_001008F0; } }
    c.r[2].d[0] = ld64((c.r[16].w[0] + 96u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | c.r[11].d[0];  if (t) { goto L_001008FC; } }
L_001008F0:
    c.r[2].d[0] = ld64((c.r[16].w[0] + 96u));
    set32(c.r[3], 0u - 2u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 3;
L_001008FC:
    st64((c.r[16].w[0] + 96u), c.r[2].d[0]);
    set32(c.r[2], 0u + 71u);
    c.budget -= 4;
    { const bool t = c.r[21].d[0] == 0ull; st64((c.r[16].w[0] + 120u), c.r[2].d[0]);  if (t) { goto L_00100920; } }
    c.r[2].d[0] = c.r[21].d[0] & 3ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[2].d[0] << 17;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];  if (t) { goto L_00100924; } }
L_00100920:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.budget -= 1;
L_00100924:
    st64((c.r[16].w[0] + 112u), c.r[2].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    set32(c.r[2], 0u + 8u);
    c.r[21].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00100958:
    set32(c.r[7], c.r[7].w[0] << 16);
    set32(c.r[9], c.r[9].w[0] << 16);
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 16));
    set32(c.r[9], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 16));
    set32(c.r[9], c.r[7].w[0] + c.r[9].w[0]);
    set32(c.r[6], c.r[6].w[0] << 16);
    set32(c.r[8], c.r[8].w[0] << 16);
    c.r[12].d[0] = ld8((c.r[29].w[0]));
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 16));
    set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 16));
    set32(c.r[9], c.r[9].w[0] << 4);
    set32(c.r[7], c.r[7].w[0] << 4);
    c.r[3].d[0] = ld32((c.r[29].w[0] + 16u));
    set32(c.r[8], c.r[6].w[0] + c.r[8].w[0]);
    c.r[11].d[0] = c.r[11].d[0] & 255ull;
    c.r[13].d[0] = ld8((c.r[29].w[0] + 8u));
    c.r[11].d[0] = c.r[11].d[0] << 8;
    c.r[2].d[0] = 0ull | 65024ull;
    c.r[2].d[0] = c.r[2].d[0] << 46;
    set32(c.r[8], c.r[8].w[0] << 4);
    set32(c.r[6], c.r[6].w[0] << 4);
    c.r[10].d[0] = c.r[10].d[0] & 255ull;
    c.r[12].d[0] = c.r[12].d[0] << 16;
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.r[9].d[0] = c.r[9].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[10].d[0] = c.r[10].d[0] | c.r[2].d[0];
    c.r[12].d[0] = c.r[12].d[0] | c.r[11].d[0];
    c.r[7].d[0] = c.r[6].d[0] | c.r[7].d[0];
    c.r[9].d[0] = c.r[8].d[0] | c.r[9].d[0];
    set32(c.r[5], c.r[5].w[0] << 16);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.r[9].d[0] = c.r[9].d[0] | c.r[3].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[3].d[0];
    c.r[10].d[0] = c.r[10].d[0] | c.r[12].d[0];
    c.r[13].d[0] = c.r[13].d[0] << 24;
    set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 16));
    set32(c.r[4], 0u + 71u);
    set32(c.r[5], 0u + 5u);
    c.r[10].d[0] = c.r[10].d[0] | c.r[13].d[0];
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[2], 0u + 6u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[6].w[0] + 16u), c.r[2].d[0]);
    st64((c.r[6].w[0] + 40u), c.r[3].d[0]);
    st64((c.r[6].w[0] + 32u), c.r[10].d[0]);
    st64((c.r[6].w[0] + 48u), c.r[7].d[0]);
    st64((c.r[6].w[0] + 72u), c.r[5].d[0]);
    st64((c.r[6].w[0] + 64u), c.r[9].d[0]);
    st64((c.r[6].w[0] + 88u), c.r[4].d[0]);
    st64((c.r[6].w[0] + 8u), c.r[4].d[0]);
    st64((c.r[6].w[0]), c.r[11].d[0]);
    st64((c.r[6].w[0] + 24u), 0ull);
    c.budget -= 55;
    { const bool t = c.r[8].d[0] == 0ull; st64((c.r[6].w[0] + 56u), c.r[5].d[0]);  if (t) { goto L_00100A4C; } }
    c.r[2].d[0] = c.r[8].d[0] & 3ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[2].d[0] << 17;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st64((c.r[6].w[0] + 80u), c.r[2].d[0]);  if (t) { goto L_00100A50; } }
L_00100A4C:
    st64((c.r[6].w[0] + 80u), c.r[11].d[0]);
    c.budget -= 1;
L_00100A50:
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 6u);  c.pc = t; return; }
L_00100A60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = c.r[3].d[0] | 40960ull;
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00100AB4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[3].d[0] = c.r[3].d[0] | 40960ull;
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
L_00100A98:
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 1u);  if (t) { goto L_00100B00; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[4].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00100A98u | kUnwind; return; } goto L_00100A98; } }
L_00100AB4:
    c.r[2].d[0] = ld64((c.r[6].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] | 40992ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[2].d[0] = c.r[2].d[0] & 32767ull;
    c.r[5].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 12;
    { const bool t = c.r[5].d[0] != c.r[4].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);  if (t) { goto L_00100B14; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] | 40976ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];  if (t) { goto L_00100B24; } }
L_00100B00:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00100B0Cu); set32(c.r[4], c.r[4].w[0] + 1720u);  if (depth < kMaxDepth) unit_0005(c, 313u, depth + 1u); else { c.pc = 0x00117F48u; return; } if (c.pc != 0x00100B0Cu) [[unlikely]] return; }
L_00100B0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00100B3C; } }
L_00100B14:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[3].d[0] = c.r[3].d[0] | 40976ull;
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.budget -= 4;
L_00100B24:
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[4], 0u + 257u);
    c.r[3].d[0] = c.r[3].d[0] | 40960ull;
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.budget -= 6;
L_00100B3C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00100B48:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00100B5Cu);  if (depth < kMaxDepth) unit_0000(c, 55u, depth + 1u); else { c.pc = 0x00100300u; return; } if (c.pc != 0x00100B5Cu) [[unlikely]] return; }
L_00100B5C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00100BA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00100B74u);  if (depth < kMaxDepth) unit_0001(c, 4u, depth + 1u); else { c.pc = 0x00104020u; return; } if (c.pc != 0x00100B74u) [[unlikely]] return; }
L_00100B74:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00100BD0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x12000000u);
    c.r[3].d[0] = c.r[3].d[0] | 4096ull;
    c.r[2].d[0] = ld64((c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] >> 13;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00100BD4; } }
L_00100BA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00100BB0u);  if (depth < kMaxDepth) unit_0001(c, 6u, depth + 1u); else { c.pc = 0x00104060u; return; } if (c.pc != 0x00100BB0u) [[unlikely]] return; }
L_00100BB0:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 13);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.r[4].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00100BD0; } }
    c.r[2].d[0] = c.r[4].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 2;
L_00100BD0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00100BD4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00100BE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00100E74; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 36864ull;
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);  if (t) { goto L_00100C34; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[3].d[0] = c.r[3].d[0] | 36864ull;
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 4;
L_00100C18:
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { goto L_00100D3C; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[5].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00100C18u | kUnwind; return; } goto L_00100C18; } }
L_00100C34:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 40960ull;
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);  if (t) { goto L_00100C74; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[3].d[0] = c.r[3].d[0] | 40960ull;
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
L_00100C58:
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { goto L_00100D48; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[5].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00100C58u | kUnwind; return; } goto L_00100C58; } }
L_00100C74:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x1F000000u);
    c.r[2].d[0] = c.r[2].d[0] | 15360ull;
    c.r[4].d[0] = c.r[4].d[0] | 3ull;
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x1F000000u);  if (t) { goto L_00100CC4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[4].d[0] = c.r[4].d[0] | 15360ull;
    c.r[3].d[0] = c.r[3].d[0] | 3ull;
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 5;
L_00100CA8:
    c.r[2].d[0] = c.r[6].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { goto L_00100D54; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[5].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00100CA8u | kUnwind; return; } goto L_00100CA8; } }
L_00100CC4:
    set32(c.r[6], cfc2(c, 29u));
    c.r[2].d[0] = c.r[6].d[0] & 256ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x01000000u);  if (t) { goto L_00100CF4; } }
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_00100CD8:
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { goto L_00100D60; } }
    set32(c.r[6], cfc2(c, 29u));
    c.r[2].d[0] = c.r[6].d[0] & 256ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[5].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00100CD8u | kUnwind; return; } goto L_00100CD8; } }
L_00100CF4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 12320ull;
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 3072ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);  if (t) { goto L_00100D34; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[3].d[0] = c.r[3].d[0] | 12320ull;
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
L_00100D18:
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { goto L_00100D6C; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 3072ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[5].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00100D18u | kUnwind; return; } goto L_00100D18; } }
L_00100D34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00100EE8; } }
L_00100D3C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 1768u);  if (t) { goto L_00100D74; } }
L_00100D48:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 1992u);  if (t) { goto L_00100D74; } }
L_00100D54:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 2040u);  if (t) { goto L_00100D74; } }
L_00100D60:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 2088u);  if (t) { goto L_00100D74; } }
L_00100D6C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], c.r[4].w[0] + 2128u);
    c.budget -= 2;
L_00100D74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00100D7Cu);  if (depth < kMaxDepth) unit_0005(c, 313u, depth + 1u); else { c.pc = 0x00117F48u; return; } if (c.pc != 0x00100D7Cu) [[unlikely]] return; }
L_00100D7C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[3].d[0] = c.r[3].d[0] | 36864ull;
    set32(c.r[4], c.r[4].w[0] + 1816u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00100D94u); set32(c.r[5], ld32((c.r[3].w[0])));  if (depth < kMaxDepth) unit_0005(c, 313u, depth + 1u); else { c.pc = 0x00117F48u; return; } if (c.pc != 0x00100D94u) [[unlikely]] return; }
L_00100D94:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[3].d[0] = c.r[3].d[0] | 36912ull;
    set32(c.r[4], c.r[4].w[0] + 1832u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00100DACu); set32(c.r[5], ld32((c.r[3].w[0])));  if (depth < kMaxDepth) unit_0005(c, 313u, depth + 1u); else { c.pc = 0x00117F48u; return; } if (c.pc != 0x00100DACu) [[unlikely]] return; }
L_00100DAC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[3].d[0] = c.r[3].d[0] | 36880ull;
    set32(c.r[4], c.r[4].w[0] + 1848u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00100DC4u); set32(c.r[5], ld32((c.r[3].w[0])));  if (depth < kMaxDepth) unit_0005(c, 313u, depth + 1u); else { c.pc = 0x00117F48u; return; } if (c.pc != 0x00100DC4u) [[unlikely]] return; }
L_00100DC4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[3].d[0] = c.r[3].d[0] | 36896ull;
    set32(c.r[4], c.r[4].w[0] + 1864u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00100DDCu); set32(c.r[5], ld32((c.r[3].w[0])));  if (depth < kMaxDepth) unit_0005(c, 313u, depth + 1u); else { c.pc = 0x00117F48u; return; } if (c.pc != 0x00100DDCu) [[unlikely]] return; }
L_00100DDC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[3].d[0] = c.r[3].d[0] | 40960ull;
    set32(c.r[4], c.r[4].w[0] + 1880u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00100DF4u); set32(c.r[5], ld32((c.r[3].w[0])));  if (depth < kMaxDepth) unit_0005(c, 313u, depth + 1u); else { c.pc = 0x00117F48u; return; } if (c.pc != 0x00100DF4u) [[unlikely]] return; }
L_00100DF4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[3].d[0] = c.r[3].d[0] | 41008ull;
    set32(c.r[4], c.r[4].w[0] + 1896u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00100E0Cu); set32(c.r[5], ld32((c.r[3].w[0])));  if (depth < kMaxDepth) unit_0005(c, 313u, depth + 1u); else { c.pc = 0x00117F48u; return; } if (c.pc != 0x00100E0Cu) [[unlikely]] return; }
L_00100E0C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[3].d[0] = c.r[3].d[0] | 40976ull;
    set32(c.r[4], c.r[4].w[0] + 1912u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00100E24u); set32(c.r[5], ld32((c.r[3].w[0])));  if (depth < kMaxDepth) unit_0005(c, 313u, depth + 1u); else { c.pc = 0x00117F48u; return; } if (c.pc != 0x00100E24u) [[unlikely]] return; }
L_00100E24:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[3].d[0] = c.r[3].d[0] | 40992ull;
    set32(c.r[4], c.r[4].w[0] + 1928u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00100E3Cu); set32(c.r[5], ld32((c.r[3].w[0])));  if (depth < kMaxDepth) unit_0005(c, 313u, depth + 1u); else { c.pc = 0x00117F48u; return; } if (c.pc != 0x00100E3Cu) [[unlikely]] return; }
L_00100E3C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[3].d[0] = c.r[3].d[0] | 15360ull;
    set32(c.r[4], c.r[4].w[0] + 1944u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00100E54u); set32(c.r[5], ld32((c.r[3].w[0])));  if (depth < kMaxDepth) unit_0005(c, 313u, depth + 1u); else { c.pc = 0x00117F48u; return; } if (c.pc != 0x00100E54u) [[unlikely]] return; }
L_00100E54:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[3].d[0] = c.r[3].d[0] | 12320ull;
    set32(c.r[4], c.r[4].w[0] + 1968u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00100E6Cu); set32(c.r[5], ld32((c.r[3].w[0])));  if (depth < kMaxDepth) unit_0005(c, 313u, depth + 1u); else { c.pc = 0x00117F48u; return; } if (c.pc != 0x00100E6Cu) [[unlikely]] return; }
L_00100E6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00100EE8; } }
L_00100E74:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] | 36864ull;
    c.r[5].d[0] = c.r[5].d[0] | 40960ull;
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[6], ld32((c.r[5].w[0])));
    c.r[4].d[0] = c.r[4].d[0] | 15360ull;
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[6].d[0] = c.r[6].d[0] & 256ull;
    c.r[4].d[0] = c.r[2].d[0] | 2ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x1F000000u);
    if (c.r[6].d[0] != 0) c.r[2].d[0] = c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] | 3ull;
    c.r[5].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[4].d[0] = c.r[2].d[0] | 4ull;
    if (c.r[5].d[0] != 0) c.r[2].d[0] = c.r[4].d[0];
    set32(c.r[6], cfc2(c, 29u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[6].d[0] = c.r[6].d[0] & 256ull;
    c.r[3].d[0] = c.r[3].d[0] | 12320ull;
    c.r[5].d[0] = c.r[2].d[0] | 8ull;
    set32(c.r[4], ld32((c.r[3].w[0])));
    if (c.r[6].d[0] != 0) c.r[2].d[0] = c.r[5].d[0];
    c.r[3].d[0] = c.r[2].d[0] | 16ull;
    c.r[4].d[0] = c.r[4].d[0] & 3072ull;
    if (c.r[4].d[0] != 0) c.r[2].d[0] = c.r[3].d[0];
    c.budget -= 29;
L_00100EE8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00100EF8:
    set32(c.r[7], c.r[7].w[0] << 16);
    set32(c.r[6], c.r[6].w[0] << 16);
    set32(c.r[8], c.r[8].w[0] << 16);
    set32(c.r[13], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 16));
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], c.r[5].w[0] << 16);
    set32(c.r[9], c.r[9].w[0] << 16);
    set32(c.r[10], c.r[10].w[0] << 16);
    set32(c.r[11], c.r[11].w[0] << 16);
    set32(c.r[12], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 16));
    set32(c.r[15], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 16));
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 16));
    set32(c.r[24], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 16));
    set32(c.r[10], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[10].w[0]) >> 16));
    set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[11].w[0]) >> 16));
    c.r[14].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = c.r[13].d[0] < static_cast<std::uint64_t>(59ll) ? 1ull : 0ull;
    c.budget -= 20;
    { const bool t = c.r[2].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_00100FA4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], c.r[13].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 2224u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x00100000u < 16384u) { entry = entries_0000[(t - 0x00100000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00100F64:
    mmi::mult(c, 0, c.r[10].w[0], c.r[8].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));  if (t) { goto L_00100FA4; } }
L_00100F70:
    mmi::mult(c, 0, c.r[10].w[0], c.r[8].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));  if (t) { goto L_00100FA4; } }
L_00100F84:
    mmi::mult(c, 0, c.r[10].w[0], c.r[8].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));  if (t) { goto L_00100FA4; } }
L_00100F90:
    mmi::mult(c, 0, c.r[10].w[0], c.r[8].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));  if (t) { goto L_00100FA4; } }
L_00100F9C:
    mmi::mult(c, 0, c.r[10].w[0], c.r[8].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.budget -= 2;
L_00100FA4:
    set32(c.r[2], 0u + 32767u);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (t) { goto L_00100FC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00100FBCu); set32(c.r[4], c.r[4].w[0] + 2176u);  if (depth < kMaxDepth) unit_0005(c, 313u, depth + 1u); else { c.pc = 0x00117F48u; return; } if (c.pc != 0x00100FBCu) [[unlikely]] return; }
L_00100FBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001010D0; } }
L_00100FC4:
    mmi::por(c.r[2], c.r[0], c.r[0]);
    c.r[3].d[0] = c.r[6].d[0] & 32767ull;
    st128((c.r[14].w[0] + 80u) & ~15u, c.r[2]);
    c.r[6].d[0] = c.r[7].d[0] << 48;
    st128((c.r[14].w[0]) & ~15u, c.r[2]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0xF3FF0000u);
    c.r[7].d[0] = c.r[7].d[0] | 65535ull;
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.r[7].d[0] = c.r[7].d[0] | 65535ull;
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.r[7].d[0] = c.r[7].d[0] | 65535ull;
    c.r[4].d[0] = ld64((c.r[14].w[0] + 80u));
    set32(c.r[2], 0u - 32768u);
    c.r[5].d[0] = ld64((c.r[14].w[0]));
    c.r[12].d[0] = c.r[12].d[0] << 48;
    c.r[4].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[11].d[0] = ld64((c.r[14].w[0] + 8u));
    c.r[5].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 19;
L_00101010:
    set32(c.r[2], 0u + 4u);
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[2].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    set32(c.r[2], 0u - 1u);
    c.r[2].d[0] = c.r[2].d[0] >> 4;
    set32(c.r[3], 0u - 16u);
    c.r[5].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[11].d[0] = c.r[11].d[0] & c.r[3].d[0];
    c.r[4].d[0] = c.r[4].d[0] & c.r[7].d[0];
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 16);
    c.budget -= 11;
L_0010103C:
    c.r[10].d[0] = c.r[10].d[0] << 48;
    c.budget -= 1;
L_00101040:
    c.r[8].d[0] = c.r[8].d[0] << 48;
    c.r[6].d[0] = c.r[6].d[0] | c.r[12].d[0];
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 16);
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = c.r[2].d[0] << 45;
    set32(c.r[3], 0u + 14u);
    c.r[7].d[0] = 0ull | 32768ull;
    c.r[7].d[0] = c.r[7].d[0] << 44;
    c.r[9].d[0] = c.r[15].d[0] << 48;
    c.r[10].d[0] = static_cast<std::uint64_t>(c.r[10].sd[0] >> 48);
    c.r[5].d[0] = c.r[5].d[0] | c.r[2].d[0];
    c.r[10].d[0] = c.r[10].d[0] | c.r[8].d[0];
    c.r[11].d[0] = c.r[11].d[0] | c.r[3].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[7].d[0];
    c.r[13].d[0] = c.r[13].d[0] << 56;
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 16);
    c.budget -= 16;
L_00101080:
    c.r[12].d[0] = c.r[24].d[0] << 48;
    c.r[6].d[0] = c.r[6].d[0] | c.r[13].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[12].d[0];
    set32(c.r[2], 0u + 80u);
    set32(c.r[3], 0u + 81u);
    set32(c.r[7], 0u + 82u);
    set32(c.r[8], 0u + 83u);
    st64((c.r[14].w[0] + 80u), c.r[4].d[0]);
    st64((c.r[14].w[0]), c.r[5].d[0]);
    st64((c.r[14].w[0] + 8u), c.r[11].d[0]);
    st64((c.r[14].w[0] + 16u), c.r[6].d[0]);
    st64((c.r[14].w[0] + 24u), c.r[2].d[0]);
    st64((c.r[14].w[0] + 32u), c.r[9].d[0]);
    st64((c.r[14].w[0] + 40u), c.r[3].d[0]);
    st64((c.r[14].w[0] + 48u), c.r[10].d[0]);
    st64((c.r[14].w[0] + 56u), c.r[7].d[0]);
    c.budget -= 16;
L_001010C0:
    st64((c.r[14].w[0] + 72u), c.r[8].d[0]);
    st64((c.r[14].w[0] + 64u), 0ull);
    set32(c.r[2], 0u + 6u);
    c.budget -= 4;
L_001010D0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001010E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = c.r[3].d[0] | 40960ull;
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 8;
L_00101100:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_00101134; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[3].d[0] = c.r[3].d[0] | 40960ull;
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 4;
L_00101118:
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 1u);  if (t) { goto L_00101214; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[6].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00101118u | kUnwind; return; } goto L_00101118; } }
L_00101134:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[5], 0u + 6u);
    c.r[2].d[0] = c.r[2].d[0] | 40992ull;
    c.budget -= 3;
L_00101140:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x70000000u);
    st32((c.r[2].w[0]), c.r[5].w[0]);
    c.r[3].d[0] = c.r[7].d[0] & c.r[4].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);  if (t) { goto L_00101170; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].d[0] = c.r[7].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] | 40976ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];  if (t) { goto L_00101180; } }
L_00101170:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[3].d[0] = c.r[3].d[0] | 40976ull;
    c.r[2].d[0] = c.r[7].d[0] & c.r[2].d[0];
    c.budget -= 4;
L_00101180:
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[4], 0u + 257u);
    c.r[2].d[0] = c.r[2].d[0] | 40960ull;
    st32((c.r[2].w[0]), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);  if (t) { goto L_001011CC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[3].d[0] = c.r[3].d[0] | 40960ull;
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
L_001011B0:
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 1u);  if (t) { goto L_00101214; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[6].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001011B0u | kUnwind; return; } goto L_001011B0; } }
L_001011CC:
    c.r[2].d[0] = ld64((c.r[7].w[0] + 80u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] | 40992ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[2].d[0] = c.r[2].d[0] & 32767ull;
    c.r[4].d[0] = c.r[8].d[0] & c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != c.r[5].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);  if (t) { goto L_00101228; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].d[0] = c.r[8].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] | 40976ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];  if (t) { goto L_00101238; } }
L_00101214:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00101220u); set32(c.r[4], c.r[4].w[0] + 2464u);  if (depth < kMaxDepth) unit_0005(c, 313u, depth + 1u); else { c.pc = 0x00117F48u; return; } if (c.pc != 0x00101220u) [[unlikely]] return; }
L_00101220:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00101250; } }
L_00101228:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[3].d[0] = c.r[3].d[0] | 40976ull;
    c.r[2].d[0] = c.r[8].d[0] & c.r[2].d[0];
    c.budget -= 4;
L_00101238:
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[4], 0u + 257u);
    c.r[3].d[0] = c.r[3].d[0] | 40960ull;
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.budget -= 6;
L_00101250:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00101260:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010127Cu); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 55u, depth + 1u); else { c.pc = 0x00100300u; return; } if (c.pc != 0x0010127Cu) [[unlikely]] return; }
L_0010127C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[18], ld32((c.r[16].w[0] + 8u)));  if (t) { goto L_001012A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00101290u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0001(c, 45u, depth + 1u); else { c.pc = 0x001045C8u; return; } if (c.pc != 0x00101290u) [[unlikely]] return; }
L_00101290:
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010129Cu); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 348u, depth + 1u); else { c.pc = 0x001038A0u; return; } if (c.pc != 0x0010129Cu) [[unlikely]] return; }
L_0010129C:
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), 0u);  if (t) { goto L_001012E4; } }
L_001012A8:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[16].w[0] + 8u), c.r[17].w[0]);  goto L_001012C8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001012B8u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0001(c, 45u, depth + 1u); else { c.pc = 0x001045C8u; return; } if (c.pc != 0x001012B8u) [[unlikely]] return; }
L_001012B8:
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001012C4u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 348u, depth + 1u); else { c.pc = 0x001038A0u; return; } if (c.pc != 0x001012C4u) [[unlikely]] return; }
    goto L_001012C4;
L_001012C0:
    set32(c.r[4], 0u + 2u);
    c.budget -= 1;
L_001012C4:
    st32((c.r[16].w[0] + 8u), c.r[17].w[0]);
    c.budget -= 1;
L_001012C8:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001012D8u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0000(c, 344u, depth + 1u); else { c.pc = 0x00103880u; return; } if (c.pc != 0x001012D8u) [[unlikely]] return; }
L_001012D8:
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001012E4u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0001(c, 49u, depth + 1u); else { c.pc = 0x00104630u; return; } if (c.pc != 0x001012E4u) [[unlikely]] return; }
L_001012E4:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00101300:
    c.r[2].d[0] = ld64((c.r[4].w[0] + 48u));
    set32(c.r[5], c.r[5].w[0] << 16);
    set32(c.r[6], c.r[6].w[0] << 16);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 16));
    c.r[3].d[0] = c.r[2].d[0] >> 16;
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 16));
    c.r[2].d[0] = c.r[2].d[0] >> 48;
    c.r[3].d[0] = c.r[3].d[0] & 2047ull;
    c.r[2].d[0] = c.r[2].d[0] & 2047ull;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[6].d[0] = c.r[6].d[0] << 48;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[5].d[0] = c.r[5].d[0] << 48;
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] >> 1;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.r[3].d[0] = c.r[3].d[0] >> 1;
    c.r[6].d[0] = c.r[6].d[0] - c.r[2].d[0];
    c.r[5].d[0] = c.r[5].d[0] - c.r[3].d[0];
    c.r[2].d[0] = c.r[6].d[0] << 4;
    set32(c.r[7], c.r[7].w[0] << 16);
    c.budget -= 27;
    { const bool t = c.r[7].d[0] == 0ull; c.r[5].d[0] = c.r[5].d[0] << 4;  if (t) { goto L_00101378; } }
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(8ll);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] << 32;  if (t) { goto L_0010137C; } }
L_00101378:
    c.r[2].d[0] = c.r[6].d[0] << 36;
    c.budget -= 1;
L_0010137C:
    c.r[2].d[0] = c.r[5].d[0] | c.r[2].d[0];
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st64((c.r[4].w[0] + 32u), c.r[2].d[0]);  c.pc = t; return; }
L_00101388:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[6], c.r[6].w[0] << 16);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    set32(c.r[5], c.r[5].w[0] << 16);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    set32(c.r[18], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 16));
    set32(c.r[20], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 16));
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 22));
    c.r[2].d[0] = c.r[20].d[0] & 15ull;
    c.r[6].d[0] = c.r[6].d[0] & 63ull;
    c.r[2].d[0] = c.r[2].d[0] << 24;
    c.r[6].d[0] = c.r[6].d[0] << 16;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    st64((c.r[29].w[0] + 80u), c.r[21].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    set32(c.r[7], c.r[7].w[0] << 16);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    set32(c.r[8], c.r[8].w[0] << 16);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    set32(c.r[9], c.r[9].w[0] << 16);
    set32(c.r[2], 0u + 77u);
    set32(c.r[3], 0u + 79u);
    set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 16));
    set32(c.r[21], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 16));
    set32(c.r[19], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 16));
    st64((c.r[16].w[0] + 8u), c.r[2].d[0]);
    st64((c.r[16].w[0]), c.r[6].d[0]);
    c.budget -= 31;
    { const bool t = c.r[21].d[0] != 0ull; st64((c.r[16].w[0] + 24u), c.r[3].d[0]);  if (t) { goto L_00101438; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00101414u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 64u, depth + 1u); else { c.pc = 0x001006A8u; return; } if (c.pc != 0x00101414u) [[unlikely]] return; }
L_00101414:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = c.r[19].d[0] & 15ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[3].d[0] = c.r[3].d[0] << 24;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[4].d[0] = 0ull | 32768ull;
    c.r[4].d[0] = c.r[4].d[0] << 17;
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];  if (t) { goto L_0010145C; } }
L_00101438:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_0010143C:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00101448u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 64u, depth + 1u); else { c.pc = 0x001006A8u; return; } if (c.pc != 0x00101448u) [[unlikely]] return; }
L_00101448:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = c.r[19].d[0] & 15ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[3].d[0] = c.r[3].d[0] << 24;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 5;
L_0010145C:
    st64((c.r[16].w[0] + 16u), c.r[2].d[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[17].w[0]) >> 1));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[18].w[0]) >> 1));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    set32(c.r[4], 0u + 2048u);
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[2].d[0] = c.r[4].d[0] - c.r[2].d[0];
    c.r[4].d[0] = c.r[4].d[0] - c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 36;
    set32(c.r[6], c.r[18].w[0] - 1u);
    set32(c.r[5], c.r[17].w[0] - 1u);
    c.r[4].d[0] = c.r[4].d[0] << 4;
    c.r[3].d[0] = ld64((c.r[16].w[0] + 64u));
    c.r[7].d[0] = ld64((c.r[16].w[0] + 80u));
    c.r[5].d[0] = c.r[5].d[0] << 48;
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.r[6].d[0] = c.r[6].d[0] << 16;
    set32(c.r[11], 0u + 1u);
    c.r[6].d[0] = c.r[6].d[0] | c.r[5].d[0];
    set32(c.r[2], 0u + 25u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[11].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[11].d[0];
    set32(c.r[5], 0u + 65u);
    set32(c.r[8], 0u + 26u);
    set32(c.r[9], 0u + 70u);
    set32(c.r[10], 0u + 69u);
    st64((c.r[16].w[0] + 40u), c.r[2].d[0]);
    st64((c.r[16].w[0] + 32u), c.r[4].d[0]);
    c.r[2].d[0] = c.r[20].d[0] & 2ull;
    st64((c.r[16].w[0] + 56u), c.r[5].d[0]);
    st64((c.r[16].w[0] + 48u), c.r[6].d[0]);
    st64((c.r[16].w[0] + 72u), c.r[8].d[0]);
    st64((c.r[16].w[0] + 64u), c.r[3].d[0]);
    st64((c.r[16].w[0] + 88u), c.r[9].d[0]);
    st64((c.r[16].w[0] + 80u), c.r[7].d[0]);
    c.budget -= 39;
    { const bool t = c.r[2].d[0] == 0ull; st64((c.r[16].w[0] + 104u), c.r[10].d[0]);  if (t) { goto L_00101504; } }
    c.r[2].d[0] = ld64((c.r[16].w[0] + 96u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | c.r[11].d[0];  if (t) { goto L_00101510; } }
L_00101504:
    c.r[2].d[0] = ld64((c.r[16].w[0] + 96u));
    set32(c.r[3], 0u - 2u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 3;
L_00101510:
    st64((c.r[16].w[0] + 96u), c.r[2].d[0]);
    set32(c.r[2], 0u + 72u);
    c.budget -= 4;
    { const bool t = c.r[21].d[0] == 0ull; st64((c.r[16].w[0] + 120u), c.r[2].d[0]);  if (t) { goto L_00101534; } }
    c.r[2].d[0] = c.r[21].d[0] & 3ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[2].d[0] << 17;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];  if (t) { goto L_00101538; } }
L_00101534:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.budget -= 1;
L_00101538:
    st64((c.r[16].w[0] + 112u), c.r[2].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    set32(c.r[2], 0u + 8u);
    c.r[21].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00101568:
    c.r[2].d[0] = ld64((c.r[4].w[0] + 48u));
    set32(c.r[5], c.r[5].w[0] << 16);
    set32(c.r[6], c.r[6].w[0] << 16);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 16));
    c.r[3].d[0] = c.r[2].d[0] >> 16;
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 16));
    c.r[2].d[0] = c.r[2].d[0] >> 48;
    c.r[3].d[0] = c.r[3].d[0] & 2047ull;
    c.r[2].d[0] = c.r[2].d[0] & 2047ull;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[6].d[0] = c.r[6].d[0] << 48;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[5].d[0] = c.r[5].d[0] << 48;
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] >> 1;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.r[3].d[0] = c.r[3].d[0] >> 1;
    c.r[6].d[0] = c.r[6].d[0] - c.r[2].d[0];
    c.r[5].d[0] = c.r[5].d[0] - c.r[3].d[0];
    c.r[2].d[0] = c.r[6].d[0] << 4;
    set32(c.r[7], c.r[7].w[0] << 16);
    c.budget -= 27;
    { const bool t = c.r[7].d[0] == 0ull; c.r[5].d[0] = c.r[5].d[0] << 4;  if (t) { goto L_001015E0; } }
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(8ll);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] << 32;  if (t) { goto L_001015E4; } }
L_001015E0:
    c.r[2].d[0] = c.r[6].d[0] << 36;
    c.budget -= 1;
L_001015E4:
    c.r[2].d[0] = c.r[5].d[0] | c.r[2].d[0];
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st64((c.r[4].w[0] + 32u), c.r[2].d[0]);  c.pc = t; return; }
L_001015F0:
    set32(c.r[29], c.r[29].w[0] - 208u);
    set32(c.r[5], c.r[5].w[0] << 16);
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    set32(c.r[8], c.r[8].w[0] << 16);
    st64((c.r[29].w[0] + 176u), c.r[30].d[0]);
    set32(c.r[16], c.r[9].w[0] << 16);
    st64((c.r[29].w[0] + 160u), c.r[23].d[0]);
    set32(c.r[10], c.r[10].w[0] << 16);
    st64((c.r[29].w[0] + 144u), c.r[22].d[0]);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 16));
    st64((c.r[29].w[0] + 128u), c.r[21].d[0]);
    set32(c.r[22], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 16));
    st64((c.r[29].w[0] + 80u), c.r[18].d[0]);
    set32(c.r[21], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 16));
    st64((c.r[29].w[0] + 64u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[20].d[0]);
    set32(c.r[23], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[10].w[0]) >> 16));
    st64((c.r[29].w[0] + 96u), c.r[19].d[0]);
    c.budget -= 19;
L_0010163C:
    set32(c.r[17], c.r[6].w[0] << 16);
    st64((c.r[29].w[0] + 192u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010164Cu); set32(c.r[30], c.r[7].w[0] << 16);  if (depth < kMaxDepth) unit_0000(c, 55u, depth + 1u); else { c.pc = 0x00100300u; return; } if (c.pc != 0x0010164Cu) [[unlikely]] return; }
L_0010164C:
    set32(c.r[19], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[17].w[0]) >> 16));
    set32(c.r[20], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[30].w[0]) >> 16));
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00101674u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 58u, depth + 1u); else { c.pc = 0x00100378u; return; } if (c.pc != 0x00101674u) [[unlikely]] return; }
L_00101674:
    set32(c.r[4], c.r[18].w[0] + 40u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00101690u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 58u, depth + 1u); else { c.pc = 0x00100378u; return; } if (c.pc != 0x00101690u) [[unlikely]] return; }
L_00101690:
    set32(c.r[4], c.r[18].w[0] + 96u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.r[8].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001016ACu); c.r[9].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 66u, depth + 1u); else { c.pc = 0x00100770u; return; } if (c.pc != 0x001016ACu) [[unlikely]] return; }
L_001016AC:
    set32(c.r[4], c.r[18].w[0] + 224u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.r[8].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001016C8u); c.r[9].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 124u, depth + 1u); else { c.pc = 0x00101388u; return; } if (c.pc != 0x001016C8u) [[unlikely]] return; }
L_001016C8:
    set32(c.r[4], c.r[18].w[0] + 464u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.r[8].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001016E4u); c.r[9].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 66u, depth + 1u); else { c.pc = 0x00100770u; return; } if (c.pc != 0x001016E4u) [[unlikely]] return; }
L_001016E4:
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[18].w[0] + 592u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00101700u); c.r[8].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 124u, depth + 1u); else { c.pc = 0x00101388u; return; } if (c.pc != 0x00101700u) [[unlikely]] return; }
L_00101700:
    c.budget -= 2;
    { const bool t = c.r[23].d[0] == 0ull; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[17].w[0]) >> 17));  if (t) { goto L_00101778; } }
    set32(c.r[16], 0u + 2048u);
    set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[30].w[0]) >> 17));
    st32((c.r[29].w[0]), 0u);
    set32(c.r[17], c.r[16].w[0] - c.r[17].w[0]);
    st32((c.r[29].w[0] + 8u), 0u);
    set32(c.r[16], c.r[16].w[0] - c.r[2].w[0]);
    set32(c.r[4], c.r[18].w[0] + 352u);
    st32((c.r[29].w[0] + 16u), 0u);
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[19].d[0] + 0ull;
    c.r[9].d[0] = c.r[20].d[0] + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00101748u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 69u, depth + 1u); else { c.pc = 0x00100958u; return; } if (c.pc != 0x00101748u) [[unlikely]] return; }
L_00101748:
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0]), 0u);
    st32((c.r[29].w[0] + 8u), 0u);
    set32(c.r[4], c.r[18].w[0] + 720u);
    st32((c.r[29].w[0] + 16u), 0u);
    c.r[8].d[0] = c.r[19].d[0] + 0ull;
    c.r[9].d[0] = c.r[20].d[0] + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00101778u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 69u, depth + 1u); else { c.pc = 0x00100958u; return; } if (c.pc != 0x00101778u) [[unlikely]] return; }
L_00101778:
    mmi::por(c.r[2], c.r[0], c.r[0]);
    set32(c.r[7], 0u + 22u);
    st128((c.r[18].w[0] + 80u) & ~15u, c.r[2]);
    set32(c.r[6], 0u - 32768u);
    st128((c.r[18].w[0] + 448u) & ~15u, c.r[2]);
    set32(c.r[3], 0u + 16u);
    c.r[4].d[0] = ld64((c.r[18].w[0] + 80u));
    set32(c.r[2], 0u + 16u);
    c.r[5].d[0] = ld64((c.r[18].w[0] + 448u));
    if (c.r[23].d[0] != 0) c.r[2].d[0] = c.r[7].d[0];
    c.r[4].d[0] = c.r[4].d[0] & c.r[6].d[0];
    if (c.r[23].d[0] != 0) c.r[3].d[0] = c.r[7].d[0];
    c.r[5].d[0] = c.r[5].d[0] & c.r[6].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[6].d[0] = ld64((c.r[18].w[0] + 88u));
    c.r[5].d[0] = c.r[5].d[0] | c.r[2].d[0];
    c.r[7].d[0] = ld64((c.r[18].w[0] + 456u));
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    set32(c.r[3], 0u - 1u);
    c.r[3].d[0] = c.r[3].d[0] >> 4;
    set32(c.r[2], 0u - 16u);
    c.r[5].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[7].d[0] = c.r[7].d[0] & c.r[2].d[0];
    c.r[4].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[6].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[3].d[0] << 45;
    set32(c.r[2], 0u + 14u);
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[2].d[0];
    st64((c.r[18].w[0] + 80u), c.r[4].d[0]);
    st64((c.r[18].w[0] + 88u), c.r[6].d[0]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    st64((c.r[18].w[0] + 448u), c.r[5].d[0]);
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 42;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00101820u); st64((c.r[18].w[0] + 456u), c.r[7].d[0]);  if (depth < kMaxDepth) unit_0000(c, 64u, depth + 1u); else { c.pc = 0x001006A8u; return; } if (c.pc != 0x00101820u) [[unlikely]] return; }
L_00101820:
    set32(c.r[3], ld32((c.r[29].w[0] + 32u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[4].d[0] = c.r[4].d[0] | 1ull;
    c.r[2].d[0] = ld64((c.r[3].w[0]));
    c.r[3].d[0] = 0ull | 65535ull;
    c.budget -= 7;
L_0010183C:
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.budget -= 1;
L_00101840:
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[4].d[0]; set32(c.r[3], ld32((c.r[29].w[0] + 32u)));  if (t) { goto L_0010185C; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 192u));  if (t) { goto L_001018A8; } }
L_0010185C:
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 1));
    c.r[6].d[0] = ld64((c.r[18].w[0] + 56u));
    c.r[7].d[0] = ld64((c.r[18].w[0] + 96u));
    set32(c.r[3], c.r[5].w[0] << 16);
    c.r[4].d[0] = ld64((c.r[18].w[0] + 224u));
    set32(c.r[2], 0u - 512u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 16));
    c.r[5].d[0] = c.r[5].d[0] & 511ull;
    c.r[4].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 9;
L_00101880:
    c.r[3].d[0] = c.r[3].d[0] & 511ull;
    c.r[6].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[7].d[0] = c.r[7].d[0] & c.r[2].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[3].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[5].d[0];
    st64((c.r[18].w[0] + 224u), c.r[4].d[0]);
    st64((c.r[18].w[0] + 56u), c.r[6].d[0]);
    st64((c.r[18].w[0] + 96u), c.r[7].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 192u));
    c.budget -= 10;
L_001018A8:
    c.r[30].d[0] = ld64((c.r[29].w[0] + 176u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 6;
L_001018C0:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_001018D8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] & 1ull;
    set32(c.r[4], 0u + 40u);
    mmi::mult(c, 0, c.r[16].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00101900u); set32(c.r[4], c.r[2].w[0] + c.r[17].w[0]);  if (depth < kMaxDepth) unit_0000(c, 62u, depth + 1u); else { c.pc = 0x001005E8u; return; } if (c.pc != 0x00101900u) [[unlikely]] return; }
L_00101900:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00101918; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00101910u); set32(c.r[4], c.r[17].w[0] + 448u);  if (depth < kMaxDepth) unit_0000(c, 70u, depth + 1u); else { c.pc = 0x00100A60u; return; } if (c.pc != 0x00101910u) [[unlikely]] return; }
L_00101910:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00101924; } }
L_00101918:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00101920u); set32(c.r[4], c.r[17].w[0] + 80u);  if (depth < kMaxDepth) unit_0000(c, 70u, depth + 1u); else { c.pc = 0x00100A60u; return; } if (c.pc != 0x00101920u) [[unlikely]] return; }
L_00101920:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00101924:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00101938:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[2], c.r[5].w[0] - 1u);  if (t) { goto L_00101964; } }
L_00101940:
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_00101948:
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00101948u | kUnwind; return; } goto L_00101948; } }
L_00101964:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00101970:
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x003A0000u);  if (t) { goto L_00101990; } }
    set32(c.r[3], c.r[4].w[0] << 2);
    c.budget -= 1;
L_00101980:
    set32(c.r[2], c.r[2].w[0] + 19648u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[3].w[0])));  c.pc = t; return; }
L_00101990:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_00101998:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st64((c.r[29].w[0] + 48u), c.r[17].d[0]);
    c.r[2].d[0] = c.r[2].d[0] | 57344ull;
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 19648u);
    c.budget -= 10;
L_001019C0:
    set32(c.r[5], ld32((c.r[2].w[0])));
    set32(c.r[6], c.r[6].w[0] + 19712u);
    set32(c.r[4], 0u + 9u);
    c.r[17].d[0] = c.r[5].d[0] & 1ull;
    c.budget -= 4;
L_001019D0:
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], c.r[3].w[0] + 4u);  goto L_001019FC; }
    set32(c.r[2], ld32((c.r[3].w[0])));
    st32((c.r[2].w[0] + 128u), 0u);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 48u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 80u), 0u);
    st32((c.r[2].w[0] + 64u), 0u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 8;
L_001019FC:
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001019D0u | kUnwind; return; } goto L_001019D0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = 0ull | 65311ull;
    c.r[3].d[0] = c.r[3].d[0] | 57360ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0xFF1F0000u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], 0u + 20u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & c.r[6].d[0];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00101A34u); st32((c.r[3].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 149u, depth + 1u); else { c.pc = 0x00101938u; return; } if (c.pc != 0x00101A34u) [[unlikely]] return; }
L_00101A34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00101A3Cu); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 161u, depth + 1u); else { c.pc = 0x00101A88u; return; } if (c.pc != 0x00101A3Cu) [[unlikely]] return; }
L_00101A3C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_00101A40:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[3].d[0]; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00101A60; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] | 57344ull;
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
L_00101A60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00101A78:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 19688u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 19688u), c.r[4].w[0]);  c.pc = t; return; }
L_00101A88:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 57344ull;
    c.r[3].d[0] = c.r[3].d[0] | 57376ull;
    set32(c.r[10], ld32((c.r[2].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[6], ld32((c.r[3].w[0])));
    c.r[9].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 57392ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[5], ld32((c.r[5].w[0])));
    c.r[3].d[0] = c.r[3].d[0] | 57424ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].d[0] = ld8((c.r[9].w[0]));
    set32(c.r[6], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | 57408ull;
    set32(c.r[8], ld32((c.r[2].w[0])));
    c.r[4].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 20;
    if (c.r[4].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[9].w[0] + 1u));  goto L_00101AE0; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u - 1u);  c.pc = t; return; }
L_00101AE0:
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[9].w[0] + 2u));  goto L_00101AF4; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u - 2u);  c.pc = t; return; }
L_00101AF4:
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[11].d[0] = ld8((c.r[9].w[0] + 3u));  goto L_00101B08; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u - 3u);  c.pc = t; return; }
L_00101B08:
    c.r[2].d[0] = c.r[11].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x003A0000u);  if (t) { goto L_00101B1C; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u - 4u);  c.pc = t; return; }
L_00101B1C:
    c.r[3].d[0] = ld8((c.r[9].w[0]));
    set32(c.r[2], c.r[2].w[0] + 19752u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.r[5].d[0] = ld8((c.r[9].w[0] + 1u));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 19768u);
    c.r[8].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65487ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.r[7].d[0] = ld8((c.r[9].w[0] + 2u));
    c.r[2].d[0] = c.r[10].d[0] & c.r[2].d[0];
    set32(c.r[4], c.r[4].w[0] + 19784u);
    set32(c.r[8], c.r[8].w[0] << 4);
    c.r[6].d[0] = ld8((c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[10].d[0] = c.r[2].d[0] | c.r[8].d[0];
    set32(c.r[7], c.r[7].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 65343ull;
    set32(c.r[6], c.r[6].w[0] << 6);
    c.r[3].d[0] = c.r[10].d[0] & c.r[3].d[0];
    c.r[4].d[0] = ld8((c.r[7].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[10].d[0] = c.r[3].d[0] | c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 65523ull;
    set32(c.r[4], c.r[4].w[0] << 2);
    c.r[2].d[0] = c.r[10].d[0] & c.r[2].d[0];
    c.budget -= 30;
    { const bool t = c.r[11].d[0] == 0ull; c.r[10].d[0] = c.r[2].d[0] | c.r[4].d[0];  if (t) { goto L_00101BB8; } }
    c.r[3].d[0] = ld8((c.r[9].w[0] + 3u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[10].d[0] = c.r[10].d[0] | 2ull;
    c.r[2].d[0] = c.r[2].d[0] | 64767ull;
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[2].d[0] = c.r[10].d[0] & c.r[2].d[0];
    set32(c.r[3], c.r[3].w[0] << 8);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[10].d[0] = c.r[2].d[0] | c.r[3].d[0];  if (t) { goto L_00101BC4; } }
L_00101BB8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65533ull;
    c.r[10].d[0] = c.r[10].d[0] & c.r[2].d[0];
    c.budget -= 3;
L_00101BC4:
    c.r[2].d[0] = ld16((c.r[9].w[0] + 4u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[6].d[0] = ld16((c.r[9].w[0] + 6u));
    c.r[4].d[0] = c.r[4].d[0] | 57344ull;
    c.r[5].d[0] = ld16((c.r[9].w[0] + 10u));
    set32(c.r[2], c.r[2].w[0] << 16);
    set32(c.r[8], ld32((c.r[9].w[0] + 16u)));
    c.r[6].d[0] = c.r[2].d[0] | c.r[6].d[0];
    c.r[7].d[0] = ld16((c.r[9].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[4].w[0]), c.r[10].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 57376ull;
    set32(c.r[5], c.r[5].w[0] << 16);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[3].w[0]), c.r[6].w[0]);
    c.r[5].d[0] = c.r[5].d[0] | c.r[7].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 57392ull;
    set32(c.r[6], ld32((c.r[9].w[0] + 12u)));
    st32((c.r[2].w[0]), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] | 57424ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[3].w[0]), c.r[6].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 57408ull;
    st32((c.r[2].w[0]), c.r[8].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[6], c.r[3].w[0] + 19800u);
    ldl(c.r[2], (c.r[9].w[0] + 7u));
    ldr(c.r[2], (c.r[9].w[0]));
    ldl(c.r[4], (c.r[9].w[0] + 15u));
    c.budget -= 30;
L_00101C3C:
    ldr(c.r[4], (c.r[9].w[0] + 8u));
    set32(c.r[5], ld32((c.r[9].w[0] + 16u)));
    sdl(c.r[2], (c.r[6].w[0] + 7u));
    sdr(c.r[2], (c.r[6].w[0]));
    sdl(c.r[4], (c.r[6].w[0] + 15u));
    sdr(c.r[4], (c.r[6].w[0] + 8u));
    st32((c.r[6].w[0] + 16u), c.r[5].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_00101C60:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[8], c.r[3].w[0] + 19800u);
    ldl(c.r[5], (c.r[8].w[0] + 7u));
    ldr(c.r[5], (c.r[8].w[0]));
    ldl(c.r[6], (c.r[8].w[0] + 15u));
    ldr(c.r[6], (c.r[8].w[0] + 8u));
    set32(c.r[7], ld32((c.r[8].w[0] + 16u)));
    sdl(c.r[5], (c.r[4].w[0] + 7u));
    sdr(c.r[5], (c.r[4].w[0]));
    sdl(c.r[6], (c.r[4].w[0] + 15u));
    sdr(c.r[6], (c.r[4].w[0] + 8u));
    st32((c.r[4].w[0] + 16u), c.r[7].w[0]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_00101C98:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 57440ull;
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[2], ld32((c.r[2].w[0])));  if (t) { goto L_00101CB8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10010000u);
    st32((c.r[1].w[0] - 8096u), c.r[4].w[0]);
    c.budget -= 2;
L_00101CB8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00101CC0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x01000000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (t) { goto L_00101D50; } }
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_00101CF8:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0;  if (t) { goto L_00101D40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00101D08u); set32(c.r[4], c.r[18].w[0] + 2520u);  if (depth < kMaxDepth) unit_0005(c, 313u, depth + 1u); else { c.pc = 0x00117F48u; return; } if (c.pc != 0x00101D08u) [[unlikely]] return; }
L_00101D08:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[4].w[0] >> 8);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00101D40; } }
    set32(c.r[5], 0u - 257u);
    c.budget -= 1;
L_00101D20:
    c.r[3].d[0] = c.r[4].d[0] & c.r[5].d[0];
    c.r[2].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00101D20u | kUnwind; return; } goto L_00101D20; } }
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_00101D40:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00101CF8u | kUnwind; return; } goto L_00101CF8; } }
L_00101D50:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { st32((c.r[16].w[0] + 48u), c.r[19].w[0]);  goto L_00101D64; }
L_00101D64:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u - 13u);
    st32((c.r[16].w[0] + 32u), 0u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[2].d[0] = c.r[2].d[0] | 261ull;
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00101D98:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x01000000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (t) { goto L_00101E30; } }
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_00101DD8:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0;  if (t) { goto L_00101E20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00101DE8u); set32(c.r[4], c.r[18].w[0] + 2520u);  if (depth < kMaxDepth) unit_0005(c, 313u, depth + 1u); else { c.pc = 0x00117F48u; return; } if (c.pc != 0x00101DE8u) [[unlikely]] return; }
L_00101DE8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[4].w[0] >> 8);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00101E20; } }
    set32(c.r[5], 0u - 257u);
    c.budget -= 1;
L_00101E00:
    c.r[3].d[0] = c.r[4].d[0] & c.r[5].d[0];
    c.r[2].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00101E00u | kUnwind; return; } goto L_00101E00; } }
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_00101E20:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00101DD8u | kUnwind; return; } goto L_00101DD8; } }
L_00101E30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 3;
L_00101E3C:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { st32((c.r[16].w[0] + 16u), c.r[19].w[0]);  goto L_00101E44; }
L_00101E44:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u - 13u);
    st32((c.r[16].w[0] + 32u), c.r[20].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[2].d[0] = c.r[2].d[0] | 257ull;
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00101E80:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x01000000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (t) { goto L_00101F18; } }
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_00101EC0:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0;  if (t) { goto L_00101F08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00101ED0u); set32(c.r[4], c.r[18].w[0] + 2520u);  if (depth < kMaxDepth) unit_0005(c, 313u, depth + 1u); else { c.pc = 0x00117F48u; return; } if (c.pc != 0x00101ED0u) [[unlikely]] return; }
L_00101ED0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[4].w[0] >> 8);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00101F08; } }
    set32(c.r[5], 0u - 257u);
    c.budget -= 1;
L_00101EE8:
    c.r[3].d[0] = c.r[4].d[0] & c.r[5].d[0];
    c.r[2].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00101EE8u | kUnwind; return; } goto L_00101EE8; } }
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_00101F08:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00101EC0u | kUnwind; return; } goto L_00101EC0; } }
L_00101F18:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { st32((c.r[16].w[0] + 16u), c.r[19].w[0]);  goto L_00101F2C; }
L_00101F2C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u - 13u);
    st32((c.r[16].w[0] + 32u), c.r[20].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[2].d[0] = c.r[2].d[0] | 265ull;
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00101F68:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x01000000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (t) { goto L_00101FF0; } }
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_00101F98:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0;  if (t) { goto L_00101FE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00101FA8u); set32(c.r[4], c.r[18].w[0] + 2520u);  if (depth < kMaxDepth) unit_0005(c, 313u, depth + 1u); else { c.pc = 0x00117F48u; return; } if (c.pc != 0x00101FA8u) [[unlikely]] return; }
L_00101FA8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[4].w[0] >> 8);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00101FE0; } }
    set32(c.r[5], 0u - 257u);
    c.budget -= 1;
L_00101FC0:
    c.r[3].d[0] = c.r[4].d[0] & c.r[5].d[0];
    c.r[2].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00101FC0u | kUnwind; return; } goto L_00101FC0; } }
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_00101FE0:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00101F98u | kUnwind; return; } goto L_00101F98; } }
L_00101FF0:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u - 13u);
    set32(c.r[4], 0u - 2u);
    st32((c.r[16].w[0] + 32u), 0u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[2].d[0] = c.r[2].d[0] | 256ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00102030:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    c.budget -= 3;
L_0010203C:
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 1;
L_00102040:
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x01000000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (t) { goto L_001020C8; } }
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_00102070:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0;  if (t) { goto L_001020B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00102080u); set32(c.r[4], c.r[18].w[0] + 2520u);  if (depth < kMaxDepth) unit_0005(c, 313u, depth + 1u); else { c.pc = 0x00117F48u; return; } if (c.pc != 0x00102080u) [[unlikely]] return; }
L_00102080:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[4].w[0] >> 8);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001020B8; } }
    set32(c.r[5], 0u - 257u);
    c.budget -= 1;
L_00102098:
    c.r[3].d[0] = c.r[4].d[0] & c.r[5].d[0];
    c.r[2].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00102098u | kUnwind; return; } goto L_00102098; } }
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_001020B8:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00102070u | kUnwind; return; } goto L_00102070; } }
L_001020C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { st32((c.r[16].w[0] + 16u), c.r[19].w[0]);  goto L_001020DC; }
L_001020DC:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u - 13u);
    set32(c.r[4], 0u - 2u);
    st32((c.r[16].w[0] + 32u), c.r[20].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[2].d[0] = c.r[2].d[0] | 256ull;
    c.budget -= 9;
L_00102100:
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00102120:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x01000000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (t) { goto L_001021B8; } }
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_00102160:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0;  if (t) { goto L_001021A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00102170u); set32(c.r[4], c.r[18].w[0] + 2520u);  if (depth < kMaxDepth) unit_0005(c, 313u, depth + 1u); else { c.pc = 0x00117F48u; return; } if (c.pc != 0x00102170u) [[unlikely]] return; }
L_00102170:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[4].w[0] >> 8);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001021A8; } }
    set32(c.r[5], 0u - 257u);
    c.budget -= 1;
L_00102188:
    c.r[3].d[0] = c.r[4].d[0] & c.r[5].d[0];
    c.r[2].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00102188u | kUnwind; return; } goto L_00102188; } }
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_001021A8:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00102160u | kUnwind; return; } goto L_00102160; } }
L_001021B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { st32((c.r[16].w[0] + 16u), c.r[19].w[0]);  goto L_001021CC; }
L_001021CC:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u - 13u);
    set32(c.r[4], 0u - 2u);
    st32((c.r[16].w[0] + 32u), c.r[20].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[2].d[0] = c.r[2].d[0] | 8ull;
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[2].d[0] = c.r[2].d[0] | 256ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00102210:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; st64((c.r[29].w[0] + 32u), c.r[18].d[0]);  if (t) { goto L_00102244; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] >> 8);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 1ull;  if (t) { goto L_001022BC; } }
L_00102244:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; if (c.r[16].d[0] == 0) c.r[16].d[0] = c.r[3].d[0];  if (t) { goto L_001022B8; } }
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 2;
L_00102260:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { goto L_001022A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00102270u); set32(c.r[4], c.r[18].w[0] + 2520u);  if (depth < kMaxDepth) unit_0005(c, 313u, depth + 1u); else { c.pc = 0x00117F48u; return; } if (c.pc != 0x00102270u) [[unlikely]] return; }
L_00102270:
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[4].w[0] >> 8);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001022A8; } }
    set32(c.r[5], 0u - 257u);
    c.budget -= 1;
L_00102288:
    c.r[3].d[0] = c.r[4].d[0] & c.r[5].d[0];
    c.r[2].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00102288u | kUnwind; return; } goto L_00102288; } }
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_001022A8:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00102260u | kUnwind; return; } goto L_00102260; } }
L_001022B8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001022BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001022D8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 11;
    { const bool t = c.r[6].d[0] != c.r[2].d[0]; st64((c.r[29].w[0] + 48u), c.r[19].d[0]);  if (t) { goto L_00102310; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] < c.r[18].d[0] ? 1ull : 0ull;  if (t) { goto L_0010238C; } }
L_00102310:
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[2].d[0] = c.r[2].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; if (c.r[16].d[0] == 0) c.r[16].d[0] = c.r[3].d[0];  if (t) { goto L_00102388; } }
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 3;
L_00102330:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { goto L_00102378; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00102340u); set32(c.r[4], c.r[19].w[0] + 2520u);  if (depth < kMaxDepth) unit_0005(c, 313u, depth + 1u); else { c.pc = 0x00117F48u; return; } if (c.pc != 0x00102340u) [[unlikely]] return; }
L_00102340:
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[4].w[0] >> 8);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00102378; } }
    set32(c.r[5], 0u - 257u);
    c.budget -= 1;
L_00102358:
    c.r[3].d[0] = c.r[4].d[0] & c.r[5].d[0];
    c.r[2].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00102358u | kUnwind; return; } goto L_00102358; } }
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_00102378:
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00102330u | kUnwind; return; } goto L_00102330; } }
L_00102388:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0010238C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001023A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 62752ull;
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);  if (t) { goto L_001023CC; } }
    set32(c.r[3], 0u + 4096u);
    c.r[2].d[0] = c.r[2].d[0] | 62864ull;
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 3;
L_001023CC:
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65279ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[4].d[0] = c.r[4].d[0] | 62864ull;
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), 0u);  c.pc = t; return; }
L_001023F0:
    set32(c.r[2], ld32((c.r[4].w[0])));
    st32((c.r[4].w[0]), c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] >> 8);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] & 1ull;  c.pc = t; return; }
L_00102408:
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[5].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[5].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[6].w[0]) & ~15u, c.vu0.vf[8]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[8].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[8].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[8].w[2]);
    vu::maddbc(c.vu0, 15u, 9u, 7u, c.vu0.vf[8].w[3]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; st128((c.r[4].w[0]) & ~15u, c.vu0.vf[9]);  c.pc = t; return; }
L_00102438:
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    c.budget -= 1;
L_0010243C:
    ld128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[5].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[5].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    set32(c.r[7], 0u + 4u);
    c.budget -= 4;
L_0010244C:
    ld128((c.r[6].w[0]) & ~15u, c.vu0.vf[8]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[8].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[8].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[8].w[2]);
    vu::maddbc(c.vu0, 15u, 9u, 7u, c.vu0.vf[8].w[3]);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[9]);
    set32(c.r[7], c.r[7].w[0] - 1u);
    set32(c.r[6], c.r[6].w[0] + 16u);
    c.budget -= 10;
    { const bool t = 0ull != c.r[7].d[0]; set32(c.r[4], c.r[4].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010244Cu | kUnwind; return; } goto L_0010244C; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00102480:
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[6].w[0]) & ~15u, c.vu0.vf[5]);
    vu::opmula(c.vu0, 4u, 5u);
    vu::opmsub(c.vu0, 6u, 5u, 4u);
    vu::sub(c.vu0, 1u, 6u, 6u, 6u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st128((c.r[4].w[0]) & ~15u, c.vu0.vf[6]);  c.pc = t; return; }
L_001024A0:
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[5]);
    vu::mul(c.vu0, 14u, 5u, 4u, 5u);
    vu::addbc(c.vu0, 8u, 5u, 5u, c.vu0.vf[5].w[1]);
    vu::addbc(c.vu0, 8u, 5u, 5u, c.vu0.vf[5].w[2]);
    c.r[2] = c.vu0.vf[5];
    c.f[0] = c.r[2].w[0];
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001024C8:
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    vu::mul(c.vu0, 14u, 5u, 4u, 4u);
    vu::addbc(c.vu0, 8u, 5u, 5u, c.vu0.vf[5].w[1]);
    vu::addbc(c.vu0, 8u, 5u, 5u, c.vu0.vf[5].w[2]);
    vu::sqrt(c.vu0, c.vu0.vf[5].w[0]);
    vu::addbc(c.vu0, 8u, 5u, 0u, c.vu0.q);
    vu::div(c.vu0, c.vu0.vf[0].w[3], c.vu0.vf[5].w[0]);
    vu::sub(c.vu0, 15u, 6u, 0u, 0u);
    vu::mulbc(c.vu0, 14u, 6u, 4u, c.vu0.q);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; st128((c.r[4].w[0]) & ~15u, c.vu0.vf[6]);  c.pc = t; return; }
L_00102500:
    ld128((c.r[5].w[0]) & ~15u, c.r[8]);
    ld128((c.r[5].w[0] + 16u) & ~15u, c.r[9]);
    ld128((c.r[5].w[0] + 32u) & ~15u, c.r[10]);
    ld128((c.r[5].w[0] + 48u) & ~15u, c.r[11]);
    mmi::pextlw(c.r[12], c.r[9], c.r[8]);
    mmi::pextuw(c.r[13], c.r[9], c.r[8]);
    mmi::pextlw(c.r[14], c.r[11], c.r[10]);
    mmi::pextuw(c.r[15], c.r[11], c.r[10]);
    mmi::pcpyld(c.r[8], c.r[14], c.r[12]);
    mmi::pcpyud(c.r[9], c.r[12], c.r[14]);
    mmi::pcpyld(c.r[10], c.r[15], c.r[13]);
    mmi::pcpyud(c.r[11], c.r[13], c.r[15]);
    st128((c.r[4].w[0]) & ~15u, c.r[8]);
    st128((c.r[4].w[0] + 16u) & ~15u, c.r[9]);
    st128((c.r[4].w[0] + 32u) & ~15u, c.r[10]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; st128((c.r[4].w[0] + 48u) & ~15u, c.r[11]);  c.pc = t; return; }
L_00102548:
    ld128((c.r[5].w[0]) & ~15u, c.r[8]);
    ld128((c.r[5].w[0] + 16u) & ~15u, c.r[9]);
    ld128((c.r[5].w[0] + 32u) & ~15u, c.r[10]);
    ld128((c.r[5].w[0] + 48u) & ~15u, c.vu0.vf[4]);
    vu::move(c.vu0, 15u, 5u, 4u);
    vu::sub(c.vu0, 14u, 4u, 4u, 4u);
    vu::move(c.vu0, 15u, 9u, 4u);
    c.r[11] = c.vu0.vf[4];
    mmi::pextlw(c.r[12], c.r[9], c.r[8]);
    mmi::pextuw(c.r[13], c.r[9], c.r[8]);
    mmi::pextlw(c.r[14], c.r[11], c.r[10]);
    mmi::pextuw(c.r[15], c.r[11], c.r[10]);
    mmi::pcpyld(c.r[8], c.r[14], c.r[12]);
    mmi::pcpyud(c.r[9], c.r[12], c.r[14]);
    mmi::pcpyld(c.r[10], c.r[15], c.r[13]);
    c.vu0.vf[6] = c.r[8];
    c.vu0.vf[7] = c.r[9];
    c.vu0.vf[8] = c.r[10];
    vu::mulabc(c.vu0, 14u, 6u, c.vu0.vf[5].w[0]);
    vu::maddabc(c.vu0, 14u, 7u, c.vu0.vf[5].w[1]);
    vu::maddbc(c.vu0, 14u, 4u, 8u, c.vu0.vf[5].w[2]);
    vu::sub(c.vu0, 14u, 4u, 9u, 4u);
    st128((c.r[4].w[0]) & ~15u, c.r[8]);
    st128((c.r[4].w[0] + 16u) & ~15u, c.r[9]);
    st128((c.r[4].w[0] + 32u) & ~15u, c.r[10]);
    c.budget -= 27;
    { const std::uint32_t t = c.r[31].w[0]; st128((c.r[4].w[0] + 48u) & ~15u, c.vu0.vf[4]);  c.pc = t; return; }
L_001025B8:
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[8], c.f[12]);
    c.vu0.vf[5] = c.r[8];
    vu::div(c.vu0, c.vu0.vf[0].w[3], c.vu0.vf[5].w[0]);
    vu::mulbc(c.vu0, 15u, 4u, 4u, c.vu0.q);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);  c.pc = t; return; }
L_001025D8:
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[8], c.f[12]);
    c.vu0.vf[5] = c.r[8];
    vu::div(c.vu0, c.vu0.vf[0].w[3], c.vu0.vf[5].w[0]);
    vu::mulbc(c.vu0, 14u, 4u, 4u, c.vu0.q);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);  c.pc = t; return; }
L_001025F8:
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[6].w[0]) & ~15u, c.vu0.vf[5]);
    set32(c.r[8], c.f[12]);
    c.vu0.vf[6] = c.r[8];
    vu::addbc(c.vu0, 8u, 7u, 0u, c.vu0.vf[0].w[3]);
    vu::sub(c.vu0, 8u, 8u, 7u, 6u);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[6].w[0]);
    vu::maddbc(c.vu0, 15u, 9u, 5u, c.vu0.vf[8].w[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st128((c.r[4].w[0]) & ~15u, c.vu0.vf[9]);  c.pc = t; return; }
L_00102620:
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[6].w[0]) & ~15u, c.vu0.vf[5]);
    vu::add(c.vu0, 15u, 6u, 4u, 5u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st128((c.r[4].w[0]) & ~15u, c.vu0.vf[6]);  c.pc = t; return; }
L_00102638:
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    c.budget -= 1;
L_0010263C:
    ld128((c.r[6].w[0]) & ~15u, c.vu0.vf[5]);
    vu::sub(c.vu0, 15u, 6u, 4u, 5u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st128((c.r[4].w[0]) & ~15u, c.vu0.vf[6]);  c.pc = t; return; }
L_00102650:
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[6].w[0]) & ~15u, c.vu0.vf[5]);
    vu::mul(c.vu0, 15u, 6u, 4u, 5u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st128((c.r[4].w[0]) & ~15u, c.vu0.vf[6]);  c.pc = t; return; }
L_00102668:
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[8], c.f[12]);
    c.vu0.vf[5] = c.r[8];
    vu::mulbc(c.vu0, 15u, 6u, 4u, c.vu0.vf[5].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st128((c.r[4].w[0]) & ~15u, c.vu0.vf[6]);  c.pc = t; return; }
L_00102680:
    ld128((c.r[6].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[5].w[0] + 48u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[5].w[0]) & ~15u, c.r[7]);
    ld128((c.r[5].w[0] + 16u) & ~15u, c.r[8]);
    ld128((c.r[5].w[0] + 32u) & ~15u, c.r[9]);
    vu::add(c.vu0, 14u, 5u, 5u, 4u);
    st128((c.r[4].w[0]) & ~15u, c.r[7]);
    st128((c.r[4].w[0] + 16u) & ~15u, c.r[8]);
    st128((c.r[4].w[0] + 32u) & ~15u, c.r[9]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; st128((c.r[4].w[0] + 48u) & ~15u, c.vu0.vf[5]);  c.pc = t; return; }
L_001026B0:
    ld128((c.r[5].w[0]) & ~15u, c.r[6]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st128((c.r[4].w[0]) & ~15u, c.r[6]);  c.pc = t; return; }
L_001026C0:
    ld128((c.r[5].w[0]) & ~15u, c.r[6]);
    ld128((c.r[5].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[5].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[5].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[4].w[0]) & ~15u, c.r[6]);
    st128((c.r[4].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[4].w[0] + 32u) & ~15u, c.r[8]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st128((c.r[4].w[0] + 48u) & ~15u, c.r[9]);  c.pc = t; return; }
L_001026E8:
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    vu::ftoi(c.vu0, 15u, 5u, 4u, 4);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st128((c.r[4].w[0]) & ~15u, c.vu0.vf[5]);  c.pc = t; return; }
L_001026F8:
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    vu::ftoi(c.vu0, 15u, 5u, 4u, 0);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st128((c.r[4].w[0]) & ~15u, c.vu0.vf[5]);  c.pc = t; return; }
L_00102708:
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    vu::itof(c.vu0, 15u, 5u, 4u, 4);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st128((c.r[4].w[0]) & ~15u, c.vu0.vf[5]);  c.pc = t; return; }
L_00102718:
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    vu::itof(c.vu0, 15u, 5u, 4u, 0);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st128((c.r[4].w[0]) & ~15u, c.vu0.vf[5]);  c.pc = t; return; }
L_00102728:
    vu::sub(c.vu0, 15u, 4u, 0u, 0u);
    vu::add(c.vu0, 1u, 4u, 4u, 0u);
    vu::mr32(c.vu0, 15u, 5u, 4u);
    vu::mr32(c.vu0, 15u, 6u, 5u);
    vu::mr32(c.vu0, 15u, 7u, 6u);
    st128((c.r[4].w[0] + 48u) & ~15u, c.vu0.vf[4]);
    st128((c.r[4].w[0] + 32u) & ~15u, c.vu0.vf[5]);
    st128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[6]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st128((c.r[4].w[0]) & ~15u, c.vu0.vf[7]);  c.pc = t; return; }
L_00102750:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[8], c.r[8].w[0] + 19824u);
    ld128((c.r[8].w[0]) & ~15u, c.vu0.vf[5]);
    vu::mr32(c.vu0, 1u, 6u, 6u);
    vu::addbc(c.vu0, 8u, 4u, 0u, c.vu0.vf[6].w[0]);
    vu::mul(c.vu0, 8u, 6u, 6u, 6u);
    vu::mulbc(c.vu0, 7u, 4u, 4u, c.vu0.vf[0].w[0]);
    vu::mulbc(c.vu0, 15u, 8u, 5u, c.vu0.vf[6].w[3]);
    vu::sub(c.vu0, 15u, 5u, 0u, 0u);
    vu::mulbc(c.vu0, 15u, 8u, 8u, c.vu0.vf[6].w[0]);
    vu::mulbc(c.vu0, 14u, 8u, 8u, c.vu0.vf[6].w[0]);
    vu::addbc(c.vu0, 8u, 4u, 4u, c.vu0.vf[8].w[3]);
    vu::mulbc(c.vu0, 12u, 8u, 8u, c.vu0.vf[6].w[0]);
    vu::addbc(c.vu0, 8u, 4u, 4u, c.vu0.vf[8].w[2]);
    vu::mulbc(c.vu0, 8u, 8u, 8u, c.vu0.vf[6].w[0]);
    vu::addbc(c.vu0, 8u, 4u, 4u, c.vu0.vf[8].w[1]);
    vu::addbc(c.vu0, 8u, 4u, 4u, c.vu0.vf[8].w[0]);
    vu::addbc(c.vu0, 12u, 4u, 5u, c.vu0.vf[4].w[0]);
    vu::mul(c.vu0, 8u, 7u, 4u, 4u);
    vu::subbc(c.vu0, 1u, 7u, 0u, c.vu0.vf[7].w[0]);
    vu::sqrt(c.vu0, c.vu0.vf[7].w[3]);
    c.budget -= 24;
    { const bool t = c.r[7].d[0] != 0ull; vu::addbc(c.vu0, 8u, 7u, 0u, c.vu0.q);  if (t) { goto L_001027B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; vu::addbc(c.vu0, 8u, 4u, 5u, c.vu0.vf[7].w[0]);  if (t) { goto L_001027BC; } }
L_001027B8:
    vu::subbc(c.vu0, 8u, 4u, 5u, c.vu0.vf[7].w[0]);
    c.budget -= 1;
L_001027BC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001027C8:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3FC90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001027F0; } }
    c.f[12] = fp::add(c.f[0], c.f[12]);
    c.budget -= 3;
    { set32(c.r[7], 0u + 1u);  goto L_001027F8; }
L_001027F0:
    c.f[12] = fp::sub(c.f[0], c.f[12]);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_001027F8:
    set32(c.r[8], c.f[12]);
    c.vu0.vf[6] = c.r[8];
    c.r[6].d[0] = c.r[31].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010280Cu);  if (depth < kMaxDepth) unit_0000(c, 228u, depth + 1u); else { c.pc = 0x00102750u; return; } if (c.pc != 0x0010280Cu) [[unlikely]] return; }
L_0010280C:
    c.r[31].d[0] = c.r[6].d[0] + 0ull;
    vu::move(c.vu0, 15u, 6u, 5u);
    vu::move(c.vu0, 15u, 7u, 5u);
    vu::move(c.vu0, 15u, 9u, 0u);
    vu::sub(c.vu0, 14u, 9u, 9u, 9u);
    vu::mr32(c.vu0, 15u, 8u, 9u);
    vu::sub(c.vu0, 3u, 4u, 4u, 4u);
    vu::addbc(c.vu0, 4u, 6u, 5u, c.vu0.vf[4].w[0]);
    vu::addbc(c.vu0, 8u, 6u, 5u, c.vu0.vf[4].w[1]);
    vu::subbc(c.vu0, 8u, 7u, 5u, c.vu0.vf[4].w[0]);
    vu::addbc(c.vu0, 4u, 7u, 5u, c.vu0.vf[4].w[1]);
    set32(c.r[7], 0u + 4u);
    c.budget -= 12;
L_0010283C:
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    c.budget -= 1;
L_00102840:
    vu::mulabc(c.vu0, 15u, 6u, c.vu0.vf[4].w[0]);
    vu::maddabc(c.vu0, 15u, 7u, c.vu0.vf[4].w[1]);
    vu::maddabc(c.vu0, 15u, 8u, c.vu0.vf[4].w[2]);
    vu::maddbc(c.vu0, 15u, 5u, 9u, c.vu0.vf[4].w[3]);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[5]);
    set32(c.r[7], c.r[7].w[0] - 1u);
    set32(c.r[5], c.r[5].w[0] + 16u);
    c.budget -= 9;
    { const bool t = 0ull != c.r[7].d[0]; set32(c.r[4], c.r[4].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010283Cu | kUnwind; return; } goto L_0010283C; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00102870:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3FC90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00102898; } }
    c.f[12] = fp::add(c.f[0], c.f[12]);
    c.budget -= 3;
    { set32(c.r[7], 0u + 1u);  goto L_001028A0; }
L_00102898:
    c.f[12] = fp::sub(c.f[0], c.f[12]);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_001028A0:
    set32(c.r[8], c.f[12]);
    c.vu0.vf[6] = c.r[8];
    c.r[6].d[0] = c.r[31].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001028B4u);  if (depth < kMaxDepth) unit_0000(c, 228u, depth + 1u); else { c.pc = 0x00102750u; return; } if (c.pc != 0x001028B4u) [[unlikely]] return; }
L_001028B4:
    c.r[31].d[0] = c.r[6].d[0] + 0ull;
    vu::move(c.vu0, 15u, 6u, 5u);
    vu::move(c.vu0, 15u, 7u, 5u);
    vu::move(c.vu0, 15u, 8u, 5u);
    vu::move(c.vu0, 15u, 9u, 5u);
    vu::addbc(c.vu0, 8u, 6u, 5u, c.vu0.vf[0].w[3]);
    vu::addbc(c.vu0, 1u, 9u, 5u, c.vu0.vf[0].w[3]);
    vu::sub(c.vu0, 3u, 4u, 4u, 4u);
    vu::addbc(c.vu0, 2u, 7u, 5u, c.vu0.vf[4].w[0]);
    vu::addbc(c.vu0, 4u, 7u, 5u, c.vu0.vf[4].w[1]);
    vu::subbc(c.vu0, 4u, 8u, 5u, c.vu0.vf[4].w[0]);
    vu::addbc(c.vu0, 2u, 8u, 5u, c.vu0.vf[4].w[1]);
    set32(c.r[7], 0u + 4u);
    c.budget -= 13;
L_001028E8:
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    vu::mulabc(c.vu0, 15u, 6u, c.vu0.vf[4].w[0]);
    vu::maddabc(c.vu0, 15u, 7u, c.vu0.vf[4].w[1]);
    vu::maddabc(c.vu0, 15u, 8u, c.vu0.vf[4].w[2]);
    vu::maddbc(c.vu0, 15u, 5u, 9u, c.vu0.vf[4].w[3]);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[5]);
    set32(c.r[7], c.r[7].w[0] - 1u);
    set32(c.r[5], c.r[5].w[0] + 16u);
    c.budget -= 10;
    { const bool t = 0ull != c.r[7].d[0]; set32(c.r[4], c.r[4].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001028E8u | kUnwind; return; } goto L_001028E8; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00102918:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3FC90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00102940; } }
    c.f[12] = fp::add(c.f[0], c.f[12]);
    c.budget -= 3;
    { set32(c.r[7], 0u + 1u);  goto L_00102948; }
L_0010293C:
    set32(c.r[7], 0u + 1u);
    c.budget -= 1;
L_00102940:
    c.f[12] = fp::sub(c.f[0], c.f[12]);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00102948:
    set32(c.r[8], c.f[12]);
    c.vu0.vf[6] = c.r[8];
    c.r[6].d[0] = c.r[31].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010295Cu);  if (depth < kMaxDepth) unit_0000(c, 228u, depth + 1u); else { c.pc = 0x00102750u; return; } if (c.pc != 0x0010295Cu) [[unlikely]] return; }
L_0010295C:
    c.r[31].d[0] = c.r[6].d[0] + 0ull;
    vu::move(c.vu0, 15u, 6u, 5u);
    vu::move(c.vu0, 15u, 7u, 5u);
    vu::move(c.vu0, 15u, 8u, 5u);
    vu::move(c.vu0, 15u, 9u, 5u);
    vu::addbc(c.vu0, 4u, 7u, 5u, c.vu0.vf[0].w[3]);
    vu::addbc(c.vu0, 1u, 9u, 5u, c.vu0.vf[0].w[3]);
    vu::sub(c.vu0, 3u, 4u, 4u, 4u);
    vu::subbc(c.vu0, 2u, 6u, 5u, c.vu0.vf[4].w[0]);
    vu::addbc(c.vu0, 8u, 6u, 5u, c.vu0.vf[4].w[1]);
    vu::addbc(c.vu0, 8u, 8u, 5u, c.vu0.vf[4].w[0]);
    vu::addbc(c.vu0, 2u, 8u, 5u, c.vu0.vf[4].w[1]);
    set32(c.r[7], 0u + 4u);
    c.budget -= 13;
L_00102990:
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    vu::mulabc(c.vu0, 15u, 6u, c.vu0.vf[4].w[0]);
    vu::maddabc(c.vu0, 15u, 7u, c.vu0.vf[4].w[1]);
    vu::maddabc(c.vu0, 15u, 8u, c.vu0.vf[4].w[2]);
    vu::maddbc(c.vu0, 15u, 5u, 9u, c.vu0.vf[4].w[3]);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[5]);
    set32(c.r[7], c.r[7].w[0] - 1u);
    set32(c.r[5], c.r[5].w[0] + 16u);
    c.budget -= 10;
    { const bool t = 0ull != c.r[7].d[0]; set32(c.r[4], c.r[4].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00102990u | kUnwind; return; } goto L_00102990; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001029C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001029E0u); c.f[12] = ld32((c.r[17].w[0] + 8u));  if (depth < kMaxDepth) unit_0000(c, 229u, depth + 1u); else { c.pc = 0x001027C8u; return; } if (c.pc != 0x001029E0u) [[unlikely]] return; }
L_001029E0:
    c.f[12] = ld32((c.r[17].w[0] + 4u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001029F0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 236u, depth + 1u); else { c.pc = 0x00102918u; return; } if (c.pc != 0x001029F0u) [[unlikely]] return; }
L_001029F0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = ld32((c.r[17].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00102870u | kUnwind; return; } goto L_00102870; }
L_00102A10:
    set32(c.r[8], c.f[12]);
    set32(c.r[9], c.f[13]);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[6]);
    c.vu0.vf[4] = c.r[8];
    c.vu0.vf[5] = c.r[9];
    vu::maxbc(c.vu0, 15u, 6u, 6u, c.vu0.vf[4].w[0]);
    vu::minibc(c.vu0, 15u, 6u, 6u, c.vu0.vf[5].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st128((c.r[4].w[0]) & ~15u, c.vu0.vf[6]);  c.pc = t; return; }
L_00102A38:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 144u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 128u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[18].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00102A6Cu); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x00102728u; return; } if (c.pc != 0x00102A6Cu) [[unlikely]] return; }
L_00102A6C:
    set32(c.r[16], c.r[29].w[0] + 64u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00102A80u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 207u, depth + 1u); else { c.pc = 0x00102480u; return; } if (c.pc != 0x00102A80u) [[unlikely]] return; }
L_00102A80:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00102A8Cu); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 209u, depth + 1u); else { c.pc = 0x001024C8u; return; } if (c.pc != 0x00102A8Cu) [[unlikely]] return; }
L_00102A8C:
    set32(c.r[16], c.r[29].w[0] + 32u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00102A9Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 209u, depth + 1u); else { c.pc = 0x001024C8u; return; } if (c.pc != 0x00102A9Cu) [[unlikely]] return; }
L_00102A9C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00102AACu); c.r[6].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 207u, depth + 1u); else { c.pc = 0x00102480u; return; } if (c.pc != 0x00102AACu) [[unlikely]] return; }
L_00102AAC:
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00102ABCu); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 220u, depth + 1u); else { c.pc = 0x00102680u; return; } if (c.pc != 0x00102ABCu) [[unlikely]] return; }
L_00102ABC:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00102AC8u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 211u, depth + 1u); else { c.pc = 0x00102548u; return; } if (c.pc != 0x00102AC8u) [[unlikely]] return; }
L_00102AC8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_00102AE8:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st32((c.r[29].w[0] + 80u), c.f[20]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[20] = c.r[1].w[0];
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.f[12] = c.f[20];
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00102B20u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 219u, depth + 1u); else { c.pc = 0x00102668u; return; } if (c.pc != 0x00102B20u) [[unlikely]] return; }
L_00102B20:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00102B2Cu); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 209u, depth + 1u); else { c.pc = 0x001024C8u; return; } if (c.pc != 0x00102B2Cu) [[unlikely]] return; }
L_00102B2C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00102B3Cu); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 219u, depth + 1u); else { c.pc = 0x00102668u; return; } if (c.pc != 0x00102B3Cu) [[unlikely]] return; }
L_00102B3C:
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00102B48u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 209u, depth + 1u); else { c.pc = 0x001024C8u; return; } if (c.pc != 0x00102B48u) [[unlikely]] return; }
L_00102B48:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00102B58u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 219u, depth + 1u); else { c.pc = 0x00102668u; return; } if (c.pc != 0x00102B58u) [[unlikely]] return; }
L_00102B58:
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00102B64u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 209u, depth + 1u); else { c.pc = 0x001024C8u; return; } if (c.pc != 0x00102B64u) [[unlikely]] return; }
L_00102B64:
    c.f[0] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[1].w[0];
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[16].w[0] + 48u), c.f[0]);
    st32((c.r[16].w[0] + 60u), c.f[1]);
    st32((c.r[16].w[0] + 56u), c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00102B8Cu); st32((c.r[16].w[0] + 52u), c.f[0]);  if (depth < kMaxDepth) unit_0000(c, 210u, depth + 1u); else { c.pc = 0x00102500u; return; } if (c.pc != 0x00102B8Cu) [[unlikely]] return; }
L_00102B8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[20] = ld32((c.r[29].w[0] + 80u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00102BA8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[19].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00102BD4u); c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x00102BD4u) [[unlikely]] return; }
L_00102BD4:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00102BE0u); set32(c.r[4], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x00102BE0u) [[unlikely]] return; }
L_00102BE0:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00102BECu); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x00102BECu) [[unlikely]] return; }
L_00102BEC:
    set32(c.r[4], c.r[16].w[0] + 48u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 80u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001026B0u | kUnwind; return; } goto L_001026B0; }
L_00102C10:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.f[0] = c.f[17] ^ fp::kSign;
    st32((c.r[29].w[0] + 96u), c.f[20]);
    c.f[20] = c.f[18] ^ fp::kSign;
    c.f[1] = ld32((c.r[29].w[0] + 160u));
    st32((c.r[29].w[0] + 104u), c.f[21]);
    c.f[0] = fp::add(c.f[0], c.f[18]);
    c.f[21] = fp::mul(c.f[1], c.f[19]);
    st64((c.r[29].w[0] + 64u), c.r[16].d[0]);
    c.f[20] = fp::mul(c.f[20], c.f[19]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 11;
L_00102C3C:
    c.f[17] = fp::mul(c.f[17], c.f[1]);
    st32((c.r[29].w[0] + 144u), c.f[26]);
    c.f[19] = c.f[19] ^ fp::kSign;
    st32((c.r[29].w[0] + 136u), c.f[25]);
    c.f[21] = fp::mul(c.f[21], c.f[0]);
    st32((c.r[29].w[0] + 128u), c.f[24]);
    c.f[20] = fp::add(c.f[20], c.f[17]);
    st32((c.r[29].w[0] + 120u), c.f[23]);
    c.f[19] = fp::add(c.f[19], c.f[1]);
    st32((c.r[29].w[0] + 112u), c.f[22]);
    c.f[22] = c.f[12];
    c.f[24] = c.f[13];
    c.f[23] = c.f[14];
    c.f[26] = c.f[15];
    fpu_div(c, 21u, c.f[21], c.f[19]);
    fpu_div(c, 20u, c.f[20], c.f[19]);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00102C98u); c.f[25] = c.f[16];  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x00102728u; return; } if (c.pc != 0x00102C98u) [[unlikely]] return; }
L_00102C98:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[16].w[0] + 20u), c.f[22]);
    st32((c.r[16].w[0]), c.f[22]);
    st32((c.r[16].w[0] + 40u), 0u);
    st32((c.r[16].w[0] + 60u), 0u);
    st32((c.r[16].w[0] + 44u), c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00102CC0u); st32((c.r[16].w[0] + 56u), c.f[0]);  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x00102728u; return; } if (c.pc != 0x00102CC0u) [[unlikely]] return; }
L_00102CC0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[24]);
    st32((c.r[29].w[0] + 20u), c.f[23]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 40u), c.f[21]);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 48u), c.f[26]);
    st32((c.r[29].w[0] + 52u), c.f[25]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00102CE8u); st32((c.r[29].w[0] + 56u), c.f[20]);  if (depth < kMaxDepth) unit_0000(c, 204u, depth + 1u); else { c.pc = 0x00102438u; return; } if (c.pc != 0x00102CE8u) [[unlikely]] return; }
L_00102CE8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[26] = ld32((c.r[29].w[0] + 144u));
    c.f[25] = ld32((c.r[29].w[0] + 136u));
    c.f[24] = ld32((c.r[29].w[0] + 128u));
    c.f[23] = ld32((c.r[29].w[0] + 120u));
    c.f[22] = ld32((c.r[29].w[0] + 112u));
    c.f[21] = ld32((c.r[29].w[0] + 104u));
    c.f[20] = ld32((c.r[29].w[0] + 96u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_00102D18:
    c.f[16] = c.f[12];
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull; c.f[15] = c.f[13];  if (t) { goto L_00102DC8; } }
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[2] = ld32((c.r[5].w[0] + 4u));
    c.f[9] = fp::mul(c.f[16], c.f[1]);
    c.f[3] = ld32((c.r[5].w[0] + 8u));
    c.f[10] = fp::mul(c.f[15], c.f[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[5] = c.r[1].w[0];
    c.f[6] = fp::mul(c.f[14], c.f[3]);
    st32((c.r[4].w[0] + 12u), c.f[16]);
    c.f[7] = c.f[1] ^ fp::kSign;
    st32((c.r[4].w[0] + 28u), c.f[15]);
    c.f[0] = fp::add(c.f[9], c.f[10]);
    st32((c.r[4].w[0] + 44u), c.f[14]);
    c.f[4] = c.f[2] ^ fp::kSign;
    st32((c.r[4].w[0] + 48u), c.f[7]);
    c.f[8] = c.f[3] ^ fp::kSign;
    c.f[0] = fp::add(c.f[0], c.f[6]);
    st32((c.r[4].w[0] + 52u), c.f[4]);
    c.f[7] = fp::mul(c.f[15], c.f[1]);
    c.f[4] = fp::mul(c.f[16], c.f[2]);
    st32((c.r[4].w[0] + 56u), c.f[8]);
    c.f[0] = fp::sub(c.f[5], c.f[0]);
    c.f[1] = fp::mul(c.f[14], c.f[1]);
    st32((c.r[4].w[0] + 16u), c.f[7]);
    c.f[2] = fp::mul(c.f[14], c.f[2]);
    st32((c.r[4].w[0] + 4u), c.f[4]);
    c.f[5] = fp::sub(c.f[0], c.f[5]);
    c.f[9] = fp::add(c.f[9], c.f[0]);
    st32((c.r[4].w[0] + 32u), c.f[1]);
    c.f[10] = fp::add(c.f[10], c.f[0]);
    st32((c.r[4].w[0] + 36u), c.f[2]);
    c.f[6] = fp::add(c.f[6], c.f[0]);
    st32((c.r[4].w[0] + 60u), c.f[5]);
    c.f[0] = fp::mul(c.f[16], c.f[3]);
    st32((c.r[4].w[0]), c.f[9]);
    c.f[3] = fp::mul(c.f[15], c.f[3]);
    st32((c.r[4].w[0] + 20u), c.f[10]);
    st32((c.r[4].w[0] + 40u), c.f[6]);
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.budget -= 41;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 24u), c.f[3]);  c.pc = t; return; }
L_00102DC8:
    c.f[2] = ld32((c.r[5].w[0]));
    c.f[4] = ld32((c.r[5].w[0] + 4u));
    c.f[5] = fp::mul(c.f[16], c.f[2]);
    c.f[7] = ld32((c.r[5].w[0] + 8u));
    c.f[6] = fp::mul(c.f[15], c.f[4]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[1] = c.r[1].w[0];
    c.f[8] = fp::mul(c.f[14], c.f[7]);
    st32((c.r[4].w[0] + 12u), 0u);
    c.f[9] = c.f[2] ^ fp::kSign;
    st32((c.r[4].w[0] + 28u), 0u);
    c.f[0] = fp::add(c.f[5], c.f[6]);
    st32((c.r[4].w[0] + 44u), 0u);
    c.f[10] = fp::mul(c.f[14], c.f[4]);
    c.f[11] = c.f[4] ^ fp::kSign;
    c.f[0] = fp::add(c.f[0], c.f[8]);
    c.f[3] = fp::mul(c.f[15], c.f[2]);
    c.f[12] = fp::mul(c.f[16], c.f[7]);
    fpu_div(c, 1u, c.f[1], c.f[0]);
    c.f[5] = fp::sub(c.f[5], c.f[0]);
    c.f[6] = fp::sub(c.f[6], c.f[0]);
    c.f[8] = fp::sub(c.f[8], c.f[0]);
    c.f[13] = fp::mul(c.f[15], c.f[7]);
    c.f[0] = c.f[0] ^ fp::kSign;
    c.f[2] = fp::mul(c.f[14], c.f[2]);
    c.f[4] = fp::mul(c.f[16], c.f[4]);
    c.f[7] = c.f[7] ^ fp::kSign;
    c.budget -= 29;
L_00102E3C:
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[5] = fp::mul(c.f[1], c.f[5]);
    c.f[3] = fp::mul(c.f[1], c.f[3]);
    c.f[2] = fp::mul(c.f[1], c.f[2]);
    st32((c.r[4].w[0] + 60u), c.f[0]);
    c.f[9] = fp::mul(c.f[1], c.f[9]);
    st32((c.r[4].w[0]), c.f[5]);
    c.f[4] = fp::mul(c.f[1], c.f[4]);
    st32((c.r[4].w[0] + 16u), c.f[3]);
    c.f[6] = fp::mul(c.f[1], c.f[6]);
    st32((c.r[4].w[0] + 32u), c.f[2]);
    c.f[10] = fp::mul(c.f[1], c.f[10]);
    st32((c.r[4].w[0] + 48u), c.f[9]);
    c.f[11] = fp::mul(c.f[1], c.f[11]);
    st32((c.r[4].w[0] + 4u), c.f[4]);
    c.f[12] = fp::mul(c.f[1], c.f[12]);
    st32((c.r[4].w[0] + 20u), c.f[6]);
    c.f[13] = fp::mul(c.f[1], c.f[13]);
    st32((c.r[4].w[0] + 36u), c.f[10]);
    c.f[8] = fp::mul(c.f[1], c.f[8]);
    st32((c.r[4].w[0] + 52u), c.f[11]);
    c.f[1] = fp::mul(c.f[1], c.f[7]);
    st32((c.r[4].w[0] + 8u), c.f[12]);
    st32((c.r[4].w[0] + 24u), c.f[13]);
    st32((c.r[4].w[0] + 40u), c.f[8]);
    c.budget -= 27;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 56u), c.f[1]);  c.pc = t; return; }
L_00102EA8:
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[5].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[5].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    c.budget -= 4;
L_00102EB8:
    ld128((c.r[6].w[0]) & ~15u, c.vu0.vf[8]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[8].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[8].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[8].w[2]);
    vu::maddbc(c.vu0, 15u, 9u, 7u, c.vu0.vf[8].w[3]);
    vu::div(c.vu0, c.vu0.vf[0].w[3], c.vu0.vf[9].w[3]);
    vu::mulbc(c.vu0, 14u, 9u, 9u, c.vu0.q);
    c.budget -= 10;
    { const bool t = c.r[8].d[0] == 0ull; vu::ftoi(c.vu0, 15u, 10u, 9u, 4);  if (t) { goto L_00102EE4; } }
    vu::ftoi(c.vu0, 3u, 10u, 9u, 0);
    c.budget -= 1;
L_00102EE4:
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[10]);
    set32(c.r[7], c.r[7].w[0] - 1u);
    set32(c.r[6], c.r[6].w[0] + 16u);
    c.budget -= 5;
    { const bool t = 0ull != c.r[7].d[0]; set32(c.r[4], c.r[4].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00102EB8u | kUnwind; return; } goto L_00102EB8; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00102F00:
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[5].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[5].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[6].w[0]) & ~15u, c.vu0.vf[8]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[8].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[8].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[8].w[2]);
    vu::maddbc(c.vu0, 15u, 9u, 7u, c.vu0.vf[8].w[3]);
    vu::div(c.vu0, c.vu0.vf[0].w[3], c.vu0.vf[9].w[3]);
    vu::mulbc(c.vu0, 14u, 9u, 9u, c.vu0.q);
    c.budget -= 14;
    { const bool t = c.r[7].d[0] == 0ull; vu::ftoi(c.vu0, 15u, 10u, 9u, 4);  if (t) { goto L_00102F3C; } }
    vu::ftoi(c.vu0, 3u, 10u, 9u, 0);
    c.budget -= 1;
L_00102F3C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st128((c.r[4].w[0]) & ~15u, c.vu0.vf[10]);  c.pc = t; return; }
L_00102F48:
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[4].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[4].w[0] + 4u), c.f[1]);
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), c.f[0]);  c.pc = t; return; }
L_00102F68:
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[6].w[0]) & ~15u, c.vu0.vf[5]);
    set32(c.r[8], c.f[12]);
    c.vu0.vf[6] = c.r[8];
    vu::move(c.vu0, 1u, 9u, 4u);
    vu::addbc(c.vu0, 8u, 7u, 0u, c.vu0.vf[0].w[3]);
    vu::sub(c.vu0, 8u, 8u, 7u, 6u);
    vu::mulabc(c.vu0, 14u, 4u, c.vu0.vf[6].w[0]);
    vu::maddbc(c.vu0, 14u, 9u, 5u, c.vu0.vf[8].w[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; st128((c.r[4].w[0]) & ~15u, c.vu0.vf[9]);  c.pc = t; return; }
L_00102F98:
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[8], c.f[12]);
    c.vu0.vf[5] = c.r[8];
    vu::mulbc(c.vu0, 14u, 4u, 4u, c.vu0.vf[5].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);  c.pc = t; return; }
L_00102FB0:
    vu::sub(c.vu0, 15u, 4u, 0u, 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[2].d[0] = c.r[2].d[0] | 17792ull;
    c.r[2].d[0] = c.r[2].d[0] << 16;
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[7]);
    c.vu0.vf[6] = c.r[2];
    ctc2(c, 16u, 0u);
    vu::sub(c.vu0, 13u, 5u, 7u, 4u);
    vu::sub(c.vu0, 12u, 5u, 6u, 7u);
    set32(c.r[2], cfc2(c, 16u));
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] & 192ull;  c.pc = t; return; }
L_00102FF8:
    vu::sub(c.vu0, 15u, 4u, 0u, 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[2].d[0] = c.r[2].d[0] | 17792ull;
    c.r[2].d[0] = c.r[2].d[0] << 16;
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[6]);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[8]);
    ld128((c.r[6].w[0]) & ~15u, c.vu0.vf[9]);
    c.vu0.vf[7] = c.r[2];
    ctc2(c, 16u, 0u);
    vu::sub(c.vu0, 13u, 5u, 6u, 4u);
    vu::sub(c.vu0, 12u, 5u, 7u, 6u);
    vu::sub(c.vu0, 13u, 5u, 8u, 4u);
    vu::sub(c.vu0, 12u, 5u, 7u, 8u);
    vu::sub(c.vu0, 13u, 5u, 9u, 4u);
    vu::sub(c.vu0, 12u, 5u, 7u, 9u);
    set32(c.r[2], cfc2(c, 16u));
    c.budget -= 24;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] & 192ull;  c.pc = t; return; }
L_00103058:
    ld128((c.r[7].w[0]) & ~15u, c.vu0.vf[8]);
    ld128((c.r[6].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[6].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[6].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[6].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[9]);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[10]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[11]);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[12]);
    c.budget -= 9;
L_0010307C:
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[8].w[0]);
    c.budget -= 1;
L_00103080:
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[8].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[8].w[2]);
    vu::maddbc(c.vu0, 15u, 8u, 7u, c.vu0.vf[8].w[3]);
    vu::mulbc(c.vu0, 14u, 11u, 9u, c.vu0.vf[8].w[3]);
    vu::mulbc(c.vu0, 14u, 12u, 10u, c.vu0.vf[8].w[3]);
    ctc2(c, 16u, 0u);
    vu::sub(c.vu0, 13u, 11u, 8u, 11u);
    vu::sub(c.vu0, 13u, 12u, 12u, 8u);
    vu::move(c.vu0, 1u, 11u, 9u);
    vu::move(c.vu0, 1u, 12u, 10u);
    set32(c.r[7], c.r[7].w[0] + 16u);
    ld128((c.r[7].w[0]) & ~15u, c.vu0.vf[8]);
    set32(c.r[8], c.r[8].w[0] - 1u);
    c.budget -= 16;
L_001030C0:
    set32(c.r[2], cfc2(c, 16u));
    c.r[2].d[0] = c.r[2].d[0] & 192ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001030DC; } }
    c.budget -= 2;
    { const bool t = 0ull != c.r[8].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010307Cu | kUnwind; return; } goto L_0010307C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001030DC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001030E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 14384ull;
    c.r[4].d[0] = c.r[4].d[0] | 14368ull;
    st32((c.r[2].w[0]), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[4].w[0]), 0u);
    c.r[3].d[0] = c.r[3].d[0] | 14352ull;
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[8], cfc2(c, 28u));
    c.r[8].d[0] = c.r[8].d[0] | 2ull;
    ctc2(c, 28u, c.r[8].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[4], c.r[4].w[0] + 19840u);
    c.r[5].d[0] = c.r[5].d[0] | 16384ull;
    ld128((c.r[4].w[0]) & ~15u, c.r[2]);
    st128((c.r[5].w[0]) & ~15u, c.r[2]);
    ld128((c.r[4].w[0] + 16u) & ~15u, c.r[3]);
    c.budget -= 23;
    { const std::uint32_t t = c.r[31].w[0]; st128((c.r[5].w[0]) & ~15u, c.r[3]);  c.pc = t; return; }
L_00103148:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010315Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 450u, depth + 1u); else { c.pc = 0x0010BD40u; return; } if (c.pc != 0x0010315Cu) [[unlikely]] return; }
L_0010315C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[5].d[0] = c.r[5].d[0] | 62752ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[6].d[0] = c.r[6].d[0] | 62864ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[7].d[0];
    c.r[3].d[0] = c.r[3].d[0] | 45056ull;
    st32((c.r[6].w[0]), c.r[2].w[0]);
    c.r[4].d[0] = c.r[4].d[0] | 65535ull;
    st32((c.r[3].w[0]), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    st32((c.r[6].w[0]), c.r[2].w[0]);
    c.budget -= 20;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_0002(c, 452u, depth); }
L_001031B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001031C4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 450u, depth + 1u); else { c.pc = 0x0010BD40u; return; } if (c.pc != 0x001031C4u) [[unlikely]] return; }
L_001031C4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[5].d[0] = c.r[5].d[0] | 62752ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[6].d[0] = c.r[6].d[0] | 62864ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[7].d[0];
    c.r[3].d[0] = c.r[3].d[0] | 46080ull;
    st32((c.r[6].w[0]), c.r[2].w[0]);
    c.r[4].d[0] = c.r[4].d[0] | 65535ull;
    st32((c.r[3].w[0]), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    st32((c.r[6].w[0]), c.r[2].w[0]);
    c.budget -= 20;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_0002(c, 452u, depth); }
L_00103218:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00103230u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0000(c, 286u, depth + 1u); else { c.pc = 0x001031B0u; return; } if (c.pc != 0x00103230u) [[unlikely]] return; }
L_00103230:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 46096ull;
    c.r[6].d[0] = c.r[6].d[0] | 46128ull;
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].d[0] = c.r[4].d[0] | 46112ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[5].d[0] = c.r[5].d[0] | 46080ull;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.r[7].d[0] = c.r[7].d[0] | 8208ull;
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 18;
L_00103278:
    set32(c.r[2], ld32((c.r[7].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 240ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00103278u | kUnwind; return; } goto L_00103278; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010329Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 284u, depth + 1u); else { c.pc = 0x00103148u; return; } if (c.pc != 0x0010329Cu) [[unlikely]] return; }
L_0010329C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 45072ull;
    c.r[7].d[0] = c.r[7].d[0] | 45088ull;
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[5].d[0] = c.r[5].d[0] | 45056ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.r[6].d[0] = c.r[6].d[0] | 8224ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[3], ld32((c.r[7].w[0])));
    c.r[4].d[0] = c.r[4].d[0] | 8208ull;
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0])));
    st32((c.r[16].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 24;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00103300:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], c.r[2].w[0] >> 8);
    c.r[19].d[0] = c.r[2].d[0] & 127ull;
    set32(c.r[2], c.r[2].w[0] >> 16);
    c.r[3].d[0] = c.r[3].d[0] & 15ull;
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[18], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 21;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[17], c.r[5].w[0] - c.r[2].w[0]);  if (t) { goto L_00103384; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);  if (t) { goto L_00103384; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 45072ull;
    c.r[4].d[0] = c.r[4].d[0] | 45088ull;
    st32((c.r[2].w[0]), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00103384u); c.r[4].d[0] = c.r[4].d[0] | 256ull;  if (depth < kMaxDepth) unit_0000(c, 284u, depth + 1u); else { c.pc = 0x00103148u; return; } if (c.pc != 0x00103384u) [[unlikely]] return; }
L_00103384:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] | 8208ull;
    c.budget -= 3;
L_00103390:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00103390u | kUnwind; return; } goto L_00103390; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    c.r[3].d[0] = c.r[3].d[0] | 8208ull;
    st32((c.r[2].w[0]), c.r[19].w[0]);
    c.budget -= 5;
L_001033C0:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001033C0u | kUnwind; return; } goto L_001033C0; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_00103438; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0010343C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 46096ull;
    c.r[4].d[0] = c.r[4].d[0] | 46128ull;
    st32((c.r[2].w[0]), c.r[17].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] | 46112ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st32((c.r[3].w[0]), c.r[18].w[0]);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = c.r[4].d[0] | 256ull;
    c.budget -= 19;
    { set32(c.r[29], c.r[29].w[0] + 80u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001031B0u | kUnwind; return; } goto L_001031B0; }
L_00103438:
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0010343C:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00103450:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0010346C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0010349C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001034B0; } }
L_0010346C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] | 8208ull;
    c.budget -= 3;
L_00103478:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00103478u | kUnwind; return; } goto L_00103478; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_001034AC; } }
L_0010349C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 8208ull;
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[3].w[0] >> 31);
    c.budget -= 4;
L_001034AC:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_001034B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001034B8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001034CCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 450u, depth + 1u); else { c.pc = 0x0010BD40u; return; } if (c.pc != 0x001034CCu) [[unlikely]] return; }
L_001034CC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[5].d[0] = c.r[5].d[0] | 62752ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[6].d[0] = c.r[6].d[0] | 62864ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[7].d[0];
    c.r[3].d[0] = c.r[3].d[0] | 46080ull;
    st32((c.r[6].w[0]), c.r[2].w[0]);
    c.r[4].d[0] = c.r[4].d[0] | 65535ull;
    st32((c.r[3].w[0]), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    st32((c.r[6].w[0]), c.r[2].w[0]);
    c.budget -= 20;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_0002(c, 452u, depth); }
L_00103520:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00103530u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0000(c, 299u, depth + 1u); else { c.pc = 0x001034B8u; return; } if (c.pc != 0x00103530u) [[unlikely]] return; }
L_00103530:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[2].d[0] | 8208ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[4].d[0] = c.r[4].d[0] | 8208ull;
    c.budget -= 6;
L_00103548:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00103548u | kUnwind; return; } goto L_00103548; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    c.r[3].d[0] = c.r[3].d[0] | 8208ull;
    st32((c.r[2].w[0]), 0u);
    c.budget -= 5;
L_00103578:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00103578u | kUnwind; return; } goto L_00103578; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[5], c.r[5].w[0] + 19888u);
    c.r[4].d[0] = c.r[4].d[0] | 28688ull;
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x50000000u);
    c.r[6].d[0] = c.r[6].d[0] | 8192ull;
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[8].d[0] = c.r[8].d[0] | 8208ull;
    ld128((c.r[5].w[0] + 16u) & ~15u, c.r[3]);
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    ld128((c.r[5].w[0] + 32u) & ~15u, c.r[2]);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    ld128((c.r[5].w[0] + 48u) & ~15u, c.r[3]);
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    ld128((c.r[5].w[0] + 64u) & ~15u, c.r[2]);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    ld128((c.r[5].w[0] + 64u) & ~15u, c.r[3]);
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    ld128((c.r[5].w[0] + 64u) & ~15u, c.r[2]);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    ld128((c.r[5].w[0] + 64u) & ~15u, c.r[3]);
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    st32((c.r[6].w[0]), c.r[7].w[0]);
    c.budget -= 27;
L_00103600:
    set32(c.r[2], ld32((c.r[8].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00103600u | kUnwind; return; } goto L_00103600; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x58000000u);
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[4].d[0] = c.r[4].d[0] | 8208ull;
    c.budget -= 7;
L_00103638:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 1;
L_0010363C:
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00103638u | kUnwind; return; } goto L_00103638; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[3], c.r[3].w[0] + 19968u);
    c.r[4].d[0] = c.r[4].d[0] | 28688ull;
    ld128((c.r[3].w[0]) & ~15u, c.r[2]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x60000000u);
    c.r[5].d[0] = c.r[5].d[0] | 8192ull;
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[7].d[0] = c.r[7].d[0] | 8208ull;
    ld128((c.r[3].w[0] + 16u) & ~15u, c.r[2]);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    st32((c.r[5].w[0]), c.r[6].w[0]);
    c.budget -= 15;
L_00103690:
    set32(c.r[2], ld32((c.r[7].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00103690u | kUnwind; return; } goto L_00103690; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x90000000u);
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[4].d[0] = c.r[4].d[0] | 8208ull;
    c.budget -= 7;
L_001036C8:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001036C8u | kUnwind; return; } goto L_001036C8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[2].d[0] | 8208ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[4].d[0] = c.r[4].d[0] | 8208ull;
    c.budget -= 7;
L_00103700:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00103700u | kUnwind; return; } goto L_00103700; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    c.r[3].d[0] = c.r[3].d[0] | 8208ull;
    st32((c.r[2].w[0]), 0u);
    c.budget -= 5;
L_00103730:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00103730u | kUnwind; return; } goto L_00103730; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00103780:
    set32(c.r[3], 0u);
    c.budget -= 1;
    c.pc = 0x00103788u; syscall(c, 0x00103784u); if (c.pc != 0x00103788u) return;
    c.budget -= 1;
L_00103788:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103790:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
    c.pc = 0x00103798u; syscall(c, 0x00103794u); if (c.pc != 0x00103798u) return;
    c.budget -= 1;
L_00103798:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001037A0:
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
    c.pc = 0x001037A8u; syscall(c, 0x001037A4u); if (c.pc != 0x001037A8u) return;
    c.budget -= 1;
L_001037A8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001037B0:
    set32(c.r[3], 0u + 3u);
    c.budget -= 1;
    c.pc = 0x001037B8u; syscall(c, 0x001037B4u); if (c.pc != 0x001037B8u) return;
    c.budget -= 1;
L_001037B8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001037C0:
    set32(c.r[3], 0u + 4u);
    c.budget -= 1;
    c.pc = 0x001037C8u; syscall(c, 0x001037C4u); if (c.pc != 0x001037C8u) return;
    c.budget -= 1;
L_001037C8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001037D0:
    set32(c.r[3], 0u + 5u);
    c.budget -= 1;
    c.pc = 0x001037D8u; syscall(c, 0x001037D4u); if (c.pc != 0x001037D8u) return;
    c.budget -= 1;
L_001037D8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001037E0:
    set32(c.r[3], 0u + 6u);
    c.budget -= 1;
    c.pc = 0x001037E8u; syscall(c, 0x001037E4u); if (c.pc != 0x001037E8u) return;
    c.budget -= 1;
L_001037E8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001037F0:
    set32(c.r[3], 0u + 7u);
    c.budget -= 1;
    c.pc = 0x001037F8u; syscall(c, 0x001037F4u); if (c.pc != 0x001037F8u) return;
    c.budget -= 1;
L_001037F8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103800:
    set32(c.r[3], 0u + 8u);
    c.budget -= 1;
    c.pc = 0x00103808u; syscall(c, 0x00103804u); if (c.pc != 0x00103808u) return;
    c.budget -= 1;
L_00103808:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103810:
    set32(c.r[3], 0u + 9u);
    c.budget -= 1;
    c.pc = 0x00103818u; syscall(c, 0x00103814u); if (c.pc != 0x00103818u) return;
    c.budget -= 1;
L_00103818:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103820:
    set32(c.r[3], 0u + 10u);
    c.budget -= 1;
    c.pc = 0x00103828u; syscall(c, 0x00103824u); if (c.pc != 0x00103828u) return;
    c.budget -= 1;
L_00103828:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103830:
    set32(c.r[3], 0u + 11u);
    c.budget -= 1;
    c.pc = 0x00103838u; syscall(c, 0x00103834u); if (c.pc != 0x00103838u) return;
    c.budget -= 1;
L_00103838:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103840:
    set32(c.r[3], 0u + 12u);
    c.budget -= 1;
    c.pc = 0x00103848u; syscall(c, 0x00103844u); if (c.pc != 0x00103848u) return;
    c.budget -= 1;
L_00103848:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103850:
    set32(c.r[3], 0u + 13u);
    c.budget -= 1;
    c.pc = 0x00103858u; syscall(c, 0x00103854u); if (c.pc != 0x00103858u) return;
    c.budget -= 1;
L_00103858:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103860:
    set32(c.r[3], 0u + 14u);
    c.budget -= 1;
    c.pc = 0x00103868u; syscall(c, 0x00103864u); if (c.pc != 0x00103868u) return;
    c.budget -= 1;
L_00103868:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103870:
    set32(c.r[3], 0u + 15u);
    c.budget -= 1;
    c.pc = 0x00103878u; syscall(c, 0x00103874u); if (c.pc != 0x00103878u) return;
    c.budget -= 1;
L_00103878:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103880:
    set32(c.r[3], 0u + 16u);
    c.budget -= 1;
    c.pc = 0x00103888u; syscall(c, 0x00103884u); if (c.pc != 0x00103888u) return;
    c.budget -= 1;
L_00103888:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103890:
    set32(c.r[3], 0u + 16u);
    c.budget -= 1;
    c.pc = 0x00103898u; syscall(c, 0x00103894u); if (c.pc != 0x00103898u) return;
    c.budget -= 1;
L_00103898:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001038A0:
    set32(c.r[3], 0u + 17u);
    c.budget -= 1;
    c.pc = 0x001038A8u; syscall(c, 0x001038A4u); if (c.pc != 0x001038A8u) return;
    c.budget -= 1;
L_001038A8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001038B0:
    set32(c.r[3], 0u + 18u);
    c.budget -= 1;
    c.pc = 0x001038B8u; syscall(c, 0x001038B4u); if (c.pc != 0x001038B8u) return;
    c.budget -= 1;
L_001038B8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001038C0:
    set32(c.r[3], 0u + 18u);
    c.budget -= 1;
    c.pc = 0x001038C8u; syscall(c, 0x001038C4u); if (c.pc != 0x001038C8u) return;
    c.budget -= 1;
L_001038C8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001038D0:
    set32(c.r[3], 0u + 19u);
    c.budget -= 1;
    c.pc = 0x001038D8u; syscall(c, 0x001038D4u); if (c.pc != 0x001038D8u) return;
    c.budget -= 1;
L_001038D8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001038E0:
    set32(c.r[3], 0u + 20u);
    c.budget -= 1;
    c.pc = 0x001038E8u; syscall(c, 0x001038E4u); if (c.pc != 0x001038E8u) return;
    c.budget -= 1;
L_001038E8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001038F0:
    set32(c.r[3], 0u + 21u);
    c.budget -= 1;
    c.pc = 0x001038F8u; syscall(c, 0x001038F4u); if (c.pc != 0x001038F8u) return;
    c.budget -= 1;
L_001038F8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103900:
    set32(c.r[3], 0u + 22u);
    c.budget -= 1;
    c.pc = 0x00103908u; syscall(c, 0x00103904u); if (c.pc != 0x00103908u) return;
    c.budget -= 1;
L_00103908:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103910:
    set32(c.r[3], 0u + 23u);
    c.budget -= 1;
    c.pc = 0x00103918u; syscall(c, 0x00103914u); if (c.pc != 0x00103918u) return;
    c.budget -= 1;
L_00103918:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103920:
    set32(c.r[3], 0u + 252u);
    c.budget -= 1;
    c.pc = 0x00103928u; syscall(c, 0x00103924u); if (c.pc != 0x00103928u) return;
    c.budget -= 1;
L_00103928:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103930:
    set32(c.r[3], 0u + 253u);
    c.budget -= 1;
    c.pc = 0x00103938u; syscall(c, 0x00103934u); if (c.pc != 0x00103938u) return;
    c.budget -= 1;
L_00103938:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103940:
    set32(c.r[3], 0u - 26u);
    c.budget -= 1;
    c.pc = 0x00103948u; syscall(c, 0x00103944u); if (c.pc != 0x00103948u) return;
    c.budget -= 1;
L_00103948:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103950:
    set32(c.r[3], 0u - 27u);
    c.budget -= 1;
    c.pc = 0x00103958u; syscall(c, 0x00103954u); if (c.pc != 0x00103958u) return;
    c.budget -= 1;
L_00103958:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103960:
    set32(c.r[3], 0u - 28u);
    c.budget -= 1;
    c.pc = 0x00103968u; syscall(c, 0x00103964u); if (c.pc != 0x00103968u) return;
    c.budget -= 1;
L_00103968:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103970:
    set32(c.r[3], 0u - 29u);
    c.budget -= 1;
    c.pc = 0x00103978u; syscall(c, 0x00103974u); if (c.pc != 0x00103978u) return;
    c.budget -= 1;
L_00103978:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103980:
    set32(c.r[3], 0u - 254u);
    c.budget -= 1;
    c.pc = 0x00103988u; syscall(c, 0x00103984u); if (c.pc != 0x00103988u) return;
    c.budget -= 1;
L_00103988:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103990:
    set32(c.r[3], 0u - 255u);
    c.budget -= 1;
    c.pc = 0x00103998u; syscall(c, 0x00103994u); if (c.pc != 0x00103998u) return;
    c.budget -= 1;
L_00103998:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001039A0:
    set32(c.r[3], 0u + 32u);
    c.budget -= 1;
    c.pc = 0x001039A8u; syscall(c, 0x001039A4u); if (c.pc != 0x001039A8u) return;
    c.budget -= 1;
L_001039A8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001039B0:
    set32(c.r[3], 0u + 33u);
    c.budget -= 1;
    c.pc = 0x001039B8u; syscall(c, 0x001039B4u); if (c.pc != 0x001039B8u) return;
    c.budget -= 1;
L_001039B8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001039C0:
    set32(c.r[3], 0u + 34u);
    c.budget -= 1;
    c.pc = 0x001039C8u; syscall(c, 0x001039C4u); if (c.pc != 0x001039C8u) return;
    c.budget -= 1;
L_001039C8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001039D0:
    set32(c.r[3], 0u + 35u);
    c.budget -= 1;
    c.pc = 0x001039D8u; syscall(c, 0x001039D4u); if (c.pc != 0x001039D8u) return;
    c.budget -= 1;
L_001039D8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001039E0:
    set32(c.r[3], 0u + 36u);
    c.budget -= 1;
    c.pc = 0x001039E8u; syscall(c, 0x001039E4u); if (c.pc != 0x001039E8u) return;
    c.budget -= 1;
L_001039E8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001039F0:
    set32(c.r[3], 0u + 37u);
    c.budget -= 1;
    c.pc = 0x001039F8u; syscall(c, 0x001039F4u); if (c.pc != 0x001039F8u) return;
    c.budget -= 1;
L_001039F8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103A00:
    set32(c.r[3], 0u - 38u);
    c.budget -= 1;
    c.pc = 0x00103A08u; syscall(c, 0x00103A04u); if (c.pc != 0x00103A08u) return;
    c.budget -= 1;
L_00103A08:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103A10:
    set32(c.r[3], 0u + 39u);
    c.budget -= 1;
    c.pc = 0x00103A18u; syscall(c, 0x00103A14u); if (c.pc != 0x00103A18u) return;
    c.budget -= 1;
L_00103A18:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103A20:
    set32(c.r[3], 0u + 40u);
    c.budget -= 1;
    c.pc = 0x00103A28u; syscall(c, 0x00103A24u); if (c.pc != 0x00103A28u) return;
    c.budget -= 1;
L_00103A28:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103A30:
    set32(c.r[3], 0u + 41u);
    c.budget -= 1;
    c.pc = 0x00103A38u; syscall(c, 0x00103A34u); if (c.pc != 0x00103A38u) return;
    c.budget -= 1;
L_00103A38:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103A40:
    set32(c.r[3], 0u - 42u);
    c.budget -= 1;
    c.pc = 0x00103A48u; syscall(c, 0x00103A44u); if (c.pc != 0x00103A48u) return;
    c.budget -= 1;
L_00103A48:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103A50:
    set32(c.r[3], 0u + 43u);
    c.budget -= 1;
    c.pc = 0x00103A58u; syscall(c, 0x00103A54u); if (c.pc != 0x00103A58u) return;
    c.budget -= 1;
L_00103A58:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103A60:
    set32(c.r[3], 0u - 44u);
    c.budget -= 1;
    c.pc = 0x00103A68u; syscall(c, 0x00103A64u); if (c.pc != 0x00103A68u) return;
    c.budget -= 1;
L_00103A68:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103A70:
    set32(c.r[3], 0u + 45u);
    c.budget -= 1;
    c.pc = 0x00103A78u; syscall(c, 0x00103A74u); if (c.pc != 0x00103A78u) return;
    c.budget -= 1;
L_00103A78:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103A80:
    set32(c.r[3], 0u - 46u);
    c.budget -= 1;
    c.pc = 0x00103A88u; syscall(c, 0x00103A84u); if (c.pc != 0x00103A88u) return;
    c.budget -= 1;
L_00103A88:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103A90:
    set32(c.r[3], 0u + 47u);
    c.budget -= 1;
    c.pc = 0x00103A98u; syscall(c, 0x00103A94u); if (c.pc != 0x00103A98u) return;
    c.budget -= 1;
L_00103A98:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103AA0:
    set32(c.r[3], 0u + 48u);
    c.budget -= 1;
    c.pc = 0x00103AA8u; syscall(c, 0x00103AA4u); if (c.pc != 0x00103AA8u) return;
    c.budget -= 1;
L_00103AA8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103AB0:
    set32(c.r[3], 0u - 49u);
    c.budget -= 1;
    c.pc = 0x00103AB8u; syscall(c, 0x00103AB4u); if (c.pc != 0x00103AB8u) return;
    c.budget -= 1;
L_00103AB8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103AC0:
    set32(c.r[3], 0u + 50u);
    c.budget -= 1;
    c.pc = 0x00103AC8u; syscall(c, 0x00103AC4u); if (c.pc != 0x00103AC8u) return;
    c.budget -= 1;
L_00103AC8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103AD0:
    set32(c.r[3], 0u + 51u);
    c.budget -= 1;
    c.pc = 0x00103AD8u; syscall(c, 0x00103AD4u); if (c.pc != 0x00103AD8u) return;
    c.budget -= 1;
L_00103AD8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103AE0:
    set32(c.r[3], 0u - 52u);
    c.budget -= 1;
    c.pc = 0x00103AE8u; syscall(c, 0x00103AE4u); if (c.pc != 0x00103AE8u) return;
    c.budget -= 1;
L_00103AE8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103AF0:
    set32(c.r[3], 0u + 53u);
    c.budget -= 1;
    c.pc = 0x00103AF8u; syscall(c, 0x00103AF4u); if (c.pc != 0x00103AF8u) return;
    c.budget -= 1;
L_00103AF8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103B00:
    set32(c.r[3], 0u - 54u);
    c.budget -= 1;
    c.pc = 0x00103B08u; syscall(c, 0x00103B04u); if (c.pc != 0x00103B08u) return;
    c.budget -= 1;
L_00103B08:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103B10:
    set32(c.r[3], 0u + 55u);
    c.budget -= 1;
    c.pc = 0x00103B18u; syscall(c, 0x00103B14u); if (c.pc != 0x00103B18u) return;
    c.budget -= 1;
L_00103B18:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103B20:
    set32(c.r[3], 0u - 56u);
    c.budget -= 1;
    c.pc = 0x00103B28u; syscall(c, 0x00103B24u); if (c.pc != 0x00103B28u) return;
    c.budget -= 1;
L_00103B28:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103B30:
    set32(c.r[3], 0u + 57u);
    c.budget -= 1;
    c.pc = 0x00103B38u; syscall(c, 0x00103B34u); if (c.pc != 0x00103B38u) return;
    c.budget -= 1;
L_00103B38:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103B40:
    set32(c.r[3], 0u - 58u);
    c.budget -= 1;
    c.pc = 0x00103B48u; syscall(c, 0x00103B44u); if (c.pc != 0x00103B48u) return;
    c.budget -= 1;
L_00103B48:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103B50:
    set32(c.r[3], 0u + 59u);
    c.budget -= 1;
    c.pc = 0x00103B58u; syscall(c, 0x00103B54u); if (c.pc != 0x00103B58u) return;
    c.budget -= 1;
L_00103B58:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103B60:
    set32(c.r[3], 0u + 60u);
    c.budget -= 1;
    c.pc = 0x00103B68u; syscall(c, 0x00103B64u); if (c.pc != 0x00103B68u) return;
    c.budget -= 1;
L_00103B68:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103B70:
    set32(c.r[3], 0u + 61u);
    c.budget -= 1;
    c.pc = 0x00103B78u; syscall(c, 0x00103B74u); if (c.pc != 0x00103B78u) return;
    c.budget -= 1;
L_00103B78:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103B80:
    set32(c.r[3], 0u + 62u);
    c.budget -= 1;
    c.pc = 0x00103B88u; syscall(c, 0x00103B84u); if (c.pc != 0x00103B88u) return;
    c.budget -= 1;
L_00103B88:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103B90:
    set32(c.r[3], 0u + 63u);
    c.budget -= 1;
    c.pc = 0x00103B98u; syscall(c, 0x00103B94u); if (c.pc != 0x00103B98u) return;
    c.budget -= 1;
L_00103B98:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103BA0:
    set32(c.r[3], 0u + 64u);
    c.budget -= 1;
    c.pc = 0x00103BA8u; syscall(c, 0x00103BA4u); if (c.pc != 0x00103BA8u) return;
    c.budget -= 1;
L_00103BA8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103BB0:
    set32(c.r[3], 0u + 65u);
    c.budget -= 1;
    c.pc = 0x00103BB8u; syscall(c, 0x00103BB4u); if (c.pc != 0x00103BB8u) return;
    c.budget -= 1;
L_00103BB8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103BC0:
    set32(c.r[3], 0u + 66u);
    c.budget -= 1;
    c.pc = 0x00103BC8u; syscall(c, 0x00103BC4u); if (c.pc != 0x00103BC8u) return;
    c.budget -= 1;
L_00103BC8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103BD0:
    set32(c.r[3], 0u - 67u);
    c.budget -= 1;
    c.pc = 0x00103BD8u; syscall(c, 0x00103BD4u); if (c.pc != 0x00103BD8u) return;
    c.budget -= 1;
L_00103BD8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103BE0:
    set32(c.r[3], 0u + 68u);
    c.budget -= 1;
    c.pc = 0x00103BE8u; syscall(c, 0x00103BE4u); if (c.pc != 0x00103BE8u) return;
    c.budget -= 1;
L_00103BE8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103BF0:
    set32(c.r[3], 0u + 69u);
    c.budget -= 1;
    c.pc = 0x00103BF8u; syscall(c, 0x00103BF4u); if (c.pc != 0x00103BF8u) return;
    c.budget -= 1;
L_00103BF8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103C00:
    set32(c.r[3], 0u - 70u);
    c.budget -= 1;
    c.pc = 0x00103C08u; syscall(c, 0x00103C04u); if (c.pc != 0x00103C08u) return;
    c.budget -= 1;
L_00103C08:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103C10:
    set32(c.r[3], 0u + 71u);
    c.budget -= 1;
    c.pc = 0x00103C18u; syscall(c, 0x00103C14u); if (c.pc != 0x00103C18u) return;
    c.budget -= 1;
L_00103C18:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103C20:
    set32(c.r[3], 0u - 72u);
    c.budget -= 1;
    c.pc = 0x00103C28u; syscall(c, 0x00103C24u); if (c.pc != 0x00103C28u) return;
    c.budget -= 1;
L_00103C28:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103C30:
    set32(c.r[3], 0u + 73u);
    c.budget -= 1;
    c.pc = 0x00103C38u; syscall(c, 0x00103C34u); if (c.pc != 0x00103C38u) return;
    c.budget -= 1;
L_00103C38:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103C3C:
    c.budget -= 1;
L_00103C40:
    set32(c.r[3], 0u + 74u);
    c.budget -= 1;
    c.pc = 0x00103C48u; syscall(c, 0x00103C44u); if (c.pc != 0x00103C48u) return;
    c.budget -= 1;
L_00103C48:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103C50:
    set32(c.r[3], 0u + 75u);
    c.budget -= 1;
    c.pc = 0x00103C58u; syscall(c, 0x00103C54u); if (c.pc != 0x00103C58u) return;
    c.budget -= 1;
L_00103C58:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103C60:
    set32(c.r[3], 0u + 76u);
    c.budget -= 1;
    c.pc = 0x00103C68u; syscall(c, 0x00103C64u); if (c.pc != 0x00103C68u) return;
    c.budget -= 1;
L_00103C68:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103C70:
    set32(c.r[3], 0u + 77u);
    c.budget -= 1;
    c.pc = 0x00103C78u; syscall(c, 0x00103C74u); if (c.pc != 0x00103C78u) return;
    c.budget -= 1;
L_00103C78:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103C80:
    set32(c.r[3], 0u + 78u);
    c.budget -= 1;
    c.pc = 0x00103C88u; syscall(c, 0x00103C84u); if (c.pc != 0x00103C88u) return;
    c.budget -= 1;
L_00103C88:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103C90:
    set32(c.r[3], 0u + 79u);
    c.budget -= 1;
    c.pc = 0x00103C98u; syscall(c, 0x00103C94u); if (c.pc != 0x00103C98u) return;
    c.budget -= 1;
L_00103C98:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103CA0:
    set32(c.r[3], 0u + 80u);
    c.budget -= 1;
    c.pc = 0x00103CA8u; syscall(c, 0x00103CA4u); if (c.pc != 0x00103CA8u) return;
    c.budget -= 1;
L_00103CA8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103CB0:
    set32(c.r[3], 0u + 81u);
    c.budget -= 1;
    c.pc = 0x00103CB8u; syscall(c, 0x00103CB4u); if (c.pc != 0x00103CB8u) return;
    c.budget -= 1;
L_00103CB8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103CC0:
    set32(c.r[3], 0u + 82u);
    c.budget -= 1;
    c.pc = 0x00103CC8u; syscall(c, 0x00103CC4u); if (c.pc != 0x00103CC8u) return;
    c.budget -= 1;
L_00103CC8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103CD0:
    set32(c.r[3], 0u - 83u);
    c.budget -= 1;
    c.pc = 0x00103CD8u; syscall(c, 0x00103CD4u); if (c.pc != 0x00103CD8u) return;
    c.budget -= 1;
L_00103CD8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103CE0:
    set32(c.r[3], 0u + 84u);
    c.budget -= 1;
    c.pc = 0x00103CE8u; syscall(c, 0x00103CE4u); if (c.pc != 0x00103CE8u) return;
    c.budget -= 1;
L_00103CE8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103CF0:
    set32(c.r[3], 0u - 85u);
    c.budget -= 1;
    c.pc = 0x00103CF8u; syscall(c, 0x00103CF4u); if (c.pc != 0x00103CF8u) return;
    c.budget -= 1;
L_00103CF8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103D00:
    set32(c.r[3], 0u + 86u);
    c.budget -= 1;
    c.pc = 0x00103D08u; syscall(c, 0x00103D04u); if (c.pc != 0x00103D08u) return;
    c.budget -= 1;
L_00103D08:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103D10:
    set32(c.r[3], 0u + 87u);
    c.budget -= 1;
    c.pc = 0x00103D18u; syscall(c, 0x00103D14u); if (c.pc != 0x00103D18u) return;
    c.budget -= 1;
L_00103D18:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103D20:
    set32(c.r[3], 0u - 88u);
    c.budget -= 1;
    c.pc = 0x00103D28u; syscall(c, 0x00103D24u); if (c.pc != 0x00103D28u) return;
    c.budget -= 1;
L_00103D28:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103D30:
    set32(c.r[3], 0u + 89u);
    c.budget -= 1;
    c.pc = 0x00103D38u; syscall(c, 0x00103D34u); if (c.pc != 0x00103D38u) return;
    c.budget -= 1;
L_00103D38:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103D40:
    set32(c.r[3], 0u - 90u);
    c.budget -= 1;
    c.pc = 0x00103D48u; syscall(c, 0x00103D44u); if (c.pc != 0x00103D48u) return;
    c.budget -= 1;
L_00103D48:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103D50:
    set32(c.r[3], 0u + 91u);
    c.budget -= 1;
    c.pc = 0x00103D58u; syscall(c, 0x00103D54u); if (c.pc != 0x00103D58u) return;
    c.budget -= 1;
L_00103D58:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103D60:
    set32(c.r[3], 0u + 92u);
    c.budget -= 1;
    c.pc = 0x00103D68u; syscall(c, 0x00103D64u); if (c.pc != 0x00103D68u) return;
    c.budget -= 1;
L_00103D68:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103D70:
    set32(c.r[3], 0u - 92u);
    c.budget -= 1;
    c.pc = 0x00103D78u; syscall(c, 0x00103D74u); if (c.pc != 0x00103D78u) return;
    c.budget -= 1;
L_00103D78:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103D80:
    set32(c.r[3], 0u + 93u);
    c.budget -= 1;
    c.pc = 0x00103D88u; syscall(c, 0x00103D84u); if (c.pc != 0x00103D88u) return;
    c.budget -= 1;
L_00103D88:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103D90:
    set32(c.r[3], 0u - 93u);
    c.budget -= 1;
    c.pc = 0x00103D98u; syscall(c, 0x00103D94u); if (c.pc != 0x00103D98u) return;
    c.budget -= 1;
L_00103D98:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103DA0:
    set32(c.r[3], 0u + 94u);
    c.budget -= 1;
    c.pc = 0x00103DA8u; syscall(c, 0x00103DA4u); if (c.pc != 0x00103DA8u) return;
    c.budget -= 1;
L_00103DA8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103DB0:
    set32(c.r[3], 0u - 94u);
    c.budget -= 1;
    c.pc = 0x00103DB8u; syscall(c, 0x00103DB4u); if (c.pc != 0x00103DB8u) return;
    c.budget -= 1;
L_00103DB8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103DC0:
    set32(c.r[3], 0u + 95u);
    c.budget -= 1;
    c.pc = 0x00103DC8u; syscall(c, 0x00103DC4u); if (c.pc != 0x00103DC8u) return;
    c.budget -= 1;
L_00103DC8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103DD0:
    set32(c.r[3], 0u - 95u);
    c.budget -= 1;
    c.pc = 0x00103DD8u; syscall(c, 0x00103DD4u); if (c.pc != 0x00103DD8u) return;
    c.budget -= 1;
L_00103DD8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103DE0:
    set32(c.r[3], 0u + 96u);
    c.budget -= 1;
    c.pc = 0x00103DE8u; syscall(c, 0x00103DE4u); if (c.pc != 0x00103DE8u) return;
    c.budget -= 1;
L_00103DE8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103DF0:
    set32(c.r[3], 0u + 97u);
    c.budget -= 1;
    c.pc = 0x00103DF8u; syscall(c, 0x00103DF4u); if (c.pc != 0x00103DF8u) return;
    c.budget -= 1;
L_00103DF8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103E00:
    set32(c.r[3], 0u + 98u);
    c.budget -= 1;
    c.pc = 0x00103E08u; syscall(c, 0x00103E04u); if (c.pc != 0x00103E08u) return;
    c.budget -= 1;
L_00103E08:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103E10:
    set32(c.r[3], 0u + 99u);
    c.budget -= 1;
    c.pc = 0x00103E18u; syscall(c, 0x00103E14u); if (c.pc != 0x00103E18u) return;
    c.budget -= 1;
L_00103E18:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103E20:
    set32(c.r[3], 0u + 100u);
    c.budget -= 1;
    c.pc = 0x00103E28u; syscall(c, 0x00103E24u); if (c.pc != 0x00103E28u) return;
    c.budget -= 1;
L_00103E28:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103E30:
    set32(c.r[3], 0u + 102u);
    c.budget -= 1;
    c.pc = 0x00103E38u; syscall(c, 0x00103E34u); if (c.pc != 0x00103E38u) return;
    c.budget -= 1;
L_00103E38:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103E40:
    set32(c.r[3], 0u - 103u);
    c.budget -= 1;
    c.pc = 0x00103E48u; syscall(c, 0x00103E44u); if (c.pc != 0x00103E48u) return;
    c.budget -= 1;
L_00103E48:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103E50:
    set32(c.r[3], 0u - 104u);
    c.budget -= 1;
    c.pc = 0x00103E58u; syscall(c, 0x00103E54u); if (c.pc != 0x00103E58u) return;
    c.budget -= 1;
L_00103E58:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103E60:
    set32(c.r[3], 0u - 106u);
    c.budget -= 1;
    c.pc = 0x00103E68u; syscall(c, 0x00103E64u); if (c.pc != 0x00103E68u) return;
    c.budget -= 1;
L_00103E68:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103E70:
    set32(c.r[3], 0u + 107u);
    c.budget -= 1;
    c.pc = 0x00103E78u; syscall(c, 0x00103E74u); if (c.pc != 0x00103E78u) return;
    c.budget -= 1;
L_00103E78:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103E80:
    set32(c.r[3], 0u + 108u);
    c.budget -= 1;
    c.pc = 0x00103E88u; syscall(c, 0x00103E84u); if (c.pc != 0x00103E88u) return;
    c.budget -= 1;
L_00103E88:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103E90:
    set32(c.r[3], 0u + 109u);
    c.budget -= 1;
    c.pc = 0x00103E98u; syscall(c, 0x00103E94u); if (c.pc != 0x00103E98u) return;
    c.budget -= 1;
L_00103E98:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103EA0:
    set32(c.r[3], 0u + 110u);
    c.budget -= 1;
    c.pc = 0x00103EA8u; syscall(c, 0x00103EA4u); if (c.pc != 0x00103EA8u) return;
    c.budget -= 1;
L_00103EA8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103EB0:
    set32(c.r[3], 0u + 111u);
    c.budget -= 1;
    c.pc = 0x00103EB8u; syscall(c, 0x00103EB4u); if (c.pc != 0x00103EB8u) return;
    c.budget -= 1;
L_00103EB8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103EC0:
    set32(c.r[3], 0u + 112u);
    c.budget -= 1;
    c.pc = 0x00103EC8u; syscall(c, 0x00103EC4u); if (c.pc != 0x00103EC8u) return;
    c.budget -= 1;
L_00103EC8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103ED0:
    set32(c.r[3], 0u - 112u);
    c.budget -= 1;
    c.pc = 0x00103ED8u; syscall(c, 0x00103ED4u); if (c.pc != 0x00103ED8u) return;
    c.budget -= 1;
L_00103ED8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103EE0:
    set32(c.r[3], 0u + 113u);
    c.budget -= 1;
    c.pc = 0x00103EE8u; syscall(c, 0x00103EE4u); if (c.pc != 0x00103EE8u) return;
    c.budget -= 1;
L_00103EE8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103EF0:
    set32(c.r[3], 0u - 113u);
    c.budget -= 1;
    c.pc = 0x00103EF8u; syscall(c, 0x00103EF4u); if (c.pc != 0x00103EF8u) return;
    c.budget -= 1;
L_00103EF8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103F00:
    set32(c.r[3], 0u + 114u);
    c.budget -= 1;
    c.pc = 0x00103F08u; syscall(c, 0x00103F04u); if (c.pc != 0x00103F08u) return;
    c.budget -= 1;
L_00103F08:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103F10:
    set32(c.r[3], 0u + 115u);
    c.budget -= 1;
    c.pc = 0x00103F18u; syscall(c, 0x00103F14u); if (c.pc != 0x00103F18u) return;
    c.budget -= 1;
L_00103F18:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103F20:
    set32(c.r[3], 0u + 116u);
    c.budget -= 1;
    c.pc = 0x00103F28u; syscall(c, 0x00103F24u); if (c.pc != 0x00103F28u) return;
    c.budget -= 1;
L_00103F28:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103F30:
    set32(c.r[3], 0u + 117u);
    c.budget -= 1;
    c.pc = 0x00103F38u; syscall(c, 0x00103F34u); if (c.pc != 0x00103F38u) return;
    c.budget -= 1;
L_00103F38:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103F40:
    set32(c.r[3], 0u + 118u);
    c.budget -= 1;
    c.pc = 0x00103F48u; syscall(c, 0x00103F44u); if (c.pc != 0x00103F48u) return;
    c.budget -= 1;
L_00103F48:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103F50:
    set32(c.r[3], 0u - 118u);
    c.budget -= 1;
    c.pc = 0x00103F58u; syscall(c, 0x00103F54u); if (c.pc != 0x00103F58u) return;
    c.budget -= 1;
L_00103F58:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103F60:
    set32(c.r[3], 0u + 119u);
    c.budget -= 1;
    c.pc = 0x00103F68u; syscall(c, 0x00103F64u); if (c.pc != 0x00103F68u) return;
    c.budget -= 1;
L_00103F68:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103F70:
    set32(c.r[3], 0u - 119u);
    c.budget -= 1;
    c.pc = 0x00103F78u; syscall(c, 0x00103F74u); if (c.pc != 0x00103F78u) return;
    c.budget -= 1;
L_00103F78:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103F80:
    set32(c.r[3], 0u + 120u);
    c.budget -= 1;
    c.pc = 0x00103F88u; syscall(c, 0x00103F84u); if (c.pc != 0x00103F88u) return;
    c.budget -= 1;
L_00103F88:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103F90:
    set32(c.r[3], 0u - 120u);
    c.budget -= 1;
    c.pc = 0x00103F98u; syscall(c, 0x00103F94u); if (c.pc != 0x00103F98u) return;
    c.budget -= 1;
L_00103F98:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103FA0:
    set32(c.r[3], 0u + 121u);
    c.budget -= 1;
    c.pc = 0x00103FA8u; syscall(c, 0x00103FA4u); if (c.pc != 0x00103FA8u) return;
    c.budget -= 1;
L_00103FA8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103FB0:
    set32(c.r[3], 0u + 122u);
    c.budget -= 1;
    c.pc = 0x00103FB8u; syscall(c, 0x00103FB4u); if (c.pc != 0x00103FB8u) return;
    c.budget -= 1;
L_00103FB8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103FC0:
    set32(c.r[3], 0u + 123u);
    c.budget -= 1;
    c.pc = 0x00103FC8u; syscall(c, 0x00103FC4u); if (c.pc != 0x00103FC8u) return;
    c.budget -= 1;
L_00103FC8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103FD0:
    set32(c.r[3], 0u + 124u);
    c.budget -= 1;
    c.pc = 0x00103FD8u; syscall(c, 0x00103FD4u); if (c.pc != 0x00103FD8u) return;
    c.budget -= 1;
L_00103FD8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103FE0:
    set32(c.r[3], 0u + 125u);
    c.budget -= 1;
    c.pc = 0x00103FE8u; syscall(c, 0x00103FE4u); if (c.pc != 0x00103FE8u) return;
    c.budget -= 1;
L_00103FE8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00103FF0:
    set32(c.r[3], 0u + 126u);
    c.budget -= 1;
    c.pc = 0x00103FF8u; syscall(c, 0x00103FF4u); if (c.pc != 0x00103FF8u) return;
    c.budget -= 1;
L_00103FF8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
}

}
