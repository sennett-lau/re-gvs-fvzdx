#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_002D[4096] = {
    1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 8, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 12, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0,
    0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0,
    0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 31, 0, 0, 0, 0, 0, 0, 32, 0, 0, 33, 0, 0, 0, 0, 34, 0, 0, 35,
    0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 37, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    40, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0,
    54, 0, 0, 0, 55, 0, 56, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0,
    63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 66, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 69, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0,
    0, 72, 0, 0, 0, 73, 0, 0, 0, 0, 0, 74, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0,
    0, 0, 0, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0,
    0, 82, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 87, 0, 0, 0, 88, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0,
    95, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0,
    0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 104, 0, 0, 105, 0, 0, 106, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0,
    127, 0, 0, 0, 128, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 134, 0, 0, 0, 135, 0, 0,
    0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    140, 0, 0, 0, 0, 141, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0,
    0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0,
    0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0,
    0, 0, 162, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 173, 0, 0, 174, 0, 175, 0, 0, 176, 0, 177, 0, 0, 178, 0, 179, 0, 0, 180, 0, 181, 0, 0, 182, 0, 183, 0, 0,
    184, 0, 185, 0, 0, 186, 0, 187, 0, 0, 188, 0, 189, 0, 0, 190, 0, 191, 0, 0, 192, 0, 193, 0, 0, 194, 0, 195, 0, 0, 196, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_002D(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001B4000;
    case 2u: goto L_001B4004;
    case 3u: goto L_001B420C;
    case 4u: goto L_001B4250;
    case 5u: goto L_001B4270;
    case 6u: goto L_001B4404;
    case 7u: goto L_001B4450;
    case 8u: goto L_001B4484;
    case 9u: goto L_001B4490;
    case 10u: goto L_001B44C4;
    case 11u: goto L_001B44D0;
    case 12u: goto L_001B4504;
    case 13u: goto L_001B4510;
    case 14u: goto L_001B4550;
    case 15u: goto L_001B4578;
    case 16u: goto L_001B4590;
    case 17u: goto L_001B45F0;
    case 18u: goto L_001B4604;
    case 19u: goto L_001B462C;
    case 20u: goto L_001B4680;
    case 21u: goto L_001B46B0;
    case 22u: goto L_001B4788;
    case 23u: goto L_001B4798;
    case 24u: goto L_001B47A8;
    case 25u: goto L_001B47B8;
    case 26u: goto L_001B48E0;
    case 27u: goto L_001B490C;
    case 28u: goto L_001B4948;
    case 29u: goto L_001B4954;
    case 30u: goto L_001B49A8;
    case 31u: goto L_001B49B4;
    case 32u: goto L_001B49D0;
    case 33u: goto L_001B49DC;
    case 34u: goto L_001B49F0;
    case 35u: goto L_001B49FC;
    case 36u: goto L_001B4A18;
    case 37u: goto L_001B4A30;
    case 38u: goto L_001B4A3C;
    case 39u: goto L_001B4A60;
    case 40u: goto L_001B4B00;
    case 41u: goto L_001B4B0C;
    case 42u: goto L_001B4B60;
    case 43u: goto L_001B4BCC;
    case 44u: goto L_001B4C10;
    case 45u: goto L_001B4C6C;
    case 46u: goto L_001B4CB0;
    case 47u: goto L_001B4D00;
    case 48u: goto L_001B4DD4;
    case 49u: goto L_001B4DE4;
    case 50u: goto L_001B4E34;
    case 51u: goto L_001B4E70;
    case 52u: goto L_001B4EB0;
    case 53u: goto L_001B4EF0;
    case 54u: goto L_001B4F00;
    case 55u: goto L_001B4F10;
    case 56u: goto L_001B4F18;
    case 57u: goto L_001B4F28;
    case 58u: goto L_001B4F50;
    case 59u: goto L_001B4FB0;
    case 60u: goto L_001B4FBC;
    case 61u: goto L_001B502C;
    case 62u: goto L_001B5070;
    case 63u: goto L_001B5080;
    case 64u: goto L_001B5110;
    case 65u: goto L_001B5164;
    case 66u: goto L_001B5170;
    case 67u: goto L_001B51A0;
    case 68u: goto L_001B51AC;
    case 69u: goto L_001B5218;
    case 70u: goto L_001B5224;
    case 71u: goto L_001B5260;
    case 72u: goto L_001B5284;
    case 73u: goto L_001B5294;
    case 74u: goto L_001B52AC;
    case 75u: goto L_001B52B8;
    case 76u: goto L_001B52F0;
    case 77u: goto L_001B5314;
    case 78u: goto L_001B5324;
    case 79u: goto L_001B5368;
    case 80u: goto L_001B53B0;
    case 81u: goto L_001B53F8;
    case 82u: goto L_001B5404;
    case 83u: goto L_001B5418;
    case 84u: goto L_001B5430;
    case 85u: goto L_001B5448;
    case 86u: goto L_001B5460;
    case 87u: goto L_001B5494;
    case 88u: goto L_001B54A4;
    case 89u: goto L_001B54B0;
    case 90u: goto L_001B54E0;
    case 91u: goto L_001B5508;
    case 92u: goto L_001B5518;
    case 93u: goto L_001B552C;
    case 94u: goto L_001B5570;
    case 95u: goto L_001B5580;
    case 96u: goto L_001B5590;
    case 97u: goto L_001B55D8;
    case 98u: goto L_001B5610;
    case 99u: goto L_001B5640;
    case 100u: goto L_001B5650;
    case 101u: goto L_001B5664;
    case 102u: goto L_001B5684;
    case 103u: goto L_001B56C0;
    case 104u: goto L_001B5790;
    case 105u: goto L_001B579C;
    case 106u: goto L_001B57A8;
    case 107u: goto L_001B57BC;
    case 108u: goto L_001B584C;
    case 109u: goto L_001B5870;
    case 110u: goto L_001B58A0;
    case 111u: goto L_001B5914;
    case 112u: goto L_001B5934;
    case 113u: goto L_001B5944;
    case 114u: goto L_001B5974;
    case 115u: goto L_001B59A4;
    case 116u: goto L_001B59B4;
    case 117u: goto L_001B59E4;
    case 118u: goto L_001B5A24;
    case 119u: goto L_001B5A60;
    case 120u: goto L_001B5B14;
    case 121u: goto L_001B5B38;
    case 122u: goto L_001B5B80;
    case 123u: goto L_001B5BB0;
    case 124u: goto L_001B5C10;
    case 125u: goto L_001B5C30;
    case 126u: goto L_001B5C60;
    case 127u: goto L_001B5C80;
    case 128u: goto L_001B5C90;
    case 129u: goto L_001B5CA0;
    case 130u: goto L_001B5D40;
    case 131u: goto L_001B5EB4;
    case 132u: goto L_001B5EC4;
    case 133u: goto L_001B5ED4;
    case 134u: goto L_001B5EE4;
    case 135u: goto L_001B5EF4;
    case 136u: goto L_001B5F04;
    case 137u: goto L_001B6060;
    case 138u: goto L_001B611C;
    case 139u: goto L_001B6140;
    case 140u: goto L_001B6180;
    case 141u: goto L_001B6194;
    case 142u: goto L_001B61A8;
    case 143u: goto L_001B620C;
    case 144u: goto L_001B6340;
    case 145u: goto L_001B6380;
    case 146u: goto L_001B6430;
    case 147u: goto L_001B6670;
    case 148u: goto L_001B6710;
    case 149u: goto L_001B6790;
    case 150u: goto L_001B68E0;
    case 151u: goto L_001B6B60;
    case 152u: goto L_001B6BF8;
    case 153u: goto L_001B6C10;
    case 154u: goto L_001B6C78;
    case 155u: goto L_001B6C90;
    case 156u: goto L_001B6CAC;
    case 157u: goto L_001B6CC8;
    case 158u: goto L_001B6D54;
    case 159u: goto L_001B6DC8;
    case 160u: goto L_001B6E8C;
    case 161u: goto L_001B6F70;
    case 162u: goto L_001B6F88;
    case 163u: goto L_001B6FA0;
    case 164u: goto L_001B6FB8;
    case 165u: goto L_001B6FF8;
    case 166u: goto L_001B7130;
    case 167u: goto L_001B7160;
    case 168u: goto L_001B71E4;
    case 169u: goto L_001B7244;
    case 170u: goto L_001B72F8;
    case 171u: goto L_001B7320;
    case 172u: goto L_001B7368;
    case 173u: goto L_001B7390;
    case 174u: goto L_001B739C;
    case 175u: goto L_001B73A4;
    case 176u: goto L_001B73B0;
    case 177u: goto L_001B73B8;
    case 178u: goto L_001B73C4;
    case 179u: goto L_001B73CC;
    case 180u: goto L_001B73D8;
    case 181u: goto L_001B73E0;
    case 182u: goto L_001B73EC;
    case 183u: goto L_001B73F4;
    case 184u: goto L_001B7400;
    case 185u: goto L_001B7408;
    case 186u: goto L_001B7414;
    case 187u: goto L_001B741C;
    case 188u: goto L_001B7428;
    case 189u: goto L_001B7430;
    case 190u: goto L_001B743C;
    case 191u: goto L_001B7444;
    case 192u: goto L_001B7450;
    case 193u: goto L_001B7458;
    case 194u: goto L_001B7464;
    case 195u: goto L_001B746C;
    case 196u: goto L_001B7478;
    case 197u: goto L_001B74C4;
    case 198u: goto L_001B74D0;
    case 199u: goto L_001B74F0;
    case 200u: goto L_001B75AC;
    case 201u: goto L_001B76D4;
    case 202u: goto L_001B77B8;
    case 203u: goto L_001B77E0;
    case 204u: goto L_001B78BC;
    case 205u: goto L_001B7980;
    case 206u: goto L_001B79AC;
    case 207u: goto L_001B7D28;
    case 208u: goto L_001B7D70;
    case 209u: goto L_001B7E1C;
    case 210u: goto L_001B7EE8;
    case 211u: goto L_001B7F18;
    default: bad_entry(c, 0x001B4000u); return;
    }
L_001B4000:
    st32((c.r[2].w[0] + 12u), c.f[0]);
    c.budget -= 1;
L_001B4004:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    set32(c.r[2], 0u + 18u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x43340000u);  if (t) { goto L_001B41B0; } }
    set32(c.r[2], 0u + 17u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);  if (t) { goto L_001B41A0; } }
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x41D00000u);  if (t) { goto L_001B4190; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001B4124; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001B40BC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001B4054; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_001B41C0; } }
L_001B4054:
    c.f[3] = ld32((c.r[16].w[0] + 32u));
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = ld32((c.r[16].w[0] + 44u));
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], c.r[2].w[0] - 27804u);
    st32((c.r[4].w[0]), c.f[3]);
    st32((c.r[4].w[0] + 4u), c.f[2]);
    st32((c.r[4].w[0] + 8u), c.f[1]);
    st32((c.r[4].w[0] + 12u), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.f[0] = ld32((c.r[29].w[0] + 68u));
    set32(c.r[2], c.r[2].w[0] - 27808u);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.budget -= 26;
    { const bool t = 0ull == 0ull; c.f[20] = fp::add(c.f[20], c.f[0]);  if (t) { goto L_001B41CC; } }
L_001B40BC:
    c.f[3] = ld32((c.r[16].w[0] + 32u));
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = ld32((c.r[16].w[0] + 44u));
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], c.r[2].w[0] - 27884u);
    st32((c.r[4].w[0]), c.f[3]);
    st32((c.r[4].w[0] + 4u), c.f[2]);
    st32((c.r[4].w[0] + 8u), c.f[1]);
    st32((c.r[4].w[0] + 12u), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.f[0] = ld32((c.r[29].w[0] + 68u));
    set32(c.r[2], c.r[2].w[0] - 27888u);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.budget -= 26;
    { const bool t = 0ull == 0ull; c.f[20] = fp::add(c.f[20], c.f[0]);  if (t) { goto L_001B41CC; } }
L_001B4124:
    c.f[3] = ld32((c.r[16].w[0] + 32u));
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = ld32((c.r[16].w[0] + 44u));
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], c.r[2].w[0] - 27916u);
    st32((c.r[4].w[0]), c.f[3]);
    st32((c.r[4].w[0] + 4u), c.f[2]);
    st32((c.r[4].w[0] + 8u), c.f[1]);
    st32((c.r[4].w[0] + 12u), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.f[0] = ld32((c.r[29].w[0] + 68u));
    set32(c.r[2], c.r[2].w[0] - 27920u);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.budget -= 26;
    { const bool t = 0ull == 0ull; c.f[20] = fp::add(c.f[20], c.f[0]);  if (t) { goto L_001B41CC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41D00000u);
    c.budget -= 1;
L_001B4190:
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[20] = fp::add(c.f[20], c.f[0]);  if (t) { goto L_001B41CC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.budget -= 1;
L_001B41A0:
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[20] = fp::add(c.f[20], c.f[0]);  if (t) { goto L_001B41CC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43340000u);
    c.budget -= 1;
L_001B41B0:
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[20] = fp::add(c.f[20], c.f[0]);  if (t) { goto L_001B41CC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_001B41C0:
    c.f[0] = c.r[2].w[0];
    c.f[20] = fp::add(c.f[20], c.f[0]);
    c.budget -= 3;
L_001B41CC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 48u);  if (t) { goto L_001B4204; } }
    c.f[3] = ld32((c.r[5].w[0] + 16u));
    c.f[2] = ld32((c.r[5].w[0] + 20u));
    c.f[1] = ld32((c.r[5].w[0] + 24u));
    c.f[0] = ld32((c.r[5].w[0] + 28u));
    set32(c.r[2], c.r[29].w[0] + 64u);
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 10;
L_001B4204:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B420Cu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x001B420Cu) [[unlikely]] return; }
L_001B420C:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_001B4250; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001B4244; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    set32(c.r[2], c.r[28].w[0] - 25552u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 6;
L_001B4244:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_001B4254; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001B4250:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_001B4254:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001B4270:
    set32(c.r[3], ld32((c.r[5].w[0] + 20u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 532u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B4288; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001B443C; } }
L_001B4288:
    c.r[2].d[0] = ld8((c.r[5].w[0] + 2u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B429C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001B443C; } }
L_001B429C:
    set32(c.r[6], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[7], ld32((c.r[5].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[7].d[0];  if (t) { goto L_001B42C8; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 576u));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B42C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001B443C; } }
L_001B42C8:
    c.r[2].d[0] = ld8((c.r[6].w[0] + 578u));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B42F0; } }
    c.r[2].d[0] = ld8((c.r[7].w[0] + 578u));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B42F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001B443C; } }
L_001B42F0:
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001B4304; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001B443C; } }
L_001B4304:
    c.r[7].d[0] = ld8((c.r[3].w[0] + 579u));
    c.r[6].d[0] = ld8((c.r[2].w[0] + 576u));
    c.r[6].d[0] = c.r[7].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] & 224ull;
    c.budget -= 6;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_001B4324; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001B443C; } }
L_001B4324:
    st8((c.r[4].w[0] + 34u), static_cast<std::uint8_t>(0u));
    st8((c.r[5].w[0] + 34u), static_cast<std::uint8_t>(0u));
    set32(c.r[7], ld32((c.r[5].w[0] + 72u)));
    set32(c.r[6], 0u + 136u);
    c.r[7].d[0] = ld8((c.r[7].w[0] + 1u));
    c.r[7].d[0] = c.r[7].d[0] & 136ull;
    c.budget -= 8;
    { const bool t = c.r[7].d[0] != c.r[6].d[0];  if (t) { goto L_001B4384; } }
    c.r[7].d[0] = ld8((c.r[2].w[0] + 576u));
    c.r[6].d[0] = ld8((c.r[3].w[0] + 579u));
    c.r[7].d[0] = c.r[7].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[7].d[0] & 8ull;
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == 0ull; c.r[6].d[0] = c.r[7].d[0] & 16ull;  if (t) { goto L_001B4374; } }
    set32(c.r[6], 0u + 16u);
    st8((c.r[4].w[0] + 34u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 34u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { goto L_001B4384; } }
    c.r[6].d[0] = c.r[7].d[0] & 16ull;
    c.budget -= 1;
L_001B4374:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_001B4384; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001B443C; } }
L_001B4384:
    c.r[6].d[0] = ld8((c.r[3].w[0] + 578u));
    c.r[6].d[0] = c.r[6].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_001B43C8; } }
    c.r[6].d[0] = ld8((c.r[2].w[0] + 575u));
    c.r[6].d[0] = c.r[6].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_001B43C8; } }
    set32(c.r[6], ld32((c.r[2].w[0] + 592u)));
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[3].d[0]) { mmi::paddub(c.r[2], c.r[0], c.r[0]);  goto L_001B43C0; }
    set32(c.r[6], ld32((c.r[2].w[0] + 600u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_001B43C8; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_001B43C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B443C; } }
L_001B43C8:
    c.r[6].d[0] = ld8((c.r[2].w[0] + 576u));
    c.r[6].d[0] = c.r[6].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_001B43E0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 2;
L_001B43E0:
    c.r[4].d[0] = ld8((c.r[3].w[0] + 576u));
    c.r[4].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001B43F8; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 24u)));
    c.budget -= 2;
L_001B43F8:
    c.r[7].d[0] = ld8((c.r[3].w[0] + 539u));
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    set32(c.r[4], c.r[7].w[0] + c.r[6].w[0]);
    c.budget -= 3;
L_001B4404:
    c.r[5].d[0] = ld16((c.r[2].w[0] + 572u));
    c.r[4].d[0] = c.r[4].d[0] & 15ull;
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[4].d[0] = ld16((c.r[4].w[0] + 540u));
    c.budget -= 7;
    if (c.r[5].d[0] != c.r[4].d[0]) { set32(c.r[6], c.r[6].w[0] + 1u);  goto L_001B442C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001B443C; } }
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_001B442C:
    c.r[4].d[0] = c.r[6].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[4], c.r[7].w[0] + c.r[6].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B4404u | kUnwind; return; } goto L_001B4404; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001B443C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B4450:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    mmi::paddub(c.r[16], c.r[6], c.r[0]);
    set32(c.r[5], c.r[17].w[0] + 16u);
    set32(c.r[7], c.r[29].w[0] + 64u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4484u); mmi::paddub(c.r[6], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 23u, depth + 1u); else { c.pc = 0x0013CA90u; return; } if (c.pc != 0x001B4484u) [[unlikely]] return; }
L_001B4484:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4490u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x001B4490u) [[unlikely]] return; }
L_001B4490:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[17].w[0] + 16u);  if (t) { goto L_001B44B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001B4530; } }
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 1;
L_001B44B4:
    set32(c.r[5], c.r[17].w[0] + 32u);
    set32(c.r[7], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B44C4u); mmi::paddub(c.r[6], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 23u, depth + 1u); else { c.pc = 0x0013CA90u; return; } if (c.pc != 0x001B44C4u) [[unlikely]] return; }
L_001B44C4:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B44D0u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x001B44D0u) [[unlikely]] return; }
L_001B44D0:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[17].w[0] + 32u);  if (t) { goto L_001B44F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001B4530; } }
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 1;
L_001B44F4:
    set32(c.r[7], c.r[29].w[0] + 64u);
    mmi::paddub(c.r[6], c.r[18], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4504u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 23u, depth + 1u); else { c.pc = 0x0013CA90u; return; } if (c.pc != 0x001B4504u) [[unlikely]] return; }
L_001B4504:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4510u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x001B4510u) [[unlikely]] return; }
L_001B4510:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_001B452C; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_001B452C:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 1;
L_001B4530:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001B4550:
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[2], c.r[2].w[0] - 11744u);
    mmi::paddub(c.r[12], c.r[0], c.r[0]);
    mmi::paddub(c.r[10], c.r[0], c.r[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[8], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[3], 0u + 2u);
    set32(c.r[7], c.r[2].w[0] - 11744u);
    c.budget -= 10;
L_001B4578:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    mmi::paddub(c.r[11], c.r[0], c.r[0]);
    mmi::paddub(c.r[13], c.r[5], c.r[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[9], c.r[7].w[0] + c.r[2].w[0]);
    c.budget -= 6;
L_001B4590:
    c.r[6].d[0] = ld8((c.r[8].w[0]));
    c.r[2].d[0] = ld8((c.r[9].w[0]));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { goto L_001B45B0; } }
    st32((c.r[13].w[0]), c.r[6].w[0]);
    set32(c.r[13], c.r[13].w[0] + 4u);
    set32(c.r[5], c.r[5].w[0] + 4u);
    set32(c.r[12], c.r[12].w[0] + 1u);
    c.budget -= 4;
L_001B45B0:
    c.budget -= 2;
    if (c.r[12].d[0] != c.r[3].d[0]) { set32(c.r[11], c.r[11].w[0] + 1u);  goto L_001B45C4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001B45E4; } }
    set32(c.r[11], c.r[11].w[0] + 1u);
    c.budget -= 1;
L_001B45C4:
    c.r[2].d[0] = c.r[11].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[9], c.r[9].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B4590u | kUnwind; return; } goto L_001B4590; } }
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.r[2].d[0] = c.r[10].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B4578u | kUnwind; return; } goto L_001B4578; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_001B45E4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B45F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    mmi::paddub(c.r[14], c.r[5], c.r[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4604u); set32(c.r[5], c.r[29].w[0] + 24u);  if (depth < kMaxDepth) unit_002D(c, 14u, depth + 1u); else { c.pc = 0x001B4550u; return; } if (c.pc != 0x001B4604u) [[unlikely]] return; }
L_001B4604:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001B466C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[5], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] - 11744u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 8;
L_001B462C:
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_001B4644; } }
    st32((c.r[14].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001B466C; } }
L_001B4644:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[6].d[0]) { set32(c.r[4], c.r[4].w[0] + 1u);  goto L_001B465C; }
    st32((c.r[14].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001B466C; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_001B465C:
    c.r[2].d[0] = c.r[4].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B462Cu | kUnwind; return; } goto L_001B462C; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_001B466C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B4680:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    mmi::paddub(c.r[16], c.r[6], c.r[0]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    c.f[20] = c.f[12];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B46B0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x001B46B0u) [[unlikely]] return; }
L_001B46B0:
    c.r[4].d[0] = ld8((c.r[18].w[0] + 7u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[3], c.r[2].w[0] - 11584u);
    c.r[5].d[0] = ld8((c.r[17].w[0] + 7u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[2], c.r[2].w[0] - 11584u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));  if (t) { goto L_001B4734; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B4734; } }
    c.r[2].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = c.r[5].d[0] & 255ull;  if (t) { goto L_001B46F8; } }
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 2;
L_001B46F8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001B4704; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_001B4704:
    c.f[1] = c.r[3].w[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[20], c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; c.f[20] = fp::sub(c.f[20], c.f[12]);  if (t) { goto L_001B477C; } }
L_001B4734:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;  if (t) { goto L_001B4760; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 12u, c.f[20], c.f[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.f[20] = fp::sub(c.f[20], c.f[12]);  if (t) { goto L_001B477C; } }
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 1;
L_001B4760:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001B4778; } }
    c.f[12] = c.f[20];
    c.f[20] = 0u;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 80u);  if (t) { goto L_001B4780; } }
L_001B4778:
    c.f[12] = 0u;
    c.budget -= 1;
L_001B477C:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 1;
L_001B4780:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4788u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x001B4788u) [[unlikely]] return; }
L_001B4788:
    set32(c.r[5], c.r[29].w[0] + 80u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4798u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_002D(c, 26u, depth + 1u); else { c.pc = 0x001B48E0u; return; } if (c.pc != 0x001B4798u) [[unlikely]] return; }
L_001B4798:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B47A8u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x001B47A8u) [[unlikely]] return; }
L_001B47A8:
    set32(c.r[5], c.r[29].w[0] + 80u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B47B8u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_002D(c, 26u, depth + 1u); else { c.pc = 0x001B48E0u; return; } if (c.pc != 0x001B47B8u) [[unlikely]] return; }
L_001B47B8:
    set32(c.r[3], ld32((c.r[18].w[0] + 72u)));
    set32(c.r[6], 0u + 2u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 1u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[4], c.r[6], c.r[0]);  if (t) { goto L_001B47D4; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_001B47D4:
    set32(c.r[3], ld32((c.r[17].w[0] + 72u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 1u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[5].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_001B47F0; } }
    set32(c.r[6], 0u + 1u);
    c.r[5].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 2;
L_001B47F0:
    c.r[4].d[0] = c.r[6].d[0] & 255ull;
    set32(c.r[6], ld32((c.r[18].w[0] + 20u)));
    c.r[3].d[0] = ld8((c.r[6].w[0] + 530u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[6].w[0] + 530u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[17].w[0] + 20u)));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 530u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[5].w[0] + 530u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 579u));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001B4838; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 530u));
    c.r[3].d[0] = c.r[3].d[0] | 4ull;
    st8((c.r[4].w[0] + 530u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_001B4838:
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 579u));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001B485C; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 20u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 530u));
    c.r[3].d[0] = c.r[3].d[0] | 4ull;
    st8((c.r[4].w[0] + 530u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_001B485C:
    set32(c.r[4], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[3], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001B487C; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001B488C; } }
L_001B487C:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 530u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st8((c.r[4].w[0] + 530u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_001B488C:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[3], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001B48AC; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001B48BC; } }
L_001B48AC:
    set32(c.r[4], ld32((c.r[18].w[0] + 20u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 530u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st8((c.r[4].w[0] + 530u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_001B48BC:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001B48E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const bool t = c.r[6].d[0] == 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_001B4914; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B490Cu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x001B490Cu) [[unlikely]] return; }
L_001B490C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_001B493C; } }
L_001B4914:
    c.f[3] = ld32((c.r[5].w[0]));
    c.f[2] = ld32((c.r[5].w[0] + 4u));
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    set32(c.r[2], c.r[29].w[0] + 64u);
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 10;
L_001B493C:
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4948u); set32(c.r[4], c.r[2].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x001B4948u) [[unlikely]] return; }
L_001B4948:
    set32(c.r[4], c.r[16].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4954u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x001B4954u) [[unlikely]] return; }
L_001B4954:
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[3], 0u + 4u);
    c.r[4].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 5;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[16], c.r[16].w[0] + 64u);  goto L_001B4A24; }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[16], c.r[16].w[0] + 64u);  goto L_001B49E8; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[18], c.r[16].w[0] + 64u);  if (t) { goto L_001B49A0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001B4A3C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001B4A3C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);  if (t) { goto L_001B4A40; } }
    set32(c.r[18], c.r[16].w[0] + 64u);
    c.budget -= 1;
L_001B49A0:
    set32(c.r[16], c.r[18].w[0] + 48u);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 2;
L_001B49A8:
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B49B4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x001B49B4u) [[unlikely]] return; }
L_001B49B4:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B49A8u | kUnwind; return; } goto L_001B49A8; } }
    set32(c.r[4], c.r[18].w[0] + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B49D0u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x001B49D0u) [[unlikely]] return; }
L_001B49D0:
    set32(c.r[4], c.r[18].w[0] + 288u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B49DCu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x001B49DCu) [[unlikely]] return; }
L_001B49DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B4A3C; } }
    set32(c.r[16], c.r[16].w[0] + 64u);
    c.budget -= 1;
L_001B49E8:
    set32(c.r[17], c.r[16].w[0] + 48u);
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    c.budget -= 2;
L_001B49F0:
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B49FCu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x001B49FCu) [[unlikely]] return; }
L_001B49FC:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B49F0u | kUnwind; return; } goto L_001B49F0; } }
    set32(c.r[4], c.r[16].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4A18u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x001B4A18u) [[unlikely]] return; }
L_001B4A18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B4A3C; } }
    set32(c.r[16], c.r[16].w[0] + 64u);
    c.budget -= 1;
L_001B4A24:
    set32(c.r[4], c.r[16].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4A30u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x001B4A30u) [[unlikely]] return; }
L_001B4A30:
    set32(c.r[4], c.r[16].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4A3Cu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x001B4A3Cu) [[unlikely]] return; }
L_001B4A3C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    c.budget -= 1;
L_001B4A40:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001B4A60:
    set32(c.r[8], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001B4AEC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 72u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B4AE8; } }
    c.r[4].d[0] = ld8((c.r[5].w[0] + 3u));
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], 0u + 3u);
    st16((c.r[8].w[0] + 536u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st8((c.r[8].w[0] + 538u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[5].w[0] + 20u)));
    st32((c.r[8].w[0] + 616u), c.r[3].w[0]);
    st32((c.r[8].w[0] + 620u), c.r[6].w[0]);
    st32((c.r[8].w[0] + 624u), c.r[7].w[0]);
    st32((c.r[8].w[0] + 628u), c.f[12]);
    set32(c.r[3], ld32((c.r[5].w[0] + 64u)));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001B4AC0; } }
    c.r[2].d[0] = ld16((c.r[8].w[0] + 536u));
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    st16((c.r[8].w[0] + 536u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_001B4AC0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 1u)));
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001B4AE0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 8385u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 20u)));
    st8((c.r[2].w[0] + 535u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
L_001B4AE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B4AEC; } }
L_001B4AE8:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_001B4AEC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B4B00:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00E70000u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.r[6].d[0] = c.r[3].d[0] | 14336ull;
    c.budget -= 3;
L_001B4B0C:
    set32(c.r[4], ld32((c.r[6].w[0])));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[3].d[0] = c.r[5].sd[0] < 32ll ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    st32((c.r[6].w[0]), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    st32((c.r[6].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[6].w[0] + 8u)));
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    st32((c.r[6].w[0] + 8u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[6].w[0] + 12u)));
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    st32((c.r[6].w[0] + 12u), c.r[4].w[0]);
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 24576u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B4B0Cu | kUnwind; return; } goto L_001B4B0C; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B4B60:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26476u)));
    c.r[2].d[0] = c.r[6].d[0] & 1ull;
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    mmi::paddub(c.r[21], c.r[6], c.r[0]);
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = c.r[3].d[0] ^ 1ull;  if (t) { goto L_001B4C30; } }
    set32(c.r[2], c.r[28].w[0] - 26456u);
    set32(c.r[3], c.r[19].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[18], c.r[2].w[0] - 1u);  if (t) { goto L_001B4C30; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[2], c.r[2].w[0] - 14112u);
    set32(c.r[3], c.r[19].w[0] << 10);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[20], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
L_001B4BCC:
    set32(c.r[3], ld32((c.r[20].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = c.r[21].d[0] & 2ull;  if (t) { goto L_001B4C34; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[2], c.r[18], c.r[0]);  if (t) { goto L_001B4C24; } }
    set32(c.r[4], c.r[3].w[0] + 64u);
    set32(c.r[3], ld32((c.r[3].w[0] + 64u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[2], c.r[2].w[0] - 11568u);
    set32(c.r[7], c.r[29].w[0] + 124u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4C10u); mmi::paddub(c.r[6], c.r[16], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B4C10u) [[unlikely]] return; }
L_001B4C10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B4C20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001B4CD4; } }
L_001B4C20:
    mmi::paddub(c.r[2], c.r[18], c.r[0]);
    c.budget -= 1;
L_001B4C24:
    set32(c.r[20], c.r[20].w[0] - 4u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B4BCCu | kUnwind; return; } goto L_001B4BCC; } }
L_001B4C30:
    c.r[2].d[0] = c.r[21].d[0] & 2ull;
    c.budget -= 1;
L_001B4C34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001B4CD4; } }
    set32(c.r[2], c.r[28].w[0] - 26448u);
    set32(c.r[3], c.r[19].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[20], c.r[2].w[0] - 1u);  if (t) { goto L_001B4CD0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[2], c.r[2].w[0] - 10016u);
    set32(c.r[3], c.r[19].w[0] << 10);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[20].w[0] << 2);
    set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
L_001B4C6C:
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001B4CD0; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[2], c.r[20], c.r[0]);  if (t) { goto L_001B4CC4; } }
    set32(c.r[4], c.r[3].w[0] + 64u);
    set32(c.r[3], ld32((c.r[3].w[0] + 64u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[2], c.r[2].w[0] - 11568u);
    set32(c.r[7], c.r[29].w[0] + 124u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4CB0u); mmi::paddub(c.r[6], c.r[16], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B4CB0u) [[unlikely]] return; }
L_001B4CB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B4CC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001B4CD4; } }
L_001B4CC0:
    mmi::paddub(c.r[2], c.r[20], c.r[0]);
    c.budget -= 1;
L_001B4CC4:
    set32(c.r[18], c.r[18].w[0] - 4u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B4C6Cu | kUnwind; return; } goto L_001B4C6C; } }
L_001B4CD0:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_001B4CD4:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001B4D00:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    set32(c.r[2], 0u - 1u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 78u)));
    c.budget -= 12;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_001B4D38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001B4E94; } }
L_001B4D38:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001B4D9C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 640u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B4D9C; } }
    c.r[2].d[0] = c.r[5].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B4D9C; } }
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[2].w[0] << 7);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 28448u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 360u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == c.r[17].d[0]; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001B4D94; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 364u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { goto L_001B4D9C; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_001B4D94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);  if (t) { goto L_001B4E98; } }
L_001B4D9C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 369u)));
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[3].w[0] << 7);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], c.r[3].w[0] - 28448u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_001B4DEC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8u)));
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[16].w[0] + 64u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4DD4u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x001B4DD4u) [[unlikely]] return; }
L_001B4DD4:
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[16].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4DE4u); mmi::paddub(c.r[6], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001B4DE4u) [[unlikely]] return; }
L_001B4DE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[17].w[0] + 632u)));  if (t) { goto L_001B4E1C; } }
L_001B4DEC:
    c.f[0] = ld32((c.r[16].w[0] + 48u));
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8u)));
    c.f[1] = ld32((c.r[16].w[0] + 52u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 56u));
    st32((c.r[29].w[0] + 72u), c.f[0]);
    set32(c.r[17], ld32((c.r[17].w[0] + 632u)));
    c.budget -= 12;
L_001B4E1C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_001B4E2C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001B4E94; } }
L_001B4E2C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001B4E94; } }
L_001B4E34:
    set32(c.r[2], ld32((c.r[17].w[0] + 72u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1u));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[17].w[0] + 64u);  if (t) { goto L_001B4E80; } }
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[2], c.r[2].w[0] - 11568u);
    set32(c.r[5], c.r[16].w[0] + 16u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[6], c.r[29].w[0] + 64u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4E70u); mmi::paddub(c.r[7], c.r[18], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B4E70u) [[unlikely]] return; }
L_001B4E70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B4E80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001B4E94; } }
L_001B4E80:
    set32(c.r[17], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B4E34u | kUnwind; return; } goto L_001B4E34; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 2;
L_001B4E94:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    c.budget -= 1;
L_001B4E98:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001B4EB0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    mmi::paddub(c.r[20], c.r[5], c.r[0]);
    mmi::paddub(c.r[19], c.r[6], c.r[0]);
    set32(c.r[4], c.r[29].w[0] + 112u);
    mmi::paddub(c.r[18], c.r[7], c.r[0]);
    mmi::paddub(c.r[5], c.r[19], c.r[0]);
    mmi::paddub(c.r[6], c.r[20], c.r[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4EF0u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001B4EF0u) [[unlikely]] return; }
L_001B4EF0:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[16].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4F00u); mmi::paddub(c.r[6], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001B4F00u) [[unlikely]] return; }
L_001B4F00:
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[16].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4F10u); mmi::paddub(c.r[6], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001B4F10u) [[unlikely]] return; }
L_001B4F10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4F18u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x001B4F18u) [[unlikely]] return; }
L_001B4F18:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4F28u); mmi::paddub(c.r[17], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x001B4F28u) [[unlikely]] return; }
L_001B4F28:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[20] = c.f[0];  if (t) { goto L_001B4F44; } }
    c.r[17].d[0] = c.r[17].d[0] | 1ull;
    c.budget -= 1;
L_001B4F44:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4F50u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x001B4F50u) [[unlikely]] return; }
L_001B4F50:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 3u);  if (t) { goto L_001B4F70; } }
    c.r[17].d[0] = c.r[17].d[0] | 2ull;
    set32(c.r[2], 0u + 3u);
    c.budget -= 2;
L_001B4F70:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001B5018; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_001B4FEC; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_001B4FC4; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 160u);  if (t) { goto L_001B4FA4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[16].w[0] + 16u);  if (t) { goto L_001B5024; } }
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 1;
L_001B4FA4:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4FB0u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x001B4FB0u) [[unlikely]] return; }
L_001B4FB0:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4FBCu); mmi::paddub(c.r[5], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x001B4FBCu) [[unlikely]] return; }
L_001B4FBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B5020; } }
L_001B4FC4:
    c.f[3] = ld32((c.r[20].w[0]));
    c.f[2] = ld32((c.r[20].w[0] + 4u));
    c.f[1] = ld32((c.r[20].w[0] + 8u));
    c.f[0] = ld32((c.r[20].w[0] + 12u));
    set32(c.r[2], c.r[29].w[0] + 160u);
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 12u), c.f[0]);  if (t) { goto L_001B5020; } }
L_001B4FEC:
    c.f[3] = ld32((c.r[19].w[0]));
    c.f[2] = ld32((c.r[19].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0] + 8u));
    c.f[0] = ld32((c.r[19].w[0] + 12u));
    set32(c.r[2], c.r[29].w[0] + 160u);
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 12u), c.f[0]);  if (t) { goto L_001B5020; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_001B5018:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);  if (t) { goto L_001B504C; } }
L_001B5020:
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.budget -= 1;
L_001B5024:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B502Cu); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x001B502Cu) [[unlikely]] return; }
L_001B502C:
    st32((c.r[18].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 48u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_001B5048; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_001B5048:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    c.budget -= 1;
L_001B504C:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_001B5070:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; mmi::paddub(c.r[2], c.r[0], c.r[0]);  c.pc = t; return; }
L_001B5080:
    set32(c.r[29], c.r[29].w[0] - 224u);
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
    c.f[3] = ld32((c.r[5].w[0]));
    c.f[2] = ld32((c.r[5].w[0] + 4u));
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    set32(c.r[2], c.r[29].w[0] + 160u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[21], c.r[29].w[0] + 176u);
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    c.f[3] = ld32((c.r[6].w[0]));
    c.f[2] = ld32((c.r[6].w[0] + 4u));
    c.f[1] = ld32((c.r[6].w[0] + 8u));
    c.f[0] = ld32((c.r[6].w[0] + 12u));
    mmi::paddub(c.r[22], c.r[7], c.r[0]);
    mmi::paddub(c.r[23], c.r[5], c.r[0]);
    mmi::paddub(c.r[19], c.r[0], c.r[0]);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    mmi::paddub(c.r[20], c.r[16], c.r[0]);
    st32((c.r[21].w[0]), c.f[3]);
    st32((c.r[21].w[0] + 4u), c.f[2]);
    st32((c.r[21].w[0] + 8u), c.f[1]);
    st32((c.r[21].w[0] + 12u), c.f[0]);
    c.budget -= 36;
L_001B5110:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x55550000u);
    c.r[2].d[0] = c.r[2].d[0] | 21846ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[17].w[0]);
    set32(c.r[3], c.r[17].w[0] >> 31);
    set32(c.r[5], c.r[29].w[0] + 208u);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.f[3] = ld32((c.r[2].w[0] + 272u));
    c.f[2] = ld32((c.r[2].w[0] + 276u));
    c.f[1] = ld32((c.r[2].w[0] + 280u));
    c.f[0] = ld32((c.r[2].w[0] + 284u));
    set32(c.r[6], c.r[29].w[0] + 160u);
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    st32((c.r[5].w[0]), c.f[3]);
    st32((c.r[5].w[0] + 4u), c.f[2]);
    st32((c.r[5].w[0] + 8u), c.f[1]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5164u); st32((c.r[5].w[0] + 12u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001B5164u) [[unlikely]] return; }
L_001B5164:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5170u); set32(c.r[5], c.r[20].w[0] + 176u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x001B5170u) [[unlikely]] return; }
L_001B5170:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[20] = c.f[0];  if (t) { goto L_001B5190; } }
    c.r[18].d[0] = c.r[18].d[0] | 1ull;
    c.budget -= 2;
L_001B5190:
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[5], c.r[29].w[0] + 208u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B51A0u); mmi::paddub(c.r[6], c.r[21], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001B51A0u) [[unlikely]] return; }
L_001B51A0:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B51ACu); set32(c.r[5], c.r[20].w[0] + 176u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x001B51ACu) [[unlikely]] return; }
L_001B51AC:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[21] = c.f[0];  if (t) { goto L_001B51C8; } }
    c.r[18].d[0] = c.r[18].d[0] | 2ull;
    c.budget -= 1;
L_001B51C8:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_001B51E0; } }
    st32((c.r[22].w[0]), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001B537C; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_001B51E0:
    c.budget -= 2;
    if (c.r[18].d[0] == c.r[2].d[0]) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_001B532C; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; set32(c.r[4], c.r[29].w[0] + 192u);  if (t) { goto L_001B52A0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; set32(c.r[4], c.r[29].w[0] + 192u);  if (t) { goto L_001B520C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B5328; } }
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 1;
L_001B520C:
    set32(c.r[6], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5218u); mmi::paddub(c.r[5], c.r[21], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001B5218u) [[unlikely]] return; }
L_001B5218:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5224u); set32(c.r[5], c.r[20].w[0] + 176u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x001B5224u) [[unlikely]] return; }
L_001B5224:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[29].w[0] + 192u);  if (t) { goto L_001B5254; } }
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001B5268; } }
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 2;
L_001B5254:
    c.f[12] = c.f[21];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5260u); set32(c.r[5], c.r[20].w[0] + 176u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x001B5260u) [[unlikely]] return; }
L_001B5260:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[29].w[0] + 192u);  if (t) { goto L_001B528C; } }
L_001B5268:
    fpu_div(c, 12u, c.f[21], c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5284u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x001B5284u) [[unlikely]] return; }
L_001B5284:
    set32(c.r[5], c.r[29].w[0] + 192u);
    c.budget -= 2;
L_001B528C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5294u); mmi::paddub(c.r[4], c.r[21], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x001B5294u) [[unlikely]] return; }
L_001B5294:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = c.r[19].d[0] | 128ull;  if (t) { goto L_001B5328; } }
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 1;
L_001B52A0:
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B52ACu); mmi::paddub(c.r[6], c.r[21], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001B52ACu) [[unlikely]] return; }
L_001B52AC:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B52B8u); set32(c.r[5], c.r[20].w[0] + 176u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x001B52B8u) [[unlikely]] return; }
L_001B52B8:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[29].w[0] + 192u);  if (t) { goto L_001B52E4; } }
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001B52F8; } }
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 1;
L_001B52E4:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B52F0u); set32(c.r[5], c.r[20].w[0] + 176u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x001B52F0u) [[unlikely]] return; }
L_001B52F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 160u);  if (t) { goto L_001B531C; } }
L_001B52F8:
    fpu_div(c, 12u, c.f[20], c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5314u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x001B5314u) [[unlikely]] return; }
L_001B5314:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 2;
L_001B531C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5324u); set32(c.r[5], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x001B5324u) [[unlikely]] return; }
L_001B5324:
    c.r[19].d[0] = c.r[19].d[0] | 1ull;
    c.budget -= 1;
L_001B5328:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_001B532C:
    c.r[2].d[0] = c.r[17].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B5110u | kUnwind; return; } goto L_001B5110; } }
    set32(c.r[2], 0u + 128u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[19].d[0] & 1ull;  if (t) { goto L_001B5354; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[22].w[0]), c.r[2].w[0]);  if (t) { goto L_001B5378; } }
    c.r[2].d[0] = c.r[19].d[0] & 1ull;
    c.budget -= 1;
L_001B5354:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);  if (t) { goto L_001B5374; } }
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5368u); mmi::paddub(c.r[4], c.r[23], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x001B5368u) [[unlikely]] return; }
L_001B5368:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[22].w[0]), c.f[0]);  if (t) { goto L_001B5378; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.budget -= 1;
L_001B5374:
    st32((c.r[22].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_001B5378:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001B537C:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_001B53B0:
    set32(c.r[29], c.r[29].w[0] - 416u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    mmi::paddub(c.r[5], c.r[6], c.r[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    set32(c.r[6], c.r[29].w[0] + 224u);
    mmi::paddub(c.r[16], c.r[7], c.r[0]);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B53F8u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_002C(c, 315u, depth + 1u); else { c.pc = 0x001B3310u; return; } if (c.pc != 0x001B53F8u) [[unlikely]] return; }
L_001B53F8:
    mmi::paddub(c.r[19], c.r[0], c.r[0]);
    mmi::paddub(c.r[20], c.r[18], c.r[0]);
    mmi::paddub(c.r[21], c.r[18], c.r[0]);
    c.budget -= 3;
L_001B5404:
    set32(c.r[4], c.r[29].w[0] + 224u);
    set32(c.r[5], c.r[20].w[0] + 144u);
    set32(c.r[6], c.r[18].w[0] + 176u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5418u); set32(c.r[7], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_002C(c, 300u, depth + 1u); else { c.pc = 0x001B30D0u; return; } if (c.pc != 0x001B5418u) [[unlikely]] return; }
L_001B5418:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_001B54C0; }
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[21].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5430u); set32(c.r[6], c.r[20].w[0] + 144u);  if (depth < kMaxDepth) unit_002D(c, 7u, depth + 1u); else { c.pc = 0x001B4450u; return; } if (c.pc != 0x001B5430u) [[unlikely]] return; }
L_001B5430:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B54BC; } }
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[29].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5448u); set32(c.r[6], c.r[18].w[0] + 176u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001B5448u) [[unlikely]] return; }
L_001B5448:
    set32(c.r[2], c.r[19].w[0] << 4);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[19], c.r[2].w[0] + 144u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5460u); mmi::paddub(c.r[5], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x001B5460u) [[unlikely]] return; }
L_001B5460:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001B5480; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[12] = ld32((c.r[18].w[0] + 192u));  if (t) { goto L_001B5488; } }
L_001B5480:
    c.f[0] = ld32((c.r[18].w[0] + 192u));
    c.f[12] = c.f[0] ^ fp::kSign;
    c.budget -= 2;
L_001B5488:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5494u); mmi::paddub(c.r[5], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x001B5494u) [[unlikely]] return; }
L_001B5494:
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[5], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B54A4u); set32(c.r[6], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x001B54A4u) [[unlikely]] return; }
L_001B54A4:
    set32(c.r[5], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B54B0u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x001B54B0u) [[unlikely]] return; }
L_001B54B0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.f[0]);  if (t) { goto L_001B55E0; } }
L_001B54BC:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_001B54C0:
    c.r[2].d[0] = c.r[19].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[20], c.r[20].w[0] + 16u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[21], c.r[21].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B5404u | kUnwind; return; } goto L_001B5404; } }
    set32(c.r[19], 0u - 1u);
    set32(c.r[20], c.r[28].w[0] - 30392u);
    set32(c.r[21], c.r[29].w[0] + 192u);
    mmi::paddub(c.r[22], c.r[0], c.r[0]);
    c.budget -= 4;
L_001B54E0:
    c.r[3].d[0] = ld8((c.r[20].w[0]));
    c.r[2].d[0] = ld8((c.r[20].w[0] + 1u));
    set32(c.r[6], c.r[29].w[0] + 320u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[3].w[0] + 48u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5508u); set32(c.r[5], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_002C(c, 315u, depth + 1u); else { c.pc = 0x001B3310u; return; } if (c.pc != 0x001B5508u) [[unlikely]] return; }
L_001B5508:
    set32(c.r[4], c.r[29].w[0] + 320u);
    set32(c.r[5], c.r[29].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5518u); set32(c.r[6], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_002C(c, 320u, depth + 1u); else { c.pc = 0x001B33B0u; return; } if (c.pc != 0x001B5518u) [[unlikely]] return; }
L_001B5518:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001B55A0; } }
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B552Cu); mmi::paddub(c.r[5], c.r[21], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x001B552Cu) [[unlikely]] return; }
L_001B552C:
    c.f[21] = c.f[0];
    c.f[0] = ld32((c.r[18].w[0] + 192u));
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[22], c.r[22].w[0] + 1u);  goto L_001B55AC; }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0]; set32(c.r[4], c.r[29].w[0] + 144u);  if (t) { goto L_001B5564; } }
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001B55A8; } }
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 1;
L_001B5564:
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5570u); mmi::paddub(c.r[6], c.r[21], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001B5570u) [[unlikely]] return; }
L_001B5570:
    c.f[12] = ld32((c.r[18].w[0] + 192u));
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5580u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x001B5580u) [[unlikely]] return; }
L_001B5580:
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[6], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5590u); mmi::paddub(c.r[5], c.r[21], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x001B5590u) [[unlikely]] return; }
L_001B5590:
    c.f[20] = c.f[21];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[19], c.r[22], c.r[0]);  if (t) { goto L_001B55A8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001B55A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), 0u);  if (t) { goto L_001B55E0; } }
L_001B55A8:
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.budget -= 1;
L_001B55AC:
    c.r[2].d[0] = c.r[22].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B54E0u | kUnwind; return; } goto L_001B54E0; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; set32(c.r[5], c.r[29].w[0] + 208u);  if (t) { goto L_001B55D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001B55E0; } }
    set32(c.r[5], c.r[29].w[0] + 208u);
    c.budget -= 1;
L_001B55D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B55D8u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x001B55D8u) [[unlikely]] return; }
L_001B55D8:
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0]), c.f[0]);
    c.budget -= 2;
L_001B55E0:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 416u);  c.pc = t; return; }
L_001B5610:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[5], c.r[6], c.r[0]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[6], c.r[29].w[0] + 96u);
    mmi::paddub(c.r[17], c.r[7], c.r[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5640u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_002C(c, 315u, depth + 1u); else { c.pc = 0x001B3310u; return; } if (c.pc != 0x001B5640u) [[unlikely]] return; }
L_001B5640:
    set32(c.r[5], c.r[16].w[0] + 48u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5650u); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_002C(c, 320u, depth + 1u); else { c.pc = 0x001B33B0u; return; } if (c.pc != 0x001B5650u) [[unlikely]] return; }
L_001B5650:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001B56A0; } }
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5664u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x001B5664u) [[unlikely]] return; }
L_001B5664:
    c.f[1] = ld32((c.r[16].w[0] + 144u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001B5694; } }
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5684u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x001B5684u) [[unlikely]] return; }
L_001B5684:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.f[0]);  if (t) { goto L_001B56A4; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_001B5694:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);  if (t) { goto L_001B56A8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001B56A0:
    st32((c.r[17].w[0]), 0u);
    c.budget -= 1;
L_001B56A4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    c.budget -= 1;
L_001B56A8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_001B56C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 9u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_001B56E8; } }
    c.f[0] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_001B5858; } }
L_001B56E8:
    set32(c.r[2], ld32((c.r[4].w[0] + 632u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B5700; } }
    c.f[0] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B5854; } }
L_001B5700:
    set32(c.r[3], ld32((c.r[2].w[0] + 72u)));
    set32(c.r[16], c.r[2].w[0] + 64u);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[2], 0u + 4u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001B57D0; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001B57C4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_001B57C4; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_001B5784; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001B5748; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_001B5844; } }
L_001B5748:
    c.f[3] = ld32((c.r[16].w[0] + 16u));
    c.f[2] = ld32((c.r[16].w[0] + 20u));
    c.f[1] = ld32((c.r[16].w[0] + 24u));
    c.f[0] = ld32((c.r[16].w[0] + 28u));
    set32(c.r[2], c.r[29].w[0] + 32u);
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 48u));
    c.f[0] = ld32((c.r[29].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 36u), c.f[0]);  if (t) { goto L_001B5840; } }
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 1;
L_001B5784:
    set32(c.r[5], c.r[16].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5790u); set32(c.r[6], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x001B5790u) [[unlikely]] return; }
L_001B5790:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B579Cu); set32(c.r[5], c.r[16].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x001B579Cu) [[unlikely]] return; }
L_001B579C:
    set32(c.r[5], c.r[16].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B57A8u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x001B57A8u) [[unlikely]] return; }
L_001B57A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B57BCu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x001B57BCu) [[unlikely]] return; }
L_001B57BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B5840; } }
L_001B57C4:
    c.f[0] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B5854; } }
L_001B57D0:
    c.f[3] = ld32((c.r[16].w[0] + 48u));
    c.f[2] = ld32((c.r[16].w[0] + 52u));
    c.f[1] = ld32((c.r[16].w[0] + 56u));
    c.f[0] = ld32((c.r[16].w[0] + 60u));
    set32(c.r[2], c.r[29].w[0] + 32u);
    set32(c.r[3], c.r[29].w[0] + 36u);
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 68u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 16;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001B5830; } }
    c.f[3] = ld32((c.r[16].w[0] + 64u));
    c.f[2] = ld32((c.r[16].w[0] + 68u));
    c.f[1] = ld32((c.r[16].w[0] + 72u));
    c.f[0] = ld32((c.r[16].w[0] + 76u));
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    c.budget -= 8;
L_001B5830:
    c.f[1] = ld32((c.r[16].w[0] + 144u));
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[3].w[0]), c.f[0]);
    c.budget -= 4;
L_001B5840:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 1;
L_001B5844:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B584Cu);  if (depth < kMaxDepth) unit_0045(c, 192u, depth + 1u); else { c.pc = 0x00217510u; return; } if (c.pc != 0x001B584Cu) [[unlikely]] return; }
L_001B584C:
    c.f[1] = ld32((c.r[29].w[0] + 36u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 2;
L_001B5854:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_001B5858:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001B5870:
    set32(c.r[3], ld32((c.r[4].w[0] + 632u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;  if (t) { goto L_001B5898; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[3].w[0] + 35u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[3].w[0] + 40u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 44u), c.f[12]);
    st32((c.r[3].w[0] + 36u), c.f[13]);
    c.r[2].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
L_001B5898:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B58A0:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    mmi::paddub(c.r[19], c.r[6], c.r[0]);
    mmi::paddub(c.r[21], c.r[4], c.r[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 588u)));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[20], c.r[5], c.r[0]);  if (t) { goto L_001B58E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001B5B50; } }
L_001B58E0:
    set32(c.r[16], ld32((c.r[2].w[0] + 632u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_001B58F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001B5B50; } }
L_001B58F4:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[29].w[0] + 128u);  if (t) { goto L_001B590C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001B5B50; } }
    set32(c.r[6], c.r[29].w[0] + 128u);
    c.budget -= 1;
L_001B590C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5914u);  if (depth < kMaxDepth) unit_002C(c, 315u, depth + 1u); else { c.pc = 0x001B3310u; return; } if (c.pc != 0x001B5914u) [[unlikely]] return; }
L_001B5914:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[17], c.r[16].w[0] + 64u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    mmi::paddub(c.r[5], c.r[21], c.r[0]);
    set32(c.r[16], c.r[2].w[0] + 64u);
    set32(c.r[6], c.r[16].w[0] + 16u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5934u); mmi::paddub(c.r[18], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001B5934u) [[unlikely]] return; }
L_001B5934:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5944u); set32(c.r[5], c.r[2].w[0] - 11536u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x001B5944u) [[unlikely]] return; }
L_001B5944:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_001B5960; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_001B5960:
    c.r[18].d[0] = c.r[18].d[0] | c.r[2].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5974u); set32(c.r[5], c.r[2].w[0] - 11520u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x001B5974u) [[unlikely]] return; }
L_001B5974:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_001B5990; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_001B5990:
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[6], c.r[16].w[0] + 16u);
    c.r[18].d[0] = c.r[18].d[0] | c.r[2].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B59A4u); mmi::paddub(c.r[5], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001B59A4u) [[unlikely]] return; }
L_001B59A4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B59B4u); set32(c.r[5], c.r[2].w[0] - 11536u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x001B59B4u) [[unlikely]] return; }
L_001B59B4:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_001B59D0; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_001B59D0:
    c.r[18].d[0] = c.r[18].d[0] | c.r[2].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B59E4u); set32(c.r[5], c.r[2].w[0] - 11520u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x001B59E4u) [[unlikely]] return; }
L_001B59E4:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_001B5A00; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_001B5A00:
    c.r[18].d[0] = c.r[18].d[0] | c.r[2].d[0];
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != 0ull; set32(c.r[5], c.r[16].w[0] + 16u);  if (t) { goto L_001B5A18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001B5B50; } }
    set32(c.r[5], c.r[16].w[0] + 16u);
    c.budget -= 1;
L_001B5A18:
    mmi::paddub(c.r[4], c.r[21], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5A24u); mmi::paddub(c.r[18], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x001B5A24u) [[unlikely]] return; }
L_001B5A24:
    c.f[1] = ld32((c.r[16].w[0] + 48u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001B5A3C; } }
    c.r[18].d[0] = c.r[18].d[0] | 16ull;
    c.budget -= 1;
L_001B5A3C:
    c.f[1] = ld32((c.r[17].w[0] + 48u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[5], c.r[16].w[0] + 16u);  if (t) { goto L_001B5A58; } }
    c.r[18].d[0] = c.r[18].d[0] | 32ull;
    set32(c.r[5], c.r[16].w[0] + 16u);
    c.budget -= 2;
L_001B5A58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5A60u); mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x001B5A60u) [[unlikely]] return; }
L_001B5A60:
    c.f[1] = ld32((c.r[16].w[0] + 48u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001B5A78; } }
    c.r[18].d[0] = c.r[18].d[0] | 1ull;
    c.budget -= 1;
L_001B5A78:
    c.f[1] = ld32((c.r[17].w[0] + 48u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 33u);  if (t) { goto L_001B5A94; } }
    c.r[18].d[0] = c.r[18].d[0] | 2ull;
    set32(c.r[2], 0u + 33u);
    c.budget -= 2;
L_001B5A94:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; set32(c.r[4], c.r[29].w[0] + 128u);  if (t) { goto L_001B5B2C; } }
    set32(c.r[2], 0u + 32u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_001B5B28; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_001B5B28; } }
    set32(c.r[2], 0u + 18u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; set32(c.r[4], c.r[29].w[0] + 128u);  if (t) { goto L_001B5B08; } }
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_001B5B04; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_001B5B04; } }
    set32(c.r[2], 0u + 34u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001B5AFC; } }
    set32(c.r[2], 0u + 17u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_001B5AF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001B5B50; } }
L_001B5AF8:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_001B5AFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);  if (t) { goto L_001B5B54; } }
L_001B5B04:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 1;
L_001B5B08:
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5B14u); mmi::paddub(c.r[6], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_002C(c, 366u, depth + 1u); else { c.pc = 0x001B3A80u; return; } if (c.pc != 0x001B5B14u) [[unlikely]] return; }
L_001B5B14:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001B5B4C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[3], c.r[0]);  if (t) { goto L_001B5B50; } }
L_001B5B28:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 1;
L_001B5B2C:
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5B38u); mmi::paddub(c.r[6], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_002C(c, 366u, depth + 1u); else { c.pc = 0x001B3A80u; return; } if (c.pc != 0x001B5B38u) [[unlikely]] return; }
L_001B5B38:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001B5B4C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[3], c.r[0]);  if (t) { goto L_001B5B50; } }
L_001B5B4C:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_001B5B50:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    c.budget -= 1;
L_001B5B54:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_001B5B80:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    mmi::paddub(c.r[16], c.r[6], c.r[0]);
    set32(c.r[5], 0u + 5u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5BB0u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x001B5BB0u) [[unlikely]] return; }
L_001B5BB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B5BF0; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x001B0000u);
    set32(c.r[5], 0u + 21u);
    set32(c.r[4], 0u + 3u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[18].w[0]));
    st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st8((c.r[2].w[0] + 11u), static_cast<std::uint8_t>(c.r[16].w[0]));
    set32(c.r[3], c.r[3].w[0] + 23568u);
    st8((c.r[2].w[0] + 273u), static_cast<std::uint8_t>(0u));
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 14;
L_001B5BF0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001B5C10:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[2], c.r[2].w[0] - 11456u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001B4000u < 16384u) { entry = entries_002D[(t - 0x001B4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001B5C30:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[3], c.r[3].w[0] - 11504u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 168u), c.r[3].w[0]);  c.pc = t; return; }
L_001B5C60:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[2], c.r[2].w[0] - 11440u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001B4000u < 16384u) { entry = entries_002D[(t - 0x001B4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001B5C80:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_001B5C90:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_001B5CA0:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == c.r[3].d[0]; set32(c.r[8], c.r[4].w[0] + 320u);  if (t) { goto L_001B5CE8; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_001B5CC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_001B5D2C; } }
L_001B5CC0:
    set32(c.r[6], ld32((c.r[28].w[0] - 26304u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 11u)));
    set32(c.r[3], 0u + 4u);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 386u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_001B5D30; } }
    set32(c.r[3], c.r[7].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[8].w[0]), 0u);
    c.budget -= 3;
L_001B5CE8:
    c.f[1] = ld32((c.r[8].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[2] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[8].w[0]), c.f[0]);  if (t) { goto L_001B5D28; } }
    st32((c.r[8].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_001B5D28:
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_001B5D2C:
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_001B5D30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B5D40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 11u)));
    set32(c.r[5], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 386u)));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], c.r[16].w[0] + 320u);  if (t) { goto L_001B5D74; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001B604C; } }
L_001B5D74:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    set32(c.r[4], 0u + 4u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    c.r[5].d[0] = c.r[5].d[0] & 31ull;
    st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.budget -= 10;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_001B6004; } }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_001B5FB8; } }
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_001B5F04; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_001B5E24; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[4], c.r[5].w[0] + 1u);  if (t) { goto L_001B5DD4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_001B6048; } }
    set32(c.r[4], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_001B5DD4:
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], 0u + 20u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st32((c.r[3].w[0]), 0u);
    st16((c.r[3].w[0] + 92u), static_cast<std::uint16_t>(0u));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    set32(c.r[6], c.r[28].w[0] - 25532u);
    set32(c.r[5], c.r[28].w[0] - 25540u);
    set32(c.r[4], c.r[28].w[0] - 25548u);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    st32((c.r[6].w[0]), 0u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    st32((c.r[5].w[0]), 0u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[4].w[0]), 0u);
    c.budget -= 20;
L_001B5E24:
    c.f[1] = ld32((c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[4].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[4].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);  goto L_001B5E50; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[4].w[0]);  if (t) { goto L_001B5E64; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.budget -= 1;
L_001B5E50:
    c.r[4].d[0] = c.r[4].d[0] | 52429ull;
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[3].w[0]), c.f[0]);
    c.budget -= 5;
L_001B5E64:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = c.r[4].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001B5E90; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 329u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001B5F04; } }
L_001B5E90:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 11u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5EB4u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_002D(c, 122u, depth + 1u); else { c.pc = 0x001B5B80u; return; } if (c.pc != 0x001B5EB4u) [[unlikely]] return; }
L_001B5EB4:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 11u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5EC4u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_002D(c, 122u, depth + 1u); else { c.pc = 0x001B5B80u; return; } if (c.pc != 0x001B5EC4u) [[unlikely]] return; }
L_001B5EC4:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 11u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5ED4u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_002D(c, 122u, depth + 1u); else { c.pc = 0x001B5B80u; return; } if (c.pc != 0x001B5ED4u) [[unlikely]] return; }
L_001B5ED4:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 11u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5EE4u); set32(c.r[4], 0u + 5u);  if (depth < kMaxDepth) unit_002D(c, 122u, depth + 1u); else { c.pc = 0x001B5B80u; return; } if (c.pc != 0x001B5EE4u) [[unlikely]] return; }
L_001B5EE4:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 11u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5EF4u); set32(c.r[4], 0u + 7u);  if (depth < kMaxDepth) unit_002D(c, 122u, depth + 1u); else { c.pc = 0x001B5B80u; return; } if (c.pc != 0x001B5EF4u) [[unlikely]] return; }
L_001B5EF4:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 11u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5F04u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_002D(c, 122u, depth + 1u); else { c.pc = 0x001B5B80u; return; } if (c.pc != 0x001B5F04u) [[unlikely]] return; }
L_001B5F04:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    set32(c.r[3], c.r[28].w[0] - 25540u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001B6044; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 11u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[3], c.r[3].w[0] + 3268u);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 4096ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001B5F6C; } }
    set32(c.r[3], 0u + 3u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    set32(c.r[3], c.r[28].w[0] - 25548u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[5].w[0]);
    c.budget -= 8;
L_001B5F6C:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 11u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[3], c.r[3].w[0] + 3268u);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 8192ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001B6044; } }
    set32(c.r[3], 0u + 4u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    set32(c.r[3], c.r[28].w[0] - 25548u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), 0u);  if (t) { goto L_001B6044; } }
L_001B5FB8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    set32(c.r[5], c.r[28].w[0] - 25532u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] + 10u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[3].sd[0] < 240ll ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001B6044; } }
    set32(c.r[3], 0u + 240u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[3], 0u + 2u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001B6044; } }
L_001B6004:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    set32(c.r[5], c.r[28].w[0] - 25532u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] - 10u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 13;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_001B6044; } }
    set32(c.r[3], 0u + 2u);
    st32((c.r[4].w[0]), 0u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_001B6044:
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_001B6048:
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_001B604C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B6060:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 11u)));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 386u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001B6094; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001B6124; } }
L_001B6094:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_001B6120; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001B60CC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001B60C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B611C; } }
L_001B60C0:
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43F00000u);
    st32((c.r[16].w[0] + 36u), c.r[3].w[0]);
    c.budget -= 3;
L_001B60CC:
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    c.f[0] = c.r[3].w[0];
    c.f[2] = 0u;
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[16].w[0] + 36u), c.f[0]);  if (t) { goto L_001B6100; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 329u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001B611C; } }
L_001B6100:
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 36u), 0u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 11u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B611Cu); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_002D(c, 122u, depth + 1u); else { c.pc = 0x001B5B80u; return; } if (c.pc != 0x001B611Cu) [[unlikely]] return; }
L_001B611C:
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_001B6120:
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_001B6124:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B6140:
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
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[16], c.r[17].w[0] + 320u);  if (t) { goto L_001B6178; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001B6368; } }
L_001B6178:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6180u);  if (depth < kMaxDepth) unit_0016(c, 129u, depth + 1u); else { c.pc = 0x0015B440u; return; } if (c.pc != 0x001B6180u) [[unlikely]] return; }
L_001B6180:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[2].d[0] = c.r[2].d[0] & 127ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6194u); st16((c.r[28].w[0] - 25520u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0016(c, 129u, depth + 1u); else { c.pc = 0x0015B440u; return; } if (c.pc != 0x001B6194u) [[unlikely]] return; }
L_001B6194:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[2].d[0] = c.r[2].d[0] & 127ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B61A8u); st16((c.r[28].w[0] - 25518u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0016(c, 129u, depth + 1u); else { c.pc = 0x0015B440u; return; } if (c.pc != 0x001B61A8u) [[unlikely]] return; }
L_001B61A8:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[3].d[0] = c.r[3].d[0] & 127ull;
    st16((c.r[28].w[0] - 25516u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 166u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st16((c.r[17].w[0] + 166u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 166u)));
    c.r[4].d[0] = c.r[4].d[0] & 15ull;
    st16((c.r[17].w[0] + 166u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    c.budget -= 14;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_001B6364; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001B6210; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001B61FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B6360; } }
L_001B61FC:
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B620Cu); st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_002E(c, 84u, depth + 1u); else { c.pc = 0x001BA140u; return; } if (c.pc != 0x001B620Cu) [[unlikely]] return; }
L_001B620C:
    st16((c.r[16].w[0] + 72u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_001B6210:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 329u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001B62B4; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[4], c.r[28].w[0] - 25540u);
    set32(c.r[3], 0u + 12u);
    st8((c.r[5].w[0] + 643u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[4].w[0]), c.r[6].w[0]);
    st16((c.r[16].w[0] + 72u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 16u)));
    st16((c.r[16].w[0] + 18u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 20u)));
    st16((c.r[16].w[0] + 22u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 24u)));
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 28u)));
    st16((c.r[16].w[0] + 30u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 32u)));
    st16((c.r[16].w[0] + 34u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 36u)));
    st16((c.r[16].w[0] + 38u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 40u)));
    st16((c.r[16].w[0] + 42u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 44u)));
    st16((c.r[16].w[0] + 46u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 48u)));
    st16((c.r[16].w[0] + 50u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 52u)));
    st16((c.r[16].w[0] + 54u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 56u)));
    st16((c.r[16].w[0] + 58u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 60u)));
    c.budget -= 37;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 62u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001B6360; } }
L_001B62B4:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 72u)));
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 16u)));
    set32(c.r[6], c.r[3].w[0] + 18u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 18u)));
    c.r[3].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[5].w[0] + 1u);  if (t) { goto L_001B62EC; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001B6328; } }
    set32(c.r[3], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_001B62EC:
    st16((c.r[16].w[0] + 72u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 72u)));
    c.r[3].d[0] = c.r[3].sd[0] < 12ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001B6328; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], c.r[28].w[0] - 25540u);
    st8((c.r[4].w[0] + 643u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[5].w[0]);
    c.budget -= 10;
L_001B6328:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001B6340; } }
    set32(c.r[5], 0u + 59u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6340u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x00197670u; return; } if (c.pc != 0x001B6340u) [[unlikely]] return; }
L_001B6340:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.r[3].d[0] = c.r[3].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001B6360; } }
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_001B6360:
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_001B6364:
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_001B6368:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001B6380:
    set32(c.r[5], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 11u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 386u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001B63A4; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001B6424; } }
L_001B63A4:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_001B6420; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001B63DC; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001B63D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B641C; } }
L_001B63D0:
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43F00000u);
    st32((c.r[4].w[0] + 36u), c.r[3].w[0]);
    c.budget -= 3;
L_001B63DC:
    c.f[1] = ld32((c.r[4].w[0] + 36u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    c.f[0] = c.r[3].w[0];
    c.f[2] = 0u;
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[4].w[0] + 36u), c.f[0]);  if (t) { goto L_001B6410; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 329u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001B641C; } }
L_001B6410:
    set32(c.r[3], 0u + 2u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 36u), 0u);
    c.budget -= 3;
L_001B641C:
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_001B6420:
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_001B6424:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B6430:
    set32(c.r[6], ld32((c.r[28].w[0] - 26304u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 11u)));
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 386u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[3], c.r[4].w[0] + 320u);  if (t) { goto L_001B6664; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_001B6484; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[5], c.r[6].w[0] + 1u);  if (t) { goto L_001B646C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_001B6660; } }
    set32(c.r[5], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_001B646C:
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st32((c.r[3].w[0]), 0u);
    st32((c.r[3].w[0] + 4u), 0u);
    st32((c.r[3].w[0] + 8u), 0u);
    st32((c.r[3].w[0] + 12u), 0u);
    c.budget -= 6;
L_001B6484:
    set32(c.r[7], ld32((c.r[28].w[0] - 26304u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 11u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 386u)));
    c.budget -= 7;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_001B658C; } }
    c.f[1] = ld32((c.r[3].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3CA30000u);
    c.r[5].d[0] = c.r[5].d[0] | 55050ull;
    c.f[0] = c.r[5].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[2] = c.r[5].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[3].w[0]), c.f[0]);  if (t) { goto L_001B64D4; } }
    st32((c.r[3].w[0]), c.r[5].w[0]);
    c.budget -= 1;
L_001B64D4:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 11u)));
    set32(c.r[5], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[7], 0u + 90u);
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 388u)));
    mmi::div(c, 0, c.r[5].w[0], c.r[7].w[0]);
    c.r[5].d[0] = c.hi.d[0];
    c.r[6].d[0] = c.r[5].d[0] << 48;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.r[5].d[0] = c.r[6].sd[0] < 80ll ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[5].d[0] != 0ull; c.r[5].d[0] = c.r[6].sd[0] < 60ll ? 1ull : 0ull;  if (t) { goto L_001B6540; } }
    set32(c.r[5], c.r[7].w[0] - c.r[6].w[0]);
    c.f[0] = c.r[5].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[5].d[0] = c.r[5].d[0] | 52429ull;
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 4u), c.f[0]);  if (t) { goto L_001B658C; } }
    c.r[5].d[0] = c.r[6].sd[0] < 60ll ? 1ull : 0ull;
    c.budget -= 1;
L_001B6540:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[5], 0u + 60u);  if (t) { goto L_001B6558; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 4u), c.r[5].w[0]);  if (t) { goto L_001B658C; } }
    set32(c.r[5], 0u + 60u);
    c.budget -= 1;
L_001B6558:
    set32(c.r[5], c.r[5].w[0] - c.r[6].w[0]);
    c.f[0] = c.r[5].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3C8B0000u);
    c.r[6].d[0] = c.r[5].d[0] | 17302ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[6].w[0];
    c.f[0] = c.r[5].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 4u), c.f[0]);
    c.budget -= 13;
L_001B658C:
    set32(c.r[7], ld32((c.r[28].w[0] - 26304u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 11u)));
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 386u)));
    c.budget -= 7;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_001B65E0; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[5].d[0] = c.r[6].d[0] & 8ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_001B65D4; } }
    c.r[5].d[0] = c.r[6].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_001B65DC; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_001B65D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 8u), c.r[5].w[0]);  if (t) { goto L_001B65E0; } }
L_001B65DC:
    st32((c.r[3].w[0] + 8u), 0u);
    c.budget -= 1;
L_001B65E0:
    set32(c.r[6], ld32((c.r[28].w[0] - 26304u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 11u)));
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 386u)));
    c.r[5].d[0] = c.r[5].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_001B665C; } }
    c.f[1] = ld32((c.r[3].w[0] + 12u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3CA30000u);
    c.r[5].d[0] = c.r[5].d[0] | 55050ull;
    c.f[0] = c.r[5].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[2] = c.r[5].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[3].w[0] + 12u), c.f[0]);  if (t) { goto L_001B6630; } }
    st32((c.r[3].w[0] + 12u), c.r[5].w[0]);
    c.budget -= 1;
L_001B6630:
    c.f[1] = ld32((c.r[3].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[5].d[0] = c.r[5].d[0] | 52429ull;
    c.f[0] = c.r[5].w[0];
    c.f[2] = 0u;
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[3].w[0]), c.f[0]);  if (t) { goto L_001B665C; } }
    st32((c.r[3].w[0]), 0u);
    c.budget -= 1;
L_001B665C:
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_001B6660:
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_001B6664:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B6670:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == c.r[6].d[0]; set32(c.r[8], c.r[4].w[0] + 320u);  if (t) { goto L_001B66B4; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_001B6690; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_001B66F8; } }
L_001B6690:
    set32(c.r[5], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 11u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 386u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[6].d[0];  if (t) { goto L_001B66FC; } }
    set32(c.r[3], c.r[7].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[8].w[0]), 0u);
    c.budget -= 3;
L_001B66B4:
    c.f[1] = ld32((c.r[8].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[2] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[8].w[0]), c.f[0]);  if (t) { goto L_001B66F4; } }
    st32((c.r[8].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_001B66F4:
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_001B66F8:
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_001B66FC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B6710:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[4], 0u + 2u);
    c.budget -= 8;
    { const bool t = c.r[7].d[0] == c.r[4].d[0]; set32(c.r[3], c.r[16].w[0] + 320u);  if (t) { goto L_001B6848; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[4].d[0];  if (t) { goto L_001B6798; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_001B674C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_001B68C4; } }
L_001B674C:
    set32(c.r[6], ld32((c.r[28].w[0] - 26304u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 11u)));
    set32(c.r[4], 0u + 5u);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 386u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_001B68C8; } }
    set32(c.r[2], c.r[7].w[0] + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 20u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[3].w[0]), 0u);
    st32((c.r[3].w[0] + 4u), 0u);
    set32(c.r[5], 0u + 60u);
    st8((c.r[3].w[0] + 96u), static_cast<std::uint8_t>(0u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6790u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x001B6790u) [[unlikely]] return; }
L_001B6790:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B68C0; } }
L_001B6798:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001B67AC; } }
    set32(c.r[4], c.r[4].w[0] - 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 2;
L_001B67AC:
    c.f[1] = ld32((c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3CF50000u);
    c.r[4].d[0] = c.r[4].d[0] | 49807ull;
    c.f[0] = c.r[4].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[2] = c.r[4].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[3].w[0]), c.f[0]);  if (t) { goto L_001B67E0; } }
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.budget -= 1;
L_001B67E0:
    set32(c.r[6], ld32((c.r[28].w[0] - 26304u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 11u)));
    set32(c.r[4], 0u + 6u);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 386u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_001B6824; } }
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    set32(c.r[4], 0u + 1u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    c.r[6].d[0] = c.r[6].d[0] & 4ull;
    if (c.r[6].d[0] != 0) c.r[5].d[0] = c.r[4].d[0];
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 94u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_001B6828; } }
L_001B6824:
    st8((c.r[3].w[0] + 94u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_001B6828:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    c.r[3].d[0] = c.r[3].sd[0] < 60ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001B68C0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001B68C0; } }
L_001B6848:
    st8((c.r[3].w[0] + 94u), static_cast<std::uint8_t>(0u));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[4].d[0] = c.r[4].d[0] | 52429ull;
    c.f[2] = c.r[4].w[0];
    c.f[1] = 0u;
    set32(c.r[4], c.r[5].w[0] + 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[3].w[0] + 4u), c.f[0]);  if (t) { goto L_001B6884; } }
    st32((c.r[3].w[0] + 4u), 0u);
    c.budget -= 1;
L_001B6884:
    c.f[2] = ld32((c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[4].d[0] = c.r[4].d[0] | 52429ull;
    c.f[1] = c.r[4].w[0];
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[3].w[0]), c.f[1]);  if (t) { goto L_001B68C0; } }
    st32((c.r[3].w[0]), 0u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_001B68C0:
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_001B68C4:
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_001B68C8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B68E0:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[8].d[0] == c.r[5].d[0]; set32(c.r[3], c.r[4].w[0] + 320u);  if (t) { goto L_001B6AD8; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == c.r[5].d[0];  if (t) { goto L_001B6948; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_001B690C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_001B6B48; } }
L_001B690C:
    set32(c.r[7], ld32((c.r[28].w[0] - 26304u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 11u)));
    set32(c.r[5], 0u + 5u);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 386u)));
    c.budget -= 7;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_001B6B4C; } }
    set32(c.r[5], c.r[8].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[5], 0u + 20u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st32((c.r[3].w[0]), 0u);
    st32((c.r[3].w[0] + 4u), 0u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 96u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001B6B44; } }
L_001B6948:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001B695C; } }
    set32(c.r[5], c.r[5].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 2;
L_001B695C:
    c.f[1] = ld32((c.r[3].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3CF50000u);
    c.r[5].d[0] = c.r[5].d[0] | 49807ull;
    c.f[0] = c.r[5].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[2] = c.r[5].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[3].w[0]), c.f[0]);  if (t) { goto L_001B6990; } }
    st32((c.r[3].w[0]), c.r[5].w[0]);
    c.budget -= 1;
L_001B6990:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_001B6A2C; } }
    set32(c.r[7], ld32((c.r[28].w[0] - 26304u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 11u)));
    set32(c.r[5], 0u + 6u);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 386u)));
    c.budget -= 7;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_001B69E0; } }
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 166u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3DA30000u);
    c.r[5].d[0] = c.r[5].d[0] | 55050ull;
    c.f[0] = c.r[5].w[0];
    set32(c.r[5], c.r[6].w[0] + 1u);
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 4u), c.f[0]);  if (t) { goto L_001B69FC; } }
L_001B69E0:
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3CA30000u);
    c.r[5].d[0] = c.r[5].d[0] | 55050ull;
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[3].w[0] + 4u), c.f[0]);
    c.budget -= 7;
L_001B69FC:
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[5].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001B6AB8; } }
    st32((c.r[3].w[0] + 4u), c.r[5].w[0]);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 96u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_001B6AB8; } }
L_001B6A2C:
    set32(c.r[7], ld32((c.r[28].w[0] - 26304u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 11u)));
    set32(c.r[5], 0u + 6u);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 386u)));
    c.budget -= 7;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_001B6A70; } }
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 166u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3DA30000u);
    c.r[5].d[0] = c.r[5].d[0] | 55050ull;
    c.f[0] = c.r[5].w[0];
    set32(c.r[5], c.r[6].w[0] + 1u);
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 4u), c.f[0]);  if (t) { goto L_001B6A8C; } }
L_001B6A70:
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3CA30000u);
    c.r[5].d[0] = c.r[5].d[0] | 55050ull;
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[3].w[0] + 4u), c.f[0]);
    c.budget -= 7;
L_001B6A8C:
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3ECC0000u);
    c.r[5].d[0] = c.r[5].d[0] | 52429ull;
    c.f[1] = c.r[5].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001B6AB8; } }
    st32((c.r[3].w[0] + 4u), c.r[5].w[0]);
    st8((c.r[3].w[0] + 96u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_001B6AB8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 166u)));
    c.r[3].d[0] = c.r[3].sd[0] < 60ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001B6B44; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001B6B44; } }
L_001B6AD8:
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[5].d[0] = c.r[5].d[0] | 52429ull;
    c.f[2] = c.r[5].w[0];
    c.f[1] = 0u;
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[3].w[0] + 4u), c.f[0]);  if (t) { goto L_001B6B08; } }
    st32((c.r[3].w[0] + 4u), 0u);
    c.budget -= 1;
L_001B6B08:
    c.f[2] = ld32((c.r[3].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[5].d[0] = c.r[5].d[0] | 52429ull;
    c.f[1] = c.r[5].w[0];
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[3].w[0]), c.f[1]);  if (t) { goto L_001B6B44; } }
    st32((c.r[3].w[0]), 0u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_001B6B44:
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_001B6B48:
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_001B6B4C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B6B60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 320u);  if (t) { goto L_001B6B84; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001B6B84; } }
    set32(c.r[2], 0u + 320u);
    c.budget -= 1;
L_001B6B84:
    st32((c.r[29].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), c.r[2].w[0]);
    set32(c.r[2], 0u + 3u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[2].w[0]);
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[2], c.r[2].w[0] - 11392u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[2], c.r[2].w[0] - 11328u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 20u), 0u);
    set32(c.r[2], 0u + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20354u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] - 20416u);
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6BF8u); st32((c.r[29].w[0] + 24u), 0u);  if (depth < kMaxDepth) unit_001C(c, 21u, depth + 1u); else { c.pc = 0x00170680u; return; } if (c.pc != 0x001B6BF8u) [[unlikely]] return; }
L_001B6BF8:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001B6C10:
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
    set32(c.r[2], 0u + 3u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[0] = ld32((c.r[4].w[0] + 320u));
    c.f[1] = c.r[2].w[0];
    mmi::paddub(c.r[21], c.r[4], c.r[0]);
    set32(c.r[16], c.r[21].w[0] + 320u);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6C78u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x001B6C78u) [[unlikely]] return; }
L_001B6C78:
    st8((c.r[29].w[0] + 220u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6C90u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x001B6C90u) [[unlikely]] return; }
L_001B6C90:
    set32(c.r[30], c.r[29].w[0] + 221u);
    st8((c.r[30].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6CACu); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x001B6CACu) [[unlikely]] return; }
L_001B6CAC:
    set32(c.r[23], c.r[29].w[0] + 222u);
    st8((c.r[23].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6CC8u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x001B6CC8u) [[unlikely]] return; }
L_001B6CC8:
    set32(c.r[22], c.r[29].w[0] + 223u);
    st8((c.r[22].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[29].w[0] + 220u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 9u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 10u)));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001B6D24; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[2], c.r[2].w[0] - 11312u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[2], c.r[2].w[0] - 11088u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] - 20376u), c.r[2].w[0]);  if (t) { goto L_001B6D44; } }
L_001B6D24:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[2], c.r[2].w[0] - 11200u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[2], c.r[2].w[0] - 11056u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20376u), c.r[2].w[0]);
    c.budget -= 8;
L_001B6D44:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] - 20416u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6D54u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_002E(c, 81u, depth + 1u); else { c.pc = 0x001BA0E0u; return; } if (c.pc != 0x001B6D54u) [[unlikely]] return; }
L_001B6D54:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 10u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001B6D88; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[2], c.r[2].w[0] - 11024u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[2], c.r[2].w[0] - 10768u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);  if (t) { goto L_001B6DA8; } }
L_001B6D88:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[2], c.r[2].w[0] - 10896u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[2], c.r[2].w[0] - 10736u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    c.budget -= 8;
L_001B6DA8:
    set32(c.r[2], 0u + 8u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20354u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6DC8u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001C(c, 21u, depth + 1u); else { c.pc = 0x00170680u; return; } if (c.pc != 0x001B6DC8u) [[unlikely]] return; }
L_001B6DC8:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 11u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[3], c.r[2].w[0] - 31003u);
    set32(c.r[2], 0u + 6u);
    set32(c.r[6], c.r[7].w[0] << 5);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 8);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    if (c.r[3].d[0] != 0) c.r[18].d[0] = c.r[2].d[0];
    c.r[2].d[0] = c.r[3].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[7], 0u + 1u);  if (t) { goto L_001B6E14; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 640u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
L_001B6E14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B6E48; } }
    c.r[2].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B6E3C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 640u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 2ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
L_001B6E3C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B6E48; } }
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.budget -= 1;
L_001B6E48:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 10u)));
    set32(c.r[2], 0u + 3u);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    if (c.r[7].d[0] == 0) c.r[6].d[0] = c.r[2].d[0];
    set32(c.r[2], 0u + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[18], c.r[18].w[0] + c.r[6].w[0]);  if (t) { goto L_001B6E6C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001B6E70; } }
L_001B6E6C:
    set32(c.r[2], 0u + 320u);
    c.budget -= 1;
L_001B6E70:
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    set32(c.r[2], 0u + 10u);
    st32((c.r[29].w[0] + 196u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[29].w[0] + 200u), 0u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 7;
L_001B6E8C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_001B6EA8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 16716u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] - 20364u), c.r[2].w[0]);  if (t) { goto L_001B6EB8; } }
L_001B6EA8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 16720u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[2].w[0]);
    c.budget -= 4;
L_001B6EB8:
    set32(c.r[2], c.r[17].w[0] + c.r[18].w[0]);
    set32(c.r[3], c.r[2].w[0] << 4);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[2], c.r[2].w[0] - 10704u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[6].d[0] = ld16((c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[19], c.r[29].w[0] + 214u);
    set32(c.r[20], c.r[29].w[0] + 164u);
    st16((c.r[29].w[0] + 212u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[7].d[0] = ld16((c.r[2].w[0] + 2u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[6].w[0];
    c.r[3].d[0] = c.r[3].d[0] | 65300ull;
    st16((c.r[19].w[0]), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 4u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 212u)));
    set32(c.r[7], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[29].w[0] + 216u);
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0])));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 6u)));
    set32(c.r[7], c.r[7].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[29].w[0] + 218u);
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[6].d[0] = ld16((c.r[2].w[0] + 8u));
    st32((c.r[29].w[0] + 160u), c.r[6].w[0]);
    c.r[6].d[0] = ld16((c.r[2].w[0] + 10u));
    st32((c.r[20].w[0]), c.r[6].w[0]);
    set32(c.r[6], c.r[29].w[0] + 168u);
    st32((c.r[6].w[0]), c.r[3].w[0]);
    c.r[7].d[0] = ld16((c.r[2].w[0] + 12u));
    set32(c.r[6], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[7], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[29].w[0] + 176u);
    st32((c.r[6].w[0]), c.r[7].w[0]);
    c.r[6].d[0] = ld16((c.r[2].w[0] + 14u));
    set32(c.r[2], ld32((c.r[20].w[0])));
    set32(c.r[6], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[29].w[0] + 180u);
    st32((c.r[2].w[0]), c.r[6].w[0]);
    set32(c.r[2], c.r[29].w[0] + 184u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.f[0] = ld32((c.r[16].w[0]));
    c.budget -= 46;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6F70u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x001B6F70u) [[unlikely]] return; }
L_001B6F70:
    st8((c.r[29].w[0] + 220u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6F88u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x001B6F88u) [[unlikely]] return; }
L_001B6F88:
    st8((c.r[30].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6FA0u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x001B6FA0u) [[unlikely]] return; }
L_001B6FA0:
    st8((c.r[23].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6FB8u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x001B6FB8u) [[unlikely]] return; }
L_001B6FB8:
    st8((c.r[22].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[29].w[0] + 220u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 160u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 192u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 212u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20368u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6FF8u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x001B6FF8u) [[unlikely]] return; }
L_001B6FF8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B6E8Cu | kUnwind; return; } goto L_001B6E8C; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 10u)));
    set32(c.r[3], c.r[28].w[0] - 25540u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001B7130; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 166u)));
    c.r[1].d[0] = c.r[3].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001B7130; } }
    set32(c.r[2], 0u + 232u);
    st16((c.r[29].w[0] + 212u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 212u)));
    set32(c.r[3], c.r[28].w[0] - 25548u);
    set32(c.r[4], c.r[2].w[0] + 24u);
    set32(c.r[2], c.r[29].w[0] + 216u);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 10u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 236u);  if (t) { goto L_001B7088; } }
    set32(c.r[2], 0u + 216u);
    st16((c.r[19].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0])));
    set32(c.r[3], c.r[2].w[0] + 20u);
    set32(c.r[2], c.r[29].w[0] + 218u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001B709C; } }
    set32(c.r[2], 0u + 236u);
    c.budget -= 1;
L_001B7088:
    st16((c.r[19].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0])));
    set32(c.r[3], c.r[2].w[0] - 20u);
    set32(c.r[2], c.r[29].w[0] + 218u);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
L_001B709C:
    set32(c.r[2], 0u + 148u);
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[2], 0u + 206u);
    st32((c.r[20].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 160u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[8].d[0] = c.r[2].d[0] | 65300ull;
    set32(c.r[2], c.r[29].w[0] + 176u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    set32(c.r[3], c.r[3].w[0] + 24u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[9], ld32((c.r[20].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] - 20416u);
    set32(c.r[2], c.r[29].w[0] + 180u);
    set32(c.r[9], c.r[9].w[0] + 10u);
    st32((c.r[2].w[0]), c.r[9].w[0]);
    set32(c.r[2], c.r[29].w[0] + 168u);
    st32((c.r[2].w[0]), c.r[8].w[0]);
    set32(c.r[2], c.r[29].w[0] + 184u);
    st32((c.r[2].w[0]), c.r[8].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] - 16720u)));
    set32(c.r[7], c.r[28].w[0] - 30384u);
    set32(c.r[6], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[29].w[0] + 192u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[7].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), c.r[5].w[0]);
    set32(c.r[3], c.r[29].w[0] + 212u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 37;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7130u); st32((c.r[1].w[0] - 20368u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x001B7130u) [[unlikely]] return; }
L_001B7130:
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
L_001B7160:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    set32(c.r[6], ld32((c.r[1].w[0] - 16720u)));
    set32(c.r[2], 0u + 3u);
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), 0u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.budget -= 20;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[2], 0u + 320u);  if (t) { goto L_001B71BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001B71BC; } }
    set32(c.r[2], 0u + 320u);
    c.budget -= 1;
L_001B71BC:
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    set32(c.r[2], c.r[28].w[0] - 25532u);
    c.f[0] = ld32((c.r[4].w[0] + 36u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B71E4u); c.f[12] = fp::sub(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x001B71E4u) [[unlikely]] return; }
L_001B71E4:
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    st32((c.r[29].w[0] + 100u), c.r[2].w[0]);
    set32(c.r[3], 0u + 5u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[29].w[0] + 104u), 0u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 513u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], 0u + 13u);  if (t) { goto L_001B7230; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[17], 0u + 14u);  if (t) { goto L_001B7224; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B722C; } }
    set32(c.r[17], 0u + 14u);
    c.budget -= 1;
L_001B7224:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[1].d[0] = 0ull < c.r[17].d[0] ? 1ull : 0ull;  if (t) { goto L_001B7234; } }
L_001B722C:
    set32(c.r[17], 0u + 13u);
    c.budget -= 1;
L_001B7230:
    c.r[1].d[0] = 0ull < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_001B7234:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_001B7308; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[18], c.r[2].w[0] - 10512u);
    c.budget -= 2;
L_001B7244:
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[11], c.r[29].w[0] + 122u);
    set32(c.r[2], c.r[29].w[0] + 68u);
    st16((c.r[29].w[0] + 120u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[9].d[0] = ld16((c.r[18].w[0] + 2u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65300ull;
    set32(c.r[8], c.r[28].w[0] - 30376u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[11].w[0]), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 4u)));
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 120u)));
    set32(c.r[7], c.r[29].w[0] + 64u);
    set32(c.r[6], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[29].w[0] + 120u);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    st16((c.r[29].w[0] + 124u), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[11].w[0])));
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 6u)));
    set32(c.r[4], c.r[4].w[0] - 20416u);
    set32(c.r[9], c.r[10].w[0] + c.r[9].w[0]);
    st16((c.r[29].w[0] + 126u), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld16((c.r[18].w[0] + 8u));
    st32((c.r[29].w[0] + 64u), c.r[9].w[0]);
    c.r[9].d[0] = ld16((c.r[18].w[0] + 10u));
    st32((c.r[2].w[0]), c.r[9].w[0]);
    st32((c.r[29].w[0] + 72u), c.r[3].w[0]);
    c.r[10].d[0] = ld16((c.r[18].w[0] + 12u));
    set32(c.r[9], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    st32((c.r[29].w[0] + 80u), c.r[9].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[9].d[0] = ld16((c.r[18].w[0] + 14u));
    st32((c.r[1].w[0] - 20380u), c.r[8].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[9].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 84u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[29].w[0] + 88u), c.r[3].w[0]);
    c.budget -= 45;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B72F8u); st32((c.r[1].w[0] - 20368u), c.r[5].w[0]);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x001B72F8u) [[unlikely]] return; }
L_001B72F8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B7244u | kUnwind; return; } goto L_001B7244; } }
L_001B7308:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001B7320:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 11u)));
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[3], c.r[3].w[0] + 26144u);
    set32(c.r[17], c.r[19].w[0] + 320u);
    set32(c.r[4], c.r[5].w[0] << 5);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 8);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 17;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[18], c.r[0], c.r[0]);  if (t) { goto L_001B7488; } }
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(12ll) ? 1ull : 0ull;
    c.budget -= 1;
L_001B7368:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[18].w[0] + 1u);  if (t) { goto L_001B747C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], c.r[4].w[0] + 13024u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x001B4000u < 16384u) { entry = entries_002D[(t - 0x001B4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001B7390:
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B739Cu); mmi::paddub(c.r[5], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_002D(c, 199u, depth + 1u); else { c.pc = 0x001B74F0u; return; } if (c.pc != 0x001B739Cu) [[unlikely]] return; }
L_001B739C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B7478; } }
L_001B73A4:
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B73B0u); mmi::paddub(c.r[5], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_002D(c, 199u, depth + 1u); else { c.pc = 0x001B74F0u; return; } if (c.pc != 0x001B73B0u) [[unlikely]] return; }
L_001B73B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B7478; } }
L_001B73B8:
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B73C4u); mmi::paddub(c.r[5], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_002D(c, 199u, depth + 1u); else { c.pc = 0x001B74F0u; return; } if (c.pc != 0x001B73C4u) [[unlikely]] return; }
L_001B73C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B7478; } }
L_001B73CC:
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B73D8u); mmi::paddub(c.r[5], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_002D(c, 199u, depth + 1u); else { c.pc = 0x001B74F0u; return; } if (c.pc != 0x001B73D8u) [[unlikely]] return; }
L_001B73D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B7478; } }
L_001B73E0:
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B73ECu); mmi::paddub(c.r[5], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_002D(c, 199u, depth + 1u); else { c.pc = 0x001B74F0u; return; } if (c.pc != 0x001B73ECu) [[unlikely]] return; }
L_001B73EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B7478; } }
L_001B73F4:
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7400u); mmi::paddub(c.r[5], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_002D(c, 199u, depth + 1u); else { c.pc = 0x001B74F0u; return; } if (c.pc != 0x001B7400u) [[unlikely]] return; }
L_001B7400:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B7478; } }
L_001B7408:
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7414u); mmi::paddub(c.r[5], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_002D(c, 203u, depth + 1u); else { c.pc = 0x001B77E0u; return; } if (c.pc != 0x001B7414u) [[unlikely]] return; }
L_001B7414:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B7478; } }
L_001B741C:
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7428u); mmi::paddub(c.r[5], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_002D(c, 203u, depth + 1u); else { c.pc = 0x001B77E0u; return; } if (c.pc != 0x001B7428u) [[unlikely]] return; }
L_001B7428:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B7478; } }
L_001B7430:
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B743Cu); mmi::paddub(c.r[5], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_002D(c, 199u, depth + 1u); else { c.pc = 0x001B74F0u; return; } if (c.pc != 0x001B743Cu) [[unlikely]] return; }
L_001B743C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B7478; } }
L_001B7444:
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7450u); mmi::paddub(c.r[5], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_002D(c, 199u, depth + 1u); else { c.pc = 0x001B74F0u; return; } if (c.pc != 0x001B7450u) [[unlikely]] return; }
L_001B7450:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B7478; } }
L_001B7458:
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7464u); mmi::paddub(c.r[5], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_002D(c, 208u, depth + 1u); else { c.pc = 0x001B7D70u; return; } if (c.pc != 0x001B7464u) [[unlikely]] return; }
L_001B7464:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B7478; } }
L_001B746C:
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7478u); mmi::paddub(c.r[5], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_002E(c, 6u, depth + 1u); else { c.pc = 0x001B8230u; return; } if (c.pc != 0x001B7478u) [[unlikely]] return; }
L_001B7478:
    set32(c.r[3], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_001B747C:
    c.r[18].d[0] = c.r[3].d[0] << 48;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);
    c.budget -= 3;
L_001B7488:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 72u)));
    c.r[5].d[0] = c.r[18].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    set32(c.r[3], c.r[4].w[0] + 1u);
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(12ll) ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B7368u | kUnwind; return; } goto L_001B7368; } }
    c.r[3].d[0] = c.r[4].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001B74D0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8435u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (t) { goto L_001B74C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B74C4u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_002E(c, 13u, depth + 1u); else { c.pc = 0x001B87C0u; return; } if (c.pc != 0x001B74C4u) [[unlikely]] return; }
L_001B74C4:
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 1;
L_001B74C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B74D0u);  if (depth < kMaxDepth) unit_002E(c, 17u, depth + 1u); else { c.pc = 0x001B8A90u; return; } if (c.pc != 0x001B74D0u) [[unlikely]] return; }
L_001B74D0:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001B74F0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    set32(c.r[7], ld32((c.r[1].w[0] - 16720u)));
    set32(c.r[6], 0u + 3u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 5u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[7].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.budget -= 23;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[8], c.r[4].w[0] + 320u);  if (t) { goto L_001B7554; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001B7558; } }
L_001B7554:
    set32(c.r[2], 0u + 320u);
    c.budget -= 1;
L_001B7558:
    st32((c.r[29].w[0] + 128u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    set32(c.r[2], c.r[28].w[0] - 25532u);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[4].d[0] = c.r[5].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[18], c.r[8].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[20], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[2], c.r[2].w[0] - 10288u);
    set32(c.r[3], 0u - c.r[3].w[0]);
    st32((c.r[29].w[0] + 132u), c.r[3].w[0]);
    set32(c.r[19], c.r[2].w[0] + c.r[20].w[0]);
    st32((c.r[29].w[0] + 136u), 0u);
    c.budget -= 21;
L_001B75AC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_001B75E4; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 18u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x66660000u);
    c.r[2].d[0] = c.r[2].d[0] | 26215ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] >> 31);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_001B7600; } }
L_001B75E4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 18u)));
    set32(c.r[2], 0u + 10u);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 7;
L_001B7600:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; c.r[3].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_001B7618; } }
    c.r[2].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_001B76DC; }
    c.budget -= 1;
L_001B7618:
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    st16((c.r[29].w[0] + 152u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 88u);
    set32(c.r[6], c.r[29].w[0] + 154u);
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 152u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[8], c.r[4].w[0] - 10140u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[2], c.r[29].w[0] + 100u);
    set32(c.r[4], c.r[5].w[0] + 20u);
    st16((c.r[29].w[0] + 156u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65300ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[7], c.r[29].w[0] + 96u);
    set32(c.r[9], c.r[9].w[0] + 20u);
    st16((c.r[29].w[0] + 158u), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld16((c.r[19].w[0] + 4u));
    set32(c.r[6], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[29].w[0] + 152u);
    set32(c.r[4], c.r[4].w[0] - 20416u);
    set32(c.r[9], c.r[9].w[0] + c.r[17].w[0]);
    st32((c.r[29].w[0] + 96u), c.r[9].w[0]);
    c.r[9].d[0] = ld16((c.r[19].w[0] + 6u));
    st32((c.r[2].w[0]), c.r[9].w[0]);
    st32((c.r[29].w[0] + 104u), c.r[3].w[0]);
    set32(c.r[9], ld32((c.r[29].w[0] + 96u)));
    set32(c.r[9], c.r[9].w[0] + 20u);
    st32((c.r[29].w[0] + 112u), c.r[9].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[1].w[0] - 20380u), c.r[8].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[7].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] + 10u);
    st32((c.r[1].w[0] - 20392u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[29].w[0] + 116u), c.r[2].w[0]);
    st32((c.r[1].w[0] - 20368u), c.r[5].w[0]);
    c.budget -= 47;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B76D4u); st32((c.r[29].w[0] + 120u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x001B76D4u) [[unlikely]] return; }
L_001B76D4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 2;
L_001B76DC:
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B75ACu | kUnwind; return; } goto L_001B75AC; } }
    c.r[3].d[0] = ld16((c.r[19].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[2], c.r[2].w[0] - 10286u);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    st16((c.r[29].w[0] + 152u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].d[0] = ld16((c.r[2].w[0]));
    set32(c.r[5], c.r[29].w[0] + 154u);
    set32(c.r[10], c.r[29].w[0] + 100u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[2], c.r[2].w[0] - 10284u);
    set32(c.r[3], c.r[2].w[0] + c.r[20].w[0]);
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[2], c.r[2].w[0] - 10282u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 152u)));
    set32(c.r[8], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[6], c.r[29].w[0] + 96u);
    set32(c.r[2], c.r[4].w[0] + 19u);
    st16((c.r[29].w[0] + 156u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[11].d[0] = c.r[2].d[0] | 65300ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[7], c.r[2].w[0] - 10144u);
    set32(c.r[2], c.r[4].w[0] + 19u);
    st16((c.r[29].w[0] + 158u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[9].d[0] = ld16((c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] - 20416u);
    set32(c.r[5], c.r[29].w[0] + 128u);
    set32(c.r[2], c.r[9].w[0] + 40u);
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[8].w[0]));
    set32(c.r[3], c.r[29].w[0] + 152u);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    st32((c.r[29].w[0] + 104u), c.r[11].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 96u)));
    set32(c.r[2], c.r[2].w[0] + 20u);
    st32((c.r[29].w[0] + 112u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[10].w[0])));
    st32((c.r[1].w[0] - 20380u), c.r[7].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] + 10u);
    st32((c.r[1].w[0] - 20392u), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[29].w[0] + 116u), c.r[2].w[0]);
    st32((c.r[1].w[0] - 20368u), c.r[3].w[0]);
    c.budget -= 52;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B77B8u); st32((c.r[29].w[0] + 120u), c.r[11].w[0]);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x001B77B8u) [[unlikely]] return; }
L_001B77B8:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_001B77E0:
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
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    set32(c.r[7], ld32((c.r[1].w[0] - 16720u)));
    set32(c.r[6], 0u + 3u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 5u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[7].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.budget -= 27;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[16], c.r[4].w[0] + 320u);  if (t) { goto L_001B7854; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001B7858; } }
L_001B7854:
    set32(c.r[2], 0u + 320u);
    c.budget -= 1;
L_001B7858:
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    c.r[20].d[0] = c.r[5].d[0] << 48;
    set32(c.r[2], 0u + 6u);
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[20].d[0] != c.r[2].d[0];  if (t) { goto L_001B788C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    set32(c.r[2], c.r[28].w[0] - 25532u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - c.r[2].w[0]);  if (t) { goto L_001B78A8; } }
L_001B788C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    set32(c.r[3], c.r[28].w[0] - 25532u);
    set32(c.r[2], 0u + 12u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 7;
L_001B78A8:
    st32((c.r[29].w[0] + 196u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[18], c.r[2].w[0] - 10128u);
    st32((c.r[29].w[0] + 200u), 0u);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 5;
L_001B78BC:
    c.r[3].d[0] = ld16((c.r[18].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[23], c.r[29].w[0] + 218u);
    set32(c.r[22], c.r[29].w[0] + 164u);
    st16((c.r[29].w[0] + 216u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 2u));
    c.r[2].d[0] = c.r[2].d[0] | 65300ull;
    set32(c.r[8], c.r[28].w[0] - 30372u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[7], c.r[29].w[0] + 160u);
    st16((c.r[23].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 4u)));
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 216u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[3].w[0] - 20416u);
    set32(c.r[3], c.r[29].w[0] + 220u);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[23].w[0])));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 6u)));
    set32(c.r[6], c.r[29].w[0] + 192u);
    set32(c.r[5], c.r[29].w[0] + 216u);
    set32(c.r[9], c.r[9].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[29].w[0] + 222u);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 8u));
    st32((c.r[29].w[0] + 160u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[18].w[0] + 10u));
    st32((c.r[22].w[0]), c.r[3].w[0]);
    st32((c.r[29].w[0] + 168u), c.r[2].w[0]);
    c.r[9].d[0] = ld16((c.r[18].w[0] + 12u));
    set32(c.r[3], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[9], c.r[3].w[0] + c.r[9].w[0]);
    set32(c.r[3], c.r[29].w[0] + 176u);
    st32((c.r[3].w[0]), c.r[9].w[0]);
    c.r[9].d[0] = ld16((c.r[18].w[0] + 14u));
    set32(c.r[3], ld32((c.r[22].w[0])));
    set32(c.r[9], c.r[3].w[0] + c.r[9].w[0]);
    set32(c.r[3], c.r[29].w[0] + 180u);
    st32((c.r[3].w[0]), c.r[9].w[0]);
    st32((c.r[1].w[0] - 20380u), c.r[8].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[7].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[29].w[0] + 184u), c.r[2].w[0]);
    c.budget -= 49;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7980u); st32((c.r[1].w[0] - 20368u), c.r[5].w[0]);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x001B7980u) [[unlikely]] return; }
L_001B7980:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B78BCu | kUnwind; return; } goto L_001B78BC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[18], c.r[3].w[0] - 10096u);
    set32(c.r[3], c.r[20].w[0] << 2);
    set32(c.r[19], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[30], c.r[20].w[0] + 1u);
    mmi::paddub(c.r[21], c.r[0], c.r[0]);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 7;
L_001B79AC:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_001B79E8; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 18u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x51EB0000u);
    c.r[3].d[0] = c.r[3].d[0] | 34079ull;
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] >> 31);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[3].d[0] & 65535ull;  if (t) { goto L_001B7C48; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_001B79E8:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_001B7A38; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 18u)));
    set32(c.r[4], 0u + 100u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x66660000u);
    c.r[3].d[0] = c.r[3].d[0] | 26215ull;
    mmi::div(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] >> 31);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 17;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[3].d[0] & 65535ull;  if (t) { goto L_001B7C48; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_001B7A38:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != c.r[3].d[0];  if (t) { goto L_001B7A74; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 18u)));
    set32(c.r[4], 0u + 100u);
    set32(c.r[3], 0u + 10u);
    mmi::div(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 13;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[3].d[0] & 65535ull;  if (t) { goto L_001B7C48; } }
L_001B7A74:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 72u)));
    c.r[1].d[0] = c.r[30].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], 0u + 3u);  if (t) { goto L_001B7B3C; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[21].d[0] != c.r[3].d[0];  if (t) { goto L_001B7AD4; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 80u)));
    set32(c.r[4], 0u + 100u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x66660000u);
    c.r[3].d[0] = c.r[3].d[0] | 26215ull;
    mmi::div(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] >> 31);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 17;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[3].d[0] & 65535ull;  if (t) { goto L_001B7B08; } }
L_001B7AD4:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 80u)));
    set32(c.r[4], 0u + 100u);
    set32(c.r[3], 0u + 10u);
    mmi::div(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.r[6].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 13;
L_001B7B08:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 80u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 25520u)));
    set32(c.r[3], 0u + 100u);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    st16((c.r[16].w[0] + 80u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 80u)));
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 80u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001B7C48; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 1;
L_001B7B3C:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 6u);  if (t) { goto L_001B7BD8; } }
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != c.r[3].d[0];  if (t) { goto L_001B7B90; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 74u)));
    set32(c.r[4], 0u + 100u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x66660000u);
    c.r[3].d[0] = c.r[3].d[0] | 26215ull;
    mmi::div(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] >> 31);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    c.budget -= 16;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_001B7BCC; } }
L_001B7B90:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 76u)));
    set32(c.r[4], 0u + 100u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x66660000u);
    c.r[3].d[0] = c.r[3].d[0] | 26215ull;
    mmi::div(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] >> 31);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 15;
L_001B7BCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[3].d[0] & 65535ull;  if (t) { goto L_001B7C48; } }
    set32(c.r[3], 0u + 6u);
    c.budget -= 1;
L_001B7BD8:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != c.r[3].d[0];  if (t) { goto L_001B7C14; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 74u)));
    set32(c.r[4], 0u + 100u);
    set32(c.r[3], 0u + 10u);
    mmi::div(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 13;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[3].d[0] & 65535ull;  if (t) { goto L_001B7C44; } }
L_001B7C14:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 76u)));
    set32(c.r[4], 0u + 100u);
    set32(c.r[3], 0u + 10u);
    mmi::div(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.r[6].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 12;
L_001B7C44:
    c.budget -= 1;
L_001B7C48:
    c.r[1].d[0] = c.r[21].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001B7C70; } }
    c.r[3].d[0] = c.r[6].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001B7C70; } }
    c.r[3].d[0] = c.r[17].d[0] & 65535ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[21], c.r[21].w[0] + 1u);  goto L_001B7D2C; }
    c.budget -= 1;
L_001B7C70:
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    c.r[3].d[0] = c.r[6].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[9], c.r[2].w[0] << 2);
    st32((c.r[29].w[0] + 160u), c.r[4].w[0]);
    c.r[2].d[0] = ld16((c.r[18].w[0] + 2u));
    set32(c.r[8], 0u + 88u);
    set32(c.r[7], c.r[28].w[0] - 30372u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[22].w[0]), c.r[2].w[0]);
    c.r[11].d[0] = ld16((c.r[18].w[0] + 4u));
    set32(c.r[10], ld32((c.r[29].w[0] + 160u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] - 20416u);
    set32(c.r[2], c.r[29].w[0] + 176u);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[2].w[0]), c.r[10].w[0]);
    c.r[10].d[0] = ld16((c.r[18].w[0] + 6u));
    set32(c.r[2], ld32((c.r[22].w[0])));
    set32(c.r[6], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[29].w[0] + 192u);
    set32(c.r[3], c.r[29].w[0] + 216u);
    set32(c.r[10], c.r[2].w[0] + c.r[10].w[0]);
    set32(c.r[2], c.r[29].w[0] + 180u);
    st32((c.r[2].w[0]), c.r[10].w[0]);
    st16((c.r[29].w[0] + 216u), static_cast<std::uint16_t>(c.r[9].w[0]));
    st16((c.r[23].w[0]), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 216u)));
    c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[8], c.r[2].w[0] + 20u);
    set32(c.r[2], c.r[29].w[0] + 220u);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[23].w[0])));
    set32(c.r[8], c.r[2].w[0] + 20u);
    set32(c.r[2], c.r[29].w[0] + 222u);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[8].w[0]));
    st32((c.r[1].w[0] - 20380u), c.r[7].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 46;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7D28u); st32((c.r[1].w[0] - 20368u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x001B7D28u) [[unlikely]] return; }
L_001B7D28:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 1;
L_001B7D2C:
    c.r[3].d[0] = c.r[21].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B79ACu | kUnwind; return; } goto L_001B79AC; } }
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
L_001B7D70:
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
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    set32(c.r[6], ld32((c.r[1].w[0] - 16720u)));
    mmi::paddub(c.r[19], c.r[5], c.r[0]);
    set32(c.r[5], 0u + 3u);
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 5u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.budget -= 28;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[16], c.r[4].w[0] + 320u);  if (t) { goto L_001B7DE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001B7DEC; } }
L_001B7DE8:
    set32(c.r[2], 0u + 320u);
    c.budget -= 1;
L_001B7DEC:
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[18], c.r[2].w[0] - 10048u);
    set32(c.r[3], c.r[28].w[0] - 25532u);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    set32(c.r[2], 0u - c.r[2].w[0]);
    st32((c.r[29].w[0] + 196u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 200u), 0u);
    c.budget -= 12;
L_001B7E1C:
    c.r[3].d[0] = ld16((c.r[18].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[22], c.r[29].w[0] + 218u);
    set32(c.r[30], c.r[29].w[0] + 220u);
    st16((c.r[29].w[0] + 216u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 2u));
    set32(c.r[23], c.r[29].w[0] + 222u);
    set32(c.r[20], c.r[29].w[0] + 164u);
    c.r[2].d[0] = c.r[2].d[0] | 65300ull;
    st16((c.r[22].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 4u)));
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 216u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[3].w[0] - 20416u);
    set32(c.r[8], c.r[28].w[0] - 30368u);
    set32(c.r[3], c.r[9].w[0] + c.r[10].w[0]);
    st16((c.r[30].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0])));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 6u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[7], c.r[29].w[0] + 160u);
    set32(c.r[6], c.r[29].w[0] + 192u);
    set32(c.r[3], c.r[9].w[0] + c.r[3].w[0]);
    st16((c.r[23].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 8u));
    set32(c.r[5], c.r[29].w[0] + 216u);
    st32((c.r[29].w[0] + 160u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[18].w[0] + 10u));
    st32((c.r[20].w[0]), c.r[3].w[0]);
    set32(c.r[3], c.r[29].w[0] + 168u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[9].d[0] = ld16((c.r[18].w[0] + 12u));
    set32(c.r[3], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[9], c.r[3].w[0] + c.r[9].w[0]);
    set32(c.r[3], c.r[29].w[0] + 176u);
    st32((c.r[3].w[0]), c.r[9].w[0]);
    c.r[9].d[0] = ld16((c.r[18].w[0] + 14u));
    set32(c.r[3], ld32((c.r[20].w[0])));
    set32(c.r[9], c.r[3].w[0] + c.r[9].w[0]);
    set32(c.r[3], c.r[29].w[0] + 180u);
    st32((c.r[3].w[0]), c.r[9].w[0]);
    set32(c.r[3], c.r[29].w[0] + 184u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    st32((c.r[1].w[0] - 20380u), c.r[8].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[7].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 51;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7EE8u); st32((c.r[1].w[0] - 20368u), c.r[5].w[0]);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x001B7EE8u) [[unlikely]] return; }
L_001B7EE8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B7E1Cu | kUnwind; return; } goto L_001B7E1C; } }
    c.r[3].d[0] = c.r[19].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[19], c.r[16].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[18], c.r[3].w[0] - 10016u);
    mmi::paddub(c.r[21], c.r[0], c.r[0]);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 8;
L_001B7F18:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_001B7F54; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 18u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x51EB0000u);
    c.r[3].d[0] = c.r[3].d[0] | 34079ull;
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] >> 31);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[3].d[0] & 65535ull;  if (t) { [[clang::musttail]] return unit_002E(c, 4u, depth); } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_001B7F54:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_001B7FA4; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 18u)));
    set32(c.r[4], 0u + 100u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x66660000u);
    c.r[3].d[0] = c.r[3].d[0] | 26215ull;
    mmi::div(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] >> 31);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 17;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[3].d[0] & 65535ull;  if (t) { [[clang::musttail]] return unit_002E(c, 4u, depth); } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_001B7FA4:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != c.r[3].d[0];  if (t) { goto L_001B7FE0; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 18u)));
    set32(c.r[4], 0u + 100u);
    set32(c.r[3], 0u + 10u);
    mmi::div(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 13;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[3].d[0] & 65535ull;  if (t) { [[clang::musttail]] return unit_002E(c, 4u, depth); } }
L_001B7FE0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 72u)));
    c.r[1].d[0] = c.r[3].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u + 3u);  if (t) { [[clang::musttail]] return unit_002E(c, 3u, depth); } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[21].d[0] != c.r[3].d[0];  if (t) { [[clang::musttail]] return unit_002E(c, 2u, depth); } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 84u)));
    c.budget -= 1;
    [[clang::musttail]] return unit_002E(c, 1u, depth);
}

}
