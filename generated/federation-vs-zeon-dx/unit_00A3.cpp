#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00A3[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    3, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 9, 0, 0, 0, 0, 0, 10, 0, 11, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 13, 0, 0, 0, 0, 0, 14, 0, 15, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 20, 0, 0, 0,
    0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 27, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0,
    0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 40, 0, 0, 0, 41, 0, 42, 0, 0, 0, 0, 0, 43, 0, 0, 0, 44, 0, 45, 0, 46, 0, 47, 0, 48, 0, 0, 0,
    49, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 55, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0,
    0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0,
    0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    83, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0,
    94, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0,
    101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 113, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 134,
    0, 0, 0, 135, 0, 0, 0, 136, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 156, 0,
    0, 0, 157, 0, 0, 0, 158, 0, 159, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 163, 0, 0, 0, 164, 0, 0,
    0, 165, 0, 166, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 172, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0,
    0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 199, 0, 0, 200, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 207, 0, 208, 0, 209, 0, 210, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 214, 0, 215, 0, 216, 0, 217, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 221, 222, 223, 224, 225, 226, 227, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0,
    230, 0, 0, 0, 231, 0, 0, 0, 232, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 235, 0, 0, 236, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0,
};

void unit_00A3(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0038C000;
    case 2u: goto L_0038C040;
    case 3u: goto L_0038C080;
    case 4u: goto L_0038C090;
    case 5u: goto L_0038C160;
    case 6u: goto L_0038C1A8;
    case 7u: goto L_0038C1C0;
    case 8u: goto L_0038C29C;
    case 9u: goto L_0038C2A8;
    case 10u: goto L_0038C2C0;
    case 11u: goto L_0038C2C8;
    case 12u: goto L_0038C2D4;
    case 13u: goto L_0038C404;
    case 14u: goto L_0038C41C;
    case 15u: goto L_0038C424;
    case 16u: goto L_0038C430;
    case 17u: goto L_0038C450;
    case 18u: goto L_0038C4B8;
    case 19u: goto L_0038C564;
    case 20u: goto L_0038C570;
    case 21u: goto L_0038C58C;
    case 22u: goto L_0038C5CC;
    case 23u: goto L_0038C5E0;
    case 24u: goto L_0038C718;
    case 25u: goto L_0038C72C;
    case 26u: goto L_0038C760;
    case 27u: goto L_0038C888;
    case 28u: goto L_0038C89C;
    case 29u: goto L_0038C8F8;
    case 30u: goto L_0038C910;
    case 31u: goto L_0038C980;
    case 32u: goto L_0038C9B0;
    case 33u: goto L_0038C9E0;
    case 34u: goto L_0038CA30;
    case 35u: goto L_0038CA40;
    case 36u: goto L_0038CA8C;
    case 37u: goto L_0038CAA8;
    case 38u: goto L_0038CABC;
    case 39u: goto L_0038CAE4;
    case 40u: goto L_0038CB10;
    case 41u: goto L_0038CB20;
    case 42u: goto L_0038CB28;
    case 43u: goto L_0038CB40;
    case 44u: goto L_0038CB50;
    case 45u: goto L_0038CB58;
    case 46u: goto L_0038CB60;
    case 47u: goto L_0038CB68;
    case 48u: goto L_0038CB70;
    case 49u: goto L_0038CB80;
    case 50u: goto L_0038CB90;
    case 51u: goto L_0038CBC4;
    case 52u: goto L_0038CC48;
    case 53u: goto L_0038CC5C;
    case 54u: goto L_0038CCE0;
    case 55u: goto L_0038CCF0;
    case 56u: goto L_0038CD58;
    case 57u: goto L_0038CE1C;
    case 58u: goto L_0038CE40;
    case 59u: goto L_0038CEAC;
    case 60u: goto L_0038CEBC;
    case 61u: goto L_0038CFA8;
    case 62u: goto L_0038CFBC;
    case 63u: goto L_0038D014;
    case 64u: goto L_0038D0E0;
    case 65u: goto L_0038D104;
    case 66u: goto L_0038D13C;
    case 67u: goto L_0038D144;
    case 68u: goto L_0038D1C8;
    case 69u: goto L_0038D1F0;
    case 70u: goto L_0038D204;
    case 71u: goto L_0038D230;
    case 72u: goto L_0038D258;
    case 73u: goto L_0038D2AC;
    case 74u: goto L_0038D2F8;
    case 75u: goto L_0038D320;
    case 76u: goto L_0038D358;
    case 77u: goto L_0038D390;
    case 78u: goto L_0038D3E0;
    case 79u: goto L_0038D470;
    case 80u: goto L_0038D4F0;
    case 81u: goto L_0038D570;
    case 82u: goto L_0038D620;
    case 83u: goto L_0038D680;
    case 84u: goto L_0038D690;
    case 85u: goto L_0038D6B8;
    case 86u: goto L_0038D6C4;
    case 87u: goto L_0038D750;
    case 88u: goto L_0038D770;
    case 89u: goto L_0038D7A0;
    case 90u: goto L_0038D7C0;
    case 91u: goto L_0038D844;
    case 92u: goto L_0038D860;
    case 93u: goto L_0038D870;
    case 94u: goto L_0038D880;
    case 95u: goto L_0038D8A0;
    case 96u: goto L_0038D8B0;
    case 97u: goto L_0038D920;
    case 98u: goto L_0038D99C;
    case 99u: goto L_0038D9C8;
    case 100u: goto L_0038D9F4;
    case 101u: goto L_0038DA00;
    case 102u: goto L_0038DA68;
    case 103u: goto L_0038DAA0;
    case 104u: goto L_0038DAC0;
    case 105u: goto L_0038DAEC;
    case 106u: goto L_0038DB40;
    case 107u: goto L_0038DB58;
    case 108u: goto L_0038DBB8;
    case 109u: goto L_0038DBE0;
    case 110u: goto L_0038DC10;
    case 111u: goto L_0038DC60;
    case 112u: goto L_0038DCDC;
    case 113u: goto L_0038DCF4;
    case 114u: goto L_0038DDE0;
    case 115u: goto L_0038DE20;
    case 116u: goto L_0038DE40;
    case 117u: goto L_0038DE88;
    case 118u: goto L_0038DECC;
    case 119u: goto L_0038DEEC;
    case 120u: goto L_0038DF20;
    case 121u: goto L_0038DF30;
    case 122u: goto L_0038DF40;
    case 123u: goto L_0038DFBC;
    case 124u: goto L_0038E16C;
    case 125u: goto L_0038E1A8;
    case 126u: goto L_0038E224;
    case 127u: goto L_0038E240;
    case 128u: goto L_0038E280;
    case 129u: goto L_0038E2D0;
    case 130u: goto L_0038E2F0;
    case 131u: goto L_0038E330;
    case 132u: goto L_0038E36C;
    case 133u: goto L_0038E46C;
    case 134u: goto L_0038E47C;
    case 135u: goto L_0038E48C;
    case 136u: goto L_0038E49C;
    case 137u: goto L_0038E4A4;
    case 138u: goto L_0038E500;
    case 139u: goto L_0038E5BC;
    case 140u: goto L_0038E678;
    case 141u: goto L_0038E6E8;
    case 142u: goto L_0038E740;
    case 143u: goto L_0038E760;
    case 144u: goto L_0038E798;
    case 145u: goto L_0038E7C8;
    case 146u: goto L_0038E840;
    case 147u: goto L_0038E898;
    case 148u: goto L_0038E8E8;
    case 149u: goto L_0038E940;
    case 150u: goto L_0038E96C;
    case 151u: goto L_0038E9C0;
    case 152u: goto L_0038E9FC;
    case 153u: goto L_0038EA60;
    case 154u: goto L_0038EADC;
    case 155u: goto L_0038EB68;
    case 156u: goto L_0038EB78;
    case 157u: goto L_0038EB88;
    case 158u: goto L_0038EB98;
    case 159u: goto L_0038EBA0;
    case 160u: goto L_0038EBA8;
    case 161u: goto L_0038EC14;
    case 162u: goto L_0038EC54;
    case 163u: goto L_0038EC64;
    case 164u: goto L_0038EC74;
    case 165u: goto L_0038EC84;
    case 166u: goto L_0038EC8C;
    case 167u: goto L_0038EC94;
    case 168u: goto L_0038ECFC;
    case 169u: goto L_0038ED70;
    case 170u: goto L_0038EE4C;
    case 171u: goto L_0038EEB0;
    case 172u: goto L_0038EEB8;
    case 173u: goto L_0038EEC0;
    case 174u: goto L_0038EF44;
    case 175u: goto L_0038EFA8;
    case 176u: goto L_0038EFE0;
    case 177u: goto L_0038F014;
    case 178u: goto L_0038F08C;
    case 179u: goto L_0038F0E0;
    case 180u: goto L_0038F138;
    case 181u: goto L_0038F168;
    case 182u: goto L_0038F198;
    case 183u: goto L_0038F1C8;
    case 184u: goto L_0038F1F8;
    case 185u: goto L_0038F250;
    case 186u: goto L_0038F2C0;
    case 187u: goto L_0038F300;
    case 188u: goto L_0038F3D4;
    case 189u: goto L_0038F450;
    case 190u: goto L_0038F470;
    case 191u: goto L_0038F4B0;
    case 192u: goto L_0038F50C;
    case 193u: goto L_0038F588;
    case 194u: goto L_0038F678;
    case 195u: goto L_0038F6AC;
    case 196u: goto L_0038F6F0;
    case 197u: goto L_0038F710;
    case 198u: goto L_0038F870;
    case 199u: goto L_0038F898;
    case 200u: goto L_0038F8A4;
    case 201u: goto L_0038F8B4;
    case 202u: goto L_0038F970;
    case 203u: goto L_0038F9FC;
    case 204u: goto L_0038FA64;
    case 205u: goto L_0038FA9C;
    case 206u: goto L_0038FAD0;
    case 207u: goto L_0038FAD8;
    case 208u: goto L_0038FAE0;
    case 209u: goto L_0038FAE8;
    case 210u: goto L_0038FAF0;
    case 211u: goto L_0038FB34;
    case 212u: goto L_0038FB9C;
    case 213u: goto L_0038FBD0;
    case 214u: goto L_0038FBD8;
    case 215u: goto L_0038FBE0;
    case 216u: goto L_0038FBE8;
    case 217u: goto L_0038FBF0;
    case 218u: goto L_0038FC34;
    case 219u: goto L_0038FC90;
    case 220u: goto L_0038FCB8;
    case 221u: goto L_0038FD10;
    case 222u: goto L_0038FD14;
    case 223u: goto L_0038FD18;
    case 224u: goto L_0038FD1C;
    case 225u: goto L_0038FD20;
    case 226u: goto L_0038FD24;
    case 227u: goto L_0038FD28;
    case 228u: goto L_0038FD30;
    case 229u: goto L_0038FD60;
    case 230u: goto L_0038FD80;
    case 231u: goto L_0038FD90;
    case 232u: goto L_0038FDA0;
    case 233u: goto L_0038FDB0;
    case 234u: goto L_0038FEB0;
    case 235u: goto L_0038FEBC;
    case 236u: goto L_0038FEC8;
    case 237u: goto L_0038FEE0;
    case 238u: goto L_0038FF98;
    case 239u: goto L_0038FFB0;
    case 240u: goto L_0038FFF0;
    default: bad_entry(c, 0x0038C000u); return;
    }
L_0038C000:
    st16((c.r[6].w[0] + 112u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0038C02C; } }
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 24u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 6;
L_0038C02C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0038C040:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 30u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0038C080; } }
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] - 23760u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038C080u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038C080u) [[unlikely]] return; }
L_0038C080:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0038C090:
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[8], c.r[4].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    set32(c.r[10], 0u + 1u);
    set32(c.r[6], 0u + 2u);
    set32(c.r[3], 0u + 3u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[4].w[0] + 32u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 33u), static_cast<std::uint8_t>(c.r[10].w[0]));
    st8((c.r[4].w[0] + 34u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[4].w[0] + 35u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[5].w[0] + c.r[4].w[0]);
    c.r[8].d[0] = ld8((c.r[4].w[0] + 41u));
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 32u)));
    set32(c.r[6], c.r[5].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[7], 0u + 600u);
    set32(c.r[9], c.r[10].w[0] << (c.r[9].w[0] & 31u));
    c.r[9].d[0] = c.r[9].d[0] & 255ull;
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st8((c.r[4].w[0] + 41u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 32u)));
    set32(c.r[8], c.r[8].w[0] + c.r[4].w[0]);
    st8((c.r[8].w[0] + 36u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 32u)));
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[8], c.r[5].w[0] + c.r[4].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 64u)));
    st8((c.r[8].w[0] + 65u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 32u)));
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[8], c.r[5].w[0] + c.r[4].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 80u)));
    st8((c.r[8].w[0] + 81u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 32u)));
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[8], c.r[5].w[0] + c.r[4].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 96u)));
    st8((c.r[8].w[0] + 97u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 32u)));
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[8], c.r[5].w[0] + c.r[4].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 72u)));
    st8((c.r[8].w[0] + 73u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 32u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 88u)));
    st8((c.r[4].w[0] + 89u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 52;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[6].w[0] + 112u), static_cast<std::uint16_t>(c.r[7].w[0]));  c.pc = t; return; }
L_0038C160:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[6].d[0] = ld8((c.r[4].w[0] + 44u));
    set32(c.r[3], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << (c.r[5].w[0] & 31u));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0038C1A8; } }
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] - 23744u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038C1A8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038C1A8u) [[unlikely]] return; }
L_0038C1A8:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0038C1C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 60u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[18], c.r[5], c.r[0]);  if (t) { goto L_0038C214; } }
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[6], c.r[3].w[0] + c.r[19].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 1u)));
    set32(c.r[3], c.r[18].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[4], 0u + 1800u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[6].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 112u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_0038C430; } }
L_0038C214:
    set32(c.r[17], c.r[4].w[0] + 32u);
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 32u)));
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[2], c.r[2].w[0] + 3268u);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[19].w[0]);
    c.r[2].d[0] = ld16((c.r[16].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 64u)));
    c.r[2].d[0] = c.r[2].d[0] & 8192ull;
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[4].w[0] + 64u);  if (t) { goto L_0038C254; } }
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0038C254:
    c.r[2].d[0] = ld16((c.r[16].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0038C278; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    st8((c.r[2].w[0] + 64u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
L_0038C278:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 64u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_0038C29C; } }
    set32(c.r[5], 0u + 43u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038C29Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x0038C29Cu) [[unlikely]] return; }
L_0038C29C:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038C2A8u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_00A3(c, 82u, depth + 1u); else { c.pc = 0x0038D620u; return; } if (c.pc != 0x0038C2A8u) [[unlikely]] return; }
L_0038C2A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0038C2D4; } }
    c.r[5].d[0] = c.r[18].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038C2C0u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_00A2(c, 264u, depth + 1u); else { c.pc = 0x0038B730u; return; } if (c.pc != 0x0038C2C0u) [[unlikely]] return; }
L_0038C2C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038C2C8u); c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));  if (depth < kMaxDepth) unit_00A3(c, 80u, depth + 1u); else { c.pc = 0x0038D4F0u; return; } if (c.pc != 0x0038C2C8u) [[unlikely]] return; }
L_0038C2C8:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038C2D4u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_00A3(c, 81u, depth + 1u); else { c.pc = 0x0038D570u; return; } if (c.pc != 0x0038C2D4u) [[unlikely]] return; }
L_0038C2D4:
    c.r[3].d[0] = ld16((c.r[16].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[18].w[0] << 1);  if (t) { goto L_0038C35C; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[19].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 64u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 264u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0038C358; } }
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[6], c.r[3].w[0] + c.r[19].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 1u)));
    set32(c.r[3], c.r[18].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[4], 0u + 1800u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[6].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[19].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 64u)));
    set32(c.r[6], c.r[6].w[0] + c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 264u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[6].w[0] + 264u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 112u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_0038C430; } }
L_0038C358:
    set32(c.r[3], c.r[18].w[0] << 1);
    c.budget -= 1;
L_0038C35C:
    set32(c.r[6], c.r[3].w[0] + c.r[19].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 112u)));
    set32(c.r[3], c.r[6].w[0] + 112u);
    set32(c.r[4], c.r[5].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != 0ull; st16((c.r[6].w[0] + 112u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_0038C430; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[19].w[0]);
    set32(c.r[5], c.r[4].w[0] + 64u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 64u)));
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 264u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[18].w[0] << 2);  if (t) { goto L_0038C3BC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0038C3B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_0038C3B8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0038C3B4:
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_0038C3B8:
    set32(c.r[2], c.r[18].w[0] << 2);
    c.budget -= 1;
L_0038C3BC:
    set32(c.r[6], c.r[2].w[0] + c.r[19].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 1u)));
    set32(c.r[2], 0u + 1800u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[6].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[19].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 64u)));
    set32(c.r[6], c.r[6].w[0] + c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 264u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[6].w[0] + 264u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038C404u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_00A3(c, 82u, depth + 1u); else { c.pc = 0x0038D620u; return; } if (c.pc != 0x0038C404u) [[unlikely]] return; }
L_0038C404:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0038C430; } }
    c.r[5].d[0] = c.r[18].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038C41Cu); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_00A2(c, 264u, depth + 1u); else { c.pc = 0x0038B730u; return; } if (c.pc != 0x0038C41Cu) [[unlikely]] return; }
L_0038C41C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038C424u); c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));  if (depth < kMaxDepth) unit_00A3(c, 80u, depth + 1u); else { c.pc = 0x0038D4F0u; return; } if (c.pc != 0x0038C424u) [[unlikely]] return; }
L_0038C424:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038C430u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_00A3(c, 81u, depth + 1u); else { c.pc = 0x0038D570u; return; } if (c.pc != 0x0038C430u) [[unlikely]] return; }
L_0038C430:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0038C450:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[17], c.r[5].w[0] + c.r[4].w[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 32u)));
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[20], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + 3264u);
    c.r[23].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 80u)));
    set32(c.r[16], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[2], 0u + 1u);
    mmi::paddub(c.r[21], c.r[5], c.r[0]);
    set32(c.r[19], c.r[17].w[0] + 32u);
    mmi::paddub(c.r[22], c.r[4], c.r[0]);
    set32(c.r[18], c.r[2].w[0] << (c.r[21].w[0] & 31u));
    c.budget -= 26;
L_0038C4B8:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 4u));
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0038C508; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[3], c.r[22].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 80u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[3].w[0] + 80u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 10;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0038C508; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 32u)));
    set32(c.r[3], 0u + 32u);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[22].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0] + 80u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_0038C508:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 4u));
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0038C558; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[3], c.r[22].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 80u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 80u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[1].d[0] = c.r[2].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0038C558; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[22].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0] + 80u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
L_0038C558:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 32u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038C564u); mmi::paddub(c.r[4], c.r[22], c.r[0]);  if (depth < kMaxDepth) unit_00A3(c, 80u, depth + 1u); else { c.pc = 0x0038D4F0u; return; } if (c.pc != 0x0038C564u) [[unlikely]] return; }
L_0038C564:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 32u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038C570u); mmi::paddub(c.r[4], c.r[22], c.r[0]);  if (depth < kMaxDepth) unit_00A3(c, 81u, depth + 1u); else { c.pc = 0x0038D570u; return; } if (c.pc != 0x0038C570u) [[unlikely]] return; }
L_0038C570:
    c.r[3].d[0] = ld8((c.r[22].w[0] + 45u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[18].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0038C590; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 32u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038C58Cu); mmi::paddub(c.r[4], c.r[22], c.r[0]);  if (depth < kMaxDepth) unit_00A3(c, 82u, depth + 1u); else { c.pc = 0x0038D620u; return; } if (c.pc != 0x0038C58Cu) [[unlikely]] return; }
L_0038C58C:
    mmi::paddub(c.r[3], c.r[2], c.r[0]);
    c.budget -= 1;
L_0038C590:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038C4B8u | kUnwind; return; } goto L_0038C4B8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[22].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 80u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[23].d[0];  if (t) { goto L_0038C5E0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 6u)));
    c.budget -= 4;
    { const bool t = c.r[21].d[0] != c.r[2].d[0]; set32(c.r[5], 0u + 61u);  if (t) { goto L_0038C5D8; } }
    set32(c.r[5], 0u + 41u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038C5CCu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x0038C5CCu) [[unlikely]] return; }
L_0038C5CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));  if (t) { goto L_0038C5E4; } }
    set32(c.r[5], 0u + 61u);
    c.budget -= 1;
L_0038C5D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038C5E0u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x0038C5E0u) [[unlikely]] return; }
L_0038C5E0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.budget -= 1;
L_0038C5E4:
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[5], c.r[3].w[0] + c.r[22].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 80u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 81u)));
    c.r[3].d[0] = c.r[4].d[0] ^ c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0038C610; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 97u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 96u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0038C614; } }
L_0038C610:
    st8((c.r[5].w[0] + 96u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0038C614:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[3], c.r[3].w[0] + 3268u);
    set32(c.r[3], c.r[3].w[0] + c.r[20].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0038C648; } }
    set32(c.r[3], c.r[21].w[0] << 1);
    set32(c.r[5], c.r[3].w[0] + c.r[22].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 112u)));
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull; st16((c.r[5].w[0] + 112u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0038C72C; } }
L_0038C648:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.r[4].d[0] = ld8((c.r[22].w[0] + 45u));
    set32(c.r[2], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] << (c.r[3].w[0] & 31u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 54u);  if (t) { goto L_0038C724; } }
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[22].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 80u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], c.r[21].w[0] << 2);  if (t) { goto L_0038C6B0; } }
    set32(c.r[2], 0u + 32u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0038C6AC; } }
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] - 23951u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], c.r[21].w[0] << 2);  if (t) { goto L_0038C6EC; } }
L_0038C6AC:
    set32(c.r[2], c.r[21].w[0] << 2);
    c.budget -= 1;
L_0038C6B0:
    set32(c.r[5], c.r[22].w[0] + c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[2], c.r[21].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[22].w[0]);
    set32(c.r[3], 0u + 32u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st16((c.r[2].w[0] + 112u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[22].w[0]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 96u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0038C70C; } }
    set32(c.r[2], c.r[21].w[0] << 2);
    c.budget -= 1;
L_0038C6EC:
    set32(c.r[5], c.r[2].w[0] + c.r[22].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    set32(c.r[2], c.r[21].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[22].w[0]);
    set32(c.r[3], 0u + 600u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st16((c.r[2].w[0] + 112u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 8;
L_0038C70C:
    set32(c.r[5], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038C718u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x0038C718u) [[unlikely]] return; }
L_0038C718:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 128u) & ~15u, c.r[31]);  if (t) { goto L_0038C730; } }
    set32(c.r[5], 0u + 54u);
    c.budget -= 1;
L_0038C724:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038C72Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x0038C72Cu) [[unlikely]] return; }
L_0038C72C:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0038C730:
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
L_0038C760:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[5].w[0] + c.r[4].w[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 32u)));
    set32(c.r[6], c.r[3].w[0] + 32u);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[7], c.r[3].w[0] - 23951u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[8].w[0] << 1);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[3].w[0] << 2);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 80u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 96u)));
    set32(c.r[9], c.r[4].w[0] + 96u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[4], c.r[4].w[0] + 3268u);
    set32(c.r[16], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[8].w[0] << 1);
    set32(c.r[5], c.r[4].w[0] + c.r[8].w[0]);
    set32(c.r[5], c.r[7].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = ld16((c.r[16].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.r[4].d[0] = c.r[4].d[0] & 2048ull;
    c.budget -= 31;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[7], c.r[5].w[0] - 1u);  if (t) { goto L_0038C808; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { goto L_0038C808; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[18].w[0]);
    st8((c.r[4].w[0] + 96u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 4;
L_0038C808:
    c.r[4].d[0] = ld16((c.r[16].w[0]));
    c.r[4].d[0] = c.r[4].d[0] & 1024ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0038C854; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[5], c.r[4].w[0] + c.r[18].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 96u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[5].w[0] + 96u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[1].d[0] = c.r[7].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0038C854; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[18].w[0]);
    st8((c.r[4].w[0] + 96u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_0038C854:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[18].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 96u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0038C89C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 6u)));
    c.budget -= 4;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[5], 0u + 62u);  if (t) { goto L_0038C894; } }
    set32(c.r[5], 0u + 43u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038C888u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x0038C888u) [[unlikely]] return; }
L_0038C888:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld16((c.r[16].w[0]));  if (t) { goto L_0038C8A0; } }
    set32(c.r[5], 0u + 62u);
    c.budget -= 1;
L_0038C894:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038C89Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x0038C89Cu) [[unlikely]] return; }
L_0038C89C:
    c.r[3].d[0] = ld16((c.r[16].w[0]));
    c.budget -= 1;
L_0038C8A0:
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], c.r[17].w[0] << 2);  goto L_0038C8C8; }
    set32(c.r[3], c.r[17].w[0] << 1);
    set32(c.r[5], c.r[3].w[0] + c.r[18].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 112u)));
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull; st16((c.r[5].w[0] + 112u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0038C8F8; } }
    set32(c.r[2], c.r[17].w[0] << 2);
    c.budget -= 1;
L_0038C8C8:
    set32(c.r[7], c.r[18].w[0] + c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    set32(c.r[2], c.r[17].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[3], 0u + 32u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], 0u + 4u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038C8F8u); st16((c.r[2].w[0] + 112u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x0038C8F8u) [[unlikely]] return; }
L_0038C8F8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0038C910:
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[6], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 112u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[6].w[0] + 112u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0038C970; } }
    set32(c.r[3], 0u + 2u);
    set32(c.r[6], c.r[5].w[0] + c.r[4].w[0]);
    st8((c.r[6].w[0] + 24u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 32u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 41u));
    set32(c.r[5], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] << (c.r[6].w[0] & 31u));
    c.r[5].d[0] = ~(c.r[5].d[0] | 0ull);
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    st8((c.r[4].w[0] + 41u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 15;
L_0038C970:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0038C980:
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] - 23728u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0038C000u < 16384u) { entry = entries_00A3[(t - 0x0038C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0038C9B0:
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[6], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[5].w[0] << 1);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], 0u + 60u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[3].w[0] + 112u), static_cast<std::uint16_t>(c.r[4].w[0]));  c.pc = t; return; }
L_0038C9E0:
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[7], c.r[3].w[0] + c.r[4].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 112u)));
    set32(c.r[3], c.r[6].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[6].d[0] != 0ull; st16((c.r[7].w[0] + 112u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0038CA24; } }
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[7], c.r[4].w[0] + c.r[3].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    set32(c.r[3], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << (c.r[5].w[0] & 31u));
    c.r[5].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[3], c.r[6].w[0] + 1u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 44u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[4].w[0] + 44u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 11;
L_0038CA24:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0038CA30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0038CA40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 5u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0038CAEC; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { mmi::paddub(c.r[4], c.r[2], c.r[0]);  goto L_0038CAB4; }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0038CA78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0038CB18; } }
L_0038CA78:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 120u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0038CB18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038CA8Cu);  if (depth < kMaxDepth) unit_00A3(c, 50u, depth + 1u); else { c.pc = 0x0038CB90u; return; } if (c.pc != 0x0038CA8Cu) [[unlikely]] return; }
L_0038CA8C:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 8u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038CAA8u); st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_001B(c, 50u, depth + 1u); else { c.pc = 0x0016CF10u; return; } if (c.pc != 0x0038CAA8u) [[unlikely]] return; }
L_0038CAA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0038CB18; } }
    mmi::paddub(c.r[4], c.r[2], c.r[0]);
    c.budget -= 1;
L_0038CAB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038CABCu);  if (depth < kMaxDepth) unit_001B(c, 52u, depth + 1u); else { c.pc = 0x0016CFC0u; return; } if (c.pc != 0x0038CABCu) [[unlikely]] return; }
L_0038CABC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0038CB18; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 10u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038CAE4u); st16((c.r[2].w[0] + 10u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0080(c, 270u, depth + 1u); else { c.pc = 0x003036C0u; return; } if (c.pc != 0x0038CAE4u) [[unlikely]] return; }
L_0038CAE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0038CB18; } }
L_0038CAEC:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 10u)));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st16((c.r[5].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0038CB18; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[4], c.r[2].w[0] + 29792u);
    set32(c.r[6], 0u + 640u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038CB10u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x0038CB10u) [[unlikely]] return; }
L_0038CB10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0038CB2C; } }
L_0038CB18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038CB20u);  if (depth < kMaxDepth) unit_00A3(c, 43u, depth + 1u); else { c.pc = 0x0038CB40u; return; } if (c.pc != 0x0038CB20u) [[unlikely]] return; }
L_0038CB20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038CB28u);  if (depth < kMaxDepth) unit_00A3(c, 49u, depth + 1u); else { c.pc = 0x0038CB80u; return; } if (c.pc != 0x0038CB28u) [[unlikely]] return; }
L_0038CB28:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_0038CB2C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0038CB40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038CB50u);  if (depth < kMaxDepth) unit_0080(c, 308u, depth + 1u); else { c.pc = 0x00303FA0u; return; } if (c.pc != 0x0038CB50u) [[unlikely]] return; }
L_0038CB50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038CB58u); set32(c.r[4], 0u + 6u);  if (depth < kMaxDepth) unit_0080(c, 287u, depth + 1u); else { c.pc = 0x00303B80u; return; } if (c.pc != 0x0038CB58u) [[unlikely]] return; }
L_0038CB58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038CB60u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0080(c, 287u, depth + 1u); else { c.pc = 0x00303B80u; return; } if (c.pc != 0x0038CB60u) [[unlikely]] return; }
L_0038CB60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038CB68u); set32(c.r[4], 0u + 6u);  if (depth < kMaxDepth) unit_0080(c, 295u, depth + 1u); else { c.pc = 0x00303D30u; return; } if (c.pc != 0x0038CB68u) [[unlikely]] return; }
L_0038CB68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038CB70u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0080(c, 295u, depth + 1u); else { c.pc = 0x00303D30u; return; } if (c.pc != 0x0038CB70u) [[unlikely]] return; }
L_0038CB70:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0038CB80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00300000u);
    c.budget -= 3;
    { set32(c.r[4], c.r[2].w[0] + 15904u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00305ED0u | kUnwind; return; } [[clang::musttail]] return unit_0081(c, 121u, depth); }
L_0038CB90:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[3], 0u - 1u);
    c.budget -= 13;
L_0038CBC4:
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st8((c.r[2].w[0] + 280u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st8((c.r[2].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st8((c.r[2].w[0] + 264u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st8((c.r[2].w[0] + 260u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st8((c.r[2].w[0] + 380u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[2].w[0] + 376u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = c.r[4].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 22;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038CBC4u | kUnwind; return; } goto L_0038CBC4; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    mmi::paddub(c.r[21], c.r[0], c.r[0]);
    mmi::paddub(c.r[19], c.r[0], c.r[0]);
    st8((c.r[2].w[0] + 265u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 264u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[2].w[0] + 413u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[2].w[0] + 412u), static_cast<std::uint8_t>(0u));
    c.budget -= 11;
L_0038CC48:
    set32(c.r[2], 0u + 1u);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    set32(c.r[18], c.r[2].w[0] << (c.r[21].w[0] & 31u));
    set32(c.r[2], c.r[6].w[0] << 1);
    c.budget -= 5;
L_0038CC5C:
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 72u)));
    c.budget -= 4;
    if (c.r[5].d[0] != c.r[21].d[0]) { set32(c.r[6], c.r[6].w[0] + 1u);  goto L_0038CDF4; }
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << (c.r[6].w[0] & 31u));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 87u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0038CDF0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 80u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[6], c.r[2].w[0] + 80u);  if (t) { goto L_0038CDE8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u + 32u);
    set32(c.r[4], c.r[21].w[0] + c.r[4].w[0]);
    st8((c.r[4].w[0] + 376u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 88u)));
    set32(c.r[4], c.r[21].w[0] + c.r[4].w[0]);
    st8((c.r[4].w[0] + 380u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 64u)));
    set32(c.r[4], c.r[21].w[0] + c.r[4].w[0]);
    st8((c.r[4].w[0] + 260u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[20].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 15;
    { const bool t = c.r[20].d[0] != c.r[3].d[0]; set32(c.r[7], c.r[2].w[0] + 64u);  if (t) { goto L_0038CCF8; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038CCE0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_00A3(c, 71u, depth + 1u); else { c.pc = 0x0038D230u; return; } if (c.pc != 0x0038CCE0u) [[unlikely]] return; }
L_0038CCE0:
    mmi::paddub(c.r[20], c.r[2], c.r[0]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038CCF0u); mmi::paddub(c.r[5], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_00A3(c, 75u, depth + 1u); else { c.pc = 0x0038D320u; return; } if (c.pc != 0x0038CCF0u) [[unlikely]] return; }
L_0038CCF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[20].w[0] << 1);  if (t) { goto L_0038CD04; } }
L_0038CCF8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 96u)));
    set32(c.r[3], c.r[20].w[0] << 1);
    c.budget -= 3;
L_0038CD04:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[5], c.r[3].w[0] + c.r[20].w[0]);
    set32(c.r[4], c.r[4].w[0] - 23952u);
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[6], c.r[4].w[0] + c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.r[4].d[0] = c.r[21].d[0] << 56;
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0] + 264u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0] + 272u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 2u)));
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0] + 280u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 264u)));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038CD58u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);  if (depth < kMaxDepth) unit_0082(c, 91u, depth + 1u); else { c.pc = 0x0030A510u; return; } if (c.pc != 0x0038CD58u) [[unlikely]] return; }
L_0038CD58:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 4u);
    set32(c.r[4], c.r[19].w[0] + c.r[3].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 264u)));
    c.budget -= 6;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { goto L_0038CD98; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 272u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[5], c.r[4].w[0] + 272u);  if (t) { goto L_0038CD98; } }
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 280u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0038CDC0; } }
L_0038CD98:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_0038CDC0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 272u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[5], c.r[4].w[0] + 272u);  if (t) { goto L_0038CDC0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 59u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_0038CDC0:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[17].d[0] = c.r[17].d[0] | c.r[18].d[0];
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 260u)));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 264u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 264u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 10;
L_0038CDE8:
    set32(c.r[6], 0u + 4u);
    c.budget -= 2;
L_0038CDF0:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_0038CDF4:
    c.r[2].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[6].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038CC5Cu | kUnwind; return; } goto L_0038CC5C; } }
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[2].d[0] = c.r[21].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038CC48u | kUnwind; return; } goto L_0038CC48; } }
    mmi::paddub(c.r[22], c.r[0], c.r[0]);
    mmi::paddub(c.r[21], c.r[0], c.r[0]);
    mmi::paddub(c.r[18], c.r[16], c.r[0]);
    c.budget -= 3;
L_0038CE1C:
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[3].w[0] << (c.r[22].w[0] & 31u));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 87u)));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { set32(c.r[22], c.r[22].w[0] + 1u);  goto L_0038CF94; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[3].w[0] << (c.r[21].w[0] & 31u));  if (t) { goto L_0038CE4C; } }
L_0038CE40:
    set32(c.r[21], c.r[21].w[0] + 1u);
    set32(c.r[20], c.r[3].w[0] << (c.r[21].w[0] & 31u));
    c.budget -= 3;
L_0038CE4C:
    c.r[2].d[0] = c.r[17].d[0] & c.r[20].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038CE40u | kUnwind; return; } goto L_0038CE40; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 72u)));
    set32(c.r[2], 0u + 32u);
    set32(c.r[3], c.r[3].w[0] + c.r[21].w[0]);
    st8((c.r[3].w[0] + 376u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + c.r[21].w[0]);
    st8((c.r[3].w[0] + 380u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 64u)));
    set32(c.r[3], c.r[3].w[0] + c.r[21].w[0]);
    st8((c.r[3].w[0] + 260u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[19].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 80u)));
    c.budget -= 16;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_0038CEC4; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 64u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038CEACu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_00A3(c, 71u, depth + 1u); else { c.pc = 0x0038D230u; return; } if (c.pc != 0x0038CEACu) [[unlikely]] return; }
L_0038CEAC:
    mmi::paddub(c.r[19], c.r[2], c.r[0]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038CEBCu); mmi::paddub(c.r[5], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_00A3(c, 75u, depth + 1u); else { c.pc = 0x0038D320u; return; } if (c.pc != 0x0038CEBCu) [[unlikely]] return; }
L_0038CEBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[19].w[0] << 1);  if (t) { goto L_0038CED4; } }
L_0038CEC4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 96u)));
    set32(c.r[3], c.r[19].w[0] << 1);
    c.budget -= 4;
L_0038CED4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[5], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[4], c.r[4].w[0] - 23952u);
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[7], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[6], c.r[21].w[0] << 1);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    set32(c.r[4], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], 0u + 4u);
    st8((c.r[4].w[0] + 264u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    st8((c.r[2].w[0] + 280u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[8], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[4], c.r[8].w[0] + c.r[6].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 264u)));
    c.budget -= 22;
    { const bool t = c.r[7].d[0] != c.r[3].d[0];  if (t) { goto L_0038CF54; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 272u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[5], c.r[4].w[0] + 272u);  if (t) { goto L_0038CF54; } }
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 280u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0038CF88; } }
L_0038CF54:
    c.budget -= 2;
    if (c.r[7].d[0] != 0ull) { set32(c.r[21], c.r[21].w[0] + 1u);  goto L_0038CF8C; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 272u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0038CF88; } }
    set32(c.r[2], c.r[8].w[0] + c.r[21].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 260u)));
    set32(c.r[3], c.r[8].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 412u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 412u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
L_0038CF88:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 1;
L_0038CF8C:
    c.r[17].d[0] = c.r[17].d[0] | c.r[20].d[0];
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.budget -= 2;
L_0038CF94:
    c.r[2].d[0] = c.r[22].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038CE1Cu | kUnwind; return; } goto L_0038CE1C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038CFA8u);  if (depth < kMaxDepth) unit_0017(c, 250u, depth + 1u); else { c.pc = 0x0015E540u; return; } if (c.pc != 0x0038CFA8u) [[unlikely]] return; }
L_0038CFA8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[18], c.r[2].w[0] + 24896u);
    mmi::paddub(c.r[20], c.r[0], c.r[0]);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    mmi::paddub(c.r[19], c.r[0], c.r[0]);
    c.budget -= 5;
L_0038CFBC:
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], c.r[2].w[0] + c.r[17].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 264u)));
    st8((c.r[3].w[0] + 265u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], c.r[2].w[0] + c.r[17].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 272u)));
    st8((c.r[3].w[0] + 273u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], c.r[2].w[0] + c.r[17].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 280u)));
    st8((c.r[3].w[0] + 281u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].d[0] = ld8((c.r[18].w[0] + 1370u));
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    st8((c.r[2].w[0] + 396u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], c.r[3].w[0] + c.r[20].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 260u)));
    set32(c.r[2], c.r[3].w[0] + c.r[19].w[0]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038D014u); set32(c.r[5], c.r[2].w[0] + 304u);  if (depth < kMaxDepth) unit_0032(c, 121u, depth + 1u); else { c.pc = 0x001C90A0u; return; } if (c.pc != 0x0038D014u) [[unlikely]] return; }
L_0038D014:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[3].d[0] = c.r[20].sd[0] < 4ll ? 1ull : 0ull;
    set32(c.r[17], c.r[17].w[0] + 2u);
    set32(c.r[18], c.r[18].w[0] + 704u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038CFBCu | kUnwind; return; } goto L_0038CFBC; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[4], 0u + 5u);
    st8((c.r[3].w[0] + 296u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[3].w[0] + 297u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[3].w[0] + 294u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 6u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 260u)));
    st8((c.r[4].w[0] + 301u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 25676u)));
    c.budget -= 17;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0038D0B0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 56u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0038D0A0; } }
    set32(c.r[3], c.r[4].w[0] - 15u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0038D09C; } }
    set32(c.r[3], 0u + 20u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0038D0A8; } }
L_0038D09C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0038D0A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 25612u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0038D0B4; } }
L_0038D0A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 25612u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0038D0B4; } }
L_0038D0B0:
    st8((c.r[28].w[0] - 25612u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0038D0B4:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0038D0E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], 0u - 1u);
    set32(c.r[6], 0u + 23u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038D104u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x0038D104u) [[unlikely]] return; }
L_0038D104:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 15124u)));
    set32(c.r[5], 0u << 1);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[2], c.r[29].w[0] + 48u);
    set32(c.r[7], 0u + 32u);
    set32(c.r[11], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[6], c.r[3].w[0] - 832u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[8], 0u - 1u);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[9], c.r[0], c.r[0]);  if (t) { goto L_0038D1B0; } }
    mmi::paddub(c.r[10], c.r[0], c.r[0]);
    c.budget -= 1;
L_0038D13C:
    set32(c.r[3], c.r[17].w[0] + c.r[10].w[0]);
    c.budget -= 2;
L_0038D144:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 104u)));
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[8].d[0]) { set32(c.r[10], c.r[10].w[0] + 1u);  goto L_0038D184; }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[7].d[0];  if (t) { goto L_0038D180; } }
    set32(c.r[4], c.r[5].w[0] << (c.r[3].w[0] & 31u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0])));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0038D180; } }
    c.r[10].d[0] = c.r[10].d[0] | 128ull;
    c.budget -= 2;
L_0038D180:
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.budget -= 1;
L_0038D184:
    c.r[3].d[0] = c.r[10].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[17].w[0] + c.r[10].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038D144u | kUnwind; return; } goto L_0038D144; } }
    c.r[3].d[0] = c.r[10].d[0] & 128ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[11], c.r[11].w[0] + 2u);  goto L_0038D1AC; }
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[9].w[0]));
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[11], c.r[11].w[0] + 2u);
    c.budget -= 4;
L_0038D1AC:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.budget -= 1;
L_0038D1B0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 47u)));
    c.r[3].d[0] = c.r[9].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[10], c.r[0], c.r[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038D13Cu | kUnwind; return; } goto L_0038D13C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038D1C8u);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x0038D1C8u) [[unlikely]] return; }
L_0038D1C8:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    mmi::divu(c, 0, c.r[2].w[0], c.r[16].w[0]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[2].d[0] = c.hi.d[0];
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 48u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0038D1F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038D204u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x0038D204u) [[unlikely]] return; }
L_0038D204:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 47u)));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    mmi::divu(c, 0, c.r[2].w[0], c.r[3].w[0]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0038D230:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038D258u); set32(c.r[6], 0u + 32u);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x0038D258u) [[unlikely]] return; }
L_0038D258:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 58u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 48u)));
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[2], c.r[2].w[0] - 832u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.r[1].d[0] = c.r[4].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].d[0] = c.r[3].d[0] & c.r[2].d[0];  if (t) { goto L_0038D2F0; } }
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] - 23952u);
    set32(c.r[7], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[8], c.r[29].w[0] + 48u);
    set32(c.r[3], 0u + 1u);
    c.budget -= 7;
L_0038D2AC:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.r[2].d[0] = c.r[6].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] << (c.r[6].w[0] & 31u));  if (t) { goto L_0038D2C4; } }
    set32(c.r[6], c.r[6].w[0] - 11u);
    set32(c.r[2], c.r[3].w[0] << (c.r[6].w[0] & 31u));
    c.budget -= 2;
L_0038D2C4:
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[4].w[0] + 1u);  goto L_0038D2E4; }
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 5;
L_0038D2E4:
    c.r[2].d[0] = c.r[4].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 3u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038D2ACu | kUnwind; return; } goto L_0038D2AC; } }
L_0038D2F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038D2F8u);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x0038D2F8u) [[unlikely]] return; }
L_0038D2F8:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    mmi::divu(c, 0, c.r[2].w[0], c.r[16].w[0]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[2].d[0] = c.hi.d[0];
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 48u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0038D320:
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[2].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], c.r[2].w[0] - 23951u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[1].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] != 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0038D378; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038D358u);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x0038D358u) [[unlikely]] return; }
L_0038D358:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    mmi::divu(c, 0, c.r[2].w[0], c.r[16].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0038D37C; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_0038D378:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0038D37C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0038D390:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 56u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 47u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0038D3AC; } }
    set32(c.r[3], 0u + 23u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 58u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0038D3D4; } }
L_0038D3AC:
    set32(c.r[6], ld32((c.r[28].w[0] - 24600u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], c.r[3].w[0] + 15124u);
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    st8((c.r[4].w[0] + 58u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 10;
L_0038D3D4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0038D3E0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 58u)));
    set32(c.r[3], 0u + 23u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 15u);  if (t) { goto L_0038D4DC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[7], c.r[3].w[0] + 15124u);
    set32(c.r[8], ld32((c.r[28].w[0] - 24600u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[6], c.r[3].w[0] + 15124u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 56u)));
    set32(c.r[3], c.r[8].w[0] << 2);
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    set32(c.r[7], c.r[5].w[0] << 1);
    set32(c.r[5], ld32((c.r[3].w[0])));
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.r[3].d[0] = 0ull & 255ull;
    c.r[1].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    st8((c.r[4].w[0] + 58u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[7], ld32((c.r[28].w[0] - 24600u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 56u)));
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], ld32((c.r[6].w[0])));
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    st8((c.r[4].w[0] + 59u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 26;
    { const bool t = c.r[1].d[0] == 0ull; st8((c.r[4].w[0] + 45u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0038D4E0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[9], 0u + 32u);
    set32(c.r[8], c.r[5].w[0] - 832u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[10], 0u - 1u);
    set32(c.r[5], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 6;
L_0038D470:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 104u)));
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[10].d[0]) { set32(c.r[5], c.r[7].w[0] << (c.r[3].w[0] & 31u));  goto L_0038D4AC; }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[9].d[0];  if (t) { goto L_0038D4A8; } }
    set32(c.r[6], c.r[7].w[0] << (c.r[5].w[0] & 31u));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 58u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[8].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    c.budget -= 8;
    if (c.r[5].d[0] == 0ull) { set32(c.r[3], c.r[3].w[0] + 1u);  goto L_0038D4C4; }
    c.budget -= 1;
L_0038D4A8:
    set32(c.r[5], c.r[7].w[0] << (c.r[3].w[0] & 31u));
    c.budget -= 1;
L_0038D4AC:
    c.r[6].d[0] = c.r[5].d[0] & 255ull;
    c.r[5].d[0] = ld8((c.r[4].w[0] + 45u));
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[4].w[0] + 45u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
L_0038D4C4:
    c.r[5].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[5], c.r[4].w[0] + c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038D470u | kUnwind; return; } goto L_0038D470; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0038D4E0; } }
    set32(c.r[3], 0u + 15u);
    c.budget -= 1;
L_0038D4DC:
    st8((c.r[4].w[0] + 45u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_0038D4E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0038D4F0:
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 80u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[3], c.r[5].w[0] + c.r[4].w[0]);  if (t) { goto L_0038D518; } }
    set32(c.r[3], 0u + 32u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[3].d[0]; set32(c.r[3], c.r[5].w[0] + c.r[4].w[0]);  if (t) { goto L_0038D524; } }
    set32(c.r[3], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 1;
L_0038D518:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 104u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { goto L_0038D560; } }
    set32(c.r[3], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 1;
L_0038D524:
    set32(c.r[4], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[4].w[0] + c.r[6].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], c.r[4].w[0] - 23952u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[5], c.r[3].w[0] + 104u);
    st8((c.r[3].w[0] + 104u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 104u)));
    c.r[3].d[0] = c.r[3].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0038D560; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] - 11u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0038D560:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0038D570:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 58u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 47u)));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_0038D600; } }
    set32(c.r[3], c.r[5].w[0] + c.r[4].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 104u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[7].d[0] == c.r[3].d[0];  if (t) { goto L_0038D5C8; } }
    set32(c.r[3], 0u + 32u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[3].d[0];  if (t) { goto L_0038D5C8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[3], c.r[3].w[0] - 832u);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[8], 0u + 1u);
    set32(c.r[7], c.r[8].w[0] << (c.r[7].w[0] & 31u));
    c.r[3].d[0] = c.r[7].d[0] & c.r[3].d[0];
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[8].w[0] << (c.r[5].w[0] & 31u));  if (t) { goto L_0038D5E8; } }
L_0038D5C8:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 45u));
    set32(c.r[6], 0u + 1u);
    set32(c.r[5], c.r[6].w[0] << (c.r[5].w[0] & 31u));
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 45u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0038D618; } }
    set32(c.r[3], c.r[8].w[0] << (c.r[5].w[0] & 31u));
    c.budget -= 1;
L_0038D5E8:
    c.r[3].d[0] = ~(c.r[3].d[0] | 0ull);
    c.r[5].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].d[0] = ld8((c.r[4].w[0] + 45u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 45u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0038D618; } }
L_0038D600:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 45u));
    set32(c.r[6], 0u + 1u);
    set32(c.r[5], c.r[6].w[0] << (c.r[5].w[0] & 31u));
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[4].w[0] + 45u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_0038D618:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0038D620:
    set32(c.r[3], c.r[5].w[0] + c.r[4].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 104u)));
    c.r[3].d[0] = ~(c.r[7].d[0] | 0ull);
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0038D640; } }
    c.r[3].d[0] = c.r[7].d[0] ^ 32ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 2;
L_0038D640:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0038D678; } }
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 64u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], c.r[3].w[0] << (c.r[7].w[0] & 31u));
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 48u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0038D678; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_0038D678:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0038D680:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0038D690:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], c.r[28].w[0] - 26984u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[17], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_0038D718; } }
    set32(c.r[5], 0u + 6u);
    c.budget -= 1;
L_0038D6B8:
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038D6C4u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x0038D6C4u) [[unlikely]] return; }
L_0038D6C4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_0038D714; }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00390000u);
    set32(c.r[4], c.r[3].w[0] - 10416u);
    set32(c.r[5], 0u + 22u);
    set32(c.r[3], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00390000u);
    set32(c.r[3], c.r[3].w[0] - 10112u);
    set32(c.r[5], c.r[5].w[0] + c.r[16].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[2].w[0] + 12u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 18;
L_0038D714:
    c.budget -= 1;
L_0038D718:
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[5], 0u + 6u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038D6B8u | kUnwind; return; } goto L_0038D6B8; } }
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0038D750:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] - 23712u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0038C000u < 16384u) { entry = entries_00A3[(t - 0x0038C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0038D770:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] - 23696u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 12;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038D7A0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038D7A0u) [[unlikely]] return; }
L_0038D7A0:
    set32(c.r[3], 0u + 4u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0038D7C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0038D7F4; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0038D84C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0038D7F4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0038D824; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0038D824; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0038D824; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0038D84C; } }
L_0038D824:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] - 23664u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038D844u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038D844u) [[unlikely]] return; }
L_0038D844:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0038D84C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0038D860:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0038D870:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00303A20u | kUnwind; return; } [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_0038D880:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] - 23632u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0038C000u < 16384u) { entry = entries_00A3[(t - 0x0038C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0038D8A0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0038D8B0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 29822u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);  if (t) { goto L_0038D8D8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0038D8E4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.budget -= 1;
L_0038D8D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 104u), c.r[3].w[0]);  if (t) { goto L_0038D914; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0038D8E4:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_0038D910; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0038D90C; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 104u), c.r[3].w[0]);  if (t) { goto L_0038D914; } }
L_0038D90C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_0038D910:
    st32((c.r[4].w[0] + 104u), c.r[3].w[0]);
    c.budget -= 1;
L_0038D914:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0038D920:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[5], ld32((c.r[1].w[0] + 30176u)));
    mmi::paddub(c.r[22], c.r[4], c.r[0]);
    set32(c.r[4], 0u + 3u);
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x14800000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[2].d[0] | 32896ull;
    set32(c.r[2], c.r[29].w[0] + 140u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[17], c.r[2].w[0] - 22992u);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 31;
L_0038D99C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[17].w[0]);
    set32(c.r[2], c.r[17].w[0] + 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20368u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 140u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038D9C8u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x0038D9C8u) [[unlikely]] return; }
L_0038D9C8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038D99Cu | kUnwind; return; } goto L_0038D99C; } }
    set32(c.r[2], 0u + 8u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20354u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[20], c.r[2].w[0] - 23600u);
    mmi::paddub(c.r[21], c.r[0], c.r[0]);
    mmi::paddub(c.r[19], c.r[0], c.r[0]);
    c.budget -= 7;
L_0038D9F4:
    set32(c.r[18], c.r[29].w[0] + 144u);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    mmi::paddub(c.r[17], c.r[19], c.r[0]);
    c.budget -= 3;
L_0038DA00:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] - 23248u);
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 1u));
    st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2u));
    st8((c.r[18].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 3u));
    c.budget -= 13;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_0038DA44; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0038DA5C; } }
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.budget -= 1;
L_0038DA44:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_0038DA5C:
    c.f[0] = ld32((c.r[22].w[0] + 104u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038DA68u); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x0038DA68u) [[unlikely]] return; }
L_0038DA68:
    set32(c.r[16], c.r[16].w[0] + 1u);
    st8((c.r[18].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038DA00u | kUnwind; return; } goto L_0038DA00; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[20].w[0]);
    set32(c.r[2], c.r[29].w[0] + 144u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038DAA0u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001C(c, 21u, depth + 1u); else { c.pc = 0x00170680u; return; } if (c.pc != 0x0038DAA0u) [[unlikely]] return; }
L_0038DAA0:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[2].d[0] = c.r[21].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[19], c.r[19].w[0] + 8u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 128u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038D9F4u | kUnwind; return; } goto L_0038D9F4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[16], c.r[2].w[0] - 23152u);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 3;
L_0038DAC0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[16].w[0]);
    set32(c.r[2], c.r[16].w[0] + 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20376u), c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038DAECu); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001B(c, 207u, depth + 1u); else { c.pc = 0x0016FA40u; return; } if (c.pc != 0x0038DAECu) [[unlikely]] return; }
L_0038DAEC:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038DAC0u | kUnwind; return; } goto L_0038DAC0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80800000u);
    set32(c.r[3], c.r[29].w[0] + 140u);
    c.r[2].d[0] = c.r[2].d[0] | 32896ull;
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] - 22896u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] - 22864u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20368u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] - 20416u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038DB40u); st32((c.r[1].w[0] - 20380u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x0038DB40u) [[unlikely]] return; }
L_0038DB40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 3u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038DB58u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0037(c, 147u, depth + 1u); else { c.pc = 0x001DE890u; return; } if (c.pc != 0x0038DB58u) [[unlikely]] return; }
L_0038DB58:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] - 23344u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] - 23184u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    set32(c.r[2], 0u + 3u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 6u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20354u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038DBB8u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001C(c, 21u, depth + 1u); else { c.pc = 0x00170680u; return; } if (c.pc != 0x0038DBB8u) [[unlikely]] return; }
L_0038DBB8:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_0038DBE0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], 0u + 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 384u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[1].w[0] + 29822u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 392u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0038DC10:
    set32(c.r[5], c.r[4].w[0] + 320u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 392u));
    set32(c.r[6], c.r[3].w[0] + 29792u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 29822u));
    c.r[4].d[0] = ~(c.r[4].d[0] | 0ull);
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0038DC44; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 64u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0038DC50; } }
L_0038DC44:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 64u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[5].w[0] + 64u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0038DC50:
    c.r[3].d[0] = ld8((c.r[6].w[0] + 30u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[5].w[0] + 72u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0038DC60:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], c.r[4].w[0] + 320u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 30176u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[17], c.r[2].w[0] + 29792u);
    set32(c.r[3], c.r[29].w[0] + 124u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[3].w[0]);
    set32(c.r[2], 0u + 3u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[20], c.r[2].w[0] - 22848u);
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    c.budget -= 31;
L_0038DCDC:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x80800000u);  if (t) { goto L_0038DE5C; } }
    set32(c.r[4], 0u - 1u);
    mmi::paddub(c.r[3], c.r[0], c.r[0]);
    set32(c.r[2], c.r[17].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_0038DCF4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] + 1u);  goto L_0038DD0C; }
    mmi::paddub(c.r[4], c.r[3], c.r[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
L_0038DD0C:
    c.r[2].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[17].w[0] + c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038DCF4u | kUnwind; return; } goto L_0038DCF4; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[4].w[0] << 2);  if (t) { goto L_0038DD3C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80800000u);
    c.r[3].d[0] = c.r[2].d[0] | 32896ull;
    set32(c.r[2], c.r[29].w[0] + 124u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { goto L_0038DDA8; } }
    set32(c.r[2], c.r[4].w[0] << 2);
    c.budget -= 1;
L_0038DD3C:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[2], 0u + 2u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], c.r[4].w[0] << 1);  if (t) { goto L_0038DD68; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80800000u);
    c.r[3].d[0] = c.r[2].d[0] | 32896ull;
    set32(c.r[2], c.r[29].w[0] + 124u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { goto L_0038DDA8; } }
    set32(c.r[2], c.r[4].w[0] << 1);
    c.budget -= 1;
L_0038DD68:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 112u)));
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    c.r[1].d[0] = c.r[2].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x80800000u);  if (t) { goto L_0038DD98; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[2].d[0] | 29568ull;
    set32(c.r[2], c.r[29].w[0] + 124u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { goto L_0038DDA8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80800000u);
    c.budget -= 1;
L_0038DD98:
    c.r[3].d[0] = c.r[2].d[0] | 32896ull;
    set32(c.r[2], c.r[29].w[0] + 124u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 4;
L_0038DDA8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] - 22272u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], c.r[2].w[0] - 22464u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 58u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] - 20416u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038DDE0u); st32((c.r[1].w[0] - 20368u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x0038DDE0u) [[unlikely]] return; }
L_0038DDE0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 64u)));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_0038DE8C; }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 30u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0038DE88; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80800000u);
    c.r[3].d[0] = c.r[2].d[0] | 32896ull;
    set32(c.r[2], c.r[29].w[0] + 124u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[21], 0u + 2u);
    set32(c.r[19], c.r[2].w[0] - 22752u);
    c.budget -= 8;
L_0038DE20:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[19].w[0]);
    set32(c.r[2], c.r[19].w[0] + 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20368u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038DE40u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x0038DE40u) [[unlikely]] return; }
L_0038DE40:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[2].d[0] = c.r[21].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038DE20u | kUnwind; return; } goto L_0038DE20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0038DE88; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80800000u);
    c.budget -= 1;
L_0038DE5C:
    c.r[3].d[0] = c.r[2].d[0] | 32896ull;
    set32(c.r[2], c.r[29].w[0] + 124u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[20].w[0]);
    set32(c.r[2], c.r[20].w[0] + 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20368u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038DE88u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x0038DE88u) [[unlikely]] return; }
L_0038DE88:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0038DE8C:
    c.r[2].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038DCDCu | kUnwind; return; } goto L_0038DCDC; } }
    set32(c.r[2], c.r[17].w[0] + 320u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80800000u);
    c.r[3].d[0] = c.r[2].d[0] | 32896ull;
    set32(c.r[2], c.r[29].w[0] + 124u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[17], 0u + 6u);
    set32(c.r[16], c.r[2].w[0] - 22560u);
    c.budget -= 13;
L_0038DECC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[16].w[0]);
    set32(c.r[2], c.r[16].w[0] + 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20368u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038DEECu); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x0038DEECu) [[unlikely]] return; }
L_0038DEEC:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038DECCu | kUnwind; return; } goto L_0038DECC; } }
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0038DF20:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0038DF30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0038DF40:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[16], c.r[3].w[0] + 29792u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 29822u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0038E2A8; } }
    set32(c.r[3], 0u + 3u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), 0u);
    set32(c.r[3], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[3].w[0]));
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    mmi::paddub(c.r[22], c.r[0], c.r[0]);
    mmi::paddub(c.r[19], c.r[16], c.r[0]);
    mmi::paddub(c.r[20], c.r[16], c.r[0]);
    c.budget -= 15;
L_0038DFBC:
    set32(c.r[6], ld32((c.r[16].w[0] + 384u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[7], c.r[16].w[0] + c.r[17].w[0]);
    set32(c.r[5], c.r[29].w[0] + 128u);
    st32((c.r[1].w[0] - 20364u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[29].w[0] + 128u), c.r[22].w[0]);
    st32((c.r[1].w[0] - 20392u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 140u), 0u);
    st32((c.r[29].w[0] + 136u), 0u);
    set32(c.r[4], c.r[29].w[0] + 156u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 132u), 0u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 104u)));
    set32(c.r[4], 0u - 1u);
    c.budget -= 18;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[3], c.r[7].w[0] + 104u);  if (t) { goto L_0038E290; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 24u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0038E034; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_0038E030; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_0038E060; } }
    c.budget -= 1;
L_0038E030:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0038E034:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0038E054; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0038E060; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_0038E054:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0038E1A8; } }
    c.budget -= 1;
L_0038E060:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 25672u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x80800000u);  if (t) { goto L_0038E0BC; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_0038E090; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 6u)));
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0038E0B8; } }
    c.budget -= 1;
L_0038E090:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0038E1A8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 64u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 6u)));
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 64u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_0038E1A8; } }
L_0038E0B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80800000u);
    c.budget -= 1;
L_0038E0BC:
    c.r[4].d[0] = c.r[2].d[0] | 32896ull;
    set32(c.r[2], c.r[29].w[0] + 156u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 96u)));  if (t) { goto L_0038E0E8; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_0038E0E8; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 59u));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_0038E0E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] - 21648u);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 384u)));
    st32((c.r[1].w[0] - 20364u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.r[18].d[0] = c.r[3].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[2], c.r[18].w[0] << 1);  if (t) { goto L_0038E174; } }
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[2].w[0] << (c.r[3].w[0] & 31u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00180000u);
    c.r[2].d[0] = c.r[2].d[0] | 57ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[18].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0038E170; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] - 21936u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] - 21904u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20368u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038E16Cu); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x0038E16Cu) [[unlikely]] return; }
L_0038E16C:
    c.budget -= 1;
L_0038E170:
    set32(c.r[2], c.r[18].w[0] << 1);
    c.budget -= 1;
L_0038E174:
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[3], c.r[2].w[0] << 4);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] - 22032u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20368u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038E1A8u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x0038E1A8u) [[unlikely]] return; }
L_0038E1A8:
    set32(c.r[6], ld32((c.r[16].w[0] + 384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[4].d[0] = c.r[2].d[0] | 29568ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], c.r[29].w[0] + 156u);
    st32((c.r[1].w[0] - 20364u), c.r[6].w[0]);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[5], c.r[2].w[0] - 22032u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 64u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], c.r[2].w[0] - 22032u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] - 20416u);
    set32(c.r[6], c.r[6].w[0] + 6u);
    set32(c.r[2], c.r[6].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 64u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[5], c.r[2].w[0] + 6u);
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 32u);
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038E224u); st32((c.r[1].w[0] - 20368u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x0038E224u) [[unlikely]] return; }
L_0038E224:
    set32(c.r[2], 0u + 5u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20354u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[18], c.r[2].w[0] - 22240u);
    mmi::paddub(c.r[21], c.r[0], c.r[0]);
    c.budget -= 7;
L_0038E240:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[18].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 64u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], c.r[2].w[0] - 22080u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] - 20416u);
    c.r[5].d[0] = c.r[5].d[0] ^ c.r[21].d[0];
    c.r[5].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038E280u); st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001C(c, 21u, depth + 1u); else { c.pc = 0x00170680u; return; } if (c.pc != 0x0038E280u) [[unlikely]] return; }
L_0038E280:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[3].d[0] = c.r[21].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 80u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038E240u | kUnwind; return; } goto L_0038E240; } }
L_0038E290:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 4ll ? 1ull : 0ull;
    set32(c.r[22], c.r[22].w[0] + 144u);
    set32(c.r[19], c.r[19].w[0] + 4u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038DFBCu | kUnwind; return; } goto L_0038DFBC; } }
L_0038E2A8:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0038E2D0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[5], c.r[4].w[0] + 320u);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    mmi::paddub(c.r[7], c.r[5], c.r[0]);
    mmi::paddub(c.r[8], c.r[5], c.r[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 8;
L_0038E2F0:
    set32(c.r[3], c.r[5].w[0] + c.r[6].w[0]);
    st8((c.r[3].w[0] + 68u), static_cast<std::uint8_t>(0u));
    st32((c.r[7].w[0]), c.r[4].w[0]);
    st32((c.r[7].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[8].w[0] + 32u), 0u);
    st32((c.r[8].w[0] + 48u), c.r[4].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[3].w[0] + 76u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;
    set32(c.r[7], c.r[7].w[0] + 8u);
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038E2F0u | kUnwind; return; } goto L_0038E2F0; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0038E330:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], c.r[4].w[0] + 320u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[17], c.r[3].w[0] + 29792u);
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    mmi::paddub(c.r[19], c.r[16], c.r[0]);
    mmi::paddub(c.r[20], c.r[16], c.r[0]);
    mmi::paddub(c.r[21], c.r[17], c.r[0]);
    c.budget -= 15;
L_0038E36C:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 16u));
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], c.r[5].w[0] << (c.r[18].w[0] & 31u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[16].w[0] + c.r[18].w[0]);  if (t) { goto L_0038E4BC; } }
    set32(c.r[7], c.r[16].w[0] + c.r[18].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 76u)));
    set32(c.r[4], 0u + 2u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; set32(c.r[6], c.r[7].w[0] + 76u);  if (t) { goto L_0038E428; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_0038E3CC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0038E3B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { goto L_0038E4C4; } }
L_0038E3B0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[3], 0u + 10u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[7].w[0] + 64u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[7].w[0] + 68u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_0038E4C0; } }
L_0038E3CC:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 64u)));
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st8((c.r[7].w[0] + 64u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0038E3FC; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[19].w[0] + 4u), 0u);
    st32((c.r[20].w[0] + 32u), c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 48u), c.r[3].w[0]);  if (t) { goto L_0038E4C0; } }
L_0038E3FC:
    c.f[0] = ld32((c.r[19].w[0] + 4u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 32u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 32u), c.f[0]);  if (t) { goto L_0038E4C0; } }
L_0038E428:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 30u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_0038E4B0; } }
    set32(c.r[3], c.r[17].w[0] + c.r[18].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0038E4AC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0038E4AC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[20].w[0] + 48u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 112u)));
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038E46Cu); set32(c.r[4], c.r[2].w[0] << 12);  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x0038E46Cu) [[unlikely]] return; }
L_0038E46C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038E47Cu); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 115u, depth + 1u); else { c.pc = 0x0011DF88u; return; } if (c.pc != 0x0038E47Cu) [[unlikely]] return; }
L_0038E47C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3FD00000u);
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038E48Cu); mmi::paddub(c.r[5], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0007(c, 14u, depth + 1u); else { c.pc = 0x0011CB00u; return; } if (c.pc != 0x0038E48Cu) [[unlikely]] return; }
L_0038E48C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3FE00000u);
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038E49Cu); mmi::paddub(c.r[5], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0007(c, 14u, depth + 1u); else { c.pc = 0x0011CB00u; return; } if (c.pc != 0x0038E49Cu) [[unlikely]] return; }
L_0038E49C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038E4A4u); mmi::paddub(c.r[4], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0007(c, 61u, depth + 1u); else { c.pc = 0x0011D390u; return; } if (c.pc != 0x0038E4A4u) [[unlikely]] return; }
L_0038E4A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 48u), c.f[0]);  if (t) { goto L_0038E4C0; } }
L_0038E4AC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_0038E4B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 48u), c.r[3].w[0]);  if (t) { goto L_0038E4C0; } }
    set32(c.r[3], c.r[16].w[0] + c.r[18].w[0]);
    c.budget -= 1;
L_0038E4BC:
    st8((c.r[3].w[0] + 68u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0038E4C0:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0038E4C4:
    c.r[3].d[0] = c.r[18].sd[0] < 4ll ? 1ull : 0ull;
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[20], c.r[20].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[21], c.r[21].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038E36Cu | kUnwind; return; } goto L_0038E36C; } }
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0038E500:
    set32(c.r[29], c.r[29].w[0] - 288u);
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
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[6], ld32((c.r[1].w[0] + 30176u)));
    set32(c.r[3], c.r[4].w[0] + 320u);
    st32((c.r[29].w[0] + 160u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[30], c.r[3].w[0] + 29792u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[6].w[0]);
    set32(c.r[3], 0u + 3u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[3].w[0]);
    set32(c.r[3], c.r[29].w[0] + 224u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 236u), 0u);
    st32((c.r[29].w[0] + 232u), 0u);
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[3].w[0]));
    mmi::paddub(c.r[23], c.r[0], c.r[0]);
    c.r[1].d[0] = c.r[23].sd[0] < 4ll ? 1ull : 0ull;
    st32((c.r[29].w[0] + 224u), 0u);
    c.budget -= 35;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[29].w[0] + 176u), 0u);  if (t) { goto L_0038E908; } }
    set32(c.r[3], c.r[23].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[23].w[0]);
    set32(c.r[6], c.r[3].w[0] << 4);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], c.r[3].w[0] - 21216u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[29].w[0] + 192u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[6], c.r[23].w[0] << 2);
    set32(c.r[19], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[23].w[0] << 3);
    set32(c.r[20], c.r[3].w[0] + c.r[6].w[0]);
    c.budget -= 12;
L_0038E5BC:
    set32(c.r[3], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[3], c.r[3].w[0] + c.r[23].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 68u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0038E8E8; } }
    c.r[8].d[0] = ld8((c.r[30].w[0] + 30u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[6], 0u + 1u);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    set32(c.r[3], c.r[3].w[0] - 21024u);
    c.r[8].d[0] = c.r[8].d[0] & 1ull;
    if (c.r[8].d[0] == 0) c.r[7].d[0] = c.r[6].d[0];
    set32(c.r[6], c.r[7].w[0] << 2);
    set32(c.r[22], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[8], ld32((c.r[22].w[0])));
    set32(c.r[3], c.r[29].w[0] + 228u);
    set32(c.r[6], 0u + 3u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[3].w[0]), c.r[8].w[0]);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[7], c.r[29].w[0] + 252u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[7].w[0]);
    c.r[3].d[0] = ld8((c.r[30].w[0] + 30u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 22;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[6], c.r[30].w[0] + c.r[23].w[0]);  if (t) { goto L_0038E67C; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 6u)));
    set32(c.r[3], c.r[30].w[0] + c.r[6].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 24u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0038E678; } }
    c.budget -= 2;
    { const bool t = c.r[23].d[0] != c.r[6].d[0];  if (t) { goto L_0038E678; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].d[0] = c.r[2].d[0] | 29568ull;
    st32((c.r[7].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20368u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038E678u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x0038E678u) [[unlikely]] return; }
L_0038E678:
    set32(c.r[6], c.r[30].w[0] + c.r[23].w[0]);
    c.budget -= 1;
L_0038E67C:
    set32(c.r[3], c.r[6].w[0] + 24u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 24u)));
    st32((c.r[29].w[0] + 208u), c.r[3].w[0]);
    set32(c.r[3], 0u + 1u);
    set32(c.r[6], c.r[3].w[0] << (c.r[6].w[0] & 31u));
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[6].d[0];
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0038E8E8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 6u)));
    c.budget -= 4;
    { const bool t = c.r[23].d[0] != c.r[3].d[0];  if (t) { goto L_0038E8E8; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[21], c.r[29].w[0] + 256u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    mmi::paddub(c.r[18], c.r[21], c.r[0]);
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[2], 0u + 2u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 8u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20354u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[17], c.r[2].w[0] - 21280u);
    c.budget -= 14;
L_0038E6E8:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 32u));
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 33u));
    st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 34u));
    st8((c.r[18].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 35u));
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_0038E71C; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0038E734; } }
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.budget -= 1;
L_0038E71C:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_0038E734:
    c.f[0] = ld32((c.r[19].w[0] + 32u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038E740u); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x0038E740u) [[unlikely]] return; }
L_0038E740:
    set32(c.r[16], c.r[16].w[0] + 1u);
    st8((c.r[18].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038E6E8u | kUnwind; return; } goto L_0038E6E8; } }
    set32(c.r[16], c.r[28].w[0] - 26976u);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 2;
L_0038E760:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 4u)));
    c.f[0] = ld32((c.r[22].w[0]));
    c.f[1] = ld32((c.r[20].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.f[2] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[2] = fp::mul(c.f[2], c.f[1]);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::add(c.f[1], c.f[2]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038E798u); c.f[12] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x0038E798u) [[unlikely]] return; }
L_0038E798:
    set32(c.r[3], c.r[29].w[0] + 228u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] - 21472u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 256u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038E7C8u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001C(c, 21u, depth + 1u); else { c.pc = 0x00170680u; return; } if (c.pc != 0x0038E7C8u) [[unlikely]] return; }
L_0038E7C8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038E760u | kUnwind; return; } goto L_0038E760; } }
    c.r[3].d[0] = ld8((c.r[30].w[0] + 30u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0038E808; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 208u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0038E8E8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 6u)));
    c.budget -= 4;
    { const bool t = c.r[23].d[0] != c.r[3].d[0];  if (t) { goto L_0038E8E8; } }
L_0038E808:
    c.f[1] = ld32((c.r[20].w[0] + 4u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0038E8E8; } }
    set32(c.r[3], ld32((c.r[22].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[16], c.r[2].w[0] - 21280u);
    set32(c.r[2], c.r[29].w[0] + 228u);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 7;
L_0038E840:
    c.r[2].d[0] = ld8((c.r[16].w[0]));
    st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1u));
    st8((c.r[21].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 2u));
    st8((c.r[21].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 3u));
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_0038E874; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0038E88C; } }
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.budget -= 1;
L_0038E874:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_0038E88C:
    c.f[0] = ld32((c.r[19].w[0] + 48u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038E898u); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x0038E898u) [[unlikely]] return; }
L_0038E898:
    set32(c.r[17], c.r[17].w[0] + 1u);
    st8((c.r[21].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[21], c.r[21].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038E840u | kUnwind; return; } goto L_0038E840; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] - 21600u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] - 21344u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20368u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 256u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038E8E8u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001C(c, 30u, depth + 1u); else { c.pc = 0x00170A40u; return; } if (c.pc != 0x0038E8E8u) [[unlikely]] return; }
L_0038E8E8:
    set32(c.r[3], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[23], c.r[23].w[0] + 1u);
    set32(c.r[19], c.r[19].w[0] + 4u);
    set32(c.r[3], c.r[3].w[0] + 48u);
    st32((c.r[29].w[0] + 192u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[23].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038E5BCu | kUnwind; return; } goto L_0038E5BC; } }
L_0038E908:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 288u);  c.pc = t; return; }
L_0038E940:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[7], c.r[4].w[0] + 320u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[8], c.r[5].w[0] + 29792u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    mmi::paddub(c.r[9], c.r[0], c.r[0]);
    mmi::paddub(c.r[10], c.r[7], c.r[0]);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    mmi::paddub(c.r[11], c.r[7], c.r[0]);
    set32(c.r[6], 0u + 10u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 11;
L_0038E96C:
    set32(c.r[12], c.r[7].w[0] + c.r[9].w[0]);
    st8((c.r[12].w[0] + 64u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[3], c.r[8].w[0] + c.r[9].w[0]);
    st8((c.r[12].w[0] + 68u), static_cast<std::uint8_t>(0u));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 32u)));
    set32(c.r[9], c.r[9].w[0] + 1u);
    st8((c.r[12].w[0] + 72u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[10].w[0]), c.r[4].w[0]);
    st32((c.r[10].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[11].w[0] + 32u), 0u);
    st32((c.r[11].w[0] + 48u), 0u);
    c.r[3].d[0] = c.r[9].sd[0] < 4ll ? 1ull : 0ull;
    set32(c.r[10], c.r[10].w[0] + 8u);
    set32(c.r[11], c.r[11].w[0] + 4u);
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != 0ull; st8((c.r[12].w[0] + 76u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038E96Cu | kUnwind; return; } goto L_0038E96C; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0038E9C0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], c.r[4].w[0] + 320u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[17], c.r[3].w[0] + 29792u);
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    mmi::paddub(c.r[19], c.r[16], c.r[0]);
    mmi::paddub(c.r[20], c.r[16], c.r[0]);
    mmi::paddub(c.r[21], c.r[17], c.r[0]);
    c.budget -= 15;
L_0038E9FC:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 16u));
    set32(c.r[7], 0u + 1u);
    set32(c.r[3], c.r[7].w[0] << (c.r[18].w[0] & 31u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[16].w[0] + c.r[18].w[0]);  if (t) { goto L_0038ED08; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 30u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0038ED04; } }
    set32(c.r[8], c.r[17].w[0] + c.r[18].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 32u)));
    set32(c.r[3], c.r[16].w[0] + c.r[18].w[0]);
    st8((c.r[3].w[0] + 72u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[3].w[0] + 76u);  if (t) { goto L_0038ED30; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[6], c.r[6].w[0] - 11824u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[5].w[0];  c.pc = t; if (t - 0x0038C000u < 16384u) { entry = entries_00A3[(t - 0x0038C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0038EA60:
    set32(c.r[5], 0u + 1u);
    st8((c.r[3].w[0] + 68u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 64u)));
    set32(c.r[7], c.r[3].w[0] + 64u);
    set32(c.r[5], c.r[6].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[6].d[0] != 0ull; st8((c.r[3].w[0] + 64u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_0038EAA4; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], 0u + 16u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[19].w[0] + 4u), 0u);
    st32((c.r[20].w[0] + 32u), c.r[5].w[0]);
    st32((c.r[20].w[0] + 48u), c.r[5].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0038ED30; } }
L_0038EAA4:
    c.f[0] = ld32((c.r[19].w[0] + 4u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 32u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[20].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 48u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 48u), c.f[0]);  if (t) { goto L_0038ED30; } }
L_0038EADC:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[7].d[0];  if (t) { goto L_0038EB28; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0])));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[7].d[0];  if (t) { goto L_0038EB28; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 1u)));
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_0038EB28; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], 0u + 10u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[19].w[0]), 0u);
    st32((c.r[19].w[0] + 4u), c.r[6].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 64u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_0038ED30; } }
L_0038EB28:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0])));
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_0038EB4C; } }
    set32(c.r[5], 0u + 4u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[4], 0u + 10u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 64u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0038ED30; } }
L_0038EB4C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 64u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 64u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 64u)));
    c.r[2].d[0] = c.r[2].d[0] & 63ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038EB68u); set32(c.r[4], c.r[2].w[0] << 10);  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x0038EB68u) [[unlikely]] return; }
L_0038EB68:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038EB78u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 115u, depth + 1u); else { c.pc = 0x0011DF88u; return; } if (c.pc != 0x0038EB78u) [[unlikely]] return; }
L_0038EB78:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3FD00000u);
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038EB88u); mmi::paddub(c.r[5], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0007(c, 14u, depth + 1u); else { c.pc = 0x0011CB00u; return; } if (c.pc != 0x0038EB88u) [[unlikely]] return; }
L_0038EB88:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3FE00000u);
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038EB98u); mmi::paddub(c.r[5], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0007(c, 14u, depth + 1u); else { c.pc = 0x0011CB00u; return; } if (c.pc != 0x0038EB98u) [[unlikely]] return; }
L_0038EB98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038EBA0u); mmi::paddub(c.r[4], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0007(c, 61u, depth + 1u); else { c.pc = 0x0011D390u; return; } if (c.pc != 0x0038EBA0u) [[unlikely]] return; }
L_0038EBA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 48u), c.f[0]);  if (t) { goto L_0038ED30; } }
L_0038EBA8:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 64u)));
    set32(c.r[7], c.r[3].w[0] + 64u);
    set32(c.r[5], c.r[6].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != 0ull; st8((c.r[3].w[0] + 64u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_0038EBE8; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], 0u + 16u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[19].w[0]), c.r[5].w[0]);
    st32((c.r[19].w[0] + 4u), 0u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[20].w[0] + 32u), c.r[5].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 48u), c.r[5].w[0]);  if (t) { goto L_0038ED30; } }
L_0038EBE8:
    c.f[0] = ld32((c.r[19].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[19].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 4u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 4u), c.f[0]);  if (t) { goto L_0038ED30; } }
L_0038EC14:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0])));
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_0038EC38; } }
    set32(c.r[5], 0u + 6u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[4], 0u + 10u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 64u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0038ED30; } }
L_0038EC38:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 64u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 64u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 64u)));
    c.r[2].d[0] = c.r[2].d[0] & 63ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038EC54u); set32(c.r[4], c.r[2].w[0] << 10);  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x0038EC54u) [[unlikely]] return; }
L_0038EC54:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038EC64u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 115u, depth + 1u); else { c.pc = 0x0011DF88u; return; } if (c.pc != 0x0038EC64u) [[unlikely]] return; }
L_0038EC64:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3FD00000u);
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038EC74u); mmi::paddub(c.r[5], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0007(c, 14u, depth + 1u); else { c.pc = 0x0011CB00u; return; } if (c.pc != 0x0038EC74u) [[unlikely]] return; }
L_0038EC74:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3FE00000u);
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038EC84u); mmi::paddub(c.r[5], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0007(c, 14u, depth + 1u); else { c.pc = 0x0011CB00u; return; } if (c.pc != 0x0038EC84u) [[unlikely]] return; }
L_0038EC84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038EC8Cu); mmi::paddub(c.r[4], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0007(c, 61u, depth + 1u); else { c.pc = 0x0011D390u; return; } if (c.pc != 0x0038EC8Cu) [[unlikely]] return; }
L_0038EC8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 48u), c.f[0]);  if (t) { goto L_0038ED30; } }
L_0038EC94:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 64u)));
    set32(c.r[5], c.r[6].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != 0ull; st8((c.r[3].w[0] + 64u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_0038ECB8; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 68u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0038ED30; } }
L_0038ECB8:
    c.f[1] = ld32((c.r[19].w[0] + 4u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBDCC0000u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    st32((c.r[19].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 32u));
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[20].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 48u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 48u), c.f[0]);  if (t) { goto L_0038ED30; } }
L_0038ECFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 68u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0038ED30; } }
L_0038ED04:
    set32(c.r[4], c.r[16].w[0] + c.r[18].w[0]);
    c.budget -= 1;
L_0038ED08:
    st8((c.r[4].w[0] + 68u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 76u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 31u);  if (t) { goto L_0038ED28; } }
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 64u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0038ED30; } }
    set32(c.r[3], 0u + 31u);
    c.budget -= 1;
L_0038ED28:
    st8((c.r[4].w[0] + 64u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0038ED30:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 4ll ? 1ull : 0ull;
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[20], c.r[20].w[0] + 4u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[21], c.r[21].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038E9FCu | kUnwind; return; } goto L_0038E9FC; } }
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0038ED70:
    set32(c.r[29], c.r[29].w[0] - 448u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    set32(c.r[3], c.r[4].w[0] + 320u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st32((c.r[29].w[0] + 160u), c.r[3].w[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    set32(c.r[3], c.r[3].w[0] + 29792u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st32((c.r[29].w[0] + 176u), c.r[3].w[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 268u), 0u);
    set32(c.r[3], 0u + 3u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[3].w[0]);
    set32(c.r[3], c.r[29].w[0] + 256u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), c.r[3].w[0]);
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[29].w[0] + 260u);
    st32((c.r[29].w[0] + 264u), 0u);
    st32((c.r[3].w[0]), 0u);
    st32((c.r[29].w[0] + 192u), 0u);
    set32(c.r[3], ld32((c.r[29].w[0] + 192u)));
    c.r[1].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 34;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0038F420; } }
    set32(c.r[5], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[3].w[0] << 4);
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[29].w[0] + 240u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], c.r[3].w[0] - 20272u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[29].w[0] + 208u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[29].w[0] + 224u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[23], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[4], c.r[3].w[0] << 3);
    set32(c.r[3], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[19], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 21;
L_0038EE4C:
    set32(c.r[4], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[16], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 68u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0038F3D8; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[20], c.r[3].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 32u)));
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    st32((c.r[29].w[0] + 256u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 76u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[22], c.r[20].w[0] + 32u);  if (t) { goto L_0038EEC8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[3].w[0] - 11792u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0038C000u < 16384u) { entry = entries_00A3[(t - 0x0038C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0038EEB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[30], c.r[0], c.r[0]);  if (t) { goto L_0038EEC8; } }
L_0038EEB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[30], 0u + 1u);  if (t) { goto L_0038EEC8; } }
L_0038EEC0:
    set32(c.r[30], 0u + 2u);
    c.budget -= 2;
L_0038EEC8:
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], 0u + 3u);
    set32(c.r[4], c.r[29].w[0] + 412u);
    set32(c.r[5], ld32((c.r[2].w[0] + 384u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    st32((c.r[1].w[0] - 20364u), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 6u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x80800000u);  if (t) { goto L_0038EF18; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].d[0] = c.r[2].d[0] | 29568ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_0038EF20; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80800000u);
    c.budget -= 1;
L_0038EF18:
    c.r[2].d[0] = c.r[2].d[0] | 32896ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_0038EF20:
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20368u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038EF44u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x0038EF44u) [[unlikely]] return; }
L_0038EF44:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80800000u);
    c.r[3].d[0] = c.r[2].d[0] | 32896ull;
    set32(c.r[2], c.r[29].w[0] + 412u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 24u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0038F0A0; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 224u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0038F0A0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 64u)));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0038F0A0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] - 19856u);
    set32(c.r[3], c.r[30].w[0] << 3);
    set32(c.r[21], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[16], 0u + 4u);
    set32(c.r[17], c.r[21].w[0] + 8u);
    set32(c.r[18], c.r[2].w[0] - 20080u);
    c.budget -= 9;
L_0038EFA8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] - 8u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 32u)));
    c.f[0] = ld32((c.r[19].w[0]));
    c.f[1] = c.r[2].w[0];
    set32(c.r[3], c.r[6].w[0] << 3);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[3].w[0] << 4);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[2] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[2]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038EFE0u); c.f[12] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x0038EFE0u) [[unlikely]] return; }
L_0038EFE0:
    st32((c.r[29].w[0] + 256u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 6u)));
    c.f[0] = ld32((c.r[19].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 4u)));
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038F014u); c.f[12] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x0038F014u) [[unlikely]] return; }
L_0038F014:
    set32(c.r[3], c.r[29].w[0] + 260u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 224u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0038F06C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0038F06C; } }
    set32(c.r[3], c.r[16].w[0] + 2u);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 4);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] - 20272u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] - 20368u), c.r[2].w[0]);  if (t) { goto L_0038F080; } }
L_0038F06C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[18].w[0]);
    set32(c.r[2], c.r[18].w[0] + 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20368u), c.r[2].w[0]);
    c.budget -= 5;
L_0038F080:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038F08Cu); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x0038F08Cu) [[unlikely]] return; }
L_0038F08C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 6ll ? 1ull : 0ull;
    set32(c.r[17], c.r[17].w[0] + 2u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038EFA8u | kUnwind; return; } goto L_0038EFA8; } }
L_0038F0A0:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0])));
    set32(c.r[20], c.r[29].w[0] + 416u);
    set32(c.r[3], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 8u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20354u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[6].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    st32((c.r[29].w[0] + 256u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[16], c.r[2].w[0] - 20336u);
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    mmi::paddub(c.r[17], c.r[20], c.r[0]);
    c.budget -= 16;
L_0038F0E0:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 32u));
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 33u));
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 34u));
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 35u));
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_0038F114; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0038F12C; } }
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.budget -= 1;
L_0038F114:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_0038F12C:
    c.f[0] = ld32((c.r[23].w[0] + 32u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038F138u); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x0038F138u) [[unlikely]] return; }
L_0038F138:
    set32(c.r[18], c.r[18].w[0] + 1u);
    st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[18].sd[0] < 8ll ? 1ull : 0ull;
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038F0E0u | kUnwind; return; } goto L_0038F0E0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] - 19888u);
    set32(c.r[3], c.r[30].w[0] << 3);
    set32(c.r[21], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], c.r[21].w[0] + 0u);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 6;
L_0038F168:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 4u)));
    c.f[0] = ld32((c.r[19].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038F198u); c.f[12] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x0038F198u) [[unlikely]] return; }
L_0038F198:
    set32(c.r[3], c.r[29].w[0] + 260u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] - 20880u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 416u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038F1C8u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001C(c, 21u, depth + 1u); else { c.pc = 0x00170680u; return; } if (c.pc != 0x0038F1C8u) [[unlikely]] return; }
L_0038F1C8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038F168u | kUnwind; return; } goto L_0038F168; } }
    set32(c.r[2], c.r[29].w[0] + 260u);
    st32((c.r[2].w[0]), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[16], c.r[2].w[0] - 20336u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[17], c.r[2].w[0] - 21008u);
    set32(c.r[18], c.r[29].w[0] + 272u);
    mmi::paddub(c.r[22], c.r[0], c.r[0]);
    c.budget -= 8;
L_0038F1F8:
    c.r[2].d[0] = ld8((c.r[16].w[0]));
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1u));
    st8((c.r[20].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 2u));
    st8((c.r[20].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 3u));
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_0038F22C; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0038F244; } }
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.budget -= 1;
L_0038F22C:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_0038F244:
    c.f[0] = ld32((c.r[23].w[0] + 48u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038F250u); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x0038F250u) [[unlikely]] return; }
L_0038F250:
    c.budget -= 2;
    { const bool t = c.r[30].d[0] != 0ull; st8((c.r[20].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0038F26C; } }
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0])));
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_0038F308; } }
L_0038F26C:
    c.budget -= 2;
    { const bool t = c.r[22].sd[0] >= 0; c.r[2].d[0] = c.r[22].d[0] & 1ull;  if (t) { goto L_0038F280; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0038F280; } }
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.budget -= 1;
L_0038F280:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0038F2C8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 4u)));
    c.f[0] = ld32((c.r[19].w[0] + 4u));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0])));
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[2] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[2]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038F2C0u); c.f[12] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x0038F2C0u) [[unlikely]] return; }
L_0038F2C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_0038F308; } }
L_0038F2C8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 6u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 4u)));
    c.f[0] = ld32((c.r[19].w[0] + 4u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 2u)));
    c.f[1] = c.r[2].w[0];
    set32(c.r[6], c.r[6].w[0] - 100u);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[2] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[2]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038F300u); c.f[12] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x0038F300u) [[unlikely]] return; }
L_0038F300:
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 2;
L_0038F308:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[22], c.r[22].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[20], c.r[20].w[0] + 4u);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[17].w[0] + 8u)));
    c.r[3].d[0] = c.r[22].sd[0] < 8ll ? 1ull : 0ull;
    st32((c.r[18].w[0] + 8u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[17].w[0] + 12u)));
    st32((c.r[18].w[0] + 12u), c.r[6].w[0]);
    set32(c.r[17], c.r[17].w[0] + 16u);
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038F1F8u | kUnwind; return; } goto L_0038F1F8; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 25672u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[2], c.r[29].w[0] + 272u);  goto L_0038F3A4; }
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0038F370; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 6u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 192u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_0038F3A0; } }
    c.budget -= 1;
L_0038F370:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0038F3D8; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 240u)));
    set32(c.r[5], ld32((c.r[28].w[0] - 26304u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 64u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 6u)));
    set32(c.r[5], c.r[3].w[0] << 1);
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 64u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0038F3D8; } }
L_0038F3A0:
    set32(c.r[2], c.r[29].w[0] + 272u);
    c.budget -= 1;
L_0038F3A4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] - 20368u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20368u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 416u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038F3D4u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001C(c, 30u, depth + 1u); else { c.pc = 0x00170A40u; return; } if (c.pc != 0x0038F3D4u) [[unlikely]] return; }
L_0038F3D4:
    c.budget -= 1;
L_0038F3D8:
    set32(c.r[3], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[3], c.r[3].w[0] + 48u);
    st32((c.r[29].w[0] + 208u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 224u)));
    set32(c.r[3], c.r[3].w[0] + 4u);
    st32((c.r[29].w[0] + 224u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 240u)));
    set32(c.r[3], c.r[3].w[0] + 2u);
    st32((c.r[29].w[0] + 240u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 192u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 192u)));
    c.r[3].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 17;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[23], c.r[23].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038EE4Cu | kUnwind; return; } goto L_0038EE4C; } }
    c.budget -= 1;
L_0038F420:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 448u);  c.pc = t; return; }
L_0038F450:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], 0u + 16u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 384u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0038F470:
    set32(c.r[5], c.r[4].w[0] + 320u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 392u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 29822u));
    c.r[4].d[0] = ~(c.r[4].d[0] | 0ull);
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0038F49C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 64u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0038F4A8; } }
L_0038F49C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 64u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[5].w[0] + 64u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0038F4A8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0038F4B0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[16], c.r[2].w[0] + 29792u);
    set32(c.r[2], c.r[29].w[0] + 156u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    set32(c.r[2], 0u + 3u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[18], c.r[2].w[0] - 19824u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[20], c.r[2].w[0] - 19632u);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    mmi::paddub(c.r[19], c.r[0], c.r[0]);
    c.budget -= 23;
L_0038F50C:
    set32(c.r[2], c.r[16].w[0] + c.r[17].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 24u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x80400000u);  if (t) { goto L_0038F538; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[2].d[0] | 29568ull;
    set32(c.r[2], c.r[29].w[0] + 156u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { goto L_0038F548; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80400000u);
    c.budget -= 1;
L_0038F538:
    c.r[3].d[0] = c.r[2].d[0] | 16448ull;
    set32(c.r[2], c.r[29].w[0] + 156u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 4;
L_0038F548:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), 0u);
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[16].w[0] + 384u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], c.r[18].w[0] + 32u);
    set32(c.r[4], c.r[2].w[0] - 20416u);
    st32((c.r[1].w[0] - 20364u), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[18].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038F588u); st32((c.r[1].w[0] - 20368u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x0038F588u) [[unlikely]] return; }
L_0038F588:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] - 19584u);
    ld128((c.r[2].w[0]) & ~15u, c.r[5]);
    set32(c.r[6], c.r[29].w[0] + 128u);
    set32(c.r[3], c.r[29].w[0] + 156u);
    set32(c.r[10], c.r[29].w[0] + 150u);
    st128((c.r[6].w[0]) & ~15u, c.r[5]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80800000u);
    c.r[4].d[0] = c.r[2].d[0] | 32896ull;
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[2], 0u + 1u);
    set32(c.r[5], c.r[29].w[0] + 148u);
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[29].w[0] + 144u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[10].w[0]), static_cast<std::uint16_t>(c.r[19].w[0]));
    st16((c.r[29].w[0] + 146u), static_cast<std::uint16_t>(c.r[19].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[9], c.r[2].w[0] - 19616u);
    set32(c.r[2], c.r[29].w[0] + 112u);
    set32(c.r[4], c.r[4].w[0] + 160u);
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[10].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], c.r[29].w[0] + 116u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[7], c.r[29].w[0] + 96u);
    set32(c.r[8], c.r[8].w[0] + 22u);
    st16((c.r[10].w[0]), static_cast<std::uint16_t>(c.r[8].w[0]));
    set32(c.r[10], ld32((c.r[28].w[0] - 26304u)));
    c.r[8].d[0] = ld16((c.r[20].w[0]));
    set32(c.r[6], c.r[29].w[0] + 144u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[10], c.r[10].w[0] + c.r[17].w[0]);
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 368u)));
    set32(c.r[4], c.r[4].w[0] - 20416u);
    set32(c.r[10], c.r[10].w[0] << 1);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    c.r[9].d[0] = ld16((c.r[9].w[0]));
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    st32((c.r[2].w[0]), c.r[8].w[0]);
    st32((c.r[29].w[0] + 96u), c.r[8].w[0]);
    c.r[8].d[0] = ld16((c.r[20].w[0] + 2u));
    st32((c.r[3].w[0]), c.r[8].w[0]);
    st32((c.r[29].w[0] + 100u), c.r[8].w[0]);
    set32(c.r[8], ld32((c.r[2].w[0])));
    set32(c.r[8], c.r[8].w[0] + 128u);
    st32((c.r[2].w[0]), c.r[8].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 9u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26276u)));
    st32((c.r[1].w[0] - 20364u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[7].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20368u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 60;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038F678u); st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x0038F678u) [[unlikely]] return; }
L_0038F678:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80200000u);
    c.r[3].d[0] = c.r[2].d[0] | 8224ull;
    set32(c.r[2], c.r[29].w[0] + 156u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], 0u + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[29].w[0] + 128u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038F6ACu); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x0038F6ACu) [[unlikely]] return; }
L_0038F6AC:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 4ll ? 1ull : 0ull;
    set32(c.r[18], c.r[18].w[0] + 48u);
    set32(c.r[19], c.r[19].w[0] + 24u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038F50Cu | kUnwind; return; } goto L_0038F50C; } }
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0038F6F0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 384u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 385u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_0038F710:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 29822u));
    set32(c.r[7], c.r[4].w[0] + 320u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[8], c.r[4].w[0] + 29792u);  if (t) { goto L_0038F764; } }
    c.r[4].d[0] = c.r[5].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[3], c.r[4].w[0] + c.r[8].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 24u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[4].w[0] + c.r[7].w[0]);  if (t) { goto L_0038F758; } }
    set32(c.r[3], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 76u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0038F85C; } }
    set32(c.r[3], c.r[4].w[0] + c.r[7].w[0]);
    c.budget -= 1;
L_0038F758:
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 76u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0038F85C; } }
L_0038F764:
    c.r[9].d[0] = c.r[5].d[0] << 56;
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 56);
    set32(c.r[6], c.r[9].w[0] + c.r[8].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 24u)));
    set32(c.r[4], 0u + 2u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; set32(c.r[5], 0u + 1u);  if (t) { goto L_0038F790; } }
    set32(c.r[3], c.r[9].w[0] + c.r[7].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 76u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0038F85C; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_0038F790:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; set32(c.r[3], c.r[9].w[0] + c.r[7].w[0]);  if (t) { goto L_0038F854; } }
    set32(c.r[3], c.r[9].w[0] << 2);
    set32(c.r[4], c.r[8].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0038F7D8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[9].w[0] + c.r[7].w[0]);  if (t) { goto L_0038F7CC; } }
    set32(c.r[3], c.r[9].w[0] + c.r[7].w[0]);
    set32(c.r[4], 0u + 3u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 76u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0038F85C; } }
    set32(c.r[3], c.r[9].w[0] + c.r[7].w[0]);
    c.budget -= 1;
L_0038F7CC:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 76u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0038F85C; } }
L_0038F7D8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; set32(c.r[3], c.r[9].w[0] + c.r[7].w[0]);  if (t) { goto L_0038F844; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0038F80C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0038F808; } }
    set32(c.r[3], c.r[9].w[0] + c.r[7].w[0]);
    set32(c.r[4], 0u + 3u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 76u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0038F85C; } }
L_0038F808:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0038F80C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_0038F828; } }
    set32(c.r[3], c.r[9].w[0] + c.r[7].w[0]);
    set32(c.r[4], 0u + 4u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 76u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0038F85C; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_0038F828:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0038F840; } }
    set32(c.r[3], c.r[9].w[0] + c.r[7].w[0]);
    set32(c.r[4], 0u + 4u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 76u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0038F85C; } }
L_0038F840:
    set32(c.r[3], c.r[9].w[0] + c.r[7].w[0]);
    c.budget -= 1;
L_0038F844:
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 76u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0038F85C; } }
    set32(c.r[3], c.r[9].w[0] + c.r[7].w[0]);
    c.budget -= 1;
L_0038F854:
    set32(c.r[4], 0u + 5u);
    st8((c.r[3].w[0] + 76u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 2;
L_0038F85C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0038F870:
    mmi::paddub(c.r[15], c.r[4], c.r[0]);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[10], c.r[15].w[0] + 320u);
    set32(c.r[13], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    mmi::paddub(c.r[11], c.r[0], c.r[0]);
    mmi::paddub(c.r[12], c.r[0], c.r[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[14], c.r[10], c.r[0]);  if (t) { goto L_0038F950; } }
    c.r[5].d[0] = c.r[12].d[0] << 56;
    c.budget -= 1;
L_0038F898:
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038F8A4u); mmi::paddub(c.r[4], c.r[15], c.r[0]);  if (depth < kMaxDepth) unit_00A3(c, 197u, depth + 1u); else { c.pc = 0x0038F710u; return; } if (c.pc != 0x0038F8A4u) [[unlikely]] return; }
L_0038F8A4:
    c.r[5].d[0] = c.r[13].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038F8B4u); mmi::paddub(c.r[4], c.r[15], c.r[0]);  if (depth < kMaxDepth) unit_00A3(c, 197u, depth + 1u); else { c.pc = 0x0038F710u; return; } if (c.pc != 0x0038F8B4u) [[unlikely]] return; }
L_0038F8B4:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[14].w[0] + 76u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[14].w[0] + 77u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0]; set32(c.r[6], c.r[10].w[0] + c.r[24].w[0]);  if (t) { goto L_0038F8F0; } }
    set32(c.r[4], c.r[10].w[0] + c.r[24].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 64u)));
    c.r[1].d[0] = c.r[3].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0038F8E4; } }
    c.r[3].d[0] = c.r[5].d[0] | 128ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 68u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0038F910; } }
L_0038F8E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 68u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0038F910; } }
    set32(c.r[6], c.r[10].w[0] + c.r[24].w[0]);
    c.budget -= 1;
L_0038F8F0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 64u)));
    c.r[1].d[0] = c.r[3].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0038F908; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0] + 68u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_0038F910; } }
L_0038F908:
    st8((c.r[6].w[0] + 68u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 2;
L_0038F910:
    set32(c.r[4], c.r[10].w[0] + c.r[24].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 64u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 64u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[3].d[0] = c.r[3].sd[0] < 60ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[4].w[0] + 64u);  if (t) { goto L_0038F938; } }
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0038F938:
    set32(c.r[3], c.r[11].w[0] + 1u);
    c.r[11].d[0] = c.r[3].d[0] << 56;
    set32(c.r[12], c.r[12].w[0] + 2u);
    set32(c.r[13], c.r[13].w[0] + 2u);
    set32(c.r[14], c.r[14].w[0] + 2u);
    c.r[11].d[0] = static_cast<std::uint64_t>(c.r[11].sd[0] >> 56);
    c.budget -= 6;
L_0038F950:
    c.r[24].d[0] = c.r[11].d[0] << 56;
    c.r[24].d[0] = static_cast<std::uint64_t>(c.r[24].sd[0] >> 56);
    c.r[3].d[0] = c.r[24].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].d[0] = c.r[12].d[0] << 56;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038F898u | kUnwind; return; } goto L_0038F898; } }
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0038F970:
    set32(c.r[29], c.r[29].w[0] - 176u);
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
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[5], ld32((c.r[1].w[0] + 30176u)));
    set32(c.r[30], c.r[4].w[0] + 320u);
    set32(c.r[4], c.r[29].w[0] + 172u);
    set32(c.r[3], 0u + 3u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[22], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[18], 0u + 4u);
    set32(c.r[19], 0u + 5u);
    set32(c.r[21], c.r[3].w[0] - 19568u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[22].w[0]));
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    mmi::paddub(c.r[20], c.r[0], c.r[0]);
    c.budget -= 35;
L_0038F9FC:
    set32(c.r[4], c.r[30].w[0] + c.r[16].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 68u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[23], c.r[4].w[0] + 68u);  if (t) { goto L_0038FC38; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80800000u);
    c.r[3].d[0] = c.r[2].d[0] | 32896ull;
    set32(c.r[2], c.r[29].w[0] + 172u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[23].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0038FB3C; } }
    set32(c.r[2], c.r[18].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[3], c.r[2].w[0] << 4);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] - 19568u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20368u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038FA64u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x0038FA64u) [[unlikely]] return; }
L_0038FA64:
    set32(c.r[2], c.r[19].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[3], c.r[2].w[0] << 4);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] - 19568u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20368u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038FA9Cu); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x0038FA9Cu) [[unlikely]] return; }
L_0038FA9C:
    c.r[2].d[0] = ld8((c.r[23].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 127ull;
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[17].w[0] + c.r[20].w[0]);  if (t) { goto L_0038FAFC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[3].w[0] - 11728u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0038C000u < 16384u) { entry = entries_00A3[(t - 0x0038C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0038FAD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 2u);  if (t) { goto L_0038FAF8; } }
L_0038FAD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_0038FAF8; } }
L_0038FAE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 4u);  if (t) { goto L_0038FAF8; } }
L_0038FAE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 3u);  if (t) { goto L_0038FAF8; } }
L_0038FAF0:
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 2;
L_0038FAF8:
    set32(c.r[3], c.r[17].w[0] + c.r[20].w[0]);
    c.budget -= 1;
L_0038FAFC:
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 4);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] - 19184u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20368u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038FB34u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x0038FB34u) [[unlikely]] return; }
L_0038FB34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_0038FC3C; } }
L_0038FB3C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 64u)));
    c.r[1].d[0] = c.r[2].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], c.r[22].w[0] << 1);  if (t) { goto L_0038FB68; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[21].w[0]);
    set32(c.r[2], c.r[21].w[0] + 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] - 20368u), c.r[2].w[0]);  if (t) { goto L_0038FB90; } }
    set32(c.r[2], c.r[22].w[0] << 1);
    c.budget -= 1;
L_0038FB68:
    set32(c.r[2], c.r[2].w[0] + c.r[22].w[0]);
    set32(c.r[3], c.r[2].w[0] << 4);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] - 19568u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20368u), c.r[2].w[0]);
    c.budget -= 10;
L_0038FB90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038FB9Cu); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x0038FB9Cu) [[unlikely]] return; }
L_0038FB9C:
    c.r[2].d[0] = ld8((c.r[23].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 127ull;
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[17].w[0] + c.r[20].w[0]);  if (t) { goto L_0038FBFC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[3].w[0] - 11760u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0038C000u < 16384u) { entry = entries_00A3[(t - 0x0038C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0038FBD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 2u);  if (t) { goto L_0038FBF8; } }
L_0038FBD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_0038FBF8; } }
L_0038FBE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 4u);  if (t) { goto L_0038FBF8; } }
L_0038FBE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 3u);  if (t) { goto L_0038FBF8; } }
L_0038FBF0:
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 2;
L_0038FBF8:
    set32(c.r[3], c.r[17].w[0] + c.r[20].w[0]);
    c.budget -= 1;
L_0038FBFC:
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 4);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] - 19184u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20368u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038FC34u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x0038FC34u) [[unlikely]] return; }
L_0038FC34:
    c.budget -= 1;
L_0038FC38:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0038FC3C:
    c.r[3].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[18], c.r[18].w[0] + 2u);
    set32(c.r[19], c.r[19].w[0] + 2u);
    set32(c.r[20], c.r[20].w[0] + 5u);
    set32(c.r[21], c.r[21].w[0] + 96u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[22], c.r[22].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038F9FCu | kUnwind; return; } goto L_0038F9FC; } }
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_0038FC90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[5], 0u + 5u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038FCB8u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x0038FCB8u) [[unlikely]] return; }
L_0038FCB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0038FCFC; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[5], 0u + 21u);
    set32(c.r[4], 0u + 3u);
    set32(c.r[3], c.r[16].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00390000u);
    st8((c.r[2].w[0] + 273u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] - 752u);
    st8((c.r[2].w[0] + 11u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 15;
L_0038FCFC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0038FD10:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 1;
L_0038FD14:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 1;
L_0038FD18:
    set32(c.r[2], c.r[2].w[0] - 18672u);
    c.budget -= 1;
L_0038FD1C:
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 1;
L_0038FD20:
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 1;
L_0038FD24:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 1;
L_0038FD28:
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0038C000u < 16384u) { entry = entries_00A3[(t - 0x0038C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0038FD30:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], c.r[3].w[0] - 18704u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 168u), c.r[3].w[0]);  c.pc = t; return; }
L_0038FD60:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] - 18656u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0038C000u < 16384u) { entry = entries_00A3[(t - 0x0038C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0038FD80:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0038FD90:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00303A20u | kUnwind; return; } [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_0038FDA0:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0038FDB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 11u)));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 386u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], c.r[16].w[0] + 320u);  if (t) { goto L_0038FDE4; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0038FED0; } }
L_0038FDE4:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_0038FECC; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0038FE24; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], c.r[4].w[0] + 1u);  if (t) { goto L_0038FE14; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0038FEC8; } }
    set32(c.r[3], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_0038FE14:
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 20u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[5].w[0]), 0u);
    c.budget -= 4;
L_0038FE24:
    c.f[1] = ld32((c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);  goto L_0038FE50; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.r[3].w[0]);  if (t) { goto L_0038FE64; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.budget -= 1;
L_0038FE50:
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[5].w[0]), c.f[0]);
    c.budget -= 5;
L_0038FE64:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0038FE90; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 329u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0038FEC8; } }
L_0038FE90:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[5].w[0]), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 11u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038FEB0u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_00A3(c, 219u, depth + 1u); else { c.pc = 0x0038FC90u; return; } if (c.pc != 0x0038FEB0u) [[unlikely]] return; }
L_0038FEB0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 11u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038FEBCu); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_00A3(c, 219u, depth + 1u); else { c.pc = 0x0038FC90u; return; } if (c.pc != 0x0038FEBCu) [[unlikely]] return; }
L_0038FEBC:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 11u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038FEC8u); set32(c.r[4], 0u + 5u);  if (depth < kMaxDepth) unit_00A3(c, 219u, depth + 1u); else { c.pc = 0x0038FC90u; return; } if (c.pc != 0x0038FEC8u) [[unlikely]] return; }
L_0038FEC8:
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_0038FECC:
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_0038FED0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0038FEE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 11u)));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 386u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0038FF14; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0038FFA0; } }
L_0038FF14:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_0038FF9C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0038FF4C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0038FF40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0038FF98; } }
L_0038FF40:
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43F00000u);
    st32((c.r[16].w[0] + 36u), c.r[3].w[0]);
    c.budget -= 3;
L_0038FF4C:
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    c.f[0] = c.r[3].w[0];
    c.f[2] = 0u;
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[16].w[0] + 36u), c.f[0]);  if (t) { goto L_0038FF80; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 329u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0038FF98; } }
L_0038FF80:
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 36u), 0u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 11u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038FF98u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_00A3(c, 219u, depth + 1u); else { c.pc = 0x0038FC90u; return; } if (c.pc != 0x0038FF98u) [[unlikely]] return; }
L_0038FF98:
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_0038FF9C:
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_0038FFA0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0038FFB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 11u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 386u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[16], c.r[17].w[0] + 320u);  if (t) { goto L_0038FFE8; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_00A4(c, 10u, depth); } }
L_0038FFE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038FFF0u);  if (depth < kMaxDepth) unit_0016(c, 129u, depth + 1u); else { c.pc = 0x0015B440u; return; } if (c.pc != 0x0038FFF0u) [[unlikely]] return; }
L_0038FFF0:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[2].d[0] = c.r[2].d[0] & 127ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390004u); st16((c.r[28].w[0] - 24592u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0016(c, 129u, depth + 1u); else { c.pc = 0x0015B440u; return; } if (c.pc != 0x00390004u) [[unlikely]] return; }
    [[clang::musttail]] return unit_00A4(c, 2u, depth);
}

}
