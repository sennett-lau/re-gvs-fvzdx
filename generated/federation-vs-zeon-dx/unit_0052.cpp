#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0052[4096] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 6,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 16, 0, 17, 0, 18, 0, 19, 0, 0, 0,
    0, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23,
    0, 0, 24, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 26, 0, 27, 0, 28, 0, 29, 0, 0, 0, 0, 30, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0,
    33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0,
    0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 42, 0, 0, 43, 0, 0, 0, 0, 0,
    0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 46, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48,
    0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0,
    0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0,
    58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 60, 0, 0, 61, 0, 0, 62, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0,
    64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0,
    0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 73, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 76, 0, 77, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0,
    81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0,
    85, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    90, 0, 0, 0, 91, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0,
    97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 103, 0, 0, 104, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 106, 0, 107, 0, 0, 0, 108, 0, 0, 0, 0, 0, 109, 0, 0,
    0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0,
    115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 117, 0, 0, 118, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 125, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 131, 0, 132, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 134, 0, 135, 0, 136, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0,
    141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 144, 0, 0, 145, 0, 0, 0,
    0, 0, 0, 0, 146, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 151, 0, 0, 152, 0, 0, 153, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 156, 0, 157, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 160, 0, 0, 0, 161, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    162, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 174, 0, 175, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182,
    0, 0, 183, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190,
    0, 0, 191, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 197, 0, 0, 198, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0,
    201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 204, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 209, 0, 0, 210, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0,
    213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 216, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 222, 0, 0, 0, 223, 0, 224, 0, 225, 0, 0, 0, 226,
    0, 0, 227, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0,
    0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 236, 0, 237, 0, 0, 0, 0, 0, 0,
    0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0,
    0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 250, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0,
    256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0052(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00248000;
    case 2u: goto L_00248010;
    case 3u: goto L_00248030;
    case 4u: goto L_00248060;
    case 5u: goto L_00248070;
    case 6u: goto L_0024807C;
    case 7u: goto L_002480B0;
    case 8u: goto L_002480D0;
    case 9u: goto L_00248118;
    case 10u: goto L_00248144;
    case 11u: goto L_00248190;
    case 12u: goto L_002481F8;
    case 13u: goto L_00248220;
    case 14u: goto L_00248228;
    case 15u: goto L_00248250;
    case 16u: goto L_00248258;
    case 17u: goto L_00248260;
    case 18u: goto L_00248268;
    case 19u: goto L_00248270;
    case 20u: goto L_00248290;
    case 21u: goto L_002482A0;
    case 22u: goto L_00248330;
    case 23u: goto L_0024837C;
    case 24u: goto L_00248388;
    case 25u: goto L_002483A4;
    case 26u: goto L_002483C0;
    case 27u: goto L_002483C8;
    case 28u: goto L_002483D0;
    case 29u: goto L_002483D8;
    case 30u: goto L_002483EC;
    case 31u: goto L_00248414;
    case 32u: goto L_00248460;
    case 33u: goto L_00248480;
    case 34u: goto L_00248524;
    case 35u: goto L_002485A8;
    case 36u: goto L_002485C0;
    case 37u: goto L_00248674;
    case 38u: goto L_00248688;
    case 39u: goto L_002486C0;
    case 40u: goto L_002486E4;
    case 41u: goto L_002487D4;
    case 42u: goto L_002487DC;
    case 43u: goto L_002487E8;
    case 44u: goto L_0024880C;
    case 45u: goto L_00248844;
    case 46u: goto L_0024884C;
    case 47u: goto L_00248854;
    case 48u: goto L_0024887C;
    case 49u: goto L_00248894;
    case 50u: goto L_002488A8;
    case 51u: goto L_002488D4;
    case 52u: goto L_002488F8;
    case 53u: goto L_00248904;
    case 54u: goto L_00248930;
    case 55u: goto L_00248940;
    case 56u: goto L_002489D0;
    case 57u: goto L_002489E0;
    case 58u: goto L_00248A00;
    case 59u: goto L_00248A28;
    case 60u: goto L_00248A34;
    case 61u: goto L_00248A40;
    case 62u: goto L_00248A4C;
    case 63u: goto L_00248A60;
    case 64u: goto L_00248A80;
    case 65u: goto L_00248B24;
    case 66u: goto L_00248BA4;
    case 67u: goto L_00248BC0;
    case 68u: goto L_00248C74;
    case 69u: goto L_00248C88;
    case 70u: goto L_00248CCC;
    case 71u: goto L_00248D0C;
    case 72u: goto L_00248E2C;
    case 73u: goto L_00248E34;
    case 74u: goto L_00248E40;
    case 75u: goto L_00248E64;
    case 76u: goto L_00248E9C;
    case 77u: goto L_00248EA4;
    case 78u: goto L_00248EAC;
    case 79u: goto L_00248ED4;
    case 80u: goto L_00248EEC;
    case 81u: goto L_00248F00;
    case 82u: goto L_00248F2C;
    case 83u: goto L_00248F50;
    case 84u: goto L_00248F5C;
    case 85u: goto L_00248F80;
    case 86u: goto L_00248F90;
    case 87u: goto L_00249020;
    case 88u: goto L_00249030;
    case 89u: goto L_00249050;
    case 90u: goto L_00249080;
    case 91u: goto L_00249090;
    case 92u: goto L_0024909C;
    case 93u: goto L_002490D0;
    case 94u: goto L_002490F0;
    case 95u: goto L_0024916C;
    case 96u: goto L_002491EC;
    case 97u: goto L_00249200;
    case 98u: goto L_002492B4;
    case 99u: goto L_002492C8;
    case 100u: goto L_0024930C;
    case 101u: goto L_0024934C;
    case 102u: goto L_00249464;
    case 103u: goto L_0024946C;
    case 104u: goto L_00249478;
    case 105u: goto L_002494BC;
    case 106u: goto L_002494C4;
    case 107u: goto L_002494CC;
    case 108u: goto L_002494DC;
    case 109u: goto L_002494F4;
    case 110u: goto L_00249508;
    case 111u: goto L_00249530;
    case 112u: goto L_00249540;
    case 113u: goto L_002495D0;
    case 114u: goto L_002495E0;
    case 115u: goto L_00249600;
    case 116u: goto L_00249628;
    case 117u: goto L_00249634;
    case 118u: goto L_00249640;
    case 119u: goto L_00249650;
    case 120u: goto L_00249670;
    case 121u: goto L_002496F4;
    case 122u: goto L_00249730;
    case 123u: goto L_002497B0;
    case 124u: goto L_002497D8;
    case 125u: goto L_002497F0;
    case 126u: goto L_002498A0;
    case 127u: goto L_002498B4;
    case 128u: goto L_002498FC;
    case 129u: goto L_00249938;
    case 130u: goto L_0024994C;
    case 131u: goto L_00249A18;
    case 132u: goto L_00249A20;
    case 133u: goto L_00249A34;
    case 134u: goto L_00249A50;
    case 135u: goto L_00249A58;
    case 136u: goto L_00249A60;
    case 137u: goto L_00249ACC;
    case 138u: goto L_00249AF4;
    case 139u: goto L_00249B54;
    case 140u: goto L_00249B6C;
    case 141u: goto L_00249B80;
    case 142u: goto L_00249BAC;
    case 143u: goto L_00249BD0;
    case 144u: goto L_00249BE4;
    case 145u: goto L_00249BF0;
    case 146u: goto L_00249C10;
    case 147u: goto L_00249C20;
    case 148u: goto L_00249CB0;
    case 149u: goto L_00249CC0;
    case 150u: goto L_00249CE0;
    case 151u: goto L_00249D08;
    case 152u: goto L_00249D14;
    case 153u: goto L_00249D20;
    case 154u: goto L_00249D30;
    case 155u: goto L_00249D50;
    case 156u: goto L_00249D94;
    case 157u: goto L_00249D9C;
    case 158u: goto L_00249DB0;
    case 159u: goto L_00249DC8;
    case 160u: goto L_00249DE0;
    case 161u: goto L_00249DF0;
    case 162u: goto L_00249E80;
    case 163u: goto L_00249E88;
    case 164u: goto L_00249EB0;
    case 165u: goto L_00249EFC;
    case 166u: goto L_0024A020;
    case 167u: goto L_0024A080;
    case 168u: goto L_0024A1A8;
    case 169u: goto L_0024A1DC;
    case 170u: goto L_0024A220;
    case 171u: goto L_0024A264;
    case 172u: goto L_0024A308;
    case 173u: goto L_0024A3C0;
    case 174u: goto L_0024A40C;
    case 175u: goto L_0024A414;
    case 176u: goto L_0024A41C;
    case 177u: goto L_0024A480;
    case 178u: goto L_0024A4B0;
    case 179u: goto L_0024A4C0;
    case 180u: goto L_0024A530;
    case 181u: goto L_0024A620;
    case 182u: goto L_0024A67C;
    case 183u: goto L_0024A688;
    case 184u: goto L_0024A69C;
    case 185u: goto L_0024A6C4;
    case 186u: goto L_0024A720;
    case 187u: goto L_0024A72C;
    case 188u: goto L_0024A7A0;
    case 189u: goto L_0024A898;
    case 190u: goto L_0024A8FC;
    case 191u: goto L_0024A908;
    case 192u: goto L_0024A91C;
    case 193u: goto L_0024A944;
    case 194u: goto L_0024A9A8;
    case 195u: goto L_0024A9B4;
    case 196u: goto L_0024AA20;
    case 197u: goto L_0024AB04;
    case 198u: goto L_0024AB10;
    case 199u: goto L_0024AB24;
    case 200u: goto L_0024AB74;
    case 201u: goto L_0024AB80;
    case 202u: goto L_0024ABE0;
    case 203u: goto L_0024ACC4;
    case 204u: goto L_0024ACD0;
    case 205u: goto L_0024ACE4;
    case 206u: goto L_0024AD34;
    case 207u: goto L_0024AD40;
    case 208u: goto L_0024ADA0;
    case 209u: goto L_0024AE84;
    case 210u: goto L_0024AE90;
    case 211u: goto L_0024AEA4;
    case 212u: goto L_0024AEF4;
    case 213u: goto L_0024AF00;
    case 214u: goto L_0024AF60;
    case 215u: goto L_0024B044;
    case 216u: goto L_0024B050;
    case 217u: goto L_0024B064;
    case 218u: goto L_0024B0B4;
    case 219u: goto L_0024B0C0;
    case 220u: goto L_0024B120;
    case 221u: goto L_0024B144;
    case 222u: goto L_0024B14C;
    case 223u: goto L_0024B15C;
    case 224u: goto L_0024B164;
    case 225u: goto L_0024B16C;
    case 226u: goto L_0024B17C;
    case 227u: goto L_0024B188;
    case 228u: goto L_0024B1A0;
    case 229u: goto L_0024B1F0;
    case 230u: goto L_0024B210;
    case 231u: goto L_0024B234;
    case 232u: goto L_0024B250;
    case 233u: goto L_0024B268;
    case 234u: goto L_0024B294;
    case 235u: goto L_0024B2C0;
    case 236u: goto L_0024B2DC;
    case 237u: goto L_0024B2E4;
    case 238u: goto L_0024B308;
    case 239u: goto L_0024B350;
    case 240u: goto L_0024B370;
    case 241u: goto L_0024B388;
    case 242u: goto L_0024B3B0;
    case 243u: goto L_0024B3F0;
    case 244u: goto L_0024B480;
    case 245u: goto L_0024B4FC;
    case 246u: goto L_0024B5B0;
    case 247u: goto L_0024B7E0;
    case 248u: goto L_0024B968;
    case 249u: goto L_0024B9E0;
    case 250u: goto L_0024B9EC;
    case 251u: goto L_0024BA20;
    case 252u: goto L_0024BA38;
    case 253u: goto L_0024BA84;
    case 254u: goto L_0024BAD4;
    case 255u: goto L_0024BAE8;
    case 256u: goto L_0024BB00;
    case 257u: goto L_0024BDC0;
    case 258u: goto L_0024BE30;
    default: bad_entry(c, 0x00248000u); return;
    }
L_00248000:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00248010:
    set32(c.r[5], ld32((c.r[4].w[0] + 336u)));
    set32(c.r[6], 0u + 16u);
    set32(c.r[7], 0u + 512u);
    set32(c.r[8], 0u + 256u);
    c.budget -= 6;
    { set32(c.r[9], 0u + 8192u);  goto L_0024BB00; }
L_00248030:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[16], c.r[17].w[0] + 320u);  if (t) { goto L_00248060; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248060u); set32(c.r[5], ld32((c.r[17].w[0] + 24u)));  if (depth < kMaxDepth) unit_0077(c, 232u, depth + 1u); else { c.pc = 0x002DEAA0u; return; } if (c.pc != 0x00248060u) [[unlikely]] return; }
L_00248060:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 38u)));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248070u); set32(c.r[5], c.r[2].w[0] + 118u);  if (depth < kMaxDepth) unit_0079(c, 263u, depth + 1u); else { c.pc = 0x002E6FD0u; return; } if (c.pc != 0x00248070u) [[unlikely]] return; }
L_00248070:
    set32(c.r[5], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024807Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 330u, depth + 1u); else { c.pc = 0x00197890u; return; } if (c.pc != 0x0024807Cu) [[unlikely]] return; }
L_0024807C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 38u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 38u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 38u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    st8((c.r[16].w[0] + 38u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002480B0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 10432u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00248000u < 16384u) { entry = entries_0052[(t - 0x00248000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002480D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00250000u);
    set32(c.r[2], c.r[2].w[0] - 31952u);
    set32(c.r[5], c.r[18].w[0] + 32u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 168u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 88u), 0u);
    set32(c.r[16], c.r[18].w[0] + 320u);
    set32(c.r[17], c.r[18].w[0] + 432u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248118u); st32((c.r[4].w[0] + 80u), 0u);  if (depth < kMaxDepth) unit_0045(c, 199u, depth + 1u); else { c.pc = 0x00217650u; return; } if (c.pc != 0x00248118u) [[unlikely]] return; }
L_00248118:
    st32((c.r[18].w[0] + 36u), c.f[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 520u)));
    st32((c.r[17].w[0] + 48u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248144u); st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (depth < kMaxDepth) unit_0052(c, 164u, depth + 1u); else { c.pc = 0x00249EB0u; return; } if (c.pc != 0x00248144u) [[unlikely]] return; }
L_00248144:
    set32(c.r[4], ld32((c.r[18].w[0] + 176u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[16].w[0]), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00248164; } }
    mmi::paddub(c.r[3], c.r[0], c.r[0]);
    c.budget -= 1;
L_00248164:
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] << 11);
    st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00248190:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    set32(c.r[16], c.r[18].w[0] + 320u);
    set32(c.r[17], c.r[18].w[0] + 432u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.budget -= 14;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 11));  if (t) { goto L_002481D0; } }
    set32(c.r[2], c.r[3].w[0] + 2047u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 11));
    c.budget -= 2;
L_002481D0:
    c.r[3].d[0] = c.r[2].d[0] & 3ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (t) { goto L_00248218; } }
    c.r[5].d[0] = c.r[3].d[0] << 56;
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002481F8u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0052(c, 164u, depth + 1u); else { c.pc = 0x00249EB0u; return; } if (c.pc != 0x002481F8u) [[unlikely]] return; }
L_002481F8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0024820C; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_0024820C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00248220; } }
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 1;
L_00248218:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248220u);  if (depth < kMaxDepth) unit_0052(c, 166u, depth + 1u); else { c.pc = 0x0024A020u; return; } if (c.pc != 0x00248220u) [[unlikely]] return; }
L_00248220:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248228u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x00248228u) [[unlikely]] return; }
L_00248228:
    c.f[5] = ld32((c.r[18].w[0] + 32u));
    c.f[4] = ld32((c.r[17].w[0]));
    c.f[3] = ld32((c.r[18].w[0] + 36u));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.f[1] = ld32((c.r[18].w[0] + 40u));
    c.f[12] = fp::add(c.f[5], c.f[4]);
    c.f[13] = fp::add(c.f[3], c.f[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248250u); c.f[14] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00248250u) [[unlikely]] return; }
L_00248250:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248258u); set32(c.r[4], ld32((c.r[18].w[0] + 88u)));  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00248258u) [[unlikely]] return; }
L_00248258:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248260u); set32(c.r[4], ld32((c.r[18].w[0] + 84u)));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00248260u) [[unlikely]] return; }
L_00248260:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248268u); set32(c.r[4], ld32((c.r[18].w[0] + 80u)));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00248268u) [[unlikely]] return; }
L_00248268:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248270u); set32(c.r[4], c.r[18].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00248270u) [[unlikely]] return; }
L_00248270:
    set32(c.r[3], 0u + 1u);
    st8((c.r[18].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00248290:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_002482A0:
    set32(c.r[5], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002482F4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 529u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002482DC; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 531u));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 324u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 324u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0024831C; } }
L_002482DC:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 531u));
    set32(c.r[3], c.r[2].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 384u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 384u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0024831C; } }
L_002482F4:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 531u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] + 324u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 324u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024831C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0024831C:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_00248330:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 324u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 180u)));
    mmi::paddub(c.r[21], c.r[4], c.r[0]);
    set32(c.r[16], c.r[21].w[0] + 320u);
    set32(c.r[19], c.r[21].w[0] + 432u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[4].w[0] + 184u), c.r[2].w[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024837Cu); set32(c.r[4], c.r[21].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x0024837Cu) [[unlikely]] return; }
L_0024837C:
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    mmi::paddub(c.r[20], c.r[0], c.r[0]);
    c.budget -= 3;
L_00248388:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002483F0; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_002483A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002483A4u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x002483A4u) [[unlikely]] return; }
L_002483A4:
    c.budget -= 1;
L_002483A8:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.f[13] = ld32((c.r[2].w[0] + 4u));
    c.f[14] = ld32((c.r[2].w[0] + 8u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002483C0u); c.f[12] = ld32((c.r[2].w[0]));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002483C0u) [[unlikely]] return; }
L_002483C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002483C8u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 14u)));  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002483C8u) [[unlikely]] return; }
L_002483C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002483D0u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 12u)));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002483D0u) [[unlikely]] return; }
L_002483D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002483D8u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 10u)));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002483D8u) [[unlikely]] return; }
L_002483D8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[3].d[0];  if (t) { goto L_002483F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002483ECu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x002483ECu) [[unlikely]] return; }
L_002483EC:
    c.budget -= 1;
L_002483F0:
    set32(c.r[4], ld32((c.r[21].w[0] + 184u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], c.r[4].w[0] + c.r[20].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.budget -= 7;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_0024841C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248414u);  if (depth < kMaxDepth) unit_000F(c, 36u, depth + 1u); else { c.pc = 0x0013CD20u; return; } if (c.pc != 0x00248414u) [[unlikely]] return; }
L_00248414:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 2;
L_0024841C:
    c.r[3].d[0] = c.r[17].sd[0] < 6ll ? 1ull : 0ull;
    set32(c.r[18], c.r[18].w[0] + 16u);
    set32(c.r[19], c.r[19].w[0] + 6u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00248388u | kUnwind; return; } goto L_00248388; } }
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00248460:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 10496u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00248000u < 16384u) { entry = entries_0052[(t - 0x00248000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00248480:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 104u), 0u);
    st32((c.r[4].w[0] + 52u), 0u);
    st32((c.r[4].w[0] + 92u), 0u);
    st32((c.r[4].w[0] + 96u), 0u);
    st32((c.r[4].w[0] + 100u), 0u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00300000u);
    set32(c.r[3], c.r[2].w[0] + 24976u);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[2], 0u + 64u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[4].w[0] + 168u), c.r[3].w[0]);
    st8((c.r[4].w[0] + 530u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3CCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    st32((c.r[4].w[0] + 108u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 369u)));
    c.budget -= 25;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[17].w[0] + 320u);  if (t) { goto L_002484F0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 40u), c.r[2].w[0]);  if (t) { goto L_002484FC; } }
L_002484F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FE60000u);
    c.r[2].d[0] = c.r[2].d[0] | 26214ull;
    st32((c.r[16].w[0] + 40u), c.r[2].w[0]);
    c.budget -= 3;
L_002484FC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42540000u);
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42920000u);
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    st8((c.r[16].w[0] + 34u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 35u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], 0u + 10u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248524u); st8((c.r[16].w[0] + 38u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0081(c, 16u, depth + 1u); else { c.pc = 0x003044E0u; return; } if (c.pc != 0x00248524u) [[unlikely]] return; }
L_00248524:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00248544; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_002485A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024859C; } }
L_00248544:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[4], c.r[2].w[0] + 10448u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[3], c.r[2].w[0] + 10480u);
    c.r[2].d[0] = c.r[5].d[0] & 15ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[17].w[0] + 160u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 4));
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 16u));
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 22;
L_0024859C:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_002485A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002485A8u);  if (depth < kMaxDepth) unit_0052(c, 36u, depth + 1u); else { c.pc = 0x002485C0u; return; } if (c.pc != 0x002485A8u) [[unlikely]] return; }
L_002485A8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002485C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[3] = ld32((c.r[4].w[0] + 32u));
    c.f[2] = ld32((c.r[4].w[0] + 36u));
    c.f[1] = ld32((c.r[4].w[0] + 40u));
    c.f[0] = ld32((c.r[4].w[0] + 44u));
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    st32((c.r[4].w[0] + 128u), c.f[3]);
    st32((c.r[4].w[0] + 132u), c.f[2]);
    st32((c.r[4].w[0] + 136u), c.f[1]);
    st32((c.r[4].w[0] + 140u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 108u));
    c.f[0] = ld32((c.r[4].w[0] + 104u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 104u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 360u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 23;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[16], c.r[18].w[0] + 320u);  if (t) { goto L_00248628; } }
    st32((c.r[18].w[0] + 104u), c.f[1]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 108u), 0u);  if (t) { goto L_00248648; } }
L_00248628:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00248648; } }
    st32((c.r[18].w[0] + 104u), 0u);
    st32((c.r[18].w[0] + 108u), 0u);
    c.budget -= 2;
L_00248648:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (t) { goto L_00248680; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (t) { goto L_0024866C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 34u)));  if (t) { goto L_0024868C; } }
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 1;
L_0024866C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248674u);  if (depth < kMaxDepth) unit_0052(c, 56u, depth + 1u); else { c.pc = 0x002489D0u; return; } if (c.pc != 0x00248674u) [[unlikely]] return; }
L_00248674:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00248688; } }
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 1;
L_00248680:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248688u);  if (depth < kMaxDepth) unit_0052(c, 57u, depth + 1u); else { c.pc = 0x002489E0u; return; } if (c.pc != 0x00248688u) [[unlikely]] return; }
L_00248688:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 34u)));
    c.budget -= 1;
L_0024868C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002486EC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x437A0000u);  if (t) { goto L_002486AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));  if (t) { goto L_0024870C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437A0000u);
    c.budget -= 1;
L_002486AC:
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 6656u);
    set32(c.r[6], 0u + 5120u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002486C0u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 22u, depth + 1u); else { c.pc = 0x0024C590u; return; } if (c.pc != 0x002486C0u) [[unlikely]] return; }
L_002486C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00248708; } }
    st32((c.r[18].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 34u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 120u);
    st8((c.r[16].w[0] + 36u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002486E4u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0052(c, 58u, depth + 1u); else { c.pc = 0x00248A00u; return; } if (c.pc != 0x002486E4u) [[unlikely]] return; }
L_002486E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00248708; } }
L_002486EC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[2].w[0] - 1u);  goto L_00248704; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 34u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00248708; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 1;
L_00248704:
    st8((c.r[16].w[0] + 36u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_00248708:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 1;
L_0024870C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 641u)));
    c.r[2].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00248724; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 280u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_00248724:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (t) { goto L_002488FC; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 92u)));
    c.r[4].d[0] = 0ull | 65535ull;
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[18].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    st32((c.r[18].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 96u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[18].w[0] + 84u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[18].w[0] + 84u));
    st32((c.r[18].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 100u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[18].w[0] + 88u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[18].w[0] + 88u));
    st32((c.r[18].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 369u)));
    c.budget -= 24;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[17], c.r[0], c.r[0]);  if (t) { goto L_00248804; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D230000u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    c.f[14] = c.r[2].w[0];
    c.f[12] = ld32((c.r[16].w[0] + 24u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[2].w[0];
    c.f[13] = ld32((c.r[16].w[0] + 28u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBD230000u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    c.f[16] = c.r[2].w[0];
    set32(c.r[6], 0u - 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[17] = c.r[2].w[0];
    set32(c.r[7], 0u + 4096u);
    set32(c.r[8], 0u + 128u);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002487D4u); c.r[5].d[0] = 0ull | 61440ull;  if (depth < kMaxDepth) unit_0052(c, 257u, depth + 1u); else { c.pc = 0x0024BDC0u; return; } if (c.pc != 0x002487D4u) [[unlikely]] return; }
L_002487D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002487DCu); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0052(c, 232u, depth + 1u); else { c.pc = 0x0024B250u; return; } if (c.pc != 0x002487DCu) [[unlikely]] return; }
L_002487DC:
    set32(c.r[5], c.r[18].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002487E8u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0045(c, 199u, depth + 1u); else { c.pc = 0x00217650u; return; } if (c.pc != 0x002487E8u) [[unlikely]] return; }
L_002487E8:
    c.f[1] = ld32((c.r[18].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0024880C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_0024880C; } }
L_00248804:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024880Cu); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0052(c, 235u, depth + 1u); else { c.pc = 0x0024B2C0u; return; } if (c.pc != 0x0024880Cu) [[unlikely]] return; }
L_0024880C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_00248838; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 530u));
    set32(c.r[2], 0u - 97u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00248834; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 514u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_0024885C; } }
L_00248834:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_00248838:
    st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248844u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 9u, depth + 1u); else { c.pc = 0x00304280u; return; } if (c.pc != 0x00248844u) [[unlikely]] return; }
L_00248844:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024884Cu); set32(c.r[4], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0047(c, 216u, depth + 1u); else { c.pc = 0x0021EE00u; return; } if (c.pc != 0x0024884Cu) [[unlikely]] return; }
L_0024884C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248854u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0052(c, 251u, depth + 1u); else { c.pc = 0x0024BA20u; return; } if (c.pc != 0x00248854u) [[unlikely]] return; }
L_00248854:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);  if (t) { goto L_00248910; } }
L_0024885C:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 369u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[3].w[0] + 592u);  if (t) { goto L_002488A0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024887Cu); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0052(c, 243u, depth + 1u); else { c.pc = 0x0024B3F0u; return; } if (c.pc != 0x0024887Cu) [[unlikely]] return; }
L_0024887C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002488F8; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248894u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 9u, depth + 1u); else { c.pc = 0x00304280u; return; } if (c.pc != 0x00248894u) [[unlikely]] return; }
L_00248894:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024890C; } }
    set32(c.r[4], c.r[3].w[0] + 592u);
    c.budget -= 1;
L_002488A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002488A8u); set32(c.r[5], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x002488A8u) [[unlikely]] return; }
L_002488A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x442F0000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002488DC; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002488D4u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 9u, depth + 1u); else { c.pc = 0x00304280u; return; } if (c.pc != 0x002488D4u) [[unlikely]] return; }
L_002488D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024890C; } }
L_002488DC:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002488F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002488F8u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_003D(c, 21u, depth + 1u); else { c.pc = 0x001F45D0u; return; } if (c.pc != 0x002488F8u) [[unlikely]] return; }
L_002488F8:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 1;
L_002488FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248904u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_005D(c, 694u, depth + 1u); else { c.pc = 0x002763B0u; return; } if (c.pc != 0x00248904u) [[unlikely]] return; }
L_00248904:
    set32(c.r[3], 0u + 1u);
    st8((c.r[18].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0024890C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00248910:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00248930:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00248940:
    set32(c.r[5], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00248994; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 529u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024897C; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 531u));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 324u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 324u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002489BC; } }
L_0024897C:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 531u));
    set32(c.r[3], c.r[2].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 384u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 384u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002489BC; } }
L_00248994:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 531u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] + 324u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 324u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002489BC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_002489BC:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_002489D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002489E0:
    set32(c.r[5], ld32((c.r[4].w[0] + 336u)));
    set32(c.r[6], 0u + 8u);
    set32(c.r[7], 0u + 512u);
    set32(c.r[8], 0u + 128u);
    c.budget -= 6;
    { set32(c.r[9], 0u + 8192u);  goto L_0024BB00; }
L_00248A00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_00248A28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248A28u); set32(c.r[5], ld32((c.r[16].w[0] + 24u)));  if (depth < kMaxDepth) unit_0077(c, 232u, depth + 1u); else { c.pc = 0x002DEAA0u; return; } if (c.pc != 0x00248A28u) [[unlikely]] return; }
L_00248A28:
    set32(c.r[5], 0u + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248A34u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0079(c, 182u, depth + 1u); else { c.pc = 0x002E62A0u; return; } if (c.pc != 0x00248A34u) [[unlikely]] return; }
L_00248A34:
    set32(c.r[5], 0u + 97u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248A40u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0079(c, 182u, depth + 1u); else { c.pc = 0x002E62A0u; return; } if (c.pc != 0x00248A40u) [[unlikely]] return; }
L_00248A40:
    set32(c.r[5], 0u + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248A4Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 330u, depth + 1u); else { c.pc = 0x00197890u; return; } if (c.pc != 0x00248A4Cu) [[unlikely]] return; }
L_00248A4C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00248A60:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 10544u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00248000u < 16384u) { entry = entries_0052[(t - 0x00248000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00248A80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 104u), 0u);
    st32((c.r[4].w[0] + 52u), 0u);
    st32((c.r[4].w[0] + 92u), 0u);
    st32((c.r[4].w[0] + 96u), 0u);
    st32((c.r[4].w[0] + 100u), 0u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00300000u);
    set32(c.r[3], c.r[2].w[0] + 24976u);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[2], 0u + 64u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[4].w[0] + 168u), c.r[3].w[0]);
    st8((c.r[4].w[0] + 530u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3CCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    st32((c.r[4].w[0] + 108u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 369u)));
    c.budget -= 25;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[17].w[0] + 320u);  if (t) { goto L_00248AF4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40260000u);
    c.r[2].d[0] = c.r[2].d[0] | 26214ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 40u), c.r[2].w[0]);  if (t) { goto L_00248AFC; } }
L_00248AF4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    st32((c.r[16].w[0] + 40u), c.r[2].w[0]);
    c.budget -= 2;
L_00248AFC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42700000u);
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    st8((c.r[16].w[0] + 34u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 35u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], 0u + 11u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248B24u); st8((c.r[16].w[0] + 38u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0081(c, 16u, depth + 1u); else { c.pc = 0x003044E0u; return; } if (c.pc != 0x00248B24u) [[unlikely]] return; }
L_00248B24:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00248B44; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_00248B9C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00248B98; } }
L_00248B44:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 10512u);
    set32(c.r[3], c.r[28].w[0] - 29216u);
    c.r[4].d[0] = c.r[4].d[0] & 15ull;
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[17].w[0] + 160u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 4));
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 16u));
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 21;
L_00248B98:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_00248B9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248BA4u);  if (depth < kMaxDepth) unit_0052(c, 67u, depth + 1u); else { c.pc = 0x00248BC0u; return; } if (c.pc != 0x00248BA4u) [[unlikely]] return; }
L_00248BA4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00248BC0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[3] = ld32((c.r[4].w[0] + 32u));
    c.f[2] = ld32((c.r[4].w[0] + 36u));
    c.f[1] = ld32((c.r[4].w[0] + 40u));
    c.f[0] = ld32((c.r[4].w[0] + 44u));
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    st32((c.r[4].w[0] + 128u), c.f[3]);
    st32((c.r[4].w[0] + 132u), c.f[2]);
    st32((c.r[4].w[0] + 136u), c.f[1]);
    st32((c.r[4].w[0] + 140u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 108u));
    c.f[0] = ld32((c.r[4].w[0] + 104u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 104u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 360u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 23;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[16], c.r[18].w[0] + 320u);  if (t) { goto L_00248C28; } }
    st32((c.r[18].w[0] + 104u), c.f[1]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 108u), 0u);  if (t) { goto L_00248C48; } }
L_00248C28:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00248C48; } }
    st32((c.r[18].w[0] + 104u), 0u);
    st32((c.r[18].w[0] + 108u), 0u);
    c.budget -= 2;
L_00248C48:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (t) { goto L_00248C80; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (t) { goto L_00248C6C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 34u)));  if (t) { goto L_00248C8C; } }
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 1;
L_00248C6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248C74u);  if (depth < kMaxDepth) unit_0052(c, 87u, depth + 1u); else { c.pc = 0x00249020u; return; } if (c.pc != 0x00248C74u) [[unlikely]] return; }
L_00248C74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00248C88; } }
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 1;
L_00248C80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248C88u);  if (depth < kMaxDepth) unit_0052(c, 88u, depth + 1u); else { c.pc = 0x00249030u; return; } if (c.pc != 0x00248C88u) [[unlikely]] return; }
L_00248C88:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 34u)));
    c.budget -= 1;
L_00248C8C:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00248D44; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00248CF0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x43110000u);  if (t) { goto L_00248CB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));  if (t) { goto L_00248D64; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43110000u);
    c.budget -= 1;
L_00248CB8:
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 6144u);
    set32(c.r[6], 0u + 4608u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248CCCu); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 22u, depth + 1u); else { c.pc = 0x0024C590u; return; } if (c.pc != 0x00248CCCu) [[unlikely]] return; }
L_00248CCC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00248D60; } }
    st32((c.r[18].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 34u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 36u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 37u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00248D60; } }
L_00248CF0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[2].w[0] - 1u);  goto L_00248D3C; }
    set32(c.r[2], 0u + 3u);
    st8((c.r[16].w[0] + 36u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248D0Cu); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0052(c, 89u, depth + 1u); else { c.pc = 0x00249050u; return; } if (c.pc != 0x00248D0Cu) [[unlikely]] return; }
L_00248D0C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 37u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[16].w[0] + 37u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 37u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00248D60; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 34u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 60u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 36u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00248D60; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 1;
L_00248D3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 36u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00248D60; } }
L_00248D44:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[2].w[0] - 1u);  goto L_00248D5C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 34u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00248D60; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 1;
L_00248D5C:
    st8((c.r[16].w[0] + 36u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_00248D60:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 1;
L_00248D64:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 641u)));
    c.r[2].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00248D7C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 280u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_00248D7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (t) { goto L_00248F54; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 92u)));
    c.r[4].d[0] = 0ull | 65535ull;
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[18].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    st32((c.r[18].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 96u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[18].w[0] + 84u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[18].w[0] + 84u));
    st32((c.r[18].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 100u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[18].w[0] + 88u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[18].w[0] + 88u));
    st32((c.r[18].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 369u)));
    c.budget -= 24;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[17], c.r[0], c.r[0]);  if (t) { goto L_00248E5C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[2].w[0];
    c.f[12] = ld32((c.r[16].w[0] + 24u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBD230000u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    c.f[16] = c.r[2].w[0];
    c.f[13] = ld32((c.r[16].w[0] + 28u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D230000u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    c.f[14] = c.r[2].w[0];
    set32(c.r[6], 0u - 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[17] = c.r[2].w[0];
    set32(c.r[7], 0u + 4096u);
    set32(c.r[8], 0u + 128u);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248E2Cu); c.r[5].d[0] = 0ull | 61440ull;  if (depth < kMaxDepth) unit_0052(c, 257u, depth + 1u); else { c.pc = 0x0024BDC0u; return; } if (c.pc != 0x00248E2Cu) [[unlikely]] return; }
L_00248E2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248E34u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0052(c, 232u, depth + 1u); else { c.pc = 0x0024B250u; return; } if (c.pc != 0x00248E34u) [[unlikely]] return; }
L_00248E34:
    set32(c.r[5], c.r[18].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248E40u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0045(c, 199u, depth + 1u); else { c.pc = 0x00217650u; return; } if (c.pc != 0x00248E40u) [[unlikely]] return; }
L_00248E40:
    c.f[1] = ld32((c.r[18].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00248E64; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_00248E64; } }
L_00248E5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248E64u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0052(c, 235u, depth + 1u); else { c.pc = 0x0024B2C0u; return; } if (c.pc != 0x00248E64u) [[unlikely]] return; }
L_00248E64:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_00248E90; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 530u));
    set32(c.r[2], 0u - 97u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00248E8C; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 514u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_00248EB4; } }
L_00248E8C:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_00248E90:
    st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248E9Cu); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 9u, depth + 1u); else { c.pc = 0x00304280u; return; } if (c.pc != 0x00248E9Cu) [[unlikely]] return; }
L_00248E9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248EA4u); set32(c.r[4], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0047(c, 216u, depth + 1u); else { c.pc = 0x0021EE00u; return; } if (c.pc != 0x00248EA4u) [[unlikely]] return; }
L_00248EA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248EACu); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0052(c, 251u, depth + 1u); else { c.pc = 0x0024BA20u; return; } if (c.pc != 0x00248EACu) [[unlikely]] return; }
L_00248EAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);  if (t) { goto L_00248F68; } }
L_00248EB4:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 369u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[3].w[0] + 592u);  if (t) { goto L_00248EF8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248ED4u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0052(c, 243u, depth + 1u); else { c.pc = 0x0024B3F0u; return; } if (c.pc != 0x00248ED4u) [[unlikely]] return; }
L_00248ED4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00248F50; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248EECu); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 9u, depth + 1u); else { c.pc = 0x00304280u; return; } if (c.pc != 0x00248EECu) [[unlikely]] return; }
L_00248EEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00248F64; } }
    set32(c.r[4], c.r[3].w[0] + 592u);
    c.budget -= 1;
L_00248EF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248F00u); set32(c.r[5], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x00248F00u) [[unlikely]] return; }
L_00248F00:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x442F0000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00248F34; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248F2Cu); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 9u, depth + 1u); else { c.pc = 0x00304280u; return; } if (c.pc != 0x00248F2Cu) [[unlikely]] return; }
L_00248F2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00248F64; } }
L_00248F34:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00248F50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248F50u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_003D(c, 21u, depth + 1u); else { c.pc = 0x001F45D0u; return; } if (c.pc != 0x00248F50u) [[unlikely]] return; }
L_00248F50:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 1;
L_00248F54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248F5Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_005D(c, 694u, depth + 1u); else { c.pc = 0x002763B0u; return; } if (c.pc != 0x00248F5Cu) [[unlikely]] return; }
L_00248F5C:
    set32(c.r[3], 0u + 1u);
    st8((c.r[18].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00248F64:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00248F68:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00248F80:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00248F90:
    set32(c.r[5], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00248FE4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 529u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00248FCC; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 531u));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 324u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 324u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0024900C; } }
L_00248FCC:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 531u));
    set32(c.r[3], c.r[2].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 384u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 384u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0024900C; } }
L_00248FE4:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 531u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] + 324u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 324u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024900C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0024900C:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_00249020:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00249030:
    set32(c.r[5], ld32((c.r[4].w[0] + 336u)));
    set32(c.r[6], 0u + 16u);
    set32(c.r[7], 0u + 512u);
    set32(c.r[8], 0u + 192u);
    c.budget -= 6;
    { set32(c.r[9], 0u + 6144u);  goto L_0024BB00; }
L_00249050:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[16], c.r[17].w[0] + 320u);  if (t) { goto L_00249080; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249080u); set32(c.r[5], ld32((c.r[17].w[0] + 24u)));  if (depth < kMaxDepth) unit_0077(c, 232u, depth + 1u); else { c.pc = 0x002DEAA0u; return; } if (c.pc != 0x00249080u) [[unlikely]] return; }
L_00249080:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 38u)));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249090u); set32(c.r[5], c.r[2].w[0] + 120u);  if (depth < kMaxDepth) unit_0079(c, 263u, depth + 1u); else { c.pc = 0x002E6FD0u; return; } if (c.pc != 0x00249090u) [[unlikely]] return; }
L_00249090:
    set32(c.r[5], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024909Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 330u, depth + 1u); else { c.pc = 0x00197890u; return; } if (c.pc != 0x0024909Cu) [[unlikely]] return; }
L_0024909C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 38u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 38u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 38u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    st8((c.r[16].w[0] + 38u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002490D0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 10576u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00248000u < 16384u) { entry = entries_0052[(t - 0x00248000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002490F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 104u), 0u);
    st32((c.r[4].w[0] + 52u), 0u);
    st32((c.r[4].w[0] + 92u), 0u);
    st32((c.r[4].w[0] + 96u), 0u);
    st32((c.r[4].w[0] + 100u), 0u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00300000u);
    set32(c.r[3], c.r[2].w[0] + 24976u);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[2], 0u + 64u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[4].w[0] + 168u), c.r[3].w[0]);
    st8((c.r[4].w[0] + 530u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3CCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    st32((c.r[4].w[0] + 108u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x425C0000u);
    st32((c.r[4].w[0] + 344u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42960000u);
    st32((c.r[4].w[0] + 348u), c.r[2].w[0]);
    st8((c.r[4].w[0] + 354u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 355u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], 0u + 12u);
    set32(c.r[16], c.r[17].w[0] + 320u);
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024916Cu); st8((c.r[4].w[0] + 358u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0081(c, 16u, depth + 1u); else { c.pc = 0x003044E0u; return; } if (c.pc != 0x0024916Cu) [[unlikely]] return; }
L_0024916C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0024918C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_002491E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002491E0; } }
L_0024918C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 10560u);
    set32(c.r[3], c.r[28].w[0] - 29208u);
    c.r[4].d[0] = c.r[4].d[0] & 15ull;
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[17].w[0] + 160u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 4));
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 16u));
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 21;
L_002491E0:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_002491E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002491ECu);  if (depth < kMaxDepth) unit_0052(c, 97u, depth + 1u); else { c.pc = 0x00249200u; return; } if (c.pc != 0x002491ECu) [[unlikely]] return; }
L_002491EC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00249200:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[3] = ld32((c.r[4].w[0] + 32u));
    c.f[2] = ld32((c.r[4].w[0] + 36u));
    c.f[1] = ld32((c.r[4].w[0] + 40u));
    c.f[0] = ld32((c.r[4].w[0] + 44u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FE00000u);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.f[4] = c.r[2].w[0];
    set32(c.r[16], c.r[17].w[0] + 320u);
    st32((c.r[4].w[0] + 128u), c.f[3]);
    st32((c.r[4].w[0] + 132u), c.f[2]);
    st32((c.r[4].w[0] + 136u), c.f[1]);
    st32((c.r[4].w[0] + 140u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 108u));
    c.f[0] = ld32((c.r[4].w[0] + 104u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[4]));
    c.budget -= 23;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[4].w[0] + 104u), c.f[0]);  if (t) { goto L_00249268; } }
    st32((c.r[17].w[0] + 104u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 108u), 0u);  if (t) { goto L_00249288; } }
L_00249268:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00249288; } }
    st32((c.r[17].w[0] + 104u), 0u);
    st32((c.r[17].w[0] + 108u), 0u);
    c.budget -= 2;
L_00249288:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_002492C0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_002492AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 34u)));  if (t) { goto L_002492CC; } }
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_002492AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002492B4u);  if (depth < kMaxDepth) unit_0052(c, 113u, depth + 1u); else { c.pc = 0x002495D0u; return; } if (c.pc != 0x002492B4u) [[unlikely]] return; }
L_002492B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002492C8; } }
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_002492C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002492C8u);  if (depth < kMaxDepth) unit_0052(c, 114u, depth + 1u); else { c.pc = 0x002495E0u; return; } if (c.pc != 0x002492C8u) [[unlikely]] return; }
L_002492C8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 34u)));
    c.budget -= 1;
L_002492CC:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00249384; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00249330; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x43200000u);  if (t) { goto L_002492F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));  if (t) { goto L_002493A4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43200000u);
    c.budget -= 1;
L_002492F8:
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 6144u);
    set32(c.r[6], 0u + 4608u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024930Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 22u, depth + 1u); else { c.pc = 0x0024C590u; return; } if (c.pc != 0x0024930Cu) [[unlikely]] return; }
L_0024930C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002493A0; } }
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 34u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 36u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 37u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002493A0; } }
L_00249330:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[2].w[0] - 1u);  goto L_0024937C; }
    set32(c.r[2], 0u + 8u);
    st8((c.r[16].w[0] + 36u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024934Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0052(c, 115u, depth + 1u); else { c.pc = 0x00249600u; return; } if (c.pc != 0x0024934Cu) [[unlikely]] return; }
L_0024934C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 37u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[16].w[0] + 37u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 37u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002493A0; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 34u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 60u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 36u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002493A0; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 1;
L_0024937C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 36u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002493A0; } }
L_00249384:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[2].w[0] - 1u);  goto L_0024939C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 34u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002493A0; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 1;
L_0024939C:
    st8((c.r[16].w[0] + 36u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_002493A0:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 1;
L_002493A4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 641u)));
    c.r[2].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002493BC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 280u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_002493BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_00249500; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 92u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[15] = c.r[2].w[0];
    c.r[5].d[0] = 0ull | 65535ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBD230000u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    c.f[16] = c.r[2].w[0];
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 80u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D230000u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    c.f[14] = c.r[2].w[0];
    set32(c.r[6], 0u - 112u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    c.f[17] = c.r[2].w[0];
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[7], 0u + 3584u);
    set32(c.r[8], 0u + 112u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[17].w[0] + 84u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 84u));
    st32((c.r[17].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[17].w[0] + 88u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 88u));
    st32((c.r[17].w[0] + 88u), c.r[2].w[0]);
    c.f[12] = ld32((c.r[16].w[0] + 24u));
    c.f[13] = ld32((c.r[16].w[0] + 28u));
    c.budget -= 40;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249464u); c.r[5].d[0] = 0ull | 61952ull;  if (depth < kMaxDepth) unit_0052(c, 257u, depth + 1u); else { c.pc = 0x0024BDC0u; return; } if (c.pc != 0x00249464u) [[unlikely]] return; }
L_00249464:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024946Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0052(c, 232u, depth + 1u); else { c.pc = 0x0024B250u; return; } if (c.pc != 0x0024946Cu) [[unlikely]] return; }
L_0024946C:
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249478u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0045(c, 199u, depth + 1u); else { c.pc = 0x00217650u; return; } if (c.pc != 0x00249478u) [[unlikely]] return; }
L_00249478:
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 2u);  if (t) { goto L_002494B0; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 530u));
    set32(c.r[2], 0u - 97u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002494AC; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 514u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);  if (t) { goto L_002494D0; } }
L_002494AC:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_002494B0:
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002494BCu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 9u, depth + 1u); else { c.pc = 0x00304280u; return; } if (c.pc != 0x002494BCu) [[unlikely]] return; }
L_002494BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002494C4u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0047(c, 216u, depth + 1u); else { c.pc = 0x0021EE00u; return; } if (c.pc != 0x002494C4u) [[unlikely]] return; }
L_002494C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002494CCu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0052(c, 251u, depth + 1u); else { c.pc = 0x0024BA20u; return; } if (c.pc != 0x002494CCu) [[unlikely]] return; }
L_002494CC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.budget -= 1;
L_002494D0:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002494DCu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0052(c, 243u, depth + 1u); else { c.pc = 0x0024B3F0u; return; } if (c.pc != 0x002494DCu) [[unlikely]] return; }
L_002494DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002494FC; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002494F4u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 9u, depth + 1u); else { c.pc = 0x00304280u; return; } if (c.pc != 0x002494F4u) [[unlikely]] return; }
L_002494F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_00249514; } }
L_002494FC:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_00249500:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249508u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_005D(c, 694u, depth + 1u); else { c.pc = 0x002763B0u; return; } if (c.pc != 0x00249508u) [[unlikely]] return; }
L_00249508:
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 3;
L_00249514:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00249530:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00249540:
    set32(c.r[5], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00249594; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 529u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024957C; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 531u));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 324u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 324u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002495BC; } }
L_0024957C:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 531u));
    set32(c.r[3], c.r[2].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 384u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 384u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002495BC; } }
L_00249594:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 531u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] + 324u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 324u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002495BC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_002495BC:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_002495D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002495E0:
    set32(c.r[5], ld32((c.r[4].w[0] + 336u)));
    set32(c.r[6], 0u + 14u);
    set32(c.r[7], 0u + 448u);
    set32(c.r[8], 0u + 224u);
    c.budget -= 6;
    { set32(c.r[9], 0u + 7168u);  goto L_0024BB00; }
L_00249600:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_00249628; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249628u); set32(c.r[5], ld32((c.r[16].w[0] + 24u)));  if (depth < kMaxDepth) unit_0077(c, 232u, depth + 1u); else { c.pc = 0x002DEAA0u; return; } if (c.pc != 0x00249628u) [[unlikely]] return; }
L_00249628:
    set32(c.r[5], 0u + 122u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249634u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0079(c, 268u, depth + 1u); else { c.pc = 0x002E70C0u; return; } if (c.pc != 0x00249634u) [[unlikely]] return; }
L_00249634:
    set32(c.r[5], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249640u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 330u, depth + 1u); else { c.pc = 0x00197890u; return; } if (c.pc != 0x00249640u) [[unlikely]] return; }
L_00249640:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00249650:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 10656u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00248000u < 16384u) { entry = entries_0052[(t - 0x00248000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00249670:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 104u), 0u);
    st32((c.r[4].w[0] + 52u), 0u);
    st32((c.r[4].w[0] + 92u), 0u);
    st32((c.r[4].w[0] + 96u), 0u);
    st32((c.r[4].w[0] + 100u), 0u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00300000u);
    set32(c.r[3], c.r[2].w[0] + 24976u);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[2], 0u + 64u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[4].w[0] + 168u), c.r[3].w[0]);
    st8((c.r[4].w[0] + 530u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3CCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    st32((c.r[4].w[0] + 108u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 369u)));
    c.budget -= 25;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[17].w[0] + 320u);  if (t) { goto L_002496E0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 40u), c.r[2].w[0]);  if (t) { goto L_002496E8; } }
L_002496E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 40u), c.r[2].w[0]);
    c.budget -= 2;
L_002496E8:
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002496F4u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0045(c, 199u, depth + 1u); else { c.pc = 0x00217650u; return; } if (c.pc != 0x002496F4u) [[unlikely]] return; }
L_002496F4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[1] = c.r[2].w[0];
    st32((c.r[17].w[0] + 36u), c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    set32(c.r[5], 0u + 13u);
    st32((c.r[17].w[0] + 36u), c.f[0]);
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    st8((c.r[16].w[0] + 34u), static_cast<std::uint8_t>(0u));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249730u); st8((c.r[16].w[0] + 35u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0081(c, 16u, depth + 1u); else { c.pc = 0x003044E0u; return; } if (c.pc != 0x00249730u) [[unlikely]] return; }
L_00249730:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00249750; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002497A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002497A4; } }
L_00249750:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 10592u);
    set32(c.r[3], c.r[28].w[0] - 29200u);
    c.r[4].d[0] = c.r[4].d[0] & 15ull;
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[17].w[0] + 160u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 4));
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 16u));
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 21;
L_002497A4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002497A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002497B0u); st8((c.r[16].w[0] + 38u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x002497B0u) [[unlikely]] return; }
L_002497B0:
    c.r[3].d[0] = c.r[2].d[0] & 7ull;
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    st16((c.r[16].w[0] + 36u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 36u));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 240u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002497D8u); st16((c.r[16].w[0] + 36u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0052(c, 125u, depth + 1u); else { c.pc = 0x002497F0u; return; } if (c.pc != 0x002497D8u) [[unlikely]] return; }
L_002497D8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002497F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[3] = ld32((c.r[4].w[0] + 32u));
    c.f[2] = ld32((c.r[4].w[0] + 36u));
    c.f[1] = ld32((c.r[4].w[0] + 40u));
    c.f[0] = ld32((c.r[4].w[0] + 44u));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    st32((c.r[4].w[0] + 128u), c.f[3]);
    st32((c.r[4].w[0] + 132u), c.f[2]);
    st32((c.r[4].w[0] + 136u), c.f[1]);
    st32((c.r[4].w[0] + 140u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 108u));
    c.f[0] = ld32((c.r[4].w[0] + 104u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 104u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 360u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 22;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[16], c.r[17].w[0] + 320u);  if (t) { goto L_00249854; } }
    st32((c.r[17].w[0] + 104u), c.f[1]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 108u), 0u);  if (t) { goto L_00249874; } }
L_00249854:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00249874; } }
    st32((c.r[17].w[0] + 104u), 0u);
    st32((c.r[17].w[0] + 108u), 0u);
    c.budget -= 2;
L_00249874:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_002498AC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_00249898; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 34u)));  if (t) { goto L_002498B8; } }
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_00249898:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002498A0u);  if (depth < kMaxDepth) unit_0052(c, 148u, depth + 1u); else { c.pc = 0x00249CB0u; return; } if (c.pc != 0x002498A0u) [[unlikely]] return; }
L_002498A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002498B4; } }
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_002498AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002498B4u);  if (depth < kMaxDepth) unit_0052(c, 149u, depth + 1u); else { c.pc = 0x00249CC0u; return; } if (c.pc != 0x002498B4u) [[unlikely]] return; }
L_002498B4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 34u)));
    c.budget -= 1;
L_002498B8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002498F4; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002498D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));  if (t) { goto L_00249950; } }
L_002498D4:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 36u));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[2].w[0] - 1u);  goto L_002498EC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 34u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0024994C; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 1;
L_002498EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 36u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0024994C; } }
L_002498F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002498FCu);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x002498FCu) [[unlikely]] return; }
L_002498FC:
    c.r[3].d[0] = c.r[2].d[0] & 7ull;
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    st16((c.r[16].w[0] + 36u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 36u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42F00000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 6144u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    set32(c.r[2], c.r[3].w[0] + 240u);
    st16((c.r[16].w[0] + 36u), static_cast<std::uint16_t>(c.r[2].w[0]));
    mmi::paddub(c.r[6], c.r[5], c.r[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249938u); st8((c.r[16].w[0] + 34u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0053(c, 22u, depth + 1u); else { c.pc = 0x0024C590u; return; } if (c.pc != 0x00249938u) [[unlikely]] return; }
L_00249938:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024994C; } }
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024994Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0052(c, 150u, depth + 1u); else { c.pc = 0x00249CE0u; return; } if (c.pc != 0x0024994Cu) [[unlikely]] return; }
L_0024994C:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 1;
L_00249950:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 641u)));
    c.r[2].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00249968; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 280u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_00249968:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00249BD0; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 92u)));
    c.r[4].d[0] = 0ull | 65535ull;
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[17].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    st32((c.r[17].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[17].w[0] + 84u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 84u));
    st32((c.r[17].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[17].w[0] + 88u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 88u));
    st32((c.r[17].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 369u)));
    c.budget -= 24;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_00249A2C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D230000u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    c.f[14] = c.r[2].w[0];
    c.f[12] = ld32((c.r[16].w[0] + 24u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[15] = c.r[2].w[0];
    c.f[13] = ld32((c.r[16].w[0] + 28u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBD230000u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    c.f[16] = c.r[2].w[0];
    set32(c.r[6], 0u - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF000000u);
    c.f[17] = c.r[2].w[0];
    set32(c.r[7], 0u + 2048u);
    set32(c.r[8], 0u + 64u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249A18u); c.r[5].d[0] = 0ull | 63488ull;  if (depth < kMaxDepth) unit_0052(c, 257u, depth + 1u); else { c.pc = 0x0024BDC0u; return; } if (c.pc != 0x00249A18u) [[unlikely]] return; }
L_00249A18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249A20u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0052(c, 232u, depth + 1u); else { c.pc = 0x0024B250u; return; } if (c.pc != 0x00249A20u) [[unlikely]] return; }
L_00249A20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 514u)));  if (t) { goto L_00249A38; } }
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_00249A2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249A34u);  if (depth < kMaxDepth) unit_0052(c, 235u, depth + 1u); else { c.pc = 0x0024B2C0u; return; } if (c.pc != 0x00249A34u) [[unlikely]] return; }
L_00249A34:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 514u)));
    c.budget -= 1;
L_00249A38:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_00249A68; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249A50u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 9u, depth + 1u); else { c.pc = 0x00304280u; return; } if (c.pc != 0x00249A50u) [[unlikely]] return; }
L_00249A50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249A58u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0047(c, 216u, depth + 1u); else { c.pc = 0x0021EE00u; return; } if (c.pc != 0x00249A58u) [[unlikely]] return; }
L_00249A58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249A60u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0052(c, 251u, depth + 1u); else { c.pc = 0x0024BA20u; return; } if (c.pc != 0x00249A60u) [[unlikely]] return; }
L_00249A60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_00249BFC; } }
L_00249A68:
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[4], 0u + 2u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_00249B34; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 529u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00249B34; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 38u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00249B34; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 39u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00249B34; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x43160000u);  if (t) { goto L_00249AE8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);  if (t) { goto L_00249AC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));  if (t) { goto L_00249B38; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.budget -= 1;
L_00249AC0:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249ACCu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0014(c, 151u, depth + 1u); else { c.pc = 0x00152F90u; return; } if (c.pc != 0x00249ACCu) [[unlikely]] return; }
L_00249ACC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00249B34; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 39u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 39u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00249B34; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43160000u);
    c.budget -= 1;
L_00249AE8:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249AF4u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0014(c, 156u, depth + 1u); else { c.pc = 0x001530A0u; return; } if (c.pc != 0x00249AF4u) [[unlikely]] return; }
L_00249AF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00249B34; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 39u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[3], c.r[2].w[0] + 29598u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 39u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 532u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[17].w[0] + 531u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 40u), c.r[2].w[0]);
    c.budget -= 14;
L_00249B34:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 1;
L_00249B38:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 369u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[3].w[0] + 592u);  if (t) { goto L_00249B78; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249B54u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0052(c, 243u, depth + 1u); else { c.pc = 0x0024B3F0u; return; } if (c.pc != 0x00249B54u) [[unlikely]] return; }
L_00249B54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00249BB4; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249B6Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 9u, depth + 1u); else { c.pc = 0x00304280u; return; } if (c.pc != 0x00249B6Cu) [[unlikely]] return; }
L_00249B6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00249BF8; } }
    set32(c.r[4], c.r[3].w[0] + 592u);
    c.budget -= 1;
L_00249B78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249B80u); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x00249B80u) [[unlikely]] return; }
L_00249B80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x442F0000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00249BB4; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249BACu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 9u, depth + 1u); else { c.pc = 0x00304280u; return; } if (c.pc != 0x00249BACu) [[unlikely]] return; }
L_00249BAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00249BF8; } }
L_00249BB4:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00249BD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249BD0u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_003D(c, 21u, depth + 1u); else { c.pc = 0x001F45D0u; return; } if (c.pc != 0x00249BD0u) [[unlikely]] return; }
L_00249BD0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 14210u)));
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249BE4u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 285u, depth + 1u); else { c.pc = 0x001970F0u; return; } if (c.pc != 0x00249BE4u) [[unlikely]] return; }
L_00249BE4:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249BF0u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_005D(c, 694u, depth + 1u); else { c.pc = 0x002763B0u; return; } if (c.pc != 0x00249BF0u) [[unlikely]] return; }
L_00249BF0:
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00249BF8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00249BFC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00249C10:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00249C20:
    set32(c.r[5], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00249C74; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 529u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00249C5C; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 531u));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 324u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 324u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00249C9C; } }
L_00249C5C:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 531u));
    set32(c.r[3], c.r[2].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 384u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 384u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00249C9C; } }
L_00249C74:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 531u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] + 324u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 324u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00249C9C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00249C9C:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_00249CB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00249CC0:
    set32(c.r[5], ld32((c.r[4].w[0] + 336u)));
    set32(c.r[6], 0u + 20u);
    set32(c.r[7], 0u + 640u);
    set32(c.r[8], 0u + 16u);
    c.budget -= 6;
    { set32(c.r[9], 0u + 1024u);  goto L_0024BB00; }
L_00249CE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_00249D08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249D08u); set32(c.r[5], ld32((c.r[16].w[0] + 24u)));  if (depth < kMaxDepth) unit_0077(c, 232u, depth + 1u); else { c.pc = 0x002DEAA0u; return; } if (c.pc != 0x00249D08u) [[unlikely]] return; }
L_00249D08:
    set32(c.r[5], 0u + 60u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249D14u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_007A(c, 8u, depth + 1u); else { c.pc = 0x002E8110u; return; } if (c.pc != 0x00249D14u) [[unlikely]] return; }
L_00249D14:
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249D20u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 330u, depth + 1u); else { c.pc = 0x00197890u; return; } if (c.pc != 0x00249D20u) [[unlikely]] return; }
L_00249D20:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00249D30:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 10672u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00248000u < 16384u) { entry = entries_0052[(t - 0x00248000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00249D50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3CCC0000u);
    c.r[3].d[0] = c.r[2].d[0] | 52429ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00300000u);
    set32(c.r[2], c.r[2].w[0] + 24976u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[4].w[0] + 104u), 0u);
    st32((c.r[4].w[0] + 52u), 0u);
    st32((c.r[4].w[0] + 108u), c.r[3].w[0]);
    set32(c.r[5], 0u + 14u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249D94u); st32((c.r[4].w[0] + 168u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0081(c, 16u, depth + 1u); else { c.pc = 0x003044E0u; return; } if (c.pc != 0x00249D94u) [[unlikely]] return; }
L_00249D94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249D9Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0052(c, 158u, depth + 1u); else { c.pc = 0x00249DB0u; return; } if (c.pc != 0x00249D9Cu) [[unlikely]] return; }
L_00249D9C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00249DB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249DC8u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_005D(c, 694u, depth + 1u); else { c.pc = 0x002763B0u; return; } if (c.pc != 0x00249DC8u) [[unlikely]] return; }
L_00249DC8:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00249DE0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00249DF0:
    set32(c.r[5], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00249E44; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 529u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00249E2C; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 531u));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 324u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 324u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00249E6C; } }
L_00249E2C:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 531u));
    set32(c.r[3], c.r[2].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 384u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 384u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00249E6C; } }
L_00249E44:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 531u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] + 324u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 324u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00249E6C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00249E6C:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_00249E80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (t) { goto L_00249E98; } }
L_00249E88:
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.budget -= 4;
L_00249E98:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00249E88u | kUnwind; return; } goto L_00249E88; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00249EB0:
    set32(c.r[9], ld32((c.r[4].w[0] + 480u)));
    set32(c.r[10], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + 432u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    set32(c.r[9], ld32((c.r[9].w[0])));
    mmi::paddub(c.r[8], c.r[3], c.r[0]);
    st32((c.r[4].w[0] + 484u), c.r[9].w[0]);
    st8((c.r[4].w[0] + 500u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 478u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 478u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 484u)));
    set32(c.r[6], c.r[9].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[9].w[0]);
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    c.budget -= 19;
L_00249EFC:
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 46u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[9], ld32((c.r[3].w[0] + 52u)));
    c.r[6].d[0] = c.r[5].sd[0] < 5ll ? 1ull : 0ull;
    set32(c.r[10], c.r[11].w[0] << 1);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    set32(c.r[10], c.r[10].w[0] << 4);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    set32(c.r[9], c.r[9].w[0] + c.r[7].w[0]);
    c.r[11].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0] + 2u)));
    c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0] + 4u)));
    set32(c.r[7], c.r[7].w[0] + 6u);
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0] + 6u)));
    st16((c.r[8].w[0] + 16u), static_cast<std::uint16_t>(c.r[11].w[0]));
    st16((c.r[8].w[0] + 18u), static_cast<std::uint16_t>(c.r[10].w[0]));
    st16((c.r[8].w[0] + 20u), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.budget -= 18;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] + 6u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00249EFCu | kUnwind; return; } goto L_00249EFC; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 46u)));
    set32(c.r[8], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[5], 0u - 2u);
    set32(c.r[6], c.r[7].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    c.f[3] = ld32((c.r[6].w[0] + 32u));
    c.f[2] = ld32((c.r[6].w[0] + 36u));
    c.f[1] = ld32((c.r[6].w[0] + 40u));
    c.f[0] = ld32((c.r[6].w[0] + 44u));
    st32((c.r[3].w[0]), c.f[3]);
    st32((c.r[3].w[0] + 4u), c.f[2]);
    st32((c.r[3].w[0] + 8u), c.f[1]);
    st32((c.r[3].w[0] + 12u), c.f[0]);
    st32((c.r[3].w[0] + 56u), 0u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 46u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[3].w[0] + 47u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 47u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[7], c.r[8].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 4);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    c.budget -= 28;
    { const bool t = c.r[7].d[0] != c.r[5].d[0]; c.r[6].d[0] = c.r[7].d[0] << 48;  if (t) { goto L_00249FD0; } }
    st8((c.r[3].w[0] + 47u), static_cast<std::uint8_t>(0u));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 68u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 68u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0024A008; } }
    c.r[6].d[0] = c.r[7].d[0] << 48;
    c.budget -= 1;
L_00249FD0:
    set32(c.r[5], 0u - 1u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[6].d[0] != c.r[5].d[0]) { set32(c.r[4], c.r[7].w[0] - c.r[4].w[0]);  goto L_0024A000; }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 46u)));
    set32(c.r[5], 0u + 1u);
    st8((c.r[3].w[0] + 47u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 68u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 68u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0024A008; } }
    set32(c.r[4], c.r[7].w[0] - c.r[4].w[0]);
    c.budget -= 1;
L_0024A000:
    c.r[5].d[0] = c.r[4].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.budget -= 2;
L_0024A008:
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 64u), c.f[0]);  c.pc = t; return; }
L_0024A020:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.f[2] = 0u;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 500u), static_cast<std::uint8_t>(0u));
    c.f[1] = ld32((c.r[4].w[0] + 492u));
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[1]));
    c.budget -= 17;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[16], c.r[4].w[0] + 432u);  if (t) { goto L_0024A388; } }
    c.f[0] = ld32((c.r[16].w[0] + 56u));
    set32(c.r[6], 0u - 1u);
    set32(c.r[8], 0u - 2u);
    set32(c.r[7], 0u + 1u);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 56u), c.f[0]);  if (t) { goto L_0024A138; } }
L_0024A080:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 47u)));
    st8((c.r[16].w[0] + 46u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 46u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[9], c.r[10].w[0] << 1);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    set32(c.r[9], c.r[9].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    c.r[11].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    st32((c.r[16].w[0] + 56u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 47u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 47u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 47u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[9], c.r[10].w[0] << 1);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    set32(c.r[9], c.r[9].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.budget -= 22;
    { const bool t = c.r[9].d[0] != c.r[8].d[0]; c.r[3].d[0] = c.r[9].d[0] << 48;  if (t) { goto L_0024A0F4; } }
    st8((c.r[16].w[0] + 47u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 68u)));
    mmi::paddub(c.r[9], c.r[7], c.r[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 68u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0024A128; } }
    c.r[3].d[0] = c.r[9].d[0] << 48;
    c.budget -= 1;
L_0024A0F4:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[6].d[0]; set32(c.r[3], c.r[9].w[0] - c.r[11].w[0]);  if (t) { goto L_0024A120; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 46u)));
    mmi::paddub(c.r[9], c.r[7], c.r[0]);
    st8((c.r[16].w[0] + 47u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 68u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 68u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0024A128; } }
    set32(c.r[3], c.r[9].w[0] - c.r[11].w[0]);
    c.budget -= 1;
L_0024A120:
    c.r[9].d[0] = c.r[3].d[0] << 48;
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 48);
    c.budget -= 2;
L_0024A128:
    c.f[0] = c.r[9].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 64u), c.f[0]);
    c.budget -= 4;
L_0024A138:
    c.f[0] = ld32((c.r[16].w[0] + 56u));
    c.f[1] = ld32((c.r[16].w[0] + 64u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024A080u | kUnwind; return; } goto L_0024A080; } }
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (t) { goto L_0024A300; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 47u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 46u)));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_0024A2FC; } }
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[7], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[3], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[6].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[17], c.r[7].w[0] + c.r[3].w[0]);
    set32(c.r[18], c.r[7].w[0] + c.r[2].w[0]);
    mmi::paddub(c.r[19], c.r[0], c.r[0]);
    mmi::paddub(c.r[20], c.r[17], c.r[0]);
    mmi::paddub(c.r[21], c.r[18], c.r[0]);
    mmi::paddub(c.r[22], c.r[16], c.r[0]);
    c.budget -= 13;
L_0024A1A8:
    c.r[23].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 2u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 2u)));
    c.f[1] = ld32((c.r[16].w[0] + 64u));
    c.f[0] = ld32((c.r[16].w[0] + 56u));
    set32(c.r[2], c.r[2].w[0] - c.r[23].w[0]);
    c.f[2] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A1DCu); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x0024A1DCu) [[unlikely]] return; }
L_0024A1DC:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[2], c.r[23].w[0] + c.r[2].w[0]);
    st16((c.r[22].w[0] + 16u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[23].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 4u)));
    c.f[1] = ld32((c.r[16].w[0] + 64u));
    c.f[0] = ld32((c.r[16].w[0] + 56u));
    set32(c.r[2], c.r[2].w[0] - c.r[23].w[0]);
    c.f[2] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A220u); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x0024A220u) [[unlikely]] return; }
L_0024A220:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[2], c.r[23].w[0] + c.r[2].w[0]);
    st16((c.r[22].w[0] + 18u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[23].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 6u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 6u)));
    c.f[1] = ld32((c.r[16].w[0] + 64u));
    c.f[0] = ld32((c.r[16].w[0] + 56u));
    set32(c.r[2], c.r[2].w[0] - c.r[23].w[0]);
    c.f[2] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A264u); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x0024A264u) [[unlikely]] return; }
L_0024A264:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[3], c.r[23].w[0] + c.r[3].w[0]);
    st16((c.r[22].w[0] + 20u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[3].d[0] = c.r[19].sd[0] < 5ll ? 1ull : 0ull;
    set32(c.r[20], c.r[20].w[0] + 6u);
    set32(c.r[21], c.r[21].w[0] + 6u);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[22], c.r[22].w[0] + 6u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024A1A8u | kUnwind; return; } goto L_0024A1A8; } }
    c.f[3] = ld32((c.r[17].w[0] + 32u));
    c.f[2] = ld32((c.r[18].w[0] + 32u));
    c.f[1] = ld32((c.r[16].w[0] + 64u));
    c.f[0] = ld32((c.r[16].w[0] + 56u));
    c.f[2] = fp::sub(c.f[2], c.f[3]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.f[3], c.f[0]);
    st32((c.r[16].w[0]), c.f[0]);
    c.f[3] = ld32((c.r[17].w[0] + 36u));
    c.f[2] = ld32((c.r[18].w[0] + 36u));
    c.f[1] = ld32((c.r[16].w[0] + 64u));
    c.f[0] = ld32((c.r[16].w[0] + 56u));
    c.f[2] = fp::sub(c.f[2], c.f[3]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.f[3], c.f[0]);
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[3] = ld32((c.r[17].w[0] + 40u));
    c.f[2] = ld32((c.r[18].w[0] + 40u));
    c.f[1] = ld32((c.r[16].w[0] + 64u));
    c.f[0] = ld32((c.r[16].w[0] + 56u));
    c.f[2] = fp::sub(c.f[2], c.f[3]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.f[3], c.f[0]);
    c.budget -= 28;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), c.f[0]);  if (t) { goto L_0024A388; } }
L_0024A2FC:
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.budget -= 1;
L_0024A300:
    mmi::paddub(c.r[8], c.r[0], c.r[0]);
    mmi::paddub(c.r[9], c.r[16], c.r[0]);
    c.budget -= 2;
L_0024A308:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 46u)));
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.r[3].d[0] = c.r[7].sd[0] < 5ll ? 1ull : 0ull;
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[8].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 2u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 4u)));
    set32(c.r[8], c.r[8].w[0] + 6u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 6u)));
    st16((c.r[9].w[0] + 16u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st16((c.r[9].w[0] + 18u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[9].w[0] + 20u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 18;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[9], c.r[9].w[0] + 6u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024A308u | kUnwind; return; } goto L_0024A308; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 46u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.f[3] = ld32((c.r[3].w[0] + 32u));
    c.f[2] = ld32((c.r[3].w[0] + 36u));
    c.f[1] = ld32((c.r[3].w[0] + 40u));
    c.f[0] = ld32((c.r[3].w[0] + 44u));
    st32((c.r[16].w[0]), c.f[3]);
    st32((c.r[16].w[0] + 4u), c.f[2]);
    st32((c.r[16].w[0] + 8u), c.f[1]);
    st32((c.r[16].w[0] + 12u), c.f[0]);
    c.budget -= 14;
L_0024A388:
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
L_0024A3C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    set32(c.r[2], 0u + 33u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_0024A3E8; } }
    set32(c.r[2], 0u + 21u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1848u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0024A404; } }
L_0024A3E8:
    set32(c.r[2], 0u + 41u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0024A400; } }
    set32(c.r[2], 0u + 22u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1848u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0024A404; } }
L_0024A400:
    st8((c.r[16].w[0] + 1848u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_0024A404:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A40Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 81u, depth + 1u); else { c.pc = 0x0024D300u; return; } if (c.pc != 0x0024A40Cu) [[unlikely]] return; }
L_0024A40C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A414u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 89u, depth + 1u); else { c.pc = 0x0024D410u; return; } if (c.pc != 0x0024A414u) [[unlikely]] return; }
L_0024A414:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A41Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 101u, depth + 1u); else { c.pc = 0x0024D680u; return; } if (c.pc != 0x0024A41Cu) [[unlikely]] return; }
L_0024A41C:
    set32(c.r[3], 0u + 120u);
    st16((c.r[16].w[0] + 1834u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 1724u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1726u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1727u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 1728u), static_cast<std::uint16_t>(0u));
    st8((c.r[16].w[0] + 1730u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1731u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1840u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1841u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1864u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1866u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1839u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1734u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1735u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 1732u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 1850u), static_cast<std::uint16_t>(0u));
    st8((c.r[16].w[0] + 1849u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 1728u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 1854u), static_cast<std::uint16_t>(0u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 25;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0024A480:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    set32(c.r[2], 0u + 33u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_0024A4A8; } }
    set32(c.r[2], 0u + 41u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0024A4B8; } }
L_0024A4A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A4B0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0052(c, 173u, depth + 1u); else { c.pc = 0x0024A3C0u; return; } if (c.pc != 0x0024A4B0u) [[unlikely]] return; }
L_0024A4B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0024A524; } }
L_0024A4B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A4C0u);  if (depth < kMaxDepth) unit_0053(c, 105u, depth + 1u); else { c.pc = 0x0024D750u; return; } if (c.pc != 0x0024A4C0u) [[unlikely]] return; }
L_0024A4C0:
    set32(c.r[3], 0u + 120u);
    st16((c.r[16].w[0] + 1828u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 1832u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 1724u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1726u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1727u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 1728u), static_cast<std::uint16_t>(0u));
    st8((c.r[16].w[0] + 1730u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1731u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1840u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1841u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1864u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1866u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1839u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 1834u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 1734u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1735u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 1732u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 1850u), static_cast<std::uint16_t>(0u));
    st8((c.r[16].w[0] + 1849u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 1728u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 1858u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 1854u), static_cast<std::uint16_t>(0u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 25;
L_0024A524:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0024A530:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    mmi::paddub(c.r[22], c.r[4], c.r[0]);
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[20], c.r[0], c.r[0]);  if (t) { goto L_0024A58C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0] + 8391u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024A58C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0] + 1842u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0024A58C; } }
    set32(c.r[20], 0u + 1u);
    c.budget -= 1;
L_0024A58C:
    c.r[2].d[0] = ld8((c.r[22].w[0] + 531u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024A5B8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[17], c.r[2].w[0] - 24608u);
    c.r[19].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 26312u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 24608u);
    set32(c.r[21], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { goto L_0024A5D4; } }
L_0024A5B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[17], c.r[2].w[0] - 23296u);
    c.r[19].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 26308u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 23296u);
    set32(c.r[21], ld32((c.r[2].w[0])));
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.budget -= 7;
L_0024A5D4:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull; c.r[2].d[0] = c.r[19].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_0024A5E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0024A764; } }
    c.r[2].d[0] = c.r[19].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 1;
L_0024A5E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[2], c.r[21], c.r[0]);  if (t) { goto L_0024A764; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x459C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    c.f[20] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 8391u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (t) { goto L_0024A62C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 1842u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0024A628; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A620u);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x0024A620u) [[unlikely]] return; }
L_0024A620:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] & 3ull;  if (t) { goto L_0024A62C; } }
L_0024A628:
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 1;
L_0024A62C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[19].w[0] - 1u);  if (t) { goto L_0024A690; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024A64C; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_0024A68C; } }
L_0024A64C:
    c.f[5] = ld32((c.r[21].w[0] + 32u));
    c.f[4] = ld32((c.r[22].w[0] + 32u));
    c.f[1] = ld32((c.r[21].w[0] + 40u));
    c.f[0] = ld32((c.r[22].w[0] + 40u));
    c.f[3] = ld32((c.r[21].w[0] + 36u));
    c.f[2] = ld32((c.r[22].w[0] + 36u));
    c.f[4] = fp::sub(c.f[5], c.f[4]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[4], c.f[4]);
    c.f[20] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A67Cu); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x0024A67Cu) [[unlikely]] return; }
L_0024A67C:
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A688u); c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x0024A688u) [[unlikely]] return; }
L_0024A688:
    c.f[20] = c.f[0];
    c.budget -= 1;
L_0024A68C:
    set32(c.r[2], c.r[19].w[0] - 1u);
    c.budget -= 1;
L_0024A690:
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[18], c.r[0], c.r[0]);  if (t) { goto L_0024A760; } }
L_0024A69C:
    set32(c.r[16], ld32((c.r[17].w[0])));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8391u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { goto L_0024A6CC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1842u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (t) { goto L_0024A6D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A6C4u);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x0024A6C4u) [[unlikely]] return; }
L_0024A6C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] & 3ull;  if (t) { goto L_0024A6D0; } }
L_0024A6CC:
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 1;
L_0024A6D0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_0024A74C; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024A6F0; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_0024A748; } }
L_0024A6F0:
    c.f[5] = ld32((c.r[16].w[0] + 32u));
    c.f[4] = ld32((c.r[22].w[0] + 32u));
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = ld32((c.r[22].w[0] + 40u));
    c.f[3] = ld32((c.r[16].w[0] + 36u));
    c.f[2] = ld32((c.r[22].w[0] + 36u));
    c.f[4] = fp::sub(c.f[5], c.f[4]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[4], c.f[4]);
    c.f[21] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A720u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x0024A720u) [[unlikely]] return; }
L_0024A720:
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A72Cu); c.f[12] = fp::add(c.facc, fp::mul(c.f[21], c.f[21]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x0024A72Cu) [[unlikely]] return; }
L_0024A72C:
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0024A748; } }
    mmi::paddub(c.r[21], c.r[16], c.r[0]);
    c.f[20] = c.f[0];
    c.budget -= 3;
L_0024A748:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0024A74C:
    set32(c.r[2], c.r[19].w[0] - 1u);
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024A69Cu | kUnwind; return; } goto L_0024A69C; } }
    c.budget -= 1;
L_0024A760:
    mmi::paddub(c.r[2], c.r[21], c.r[0]);
    c.budget -= 1;
L_0024A764:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0024A7A0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.budget -= 17;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[22], c.r[0], c.r[0]);  if (t) { goto L_0024A804; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8391u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024A804; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1842u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0024A804; } }
    set32(c.r[22], 0u + 1u);
    c.budget -= 1;
L_0024A804:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 531u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024A830; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[19], c.r[2].w[0] - 24608u);
    c.r[21].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 26312u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 24608u);
    set32(c.r[23], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[19].w[0] + 4u);  if (t) { goto L_0024A84C; } }
L_0024A830:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[19], c.r[2].w[0] - 23296u);
    c.r[21].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 26308u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 23296u);
    set32(c.r[23], ld32((c.r[2].w[0])));
    set32(c.r[19], c.r[19].w[0] + 4u);
    c.budget -= 7;
L_0024A84C:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != 0ull; c.r[2].d[0] = c.r[21].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_0024A860; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0024A9EC; } }
    c.r[2].d[0] = c.r[21].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 1;
L_0024A860:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[2], c.r[23], c.r[0]);  if (t) { goto L_0024A9EC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x459C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    c.f[20] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[23].w[0] + 8391u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (t) { goto L_0024A8A4; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[23].w[0] + 1842u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0024A8A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A898u);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x0024A898u) [[unlikely]] return; }
L_0024A898:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] & 3ull;  if (t) { goto L_0024A8A4; } }
L_0024A8A0:
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 1;
L_0024A8A4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[23].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[21].w[0] - 1u);  if (t) { goto L_0024A910; } }
    c.budget -= 2;
    { const bool t = c.r[23].d[0] == c.r[16].d[0];  if (t) { goto L_0024A90C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024A8CC; } }
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_0024A90C; } }
L_0024A8CC:
    c.f[5] = ld32((c.r[23].w[0] + 32u));
    c.f[4] = ld32((c.r[17].w[0] + 32u));
    c.f[1] = ld32((c.r[23].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    c.f[3] = ld32((c.r[23].w[0] + 36u));
    c.f[2] = ld32((c.r[17].w[0] + 36u));
    c.f[4] = fp::sub(c.f[5], c.f[4]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[4], c.f[4]);
    c.f[20] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A8FCu); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x0024A8FCu) [[unlikely]] return; }
L_0024A8FC:
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A908u); c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x0024A908u) [[unlikely]] return; }
L_0024A908:
    c.f[20] = c.f[0];
    c.budget -= 1;
L_0024A90C:
    set32(c.r[2], c.r[21].w[0] - 1u);
    c.budget -= 1;
L_0024A910:
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[20], c.r[0], c.r[0]);  if (t) { goto L_0024A9E8; } }
L_0024A91C:
    set32(c.r[18], ld32((c.r[19].w[0])));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8391u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[19], c.r[19].w[0] + 4u);  if (t) { goto L_0024A94C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1842u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (t) { goto L_0024A950; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A944u);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x0024A944u) [[unlikely]] return; }
L_0024A944:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] & 3ull;  if (t) { goto L_0024A950; } }
L_0024A94C:
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 1;
L_0024A950:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[20], c.r[20].w[0] + 1u);  goto L_0024A9D4; }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[16].d[0];  if (t) { goto L_0024A9D0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024A978; } }
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_0024A9D0; } }
L_0024A978:
    c.f[5] = ld32((c.r[18].w[0] + 32u));
    c.f[4] = ld32((c.r[17].w[0] + 32u));
    c.f[1] = ld32((c.r[18].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    c.f[3] = ld32((c.r[18].w[0] + 36u));
    c.f[2] = ld32((c.r[17].w[0] + 36u));
    c.f[4] = fp::sub(c.f[5], c.f[4]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[4], c.f[4]);
    c.f[21] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A9A8u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x0024A9A8u) [[unlikely]] return; }
L_0024A9A8:
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A9B4u); c.f[12] = fp::add(c.facc, fp::mul(c.f[21], c.f[21]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x0024A9B4u) [[unlikely]] return; }
L_0024A9B4:
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0024A9D0; } }
    mmi::paddub(c.r[23], c.r[18], c.r[0]);
    c.f[20] = c.f[0];
    c.budget -= 3;
L_0024A9D0:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_0024A9D4:
    set32(c.r[2], c.r[21].w[0] - 1u);
    c.r[2].d[0] = c.r[20].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024A91Cu | kUnwind; return; } goto L_0024A91C; } }
    c.budget -= 1;
L_0024A9E8:
    mmi::paddub(c.r[2], c.r[23], c.r[0]);
    c.budget -= 1;
L_0024A9EC:
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0024AA20:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 531u));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[21], c.r[4], c.r[0]);  if (t) { goto L_0024AA74; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[18], c.r[2].w[0] - 24608u);
    c.r[20].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 26312u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 24608u);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { goto L_0024AA90; } }
L_0024AA74:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[18], c.r[2].w[0] - 23296u);
    c.r[20].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 26308u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 23296u);
    set32(c.r[16], ld32((c.r[2].w[0])));
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.budget -= 7;
L_0024AA90:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != 0ull; c.r[2].d[0] = c.r[20].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_0024AAA4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0024ABB4; } }
    c.r[2].d[0] = c.r[20].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 1;
L_0024AAA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[2], c.r[16], c.r[0]);  if (t) { goto L_0024ABB4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x459C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    c.f[20] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[20].w[0] - 1u);  if (t) { goto L_0024AB18; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 529u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024AB14; } }
    c.f[5] = ld32((c.r[16].w[0] + 32u));
    c.f[4] = ld32((c.r[21].w[0] + 32u));
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = ld32((c.r[21].w[0] + 40u));
    c.f[3] = ld32((c.r[16].w[0] + 36u));
    c.f[2] = ld32((c.r[21].w[0] + 36u));
    c.f[4] = fp::sub(c.f[5], c.f[4]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[4], c.f[4]);
    c.f[20] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024AB04u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x0024AB04u) [[unlikely]] return; }
L_0024AB04:
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024AB10u); c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x0024AB10u) [[unlikely]] return; }
L_0024AB10:
    c.f[20] = c.f[0];
    c.budget -= 1;
L_0024AB14:
    set32(c.r[2], c.r[20].w[0] - 1u);
    c.budget -= 1;
L_0024AB18:
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[19], c.r[0], c.r[0]);  if (t) { goto L_0024ABB0; } }
L_0024AB24:
    set32(c.r[17], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { goto L_0024AB98; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 529u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_0024AB9C; }
    c.f[5] = ld32((c.r[17].w[0] + 32u));
    c.f[4] = ld32((c.r[21].w[0] + 32u));
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = ld32((c.r[21].w[0] + 40u));
    c.f[3] = ld32((c.r[17].w[0] + 36u));
    c.f[2] = ld32((c.r[21].w[0] + 36u));
    c.f[4] = fp::sub(c.f[5], c.f[4]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[4], c.f[4]);
    c.f[21] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024AB74u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x0024AB74u) [[unlikely]] return; }
L_0024AB74:
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024AB80u); c.f[12] = fp::add(c.facc, fp::mul(c.f[21], c.f[21]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x0024AB80u) [[unlikely]] return; }
L_0024AB80:
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0024AB98; } }
    mmi::paddub(c.r[16], c.r[17], c.r[0]);
    c.f[20] = c.f[0];
    c.budget -= 2;
L_0024AB98:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_0024AB9C:
    set32(c.r[2], c.r[20].w[0] - 1u);
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024AB24u | kUnwind; return; } goto L_0024AB24; } }
    c.budget -= 1;
L_0024ABB0:
    mmi::paddub(c.r[2], c.r[16], c.r[0]);
    c.budget -= 1;
L_0024ABB4:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0024ABE0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 531u));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[21], c.r[4], c.r[0]);  if (t) { goto L_0024AC34; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[18], c.r[2].w[0] - 23296u);
    c.r[20].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 26308u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 23296u);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { goto L_0024AC50; } }
L_0024AC34:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[18], c.r[2].w[0] - 24608u);
    c.r[20].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 26312u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 24608u);
    set32(c.r[16], ld32((c.r[2].w[0])));
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.budget -= 7;
L_0024AC50:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != 0ull; c.r[2].d[0] = c.r[20].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_0024AC64; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0024AD74; } }
    c.r[2].d[0] = c.r[20].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 1;
L_0024AC64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[2], c.r[16], c.r[0]);  if (t) { goto L_0024AD74; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x459C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    c.f[20] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[20].w[0] - 1u);  if (t) { goto L_0024ACD8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 529u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024ACD4; } }
    c.f[5] = ld32((c.r[16].w[0] + 32u));
    c.f[4] = ld32((c.r[21].w[0] + 32u));
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = ld32((c.r[21].w[0] + 40u));
    c.f[3] = ld32((c.r[16].w[0] + 36u));
    c.f[2] = ld32((c.r[21].w[0] + 36u));
    c.f[4] = fp::sub(c.f[5], c.f[4]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[4], c.f[4]);
    c.f[20] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024ACC4u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x0024ACC4u) [[unlikely]] return; }
L_0024ACC4:
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024ACD0u); c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x0024ACD0u) [[unlikely]] return; }
L_0024ACD0:
    c.f[20] = c.f[0];
    c.budget -= 1;
L_0024ACD4:
    set32(c.r[2], c.r[20].w[0] - 1u);
    c.budget -= 1;
L_0024ACD8:
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[19], c.r[0], c.r[0]);  if (t) { goto L_0024AD70; } }
L_0024ACE4:
    set32(c.r[17], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { goto L_0024AD58; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 529u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_0024AD5C; }
    c.f[5] = ld32((c.r[17].w[0] + 32u));
    c.f[4] = ld32((c.r[21].w[0] + 32u));
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = ld32((c.r[21].w[0] + 40u));
    c.f[3] = ld32((c.r[17].w[0] + 36u));
    c.f[2] = ld32((c.r[21].w[0] + 36u));
    c.f[4] = fp::sub(c.f[5], c.f[4]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[4], c.f[4]);
    c.f[21] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024AD34u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x0024AD34u) [[unlikely]] return; }
L_0024AD34:
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024AD40u); c.f[12] = fp::add(c.facc, fp::mul(c.f[21], c.f[21]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x0024AD40u) [[unlikely]] return; }
L_0024AD40:
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0024AD58; } }
    mmi::paddub(c.r[16], c.r[17], c.r[0]);
    c.f[20] = c.f[0];
    c.budget -= 2;
L_0024AD58:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_0024AD5C:
    set32(c.r[2], c.r[20].w[0] - 1u);
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024ACE4u | kUnwind; return; } goto L_0024ACE4; } }
    c.budget -= 1;
L_0024AD70:
    mmi::paddub(c.r[2], c.r[16], c.r[0]);
    c.budget -= 1;
L_0024AD74:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0024ADA0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 531u));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[21], c.r[4], c.r[0]);  if (t) { goto L_0024ADF4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[18], c.r[2].w[0] - 24608u);
    c.r[20].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 26312u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 24608u);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { goto L_0024AE10; } }
L_0024ADF4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[18], c.r[2].w[0] - 23296u);
    c.r[20].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 26308u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 23296u);
    set32(c.r[16], ld32((c.r[2].w[0])));
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.budget -= 7;
L_0024AE10:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != 0ull; c.r[2].d[0] = c.r[20].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_0024AE24; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0024AF34; } }
    c.r[2].d[0] = c.r[20].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 1;
L_0024AE24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[2], c.r[16], c.r[0]);  if (t) { goto L_0024AF34; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x459C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    c.f[20] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[20].w[0] - 1u);  if (t) { goto L_0024AE98; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8391u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024AE94; } }
    c.f[5] = ld32((c.r[16].w[0] + 32u));
    c.f[4] = ld32((c.r[21].w[0] + 32u));
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = ld32((c.r[21].w[0] + 40u));
    c.f[3] = ld32((c.r[16].w[0] + 36u));
    c.f[2] = ld32((c.r[21].w[0] + 36u));
    c.f[4] = fp::sub(c.f[5], c.f[4]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[4], c.f[4]);
    c.f[20] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024AE84u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x0024AE84u) [[unlikely]] return; }
L_0024AE84:
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024AE90u); c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x0024AE90u) [[unlikely]] return; }
L_0024AE90:
    c.f[20] = c.f[0];
    c.budget -= 1;
L_0024AE94:
    set32(c.r[2], c.r[20].w[0] - 1u);
    c.budget -= 1;
L_0024AE98:
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[19], c.r[0], c.r[0]);  if (t) { goto L_0024AF30; } }
L_0024AEA4:
    set32(c.r[17], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { goto L_0024AF18; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8391u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_0024AF1C; }
    c.f[5] = ld32((c.r[17].w[0] + 32u));
    c.f[4] = ld32((c.r[21].w[0] + 32u));
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = ld32((c.r[21].w[0] + 40u));
    c.f[3] = ld32((c.r[17].w[0] + 36u));
    c.f[2] = ld32((c.r[21].w[0] + 36u));
    c.f[4] = fp::sub(c.f[5], c.f[4]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[4], c.f[4]);
    c.f[21] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024AEF4u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x0024AEF4u) [[unlikely]] return; }
L_0024AEF4:
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024AF00u); c.f[12] = fp::add(c.facc, fp::mul(c.f[21], c.f[21]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x0024AF00u) [[unlikely]] return; }
L_0024AF00:
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0024AF18; } }
    mmi::paddub(c.r[16], c.r[17], c.r[0]);
    c.f[20] = c.f[0];
    c.budget -= 2;
L_0024AF18:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_0024AF1C:
    set32(c.r[2], c.r[20].w[0] - 1u);
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024AEA4u | kUnwind; return; } goto L_0024AEA4; } }
    c.budget -= 1;
L_0024AF30:
    mmi::paddub(c.r[2], c.r[16], c.r[0]);
    c.budget -= 1;
L_0024AF34:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0024AF60:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 531u));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[21], c.r[4], c.r[0]);  if (t) { goto L_0024AFB4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[18], c.r[2].w[0] - 24608u);
    c.r[20].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 26312u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 24608u);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { goto L_0024AFD0; } }
L_0024AFB4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[18], c.r[2].w[0] - 23296u);
    c.r[20].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 26308u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 23296u);
    set32(c.r[16], ld32((c.r[2].w[0])));
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.budget -= 7;
L_0024AFD0:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != 0ull; c.r[2].d[0] = c.r[20].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_0024AFE4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0024B0F4; } }
    c.r[2].d[0] = c.r[20].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 1;
L_0024AFE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[2], c.r[16], c.r[0]);  if (t) { goto L_0024B0F4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x459C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    c.f[20] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[20].w[0] - 1u);  if (t) { goto L_0024B058; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8391u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024B054; } }
    c.f[5] = ld32((c.r[16].w[0] + 32u));
    c.f[4] = ld32((c.r[21].w[0] + 32u));
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = ld32((c.r[21].w[0] + 40u));
    c.f[3] = ld32((c.r[16].w[0] + 36u));
    c.f[2] = ld32((c.r[21].w[0] + 36u));
    c.f[4] = fp::sub(c.f[5], c.f[4]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[4], c.f[4]);
    c.f[20] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B044u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x0024B044u) [[unlikely]] return; }
L_0024B044:
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B050u); c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x0024B050u) [[unlikely]] return; }
L_0024B050:
    c.f[20] = c.f[0];
    c.budget -= 1;
L_0024B054:
    set32(c.r[2], c.r[20].w[0] - 1u);
    c.budget -= 1;
L_0024B058:
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[19], c.r[0], c.r[0]);  if (t) { goto L_0024B0F0; } }
L_0024B064:
    set32(c.r[17], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { goto L_0024B0D8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8391u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_0024B0DC; }
    c.f[5] = ld32((c.r[17].w[0] + 32u));
    c.f[4] = ld32((c.r[21].w[0] + 32u));
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = ld32((c.r[21].w[0] + 40u));
    c.f[3] = ld32((c.r[17].w[0] + 36u));
    c.f[2] = ld32((c.r[21].w[0] + 36u));
    c.f[4] = fp::sub(c.f[5], c.f[4]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[4], c.f[4]);
    c.f[21] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B0B4u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x0024B0B4u) [[unlikely]] return; }
L_0024B0B4:
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B0C0u); c.f[12] = fp::add(c.facc, fp::mul(c.f[21], c.f[21]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x0024B0C0u) [[unlikely]] return; }
L_0024B0C0:
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0024B0D8; } }
    mmi::paddub(c.r[16], c.r[17], c.r[0]);
    c.f[20] = c.f[0];
    c.budget -= 2;
L_0024B0D8:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_0024B0DC:
    set32(c.r[2], c.r[20].w[0] - 1u);
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024B064u | kUnwind; return; } goto L_0024B064; } }
    c.budget -= 1;
L_0024B0F0:
    mmi::paddub(c.r[2], c.r[16], c.r[0]);
    c.budget -= 1;
L_0024B0F4:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0024B120:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[5], c.r[17].w[0] + 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[6], c.r[29].w[0] + 64u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B144u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0045(c, 218u, depth + 1u); else { c.pc = 0x00217E60u; return; } if (c.pc != 0x0024B144u) [[unlikely]] return; }
L_0024B144:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B14Cu);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x0024B14Cu) [[unlikely]] return; }
L_0024B14C:
    set32(c.r[2], ld32((c.r[17].w[0] + 88u)));
    c.r[3].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B15Cu); c.r[4].d[0] = c.r[2].d[0] & c.r[3].d[0];  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x0024B15Cu) [[unlikely]] return; }
L_0024B15C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B164u); c.r[4].d[0] = ld16((c.r[17].w[0] + 84u));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x0024B164u) [[unlikely]] return; }
L_0024B164:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B16Cu); c.r[4].d[0] = ld16((c.r[17].w[0] + 80u));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x0024B16Cu) [[unlikely]] return; }
L_0024B16C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B17Cu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 210u, depth + 1u); else { c.pc = 0x00102500u; return; } if (c.pc != 0x0024B17Cu) [[unlikely]] return; }
L_0024B17C:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B188u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x0024B188u) [[unlikely]] return; }
L_0024B188:
    set32(c.r[16], c.r[29].w[0] + 68u);
    c.f[0] = ld32((c.r[29].w[0] + 72u));
    c.f[1] = ld32((c.r[16].w[0]));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B1A0u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x0024B1A0u) [[unlikely]] return; }
L_0024B1A0:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x38D10000u);  if (t) { goto L_0024B1CC; } }
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0024B1D4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x38D10000u);
    c.budget -= 1;
L_0024B1CC:
    c.r[2].d[0] = c.r[2].d[0] | 46871ull;
    c.f[0] = c.r[2].w[0];
    c.budget -= 2;
L_0024B1D4:
    c.f[1] = ld32((c.r[16].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 84u)));
    fpu_div(c, 20u, c.f[1], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B1F0u);  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x0024B1F0u) [[unlikely]] return; }
L_0024B1F0:
    c.f[2] = ld32((c.r[17].w[0] + 104u));
    c.f[1] = ld32((c.r[17].w[0] + 32u));
    c.f[2] = fp::mul(c.f[2], c.f[20]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 32u), c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B210u); set32(c.r[4], ld32((c.r[17].w[0] + 84u)));  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x0024B210u) [[unlikely]] return; }
L_0024B210:
    c.f[2] = ld32((c.r[17].w[0] + 104u));
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    set32(c.r[5], c.r[17].w[0] + 32u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.f[2] = fp::mul(c.f[2], c.f[20]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B234u); st32((c.r[17].w[0] + 40u), c.f[0]);  if (depth < kMaxDepth) unit_0045(c, 199u, depth + 1u); else { c.pc = 0x00217650u; return; } if (c.pc != 0x0024B234u) [[unlikely]] return; }
L_0024B234:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0024B250:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B268u); set32(c.r[4], ld32((c.r[4].w[0] + 84u)));  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x0024B268u) [[unlikely]] return; }
L_0024B268:
    c.f[2] = ld32((c.r[16].w[0] + 104u));
    c.f[1] = ld32((c.r[16].w[0] + 32u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 32u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 52u));
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 36u), c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B294u); set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x0024B294u) [[unlikely]] return; }
L_0024B294:
    c.f[2] = ld32((c.r[16].w[0] + 104u));
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 40u), c.f[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0024B2C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B2DCu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x0024B2DCu) [[unlikely]] return; }
L_0024B2DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B2E4u); set32(c.r[4], c.r[18].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 330u, depth + 1u); else { c.pc = 0x0013BF40u; return; } if (c.pc != 0x0024B2E4u) [[unlikely]] return; }
L_0024B2E4:
    set32(c.r[16], c.r[29].w[0] + 68u);
    st32((c.r[29].w[0] + 64u), 0u);
    st32((c.r[16].w[0]), 0u);
    c.f[0] = ld32((c.r[18].w[0] + 104u));
    set32(c.r[17], c.r[29].w[0] + 72u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B308u); st32((c.r[17].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x0024B308u) [[unlikely]] return; }
L_0024B308:
    c.f[1] = ld32((c.r[18].w[0] + 32u));
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[1] = ld32((c.r[18].w[0] + 36u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0]));
    c.f[1] = ld32((c.r[18].w[0] + 40u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 40u), c.f[0]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0024B350:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 84u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B370u); c.f[20] = c.f[12];  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x0024B370u) [[unlikely]] return; }
L_0024B370:
    c.f[1] = fp::mul(c.f[20], c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B388u); set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x0024B388u) [[unlikely]] return; }
L_0024B388:
    c.f[1] = fp::mul(c.f[20], c.f[0]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45FA0000u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    set32(c.r[16], c.r[29].w[0] + 52u);
    st32((c.r[29].w[0] + 56u), c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B3B0u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0045(c, 199u, depth + 1u); else { c.pc = 0x00217650u; return; } if (c.pc != 0x0024B3B0u) [[unlikely]] return; }
L_0024B3B0:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0]), c.f[0]);  if (t) { goto L_0024B3CC; } }
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_0024B3CC:
    c.f[0] = ld32((c.r[16].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0024B3F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = ld32((c.r[4].w[0] + 32u));
    c.f[2] = fp::add(c.f[0], c.f[12]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[2]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0024B430; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44F00000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[12]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0024B440; } }
L_0024B430:
    c.f[0] = ld32((c.r[4].w[0] + 128u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 32u), c.f[0]);  if (t) { goto L_0024B478; } }
L_0024B440:
    c.f[1] = ld32((c.r[4].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[2]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0024B464; } }
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0024B478; } }
L_0024B464:
    c.f[0] = ld32((c.r[4].w[0] + 136u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 40u), c.f[0]);  if (t) { goto L_0024B478; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_0024B478:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024B480:
    set32(c.r[29], c.r[29].w[0] - 240u);
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
    set32(c.r[5], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[8], c.r[3].w[0] + 26144u);
    set32(c.r[7], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[20], c.r[29].w[0] + 232u);
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 6u)));
    set32(c.r[19], c.r[29].w[0] + 236u);
    set32(c.r[21], c.r[29].w[0] + 228u);
    mmi::paddub(c.r[3], c.r[0], c.r[0]);
    set32(c.r[9], c.r[10].w[0] << 5);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    set32(c.r[9], c.r[9].w[0] << 8);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    mmi::paddub(c.r[5], c.r[19], c.r[0]);
    mmi::paddub(c.r[6], c.r[20], c.r[0]);
    st32((c.r[29].w[0] + 160u), c.r[8].w[0]);
    mmi::paddub(c.r[12], c.r[21], c.r[0]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[11], c.r[8].w[0] - 7888u);
    c.budget -= 31;
L_0024B4FC:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 256u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[8].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[9], c.r[9].w[0] << 3);
    set32(c.r[9], c.r[11].w[0] + c.r[9].w[0]);
    set32(c.r[9], c.r[4].w[0] + c.r[9].w[0]);
    set32(c.r[16], ld32((c.r[9].w[0])));
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    set32(c.r[9], c.r[10].w[0] << 4);
    set32(c.r[9], c.r[9].w[0] - c.r[10].w[0]);
    set32(c.r[9], c.r[9].w[0] << 2);
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[9].w[0]));
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[12].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[5], c.r[5].w[0] + 2u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 21;
    { const bool t = c.r[8].d[0] != 0ull; set32(c.r[12], c.r[12].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024B4FCu | kUnwind; return; } goto L_0024B4FC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 21976u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] - 7888u);
    set32(c.r[6], ld32((c.r[28].w[0] - 26300u)));
    st32((c.r[29].w[0] + 176u), c.r[3].w[0]);
    set32(c.r[30], c.r[29].w[0] + 216u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 21975u)));
    set32(c.r[18], c.r[29].w[0] + 208u);
    set32(c.r[23], c.r[29].w[0] + 220u);
    mmi::paddub(c.r[22], c.r[0], c.r[0]);
    set32(c.r[3], c.r[5].w[0] - c.r[4].w[0]);
    st8((c.r[29].w[0] + 224u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[4].w[0] - c.r[5].w[0]);
    st8((c.r[29].w[0] + 225u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 296u)));
    set32(c.r[3], c.r[29].w[0] + 224u);
    st32((c.r[29].w[0] + 192u), c.r[3].w[0]);
    st16((c.r[29].w[0] + 216u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 290u)));
    st16((c.r[29].w[0] + 218u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 24;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0])));  if (t) { goto L_0024B96C; } }
L_0024B5B0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024B928; } }
    set32(c.r[8], ld32((c.r[28].w[0] - 26300u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 228u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 229u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 266u)));
    set32(c.r[4], c.r[8].w[0] + 272u);
    set32(c.r[3], c.r[8].w[0] + 280u);
    set32(c.r[6], c.r[7].w[0] - c.r[6].w[0]);
    st8((c.r[29].w[0] + 220u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 267u)));
    set32(c.r[5], c.r[6].w[0] - c.r[5].w[0]);
    st32((c.r[29].w[0] + 208u), c.r[4].w[0]);
    st8((c.r[29].w[0] + 221u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[29].w[0] + 212u), c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 256u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 264u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 265u)));
    set32(c.r[7], c.r[5].w[0] << 3);
    set32(c.r[5], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[5].w[0] << 4);
    set32(c.r[17], c.r[16].w[0] + c.r[6].w[0]);
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 12u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 14u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 6u)));
    set32(c.r[5], c.r[4].w[0] + c.r[3].w[0]);
    c.r[8].d[0] = c.r[8].d[0] << 56;
    c.r[6].d[0] = c.r[6].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    c.r[9].d[0] = c.r[7].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 4));
    c.r[7].d[0] = c.r[5].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 4));
    c.r[5].d[0] = c.r[5].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    c.budget -= 41;
    { const bool t = c.r[9].d[0] != 0ull; c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);  if (t) { goto L_0024B928; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 21976u)));
    c.r[1].d[0] = c.r[10].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0024B928; } }
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[1].d[0] = c.r[9].sd[0] < c.r[10].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);  if (t) { goto L_0024B928; } }
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 21975u)));
    c.r[1].d[0] = c.r[10].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0024B928; } }
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    c.r[1].d[0] = c.r[9].sd[0] < c.r[10].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0024B928; } }
    set32(c.r[9], ld32((c.r[29].w[0] + 192u)));
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8u)));
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0])));
    c.r[1].d[0] = c.r[10].sd[0] < c.r[11].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0024B928; } }
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 9u)));
    c.r[9].d[0] = c.r[9].sd[0] < c.r[10].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[9].d[0] != 0ull;  if (t) { goto L_0024B928; } }
    c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 10u)));
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[30].w[0])));
    c.r[9].d[0] = c.r[10].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[9].d[0] != 0ull;  if (t) { goto L_0024B928; } }
    c.r[7].d[0] = c.r[7].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    c.r[1].d[0] = c.r[4].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; c.r[7].d[0] = c.r[8].d[0] & 15ull;  if (t) { goto L_0024B928; } }
    c.r[7].d[0] = c.r[7].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    c.r[4].d[0] = c.r[7].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull; c.r[4].d[0] = c.r[5].d[0] << 56;  if (t) { goto L_0024B928; } }
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[4].d[0] = c.r[6].d[0] & 15ull;  if (t) { goto L_0024B928; } }
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024B928; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 16u)));
    c.r[4].d[0] = c.r[5].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; mmi::paddub(c.r[3], c.r[0], c.r[0]);  if (t) { goto L_0024B76C; } }
    set32(c.r[6], c.r[5].w[0] << 1);
    set32(c.r[5], ld32((c.r[18].w[0])));
    set32(c.r[4], 0u - 1u);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    st32((c.r[18].w[0]), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_0024B798; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0024B798; } }
L_0024B76C:
    set32(c.r[4], ld32((c.r[18].w[0])));
    set32(c.r[4], c.r[4].w[0] + 4u);
    st32((c.r[18].w[0]), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0])));
    set32(c.r[5], ld32((c.r[17].w[0] + 16u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[5].d[0] = c.r[5].d[0] & 127ull;
    c.budget -= 9;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_0024B798; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 2;
L_0024B798:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0024B928; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 7u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[23].w[0])));
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 4));
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].d[0] = c.r[5].d[0] & 15ull;  if (t) { goto L_0024B928; } }
    c.r[4].d[0] = c.r[3].d[0] << 56;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0])));
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024B928; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B7E0u);  if (depth < kMaxDepth) unit_0052(c, 249u, depth + 1u); else { c.pc = 0x0024B9E0u; return; } if (c.pc != 0x0024B7E0u) [[unlikely]] return; }
L_0024B7E0:
    c.r[4].d[0] = c.r[2].d[0] << 56;
    set32(c.r[3], 0u + 255u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x00730000u);  if (t) { goto L_0024B928; } }
    set32(c.r[3], c.r[3].w[0] - 14288u);
    set32(c.r[4], c.r[4].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[7], 0u + 1u);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[7].w[0]));
    set32(c.r[6], ld32((c.r[18].w[0])));
    set32(c.r[4], c.r[3].w[0] + 2u);
    set32(c.r[5], c.r[6].w[0] + 1u);
    st32((c.r[18].w[0]), c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    st16((c.r[3].w[0] + 2u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    st16((c.r[3].w[0] + 14u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[3].w[0] + 4u), static_cast<std::uint16_t>(c.r[22].w[0]));
    c.f[3] = ld32((c.r[17].w[0] + 32u));
    c.f[2] = ld32((c.r[17].w[0] + 36u));
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 44u));
    st32((c.r[3].w[0] + 16u), c.f[3]);
    st32((c.r[3].w[0] + 20u), c.f[2]);
    st32((c.r[3].w[0] + 24u), c.f[1]);
    st32((c.r[3].w[0] + 28u), c.f[0]);
    st16((c.r[3].w[0] + 8u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 30u)));
    c.budget -= 27;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[8], c.r[3].w[0] + 4u);  if (t) { goto L_0024B868; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 6u), static_cast<std::uint16_t>(c.r[7].w[0]));  if (t) { goto L_0024B878; } }
L_0024B868:
    st16((c.r[3].w[0] + 6u), static_cast<std::uint16_t>(0u));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0])));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 4;
L_0024B878:
    set32(c.r[5], ld32((c.r[29].w[0] + 160u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0])));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8389u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[6].d[0];  if (t) { goto L_0024B8DC; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 26300u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 332u)));
    st16((c.r[3].w[0] + 10u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 332u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[6].w[0] + 332u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    c.r[4].d[0] = c.r[5].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[4], 0u + 33u);  if (t) { goto L_0024B8C0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_0024B928; } }
    c.budget -= 1;
L_0024B8C0:
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 334u)));
    st16((c.r[3].w[0] + 12u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 334u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 334u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0024B928; } }
L_0024B8DC:
    set32(c.r[6], ld32((c.r[28].w[0] - 26300u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 333u)));
    st16((c.r[3].w[0] + 10u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 333u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[6].w[0] + 333u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    c.r[4].d[0] = c.r[5].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[4], 0u + 33u);  if (t) { goto L_0024B910; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_0024B928; } }
    c.budget -= 1;
L_0024B910:
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 335u)));
    st16((c.r[3].w[0] + 12u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 335u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[5].w[0] + 335u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_0024B928:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    st16((c.r[19].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0])));
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    st16((c.r[19].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 16;
L_0024B968:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0])));
    c.budget -= 1;
L_0024B96C:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024B5B0u | kUnwind; return; } goto L_0024B5B0; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[22], c.r[22].w[0] + 1u);
    set32(c.r[19], c.r[19].w[0] + 2u);
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    st32((c.r[29].w[0] + 176u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[30], c.r[30].w[0] + 2u);
    set32(c.r[18], c.r[18].w[0] + 4u);
    set32(c.r[23], c.r[23].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 192u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[22].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[21], c.r[21].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024B968u | kUnwind; return; } goto L_0024B968; } }
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_0024B9E0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[4], c.r[3].w[0] - 14288u);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 3;
L_0024B9EC:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], c.r[2].w[0] + 1u);  goto L_0024BA04; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024BA14; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 1;
L_0024BA04:
    c.r[3].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024B9ECu | kUnwind; return; } goto L_0024B9EC; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_0024BA14:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024BA20:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 6;
L_0024BA38:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 1));  if (t) { goto L_0024BA48; } }
    set32(c.r[2], c.r[16].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_0024BA48:
    set32(c.r[3], c.r[2].w[0] << 4);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 10688u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    set32(c.r[5], c.r[29].w[0] + 48u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    st32((c.r[5].w[0]), c.f[3]);
    st32((c.r[5].w[0] + 4u), c.f[2]);
    st32((c.r[5].w[0] + 8u), c.f[1]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024BA84u); st32((c.r[5].w[0] + 12u), c.f[0]);  if (depth < kMaxDepth) unit_004C(c, 283u, depth + 1u); else { c.pc = 0x002335D0u; return; } if (c.pc != 0x0024BA84u) [[unlikely]] return; }
L_0024BA84:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024BA38u | kUnwind; return; } goto L_0024BA38; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    set32(c.r[3], 0u + 16u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0024BAE8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[17].w[0] + 32u);  if (t) { goto L_0024BAE0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 640u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024BADC; } }
    set32(c.r[5], 0u + 9u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024BAD4u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x00197670u; return; } if (c.pc != 0x0024BAD4u) [[unlikely]] return; }
L_0024BAD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_0024BAEC; } }
L_0024BADC:
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 1;
L_0024BAE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024BAE8u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_0025(c, 323u, depth + 1u); else { c.pc = 0x00197790u; return; } if (c.pc != 0x0024BAE8u) [[unlikely]] return; }
L_0024BAE8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0024BAEC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0024BB00:
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[10], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[11].d[0] == c.r[10].d[0];  if (t) { goto L_0024BDAC; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[11].d[0] == c.r[3].d[0];  if (t) { goto L_0024BD18; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[11].d[0] == c.r[3].d[0];  if (t) { goto L_0024BC68; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[11].d[0] == c.r[3].d[0];  if (t) { goto L_0024BBB0; } }
    c.budget -= 2;
    { const bool t = c.r[11].d[0] == 0ull;  if (t) { goto L_0024BB44; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024BDAC; } }
L_0024BB44:
    c.f[1] = ld32((c.r[4].w[0] + 160u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (t) { goto L_0024BB70; } }
    c.f[0] = ld32((c.r[4].w[0] + 104u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 160u), c.f[0]);  if (t) { goto L_0024BB74; } }
L_0024BB70:
    mmi::paddub(c.r[6], c.r[3], c.r[0]);
    c.budget -= 1;
L_0024BB74:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0024BDAC; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 84u)));
    c.r[1].d[0] = 0ull | 32769ull;
    set32(c.r[3], c.r[5].w[0] - c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_0024BBA8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0024BDAC; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_0024BBA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0024BDAC; } }
L_0024BBB0:
    set32(c.r[3], ld32((c.r[4].w[0] + 84u)));
    c.r[7].d[0] = c.r[7].d[0] << 48;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    set32(c.r[3], c.r[5].w[0] - c.r[3].w[0]);
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[7].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u + 3u);  if (t) { goto L_0024BBE8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[3].w[0] - c.r[7].w[0]);
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024BBF0; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 1;
L_0024BBE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0024BDAC; } }
L_0024BBF0:
    set32(c.r[5], ld32((c.r[4].w[0] + 96u)));
    c.r[3].d[0] = c.r[5].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[6].d[0] << 48;  if (t) { goto L_0024BC0C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 96u), c.r[7].w[0]);  if (t) { goto L_0024BC18; } }
    c.r[3].d[0] = c.r[6].d[0] << 48;
    c.budget -= 1;
L_0024BC0C:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 3;
L_0024BC18:
    set32(c.r[6], ld32((c.r[4].w[0] + 88u)));
    c.r[3].d[0] = c.r[9].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[5], c.r[5].w[0] - c.r[3].w[0]);
    c.r[1].d[0] = c.r[5].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].d[0] = c.r[8].d[0] << 48;  if (t) { goto L_0024BC58; } }
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[6].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024BC54; } }
    st32((c.r[4].w[0] + 88u), c.r[5].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 100u), 0u);  if (t) { goto L_0024BDAC; } }
L_0024BC54:
    c.r[3].d[0] = c.r[8].d[0] << 48;
    c.budget -= 1;
L_0024BC58:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[3], 0u - c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 100u), c.r[3].w[0]);  if (t) { goto L_0024BDAC; } }
L_0024BC68:
    set32(c.r[3], ld32((c.r[4].w[0] + 84u)));
    c.r[7].d[0] = c.r[7].d[0] << 48;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    set32(c.r[3], c.r[5].w[0] - c.r[3].w[0]);
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[7].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u + 3u);  if (t) { goto L_0024BCA0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[3].w[0] - c.r[7].w[0]);
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024BCA8; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 1;
L_0024BCA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0024BDAC; } }
L_0024BCA8:
    set32(c.r[5], ld32((c.r[4].w[0] + 96u)));
    set32(c.r[3], 0u - c.r[7].w[0]);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] != 0ull) { c.r[3].d[0] = c.r[6].d[0] << 48;  goto L_0024BCC8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_0024BCD4; } }
    c.r[3].d[0] = c.r[6].d[0] << 48;
    c.budget -= 1;
L_0024BCC8:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[3], c.r[5].w[0] - c.r[3].w[0]);
    st32((c.r[4].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 3;
L_0024BCD4:
    set32(c.r[5], ld32((c.r[4].w[0] + 88u)));
    c.r[6].d[0] = c.r[9].d[0] << 48;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.r[3].d[0] = c.r[5].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[8].d[0] << 48;  if (t) { goto L_0024BD0C; } }
    c.r[1].d[0] = 0ull | 32769ull;
    c.r[1].d[0] = c.r[5].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0024BD08; } }
    st32((c.r[4].w[0] + 88u), c.r[6].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 100u), 0u);  if (t) { goto L_0024BDAC; } }
L_0024BD08:
    c.r[3].d[0] = c.r[8].d[0] << 48;
    c.budget -= 1;
L_0024BD0C:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 100u), c.r[3].w[0]);  if (t) { goto L_0024BDAC; } }
L_0024BD18:
    set32(c.r[5], ld32((c.r[4].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] <= 0;  if (t) { goto L_0024BD64; } }
    c.r[3].d[0] = c.r[6].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[3], c.r[5].w[0] - c.r[3].w[0]);
    st32((c.r[4].w[0] + 96u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 96u)));
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0; c.r[3].d[0] = c.r[8].d[0] << 48;  if (t) { goto L_0024BD58; } }
    st32((c.r[4].w[0] + 96u), 0u);
    st32((c.r[4].w[0] + 88u), 0u);
    st32((c.r[4].w[0] + 100u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[10].w[0]));  if (t) { goto L_0024BDAC; } }
    c.r[3].d[0] = c.r[8].d[0] << 48;
    c.budget -= 1;
L_0024BD58:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 100u), c.r[3].w[0]);  if (t) { goto L_0024BDAC; } }
L_0024BD64:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_0024BDAC; } }
    c.r[3].d[0] = c.r[6].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0] + 96u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 96u)));
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] < 0; c.r[3].d[0] = c.r[8].d[0] << 48;  if (t) { goto L_0024BDA0; } }
    st32((c.r[4].w[0] + 96u), 0u);
    st32((c.r[4].w[0] + 88u), 0u);
    st32((c.r[4].w[0] + 100u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[10].w[0]));  if (t) { goto L_0024BDAC; } }
    c.r[3].d[0] = c.r[8].d[0] << 48;
    c.budget -= 1;
L_0024BDA0:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[3], 0u - c.r[3].w[0]);
    st32((c.r[4].w[0] + 100u), c.r[3].w[0]);
    c.budget -= 3;
L_0024BDAC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024BDC0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 20u), c.f[25]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[25] = c.f[12];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[12] = c.r[2].w[0];
    c.f[24] = c.f[13];
    c.f[23] = c.f[14];
    c.f[22] = c.f[15];
    mmi::paddub(c.r[19], c.r[5], c.r[0]);
    mmi::paddub(c.r[18], c.r[6], c.r[0]);
    c.f[21] = c.f[16];
    c.f[20] = c.f[17];
    mmi::paddub(c.r[17], c.r[7], c.r[0]);
    mmi::paddub(c.r[16], c.r[8], c.r[0]);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024BE30u); mmi::paddub(c.r[20], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0052(c, 239u, depth + 1u); else { c.pc = 0x0024B350u; return; } if (c.pc != 0x0024BE30u) [[unlikely]] return; }
L_0024BE30:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x45FA0000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0024BFFC; } }
    c.f[2] = ld32((c.r[20].w[0] + 36u));
    c.f[1] = fp::add(c.f[0], c.f[25]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = fp::add(c.f[0], c.f[24]);  goto L_0024BECC; }
    st32((c.r[20].w[0] + 68u), c.f[23]);
    c.f[0] = ld32((c.r[20].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[22]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0024BE84; } }
    st32((c.r[20].w[0] + 52u), c.f[22]);
    st32((c.r[20].w[0] + 68u), 0u);
    c.budget -= 2;
L_0024BE84:
    c.f[1] = ld32((c.r[20].w[0] + 68u));
    c.f[0] = ld32((c.r[20].w[0] + 52u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[20].w[0] + 52u), c.f[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 80u)));
    c.r[1].d[0] = c.r[19].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0024BEC0; } }
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024BEC0; } }
    st32((c.r[20].w[0] + 80u), c.r[19].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 92u), 0u);  if (t) { goto L_0024BFFC; } }
L_0024BEC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 92u), c.r[18].w[0]);  if (t) { goto L_0024BFFC; } }
    c.f[0] = fp::add(c.f[0], c.f[24]);
    c.budget -= 1;
L_0024BECC:
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0024BF40; } }
    st32((c.r[20].w[0] + 68u), c.f[21]);
    c.f[0] = ld32((c.r[20].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0024BEFC; } }
    st32((c.r[20].w[0] + 52u), c.f[20]);
    st32((c.r[20].w[0] + 68u), 0u);
    c.budget -= 2;
L_0024BEFC:
    c.f[1] = ld32((c.r[20].w[0] + 68u));
    c.f[0] = ld32((c.r[20].w[0] + 52u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[20].w[0] + 52u), c.f[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 80u)));
    c.r[3].d[0] = c.r[4].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024BF38; } }
    c.r[1].d[0] = 0ull | 32769ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0024BF38; } }
    st32((c.r[20].w[0] + 80u), c.r[17].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 92u), 0u);  if (t) { goto L_0024BFFC; } }
L_0024BF38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 92u), c.r[16].w[0]);  if (t) { goto L_0024BFFC; } }
L_0024BF40:
    c.f[0] = ld32((c.r[20].w[0] + 52u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0024BF84; } }
    st32((c.r[20].w[0] + 68u), c.f[21]);
    c.f[0] = ld32((c.r[20].w[0] + 52u));
    c.f[0] = fp::add(c.f[0], c.f[21]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[20].w[0] + 52u), c.f[0]);  if (t) { goto L_0024BFB8; } }
    st32((c.r[20].w[0] + 52u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 68u), 0u);  if (t) { goto L_0024BFB8; } }
L_0024BF84:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0024BFB8; } }
    st32((c.r[20].w[0] + 68u), c.f[23]);
    c.f[0] = ld32((c.r[20].w[0] + 52u));
    c.f[0] = fp::add(c.f[0], c.f[23]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[20].w[0] + 52u), c.f[0]);  if (t) { goto L_0024BFB8; } }
    st32((c.r[20].w[0] + 52u), 0u);
    st32((c.r[20].w[0] + 68u), 0u);
    c.budget -= 2;
L_0024BFB8:
    set32(c.r[4], ld32((c.r[20].w[0] + 80u)));
    c.r[3].d[0] = c.r[18].d[0] & 65535ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0024BFD8; } }
    c.r[1].d[0] = c.r[16].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].d[0] = 0ull | 32768ull;  if (t) { goto L_0024BFE4; } }
L_0024BFD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 92u), 0u);  if (t) { goto L_0024BFFC; } }
    c.r[1].d[0] = 0ull | 32768ull;
    c.budget -= 1;
L_0024BFE4:
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0024BFF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 92u), c.r[18].w[0]);  if (t) { goto L_0024BFFC; } }
L_0024BFF8:
    st32((c.r[20].w[0] + 92u), c.r[16].w[0]);
    c.budget -= 1;
L_0024BFFC:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    c.budget -= 1;
    [[clang::musttail]] return unit_0053(c, 1u, depth);
}

}
