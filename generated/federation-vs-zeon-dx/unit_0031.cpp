#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0031[4096] = {
    1, 0, 0, 2, 0, 0, 0, 0, 0, 0, 3, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 6, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 10, 0,
    0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 0, 0, 0, 14, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 16, 0, 17, 0, 0, 18, 0, 0, 0, 19, 0, 20, 0, 0, 0,
    21, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0,
    34, 0, 0, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40,
    0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 43, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0,
    48, 0, 0, 0, 0, 49, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 52, 0, 53, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 56, 0, 57, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0,
    0, 61, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0,
    65, 0, 0, 0, 0, 0, 66, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0,
    0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 80, 0, 0, 0, 0, 0, 0,
    0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83,
    0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 90, 0, 0, 0, 0, 91, 0, 0, 0,
    0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0,
    96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 98, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0,
    102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 109, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0,
    112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 116, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0,
    0, 0, 0, 0, 124, 0, 0, 0, 125, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0,
    131, 0, 0, 0, 132, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 135, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    137, 0, 0, 0, 138, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 150, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 156, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0,
    0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 171, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0,
    181, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 198, 0, 0, 0,
    199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0,
    204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 206, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0,
    0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    211, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 218, 0, 0, 219, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 223, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0,
    0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 229, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 231, 0, 0, 0, 232, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 235, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 237, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 239, 0, 0, 0,
    0, 0, 240, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 248, 0, 0, 249, 0, 0, 250,
    0, 0, 251, 0, 0, 252, 0, 0, 253, 0, 0, 254, 0, 0, 255, 0, 0, 256, 0, 0, 257, 0, 0, 258, 0, 0, 259, 0, 0, 0, 0, 0,
    260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 262, 0, 0, 0, 263, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0,
    266, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    269, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 271, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 273, 0, 0, 274, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0,
    0, 0, 0, 0, 0, 279, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 282, 0, 0, 283, 0, 0, 284, 0, 0, 285, 0, 0,
    0, 0, 286, 0, 0, 287, 0, 0, 288, 0, 0, 289, 0, 0, 290, 0, 0, 291, 0, 0, 292, 0, 0, 293, 0, 0, 0, 0, 0, 294, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 296, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 299, 0, 0, 0, 0, 0,
    300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0031(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001C4000;
    case 2u: goto L_001C400C;
    case 3u: goto L_001C4028;
    case 4u: goto L_001C4034;
    case 5u: goto L_001C4060;
    case 6u: goto L_001C408C;
    case 7u: goto L_001C4094;
    case 8u: goto L_001C4120;
    case 9u: goto L_001C4160;
    case 10u: goto L_001C4178;
    case 11u: goto L_001C4190;
    case 12u: goto L_001C41C8;
    case 13u: goto L_001C41D8;
    case 14u: goto L_001C41F0;
    case 15u: goto L_001C4234;
    case 16u: goto L_001C4244;
    case 17u: goto L_001C424C;
    case 18u: goto L_001C4258;
    case 19u: goto L_001C4268;
    case 20u: goto L_001C4270;
    case 21u: goto L_001C4280;
    case 22u: goto L_001C4298;
    case 23u: goto L_001C42C0;
    case 24u: goto L_001C42D8;
    case 25u: goto L_001C4334;
    case 26u: goto L_001C4358;
    case 27u: goto L_001C4380;
    case 28u: goto L_001C43A8;
    case 29u: goto L_001C43C0;
    case 30u: goto L_001C43D8;
    case 31u: goto L_001C4400;
    case 32u: goto L_001C4430;
    case 33u: goto L_001C4468;
    case 34u: goto L_001C4480;
    case 35u: goto L_001C4494;
    case 36u: goto L_001C44A4;
    case 37u: goto L_001C44F0;
    case 38u: goto L_001C4524;
    case 39u: goto L_001C4550;
    case 40u: goto L_001C457C;
    case 41u: goto L_001C4598;
    case 42u: goto L_001C45E0;
    case 43u: goto L_001C45E8;
    case 44u: goto L_001C4620;
    case 45u: goto L_001C4628;
    case 46u: goto L_001C4650;
    case 47u: goto L_001C4660;
    case 48u: goto L_001C4680;
    case 49u: goto L_001C4694;
    case 50u: goto L_001C469C;
    case 51u: goto L_001C46D0;
    case 52u: goto L_001C4710;
    case 53u: goto L_001C4718;
    case 54u: goto L_001C4738;
    case 55u: goto L_001C4750;
    case 56u: goto L_001C476C;
    case 57u: goto L_001C4774;
    case 58u: goto L_001C47B0;
    case 59u: goto L_001C47D4;
    case 60u: goto L_001C47EC;
    case 61u: goto L_001C4804;
    case 62u: goto L_001C4818;
    case 63u: goto L_001C4838;
    case 64u: goto L_001C4860;
    case 65u: goto L_001C4880;
    case 66u: goto L_001C4898;
    case 67u: goto L_001C48A4;
    case 68u: goto L_001C48D4;
    case 69u: goto L_001C48E8;
    case 70u: goto L_001C4920;
    case 71u: goto L_001C4A00;
    case 72u: goto L_001C4A50;
    case 73u: goto L_001C4A64;
    case 74u: goto L_001C4A88;
    case 75u: goto L_001C4AB0;
    case 76u: goto L_001C4AD0;
    case 77u: goto L_001C4AE4;
    case 78u: goto L_001C4B20;
    case 79u: goto L_001C4B5C;
    case 80u: goto L_001C4B64;
    case 81u: goto L_001C4B84;
    case 82u: goto L_001C4BD0;
    case 83u: goto L_001C4BFC;
    case 84u: goto L_001C4C08;
    case 85u: goto L_001C4C30;
    case 86u: goto L_001C4C50;
    case 87u: goto L_001C4C70;
    case 88u: goto L_001C4CA4;
    case 89u: goto L_001C4CD4;
    case 90u: goto L_001C4CDC;
    case 91u: goto L_001C4CF0;
    case 92u: goto L_001C4D0C;
    case 93u: goto L_001C4D30;
    case 94u: goto L_001C4D90;
    case 95u: goto L_001C4DE0;
    case 96u: goto L_001C4E00;
    case 97u: goto L_001C4E60;
    case 98u: goto L_001C4E94;
    case 99u: goto L_001C4EA4;
    case 100u: goto L_001C4ED4;
    case 101u: goto L_001C4F60;
    case 102u: goto L_001C4F80;
    case 103u: goto L_001C4FB0;
    case 104u: goto L_001C5020;
    case 105u: goto L_001C5050;
    case 106u: goto L_001C508C;
    case 107u: goto L_001C50B4;
    case 108u: goto L_001C5100;
    case 109u: goto L_001C5188;
    case 110u: goto L_001C51A0;
    case 111u: goto L_001C51F0;
    case 112u: goto L_001C5200;
    case 113u: goto L_001C5228;
    case 114u: goto L_001C5250;
    case 115u: goto L_001C528C;
    case 116u: goto L_001C5304;
    case 117u: goto L_001C5314;
    case 118u: goto L_001C5370;
    case 119u: goto L_001C5440;
    case 120u: goto L_001C5530;
    case 121u: goto L_001C558C;
    case 122u: goto L_001C55C0;
    case 123u: goto L_001C55F0;
    case 124u: goto L_001C5610;
    case 125u: goto L_001C5620;
    case 126u: goto L_001C5628;
    case 127u: goto L_001C5650;
    case 128u: goto L_001C5680;
    case 129u: goto L_001C56D0;
    case 130u: goto L_001C56DC;
    case 131u: goto L_001C5700;
    case 132u: goto L_001C5710;
    case 133u: goto L_001C5718;
    case 134u: goto L_001C5740;
    case 135u: goto L_001C5750;
    case 136u: goto L_001C5758;
    case 137u: goto L_001C5780;
    case 138u: goto L_001C5790;
    case 139u: goto L_001C5798;
    case 140u: goto L_001C57C0;
    case 141u: goto L_001C5808;
    case 142u: goto L_001C5830;
    case 143u: goto L_001C5860;
    case 144u: goto L_001C5898;
    case 145u: goto L_001C58C0;
    case 146u: goto L_001C5914;
    case 147u: goto L_001C5950;
    case 148u: goto L_001C5978;
    case 149u: goto L_001C59BC;
    case 150u: goto L_001C5A10;
    case 151u: goto L_001C5A1C;
    case 152u: goto L_001C5A70;
    case 153u: goto L_001C5A9C;
    case 154u: goto L_001C5AE0;
    case 155u: goto L_001C5B48;
    case 156u: goto L_001C5B50;
    case 157u: goto L_001C5B60;
    case 158u: goto L_001C5BA0;
    case 159u: goto L_001C5BE0;
    case 160u: goto L_001C5D54;
    case 161u: goto L_001C5D7C;
    case 162u: goto L_001C5DC8;
    case 163u: goto L_001C5DF8;
    case 164u: goto L_001C5E14;
    case 165u: goto L_001C5E30;
    case 166u: goto L_001C5FC0;
    case 167u: goto L_001C60D0;
    case 168u: goto L_001C6300;
    case 169u: goto L_001C632C;
    case 170u: goto L_001C6360;
    case 171u: goto L_001C6378;
    case 172u: goto L_001C63A0;
    case 173u: goto L_001C63C8;
    case 174u: goto L_001C63E0;
    case 175u: goto L_001C6458;
    case 176u: goto L_001C64A0;
    case 177u: goto L_001C64B8;
    case 178u: goto L_001C6510;
    case 179u: goto L_001C6540;
    case 180u: goto L_001C6560;
    case 181u: goto L_001C6580;
    case 182u: goto L_001C65A0;
    case 183u: goto L_001C65C0;
    case 184u: goto L_001C6658;
    case 185u: goto L_001C6668;
    case 186u: goto L_001C6698;
    case 187u: goto L_001C66AC;
    case 188u: goto L_001C6728;
    case 189u: goto L_001C67DC;
    case 190u: goto L_001C6838;
    case 191u: goto L_001C6850;
    case 192u: goto L_001C6864;
    case 193u: goto L_001C6894;
    case 194u: goto L_001C68AC;
    case 195u: goto L_001C6950;
    case 196u: goto L_001C6990;
    case 197u: goto L_001C69D8;
    case 198u: goto L_001C69F0;
    case 199u: goto L_001C6A00;
    case 200u: goto L_001C6A38;
    case 201u: goto L_001C6A90;
    case 202u: goto L_001C6B4C;
    case 203u: goto L_001C6B70;
    case 204u: goto L_001C6B80;
    case 205u: goto L_001C6BC0;
    case 206u: goto L_001C6C04;
    case 207u: goto L_001C6C0C;
    case 208u: goto L_001C6C30;
    case 209u: goto L_001C6C78;
    case 210u: goto L_001C6C9C;
    case 211u: goto L_001C6D80;
    case 212u: goto L_001C6D8C;
    case 213u: goto L_001C6DC0;
    case 214u: goto L_001C6DD8;
    case 215u: goto L_001C6E00;
    case 216u: goto L_001C6E48;
    case 217u: goto L_001C6E54;
    case 218u: goto L_001C6E90;
    case 219u: goto L_001C6E9C;
    case 220u: goto L_001C6EB4;
    case 221u: goto L_001C7000;
    case 222u: goto L_001C7060;
    case 223u: goto L_001C7070;
    case 224u: goto L_001C70C4;
    case 225u: goto L_001C70DC;
    case 226u: goto L_001C71EC;
    case 227u: goto L_001C7204;
    case 228u: goto L_001C722C;
    case 229u: goto L_001C7238;
    case 230u: goto L_001C7254;
    case 231u: goto L_001C7264;
    case 232u: goto L_001C7274;
    case 233u: goto L_001C72B0;
    case 234u: goto L_001C7330;
    case 235u: goto L_001C733C;
    case 236u: goto L_001C7358;
    case 237u: goto L_001C7368;
    case 238u: goto L_001C73E0;
    case 239u: goto L_001C73F0;
    case 240u: goto L_001C7408;
    case 241u: goto L_001C741C;
    case 242u: goto L_001C7468;
    case 243u: goto L_001C74A0;
    case 244u: goto L_001C7508;
    case 245u: goto L_001C7528;
    case 246u: goto L_001C7534;
    case 247u: goto L_001C7558;
    case 248u: goto L_001C7564;
    case 249u: goto L_001C7570;
    case 250u: goto L_001C757C;
    case 251u: goto L_001C7588;
    case 252u: goto L_001C7594;
    case 253u: goto L_001C75A0;
    case 254u: goto L_001C75AC;
    case 255u: goto L_001C75B8;
    case 256u: goto L_001C75C4;
    case 257u: goto L_001C75D0;
    case 258u: goto L_001C75DC;
    case 259u: goto L_001C75E8;
    case 260u: goto L_001C7600;
    case 261u: goto L_001C7628;
    case 262u: goto L_001C7634;
    case 263u: goto L_001C7644;
    case 264u: goto L_001C7650;
    case 265u: goto L_001C7670;
    case 266u: goto L_001C7680;
    case 267u: goto L_001C769C;
    case 268u: goto L_001C79D0;
    case 269u: goto L_001C7A00;
    case 270u: goto L_001C7A20;
    case 271u: goto L_001C7A30;
    case 272u: goto L_001C7A40;
    case 273u: goto L_001C7A94;
    case 274u: goto L_001C7AA0;
    case 275u: goto L_001C7AAC;
    case 276u: goto L_001C7AD4;
    case 277u: goto L_001C7B10;
    case 278u: goto L_001C7B78;
    case 279u: goto L_001C7B94;
    case 280u: goto L_001C7BA0;
    case 281u: goto L_001C7BC4;
    case 282u: goto L_001C7BD0;
    case 283u: goto L_001C7BDC;
    case 284u: goto L_001C7BE8;
    case 285u: goto L_001C7BF4;
    case 286u: goto L_001C7C08;
    case 287u: goto L_001C7C14;
    case 288u: goto L_001C7C20;
    case 289u: goto L_001C7C2C;
    case 290u: goto L_001C7C38;
    case 291u: goto L_001C7C44;
    case 292u: goto L_001C7C50;
    case 293u: goto L_001C7C5C;
    case 294u: goto L_001C7C74;
    case 295u: goto L_001C7C9C;
    case 296u: goto L_001C7CA8;
    case 297u: goto L_001C7CB8;
    case 298u: goto L_001C7CD8;
    case 299u: goto L_001C7CE8;
    case 300u: goto L_001C7D00;
    default: bad_entry(c, 0x001C4000u); return;
    }
L_001C4000:
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C400Cu); st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0031(c, 5u, depth + 1u); else { c.pc = 0x001C4060u; return; } if (c.pc != 0x001C400Cu) [[unlikely]] return; }
L_001C400C:
    st32((c.r[19].w[0] + 16u), 0u);
    st32((c.r[18].w[0] + 16u), c.r[19].w[0]);
    set32(c.r[17], c.r[17].w[0] - c.r[2].w[0]);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[17].sd[0] > 0; mmi::paddub(c.r[18], c.r[19], c.r[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C3FC8u | kUnwind; return; } [[clang::musttail]] return unit_0030(c, 356u, depth); } }
    c.budget -= 1;
L_001C4028:
    st32((c.r[20].w[0]), c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0])));
    c.budget -= 3;
L_001C4034:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_001C4060:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[6], c.r[0]);
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[16], c.r[17], c.r[0]);  if (t) { goto L_001C40D8; } }
L_001C408C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4094u);  if (depth < kMaxDepth) unit_0031(c, 94u, depth + 1u); else { c.pc = 0x001C4D90u; return; } if (c.pc != 0x001C4094u) [[unlikely]] return; }
L_001C4094:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C40C0; } }
    c.r[1].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001C40F0; } }
    c.r[2].d[0] = ld8((c.r[18].w[0]));
    set32(c.r[17], c.r[17].w[0] - 1u);
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 6;
L_001C40C0:
    c.r[2].d[0] = ld8((c.r[18].w[0]));
    set32(c.r[17], c.r[17].w[0] - 1u);
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 6;
L_001C40D8:
    c.r[4].d[0] = ld8((c.r[18].w[0]));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001C40F0; } }
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C408Cu | kUnwind; return; } goto L_001C408C; } }
    c.budget -= 1;
L_001C40F0:
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[16].w[0] - c.r[17].w[0]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001C4120:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[16], c.r[2].w[0] + 3200u);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    c.r[2].d[0] = 0ull | 65535ull;
    mmi::paddub(c.r[7], c.r[6], c.r[0]);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 2u), static_cast<std::uint16_t>(0u));
    set32(c.r[4], c.r[16].w[0] + 5u);
    mmi::paddub(c.r[6], c.r[17], c.r[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4160u); st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_002F(c, 80u, depth + 1u); else { c.pc = 0x001BC9F0u; return; } if (c.pc != 0x001C4160u) [[unlikely]] return; }
L_001C4160:
    set32(c.r[7], c.r[29].w[0] + 56u);
    set32(c.r[8], c.r[29].w[0] + 60u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[6], c.r[17], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4178u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0030(c, 352u, depth + 1u); else { c.pc = 0x001C3F20u; return; } if (c.pc != 0x001C4178u) [[unlikely]] return; }
L_001C4178:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001C4190:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 25488u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[2], c.r[2].w[0] + 960u);
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C41C8u); set32(c.r[4], ld32((c.r[16].w[0] + 12u)));  if (depth < kMaxDepth) unit_0031(c, 134u, depth + 1u); else { c.pc = 0x001C5740u; return; } if (c.pc != 0x001C41C8u) [[unlikely]] return; }
L_001C41C8:
    set32(c.r[4], ld32((c.r[28].w[0] - 25488u)));
    set32(c.r[5], ld32((c.r[28].w[0] - 25492u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C41D8u); mmi::paddub(c.r[6], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0031(c, 8u, depth + 1u); else { c.pc = 0x001C4120u; return; } if (c.pc != 0x001C41D8u) [[unlikely]] return; }
L_001C41D8:
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001C41F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[2], c.r[4].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[17].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[2], c.r[2].w[0] + 960u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    st32((c.r[29].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4234u); mmi::paddub(c.r[16], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0031(c, 46u, depth + 1u); else { c.pc = 0x001C4650u; return; } if (c.pc != 0x001C4234u) [[unlikely]] return; }
L_001C4234:
    set32(c.r[5], ld32((c.r[29].w[0] + 72u)));
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4244u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0031(c, 27u, depth + 1u); else { c.pc = 0x001C4380u; return; } if (c.pc != 0x001C4244u) [[unlikely]] return; }
L_001C4244:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C424Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0031(c, 23u, depth + 1u); else { c.pc = 0x001C42C0u; return; } if (c.pc != 0x001C424Cu) [[unlikely]] return; }
L_001C424C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C4278; } }
    set32(c.r[5], c.r[29].w[0] + 72u);
    c.budget -= 1;
L_001C4258:
    set32(c.r[6], c.r[29].w[0] + 76u);
    mmi::paddub(c.r[7], c.r[2], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4268u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0031(c, 32u, depth + 1u); else { c.pc = 0x001C4430u; return; } if (c.pc != 0x001C4268u) [[unlikely]] return; }
L_001C4268:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4270u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0031(c, 23u, depth + 1u); else { c.pc = 0x001C42C0u; return; } if (c.pc != 0x001C4270u) [[unlikely]] return; }
L_001C4270:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[29].w[0] + 72u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C4258u | kUnwind; return; } goto L_001C4258; } }
L_001C4278:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4280u); set32(c.r[4], ld32((c.r[28].w[0] - 25492u)));  if (depth < kMaxDepth) unit_0030(c, 350u, depth + 1u); else { c.pc = 0x001C3ED0u; return; } if (c.pc != 0x001C4280u) [[unlikely]] return; }
L_001C4280:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[7], c.r[2], c.r[0]);  if (t) { goto L_001C4298; } }
    set32(c.r[5], c.r[29].w[0] + 72u);
    set32(c.r[6], c.r[29].w[0] + 76u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4298u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0031(c, 32u, depth + 1u); else { c.pc = 0x001C4430u; return; } if (c.pc != 0x001C4298u) [[unlikely]] return; }
L_001C4298:
    set32(c.r[3], ld32((c.r[29].w[0] + 72u)));
    st32((c.r[18].w[0] + 12u), c.r[3].w[0]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001C42C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_001C4318; } }
L_001C42D8:
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C4308; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001C4300; } }
    c.r[3].d[0] = ld16((c.r[4].w[0] + 4u));
    c.r[2].d[0] = c.r[5].d[0] & 65535ull;
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001C4308; } }
L_001C4300:
    c.r[5].d[0] = ld16((c.r[4].w[0] + 4u));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 2;
L_001C4308:
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C42D8u | kUnwind; return; } goto L_001C42D8; } }
    c.budget -= 1;
L_001C4318:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_001C4328; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001C4364; } }
L_001C4328:
    set32(c.r[17], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4334u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0031(c, 42u, depth + 1u); else { c.pc = 0x001C45E0u; return; } if (c.pc != 0x001C4334u) [[unlikely]] return; }
L_001C4334:
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C434C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001C435C; } }
L_001C434C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4358u); c.r[5].d[0] = ld16((c.r[2].w[0] + 14u));  if (depth < kMaxDepth) unit_0031(c, 178u, depth + 1u); else { c.pc = 0x001C6510u; return; } if (c.pc != 0x001C4358u) [[unlikely]] return; }
L_001C4358:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_001C435C:
    st16((c.r[16].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));
    mmi::paddub(c.r[2], c.r[17], c.r[0]);
    c.budget -= 2;
L_001C4364:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001C4380:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], c.r[3].w[0] + 3200u);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 10;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[28].w[0] - 25424u), c.r[3].w[0]);  if (t) { goto L_001C4410; } }
L_001C43A8:
    set32(c.r[5], ld32((c.r[28].w[0] - 25492u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[7], c.r[2].w[0] - 13152u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C43C0u); mmi::paddub(c.r[6], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0031(c, 71u, depth + 1u); else { c.pc = 0x001C4A00u; return; } if (c.pc != 0x001C43C0u) [[unlikely]] return; }
L_001C43C0:
    set32(c.r[5], ld32((c.r[28].w[0] - 25424u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[3].w[0] - 13152u);
    mmi::paddub(c.r[6], c.r[2], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C43D8u); set32(c.r[5], c.r[5].w[0] + 1u);  if (depth < kMaxDepth) unit_0031(c, 114u, depth + 1u); else { c.pc = 0x001C5250u; return; } if (c.pc != 0x001C43D8u) [[unlikely]] return; }
L_001C43D8:
    set32(c.r[3], ld32((c.r[28].w[0] - 25424u)));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 25424u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[28].w[0] - 25424u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 25424u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4400u); st32((c.r[28].w[0] - 25424u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0031(c, 44u, depth + 1u); else { c.pc = 0x001C4620u; return; } if (c.pc != 0x001C4400u) [[unlikely]] return; }
L_001C4400:
    mmi::paddub(c.r[17], c.r[2], c.r[0]);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C43A8u | kUnwind; return; } goto L_001C43A8; } }
    c.budget -= 1;
L_001C4410:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001C4430:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[19], c.r[5], c.r[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 25492u)));
    mmi::paddub(c.r[17], c.r[7], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    mmi::paddub(c.r[18], c.r[6], c.r[0]);
    set32(c.r[7], c.r[2].w[0] - 13152u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4468u); mmi::paddub(c.r[6], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0031(c, 71u, depth + 1u); else { c.pc = 0x001C4A00u; return; } if (c.pc != 0x001C4468u) [[unlikely]] return; }
L_001C4468:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[5], c.r[3].w[0] - 13312u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[3].w[0] - 13152u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4480u); mmi::paddub(c.r[6], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0031(c, 114u, depth + 1u); else { c.pc = 0x001C5250u; return; } if (c.pc != 0x001C4480u) [[unlikely]] return; }
L_001C4480:
    mmi::paddub(c.r[16], c.r[2], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] - 13312u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4494u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0031(c, 39u, depth + 1u); else { c.pc = 0x001C4550u; return; } if (c.pc != 0x001C4494u) [[unlikely]] return; }
L_001C4494:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C44AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C44A4u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0031(c, 134u, depth + 1u); else { c.pc = 0x001C5740u; return; } if (c.pc != 0x001C44A4u) [[unlikely]] return; }
L_001C44A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);  if (t) { goto L_001C452C; } }
L_001C44AC:
    set32(c.r[4], ld32((c.r[28].w[0] - 25424u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[2], c.r[2].w[0] + 4224u);
    set32(c.r[3], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001C44FC; } }
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[16].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 25424u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[5], c.r[2].w[0] - 13312u);
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[28].w[0] - 25424u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 25424u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C44F0u); mmi::paddub(c.r[6], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0006(c, 60u, depth + 1u); else { c.pc = 0x00118D18u; return; } if (c.pc != 0x001C44F0u) [[unlikely]] return; }
L_001C44F0:
    set32(c.r[2], ld32((c.r[28].w[0] - 25424u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[28].w[0] - 25424u), c.r[2].w[0]);
    c.budget -= 3;
L_001C44FC:
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C4514; } }
    st32((c.r[18].w[0]), c.r[17].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0]), c.r[17].w[0]);  if (t) { goto L_001C451C; } }
L_001C4514:
    set32(c.r[2], ld32((c.r[18].w[0])));
    st32((c.r[2].w[0] + 16u), c.r[17].w[0]);
    c.budget -= 2;
L_001C451C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4524u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0031(c, 46u, depth + 1u); else { c.pc = 0x001C4650u; return; } if (c.pc != 0x001C4524u) [[unlikely]] return; }
L_001C4524:
    st32((c.r[18].w[0]), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    c.budget -= 2;
L_001C452C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001C4550:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[16], c.r[2].w[0] + 3200u);
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[18], c.r[5], c.r[0]);  if (t) { goto L_001C45B0; } }
L_001C457C:
    c.r[17].d[0] = ld8((c.r[16].w[0]));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[18].d[0]; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_001C45A8; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[19], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4598u); mmi::paddub(c.r[6], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0030(c, 22u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001C4598u) [[unlikely]] return; }
L_001C4598:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], c.r[16].w[0] + c.r[17].w[0]);  goto L_001C45AC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001C45C4; } }
L_001C45A8:
    set32(c.r[16], c.r[16].w[0] + c.r[17].w[0]);
    c.budget -= 1;
L_001C45AC:
    c.budget -= 1;
L_001C45B0:
    set32(c.r[2], ld32((c.r[28].w[0] - 25424u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C457Cu | kUnwind; return; } goto L_001C457C; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_001C45C4:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001C45E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[4].w[0]));  if (t) { goto L_001C45F4; } }
L_001C45E8:
    set32(c.r[4], ld32((c.r[4].w[0] + 16u)));
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 3;
L_001C45F4:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C45E8u | kUnwind; return; } goto L_001C45E8; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 16u), 0u);  c.pc = t; return; }
L_001C4620:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[4].w[0]));  if (t) { goto L_001C4634; } }
L_001C4628:
    set32(c.r[4], ld32((c.r[4].w[0] + 16u)));
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 3;
L_001C4634:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C4628u | kUnwind; return; } goto L_001C4628; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 16u)));  c.pc = t; return; }
L_001C4650:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_001C4660; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001C4678; } }
L_001C4660:
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { mmi::paddub(c.r[2], c.r[4], c.r[0]);  goto L_001C4678; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[4], c.r[2], c.r[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C4660u | kUnwind; return; } goto L_001C4660; } }
    mmi::paddub(c.r[2], c.r[4], c.r[0]);
    c.budget -= 1;
L_001C4678:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C4680:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_001C46B8; } }
L_001C4694:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C469Cu);  if (depth < kMaxDepth) unit_0031(c, 44u, depth + 1u); else { c.pc = 0x001C4620u; return; } if (c.pc != 0x001C469Cu) [[unlikely]] return; }
L_001C469C:
    mmi::paddub(c.r[4], c.r[2], c.r[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C4694u | kUnwind; return; } goto L_001C4694; } }
    c.budget -= 1;
L_001C46B8:
    mmi::paddub(c.r[2], c.r[16], c.r[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001C46D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[2], 0u + 128u);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_001C46FC; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 25492u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] << 1);  if (t) { goto L_001C473C; } }
L_001C46FC:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 6u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25492u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[2].w[0] << 1);  if (t) { goto L_001C4720; } }
L_001C4710:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4718u); set32(c.r[4], c.r[16].w[0] + 1u);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x001C4718u) [[unlikely]] return; }
L_001C4718:
    set32(c.r[16], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_001C4720:
    c.r[2].d[0] = ld8((c.r[16].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C4710u | kUnwind; return; } goto L_001C4710; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4738u); set32(c.r[4], c.r[16].w[0] + 1u);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x001C4738u) [[unlikely]] return; }
L_001C4738:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 1;
L_001C473C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001C4750:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    mmi::paddub(c.r[2], c.r[16], c.r[0]);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[2].w[0] - 1u);  if (t) { goto L_001C4790; } }
L_001C476C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4774u);  if (depth < kMaxDepth) unit_0031(c, 44u, depth + 1u); else { c.pc = 0x001C4620u; return; } if (c.pc != 0x001C4774u) [[unlikely]] return; }
L_001C4774:
    mmi::paddub(c.r[4], c.r[2], c.r[0]);
    mmi::paddub(c.r[2], c.r[16], c.r[0]);
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C476Cu | kUnwind; return; } goto L_001C476C; } }
    c.budget -= 1;
L_001C4790:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[2], c.r[4], c.r[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001C47B0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C47D4u); set32(c.r[4], ld32((c.r[28].w[0] - 25412u)));  if (depth < kMaxDepth) unit_0031(c, 48u, depth + 1u); else { c.pc = 0x001C4680u; return; } if (c.pc != 0x001C47D4u) [[unlikely]] return; }
L_001C47D4:
    set32(c.r[4], ld32((c.r[28].w[0] - 25420u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[5], c.r[3].w[0] - 2147u);
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C47ECu); set32(c.r[4], c.r[2].w[0] - 1u);  if (depth < kMaxDepth) unit_0031(c, 70u, depth + 1u); else { c.pc = 0x001C4920u; return; } if (c.pc != 0x001C47ECu) [[unlikely]] return; }
L_001C47EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] - 13152u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[5], c.r[2].w[0] - 2152u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4804u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0031(c, 104u, depth + 1u); else { c.pc = 0x001C5020u; return; } if (c.pc != 0x001C4804u) [[unlikely]] return; }
L_001C4804:
    set32(c.r[17], ld32((c.r[28].w[0] - 25412u)));
    set32(c.r[18], 0u + 10u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_001C48B0; } }
    set32(c.r[2], c.r[16].w[0] + 49u);
    c.budget -= 1;
L_001C4818:
    st8((c.r[28].w[0] - 30294u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[2], c.r[2].w[0] - 13152u);
    set32(c.r[3], c.r[18].w[0] << 1);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[28].w[0] - 30296u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4838u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0031(c, 104u, depth + 1u); else { c.pc = 0x001C5020u; return; } if (c.pc != 0x001C4838u) [[unlikely]] return; }
L_001C4838:
    set32(c.r[18], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 25488u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[5], ld32((c.r[28].w[0] - 25492u)));
    set32(c.r[2], c.r[2].w[0] - 13152u);
    set32(c.r[3], c.r[18].w[0] << 1);
    set32(c.r[20], c.r[2].w[0] + c.r[3].w[0]);
    mmi::paddub(c.r[6], c.r[17], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4860u); mmi::paddub(c.r[7], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_0031(c, 71u, depth + 1u); else { c.pc = 0x001C4A00u; return; } if (c.pc != 0x001C4860u) [[unlikely]] return; }
L_001C4860:
    mmi::paddub(c.r[19], c.r[2], c.r[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 25420u)));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (t) { goto L_001C488C; } }
    set32(c.r[6], 0u + 7u);
    mmi::paddub(c.r[4], c.r[20], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4880u); mmi::paddub(c.r[5], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0031(c, 101u, depth + 1u); else { c.pc = 0x001C4F60u; return; } if (c.pc != 0x001C4880u) [[unlikely]] return; }
L_001C4880:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + c.r[19].w[0]);  if (t) { goto L_001C489C; } }
    mmi::paddub(c.r[4], c.r[20], c.r[0]);
    c.budget -= 1;
L_001C488C:
    mmi::paddub(c.r[5], c.r[19], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4898u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0031(c, 101u, depth + 1u); else { c.pc = 0x001C4F60u; return; } if (c.pc != 0x001C4898u) [[unlikely]] return; }
L_001C4898:
    set32(c.r[18], c.r[18].w[0] + c.r[19].w[0]);
    c.budget -= 1;
L_001C489C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C48A4u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0031(c, 44u, depth + 1u); else { c.pc = 0x001C4620u; return; } if (c.pc != 0x001C48A4u) [[unlikely]] return; }
L_001C48A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[17], c.r[2], c.r[0]);  if (t) { goto L_001C48C0; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001C48B0:
    set32(c.r[3], ld32((c.r[28].w[0] - 25416u)));
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] + 49u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001C4818u | kUnwind; return; } goto L_001C4818; }
L_001C48C0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[3], c.r[3].w[0] - 13152u);
    set32(c.r[4], c.r[18].w[0] << 1);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_001C48F0; } }
L_001C48D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[5], c.r[2].w[0] + 13160u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C48E8u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0031(c, 104u, depth + 1u); else { c.pc = 0x001C5020u; return; } if (c.pc != 0x001C48E8u) [[unlikely]] return; }
L_001C48E8:
    set32(c.r[16], c.r[16].w[0] + 2u);
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 2;
L_001C48F0:
    set32(c.r[3], ld32((c.r[28].w[0] - 25408u)));
    c.r[3].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C48D4u | kUnwind; return; } goto L_001C48D4; } }
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001C4920:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] >= 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x51EB0000u);  if (t) { goto L_001C4930; } }
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x51EB0000u);
    c.budget -= 2;
L_001C4930:
    c.r[3].d[0] = c.r[3].d[0] | 34079ull;
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    set32(c.r[6], c.r[4].w[0] >> 31);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.budget -= 9;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], 0u + 32u);  goto L_001C4968; }
    set32(c.r[3], c.r[3].w[0] + 48u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { goto L_001C4970; } }
    set32(c.r[3], 0u + 32u);
    c.budget -= 1;
L_001C4968:
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 2;
L_001C4970:
    set32(c.r[3], 0u + 100u);
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x66660000u);
    c.r[3].d[0] = c.r[3].d[0] | 26215ull;
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    set32(c.r[6], c.r[4].w[0] >> 31);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    set32(c.r[7], c.r[3].w[0] + c.r[6].w[0]);
    c.budget -= 15;
    { const bool t = c.r[7].d[0] != 0ull; set32(c.r[3], c.r[7].w[0] + 48u);  if (t) { goto L_001C49C0; } }
    c.r[6].d[0] = ld8((c.r[5].w[0] - 1u));
    set32(c.r[3], 0u + 32u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_001C49CC; } }
    set32(c.r[3], c.r[7].w[0] + 48u);
    c.budget -= 1;
L_001C49C0:
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { goto L_001C49D4; } }
L_001C49CC:
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 2;
L_001C49D4:
    set32(c.r[3], 0u + 10u);
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[4].w[0] + 48u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_001C4A00:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[18], c.r[6], c.r[0]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    c.budget -= 11;
    { const bool t = c.r[18].d[0] == 0ull; mmi::paddub(c.r[19], c.r[7], c.r[0]);  if (t) { goto L_001C4A3C; } }
    c.r[2].d[0] = ld8((c.r[18].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (t) { goto L_001C4A5C; } }
L_001C4A3C:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    mmi::paddub(c.r[6], c.r[19], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4A50u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_002F(c, 102u, depth + 1u); else { c.pc = 0x001BCE00u; return; } if (c.pc != 0x001C4A50u) [[unlikely]] return; }
L_001C4A50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);  if (t) { goto L_001C4A94; } }
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 1;
L_001C4A5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4A64u); mmi::paddub(c.r[5], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0031(c, 75u, depth + 1u); else { c.pc = 0x001C4AB0u; return; } if (c.pc != 0x001C4A64u) [[unlikely]] return; }
L_001C4A64:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 6u));
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    mmi::paddub(c.r[18], c.r[2], c.r[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[19], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[17].w[0] + c.r[3].w[0]);
    mmi::paddub(c.r[6], c.r[19], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4A88u); set32(c.r[5], c.r[16].w[0] - c.r[3].w[0]);  if (depth < kMaxDepth) unit_002F(c, 102u, depth + 1u); else { c.pc = 0x001BCE00u; return; } if (c.pc != 0x001C4A88u) [[unlikely]] return; }
L_001C4A88:
    set32(c.r[18], c.r[18].w[0] + c.r[2].w[0]);
    mmi::paddub(c.r[2], c.r[18], c.r[0]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    c.budget -= 3;
L_001C4A94:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001C4AB0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 8;
L_001C4AD0:
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[4], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[18].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4AE4u); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_0031(c, 104u, depth + 1u); else { c.pc = 0x001C5020u; return; } if (c.pc != 0x001C4AE4u) [[unlikely]] return; }
L_001C4AE4:
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[18].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[2], c.r[16], c.r[0]);  if (t) { goto L_001C4B04; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[18].w[0] + 16u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C4AD0u | kUnwind; return; } goto L_001C4AD0; } }
    mmi::paddub(c.r[2], c.r[16], c.r[0]);
    c.budget -= 1;
L_001C4B04:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001C4B20:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_001C4B44; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001C4BB0; } }
L_001C4B44:
    set32(c.r[2], ld32((c.r[28].w[0] - 25408u)));
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[2].w[0] - 10u);  if (t) { goto L_001C4B88; } }
L_001C4B5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4B64u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0031(c, 51u, depth + 1u); else { c.pc = 0x001C46D0u; return; } if (c.pc != 0x001C4B64u) [[unlikely]] return; }
L_001C4B64:
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    c.r[1].d[0] = c.r[18].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001C4BA0; } }
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4B84u); set32(c.r[16], c.r[16].w[0] + 1u);  if (depth < kMaxDepth) unit_0031(c, 44u, depth + 1u); else { c.pc = 0x001C4620u; return; } if (c.pc != 0x001C4B84u) [[unlikely]] return; }
L_001C4B84:
    mmi::paddub(c.r[19], c.r[2], c.r[0]);
    c.budget -= 1;
L_001C4B88:
    c.r[1].d[0] = c.r[16].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001C4BA0; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C4B5Cu | kUnwind; return; } goto L_001C4B5C; } }
    c.budget -= 1;
L_001C4BA0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_001C4BAC; } }
    set32(c.r[16], 0u + 1u);
    c.budget -= 1;
L_001C4BAC:
    mmi::paddub(c.r[2], c.r[16], c.r[0]);
    c.budget -= 1;
L_001C4BB0:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001C4BD0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 25412u)));
    set32(c.r[5], ld32((c.r[28].w[0] - 25416u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4BFCu); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0031(c, 55u, depth + 1u); else { c.pc = 0x001C4750u; return; } if (c.pc != 0x001C4BFCu) [[unlikely]] return; }
L_001C4BFC:
    st32((c.r[28].w[0] - 25412u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4C08u); set32(c.r[4], ld32((c.r[28].w[0] - 25412u)));  if (depth < kMaxDepth) unit_0031(c, 78u, depth + 1u); else { c.pc = 0x001C4B20u; return; } if (c.pc != 0x001C4C08u) [[unlikely]] return; }
L_001C4C08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C4C38; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (t) { goto L_001C4C28; } }
    st32((c.r[28].w[0] - 25412u), c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001C4C54; } }
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 1;
L_001C4C28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4C30u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0030(c, 320u, depth + 1u); else { c.pc = 0x001C3AA0u; return; } if (c.pc != 0x001C4C30u) [[unlikely]] return; }
L_001C4C30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001C4C40; } }
L_001C4C38:
    st32((c.r[28].w[0] - 25416u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_001C4C40:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; st32((c.r[28].w[0] - 25420u), 0u);  if (t) { goto L_001C4C50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4C50u);  if (depth < kMaxDepth) unit_0031(c, 58u, depth + 1u); else { c.pc = 0x001C47B0u; return; } if (c.pc != 0x001C4C50u) [[unlikely]] return; }
L_001C4C50:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001C4C54:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001C4C70:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[28].w[0] - 25412u)));
    set32(c.r[17], ld32((c.r[28].w[0] - 25416u)));
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4CA4u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0030(c, 320u, depth + 1u); else { c.pc = 0x001C3AA0u; return; } if (c.pc != 0x001C4CA4u) [[unlikely]] return; }
L_001C4CA4:
    set32(c.r[2], ld32((c.r[28].w[0] - 25412u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_001C4CD0; } }
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { mmi::paddub(c.r[16], c.r[0], c.r[0]);  goto L_001C4CD0; }
    st32((c.r[28].w[0] - 25412u), c.r[16].w[0]);
    st32((c.r[28].w[0] - 25416u), c.r[17].w[0]);
    st32((c.r[28].w[0] - 25420u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001C4D10; } }
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 1;
L_001C4CD0:
    set32(c.r[5], ld32((c.r[28].w[0] - 25416u)));
    c.budget -= 1;
L_001C4CD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4CDCu); set32(c.r[4], ld32((c.r[28].w[0] - 25412u)));  if (depth < kMaxDepth) unit_0031(c, 55u, depth + 1u); else { c.pc = 0x001C4750u; return; } if (c.pc != 0x001C4CDCu) [[unlikely]] return; }
L_001C4CDC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[16].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_001C4CFC; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4CF0u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0031(c, 82u, depth + 1u); else { c.pc = 0x001C4BD0u; return; } if (c.pc != 0x001C4CF0u) [[unlikely]] return; }
L_001C4CF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[28].w[0] - 25416u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C4CD4u | kUnwind; return; } goto L_001C4CD4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001C4CFC:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_001C4D10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4D0Cu);  if (depth < kMaxDepth) unit_0031(c, 58u, depth + 1u); else { c.pc = 0x001C47B0u; return; } if (c.pc != 0x001C4D0Cu) [[unlikely]] return; }
L_001C4D0C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001C4D10:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001C4D30:
    c.r[2].d[0] = c.r[4].d[0] & 65535ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 8));
    c.r[5].d[0] = c.r[2].d[0] & 255ull;
    c.r[3].d[0] = c.r[5].sd[0] < 33ll ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001C4D54; } }
    c.r[3].d[0] = c.r[5].sd[0] < 127ll ? 1ull : 0ull;
    c.budget -= 1;
L_001C4D54:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001C4D80; } }
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.r[3].d[0] = c.r[4].sd[0] < 33ll ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001C4D74; } }
    c.r[3].d[0] = c.r[4].sd[0] < 127ll ? 1ull : 0ull;
    c.budget -= 1;
L_001C4D74:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001C4D80; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001C4D80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C4D90:
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    c.r[2].d[0] = c.r[3].sd[0] < 129ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001C4DC8; } }
    c.r[1].d[0] = c.r[3].sd[0] < 253ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001C4DC4; } }
    c.r[2].d[0] = c.r[3].sd[0] < 160ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001C4DD4; } }
    c.r[1].d[0] = c.r[3].sd[0] < 224ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001C4DD0; } }
L_001C4DC4:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_001C4DC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C4DD4; } }
L_001C4DD0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001C4DD4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C4DE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[4].d[0] & 65535ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 8));
    c.r[16].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4E00u); c.r[4].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0031(c, 94u, depth + 1u); else { c.pc = 0x001C4D90u; return; } if (c.pc != 0x001C4E00u) [[unlikely]] return; }
L_001C4E00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = c.r[16].d[0] & 255ull;  if (t) { goto L_001C4E14; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001C4E48; } }
    c.r[3].d[0] = c.r[16].d[0] & 255ull;
    c.budget -= 1;
L_001C4E14:
    c.r[2].d[0] = c.r[3].sd[0] < 64ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001C4E3C; } }
    c.r[1].d[0] = c.r[3].sd[0] < 253ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001C4E38; } }
    set32(c.r[2], 0u + 127u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_001C4E48; } }
L_001C4E38:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_001C4E3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_001C4E4C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001C4E48:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_001C4E4C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001C4E60:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[2].d[0] = c.r[6].d[0] << 48;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] << 12);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.r[18].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4E94u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0031(c, 95u, depth + 1u); else { c.pc = 0x001C4DE0u; return; } if (c.pc != 0x001C4E94u) [[unlikely]] return; }
L_001C4E94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_001C4ECC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4EA4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0031(c, 103u, depth + 1u); else { c.pc = 0x001C4FB0u; return; } if (c.pc != 0x001C4EA4u) [[unlikely]] return; }
L_001C4EA4:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[2].d[0] = c.r[18].d[0] | 1792ull;  if (t) { goto L_001C4EC0; } }
    c.r[2].d[0] = c.r[18].d[0] | 768ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_001C4F20; } }
    c.r[2].d[0] = c.r[18].d[0] | 1792ull;
    c.budget -= 1;
L_001C4EC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_001C4F20; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_001C4ECC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C4ED4u);  if (depth < kMaxDepth) unit_0031(c, 93u, depth + 1u); else { c.pc = 0x001C4D30u; return; } if (c.pc != 0x001C4ED4u) [[unlikely]] return; }
L_001C4ED4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] << 48;  if (t) { goto L_001C4F00; } }
    c.r[2].d[0] = c.r[18].d[0] | 1280ull;
    c.r[18].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], 0u + 9332u);
    c.r[3].d[0] = c.r[16].d[0] & 65535ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[16].d[0] & 65535ull;  if (t) { goto L_001C4F24; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(9588ll);  if (t) { goto L_001C4F20; } }
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_001C4F00:
    c.r[3].d[0] = c.r[18].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001C4F48; } }
L_001C4F20:
    c.r[2].d[0] = c.r[16].d[0] & 65535ull;
    c.budget -= 1;
L_001C4F24:
    c.r[3].d[0] = c.r[18].d[0] & 65535ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 8));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[3].w[0] + 256u);
    c.r[2].d[0] = c.r[16].d[0] & 255ull;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st16((c.r[17].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 2u);
    c.budget -= 9;
L_001C4F48:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001C4F60:
    c.r[3].d[0] = c.r[6].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[3], c.r[3].w[0] << 12);
    c.r[6].d[0] = c.r[3].d[0] & 65535ull;
    mmi::paddub(c.r[3], c.r[5], c.r[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], c.r[3].w[0] - 1u);  if (t) { goto L_001C4FA0; } }
    c.r[7].d[0] = c.r[6].d[0] & 65535ull;
    c.budget -= 1;
L_001C4F80:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    mmi::paddub(c.r[3], c.r[5], c.r[0]);
    set32(c.r[5], c.r[3].w[0] - 1u);
    c.r[6].d[0] = c.r[6].d[0] & 4095ull;
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C4F80u | kUnwind; return; } goto L_001C4F80; } }
L_001C4FA0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C4FB0:
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & 65280ull;
    c.r[2].d[0] = 0ull | 34304ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_001C4FF4; } }
    c.r[2].d[0] = 0ull | 34048ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_001C4FE8; } }
    c.r[2].d[0] = 0ull | 32768ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001C4FE4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_001C500C; } }
L_001C4FE4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001C4FE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C500C; } }
    c.r[2].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 1;
L_001C4FF4:
    c.r[1].d[0] = c.r[2].sd[0] < 158ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001C5008; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001C500C; } }
L_001C5008:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_001C500C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C5020:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    mmi::paddub(c.r[17], c.r[6], c.r[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[16], c.r[19], c.r[0]);  if (t) { goto L_001C50C0; } }
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_001C5050:
    c.r[2].d[0] = c.r[3].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C5078; } }
    c.r[2].d[0] = c.r[3].sd[0] < 160ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C5098; } }
    c.r[1].d[0] = c.r[3].sd[0] < 224ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001C5098; } }
    c.budget -= 1;
L_001C5078:
    c.r[5].d[0] = ld8((c.r[18].w[0]));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[6], c.r[17], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C508Cu); set32(c.r[18], c.r[18].w[0] + 1u);  if (depth < kMaxDepth) unit_0031(c, 97u, depth + 1u); else { c.pc = 0x001C4E60u; return; } if (c.pc != 0x001C508Cu) [[unlikely]] return; }
L_001C508C:
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);  if (t) { goto L_001C50C0; } }
L_001C5098:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 1u));
    set32(c.r[3], c.r[3].w[0] << 8);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[6], c.r[17], c.r[0]);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C50B4u); c.r[5].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0031(c, 97u, depth + 1u); else { c.pc = 0x001C4E60u; return; } if (c.pc != 0x001C50B4u) [[unlikely]] return; }
L_001C50B4:
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[18], c.r[18].w[0] + 2u);
    c.budget -= 3;
L_001C50C0:
    c.r[2].d[0] = ld8((c.r[18].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = c.r[2].d[0] & 255ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C5050u | kUnwind; return; } goto L_001C5050; } }
    set32(c.r[3], c.r[16].w[0] - c.r[19].w[0]);
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));  if (t) { goto L_001C50E0; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_001C50E0:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001C5100:
    c.r[5].d[0] = c.r[4].d[0] & 65535ull;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].d[0] = c.r[5].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; st128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_001C5128; } }
    c.r[1].d[0] = c.r[5].sd[0] < 127ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 9472u);  if (t) { goto L_001C512C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001C5188; } }
L_001C5128:
    set32(c.r[2], 0u + 9472u);
    c.budget -= 1;
L_001C512C:
    c.r[3].d[0] = c.r[5].d[0] & 65280ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001C5178; } }
    set32(c.r[2], 0u + 9216u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[5].d[0] & 127ull;  if (t) { goto L_001C5168; } }
    set32(c.r[2], 0u + 8960u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[5].d[0] & 127ull;  if (t) { goto L_001C515C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C5180; } }
    c.r[2].d[0] = c.r[5].d[0] & 127ull;
    c.budget -= 1;
L_001C515C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_001C518C; } }
    c.r[2].d[0] = c.r[5].d[0] & 127ull;
    c.budget -= 1;
L_001C5168:
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_001C5188; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_001C5178:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C5188; } }
L_001C5180:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5188u);  if (depth < kMaxDepth) unit_002F(c, 194u, depth + 1u); else { c.pc = 0x001BDE60u; return; } if (c.pc != 0x001C5188u) [[unlikely]] return; }
L_001C5188:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_001C518C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001C51A0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; c.r[2].d[0] = c.r[4].d[0] & 65535ull;  if (t) { goto L_001C51C4; } }
    set32(c.r[2], 0u + 8508u);
    c.r[3].d[0] = c.r[4].d[0] & 65535ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001C51C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001C51E0; } }
L_001C51C0:
    c.r[2].d[0] = c.r[4].d[0] & 65535ull;
    c.budget -= 1;
L_001C51C4:
    c.r[3].d[0] = c.r[2].d[0] & 65280ull;
    set32(c.r[2], 0u + 9472u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001C51E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001C51E0; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_001C51E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C51F0:
    c.r[2].d[0] = c.r[4].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < 12320ll ? 1ull : 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  c.pc = t; return; }
L_001C5200:
    c.r[3].d[0] = c.r[4].d[0] & 65535ull;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[3].sd[0] < 8480ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; st128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_001C5234; } }
    c.r[1].d[0] = c.r[3].sd[0] < 12320ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001C5238; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5228u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0031(c, 110u, depth + 1u); else { c.pc = 0x001C51A0u; return; } if (c.pc != 0x001C5228u) [[unlikely]] return; }
L_001C5228:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  if (t) { goto L_001C5238; } }
L_001C5234:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_001C5238:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001C5250:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[18], c.r[6], c.r[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[19], c.r[5], c.r[0]);
    c.r[1].d[0] = 0ll < c.r[18].sd[0] ? 1ull : 0ull;
    mmi::paddub(c.r[20], c.r[4], c.r[0]);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 15;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[17], c.r[19], c.r[0]);  if (t) { goto L_001C5340; } }
L_001C528C:
    c.r[3].d[0] = ld16((c.r[20].w[0]));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 8));
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_001C52B8; } }
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[20], c.r[20].w[0] + 2u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_001C5330; } }
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_001C52B8:
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[16].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;  if (t) { goto L_001C5334; } }
    set32(c.r[2], c.r[3].w[0] << 8);
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[4].w[0] + 1u);
    set32(c.r[20], c.r[20].w[0] + 2u);
    c.r[4].d[0] = ld16((c.r[20].w[0]));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 8));
    c.r[3].d[0] = c.r[3].d[0] & 15ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_001C5330; } }
    c.r[2].d[0] = c.r[4].d[0] & 255ull;
    c.r[2].d[0] = c.r[5].d[0] | c.r[2].d[0];
    c.r[21].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[20], c.r[20].w[0] + 2u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5304u); mmi::paddub(c.r[4], c.r[21], c.r[0]);  if (depth < kMaxDepth) unit_0031(c, 93u, depth + 1u); else { c.pc = 0x001C4D30u; return; } if (c.pc != 0x001C5304u) [[unlikely]] return; }
L_001C5304:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[21].d[0] & 65535ull;  if (t) { goto L_001C531C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5314u); mmi::paddub(c.r[4], c.r[21], c.r[0]);  if (depth < kMaxDepth) unit_0031(c, 119u, depth + 1u); else { c.pc = 0x001C5440u; return; } if (c.pc != 0x001C5314u) [[unlikely]] return; }
L_001C5314:
    c.r[21].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[21].d[0] & 65535ull;
    c.budget -= 2;
L_001C531C:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 8));
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[21].w[0]));
    set32(c.r[17], c.r[17].w[0] + 2u);
    c.budget -= 5;
L_001C5330:
    c.r[2].d[0] = c.r[16].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 1;
L_001C5334:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C528Cu | kUnwind; return; } goto L_001C528C; } }
    c.budget -= 1;
L_001C5340:
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[17].w[0] - c.r[19].w[0]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001C5370:
    c.r[2].d[0] = c.r[4].d[0] & 65535ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 8));
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.r[2].d[0] = c.r[4].sd[0] < 64ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001C53A8; } }
    c.r[1].d[0] = c.r[4].sd[0] < 253ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001C53A4; } }
    set32(c.r[2], 0u + 127u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_001C53B4; } }
L_001C53A4:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_001C53A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C5434; } }
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_001C53B4:
    c.r[2].d[0] = c.r[2].sd[0] < 224ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[3].d[0] << 56;  if (t) { goto L_001C53CC; } }
    set32(c.r[2], c.r[3].w[0] - 64u);
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[3].d[0] << 56;
    c.budget -= 3;
L_001C53CC:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] - 129u);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 33u);
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[4].sd[0] < 159ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[4].sd[0] < 128ll ? 1ull : 0ull;  if (t) { goto L_001C5404; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], c.r[4].w[0] - 126u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_001C5420; } }
    c.r[2].d[0] = c.r[4].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 1;
L_001C5404:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[4].w[0] - 31u);  if (t) { goto L_001C541C; } }
    set32(c.r[2], c.r[4].w[0] - 32u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_001C5420; } }
    set32(c.r[2], c.r[4].w[0] - 31u);
    c.budget -= 1;
L_001C541C:
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_001C5420:
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[3], c.r[2].w[0] << 8);
    c.r[2].d[0] = c.r[4].d[0] & 255ull;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 5;
L_001C5434:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C5440:
    c.r[5].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 8));
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[5].sd[0] < 8481ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001C546C; } }
    c.r[1].d[0] = c.r[5].sd[0] < 32383ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; c.r[5].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_001C5478; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_001C546C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C5528; } }
    c.r[5].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_001C5478:
    c.r[2].d[0] = c.r[5].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001C5494; } }
    c.r[2].d[0] = c.r[5].sd[0] < 127ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] + 31u);  if (t) { goto L_001C54A0; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_001C5494:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C5528; } }
    set32(c.r[2], c.r[3].w[0] + 31u);
    c.budget -= 1;
L_001C54A0:
    c.r[5].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[4].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[4].w[0] >> 1);  if (t) { goto L_001C54C4; } }
    set32(c.r[2], c.r[4].w[0] >> 1);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_001C54D8; } }
    set32(c.r[2], c.r[4].w[0] >> 1);
    c.budget -= 1;
L_001C54C4:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], c.r[5].w[0] + 94u);
    c.r[5].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 5;
L_001C54D8:
    c.r[2].d[0] = c.r[5].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].sd[0] < 127ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_001C54F4; } }
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.r[5].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 3;
L_001C54F4:
    c.r[1].d[0] = c.r[2].sd[0] < 47ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], c.r[3].w[0] + 177u);  if (t) { goto L_001C5510; } }
    set32(c.r[2], c.r[3].w[0] + 113u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_001C5514; } }
    set32(c.r[2], c.r[3].w[0] + 177u);
    c.budget -= 1;
L_001C5510:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_001C5514:
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[3], c.r[2].w[0] << 8);
    c.r[2].d[0] = c.r[5].d[0] & 255ull;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 5;
L_001C5528:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C5530:
    set32(c.r[3], ld32((c.r[28].w[0] - 30288u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001C554C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 25404u)));
    set32(c.r[3], 0u + 2000u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001C55B8; } }
L_001C554C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[3], c.r[3].w[0] + 4224u);
    st32((c.r[28].w[0] - 25400u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[5], c.r[3].w[0] + 4224u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[4], c.r[3].w[0] + 4224u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[3], c.r[3].w[0] + 4224u);
    c.r[6].d[0] = 0ull | 47976ull;
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.r[1].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u + 2000u);  if (t) { goto L_001C55AC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[3].w[0] - 13336u);
    c.budget -= 2;
L_001C558C:
    set32(c.r[3], c.r[5].w[0] + 24u);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 24u);
    c.r[3].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C558Cu | kUnwind; return; } goto L_001C558C; } }
    set32(c.r[3], 0u + 2000u);
    c.budget -= 1;
L_001C55AC:
    st32((c.r[5].w[0]), 0u);
    st32((c.r[28].w[0] - 30288u), 0u);
    st32((c.r[28].w[0] - 25404u), c.r[3].w[0]);
    c.budget -= 3;
L_001C55B8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C55C0:
    set32(c.r[2], ld32((c.r[28].w[0] - 25400u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C55D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001C55E8; } }
L_001C55D4:
    set32(c.r[3], ld32((c.r[28].w[0] - 25404u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[28].w[0] - 25400u), c.r[4].w[0]);
    st32((c.r[28].w[0] - 25404u), c.r[3].w[0]);
    c.budget -= 5;
L_001C55E8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C55F0:
    set32(c.r[3], ld32((c.r[28].w[0] - 25400u)));
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 25404u)));
    st32((c.r[28].w[0] - 25400u), c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 25404u), c.r[3].w[0]);  c.pc = t; return; }
L_001C5610:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_001C5640; } }
L_001C5620:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5628u); set32(c.r[16], ld32((c.r[4].w[0] + 8u)));  if (depth < kMaxDepth) unit_0031(c, 123u, depth + 1u); else { c.pc = 0x001C55F0u; return; } if (c.pc != 0x001C5628u) [[unlikely]] return; }
L_001C5628:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C5620u | kUnwind; return; } goto L_001C5620; } }
    c.budget -= 1;
L_001C5640:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001C5650:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[17], 0u - 1u);
    c.r[17].d[0] = c.r[17].d[0] << 16;
    c.r[17].d[0] = c.r[17].d[0] | 65535ull;
    c.r[17].d[0] = c.r[17].d[0] << 16;
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[17].d[0] | 65535ull;  if (t) { goto L_001C56E8; } }
L_001C5680:
    set32(c.r[2], 0u - 1u);
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; set32(c.r[16], ld32((c.r[18].w[0] + 20u)));  if (t) { goto L_001C56A8; } }
    c.r[2].d[0] = ld64((c.r[18].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[17].d[0];  if (t) { goto L_001C56D0; } }
L_001C56A8:
    set32(c.r[2], 0u - 1u);
    c.r[4].d[0] = ld64((c.r[18].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001C56D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C56D0u);  if (depth < kMaxDepth) unit_002F(c, 369u, depth + 1u); else { c.pc = 0x001BFED0u; return; } if (c.pc != 0x001C56D0u) [[unlikely]] return; }
L_001C56D0:
    c.r[17].d[0] = ld64((c.r[18].w[0] + 8u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C56DCu); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0031(c, 123u, depth + 1u); else { c.pc = 0x001C55F0u; return; } if (c.pc != 0x001C56DCu) [[unlikely]] return; }
L_001C56DC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; mmi::paddub(c.r[18], c.r[16], c.r[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C5680u | kUnwind; return; } goto L_001C5680; } }
    c.budget -= 1;
L_001C56E8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001C5700:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_001C5730; } }
L_001C5710:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5718u); set32(c.r[16], ld32((c.r[4].w[0] + 12u)));  if (depth < kMaxDepth) unit_0031(c, 123u, depth + 1u); else { c.pc = 0x001C55F0u; return; } if (c.pc != 0x001C5718u) [[unlikely]] return; }
L_001C5718:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C5710u | kUnwind; return; } goto L_001C5710; } }
    c.budget -= 1;
L_001C5730:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001C5740:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_001C5770; } }
L_001C5750:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5758u); set32(c.r[16], ld32((c.r[4].w[0] + 16u)));  if (depth < kMaxDepth) unit_0031(c, 123u, depth + 1u); else { c.pc = 0x001C55F0u; return; } if (c.pc != 0x001C5758u) [[unlikely]] return; }
L_001C5758:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C5750u | kUnwind; return; } goto L_001C5750; } }
    c.budget -= 1;
L_001C5770:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001C5780:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_001C57B0; } }
L_001C5790:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5798u); set32(c.r[16], ld32((c.r[4].w[0] + 12u)));  if (depth < kMaxDepth) unit_0031(c, 123u, depth + 1u); else { c.pc = 0x001C55F0u; return; } if (c.pc != 0x001C5798u) [[unlikely]] return; }
L_001C5798:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C5790u | kUnwind; return; } goto L_001C5790; } }
    c.budget -= 1;
L_001C57B0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001C57C0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    set32(c.r[2], c.r[4].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[18].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[2], c.r[2].w[0] + 960u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[20], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[19], ld32((c.r[20].w[0] + 8u)));
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    c.budget -= 18;
    { const bool t = c.r[19].d[0] == 0ull; mmi::paddub(c.r[16], c.r[6], c.r[0]);  if (t) { goto L_001C5850; } }
L_001C5808:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] < 0; mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (t) { goto L_001C5824; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_001C5844; } }
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 2;
L_001C5824:
    mmi::paddub(c.r[5], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5830u); mmi::paddub(c.r[6], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0031(c, 147u, depth + 1u); else { c.pc = 0x001C5950u; return; } if (c.pc != 0x001C5830u) [[unlikely]] return; }
L_001C5830:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001C5844; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[3], c.r[0]);  if (t) { goto L_001C58A0; } }
L_001C5844:
    set32(c.r[19], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C5808u | kUnwind; return; } goto L_001C5808; } }
L_001C5850:
    set32(c.r[16], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; mmi::paddub(c.r[5], c.r[18], c.r[0]);  if (t) { goto L_001C588C; } }
L_001C5860:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 8u));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 8u));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001C5878; } }
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 1;
L_001C5878:
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C5860u | kUnwind; return; } goto L_001C5860; } }
    mmi::paddub(c.r[5], c.r[18], c.r[0]);
    c.budget -= 2;
L_001C588C:
    mmi::paddub(c.r[6], c.r[17], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5898u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0031(c, 154u, depth + 1u); else { c.pc = 0x001C5AE0u; return; } if (c.pc != 0x001C5898u) [[unlikely]] return; }
L_001C5898:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 2;
L_001C58A0:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001C58C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_001C58E4; } }
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    set32(c.r[16], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001C58F0; } }
L_001C58E4:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 3;
L_001C58F0:
    set32(c.r[3], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[7].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    c.r[4].d[0] = ld16((c.r[5].w[0] + 10u));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[17], c.r[4].w[0] + c.r[2].w[0]);
    mmi::paddub(c.r[4], c.r[5], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5914u); mmi::paddub(c.r[5], c.r[6], c.r[0]);  if (depth < kMaxDepth) unit_0031(c, 159u, depth + 1u); else { c.pc = 0x001C5BE0u; return; } if (c.pc != 0x001C5914u) [[unlikely]] return; }
L_001C5914:
    set32(c.r[4], c.r[17].w[0] + c.r[2].w[0]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001C5950:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    mmi::paddub(c.r[18], c.r[6], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5978u); mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0031(c, 158u, depth + 1u); else { c.pc = 0x001C5BA0u; return; } if (c.pc != 0x001C5978u) [[unlikely]] return; }
L_001C5978:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C598C; } }
    st16((c.r[17].w[0] + 8u), static_cast<std::uint16_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001C5A50; } }
L_001C598C:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 2u));
    set32(c.r[2], 0u + 255u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));  if (t) { goto L_001C59AC; } }
    set32(c.r[3], c.r[16].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] << 3);  if (t) { goto L_001C59C8; } }
L_001C59AC:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C59BCu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0031(c, 145u, depth + 1u); else { c.pc = 0x001C58C0u; return; } if (c.pc != 0x001C59BCu) [[unlikely]] return; }
L_001C59BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_001C5A48; } }
    set32(c.r[2], c.r[3].w[0] << 3);
    c.budget -= 1;
L_001C59C8:
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[2], c.r[2].w[0] + 968u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[18], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = c.r[18].d[0] != 0ull; mmi::paddub(c.r[19], c.r[0], c.r[0]);  if (t) { goto L_001C5A04; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 25432u)));
    c.r[2].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C5A00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001C5A50; } }
L_001C5A00:
    mmi::paddub(c.r[19], c.r[0], c.r[0]);
    c.budget -= 1;
L_001C5A04:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001C5A48; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_001C5A10:
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5A1Cu); mmi::paddub(c.r[6], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0031(c, 145u, depth + 1u); else { c.pc = 0x001C58C0u; return; } if (c.pc != 0x001C5A1Cu) [[unlikely]] return; }
L_001C5A1C:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[19].d[0] & 65535ull;
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001C5A38; } }
    c.r[19].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 2;
L_001C5A38:
    set32(c.r[18], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C5A10u | kUnwind; return; } goto L_001C5A10; } }
    c.budget -= 1;
L_001C5A48:
    st16((c.r[17].w[0] + 8u), static_cast<std::uint16_t>(c.r[19].w[0]));
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 2;
L_001C5A50:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001C5A70:
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[4], c.r[3].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[3], c.r[3].w[0] + 960u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_001C5AD8; } }
    set32(c.r[5], 0u + 25u);
    set32(c.r[3], 0u + 10u);
    c.budget -= 2;
L_001C5A9C:
    st16((c.r[6].w[0] + 10u), static_cast<std::uint16_t>(0u));
    set32(c.r[7], ld32((c.r[6].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_001C5AC8; } }
    c.r[4].d[0] = ld8((c.r[7].w[0] + 2u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_001C5AC8; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_001C5AC8; } }
    st16((c.r[6].w[0] + 10u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 1;
L_001C5AC8:
    set32(c.r[6], ld32((c.r[6].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C5A9Cu | kUnwind; return; } goto L_001C5A9C; } }
    c.budget -= 1;
L_001C5AD8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C5AE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[3], 0u + 255u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 2u));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[5].w[0] + c.r[7].w[0]);  if (t) { goto L_001C5B80; } }
    c.r[3].d[0] = c.r[4].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[4].w[0] << 3);  if (t) { goto L_001C5B1C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_001C5B84; } }
L_001C5B1C:
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[4], c.r[3].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[3], c.r[3].w[0] + 968u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[17], ld32((c.r[3].w[0])));
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001C5B80; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001C5B80; } }
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_001C5B48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5B50u); st16((c.r[17].w[0] + 10u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0031(c, 158u, depth + 1u); else { c.pc = 0x001C5BA0u; return; } if (c.pc != 0x001C5B50u) [[unlikely]] return; }
L_001C5B50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_001C5B70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5B60u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0031(c, 159u, depth + 1u); else { c.pc = 0x001C5BE0u; return; } if (c.pc != 0x001C5B60u) [[unlikely]] return; }
L_001C5B60:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001C5B70; } }
    st16((c.r[17].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001C5B70:
    set32(c.r[17], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C5B48u | kUnwind; return; } goto L_001C5B48; } }
    c.budget -= 1;
L_001C5B80:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_001C5B84:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001C5BA0:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { mmi::paddub(c.r[2], c.r[0], c.r[0]);  goto L_001C5BD8; }
    c.r[3].d[0] = ld8((c.r[2].w[0] + 2u));
    set32(c.r[2], 0u + 40u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_001C5BCC; } }
    set32(c.r[2], 0u + 41u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001C5BD4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001C5BCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C5BD8; } }
L_001C5BD4:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_001C5BD8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C5BE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[8].d[0] = ld8((c.r[4].w[0] + 2u));
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    mmi::paddub(c.r[10], c.r[0], c.r[0]);
    c.r[2].d[0] = c.r[8].sd[0] < 45ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[9].d[0] = 0ull & 255ull;  if (t) { goto L_001C5C18; } }
    c.r[2].d[0] = c.r[8].d[0] & 255ull;
    c.r[1].d[0] = c.r[2].sd[0] < 57ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001C5C18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[10].d[0] = ld8((c.r[4].w[0] + 3u));  if (t) { goto L_001C5C20; } }
L_001C5C18:
    c.r[9].d[0] = ld8((c.r[4].w[0] + 3u));
    c.budget -= 2;
L_001C5C20:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_001C5C30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (t) { goto L_001C5CB4; } }
L_001C5C30:
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001C5C44; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (t) { goto L_001C5CB4; } }
L_001C5C44:
    c.r[6].d[0] = ld8((c.r[3].w[0] + 2u));
    set32(c.r[2], 0u + 40u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 41u);  if (t) { goto L_001C5C60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001C5E20; } }
    set32(c.r[2], 0u + 41u);
    c.budget -= 1;
L_001C5C60:
    c.r[11].d[0] = c.r[6].d[0] & 255ull;
    c.budget -= 3;
    if (c.r[11].d[0] == c.r[2].d[0]) { set32(c.r[7], c.r[7].w[0] + 20u);  goto L_001C5CB4; }
    set32(c.r[2], 0u + 25u);
    c.budget -= 3;
    { const bool t = c.r[11].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 31u);  if (t) { goto L_001C5C88; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_001C5CB0; } }
    set32(c.r[2], 0u + 31u);
    c.budget -= 1;
L_001C5C88:
    c.budget -= 2;
    { const bool t = c.r[11].d[0] != c.r[2].d[0];  if (t) { goto L_001C5CB4; } }
    set32(c.r[2], 0u - 1u);
    c.r[3].d[0] = ld64((c.r[3].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001C5CB4; } }
L_001C5CB0:
    set32(c.r[7], c.r[7].w[0] + 20u);
    c.budget -= 1;
L_001C5CB4:
    set32(c.r[11], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[11].d[0] == 0ull; c.r[2].d[0] = c.r[9].d[0] & 255ull;  if (t) { goto L_001C5D30; } }
    c.r[3].d[0] = ld8((c.r[11].w[0] + 2u));
    set32(c.r[2], 0u + 25u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[3].w[0] - 27u);  if (t) { goto L_001C5CE8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[11].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C5CE4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 10u);  if (t) { goto L_001C5D2C; } }
L_001C5CE4:
    set32(c.r[2], c.r[3].w[0] - 27u);
    c.budget -= 1;
L_001C5CE8:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 26u);  if (t) { goto L_001C5D00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 3u);  if (t) { goto L_001C5D2C; } }
    set32(c.r[2], 0u + 26u);
    c.budget -= 1;
L_001C5D00:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].d[0] = c.r[3].sd[0] < 26ll ? 1ull : 0ull;  if (t) { goto L_001C5D14; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 2u);  if (t) { goto L_001C5D2C; } }
    c.r[1].d[0] = c.r[3].sd[0] < 26ll ? 1ull : 0ull;
    c.budget -= 1;
L_001C5D14:
    c.budget -= 2;
    if (c.r[1].d[0] != 0ull) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_001C5D2C; }
    c.r[2].d[0] = c.r[3].sd[0] < 31ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C5D2C; } }
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_001C5D2C:
    c.r[2].d[0] = c.r[9].d[0] & 255ull;
    c.budget -= 1;
L_001C5D30:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { mmi::paddub(c.r[4], c.r[8], c.r[0]);  goto L_001C5D4C; }
    set32(c.r[2], 0u + 13u);
    c.r[3].d[0] = c.r[8].d[0] & 255ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 45u);  if (t) { goto L_001C5D60; } }
    mmi::paddub(c.r[4], c.r[8], c.r[0]);
    c.budget -= 1;
L_001C5D4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5D54u); mmi::paddub(c.r[5], c.r[9], c.r[0]);  if (depth < kMaxDepth) unit_0031(c, 165u, depth + 1u); else { c.pc = 0x001C5E30u; return; } if (c.pc != 0x001C5D54u) [[unlikely]] return; }
L_001C5D54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_001C5E24; } }
    set32(c.r[2], 0u + 45u);
    c.budget -= 1;
L_001C5D60:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[10].d[0] = c.r[6].d[0] & 255ull;  goto L_001C5D88; }
    mmi::paddub(c.r[5], c.r[6], c.r[0]);
    set32(c.r[6], 0u + 255u);
    mmi::paddub(c.r[4], c.r[10], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5D7Cu); mmi::paddub(c.r[8], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0031(c, 168u, depth + 1u); else { c.pc = 0x001C6300u; return; } if (c.pc != 0x001C5D7Cu) [[unlikely]] return; }
L_001C5D7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C5E20; } }
    c.r[10].d[0] = c.r[6].d[0] & 255ull;
    c.budget -= 1;
L_001C5D88:
    c.r[2].d[0] = c.r[10].sd[0] < 50ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[3].sd[0] < 20ll ? 1ull : 0ull;  if (t) { goto L_001C5DD4; } }
    c.r[1].d[0] = c.r[10].sd[0] < 57ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001C5DD0; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (t) { goto L_001C5DB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = ld8((c.r[2].w[0] + 3u));  if (t) { goto L_001C5DB8; } }
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 1;
L_001C5DB8:
    mmi::paddub(c.r[5], c.r[8], c.r[0]);
    set32(c.r[8], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5DC8u); mmi::paddub(c.r[6], c.r[9], c.r[0]);  if (depth < kMaxDepth) unit_0031(c, 168u, depth + 1u); else { c.pc = 0x001C6300u; return; } if (c.pc != 0x001C5DC8u) [[unlikely]] return; }
L_001C5DC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C5E20; } }
L_001C5DD0:
    c.r[2].d[0] = c.r[3].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 1;
L_001C5DD4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[3].sd[0] < 192ll ? 1ull : 0ull;  if (t) { goto L_001C5E04; } }
    c.r[1].d[0] = c.r[3].sd[0] < 192ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001C5E00; } }
    mmi::paddub(c.r[5], c.r[6], c.r[0]);
    mmi::paddub(c.r[4], c.r[8], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5DF8u); mmi::paddub(c.r[6], c.r[7], c.r[0]);  if (depth < kMaxDepth) unit_0031(c, 166u, depth + 1u); else { c.pc = 0x001C5FC0u; return; } if (c.pc != 0x001C5DF8u) [[unlikely]] return; }
L_001C5DF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C5E20; } }
L_001C5E00:
    c.r[2].d[0] = c.r[3].sd[0] < 192ll ? 1ull : 0ull;
    c.budget -= 1;
L_001C5E04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[2], c.r[7], c.r[0]);  if (t) { goto L_001C5E20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C5E14u); mmi::paddub(c.r[5], c.r[8], c.r[0]);  if (depth < kMaxDepth) unit_0031(c, 167u, depth + 1u); else { c.pc = 0x001C60D0u; return; } if (c.pc != 0x001C5E14u) [[unlikely]] return; }
L_001C5E14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C5E20; } }
    mmi::paddub(c.r[2], c.r[7], c.r[0]);
    c.budget -= 1;
L_001C5E20:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_001C5E24:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001C5E30:
    set32(c.r[2], 0u + 13u);
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; c.r[3].d[0] = c.r[5].d[0] & 255ull;  if (t) { goto L_001C5E70; } }
    c.r[2].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C5E6C; } }
    c.r[2].d[0] = c.r[6].d[0] & 255ull;
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { mmi::paddub(c.r[2], c.r[7], c.r[0]);  goto L_001C5FB0; }
    c.r[1].d[0] = c.r[2].sd[0] < 24ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001C5FAC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[7].w[0] + 3u);  if (t) { goto L_001C5FB0; } }
L_001C5E6C:
    c.r[3].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 1;
L_001C5E70:
    c.r[2].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 8u);  if (t) { goto L_001C5EE8; } }
    c.r[1].d[0] = c.r[3].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001C5EE4; } }
    c.r[2].d[0] = c.r[6].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001C5EE4; } }
    c.r[1].d[0] = c.r[2].sd[0] < 24ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001C5EE4; } }
    set32(c.r[2], 0u + 141u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], c.r[7].w[0] + 10u);  if (t) { goto L_001C5EC8; } }
    set32(c.r[2], 0u + 142u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; c.r[1].d[0] = c.r[4].sd[0] < 141ll ? 1ull : 0ull;  if (t) { goto L_001C5ED4; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001C5ED0; } }
    set32(c.r[2], c.r[7].w[0] + 10u);
    c.budget -= 1;
L_001C5EC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C5FB0; } }
L_001C5ED0:
    c.r[1].d[0] = c.r[4].sd[0] < 141ll ? 1ull : 0ull;
    c.budget -= 1;
L_001C5ED4:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001C5FAC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[7].w[0] + 3u);  if (t) { goto L_001C5FB0; } }
L_001C5EE4:
    set32(c.r[2], 0u + 8u);
    c.budget -= 1;
L_001C5EE8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001C5FAC; } }
    c.r[3].d[0] = c.r[6].d[0] & 255ull;
    c.r[2].d[0] = c.r[3].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C5FAC; } }
    c.r[1].d[0] = c.r[3].sd[0] < 25ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001C5FAC; } }
    c.r[2].d[0] = c.r[4].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 146u);  if (t) { goto L_001C5F28; } }
    c.r[1].d[0] = c.r[4].sd[0] < 143ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], c.r[7].w[0] + 15u);  if (t) { goto L_001C5F98; } }
    set32(c.r[2], 0u + 146u);
    c.budget -= 1;
L_001C5F28:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001C5F94; } }
    set32(c.r[2], 0u + 148u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001C5F94; } }
    set32(c.r[2], 0u + 160u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001C5F94; } }
    set32(c.r[2], 0u + 162u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001C5F94; } }
    set32(c.r[2], c.r[4].w[0] - 174u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001C5F94; } }
    set32(c.r[2], 0u + 177u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001C5F94; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001C5F94; } }
    c.r[2].d[0] = c.r[4].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[7].w[0] + 3u);  if (t) { goto L_001C5FA4; } }
    c.r[1].d[0] = c.r[4].sd[0] < 13ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001C5FA0; } }
L_001C5F94:
    set32(c.r[2], c.r[7].w[0] + 15u);
    c.budget -= 1;
L_001C5F98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C5FB0; } }
L_001C5FA0:
    set32(c.r[2], c.r[7].w[0] + 3u);
    c.budget -= 1;
L_001C5FA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C5FB0; } }
L_001C5FAC:
    mmi::paddub(c.r[2], c.r[7], c.r[0]);
    c.budget -= 1;
L_001C5FB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C5FC0:
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.r[2].d[0] = c.r[4].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u + 31u);  if (t) { goto L_001C6010; } }
    c.r[1].d[0] = c.r[4].sd[0] < 25ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001C600C; } }
    c.r[3].d[0] = c.r[5].d[0] & 255ull;
    c.r[2].d[0] = c.r[3].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[2], c.r[6], c.r[0]);  if (t) { goto L_001C6004; } }
    c.r[1].d[0] = c.r[3].sd[0] < 25ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001C6000; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[6].w[0] + 3u);  if (t) { goto L_001C60C0; } }
L_001C6000:
    mmi::paddub(c.r[2], c.r[6], c.r[0]);
    c.budget -= 1;
L_001C6004:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C60C0; } }
L_001C600C:
    set32(c.r[3], 0u + 31u);
    c.budget -= 1;
L_001C6010:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[2], 0u + 33u);  if (t) { goto L_001C6030; } }
    c.r[2].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001C602C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[6].w[0] + 15u);  if (t) { goto L_001C60C0; } }
L_001C602C:
    set32(c.r[2], 0u + 33u);
    c.budget -= 1;
L_001C6030:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], c.r[6].w[0] + 20u);  if (t) { goto L_001C604C; } }
    set32(c.r[2], c.r[4].w[0] - 38u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 32u);  if (t) { goto L_001C6058; } }
    set32(c.r[2], c.r[6].w[0] + 20u);
    c.budget -= 1;
L_001C604C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C60C0; } }
    set32(c.r[2], 0u + 32u);
    c.budget -= 1;
L_001C6058:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], c.r[6].w[0] + 15u);  if (t) { goto L_001C6070; } }
    set32(c.r[2], 0u + 34u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 27u);  if (t) { goto L_001C607C; } }
    set32(c.r[2], c.r[6].w[0] + 15u);
    c.budget -= 1;
L_001C6070:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C60C0; } }
    set32(c.r[2], 0u + 27u);
    c.budget -= 1;
L_001C607C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; set32(c.r[3], 0u + 26u);  if (t) { goto L_001C60A0; } }
    set32(c.r[2], 0u + 28u);
    c.r[3].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001C609C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[6].w[0] + 20u);  if (t) { goto L_001C60C0; } }
L_001C609C:
    set32(c.r[3], 0u + 26u);
    c.budget -= 1;
L_001C60A0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; mmi::paddub(c.r[2], c.r[6], c.r[0]);  if (t) { goto L_001C60C0; } }
    c.r[2].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001C60BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[6].w[0] + 5u);  if (t) { goto L_001C60C0; } }
L_001C60BC:
    mmi::paddub(c.r[2], c.r[6], c.r[0]);
    c.budget -= 1;
L_001C60C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C60D0:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[8], c.r[0], c.r[0]);  if (t) { goto L_001C611C; } }
    c.r[9].d[0] = ld8((c.r[3].w[0] + 2u));
    c.r[2].d[0] = c.r[9].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 50u);  if (t) { goto L_001C60FC; } }
    c.r[1].d[0] = c.r[9].sd[0] < 26ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001C6104; } }
    set32(c.r[2], 0u + 50u);
    c.budget -= 1;
L_001C60FC:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 199u);  if (t) { goto L_001C6120; } }
L_001C6104:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[8], c.r[8].w[0] + 1u);  if (t) { goto L_001C611C; } }
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_001C611C:
    set32(c.r[2], 0u + 199u);
    c.budget -= 1;
L_001C6120:
    c.r[3].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 200u);  if (t) { goto L_001C6168; } }
    c.r[2].d[0] = c.r[6].d[0] & 255ull;
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { set32(c.r[2], c.r[7].w[0] + 25u);  goto L_001C615C; }
    c.r[1].d[0] = c.r[2].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], c.r[7].w[0] + 30u);  if (t) { goto L_001C6150; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C6158; } }
    set32(c.r[2], c.r[7].w[0] + 30u);
    c.budget -= 1;
L_001C6150:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C615C; } }
L_001C6158:
    set32(c.r[2], c.r[7].w[0] + 25u);
    c.budget -= 1;
L_001C615C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C62F8; } }
    set32(c.r[2], 0u + 200u);
    c.budget -= 1;
L_001C6168:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 193u);  if (t) { goto L_001C61A8; } }
    c.r[2].d[0] = c.r[6].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_001C6188; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[7], c.r[0]);  if (t) { goto L_001C62F8; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_001C6188:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[7].w[0] + 5u);  if (t) { goto L_001C619C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[7].w[0] + 20u);  if (t) { goto L_001C619C; } }
    set32(c.r[2], c.r[7].w[0] + 5u);
    c.budget -= 1;
L_001C619C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C62F8; } }
    set32(c.r[2], 0u + 193u);
    c.budget -= 1;
L_001C61A8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_001C61C0; } }
    set32(c.r[2], 0u + 225u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[3].w[0] - 196u);  if (t) { goto L_001C61D8; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_001C61C0:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != c.r[2].d[0];  if (t) { goto L_001C61CC; } }
    set32(c.r[7], c.r[7].w[0] + 5u);
    c.budget -= 1;
L_001C61CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[7], c.r[0]);  if (t) { goto L_001C62F8; } }
    set32(c.r[2], c.r[3].w[0] - 196u);
    c.budget -= 1;
L_001C61D8:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { c.r[3].d[0] = c.r[6].d[0] & 255ull;  goto L_001C6200; }
    c.r[2].d[0] = c.r[3].sd[0] < 206ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 194u);  if (t) { goto L_001C6248; } }
    c.r[1].d[0] = c.r[3].sd[0] < 210ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001C6244; } }
    c.r[3].d[0] = c.r[6].d[0] & 255ull;
    c.budget -= 1;
L_001C6200:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] <= 0; c.r[2].d[0] = c.r[3].sd[0] < 22ll ? 1ull : 0ull;  if (t) { goto L_001C6218; } }
    c.r[1].d[0] = c.r[3].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], c.r[7].w[0] + 5u);  if (t) { goto L_001C6230; } }
    c.r[2].d[0] = c.r[3].sd[0] < 22ll ? 1ull : 0ull;
    c.budget -= 1;
L_001C6218:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[2], c.r[7], c.r[0]);  if (t) { goto L_001C623C; } }
    c.r[1].d[0] = c.r[3].sd[0] < 24ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001C6238; } }
    set32(c.r[2], c.r[7].w[0] + 5u);
    c.budget -= 1;
L_001C6230:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C62F8; } }
L_001C6238:
    mmi::paddub(c.r[2], c.r[7], c.r[0]);
    c.budget -= 1;
L_001C623C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C62F8; } }
L_001C6244:
    set32(c.r[2], 0u + 194u);
    c.budget -= 1;
L_001C6248:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[3].sd[0] < 252ll ? 1ull : 0ull;  if (t) { goto L_001C6284; } }
    c.r[2].d[0] = c.r[6].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_001C6268; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[7], c.r[0]);  if (t) { goto L_001C62F8; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_001C6268:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != c.r[2].d[0]; mmi::paddub(c.r[2], c.r[7], c.r[0]);  if (t) { goto L_001C6278; } }
    set32(c.r[7], c.r[7].w[0] + 3u);
    mmi::paddub(c.r[2], c.r[7], c.r[0]);
    c.budget -= 2;
L_001C6278:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C62F8; } }
    c.r[2].d[0] = c.r[3].sd[0] < 252ll ? 1ull : 0ull;
    c.budget -= 1;
L_001C6284:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 250u);  if (t) { goto L_001C62BC; } }
    c.r[1].d[0] = c.r[3].sd[0] < 254ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001C62B8; } }
    c.r[2].d[0] = c.r[6].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001C62B8; } }
    c.r[1].d[0] = c.r[2].sd[0] < 24ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001C62B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[7].w[0] + 18u);  if (t) { goto L_001C62F8; } }
L_001C62B8:
    set32(c.r[2], 0u + 250u);
    c.budget -= 1;
L_001C62BC:
    c.budget -= 2;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[3].d[0] = c.r[6].d[0] & 255ull;  goto L_001C62D4; }
    set32(c.r[2], 0u + 254u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[2], c.r[7], c.r[0]);  if (t) { goto L_001C62F8; } }
    c.r[3].d[0] = c.r[6].d[0] & 255ull;
    c.budget -= 1;
L_001C62D4:
    c.r[2].d[0] = c.r[3].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C62F4; } }
    c.r[1].d[0] = c.r[3].sd[0] < 25ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001C62F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[7].w[0] + 18u);  if (t) { goto L_001C62F8; } }
L_001C62F4:
    mmi::paddub(c.r[2], c.r[7], c.r[0]);
    c.budget -= 1;
L_001C62F8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C6300:
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001C64EC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], c.r[4].w[0] + 13168u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x001C4000u < 16384u) { entry = entries_0031[(t - 0x001C4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001C632C:
    c.r[4].d[0] = c.r[5].d[0] & 255ull;
    c.r[3].d[0] = c.r[4].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 50u);  if (t) { goto L_001C634C; } }
    c.r[1].d[0] = c.r[4].sd[0] < 26ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], 0u + 15u);  goto L_001C6358; }
    set32(c.r[3], 0u + 50u);
    c.budget -= 1;
L_001C634C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001C64EC; } }
    set32(c.r[2], 0u + 15u);
    c.budget -= 1;
L_001C6358:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C64EC; } }
L_001C6360:
    set32(c.r[3], 0u + 26u);
    c.r[4].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001C64EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 15u);  if (t) { goto L_001C64EC; } }
L_001C6378:
    set32(c.r[3], 0u + 27u);
    c.r[4].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 20u);  goto L_001C6398; }
    set32(c.r[3], 0u + 28u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001C64EC; } }
    set32(c.r[2], 0u + 20u);
    c.budget -= 1;
L_001C6398:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C64EC; } }
L_001C63A0:
    set32(c.r[3], 0u + 31u);
    c.r[4].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 20u);  goto L_001C63C0; }
    set32(c.r[3], 0u + 56u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001C64EC; } }
    set32(c.r[2], 0u + 20u);
    c.budget -= 1;
L_001C63C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C64EC; } }
L_001C63C8:
    set32(c.r[3], 0u + 22u);
    c.r[4].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001C64EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 20u);  if (t) { goto L_001C64EC; } }
L_001C63E0:
    set32(c.r[3], 0u + 255u);
    c.r[6].d[0] = c.r[6].d[0] & 255ull;
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[5].d[0] & 255ull;  if (t) { goto L_001C6414; } }
    c.r[3].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_001C64EC; } }
    c.r[1].d[0] = c.r[3].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001C64EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 15u);  if (t) { goto L_001C64EC; } }
    c.r[4].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 1;
L_001C6414:
    c.r[3].d[0] = c.r[4].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 13u);  if (t) { goto L_001C643C; } }
    c.r[1].d[0] = c.r[4].sd[0] < 140ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001C6438; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 15u);  goto L_001C6450; }
L_001C6438:
    set32(c.r[3], 0u + 13u);
    c.budget -= 1;
L_001C643C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001C64EC; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_001C64EC; } }
    set32(c.r[2], 0u + 15u);
    c.budget -= 1;
L_001C6450:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C64EC; } }
L_001C6458:
    c.r[4].d[0] = c.r[5].d[0] & 255ull;
    c.r[3].d[0] = c.r[4].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 31u);  if (t) { goto L_001C6480; } }
    c.r[1].d[0] = c.r[4].sd[0] < 26ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001C647C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 15u);  if (t) { goto L_001C64EC; } }
L_001C647C:
    set32(c.r[3], 0u + 31u);
    c.budget -= 1;
L_001C6480:
    c.budget -= 2;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 20u);  goto L_001C6498; }
    set32(c.r[3], 0u + 56u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001C64EC; } }
    set32(c.r[2], 0u + 20u);
    c.budget -= 1;
L_001C6498:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C64EC; } }
L_001C64A0:
    set32(c.r[3], 0u + 29u);
    c.r[4].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001C64EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 15u);  if (t) { goto L_001C64EC; } }
L_001C64B8:
    c.r[4].d[0] = c.r[5].d[0] & 255ull;
    c.r[3].d[0] = c.r[4].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001C64D4; } }
    c.r[1].d[0] = c.r[4].sd[0] < 26ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], 0u + 20u);  goto L_001C64EC; }
L_001C64D4:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] <= 0;  if (t) { goto L_001C64EC; } }
    c.r[1].d[0] = c.r[4].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001C64EC; } }
    set32(c.r[2], 0u + 20u);
    c.budget -= 1;
L_001C64EC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);  goto L_001C6500; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[7], c.r[0]);  if (t) { goto L_001C6508; } }
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    c.budget -= 1;
L_001C6500:
    set32(c.r[7], c.r[8].w[0] + c.r[2].w[0]);
    mmi::paddub(c.r[2], c.r[7], c.r[0]);
    c.budget -= 2;
L_001C6508:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C6510:
    c.r[2].d[0] = c.r[5].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C6528; } }
    set32(c.r[2], c.r[2].w[0] + 1000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_001C6530; } }
L_001C6528:
    c.r[2].d[0] = ld16((c.r[4].w[0] + 8u));
    c.budget -= 2;
L_001C6530:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C6540:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[2], c.r[2].w[0] - 2128u);
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] & 192ull;  c.pc = t; return; }
L_001C6560:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[2], c.r[2].w[0] - 2128u);
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] & 128ull;  c.pc = t; return; }
L_001C6580:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[2], c.r[2].w[0] - 2128u);
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] & 64ull;  c.pc = t; return; }
L_001C65A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[2], c.r[2].w[0] - 2128u);
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] & 32ull;  c.pc = t; return; }
L_001C65C0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[2], c.r[2].w[0] - 2128u);
    set32(c.r[19], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    mmi::paddub(c.r[22], c.r[6], c.r[0]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    mmi::paddub(c.r[21], c.r[7], c.r[0]);
    c.r[20].d[0] = c.r[2].d[0] & 15ull;
    c.r[1].d[0] = c.r[20].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 23;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[7].w[0]), c.r[19].w[0]);  if (t) { goto L_001C6674; } }
    c.r[1].d[0] = c.r[20].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[20].sd[0] < 9ll ? 1ull : 0ull;  if (t) { goto L_001C663C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[18], c.r[2].w[0] - 1871u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[17], c.r[16], c.r[0]);  if (t) { goto L_001C6874; } }
    c.r[1].d[0] = c.r[20].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 1;
L_001C663C:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001C6650; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C6660; } }
L_001C6650:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6658u); c.r[4].d[0] = ld16((c.r[16].w[0]));  if (depth < kMaxDepth) unit_002F(c, 180u, depth + 1u); else { c.pc = 0x001BDB60u; return; } if (c.pc != 0x001C6658u) [[unlikely]] return; }
L_001C6658:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[22].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001C666C; } }
L_001C6660:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6668u); c.r[4].d[0] = ld16((c.r[16].w[0]));  if (depth < kMaxDepth) unit_002F(c, 181u, depth + 1u); else { c.pc = 0x001BDBB0u; return; } if (c.pc != 0x001C6668u) [[unlikely]] return; }
L_001C6668:
    st16((c.r[22].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_001C666C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001C6920; } }
L_001C6674:
    c.r[1].d[0] = c.r[20].sd[0] < 13ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (t) { goto L_001C66C8; } }
    set32(c.r[2], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != c.r[2].d[0];  if (t) { goto L_001C66A4; } }
    c.r[5].d[0] = ld16((c.r[16].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6698u); set32(c.r[4], 0u + 115u);  if (depth < kMaxDepth) unit_002F(c, 183u, depth + 1u); else { c.pc = 0x001BDC20u; return; } if (c.pc != 0x001C6698u) [[unlikely]] return; }
L_001C6698:
    st16((c.r[22].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_001C66C8; } }
L_001C66A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C66ACu); c.r[4].d[0] = ld16((c.r[16].w[0]));  if (depth < kMaxDepth) unit_002F(c, 180u, depth + 1u); else { c.pc = 0x001BDB60u; return; } if (c.pc != 0x001C66ACu) [[unlikely]] return; }
L_001C66AC:
    st16((c.r[22].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[20].d[0] != c.r[2].d[0]; c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(3ll);  if (t) { goto L_001C66C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(2ll);  if (t) { goto L_001C66C8; } }
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(3ll);
    c.budget -= 1;
L_001C66C8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_001C66E4; } }
    set32(c.r[2], 0u - 1u);
    c.r[3].d[0] = c.r[4].d[0] & 65535ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; if (c.r[3].d[0] == 0) c.r[2].d[0] = 0ull;  if (t) { goto L_001C6920; } }
L_001C66E4:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 2u));
    c.r[2].d[0] = ld8((c.r[16].w[0]));
    c.r[3].d[0] = c.r[5].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[17], c.r[16].w[0] + 2u);  if (t) { goto L_001C6734; } }
    set32(c.r[2], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[20].sd[0] < 13ll ? 1ull : 0ull;  if (t) { goto L_001C6718; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_001C6920; } }
    c.r[2].d[0] = c.r[20].sd[0] < 13ll ? 1ull : 0ull;
    c.budget -= 1;
L_001C6718:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001C6738; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6728u); set32(c.r[4], 0u + 67u);  if (depth < kMaxDepth) unit_002F(c, 183u, depth + 1u); else { c.pc = 0x001BDC20u; return; } if (c.pc != 0x001C6728u) [[unlikely]] return; }
L_001C6728:
    st16((c.r[22].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001C6920; } }
L_001C6734:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001C6738:
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_001C6758; } }
    set32(c.r[2], 0u + 39u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001C6758; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_001C6920; } }
L_001C6758:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[2], c.r[2].w[0] - 2128u);
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[2], 0u + 7u);
    c.r[20].d[0] = c.r[3].d[0] & 15ull;
    c.budget -= 9;
    { const bool t = c.r[20].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 6u);  if (t) { goto L_001C67A0; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_001C679C; } }
    c.r[3].d[0] = ld16((c.r[22].w[0]));
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], c.r[3].w[0] + 2u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[22].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001C6920; } }
L_001C679C:
    set32(c.r[2], 0u + 6u);
    c.budget -= 1;
L_001C67A0:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != c.r[2].d[0]; c.r[1].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_001C67F0; } }
    c.r[2].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C67EC; } }
    c.r[3].d[0] = ld16((c.r[22].w[0]));
    set32(c.r[2], 0u + 179u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[22].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0]));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_001C67E4; } }
    c.r[5].d[0] = ld16((c.r[17].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C67DCu); set32(c.r[4], 0u + 116u);  if (depth < kMaxDepth) unit_002F(c, 183u, depth + 1u); else { c.pc = 0x001BDC20u; return; } if (c.pc != 0x001C67DCu) [[unlikely]] return; }
L_001C67DC:
    st16((c.r[22].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 2u);
    c.budget -= 2;
L_001C67E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);  if (t) { goto L_001C6924; } }
L_001C67EC:
    c.r[1].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 1;
L_001C67F0:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001C6820; } }
    c.r[1].d[0] = c.r[20].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[19], 0u + 2u);  if (t) { goto L_001C682C; } }
    c.r[1].d[0] = c.r[20].sd[0] < 15ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001C6828; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_001C6828; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001C6820:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C6920; } }
L_001C6828:
    set32(c.r[19], 0u + 2u);
    c.budget -= 1;
L_001C682C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[3], c.r[2].w[0] - 2128u);
    c.r[2].d[0] = c.r[20].d[0] & 255ull;
    c.budget -= 3;
L_001C6838:
    c.r[1].d[0] = c.r[2].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[2], c.r[19], c.r[0]);  if (t) { goto L_001C68C8; } }
    set32(c.r[5], c.r[17].w[0] + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6850u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0031(c, 196u, depth + 1u); else { c.pc = 0x001C6990u; return; } if (c.pc != 0x001C6850u) [[unlikely]] return; }
L_001C6850:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[18], c.r[2], c.r[0]);  if (t) { goto L_001C6884; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6864u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0031(c, 201u, depth + 1u); else { c.pc = 0x001C6A90u; return; } if (c.pc != 0x001C6864u) [[unlikely]] return; }
L_001C6864:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[18], c.r[2], c.r[0]);  if (t) { goto L_001C6874; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 2u);  if (t) { goto L_001C6920; } }
L_001C6874:
    c.r[2].d[0] = c.r[20].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[18], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_001C6884:
    c.r[4].d[0] = ld8((c.r[18].w[0]));
    c.r[5].d[0] = ld16((c.r[17].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6894u); set32(c.r[18], c.r[18].w[0] + 1u);  if (depth < kMaxDepth) unit_002F(c, 183u, depth + 1u); else { c.pc = 0x001BDC20u; return; } if (c.pc != 0x001C6894u) [[unlikely]] return; }
L_001C6894:
    st16((c.r[22].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].d[0] = ld8((c.r[18].w[0]));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; mmi::paddub(c.r[2], c.r[19], c.r[0]);  if (t) { goto L_001C68BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C68ACu); c.r[5].d[0] = ld16((c.r[17].w[0]));  if (depth < kMaxDepth) unit_002F(c, 183u, depth + 1u); else { c.pc = 0x001BDC20u; return; } if (c.pc != 0x001C68ACu) [[unlikely]] return; }
L_001C68AC:
    st16((c.r[22].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 2u);
    st32((c.r[21].w[0]), c.r[2].w[0]);
    mmi::paddub(c.r[2], c.r[19], c.r[0]);
    c.budget -= 4;
L_001C68BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C6920; } }
    mmi::paddub(c.r[2], c.r[19], c.r[0]);
    c.budget -= 1;
L_001C68C8:
    c.r[1].d[0] = c.r[2].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[19], c.r[19].w[0] + 1u);  if (t) { goto L_001C691C; } }
    set32(c.r[17], c.r[17].w[0] + 2u);
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[20].d[0] = c.r[2].d[0] & 15ull;
    c.r[2].d[0] = c.r[20].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[19].sd[0] < 5ll ? 1ull : 0ull;  if (t) { goto L_001C6904; } }
    c.r[1].d[0] = c.r[20].sd[0] < 13ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u - 2u);  if (t) { goto L_001C6914; } }
    c.r[1].d[0] = c.r[19].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 1;
L_001C6904:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull; c.r[2].d[0] = c.r[20].d[0] & 255ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C6838u | kUnwind; return; } goto L_001C6838; } }
    set32(c.r[2], 0u - 2u);
    c.budget -= 2;
L_001C6914:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C6920; } }
L_001C691C:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_001C6920:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    c.budget -= 1;
L_001C6924:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001C6950:
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    c.r[2].d[0] = c.r[3].sd[0] < 97ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[2], c.r[4], c.r[0]);  if (t) { goto L_001C697C; } }
    c.r[1].d[0] = c.r[3].sd[0] < 123ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001C6978; } }
    set32(c.r[2], c.r[3].w[0] - 32u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_001C697C; } }
L_001C6978:
    mmi::paddub(c.r[2], c.r[4], c.r[0]);
    c.budget -= 1;
L_001C697C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C6990:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[5].w[0] - c.r[17].w[0]);
    c.budget -= 12;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));  if (t) { goto L_001C69C8; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_001C69C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[2].w[0] - 1232u);  if (t) { goto L_001C6A58; } }
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_001C69D8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[19], c.r[19].w[0] + 1u);  if (t) { goto L_001C6A34; } }
    mmi::paddub(c.r[20], c.r[17], c.r[0]);
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] <= 0; mmi::paddub(c.r[21], c.r[16], c.r[0]);  if (t) { goto L_001C6A18; } }
    c.budget -= 1;
L_001C69F0:
    c.r[4].d[0] = ld8((c.r[20].w[0]));
    c.r[18].d[0] = ld8((c.r[19].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6A00u); set32(c.r[20], c.r[20].w[0] + 2u);  if (depth < kMaxDepth) unit_0031(c, 195u, depth + 1u); else { c.pc = 0x001C6950u; return; } if (c.pc != 0x001C6A00u) [[unlikely]] return; }
L_001C6A00:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_001C6A18; } }
    set32(c.r[21], c.r[21].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[21].sd[0] > 0; set32(c.r[19], c.r[19].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C69F0u | kUnwind; return; } goto L_001C69F0; } }
L_001C6A18:
    c.budget -= 2;
    if (c.r[21].d[0] != 0ull) { set32(c.r[19], c.r[19].w[0] + c.r[21].w[0]);  goto L_001C6A2C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[19], c.r[0]);  if (t) { goto L_001C6A68; } }
    set32(c.r[19], c.r[19].w[0] + c.r[21].w[0]);
    c.budget -= 1;
L_001C6A2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[19].w[0]));  if (t) { goto L_001C6A3C; } }
L_001C6A34:
    set32(c.r[19], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 1;
L_001C6A38:
    c.r[2].d[0] = ld8((c.r[19].w[0]));
    c.budget -= 1;
L_001C6A3C:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C6A38u | kUnwind; return; } goto L_001C6A38; } }
    c.budget -= 1;
L_001C6A58:
    c.r[2].d[0] = ld8((c.r[19].w[0]));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[2].d[0] & 255ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001C69D8u | kUnwind; return; } goto L_001C69D8; }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_001C6A68:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001C6A90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[5].w[0] - c.r[4].w[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));  if (t) { goto L_001C6AB4; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_001C6AB4:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[2], c.r[5].w[0] - 1u);  if (t) { goto L_001C6ACC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 1871u);  if (t) { goto L_001C6BAC; } }
    set32(c.r[2], c.r[5].w[0] - 1u);
    c.budget -= 1;
L_001C6ACC:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001C6BAC; } }
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.r[2].d[0] = c.r[3].sd[0] < 97ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[3].sd[0] < 65ll ? 1ull : 0ull;  if (t) { goto L_001C6B00; } }
    c.r[1].d[0] = c.r[3].sd[0] < 123ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001C6AFC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] - 97u);  if (t) { goto L_001C6B28; } }
L_001C6AFC:
    c.r[2].d[0] = c.r[3].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 1;
L_001C6B00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001C6B20; } }
    c.r[1].d[0] = c.r[3].sd[0] < 91ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001C6B1C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] - 65u);  if (t) { goto L_001C6B28; } }
L_001C6B1C:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_001C6B20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_001C6BB0; } }
L_001C6B28:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[2], c.r[2].w[0] - 1344u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; set32(c.r[16], ld32((c.r[3].w[0])));  if (t) { goto L_001C6B4C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[16].w[0] + 1u);  if (t) { goto L_001C6BAC; } }
L_001C6B4C:
    set32(c.r[3], c.r[3].w[0] + 4u);
    set32(c.r[17], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C6B4Cu | kUnwind; return; } goto L_001C6B4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6B70u); c.r[4].d[0] = ld8((c.r[4].w[0] + 2u));  if (depth < kMaxDepth) unit_0031(c, 195u, depth + 1u); else { c.pc = 0x001C6950u; return; } if (c.pc != 0x001C6B70u) [[unlikely]] return; }
L_001C6B70:
    set32(c.r[16], c.r[16].w[0] + 11u);
    c.r[1].d[0] = c.r[16].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_001C6BA8; } }
L_001C6B80:
    c.r[2].d[0] = ld8((c.r[16].w[0]));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[16], c.r[16].w[0] + 11u);  goto L_001C6B98; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[16].w[0] + 1u);  if (t) { goto L_001C6BAC; } }
    set32(c.r[16], c.r[16].w[0] + 11u);
    c.budget -= 1;
L_001C6B98:
    c.r[2].d[0] = c.r[16].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C6B80u | kUnwind; return; } goto L_001C6B80; } }
    c.budget -= 1;
L_001C6BA8:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_001C6BAC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_001C6BB0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001C6BC0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[28].w[0] - 25380u)));
    set32(c.r[17], ld32((c.r[28].w[0] - 25392u)));
    set32(c.r[18], ld32((c.r[28].w[0] - 25388u)));
    mmi::paddub(c.r[21], c.r[4], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] - 12800u);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6C04u); mmi::paddub(c.r[20], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0031(c, 211u, depth + 1u); else { c.pc = 0x001C6D80u; return; } if (c.pc != 0x001C6C04u) [[unlikely]] return; }
L_001C6C04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[19], c.r[2], c.r[0]);  if (t) { goto L_001C6D38; } }
L_001C6C0C:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_001C6C94; } }
    c.r[2].d[0] = c.r[20].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[3], c.r[2].w[0] << 8);
    c.r[2].d[0] = c.r[4].d[0] & 255ull;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6C30u); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0031(c, 118u, depth + 1u); else { c.pc = 0x001C5370u; return; } if (c.pc != 0x001C6C30u) [[unlikely]] return; }
L_001C6C30:
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; mmi::paddub(c.r[20], c.r[0], c.r[0]);  if (t) { goto L_001C6C8C; } }
    c.r[1].d[0] = c.r[18].sd[0] < 36ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001C6C5C; } }
    c.r[2].d[0] = c.r[19].sd[0] < 78ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_001C6C68; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_001C6C5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);  if (t) { goto L_001C6D60; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_001C6C68:
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6C78u); set32(c.r[16], c.r[16].w[0] + 8u);  if (depth < kMaxDepth) unit_0031(c, 108u, depth + 1u); else { c.pc = 0x001C5100u; return; } if (c.pc != 0x001C6C78u) [[unlikely]] return; }
L_001C6C78:
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[19], c.r[19].w[0] + 2u);
    mmi::paddub(c.r[20], c.r[0], c.r[0]);
    c.budget -= 5;
L_001C6C8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[21], c.r[21].w[0] + 1u);  if (t) { goto L_001C6D34; } }
L_001C6C94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6C9Cu);  if (depth < kMaxDepth) unit_0031(c, 94u, depth + 1u); else { c.pc = 0x001C4D90u; return; } if (c.pc != 0x001C6C9Cu) [[unlikely]] return; }
L_001C6C9C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C6CAC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = ld8((c.r[21].w[0]));  if (t) { goto L_001C6D30; } }
L_001C6CAC:
    c.r[3].d[0] = ld8((c.r[21].w[0]));
    c.r[2].d[0] = c.r[3].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[3].sd[0] < 160ll ? 1ull : 0ull;  if (t) { goto L_001C6CCC; } }
    c.r[2].d[0] = c.r[3].sd[0] < 127ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[18].sd[0] < 36ll ? 1ull : 0ull;  if (t) { goto L_001C6CE4; } }
    c.r[2].d[0] = c.r[3].sd[0] < 160ll ? 1ull : 0ull;
    c.budget -= 1;
L_001C6CCC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C6D30; } }
    c.r[1].d[0] = c.r[3].sd[0] < 224ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001C6D30; } }
    c.r[1].d[0] = c.r[18].sd[0] < 36ll ? 1ull : 0ull;
    c.budget -= 1;
L_001C6CE4:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001C6CFC; } }
    c.r[2].d[0] = c.r[19].sd[0] < 79ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_001C6D08; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_001C6CFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C6D5C; } }
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_001C6D08:
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[16], c.r[16].w[0] + 8u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[19], c.r[19].w[0] + 1u);
    mmi::paddub(c.r[20], c.r[0], c.r[0]);
    c.budget -= 10;
L_001C6D30:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 1;
L_001C6D34:
    c.budget -= 1;
L_001C6D38:
    c.r[4].d[0] = ld8((c.r[21].w[0]));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C6C0Cu | kUnwind; return; } goto L_001C6C0C; } }
    st32((c.r[28].w[0] - 25380u), c.r[16].w[0]);
    st32((c.r[28].w[0] - 25384u), c.r[16].w[0]);
    st32((c.r[28].w[0] - 25392u), c.r[17].w[0]);
    st32((c.r[28].w[0] - 25396u), c.r[17].w[0]);
    st32((c.r[28].w[0] - 25388u), c.r[18].w[0]);
    mmi::paddub(c.r[2], c.r[18], c.r[0]);
    c.budget -= 6;
L_001C6D5C:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    c.budget -= 1;
L_001C6D60:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001C6D80:
    c.r[1].d[0] = c.r[4].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001C6DB8; } }
L_001C6D8C:
    c.r[3].d[0] = ld16((c.r[4].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 65280ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], c.r[2].w[0] + 1u);  goto L_001C6DA8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 2u);  if (t) { goto L_001C6DA8; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 1;
L_001C6DA8:
    set32(c.r[4], c.r[4].w[0] + 8u);
    c.r[3].d[0] = c.r[4].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C6D8Cu | kUnwind; return; } goto L_001C6D8C; } }
L_001C6DB8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C6DC0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[3], c.r[3].w[0] - 12800u);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = c.r[5].sd[0] <= 0; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001C6DF8; } }
L_001C6DD8:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[5], c.r[5].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 8u);
    c.budget -= 7;
    { const bool t = c.r[5].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C6DD8u | kUnwind; return; } goto L_001C6DD8; } }
    c.budget -= 1;
L_001C6DF8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C6E00:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[6].w[0] << 1);
    set32(c.r[16], c.r[2].w[0] + c.r[6].w[0]);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    mmi::paddub(c.r[17], c.r[6], c.r[0]);
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    mmi::paddub(c.r[20], c.r[7], c.r[0]);
    set32(c.r[5], c.r[16].w[0] + 6u);
    set32(c.r[6], 0u + 1u);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6E48u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000D(c, 67u, depth + 1u); else { c.pc = 0x00135080u; return; } if (c.pc != 0x001C6E48u) [[unlikely]] return; }
L_001C6E48:
    set32(c.r[5], c.r[16].w[0] + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6E54u); set32(c.r[4], c.r[18].w[0] + 16u);  if (depth < kMaxDepth) unit_000D(c, 68u, depth + 1u); else { c.pc = 0x001350D0u; return; } if (c.pc != 0x001C6E54u) [[unlikely]] return; }
L_001C6E54:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] | 3ull;
    st64((c.r[18].w[0] + 32u), c.r[2].d[0]);
    set32(c.r[2], 0u + 14u);
    c.budget -= 7;
    { const bool t = c.r[20].d[0] != 0ull; st64((c.r[18].w[0] + 40u), c.r[2].d[0]);  if (t) { goto L_001C6E7C; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st64((c.r[18].w[0] + 48u), c.r[2].d[0]);  if (t) { goto L_001C6E80; } }
L_001C6E7C:
    st64((c.r[18].w[0] + 48u), 0ull);
    c.budget -= 1;
L_001C6E80:
    set32(c.r[2], 0u + 8u);
    st64((c.r[18].w[0] + 56u), c.r[2].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6E90u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 10u)));  if (depth < kMaxDepth) unit_000E(c, 120u, depth + 1u); else { c.pc = 0x00139C20u; return; } if (c.pc != 0x001C6E90u) [[unlikely]] return; }
L_001C6E90:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6E9Cu); mmi::paddub(c.r[20], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 120u, depth + 1u); else { c.pc = 0x00139C20u; return; } if (c.pc != 0x001C6E9Cu) [[unlikely]] return; }
L_001C6E9C:
    mmi::paddub(c.r[16], c.r[2], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[20].d[0] << 32;  if (t) { goto L_001C6F30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C6EB4u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 92u, depth + 1u); else { c.pc = 0x001394D0u; return; } if (c.pc != 0x001C6EB4u) [[unlikely]] return; }
L_001C6EB4:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = c.r[20].d[0] << 32;
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 8u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 4u)));
    c.r[6].d[0] = c.r[2].d[0] << 26;
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[5].d[0] = c.r[2].d[0] << 30;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 24u)));
    set32(c.r[4], 0u + 4u);
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 6u)));
    c.r[8].d[0] = c.r[8].d[0] << 14;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[7].d[0] = c.r[7].d[0] << 20;
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] << 37;
    c.r[8].d[0] = c.r[9].d[0] | c.r[8].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 51;
    c.r[3].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 30;
    { const bool t = 0ull == 0ull; st64((c.r[18].w[0] + 64u), c.r[2].d[0]);  if (t) { goto L_001C6F9C; } }
    c.r[2].d[0] = c.r[20].d[0] << 32;
    c.budget -= 1;
L_001C6F30:
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 8u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 4u)));
    c.r[6].d[0] = c.r[2].d[0] << 26;
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[5].d[0] = c.r[2].d[0] << 30;
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 26u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 24u)));
    set32(c.r[4], 0u + 4u);
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 6u)));
    c.r[8].d[0] = c.r[8].d[0] << 14;
    c.r[7].d[0] = c.r[7].d[0] << 20;
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] << 37;
    c.r[2].d[0] = c.r[2].d[0] << 51;
    c.r[8].d[0] = c.r[9].d[0] | c.r[8].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st64((c.r[18].w[0] + 64u), c.r[2].d[0]);
    c.budget -= 27;
L_001C6F9C:
    set32(c.r[2], 0u + 6u);
    st64((c.r[18].w[0] + 72u), c.r[2].d[0]);
    set32(c.r[2], 0u + 68u);
    st64((c.r[18].w[0] + 80u), c.r[2].d[0]);
    set32(c.r[2], 0u + 66u);
    st64((c.r[18].w[0] + 88u), c.r[2].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x303E0000u);
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    c.r[3].d[0] = c.r[17].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st64((c.r[18].w[0] + 96u), c.r[2].d[0]);
    set32(c.r[2], 0u + 1042u);
    st64((c.r[18].w[0] + 104u), c.r[2].d[0]);
    set32(c.r[2], c.r[18].w[0] + 112u);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 25;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001C7000:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = ld32((c.r[4].w[0]));
    c.f[1] = fp::mul(c.f[1], c.f[12]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 32u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    c.f[0] = ld32((c.r[29].w[0] + 32u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 13;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001C7038; } }
    st32((c.r[29].w[0] + 32u), c.f[1]);
    c.budget -= 1;
L_001C7038:
    c.f[1] = ld32((c.r[4].w[0] + 12u));
    c.f[0] = ld32((c.r[29].w[0] + 32u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[29].w[0] + 16u);  if (t) { goto L_001C7058; } }
    st32((c.r[29].w[0] + 32u), c.f[1]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 2;
L_001C7058:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7060u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 223u, depth + 1u); else { c.pc = 0x001026E8u; return; } if (c.pc != 0x001C7060u) [[unlikely]] return; }
L_001C7060:
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001C7070:
    set32(c.r[29], c.r[29].w[0] - 320u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    mmi::paddub(c.r[22], c.r[4], c.r[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    mmi::paddub(c.r[20], c.r[7], c.r[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    mmi::paddub(c.r[19], c.r[8], c.r[0]);
    mmi::paddub(c.r[4], c.r[5], c.r[0]);
    mmi::paddub(c.r[18], c.r[9], c.r[0]);
    mmi::paddub(c.r[21], c.r[6], c.r[0]);
    mmi::paddub(c.r[7], c.r[10], c.r[0]);
    mmi::paddub(c.r[5], c.r[19], c.r[0]);
    mmi::paddub(c.r[6], c.r[18], c.r[0]);
    st32((c.r[29].w[0]), c.f[20]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C70C4u); mmi::paddub(c.r[16], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0031(c, 215u, depth + 1u); else { c.pc = 0x001C6E00u; return; } if (c.pc != 0x001C70C4u) [[unlikely]] return; }
L_001C70C4:
    mmi::paddub(c.r[19], c.r[2], c.r[0]);
    set32(c.r[2], c.r[29].w[0] + 316u);
    st32((c.r[2].w[0]), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[17], c.r[0], c.r[0]);  if (t) { goto L_001C7450; } }
    set32(c.r[2], c.r[29].w[0] + 208u);
    c.budget -= 1;
L_001C70DC:
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[4]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[5]);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    st128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 317u)));
    set32(c.r[3], c.r[29].w[0] + 144u);
    set32(c.r[4], c.r[29].w[0] + 288u);
    set32(c.r[5], c.r[22].w[0] + 64u);
    st8((c.r[29].w[0] + 316u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 318u)));
    st8((c.r[29].w[0] + 317u), static_cast<std::uint8_t>(c.r[2].w[0]));
    ld128((c.r[21].w[0]) & ~15u, c.vu0.vf[4]);
    vu::ftoi(c.vu0, 15u, 5u, 4u, 0);
    vu::move(c.vu0, 1u, 4u, 0u);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[14]);
    ld128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[15]);
    ld128((c.r[5].w[0] + 32u) & ~15u, c.vu0.vf[16]);
    ld128((c.r[5].w[0] + 48u) & ~15u, c.vu0.vf[17]);
    vu::mulabc(c.vu0, 15u, 14u, c.vu0.vf[4].w[0]);
    vu::maddabc(c.vu0, 15u, 15u, c.vu0.vf[4].w[1]);
    vu::maddabc(c.vu0, 15u, 16u, c.vu0.vf[4].w[2]);
    vu::maddbc(c.vu0, 15u, 4u, 17u, c.vu0.vf[4].w[3]);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[5]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    c.f[0] = ld32((c.r[29].w[0] + 152u));
    c.f[2] = ld32((c.r[29].w[0] + 156u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 30;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_001C71B4; } }
    c.f[1] = c.f[2] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001C71B0; } }
    c.f[0] = ld32((c.r[29].w[0] + 144u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001C71B0; } }
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001C71B0; } }
    c.f[0] = ld32((c.r[29].w[0] + 148u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001C71B0; } }
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], c.r[29].w[0] + 316u);  if (t) { goto L_001C71C8; } }
L_001C71B0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001C71B4:
    st8((c.r[29].w[0] + 318u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = 0ull | 32768ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 44u), c.r[2].w[0]);  if (t) { goto L_001C7440; } }
    set32(c.r[2], c.r[29].w[0] + 316u);
    c.budget -= 1;
L_001C71C8:
    st8((c.r[29].w[0] + 318u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 144u);  if (t) { goto L_001C71E4; } }
    c.r[2].d[0] = 0ull | 32768ull;
    st32((c.r[29].w[0] + 300u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
L_001C71E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C71ECu); mmi::paddub(c.r[5], c.r[21], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x001C71ECu) [[unlikely]] return; }
L_001C71EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[6], c.r[29].w[0] + 144u);
    st32((c.r[29].w[0] + 156u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7204u); mmi::paddub(c.r[5], c.r[22], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 203u, depth + 1u); else { c.pc = 0x00102408u; return; } if (c.pc != 0x001C7204u) [[unlikely]] return; }
L_001C7204:
    c.f[0] = ld32((c.r[29].w[0] + 252u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 240u);
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    fpu_div(c, 20u, c.f[1], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C722Cu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0000(c, 219u, depth + 1u); else { c.pc = 0x00102668u; return; } if (c.pc != 0x001C722Cu) [[unlikely]] return; }
L_001C722C:
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7238u); set32(c.r[5], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0000(c, 223u, depth + 1u); else { c.pc = 0x001026E8u; return; } if (c.pc != 0x001C7238u) [[unlikely]] return; }
L_001C7238:
    set32(c.r[2], ld32((c.r[29].w[0] + 300u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 192u);  if (t) { goto L_001C72A4; } }
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[29].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7254u); set32(c.r[6], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_0000(c, 216u, depth + 1u); else { c.pc = 0x00102638u; return; } if (c.pc != 0x001C7254u) [[unlikely]] return; }
L_001C7254:
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[29].w[0] + 240u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7264u); set32(c.r[6], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_0000(c, 216u, depth + 1u); else { c.pc = 0x00102638u; return; } if (c.pc != 0x001C7264u) [[unlikely]] return; }
L_001C7264:
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7274u); mmi::paddub(c.r[6], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 207u, depth + 1u); else { c.pc = 0x00102480u; return; } if (c.pc != 0x001C7274u) [[unlikely]] return; }
L_001C7274:
    c.f[2] = ld32((c.r[29].w[0] + 152u));
    c.f[1] = ld32((c.r[21].w[0] + 28u));
    c.f[0] = 0u;
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001C72A0; } }
    c.r[2].d[0] = 0ull | 32768ull;
    st32((c.r[29].w[0] + 300u), c.r[2].w[0]);
    c.budget -= 2;
L_001C72A0:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 1;
L_001C72A4:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C72B0u); set32(c.r[5], c.r[21].w[0] + 48u);  if (depth < kMaxDepth) unit_0000(c, 276u, depth + 1u); else { c.pc = 0x00102F98u; return; } if (c.pc != 0x001C72B0u) [[unlikely]] return; }
L_001C72B0:
    set32(c.r[3], ld32((c.r[29].w[0] + 300u)));
    set32(c.r[2], ld32((c.r[22].w[0] + 560u)));
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[22].w[0] + 256u);
    set32(c.r[6], c.r[22].w[0] + 320u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[29].w[0] + 268u), c.r[2].w[0]);
    ld128((c.r[21].w[0] + 16u) & ~15u, c.vu0.vf[8]);
    vu::move(c.vu0, 1u, 8u, 0u);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[5].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[8].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[8].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[8].w[2]);
    vu::maddbc(c.vu0, 15u, 9u, 0u, c.vu0.vf[8].w[3]);
    vu::maxbc(c.vu0, 14u, 8u, 9u, c.vu0.vf[0].w[0]);
    ld128((c.r[6].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[6].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[6].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[6].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[8].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[8].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[8].w[2]);
    vu::maddbc(c.vu0, 15u, 9u, 7u, c.vu0.vf[8].w[3]);
    ld128((c.r[21].w[0] + 32u) & ~15u, c.vu0.vf[8]);
    vu::move(c.vu0, 1u, 8u, 0u);
    vu::mul(c.vu0, 14u, 10u, 9u, 8u);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[10]);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7330u); mmi::paddub(c.r[5], c.r[21], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x001C7330u) [[unlikely]] return; }
L_001C7330:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C733Cu); set32(c.r[5], c.r[21].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x001C733Cu) [[unlikely]] return; }
L_001C733C:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 172u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 156u), c.r[2].w[0]);
    mmi::paddub(c.r[5], c.r[20], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7358u); mmi::paddub(c.r[6], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 216u, depth + 1u); else { c.pc = 0x00102638u; return; } if (c.pc != 0x001C7358u) [[unlikely]] return; }
L_001C7358:
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7368u); mmi::paddub(c.r[6], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 218u, depth + 1u); else { c.pc = 0x00102650u; return; } if (c.pc != 0x001C7368u) [[unlikely]] return; }
L_001C7368:
    c.f[0] = ld32((c.r[29].w[0] + 144u));
    c.f[6] = ld32((c.r[29].w[0] + 148u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[5] = ld32((c.r[29].w[0] + 152u));
    c.f[4] = c.r[2].w[0];
    c.f[3] = ld32((c.r[29].w[0] + 160u));
    c.f[7] = fp::mul(c.f[0], c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 164u));
    c.f[1] = ld32((c.r[29].w[0] + 168u));
    c.f[6] = fp::mul(c.f[6], c.f[6]);
    c.f[0] = ld32((c.r[20].w[0] + 32u));
    c.facc = fp::add(c.f[7], c.f[6]);
    c.f[5] = fp::add(c.facc, fp::mul(c.f[5], c.f[5]));
    fpu_div(c, 20u, c.f[4], c.f[5]);
    c.f[3] = fp::mul(c.f[20], c.f[3]);
    c.f[2] = fp::mul(c.f[20], c.f[2]);
    c.facc = fp::add(c.f[3], c.f[2]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[20], c.f[1]));
    c.f[20] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 25;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[29].w[0] + 144u);  if (t) { goto L_001C73D4; } }
    c.f[20] = c.f[0];
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 2;
L_001C73D4:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C73E0u); set32(c.r[5], c.r[20].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 219u, depth + 1u); else { c.pc = 0x00102668u; return; } if (c.pc != 0x001C73E0u) [[unlikely]] return; }
L_001C73E0:
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C73F0u); mmi::paddub(c.r[6], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 215u, depth + 1u); else { c.pc = 0x00102620u; return; } if (c.pc != 0x001C73F0u) [[unlikely]] return; }
L_001C73F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.f[12] = 0u;
    c.f[13] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7408u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 243u, depth + 1u); else { c.pc = 0x00102A10u; return; } if (c.pc != 0x001C7408u) [[unlikely]] return; }
L_001C7408:
    c.f[0] = ld32((c.r[22].w[0] + 572u));
    set32(c.r[4], c.r[29].w[0] + 272u);
    set32(c.r[5], c.r[29].w[0] + 144u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C741Cu); st32((c.r[29].w[0] + 156u), c.f[0]);  if (depth < kMaxDepth) unit_0000(c, 224u, depth + 1u); else { c.pc = 0x001026F8u; return; } if (c.pc != 0x001C741Cu) [[unlikely]] return; }
L_001C741C:
    set32(c.r[2], c.r[29].w[0] + 192u);
    set32(c.r[3], c.r[29].w[0] + 272u);
    set32(c.r[4], c.r[29].w[0] + 256u);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[5]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[6]);
    st128((c.r[19].w[0]) & ~15u, c.vu0.vf[4]);
    st128((c.r[19].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    st128((c.r[19].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    c.budget -= 9;
L_001C7440:
    set32(c.r[19], c.r[19].w[0] + 48u);
    set32(c.r[21], c.r[21].w[0] + 64u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 4;
L_001C7450:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[29].w[0] + 208u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C70DCu | kUnwind; return; } goto L_001C70DC; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7468u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000D(c, 49u, depth + 1u); else { c.pc = 0x00134A60u; return; } if (c.pc != 0x001C7468u) [[unlikely]] return; }
L_001C7468:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 320u);  c.pc = t; return; }
L_001C74A0:
    set32(c.r[29], c.r[29].w[0] - 496u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st32((c.r[29].w[0] + 184u), c.r[10].w[0]);
    st32((c.r[29].w[0] + 188u), c.r[6].w[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st32((c.r[29].w[0] + 204u), c.r[4].w[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    mmi::paddub(c.r[20], c.r[8], c.r[0]);
    st32((c.r[29].w[0] + 192u), c.r[5].w[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 180u), c.r[11].w[0]);
    mmi::paddub(c.r[21], c.r[7], c.r[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 188u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 184u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 180u)));
    mmi::paddub(c.r[19], c.r[9], c.r[0]);
    mmi::paddub(c.r[5], c.r[20], c.r[0]);
    st32((c.r[29].w[0]), c.f[20]);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7508u); st32((c.r[29].w[0] + 176u), c.r[20].w[0]);  if (depth < kMaxDepth) unit_0031(c, 215u, depth + 1u); else { c.pc = 0x001C6E00u; return; } if (c.pc != 0x001C7508u) [[unlikely]] return; }
L_001C7508:
    mmi::paddub(c.r[20], c.r[2], c.r[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 184u)));
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[22], c.r[0], c.r[0]);  if (t) { goto L_001C7AC8; } }
    set32(c.r[18], c.r[29].w[0] + 336u);
    set32(c.r[30], c.r[29].w[0] + 464u);
    set32(c.r[23], c.r[29].w[0] + 480u);
    c.budget -= 3;
L_001C7528:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7534u); set32(c.r[5], c.r[21].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x001C7534u) [[unlikely]] return; }
L_001C7534:
    c.f[0] = ld32((c.r[21].w[0] + 44u));
    set32(c.r[16], c.r[29].w[0] + 220u);
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.f[13] = c.r[2].w[0];
    st32((c.r[16].w[0]), c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7558u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 243u, depth + 1u); else { c.pc = 0x00102A10u; return; } if (c.pc != 0x001C7558u) [[unlikely]] return; }
L_001C7558:
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7564u); set32(c.r[5], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_0000(c, 224u, depth + 1u); else { c.pc = 0x001026F8u; return; } if (c.pc != 0x001C7564u) [[unlikely]] return; }
L_001C7564:
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7570u); set32(c.r[5], c.r[29].w[0] + 368u);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x001C7570u) [[unlikely]] return; }
L_001C7570:
    set32(c.r[4], c.r[29].w[0] + 368u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C757Cu); set32(c.r[5], c.r[29].w[0] + 384u);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x001C757Cu) [[unlikely]] return; }
L_001C757C:
    set32(c.r[4], c.r[29].w[0] + 384u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7588u); set32(c.r[5], c.r[21].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x001C7588u) [[unlikely]] return; }
L_001C7588:
    set32(c.r[4], c.r[29].w[0] + 400u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7594u); set32(c.r[5], c.r[29].w[0] + 416u);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x001C7594u) [[unlikely]] return; }
L_001C7594:
    set32(c.r[4], c.r[29].w[0] + 416u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C75A0u); set32(c.r[5], c.r[29].w[0] + 432u);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x001C75A0u) [[unlikely]] return; }
L_001C75A0:
    set32(c.r[4], c.r[29].w[0] + 432u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C75ACu); set32(c.r[5], c.r[21].w[0] + 48u);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x001C75ACu) [[unlikely]] return; }
L_001C75AC:
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C75B8u); set32(c.r[5], c.r[29].w[0] + 320u);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x001C75B8u) [[unlikely]] return; }
L_001C75B8:
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C75C4u); mmi::paddub(c.r[5], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x001C75C4u) [[unlikely]] return; }
L_001C75C4:
    set32(c.r[4], c.r[29].w[0] + 448u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C75D0u); mmi::paddub(c.r[5], c.r[30], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x001C75D0u) [[unlikely]] return; }
L_001C75D0:
    mmi::paddub(c.r[4], c.r[30], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C75DCu); mmi::paddub(c.r[5], c.r[23], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x001C75DCu) [[unlikely]] return; }
L_001C75DC:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C75E8u); mmi::paddub(c.r[5], c.r[21], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x001C75E8u) [[unlikely]] return; }
L_001C75E8:
    set32(c.r[5], ld32((c.r[29].w[0] + 204u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[6], c.r[29].w[0] + 208u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7600u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 203u, depth + 1u); else { c.pc = 0x00102408u; return; } if (c.pc != 0x001C7600u) [[unlikely]] return; }
L_001C7600:
    c.f[0] = ld32((c.r[29].w[0] + 348u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    mmi::paddub(c.r[5], c.r[18], c.r[0]);
    fpu_div(c, 20u, c.f[1], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7628u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0000(c, 219u, depth + 1u); else { c.pc = 0x00102668u; return; } if (c.pc != 0x001C7628u) [[unlikely]] return; }
L_001C7628:
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7634u); mmi::paddub(c.r[5], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 223u, depth + 1u); else { c.pc = 0x001026E8u; return; } if (c.pc != 0x001C7634u) [[unlikely]] return; }
L_001C7634:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7644u); set32(c.r[5], c.r[21].w[0] + 48u);  if (depth < kMaxDepth) unit_0000(c, 276u, depth + 1u); else { c.pc = 0x00102F98u; return; } if (c.pc != 0x001C7644u) [[unlikely]] return; }
L_001C7644:
    set32(c.r[4], ld32((c.r[29].w[0] + 192u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7650u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0031(c, 221u, depth + 1u); else { c.pc = 0x001C7000u; return; } if (c.pc != 0x001C7650u) [[unlikely]] return; }
L_001C7650:
    set32(c.r[3], c.r[29].w[0] + 284u);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[4], c.r[29].w[0] + 256u);
    mmi::paddub(c.r[5], c.r[21], c.r[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[2], c.r[29].w[0] + 284u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7670u); st32((c.r[2].w[0]), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0000(c, 224u, depth + 1u); else { c.pc = 0x001026F8u; return; } if (c.pc != 0x001C7670u) [[unlikely]] return; }
L_001C7670:
    set32(c.r[17], ld32((c.r[29].w[0] + 268u)));
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7680u); mmi::paddub(c.r[5], c.r[21], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x001C7680u) [[unlikely]] return; }
L_001C7680:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 204u)));
    set32(c.r[6], c.r[29].w[0] + 208u);
    mmi::paddub(c.r[4], c.r[23], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C769Cu); set32(c.r[5], c.r[2].w[0] + 64u);  if (depth < kMaxDepth) unit_0000(c, 203u, depth + 1u); else { c.pc = 0x00102408u; return; } if (c.pc != 0x001C769Cu) [[unlikely]] return; }
L_001C769C:
    c.r[2].d[0] = 0ull | 32768ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_001C76B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 3u);  if (t) { goto L_001C7998; } }
L_001C76B0:
    c.f[0] = ld32((c.r[29].w[0] + 456u));
    c.f[2] = ld32((c.r[29].w[0] + 460u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[3] = c.f[2] ^ fp::kSign;  if (t) { goto L_001C7814; } }
    c.f[1] = c.f[2] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001C7810; } }
    c.f[3] = ld32((c.r[29].w[0] + 448u));
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[2]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001C7810; } }
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001C7810; } }
    c.f[3] = ld32((c.r[29].w[0] + 452u));
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[2]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001C7810; } }
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001C7810; } }
    c.f[3] = ld32((c.r[29].w[0] + 472u));
    c.f[1] = ld32((c.r[29].w[0] + 476u));
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001C7810; } }
    c.f[4] = c.f[1] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[4]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001C7810; } }
    c.f[3] = ld32((c.r[30].w[0]));
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001C7810; } }
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[4]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001C7810; } }
    c.f[3] = ld32((c.r[29].w[0] + 468u));
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001C7810; } }
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[4]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001C7810; } }
    c.f[3] = ld32((c.r[29].w[0] + 488u));
    c.f[1] = ld32((c.r[29].w[0] + 492u));
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001C7810; } }
    c.f[4] = c.f[1] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[4]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001C7810; } }
    c.f[3] = ld32((c.r[23].w[0]));
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001C7810; } }
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[4]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001C7810; } }
    c.f[3] = ld32((c.r[29].w[0] + 484u));
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001C7810; } }
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[4]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 2u);  if (t) { goto L_001C799C; } }
    c.budget -= 1;
L_001C7810:
    c.f[3] = c.f[2] ^ fp::kSign;
    c.budget -= 1;
L_001C7814:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[3]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[16], 0u + 1u);  if (t) { goto L_001C7864; } }
    c.f[0] = ld32((c.r[29].w[0] + 476u));
    c.f[1] = ld32((c.r[29].w[0] + 472u));
    c.f[0] = c.f[0] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001C7864; } }
    c.f[0] = ld32((c.r[29].w[0] + 492u));
    c.f[1] = ld32((c.r[29].w[0] + 488u));
    c.f[0] = c.f[0] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001C7864; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 2u);  if (t) { goto L_001C7998; } }
L_001C7864:
    c.f[4] = ld32((c.r[29].w[0] + 452u));
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[3]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001C78B8; } }
    c.f[0] = ld32((c.r[29].w[0] + 476u));
    c.f[1] = ld32((c.r[29].w[0] + 468u));
    c.f[0] = c.f[0] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001C78B8; } }
    c.f[0] = ld32((c.r[29].w[0] + 492u));
    c.f[1] = ld32((c.r[29].w[0] + 484u));
    c.f[0] = c.f[0] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001C78B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 2u);  if (t) { goto L_001C7998; } }
L_001C78B8:
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001C7900; } }
    c.f[1] = ld32((c.r[29].w[0] + 468u));
    c.f[0] = ld32((c.r[29].w[0] + 476u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001C7900; } }
    c.f[1] = ld32((c.r[29].w[0] + 484u));
    c.f[0] = ld32((c.r[29].w[0] + 492u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001C7900; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 2u);  if (t) { goto L_001C7998; } }
L_001C7900:
    c.f[4] = ld32((c.r[29].w[0] + 448u));
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[3]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001C7954; } }
    c.f[0] = ld32((c.r[29].w[0] + 476u));
    c.f[1] = ld32((c.r[30].w[0]));
    c.f[0] = c.f[0] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001C7954; } }
    c.f[0] = ld32((c.r[29].w[0] + 492u));
    c.f[1] = ld32((c.r[23].w[0]));
    c.f[0] = c.f[0] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001C7954; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 2u);  if (t) { goto L_001C7998; } }
L_001C7954:
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001C7998; } }
    c.f[1] = ld32((c.r[30].w[0]));
    c.f[0] = ld32((c.r[29].w[0] + 476u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001C7998; } }
    c.f[1] = ld32((c.r[23].w[0]));
    c.f[0] = ld32((c.r[29].w[0] + 492u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001C7998; } }
    set32(c.r[16], 0u + 2u);
    c.budget -= 1;
L_001C7998:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_001C799C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_001C79B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull | 32768ull;  if (t) { goto L_001C7A68; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001C79B0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_001C7A08; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 188u)));
    set32(c.r[5], c.r[29].w[0] + 352u);
    set32(c.r[6], c.r[29].w[0] + 400u);
    set32(c.r[7], c.r[29].w[0] + 448u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C79D0u); c.r[17].d[0] = 0ull | 32768ull;  if (depth < kMaxDepth) unit_0032(c, 11u, depth + 1u); else { c.pc = 0x001C8100u; return; } if (c.pc != 0x001C79D0u) [[unlikely]] return; }
L_001C79D0:
    set32(c.r[2], ld32((c.r[28].w[0] - 25360u)));
    c.r[2].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[29].w[0] + 284u);  if (t) { goto L_001C7A6C; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 188u)));
    set32(c.r[8], ld32((c.r[29].w[0] + 180u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[6], c.r[2].w[0] - 10976u);
    set32(c.r[9], 0u + 2u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7A00u); mmi::paddub(c.r[7], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0032(c, 72u, depth + 1u); else { c.pc = 0x001C8980u; return; } if (c.pc != 0x001C7A00u) [[unlikely]] return; }
L_001C7A00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C7A68; } }
L_001C7A08:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_001C7A68; } }
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[5], c.r[29].w[0] + 320u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7A20u); set32(c.r[6], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_0000(c, 216u, depth + 1u); else { c.pc = 0x00102638u; return; } if (c.pc != 0x001C7A20u) [[unlikely]] return; }
L_001C7A20:
    set32(c.r[4], c.r[29].w[0] + 224u);
    set32(c.r[6], c.r[29].w[0] + 304u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7A30u); mmi::paddub(c.r[5], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 216u, depth + 1u); else { c.pc = 0x00102638u; return; } if (c.pc != 0x001C7A30u) [[unlikely]] return; }
L_001C7A30:
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[5], c.r[29].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7A40u); mmi::paddub(c.r[6], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 207u, depth + 1u); else { c.pc = 0x00102480u; return; } if (c.pc != 0x001C7A40u) [[unlikely]] return; }
L_001C7A40:
    c.f[2] = ld32((c.r[29].w[0] + 216u));
    c.f[1] = ld32((c.r[21].w[0] + 28u));
    c.f[0] = 0u;
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001C7A68; } }
    c.r[17].d[0] = 0ull | 32768ull;
    c.budget -= 1;
L_001C7A68:
    set32(c.r[2], c.r[29].w[0] + 284u);
    c.budget -= 1;
L_001C7A6C:
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], 0u + 3u);
    c.r[4].d[0] = c.r[2].d[0] | c.r[17].d[0];
    set32(c.r[2], c.r[29].w[0] + 284u);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; st32((c.r[2].w[0]), c.r[4].w[0]);  if (t) { goto L_001C7A88; } }
    set32(c.r[19], c.r[19].w[0] + 496u);
    c.budget -= 1;
L_001C7A88:
    set32(c.r[5], c.r[29].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7A94u); mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x001C7A94u) [[unlikely]] return; }
L_001C7A94:
    set32(c.r[4], c.r[20].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7AA0u); set32(c.r[5], c.r[29].w[0] + 288u);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x001C7AA0u) [[unlikely]] return; }
L_001C7AA0:
    set32(c.r[4], c.r[20].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7AACu); set32(c.r[5], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x001C7AACu) [[unlikely]] return; }
L_001C7AAC:
    set32(c.r[2], ld32((c.r[29].w[0] + 184u)));
    set32(c.r[22], c.r[22].w[0] + 1u);
    set32(c.r[20], c.r[20].w[0] + 48u);
    c.r[2].d[0] = c.r[22].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[21], c.r[21].w[0] + 64u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C7528u | kUnwind; return; } goto L_001C7528; } }
    c.budget -= 1;
L_001C7AC8:
    set32(c.r[4], ld32((c.r[29].w[0] + 176u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7AD4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_000D(c, 49u, depth + 1u); else { c.pc = 0x00134A60u; return; } if (c.pc != 0x001C7AD4u) [[unlikely]] return; }
L_001C7AD4:
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
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 496u);  c.pc = t; return; }
L_001C7B10:
    set32(c.r[29], c.r[29].w[0] - 480u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st32((c.r[29].w[0] + 184u), c.r[10].w[0]);
    st32((c.r[29].w[0] + 188u), c.r[6].w[0]);
    mmi::paddub(c.r[21], c.r[4], c.r[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    mmi::paddub(c.r[19], c.r[8], c.r[0]);
    st32((c.r[29].w[0] + 192u), c.r[5].w[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 180u), c.r[11].w[0]);
    mmi::paddub(c.r[20], c.r[7], c.r[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 188u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 184u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 180u)));
    mmi::paddub(c.r[18], c.r[9], c.r[0]);
    mmi::paddub(c.r[5], c.r[19], c.r[0]);
    st32((c.r[29].w[0]), c.f[20]);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7B78u); st32((c.r[29].w[0] + 176u), c.r[19].w[0]);  if (depth < kMaxDepth) unit_0031(c, 215u, depth + 1u); else { c.pc = 0x001C6E00u; return; } if (c.pc != 0x001C7B78u) [[unlikely]] return; }
L_001C7B78:
    mmi::paddub(c.r[19], c.r[2], c.r[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 184u)));
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[22], c.r[0], c.r[0]);  if (t) { [[clang::musttail]] return unit_0032(c, 9u, depth); } }
    set32(c.r[30], c.r[29].w[0] + 448u);
    set32(c.r[23], c.r[29].w[0] + 464u);
    c.budget -= 2;
L_001C7B94:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7BA0u); set32(c.r[5], c.r[20].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x001C7BA0u) [[unlikely]] return; }
L_001C7BA0:
    c.f[0] = ld32((c.r[21].w[0] + 572u));
    set32(c.r[16], c.r[29].w[0] + 220u);
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.f[13] = c.r[2].w[0];
    st32((c.r[16].w[0]), c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7BC4u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 243u, depth + 1u); else { c.pc = 0x00102A10u; return; } if (c.pc != 0x001C7BC4u) [[unlikely]] return; }
L_001C7BC4:
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7BD0u); set32(c.r[5], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_0000(c, 224u, depth + 1u); else { c.pc = 0x001026F8u; return; } if (c.pc != 0x001C7BD0u) [[unlikely]] return; }
L_001C7BD0:
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7BDCu); set32(c.r[5], c.r[29].w[0] + 352u);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x001C7BDCu) [[unlikely]] return; }
L_001C7BDC:
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7BE8u); set32(c.r[5], c.r[29].w[0] + 368u);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x001C7BE8u) [[unlikely]] return; }
L_001C7BE8:
    set32(c.r[4], c.r[29].w[0] + 368u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7BF4u); set32(c.r[5], c.r[20].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x001C7BF4u) [[unlikely]] return; }
L_001C7BF4:
    c.f[0] = ld32((c.r[21].w[0] + 572u));
    set32(c.r[4], c.r[29].w[0] + 384u);
    set32(c.r[5], c.r[29].w[0] + 400u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7C08u); st32((c.r[29].w[0] + 380u), c.f[0]);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x001C7C08u) [[unlikely]] return; }
L_001C7C08:
    set32(c.r[4], c.r[29].w[0] + 400u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7C14u); set32(c.r[5], c.r[29].w[0] + 416u);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x001C7C14u) [[unlikely]] return; }
L_001C7C14:
    set32(c.r[4], c.r[29].w[0] + 416u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7C20u); set32(c.r[5], c.r[20].w[0] + 48u);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x001C7C20u) [[unlikely]] return; }
L_001C7C20:
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7C2Cu); set32(c.r[5], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x001C7C2Cu) [[unlikely]] return; }
L_001C7C2C:
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7C38u); set32(c.r[5], c.r[29].w[0] + 320u);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x001C7C38u) [[unlikely]] return; }
L_001C7C38:
    set32(c.r[4], c.r[29].w[0] + 432u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7C44u); mmi::paddub(c.r[5], c.r[30], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x001C7C44u) [[unlikely]] return; }
L_001C7C44:
    mmi::paddub(c.r[4], c.r[30], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7C50u); mmi::paddub(c.r[5], c.r[23], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x001C7C50u) [[unlikely]] return; }
L_001C7C50:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7C5Cu); mmi::paddub(c.r[5], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x001C7C5Cu) [[unlikely]] return; }
L_001C7C5C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[29].w[0] + 320u);
    set32(c.r[6], c.r[29].w[0] + 208u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7C74u); mmi::paddub(c.r[5], c.r[21], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 203u, depth + 1u); else { c.pc = 0x00102408u; return; } if (c.pc != 0x001C7C74u) [[unlikely]] return; }
L_001C7C74:
    c.f[0] = ld32((c.r[29].w[0] + 332u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 320u);
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    fpu_div(c, 20u, c.f[1], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7C9Cu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0000(c, 219u, depth + 1u); else { c.pc = 0x00102668u; return; } if (c.pc != 0x001C7C9Cu) [[unlikely]] return; }
L_001C7C9C:
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7CA8u); set32(c.r[5], c.r[29].w[0] + 320u);  if (depth < kMaxDepth) unit_0000(c, 223u, depth + 1u); else { c.pc = 0x001026E8u; return; } if (c.pc != 0x001C7CA8u) [[unlikely]] return; }
L_001C7CA8:
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7CB8u); set32(c.r[5], c.r[20].w[0] + 48u);  if (depth < kMaxDepth) unit_0000(c, 276u, depth + 1u); else { c.pc = 0x00102F98u; return; } if (c.pc != 0x001C7CB8u) [[unlikely]] return; }
L_001C7CB8:
    set32(c.r[2], c.r[29].w[0] + 268u);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[4], c.r[29].w[0] + 240u);
    mmi::paddub(c.r[5], c.r[20], c.r[0]);
    c.r[3].d[0] = c.r[2].d[0] | 4080ull;
    set32(c.r[2], c.r[29].w[0] + 268u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7CD8u); st32((c.r[2].w[0]), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0000(c, 224u, depth + 1u); else { c.pc = 0x001026F8u; return; } if (c.pc != 0x001C7CD8u) [[unlikely]] return; }
L_001C7CD8:
    set32(c.r[17], ld32((c.r[29].w[0] + 252u)));
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7CE8u); mmi::paddub(c.r[5], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x001C7CE8u) [[unlikely]] return; }
L_001C7CE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], c.r[21].w[0] + 64u);
    set32(c.r[6], c.r[29].w[0] + 208u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C7D00u); mmi::paddub(c.r[4], c.r[23], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 203u, depth + 1u); else { c.pc = 0x00102408u; return; } if (c.pc != 0x001C7D00u) [[unlikely]] return; }
L_001C7D00:
    c.r[2].d[0] = 0ull | 32768ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_001C7D14; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 3u);  if (t) { goto L_001C7FF8; } }
L_001C7D14:
    c.f[0] = ld32((c.r[29].w[0] + 440u));
    c.f[2] = ld32((c.r[29].w[0] + 444u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[3] = c.f[2] ^ fp::kSign;  if (t) { goto L_001C7E74; } }
    c.f[1] = c.f[2] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001C7E70; } }
    c.f[3] = ld32((c.r[29].w[0] + 432u));
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[2]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001C7E70; } }
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001C7E70; } }
    c.f[3] = ld32((c.r[29].w[0] + 436u));
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[2]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001C7E70; } }
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001C7E70; } }
    c.f[3] = ld32((c.r[29].w[0] + 456u));
    c.f[1] = ld32((c.r[29].w[0] + 460u));
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001C7E70; } }
    c.f[4] = c.f[1] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[4]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001C7E70; } }
    c.f[3] = ld32((c.r[30].w[0]));
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001C7E70; } }
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[4]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001C7E70; } }
    c.f[3] = ld32((c.r[29].w[0] + 452u));
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001C7E70; } }
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[4]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001C7E70; } }
    c.f[3] = ld32((c.r[29].w[0] + 472u));
    c.f[1] = ld32((c.r[29].w[0] + 476u));
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001C7E70; } }
    c.f[4] = c.f[1] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[4]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001C7E70; } }
    c.f[3] = ld32((c.r[23].w[0]));
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001C7E70; } }
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[4]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001C7E70; } }
    c.f[3] = ld32((c.r[29].w[0] + 468u));
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001C7E70; } }
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[4]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 2u);  if (t) { goto L_001C7FFC; } }
L_001C7E70:
    c.f[3] = c.f[2] ^ fp::kSign;
    c.budget -= 1;
L_001C7E74:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[3]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[16], 0u + 1u);  if (t) { goto L_001C7EC4; } }
    c.f[0] = ld32((c.r[29].w[0] + 460u));
    c.f[1] = ld32((c.r[29].w[0] + 456u));
    c.f[0] = c.f[0] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001C7EC4; } }
    c.f[0] = ld32((c.r[29].w[0] + 476u));
    c.f[1] = ld32((c.r[29].w[0] + 472u));
    c.f[0] = c.f[0] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001C7EC4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 2u);  if (t) { goto L_001C7FF8; } }
L_001C7EC4:
    c.f[4] = ld32((c.r[29].w[0] + 436u));
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[3]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001C7F18; } }
    c.f[0] = ld32((c.r[29].w[0] + 460u));
    c.f[1] = ld32((c.r[29].w[0] + 452u));
    c.f[0] = c.f[0] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001C7F18; } }
    c.f[0] = ld32((c.r[29].w[0] + 476u));
    c.f[1] = ld32((c.r[29].w[0] + 468u));
    c.f[0] = c.f[0] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001C7F18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 2u);  if (t) { goto L_001C7FF8; } }
L_001C7F18:
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001C7F60; } }
    c.f[1] = ld32((c.r[29].w[0] + 452u));
    c.f[0] = ld32((c.r[29].w[0] + 460u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001C7F60; } }
    c.f[1] = ld32((c.r[29].w[0] + 468u));
    c.f[0] = ld32((c.r[29].w[0] + 476u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001C7F60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 2u);  if (t) { goto L_001C7FF8; } }
L_001C7F60:
    c.f[4] = ld32((c.r[29].w[0] + 432u));
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[3]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001C7FB4; } }
    c.f[0] = ld32((c.r[29].w[0] + 460u));
    c.f[1] = ld32((c.r[30].w[0]));
    c.f[0] = c.f[0] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001C7FB4; } }
    c.f[0] = ld32((c.r[29].w[0] + 476u));
    c.f[1] = ld32((c.r[23].w[0]));
    c.f[0] = c.f[0] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001C7FB4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 2u);  if (t) { goto L_001C7FF8; } }
L_001C7FB4:
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001C7FF8; } }
    c.f[1] = ld32((c.r[30].w[0]));
    c.f[0] = ld32((c.r[29].w[0] + 460u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001C7FF8; } }
    c.f[1] = ld32((c.r[23].w[0]));
    c.f[0] = ld32((c.r[29].w[0] + 476u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001C7FF8; } }
    set32(c.r[16], 0u + 2u);
    c.budget -= 1;
L_001C7FF8:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_001C7FFC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { [[clang::musttail]] return unit_0032(c, 3u, depth); } }
    [[clang::musttail]] return unit_0032(c, 2u, depth);
}

}
