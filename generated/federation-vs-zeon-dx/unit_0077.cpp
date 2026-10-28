#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0077[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 5, 0,
    0, 0, 6, 0, 7, 0, 0, 0, 0, 8, 0, 0, 9, 0, 0, 10, 0, 11, 0, 0, 0, 12, 0, 13, 0, 0, 14, 0, 0, 0, 0, 0,
    0, 0, 0, 15, 0, 0, 16, 0, 0, 17, 0, 0, 0, 18, 0, 0, 19, 0, 0, 20, 0, 0, 0, 0, 21, 0, 0, 0, 0, 22, 0, 0,
    0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 25, 0,
    26, 0, 0, 0, 27, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 32, 0, 0, 0, 33, 0,
    34, 0, 0, 35, 0, 0, 0, 0, 36, 0, 0, 37, 0, 0, 38, 0, 0, 0, 0, 39, 0, 0, 40, 0, 41, 0, 0, 42, 0, 43, 0, 0,
    0, 44, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47,
    0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 50, 0, 0, 51, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 53, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 57, 0, 58, 0, 0, 59, 0, 60, 0, 0, 0, 61, 0, 62, 0, 0,
    63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    65, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0,
    0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 70, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 72, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 76, 0, 0, 77, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 80, 0, 0, 81, 0, 0, 0, 0, 0, 82, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0,
    86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 90, 0, 0, 0, 0, 91, 0, 0, 0, 92, 0, 93, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0,
    0, 0, 96, 0, 97, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 108, 0, 0, 0, 0, 109, 0, 0, 110, 0, 0, 111, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0,
    0, 0, 115, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 118, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 121, 0, 122, 0, 0, 123, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 127, 0, 0, 128, 0, 0, 0,
    129, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 131, 0, 0, 132, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 141, 0, 0, 142, 0, 0, 0, 143, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 147, 0, 0, 0, 148, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 0,
    0, 0, 151, 0, 0, 152, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 156, 0, 157, 0, 158, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 163, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 169, 0, 170, 0, 0, 171,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 173, 0, 174, 0, 0, 175, 0, 176, 0, 0, 177, 0, 178, 0, 0, 179, 0, 180,
    0, 0, 181, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 194, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 205, 0, 0, 206, 0, 0, 207, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 212, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 216, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218,
    0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 221, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 224, 0, 0, 0, 225, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    227, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0,
    237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 241, 0, 0, 242, 0,
    0, 0, 0, 243, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    248, 0, 0, 0, 249, 0, 0, 250, 0, 0, 251, 0, 0, 0, 0, 252, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    257, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0,
    0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 267,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 273, 0, 0, 0, 0, 0, 274, 0, 0, 0,
    0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 278, 0, 0, 279, 0, 280, 0,
    0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284,
    0, 0, 285, 0, 0, 0, 0, 286, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 290, 0, 291, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 293, 0, 0, 294, 0, 295, 0, 0, 0, 0, 0, 296, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0,
    0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0,
    304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0,
    0, 0, 0, 321, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 335, 0, 0, 336, 0, 0, 337, 0, 338, 0, 0, 0, 0, 0, 0, 339,
};

void unit_0077(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002DC000;
    case 2u: goto L_002DC044;
    case 3u: goto L_002DC160;
    case 4u: goto L_002DC170;
    case 5u: goto L_002DC178;
    case 6u: goto L_002DC188;
    case 7u: goto L_002DC190;
    case 8u: goto L_002DC1A4;
    case 9u: goto L_002DC1B0;
    case 10u: goto L_002DC1BC;
    case 11u: goto L_002DC1C4;
    case 12u: goto L_002DC1D4;
    case 13u: goto L_002DC1DC;
    case 14u: goto L_002DC1E8;
    case 15u: goto L_002DC20C;
    case 16u: goto L_002DC218;
    case 17u: goto L_002DC224;
    case 18u: goto L_002DC234;
    case 19u: goto L_002DC240;
    case 20u: goto L_002DC24C;
    case 21u: goto L_002DC260;
    case 22u: goto L_002DC274;
    case 23u: goto L_002DC298;
    case 24u: goto L_002DC2DC;
    case 25u: goto L_002DC2F8;
    case 26u: goto L_002DC300;
    case 27u: goto L_002DC310;
    case 28u: goto L_002DC320;
    case 29u: goto L_002DC350;
    case 30u: goto L_002DC37C;
    case 31u: goto L_002DC3E0;
    case 32u: goto L_002DC3E8;
    case 33u: goto L_002DC3F8;
    case 34u: goto L_002DC400;
    case 35u: goto L_002DC40C;
    case 36u: goto L_002DC420;
    case 37u: goto L_002DC42C;
    case 38u: goto L_002DC438;
    case 39u: goto L_002DC44C;
    case 40u: goto L_002DC458;
    case 41u: goto L_002DC460;
    case 42u: goto L_002DC46C;
    case 43u: goto L_002DC474;
    case 44u: goto L_002DC484;
    case 45u: goto L_002DC490;
    case 46u: goto L_002DC4B0;
    case 47u: goto L_002DC4FC;
    case 48u: goto L_002DC520;
    case 49u: goto L_002DC554;
    case 50u: goto L_002DC564;
    case 51u: goto L_002DC570;
    case 52u: goto L_002DC5B4;
    case 53u: goto L_002DC5C0;
    case 54u: goto L_002DC5D4;
    case 55u: goto L_002DC6C0;
    case 56u: goto L_002DC738;
    case 57u: goto L_002DC740;
    case 58u: goto L_002DC748;
    case 59u: goto L_002DC754;
    case 60u: goto L_002DC75C;
    case 61u: goto L_002DC76C;
    case 62u: goto L_002DC774;
    case 63u: goto L_002DC780;
    case 64u: goto L_002DC7B0;
    case 65u: goto L_002DC880;
    case 66u: goto L_002DC890;
    case 67u: goto L_002DC970;
    case 68u: goto L_002DC98C;
    case 69u: goto L_002DC9B0;
    case 70u: goto L_002DC9B8;
    case 71u: goto L_002DC9D8;
    case 72u: goto L_002DC9F8;
    case 73u: goto L_002DCA20;
    case 74u: goto L_002DCA50;
    case 75u: goto L_002DCAA8;
    case 76u: goto L_002DCABC;
    case 77u: goto L_002DCAC8;
    case 78u: goto L_002DCAE0;
    case 79u: goto L_002DCB38;
    case 80u: goto L_002DCB4C;
    case 81u: goto L_002DCB58;
    case 82u: goto L_002DCB70;
    case 83u: goto L_002DCC58;
    case 84u: goto L_002DCCDC;
    case 85u: goto L_002DCD60;
    case 86u: goto L_002DCD80;
    case 87u: goto L_002DCDC4;
    case 88u: goto L_002DCED0;
    case 89u: goto L_002DCF14;
    case 90u: goto L_002DCF90;
    case 91u: goto L_002DCFA4;
    case 92u: goto L_002DCFB4;
    case 93u: goto L_002DCFBC;
    case 94u: goto L_002DCFC8;
    case 95u: goto L_002DCFF8;
    case 96u: goto L_002DD008;
    case 97u: goto L_002DD010;
    case 98u: goto L_002DD01C;
    case 99u: goto L_002DD06C;
    case 100u: goto L_002DD0A0;
    case 101u: goto L_002DD0B0;
    case 102u: goto L_002DD114;
    case 103u: goto L_002DD168;
    case 104u: goto L_002DD1C0;
    case 105u: goto L_002DD1EC;
    case 106u: goto L_002DD260;
    case 107u: goto L_002DD2A0;
    case 108u: goto L_002DD38C;
    case 109u: goto L_002DD3A0;
    case 110u: goto L_002DD3AC;
    case 111u: goto L_002DD3B8;
    case 112u: goto L_002DD3CC;
    case 113u: goto L_002DD400;
    case 114u: goto L_002DD4F4;
    case 115u: goto L_002DD508;
    case 116u: goto L_002DD514;
    case 117u: goto L_002DD558;
    case 118u: goto L_002DD56C;
    case 119u: goto L_002DD5A0;
    case 120u: goto L_002DD5CC;
    case 121u: goto L_002DD5E0;
    case 122u: goto L_002DD5E8;
    case 123u: goto L_002DD5F4;
    case 124u: goto L_002DD65C;
    case 125u: goto L_002DD688;
    case 126u: goto L_002DD6D8;
    case 127u: goto L_002DD6E4;
    case 128u: goto L_002DD6F0;
    case 129u: goto L_002DD700;
    case 130u: goto L_002DD720;
    case 131u: goto L_002DD738;
    case 132u: goto L_002DD744;
    case 133u: goto L_002DD760;
    case 134u: goto L_002DD79C;
    case 135u: goto L_002DD7B0;
    case 136u: goto L_002DD7C0;
    case 137u: goto L_002DD7CC;
    case 138u: goto L_002DD834;
    case 139u: goto L_002DD860;
    case 140u: goto L_002DD8AC;
    case 141u: goto L_002DD8B8;
    case 142u: goto L_002DD8C4;
    case 143u: goto L_002DD8D4;
    case 144u: goto L_002DD8E0;
    case 145u: goto L_002DD910;
    case 146u: goto L_002DD9B8;
    case 147u: goto L_002DD9C0;
    case 148u: goto L_002DD9D0;
    case 149u: goto L_002DD9DC;
    case 150u: goto L_002DD9EC;
    case 151u: goto L_002DDA08;
    case 152u: goto L_002DDA14;
    case 153u: goto L_002DDA28;
    case 154u: goto L_002DDA64;
    case 155u: goto L_002DDAA0;
    case 156u: goto L_002DDAB0;
    case 157u: goto L_002DDAB8;
    case 158u: goto L_002DDAC0;
    case 159u: goto L_002DDAC8;
    case 160u: goto L_002DDAF0;
    case 161u: goto L_002DDB38;
    case 162u: goto L_002DDB58;
    case 163u: goto L_002DDB74;
    case 164u: goto L_002DDBA4;
    case 165u: goto L_002DDBC4;
    case 166u: goto L_002DDBE0;
    case 167u: goto L_002DDC10;
    case 168u: goto L_002DDCDC;
    case 169u: goto L_002DDCE8;
    case 170u: goto L_002DDCF0;
    case 171u: goto L_002DDCFC;
    case 172u: goto L_002DDD28;
    case 173u: goto L_002DDD38;
    case 174u: goto L_002DDD40;
    case 175u: goto L_002DDD4C;
    case 176u: goto L_002DDD54;
    case 177u: goto L_002DDD60;
    case 178u: goto L_002DDD68;
    case 179u: goto L_002DDD74;
    case 180u: goto L_002DDD7C;
    case 181u: goto L_002DDD88;
    case 182u: goto L_002DDDA0;
    case 183u: goto L_002DDDE4;
    case 184u: goto L_002DDEBC;
    case 185u: goto L_002DDF94;
    case 186u: goto L_002DDFFC;
    case 187u: goto L_002DE028;
    case 188u: goto L_002DE054;
    case 189u: goto L_002DE144;
    case 190u: goto L_002DE150;
    case 191u: goto L_002DE200;
    case 192u: goto L_002DE280;
    case 193u: goto L_002DE2D8;
    case 194u: goto L_002DE2F8;
    case 195u: goto L_002DE344;
    case 196u: goto L_002DE374;
    case 197u: goto L_002DE3C0;
    case 198u: goto L_002DE420;
    case 199u: goto L_002DE440;
    case 200u: goto L_002DE494;
    case 201u: goto L_002DE4D0;
    case 202u: goto L_002DE520;
    case 203u: goto L_002DE598;
    case 204u: goto L_002DE5C4;
    case 205u: goto L_002DE5D4;
    case 206u: goto L_002DE5E0;
    case 207u: goto L_002DE5EC;
    case 208u: goto L_002DE618;
    case 209u: goto L_002DE628;
    case 210u: goto L_002DE638;
    case 211u: goto L_002DE670;
    case 212u: goto L_002DE698;
    case 213u: goto L_002DE6A0;
    case 214u: goto L_002DE6C4;
    case 215u: goto L_002DE6D0;
    case 216u: goto L_002DE70C;
    case 217u: goto L_002DE718;
    case 218u: goto L_002DE77C;
    case 219u: goto L_002DE794;
    case 220u: goto L_002DE81C;
    case 221u: goto L_002DE884;
    case 222u: goto L_002DE890;
    case 223u: goto L_002DE92C;
    case 224u: goto L_002DE93C;
    case 225u: goto L_002DE94C;
    case 226u: goto L_002DE958;
    case 227u: goto L_002DE980;
    case 228u: goto L_002DE98C;
    case 229u: goto L_002DEA3C;
    case 230u: goto L_002DEA4C;
    case 231u: goto L_002DEA58;
    case 232u: goto L_002DEAA0;
    case 233u: goto L_002DEAC8;
    case 234u: goto L_002DEB00;
    case 235u: goto L_002DEB28;
    case 236u: goto L_002DEBE8;
    case 237u: goto L_002DEC00;
    case 238u: goto L_002DEC94;
    case 239u: goto L_002DECD0;
    case 240u: goto L_002DECE0;
    case 241u: goto L_002DECEC;
    case 242u: goto L_002DECF8;
    case 243u: goto L_002DED0C;
    case 244u: goto L_002DED18;
    case 245u: goto L_002DED78;
    case 246u: goto L_002DEDB0;
    case 247u: goto L_002DEE44;
    case 248u: goto L_002DEE80;
    case 249u: goto L_002DEE90;
    case 250u: goto L_002DEE9C;
    case 251u: goto L_002DEEA8;
    case 252u: goto L_002DEEBC;
    case 253u: goto L_002DEEC8;
    case 254u: goto L_002DEF04;
    case 255u: goto L_002DF050;
    case 256u: goto L_002DF0CC;
    case 257u: goto L_002DF100;
    case 258u: goto L_002DF124;
    case 259u: goto L_002DF190;
    case 260u: goto L_002DF1E8;
    case 261u: goto L_002DF238;
    case 262u: goto L_002DF274;
    case 263u: goto L_002DF284;
    case 264u: goto L_002DF2A8;
    case 265u: goto L_002DF2D0;
    case 266u: goto L_002DF2F4;
    case 267u: goto L_002DF2FC;
    case 268u: goto L_002DF338;
    case 269u: goto L_002DF390;
    case 270u: goto L_002DF3B0;
    case 271u: goto L_002DF3C0;
    case 272u: goto L_002DF450;
    case 273u: goto L_002DF458;
    case 274u: goto L_002DF470;
    case 275u: goto L_002DF484;
    case 276u: goto L_002DF4B4;
    case 277u: goto L_002DF4D0;
    case 278u: goto L_002DF4E4;
    case 279u: goto L_002DF4F0;
    case 280u: goto L_002DF4F8;
    case 281u: goto L_002DF510;
    case 282u: goto L_002DF530;
    case 283u: goto L_002DF53C;
    case 284u: goto L_002DF57C;
    case 285u: goto L_002DF588;
    case 286u: goto L_002DF59C;
    case 287u: goto L_002DF5A4;
    case 288u: goto L_002DF5C8;
    case 289u: goto L_002DF5E0;
    case 290u: goto L_002DF610;
    case 291u: goto L_002DF618;
    case 292u: goto L_002DF630;
    case 293u: goto L_002DF644;
    case 294u: goto L_002DF650;
    case 295u: goto L_002DF658;
    case 296u: goto L_002DF670;
    case 297u: goto L_002DF6B0;
    case 298u: goto L_002DF6CC;
    case 299u: goto L_002DF6F4;
    case 300u: goto L_002DF710;
    case 301u: goto L_002DF738;
    case 302u: goto L_002DF74C;
    case 303u: goto L_002DF76C;
    case 304u: goto L_002DF780;
    case 305u: goto L_002DF7AC;
    case 306u: goto L_002DF7CC;
    case 307u: goto L_002DF7F0;
    case 308u: goto L_002DF854;
    case 309u: goto L_002DF890;
    case 310u: goto L_002DF930;
    case 311u: goto L_002DF98C;
    case 312u: goto L_002DF9AC;
    case 313u: goto L_002DFA10;
    case 314u: goto L_002DFA3C;
    case 315u: goto L_002DFA68;
    case 316u: goto L_002DFAA8;
    case 317u: goto L_002DFAD0;
    case 318u: goto L_002DFAF0;
    case 319u: goto L_002DFBCC;
    case 320u: goto L_002DFBF4;
    case 321u: goto L_002DFC0C;
    case 322u: goto L_002DFC20;
    case 323u: goto L_002DFC98;
    case 324u: goto L_002DFD1C;
    case 325u: goto L_002DFD48;
    case 326u: goto L_002DFD5C;
    case 327u: goto L_002DFDD4;
    case 328u: goto L_002DFDE0;
    case 329u: goto L_002DFE10;
    case 330u: goto L_002DFEA4;
    case 331u: goto L_002DFEB0;
    case 332u: goto L_002DFF18;
    case 333u: goto L_002DFF34;
    case 334u: goto L_002DFFB8;
    case 335u: goto L_002DFFC0;
    case 336u: goto L_002DFFCC;
    case 337u: goto L_002DFFD8;
    case 338u: goto L_002DFFE0;
    case 339u: goto L_002DFFFC;
    default: bad_entry(c, 0x002DC000u); return;
    }
L_002DC000:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8054u));
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    mmi::paddub(c.r[17], c.r[6], c.r[0]);
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[19], c.r[4], c.r[0]);  if (t) { goto L_002DC03C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[3].d[0];  if (t) { goto L_002DC334; } }
L_002DC03C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC044u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 66u, depth + 1u); else { c.pc = 0x002D0680u; return; } if (c.pc != 0x002DC044u) [[unlikely]] return; }
L_002DC044:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 369u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DC0D8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8387u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[2].w[0] + 7744u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8386u)));
    c.r[6].d[0] = ld8((c.r[19].w[0] + 8054u));
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[7], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[2].w[0] << (c.r[5].w[0] & 31u));
    c.r[2].d[0] = c.r[6].d[0] & 31ull;
    set32(c.r[5], c.r[2].w[0] << 4);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00060000u);
    c.r[2].d[0] = c.r[2].d[0] | 49152ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 20;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[4].w[0] + c.r[5].w[0]);  if (t) { goto L_002DC0C4; } }
    set32(c.r[3], c.r[18].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[18].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.r[2].d[0] = c.r[6].d[0] & 64ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[16].w[0] + c.r[3].w[0]);  if (t) { goto L_002DC138; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 64u);  if (t) { goto L_002DC138; } }
L_002DC0C4:
    c.r[2].d[0] = c.r[6].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[18].w[0] << 8);  if (t) { goto L_002DC13C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 112u);  if (t) { goto L_002DC138; } }
L_002DC0D8:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8387u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[4], c.r[2].w[0] - 29056u);
    c.r[3].d[0] = ld8((c.r[19].w[0] + 8054u));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8386u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 31ull;
    set32(c.r[5], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[2].w[0] << (c.r[6].w[0] & 31u));
    set32(c.r[6], c.r[6].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00060000u);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | 49152ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 20;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[4].w[0] + c.r[5].w[0]);  if (t) { goto L_002DC138; } }
    set32(c.r[2], c.r[18].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_002DC138:
    set32(c.r[2], c.r[18].w[0] << 8);
    c.budget -= 1;
L_002DC13C:
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 2416u));
    set32(c.r[4], c.r[19].w[0] + 2048u);
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 2420u));
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 2424u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC160u); st32((c.r[29].w[0] + 88u), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002DC160u) [[unlikely]] return; }
L_002DC160:
    set32(c.r[2], ld32((c.r[19].w[0] + 7916u)));
    c.r[3].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC170u); c.r[4].d[0] = c.r[2].d[0] & c.r[3].d[0];  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002DC170u) [[unlikely]] return; }
L_002DC170:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC178u); c.r[4].d[0] = ld16((c.r[19].w[0] + 7912u));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002DC178u) [[unlikely]] return; }
L_002DC178:
    c.f[13] = ld32((c.r[16].w[0] + 4u));
    c.f[14] = ld32((c.r[16].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC188u); c.f[12] = ld32((c.r[16].w[0]));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002DC188u) [[unlikely]] return; }
L_002DC188:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC190u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x002DC190u) [[unlikely]] return; }
L_002DC190:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[2].d[0] = c.r[2].d[0] | 244ull;
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC1A4u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 211u, depth + 1u); else { c.pc = 0x00102548u; return; } if (c.pc != 0x002DC1A4u) [[unlikely]] return; }
L_002DC1A4:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC1B0u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002DC1B0u) [[unlikely]] return; }
L_002DC1B0:
    set32(c.r[4], c.r[19].w[0] + 1392u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC1BCu); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002DC1BCu) [[unlikely]] return; }
L_002DC1BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC1C4u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000F(c, 29u, depth + 1u); else { c.pc = 0x0013CBB0u; return; } if (c.pc != 0x002DC1C4u) [[unlikely]] return; }
L_002DC1C4:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[12] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC1D4u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x002DC1D4u) [[unlikely]] return; }
L_002DC1D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC1DCu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x002DC1DCu) [[unlikely]] return; }
L_002DC1DC:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC1E8u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002DC1E8u) [[unlikely]] return; }
L_002DC1E8:
    set32(c.r[2], c.r[18].w[0] << 3);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[2].w[0] + 7888u);
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 6u);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC20Cu); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002DC20Cu) [[unlikely]] return; }
L_002DC20C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC218u); set32(c.r[4], 0u - c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002DC218u) [[unlikely]] return; }
L_002DC218:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC224u); set32(c.r[4], 0u - c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002DC224u) [[unlikely]] return; }
L_002DC224:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC234u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 211u, depth + 1u); else { c.pc = 0x00102548u; return; } if (c.pc != 0x002DC234u) [[unlikely]] return; }
L_002DC234:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC240u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002DC240u) [[unlikely]] return; }
L_002DC240:
    set32(c.r[4], c.r[19].w[0] + 1392u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC24Cu); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002DC24Cu) [[unlikely]] return; }
L_002DC24C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC260u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x002DC260u) [[unlikely]] return; }
L_002DC260:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC274u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x002DC274u) [[unlikely]] return; }
L_002DC274:
    st32((c.r[29].w[0] + 120u), 0u);
    st32((c.r[29].w[0] + 112u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st32((c.r[29].w[0] + 116u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC298u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_005B(c, 306u, depth + 1u); else { c.pc = 0x0026FAE0u; return; } if (c.pc != 0x002DC298u) [[unlikely]] return; }
L_002DC298:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1024u);  if (t) { goto L_002DC2E8; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 7928u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DC2E4; } }
    c.f[1] = ld32((c.r[19].w[0] + 7752u));
    c.f[0] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44800000u);
    c.f[2] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC2DCu);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002DC2DCu) [[unlikely]] return; }
L_002DC2DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 112u);  if (t) { goto L_002DC2EC; } }
L_002DC2E4:
    set32(c.r[2], 0u + 1024u);
    c.budget -= 1;
L_002DC2E8:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 1;
L_002DC2EC:
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC2F8u); mmi::paddub(c.r[6], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 297u, depth + 1u); else { c.pc = 0x0026F960u; return; } if (c.pc != 0x002DC2F8u) [[unlikely]] return; }
L_002DC2F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC300u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000F(c, 29u, depth + 1u); else { c.pc = 0x0013CBB0u; return; } if (c.pc != 0x002DC300u) [[unlikely]] return; }
L_002DC300:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[12] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC310u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x002DC310u) [[unlikely]] return; }
L_002DC310:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC320u); set32(c.r[6], c.r[29].w[0] + 140u);  if (depth < kMaxDepth) unit_005B(c, 154u, depth + 1u); else { c.pc = 0x0026E550u; return; } if (c.pc != 0x002DC320u) [[unlikely]] return; }
L_002DC320:
    set32(c.r[3], ld32((c.r[29].w[0] + 136u)));
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 140u)));
    set32(c.r[3], 0u - c.r[3].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 5;
L_002DC334:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_002DC350:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[19], c.r[5], c.r[0]);
    mmi::paddub(c.r[18], c.r[6], c.r[0]);
    mmi::paddub(c.r[20], c.r[4], c.r[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC37Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0074(c, 66u, depth + 1u); else { c.pc = 0x002D0680u; return; } if (c.pc != 0x002DC37Cu) [[unlikely]] return; }
L_002DC37C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 749u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002DC4FC; } }
    set32(c.r[2], c.r[19].w[0] << 2);
    set32(c.r[17], c.r[2].w[0] + 6u);
    set32(c.r[5], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[2], c.r[19].w[0] << 3);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[2].w[0] + 7888u);
    set32(c.r[2], c.r[20].w[0] + 7936u);
    st32((c.r[5].w[0] + 112u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[19].d[0] ^ 1ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[2], c.r[20].w[0] + 7824u);
    st32((c.r[5].w[0] + 128u), c.r[2].w[0]);
    set32(c.r[2], c.r[20].w[0] + 7840u);
    st32((c.r[3].w[0] + 128u), c.r[2].w[0]);
    set32(c.r[4], c.r[20].w[0] + 7952u);
    set32(c.r[5], ld32((c.r[29].w[0] + 132u)));
    st32((c.r[3].w[0] + 112u), c.r[4].w[0]);
    set32(c.r[6], ld32((c.r[29].w[0] + 128u)));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC3E0u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002DC3E0u) [[unlikely]] return; }
L_002DC3E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC3E8u); set32(c.r[4], c.r[20].w[0] + 2048u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002DC3E8u) [[unlikely]] return; }
L_002DC3E8:
    set32(c.r[2], ld32((c.r[20].w[0] + 7916u)));
    c.r[3].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC3F8u); c.r[4].d[0] = c.r[2].d[0] & c.r[3].d[0];  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002DC3F8u) [[unlikely]] return; }
L_002DC3F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC400u); c.r[4].d[0] = ld16((c.r[20].w[0] + 7912u));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002DC400u) [[unlikely]] return; }
L_002DC400:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC40Cu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x002DC40Cu) [[unlikely]] return; }
L_002DC40C:
    set32(c.r[2], c.r[17].w[0] << 6);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[17], c.r[2].w[0] + 1984u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC420u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x002DC420u) [[unlikely]] return; }
L_002DC420:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC42Cu); set32(c.r[4], 0u - c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002DC42Cu) [[unlikely]] return; }
L_002DC42C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC438u); set32(c.r[4], 0u - c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002DC438u) [[unlikely]] return; }
L_002DC438:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[2].d[0] = c.r[2].d[0] | 244ull;
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC44Cu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 211u, depth + 1u); else { c.pc = 0x00102548u; return; } if (c.pc != 0x002DC44Cu) [[unlikely]] return; }
L_002DC44C:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC458u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x002DC458u) [[unlikely]] return; }
L_002DC458:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC460u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002DC460u) [[unlikely]] return; }
L_002DC460:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC46Cu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002DC46Cu) [[unlikely]] return; }
L_002DC46C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC474u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x002DC474u) [[unlikely]] return; }
L_002DC474:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC484u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 211u, depth + 1u); else { c.pc = 0x00102548u; return; } if (c.pc != 0x002DC484u) [[unlikely]] return; }
L_002DC484:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC490u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002DC490u) [[unlikely]] return; }
L_002DC490:
    set32(c.r[2], c.r[19].w[0] + 2u);
    set32(c.r[16], ld32((c.r[29].w[0] + 116u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[2].w[0] + 4928u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC4B0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002DC4B0u) [[unlikely]] return; }
L_002DC4B0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 8386u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002DC4FC; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[3].d[0];  if (t) { goto L_002DC4FC; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 7928u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002DC4FC; } }
    c.f[1] = c.r[3].w[0];
    c.f[0] = ld32((c.r[20].w[0] + 7752u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    fpu_div(c, 12u, c.f[0], c.f[1]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC4FCu);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x002DC4FCu) [[unlikely]] return; }
L_002DC4FC:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_002DC520:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    mmi::paddub(c.r[21], c.r[4], c.r[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[21].w[0] + 2048u);
    mmi::paddub(c.r[20], c.r[5], c.r[0]);
    mmi::paddub(c.r[19], c.r[6], c.r[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC554u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002DC554u) [[unlikely]] return; }
L_002DC554:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC564u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 211u, depth + 1u); else { c.pc = 0x00102548u; return; } if (c.pc != 0x002DC564u) [[unlikely]] return; }
L_002DC564:
    set32(c.r[4], c.r[21].w[0] + 1392u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC570u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002DC570u) [[unlikely]] return; }
L_002DC570:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 8387u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[17], c.r[29].w[0] + 120u);
    c.f[1] = ld32((c.r[29].w[0] + 112u));
    set32(c.r[2], c.r[2].w[0] + 22064u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 8386u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[17].w[0]));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.facc = fp::mul(c.f[1], c.f[1]);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC5B4u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002DC5B4u) [[unlikely]] return; }
L_002DC5B4:
    c.f[12] = ld32((c.r[29].w[0] + 116u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC5C0u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x002DC5C0u) [[unlikely]] return; }
L_002DC5C0:
    c.f[13] = ld32((c.r[17].w[0]));
    c.f[12] = ld32((c.r[29].w[0] + 112u));
    c.r[18].d[0] = c.r[2].d[0] << 48;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC5D4u); c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x002DC5D4u) [[unlikely]] return; }
L_002DC5D4:
    c.r[17].d[0] = c.r[2].d[0] << 48;
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);  if (t) { goto L_002DC5EC; } }
    mmi::paddub(c.r[18], c.r[2], c.r[0]);
    c.budget -= 1;
L_002DC5EC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[1].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002DC600; } }
    mmi::paddub(c.r[18], c.r[2], c.r[0]);
    c.budget -= 1;
L_002DC600:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 8386u)));
    set32(c.r[4], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00060000u);
    c.r[2].d[0] = c.r[2].d[0] | 49152ull;
    set32(c.r[3], c.r[4].w[0] << (c.r[3].w[0] & 31u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DC680; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_002DC654; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002DC63C; } }
    mmi::paddub(c.r[17], c.r[2], c.r[0]);
    c.budget -= 1;
L_002DC63C:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.r[1].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002DC724; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[17], c.r[2], c.r[0]);  if (t) { goto L_002DC724; } }
L_002DC654:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002DC668; } }
    mmi::paddub(c.r[17], c.r[2], c.r[0]);
    c.budget -= 1;
L_002DC668:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.r[1].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002DC724; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[17], c.r[2], c.r[0]);  if (t) { goto L_002DC724; } }
L_002DC680:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 775u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002DC6FC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_002DC6D4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002DC6A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 128u), 0u);  if (t) { goto L_002DC728; } }
L_002DC6A8:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002DC6BC; } }
    mmi::paddub(c.r[17], c.r[2], c.r[0]);
    c.budget -= 1;
L_002DC6BC:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 1;
L_002DC6C0:
    c.r[1].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002DC724; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[17], c.r[2], c.r[0]);  if (t) { goto L_002DC724; } }
L_002DC6D4:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] < 0;  if (t) { goto L_002DC6F4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002DC724; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[17], c.r[2], c.r[0]);  if (t) { goto L_002DC724; } }
L_002DC6F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[16].w[0] + 8u)));  if (t) { goto L_002DC724; } }
L_002DC6FC:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0;  if (t) { goto L_002DC71C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.r[1].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002DC724; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[17], c.r[2], c.r[0]);  if (t) { goto L_002DC724; } }
L_002DC71C:
    set32(c.r[17], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 2;
L_002DC724:
    st32((c.r[29].w[0] + 128u), 0u);
    c.budget -= 1;
L_002DC728:
    st32((c.r[29].w[0] + 132u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC738u); st32((c.r[29].w[0] + 136u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002DC738u) [[unlikely]] return; }
L_002DC738:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC740u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002DC740u) [[unlikely]] return; }
L_002DC740:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC748u); set32(c.r[4], 0u - c.r[18].w[0]);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002DC748u) [[unlikely]] return; }
L_002DC748:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC754u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x002DC754u) [[unlikely]] return; }
L_002DC754:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC75Cu); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000F(c, 29u, depth + 1u); else { c.pc = 0x0013CBB0u; return; } if (c.pc != 0x002DC75Cu) [[unlikely]] return; }
L_002DC75C:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.f[12] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC76Cu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x002DC76Cu) [[unlikely]] return; }
L_002DC76C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC774u); set32(c.r[4], c.r[21].w[0] + 2048u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002DC774u) [[unlikely]] return; }
L_002DC774:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC780u); mmi::paddub(c.r[5], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002DC780u) [[unlikely]] return; }
L_002DC780:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_002DC7B0:
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[3].w[0] + 1576u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[3], 0u + 3u);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002DC7EC; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002DC7EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002DC870; } }
L_002DC7EC:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002DC800; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002DC870; } }
L_002DC800:
    st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 4u)));
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002DC868; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002DC854; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002DC83C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002DC870; } }
L_002DC83C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002DC86C; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_002DC86C; } }
L_002DC854:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 10u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_002DC86C; } }
L_002DC868:
    st16((c.r[4].w[0] + 10u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_002DC86C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002DC870:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002DC880:
    set32(c.r[9], c.r[4].w[0] + 1576u);
    mmi::paddub(c.r[10], c.r[0], c.r[0]);
    set32(c.r[7], 0u + 1u);
    set32(c.r[8], 0u + 2u);
    c.budget -= 4;
L_002DC890:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0] + 10u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[10], c.r[10].w[0] + 1u);  goto L_002DC95C; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[8].d[0];  if (t) { goto L_002DC958; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[7].d[0];  if (t) { goto L_002DC8EC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002DC8C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DC958; } }
L_002DC8C0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002DC8D0; } }
    set32(c.r[3], c.r[4].w[0] - 1u);
    st16((c.r[9].w[0] + 10u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002DC8D0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0] + 10u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002DC958; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0] + 2u)));
    st16((c.r[9].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[9].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002DC958; } }
L_002DC8EC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002DC900; } }
    set32(c.r[3], c.r[4].w[0] - 1u);
    st16((c.r[9].w[0] + 10u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_002DC900:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0] + 10u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002DC94C; } }
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0] + 8u)));
    c.r[5].d[0] = c.r[3].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0] + 2u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0] + 4u)));
    mmi::div(c, 0, c.r[5].w[0], c.r[6].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_002DC958; } }
    st16((c.r[9].w[0] + 6u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[9].w[0] + 4u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_002DC958; } }
L_002DC94C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0] + 2u)));
    st16((c.r[9].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[9].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_002DC958:
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.budget -= 1;
L_002DC95C:
    c.r[3].d[0] = c.r[10].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[9], c.r[9].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DC890u | kUnwind; return; } goto L_002DC890; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002DC970:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC98Cu); mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 39u, depth + 1u); else { c.pc = 0x002D8810u; return; } if (c.pc != 0x002DC98Cu) [[unlikely]] return; }
L_002DC98C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002DCA08; } }
    st32((c.r[17].w[0] + 68u), 0u);
    st32((c.r[17].w[0] + 52u), 0u);
    st32((c.r[17].w[0] + 108u), 0u);
    set32(c.r[5], c.r[17].w[0] + 32u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC9B0u); st32((c.r[17].w[0] + 104u), 0u);  if (depth < kMaxDepth) unit_004B(c, 27u, depth + 1u); else { c.pc = 0x0022C720u; return; } if (c.pc != 0x002DC9B0u) [[unlikely]] return; }
L_002DC9B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC9B8u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 74u, depth + 1u); else { c.pc = 0x002DCA50u; return; } if (c.pc != 0x002DC9B8u) [[unlikely]] return; }
L_002DC9B8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_002DC9E0; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 758u)));
    c.f[12] = 0u;
    set32(c.r[6], 0u + 11u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC9D8u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002DC9D8u) [[unlikely]] return; }
L_002DC9D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002DC9FC; } }
L_002DC9E0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 758u)));
    c.f[12] = 0u;
    set32(c.r[6], 0u + 11u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC9F8u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x002DC9F8u) [[unlikely]] return; }
L_002DC9F8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002DC9FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_002DCA0C; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_002DCA08:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002DCA0C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002DCA20:
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], 0u + 7u);
    st8((c.r[4].w[0] + 736u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 741u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] | 8ull;
    st16((c.r[4].w[0] + 812u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 806u), static_cast<std::uint16_t>(c.r[5].w[0]));  c.pc = t; return; }
L_002DCA50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 736u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 741u), static_cast<std::uint8_t>(0u));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    set32(c.r[5], 0u - 9u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[3], 0u + 18u);
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    st16((c.r[4].w[0] + 812u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[4].w[0] + 806u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 274u), static_cast<std::uint8_t>(0u));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    c.budget -= 16;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002DCAC8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 11u);  if (t) { goto L_002DCAC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCAA8u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0075(c, 244u, depth + 1u); else { c.pc = 0x002D78B0u; return; } if (c.pc != 0x002DCAA8u) [[unlikely]] return; }
L_002DCAA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DCABC; } }
    set32(c.r[5], 0u + 30u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCABCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x002DCABCu) [[unlikely]] return; }
L_002DCABC:
    set32(c.r[5], 0u + 11u);
    c.budget -= 1;
L_002DCAC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCAC8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 22u, depth + 1u); else { c.pc = 0x00198340u; return; } if (c.pc != 0x002DCAC8u) [[unlikely]] return; }
L_002DCAC8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002DCAE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 736u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 741u), static_cast<std::uint8_t>(0u));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    set32(c.r[5], 0u - 9u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[3], 0u + 33u);
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    st16((c.r[4].w[0] + 812u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[4].w[0] + 806u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 274u), static_cast<std::uint8_t>(0u));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    c.budget -= 16;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002DCB58; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 11u);  if (t) { goto L_002DCB50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCB38u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0075(c, 244u, depth + 1u); else { c.pc = 0x002D78B0u; return; } if (c.pc != 0x002DCB38u) [[unlikely]] return; }
L_002DCB38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DCB4C; } }
    set32(c.r[5], 0u + 30u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCB4Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x002DCB4Cu) [[unlikely]] return; }
L_002DCB4C:
    set32(c.r[5], 0u + 11u);
    c.budget -= 1;
L_002DCB50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCB58u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 22u, depth + 1u); else { c.pc = 0x00198340u; return; } if (c.pc != 0x002DCB58u) [[unlikely]] return; }
L_002DCB58:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002DCB70:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 71u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DCB88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002DCEBC; } }
L_002DCB88:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 290u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002DCBA4; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 296u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002DCBAC; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_002DCBA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DCEBC; } }
L_002DCBAC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 111u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DCBC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002DCEBC; } }
L_002DCBC0:
    set32(c.r[7], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_002DCBFC; } }
    c.r[6].d[0] = ld8((c.r[4].w[0] + 531u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[2], c.r[2].w[0] + 29653u);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DCBF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002DCEBC; } }
L_002DCBF8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002DCBFC:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_002DCC24; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 524u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DCC24; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 530u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DCC24; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002DCEBC; } }
L_002DCC24:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 519u)));
    mmi::paddub(c.r[8], c.r[0], c.r[0]);
    set32(c.r[6], c.r[6].w[0] - 10u);
    c.r[1].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002DCE0C; } }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[7], c.r[7].w[0] + 26816u);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], ld32((c.r[6].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[6].w[0];  c.pc = t; if (t - 0x002DC000u < 16384u) { entry = entries_0077[(t - 0x002DC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002DCC58:
    set32(c.r[6], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[6].d[0];  if (t) { goto L_002DCCB4; } }
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[7], c.r[5].w[0] - 25072u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8437u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8391u)));
    set32(c.r[8], c.r[9].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    c.r[5].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);  if (t) { goto L_002DCCA4; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8438u)));
    c.r[5].d[0] = c.r[5].d[0] ^ 0ull;
    c.r[5].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_002DCCA4:
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));  if (t) { goto L_002DCE0C; } }
L_002DCCB4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    set32(c.r[6], c.r[5].w[0] - 18800u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8391u)));
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));  if (t) { goto L_002DCE0C; } }
L_002DCCDC:
    set32(c.r[6], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[6].d[0];  if (t) { goto L_002DCD38; } }
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[7], c.r[5].w[0] - 25280u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8437u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8391u)));
    set32(c.r[8], c.r[9].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    c.r[5].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);  if (t) { goto L_002DCD28; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8438u)));
    c.r[5].d[0] = c.r[5].d[0] ^ 0ull;
    c.r[5].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_002DCD28:
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));  if (t) { goto L_002DCE0C; } }
L_002DCD38:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    set32(c.r[6], c.r[5].w[0] - 18832u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8391u)));
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));  if (t) { goto L_002DCE0C; } }
L_002DCD60:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[5], c.r[2].w[0] - 18592u);
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002DCE0C; } }
L_002DCD80:
    set32(c.r[6], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[6].d[0];  if (t) { goto L_002DCDA8; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[5], c.r[5].w[0] - 24512u);
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));  if (t) { goto L_002DCE0C; } }
L_002DCDA8:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[5], c.r[5].w[0] - 18720u);
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));  if (t) { goto L_002DCE0C; } }
L_002DCDC4:
    set32(c.r[6], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[6].d[0];  if (t) { goto L_002DCDEC; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[5], c.r[5].w[0] - 24384u);
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));  if (t) { goto L_002DCE0C; } }
L_002DCDEC:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[5], c.r[2].w[0] - 18656u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    c.budget -= 8;
L_002DCE0C:
    c.budget -= 2;
    if (c.r[8].d[0] == 0ull) { mmi::paddub(c.r[2], c.r[0], c.r[0]);  goto L_002DCEBC; }
    c.r[4].d[0] = ld8((c.r[4].w[0] + 531u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[4], 0u + 15u);  if (t) { goto L_002DCE70; } }
    set32(c.r[4], 0u + 15u);
    st8((c.r[3].w[0] + 270u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 290u)));
    set32(c.r[3], c.r[3].w[0] - c.r[8].w[0]);
    st16((c.r[4].w[0] + 290u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], c.r[3].w[0] + 290u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 290u)));
    c.budget -= 11;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_002DCEB8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DCE60; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_002DCE64; } }
L_002DCE60:
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_002DCE64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002DCEBC; } }
    set32(c.r[4], 0u + 15u);
    c.budget -= 1;
L_002DCE70:
    st8((c.r[3].w[0] + 271u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 296u)));
    set32(c.r[3], c.r[3].w[0] - c.r[8].w[0]);
    st16((c.r[4].w[0] + 296u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], c.r[3].w[0] + 296u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 296u)));
    c.budget -= 10;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_002DCEB8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DCEAC; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_002DCEB0; } }
L_002DCEAC:
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_002DCEB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_002DCEBC; } }
L_002DCEB8:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_002DCEBC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002DCED0:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 369u)));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[19], c.r[5], c.r[0]);  if (t) { goto L_002DD15C; } }
    set32(c.r[5], c.r[4].w[0] + 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCF14u); set32(c.r[6], c.r[2].w[0] - 21936u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002DCF14u) [[unlikely]] return; }
L_002DCF14:
    c.f[0] = ld32((c.r[29].w[0] + 160u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3F00000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002DCF7C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43F00000u);
    c.f[2] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002DCF7C; } }
    c.f[0] = ld32((c.r[29].w[0] + 168u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002DCF7C; } }
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002DCF7C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002DD198; } }
L_002DCF7C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[18], 0u - 1u);
    set32(c.r[16], c.r[2].w[0] - 27056u);
    st32((c.r[29].w[0] + 164u), 0u);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 5;
L_002DCF90:
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[29].w[0] + 160u);
    mmi::paddub(c.r[6], c.r[16], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCFA4u); mmi::paddub(c.r[20], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002DCFA4u) [[unlikely]] return; }
L_002DCFA4:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[16].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCFB4u); mmi::paddub(c.r[6], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002DCFB4u) [[unlikely]] return; }
L_002DCFB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCFBCu); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x002DCFBCu) [[unlikely]] return; }
L_002DCFBC:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCFC8u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x002DCFC8u) [[unlikely]] return; }
L_002DCFC8:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[20] = c.f[0];  if (t) { goto L_002DCFE8; } }
    c.r[20].d[0] = c.r[20].d[0] | 1ull;
    c.budget -= 2;
L_002DCFE8:
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCFF8u); set32(c.r[6], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002DCFF8u) [[unlikely]] return; }
L_002DCFF8:
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[6], c.r[16].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD008u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002DD008u) [[unlikely]] return; }
L_002DD008:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD010u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x002DD010u) [[unlikely]] return; }
L_002DD010:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD01Cu); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x002DD01Cu) [[unlikely]] return; }
L_002DD01C:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 2u);  if (t) { goto L_002DD03C; } }
    c.r[20].d[0] = c.r[20].d[0] | 2ull;
    set32(c.r[2], 0u + 2u);
    c.budget -= 2;
L_002DD03C:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == c.r[2].d[0];  if (t) { goto L_002DD0E0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == c.r[2].d[0];  if (t) { goto L_002DD0B8; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; c.f[12] = c.f[20];  if (t) { goto L_002DD064; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { goto L_002DD13C; } }
    c.f[12] = c.f[20];
    c.budget -= 1;
L_002DD064:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD06Cu);  if (depth < kMaxDepth) unit_000E(c, 291u, depth + 1u); else { c.pc = 0x0013B4D0u; return; } if (c.pc != 0x002DD06Cu) [[unlikely]] return; }
L_002DD06C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[29].w[0] + 128u);  if (t) { goto L_002DD094; } }
    c.f[20] = 0u;
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 2;
L_002DD094:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD0A0u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x002DD0A0u) [[unlikely]] return; }
L_002DD0A0:
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[6], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD0B0u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x002DD0B0u) [[unlikely]] return; }
L_002DD0B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 160u);  if (t) { goto L_002DD10C; } }
L_002DD0B8:
    c.f[3] = ld32((c.r[16].w[0]));
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    set32(c.r[2], c.r[29].w[0] + 176u);
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 12u), c.f[0]);  if (t) { goto L_002DD108; } }
L_002DD0E0:
    c.f[3] = ld32((c.r[16].w[0] + 16u));
    c.f[2] = ld32((c.r[16].w[0] + 20u));
    c.f[1] = ld32((c.r[16].w[0] + 24u));
    c.f[0] = ld32((c.r[16].w[0] + 28u));
    set32(c.r[2], c.r[29].w[0] + 176u);
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    c.budget -= 10;
L_002DD108:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 1;
L_002DD10C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD114u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x002DD114u) [[unlikely]] return; }
L_002DD114:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002DD130; } }
    c.f[1] = ld32((c.r[19].w[0]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002DD138; } }
L_002DD130:
    st32((c.r[19].w[0]), c.f[0]);
    mmi::paddub(c.r[18], c.r[17], c.r[0]);
    c.budget -= 2;
L_002DD138:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002DD13C:
    c.r[2].d[0] = c.r[17].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DCF90u | kUnwind; return; } goto L_002DCF90; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002DD198; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002DD198; } }
L_002DD15C:
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD168u); set32(c.r[5], c.r[3].w[0] + 592u);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x002DD168u) [[unlikely]] return; }
L_002DD168:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43E10000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002DD194; } }
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0]), c.f[0]);  if (t) { goto L_002DD198; } }
L_002DD194:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_002DD198:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_002DD1C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 369u)));
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[4].w[0] + 80u);  goto L_002DD258; }
    set32(c.r[5], c.r[4].w[0] + 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD1ECu); set32(c.r[6], c.r[2].w[0] - 21936u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002DD1ECu) [[unlikely]] return; }
L_002DD1EC:
    c.f[0] = ld32((c.r[29].w[0] + 16u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC40C0000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_002DD288; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x440C0000u);
    c.f[2] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002DD284; } }
    c.f[0] = ld32((c.r[29].w[0] + 24u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002DD284; } }
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002DD284; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002DD288; } }
    set32(c.r[4], c.r[4].w[0] + 80u);
    c.budget -= 1;
L_002DD258:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD260u); set32(c.r[5], c.r[3].w[0] + 592u);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x002DD260u) [[unlikely]] return; }
L_002DD260:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x441B0000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002DD284; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002DD288; } }
L_002DD284:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002DD288:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002DD2A0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[5], ld32((c.r[4].w[0] + 1520u)));
    c.f[21] = c.f[12];
    c.f[20] = c.f[13];
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 12;
    { const bool t = c.r[5].d[0] == 0ull; mmi::paddub(c.r[17], c.r[0], c.r[0]);  if (t) { goto L_002DD3B0; } }
    c.f[3] = ld32((c.r[5].w[0] + 32u));
    c.f[2] = ld32((c.r[5].w[0] + 36u));
    c.f[1] = ld32((c.r[5].w[0] + 40u));
    c.f[0] = ld32((c.r[5].w[0] + 44u));
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[3], c.r[29].w[0] + 80u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0]), c.f[3]);
    st32((c.r[4].w[0] + 4u), c.f[2]);
    st32((c.r[4].w[0] + 8u), c.f[1]);
    st32((c.r[4].w[0] + 12u), c.f[0]);
    c.f[3] = ld32((c.r[16].w[0] + 32u));
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = ld32((c.r[16].w[0] + 44u));
    st32((c.r[3].w[0]), c.f[3]);
    st32((c.r[3].w[0] + 4u), c.f[2]);
    st32((c.r[3].w[0] + 8u), c.f[1]);
    st32((c.r[3].w[0] + 12u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    c.budget -= 22;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002DD34C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] - 27008u);
    c.f[0] = ld32((c.r[29].w[0] + 68u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.budget -= 9;
L_002DD34C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 96u);  if (t) { goto L_002DD380; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] - 26976u);
    c.f[0] = ld32((c.r[29].w[0] + 84u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 84u), c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 10;
L_002DD380:
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD38Cu); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002DD38Cu) [[unlikely]] return; }
L_002DD38C:
    c.f[1] = ld32((c.r[29].w[0] + 96u));
    c.f[0] = ld32((c.r[29].w[0] + 104u));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD3A0u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002DD3A0u) [[unlikely]] return; }
L_002DD3A0:
    c.f[12] = ld32((c.r[29].w[0] + 100u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD3ACu); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x002DD3ACu) [[unlikely]] return; }
L_002DD3AC:
    mmi::paddub(c.r[17], c.r[2], c.r[0]);
    c.budget -= 1;
L_002DD3B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD3B8u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x002DD3B8u) [[unlikely]] return; }
L_002DD3B8:
    c.f[0] = fp::mul(c.f[21], c.f[0]);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD3CCu); st32((c.r[16].w[0] + 108u), 0u);  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x002DD3CCu) [[unlikely]] return; }
L_002DD3CC:
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    set32(c.r[3], 0u + 2u);
    st32((c.r[16].w[0] + 52u), c.f[0]);
    st8((c.r[16].w[0] + 274u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002DD400:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 1520u)));
    c.f[21] = c.f[12];
    c.f[20] = c.f[13];
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.budget -= 14;
    { const bool t = c.r[5].d[0] == 0ull; mmi::paddub(c.r[18], c.r[0], c.r[0]);  if (t) { goto L_002DD51C; } }
    c.f[3] = ld32((c.r[5].w[0] + 32u));
    c.f[2] = ld32((c.r[5].w[0] + 36u));
    c.f[1] = ld32((c.r[5].w[0] + 40u));
    c.f[0] = ld32((c.r[5].w[0] + 44u));
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[3], c.r[29].w[0] + 96u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0]), c.f[3]);
    st32((c.r[4].w[0] + 4u), c.f[2]);
    st32((c.r[4].w[0] + 8u), c.f[1]);
    st32((c.r[4].w[0] + 12u), c.f[0]);
    c.f[3] = ld32((c.r[17].w[0] + 32u));
    c.f[2] = ld32((c.r[17].w[0] + 36u));
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 44u));
    st32((c.r[3].w[0]), c.f[3]);
    st32((c.r[3].w[0] + 4u), c.f[2]);
    st32((c.r[3].w[0] + 8u), c.f[1]);
    st32((c.r[3].w[0] + 12u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    c.budget -= 22;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002DD4B4; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] - 27008u);
    c.f[0] = ld32((c.r[29].w[0] + 84u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.budget -= 9;
L_002DD4B4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 112u);  if (t) { goto L_002DD4E8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] - 26976u);
    c.f[0] = ld32((c.r[29].w[0] + 100u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 100u), c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 10;
L_002DD4E8:
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD4F4u); set32(c.r[6], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002DD4F4u) [[unlikely]] return; }
L_002DD4F4:
    c.f[1] = ld32((c.r[29].w[0] + 112u));
    c.f[0] = ld32((c.r[29].w[0] + 120u));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD508u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002DD508u) [[unlikely]] return; }
L_002DD508:
    c.f[12] = ld32((c.r[29].w[0] + 116u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD514u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x002DD514u) [[unlikely]] return; }
L_002DD514:
    c.r[18].d[0] = c.r[2].d[0] << 48;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);
    c.budget -= 2;
L_002DD51C:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] >= 0; c.r[1].d[0] = c.r[16].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;  if (t) { goto L_002DD540; } }
    set32(c.r[2], 0u - c.r[16].w[0]);
    c.r[1].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (t) { goto L_002DD550; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_002DD54C; } }
    c.r[1].d[0] = c.r[16].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 1;
L_002DD540:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002DD54C; } }
    c.r[18].d[0] = c.r[16].d[0] & 65535ull;
    c.budget -= 1;
L_002DD54C:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 1;
L_002DD550:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD558u);  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x002DD558u) [[unlikely]] return; }
L_002DD558:
    c.f[0] = fp::mul(c.f[21], c.f[0]);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD56Cu); st32((c.r[17].w[0] + 108u), 0u);  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x002DD56Cu) [[unlikely]] return; }
L_002DD56C:
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    set32(c.r[3], 0u + 2u);
    st32((c.r[17].w[0] + 52u), c.f[0]);
    st8((c.r[17].w[0] + 274u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002DD5A0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[4], c.r[16].w[0] + 48u);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    mmi::paddub(c.r[17], c.r[6], c.r[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD5CCu); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_000F(c, 20u, depth + 1u); else { c.pc = 0x0013C9E0u; return; } if (c.pc != 0x002DD5CCu) [[unlikely]] return; }
L_002DD5CC:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[20] = c.f[0];
    set32(c.r[6], c.r[16].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD5E0u); mmi::paddub(c.r[5], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002DD5E0u) [[unlikely]] return; }
L_002DD5E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD5E8u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x002DD5E8u) [[unlikely]] return; }
L_002DD5E8:
    set32(c.r[4], c.r[16].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD5F4u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x002DD5F4u) [[unlikely]] return; }
L_002DD5F4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_002DD614; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_002DD614:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);  if (t) { goto L_002DD630; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[12] = c.f[0];  if (t) { goto L_002DD654; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.budget -= 1;
L_002DD630:
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002DD650; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[1];  if (t) { goto L_002DD650; } }
L_002DD650:
    c.f[12] = c.f[0];
    c.budget -= 1;
L_002DD654:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD65Cu);  if (depth < kMaxDepth) unit_000E(c, 285u, depth + 1u); else { c.pc = 0x0013B410u; return; } if (c.pc != 0x002DD65Cu) [[unlikely]] return; }
L_002DD65C:
    mmi::paddub(c.r[18], c.r[2], c.r[0]);
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[17].d[0] = c.r[2].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[5], c.r[29].w[0] + 80u);  if (t) { goto L_002DD67C; } }
    mmi::paddub(c.r[18], c.r[2], c.r[0]);
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 2;
L_002DD67C:
    set32(c.r[4], c.r[16].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD688u); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 34u, depth + 1u); else { c.pc = 0x0013CCC0u; return; } if (c.pc != 0x002DD688u) [[unlikely]] return; }
L_002DD688:
    set32(c.r[3], c.r[29].w[0] + 84u);
    c.f[1] = ld32((c.r[29].w[0] + 80u));
    c.f[0] = ld32((c.r[3].w[0]));
    set32(c.r[2], c.r[29].w[0] + 88u);
    c.f[3] = 0u;
    c.f[2] = ld32((c.r[2].w[0]));
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.facc = fp::add(c.f[1], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[3]));
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002DD6D0; } }
    st32((c.r[2].w[0]), 0u);
    st32((c.r[29].w[0] + 80u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 4;
L_002DD6D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD6D8u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002DD6D8u) [[unlikely]] return; }
L_002DD6D8:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD6E4u); mmi::paddub(c.r[5], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0013C000u; return; } if (c.pc != 0x002DD6E4u) [[unlikely]] return; }
L_002DD6E4:
    set32(c.r[4], c.r[16].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD6F0u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x002DD6F0u) [[unlikely]] return; }
L_002DD6F0:
    set32(c.r[4], c.r[16].w[0] + 48u);
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD700u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x002DD700u) [[unlikely]] return; }
L_002DD700:
    mmi::paddub(c.r[2], c.r[17], c.r[0]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002DD720:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD738u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0077(c, 119u, depth + 1u); else { c.pc = 0x002DD5A0u; return; } if (c.pc != 0x002DD738u) [[unlikely]] return; }
L_002DD738:
    mmi::paddub(c.r[16], c.r[2], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD744u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 246u, depth + 1u); else { c.pc = 0x002DEDB0u; return; } if (c.pc != 0x002DD744u) [[unlikely]] return; }
L_002DD744:
    mmi::paddub(c.r[2], c.r[16], c.r[0]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002DD760:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[21] = ld32((c.r[4].w[0] + 52u));
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    mmi::paddub(c.r[17], c.r[6], c.r[0]);
    st32((c.r[4].w[0] + 52u), 0u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD79Cu); set32(c.r[4], c.r[18].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 20u, depth + 1u); else { c.pc = 0x0013C9E0u; return; } if (c.pc != 0x002DD79Cu) [[unlikely]] return; }
L_002DD79C:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.f[20] = c.f[0];
    set32(c.r[6], c.r[18].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD7B0u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002DD7B0u) [[unlikely]] return; }
L_002DD7B0:
    set32(c.r[16], c.r[29].w[0] + 100u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD7C0u); st32((c.r[16].w[0]), 0u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x002DD7C0u) [[unlikely]] return; }
L_002DD7C0:
    set32(c.r[4], c.r[18].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD7CCu); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x002DD7CCu) [[unlikely]] return; }
L_002DD7CC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_002DD7EC; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_002DD7EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);  if (t) { goto L_002DD808; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[12] = c.f[0];  if (t) { goto L_002DD82C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.budget -= 1;
L_002DD808:
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002DD828; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[1];  if (t) { goto L_002DD828; } }
L_002DD828:
    c.f[12] = c.f[0];
    c.budget -= 1;
L_002DD82C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD834u);  if (depth < kMaxDepth) unit_000E(c, 285u, depth + 1u); else { c.pc = 0x0013B410u; return; } if (c.pc != 0x002DD834u) [[unlikely]] return; }
L_002DD834:
    mmi::paddub(c.r[19], c.r[2], c.r[0]);
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[17].d[0] = c.r[2].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[5], c.r[29].w[0] + 96u);  if (t) { goto L_002DD854; } }
    mmi::paddub(c.r[19], c.r[2], c.r[0]);
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 2;
L_002DD854:
    set32(c.r[4], c.r[18].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD860u); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 34u, depth + 1u); else { c.pc = 0x0013CCC0u; return; } if (c.pc != 0x002DD860u) [[unlikely]] return; }
L_002DD860:
    c.f[2] = ld32((c.r[29].w[0] + 96u));
    c.f[1] = ld32((c.r[16].w[0]));
    set32(c.r[2], c.r[29].w[0] + 104u);
    c.f[0] = 0u;
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[2] = fp::mul(c.f[2], c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.facc = fp::add(c.f[2], c.f[1]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002DD8A4; } }
    st32((c.r[2].w[0]), 0u);
    st32((c.r[29].w[0] + 96u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 4;
L_002DD8A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD8ACu);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002DD8ACu) [[unlikely]] return; }
L_002DD8AC:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD8B8u); mmi::paddub(c.r[5], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0013C000u; return; } if (c.pc != 0x002DD8B8u) [[unlikely]] return; }
L_002DD8B8:
    set32(c.r[4], c.r[18].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD8C4u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x002DD8C4u) [[unlikely]] return; }
L_002DD8C4:
    set32(c.r[4], c.r[18].w[0] + 48u);
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD8D4u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x002DD8D4u) [[unlikely]] return; }
L_002DD8D4:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD8E0u); st32((c.r[18].w[0] + 52u), c.f[21]);  if (depth < kMaxDepth) unit_0077(c, 246u, depth + 1u); else { c.pc = 0x002DEDB0u; return; } if (c.pc != 0x002DD8E0u) [[unlikely]] return; }
L_002DD8E0:
    mmi::paddub(c.r[2], c.r[17], c.r[0]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002DD910:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 520u)));
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    c.budget -= 12;
    { const bool t = c.r[4].d[0] != 0ull; mmi::paddub(c.r[16], c.r[6], c.r[0]);  if (t) { goto L_002DD948; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002DDACC; } }
L_002DD948:
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002DD964; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002DD974; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002DD964:
    st8((c.r[18].w[0] + 528u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[18].w[0] + 520u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002DDACC; } }
L_002DD974:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[5], c.r[4].w[0] + 80u);  if (t) { goto L_002DD9AC; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DD9A8; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[18].w[0] + 528u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[18].w[0] + 520u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002DDACC; } }
L_002DD9A8:
    set32(c.r[5], c.r[4].w[0] + 80u);
    c.budget -= 1;
L_002DD9AC:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD9B8u); set32(c.r[6], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002DD9B8u) [[unlikely]] return; }
L_002DD9B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD9C0u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 330u, depth + 1u); else { c.pc = 0x0013BF40u; return; } if (c.pc != 0x002DD9C0u) [[unlikely]] return; }
L_002DD9C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD9D0u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 210u, depth + 1u); else { c.pc = 0x00102500u; return; } if (c.pc != 0x002DD9D0u) [[unlikely]] return; }
L_002DD9D0:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD9DCu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002DD9DCu) [[unlikely]] return; }
L_002DD9DC:
    set32(c.r[19], c.r[29].w[0] + 100u);
    c.f[13] = ld32((c.r[19].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD9ECu); c.f[12] = ld32((c.r[29].w[0] + 96u));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x002DD9ECu) [[unlikely]] return; }
L_002DD9EC:
    c.f[1] = ld32((c.r[29].w[0] + 96u));
    c.f[0] = ld32((c.r[19].w[0]));
    c.r[20].d[0] = c.r[2].d[0] << 48;
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 48);
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDA08u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002DDA08u) [[unlikely]] return; }
L_002DDA08:
    c.f[12] = ld32((c.r[29].w[0] + 104u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDA14u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x002DDA14u) [[unlikely]] return; }
L_002DDA14:
    c.f[0] = c.r[20].w[0];
    c.r[19].d[0] = c.r[2].d[0] << 48;
    c.f[12] = fp::cvt_s_w(c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDA28u); c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 48);  if (depth < kMaxDepth) unit_000E(c, 291u, depth + 1u); else { c.pc = 0x0013B4D0u; return; } if (c.pc != 0x002DDA28u) [[unlikely]] return; }
L_002DDA28:
    c.f[1] = c.r[16].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002DDA58; } }
    c.budget -= 2;
    { const bool t = c.r[20].sd[0] >= 0; mmi::paddub(c.r[20], c.r[16], c.r[0]);  if (t) { goto L_002DDA58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], 0u - c.r[16].w[0]);  if (t) { goto L_002DDA58; } }
    mmi::paddub(c.r[20], c.r[16], c.r[0]);
    c.budget -= 1;
L_002DDA58:
    c.f[0] = c.r[19].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDA64u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 291u, depth + 1u); else { c.pc = 0x0013B4D0u; return; } if (c.pc != 0x002DDA64u) [[unlikely]] return; }
L_002DDA64:
    c.f[1] = c.r[16].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_002DDA98; } }
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] >= 0; mmi::paddub(c.r[19], c.r[16], c.r[0]);  if (t) { goto L_002DDA94; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], 0u - c.r[16].w[0]);  if (t) { goto L_002DDA94; } }
    mmi::paddub(c.r[19], c.r[16], c.r[0]);
    c.budget -= 1;
L_002DDA94:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_002DDA98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDAA0u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002DDAA0u) [[unlikely]] return; }
L_002DDAA0:
    set32(c.r[2], 0u - c.r[20].w[0]);
    c.r[3].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDAB0u); c.r[4].d[0] = c.r[2].d[0] & c.r[3].d[0];  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002DDAB0u) [[unlikely]] return; }
L_002DDAB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDAB8u); c.r[4].d[0] = c.r[19].d[0] & 65535ull;  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002DDAB8u) [[unlikely]] return; }
L_002DDAB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDAC0u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002DDAC0u) [[unlikely]] return; }
L_002DDAC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDAC8u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 246u, depth + 1u); else { c.pc = 0x002DEDB0u; return; } if (c.pc != 0x002DDAC8u) [[unlikely]] return; }
L_002DDAC8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002DDACC:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002DDAF0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[5], c.r[3].w[0] + 28608u);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[3], 0u + 255u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 8056u));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.budget -= 15;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[16], ld32((c.r[5].w[0])));  if (t) { goto L_002DDB88; } }
    c.r[2].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[18], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 3;
L_002DDB38:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 1u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002DDB60; } }
    c.f[12] = ld32((c.r[17].w[0] + 7752u));
    c.f[13] = ld32((c.r[17].w[0] + 7760u));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDB58u); mmi::paddub(c.r[5], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 167u, depth + 1u); else { c.pc = 0x002DDC10u; return; } if (c.pc != 0x002DDB58u) [[unlikely]] return; }
L_002DDB58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 2u)));  if (t) { goto L_002DDB7C; } }
L_002DDB60:
    c.f[12] = ld32((c.r[17].w[0] + 7756u));
    c.f[13] = ld32((c.r[17].w[0] + 7764u));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDB74u); mmi::paddub(c.r[5], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 167u, depth + 1u); else { c.pc = 0x002DDC10u; return; } if (c.pc != 0x002DDB74u) [[unlikely]] return; }
L_002DDB74:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 2u)));
    c.budget -= 2;
L_002DDB7C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[18], c.r[18].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DDB38u | kUnwind; return; } goto L_002DDB38; } }
L_002DDB88:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 8057u));
    set32(c.r[3], 0u + 255u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002DDBF0; } }
    c.r[2].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 3;
L_002DDBA4:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002DDBCC; } }
    c.f[12] = ld32((c.r[17].w[0] + 7792u));
    c.f[13] = ld32((c.r[17].w[0] + 7800u));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDBC4u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 167u, depth + 1u); else { c.pc = 0x002DDC10u; return; } if (c.pc != 0x002DDBC4u) [[unlikely]] return; }
L_002DDBC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));  if (t) { goto L_002DDBE4; } }
L_002DDBCC:
    c.f[12] = ld32((c.r[17].w[0] + 7796u));
    c.f[13] = ld32((c.r[17].w[0] + 7804u));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDBE0u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 167u, depth + 1u); else { c.pc = 0x002DDC10u; return; } if (c.pc != 0x002DDBE0u) [[unlikely]] return; }
L_002DDBE0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.budget -= 1;
L_002DDBE4:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[16], c.r[16].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DDBA4u | kUnwind; return; } goto L_002DDBA4; } }
L_002DDBF0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002DDC10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.f[0] = 0u;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition); mmi::paddub(c.r[17], c.r[5], c.r[0]);  if (t) { goto L_002DDC4C; } }
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002DDD88; } }
L_002DDC4C:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002DDC74; } }
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002DDD88; } }
L_002DDC74:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002DDCB4; } }
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002DDD88; } }
    fpu_compare(c, fp::key(c.f[13]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002DDCB4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_002DDD8C; } }
L_002DDCB4:
    c.r[3].d[0] = ld8((c.r[17].w[0]));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);  if (t) { goto L_002DDD88; } }
    set32(c.r[4], c.r[4].w[0] + 26848u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x002DC000u < 16384u) { entry = entries_0077[(t - 0x002DC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002DDCDC:
    c.r[5].d[0] = ld8((c.r[17].w[0] + 3u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDCE8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x002DDCE8u) [[unlikely]] return; }
L_002DDCE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DDD88; } }
L_002DDCF0:
    c.r[5].d[0] = ld8((c.r[17].w[0] + 3u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDCFCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 22u, depth + 1u); else { c.pc = 0x00198340u; return; } if (c.pc != 0x002DDCFCu) [[unlikely]] return; }
L_002DDCFC:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 3u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 10u);  if (t) { goto L_002DDD10; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002DDD88; } }
L_002DDD10:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 512ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + 32u);  if (t) { goto L_002DDD88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDD28u);  if (depth < kMaxDepth) unit_0075(c, 244u, depth + 1u); else { c.pc = 0x002D78B0u; return; } if (c.pc != 0x002DDD28u) [[unlikely]] return; }
L_002DDD28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 29u);  if (t) { goto L_002DDD88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDD38u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x002DDD38u) [[unlikely]] return; }
L_002DDD38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DDD88; } }
L_002DDD40:
    c.r[5].d[0] = ld8((c.r[17].w[0] + 3u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDD4Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x002DDD4Cu) [[unlikely]] return; }
L_002DDD4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DDD88; } }
L_002DDD54:
    c.r[5].d[0] = ld8((c.r[17].w[0] + 3u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDD60u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 351u, depth + 1u); else { c.pc = 0x00197C30u; return; } if (c.pc != 0x002DDD60u) [[unlikely]] return; }
L_002DDD60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DDD88; } }
L_002DDD68:
    c.r[5].d[0] = ld8((c.r[17].w[0] + 3u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDD74u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 33u, depth + 1u); else { c.pc = 0x00198530u; return; } if (c.pc != 0x002DDD74u) [[unlikely]] return; }
L_002DDD74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DDD88; } }
L_002DDD7C:
    c.r[5].d[0] = ld8((c.r[17].w[0] + 3u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDD88u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 330u, depth + 1u); else { c.pc = 0x00197890u; return; } if (c.pc != 0x002DDD88u) [[unlikely]] return; }
L_002DDD88:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002DDD8C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002DDDA0:
    set32(c.r[3], ld32((c.r[4].w[0] + 264u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    c.r[1].d[0] = c.r[6].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (t) { goto L_002DE140; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 519u)));
    set32(c.r[6], c.r[6].w[0] - 10u);
    c.r[1].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[3].w[0] + 1552u);  if (t) { goto L_002DE0C4; } }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[7], c.r[7].w[0] + 26880u);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], ld32((c.r[6].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[6].w[0];  c.pc = t; if (t - 0x002DC000u < 16384u) { entry = entries_0077[(t - 0x002DC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002DDDE4:
    c.r[7].d[0] = ld8((c.r[3].w[0] + 531u));
    c.r[6].d[0] = ld8((c.r[5].w[0] + 531u));
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == c.r[6].d[0];  if (t) { goto L_002DE0C4; } }
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8391u)));
    set32(c.r[6], 0u + 2u);
    set32(c.r[7], c.r[8].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 1);
    set32(c.r[8], c.r[4].w[0] + c.r[7].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[7], ld32((c.r[28].w[0] - 26304u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.budget -= 13;
    { const bool t = c.r[7].d[0] != c.r[6].d[0];  if (t) { goto L_002DDE78; } }
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8386u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[8], c.r[6].w[0] - 25072u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8437u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8391u)));
    set32(c.r[9], c.r[10].w[0] << 2);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    set32(c.r[9], c.r[9].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    c.r[6].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);  if (t) { goto L_002DDE68; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8438u)));
    c.r[6].d[0] = c.r[6].d[0] ^ 0ull;
    c.r[6].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_002DDE68:
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));  if (t) { goto L_002DDEA0; } }
L_002DDE78:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8386u)));
    set32(c.r[7], c.r[6].w[0] - 18800u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8391u)));
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    c.budget -= 10;
L_002DDEA0:
    set32(c.r[6], ld32((c.r[3].w[0] + 1264u)));
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    st32((c.r[3].w[0] + 1264u), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 1268u)));
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 1268u), c.r[3].w[0]);  if (t) { goto L_002DE0C4; } }
L_002DDEBC:
    c.r[7].d[0] = ld8((c.r[3].w[0] + 531u));
    c.r[6].d[0] = ld8((c.r[5].w[0] + 531u));
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == c.r[6].d[0];  if (t) { goto L_002DE0C4; } }
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8391u)));
    set32(c.r[6], 0u + 2u);
    set32(c.r[7], c.r[8].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 1);
    set32(c.r[8], c.r[7].w[0] + c.r[4].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 1u)));
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[8].w[0] + 1u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[7], ld32((c.r[28].w[0] - 26304u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.budget -= 13;
    { const bool t = c.r[7].d[0] != c.r[6].d[0];  if (t) { goto L_002DDF50; } }
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8386u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[8], c.r[6].w[0] - 25280u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8437u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8391u)));
    set32(c.r[9], c.r[10].w[0] << 2);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    set32(c.r[9], c.r[9].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    c.r[6].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);  if (t) { goto L_002DDF40; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8438u)));
    c.r[6].d[0] = c.r[6].d[0] ^ 0ull;
    c.r[6].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_002DDF40:
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));  if (t) { goto L_002DDF78; } }
L_002DDF50:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8386u)));
    set32(c.r[7], c.r[6].w[0] - 18832u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8391u)));
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    c.budget -= 10;
L_002DDF78:
    set32(c.r[6], ld32((c.r[3].w[0] + 1264u)));
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    st32((c.r[3].w[0] + 1264u), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 1268u)));
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 1268u), c.r[3].w[0]);  if (t) { goto L_002DE0C4; } }
L_002DDF94:
    c.r[7].d[0] = ld8((c.r[3].w[0] + 531u));
    c.r[6].d[0] = ld8((c.r[5].w[0] + 531u));
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == c.r[6].d[0];  if (t) { goto L_002DE0C4; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 2u)));
    set32(c.r[6], 0u + 13u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != c.r[6].d[0]; set32(c.r[6], 0u + 15u);  if (t) { goto L_002DDFC8; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 7u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { goto L_002DDFEC; } }
    set32(c.r[6], 0u + 15u);
    c.budget -= 1;
L_002DDFC8:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != c.r[6].d[0];  if (t) { goto L_002DDFE0; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 6u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 6u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { goto L_002DDFEC; } }
L_002DDFE0:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 8u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 3;
L_002DDFEC:
    set32(c.r[6], ld32((c.r[3].w[0] + 1264u)));
    set32(c.r[6], c.r[6].w[0] + 10u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 1264u), c.r[6].w[0]);  if (t) { goto L_002DE0C4; } }
L_002DDFFC:
    c.r[7].d[0] = ld8((c.r[3].w[0] + 531u));
    c.r[6].d[0] = ld8((c.r[5].w[0] + 531u));
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == c.r[6].d[0];  if (t) { goto L_002DE0C4; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 9u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 9u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[6], ld32((c.r[3].w[0] + 1264u)));
    set32(c.r[6], c.r[6].w[0] + 5u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 1264u), c.r[6].w[0]);  if (t) { goto L_002DE0C4; } }
L_002DE028:
    c.r[7].d[0] = ld8((c.r[3].w[0] + 531u));
    c.r[6].d[0] = ld8((c.r[5].w[0] + 531u));
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == c.r[6].d[0];  if (t) { goto L_002DE0C4; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 10u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[6], ld32((c.r[3].w[0] + 1264u)));
    set32(c.r[6], c.r[6].w[0] + 20u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 1264u), c.r[6].w[0]);  if (t) { goto L_002DE0C4; } }
L_002DE054:
    c.r[7].d[0] = ld8((c.r[3].w[0] + 531u));
    c.r[6].d[0] = ld8((c.r[5].w[0] + 531u));
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == c.r[6].d[0];  if (t) { goto L_002DE0C4; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    set32(c.r[6], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != c.r[6].d[0];  if (t) { goto L_002DE0AC; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8386u)));
    set32(c.r[6], 0u + 49u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == c.r[6].d[0];  if (t) { goto L_002DE09C; } }
    set32(c.r[6], 0u + 51u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[6].d[0];  if (t) { goto L_002DE09C; } }
    set32(c.r[6], 0u + 54u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[6].d[0];  if (t) { goto L_002DE0AC; } }
L_002DE09C:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 8u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { goto L_002DE0B8; } }
L_002DE0AC:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 11u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 11u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 3;
L_002DE0B8:
    set32(c.r[6], ld32((c.r[3].w[0] + 1264u)));
    set32(c.r[6], c.r[6].w[0] + 100u);
    st32((c.r[3].w[0] + 1264u), c.r[6].w[0]);
    c.budget -= 3;
L_002DE0C4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    c.r[1].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002DE0E0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 1574u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[5].w[0] + 1574u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_002DE0E0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 519u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002DE13C; } }
    c.r[6].d[0] = c.r[3].d[0] << 56;
    set32(c.r[3], 0u + 13u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_002DE13C; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 531u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002DE11C; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 268u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[6].w[0] + 268u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_002DE11C:
    c.r[6].d[0] = ld8((c.r[5].w[0] + 531u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_002DE13C; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 269u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[6].w[0] + 269u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_002DE13C:
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.budget -= 1;
L_002DE140:
    set32(c.r[6], 0u + 99u);
    c.budget -= 1;
L_002DE144:
    mmi::paddub(c.r[8], c.r[0], c.r[0]);
    mmi::paddub(c.r[9], c.r[4], c.r[0]);
    c.budget -= 3;
L_002DE150:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0])));
    c.r[1].d[0] = c.r[3].sd[0] < 100ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] != 0ull) { set32(c.r[8], c.r[8].w[0] + 1u);  goto L_002DE16C; }
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 3;
L_002DE16C:
    c.r[3].d[0] = c.r[8].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[9], c.r[9].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DE150u | kUnwind; return; } goto L_002DE150; } }
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[3].d[0] = c.r[7].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 6u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DE144u | kUnwind; return; } goto L_002DE144; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], c.r[3].w[0] + 268u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 268u)));
    c.r[1].d[0] = c.r[3].sd[0] < 100ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002DE1A8; } }
    set32(c.r[3], 0u + 99u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002DE1A8:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], c.r[3].w[0] + 269u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 269u)));
    c.r[1].d[0] = c.r[3].sd[0] < 100ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002DE1C8; } }
    set32(c.r[3], 0u + 99u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002DE1C8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    c.r[1].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002DE1F0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 1574u)));
    c.r[1].d[0] = c.r[3].sd[0] < 100ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002DE1F0; } }
    set32(c.r[3], 0u + 99u);
    st16((c.r[5].w[0] + 1574u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002DE1F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002DE200:
    c.r[2].d[0] = c.r[5].d[0] & 128ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DE220; } }
    c.r[2].d[0] = c.r[5].d[0] & 127ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.f[0] = ld32((c.r[4].w[0] + 7752u));  if (t) { goto L_002DE234; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[4].w[0] + 7792u));  if (t) { goto L_002DE234; } }
L_002DE220:
    c.r[2].d[0] = c.r[5].d[0] & 127ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.f[0] = ld32((c.r[4].w[0] + 7756u));  if (t) { goto L_002DE234; } }
    c.f[0] = ld32((c.r[4].w[0] + 7796u));
    c.budget -= 2;
L_002DE234:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[12]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002DE270; } }
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[13]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002DE26C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 724u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[6].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DE26C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002DE270; } }
L_002DE26C:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_002DE270:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002DE280:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26476u)));
    set32(c.r[2], c.r[28].w[0] - 26456u);
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    c.r[17].d[0] = c.r[3].d[0] ^ 1ull;
    set32(c.r[18], c.r[17].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 16;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[2].w[0] - 1u);  if (t) { goto L_002DE318; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[2], c.r[2].w[0] - 14112u);
    set32(c.r[3], c.r[17].w[0] << 10);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[20], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
L_002DE2D8:
    set32(c.r[4], ld32((c.r[20].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], c.r[28].w[0] - 26448u);  if (t) { goto L_002DE31C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[2], c.r[16], c.r[0]);  if (t) { goto L_002DE30C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE2F8u); mmi::paddub(c.r[5], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 202u, depth + 1u); else { c.pc = 0x002DE520u; return; } if (c.pc != 0x002DE2F8u) [[unlikely]] return; }
L_002DE2F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DE308; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002DE39C; } }
L_002DE308:
    mmi::paddub(c.r[2], c.r[16], c.r[0]);
    c.budget -= 1;
L_002DE30C:
    set32(c.r[20], c.r[20].w[0] - 4u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DE2D8u | kUnwind; return; } goto L_002DE2D8; } }
L_002DE318:
    set32(c.r[2], c.r[28].w[0] - 26448u);
    c.budget -= 1;
L_002DE31C:
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[2].w[0] - 1u);  if (t) { goto L_002DE398; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[2], c.r[2].w[0] - 10016u);
    set32(c.r[3], c.r[17].w[0] << 10);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
L_002DE344:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002DE39C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { mmi::paddub(c.r[2], c.r[16], c.r[0]);  goto L_002DE388; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002DE384; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE374u); mmi::paddub(c.r[5], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 202u, depth + 1u); else { c.pc = 0x002DE520u; return; } if (c.pc != 0x002DE374u) [[unlikely]] return; }
L_002DE374:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DE384; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002DE39C; } }
L_002DE384:
    mmi::paddub(c.r[2], c.r[16], c.r[0]);
    c.budget -= 1;
L_002DE388:
    set32(c.r[17], c.r[17].w[0] - 4u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DE344u | kUnwind; return; } goto L_002DE344; } }
    c.budget -= 1;
L_002DE398:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_002DE39C:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002DE3C0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26476u)));
    set32(c.r[2], c.r[28].w[0] - 26456u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    mmi::paddub(c.r[21], c.r[5], c.r[0]);
    c.r[18].d[0] = c.r[3].d[0] ^ 1ull;
    set32(c.r[20], c.r[18].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 18;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], c.r[2].w[0] - 1u);  if (t) { goto L_002DE460; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[2], c.r[2].w[0] - 14112u);
    set32(c.r[3], c.r[18].w[0] << 10);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[19], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
L_002DE420:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], c.r[28].w[0] - 26448u);  if (t) { goto L_002DE464; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[2], c.r[17], c.r[0]);  if (t) { goto L_002DE454; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE440u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 202u, depth + 1u); else { c.pc = 0x002DE520u; return; } if (c.pc != 0x002DE440u) [[unlikely]] return; }
L_002DE440:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DE450; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002DE4F4; } }
L_002DE450:
    mmi::paddub(c.r[2], c.r[17], c.r[0]);
    c.budget -= 1;
L_002DE454:
    set32(c.r[19], c.r[19].w[0] - 4u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DE420u | kUnwind; return; } goto L_002DE420; } }
L_002DE460:
    set32(c.r[2], c.r[28].w[0] - 26448u);
    c.budget -= 1;
L_002DE464:
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[19], c.r[2].w[0] - 1u);  if (t) { goto L_002DE4F0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[2], c.r[2].w[0] - 10016u);
    set32(c.r[3], c.r[18].w[0] << 10);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[19].w[0] << 2);
    c.r[17].d[0] = c.r[21].d[0] << 56;
    set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);
    c.budget -= 8;
L_002DE494:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002DE4F4; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; mmi::paddub(c.r[2], c.r[19], c.r[0]);  if (t) { goto L_002DE4E4; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002DE4E0; } }
    c.r[2].d[0] = ld8((c.r[5].w[0] + 531u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { goto L_002DE4E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE4D0u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 202u, depth + 1u); else { c.pc = 0x002DE520u; return; } if (c.pc != 0x002DE4D0u) [[unlikely]] return; }
L_002DE4D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DE4E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002DE4F4; } }
L_002DE4E0:
    mmi::paddub(c.r[2], c.r[19], c.r[0]);
    c.budget -= 1;
L_002DE4E4:
    set32(c.r[18], c.r[18].w[0] - 4u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DE494u | kUnwind; return; } goto L_002DE494; } }
L_002DE4F0:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_002DE4F4:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002DE520:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[16], ld32((c.r[4].w[0] + 72u)));
    set32(c.r[2], 0u + 4u);
    c.r[3].d[0] = ld8((c.r[16].w[0]));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; mmi::paddub(c.r[20], c.r[5], c.r[0]);  if (t) { goto L_002DE91C; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002DE878; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[16], c.r[4].w[0] + 64u);  if (t) { goto L_002DE5B8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002DE5B4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[16], c.r[4].w[0] + 64u);  if (t) { goto L_002DE58C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002DEA78; } }
    set32(c.r[16], c.r[4].w[0] + 64u);
    c.budget -= 1;
L_002DE58C:
    set32(c.r[5], c.r[16].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE598u); mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x002DE598u) [[unlikely]] return; }
L_002DE598:
    c.f[1] = ld32((c.r[16].w[0] + 48u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002DEA74; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002DEA78; } }
L_002DE5B4:
    set32(c.r[16], c.r[4].w[0] + 64u);
    c.budget -= 1;
L_002DE5B8:
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    mmi::paddub(c.r[18], c.r[16], c.r[0]);
    mmi::paddub(c.r[19], c.r[16], c.r[0]);
    c.budget -= 3;
L_002DE5C4:
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[6], c.r[16].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE5D4u); mmi::paddub(c.r[5], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002DE5D4u) [[unlikely]] return; }
L_002DE5D4:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE5E0u); set32(c.r[5], c.r[18].w[0] + 144u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x002DE5E0u) [[unlikely]] return; }
L_002DE5E0:
    c.f[20] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE5ECu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_000E(c, 291u, depth + 1u); else { c.pc = 0x0013B4D0u; return; } if (c.pc != 0x002DE5ECu) [[unlikely]] return; }
L_002DE5EC:
    c.f[1] = ld32((c.r[16].w[0] + 192u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[29].w[0] + 112u);  if (t) { goto L_002DE60C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002DEA78; } }
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 1;
L_002DE60C:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE618u); set32(c.r[5], c.r[18].w[0] + 144u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x002DE618u) [[unlikely]] return; }
L_002DE618:
    set32(c.r[4], c.r[29].w[0] + 112u);
    mmi::paddub(c.r[5], c.r[20], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE628u); mmi::paddub(c.r[6], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002DE628u) [[unlikely]] return; }
L_002DE628:
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[19].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE638u); set32(c.r[6], c.r[18].w[0] + 144u);  if (depth < kMaxDepth) unit_002D(c, 7u, depth + 1u); else { c.pc = 0x001B4450u; return; } if (c.pc != 0x002DE638u) [[unlikely]] return; }
L_002DE638:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_002DE64C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002DEA78; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002DE64C:
    c.r[2].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[18], c.r[18].w[0] + 16u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DE5C4u | kUnwind; return; } goto L_002DE5C4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[18], c.r[2].w[0] - 4936u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45FA0000u);
    c.f[20] = c.r[2].w[0];
    mmi::paddub(c.r[19], c.r[0], c.r[0]);
    c.budget -= 5;
L_002DE670:
    c.r[5].d[0] = ld8((c.r[18].w[0]));
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[2], c.r[5].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[3], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[5].w[0] << 4);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[3].w[0] + 48u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE698u); set32(c.r[6], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002DE698u) [[unlikely]] return; }
L_002DE698:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE6A0u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x002DE6A0u) [[unlikely]] return; }
L_002DE6A0:
    c.r[2].d[0] = ld8((c.r[18].w[0]));
    set32(c.r[4], c.r[29].w[0] + 128u);
    mmi::paddub(c.r[5], c.r[20], c.r[0]);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE6C4u); set32(c.r[6], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002DE6C4u) [[unlikely]] return; }
L_002DE6C4:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE6D0u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x002DE6D0u) [[unlikely]] return; }
L_002DE6D0:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002DE6F0; } }
    c.r[17].d[0] = c.r[17].d[0] | 2ull;
    c.budget -= 2;
L_002DE6F0:
    c.r[2].d[0] = ld8((c.r[18].w[0]));
    set32(c.r[4], c.r[29].w[0] + 128u);
    mmi::paddub(c.r[5], c.r[20], c.r[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE70Cu); set32(c.r[6], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002DE70Cu) [[unlikely]] return; }
L_002DE70C:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE718u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x002DE718u) [[unlikely]] return; }
L_002DE718:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 3u);  if (t) { goto L_002DE73C; } }
    c.r[17].d[0] = c.r[17].d[0] | 1ull;
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
L_002DE73C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002DE808; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_002DE7D0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_002DE79C; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 128u);  if (t) { goto L_002DE770; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[29].w[0] + 128u);  if (t) { goto L_002DE814; } }
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 1;
L_002DE770:
    c.f[12] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE77Cu); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x002DE77Cu) [[unlikely]] return; }
L_002DE77C:
    c.r[2].d[0] = ld8((c.r[18].w[0]));
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE794u); set32(c.r[5], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x002DE794u) [[unlikely]] return; }
L_002DE794:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DE810; } }
L_002DE79C:
    c.r[3].d[0] = ld8((c.r[18].w[0]));
    set32(c.r[2], c.r[29].w[0] + 128u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    c.f[3] = ld32((c.r[3].w[0] + 48u));
    c.f[2] = ld32((c.r[3].w[0] + 52u));
    c.f[1] = ld32((c.r[3].w[0] + 56u));
    c.f[0] = ld32((c.r[3].w[0] + 60u));
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 12u), c.f[0]);  if (t) { goto L_002DE810; } }
L_002DE7D0:
    c.r[3].d[0] = ld8((c.r[18].w[0]));
    set32(c.r[2], c.r[29].w[0] + 128u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    c.f[3] = ld32((c.r[3].w[0] + 64u));
    c.f[2] = ld32((c.r[3].w[0] + 68u));
    c.f[1] = ld32((c.r[3].w[0] + 72u));
    c.f[0] = ld32((c.r[3].w[0] + 76u));
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 12u), c.f[0]);  if (t) { goto L_002DE810; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_002DE808:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);  if (t) { goto L_002DEA7C; } }
L_002DE810:
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.budget -= 1;
L_002DE814:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE81Cu); mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x002DE81Cu) [[unlikely]] return; }
L_002DE81C:
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_002DE834; }
    c.f[20] = c.f[0];
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 2;
L_002DE834:
    c.r[2].d[0] = c.r[19].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DE670u | kUnwind; return; } goto L_002DE670; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45FA0000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[20]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002DEA74; } }
    c.f[0] = ld32((c.r[16].w[0] + 192u));
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002DEA74; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002DEA78; } }
L_002DE878:
    set32(c.r[4], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE884u); set32(c.r[6], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_005B(c, 138u, depth + 1u); else { c.pc = 0x0026E440u; return; } if (c.pc != 0x002DE884u) [[unlikely]] return; }
L_002DE884:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE890u); set32(c.r[5], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_000F(c, 25u, depth + 1u); else { c.pc = 0x0013CB10u; return; } if (c.pc != 0x002DE890u) [[unlikely]] return; }
L_002DE890:
    c.f[1] = ld32((c.r[16].w[0] + 32u));
    c.f[2] = ld32((c.r[29].w[0] + 144u));
    c.f[0] = c.f[1] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002DEA74; } }
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002DEA74; } }
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    c.f[2] = ld32((c.r[29].w[0] + 148u));
    c.f[0] = c.f[1] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002DEA74; } }
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002DEA74; } }
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[2] = ld32((c.r[29].w[0] + 152u));
    c.f[0] = c.f[1] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002DEA74; } }
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002DEA74; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002DEA78; } }
L_002DE91C:
    set32(c.r[16], c.r[4].w[0] + 64u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE92Cu); set32(c.r[6], c.r[16].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002DE92Cu) [[unlikely]] return; }
L_002DE92C:
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[6], c.r[16].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE93Cu); mmi::paddub(c.r[5], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002DE93Cu) [[unlikely]] return; }
L_002DE93C:
    set32(c.r[4], c.r[16].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE94Cu); mmi::paddub(c.r[17], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 21u, depth + 1u); else { c.pc = 0x0013CA20u; return; } if (c.pc != 0x002DE94Cu) [[unlikely]] return; }
L_002DE94C:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE958u); set32(c.r[5], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x002DE958u) [[unlikely]] return; }
L_002DE958:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[20] = c.f[0];  if (t) { goto L_002DE974; } }
    c.r[17].d[0] = c.r[17].d[0] | 1ull;
    c.budget -= 1;
L_002DE974:
    set32(c.r[4], c.r[16].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE980u); set32(c.r[5], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_000F(c, 21u, depth + 1u); else { c.pc = 0x0013CA20u; return; } if (c.pc != 0x002DE980u) [[unlikely]] return; }
L_002DE980:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE98Cu); set32(c.r[5], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x002DE98Cu) [[unlikely]] return; }
L_002DE98C:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 3u);  if (t) { goto L_002DE9AC; } }
    c.r[17].d[0] = c.r[17].d[0] | 2ull;
    set32(c.r[2], 0u + 3u);
    c.budget -= 2;
L_002DE9AC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; set32(c.r[4], c.r[29].w[0] + 160u);  if (t) { goto L_002DEA30; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_002DEA04; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_002DE9DC; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002DE9DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 208u);  if (t) { goto L_002DEA50; } }
L_002DE9DC:
    c.f[3] = ld32((c.r[16].w[0] + 48u));
    c.f[2] = ld32((c.r[16].w[0] + 52u));
    c.f[1] = ld32((c.r[16].w[0] + 56u));
    c.f[0] = ld32((c.r[16].w[0] + 60u));
    set32(c.r[2], c.r[29].w[0] + 208u);
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 12u), c.f[0]);  if (t) { goto L_002DEA4C; } }
L_002DEA04:
    c.f[3] = ld32((c.r[16].w[0] + 64u));
    c.f[2] = ld32((c.r[16].w[0] + 68u));
    c.f[1] = ld32((c.r[16].w[0] + 72u));
    c.f[0] = ld32((c.r[16].w[0] + 76u));
    set32(c.r[2], c.r[29].w[0] + 208u);
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 12u), c.f[0]);  if (t) { goto L_002DEA4C; } }
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 1;
L_002DEA30:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEA3Cu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x002DEA3Cu) [[unlikely]] return; }
L_002DEA3C:
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEA4Cu); set32(c.r[6], c.r[16].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x002DEA4Cu) [[unlikely]] return; }
L_002DEA4C:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 1;
L_002DEA50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEA58u); mmi::paddub(c.r[5], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x002DEA58u) [[unlikely]] return; }
L_002DEA58:
    c.f[1] = ld32((c.r[16].w[0] + 144u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002DEA74; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002DEA78; } }
L_002DEA74:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_002DEA78:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002DEA7C:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_002DEAA0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 9u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002DEAF8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 9u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002DEAF8; } }
    set32(c.r[6], ld32((c.r[5].w[0] + 632u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002DEAF8; } }
    set32(c.r[3], 0u + 130u);
    c.budget -= 1;
L_002DEAC8:
    set32(c.r[5], ld32((c.r[6].w[0] + 72u)));
    c.r[5].d[0] = ld8((c.r[5].w[0] + 1u));
    c.r[5].d[0] = c.r[5].d[0] & 130ull;
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_002DEAE8; } }
    st32((c.r[4].w[0] + 520u), c.r[6].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 524u), c.r[6].w[0]);  if (t) { goto L_002DEAF8; } }
L_002DEAE8:
    set32(c.r[6], ld32((c.r[6].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DEAC8u | kUnwind; return; } goto L_002DEAC8; } }
    c.budget -= 1;
L_002DEAF8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002DEB00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00860000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[9], c.r[2].w[0] + 26144u);
    mmi::paddub(c.r[11], c.r[0], c.r[0]);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    mmi::paddub(c.r[10], c.r[0], c.r[0]);
    set32(c.r[6], 0u + 6u);
    set32(c.r[3], 0u + 3u);
    c.budget -= 10;
L_002DEB28:
    c.budget -= 2;
    if (c.r[9].d[0] == c.r[4].d[0]) { set32(c.r[10], c.r[10].w[0] + 1u);  goto L_002DEBC4; }
    c.r[8].d[0] = ld16((c.r[4].w[0] + 846u));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 8385u)));
    c.r[2].d[0] = c.r[8].d[0] & c.r[7].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DEBC0; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DEBA0; } }
    c.r[2].d[0] = ld8((c.r[9].w[0] + 745u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002DEBA0; } }
    c.r[2].d[0] = ld8((c.r[9].w[0] + 746u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[6].d[0];  if (t) { goto L_002DEBA0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 755u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002DEBA0; } }
    set32(c.r[2], ld32((c.r[9].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_002DEBA0; } }
    c.r[2].d[0] = ~(c.r[7].d[0] | 0ull);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[8].d[0] & c.r[2].d[0];
    st16((c.r[4].w[0] + 846u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[9].w[0] + 1520u), 0u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    st32((c.r[9].w[0] + 520u), 0u);
    c.budget -= 7;
L_002DEBA0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DEBC0; } }
    set32(c.r[2], ld32((c.r[9].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_002DEBC0; } }
    set32(c.r[11], c.r[11].w[0] + 1u);
    c.budget -= 1;
L_002DEBC0:
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.budget -= 1;
L_002DEBC4:
    c.r[2].d[0] = c.r[10].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[9], c.r[9].w[0] + 8448u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DEB28u | kUnwind; return; } goto L_002DEB28; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; mmi::paddub(c.r[2], c.r[16], c.r[0]);  if (t) { goto L_002DEBEC; } }
    c.budget -= 2;
    { const bool t = c.r[11].d[0] == 0ull;  if (t) { goto L_002DEBE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEBE8u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x002DEBE8u) [[unlikely]] return; }
L_002DEBE8:
    mmi::paddub(c.r[2], c.r[16], c.r[0]);
    c.budget -= 1;
L_002DEBEC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002DEC00:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 520u)));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002DED98; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 2u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002DED98; } }
    set32(c.r[16], ld32((c.r[5].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002DED98; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002DED98; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002DED98; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002DED98; } }
    c.f[0] = ld32((c.r[16].w[0] + 2096u));
    set32(c.r[5], c.r[4].w[0] + 32u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[18], c.r[29].w[0] + 68u);
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 2100u));
    set32(c.r[17], c.r[29].w[0] + 72u);
    mmi::paddub(c.r[6], c.r[4], c.r[0]);
    st32((c.r[18].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 2104u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEC94u); st32((c.r[17].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002DEC94u) [[unlikely]] return; }
L_002DEC94:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 369u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DECD8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[2], c.r[2].w[0] - 28448u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[2].w[0] + 144u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DECD0u); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 147u, depth + 1u); else { c.pc = 0x0026E4D0u; return; } if (c.pc != 0x002DECD0u) [[unlikely]] return; }
L_002DECD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[29].w[0] + 64u));  if (t) { goto L_002DECFC; } }
L_002DECD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DECE0u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002DECE0u) [[unlikely]] return; }
L_002DECE0:
    set32(c.r[2], ld32((c.r[16].w[0] + 1296u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DECECu); set32(c.r[4], 0u - c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002DECECu) [[unlikely]] return; }
L_002DECEC:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DECF8u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x002DECF8u) [[unlikely]] return; }
L_002DECF8:
    c.f[1] = ld32((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_002DECFC:
    c.f[0] = ld32((c.r[17].w[0]));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DED0Cu); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002DED0Cu) [[unlikely]] return; }
L_002DED0C:
    c.f[12] = ld32((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DED18u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x002DED18u) [[unlikely]] return; }
L_002DED18:
    set32(c.r[3], 0u - c.r[2].w[0]);
    c.r[1].d[0] = c.r[3].sd[0] < 5633ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].d[0] = c.r[3].sd[0] < -5632ll ? 1ull : 0ull;  if (t) { goto L_002DED48; } }
    c.r[1].d[0] = c.r[3].sd[0] < 16384ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002DED44; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 751u)));
    c.r[3].d[0] = c.r[3].d[0] | 32ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 751u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002DED98; } }
L_002DED44:
    c.r[1].d[0] = c.r[3].sd[0] < -5632ll ? 1ull : 0ull;
    c.budget -= 1;
L_002DED48:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002DED6C; } }
    c.r[1].d[0] = c.r[3].sd[0] < -16383ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002DED6C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 751u)));
    c.r[3].d[0] = c.r[3].d[0] | 16ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 751u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002DED98; } }
L_002DED6C:
    c.f[12] = ld32((c.r[29].w[0] + 64u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DED78u); c.f[13] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x002DED78u) [[unlikely]] return; }
L_002DED78:
    set32(c.r[4], c.r[2].w[0] + 8192u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 751u)));
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 14));
    c.r[5].d[0] = c.r[4].d[0] & 3ull;
    set32(c.r[4], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] << (c.r[5].w[0] & 31u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 751u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
L_002DED98:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002DEDB0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 520u)));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002DF030; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 2u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002DF030; } }
    set32(c.r[16], ld32((c.r[5].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002DF030; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002DF030; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002DF030; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002DF030; } }
    c.f[0] = ld32((c.r[16].w[0] + 2096u));
    set32(c.r[5], c.r[4].w[0] + 32u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[18], c.r[29].w[0] + 68u);
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 2100u));
    set32(c.r[17], c.r[29].w[0] + 72u);
    mmi::paddub(c.r[6], c.r[4], c.r[0]);
    st32((c.r[18].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 2104u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEE44u); st32((c.r[17].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002DEE44u) [[unlikely]] return; }
L_002DEE44:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 369u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DEE88; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[2], c.r[2].w[0] - 28448u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[2].w[0] + 144u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEE80u); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 147u, depth + 1u); else { c.pc = 0x0026E4D0u; return; } if (c.pc != 0x002DEE80u) [[unlikely]] return; }
L_002DEE80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[29].w[0] + 64u));  if (t) { goto L_002DEEAC; } }
L_002DEE88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEE90u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002DEE90u) [[unlikely]] return; }
L_002DEE90:
    set32(c.r[2], ld32((c.r[16].w[0] + 1296u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEE9Cu); set32(c.r[4], 0u - c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002DEE9Cu) [[unlikely]] return; }
L_002DEE9C:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEEA8u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x002DEEA8u) [[unlikely]] return; }
L_002DEEA8:
    c.f[1] = ld32((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_002DEEAC:
    c.f[0] = ld32((c.r[17].w[0]));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEEBCu); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002DEEBCu) [[unlikely]] return; }
L_002DEEBC:
    c.f[12] = ld32((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEEC8u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x002DEEC8u) [[unlikely]] return; }
L_002DEEC8:
    set32(c.r[3], 0u - c.r[2].w[0]);
    c.r[1].d[0] = c.r[3].sd[0] < -5632ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002DEEF4; } }
    c.r[1].d[0] = c.r[3].sd[0] < -16383ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002DEEF4; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 750u)));
    c.r[3].d[0] = c.r[3].d[0] | 4ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 750u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002DF030; } }
L_002DEEF4:
    c.f[13] = ld32((c.r[17].w[0]));
    c.f[12] = ld32((c.r[29].w[0] + 64u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEF04u); mmi::paddub(c.r[17], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x002DEF04u) [[unlikely]] return; }
L_002DEF04:
    set32(c.r[3], c.r[2].w[0] + 8192u);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[6].d[0] = c.r[3].d[0] & 4095ull;
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 14));
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 12));
    set32(c.r[3], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << (c.r[5].w[0] & 31u));
    c.r[17].d[0] = c.r[17].d[0] | c.r[3].d[0];
    set32(c.r[3], 0u + 15u);
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[1].d[0] = c.r[6].sd[0] < 1025ll ? 1ull : 0ull;  if (t) { goto L_002DF018; } }
    set32(c.r[3], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[1].d[0] = c.r[6].sd[0] < 3072ll ? 1ull : 0ull;  if (t) { goto L_002DF004; } }
    set32(c.r[3], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[1].d[0] = c.r[6].sd[0] < 1025ll ? 1ull : 0ull;  if (t) { goto L_002DEFF0; } }
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[1].d[0] = c.r[6].sd[0] < 3072ll ? 1ull : 0ull;  if (t) { goto L_002DEFDC; } }
    set32(c.r[3], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[1].d[0] = c.r[6].sd[0] < 1025ll ? 1ull : 0ull;  if (t) { goto L_002DEFC8; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[1].d[0] = c.r[6].sd[0] < 3072ll ? 1ull : 0ull;  if (t) { goto L_002DEFB4; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[1].d[0] = c.r[6].sd[0] < 1025ll ? 1ull : 0ull;  if (t) { goto L_002DEFA0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[1].d[0] = c.r[6].sd[0] < 3072ll ? 1ull : 0ull;  if (t) { goto L_002DEF8C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 750u)));  if (t) { goto L_002DF028; } }
    c.r[1].d[0] = c.r[6].sd[0] < 3072ll ? 1ull : 0ull;
    c.budget -= 1;
L_002DEF8C:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002DF024; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[17].d[0] | 8ull;  if (t) { goto L_002DF024; } }
    c.r[1].d[0] = c.r[6].sd[0] < 1025ll ? 1ull : 0ull;
    c.budget -= 1;
L_002DEFA0:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002DF024; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[17].d[0] | 2ull;  if (t) { goto L_002DF024; } }
    c.r[1].d[0] = c.r[6].sd[0] < 3072ll ? 1ull : 0ull;
    c.budget -= 1;
L_002DEFB4:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002DF024; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[17].d[0] | 1ull;  if (t) { goto L_002DF024; } }
    c.r[1].d[0] = c.r[6].sd[0] < 1025ll ? 1ull : 0ull;
    c.budget -= 1;
L_002DEFC8:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002DF024; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[17].d[0] | 4ull;  if (t) { goto L_002DF024; } }
    c.r[1].d[0] = c.r[6].sd[0] < 3072ll ? 1ull : 0ull;
    c.budget -= 1;
L_002DEFDC:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002DF024; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[17].d[0] | 2ull;  if (t) { goto L_002DF024; } }
    c.r[1].d[0] = c.r[6].sd[0] < 1025ll ? 1ull : 0ull;
    c.budget -= 1;
L_002DEFF0:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002DF024; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[17].d[0] | 8ull;  if (t) { goto L_002DF024; } }
    c.r[1].d[0] = c.r[6].sd[0] < 3072ll ? 1ull : 0ull;
    c.budget -= 1;
L_002DF004:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002DF024; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[17].d[0] | 4ull;  if (t) { goto L_002DF024; } }
    c.r[1].d[0] = c.r[6].sd[0] < 1025ll ? 1ull : 0ull;
    c.budget -= 1;
L_002DF018:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002DF024; } }
    c.r[17].d[0] = c.r[17].d[0] | 1ull;
    c.budget -= 1;
L_002DF024:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 750u)));
    c.budget -= 1;
L_002DF028:
    c.r[3].d[0] = c.r[3].d[0] | c.r[17].d[0];
    st8((c.r[16].w[0] + 750u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002DF030:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002DF050:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 192ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002DF078; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002DF174; } }
L_002DF078:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 761u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DF09C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 811u)));
    c.r[2].d[0] = c.r[2].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002DF09C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002DF174; } }
L_002DF09C:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7746u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00060000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[6].d[0] = c.r[2].d[0] | 49152ull;
    set32(c.r[17], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], c.r[5].w[0] << (c.r[3].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[6].d[0];
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002DF0F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF0CCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 186u, depth + 1u); else { c.pc = 0x002DB3A0u; return; } if (c.pc != 0x002DF0CCu) [[unlikely]] return; }
L_002DF0CC:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_002DF0E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002DF104; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_002DF0E0:
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] << (c.r[4].w[0] & 31u));
    set32(c.r[2], c.r[3].w[0] << (c.r[2].w[0] & 31u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 36ull;  if (t) { goto L_002DF104; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002DF0F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF100u);  if (depth < kMaxDepth) unit_0076(c, 186u, depth + 1u); else { c.pc = 0x002DB3A0u; return; } if (c.pc != 0x002DF100u) [[unlikely]] return; }
L_002DF100:
    c.r[2].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 1;
L_002DF104:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002DF174; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[5], c.r[2].w[0] - 26752u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF124u); c.r[6].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0070(c, 44u, depth + 1u); else { c.pc = 0x002C08B0u; return; } if (c.pc != 0x002DF124u) [[unlikely]] return; }
L_002DF124:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    set32(c.r[4], 0u - 65u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00060000u);
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    st16((c.r[16].w[0] + 812u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 761u)));
    c.r[2].d[0] = c.r[2].d[0] | 49152ull;
    c.r[4].d[0] = c.r[4].d[0] | 1ull;
    st8((c.r[16].w[0] + 761u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[3], c.r[3].w[0] << (c.r[4].w[0] & 31u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002DF168; } }
    st8((c.r[16].w[0] + 775u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_002DF168:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_002DF178; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_002DF174:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002DF178:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002DF190:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 761u)));
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    mmi::paddub(c.r[17], c.r[6], c.r[0]);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[19], c.r[4], c.r[0]);  if (t) { goto L_002DF284; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8386u)));
    set32(c.r[5], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00060000u);
    c.r[2].d[0] = c.r[2].d[0] | 49152ull;
    set32(c.r[3], c.r[5].w[0] << (c.r[3].w[0] & 31u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 8;
    if (c.r[2].d[0] != 0ull) { c.r[5].d[0] = c.r[17].d[0] & 15ull;  goto L_002DF278; }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 7746u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF1E8u); set32(c.r[16], c.r[2].w[0] - c.r[18].w[0]);  if (depth < kMaxDepth) unit_0076(c, 186u, depth + 1u); else { c.pc = 0x002DB3A0u; return; } if (c.pc != 0x002DF1E8u) [[unlikely]] return; }
L_002DF1E8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], 0u - 3u);  if (t) { goto L_002DF244; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 7746u)));
    set32(c.r[3], c.r[2].w[0] + c.r[18].w[0]);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002DF274; } }
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] << (c.r[4].w[0] & 31u));
    set32(c.r[3], c.r[3].w[0] << (c.r[16].w[0] & 31u));
    c.r[3].d[0] = c.r[3].d[0] & 576ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002DF220; } }
    set32(c.r[18], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 1;
L_002DF220:
    c.f[12] = ld32((c.r[19].w[0] + 7756u));
    set32(c.r[5], 0u + 3u);
    mmi::paddub(c.r[6], c.r[18], c.r[0]);
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF238u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002DF238u) [[unlikely]] return; }
L_002DF238:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DF274; } }
    set32(c.r[3], 0u - 3u);
    c.budget -= 1;
L_002DF244:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002DF274; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 7746u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[18].d[0];  if (t) { goto L_002DF274; } }
    st8((c.r[19].w[0] + 775u), static_cast<std::uint8_t>(0u));
    c.f[12] = ld32((c.r[19].w[0] + 7756u));
    set32(c.r[5], 0u + 3u);
    mmi::paddub(c.r[6], c.r[18], c.r[0]);
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF274u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002DF274u) [[unlikely]] return; }
L_002DF274:
    c.r[5].d[0] = c.r[17].d[0] & 15ull;
    c.budget -= 1;
L_002DF278:
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF284u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 194u, depth + 1u); else { c.pc = 0x002DB5B0u; return; } if (c.pc != 0x002DF284u) [[unlikely]] return; }
L_002DF284:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 773u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002DF2A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 255u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF2A8u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 296u, depth + 1u); else { c.pc = 0x002DF670u; return; } if (c.pc != 0x002DF2A8u) [[unlikely]] return; }
L_002DF2A8:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002DF2D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8059u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002DF304; } }
    st8((c.r[16].w[0] + 8059u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF2F4u); c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7774u)));  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002DF2F4u) [[unlikely]] return; }
L_002DF2F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF2FCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x002DF2FCu) [[unlikely]] return; }
L_002DF2FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002DF3B4; } }
L_002DF304:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[2], 0u + 7u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002DF32C; } }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002DF32C; } }
    set32(c.r[2], 0u + 18u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002DF390; } }
L_002DF32C:
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF338u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 105u, depth + 1u); else { c.pc = 0x002D56C0u; return; } if (c.pc != 0x002DF338u) [[unlikely]] return; }
L_002DF338:
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 2u);  if (t) { goto L_002DF360; } }
    st32((c.r[16].w[0] + 108u), 0u);
    st32((c.r[16].w[0] + 104u), 0u);
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
L_002DF360:
    st8((c.r[16].w[0] + 738u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[1] = ld32((c.r[16].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002DF390; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF390u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 169u, depth + 1u); else { c.pc = 0x002D62A0u; return; } if (c.pc != 0x002DF390u) [[unlikely]] return; }
L_002DF390:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] - 26712u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF3B0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DF3B0u) [[unlikely]] return; }
L_002DF3B0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002DF3B4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002DF3C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8433u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002DF3F4; } }
    st32((c.r[16].w[0] + 108u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 104u), 0u);  if (t) { goto L_002DF438; } }
L_002DF3F4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[2], 0u + 7u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002DF410; } }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002DF434; } }
L_002DF410:
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42B40000u);
    c.f[1] = c.r[2].w[0];
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.f[0]);  if (t) { goto L_002DF438; } }
L_002DF434:
    st32((c.r[16].w[0] + 108u), 0u);
    c.budget -= 1;
L_002DF438:
    set32(c.r[5], 0u + 1u);
    c.f[12] = 0u;
    set32(c.r[7], 0u + 18u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF450u); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x002DF450u) [[unlikely]] return; }
L_002DF450:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF458u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 274u, depth + 1u); else { c.pc = 0x002DF470u; return; } if (c.pc != 0x002DF458u) [[unlikely]] return; }
L_002DF458:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002DF470:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF484u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 277u, depth + 1u); else { c.pc = 0x002DF4D0u; return; } if (c.pc != 0x002DF484u) [[unlikely]] return; }
L_002DF484:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7814u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002DF4B4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 1u);
    set32(c.r[7], 0u + 18u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF4B4u); st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x002DF4B4u) [[unlikely]] return; }
L_002DF4B4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002DF4D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF4E4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 176u, depth + 1u); else { c.pc = 0x002DAED0u; return; } if (c.pc != 0x002DF4E4u) [[unlikely]] return; }
L_002DF4E4:
    set32(c.r[5], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF4F0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 113u, depth + 1u); else { c.pc = 0x002D9850u; return; } if (c.pc != 0x002DF4F0u) [[unlikely]] return; }
L_002DF4F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF4F8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 78u, depth + 1u); else { c.pc = 0x002CDDC0u; return; } if (c.pc != 0x002DF4F8u) [[unlikely]] return; }
L_002DF4F8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002DF510:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 736u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002DF554; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF530u); set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));  if (depth < kMaxDepth) unit_0075(c, 117u, depth + 1u); else { c.pc = 0x002D58B0u; return; } if (c.pc != 0x002DF530u) [[unlikely]] return; }
L_002DF530:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF53Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 67u, depth + 1u); else { c.pc = 0x002DC970u; return; } if (c.pc != 0x002DF53Cu) [[unlikely]] return; }
L_002DF53C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DF554; } }
    st32((c.r[16].w[0] + 68u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 108u), 0u);
    st32((c.r[16].w[0] + 104u), 0u);
    c.budget -= 4;
L_002DF554:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8059u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DF5AC; } }
    st8((c.r[16].w[0] + 8059u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DF590; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7774u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF57Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 79u, depth + 1u); else { c.pc = 0x002D9240u; return; } if (c.pc != 0x002DF57Cu) [[unlikely]] return; }
L_002DF57C:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7774u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF588u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 76u, depth + 1u); else { c.pc = 0x002D91D0u; return; } if (c.pc != 0x002DF588u) [[unlikely]] return; }
L_002DF588:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DF5A4; } }
L_002DF590:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7774u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF59Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002DF59Cu) [[unlikely]] return; }
L_002DF59C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF5A4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x002DF5A4u) [[unlikely]] return; }
L_002DF5A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002DF5CC; } }
L_002DF5AC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[2], c.r[28].w[0] - 28544u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF5C8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DF5C8u) [[unlikely]] return; }
L_002DF5C8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002DF5CC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002DF5E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.f[12] = 0u;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 6u);
    set32(c.r[7], 0u + 32u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF610u); st8((c.r[4].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x002DF610u) [[unlikely]] return; }
L_002DF610:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF618u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 292u, depth + 1u); else { c.pc = 0x002DF630u; return; } if (c.pc != 0x002DF618u) [[unlikely]] return; }
L_002DF618:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002DF630:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF644u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 176u, depth + 1u); else { c.pc = 0x002DAED0u; return; } if (c.pc != 0x002DF644u) [[unlikely]] return; }
L_002DF644:
    set32(c.r[5], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF650u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 113u, depth + 1u); else { c.pc = 0x002D9850u; return; } if (c.pc != 0x002DF650u) [[unlikely]] return; }
L_002DF650:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF658u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 78u, depth + 1u); else { c.pc = 0x002CDDC0u; return; } if (c.pc != 0x002DF658u) [[unlikely]] return; }
L_002DF658:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002DF670:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].d[0] = c.r[5].d[0] & 3ull;
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; c.f[20] = c.f[12];  if (t) { goto L_002DF6CC; } }
    c.r[3].d[0] = c.r[16].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[16].d[0] & 2ull;  if (t) { goto L_002DF6B4; } }
    set32(c.r[4], c.r[17].w[0] + 7936u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF6B0u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x002DF6B0u) [[unlikely]] return; }
L_002DF6B0:
    c.r[3].d[0] = c.r[16].d[0] & 2ull;
    c.budget -= 1;
L_002DF6B4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[16].d[0] & 12ull;  if (t) { goto L_002DF6D0; } }
    set32(c.r[4], c.r[17].w[0] + 7952u);
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF6CCu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x002DF6CCu) [[unlikely]] return; }
L_002DF6CC:
    c.r[3].d[0] = c.r[16].d[0] & 12ull;
    c.budget -= 1;
L_002DF6D0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[16].d[0] & 48ull;  if (t) { goto L_002DF714; } }
    c.r[3].d[0] = c.r[16].d[0] & 4ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[16].d[0] & 8ull;  if (t) { goto L_002DF6F8; } }
    set32(c.r[4], c.r[17].w[0] + 7968u);
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF6F4u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x002DF6F4u) [[unlikely]] return; }
L_002DF6F4:
    c.r[3].d[0] = c.r[16].d[0] & 8ull;
    c.budget -= 1;
L_002DF6F8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002DF710; } }
    set32(c.r[4], c.r[17].w[0] + 7984u);
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF710u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x002DF710u) [[unlikely]] return; }
L_002DF710:
    c.r[3].d[0] = c.r[16].d[0] & 48ull;
    c.budget -= 1;
L_002DF714:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[16].d[0] & 192ull;  if (t) { goto L_002DF788; } }
    c.r[3].d[0] = c.r[16].d[0] & 16ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[16].d[0] & 32ull;  if (t) { goto L_002DF754; } }
    c.f[0] = ld32((c.r[17].w[0] + 7888u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF738u); c.f[12] = fp::mul(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002DF738u) [[unlikely]] return; }
L_002DF738:
    st32((c.r[17].w[0] + 7888u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[17].w[0] + 7892u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF74Cu); c.f[12] = fp::mul(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002DF74Cu) [[unlikely]] return; }
L_002DF74C:
    st32((c.r[17].w[0] + 7892u), c.r[2].w[0]);
    c.r[3].d[0] = c.r[16].d[0] & 32ull;
    c.budget -= 2;
L_002DF754:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002DF784; } }
    c.f[0] = ld32((c.r[17].w[0] + 7896u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF76Cu); c.f[12] = fp::mul(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002DF76Cu) [[unlikely]] return; }
L_002DF76C:
    st32((c.r[17].w[0] + 7896u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[17].w[0] + 7900u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF780u); c.f[12] = fp::mul(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002DF780u) [[unlikely]] return; }
L_002DF780:
    st32((c.r[17].w[0] + 7900u), c.r[2].w[0]);
    c.budget -= 1;
L_002DF784:
    c.r[3].d[0] = c.r[16].d[0] & 192ull;
    c.budget -= 1;
L_002DF788:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002DF7D0; } }
    c.r[3].d[0] = c.r[16].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[16].d[0] & 128ull;  if (t) { goto L_002DF7B4; } }
    c.f[0] = ld32((c.r[17].w[0] + 7912u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF7ACu); c.f[12] = fp::mul(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002DF7ACu) [[unlikely]] return; }
L_002DF7AC:
    st32((c.r[17].w[0] + 7912u), c.r[2].w[0]);
    c.r[3].d[0] = c.r[16].d[0] & 128ull;
    c.budget -= 2;
L_002DF7B4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002DF7D0; } }
    c.f[0] = ld32((c.r[17].w[0] + 7916u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF7CCu); c.f[12] = fp::mul(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002DF7CCu) [[unlikely]] return; }
L_002DF7CC:
    st32((c.r[17].w[0] + 7916u), c.r[2].w[0]);
    c.budget -= 1;
L_002DF7D0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002DF7F0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st32((c.r[3].w[0] + 588u), 0u);
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 514u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002DFA10; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[3], c.r[3].w[0] - 6048u);
    ld128((c.r[3].w[0]) & ~15u, c.r[3]);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    set32(c.r[19], ld32((c.r[1].w[0] - 20480u)));
    c.budget -= 10;
    { const bool t = c.r[19].d[0] == 0ull; mmi::paddub(c.r[18], c.r[0], c.r[0]);  if (t) { goto L_002DF9C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));  if (t) { goto L_002DF9BC; } }
L_002DF854:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 1u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[19], c.r[19].w[0] + 32u);  goto L_002DF9B4; }
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 514u)));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], 0u + 1u);  goto L_002DF884; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002DF9B0; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 2;
L_002DF884:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF890u); mmi::paddub(c.r[6], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x002DF890u) [[unlikely]] return; }
L_002DF890:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[2], c.r[0]);  if (t) { goto L_002DF9B0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    set32(c.r[5], c.r[2].w[0] - 1328u);
    set32(c.r[3], 0u + 18u);
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    set32(c.r[3], c.r[2].w[0] + 352u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[2].w[0] - 16336u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.f[3] = ld32((c.r[19].w[0] + 16u));
    c.f[2] = ld32((c.r[19].w[0] + 20u));
    c.f[1] = ld32((c.r[19].w[0] + 24u));
    c.f[0] = ld32((c.r[19].w[0] + 28u));
    set32(c.r[6], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    st32((c.r[16].w[0] + 32u), c.f[3]);
    st32((c.r[16].w[0] + 36u), c.f[2]);
    st32((c.r[16].w[0] + 40u), c.f[1]);
    st32((c.r[16].w[0] + 44u), c.f[0]);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 10u)));
    st32((c.r[16].w[0] + 80u), c.r[7].w[0]);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 12u)));
    st32((c.r[16].w[0] + 84u), c.r[7].w[0]);
    st8((c.r[16].w[0] + 11u), static_cast<std::uint8_t>(c.r[18].w[0]));
    st32((c.r[16].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 168u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 256u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    c.budget -= 38;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF930u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0016(c, 134u, depth + 1u); else { c.pc = 0x0015B550u; return; } if (c.pc != 0x002DF930u) [[unlikely]] return; }
L_002DF930:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    set32(c.r[4], 0u + 255u);
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 268u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    st8((c.r[16].w[0] + 270u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[16].w[0] + 264u), c.r[16].w[0]);
    st8((c.r[16].w[0] + 531u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 256u)));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002DF970; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002DF970; } }
    st32((c.r[5].w[0] + 588u), c.r[16].w[0]);
    c.budget -= 1;
L_002DF970:
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 15u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 256u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002DF990; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF98Cu); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 11u)));  if (depth < kMaxDepth) unit_0078(c, 31u, depth + 1u); else { c.pc = 0x002E02D0u; return; } if (c.pc != 0x002DF98Cu) [[unlikely]] return; }
L_002DF98C:
    c.budget -= 1;
L_002DF990:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 369u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002DF9B0; } }
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF9ACu); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x002DF9ACu) [[unlikely]] return; }
L_002DF9AC:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002DF9B0:
    set32(c.r[19], c.r[19].w[0] + 32u);
    c.budget -= 1;
L_002DF9B4:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.budget -= 2;
L_002DF9BC:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DF854u | kUnwind; return; } goto L_002DF854; } }
L_002DF9C8:
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 369u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002DFA10; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002DFA10; } }
    c.f[0] = c.r[17].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[4], c.r[4].w[0] + 624u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.f[1] = c.r[2].w[0];
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFA10u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x002DFA10u) [[unlikely]] return; }
L_002DFA10:
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[4], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] | 50176ull;
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 256u)));
    set32(c.r[4], c.r[4].w[0] << (c.r[5].w[0] & 31u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002DFA3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFA3Cu);  if (depth < kMaxDepth) unit_004A(c, 150u, depth + 1u); else { c.pc = 0x0022A7B0u; return; } if (c.pc != 0x002DFA3Cu) [[unlikely]] return; }
L_002DFA3C:
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[4], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] | 61440ull;
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 256u)));
    set32(c.r[4], c.r[4].w[0] << (c.r[5].w[0] & 31u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002DFA68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFA68u);  if (depth < kMaxDepth) unit_004C(c, 328u, depth + 1u); else { c.pc = 0x00233CB0u; return; } if (c.pc != 0x002DFA68u) [[unlikely]] return; }
L_002DFA68:
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[4], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] | 36352ull;
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 256u)));
    set32(c.r[4], c.r[4].w[0] << (c.r[5].w[0] & 31u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002DFAA8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 514u)));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002DFAA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFAA8u);  if (depth < kMaxDepth) unit_004F(c, 158u, depth + 1u); else { c.pc = 0x0023DA10u; return; } if (c.pc != 0x002DFAA8u) [[unlikely]] return; }
L_002DFAA8:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002DFAD0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] - 24432u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002DC000u < 16384u) { entry = entries_0077[(t - 0x002DC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002DFAF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[8], c.r[2].w[0] - 24528u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[6], 0u + 32u);
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 256u)));
    set32(c.r[9], c.r[3].w[0] << 4);
    set32(c.r[7], c.r[2].w[0] + 1u);
    set32(c.r[2], c.r[10].w[0] << 2);
    set32(c.r[2], c.r[8].w[0] + c.r[2].w[0]);
    set32(c.r[8], ld32((c.r[2].w[0])));
    set32(c.r[5], 0u + 226u);
    set32(c.r[3], 0u + 8u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[4].w[0] + 576u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[4].w[0] + 579u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[16], c.r[8].w[0] + c.r[9].w[0]);
    st8((c.r[4].w[0] + 518u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1u));
    set32(c.r[2], 0u + 255u);
    st16((c.r[4].w[0] + 512u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 30;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { goto L_002DFB70; } }
    set32(c.r[2], 0u + 4096u);
    st16((c.r[17].w[0] + 512u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002DFB70:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 512u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    st16((c.r[17].w[0] + 512u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[17].w[0] + 514u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[17].w[0] + 516u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[17].w[0] + 88u), 0u);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 369u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[3].w[0] + 624u);  if (t) { goto L_002DFBC0; } }
    c.f[3] = ld32((c.r[17].w[0] + 32u));
    c.f[2] = ld32((c.r[17].w[0] + 36u));
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 44u));
    st32((c.r[17].w[0] + 128u), c.f[3]);
    st32((c.r[17].w[0] + 132u), c.f[2]);
    st32((c.r[17].w[0] + 136u), c.f[1]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 140u), c.f[0]);  if (t) { goto L_002DFBCC; } }
    set32(c.r[6], c.r[3].w[0] + 624u);
    c.budget -= 1;
L_002DFBC0:
    set32(c.r[4], c.r[17].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFBCCu); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002DFBCCu) [[unlikely]] return; }
L_002DFBCC:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 256u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 369u)));
    c.r[3].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    set32(c.r[3], c.r[3].w[0] + 25u);
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFBF4u); set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0080(c, 309u, depth + 1u); else { c.pc = 0x00303FD0u; return; } if (c.pc != 0x002DFBF4u) [[unlikely]] return; }
L_002DFBF4:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002DFC0C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFC0Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 16u, depth + 1u); else { c.pc = 0x003044E0u; return; } if (c.pc != 0x002DFC0Cu) [[unlikely]] return; }
L_002DFC0C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002DFC20:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], c.r[3].w[0] - 24528u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 256u)));
    set32(c.r[4], c.r[2].w[0] << 4);
    set32(c.r[2], 0u + 255u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1u));
    c.budget -= 21;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[17], c.r[0], c.r[0]);  if (t) { goto L_002DFC80; } }
    set32(c.r[2], 0u + 16384u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 514u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_002DFCD8; } }
L_002DFC80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[8], c.r[2].w[0] + 26144u);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    set32(c.r[4], 0u + 38u);
    set32(c.r[3], 0u + 39u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 6;
L_002DFC98:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 535u)));
    set32(c.r[2], c.r[5].w[0] << (c.r[7].w[0] & 31u));
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_002DFCCC; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 8386u)));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[4].d[0]) { set32(c.r[17], 0u + 1u);  goto L_002DFCC4; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002DFCC8; } }
    set32(c.r[17], 0u + 1u);
    c.budget -= 1;
L_002DFCC4:
    c.budget -= 1;
L_002DFCC8:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_002DFCCC:
    c.r[2].d[0] = c.r[7].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] + 8448u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DFC98u | kUnwind; return; } goto L_002DFC98; } }
L_002DFCD8:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 369u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[3].w[0] + 624u);  if (t) { goto L_002DFD10; } }
    c.f[3] = ld32((c.r[19].w[0] + 128u));
    c.f[2] = ld32((c.r[19].w[0] + 132u));
    c.f[1] = ld32((c.r[19].w[0] + 136u));
    c.f[0] = ld32((c.r[19].w[0] + 140u));
    st32((c.r[19].w[0] + 32u), c.f[3]);
    st32((c.r[19].w[0] + 36u), c.f[2]);
    st32((c.r[19].w[0] + 40u), c.f[1]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 44u), c.f[0]);  if (t) { goto L_002DFD1C; } }
    set32(c.r[5], c.r[3].w[0] + 624u);
    c.budget -= 1;
L_002DFD10:
    set32(c.r[4], c.r[19].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFD1Cu); set32(c.r[6], c.r[19].w[0] + 128u);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x002DFD1Cu) [[unlikely]] return; }
L_002DFD1C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 514u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DFD30; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (t) { goto L_002DFDD8; } }
L_002DFD30:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 4u)));
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    mmi::paddub(c.r[18], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002DFD68; } }
L_002DFD48:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[7], c.r[18].w[0] + 4u);
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFD5Cu); mmi::paddub(c.r[6], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0078(c, 342u, depth + 1u); else { c.pc = 0x002E3990u; return; } if (c.pc != 0x002DFD5Cu) [[unlikely]] return; }
L_002DFD5C:
    set32(c.r[18], c.r[18].w[0] + 3u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 3;
L_002DFD68:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002DFD88; } }
    c.r[2].d[0] = c.r[17].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DFD48u | kUnwind; return; } goto L_002DFD48; } }
    c.budget -= 1;
L_002DFD88:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002DFDB0; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 184u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 188u), c.r[2].w[0]);  if (t) { goto L_002DFDBC; } }
L_002DFDB0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[19].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_002DFDBC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[2], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002DFDD4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFDD4u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 9u, depth + 1u); else { c.pc = 0x00304280u; return; } if (c.pc != 0x002DFDD4u) [[unlikely]] return; }
L_002DFDD4:
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 1;
L_002DFDD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFDE0u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_005D(c, 686u, depth + 1u); else { c.pc = 0x00276330u; return; } if (c.pc != 0x002DFDE0u) [[unlikely]] return; }
L_002DFDE0:
    set32(c.r[3], 0u + 1u);
    st8((c.r[19].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002DFE10:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[7], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[6], c.r[3].w[0] - 24528u);
    set32(c.r[3], 0u + 6u);
    set32(c.r[5], c.r[4].w[0] << 4);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 256u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[16], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 21;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002DFEBC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 369u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[7].w[0] + 624u);  if (t) { goto L_002DFE98; } }
    c.f[3] = ld32((c.r[18].w[0] + 128u));
    c.f[2] = ld32((c.r[18].w[0] + 132u));
    c.f[1] = ld32((c.r[18].w[0] + 136u));
    c.f[0] = ld32((c.r[18].w[0] + 140u));
    st32((c.r[18].w[0] + 32u), c.f[3]);
    st32((c.r[18].w[0] + 36u), c.f[2]);
    st32((c.r[18].w[0] + 40u), c.f[1]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 44u), c.f[0]);  if (t) { goto L_002DFEA4; } }
    set32(c.r[5], c.r[7].w[0] + 624u);
    c.budget -= 1;
L_002DFE98:
    set32(c.r[4], c.r[18].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFEA4u); set32(c.r[6], c.r[18].w[0] + 128u);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x002DFEA4u) [[unlikely]] return; }
L_002DFEA4:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFEB0u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_005D(c, 686u, depth + 1u); else { c.pc = 0x00276330u; return; } if (c.pc != 0x002DFEB0u) [[unlikely]] return; }
L_002DFEB0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_0078(c, 18u, depth); } }
L_002DFEBC:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { [[clang::musttail]] return unit_0078(c, 16u, depth); } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002DFF4C; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], c.r[4].w[0] + 1u);  goto L_002DFEEC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));  if (t) { [[clang::musttail]] return unit_0078(c, 17u, depth); } }
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_002DFEEC:
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 5u);
    st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[18].w[0] + 144u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43340000u);
    st32((c.r[18].w[0] + 148u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 80u), 0u);
    st32((c.r[18].w[0] + 84u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFF18u); st32((c.r[18].w[0] + 88u), 0u);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x002DFF18u) [[unlikely]] return; }
L_002DFF18:
    set32(c.r[3], 0u + 29u);
    mmi::divu(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFF34u); st32((c.r[18].w[0] + 92u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x002DFF34u) [[unlikely]] return; }
L_002DFF34:
    set32(c.r[3], 0u + 29u);
    mmi::divu(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    st32((c.r[18].w[0] + 100u), c.r[2].w[0]);
    c.budget -= 6;
L_002DFF4C:
    c.f[0] = ld32((c.r[18].w[0] + 144u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    c.f[2] = 0u;
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 144u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 148u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 148u), c.f[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 92u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[18].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 100u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[18].w[0] + 88u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[18].w[0] + 148u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 22;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { [[clang::musttail]] return unit_0078(c, 5u, depth); } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    set32(c.r[4], c.r[18].w[0] + 192u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFFB8u); st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002DFFB8u) [[unlikely]] return; }
L_002DFFB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFFC0u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 16u, depth + 1u); else { c.pc = 0x0013C860u; return; } if (c.pc != 0x002DFFC0u) [[unlikely]] return; }
L_002DFFC0:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFFCCu); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_002A(c, 386u, depth + 1u); else { c.pc = 0x001AB460u; return; } if (c.pc != 0x002DFFCCu) [[unlikely]] return; }
L_002DFFCC:
    set32(c.r[5], 0u + 10u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFFD8u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x002DFFD8u) [[unlikely]] return; }
L_002DFFD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFFE0u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 9u, depth + 1u); else { c.pc = 0x00304280u; return; } if (c.pc != 0x002DFFE0u) [[unlikely]] return; }
L_002DFFE0:
    set32(c.r[17], c.r[29].w[0] + 88u);
    c.f[1] = ld32((c.r[17].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    c.f[0] = c.r[2].w[0];
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[17].w[0]), c.f[0]);
    c.budget -= 7;
L_002DFFFC:
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 1;
    [[clang::musttail]] return unit_0078(c, 1u, depth);
}

}
