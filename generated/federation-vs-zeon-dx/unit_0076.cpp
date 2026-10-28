#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0076[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 8, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0,
    11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 16, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0,
    23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0,
    25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 27, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0,
    0, 0, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 33, 0, 0, 34, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 37, 0, 0, 38,
    0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 42,
    0, 0, 0, 43, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 47, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0,
    53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 58, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61,
    0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 66, 0, 0, 0, 0, 0, 67, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0,
    69, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71,
    0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 73, 0, 74, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 81, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 85, 0, 0, 86, 0, 0, 0, 0, 87, 0,
    0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0,
    92, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0,
    109, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 115, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    117, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0,
    122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 125,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0,
    133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 137, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0,
    0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 149, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 151, 0, 0, 152,
    0, 0, 0, 0, 153, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0,
    0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0,
    0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 164, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 167, 0, 0, 168, 0, 0, 0,
    0, 169, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 189, 0, 0,
    0, 190, 0, 0, 0, 0, 0, 0, 191, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 201, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 203, 0, 0, 0, 204, 0, 0, 0, 205, 0, 0, 0, 206,
    0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 210, 0,
    0, 0, 211, 0, 0, 0, 212, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 215, 0, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 0, 0, 219, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0,
    221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 223, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 237, 0, 238, 0, 239, 0, 0, 0, 240, 0, 0, 241,
    0, 0, 0, 242, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0,
    0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 248, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 250, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 253, 0, 0, 254, 0, 255, 0, 0, 0,
    256, 0, 0, 257, 0, 0, 258, 0, 259, 0, 0, 0, 260, 0, 0, 261, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0076(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002D8000;
    case 2u: goto L_002D802C;
    case 3u: goto L_002D8064;
    case 4u: goto L_002D80E0;
    case 5u: goto L_002D8124;
    case 6u: goto L_002D8130;
    case 7u: goto L_002D8140;
    case 8u: goto L_002D8184;
    case 9u: goto L_002D8190;
    case 10u: goto L_002D81F4;
    case 11u: goto L_002D8200;
    case 12u: goto L_002D82A0;
    case 13u: goto L_002D82BC;
    case 14u: goto L_002D82D0;
    case 15u: goto L_002D8358;
    case 16u: goto L_002D8370;
    case 17u: goto L_002D83DC;
    case 18u: goto L_002D841C;
    case 19u: goto L_002D8470;
    case 20u: goto L_002D84D4;
    case 21u: goto L_002D8500;
    case 22u: goto L_002D8560;
    case 23u: goto L_002D8580;
    case 24u: goto L_002D85E0;
    case 25u: goto L_002D8600;
    case 26u: goto L_002D8658;
    case 27u: goto L_002D8670;
    case 28u: goto L_002D86B8;
    case 29u: goto L_002D86D4;
    case 30u: goto L_002D86F4;
    case 31u: goto L_002D8710;
    case 32u: goto L_002D8724;
    case 33u: goto L_002D8790;
    case 34u: goto L_002D879C;
    case 35u: goto L_002D87B4;
    case 36u: goto L_002D87DC;
    case 37u: goto L_002D87F0;
    case 38u: goto L_002D87FC;
    case 39u: goto L_002D8810;
    case 40u: goto L_002D8834;
    case 41u: goto L_002D8874;
    case 42u: goto L_002D887C;
    case 43u: goto L_002D888C;
    case 44u: goto L_002D8894;
    case 45u: goto L_002D88C0;
    case 46u: goto L_002D8920;
    case 47u: goto L_002D893C;
    case 48u: goto L_002D8948;
    case 49u: goto L_002D89A0;
    case 50u: goto L_002D8A48;
    case 51u: goto L_002D8A80;
    case 52u: goto L_002D8AF0;
    case 53u: goto L_002D8B00;
    case 54u: goto L_002D8D10;
    case 55u: goto L_002D8DE0;
    case 56u: goto L_002D8EB0;
    case 57u: goto L_002D8EE4;
    case 58u: goto L_002D8EF0;
    case 59u: goto L_002D8F28;
    case 60u: goto L_002D8F40;
    case 61u: goto L_002D8F7C;
    case 62u: goto L_002D8F88;
    case 63u: goto L_002D8FBC;
    case 64u: goto L_002D8FE0;
    case 65u: goto L_002D9034;
    case 66u: goto L_002D903C;
    case 67u: goto L_002D9054;
    case 68u: goto L_002D9060;
    case 69u: goto L_002D9080;
    case 70u: goto L_002D9098;
    case 71u: goto L_002D90FC;
    case 72u: goto L_002D9110;
    case 73u: goto L_002D9194;
    case 74u: goto L_002D919C;
    case 75u: goto L_002D91BC;
    case 76u: goto L_002D91D0;
    case 77u: goto L_002D91F0;
    case 78u: goto L_002D922C;
    case 79u: goto L_002D9240;
    case 80u: goto L_002D92AC;
    case 81u: goto L_002D92B4;
    case 82u: goto L_002D92D4;
    case 83u: goto L_002D92F0;
    case 84u: goto L_002D933C;
    case 85u: goto L_002D9358;
    case 86u: goto L_002D9364;
    case 87u: goto L_002D9378;
    case 88u: goto L_002D9390;
    case 89u: goto L_002D940C;
    case 90u: goto L_002D9434;
    case 91u: goto L_002D9464;
    case 92u: goto L_002D9480;
    case 93u: goto L_002D948C;
    case 94u: goto L_002D94C0;
    case 95u: goto L_002D9500;
    case 96u: goto L_002D9540;
    case 97u: goto L_002D9590;
    case 98u: goto L_002D95B4;
    case 99u: goto L_002D95C4;
    case 100u: goto L_002D95D4;
    case 101u: goto L_002D9610;
    case 102u: goto L_002D9640;
    case 103u: goto L_002D9688;
    case 104u: goto L_002D96AC;
    case 105u: goto L_002D96BC;
    case 106u: goto L_002D96CC;
    case 107u: goto L_002D9700;
    case 108u: goto L_002D9774;
    case 109u: goto L_002D9780;
    case 110u: goto L_002D9790;
    case 111u: goto L_002D97C0;
    case 112u: goto L_002D97E8;
    case 113u: goto L_002D9850;
    case 114u: goto L_002D98B4;
    case 115u: goto L_002D98C0;
    case 116u: goto L_002D98D0;
    case 117u: goto L_002D9900;
    case 118u: goto L_002D9924;
    case 119u: goto L_002D9960;
    case 120u: goto L_002D99A4;
    case 121u: goto L_002D99DC;
    case 122u: goto L_002D9A00;
    case 123u: goto L_002D9A30;
    case 124u: goto L_002D9A74;
    case 125u: goto L_002D9A7C;
    case 126u: goto L_002D9B44;
    case 127u: goto L_002D9B80;
    case 128u: goto L_002D9C40;
    case 129u: goto L_002D9D24;
    case 130u: goto L_002D9D38;
    case 131u: goto L_002D9DB8;
    case 132u: goto L_002D9DE0;
    case 133u: goto L_002D9E00;
    case 134u: goto L_002D9ED8;
    case 135u: goto L_002D9F60;
    case 136u: goto L_002DA060;
    case 137u: goto L_002DA074;
    case 138u: goto L_002DA138;
    case 139u: goto L_002DA200;
    case 140u: goto L_002DA23C;
    case 141u: goto L_002DA248;
    case 142u: goto L_002DA3F0;
    case 143u: goto L_002DA454;
    case 144u: goto L_002DA4D0;
    case 145u: goto L_002DA750;
    case 146u: goto L_002DA7F0;
    case 147u: goto L_002DA808;
    case 148u: goto L_002DA834;
    case 149u: goto L_002DA844;
    case 150u: goto L_002DA858;
    case 151u: goto L_002DA870;
    case 152u: goto L_002DA87C;
    case 153u: goto L_002DA890;
    case 154u: goto L_002DA898;
    case 155u: goto L_002DA8E8;
    case 156u: goto L_002DA908;
    case 157u: goto L_002DA96C;
    case 158u: goto L_002DA984;
    case 159u: goto L_002DA9E8;
    case 160u: goto L_002DAA9C;
    case 161u: goto L_002DAAB4;
    case 162u: goto L_002DAAC4;
    case 163u: goto L_002DAAF0;
    case 164u: goto L_002DAAF8;
    case 165u: goto L_002DAB34;
    case 166u: goto L_002DAB48;
    case 167u: goto L_002DAB64;
    case 168u: goto L_002DAB70;
    case 169u: goto L_002DAB84;
    case 170u: goto L_002DAB8C;
    case 171u: goto L_002DABE0;
    case 172u: goto L_002DAD30;
    case 173u: goto L_002DADB4;
    case 174u: goto L_002DADC8;
    case 175u: goto L_002DAE88;
    case 176u: goto L_002DAED0;
    case 177u: goto L_002DAEFC;
    case 178u: goto L_002DAF40;
    case 179u: goto L_002DB018;
    case 180u: goto L_002DB050;
    case 181u: goto L_002DB1AC;
    case 182u: goto L_002DB1E4;
    case 183u: goto L_002DB268;
    case 184u: goto L_002DB2AC;
    case 185u: goto L_002DB2C0;
    case 186u: goto L_002DB3A0;
    case 187u: goto L_002DB3D8;
    case 188u: goto L_002DB3E8;
    case 189u: goto L_002DB3F4;
    case 190u: goto L_002DB404;
    case 191u: goto L_002DB420;
    case 192u: goto L_002DB42C;
    case 193u: goto L_002DB54C;
    case 194u: goto L_002DB5B0;
    case 195u: goto L_002DB63C;
    case 196u: goto L_002DB678;
    case 197u: goto L_002DB6B4;
    case 198u: goto L_002DB6C0;
    case 199u: goto L_002DB6D0;
    case 200u: goto L_002DB6E0;
    case 201u: goto L_002DB6F0;
    case 202u: goto L_002DB738;
    case 203u: goto L_002DB74C;
    case 204u: goto L_002DB75C;
    case 205u: goto L_002DB76C;
    case 206u: goto L_002DB77C;
    case 207u: goto L_002DB7A0;
    case 208u: goto L_002DB7C0;
    case 209u: goto L_002DB7E8;
    case 210u: goto L_002DB7F8;
    case 211u: goto L_002DB808;
    case 212u: goto L_002DB818;
    case 213u: goto L_002DB830;
    case 214u: goto L_002DB850;
    case 215u: goto L_002DB884;
    case 216u: goto L_002DB898;
    case 217u: goto L_002DB8A8;
    case 218u: goto L_002DB8B8;
    case 219u: goto L_002DB8CC;
    case 220u: goto L_002DB8E0;
    case 221u: goto L_002DB900;
    case 222u: goto L_002DB940;
    case 223u: goto L_002DB950;
    case 224u: goto L_002DB95C;
    case 225u: goto L_002DB9B8;
    case 226u: goto L_002DB9C4;
    case 227u: goto L_002DBA1C;
    case 228u: goto L_002DBA50;
    case 229u: goto L_002DBA60;
    case 230u: goto L_002DBB2C;
    case 231u: goto L_002DBB60;
    case 232u: goto L_002DBBA8;
    case 233u: goto L_002DBBD8;
    case 234u: goto L_002DBC20;
    case 235u: goto L_002DBC54;
    case 236u: goto L_002DBDC0;
    case 237u: goto L_002DBDD0;
    case 238u: goto L_002DBDD8;
    case 239u: goto L_002DBDE0;
    case 240u: goto L_002DBDF0;
    case 241u: goto L_002DBDFC;
    case 242u: goto L_002DBE0C;
    case 243u: goto L_002DBE18;
    case 244u: goto L_002DBE54;
    case 245u: goto L_002DBE60;
    case 246u: goto L_002DBE84;
    case 247u: goto L_002DBEB8;
    case 248u: goto L_002DBEC4;
    case 249u: goto L_002DBED8;
    case 250u: goto L_002DBF04;
    case 251u: goto L_002DBF18;
    case 252u: goto L_002DBF44;
    case 253u: goto L_002DBF5C;
    case 254u: goto L_002DBF68;
    case 255u: goto L_002DBF70;
    case 256u: goto L_002DBF80;
    case 257u: goto L_002DBF8C;
    case 258u: goto L_002DBF98;
    case 259u: goto L_002DBFA0;
    case 260u: goto L_002DBFB0;
    case 261u: goto L_002DBFBC;
    case 262u: goto L_002DBFCC;
    default: bad_entry(c, 0x002D8000u); return;
    }
L_002D8000:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002D8020; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 616u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[16].w[0] + 32u);  if (t) { goto L_002D8024; } }
    st16((c.r[16].w[0] + 536u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 616u), 0u);
    c.budget -= 2;
L_002D8020:
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.budget -= 1;
L_002D8024:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D802Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0045(c, 199u, depth + 1u); else { c.pc = 0x00217650u; return; } if (c.pc != 0x002D802Cu) [[unlikely]] return; }
L_002D802C:
    st32((c.r[16].w[0] + 36u), c.f[0]);
    c.f[2] = ld32((c.r[16].w[0] + 132u));
    c.f[3] = ld32((c.r[16].w[0] + 8028u));
    c.f[1] = fp::sub(c.f[0], c.f[2]);
    c.f[0] = c.f[3] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D806C; } }
    set32(c.r[2], 0u + 30u);
    st32((c.r[16].w[0] + 36u), c.f[2]);
    st8((c.r[16].w[0] + 744u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8064u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 72u, depth + 1u); else { c.pc = 0x002D9110u; return; } if (c.pc != 0x002D8064u) [[unlikely]] return; }
L_002D8064:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002D80D0; } }
L_002D806C:
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[3]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002D80D0; } }
    c.f[1] = ld32((c.r[16].w[0] + 32u));
    c.f[0] = ld32((c.r[16].w[0] + 128u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D80AC; } }
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = ld32((c.r[16].w[0] + 136u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002D80CC; } }
L_002D80AC:
    c.f[3] = ld32((c.r[16].w[0] + 128u));
    c.f[2] = ld32((c.r[16].w[0] + 132u));
    c.f[1] = ld32((c.r[16].w[0] + 136u));
    c.f[0] = ld32((c.r[16].w[0] + 140u));
    st32((c.r[16].w[0] + 32u), c.f[3]);
    st32((c.r[16].w[0] + 36u), c.f[2]);
    st32((c.r[16].w[0] + 40u), c.f[1]);
    st32((c.r[16].w[0] + 44u), c.f[0]);
    c.budget -= 8;
L_002D80CC:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_002D80D0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D80E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002D8104; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002D8130; } }
L_002D8104:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[2].d[0] = c.r[5].d[0] & 15360ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D811C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002D8130; } }
L_002D811C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8124u);  if (depth < kMaxDepth) unit_0075(c, 91u, depth + 1u); else { c.pc = 0x002D52F0u; return; } if (c.pc != 0x002D8124u) [[unlikely]] return; }
L_002D8124:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8130u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 55u, depth + 1u); else { c.pc = 0x002D8DE0u; return; } if (c.pc != 0x002D8130u) [[unlikely]] return; }
L_002D8130:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D8140:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D8160; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002D8184; } }
L_002D8160:
    c.r[2].d[0] = ld16((c.r[4].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] & 15360ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 3u);  if (t) { goto L_002D817C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002D8184; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 1;
L_002D817C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8184u);  if (depth < kMaxDepth) unit_0076(c, 55u, depth + 1u); else { c.pc = 0x002D8DE0u; return; } if (c.pc != 0x002D8184u) [[unlikely]] return; }
L_002D8184:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002D8190:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002D81B8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 780u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D81C0; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_002D81B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_002D81F8; } }
L_002D81C0:
    c.r[2].d[0] = ld16((c.r[4].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002D81E0; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 794u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 5u);  if (t) { goto L_002D81EC; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_002D81E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D81F4; } }
    set32(c.r[5], 0u + 5u);
    c.budget -= 1;
L_002D81EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D81F4u);  if (depth < kMaxDepth) unit_0076(c, 55u, depth + 1u); else { c.pc = 0x002D8DE0u; return; } if (c.pc != 0x002D81F4u) [[unlikely]] return; }
L_002D81F4:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_002D81F8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002D8200:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 816u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002D8220; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002D82C0; } }
L_002D8220:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 784u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D8234; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002D82C0; } }
L_002D8234:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[2].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] & 512ull;  if (t) { goto L_002D8250; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002D82C0; } }
    c.r[2].d[0] = c.r[3].d[0] & 512ull;
    c.budget -= 1;
L_002D8250:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D8270; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8432u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002D8270; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002D82C0; } }
L_002D8270:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    set32(c.r[2], ld32((c.r[16].w[0] + 724u)));
    c.r[3].d[0] = c.r[3].d[0] & 15360ull;
    set32(c.r[3], c.r[3].w[0] << 18);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 19u);  if (t) { goto L_002D8298; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002D82C0; } }
    set32(c.r[5], 0u + 19u);
    c.budget -= 1;
L_002D8298:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D82A0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 55u, depth + 1u); else { c.pc = 0x002D8DE0u; return; } if (c.pc != 0x002D82A0u) [[unlikely]] return; }
L_002D82A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D82B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002D82C0; } }
L_002D82B0:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 704u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D82BCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 91u, depth + 1u); else { c.pc = 0x002D52F0u; return; } if (c.pc != 0x002D82BCu) [[unlikely]] return; }
L_002D82BC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002D82C0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D82D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    set32(c.r[2], 0u + 18u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002D8300; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D8300; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002D8358; } }
L_002D8300:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D8318; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002D8358; } }
L_002D8318:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 816u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 21u);  if (t) { goto L_002D8350; } }
    c.r[2].d[0] = ld16((c.r[4].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] & 15360ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002D8344; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 778u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D834C; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_002D8344:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_002D835C; } }
L_002D834C:
    set32(c.r[5], 0u + 21u);
    c.budget -= 1;
L_002D8350:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8358u);  if (depth < kMaxDepth) unit_0076(c, 55u, depth + 1u); else { c.pc = 0x002D8DE0u; return; } if (c.pc != 0x002D8358u) [[unlikely]] return; }
L_002D8358:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_002D835C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002D8370:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002D8398; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002D8450; } }
L_002D8398:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 784u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D83AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002D8450; } }
L_002D83AC:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    set32(c.r[2], ld32((c.r[16].w[0] + 724u)));
    c.r[3].d[0] = c.r[3].d[0] & 15360ull;
    set32(c.r[3], c.r[3].w[0] << 10);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 16u);  if (t) { goto L_002D83D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002D8450; } }
    set32(c.r[5], 0u + 16u);
    c.budget -= 1;
L_002D83D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D83DCu);  if (depth < kMaxDepth) unit_0076(c, 55u, depth + 1u); else { c.pc = 0x002D8DE0u; return; } if (c.pc != 0x002D83DCu) [[unlikely]] return; }
L_002D83DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D83EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002D8450; } }
L_002D83EC:
    set32(c.r[3], ld32((c.r[16].w[0] + 724u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] - 27200u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[3], c.r[3].w[0] >> 20);
    c.r[3].d[0] = c.r[3].d[0] & 15ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[17], c.r[2].w[0] << 10);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D841Cu); c.r[5].d[0] = c.r[17].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0075(c, 91u, depth + 1u); else { c.pc = 0x002D52F0u; return; } if (c.pc != 0x002D841Cu) [[unlikely]] return; }
L_002D841C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D8434; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1304u)));
    set32(c.r[2], c.r[2].w[0] + 8192u);
    c.r[2].d[0] = c.r[2].d[0] & 49152ull;
    st32((c.r[16].w[0] + 1308u), c.r[2].w[0]);
    c.budget -= 4;
L_002D8434:
    st16((c.r[16].w[0] + 850u), static_cast<std::uint16_t>(c.r[17].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 724u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF0F0000u);
    c.r[3].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 724u), c.r[3].w[0]);
    c.budget -= 7;
L_002D8450:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002D8470:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 736u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002D8494; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002D84E4; } }
L_002D8494:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 816u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D84B8; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D84B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002D84E4; } }
L_002D84B8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D84D4; } }
    set32(c.r[5], 0u + 7u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D84D4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 55u, depth + 1u); else { c.pc = 0x002D8DE0u; return; } if (c.pc != 0x002D84D4u) [[unlikely]] return; }
L_002D84D4:
    st8((c.r[16].w[0] + 274u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 836u)));
    set32(c.r[2], 0u + 1u);
    st16((c.r[16].w[0] + 834u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_002D84E4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D8500:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 816u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D851C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002D856C; } }
L_002D851C:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 784u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D8530; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002D856C; } }
L_002D8530:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D8548; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002D856C; } }
L_002D8548:
    c.r[2].d[0] = ld16((c.r[4].w[0] + 708u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002D856C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8560u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_0076(c, 55u, depth + 1u); else { c.pc = 0x002D8DE0u; return; } if (c.pc != 0x002D8560u) [[unlikely]] return; }
L_002D8560:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D856C; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_002D856C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002D8580:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 816u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D859C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002D85EC; } }
L_002D859C:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 784u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D85B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002D85EC; } }
L_002D85B0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D85C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002D85EC; } }
L_002D85C8:
    c.r[2].d[0] = ld16((c.r[4].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002D85EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D85E0u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_0076(c, 55u, depth + 1u); else { c.pc = 0x002D8DE0u; return; } if (c.pc != 0x002D85E0u) [[unlikely]] return; }
L_002D85E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D85EC; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_002D85EC:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002D8600:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8425u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002D8620; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002D8664; } }
L_002D8620:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D8638; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002D8664; } }
L_002D8638:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 704u));
    c.r[2].d[0] = ld16((c.r[4].w[0] + 706u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002D8664; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8658u); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_0076(c, 55u, depth + 1u); else { c.pc = 0x002D8DE0u; return; } if (c.pc != 0x002D8658u) [[unlikely]] return; }
L_002D8658:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D8664; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_002D8664:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002D8670:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002D8694; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002D86F8; } }
L_002D8694:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 12u);  if (t) { goto L_002D86B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002D86F8; } }
    set32(c.r[5], 0u + 12u);
    c.budget -= 1;
L_002D86B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D86B8u);  if (depth < kMaxDepth) unit_0076(c, 55u, depth + 1u); else { c.pc = 0x002D8DE0u; return; } if (c.pc != 0x002D86B8u) [[unlikely]] return; }
L_002D86B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002D86CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002D86F8; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002D86CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D86D4u);  if (depth < kMaxDepth) unit_0076(c, 180u, depth + 1u); else { c.pc = 0x002DB050u; return; } if (c.pc != 0x002D86D4u) [[unlikely]] return; }
L_002D86D4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 31440u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D86F4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D86F4u) [[unlikely]] return; }
L_002D86F4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002D86F8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D8710:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8724u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 39u, depth + 1u); else { c.pc = 0x002D8810u; return; } if (c.pc != 0x002D8724u) [[unlikely]] return; }
L_002D8724:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D8734; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002D8800; } }
L_002D8734:
    st32((c.r[16].w[0] + 68u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 108u), 0u);
    set32(c.r[2], 0u + 8u);
    st32((c.r[16].w[0] + 104u), 0u);
    st8((c.r[16].w[0] + 741u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    set32(c.r[3], 0u - 9u);
    set32(c.r[2], 0u + 4u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    st16((c.r[16].w[0] + 812u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 274u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 275u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 785u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 736u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[5], c.r[16].w[0] + 32u);
    st32((c.r[16].w[0] + 1312u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 96u), 0u);
    st32((c.r[16].w[0] + 1308u), 0u);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8790u); st32((c.r[16].w[0] + 1304u), 0u);  if (depth < kMaxDepth) unit_004B(c, 27u, depth + 1u); else { c.pc = 0x0022C720u; return; } if (c.pc != 0x002D8790u) [[unlikely]] return; }
L_002D8790:
    set32(c.r[5], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D879Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 55u, depth + 1u); else { c.pc = 0x002D8DE0u; return; } if (c.pc != 0x002D879Cu) [[unlikely]] return; }
L_002D879C:
    c.f[12] = 0u;
    set32(c.r[6], 0u + 11u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D87B4u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x002D87B4u) [[unlikely]] return; }
L_002D87B4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[2], 0u + 18u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_002D8800; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 11u);  if (t) { goto L_002D87F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D87DCu); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0075(c, 244u, depth + 1u); else { c.pc = 0x002D78B0u; return; } if (c.pc != 0x002D87DCu) [[unlikely]] return; }
L_002D87DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D87F0; } }
    set32(c.r[5], 0u + 30u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D87F0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x002D87F0u) [[unlikely]] return; }
L_002D87F0:
    set32(c.r[5], 0u + 11u);
    c.budget -= 1;
L_002D87F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D87FCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 22u, depth + 1u); else { c.pc = 0x00198340u; return; } if (c.pc != 0x002D87FCu) [[unlikely]] return; }
L_002D87FC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002D8800:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D8810:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[4], c.r[16].w[0] + 32u);
    set32(c.r[5], c.r[29].w[0] + 76u);
    set32(c.r[6], c.r[29].w[0] + 72u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8834u); mmi::paddub(c.r[7], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0046(c, 25u, depth + 1u); else { c.pc = 0x00218EB0u; return; } if (c.pc != 0x002D8834u) [[unlikely]] return; }
L_002D8834:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002D8844; } }
    st32((c.r[29].w[0] + 72u), 0u);
    c.budget -= 1;
L_002D8844:
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = ld32((c.r[29].w[0] + 72u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[5], c.r[16].w[0] + 32u);  if (t) { goto L_002D8868; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002D8984; } }
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.budget -= 1;
L_002D8868:
    set32(c.r[6], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8874u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0045(c, 218u, depth + 1u); else { c.pc = 0x00217E60u; return; } if (c.pc != 0x002D8874u) [[unlikely]] return; }
L_002D8874:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D887Cu); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x002D887Cu) [[unlikely]] return; }
L_002D887C:
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D888Cu); set32(c.r[6], c.r[16].w[0] + 128u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002D888Cu) [[unlikely]] return; }
L_002D888C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8894u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 20u, depth + 1u); else { c.pc = 0x0013C9E0u; return; } if (c.pc != 0x002D8894u) [[unlikely]] return; }
L_002D8894:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002D88E0; } }
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D88C0u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x002D88C0u) [[unlikely]] return; }
L_002D88C0:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002D88E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002D8984; } }
L_002D88E0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 744u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 76u)));  if (t) { goto L_002D88F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 854u)));  if (t) { goto L_002D88FC; } }
L_002D88F4:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 852u)));
    c.budget -= 2;
L_002D88FC:
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D8978; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 530u));
    c.r[2].d[0] = c.r[2].d[0] & 12ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D8978; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8920u); c.r[4].d[0] = c.r[3].d[0] & 65535ull;  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x002D8920u) [[unlikely]] return; }
L_002D8920:
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.f[1] = ld32((c.r[29].w[0] + 72u));
    set32(c.r[4], c.r[29].w[0] + 32u);
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D893Cu); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x002D893Cu) [[unlikely]] return; }
L_002D893C:
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8948u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x002D8948u) [[unlikely]] return; }
L_002D8948:
    st32((c.r[16].w[0] + 108u), 0u);
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.r[2].d[0] = c.r[2].d[0] | 26214ull;
    c.f[1] = c.r[2].w[0];
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.f[0]);  if (t) { goto L_002D8984; } }
L_002D8978:
    c.f[0] = ld32((c.r[29].w[0] + 72u));
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 36u), c.f[0]);
    c.budget -= 3;
L_002D8984:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002D89A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8432u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002D89C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002D8A70; } }
L_002D89C4:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 816u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D89D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002D8A70; } }
L_002D89D8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[2].d[0] = c.r[3].d[0] & 512ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[3].d[0] & 3ull;  if (t) { goto L_002D89F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002D8A70; } }
    c.r[2].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 1;
L_002D89F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D8A04; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002D8A70; } }
L_002D8A04:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 784u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D8A18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002D8A70; } }
L_002D8A18:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    set32(c.r[2], ld32((c.r[16].w[0] + 724u)));
    c.r[3].d[0] = c.r[3].d[0] & 15360ull;
    set32(c.r[3], c.r[3].w[0] << 10);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 26u);  if (t) { goto L_002D8A40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002D8A70; } }
    set32(c.r[5], 0u + 26u);
    c.budget -= 1;
L_002D8A40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8A48u);  if (depth < kMaxDepth) unit_0076(c, 55u, depth + 1u); else { c.pc = 0x002D8DE0u; return; } if (c.pc != 0x002D8A48u) [[unlikely]] return; }
L_002D8A48:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D8A58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002D8A70; } }
L_002D8A58:
    set32(c.r[4], ld32((c.r[16].w[0] + 724u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF0F0000u);
    c.r[3].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 724u), c.r[3].w[0]);
    c.budget -= 6;
L_002D8A70:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D8A80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    c.r[2].d[0] = c.r[3].d[0] & 512ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 28u);  if (t) { goto L_002D8AE8; } }
    c.r[2].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D8AAC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002D8AF0; } }
L_002D8AAC:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 816u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D8AE4; } }
    c.r[3].d[0] = ld16((c.r[4].w[0] + 704u));
    c.r[2].d[0] = c.r[3].d[0] & 15360ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] & 128ull;  if (t) { goto L_002D8AD4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002D8AF0; } }
    c.r[2].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 1;
L_002D8AD4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D8AE4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002D8AF0; } }
L_002D8AE4:
    set32(c.r[5], 0u + 28u);
    c.budget -= 1;
L_002D8AE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8AF0u);  if (depth < kMaxDepth) unit_0076(c, 55u, depth + 1u); else { c.pc = 0x002D8DE0u; return; } if (c.pc != 0x002D8AF0u) [[unlikely]] return; }
L_002D8AF0:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002D8B00:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8384u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 28448u);
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 7);
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);  if (t) { goto L_002D8B38; } }
    st16((c.r[2].w[0] + 322u), static_cast<std::uint16_t>(0u));
    st16((c.r[2].w[0] + 320u), static_cast<std::uint16_t>(0u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002D8CFC; } }
L_002D8B38:
    c.r[5].d[0] = ld16((c.r[4].w[0] + 704u));
    c.r[3].d[0] = c.r[5].d[0] & 12288ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[5].d[0] = c.r[5].d[0] & 65535ull;  goto L_002D8B50; }
    st16((c.r[2].w[0] + 320u), static_cast<std::uint16_t>(0u));
    c.r[5].d[0] = c.r[5].d[0] & 65535ull;
    c.budget -= 2;
L_002D8B50:
    c.r[3].d[0] = c.r[5].d[0] & 3072ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[5].d[0] & 8192ull;  if (t) { goto L_002D8B64; } }
    st16((c.r[2].w[0] + 322u), static_cast<std::uint16_t>(0u));
    c.r[3].d[0] = c.r[5].d[0] & 8192ull;
    c.budget -= 2;
L_002D8B64:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[5].d[0] & 4096ull;  if (t) { goto L_002D8B80; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 320u)));
    set32(c.r[3], c.r[3].w[0] + 32u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[2].w[0] + 320u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002D8B94; } }
    c.r[3].d[0] = c.r[5].d[0] & 4096ull;
    c.budget -= 1;
L_002D8B80:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[5].d[0] & 2048ull;  if (t) { goto L_002D8B98; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 320u)));
    set32(c.r[3], c.r[3].w[0] - 32u);
    st16((c.r[2].w[0] + 320u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_002D8B94:
    c.r[3].d[0] = c.r[5].d[0] & 2048ull;
    c.budget -= 1;
L_002D8B98:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[5].d[0] & 1024ull;  if (t) { goto L_002D8BB4; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 322u)));
    set32(c.r[3], c.r[3].w[0] + 64u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[2].w[0] + 322u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002D8BC8; } }
    c.r[3].d[0] = c.r[5].d[0] & 1024ull;
    c.budget -= 1;
L_002D8BB4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D8BC8; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 322u)));
    set32(c.r[3], c.r[3].w[0] - 64u);
    st16((c.r[2].w[0] + 322u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_002D8BC8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 320u)));
    c.r[1].d[0] = c.r[3].sd[0] < 97ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].d[0] = c.r[3].sd[0] < -96ll ? 1ull : 0ull;  if (t) { goto L_002D8BE8; } }
    set32(c.r[3], 0u + 96u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[2].w[0] + 320u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002D8BF8; } }
    c.r[1].d[0] = c.r[3].sd[0] < -96ll ? 1ull : 0ull;
    c.budget -= 1;
L_002D8BE8:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002D8BF8; } }
    set32(c.r[3], 0u - 96u);
    st16((c.r[2].w[0] + 320u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002D8BF8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 322u)));
    c.r[1].d[0] = c.r[3].sd[0] < 129ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].d[0] = c.r[3].sd[0] < -128ll ? 1ull : 0ull;  if (t) { goto L_002D8C18; } }
    set32(c.r[3], 0u + 128u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[2].w[0] + 322u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002D8C28; } }
    c.r[1].d[0] = c.r[3].sd[0] < -128ll ? 1ull : 0ull;
    c.budget -= 1;
L_002D8C18:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002D8C28; } }
    set32(c.r[3], 0u - 128u);
    st16((c.r[2].w[0] + 322u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002D8C28:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 10u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 320u)));
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st16((c.r[2].w[0] + 10u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 12u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 322u)));
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st16((c.r[2].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 10u)));
    c.r[1].d[0] = c.r[3].sd[0] < 6145ll ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].d[0] = c.r[3].sd[0] < -6144ll ? 1ull : 0ull;  if (t) { goto L_002D8C68; } }
    set32(c.r[3], 0u + 6144u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[2].w[0] + 10u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002D8C78; } }
    c.r[1].d[0] = c.r[3].sd[0] < -6144ll ? 1ull : 0ull;
    c.budget -= 1;
L_002D8C68:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002D8C78; } }
    set32(c.r[3], 0u - 6144u);
    st16((c.r[2].w[0] + 10u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002D8C78:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 84u)));
    set32(c.r[3], c.r[3].w[0] + 32767u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[1].d[0] = c.r[2].sd[0] < 1025ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].d[0] = c.r[2].sd[0] < -1024ll ? 1ull : 0ull;  if (t) { goto L_002D8CB0; } }
    set32(c.r[2], c.r[2].w[0] - 1024u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 1304u), c.r[2].w[0]);  if (t) { goto L_002D8CC0; } }
    c.r[1].d[0] = c.r[2].sd[0] < -1024ll ? 1ull : 0ull;
    c.budget -= 1;
L_002D8CB0:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002D8CC0; } }
    set32(c.r[2], c.r[2].w[0] + 1024u);
    st32((c.r[4].w[0] + 1304u), c.r[2].w[0]);
    c.budget -= 2;
L_002D8CC0:
    st32((c.r[4].w[0] + 972u), 0u);
    st32((c.r[4].w[0] + 968u), 0u);
    set32(c.r[3], ld32((c.r[4].w[0] + 1524u)));
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 1528u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 1540u)));
    st32((c.r[4].w[0] + 1544u), c.r[3].w[0]);
    c.f[3] = ld32((c.r[4].w[0] + 1344u));
    c.f[2] = ld32((c.r[4].w[0] + 1348u));
    c.f[1] = ld32((c.r[4].w[0] + 1352u));
    c.f[0] = ld32((c.r[4].w[0] + 1356u));
    st32((c.r[4].w[0] + 1360u), c.f[3]);
    st32((c.r[4].w[0] + 1364u), c.f[2]);
    st32((c.r[4].w[0] + 1368u), c.f[1]);
    st32((c.r[4].w[0] + 1372u), c.f[0]);
    c.budget -= 15;
L_002D8CFC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D8D10:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 762u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[5].d[0] << 48;  if (t) { goto L_002D8D58; } }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[6], c.r[2].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] - 7520u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[2].w[0] - 48u);
    set32(c.r[3], c.r[3].w[0] << 1);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[5], 0u + 1u);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; if (c.r[1].d[0] != 0) c.r[5].d[0] = 0ull;  if (t) { goto L_002D8D8C; } }
L_002D8D58:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[6], c.r[2].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] - 7264u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[2].w[0] - 48u);
    set32(c.r[3], c.r[3].w[0] << 1);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[5], 0u + 1u);
    if (c.r[1].d[0] != 0) c.r[5].d[0] = 0ull;
    c.budget -= 13;
L_002D8D8C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002D8DA4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D8DCC; } }
L_002D8DA4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 810u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002D8DC0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002D8DC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D8DCC; } }
L_002D8DC0:
    st8((c.r[4].w[0] + 810u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 728u), 0u);
    c.budget -= 3;
L_002D8DCC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D8DE0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 762u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[5].d[0] << 48;  if (t) { goto L_002D8E28; } }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[7], c.r[2].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] - 7520u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], ld32((c.r[6].w[0])));
    set32(c.r[2], c.r[2].w[0] - 48u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[7], 0u + 1u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; if (c.r[1].d[0] != 0) c.r[7].d[0] = 0ull;  if (t) { goto L_002D8E5C; } }
L_002D8E28:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[7], c.r[2].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] - 7264u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], ld32((c.r[6].w[0])));
    set32(c.r[2], c.r[2].w[0] - 48u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[7], 0u + 1u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    if (c.r[1].d[0] != 0) c.r[7].d[0] = 0ull;
    c.budget -= 13;
L_002D8E5C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 1u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002D8E74; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D8EA8; } }
L_002D8E74:
    st16((c.r[4].w[0] + 806u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 1u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 811u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002D8E98; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002D8E98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D8EA8; } }
L_002D8E98:
    st8((c.r[4].w[0] + 811u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 732u), 0u);
    set32(c.r[2], 0u + 1u);
    st8((c.r[4].w[0] + 778u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_002D8EA8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D8EB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8059u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002D8EE4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7815u)));
    c.f[12] = 0u;
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    st8((c.r[16].w[0] + 7775u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7814u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8EE4u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002D8EE4u) [[unlikely]] return; }
L_002D8EE4:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8EF0u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 54u, depth + 1u); else { c.pc = 0x002D8D10u; return; } if (c.pc != 0x002D8EF0u) [[unlikely]] return; }
L_002D8EF0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002D8F20; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7814u)));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 784u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002D8F1C; } }
    st8((c.r[16].w[0] + 784u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_002D8F1C:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002D8F20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8F28u);  if (depth < kMaxDepth) unit_0076(c, 180u, depth + 1u); else { c.pc = 0x002DB050u; return; } if (c.pc != 0x002D8F28u) [[unlikely]] return; }
L_002D8F28:
    st16((c.r[16].w[0] + 808u), static_cast<std::uint16_t>(0u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D8F40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8059u)));
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { goto L_002D8F7C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 7815u)));
    c.f[12] = 0u;
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    mmi::paddub(c.r[7], c.r[16], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8F7Cu); st8((c.r[17].w[0] + 7775u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002D8F7Cu) [[unlikely]] return; }
L_002D8F7C:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8F88u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 54u, depth + 1u); else { c.pc = 0x002D8D10u; return; } if (c.pc != 0x002D8F88u) [[unlikely]] return; }
L_002D8F88:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_002D8FB4; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 784u));
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002D8FB0; } }
    st8((c.r[17].w[0] + 784u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_002D8FB0:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_002D8FB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8FBCu);  if (depth < kMaxDepth) unit_0076(c, 180u, depth + 1u); else { c.pc = 0x002DB050u; return; } if (c.pc != 0x002D8FBCu) [[unlikely]] return; }
L_002D8FBC:
    st16((c.r[17].w[0] + 808u), static_cast<std::uint16_t>(0u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002D8FE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 108u), 0u);
    st32((c.r[4].w[0] + 104u), 0u);
    st8((c.r[4].w[0] + 741u), static_cast<std::uint8_t>(0u));
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    set32(c.r[3], 0u - 29181u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] - 27184u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    st16((c.r[4].w[0] + 812u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 806u)));
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9034u); st8((c.r[4].w[0] + 771u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003C(c, 227u, depth + 1u); else { c.pc = 0x001F3160u; return; } if (c.pc != 0x002D9034u) [[unlikely]] return; }
L_002D9034:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D903Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 180u, depth + 1u); else { c.pc = 0x002DB050u; return; } if (c.pc != 0x002D903Cu) [[unlikely]] return; }
L_002D903C:
    c.f[12] = 0u;
    mmi::paddub(c.r[7], c.r[16], c.r[0]);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9054u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x002D9054u) [[unlikely]] return; }
L_002D9054:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9060u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 55u, depth + 1u); else { c.pc = 0x002D8DE0u; return; } if (c.pc != 0x002D9060u) [[unlikely]] return; }
L_002D9060:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002D9080:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], 0u + 23u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9098u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 54u, depth + 1u); else { c.pc = 0x002D8D10u; return; } if (c.pc != 0x002D9098u) [[unlikely]] return; }
L_002D9098:
    set32(c.r[2], 0u + 23u);
    st16((c.r[16].w[0] + 808u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D90DC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 32160u);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 784u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002D90DC; } }
    st8((c.r[16].w[0] + 784u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_002D90DC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 32160u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D90FCu); st16((c.r[16].w[0] + 850u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 180u, depth + 1u); else { c.pc = 0x002DB050u; return; } if (c.pc != 0x002D90FCu) [[unlikely]] return; }
L_002D90FC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D9110:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[3], c.r[2].w[0] + 32160u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[2], 0u + 3u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    st16((c.r[4].w[0] + 850u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    c.r[3].d[0] = c.r[4].d[0] & 3ull;
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u - 29183u);  if (t) { goto L_002D91A8; } }
    set32(c.r[2], 0u - 29184u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    st16((c.r[16].w[0] + 812u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 850u)));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 784u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002D9174; } }
    st8((c.r[16].w[0] + 784u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_002D9174:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 31440u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9194u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D9194u) [[unlikely]] return; }
L_002D9194:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D919Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 180u, depth + 1u); else { c.pc = 0x002DB050u; return; } if (c.pc != 0x002D919Cu) [[unlikely]] return; }
L_002D919C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 23u);  if (t) { goto L_002D91B4; } }
    set32(c.r[2], 0u - 29183u);
    c.budget -= 1;
L_002D91A8:
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    st16((c.r[16].w[0] + 812u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 23u);
    c.budget -= 3;
L_002D91B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D91BCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 55u, depth + 1u); else { c.pc = 0x002D8DE0u; return; } if (c.pc != 0x002D91BCu) [[unlikely]] return; }
L_002D91BC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D91D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    set32(c.r[5], 0u + 23u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D91F0u); mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 54u, depth + 1u); else { c.pc = 0x002D8D10u; return; } if (c.pc != 0x002D91F0u) [[unlikely]] return; }
L_002D91F0:
    set32(c.r[2], 0u + 23u);
    st16((c.r[17].w[0] + 808u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_002D9224; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 784u));
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002D9220; } }
    st8((c.r[17].w[0] + 784u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_002D9220:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_002D9224:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D922Cu); st16((c.r[17].w[0] + 850u), static_cast<std::uint16_t>(c.r[16].w[0]));  if (depth < kMaxDepth) unit_0076(c, 180u, depth + 1u); else { c.pc = 0x002DB050u; return; } if (c.pc != 0x002D922Cu) [[unlikely]] return; }
L_002D922C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002D9240:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st16((c.r[4].w[0] + 850u), static_cast<std::uint16_t>(c.r[5].w[0]));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    set32(c.r[2], 0u + 3u);
    c.r[3].d[0] = c.r[4].d[0] & 3ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u - 29183u);  if (t) { goto L_002D92C0; } }
    set32(c.r[3], 0u - 29184u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st16((c.r[16].w[0] + 812u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 784u));
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002D928C; } }
    st8((c.r[16].w[0] + 784u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_002D928C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 31440u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D92ACu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D92ACu) [[unlikely]] return; }
L_002D92AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D92B4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 180u, depth + 1u); else { c.pc = 0x002DB050u; return; } if (c.pc != 0x002D92B4u) [[unlikely]] return; }
L_002D92B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 23u);  if (t) { goto L_002D92CC; } }
    set32(c.r[2], 0u - 29183u);
    c.budget -= 1;
L_002D92C0:
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    st16((c.r[16].w[0] + 812u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 23u);
    c.budget -= 3;
L_002D92CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D92D4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 55u, depth + 1u); else { c.pc = 0x002D8DE0u; return; } if (c.pc != 0x002D92D4u) [[unlikely]] return; }
L_002D92D4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D92F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002D9324; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 784u));
    c.r[1].d[0] = c.r[2].sd[0] < 80ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002D9324; } }
    set32(c.r[2], 0u + 80u);
    st8((c.r[16].w[0] + 784u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002D9324:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    set32(c.r[2], 0u - 29184u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D933Cu); st16((c.r[16].w[0] + 812u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 180u, depth + 1u); else { c.pc = 0x002DB050u; return; } if (c.pc != 0x002D933Cu) [[unlikely]] return; }
L_002D933C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 10u);  if (t) { goto L_002D9370; } }
    set32(c.r[5], 0u + 26u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9358u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 55u, depth + 1u); else { c.pc = 0x002D8DE0u; return; } if (c.pc != 0x002D9358u) [[unlikely]] return; }
L_002D9358:
    set32(c.r[5], 0u + 26u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9364u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 54u, depth + 1u); else { c.pc = 0x002D8D10u; return; } if (c.pc != 0x002D9364u) [[unlikely]] return; }
L_002D9364:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002D937C; } }
    set32(c.r[5], 0u + 10u);
    c.budget -= 1;
L_002D9370:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9378u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002D9378u) [[unlikely]] return; }
L_002D9378:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002D937C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D9390:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    set32(c.r[16], c.r[18].w[0] + 7776u);
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[17], c.r[5], c.r[0]);  if (t) { goto L_002D93D4; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 784u));
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002D93D4; } }
    st8((c.r[18].w[0] + 784u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_002D93D4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 39u)));
    st8((c.r[18].w[0] + 7775u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 38u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D9414; } }
    c.f[0] = c.r[17].w[0];
    c.f[1] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 8u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 10u)));
    mmi::paddub(c.r[7], c.r[17], c.r[0]);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D940Cu); c.f[12] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002D940Cu) [[unlikely]] return; }
L_002D940C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 806u)));  if (t) { goto L_002D9484; } }
L_002D9414:
    c.f[1] = c.r[2].w[0];
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = c.r[2].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9434u); c.f[12] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002D9434u) [[unlikely]] return; }
L_002D9434:
    c.r[1].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.f[12] = ld32((c.r[18].w[0] + 5912u));  if (t) { goto L_002D946C; } }
    set32(c.r[2], c.r[17].w[0] - c.r[2].w[0]);
    c.f[0] = c.r[2].w[0];
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 8u)));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 10u)));
    mmi::paddub(c.r[7], c.r[17], c.r[0]);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9464u); c.f[12] = fp::add(c.f[12], c.f[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002D9464u) [[unlikely]] return; }
L_002D9464:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9480; } }
L_002D946C:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 8u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 10u)));
    mmi::paddub(c.r[7], c.r[2], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9480u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002D9480u) [[unlikely]] return; }
L_002D9480:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 806u)));
    c.budget -= 1;
L_002D9484:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D948Cu); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 54u, depth + 1u); else { c.pc = 0x002D8D10u; return; } if (c.pc != 0x002D948Cu) [[unlikely]] return; }
L_002D948C:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 806u)));
    set32(c.r[3], 0u + 1u);
    st16((c.r[18].w[0] + 808u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st8((c.r[18].w[0] + 8059u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002D94C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 762u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D94E4; } }
    st16((c.r[4].w[0] + 806u), static_cast<std::uint16_t>(0u));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    set32(c.r[3], 0u - 12292u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 812u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002D94F8; } }
L_002D94E4:
    st16((c.r[4].w[0] + 806u), static_cast<std::uint16_t>(0u));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    set32(c.r[3], 0u - 12292u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    st16((c.r[4].w[0] + 812u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
L_002D94F8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D9500:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002D9534; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 84u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 1304u)));
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    st32((c.r[4].w[0] + 1312u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 1304u)));
    mmi::div(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    st32((c.r[4].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 11;
L_002D9534:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D9540:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[4].w[0] + 96u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002D9570; } }
    st32((c.r[16].w[0] + 1304u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 1312u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 84u), c.r[3].w[0]);  if (t) { goto L_002D95FC; } }
L_002D9570:
    c.f[0] = c.r[2].w[0];
    c.f[1] = ld32((c.r[16].w[0] + 1004u));
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 84u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9590u); c.f[12] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002D9590u) [[unlikely]] return; }
L_002D9590:
    st32((c.r[16].w[0] + 84u), c.r[2].w[0]);
    c.f[2] = ld32((c.r[16].w[0] + 96u));
    c.f[0] = ld32((c.r[16].w[0] + 1304u));
    c.f[1] = ld32((c.r[16].w[0] + 1004u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D95B4u); c.f[12] = fp::sub(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002D95B4u) [[unlikely]] return; }
L_002D95B4:
    st32((c.r[16].w[0] + 1304u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 1304u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D95C4u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 291u, depth + 1u); else { c.pc = 0x0013B4D0u; return; } if (c.pc != 0x002D95C4u) [[unlikely]] return; }
L_002D95C4:
    c.f[20] = c.f[0];
    c.f[0] = ld32((c.r[16].w[0] + 96u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D95D4u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 291u, depth + 1u); else { c.pc = 0x0013B4D0u; return; } if (c.pc != 0x002D95D4u) [[unlikely]] return; }
L_002D95D4:
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002D95FC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1312u)));
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 84u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 96u), 0u);  if (t) { goto L_002D95FC; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_002D95FC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002D9610:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002D9630; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 1304u)));
    mmi::div(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    st32((c.r[4].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 6;
L_002D9630:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D9640:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[4].w[0] + 96u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002D9668; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1304u), 0u);  if (t) { goto L_002D96EC; } }
L_002D9668:
    c.f[0] = c.r[2].w[0];
    c.f[1] = ld32((c.r[16].w[0] + 1004u));
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 84u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9688u); c.f[12] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002D9688u) [[unlikely]] return; }
L_002D9688:
    st32((c.r[16].w[0] + 84u), c.r[2].w[0]);
    c.f[2] = ld32((c.r[16].w[0] + 96u));
    c.f[0] = ld32((c.r[16].w[0] + 1304u));
    c.f[1] = ld32((c.r[16].w[0] + 1004u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D96ACu); c.f[12] = fp::sub(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002D96ACu) [[unlikely]] return; }
L_002D96AC:
    st32((c.r[16].w[0] + 1304u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 1304u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D96BCu); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 291u, depth + 1u); else { c.pc = 0x0013B4D0u; return; } if (c.pc != 0x002D96BCu) [[unlikely]] return; }
L_002D96BC:
    c.f[20] = c.f[0];
    c.f[0] = ld32((c.r[16].w[0] + 96u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D96CCu); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 291u, depth + 1u); else { c.pc = 0x0013B4D0u; return; } if (c.pc != 0x002D96CCu) [[unlikely]] return; }
L_002D96CC:
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002D96EC; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 96u), 0u);  if (t) { goto L_002D96EC; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_002D96EC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002D9700:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[6], c.r[2].w[0] - 29024u);
    c.r[3].d[0] = c.r[5].d[0] & 127ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[7], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 1304u)));
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[18], ld32((c.r[3].w[0])));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.budget -= 22;
    { const bool t = c.r[2].sd[0] >= 0; mmi::paddub(c.r[16], c.r[5], c.r[0]);  if (t) { goto L_002D975C; } }
    set32(c.r[18], 0u - c.r[18].w[0]);
    c.budget -= 1;
L_002D975C:
    c.f[1] = c.r[18].w[0];
    c.f[0] = ld32((c.r[17].w[0] + 7780u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    set32(c.r[19], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9774u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002D9774u) [[unlikely]] return; }
L_002D9774:
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9780u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 291u, depth + 1u); else { c.pc = 0x0013B4D0u; return; } if (c.pc != 0x002D9780u) [[unlikely]] return; }
L_002D9780:
    c.f[20] = c.f[0];
    c.f[0] = ld32((c.r[17].w[0] + 1304u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9790u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 291u, depth + 1u); else { c.pc = 0x0013B4D0u; return; } if (c.pc != 0x002D9790u) [[unlikely]] return; }
L_002D9790:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002D9808; } }
    c.f[2] = c.r[18].w[0];
    c.f[0] = c.r[19].w[0];
    c.f[1] = ld32((c.r[17].w[0] + 7780u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D97C0u); c.f[12] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002D97C0u) [[unlikely]] return; }
L_002D97C0:
    c.f[0] = c.r[18].w[0];
    mmi::paddub(c.r[19], c.r[2], c.r[0]);
    c.f[2] = fp::cvt_s_w(c.f[0]);
    st32((c.r[17].w[0] + 1312u), c.r[19].w[0]);
    c.f[1] = ld32((c.r[17].w[0] + 7780u));
    c.f[0] = ld32((c.r[17].w[0] + 1304u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D97E8u); c.f[12] = fp::sub(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002D97E8u) [[unlikely]] return; }
L_002D97E8:
    st32((c.r[17].w[0] + 1304u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002D9800; } }
    st32((c.r[17].w[0] + 84u), c.r[19].w[0]);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 2;
L_002D9800:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);  if (t) { goto L_002D982C; } }
L_002D9808:
    set32(c.r[3], ld32((c.r[17].w[0] + 1304u)));
    c.r[2].d[0] = c.r[16].d[0] & 128ull;
    set32(c.r[19], c.r[19].w[0] + c.r[3].w[0]);
    st32((c.r[17].w[0] + 1312u), c.r[19].w[0]);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[17].w[0] + 1304u), 0u);  if (t) { goto L_002D9824; } }
    st32((c.r[17].w[0] + 84u), c.r[19].w[0]);
    c.budget -= 1;
L_002D9824:
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    c.budget -= 2;
L_002D982C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002D9850:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[6], c.r[2].w[0] - 29024u);
    c.r[3].d[0] = c.r[5].d[0] & 127ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[7], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 1304u)));
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[17], ld32((c.r[3].w[0])));
    c.budget -= 19;
    { const bool t = c.r[2].sd[0] >= 0; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002D98A0; } }
    set32(c.r[17], 0u - c.r[17].w[0]);
    c.budget -= 1;
L_002D98A0:
    c.f[1] = c.r[17].w[0];
    c.f[0] = ld32((c.r[16].w[0] + 7780u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D98B4u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002D98B4u) [[unlikely]] return; }
L_002D98B4:
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D98C0u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 291u, depth + 1u); else { c.pc = 0x0013B4D0u; return; } if (c.pc != 0x002D98C0u) [[unlikely]] return; }
L_002D98C0:
    c.f[20] = c.f[0];
    c.f[0] = ld32((c.r[16].w[0] + 1304u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D98D0u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 291u, depth + 1u); else { c.pc = 0x0013B4D0u; return; } if (c.pc != 0x002D98D0u) [[unlikely]] return; }
L_002D98D0:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002D9930; } }
    c.f[0] = c.r[17].w[0];
    c.f[1] = ld32((c.r[16].w[0] + 7780u));
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 84u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9900u); c.f[12] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002D9900u) [[unlikely]] return; }
L_002D9900:
    c.f[0] = c.r[17].w[0];
    st32((c.r[16].w[0] + 84u), c.r[2].w[0]);
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = ld32((c.r[16].w[0] + 1304u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9924u); c.f[12] = fp::sub(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002D9924u) [[unlikely]] return; }
L_002D9924:
    st32((c.r[16].w[0] + 1304u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002D9948; } }
L_002D9930:
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 1304u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 84u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 1304u), 0u);
    c.budget -= 6;
L_002D9948:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002D9960:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26476u)));
    set32(c.r[3], c.r[28].w[0] - 26444u);
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0]));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D9B58; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[3], c.r[2].w[0] + 26144u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 3;
L_002D99A4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[4].w[0] + 1u);  goto L_002D99C4; }
    st16((c.r[3].w[0] + 846u), static_cast<std::uint16_t>(0u));
    st8((c.r[3].w[0] + 750u), static_cast<std::uint8_t>(0u));
    st8((c.r[3].w[0] + 751u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 5;
L_002D99C4:
    c.r[2].d[0] = c.r[4].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 8448u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D99A4u | kUnwind; return; } goto L_002D99A4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[16], c.r[2].w[0] + 26144u);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 3;
L_002D99DC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_002D9A5C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x461C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    st32((c.r[16].w[0] + 988u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[19], c.r[2].w[0] + 26144u);
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    c.budget -= 6;
L_002D9A00:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_002D9A4C; }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[19].d[0];  if (t) { goto L_002D9A48; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 531u));
    c.r[2].d[0] = ld8((c.r[19].w[0] + 531u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002D9A48; } }
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9A30u); set32(c.r[5], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x002D9A30u) [[unlikely]] return; }
L_002D9A30:
    c.f[1] = ld32((c.r[16].w[0] + 988u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002D9A48; } }
    st32((c.r[16].w[0] + 988u), c.f[0]);
    c.budget -= 1;
L_002D9A48:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_002D9A4C:
    c.r[2].d[0] = c.r[18].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 8448u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D9A00u | kUnwind; return; } goto L_002D9A00; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002D9A5C:
    c.r[2].d[0] = c.r[17].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 8448u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D99DCu | kUnwind; return; } goto L_002D99DC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[16], c.r[2].w[0] + 26144u);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 3;
L_002D9A74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9A7Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 127u, depth + 1u); else { c.pc = 0x002D9B80u; return; } if (c.pc != 0x002D9A7Cu) [[unlikely]] return; }
L_002D9A7C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 755u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_002D9B4C; }
    set32(c.r[2], ld32((c.r[16].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002D9B3C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D9AB8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D9ACC; } }
    c.budget -= 1;
L_002D9AB8:
    st32((c.r[16].w[0] + 1536u), 0u);
    st32((c.r[16].w[0] + 1548u), 0u);
    st32((c.r[16].w[0] + 1520u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 524u), 0u);  if (t) { goto L_002D9B38; } }
L_002D9ACC:
    set32(c.r[2], ld32((c.r[16].w[0] + 520u)));
    c.f[3] = ld32((c.r[2].w[0] + 80u));
    c.f[2] = ld32((c.r[2].w[0] + 84u));
    c.f[1] = ld32((c.r[2].w[0] + 88u));
    c.f[0] = ld32((c.r[2].w[0] + 92u));
    st32((c.r[16].w[0] + 1376u), c.f[3]);
    st32((c.r[16].w[0] + 1380u), c.f[2]);
    st32((c.r[16].w[0] + 1384u), c.f[1]);
    st32((c.r[16].w[0] + 1388u), c.f[0]);
    c.f[3] = ld32((c.r[16].w[0] + 1376u));
    c.f[2] = ld32((c.r[16].w[0] + 1380u));
    c.f[1] = ld32((c.r[16].w[0] + 1384u));
    c.f[0] = ld32((c.r[16].w[0] + 1388u));
    st32((c.r[16].w[0] + 1328u), c.f[3]);
    st32((c.r[16].w[0] + 1332u), c.f[2]);
    st32((c.r[16].w[0] + 1336u), c.f[1]);
    st32((c.r[16].w[0] + 1340u), c.f[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 1520u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 22;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002D9B38; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8385u)));
    c.r[2].d[0] = ld16((c.r[4].w[0] + 846u));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st16((c.r[4].w[0] + 846u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
L_002D9B38:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002D9B3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9B44u);  if (depth < kMaxDepth) unit_0076(c, 185u, depth + 1u); else { c.pc = 0x002DB2C0u; return; } if (c.pc != 0x002D9B44u) [[unlikely]] return; }
L_002D9B44:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 2;
L_002D9B4C:
    c.r[3].d[0] = c.r[17].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 8448u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D9A74u | kUnwind; return; } goto L_002D9A74; } }
L_002D9B58:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002D9B80:
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
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[21], c.r[4], c.r[0]);  if (t) { goto L_002D9BD4; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 4u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002D9BD4; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 792u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D9C10; } }
L_002D9BD4:
    st32((c.r[21].w[0] + 1520u), 0u);
    st32((c.r[21].w[0] + 520u), 0u);
    st32((c.r[21].w[0] + 524u), 0u);
    st32((c.r[21].w[0] + 1524u), 0u);
    st32((c.r[21].w[0] + 1540u), 0u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 755u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002D9C08; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002DA1D0; } }
L_002D9C08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[21].w[0] + 755u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002DA1D0; } }
L_002D9C10:
    set32(c.r[5], ld32((c.r[28].w[0] - 26476u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[4], c.r[3].w[0] - 7968u);
    set32(c.r[3], c.r[28].w[0] - 26444u);
    c.r[6].d[0] = c.r[5].d[0] ^ 1ull;
    set32(c.r[5], c.r[6].w[0] << 10);
    set32(c.r[18], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[6].w[0] << 1);
    set32(c.r[19], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[28].w[0] - 25236u), 0u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[17], c.r[0], c.r[0]);  if (t) { goto L_002D9D80; } }
L_002D9C40:
    set32(c.r[16], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 4u);  goto L_002D9D7C; }
    set32(c.r[5], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002D9D78; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D9D78; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    set32(c.r[3], 0u + 17u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_002D9D78; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u + 2u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[7].d[0] == c.r[3].d[0];  if (t) { goto L_002D9C90; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_002D9D78; } }
L_002D9C90:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == c.r[5].d[0];  if (t) { goto L_002D9D78; } }
    c.r[3].d[0] = ld8((c.r[21].w[0] + 531u));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 531u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; set32(c.r[3], 0u + 255u);  if (t) { goto L_002D9D78; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002D9D78; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 579u));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_002D9D78; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != c.r[3].d[0]; c.r[1].d[0] = c.r[6].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_002D9CEC; } }
    c.r[1].d[0] = c.r[6].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002D9D08; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 4u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002D9D78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 72u)));  if (t) { goto L_002D9D0C; } }
L_002D9CEC:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002D9D08; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 4u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002D9D78; } }
    c.budget -= 1;
L_002D9D08:
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 1;
L_002D9D0C:
    c.r[3].d[0] = ld8((c.r[3].w[0] + 1u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[4], c.r[21], c.r[0]);  if (t) { goto L_002D9D78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9D24u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 139u, depth + 1u); else { c.pc = 0x002DA200u; return; } if (c.pc != 0x002D9D24u) [[unlikely]] return; }
L_002D9D24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], c.r[29].w[0] + 172u);  if (t) { goto L_002D9D78; } }
    mmi::paddub(c.r[4], c.r[21], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9D38u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 142u, depth + 1u); else { c.pc = 0x002DA3F0u; return; } if (c.pc != 0x002D9D38u) [[unlikely]] return; }
L_002D9D38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D9D78; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 25236u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[3].w[0] - 7072u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[3], c.r[3].w[0] - 8096u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[4].w[0]), c.r[16].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 172u));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0]), c.f[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 25236u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[28].w[0] - 25236u), c.r[3].w[0]);
    c.budget -= 14;
L_002D9D78:
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.budget -= 1;
L_002D9D7C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002D9D80:
    c.r[3].d[0] = ld16((c.r[19].w[0]));
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D9C40u | kUnwind; return; } goto L_002D9C40; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 25236u)));
    set32(c.r[22], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[22].sd[0] <= 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x00AA0000u);  if (t) { goto L_002D9EB8; } }
    set32(c.r[3], c.r[3].w[0] - 7072u);
    set32(c.r[4], c.r[22].w[0] << 2);
    set32(c.r[30], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[3], c.r[3].w[0] - 8096u);
    set32(c.r[23], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 6;
L_002D9DB8:
    set32(c.r[16], c.r[22].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] < 0; mmi::paddub(c.r[17], c.r[22], c.r[0]);  if (t) { goto L_002D9E58; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[2], c.r[2].w[0] - 7072u);
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[2], c.r[2].w[0] - 8096u);
    set32(c.r[19], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
L_002D9DE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[2], c.r[2].w[0] - 7072u);
    set32(c.r[6], ld32((c.r[18].w[0])));
    set32(c.r[20], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9E00u); mmi::paddub(c.r[4], c.r[21], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 144u, depth + 1u); else { c.pc = 0x002DA4D0u; return; } if (c.pc != 0x002D9E00u) [[unlikely]] return; }
L_002D9E00:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { mmi::paddub(c.r[17], c.r[16], c.r[0]);  goto L_002D9E44; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x00AA0000u);  if (t) { goto L_002D9E20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] - 1u);  if (t) { goto L_002D9E4C; } }
L_002D9E20:
    set32(c.r[3], c.r[3].w[0] - 8096u);
    c.f[0] = ld32((c.r[19].w[0]));
    set32(c.r[3], c.r[3].w[0] + c.r[20].w[0]);
    c.f[1] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002D9E48; } }
    mmi::paddub(c.r[17], c.r[16], c.r[0]);
    c.budget -= 1;
L_002D9E44:
    c.budget -= 1;
L_002D9E48:
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 1;
L_002D9E4C:
    set32(c.r[18], c.r[18].w[0] - 4u);
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] >= 0; set32(c.r[19], c.r[19].w[0] - 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D9DE0u | kUnwind; return; } goto L_002D9DE0; } }
L_002D9E58:
    c.budget -= 2;
    if (c.r[17].d[0] == c.r[22].d[0]) { set32(c.r[22], c.r[22].w[0] - 1u);  goto L_002D9EAC; }
    set32(c.r[5], ld32((c.r[30].w[0])));
    c.f[0] = ld32((c.r[23].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[3], c.r[3].w[0] - 7072u);
    set32(c.r[6], c.r[17].w[0] << 2);
    set32(c.r[7], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[29].w[0] + 172u), c.f[0]);
    set32(c.r[4], ld32((c.r[7].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[3], c.r[3].w[0] - 8096u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[30].w[0]), c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[23].w[0]), c.f[0]);
    st32((c.r[7].w[0]), c.r[5].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 172u));
    st32((c.r[3].w[0]), c.f[0]);
    set32(c.r[22], c.r[22].w[0] - 1u);
    c.budget -= 19;
L_002D9EAC:
    set32(c.r[30], c.r[30].w[0] - 4u);
    c.budget -= 3;
    { const bool t = c.r[22].sd[0] > 0; set32(c.r[23], c.r[23].w[0] - 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D9DB8u | kUnwind; return; } goto L_002D9DB8; } }
L_002D9EB8:
    set32(c.r[6], ld32((c.r[21].w[0] + 1524u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002D9F3C; } }
    set32(c.r[7], ld32((c.r[28].w[0] - 25236u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[5], c.r[3].w[0] - 7072u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[8], c.r[0], c.r[0]);  if (t) { goto L_002D9EF0; } }
L_002D9ED8:
    set32(c.r[4], ld32((c.r[5].w[0])));
    set32(c.r[3], ld32((c.r[21].w[0] + 1540u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002D9F00; } }
    set32(c.r[5], c.r[5].w[0] + 4u);
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 2;
L_002D9EF0:
    c.r[3].d[0] = c.r[8].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D9ED8u | kUnwind; return; } goto L_002D9ED8; } }
    c.budget -= 1;
L_002D9F00:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != c.r[7].d[0];  if (t) { goto L_002D9F14; } }
    st32((c.r[21].w[0] + 1540u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 1524u), 0u);  if (t) { goto L_002D9F3C; } }
L_002D9F14:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 1u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002D9F3C; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 16384ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D9F3C; } }
    st32((c.r[21].w[0] + 1540u), 0u);
    st32((c.r[21].w[0] + 1524u), 0u);
    c.budget -= 2;
L_002D9F3C:
    set32(c.r[4], ld32((c.r[28].w[0] - 25236u)));
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[28].w[0] - 25236u), c.r[3].w[0]);  if (t) { goto L_002DA048; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 25236u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[3], c.r[3].w[0] - 7072u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[5], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 5;
L_002D9F60:
    set32(c.r[4], ld32((c.r[5].w[0])));
    set32(c.r[6], ld32((c.r[4].w[0] + 20u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 1u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002D9F88; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 16384ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002DA030; } }
L_002D9F88:
    st32((c.r[21].w[0] + 1540u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    st32((c.r[21].w[0] + 1524u), c.r[3].w[0]);
    c.f[3] = ld32((c.r[4].w[0] + 80u));
    c.f[2] = ld32((c.r[4].w[0] + 84u));
    c.f[1] = ld32((c.r[4].w[0] + 88u));
    c.f[0] = ld32((c.r[4].w[0] + 92u));
    st32((c.r[21].w[0] + 1344u), c.f[3]);
    st32((c.r[21].w[0] + 1348u), c.f[2]);
    st32((c.r[21].w[0] + 1352u), c.f[1]);
    st32((c.r[21].w[0] + 1356u), c.f[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 369u)));
    c.budget -= 15;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002DA048; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 8387u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[5], c.r[3].w[0] - 1472u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 8386u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 812u)));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[4].w[0] << 3);
    set32(c.r[4], ld32((c.r[6].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);  if (t) { goto L_002D9FF8; } }
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 1;
L_002D9FF8:
    st8((c.r[21].w[0] + 776u), static_cast<std::uint8_t>(0u));
    c.f[0] = ld32((c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[3], c.r[3].w[0] - 8096u);
    set32(c.r[4], ld32((c.r[28].w[0] - 25236u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[1] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_002DA048; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[21].w[0] + 776u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002DA048; } }
L_002DA030:
    set32(c.r[4], ld32((c.r[28].w[0] - 25236u)));
    set32(c.r[5], c.r[5].w[0] - 4u);
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[28].w[0] - 25236u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D9F60u | kUnwind; return; } goto L_002D9F60; } }
    c.budget -= 1;
L_002DA048:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 755u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; mmi::paddub(c.r[4], c.r[21], c.r[0]);  if (t) { goto L_002DA060; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA060u);  if (depth < kMaxDepth) unit_0076(c, 180u, depth + 1u); else { c.pc = 0x002DB050u; return; } if (c.pc != 0x002DA060u) [[unlikely]] return; }
L_002DA060:
    set32(c.r[6], ld32((c.r[21].w[0] + 1524u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[9], c.r[3].w[0] + 26144u);
    mmi::paddub(c.r[8], c.r[0], c.r[0]);
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
L_002DA074:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[8], c.r[8].w[0] + 1u);  goto L_002DA104; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_002DA100; } }
    c.budget -= 2;
    { const bool t = c.r[9].d[0] == c.r[21].d[0];  if (t) { goto L_002DA100; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 279u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 8385u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[7].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002DA0CC; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] ^ c.r[7].d[0];  if (t) { goto L_002DA0C4; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 264u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[9].d[0]; c.r[3].d[0] = c.r[4].d[0] ^ c.r[7].d[0];  if (t) { goto L_002DA100; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[9].w[0] + 279u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002DA100; } }
L_002DA0C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[9].w[0] + 279u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002DA100; } }
L_002DA0CC:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002DA100; } }
    c.budget -= 2;
    { const bool t = c.r[9].d[0] == c.r[6].d[0];  if (t) { goto L_002DA0E8; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 264u)));
    c.budget -= 3;
    { const bool t = c.r[9].d[0] != c.r[3].d[0];  if (t) { goto L_002DA100; } }
L_002DA0E8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 776u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002DA100; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 279u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[7].d[0];
    st8((c.r[9].w[0] + 279u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_002DA100:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_002DA104:
    c.r[3].d[0] = c.r[8].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[9], c.r[9].w[0] + 8448u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DA074u | kUnwind; return; } goto L_002DA074; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002DA1D0; } }
    set32(c.r[5], ld32((c.r[21].w[0] + 1524u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[8], c.r[3].w[0] - 14816u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (t) { goto L_002DA1C0; } }
L_002DA138:
    set32(c.r[6], ld32((c.r[8].w[0])));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[8], c.r[8].w[0] + 4u);  goto L_002DA1BC; }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 279u)));
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 8385u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[9].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002DA180; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] ^ c.r[9].d[0];  if (t) { goto L_002DA178; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 264u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[6].d[0]; c.r[3].d[0] = c.r[4].d[0] ^ c.r[9].d[0];  if (t) { goto L_002DA1B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0] + 279u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002DA1B8; } }
L_002DA178:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0] + 279u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002DA1B8; } }
L_002DA180:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002DA1B8; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_002DA1A0; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 264u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_002DA1B8; } }
    c.budget -= 1;
L_002DA1A0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 776u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002DA1B8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 279u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[9].d[0];
    st8((c.r[6].w[0] + 279u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_002DA1B8:
    set32(c.r[8], c.r[8].w[0] + 4u);
    c.budget -= 1;
L_002DA1BC:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_002DA1C0:
    c.r[3].d[0] = ld16((c.r[28].w[0] - 26576u));
    c.r[3].d[0] = c.r[7].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DA138u | kUnwind; return; } goto L_002DA138; } }
L_002DA1D0:
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
L_002DA200:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 28448u);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA23Cu); set32(c.r[4], c.r[2].w[0] + 80u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002DA23Cu) [[unlikely]] return; }
L_002DA23C:
    set32(c.r[4], c.r[16].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA248u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002DA248u) [[unlikely]] return; }
L_002DA248:
    set32(c.r[9], c.r[29].w[0] + 56u);
    c.f[1] = 0u;
    c.f[2] = ld32((c.r[9].w[0]));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[2]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002DA278; } }
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0xBE4C0000u);  if (t) { goto L_002DA284; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_002DA278:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_002DA3D8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBE4C0000u);
    c.budget -= 1;
L_002DA284:
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[5] = c.r[2].w[0];
    fpu_div(c, 0u, c.f[2], c.f[5]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002DA2B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002DA3D4; } }
L_002DA2B4:
    c.f[1] = ld32((c.r[29].w[0] + 48u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[7], c.r[2].w[0] + 11232u);
    c.f[0] = ld32((c.r[17].w[0] + 1008u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D750000u);
    c.r[6].d[0] = c.r[2].d[0] | 49807ull;
    c.f[1] = fp::mul(c.f[5], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D230000u);
    c.r[5].d[0] = c.r[2].d[0] | 55050ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[4], c.r[2].w[0] + 11236u);
    fpu_div(c, 1u, c.f[1], c.f[2]);
    set32(c.r[10], c.r[29].w[0] + 52u);
    set32(c.r[3], 0u + 1u);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.f[4] = ld32((c.r[10].w[0]));
    c.f[3] = ld32((c.r[9].w[0]));
    c.f[2] = ld32((c.r[17].w[0] + 1012u));
    c.f[1] = c.r[5].w[0];
    c.f[0] = c.r[6].w[0];
    c.f[4] = fp::mul(c.f[5], c.f[4]);
    fpu_div(c, 3u, c.f[4], c.f[3]);
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    st32((c.r[10].w[0]), c.f[2]);
    c.f[3] = ld32((c.r[9].w[0]));
    c.f[2] = fp::mul(c.f[5], c.f[3]);
    fpu_div(c, 2u, c.f[2], c.f[3]);
    st32((c.r[9].w[0]), c.f[2]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8386u)));
    c.f[4] = ld32((c.r[17].w[0] + 8408u));
    c.f[5] = ld32((c.r[29].w[0] + 48u));
    set32(c.r[6], c.r[5].w[0] << 3);
    set32(c.r[5], c.r[7].w[0] + c.r[6].w[0]);
    c.f[3] = fp::mul(c.f[0], c.f[4]);
    c.f[2] = ld32((c.r[5].w[0]));
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[4].w[0]));
    c.f[1] = fp::mul(c.f[1], c.f[4]);
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    c.f[3] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = c.f[2] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[5]) <= fp::key(c.f[0]));
    c.budget -= 47;
    { const bool t = !(c.fcr31 & kFpuCondition); mmi::paddub(c.r[8], c.r[0], c.r[0]);  if (t) { goto L_002DA374; } }
    mmi::paddub(c.r[3], c.r[0], c.r[0]);
    c.budget -= 1;
L_002DA374:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002DA390; } }
    fpu_compare(c, fp::key(c.f[5]) < fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_002DA390; } }
    mmi::paddub(c.r[3], c.r[0], c.r[0]);
    c.budget -= 1;
L_002DA390:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002DA3B4; } }
    c.f[1] = ld32((c.r[10].w[0]));
    c.f[0] = c.f[3] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002DA3B4; } }
    set32(c.r[8], 0u + 1u);
    c.budget -= 1;
L_002DA3B4:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_002DA3D4; } }
    c.f[0] = ld32((c.r[10].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[3]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002DA3D4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002DA3D4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002DA3D8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002DA3F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    mmi::paddub(c.r[16], c.r[6], c.r[0]);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { goto L_002DA418; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 2u);  if (t) { goto L_002DA428; } }
L_002DA418:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], c.r[4].w[0] << 6);  goto L_002DA42C; }
    mmi::paddub(c.r[4], c.r[2], c.r[0]);
    c.budget -= 1;
L_002DA428:
    set32(c.r[2], c.r[4].w[0] << 6);
    c.budget -= 1;
L_002DA42C:
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 2032u));
    set32(c.r[4], c.r[5].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 2036u));
    st32((c.r[29].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 2040u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA454u); st32((c.r[29].w[0] + 56u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x002DA454u) [[unlikely]] return; }
L_002DA454:
    st32((c.r[16].w[0]), c.f[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 369u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DA470; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002DA4B0; } }
L_002DA470:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DA488; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[17].w[0] + 1608u));  if (t) { goto L_002DA490; } }
L_002DA488:
    c.f[1] = ld32((c.r[17].w[0] + 1604u));
    c.budget -= 2;
L_002DA490:
    c.f[0] = ld32((c.r[16].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002DA4B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002DA4B0; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_002DA4B0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002DA4D0:
    set32(c.r[8], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 20u)));
    set32(c.r[7], 0u + 2u);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    c.budget -= 6;
    { const bool t = c.r[9].d[0] != c.r[7].d[0]; set32(c.r[2], ld32((c.r[5].w[0] + 20u)));  if (t) { goto L_002DA53C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002DA5B0; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8385u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 279u)));
    c.r[8].d[0] = c.r[4].d[0] & c.r[7].d[0];
    c.budget -= 5;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_002DA51C; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 279u)));
    c.r[4].d[0] = c.r[4].d[0] & c.r[7].d[0];
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002DA51C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002DA740; } }
L_002DA51C:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { goto L_002DA5B0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 279u)));
    c.r[4].d[0] = c.r[4].d[0] & c.r[7].d[0];
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002DA5B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002DA740; } }
L_002DA53C:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1u)));
    c.r[1].d[0] = c.r[7].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002DA5B0; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    c.r[1].d[0] = c.r[7].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002DA5B0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002DA5B0; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8385u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 279u)));
    c.r[8].d[0] = c.r[4].d[0] & c.r[7].d[0];
    c.budget -= 5;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_002DA590; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 279u)));
    c.r[4].d[0] = c.r[4].d[0] & c.r[7].d[0];
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002DA590; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002DA740; } }
L_002DA590:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { goto L_002DA5B0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 279u)));
    c.r[4].d[0] = c.r[4].d[0] & c.r[7].d[0];
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002DA5B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002DA740; } }
L_002DA5B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[4], 0u + 2u);  if (t) { goto L_002DA608; } }
    set32(c.r[5], ld32((c.r[5].w[0] + 72u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 72u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[4], c.r[2].w[0] - 27120u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[5].d[0] = ld8((c.r[5].w[0] + 2u));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 2u));
    set32(c.r[2], c.r[2].w[0] - 27120u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 14;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;  goto L_002DA5FC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_002DA740; } }
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 1;
L_002DA5FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DA740; } }
    set32(c.r[4], 0u + 2u);
    c.budget -= 1;
L_002DA608:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] != c.r[4].d[0];  if (t) { goto L_002DA63C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[6], c.r[4].w[0] - 27072u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 519u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 519u)));
    set32(c.r[4], c.r[4].w[0] - 27072u);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = ld8((c.r[6].w[0]));  if (t) { goto L_002DA668; } }
L_002DA63C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[6], c.r[4].w[0] - 27088u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 519u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 519u)));
    set32(c.r[4], c.r[4].w[0] - 27088u);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[6].w[0]));
    c.r[4].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 11;
L_002DA668:
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.r[1].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002DA684; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002DA740; } }
L_002DA684:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[4].d[0]) { mmi::paddub(c.r[2], c.r[0], c.r[0]);  goto L_002DA740; }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1u)));
    c.r[1].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], 0u + 2u);  goto L_002DA734; }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    c.r[1].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002DA730; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 812u)));
    c.r[5].d[0] = c.r[4].d[0] & 8192ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002DA6D4; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 812u)));
    c.r[4].d[0] = c.r[4].d[0] & 8192ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002DA6D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002DA740; } }
L_002DA6D4:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_002DA6F4; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 812u)));
    c.r[4].d[0] = c.r[4].d[0] & 8192ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002DA6F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002DA740; } }
L_002DA6F4:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 8391u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002DA714; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 8391u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DA714; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002DA740; } }
L_002DA714:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002DA730; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 8391u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002DA730; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002DA740; } }
L_002DA730:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_002DA734:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DA740; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_002DA740:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002DA750:
    set32(c.r[29], c.r[29].w[0] - 240u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
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
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    mmi::paddub(c.r[20], c.r[5], c.r[0]);
    c.budget -= 17;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002DA7B8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[3], c.r[2].w[0] + 13488u);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 746u));
    set32(c.r[4], c.r[4].w[0] << 7);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_002DA7DC; } }
L_002DA7B8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002DA7DC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[2].w[0] + 16176u);
    set32(c.r[3], c.r[3].w[0] - 32u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
L_002DA7DC:
    set32(c.r[17], ld32((c.r[16].w[0] + 520u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002DA954; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA7F0u); set32(c.r[4], c.r[16].w[0] + 2048u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002DA7F0u) [[unlikely]] return; }
L_002DA7F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] - 26832u);
    set32(c.r[3], c.r[20].w[0] << 4);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA808u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002DA808u) [[unlikely]] return; }
L_002DA808:
    c.f[0] = ld32((c.r[16].w[0] + 2096u));
    set32(c.r[19], c.r[29].w[0] + 196u);
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[5], c.r[17].w[0] + 80u);
    st32((c.r[29].w[0] + 192u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 2100u));
    set32(c.r[6], c.r[29].w[0] + 176u);
    st32((c.r[19].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 2104u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA834u); st32((c.r[29].w[0] + 200u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002DA834u) [[unlikely]] return; }
L_002DA834:
    set32(c.r[4], c.r[29].w[0] + 224u);
    set32(c.r[5], c.r[17].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA844u); set32(c.r[6], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002DA844u) [[unlikely]] return; }
L_002DA844:
    c.f[1] = ld32((c.r[29].w[0] + 224u));
    c.f[0] = ld32((c.r[29].w[0] + 232u));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA858u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002DA858u) [[unlikely]] return; }
L_002DA858:
    c.f[20] = c.f[0];
    c.f[1] = ld32((c.r[29].w[0] + 208u));
    c.f[0] = ld32((c.r[29].w[0] + 216u));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA870u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002DA870u) [[unlikely]] return; }
L_002DA870:
    c.f[12] = ld32((c.r[29].w[0] + 212u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA87Cu); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x002DA87Cu) [[unlikely]] return; }
L_002DA87C:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.f[0] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA890u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 291u, depth + 1u); else { c.pc = 0x0013B4D0u; return; } if (c.pc != 0x002DA890u) [[unlikely]] return; }
L_002DA890:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA898u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002DA898u) [[unlikely]] return; }
L_002DA898:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[3].w[0] + 13312u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[17].w[0] + 80u);  if (t) { goto L_002DA900; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002DA954; } }
    c.f[0] = ld32((c.r[19].w[0]));
    c.f[1] = ld32((c.r[17].w[0] + 84u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA8E8u); c.f[12] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 291u, depth + 1u); else { c.pc = 0x0013B4D0u; return; } if (c.pc != 0x002DA8E8u) [[unlikely]] return; }
L_002DA8E8:
    c.f[1] = ld32((c.r[18].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002DA954; } }
    set32(c.r[4], c.r[17].w[0] + 80u);
    c.budget -= 1;
L_002DA900:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA908u); set32(c.r[5], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x002DA908u) [[unlikely]] return; }
L_002DA908:
    c.f[1] = ld32((c.r[18].w[0]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002DA954; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1520u)));
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 1536u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 520u)));
    st32((c.r[16].w[0] + 1548u), c.r[3].w[0]);
    c.f[3] = ld32((c.r[16].w[0] + 1328u));
    c.f[2] = ld32((c.r[16].w[0] + 1332u));
    c.f[1] = ld32((c.r[16].w[0] + 1336u));
    c.f[0] = ld32((c.r[16].w[0] + 1340u));
    st32((c.r[16].w[0] + 1376u), c.f[3]);
    st32((c.r[16].w[0] + 1380u), c.f[2]);
    st32((c.r[16].w[0] + 1384u), c.f[1]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1388u), c.f[0]);  if (t) { goto L_002DACF0; } }
L_002DA954:
    st32((c.r[16].w[0] + 1536u), 0u);
    st32((c.r[16].w[0] + 1548u), 0u);
    c.f[20] = ld32((c.r[18].w[0]));
    set32(c.r[4], c.r[16].w[0] + 2048u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA96Cu); mmi::paddub(c.r[17], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002DA96Cu) [[unlikely]] return; }
L_002DA96C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] - 26832u);
    set32(c.r[3], c.r[20].w[0] << 4);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA984u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002DA984u) [[unlikely]] return; }
L_002DA984:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[4], c.r[2].w[0] + 11584u);
    set32(c.r[6], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 26476u)));
    set32(c.r[3], c.r[20].w[0] << 3);
    set32(c.r[5], c.r[7].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[21], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    set32(c.r[5], ld32((c.r[21].w[0])));
    set32(c.r[4], c.r[2].w[0] << 10);
    set32(c.r[3], c.r[2].w[0] << 1);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[2], c.r[2].w[0] - 7968u);
    set32(c.r[20], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[28].w[0] - 26444u);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    c.r[8].d[0] = 0ull | 65535ull;
    set32(c.r[23], c.r[2].w[0] + c.r[3].w[0]);
    mmi::paddub(c.r[19], c.r[0], c.r[0]);
    c.budget -= 25;
    { const bool t = 0ull == 0ull; c.r[30].d[0] = c.r[5].d[0] & c.r[8].d[0];  if (t) { goto L_002DACA0; } }
L_002DA9E8:
    set32(c.r[22], ld32((c.r[20].w[0])));
    c.budget -= 3;
    if (c.r[22].d[0] == 0ull) { set32(c.r[20], c.r[20].w[0] + 4u);  goto L_002DAC9C; }
    set32(c.r[4], ld32((c.r[22].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002DAC98; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DAC98; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    set32(c.r[2], 0u + 17u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_002DAC98; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[4].d[0];  if (t) { goto L_002DAC98; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 531u));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 531u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002DAC98; } }
    set32(c.r[2], 0u + 255u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002DAC98; } }
    c.r[1].d[0] = c.r[5].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002DAA60; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002DAC98; } }
    c.budget -= 1;
L_002DAA60:
    set32(c.r[2], ld32((c.r[22].w[0] + 72u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DAC98; } }
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { mmi::paddub(c.r[4], c.r[16], c.r[0]);  goto L_002DAA94; }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002DAC98; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 2;
L_002DAA94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAA9Cu); mmi::paddub(c.r[5], c.r[22], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 139u, depth + 1u); else { c.pc = 0x002DA200u; return; } if (c.pc != 0x002DAA9Cu) [[unlikely]] return; }
L_002DAA9C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DAC98; } }
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[5], c.r[22].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAAB4u); set32(c.r[6], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002DAAB4u) [[unlikely]] return; }
L_002DAAB4:
    set32(c.r[2], c.r[29].w[0] + 216u);
    c.f[13] = ld32((c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAAC4u); c.f[12] = ld32((c.r[29].w[0] + 208u));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x002DAAC4u) [[unlikely]] return; }
L_002DAAC4:
    set32(c.r[2], c.r[2].w[0] - c.r[30].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[1].d[0] = 0ull | 32769ull;
    c.r[1].d[0] = c.r[2].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002DAAF8; } }
    set32(c.r[2], c.r[2].w[0] - 32768u);
    set32(c.r[2], c.r[2].w[0] - 32768u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAAF0u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 291u, depth + 1u); else { c.pc = 0x0013B4D0u; return; } if (c.pc != 0x002DAAF0u) [[unlikely]] return; }
L_002DAAF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAAF8u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002DAAF8u) [[unlikely]] return; }
L_002DAAF8:
    set32(c.r[3], ld32((c.r[21].w[0] + 4u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002DAC98; } }
    c.f[0] = ld32((c.r[16].w[0] + 2096u));
    set32(c.r[2], c.r[29].w[0] + 196u);
    set32(c.r[4], c.r[29].w[0] + 224u);
    set32(c.r[5], c.r[22].w[0] + 80u);
    st32((c.r[29].w[0] + 192u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 2100u));
    set32(c.r[6], c.r[29].w[0] + 192u);
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 2104u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAB34u); st32((c.r[29].w[0] + 200u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002DAB34u) [[unlikely]] return; }
L_002DAB34:
    c.f[1] = ld32((c.r[29].w[0] + 224u));
    c.f[0] = ld32((c.r[29].w[0] + 232u));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAB48u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002DAB48u) [[unlikely]] return; }
L_002DAB48:
    set32(c.r[2], c.r[29].w[0] + 216u);
    c.f[21] = c.f[0];
    c.f[0] = ld32((c.r[29].w[0] + 208u));
    c.f[1] = ld32((c.r[2].w[0]));
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAB64u); c.f[12] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002DAB64u) [[unlikely]] return; }
L_002DAB64:
    c.f[12] = ld32((c.r[29].w[0] + 212u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAB70u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x002DAB70u) [[unlikely]] return; }
L_002DAB70:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.f[0] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAB84u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 291u, depth + 1u); else { c.pc = 0x0013B4D0u; return; } if (c.pc != 0x002DAB84u) [[unlikely]] return; }
L_002DAB84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAB8Cu); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002DAB8Cu) [[unlikely]] return; }
L_002DAB8C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[3].w[0] + 13312u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002DABFC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002DAC98; } }
    set32(c.r[2], c.r[29].w[0] + 196u);
    c.f[1] = ld32((c.r[22].w[0] + 84u));
    c.f[0] = ld32((c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DABE0u); c.f[12] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 291u, depth + 1u); else { c.pc = 0x0013B4D0u; return; } if (c.pc != 0x002DABE0u) [[unlikely]] return; }
L_002DABE0:
    c.f[1] = ld32((c.r[18].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002DAC98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DAC80; } }
L_002DABFC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002DAC80; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[6], ld32((c.r[22].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[6].d[0];  if (t) { goto L_002DAC80; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 519u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 519u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002DAC98; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002DAC80; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002DAC80; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002DAC80; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 8192ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002DAC68; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 8192ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002DAC98; } }
L_002DAC68:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8391u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002DAC80; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 8391u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002DAC98; } }
L_002DAC80:
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002DAC98; } }
    c.f[20] = c.f[21];
    mmi::paddub(c.r[17], c.r[22], c.r[0]);
    c.budget -= 2;
L_002DAC98:
    set32(c.r[20], c.r[20].w[0] + 4u);
    c.budget -= 1;
L_002DAC9C:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_002DACA0:
    c.r[2].d[0] = ld16((c.r[23].w[0]));
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DA9E8u | kUnwind; return; } goto L_002DA9E8; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002DACF0; } }
    st32((c.r[16].w[0] + 1548u), c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 1536u), c.r[3].w[0]);
    c.f[3] = ld32((c.r[17].w[0] + 80u));
    c.f[2] = ld32((c.r[17].w[0] + 84u));
    c.f[1] = ld32((c.r[17].w[0] + 88u));
    c.f[0] = ld32((c.r[17].w[0] + 92u));
    st32((c.r[16].w[0] + 1376u), c.f[3]);
    st32((c.r[16].w[0] + 1380u), c.f[2]);
    st32((c.r[16].w[0] + 1384u), c.f[1]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1388u), c.f[0]);  if (t) { goto L_002DACF0; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_002DACF0:
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
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_002DAD30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[4].w[0] + 1520u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002DAD5C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002DAD68; } }
L_002DAD5C:
    st32((c.r[16].w[0] + 1304u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002DAEB8; } }
L_002DAD68:
    set32(c.r[2], ld32((c.r[16].w[0] + 520u)));
    c.f[3] = ld32((c.r[2].w[0] + 80u));
    c.f[2] = ld32((c.r[2].w[0] + 84u));
    c.f[1] = ld32((c.r[2].w[0] + 88u));
    c.f[0] = ld32((c.r[2].w[0] + 92u));
    st32((c.r[16].w[0] + 1328u), c.f[3]);
    st32((c.r[16].w[0] + 1332u), c.f[2]);
    st32((c.r[16].w[0] + 1336u), c.f[1]);
    st32((c.r[16].w[0] + 1340u), c.f[0]);
    c.f[3] = ld32((c.r[16].w[0] + 1328u));
    c.f[2] = ld32((c.r[16].w[0] + 2096u));
    c.f[1] = ld32((c.r[16].w[0] + 1336u));
    c.f[0] = ld32((c.r[16].w[0] + 2104u));
    c.f[21] = ld32((c.r[16].w[0] + 2100u));
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DADB4u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002DADB4u) [[unlikely]] return; }
L_002DADB4:
    c.f[20] = c.f[0];
    c.f[0] = ld32((c.r[16].w[0] + 1332u));
    c.f[13] = c.f[20];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DADC8u); c.f[12] = fp::sub(c.f[0], c.f[21]);  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x002DADC8u) [[unlikely]] return; }
L_002DADC8:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[2], c.r[2].w[0] - 28160u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002DAE10; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002DAE6C; } }
L_002DAE10:
    c.f[1] = ld32((c.r[16].w[0] + 1332u));
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40F00000u);
    c.f[2] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[2]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[1] = fp::sub(c.f[1], c.f[0]);  if (t) { goto L_002DAE60; } }
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002DAE64; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC0F00000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002DAE6C; } }
L_002DAE60:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_002DAE64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_002DAEBC; } }
L_002DAE6C:
    c.f[3] = ld32((c.r[16].w[0] + 1328u));
    c.f[2] = ld32((c.r[16].w[0] + 2096u));
    c.f[1] = ld32((c.r[16].w[0] + 1336u));
    c.f[0] = ld32((c.r[16].w[0] + 2104u));
    c.f[12] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAE88u); c.f[13] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x002DAE88u) [[unlikely]] return; }
L_002DAE88:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 84u)));
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    st32((c.r[16].w[0] + 1304u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 1304u)));
    set32(c.r[3], c.r[3].w[0] + 4096u);
    c.r[3].d[0] = c.r[3].d[0] & 57344ull;
    st32((c.r[16].w[0] + 1308u), c.r[3].w[0]);
    c.budget -= 12;
L_002DAEB8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002DAEBC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002DAED0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[3] = ld32((c.r[4].w[0] + 1392u));
    c.f[2] = ld32((c.r[4].w[0] + 2096u));
    c.f[1] = ld32((c.r[4].w[0] + 1400u));
    c.f[0] = ld32((c.r[4].w[0] + 2104u));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.f[12] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAEFCu); c.f[13] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x002DAEFCu) [[unlikely]] return; }
L_002DAEFC:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 84u)));
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    st32((c.r[16].w[0] + 1304u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 1304u)));
    set32(c.r[3], c.r[3].w[0] + 4096u);
    c.r[3].d[0] = c.r[3].d[0] & 57344ull;
    st32((c.r[16].w[0] + 1308u), c.r[3].w[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002DAF40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[5], ld32((c.r[4].w[0] + 1520u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull; c.f[20] = c.f[12];  if (t) { goto L_002DAF74; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002DAF78; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002DAF80; } }
L_002DAF74:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_002DAF78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002DB038; } }
L_002DAF80:
    c.f[3] = ld32((c.r[5].w[0] + 32u));
    c.f[2] = ld32((c.r[5].w[0] + 36u));
    c.f[1] = ld32((c.r[5].w[0] + 40u));
    c.f[0] = ld32((c.r[5].w[0] + 44u));
    set32(c.r[3], c.r[29].w[0] + 32u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0]), c.f[3]);
    st32((c.r[3].w[0] + 4u), c.f[2]);
    st32((c.r[3].w[0] + 8u), c.f[1]);
    st32((c.r[3].w[0] + 12u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002DAFD8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] - 27008u);
    c.f[0] = ld32((c.r[29].w[0] + 36u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 36u), c.f[0]);
    c.budget -= 9;
L_002DAFD8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002DAFF4; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[5], c.r[4].w[0] + 32u);  if (t) { goto L_002DB010; } }
L_002DAFF4:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 530u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DB00C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002DB034; } }
L_002DB00C:
    set32(c.r[5], c.r[4].w[0] + 32u);
    c.budget -= 1;
L_002DB010:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB018u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x002DB018u) [[unlikely]] return; }
L_002DB018:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 2u);  if (t) { goto L_002DB034; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002DB034; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_002DB034:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002DB038:
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002DB050:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 755u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { goto L_002DB1F4; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[16], c.r[29].w[0] + 56u);  if (t) { goto L_002DB168; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002DB164; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002DB0A8; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002DB0A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[17].w[0] + 1524u)));  if (t) { goto L_002DB278; } }
L_002DB0A4:
    st8((c.r[17].w[0] + 755u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_002DB0A8:
    set32(c.r[3], ld32((c.r[17].w[0] + 1524u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002DB160; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DB0E0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002DB0E0; } }
    st8((c.r[17].w[0] + 755u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 739u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002DB0E0; } }
    st8((c.r[17].w[0] + 740u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_002DB0E0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 755u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002DB134; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 776u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002DB134; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 1524u)));
    st32((c.r[17].w[0] + 1520u), c.r[2].w[0]);
    c.f[3] = ld32((c.r[17].w[0] + 1344u));
    c.f[2] = ld32((c.r[17].w[0] + 1348u));
    c.f[1] = ld32((c.r[17].w[0] + 1352u));
    c.f[0] = ld32((c.r[17].w[0] + 1356u));
    st32((c.r[17].w[0] + 1328u), c.f[3]);
    st32((c.r[17].w[0] + 1332u), c.f[2]);
    st32((c.r[17].w[0] + 1336u), c.f[1]);
    st32((c.r[17].w[0] + 1340u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 1540u)));
    st32((c.r[17].w[0] + 520u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 1540u)));
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 524u), c.r[2].w[0]);  if (t) { goto L_002DB274; } }
L_002DB134:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002DB164; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 776u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DB164; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[17].w[0] + 755u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[17].w[0] + 520u), 0u);
    st32((c.r[17].w[0] + 524u), 0u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1520u), 0u);  if (t) { goto L_002DB274; } }
L_002DB160:
    st8((c.r[17].w[0] + 755u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_002DB164:
    set32(c.r[16], c.r[29].w[0] + 56u);
    c.budget -= 1;
L_002DB168:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC47A0000u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 1524u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DB1B4; } }
    set32(c.r[2], 0u + 4u);
    st8((c.r[17].w[0] + 755u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 28448u);
    set32(c.r[5], c.r[17].w[0] + 1344u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB1ACu); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x002DB1ACu) [[unlikely]] return; }
L_002DB1AC:
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[16].w[0]), c.f[0]);
    c.budget -= 2;
L_002DB1B4:
    c.f[0] = ld32((c.r[17].w[0] + 1016u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBE4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[13] = c.r[2].w[0];
    set32(c.r[5], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 1020u));
    set32(c.r[6], c.r[17].w[0] + 1328u);
    st32((c.r[29].w[0] + 52u), c.f[0]);
    c.f[12] = ld32((c.r[16].w[0]));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB1E4u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 168u, depth + 1u); else { c.pc = 0x0026E790u; return; } if (c.pc != 0x002DB1E4u) [[unlikely]] return; }
L_002DB1E4:
    st32((c.r[17].w[0] + 520u), 0u);
    st32((c.r[17].w[0] + 524u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1520u), 0u);  if (t) { goto L_002DB274; } }
L_002DB1F4:
    set32(c.r[2], ld32((c.r[17].w[0] + 1524u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_002DB22C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 1540u)));
    c.f[3] = ld32((c.r[2].w[0] + 80u));
    c.f[2] = ld32((c.r[2].w[0] + 84u));
    c.f[1] = ld32((c.r[2].w[0] + 88u));
    c.f[0] = ld32((c.r[2].w[0] + 92u));
    st32((c.r[17].w[0] + 1328u), c.f[3]);
    st32((c.r[17].w[0] + 1332u), c.f[2]);
    st32((c.r[17].w[0] + 1336u), c.f[1]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1340u), c.f[0]);  if (t) { goto L_002DB268; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_002DB22C:
    st8((c.r[17].w[0] + 755u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[29].w[0] + 56u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC47A0000u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.f[0] = ld32((c.r[17].w[0] + 1016u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBE4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[13] = c.r[2].w[0];
    set32(c.r[5], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 1020u));
    st32((c.r[29].w[0] + 52u), c.f[0]);
    c.f[12] = ld32((c.r[3].w[0]));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB268u); set32(c.r[6], c.r[17].w[0] + 1328u);  if (depth < kMaxDepth) unit_005B(c, 168u, depth + 1u); else { c.pc = 0x0026E790u; return; } if (c.pc != 0x002DB268u) [[unlikely]] return; }
L_002DB268:
    st32((c.r[17].w[0] + 520u), 0u);
    st32((c.r[17].w[0] + 524u), 0u);
    st32((c.r[17].w[0] + 1520u), 0u);
    c.budget -= 3;
L_002DB274:
    set32(c.r[4], ld32((c.r[17].w[0] + 1524u)));
    c.budget -= 1;
L_002DB278:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { mmi::paddub(c.r[4], c.r[17], c.r[0]);  goto L_002DB2A4; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002DB2A0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8385u)));
    c.r[2].d[0] = ld16((c.r[4].w[0] + 846u));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st16((c.r[4].w[0] + 846u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_002DB2A0:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_002DB2A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB2ACu);  if (depth < kMaxDepth) unit_0076(c, 185u, depth + 1u); else { c.pc = 0x002DB2C0u; return; } if (c.pc != 0x002DB2ACu) [[unlikely]] return; }
L_002DB2AC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002DB2C0:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 772u)));
    set32(c.r[3], 0u + 3u);
    c.r[5].d[0] = c.r[5].d[0] & 3ull;
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 755u)));  if (t) { goto L_002DB300; } }
    set32(c.r[3], c.r[28].w[0] - 28552u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.r[6].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], c.r[5].w[0] << (c.r[7].w[0] & 31u));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002DB304; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 773u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_002DB304; } }
L_002DB300:
    st8((c.r[4].w[0] + 773u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_002DB304:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 773u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002DB398; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 755u)));
    st8((c.r[4].w[0] + 772u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 755u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002DB378; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 1524u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002DB354; } }
    c.f[3] = ld32((c.r[4].w[0] + 1328u));
    c.f[2] = ld32((c.r[4].w[0] + 1332u));
    c.f[1] = ld32((c.r[4].w[0] + 1336u));
    c.f[0] = ld32((c.r[4].w[0] + 1340u));
    st32((c.r[4].w[0] + 1392u), c.f[3]);
    st32((c.r[4].w[0] + 1396u), c.f[2]);
    st32((c.r[4].w[0] + 1400u), c.f[1]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 1404u), c.f[0]);  if (t) { goto L_002DB398; } }
L_002DB354:
    c.f[3] = ld32((c.r[4].w[0] + 1344u));
    c.f[2] = ld32((c.r[4].w[0] + 1348u));
    c.f[1] = ld32((c.r[4].w[0] + 1352u));
    c.f[0] = ld32((c.r[4].w[0] + 1356u));
    st32((c.r[4].w[0] + 1392u), c.f[3]);
    st32((c.r[4].w[0] + 1396u), c.f[2]);
    st32((c.r[4].w[0] + 1400u), c.f[1]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 1404u), c.f[0]);  if (t) { goto L_002DB398; } }
L_002DB378:
    c.f[3] = ld32((c.r[4].w[0] + 1328u));
    c.f[2] = ld32((c.r[4].w[0] + 1332u));
    c.f[1] = ld32((c.r[4].w[0] + 1336u));
    c.f[0] = ld32((c.r[4].w[0] + 1340u));
    st32((c.r[4].w[0] + 1392u), c.f[3]);
    st32((c.r[4].w[0] + 1396u), c.f[2]);
    st32((c.r[4].w[0] + 1400u), c.f[1]);
    st32((c.r[4].w[0] + 1404u), c.f[0]);
    c.budget -= 8;
L_002DB398:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002DB3A0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    set32(c.r[17], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const bool t = c.r[18].sd[0] >= 0; mmi::paddub(c.r[19], c.r[4], c.r[0]);  if (t) { goto L_002DB3D0; } }
    set32(c.r[17], 0u - 1u);
    c.budget -= 1;
L_002DB3D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB3D8u); set32(c.r[4], c.r[19].w[0] + 2048u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002DB3D8u) [[unlikely]] return; }
L_002DB3D8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB3E8u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 211u, depth + 1u); else { c.pc = 0x00102548u; return; } if (c.pc != 0x002DB3E8u) [[unlikely]] return; }
L_002DB3E8:
    set32(c.r[4], c.r[19].w[0] + 1392u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB3F4u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002DB3F4u) [[unlikely]] return; }
L_002DB3F4:
    set32(c.r[20], c.r[29].w[0] + 104u);
    c.f[13] = ld32((c.r[20].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB404u); c.f[12] = ld32((c.r[29].w[0] + 96u));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x002DB404u) [[unlikely]] return; }
L_002DB404:
    c.f[1] = ld32((c.r[29].w[0] + 96u));
    c.f[0] = ld32((c.r[20].w[0]));
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB420u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002DB420u) [[unlikely]] return; }
L_002DB420:
    c.f[12] = ld32((c.r[29].w[0] + 100u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB42Cu); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x002DB42Cu) [[unlikely]] return; }
L_002DB42C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8387u)));
    c.r[5].d[0] = c.r[2].d[0] << 48;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[2].w[0] + 22064u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8386u)));
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 17;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002DB480; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[1].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002DB4BC; } }
L_002DB480:
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002DB498; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u - c.r[17].w[0]);  if (t) { goto L_002DB534; } }
L_002DB498:
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    c.r[1].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], c.r[17].w[0] << 2);  if (t) { goto L_002DB4B4; } }
    set32(c.r[2], 0u - c.r[17].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[2].w[0] << 1);  if (t) { goto L_002DB534; } }
L_002DB4B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] - c.r[2].w[0]);  if (t) { goto L_002DB534; } }
L_002DB4BC:
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002DB4F4; } }
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[17], 0u - c.r[17].w[0]);  goto L_002DB4EC; }
    c.r[2].d[0] = c.r[16].sd[0] < 32736ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - c.r[17].w[0]);  if (t) { goto L_002DB4E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[2].w[0] << 1);  if (t) { goto L_002DB534; } }
L_002DB4E8:
    set32(c.r[17], 0u - c.r[17].w[0]);
    c.budget -= 1;
L_002DB4EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002DB538; } }
L_002DB4F4:
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.r[1].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u - c.r[17].w[0]);  if (t) { goto L_002DB50C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[2].w[0] << 1);  if (t) { goto L_002DB534; } }
L_002DB50C:
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_002DB524; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DB534; } }
L_002DB524:
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[17], 0u + 2u);
    c.r[1].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    if (c.r[1].d[0] == 0) c.r[17].d[0] = 0ull;
    c.budget -= 4;
L_002DB534:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002DB538:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; set32(c.r[2], 0u - 2u);  if (t) { goto L_002DB574; } }
    c.f[0] = c.r[17].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB54Cu); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 291u, depth + 1u); else { c.pc = 0x0013B4D0u; return; } if (c.pc != 0x002DB54Cu) [[unlikely]] return; }
L_002DB54C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002DB56C; } }
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 1;
L_002DB56C:
    st8((c.r[19].w[0] + 775u), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[2], 0u - 2u);
    c.budget -= 2;
L_002DB574:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; mmi::paddub(c.r[2], c.r[17], c.r[0]);  if (t) { goto L_002DB58C; } }
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] < 0; set32(c.r[17], 0u + 1u);  if (t) { goto L_002DB588; } }
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 1;
L_002DB588:
    mmi::paddub(c.r[2], c.r[17], c.r[0]);
    c.budget -= 1;
L_002DB58C:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002DB5B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 749u)));
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    mmi::paddub(c.r[16], c.r[6], c.r[0]);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    c.r[6].d[0] = c.r[5].d[0] ^ 1ull;
    set32(c.r[3], c.r[18].w[0] + 7936u);
    set32(c.r[5], c.r[18].w[0] + 7888u);
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[18].w[0] + 7968u);  if (t) { goto L_002DB630; } }
    set32(c.r[2], c.r[6].w[0] << 4);
    set32(c.r[7], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[7].w[0]), 0u);
    st32((c.r[7].w[0] + 4u), 0u);
    st32((c.r[7].w[0] + 8u), 0u);
    c.f[3] = ld32((c.r[7].w[0]));
    c.f[2] = ld32((c.r[7].w[0] + 4u));
    c.f[1] = ld32((c.r[7].w[0] + 8u));
    c.f[0] = ld32((c.r[7].w[0] + 12u));
    set32(c.r[3], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[6].w[0] << 3);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    st32((c.r[3].w[0]), c.f[3]);
    st32((c.r[3].w[0] + 4u), c.f[2]);
    st32((c.r[3].w[0] + 8u), c.f[1]);
    st32((c.r[3].w[0] + 12u), c.f[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    c.budget -= 18;
L_002DB630:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB63Cu); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 186u, depth + 1u); else { c.pc = 0x002DB3A0u; return; } if (c.pc != 0x002DB63Cu) [[unlikely]] return; }
L_002DB63C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (t) { goto L_002DB740; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 8054u));
    c.r[2].d[0] = c.r[2].d[0] & 31ull;
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (t) { goto L_002DB744; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 773u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);  if (t) { goto L_002DB680; } }
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 255u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB678u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 296u, depth + 1u); else { c.pc = 0x002DF670u; return; } if (c.pc != 0x002DB678u) [[unlikely]] return; }
L_002DB678:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DB738; } }
L_002DB680:
    c.f[3] = ld32((c.r[18].w[0] + 1392u));
    c.f[2] = ld32((c.r[18].w[0] + 1396u));
    c.f[1] = ld32((c.r[18].w[0] + 1400u));
    c.f[0] = ld32((c.r[18].w[0] + 1404u));
    set32(c.r[2], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[18].w[0] + 1392u);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    mmi::paddub(c.r[6], c.r[17], c.r[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB6B4u); st32((c.r[2].w[0] + 12u), c.f[0]);  if (depth < kMaxDepth) unit_0077(c, 48u, depth + 1u); else { c.pc = 0x002DC520u; return; } if (c.pc != 0x002DB6B4u) [[unlikely]] return; }
L_002DB6B4:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB6C0u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 221u, depth + 1u); else { c.pc = 0x002DB900u; return; } if (c.pc != 0x002DB6C0u) [[unlikely]] return; }
L_002DB6C0:
    c.r[6].d[0] = c.r[16].d[0] | 128ull;
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB6D0u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 234u, depth + 1u); else { c.pc = 0x002DBC20u; return; } if (c.pc != 0x002DB6D0u) [[unlikely]] return; }
L_002DB6D0:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB6E0u); mmi::paddub(c.r[6], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 1u, depth + 1u); else { c.pc = 0x002DC000u; return; } if (c.pc != 0x002DB6E0u) [[unlikely]] return; }
L_002DB6E0:
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    mmi::paddub(c.r[6], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB6F0u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 29u, depth + 1u); else { c.pc = 0x002DC350u; return; } if (c.pc != 0x002DB6F0u) [[unlikely]] return; }
L_002DB6F0:
    set32(c.r[3], c.r[29].w[0] + 64u);
    c.f[3] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[18].w[0] + 1392u), c.f[3]);
    st32((c.r[18].w[0] + 1396u), c.f[2]);
    st32((c.r[18].w[0] + 1400u), c.f[1]);
    st32((c.r[18].w[0] + 1404u), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8386u)));
    set32(c.r[3], 0u + 11u);
    c.budget -= 13;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002DB7A0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[18].w[0] + 7968u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB738u); set32(c.r[5], c.r[18].w[0] + 7936u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x002DB738u) [[unlikely]] return; }
L_002DB738:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);  if (t) { goto L_002DB7A4; } }
L_002DB740:
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.budget -= 1;
L_002DB744:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB74Cu);  if (depth < kMaxDepth) unit_0076(c, 221u, depth + 1u); else { c.pc = 0x002DB900u; return; } if (c.pc != 0x002DB74Cu) [[unlikely]] return; }
L_002DB74C:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB75Cu); mmi::paddub(c.r[6], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 234u, depth + 1u); else { c.pc = 0x002DBC20u; return; } if (c.pc != 0x002DB75Cu) [[unlikely]] return; }
L_002DB75C:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB76Cu); mmi::paddub(c.r[6], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 1u, depth + 1u); else { c.pc = 0x002DC000u; return; } if (c.pc != 0x002DB76Cu) [[unlikely]] return; }
L_002DB76C:
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    mmi::paddub(c.r[6], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB77Cu); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 29u, depth + 1u); else { c.pc = 0x002DC350u; return; } if (c.pc != 0x002DB77Cu) [[unlikely]] return; }
L_002DB77C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8386u)));
    set32(c.r[3], 0u + 11u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002DB7A0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[18].w[0] + 7968u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB7A0u); set32(c.r[5], c.r[18].w[0] + 7936u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x002DB7A0u) [[unlikely]] return; }
L_002DB7A0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002DB7A4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002DB7C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[6], c.r[0]);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB7E8u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 221u, depth + 1u); else { c.pc = 0x002DB900u; return; } if (c.pc != 0x002DB7E8u) [[unlikely]] return; }
L_002DB7E8:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB7F8u); mmi::paddub(c.r[6], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 234u, depth + 1u); else { c.pc = 0x002DBC20u; return; } if (c.pc != 0x002DB7F8u) [[unlikely]] return; }
L_002DB7F8:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB808u); mmi::paddub(c.r[6], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 1u, depth + 1u); else { c.pc = 0x002DC000u; return; } if (c.pc != 0x002DB808u) [[unlikely]] return; }
L_002DB808:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB818u); mmi::paddub(c.r[6], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 29u, depth + 1u); else { c.pc = 0x002DC350u; return; } if (c.pc != 0x002DB818u) [[unlikely]] return; }
L_002DB818:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002DB830:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    set32(c.r[5], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB850u); mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 186u, depth + 1u); else { c.pc = 0x002DB3A0u; return; } if (c.pc != 0x002DB850u) [[unlikely]] return; }
L_002DB850:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_002DB890; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F330000u);  if (t) { goto L_002DB870; } }
    c.f[12] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 63u);  if (t) { goto L_002DB87C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F330000u);
    c.budget -= 1;
L_002DB870:
    c.r[2].d[0] = c.r[2].d[0] | 13107ull;
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 63u);
    c.budget -= 3;
L_002DB87C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB884u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 296u, depth + 1u); else { c.pc = 0x002DF670u; return; } if (c.pc != 0x002DB884u) [[unlikely]] return; }
L_002DB884:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_002DB8E4; } }
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_002DB890:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB898u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 221u, depth + 1u); else { c.pc = 0x002DB900u; return; } if (c.pc != 0x002DB898u) [[unlikely]] return; }
L_002DB898:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB8A8u); mmi::paddub(c.r[6], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 234u, depth + 1u); else { c.pc = 0x002DBC20u; return; } if (c.pc != 0x002DB8A8u) [[unlikely]] return; }
L_002DB8A8:
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[6], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB8B8u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 234u, depth + 1u); else { c.pc = 0x002DBC20u; return; } if (c.pc != 0x002DB8B8u) [[unlikely]] return; }
L_002DB8B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[17].w[0] + 7968u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB8CCu); set32(c.r[5], c.r[17].w[0] + 7936u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x002DB8CCu) [[unlikely]] return; }
L_002DB8CC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[17].w[0] + 7984u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB8E0u); set32(c.r[5], c.r[17].w[0] + 7952u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x002DB8E0u) [[unlikely]] return; }
L_002DB8E0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002DB8E4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002DB900:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[4], c.r[18].w[0] + 2048u);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB940u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002DB940u) [[unlikely]] return; }
L_002DB940:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB950u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 211u, depth + 1u); else { c.pc = 0x00102548u; return; } if (c.pc != 0x002DB950u) [[unlikely]] return; }
L_002DB950:
    set32(c.r[4], c.r[18].w[0] + 1392u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB95Cu); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002DB95Cu) [[unlikely]] return; }
L_002DB95C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8387u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[2].w[0] + 22064u);
    c.f[0] = ld32((c.r[29].w[0] + 176u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8386u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 29024u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.facc = fp::mul(c.f[0], c.f[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[30], c.r[29].w[0] + 184u);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[30].w[0]));
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[19], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[5].w[0] << 5);
    set32(c.r[20], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB9B8u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002DB9B8u) [[unlikely]] return; }
L_002DB9B8:
    c.f[12] = ld32((c.r[29].w[0] + 180u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB9C4u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x002DB9C4u) [[unlikely]] return; }
L_002DB9C4:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002DB9E0; } }
    set32(c.r[22], ld32((c.r[20].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[21], ld32((c.r[19].w[0])));  if (t) { goto L_002DB9EC; } }
L_002DB9E0:
    set32(c.r[21], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[22], ld32((c.r[20].w[0] + 28u)));
    c.budget -= 3;
L_002DB9EC:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_002DBA54; } }
    c.f[1] = c.r[2].w[0];
    c.f[0] = c.r[21].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBA1Cu);  if (depth < kMaxDepth) unit_000E(c, 291u, depth + 1u); else { c.pc = 0x0013B4D0u; return; } if (c.pc != 0x002DBA1Cu) [[unlikely]] return; }
L_002DBA1C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002DBA3C; } }
    c.f[0] = c.f[1];
    c.budget -= 1;
L_002DBA3C:
    c.f[1] = c.r[22].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBA50u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002DBA50u) [[unlikely]] return; }
L_002DBA50:
    mmi::paddub(c.r[16], c.r[2], c.r[0]);
    c.budget -= 1;
L_002DBA54:
    c.f[12] = ld32((c.r[29].w[0] + 176u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBA60u); c.f[13] = ld32((c.r[30].w[0]));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x002DBA60u) [[unlikely]] return; }
L_002DBA60:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 775u)));
    c.r[7].d[0] = c.r[2].d[0] << 48;
    set32(c.r[3], 0u + 2u);
    c.budget -= 5;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);  if (t) { goto L_002DBAD8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_002DBAB0; } }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { mmi::paddub(c.r[23], c.r[0], c.r[0]);  goto L_002DBA90; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DBAFC; } }
L_002DBA90:
    c.budget -= 2;
    { const bool t = c.r[7].sd[0] < 0;  if (t) { goto L_002DBAA4; } }
    set32(c.r[22], ld32((c.r[20].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[21], ld32((c.r[19].w[0] + 16u)));  if (t) { goto L_002DBAFC; } }
L_002DBAA4:
    set32(c.r[22], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[21], ld32((c.r[19].w[0] + 20u)));  if (t) { goto L_002DBAFC; } }
L_002DBAB0:
    set32(c.r[8], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[6], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[23], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    c.r[1].d[0] = c.r[7].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    set32(c.r[7], c.r[7].w[0] - c.r[8].w[0]);
    if (c.r[1].d[0] != 0) c.r[7].d[0] = 0ull;
    set32(c.r[21], c.r[6].w[0] - c.r[8].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; set32(c.r[22], c.r[3].w[0] - c.r[23].w[0]);  if (t) { goto L_002DBAFC; } }
L_002DBAD8:
    set32(c.r[8], ld32((c.r[19].w[0] + 20u)));
    c.r[1].d[0] = c.r[8].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    set32(c.r[7], c.r[7].w[0] - c.r[8].w[0]);
    if (c.r[1].d[0] != 0) c.r[7].d[0] = 0ull;
    set32(c.r[6], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[23], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[21], c.r[6].w[0] - c.r[8].w[0]);
    set32(c.r[22], c.r[3].w[0] - c.r[23].w[0]);
    c.budget -= 9;
L_002DBAFC:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull; mmi::paddub(c.r[19], c.r[0], c.r[0]);  if (t) { goto L_002DBB64; } }
    c.f[1] = c.r[7].w[0];
    c.f[0] = c.r[21].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBB2Cu);  if (depth < kMaxDepth) unit_000E(c, 291u, depth + 1u); else { c.pc = 0x0013B4D0u; return; } if (c.pc != 0x002DBB2Cu) [[unlikely]] return; }
L_002DBB2C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002DBB4C; } }
    c.f[0] = c.f[1];
    c.budget -= 1;
L_002DBB4C:
    c.f[1] = c.r[22].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBB60u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002DBB60u) [[unlikely]] return; }
L_002DBB60:
    set32(c.r[19], c.r[23].w[0] + c.r[2].w[0]);
    c.budget -= 1;
L_002DBB64:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002DBBDC; } }
    set32(c.r[17], ld32((c.r[18].w[0] + 7928u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002DBBDC; } }
    c.f[0] = c.r[19].w[0];
    c.f[20] = ld32((c.r[18].w[0] + 7752u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::mul(c.f[0], c.f[20]);
    c.f[0] = c.r[17].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBBA8u);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002DBBA8u) [[unlikely]] return; }
L_002DBBA8:
    c.f[1] = c.r[16].w[0];
    c.f[0] = c.r[17].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    mmi::paddub(c.r[19], c.r[2], c.r[0]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::mul(c.f[1], c.f[20]);
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBBD8u);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002DBBD8u) [[unlikely]] return; }
L_002DBBD8:
    mmi::paddub(c.r[16], c.r[2], c.r[0]);
    c.budget -= 1;
L_002DBBDC:
    st32((c.r[18].w[0] + 7916u), c.r[19].w[0]);
    set32(c.r[3], 0u - c.r[16].w[0]);
    st32((c.r[18].w[0] + 7912u), c.r[3].w[0]);
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
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_002DBC20:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    mmi::paddub(c.r[17], c.r[6], c.r[0]);
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBC54u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0074(c, 66u, depth + 1u); else { c.pc = 0x002D0680u; return; } if (c.pc != 0x002DBC54u) [[unlikely]] return; }
L_002DBC54:
    set32(c.r[2], c.r[18].w[0] << 4);
    set32(c.r[16], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 369u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[20], c.r[16].w[0] + 7824u);  if (t) { goto L_002DBCA8; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8387u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[5], c.r[3].w[0] + 7744u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8386u)));
    c.r[3].d[0] = ld8((c.r[19].w[0] + 8054u));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    set32(c.r[6], c.r[4].w[0] << 2);
    c.r[3].d[0] = c.r[3].d[0] & 31ull;
    set32(c.r[4], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 15;
    { const bool t = 0ull == 0ull; set32(c.r[21], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_002DBCE0; } }
L_002DBCA8:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8387u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[5], c.r[3].w[0] - 29056u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8386u)));
    c.r[3].d[0] = ld8((c.r[19].w[0] + 8054u));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    set32(c.r[6], c.r[4].w[0] << 2);
    c.r[3].d[0] = c.r[3].d[0] & 31ull;
    set32(c.r[4], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[21], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 14;
L_002DBCE0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8386u)));
    set32(c.r[4], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00060000u);
    c.r[3].d[0] = c.r[3].d[0] | 49152ull;
    set32(c.r[4], c.r[4].w[0] << (c.r[5].w[0] & 31u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002DBD28; } }
    set32(c.r[3], c.r[18].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[18].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[21], c.r[21].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[19].w[0] + 8054u));
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_002DBD40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[21], c.r[21].w[0] + 64u);  if (t) { goto L_002DBD3C; } }
L_002DBD28:
    c.r[3].d[0] = ld8((c.r[19].w[0] + 8054u));
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002DBD3C; } }
    set32(c.r[21], c.r[21].w[0] + 112u);
    c.budget -= 1;
L_002DBD3C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_002DBD40:
    c.r[4].d[0] = c.r[17].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_002DBD7C; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 7928u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002DBD78; } }
    c.f[1] = c.r[3].w[0];
    c.f[0] = ld32((c.r[19].w[0] + 7752u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 20u, c.f[0], c.f[1]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DBD80; } }
L_002DBD78:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_002DBD7C:
    c.f[20] = c.r[3].w[0];
    c.budget -= 1;
L_002DBD80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DBDA0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 7776u);
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[18].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));  if (t) { goto L_002DBDB8; } }
L_002DBDA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[2].w[0] + 22096u);
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[18].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 6;
L_002DBDB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBDC0u); set32(c.r[4], c.r[19].w[0] + 2048u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002DBDC0u) [[unlikely]] return; }
L_002DBDC0:
    set32(c.r[2], ld32((c.r[19].w[0] + 7916u)));
    c.r[3].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBDD0u); c.r[4].d[0] = c.r[2].d[0] & c.r[3].d[0];  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002DBDD0u) [[unlikely]] return; }
L_002DBDD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBDD8u); c.r[4].d[0] = ld16((c.r[19].w[0] + 7912u));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002DBDD8u) [[unlikely]] return; }
L_002DBDD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBDE0u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x002DBDE0u) [[unlikely]] return; }
L_002DBDE0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBDF0u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 211u, depth + 1u); else { c.pc = 0x00102548u; return; } if (c.pc != 0x002DBDF0u) [[unlikely]] return; }
L_002DBDF0:
    set32(c.r[4], c.r[19].w[0] + 1392u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBDFCu); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002DBDFCu) [[unlikely]] return; }
L_002DBDFC:
    set32(c.r[4], c.r[29].w[0] + 128u);
    mmi::paddub(c.r[5], c.r[20], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBE0Cu); mmi::paddub(c.r[6], c.r[21], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002DBE0Cu) [[unlikely]] return; }
L_002DBE0C:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBE18u); mmi::paddub(c.r[5], c.r[21], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 25u, depth + 1u); else { c.pc = 0x0013CB10u; return; } if (c.pc != 0x002DBE18u) [[unlikely]] return; }
L_002DBE18:
    c.f[1] = ld32((c.r[19].w[0] + 1504u));
    c.f[0] = ld32((c.r[19].w[0] + 1508u));
    c.f[2] = ld32((c.r[19].w[0] + 1512u));
    c.f[3] = 0u;
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.facc = fp::add(c.f[1], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[3]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], c.r[29].w[0] + 128u);  if (t) { goto L_002DBE6C; } }
    set32(c.r[4], c.r[19].w[0] + 1504u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBE54u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002DBE54u) [[unlikely]] return; }
L_002DBE54:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBE60u); mmi::paddub(c.r[5], c.r[21], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 25u, depth + 1u); else { c.pc = 0x0013CB10u; return; } if (c.pc != 0x002DBE60u) [[unlikely]] return; }
L_002DBE60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 160u);  if (t) { goto L_002DBE7C; } }
    set32(c.r[2], c.r[29].w[0] + 128u);
    c.budget -= 1;
L_002DBE6C:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[29].w[0] + 144u);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 4;
L_002DBE7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBE84u);  if (depth < kMaxDepth) unit_000F(c, 29u, depth + 1u); else { c.pc = 0x0013CBB0u; return; } if (c.pc != 0x002DBE84u) [[unlikely]] return; }
L_002DBE84:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[29].w[0] + 128u);  if (t) { goto L_002DBEBC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.f[12] = c.r[2].w[0];
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBEB8u); st32((c.r[29].w[0] + 164u), 0u);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x002DBEB8u) [[unlikely]] return; }
L_002DBEB8:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 1;
L_002DBEBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBEC4u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_000F(c, 21u, depth + 1u); else { c.pc = 0x0013CA20u; return; } if (c.pc != 0x002DBEC4u) [[unlikely]] return; }
L_002DBEC4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBED8u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_005B(c, 306u, depth + 1u); else { c.pc = 0x0026FAE0u; return; } if (c.pc != 0x002DBED8u) [[unlikely]] return; }
L_002DBED8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 192ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 176u);  if (t) { goto L_002DBF50; } }
    c.r[2].d[0] = c.r[17].d[0] & 128ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002DBF4C; } }
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBF04u); set32(c.r[6], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_005B(c, 291u, depth + 1u); else { c.pc = 0x0026F830u; return; } if (c.pc != 0x002DBF04u) [[unlikely]] return; }
L_002DBF04:
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBF18u); c.f[12] = fp::mul(c.f[20], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002DBF18u) [[unlikely]] return; }
L_002DBF18:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 761u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 176u);  if (t) { goto L_002DBF38; } }
    c.r[1].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002DBF34; } }
    mmi::paddub(c.r[2], c.r[18], c.r[0]);
    c.budget -= 1;
L_002DBF34:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 1;
L_002DBF38:
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBF44u); mmi::paddub(c.r[6], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 297u, depth + 1u); else { c.pc = 0x0026F960u; return; } if (c.pc != 0x002DBF44u) [[unlikely]] return; }
L_002DBF44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_002DBF60; } }
L_002DBF4C:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 1;
L_002DBF50:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBF5Cu); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_005B(c, 306u, depth + 1u); else { c.pc = 0x0026FAE0u; return; } if (c.pc != 0x002DBF5Cu) [[unlikely]] return; }
L_002DBF5C:
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_002DBF60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBF68u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x002DBF68u) [[unlikely]] return; }
L_002DBF68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBF70u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_000F(c, 29u, depth + 1u); else { c.pc = 0x0013CBB0u; return; } if (c.pc != 0x002DBF70u) [[unlikely]] return; }
L_002DBF70:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.f[12] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBF80u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x002DBF80u) [[unlikely]] return; }
L_002DBF80:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBF8Cu); mmi::paddub(c.r[5], c.r[21], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x002DBF8Cu) [[unlikely]] return; }
L_002DBF8C:
    set32(c.r[5], c.r[19].w[0] + 1504u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBF98u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002DBF98u) [[unlikely]] return; }
L_002DBF98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBFA0u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_000F(c, 29u, depth + 1u); else { c.pc = 0x0013CBB0u; return; } if (c.pc != 0x002DBFA0u) [[unlikely]] return; }
L_002DBFA0:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.f[12] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBFB0u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x002DBFB0u) [[unlikely]] return; }
L_002DBFB0:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBFBCu); mmi::paddub(c.r[5], c.r[21], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x002DBFBCu) [[unlikely]] return; }
L_002DBFBC:
    set32(c.r[4], c.r[16].w[0] + 7936u);
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBFCCu); mmi::paddub(c.r[6], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002DBFCCu) [[unlikely]] return; }
L_002DBFCC:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
}

}
