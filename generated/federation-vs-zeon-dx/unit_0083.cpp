#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0083[4096] = {
    1, 2, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 8, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0,
    0, 0, 0, 0, 10, 0, 0, 0, 11, 12, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 16, 17, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 26, 0, 0, 0, 27, 0, 0, 28, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 30, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    38, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 44,
    0, 45, 0, 0, 0, 46, 0, 0, 47, 0, 48, 0, 0, 49, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 51, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 58, 0, 59, 0, 0, 0, 0, 0, 60, 0, 61, 0, 0, 0, 0, 0, 62, 0, 63, 0, 0, 0,
    0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 67, 0, 68, 0, 0, 0, 69, 0, 0, 70,
    0, 71, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 75, 0, 0, 76, 0, 77, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0,
    88, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 90, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 93, 0, 0, 0, 0, 94, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 98, 0, 0, 0,
    0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0,
    0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 113, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0,
    115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 134, 0, 135, 0, 0, 0, 0, 0, 136, 0, 137, 0, 0, 0, 0, 0, 138, 0, 139, 0,
    0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 151, 0, 152, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 154, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0, 0, 163, 0, 0, 0,
    164, 0, 0, 0, 165, 0, 0, 0, 166, 0, 0, 0, 167, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 169, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 173,
    0, 0, 0, 0, 0, 0, 0, 174, 0, 175, 0, 0, 0, 0, 0, 0, 176, 0, 177, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 179, 0, 0,
    0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 181, 0, 182, 0, 0, 0, 0, 0, 0, 183, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 186, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0, 193, 0,
    0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 202, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 208, 0, 209, 0, 0, 0, 0, 210, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0,
    0, 0, 213, 0, 214, 0, 0, 0, 0, 215, 0, 216, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 218, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 227, 0, 0, 0, 0, 228, 0, 229, 0, 230,
    0, 0, 0, 231, 0, 232, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 235, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 237, 0, 0, 0, 0, 0, 238,
    0, 239, 0, 0, 240, 0, 241, 0, 0, 242, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 245, 0, 0, 246, 0, 247,
    0, 0, 248, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 252, 0, 253, 0, 0, 254, 0, 255, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 261, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0,
    264, 0, 0, 265, 0, 266, 0, 0, 267, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 270, 0, 0, 271, 0, 272,
    0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0083(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0030C000;
    case 2u: goto L_0030C004;
    case 3u: goto L_0030C01C;
    case 4u: goto L_0030C088;
    case 5u: goto L_0030C098;
    case 6u: goto L_0030C0AC;
    case 7u: goto L_0030C0E4;
    case 8u: goto L_0030C0F8;
    case 9u: goto L_0030C178;
    case 10u: goto L_0030C190;
    case 11u: goto L_0030C1A0;
    case 12u: goto L_0030C1A4;
    case 13u: goto L_0030C1C0;
    case 14u: goto L_0030C21C;
    case 15u: goto L_0030C288;
    case 16u: goto L_0030C2AC;
    case 17u: goto L_0030C2B0;
    case 18u: goto L_0030C2C0;
    case 19u: goto L_0030C324;
    case 20u: goto L_0030C33C;
    case 21u: goto L_0030C350;
    case 22u: goto L_0030C380;
    case 23u: goto L_0030C3B0;
    case 24u: goto L_0030C3C4;
    case 25u: goto L_0030C400;
    case 26u: goto L_0030C488;
    case 27u: goto L_0030C498;
    case 28u: goto L_0030C4A4;
    case 29u: goto L_0030C4AC;
    case 30u: goto L_0030C584;
    case 31u: goto L_0030C59C;
    case 32u: goto L_0030C5CC;
    case 33u: goto L_0030C5E0;
    case 34u: goto L_0030C630;
    case 35u: goto L_0030C650;
    case 36u: goto L_0030C664;
    case 37u: goto L_0030C6C4;
    case 38u: goto L_0030C700;
    case 39u: goto L_0030C714;
    case 40u: goto L_0030C798;
    case 41u: goto L_0030C7D0;
    case 42u: goto L_0030CB20;
    case 43u: goto L_0030CB70;
    case 44u: goto L_0030CB7C;
    case 45u: goto L_0030CB84;
    case 46u: goto L_0030CB94;
    case 47u: goto L_0030CBA0;
    case 48u: goto L_0030CBA8;
    case 49u: goto L_0030CBB4;
    case 50u: goto L_0030CBC4;
    case 51u: goto L_0030CD04;
    case 52u: goto L_0030CD0C;
    case 53u: goto L_0030CD30;
    case 54u: goto L_0030CDE4;
    case 55u: goto L_0030CE34;
    case 56u: goto L_0030CF38;
    case 57u: goto L_0030CF90;
    case 58u: goto L_0030CFA8;
    case 59u: goto L_0030CFB0;
    case 60u: goto L_0030CFC8;
    case 61u: goto L_0030CFD0;
    case 62u: goto L_0030CFE8;
    case 63u: goto L_0030CFF0;
    case 64u: goto L_0030D010;
    case 65u: goto L_0030D09C;
    case 66u: goto L_0030D0CC;
    case 67u: goto L_0030D0D8;
    case 68u: goto L_0030D0E0;
    case 69u: goto L_0030D0F0;
    case 70u: goto L_0030D0FC;
    case 71u: goto L_0030D104;
    case 72u: goto L_0030D110;
    case 73u: goto L_0030D1E0;
    case 74u: goto L_0030D220;
    case 75u: goto L_0030D230;
    case 76u: goto L_0030D23C;
    case 77u: goto L_0030D244;
    case 78u: goto L_0030D250;
    case 79u: goto L_0030D320;
    case 80u: goto L_0030D430;
    case 81u: goto L_0030D440;
    case 82u: goto L_0030D5A4;
    case 83u: goto L_0030D630;
    case 84u: goto L_0030D640;
    case 85u: goto L_0030D6A0;
    case 86u: goto L_0030D6DC;
    case 87u: goto L_0030D764;
    case 88u: goto L_0030D780;
    case 89u: goto L_0030D7A0;
    case 90u: goto L_0030D80C;
    case 91u: goto L_0030D820;
    case 92u: goto L_0030D848;
    case 93u: goto L_0030D85C;
    case 94u: goto L_0030D870;
    case 95u: goto L_0030D8BC;
    case 96u: goto L_0030D8FC;
    case 97u: goto L_0030D95C;
    case 98u: goto L_0030D970;
    case 99u: goto L_0030D98C;
    case 100u: goto L_0030D99C;
    case 101u: goto L_0030D9C8;
    case 102u: goto L_0030DA48;
    case 103u: goto L_0030DA5C;
    case 104u: goto L_0030DAC4;
    case 105u: goto L_0030DB10;
    case 106u: goto L_0030DB3C;
    case 107u: goto L_0030DB70;
    case 108u: goto L_0030DB90;
    case 109u: goto L_0030DBE8;
    case 110u: goto L_0030DC10;
    case 111u: goto L_0030DC40;
    case 112u: goto L_0030DC5C;
    case 113u: goto L_0030DC70;
    case 114u: goto L_0030DDEC;
    case 115u: goto L_0030DE00;
    case 116u: goto L_0030DFC8;
    case 117u: goto L_0030E000;
    case 118u: goto L_0030E028;
    case 119u: goto L_0030E03C;
    case 120u: goto L_0030E0E4;
    case 121u: goto L_0030E110;
    case 122u: goto L_0030E12C;
    case 123u: goto L_0030E240;
    case 124u: goto L_0030E394;
    case 125u: goto L_0030E450;
    case 126u: goto L_0030E488;
    case 127u: goto L_0030E530;
    case 128u: goto L_0030E540;
    case 129u: goto L_0030E5B8;
    case 130u: goto L_0030E5D0;
    case 131u: goto L_0030E5FC;
    case 132u: goto L_0030E6D4;
    case 133u: goto L_0030E718;
    case 134u: goto L_0030E730;
    case 135u: goto L_0030E738;
    case 136u: goto L_0030E750;
    case 137u: goto L_0030E758;
    case 138u: goto L_0030E770;
    case 139u: goto L_0030E778;
    case 140u: goto L_0030E790;
    case 141u: goto L_0030E880;
    case 142u: goto L_0030E928;
    case 143u: goto L_0030E940;
    case 144u: goto L_0030E9C0;
    case 145u: goto L_0030E9D8;
    case 146u: goto L_0030EA48;
    case 147u: goto L_0030EB40;
    case 148u: goto L_0030EB7C;
    case 149u: goto L_0030EBAC;
    case 150u: goto L_0030EBE0;
    case 151u: goto L_0030EC0C;
    case 152u: goto L_0030EC14;
    case 153u: goto L_0030EC30;
    case 154u: goto L_0030EC40;
    case 155u: goto L_0030EC50;
    case 156u: goto L_0030EC88;
    case 157u: goto L_0030ECCC;
    case 158u: goto L_0030ED5C;
    case 159u: goto L_0030ED88;
    case 160u: goto L_0030EDC0;
    case 161u: goto L_0030EDD0;
    case 162u: goto L_0030EDE0;
    case 163u: goto L_0030EDF0;
    case 164u: goto L_0030EE00;
    case 165u: goto L_0030EE10;
    case 166u: goto L_0030EE20;
    case 167u: goto L_0030EE30;
    case 168u: goto L_0030EE40;
    case 169u: goto L_0030EE98;
    case 170u: goto L_0030EEA0;
    case 171u: goto L_0030EECC;
    case 172u: goto L_0030EEE0;
    case 173u: goto L_0030EEFC;
    case 174u: goto L_0030EF1C;
    case 175u: goto L_0030EF24;
    case 176u: goto L_0030EF40;
    case 177u: goto L_0030EF48;
    case 178u: goto L_0030EF60;
    case 179u: goto L_0030EF74;
    case 180u: goto L_0030EF90;
    case 181u: goto L_0030EFB0;
    case 182u: goto L_0030EFB8;
    case 183u: goto L_0030EFD4;
    case 184u: goto L_0030EFDC;
    case 185u: goto L_0030F008;
    case 186u: goto L_0030F088;
    case 187u: goto L_0030F09C;
    case 188u: goto L_0030F0B4;
    case 189u: goto L_0030F0E0;
    case 190u: goto L_0030F148;
    case 191u: goto L_0030F158;
    case 192u: goto L_0030F168;
    case 193u: goto L_0030F178;
    case 194u: goto L_0030F198;
    case 195u: goto L_0030F1F0;
    case 196u: goto L_0030F224;
    case 197u: goto L_0030F234;
    case 198u: goto L_0030F26C;
    case 199u: goto L_0030F2F0;
    case 200u: goto L_0030F330;
    case 201u: goto L_0030F3D4;
    case 202u: goto L_0030F410;
    case 203u: goto L_0030F418;
    case 204u: goto L_0030F480;
    case 205u: goto L_0030F4D4;
    case 206u: goto L_0030F520;
    case 207u: goto L_0030F598;
    case 208u: goto L_0030F5A8;
    case 209u: goto L_0030F5B0;
    case 210u: goto L_0030F5C4;
    case 211u: goto L_0030F5CC;
    case 212u: goto L_0030F5F8;
    case 213u: goto L_0030F608;
    case 214u: goto L_0030F610;
    case 215u: goto L_0030F624;
    case 216u: goto L_0030F62C;
    case 217u: goto L_0030F640;
    case 218u: goto L_0030F690;
    case 219u: goto L_0030F69C;
    case 220u: goto L_0030F6BC;
    case 221u: goto L_0030F6C8;
    case 222u: goto L_0030F78C;
    case 223u: goto L_0030F7D0;
    case 224u: goto L_0030F7EC;
    case 225u: goto L_0030F850;
    case 226u: goto L_0030F8D0;
    case 227u: goto L_0030F8D8;
    case 228u: goto L_0030F8EC;
    case 229u: goto L_0030F8F4;
    case 230u: goto L_0030F8FC;
    case 231u: goto L_0030F90C;
    case 232u: goto L_0030F914;
    case 233u: goto L_0030F92C;
    case 234u: goto L_0030F9D8;
    case 235u: goto L_0030F9E8;
    case 236u: goto L_0030FA54;
    case 237u: goto L_0030FA64;
    case 238u: goto L_0030FA7C;
    case 239u: goto L_0030FA84;
    case 240u: goto L_0030FA90;
    case 241u: goto L_0030FA98;
    case 242u: goto L_0030FAA4;
    case 243u: goto L_0030FAB4;
    case 244u: goto L_0030FAE0;
    case 245u: goto L_0030FAE8;
    case 246u: goto L_0030FAF4;
    case 247u: goto L_0030FAFC;
    case 248u: goto L_0030FB08;
    case 249u: goto L_0030FB18;
    case 250u: goto L_0030FB54;
    case 251u: goto L_0030FB64;
    case 252u: goto L_0030FB9C;
    case 253u: goto L_0030FBA4;
    case 254u: goto L_0030FBB0;
    case 255u: goto L_0030FBB8;
    case 256u: goto L_0030FBC4;
    case 257u: goto L_0030FCC4;
    case 258u: goto L_0030FCCC;
    case 259u: goto L_0030FD20;
    case 260u: goto L_0030FDB4;
    case 261u: goto L_0030FDC4;
    case 262u: goto L_0030FDD0;
    case 263u: goto L_0030FDF8;
    case 264u: goto L_0030FE00;
    case 265u: goto L_0030FE0C;
    case 266u: goto L_0030FE14;
    case 267u: goto L_0030FE20;
    case 268u: goto L_0030FE30;
    case 269u: goto L_0030FE60;
    case 270u: goto L_0030FE68;
    case 271u: goto L_0030FE74;
    case 272u: goto L_0030FE7C;
    case 273u: goto L_0030FE88;
    default: bad_entry(c, 0x0030C000u); return;
    }
L_0030C000:
    st8((c.r[17].w[0] + 1839u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_0030C004:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    st32((c.r[17].w[0] + 1752u), c.r[2].w[0]);
    c.f[12] = ld32((c.r[17].w[0] + 1752u));
    c.f[13] = 0u;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C01Cu); mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0084(c, 63u, depth + 1u); else { c.pc = 0x00310860u; return; } if (c.pc != 0x0030C01Cu) [[unlikely]] return; }
L_0030C01C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030C034; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 1726u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0030C2AC; } }
L_0030C034:
    c.r[4].d[0] = ld16((c.r[17].w[0] + 704u));
    set32(c.r[3], 0u + 5u);
    c.r[4].d[0] = c.r[4].d[0] | 128ull;
    st16((c.r[17].w[0] + 704u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st8((c.r[17].w[0] + 1726u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 816u)));
    c.budget -= 8;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0030C060; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0030C1A0; } }
L_0030C060:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_0030C080; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0030C1A0; } }
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_0030C080:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C088u);  if (depth < kMaxDepth) unit_0084(c, 12u, depth + 1u); else { c.pc = 0x003100D0u; return; } if (c.pc != 0x0030C088u) [[unlikely]] return; }
L_0030C088:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030C1A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030C2AC; } }
L_0030C098:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 704u));
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C0ACu); st16((c.r[17].w[0] + 704u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0084(c, 12u, depth + 1u); else { c.pc = 0x003100D0u; return; } if (c.pc != 0x0030C0ACu) [[unlikely]] return; }
L_0030C0AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0030C2AC; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 4u);  if (t) { goto L_0030C0D4; } }
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 1726u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0030C1A0; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 1;
L_0030C0D4:
    st8((c.r[17].w[0] + 1726u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 1839u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0030C1A0; } }
L_0030C0E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    st32((c.r[17].w[0] + 1752u), c.r[2].w[0]);
    c.f[13] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C0F8u); c.f[12] = ld32((c.r[17].w[0] + 1752u));  if (depth < kMaxDepth) unit_0084(c, 63u, depth + 1u); else { c.pc = 0x00310860u; return; } if (c.pc != 0x0030C0F8u) [[unlikely]] return; }
L_0030C0F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030C110; } }
    mmi::paddub(c.r[3], c.r[16], c.r[0]);
    st8((c.r[17].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 1726u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0030C1A0; } }
L_0030C110:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[17].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0030C138; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0030C1A0; } }
L_0030C138:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 816u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0030C150; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0030C1A0; } }
L_0030C150:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 530u));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_0030C170; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0030C1A0; } }
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_0030C170:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C178u);  if (depth < kMaxDepth) unit_0084(c, 12u, depth + 1u); else { c.pc = 0x003100D0u; return; } if (c.pc != 0x0030C178u) [[unlikely]] return; }
L_0030C178:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0030C2AC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x420C0000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C190u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 35u, depth + 1u); else { c.pc = 0x0024CA50u; return; } if (c.pc != 0x0030C190u) [[unlikely]] return; }
L_0030C190:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030C1A0; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[17].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0030C1A0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1724u)));
    c.budget -= 1;
L_0030C1A4:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0030C1C0; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0030C1C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C1C0u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0083(c, 168u, depth + 1u); else { c.pc = 0x0030EE40u; return; } if (c.pc != 0x0030C1C0u) [[unlikely]] return; }
L_0030C1C0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 1738u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0030C1D4; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[17].w[0] + 1738u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0030C1D4:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1724u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0030C1F4; } }
    set32(c.r[3], c.r[4].w[0] - 2u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0030C21C; } }
L_0030C1F4:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1725u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_0030C214; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0030C21C; } }
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_0030C214:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C21Cu);  if (depth < kMaxDepth) unit_0084(c, 67u, depth + 1u); else { c.pc = 0x003108A0u; return; } if (c.pc != 0x0030C21Cu) [[unlikely]] return; }
L_0030C21C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1724u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0030C2AC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1725u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0030C240; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0030C2AC; } }
L_0030C240:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 1854u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_0030C294; }
    c.r[4].d[0] = ld8((c.r[17].w[0] + 530u));
    c.r[3].d[0] = c.r[4].d[0] & 4ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 60u);  goto L_0030C278; }
    c.r[3].d[0] = c.r[4].d[0] & 128ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0030C274; } }
    c.r[3].d[0] = c.r[4].d[0] & 8ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0030C298; } }
L_0030C274:
    set32(c.r[2], 0u + 60u);
    c.budget -= 1;
L_0030C278:
    st16((c.r[17].w[0] + 1854u), static_cast<std::uint16_t>(c.r[2].w[0]));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C288u); st8((c.r[17].w[0] + 1849u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0083(c, 42u, depth + 1u); else { c.pc = 0x0030CB20u; return; } if (c.pc != 0x0030C288u) [[unlikely]] return; }
L_0030C288:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030C2AC; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_0030C294:
    st16((c.r[17].w[0] + 1854u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 1;
L_0030C298:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 1738u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0030C2AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C2ACu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 61u, depth + 1u); else { c.pc = 0x0024D040u; return; } if (c.pc != 0x0030C2ACu) [[unlikely]] return; }
L_0030C2AC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0030C2B0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0030C2C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1725u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 7;
    { const bool t = c.r[7].d[0] == c.r[3].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_0030C558; } }
    set32(c.r[6], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[6].d[0];  if (t) { goto L_0030C540; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[5].d[0];  if (t) { goto L_0030C418; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_0030C304; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1724u)));  if (t) { goto L_0030C7AC; } }
L_0030C304:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0030C31C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { goto L_0030C7A8; } }
L_0030C31C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C324u);  if (depth < kMaxDepth) unit_0083(c, 225u, depth + 1u); else { c.pc = 0x0030F850u; return; } if (c.pc != 0x0030C324u) [[unlikely]] return; }
L_0030C324:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0030CB08; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C33Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 35u, depth + 1u); else { c.pc = 0x0024CA50u; return; } if (c.pc != 0x0030C33Cu) [[unlikely]] return; }
L_0030C33C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030C358; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 1824u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C350u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0084(c, 109u, depth + 1u); else { c.pc = 0x00310D30u; return; } if (c.pc != 0x0030C350u) [[unlikely]] return; }
L_0030C350:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030C7A8; } }
L_0030C358:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 816u)));
    c.r[3].d[0] = c.r[3].sd[0] < 4000ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0030C7A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    st32((c.r[16].w[0] + 1752u), c.r[2].w[0]);
    c.f[12] = ld32((c.r[16].w[0] + 1752u));
    c.f[13] = 0u;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C380u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0084(c, 63u, depth + 1u); else { c.pc = 0x00310860u; return; } if (c.pc != 0x0030C380u) [[unlikely]] return; }
L_0030C380:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030C398; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1726u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0030C7A8; } }
L_0030C398:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1738u)));
    set32(c.r[2], 0u + 120u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0030C3E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C3B0u);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x0030C3B0u) [[unlikely]] return; }
L_0030C3B0:
    c.r[3].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0030C7A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C3C4u);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x0030C3C4u) [[unlikely]] return; }
L_0030C3C4:
    c.r[3].d[0] = c.r[2].d[0] & 63ull;
    set32(c.r[3], c.r[3].w[0] + 60u);
    st8((c.r[16].w[0] + 1849u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1726u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0030C7A8; } }
L_0030C3E0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 15104u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[12] = ld32((c.r[2].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C400u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 35u, depth + 1u); else { c.pc = 0x0024CA50u; return; } if (c.pc != 0x0030C400u) [[unlikely]] return; }
L_0030C400:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0030C7A8; } }
    set32(c.r[3], 0u + 3u);
    st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1726u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0030C7A8; } }
L_0030C418:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1726u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_0030C458; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0030C434; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030C7A8; } }
L_0030C434:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0030C7A8; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1726u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_0030C7A8; } }
L_0030C458:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1849u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030C46C; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[16].w[0] + 1849u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0030C46C:
    st32((c.r[29].w[0] + 32u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1000000u);
    st32((c.r[29].w[0] + 36u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 1752u));
    set32(c.r[4], c.r[16].w[0] + 8320u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C488u); st32((c.r[29].w[0] + 40u), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x0030C488u) [[unlikely]] return; }
L_0030C488:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C498u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 211u, depth + 1u); else { c.pc = 0x00102548u; return; } if (c.pc != 0x0030C498u) [[unlikely]] return; }
L_0030C498:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C4A4u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x0030C4A4u) [[unlikely]] return; }
L_0030C4A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C4ACu); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0077(c, 192u, depth + 1u); else { c.pc = 0x002DE280u; return; } if (c.pc != 0x0030C4ACu) [[unlikely]] return; }
L_0030C4AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0030C4E0; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1849u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0030C4E0; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 530u));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0030C4E0; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1726u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0030C7A8; } }
L_0030C4E0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0030C4FC; } }
    st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1726u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0030C7A8; } }
L_0030C4FC:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 816u)));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0030C524; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 1726u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1849u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_0030C524:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0030C7A8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1839u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0030C7A8; } }
L_0030C540:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0030C7A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0030C7A8; } }
L_0030C558:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1726u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0030C7A8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[5], c.r[5].w[0] + 27216u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0030C000u < 16384u) { entry = entries_0083[(t - 0x0030C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0030C584:
    c.r[4].d[0] = ld16((c.r[16].w[0] + 704u));
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = c.r[4].d[0] | 128ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1726u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0030C7A8; } }
L_0030C59C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0030C5C4; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 1726u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0030C7A8; } }
L_0030C5C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1726u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0030C7A8; } }
L_0030C5CC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    st32((c.r[16].w[0] + 1752u), c.r[2].w[0]);
    c.f[13] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C5E0u); c.f[12] = ld32((c.r[16].w[0] + 1752u));  if (depth < kMaxDepth) unit_0084(c, 63u, depth + 1u); else { c.pc = 0x00310860u; return; } if (c.pc != 0x0030C5E0u) [[unlikely]] return; }
L_0030C5E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030C5F8; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1726u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0030CB08; } }
L_0030C5F8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0030C618; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1726u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0030C7A8; } }
L_0030C618:
    c.r[4].d[0] = ld16((c.r[16].w[0] + 704u));
    set32(c.r[3], 0u + 3u);
    c.r[4].d[0] = c.r[4].d[0] | 128ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1726u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0030C7A8; } }
L_0030C630:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 704u));
    set32(c.r[4], 0u + 4u);
    set32(c.r[3], 0u + 1u);
    c.r[5].d[0] = c.r[5].d[0] | 128ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 1726u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1839u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0030C7A8; } }
L_0030C650:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    st32((c.r[16].w[0] + 1752u), c.r[2].w[0]);
    c.f[13] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C664u); c.f[12] = ld32((c.r[16].w[0] + 1752u));  if (depth < kMaxDepth) unit_0084(c, 63u, depth + 1u); else { c.pc = 0x00310860u; return; } if (c.pc != 0x0030C664u) [[unlikely]] return; }
L_0030C664:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030C67C; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1726u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0030CB08; } }
L_0030C67C:
    c.r[4].d[0] = ld16((c.r[16].w[0] + 704u));
    set32(c.r[3], 0u + 5u);
    c.r[4].d[0] = c.r[4].d[0] | 128ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 1726u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 816u)));
    c.budget -= 8;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0030C6A8; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0030C7A8; } }
L_0030C6A8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0030C7A8; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0030C7A8; } }
L_0030C6C4:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 4u);  if (t) { goto L_0030C6F0; } }
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1726u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0030C7A8; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 1;
L_0030C6F0:
    st8((c.r[16].w[0] + 1726u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1839u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0030C7A8; } }
L_0030C700:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    st32((c.r[16].w[0] + 1752u), c.r[2].w[0]);
    c.f[13] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C714u); c.f[12] = ld32((c.r[16].w[0] + 1752u));  if (depth < kMaxDepth) unit_0084(c, 63u, depth + 1u); else { c.pc = 0x00310860u; return; } if (c.pc != 0x0030C714u) [[unlikely]] return; }
L_0030C714:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030C72C; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1726u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0030C7A8; } }
L_0030C72C:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0030C754; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0030C7A8; } }
L_0030C754:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 816u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0030C76C; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0030C7A8; } }
L_0030C76C:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 530u));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x420C0000u);  goto L_0030C78C; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0030C7A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x420C0000u);
    c.budget -= 1;
L_0030C78C:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C798u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 35u, depth + 1u); else { c.pc = 0x0024CA50u; return; } if (c.pc != 0x0030C798u) [[unlikely]] return; }
L_0030C798:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030C7A8; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0030C7A8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1724u)));
    c.budget -= 1;
L_0030C7AC:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { mmi::paddub(c.r[4], c.r[16], c.r[0]);  goto L_0030C7C8; }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0030CB08; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_0030C7C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C7D0u);  if (depth < kMaxDepth) unit_0084(c, 67u, depth + 1u); else { c.pc = 0x003108A0u; return; } if (c.pc != 0x0030C7D0u) [[unlikely]] return; }
L_0030C7D0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1735u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_0030CB04; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1724u)));
    set32(c.r[6], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[6].d[0];  if (t) { goto L_0030C968; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1727u)));
    set32(c.r[5], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_0030C948; } }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_0030C910; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_0030C8D8; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_0030C858; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0030C82C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0030CB0C; } }
L_0030C82C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1725u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0030C850; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1726u)));
    set32(c.r[3], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0030CB08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1727u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_0030CB08; } }
L_0030C850:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1727u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_0030CB08; } }
L_0030C858:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 512ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8387u)));
    c.r[1].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0030C878; } }
    mmi::paddub(c.r[3], c.r[6], c.r[0]);
    c.budget -= 1;
L_0030C878:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[4].d[0] = c.r[3].d[0] << 56;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[3], c.r[3].w[0] - 15008u);
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = c.r[4].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    st8((c.r[16].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1730u)));
    c.budget -= 16;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 3u);  if (t) { goto L_0030C8C8; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1727u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0030CB08; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 1;
L_0030C8C8:
    st8((c.r[16].w[0] + 1727u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 60u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0030CB08; } }
L_0030C8D8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1730u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0030C8F4; } }
    set32(c.r[3], 0u + 60u);
    st8((c.r[16].w[0] + 1727u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0030CB08; } }
L_0030C8F4:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 512ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1730u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0030CB08; } }
L_0030C910:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0030C928; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1727u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_0030CB08; } }
L_0030C928:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1730u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_0030C940; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1727u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_0030CB08; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_0030C940:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0030CB08; } }
L_0030C948:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0030CB08; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 1724u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1727u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0030CB08; } }
L_0030C968:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1727u)));
    set32(c.r[5], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_0030CAE0; } }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_0030CAA8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_0030CA50; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_0030C9CC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0030C9A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030CB08; } }
L_0030C9A8:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 741u));
    set32(c.r[3], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0030CB08; } }
    set32(c.r[3], 0u + 13u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0030CB08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1727u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_0030CB08; } }
L_0030C9CC:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[3], 0u + 17u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0030C9EC; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 768ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0030C9F8; } }
L_0030C9EC:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 256ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0030C9F8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8388u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] - 14928u);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.r[4].d[0] = c.r[4].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    st8((c.r[16].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1730u)));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 3u);  if (t) { goto L_0030CA40; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1727u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0030CB08; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 1;
L_0030CA40:
    st8((c.r[16].w[0] + 1727u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 60u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0030CB08; } }
L_0030CA50:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1730u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0030CA6C; } }
    set32(c.r[3], 0u + 60u);
    st8((c.r[16].w[0] + 1727u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0030CB08; } }
L_0030CA6C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[3], 0u + 17u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0030CA8C; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 768ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0030CA98; } }
L_0030CA8C:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 256ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0030CA98:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1730u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0030CB08; } }
L_0030CAA8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0030CAC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1727u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_0030CB08; } }
L_0030CAC0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1730u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_0030CAD8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1727u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_0030CB08; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_0030CAD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0030CB08; } }
L_0030CAE0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0030CB08; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 1724u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1727u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0030CB08; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_0030CB04:
    st8((c.r[16].w[0] + 1735u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_0030CB08:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0030CB0C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0030CB20:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], c.r[2].w[0] - 28448u);
    set32(c.r[16], c.r[29].w[0] + 72u);
    st32((c.r[29].w[0] + 64u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 68u), 0u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 7);
    set32(c.r[18], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030CB70u); set32(c.r[4], c.r[17].w[0] + 8320u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x0030CB70u) [[unlikely]] return; }
L_0030CB70:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030CB7Cu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x0030CB7Cu) [[unlikely]] return; }
L_0030CB7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030CB84u); set32(c.r[4], c.r[18].w[0] + 144u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x0030CB84u) [[unlikely]] return; }
L_0030CB84:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030CB94u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 211u, depth + 1u); else { c.pc = 0x00102548u; return; } if (c.pc != 0x0030CB94u) [[unlikely]] return; }
L_0030CB94:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030CBA0u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x0030CBA0u) [[unlikely]] return; }
L_0030CBA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030CBA8u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x0030CBA8u) [[unlikely]] return; }
L_0030CBA8:
    c.f[12] = ld32((c.r[29].w[0] + 64u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030CBB4u); c.f[13] = ld32((c.r[16].w[0]));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x0030CBB4u) [[unlikely]] return; }
L_0030CBB4:
    c.r[16].d[0] = c.r[2].d[0] << 48;
    st16((c.r[17].w[0] + 1830u), static_cast<std::uint16_t>(0u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030CBC4u); c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x0030CBC4u) [[unlikely]] return; }
L_0030CBC4:
    c.r[4].d[0] = c.r[16].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[1].d[0] = c.r[4].sd[0] < 12289ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);  if (t) { goto L_0030CBEC; } }
    c.r[2].d[0] = 0ull | 53248ull;
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[4].sd[0] < 20480ll ? 1ull : 0ull;  if (t) { goto L_0030CC20; } }
L_0030CBEC:
    c.r[2].d[0] = c.r[3].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0030CC0C; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 1830u)));
    c.r[2].d[0] = c.r[2].d[0] | 1024ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 1830u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0030CC64; } }
L_0030CC0C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 1830u)));
    c.r[2].d[0] = c.r[2].d[0] | 2048ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 1830u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0030CC64; } }
    c.r[2].d[0] = c.r[4].sd[0] < 20480ll ? 1ull : 0ull;
    c.budget -= 1;
L_0030CC20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[4].sd[0] < 4096ll ? 1ull : 0ull;  if (t) { goto L_0030CC68; } }
    c.r[1].d[0] = 0ull | 45057ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0030CC64; } }
    c.r[2].d[0] = c.r[3].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0030CC58; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 1830u)));
    c.r[2].d[0] = c.r[2].d[0] | 1024ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 1830u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0030CC64; } }
L_0030CC58:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 1830u)));
    c.r[2].d[0] = c.r[2].d[0] | 2048ull;
    st16((c.r[17].w[0] + 1830u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0030CC64:
    c.r[2].d[0] = c.r[4].sd[0] < 4096ll ? 1ull : 0ull;
    c.budget -= 1;
L_0030CC68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull | 36864ull;  if (t) { goto L_0030CCB0; } }
    c.r[1].d[0] = c.r[4].sd[0] < 28673ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0030CCAC; } }
    c.r[2].d[0] = c.r[3].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0030CC9C; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 1830u)));
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 1830u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0030CCF8; } }
L_0030CC9C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 1830u)));
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 1830u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0030CCF8; } }
L_0030CCAC:
    c.r[2].d[0] = 0ull | 36864ull;
    c.budget -= 1;
L_0030CCB0:
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { mmi::paddub(c.r[4], c.r[17], c.r[0]);  goto L_0030CCFC; }
    c.r[1].d[0] = 0ull | 61441ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0030CCF8; } }
    c.r[2].d[0] = c.r[3].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0030CCEC; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 1830u)));
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 1830u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0030CCF8; } }
L_0030CCEC:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 1830u)));
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    st16((c.r[17].w[0] + 1830u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0030CCF8:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_0030CCFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030CD04u);  if (depth < kMaxDepth) unit_0083(c, 163u, depth + 1u); else { c.pc = 0x0030EDF0u; return; } if (c.pc != 0x0030CD04u) [[unlikely]] return; }
L_0030CD04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030CD0Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 69u, depth + 1u); else { c.pc = 0x0024D140u; return; } if (c.pc != 0x0030CD0Cu) [[unlikely]] return; }
L_0030CD0C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0030CD30:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8384u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[5], c.r[3].w[0] - 28448u);
    set32(c.r[3], 0u + 2u);
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[6], c.r[7].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 7);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 17;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[16], c.r[5].w[0] + c.r[6].w[0]);  if (t) { goto L_0030CD7C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8386u)));  if (t) { goto L_0030CD84; } }
L_0030CD7C:
    set32(c.r[3], 0u + 1u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8386u)));
    c.budget -= 2;
L_0030CD84:
    c.r[6].d[0] = c.r[3].d[0] << 56;
    set32(c.r[3], 0u + 17u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);  if (t) { goto L_0030D018; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1725u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 18u);  if (t) { goto L_0030CE80; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { mmi::paddub(c.r[4], c.r[17], c.r[0]);  goto L_0030CE2C; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { mmi::paddub(c.r[4], c.r[17], c.r[0]);  goto L_0030CDDC; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], 0u + 60u);  goto L_0030CDD0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);  if (t) { goto L_0030D1C8; } }
    set32(c.r[2], 0u + 60u);
    c.budget -= 1;
L_0030CDD0:
    st8((c.r[17].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 1730u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 3;
L_0030CDDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030CDE4u);  if (depth < kMaxDepth) unit_0083(c, 73u, depth + 1u); else { c.pc = 0x0030D1E0u; return; } if (c.pc != 0x0030CDE4u) [[unlikely]] return; }
L_0030CDE4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1730u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[17].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0] + 1520u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_0030CE0C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1730u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0030D1C4; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_0030CE0C:
    st8((c.r[17].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = ld16((c.r[17].w[0] + 704u));
    set32(c.r[3], 0u + 45u);
    c.r[4].d[0] = c.r[4].d[0] | 256ull;
    st16((c.r[17].w[0] + 704u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0030D1C4; } }
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_0030CE2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030CE34u);  if (depth < kMaxDepth) unit_0083(c, 73u, depth + 1u); else { c.pc = 0x0030D1E0u; return; } if (c.pc != 0x0030CE34u) [[unlikely]] return; }
L_0030CE34:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0030CE54; } }
    set32(c.r[3], 0u + 3u);
    st8((c.r[17].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 1730u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0030D1C4; } }
L_0030CE54:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1730u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_0030CE74; }
    set32(c.r[3], 0u + 3u);
    st8((c.r[17].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 1730u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0030D1C4; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_0030CE74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0030D1C4; } }
    set32(c.r[3], 0u + 18u);
    c.budget -= 1;
L_0030CE80:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0030CFF8; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 575u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0030CEF8; } }
    c.r[4].d[0] = ld8((c.r[17].w[0] + 574u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1730u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0030CEF8; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 592u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0030CEF8; } }
    c.r[4].d[0] = ld8((c.r[17].w[0] + 531u));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 531u));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0030CEF8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    c.r[3].d[0] = c.r[6].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0030CEF8; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 514u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_0030CEF8; } }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 256ull;
    st16((c.r[17].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 574u));
    st8((c.r[17].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
L_0030CEF8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0030D1C4; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0030D1C4; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 592u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_0030CF50; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[4], 0u + 1u);  if (t) { goto L_0030CF44; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030CF38u);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x0030CF38u) [[unlikely]] return; }
L_0030CF38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] & 3ull;  if (t) { goto L_0030CF50; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_0030CF44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 3u);  if (t) { goto L_0030CF54; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_0030CF50:
    set32(c.r[3], 0u + 3u);
    c.budget -= 1;
L_0030CF54:
    c.budget -= 2;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 1024u);  goto L_0030CFDC; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 2048u);  goto L_0030CFBC; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 4096u);  goto L_0030CF9C; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_0030CF88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030D1C4; } }
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_0030CF88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030CF90u);  if (depth < kMaxDepth) unit_0053(c, 68u, depth + 1u); else { c.pc = 0x0024D130u; return; } if (c.pc != 0x0030CF90u) [[unlikely]] return; }
L_0030CF90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030D1C4; } }
    set32(c.r[2], 0u + 4096u);
    c.budget -= 1;
L_0030CF9C:
    st16((c.r[17].w[0] + 1830u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030CFA8u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0083(c, 164u, depth + 1u); else { c.pc = 0x0030EE00u; return; } if (c.pc != 0x0030CFA8u) [[unlikely]] return; }
L_0030CFA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030CFB0u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 69u, depth + 1u); else { c.pc = 0x0024D140u; return; } if (c.pc != 0x0030CFB0u) [[unlikely]] return; }
L_0030CFB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030D1C4; } }
    set32(c.r[2], 0u + 2048u);
    c.budget -= 1;
L_0030CFBC:
    st16((c.r[17].w[0] + 1830u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030CFC8u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0083(c, 164u, depth + 1u); else { c.pc = 0x0030EE00u; return; } if (c.pc != 0x0030CFC8u) [[unlikely]] return; }
L_0030CFC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030CFD0u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 69u, depth + 1u); else { c.pc = 0x0024D140u; return; } if (c.pc != 0x0030CFD0u) [[unlikely]] return; }
L_0030CFD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030D1C4; } }
    set32(c.r[2], 0u + 1024u);
    c.budget -= 1;
L_0030CFDC:
    st16((c.r[17].w[0] + 1830u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030CFE8u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0083(c, 164u, depth + 1u); else { c.pc = 0x0030EE00u; return; } if (c.pc != 0x0030CFE8u) [[unlikely]] return; }
L_0030CFE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030CFF0u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 69u, depth + 1u); else { c.pc = 0x0024D140u; return; } if (c.pc != 0x0030CFF0u) [[unlikely]] return; }
L_0030CFF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030D1C4; } }
L_0030CFF8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0030D1C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D010u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 68u, depth + 1u); else { c.pc = 0x0024D130u; return; } if (c.pc != 0x0030D010u) [[unlikely]] return; }
L_0030D010:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030D1C4; } }
L_0030D018:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1725u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0030D084; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0030D058; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0030D044; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 64u), 0u);  if (t) { goto L_0030D0B4; } }
L_0030D044:
    st8((c.r[17].w[0] + 1725u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[17].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] | 256ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 704u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0030D0B0; } }
L_0030D058:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030D07C; } }
    st8((c.r[17].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld16((c.r[17].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] | 256ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 704u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0030D0B0; } }
L_0030D07C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 1725u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0030D0B0; } }
L_0030D084:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0030D0A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D09Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 68u, depth + 1u); else { c.pc = 0x0024D130u; return; } if (c.pc != 0x0030D09Cu) [[unlikely]] return; }
L_0030D09C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030D1C4; } }
L_0030D0A4:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] | 256ull;
    st16((c.r[17].w[0] + 704u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0030D0B0:
    st32((c.r[29].w[0] + 64u), 0u);
    c.budget -= 1;
L_0030D0B4:
    set32(c.r[18], c.r[29].w[0] + 72u);
    st32((c.r[29].w[0] + 68u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[17].w[0] + 8320u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D0CCu); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x0030D0CCu) [[unlikely]] return; }
L_0030D0CC:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D0D8u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x0030D0D8u) [[unlikely]] return; }
L_0030D0D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D0E0u); set32(c.r[4], c.r[16].w[0] + 144u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x0030D0E0u) [[unlikely]] return; }
L_0030D0E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D0F0u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 211u, depth + 1u); else { c.pc = 0x00102548u; return; } if (c.pc != 0x0030D0F0u) [[unlikely]] return; }
L_0030D0F0:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D0FCu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x0030D0FCu) [[unlikely]] return; }
L_0030D0FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D104u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x0030D104u) [[unlikely]] return; }
L_0030D104:
    c.f[12] = ld32((c.r[29].w[0] + 64u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D110u); c.f[13] = ld32((c.r[18].w[0]));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x0030D110u) [[unlikely]] return; }
L_0030D110:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[4].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[4].sd[0] < 12289ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0030D138; } }
    c.r[3].d[0] = 0ull | 53248ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[4].sd[0] < 20480ll ? 1ull : 0ull;  if (t) { goto L_0030D14C; } }
L_0030D138:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 4096ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0030D170; } }
    c.r[3].d[0] = c.r[4].sd[0] < 20480ll ? 1ull : 0ull;
    c.budget -= 1;
L_0030D14C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[4].sd[0] < 4096ll ? 1ull : 0ull;  if (t) { goto L_0030D174; } }
    c.r[1].d[0] = 0ull | 45057ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0030D170; } }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 8192ull;
    st16((c.r[17].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0030D170:
    c.r[3].d[0] = c.r[4].sd[0] < 4096ll ? 1ull : 0ull;
    c.budget -= 1;
L_0030D174:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = 0ull | 36864ull;  if (t) { goto L_0030D19C; } }
    c.r[1].d[0] = c.r[4].sd[0] < 28673ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0030D198; } }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 1024ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0030D1C4; } }
L_0030D198:
    c.r[3].d[0] = 0ull | 36864ull;
    c.budget -= 1;
L_0030D19C:
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0030D1C4; } }
    c.r[1].d[0] = 0ull | 61441ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0030D1C4; } }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 2048ull;
    st16((c.r[17].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0030D1C4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0030D1C8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0030D1E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8384u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 1824u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], c.r[3].w[0] - 28448u);
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 7);
    c.budget -= 14;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_0030D304; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D220u); set32(c.r[4], c.r[3].w[0] + 144u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x0030D220u) [[unlikely]] return; }
L_0030D220:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D230u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 211u, depth + 1u); else { c.pc = 0x00102548u; return; } if (c.pc != 0x0030D230u) [[unlikely]] return; }
L_0030D230:
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D23Cu); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x0030D23Cu) [[unlikely]] return; }
L_0030D23C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D244u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x0030D244u) [[unlikely]] return; }
L_0030D244:
    c.f[13] = ld32((c.r[29].w[0] + 56u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D250u); c.f[12] = ld32((c.r[29].w[0] + 48u));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x0030D250u) [[unlikely]] return; }
L_0030D250:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[4].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[4].sd[0] < 12289ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0030D278; } }
    c.r[3].d[0] = 0ull | 53248ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[4].sd[0] < 20480ll ? 1ull : 0ull;  if (t) { goto L_0030D28C; } }
L_0030D278:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 8192ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0030D2B0; } }
    c.r[3].d[0] = c.r[4].sd[0] < 20480ll ? 1ull : 0ull;
    c.budget -= 1;
L_0030D28C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[4].sd[0] < 4096ll ? 1ull : 0ull;  if (t) { goto L_0030D2B4; } }
    c.r[1].d[0] = 0ull | 45057ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0030D2B0; } }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 4096ull;
    st16((c.r[17].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0030D2B0:
    c.r[3].d[0] = c.r[4].sd[0] < 4096ll ? 1ull : 0ull;
    c.budget -= 1;
L_0030D2B4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = 0ull | 36864ull;  if (t) { goto L_0030D2DC; } }
    c.r[1].d[0] = c.r[4].sd[0] < 28673ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0030D2D8; } }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 2048ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0030D304; } }
L_0030D2D8:
    c.r[3].d[0] = 0ull | 36864ull;
    c.budget -= 1;
L_0030D2DC:
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0030D304; } }
    c.r[1].d[0] = 0ull | 61441ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0030D304; } }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 1024ull;
    st16((c.r[17].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0030D304:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0030D320:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1725u)));
    set32(c.r[5], 0u + 3u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_0030D418; } }
    set32(c.r[6], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_0030D3E8; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_0030D374; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0030D360; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0030D434; } }
L_0030D360:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 512ull;
    st16((c.r[4].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 1725u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_0030D430; } }
L_0030D374:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0030D3E0; } }
    st8((c.r[4].w[0] + 1725u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 512ull;
    st16((c.r[4].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8387u)));
    c.r[1].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0030D3A8; } }
    mmi::paddub(c.r[3], c.r[6], c.r[0]);
    c.budget -= 1;
L_0030D3A8:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    c.r[5].d[0] = c.r[3].d[0] << 56;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    set32(c.r[3], c.r[3].w[0] - 15008u);
    set32(c.r[6], c.r[7].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].d[0] = c.r[5].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0030D430; } }
L_0030D3E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 1725u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0030D430; } }
L_0030D3E8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1730u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0030D3FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 1725u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_0030D430; } }
L_0030D3FC:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 512ull;
    st16((c.r[4].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1730u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0030D430; } }
L_0030D418:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0030D430; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D430u);  if (depth < kMaxDepth) unit_0053(c, 68u, depth + 1u); else { c.pc = 0x0024D130u; return; } if (c.pc != 0x0030D430u) [[unlikely]] return; }
L_0030D430:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_0030D434:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0030D440:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1725u)));
    set32(c.r[7], 0u + 4u);
    c.budget -= 6;
    { const bool t = c.r[8].d[0] == c.r[7].d[0];  if (t) { goto L_0030D60C; } }
    set32(c.r[6], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == c.r[6].d[0];  if (t) { goto L_0030D58C; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == c.r[5].d[0];  if (t) { goto L_0030D53C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == c.r[3].d[0];  if (t) { goto L_0030D4C4; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_0030D48C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0030D634; } }
L_0030D48C:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    set32(c.r[3], 0u + 17u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0030D4AC; } }
    c.r[3].d[0] = ld16((c.r[4].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 768ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0030D4B8; } }
L_0030D4AC:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 256ull;
    st16((c.r[4].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0030D4B8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0030D630; } }
L_0030D4C4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0030D534; } }
    st8((c.r[4].w[0] + 1725u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    set32(c.r[3], 0u + 17u);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0030D4F8; } }
    c.r[3].d[0] = ld16((c.r[4].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 768ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0030D504; } }
L_0030D4F8:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 256ull;
    st16((c.r[4].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0030D504:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8388u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] - 14928u);
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    c.r[5].d[0] = c.r[5].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0030D630; } }
L_0030D534:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 1725u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0030D630; } }
L_0030D53C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1730u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0030D550; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 1725u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { goto L_0030D630; } }
L_0030D550:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    set32(c.r[3], 0u + 17u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0030D570; } }
    c.r[3].d[0] = ld16((c.r[4].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 768ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0030D57C; } }
L_0030D570:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 256ull;
    st16((c.r[4].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0030D57C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1730u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0030D630; } }
L_0030D58C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0030D5AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D5A4u);  if (depth < kMaxDepth) unit_0053(c, 68u, depth + 1u); else { c.pc = 0x0024D130u; return; } if (c.pc != 0x0030D5A4u) [[unlikely]] return; }
L_0030D5A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030D630; } }
L_0030D5AC:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    set32(c.r[3], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0030D630; } }
    c.f[1] = ld32((c.r[4].w[0] + 7756u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41980000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0030D630; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 575u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0030D630; } }
    c.r[3].d[0] = ld16((c.r[4].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 1024ull;
    st16((c.r[4].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 768ull;
    st16((c.r[4].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 1725u), static_cast<std::uint8_t>(c.r[7].w[0]));  if (t) { goto L_0030D630; } }
L_0030D60C:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 1024ull;
    st16((c.r[4].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0030D630; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D630u);  if (depth < kMaxDepth) unit_0053(c, 68u, depth + 1u); else { c.pc = 0x0024D130u; return; } if (c.pc != 0x0030D630u) [[unlikely]] return; }
L_0030D630:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_0030D634:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0030D640:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1725u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0030D73C; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0030D6F0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0030D6C8; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0030D68C; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0030D68C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0030D794; } }
L_0030D68C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0030D6A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D6A0u);  if (depth < kMaxDepth) unit_0083(c, 150u, depth + 1u); else { c.pc = 0x0030EBE0u; return; } if (c.pc != 0x0030D6A0u) [[unlikely]] return; }
L_0030D6A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030D790; } }
L_0030D6A8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1725u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].d[0] = ld16((c.r[4].w[0] + 1830u));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0030D790; } }
L_0030D6C8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[5].w[0] + 1u);  if (t) { goto L_0030D6E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D6DCu);  if (depth < kMaxDepth) unit_0083(c, 150u, depth + 1u); else { c.pc = 0x0030EBE0u; return; } if (c.pc != 0x0030D6DCu) [[unlikely]] return; }
L_0030D6DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030D790; } }
    set32(c.r[3], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_0030D6E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0030D790; } }
L_0030D6F0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[5].w[0] - 1u);  if (t) { goto L_0030D734; } }
    set32(c.r[3], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    set32(c.r[3], 0u + 18u);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 20u);  if (t) { goto L_0030D728; } }
    set32(c.r[3], 0u + 45u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0030D790; } }
    set32(c.r[3], 0u + 20u);
    c.budget -= 1;
L_0030D728:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0030D790; } }
    set32(c.r[3], c.r[5].w[0] - 1u);
    c.budget -= 1;
L_0030D734:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0030D790; } }
L_0030D73C:
    c.r[5].d[0] = ld16((c.r[4].w[0] + 1830u));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st16((c.r[4].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0030D76C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D764u);  if (depth < kMaxDepth) unit_0053(c, 68u, depth + 1u); else { c.pc = 0x0024D130u; return; } if (c.pc != 0x0030D764u) [[unlikely]] return; }
L_0030D764:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030D790; } }
L_0030D76C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1730u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_0030D78C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D780u);  if (depth < kMaxDepth) unit_0053(c, 68u, depth + 1u); else { c.pc = 0x0024D130u; return; } if (c.pc != 0x0030D780u) [[unlikely]] return; }
L_0030D780:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030D790; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_0030D78C:
    st8((c.r[4].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_0030D790:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_0030D794:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0030D7A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 12;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 1u);  goto L_0030D7DC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1725u)));  if (t) { goto L_0030D7E0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0030D7DC:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1725u)));
    c.budget -= 1;
L_0030D7E0:
    c.r[17].d[0] = c.r[3].d[0] << 56;
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);  if (t) { goto L_0030E0F4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], c.r[3].w[0] + 27248u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0030C000u < 16384u) { entry = entries_0083[(t - 0x0030C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0030D80C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0030D828; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D820u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 68u, depth + 1u); else { c.pc = 0x0024D130u; return; } if (c.pc != 0x0030D820u) [[unlikely]] return; }
L_0030D820:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);  if (t) { goto L_0030E0F8; } }
L_0030D828:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1725u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[18].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = ld16((c.r[18].w[0] + 1830u));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0030E0F4; } }
L_0030D848:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[5].w[0] + 1u);  if (t) { goto L_0030D868; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D85Cu); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 68u, depth + 1u); else { c.pc = 0x0024D130u; return; } if (c.pc != 0x0030D85Cu) [[unlikely]] return; }
L_0030D85C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030E0F4; } }
    set32(c.r[3], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_0030D868:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0030E0F4; } }
L_0030D870:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[5].w[0] - 1u);  if (t) { goto L_0030D8B4; } }
    set32(c.r[3], c.r[5].w[0] + 1u);
    st8((c.r[18].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8386u)));
    set32(c.r[3], 0u + 18u);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 20u);  if (t) { goto L_0030D8A8; } }
    set32(c.r[3], 0u + 45u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0030E0F4; } }
    set32(c.r[3], 0u + 20u);
    c.budget -= 1;
L_0030D8A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0030E0F4; } }
    set32(c.r[3], c.r[5].w[0] - 1u);
    c.budget -= 1;
L_0030D8B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0030E0F4; } }
L_0030D8BC:
    c.r[5].d[0] = ld16((c.r[18].w[0] + 1830u));
    c.r[4].d[0] = ld16((c.r[18].w[0] + 704u));
    set32(c.r[3], 0u + 17u);
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st16((c.r[18].w[0] + 704u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8386u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_0030D9AC; } }
    set32(c.r[3], 0u + 18u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0030D9AC; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 1736u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_0030D9A8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D8FCu); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 81u, depth + 1u); else { c.pc = 0x0024D300u; return; } if (c.pc != 0x0030D8FCu) [[unlikely]] return; }
L_0030D8FC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8386u)));
    set32(c.r[2], 0u + 11u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0030D924; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[2].w[0] + 13488u);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 88u);  if (t) { goto L_0030D938; } }
L_0030D924:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[2].w[0] + 13488u);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 96u);
    c.budget -= 5;
L_0030D938:
    c.f[1] = ld32((c.r[2].w[0]));
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.r[5].d[0] = 0ull | 49152ull;
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D95Cu); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0053(c, 8u, depth + 1u); else { c.pc = 0x0024C2C0u; return; } if (c.pc != 0x0030D95Cu) [[unlikely]] return; }
L_0030D95C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[19], c.r[2], c.r[0]);  if (t) { goto L_0030D9AC; } }
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D970u); mmi::paddub(c.r[5], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0083(c, 217u, depth + 1u); else { c.pc = 0x0030F640u; return; } if (c.pc != 0x0030D970u) [[unlikely]] return; }
L_0030D970:
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0030D9AC; } }
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D98Cu); st32((c.r[18].w[0] + 1824u), c.r[19].w[0]);  if (depth < kMaxDepth) unit_0083(c, 189u, depth + 1u); else { c.pc = 0x0030F0E0u; return; } if (c.pc != 0x0030D98Cu) [[unlikely]] return; }
L_0030D98C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030D9AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D99Cu); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0083(c, 166u, depth + 1u); else { c.pc = 0x0030EE20u; return; } if (c.pc != 0x0030D99Cu) [[unlikely]] return; }
L_0030D99C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_0030D9AC; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_0030D9A8:
    st16((c.r[18].w[0] + 1736u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 1;
L_0030D9AC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0030DC20; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 1828u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_0030DC1C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030D9C8u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 89u, depth + 1u); else { c.pc = 0x0024D410u; return; } if (c.pc != 0x0030D9C8u) [[unlikely]] return; }
L_0030D9C8:
    set32(c.r[5], ld32((c.r[18].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0030DC20; } }
    c.f[1] = ld32((c.r[5].w[0] + 1068u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0030DA2C; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 532u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0030DA2C; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    c.r[3].d[0] = c.r[17].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0030DA2C; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 8192ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0030DA3C; } }
L_0030DA2C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    set32(c.r[3], 0u + 16u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0030DC20; } }
L_0030DA3C:
    st32((c.r[18].w[0] + 1824u), c.r[5].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030DA48u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0083(c, 189u, depth + 1u); else { c.pc = 0x0030F0E0u; return; } if (c.pc != 0x0030DA48u) [[unlikely]] return; }
L_0030DA48:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030DC20; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 1520u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030DA5Cu); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0083(c, 217u, depth + 1u); else { c.pc = 0x0030F640u; return; } if (c.pc != 0x0030DA5Cu) [[unlikely]] return; }
L_0030DA5C:
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0030DC20; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8386u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] - 13616u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0030DB48; } }
    set32(c.r[3], 0u + 18u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0030DB18; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 1580u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0030DC20; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[2], 0u + 5u);  if (t) { goto L_0030DB00; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8387u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0030DAFC; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 1520u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030DAC4u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 47u, depth + 1u); else { c.pc = 0x0024CEB0u; return; } if (c.pc != 0x0030DAC4u) [[unlikely]] return; }
L_0030DAC4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42340000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0030DC20; } }
    set32(c.r[3], 0u + 5u);
    st8((c.r[18].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 20u);
    st8((c.r[18].w[0] + 1726u), static_cast<std::uint8_t>(0u));
    set32(c.r[16], 0u + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1735u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0030DC20; } }
L_0030DAFC:
    set32(c.r[2], 0u + 5u);
    c.budget -= 1;
L_0030DB00:
    st8((c.r[18].w[0] + 1725u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030DB10u); st8((c.r[18].w[0] + 1726u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0053(c, 75u, depth + 1u); else { c.pc = 0x0024D220u; return; } if (c.pc != 0x0030DB10u) [[unlikely]] return; }
L_0030DB10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_0030DC20; } }
L_0030DB18:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 1580u)));
    c.r[3].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0030DC20; } }
    set32(c.r[2], 0u + 5u);
    st8((c.r[18].w[0] + 1725u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030DB3Cu); st8((c.r[18].w[0] + 1726u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0053(c, 75u, depth + 1u); else { c.pc = 0x0024D220u; return; } if (c.pc != 0x0030DB3Cu) [[unlikely]] return; }
L_0030DB3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_0030DC20; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0030DB48:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_0030DB7C; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 1592u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0030DC20; } }
    set32(c.r[2], 0u + 6u);
    st8((c.r[18].w[0] + 1725u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030DB70u); st8((c.r[18].w[0] + 1726u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0053(c, 75u, depth + 1u); else { c.pc = 0x0024D220u; return; } if (c.pc != 0x0030DB70u) [[unlikely]] return; }
L_0030DB70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_0030DC20; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_0030DB7C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0030DBF0; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 1520u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030DB90u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 47u, depth + 1u); else { c.pc = 0x0024CEB0u; return; } if (c.pc != 0x0030DB90u) [[unlikely]] return; }
L_0030DB90:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42340000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0030DBC8; } }
    set32(c.r[3], 0u + 6u);
    st8((c.r[18].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 18u);
    st8((c.r[18].w[0] + 1726u), static_cast<std::uint8_t>(0u));
    set32(c.r[16], 0u + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1735u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0030DC20; } }
L_0030DBC8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 1580u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0030DC20; } }
    set32(c.r[2], 0u + 5u);
    st8((c.r[18].w[0] + 1725u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030DBE8u); st8((c.r[18].w[0] + 1726u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0053(c, 75u, depth + 1u); else { c.pc = 0x0024D220u; return; } if (c.pc != 0x0030DBE8u) [[unlikely]] return; }
L_0030DBE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_0030DC20; } }
L_0030DBF0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 1592u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0030DC20; } }
    set32(c.r[2], 0u + 7u);
    st8((c.r[18].w[0] + 1725u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030DC10u); st8((c.r[18].w[0] + 1726u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0053(c, 75u, depth + 1u); else { c.pc = 0x0024D220u; return; } if (c.pc != 0x0030DC10u) [[unlikely]] return; }
L_0030DC10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_0030DC20; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_0030DC1C:
    st16((c.r[18].w[0] + 1828u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 1;
L_0030DC20:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0030E0F4; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0030DC48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030DC40u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 68u, depth + 1u); else { c.pc = 0x0024D130u; return; } if (c.pc != 0x0030DC40u) [[unlikely]] return; }
L_0030DC40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030E0F4; } }
L_0030DC48:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1730u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_0030DC68; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030DC5Cu); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 68u, depth + 1u); else { c.pc = 0x0024D130u; return; } if (c.pc != 0x0030DC5Cu) [[unlikely]] return; }
L_0030DC5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030E0F4; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_0030DC68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0030E0F4; } }
L_0030DC70:
    c.r[4].d[0] = ld16((c.r[18].w[0] + 1830u));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st16((c.r[18].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1735u)));
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_0030DDF8; }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1726u)));
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_0030DDA4; } }
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[4].d[0];  if (t) { goto L_0030DD5C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_0030DD24; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0030DCC4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030E0F4; } }
L_0030DCC4:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 512ull;
    st16((c.r[18].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8387u)));
    c.r[1].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0030DCE4; } }
    mmi::paddub(c.r[3], c.r[4], c.r[0]);
    c.budget -= 1;
L_0030DCE4:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8386u)));
    c.r[5].d[0] = c.r[3].d[0] << 56;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[4], c.r[3].w[0] - 15008u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    set32(c.r[6], c.r[7].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].d[0] = c.r[5].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[3], 0u + 1u);
    st8((c.r[18].w[0] + 1730u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1726u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0030E0F4; } }
L_0030DD24:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1730u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0030DD40; } }
    set32(c.r[3], 0u + 60u);
    st8((c.r[18].w[0] + 1726u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0030E0F4; } }
L_0030DD40:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 512ull;
    st16((c.r[18].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1730u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0030E0F4; } }
L_0030DD5C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0030DD7C; } }
    set32(c.r[3], 0u + 45u);
    st8((c.r[18].w[0] + 1726u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0030E0F4; } }
L_0030DD7C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1730u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_0030DD9C; }
    set32(c.r[3], 0u + 45u);
    st8((c.r[18].w[0] + 1726u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0030E0F4; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_0030DD9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0030E0F4; } }
L_0030DDA4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1730u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0030DDB8; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[18].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0030DDB8:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 812u)));
    c.r[3].d[0] = c.r[4].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0030E0F4; } }
    c.r[3].d[0] = c.r[4].d[0] & 128ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (t) { goto L_0030DDE4; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1730u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0030E0F4; } }
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 1;
L_0030DDE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030DDECu);  if (depth < kMaxDepth) unit_0053(c, 68u, depth + 1u); else { c.pc = 0x0024D130u; return; } if (c.pc != 0x0030DDECu) [[unlikely]] return; }
L_0030DDEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030E0F4; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_0030DDF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1735u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0030E0F4; } }
L_0030DE00:
    c.r[4].d[0] = ld16((c.r[18].w[0] + 1830u));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st16((c.r[18].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1735u)));
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_0030E034; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1726u)));
    set32(c.r[6], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_0030DFD0; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_0030DF20; } }
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_0030DED8; } }
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_0030DEA0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0030DE60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030E0F4; } }
L_0030DE60:
    c.r[4].d[0] = ld16((c.r[18].w[0] + 704u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] - 14928u);
    c.r[4].d[0] = c.r[4].d[0] | 768ull;
    st16((c.r[18].w[0] + 704u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8386u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8388u)));
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.r[4].d[0] = c.r[4].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    st8((c.r[18].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1726u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { goto L_0030E0F4; } }
L_0030DEA0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1730u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0030DEBC; } }
    set32(c.r[3], 0u + 60u);
    st8((c.r[18].w[0] + 1726u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0030E0F4; } }
L_0030DEBC:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 768ull;
    st16((c.r[18].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1730u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0030E0F4; } }
L_0030DED8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0030DEF8; } }
    set32(c.r[3], 0u + 45u);
    st8((c.r[18].w[0] + 1726u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0030E0F4; } }
L_0030DEF8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1730u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_0030DF18; }
    set32(c.r[3], 0u + 45u);
    st8((c.r[18].w[0] + 1726u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0030E0F4; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_0030DF18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0030E0F4; } }
L_0030DF20:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1730u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0030DF94; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[18].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8386u)));
    set32(c.r[3], 0u + 6u);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0030DF94; } }
    c.f[1] = ld32((c.r[18].w[0] + 7756u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41980000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0030DF94; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 575u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0030DF94; } }
    st8((c.r[18].w[0] + 1726u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st16((c.r[18].w[0] + 704u), static_cast<std::uint16_t>(0u));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 1024ull;
    st16((c.r[18].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 768ull;
    st16((c.r[18].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 8;
L_0030DF94:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 812u)));
    c.r[3].d[0] = c.r[4].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0030E0F4; } }
    c.r[3].d[0] = c.r[4].d[0] & 128ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (t) { goto L_0030DFC0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1730u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0030E0F4; } }
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 1;
L_0030DFC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030DFC8u);  if (depth < kMaxDepth) unit_0053(c, 68u, depth + 1u); else { c.pc = 0x0024D130u; return; } if (c.pc != 0x0030DFC8u) [[unlikely]] return; }
L_0030DFC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030E0F4; } }
L_0030DFD0:
    st16((c.r[18].w[0] + 704u), static_cast<std::uint16_t>(0u));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 1024ull;
    st16((c.r[18].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1730u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0030DFF4; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[18].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0030DFF4:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 812u)));
    c.r[3].d[0] = c.r[4].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0030E0F4; } }
    goto L_0030E004;
L_0030E000:
    c.budget -= 1;
L_0030E004:
    c.r[3].d[0] = c.r[4].d[0] & 128ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (t) { goto L_0030E020; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1730u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0030E0F4; } }
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 1;
L_0030E020:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E028u);  if (depth < kMaxDepth) unit_0053(c, 68u, depth + 1u); else { c.pc = 0x0024D130u; return; } if (c.pc != 0x0030E028u) [[unlikely]] return; }
L_0030E028:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030E0F4; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_0030E034:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1735u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0030E0F4; } }
L_0030E03C:
    c.r[4].d[0] = ld16((c.r[18].w[0] + 1830u));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st16((c.r[18].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1735u)));
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_0030E0F0; }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1726u)));
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_0030E0C0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0030E094; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0030E084; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030E0F4; } }
L_0030E084:
    st8((c.r[18].w[0] + 1726u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 30u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0030E0F4; } }
L_0030E094:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1730u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0030E0B8; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[18].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 256ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0030E0F4; } }
L_0030E0B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1726u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0030E0F4; } }
L_0030E0C0:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 812u)));
    c.r[3].d[0] = c.r[4].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0030E0F4; } }
    c.r[3].d[0] = c.r[4].d[0] & 128ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0030E0F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E0E4u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 68u, depth + 1u); else { c.pc = 0x0024D130u; return; } if (c.pc != 0x0030E0E4u) [[unlikely]] return; }
L_0030E0E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030E0F4; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_0030E0F0:
    st8((c.r[18].w[0] + 1735u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_0030E0F4:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0030E0F8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0030E110:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 736u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0030E134; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E12Cu);  if (depth < kMaxDepth) unit_0083(c, 150u, depth + 1u); else { c.pc = 0x0030EBE0u; return; } if (c.pc != 0x0030E12Cu) [[unlikely]] return; }
L_0030E12C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0030E238; } }
L_0030E134:
    c.r[5].d[0] = ld16((c.r[4].w[0] + 704u));
    set32(c.r[3], 0u + 4u);
    c.r[5].d[0] = c.r[5].d[0] | 128ull;
    st16((c.r[4].w[0] + 704u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1725u)));
    c.budget -= 7;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_0030E1F4; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_0030E1B0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[3], c.r[6].w[0] + 1u);  if (t) { goto L_0030E1A8; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_0030E184; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0030E184; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030E234; } }
L_0030E184:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1725u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].d[0] = ld16((c.r[4].w[0] + 1830u));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0030E234; } }
    set32(c.r[3], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_0030E1A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0030E234; } }
L_0030E1B0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0030E1D0; } }
    c.r[5].d[0] = ld8((c.r[4].w[0] + 741u));
    set32(c.r[3], 0u + 14u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[3], c.r[6].w[0] - 1u);  if (t) { goto L_0030E1EC; } }
L_0030E1D0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1725u)));
    set32(c.r[3], 0u + 30u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 1725u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 1731u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0030E234; } }
    set32(c.r[3], c.r[6].w[0] - 1u);
    c.budget -= 1;
L_0030E1EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0030E234; } }
L_0030E1F4:
    c.r[5].d[0] = ld16((c.r[4].w[0] + 1830u));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st16((c.r[4].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1731u)));
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_0030E230; }
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 1724u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 3u);
    st8((c.r[4].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 5u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 1726u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0030E234; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_0030E230:
    st8((c.r[4].w[0] + 1731u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_0030E234:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_0030E238:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0030E240:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 9;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 1u);  goto L_0030E270; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[3].d[0] << 56;  if (t) { goto L_0030E274; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0030E270:
    c.r[6].d[0] = c.r[3].d[0] << 56;
    c.budget -= 1;
L_0030E274:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 1830u));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    set32(c.r[4], 0u + 2u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1725u)));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);  if (t) { goto L_0030E49C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0030E458; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0030E2B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0030E534; } }
L_0030E2B0:
    c.f[1] = ld32((c.r[16].w[0] + 7796u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 848u)));
    c.f[1] = fp::add(c.f[0], c.f[1]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0030E2FC; } }
    c.f[1] = ld32((c.r[16].w[0] + 1228u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0030E438; } }
L_0030E2FC:
    set32(c.r[5], ld32((c.r[16].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0030E530; } }
    c.f[1] = ld32((c.r[5].w[0] + 1068u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0030E360; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 532u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0030E360; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    c.r[3].d[0] = c.r[6].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0030E360; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 8192ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0030E370; } }
L_0030E360:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    set32(c.r[3], 0u + 16u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0030E530; } }
L_0030E370:
    c.f[3] = ld32((c.r[5].w[0] + 32u));
    c.f[2] = ld32((c.r[16].w[0] + 32u));
    c.f[1] = ld32((c.r[5].w[0] + 40u));
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E394u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x0030E394u) [[unlikely]] return; }
L_0030E394:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[3], 0u + 11u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0030E3BC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[3].w[0] + 13488u);
    set32(c.r[4], c.r[4].w[0] << 7);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 88u);  if (t) { goto L_0030E3D0; } }
L_0030E3BC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[3].w[0] + 13488u);
    set32(c.r[4], c.r[4].w[0] << 7);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + 96u);
    c.budget -= 5;
L_0030E3D0:
    c.f[2] = ld32((c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0030E530; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[3], 0u + 11u);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0030E420; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 256ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0030E42C; } }
L_0030E420:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 384ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0030E42C:
    set32(c.r[3], 0u + 45u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0030E530; } }
L_0030E438:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0030E530; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E450u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 68u, depth + 1u); else { c.pc = 0x0024D130u; return; } if (c.pc != 0x0030E450u) [[unlikely]] return; }
L_0030E450:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030E530; } }
L_0030E458:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0030E474; } }
    st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1730u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0030E530; } }
L_0030E474:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1730u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_0030E494; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E488u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 68u, depth + 1u); else { c.pc = 0x0024D130u; return; } if (c.pc != 0x0030E488u) [[unlikely]] return; }
L_0030E488:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030E530; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_0030E494:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0030E530; } }
L_0030E49C:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 575u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0030E50C; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 574u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1730u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0030E50C; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 592u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0030E50C; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 531u));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 531u));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0030E50C; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    c.r[3].d[0] = c.r[6].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0030E50C; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 514u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_0030E50C; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 256ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 574u));
    st8((c.r[16].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
L_0030E50C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0030E530; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0030E530; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E530u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 68u, depth + 1u); else { c.pc = 0x0024D130u; return; } if (c.pc != 0x0030E530u) [[unlikely]] return; }
L_0030E530:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0030E534:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0030E540:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 9;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 1u);  goto L_0030E570; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1725u)));  if (t) { goto L_0030E574; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0030E570:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1725u)));
    c.budget -= 1;
L_0030E574:
    c.r[5].d[0] = c.r[3].d[0] << 56;
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);  if (t) { goto L_0030E644; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { mmi::paddub(c.r[4], c.r[16], c.r[0]);  goto L_0030E5F4; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { mmi::paddub(c.r[4], c.r[16], c.r[0]);  goto L_0030E5C8; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_0030E5B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0030E77C; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_0030E5B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E5B8u);  if (depth < kMaxDepth) unit_0083(c, 73u, depth + 1u); else { c.pc = 0x0030D1E0u; return; } if (c.pc != 0x0030E5B8u) [[unlikely]] return; }
L_0030E5B8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0030E778; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_0030E5C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E5D0u);  if (depth < kMaxDepth) unit_0083(c, 73u, depth + 1u); else { c.pc = 0x0030D1E0u; return; } if (c.pc != 0x0030E5D0u) [[unlikely]] return; }
L_0030E5D0:
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = ld16((c.r[16].w[0] + 704u));
    set32(c.r[3], 0u + 45u);
    c.r[4].d[0] = c.r[4].d[0] | 384ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0030E778; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_0030E5F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E5FCu);  if (depth < kMaxDepth) unit_0083(c, 73u, depth + 1u); else { c.pc = 0x0030D1E0u; return; } if (c.pc != 0x0030E5FCu) [[unlikely]] return; }
L_0030E5FC:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0030E61C; } }
    set32(c.r[3], 0u + 3u);
    st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1730u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0030E778; } }
L_0030E61C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1730u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_0030E63C; }
    set32(c.r[3], 0u + 3u);
    st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1730u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0030E778; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_0030E63C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0030E778; } }
L_0030E644:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 575u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0030E6A8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1730u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0030E6A8; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 592u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0030E6A8; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 531u));
    c.r[3].d[0] = ld8((c.r[6].w[0] + 531u));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0030E6A8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 1u)));
    c.r[3].d[0] = c.r[5].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0030E6A8; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 514u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_0030E6A8; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 256ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0030E6A8:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 575u));
    st8((c.r[16].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0030E778; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0030E778; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E6D4u);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x0030E6D4u) [[unlikely]] return; }
L_0030E6D4:
    set32(c.r[3], 0u + 3u);
    c.r[4].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 1024u);  goto L_0030E764; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 2048u);  goto L_0030E744; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 4096u);  goto L_0030E724; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_0030E710; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030E778; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_0030E710:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E718u);  if (depth < kMaxDepth) unit_0053(c, 68u, depth + 1u); else { c.pc = 0x0024D130u; return; } if (c.pc != 0x0030E718u) [[unlikely]] return; }
L_0030E718:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030E778; } }
    set32(c.r[2], 0u + 4096u);
    c.budget -= 1;
L_0030E724:
    st16((c.r[16].w[0] + 1830u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E730u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0083(c, 164u, depth + 1u); else { c.pc = 0x0030EE00u; return; } if (c.pc != 0x0030E730u) [[unlikely]] return; }
L_0030E730:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E738u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 69u, depth + 1u); else { c.pc = 0x0024D140u; return; } if (c.pc != 0x0030E738u) [[unlikely]] return; }
L_0030E738:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030E778; } }
    set32(c.r[2], 0u + 2048u);
    c.budget -= 1;
L_0030E744:
    st16((c.r[16].w[0] + 1830u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E750u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0083(c, 164u, depth + 1u); else { c.pc = 0x0030EE00u; return; } if (c.pc != 0x0030E750u) [[unlikely]] return; }
L_0030E750:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E758u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 69u, depth + 1u); else { c.pc = 0x0024D140u; return; } if (c.pc != 0x0030E758u) [[unlikely]] return; }
L_0030E758:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030E778; } }
    set32(c.r[2], 0u + 1024u);
    c.budget -= 1;
L_0030E764:
    st16((c.r[16].w[0] + 1830u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E770u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0083(c, 164u, depth + 1u); else { c.pc = 0x0030EE00u; return; } if (c.pc != 0x0030E770u) [[unlikely]] return; }
L_0030E770:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E778u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 69u, depth + 1u); else { c.pc = 0x0024D140u; return; } if (c.pc != 0x0030E778u) [[unlikely]] return; }
L_0030E778:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0030E77C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0030E790:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1725u)));
    set32(c.r[7], 0u + 3u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[7].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_0030E910; } }
    set32(c.r[6], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_0030E8EC; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_0030E7F8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0030E7D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0030E92C; } }
L_0030E7D4:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0030E928; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_0030E928; } }
L_0030E7F8:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 1528u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0030E840; } }
    st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1580u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0030E830; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 512ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0030E928; } }
L_0030E830:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 768ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0030E928; } }
L_0030E840:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1836u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_0030E858; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(c.r[7].w[0]));  if (t) { goto L_0030E928; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_0030E858:
    st16((c.r[16].w[0] + 1836u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 1824u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0030E928; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBE4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    set32(c.r[5], c.r[3].w[0] + 32u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E880u); set32(c.r[6], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_005B(c, 162u, depth + 1u); else { c.pc = 0x0026E650u; return; } if (c.pc != 0x0030E880u) [[unlikely]] return; }
L_0030E880:
    c.f[1] = ld32((c.r[16].w[0] + 968u));
    c.f[0] = ld32((c.r[29].w[0] + 32u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0030E8A8; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 1024ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0030E8B4; } }
L_0030E8A8:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 2048ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0030E8B4:
    c.f[1] = ld32((c.r[16].w[0] + 972u));
    c.f[0] = ld32((c.r[29].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0030E8DC; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 8192ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0030E928; } }
L_0030E8DC:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 4096ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0030E928; } }
L_0030E8EC:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0030E928; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(c.r[7].w[0]));  if (t) { goto L_0030E928; } }
L_0030E910:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0030E928; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E928u);  if (depth < kMaxDepth) unit_0053(c, 68u, depth + 1u); else { c.pc = 0x0024D130u; return; } if (c.pc != 0x0030E928u) [[unlikely]] return; }
L_0030E928:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0030E92C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0030E940:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1725u)));
    set32(c.r[6], 0u + 2u);
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == c.r[6].d[0];  if (t) { goto L_0030EAD8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0030EA7C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0030E984; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);  if (t) { goto L_0030EBC4; } }
L_0030E984:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 812u)));
    c.r[3].d[0] = c.r[4].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[4].d[0] & 8192ull;  if (t) { goto L_0030E9B0; } }
    st8((c.r[17].w[0] + 1734u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 1735u), static_cast<std::uint8_t>(0u));
    st16((c.r[17].w[0] + 1832u), static_cast<std::uint16_t>(0u));
    st8((c.r[17].w[0] + 1724u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 1732u), static_cast<std::uint16_t>(0u));  if (t) { goto L_0030EBC0; } }
    c.r[3].d[0] = c.r[4].d[0] & 8192ull;
    c.budget -= 1;
L_0030E9B0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0030EBC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E9C0u);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x0030E9C0u) [[unlikely]] return; }
L_0030E9C0:
    c.r[3].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_0030EA74; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030E9D8u); st8((c.r[17].w[0] + 1725u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x0030E9D8u) [[unlikely]] return; }
L_0030E9D8:
    c.r[3].d[0] = c.r[2].d[0] & 3ull;
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 4096u);  if (t) { goto L_0030EA38; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 8192u);  if (t) { goto L_0030EA2C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1024u);  if (t) { goto L_0030EA20; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 2048u);  if (t) { goto L_0030EA14; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 30u);  if (t) { goto L_0030EA40; } }
    set32(c.r[2], 0u + 2048u);
    c.budget -= 1;
L_0030EA14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 1830u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0030EA3C; } }
    set32(c.r[2], 0u + 1024u);
    c.budget -= 1;
L_0030EA20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 1830u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0030EA3C; } }
    set32(c.r[2], 0u + 8192u);
    c.budget -= 1;
L_0030EA2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 1830u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0030EA3C; } }
    set32(c.r[2], 0u + 4096u);
    c.budget -= 1;
L_0030EA38:
    st16((c.r[17].w[0] + 1830u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_0030EA3C:
    set32(c.r[2], 0u + 30u);
    c.budget -= 1;
L_0030EA40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030EA48u); st8((c.r[17].w[0] + 1730u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x0030EA48u) [[unlikely]] return; }
L_0030EA48:
    c.r[4].d[0] = c.r[2].d[0] & 7ull;
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1730u)));
    set32(c.r[4], c.r[4].w[0] << 1);
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0030EBC0; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_0030EA74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0030EBC0; } }
L_0030EA7C:
    c.r[5].d[0] = ld16((c.r[17].w[0] + 1830u));
    c.r[4].d[0] = ld16((c.r[17].w[0] + 704u));
    set32(c.r[3], 0u + 12u);
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st16((c.r[17].w[0] + 704u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[17].w[0] + 580u));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0030EAD8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1730u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_0030EAB4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 1725u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { goto L_0030EAD8; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_0030EAB4:
    st8((c.r[17].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 846u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0030EAD8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1730u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0030EAD8; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[17].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0030EAD8:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 812u)));
    c.r[3].d[0] = c.r[4].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0030EBC0; } }
    c.r[3].d[0] = c.r[4].d[0] & 8192ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0030EBC0; } }
    st8((c.r[17].w[0] + 1734u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 1735u), static_cast<std::uint8_t>(0u));
    st16((c.r[17].w[0] + 1832u), static_cast<std::uint16_t>(0u));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8386u)));
    set32(c.r[3], 0u + 17u);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0030EBB4; } }
    set32(c.r[3], 0u + 18u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0030EBB4; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1845u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0030EBB4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41E00000u);
    c.f[12] = c.r[2].w[0];
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.r[5].d[0] = 0ull | 49152ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030EB40u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 8u, depth + 1u); else { c.pc = 0x0024C2C0u; return; } if (c.pc != 0x0030EB40u) [[unlikely]] return; }
L_0030EB40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[2], c.r[0]);  if (t) { goto L_0030EBB4; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[2].w[0] - 14880u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1838u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[18], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[18].sd[0] < 47ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0030EB74; } }
    set32(c.r[18], 0u + 47u);
    c.budget -= 1;
L_0030EB74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030EB7Cu);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x0030EB7Cu) [[unlikely]] return; }
L_0030EB7C:
    set32(c.r[3], c.r[18].w[0] << 4);
    c.r[4].d[0] = c.r[2].d[0] & 15ull;
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] - 14848u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0030EBB4; } }
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030EBACu); st32((c.r[17].w[0] + 1824u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0083(c, 160u, depth + 1u); else { c.pc = 0x0030EDC0u; return; } if (c.pc != 0x0030EBACu) [[unlikely]] return; }
L_0030EBAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030EBC0; } }
L_0030EBB4:
    st8((c.r[17].w[0] + 1724u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 1725u), static_cast<std::uint8_t>(0u));
    st16((c.r[17].w[0] + 1732u), static_cast<std::uint16_t>(0u));
    c.budget -= 3;
L_0030EBC0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0030EBC4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0030EBE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[4].w[0] + 1724u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 180u);
    st8((c.r[4].w[0] + 1725u), static_cast<std::uint8_t>(0u));
    st16((c.r[4].w[0] + 1738u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[4].w[0] + 1824u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030EC0Cu); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0084(c, 109u, depth + 1u); else { c.pc = 0x00310D30u; return; } if (c.pc != 0x0030EC0Cu) [[unlikely]] return; }
L_0030EC0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030EC14u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0084(c, 157u, depth + 1u); else { c.pc = 0x00311410u; return; } if (c.pc != 0x0030EC14u) [[unlikely]] return; }
L_0030EC14:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0030EC30:
    set32(c.r[3], 0u + 2u);
    st8((c.r[4].w[0] + 1724u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 1727u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_0030EC40:
    set32(c.r[3], 0u + 3u);
    st8((c.r[4].w[0] + 1724u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 1727u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_0030EC50:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    set32(c.r[3], 0u + 17u);
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_0030ED90; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 1824u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x447A0000u);  if (t) { goto L_0030EC94; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030EC88u);  if (depth < kMaxDepth) unit_0053(c, 47u, depth + 1u); else { c.pc = 0x0024CEB0u; return; } if (c.pc != 0x0030EC88u) [[unlikely]] return; }
L_0030EC88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));  if (t) { goto L_0030EC9C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    c.budget -= 1;
L_0030EC94:
    c.f[0] = c.r[3].w[0];
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.budget -= 2;
L_0030EC9C:
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.f[20] = c.f[0];  if (t) { goto L_0030ECE8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42340000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0030ED2C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030ECCCu);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x0030ECCCu) [[unlikely]] return; }
L_0030ECCC:
    c.r[3].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0030ED2C; } }
    set32(c.r[3], 0u + 6u);
    st8((c.r[16].w[0] + 1724u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0030ED9C; } }
L_0030ECE8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0030ED2C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8387u)));
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0030ED2C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42340000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0030ED2C; } }
    set32(c.r[3], 0u + 5u);
    st8((c.r[16].w[0] + 1724u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0030ED9C; } }
L_0030ED2C:
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] - 14080u);
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 4u);  if (t) { goto L_0030ED94; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030ED5Cu);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x0030ED5Cu) [[unlikely]] return; }
L_0030ED5C:
    set32(c.r[3], c.r[17].w[0] << 4);
    c.r[4].d[0] = c.r[2].d[0] & 15ull;
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] - 13984u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0030ED90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030ED88u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0083(c, 167u, depth + 1u); else { c.pc = 0x0030EE30u; return; } if (c.pc != 0x0030ED88u) [[unlikely]] return; }
L_0030ED88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);  if (t) { goto L_0030EDA0; } }
L_0030ED90:
    set32(c.r[3], 0u + 4u);
    c.budget -= 1;
L_0030ED94:
    st8((c.r[16].w[0] + 1724u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0030ED9C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0030EDA0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0030EDC0:
    set32(c.r[3], 0u + 4u);
    st8((c.r[4].w[0] + 1724u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 1725u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_0030EDD0:
    set32(c.r[3], 0u + 5u);
    st8((c.r[4].w[0] + 1724u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 1725u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_0030EDE0:
    set32(c.r[3], 0u + 6u);
    st8((c.r[4].w[0] + 1724u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 1725u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_0030EDF0:
    set32(c.r[3], 0u + 7u);
    st8((c.r[4].w[0] + 1724u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 1725u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_0030EE00:
    set32(c.r[3], 0u + 8u);
    st8((c.r[4].w[0] + 1724u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 1725u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_0030EE10:
    set32(c.r[3], 0u + 9u);
    st8((c.r[4].w[0] + 1724u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 1725u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_0030EE20:
    set32(c.r[3], 0u + 10u);
    st8((c.r[4].w[0] + 1724u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 1725u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_0030EE30:
    set32(c.r[3], 0u + 11u);
    st8((c.r[4].w[0] + 1724u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 1725u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_0030EE40:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 12;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 1u);  goto L_0030EE7C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[3].d[0] << 56;  if (t) { goto L_0030EE80; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0030EE7C:
    c.r[17].d[0] = c.r[3].d[0] << 56;
    c.budget -= 1;
L_0030EE80:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 1736u)));
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_0030EFE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030EE98u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 81u, depth + 1u); else { c.pc = 0x0024D300u; return; } if (c.pc != 0x0030EE98u) [[unlikely]] return; }
L_0030EE98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030EEA0u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 38u, depth + 1u); else { c.pc = 0x0024CAD0u; return; } if (c.pc != 0x0030EEA0u) [[unlikely]] return; }
L_0030EEA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[1] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.f[12] = fp::mul(c.f[1], c.f[0]);  if (t) { goto L_0030EF50; } }
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.r[5].d[0] = 0ull | 49152ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030EECCu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 8u, depth + 1u); else { c.pc = 0x0024C2C0u; return; } if (c.pc != 0x0030EECCu) [[unlikely]] return; }
L_0030EECC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[19], c.r[2], c.r[0]);  if (t) { goto L_0030EFEC; } }
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030EEE0u); mmi::paddub(c.r[5], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0083(c, 217u, depth + 1u); else { c.pc = 0x0030F640u; return; } if (c.pc != 0x0030EEE0u) [[unlikely]] return; }
L_0030EEE0:
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0030EFEC; } }
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030EEFCu); st32((c.r[18].w[0] + 1824u), c.r[19].w[0]);  if (depth < kMaxDepth) unit_0083(c, 189u, depth + 1u); else { c.pc = 0x0030F0E0u; return; } if (c.pc != 0x0030EEFCu) [[unlikely]] return; }
L_0030EEFC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030EFEC; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8386u)));
    set32(c.r[3], 0u + 18u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0030EF2C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030EF1Cu); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0083(c, 155u, depth + 1u); else { c.pc = 0x0030EC50u; return; } if (c.pc != 0x0030EF1Cu) [[unlikely]] return; }
L_0030EF1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030EF24u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 69u, depth + 1u); else { c.pc = 0x0024D140u; return; } if (c.pc != 0x0030EF24u) [[unlikely]] return; }
L_0030EF24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_0030EFEC; } }
L_0030EF2C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 1592u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0030EFEC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030EF40u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0083(c, 155u, depth + 1u); else { c.pc = 0x0030EC50u; return; } if (c.pc != 0x0030EF40u) [[unlikely]] return; }
L_0030EF40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030EF48u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 69u, depth + 1u); else { c.pc = 0x0024D140u; return; } if (c.pc != 0x0030EF48u) [[unlikely]] return; }
L_0030EF48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_0030EFEC; } }
L_0030EF50:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.r[5].d[0] = 0ull | 49152ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030EF60u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 8u, depth + 1u); else { c.pc = 0x0024C2C0u; return; } if (c.pc != 0x0030EF60u) [[unlikely]] return; }
L_0030EF60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[19], c.r[2], c.r[0]);  if (t) { goto L_0030EFEC; } }
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030EF74u); mmi::paddub(c.r[5], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0083(c, 217u, depth + 1u); else { c.pc = 0x0030F640u; return; } if (c.pc != 0x0030EF74u) [[unlikely]] return; }
L_0030EF74:
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0030EFEC; } }
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030EF90u); st32((c.r[18].w[0] + 1824u), c.r[19].w[0]);  if (depth < kMaxDepth) unit_0083(c, 189u, depth + 1u); else { c.pc = 0x0030F0E0u; return; } if (c.pc != 0x0030EF90u) [[unlikely]] return; }
L_0030EF90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030EFEC; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8386u)));
    set32(c.r[3], 0u + 18u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0030EFC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030EFB0u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0083(c, 155u, depth + 1u); else { c.pc = 0x0030EC50u; return; } if (c.pc != 0x0030EFB0u) [[unlikely]] return; }
L_0030EFB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030EFB8u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 69u, depth + 1u); else { c.pc = 0x0024D140u; return; } if (c.pc != 0x0030EFB8u) [[unlikely]] return; }
L_0030EFB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_0030EFEC; } }
L_0030EFC0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 1592u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0030EFEC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030EFD4u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0083(c, 155u, depth + 1u); else { c.pc = 0x0030EC50u; return; } if (c.pc != 0x0030EFD4u) [[unlikely]] return; }
L_0030EFD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030EFDCu); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 69u, depth + 1u); else { c.pc = 0x0024D140u; return; } if (c.pc != 0x0030EFDCu) [[unlikely]] return; }
L_0030EFDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_0030EFEC; } }
L_0030EFE4:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[18].w[0] + 1736u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0030EFEC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0030F0C4; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 1828u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_0030F0C0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F008u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 89u, depth + 1u); else { c.pc = 0x0024D410u; return; } if (c.pc != 0x0030F008u) [[unlikely]] return; }
L_0030F008:
    set32(c.r[5], ld32((c.r[18].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0030F0C4; } }
    c.f[1] = ld32((c.r[5].w[0] + 1068u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0030F06C; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 532u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0030F06C; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    c.r[3].d[0] = c.r[17].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0030F06C; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 8192ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0030F07C; } }
L_0030F06C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    set32(c.r[3], 0u + 16u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0030F0C4; } }
L_0030F07C:
    st32((c.r[18].w[0] + 1824u), c.r[5].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F088u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0083(c, 189u, depth + 1u); else { c.pc = 0x0030F0E0u; return; } if (c.pc != 0x0030F088u) [[unlikely]] return; }
L_0030F088:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030F0C4; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 1520u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F09Cu); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0083(c, 217u, depth + 1u); else { c.pc = 0x0030F640u; return; } if (c.pc != 0x0030F09Cu) [[unlikely]] return; }
L_0030F09C:
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0030F0C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F0B4u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0083(c, 199u, depth + 1u); else { c.pc = 0x0030F2F0u; return; } if (c.pc != 0x0030F0B4u) [[unlikely]] return; }
L_0030F0B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);  if (t) { goto L_0030F0C8; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_0030F0C0:
    st16((c.r[18].w[0] + 1828u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 1;
L_0030F0C4:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0030F0C8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0030F0E0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[4].w[0] + 1824u)));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[20], c.r[4], c.r[0]);  if (t) { goto L_0030F2B0; } }
    c.f[5] = ld32((c.r[2].w[0] + 32u));
    c.f[4] = ld32((c.r[20].w[0] + 32u));
    c.f[1] = ld32((c.r[2].w[0] + 40u));
    c.f[0] = ld32((c.r[20].w[0] + 40u));
    c.f[3] = ld32((c.r[2].w[0] + 36u));
    c.f[2] = ld32((c.r[20].w[0] + 36u));
    c.f[20] = fp::sub(c.f[5], c.f[4]);
    c.f[22] = fp::sub(c.f[1], c.f[0]);
    c.f[21] = fp::sub(c.f[3], c.f[2]);
    c.f[12] = c.f[20];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F148u); c.f[13] = c.f[22];  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x0030F148u) [[unlikely]] return; }
L_0030F148:
    c.facc = fp::mul(c.f[20], c.f[20]);
    c.f[12] = fp::add(c.facc, fp::mul(c.f[22], c.f[22]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F158u); mmi::paddub(c.r[18], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x0030F158u) [[unlikely]] return; }
L_0030F158:
    c.f[20] = c.f[0];
    c.f[12] = c.f[21];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F168u); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x0030F168u) [[unlikely]] return; }
L_0030F168:
    c.facc = fp::mul(c.f[20], c.f[20]);
    c.f[12] = fp::add(c.facc, fp::mul(c.f[21], c.f[21]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F178u); mmi::paddub(c.r[16], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x0030F178u) [[unlikely]] return; }
L_0030F178:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[17], c.r[2].w[0] + 26144u);
    c.f[20] = c.f[0];
    c.r[19].d[0] = c.r[16].d[0] & 65535ull;
    c.r[2].d[0] = 0ull | 65535ull;
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[18].d[0] & c.r[2].d[0];  if (t) { goto L_0030F298; } }
L_0030F198:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[16].w[0] + 1u);  if (t) { goto L_0030F288; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 531u));
    c.r[2].d[0] = ld8((c.r[20].w[0] + 531u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0030F284; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[20].d[0];  if (t) { goto L_0030F284; } }
    c.f[5] = ld32((c.r[17].w[0] + 32u));
    c.f[4] = ld32((c.r[20].w[0] + 32u));
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = ld32((c.r[20].w[0] + 40u));
    c.f[3] = ld32((c.r[17].w[0] + 36u));
    c.f[2] = ld32((c.r[20].w[0] + 36u));
    c.f[21] = fp::sub(c.f[5], c.f[4]);
    c.f[23] = fp::sub(c.f[1], c.f[0]);
    c.f[22] = fp::sub(c.f[3], c.f[2]);
    c.f[12] = c.f[21];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F1F0u); c.f[13] = c.f[23];  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x0030F1F0u) [[unlikely]] return; }
L_0030F1F0:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] - c.r[18].w[0]);
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[1].d[0] = c.r[3].sd[0] < 1025ll ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] != 0ull) { c.facc = fp::mul(c.f[21], c.f[21]);  goto L_0030F21C; }
    c.r[2].d[0] = 0ull | 64512ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0030F284; } }
    c.facc = fp::mul(c.f[21], c.f[21]);
    c.budget -= 1;
L_0030F21C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F224u); c.f[12] = fp::add(c.facc, fp::mul(c.f[23], c.f[23]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x0030F224u) [[unlikely]] return; }
L_0030F224:
    c.f[21] = c.f[0];
    c.f[12] = c.f[22];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F234u); c.f[13] = c.f[21];  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x0030F234u) [[unlikely]] return; }
L_0030F234:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] - c.r[19].w[0]);
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[1].d[0] = c.r[3].sd[0] < 1025ll ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] != 0ull) { c.facc = fp::mul(c.f[21], c.f[21]);  goto L_0030F264; }
    c.r[2].d[0] = 0ull | 64512ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0030F284; } }
    c.facc = fp::mul(c.f[21], c.f[21]);
    c.budget -= 2;
L_0030F264:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F26Cu); c.f[12] = fp::add(c.facc, fp::mul(c.f[22], c.f[22]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x0030F26Cu) [[unlikely]] return; }
L_0030F26C:
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0030F284; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0030F2B4; } }
L_0030F284:
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0030F288:
    c.r[16].d[0] = c.r[2].d[0] << 56;
    set32(c.r[17], c.r[17].w[0] + 8448u);
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);
    c.budget -= 4;
L_0030F298:
    c.r[2].d[0] = c.r[16].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[2].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030F198u | kUnwind; return; } goto L_0030F198; } }
    c.budget -= 1;
L_0030F2B0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0030F2B4:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0030F2F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    set32(c.r[3], 0u + 18u);
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { goto L_0030F3B0; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 1580u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0030F380; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 1592u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0030F380; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F330u);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x0030F330u) [[unlikely]] return; }
L_0030F330:
    set32(c.r[3], c.r[16].w[0] << 4);
    c.r[4].d[0] = c.r[2].d[0] & 15ull;
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 736u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0030F364; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] - 17216u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[16], 0u + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; if (c.r[3].d[0] != 0) c.r[16].d[0] = 0ull;  if (t) { goto L_0030F424; } }
L_0030F364:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] - 16864u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[16], 0u + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; if (c.r[3].d[0] != 0) c.r[16].d[0] = 0ull;  if (t) { goto L_0030F424; } }
L_0030F380:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0030F390; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_0030F424; } }
L_0030F390:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 1592u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[16], 0u + 2u);  if (t) { goto L_0030F3A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_0030F424; } }
    set32(c.r[16], 0u + 2u);
    c.budget -= 1;
L_0030F3A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8386u)));  if (t) { goto L_0030F428; } }
L_0030F3B0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 1580u)));
    c.r[3].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[17].w[0] + 320u);  if (t) { goto L_0030F3FC; } }
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0030F3FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F3D4u);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x0030F3D4u) [[unlikely]] return; }
L_0030F3D4:
    set32(c.r[3], c.r[16].w[0] << 4);
    c.r[4].d[0] = c.r[2].d[0] & 15ull;
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] - 17216u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[16], 0u + 1u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; if (c.r[3].d[0] != 0) c.r[16].d[0] = 0ull;  if (t) { goto L_0030F424; } }
L_0030F3FC:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 1592u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[16], 0u + 2u);  if (t) { goto L_0030F424; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F410u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0083(c, 155u, depth + 1u); else { c.pc = 0x0030EC50u; return; } if (c.pc != 0x0030F410u) [[unlikely]] return; }
L_0030F410:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F418u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 69u, depth + 1u); else { c.pc = 0x0024D140u; return; } if (c.pc != 0x0030F418u) [[unlikely]] return; }
L_0030F418:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_0030F630; } }
    set32(c.r[16], 0u + 2u);
    c.budget -= 1;
L_0030F424:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8386u)));
    c.budget -= 1;
L_0030F428:
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0030F50C; } }
    set32(c.r[3], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0030F50C; } }
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0030F4C0; } }
    set32(c.r[3], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0030F4C0; } }
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0030F46C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[16].d[0] << 56;  if (t) { goto L_0030F558; } }
L_0030F46C:
    set32(c.r[5], ld32((c.r[17].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0030F554; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F480u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 47u, depth + 1u); else { c.pc = 0x0024CEB0u; return; } if (c.pc != 0x0030F480u) [[unlikely]] return; }
L_0030F480:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42340000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].d[0] = c.r[16].d[0] << 56;  if (t) { goto L_0030F4A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_0030F554; } }
    c.r[4].d[0] = c.r[16].d[0] << 56;
    c.budget -= 1;
L_0030F4A8:
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0030F554; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 2u);  if (t) { goto L_0030F554; } }
L_0030F4C0:
    set32(c.r[5], ld32((c.r[17].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0030F554; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F4D4u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 47u, depth + 1u); else { c.pc = 0x0024CEB0u; return; } if (c.pc != 0x0030F4D4u) [[unlikely]] return; }
L_0030F4D4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0030F554; } }
    c.r[4].d[0] = c.r[16].d[0] << 56;
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0030F554; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 2u);  if (t) { goto L_0030F554; } }
L_0030F50C:
    set32(c.r[5], ld32((c.r[17].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0030F554; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F520u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 47u, depth + 1u); else { c.pc = 0x0024CEB0u; return; } if (c.pc != 0x0030F520u) [[unlikely]] return; }
L_0030F520:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42340000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0030F554; } }
    c.r[4].d[0] = c.r[16].d[0] << 56;
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0030F554; } }
    set32(c.r[16], 0u + 2u);
    c.budget -= 1;
L_0030F554:
    c.r[5].d[0] = c.r[16].d[0] << 56;
    c.budget -= 1;
L_0030F558:
    set32(c.r[3], 0u + 2u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0030F62C; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_0030F5D4; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0030F584; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030F62C; } }
L_0030F584:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1724u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0]; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_0030F5BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F598u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 96u, depth + 1u); else { c.pc = 0x0024D540u; return; } if (c.pc != 0x0030F598u) [[unlikely]] return; }
L_0030F598:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030F5B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F5A8u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0083(c, 153u, depth + 1u); else { c.pc = 0x0030EC30u; return; } if (c.pc != 0x0030F5A8u) [[unlikely]] return; }
L_0030F5A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F5B0u);  if (depth < kMaxDepth) unit_0053(c, 75u, depth + 1u); else { c.pc = 0x0024D220u; return; } if (c.pc != 0x0030F5B0u) [[unlikely]] return; }
L_0030F5B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030F62C; } }
L_0030F5B8:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_0030F5BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F5C4u);  if (depth < kMaxDepth) unit_0083(c, 161u, depth + 1u); else { c.pc = 0x0030EDD0u; return; } if (c.pc != 0x0030F5C4u) [[unlikely]] return; }
L_0030F5C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F5CCu);  if (depth < kMaxDepth) unit_0053(c, 69u, depth + 1u); else { c.pc = 0x0024D140u; return; } if (c.pc != 0x0030F5CCu) [[unlikely]] return; }
L_0030F5CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030F62C; } }
L_0030F5D4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8386u)));
    set32(c.r[2], 0u + 6u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { mmi::paddub(c.r[4], c.r[17], c.r[0]);  goto L_0030F61C; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1724u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_0030F618; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F5F8u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 96u, depth + 1u); else { c.pc = 0x0024D540u; return; } if (c.pc != 0x0030F5F8u) [[unlikely]] return; }
L_0030F5F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030F618; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F608u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0083(c, 154u, depth + 1u); else { c.pc = 0x0030EC40u; return; } if (c.pc != 0x0030F608u) [[unlikely]] return; }
L_0030F608:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F610u);  if (depth < kMaxDepth) unit_0053(c, 75u, depth + 1u); else { c.pc = 0x0024D220u; return; } if (c.pc != 0x0030F610u) [[unlikely]] return; }
L_0030F610:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030F62C; } }
L_0030F618:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_0030F61C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F624u);  if (depth < kMaxDepth) unit_0083(c, 162u, depth + 1u); else { c.pc = 0x0030EDE0u; return; } if (c.pc != 0x0030F624u) [[unlikely]] return; }
L_0030F624:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F62Cu);  if (depth < kMaxDepth) unit_0053(c, 69u, depth + 1u); else { c.pc = 0x0024D140u; return; } if (c.pc != 0x0030F62Cu) [[unlikely]] return; }
L_0030F62C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0030F630:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0030F640:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    mmi::paddub(c.r[20], c.r[4], c.r[0]);
    set32(c.r[17], c.r[29].w[0] + 116u);
    st32((c.r[29].w[0] + 112u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[18], c.r[29].w[0] + 120u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[20].w[0] + 8320u);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F690u); st32((c.r[18].w[0]), 0u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x0030F690u) [[unlikely]] return; }
L_0030F690:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F69Cu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x0030F69Cu) [[unlikely]] return; }
L_0030F69C:
    set32(c.r[4], c.r[16].w[0] + 8320u);
    set32(c.r[16], c.r[29].w[0] + 132u);
    st32((c.r[29].w[0] + 128u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[19], c.r[29].w[0] + 136u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F6BCu); st32((c.r[19].w[0]), 0u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x0030F6BCu) [[unlikely]] return; }
L_0030F6BC:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F6C8u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x0030F6C8u) [[unlikely]] return; }
L_0030F6C8:
    c.f[1] = ld32((c.r[29].w[0] + 128u));
    c.f[0] = ld32((c.r[29].w[0] + 112u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0030F704; } }
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 20u, c.f[1], c.f[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030F708; } }
L_0030F704:
    c.f[20] = 0u;
    c.budget -= 1;
L_0030F708:
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[0] = ld32((c.r[17].w[0]));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0030F744; } }
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 21u, c.f[1], c.f[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030F748; } }
L_0030F744:
    c.f[21] = 0u;
    c.budget -= 1;
L_0030F748:
    c.f[1] = ld32((c.r[19].w[0]));
    c.f[0] = ld32((c.r[18].w[0]));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0030F784; } }
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 22u, c.f[1], c.f[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030F788; } }
L_0030F784:
    c.f[22] = 0u;
    c.budget -= 1;
L_0030F788:
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 1;
L_0030F78C:
    c.f[0] = ld32((c.r[29].w[0] + 112u));
    set32(c.r[2], 0u + 2u);
    c.f[0] = fp::add(c.f[0], c.f[20]);
    st32((c.r[29].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[21]);
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[22]);
    st32((c.r[18].w[0]), c.f[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[29].w[0] + 112u);  if (t) { goto L_0030F7E4; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 531u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F7D0u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0077(c, 197u, depth + 1u); else { c.pc = 0x002DE3C0u; return; } if (c.pc != 0x0030F7D0u) [[unlikely]] return; }
L_0030F7D0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_0030F800; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0030F818; } }
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 1;
L_0030F7E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F7ECu);  if (depth < kMaxDepth) unit_0077(c, 192u, depth + 1u); else { c.pc = 0x002DE280u; return; } if (c.pc != 0x0030F7ECu) [[unlikely]] return; }
L_0030F7EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030F7FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0030F818; } }
L_0030F7FC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0030F800:
    c.r[2].d[0] = c.r[16].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030F78Cu | kUnwind; return; } goto L_0030F78C; } }
    c.r[2].d[0] = ld8((c.r[20].w[0] + 530u));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_0030F818:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0030F850:
    set32(c.r[29], c.r[29].w[0] - 336u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], c.r[2].w[0] - 28448u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 7);
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 22;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[3].w[0] + c.r[5].w[0]);  if (t) { goto L_0030F8B4; } }
    c.r[2].d[0] = ld8((c.r[19].w[0] + 784u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030F8BC; } }
L_0030F8B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { [[clang::musttail]] return unit_0084(c, 11u, depth); } }
L_0030F8BC:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 1832u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[2].w[0] - 1u);  [[clang::musttail]] return unit_0084(c, 9u, depth); }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F8D0u);  if (depth < kMaxDepth) unit_0053(c, 101u, depth + 1u); else { c.pc = 0x0024D680u; return; } if (c.pc != 0x0030F8D0u) [[unlikely]] return; }
L_0030F8D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F8D8u); set32(c.r[4], c.r[19].w[0] + 8320u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x0030F8D8u) [[unlikely]] return; }
L_0030F8D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[2].d[0] = c.r[2].d[0] | 244ull;
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F8ECu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 211u, depth + 1u); else { c.pc = 0x00102548u; return; } if (c.pc != 0x0030F8ECu) [[unlikely]] return; }
L_0030F8EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F8F4u); set32(c.r[4], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0030F8F4u) [[unlikely]] return; }
L_0030F8F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F8FCu); set32(c.r[4], c.r[16].w[0] + 144u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x0030F8FCu) [[unlikely]] return; }
L_0030F8FC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F90Cu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 211u, depth + 1u); else { c.pc = 0x00102548u; return; } if (c.pc != 0x0030F90Cu) [[unlikely]] return; }
L_0030F90C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F914u); set32(c.r[4], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0030F914u) [[unlikely]] return; }
L_0030F914:
    c.r[2].d[0] = ld16((c.r[19].w[0] + 846u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030FD08; } }
    mmi::paddub(c.r[21], c.r[0], c.r[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_0030FCE0; } }
L_0030F92C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[2], c.r[2].w[0] - 5920u);
    set32(c.r[3], c.r[4].w[0] << 10);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[20], ld32((c.r[2].w[0])));
    c.budget -= 8;
    if (c.r[20].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 4u);  goto L_0030FCD8; }
    c.r[2].d[0] = ld8((c.r[20].w[0] + 2u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030FCD4; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 20u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 532u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0030FCD4; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[19].d[0];  if (t) { goto L_0030FCD4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[19].d[0];  if (t) { goto L_0030FCD4; } }
    c.f[1] = ld32((c.r[20].w[0] + 80u));
    c.f[0] = ld32((c.r[19].w[0] + 32u));
    set32(c.r[23], c.r[29].w[0] + 164u);
    set32(c.r[17], c.r[29].w[0] + 168u);
    set32(c.r[2], c.r[29].w[0] + 160u);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    set32(c.r[3], c.r[29].w[0] + 192u);
    st32((c.r[29].w[0] + 160u), c.f[0]);
    c.f[1] = ld32((c.r[20].w[0] + 84u));
    c.f[0] = ld32((c.r[19].w[0] + 36u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[23].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[20].w[0] + 88u));
    c.f[0] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[17].w[0]), c.f[0]);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    c.f[1] = ld32((c.r[29].w[0] + 160u));
    c.f[0] = ld32((c.r[17].w[0]));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F9D8u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x0030F9D8u) [[unlikely]] return; }
L_0030F9D8:
    c.f[1] = ld32((c.r[23].w[0]));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030F9E8u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x0030F9E8u) [[unlikely]] return; }
L_0030F9E8:
    c.f[20] = c.f[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43160000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0030FCD4; } }
    c.f[1] = ld32((c.r[20].w[0] + 96u));
    c.f[0] = ld32((c.r[19].w[0] + 32u));
    set32(c.r[18], c.r[29].w[0] + 180u);
    set32(c.r[22], c.r[29].w[0] + 184u);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 176u), c.f[0]);
    c.f[1] = ld32((c.r[20].w[0] + 100u));
    c.f[0] = ld32((c.r[19].w[0] + 36u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[18].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[20].w[0] + 104u));
    c.f[0] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[22].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 176u));
    c.f[0] = ld32((c.r[22].w[0]));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FA54u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x0030FA54u) [[unlikely]] return; }
L_0030FA54:
    c.f[1] = ld32((c.r[18].w[0]));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FA64u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x0030FA64u) [[unlikely]] return; }
L_0030FA64:
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0030FCD4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FA7Cu); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x0030FA7Cu) [[unlikely]] return; }
L_0030FA7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FA84u); set32(c.r[4], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x0030FA84u) [[unlikely]] return; }
L_0030FA84:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FA90u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x0030FA90u) [[unlikely]] return; }
L_0030FA90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FA98u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x0030FA98u) [[unlikely]] return; }
L_0030FA98:
    c.f[13] = ld32((c.r[17].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FAA4u); c.f[12] = ld32((c.r[29].w[0] + 160u));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x0030FAA4u) [[unlikely]] return; }
L_0030FAA4:
    c.r[20].d[0] = c.r[2].d[0] << 48;
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FAB4u); c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 48);  if (depth < kMaxDepth) unit_0053(c, 98u, depth + 1u); else { c.pc = 0x0024D5E0u; return; } if (c.pc != 0x0030FAB4u) [[unlikely]] return; }
L_0030FAB4:
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    set32(c.r[20], c.r[20].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = 0ull | 65535ull;
    c.r[20].d[0] = c.r[20].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[20].sd[0] < 0;  if (t) { goto L_0030FCD4; } }
    c.r[1].d[0] = c.r[2].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0030FCD4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FAE0u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x0030FAE0u) [[unlikely]] return; }
L_0030FAE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FAE8u); set32(c.r[4], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x0030FAE8u) [[unlikely]] return; }
L_0030FAE8:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FAF4u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x0030FAF4u) [[unlikely]] return; }
L_0030FAF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FAFCu); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x0030FAFCu) [[unlikely]] return; }
L_0030FAFC:
    c.f[12] = ld32((c.r[29].w[0] + 160u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FB08u); c.f[13] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x0030FB08u) [[unlikely]] return; }
L_0030FB08:
    c.f[13] = ld32((c.r[22].w[0]));
    c.f[12] = ld32((c.r[29].w[0] + 176u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FB18u); mmi::paddub(c.r[17], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x0030FB18u) [[unlikely]] return; }
L_0030FB18:
    c.r[3].d[0] = c.r[17].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[1].d[0] = c.r[3].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0030FB48; } }
    c.r[2].d[0] = 0ull | 65520ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0030FCD4; } }
    c.budget -= 1;
L_0030FB48:
    c.f[12] = ld32((c.r[29].w[0] + 160u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FB54u); c.f[13] = ld32((c.r[23].w[0]));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x0030FB54u) [[unlikely]] return; }
L_0030FB54:
    c.f[13] = ld32((c.r[18].w[0]));
    c.f[12] = ld32((c.r[29].w[0] + 176u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FB64u); mmi::paddub(c.r[17], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x0030FB64u) [[unlikely]] return; }
L_0030FB64:
    c.r[3].d[0] = c.r[17].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[1].d[0] = c.r[3].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 192u);  if (t) { goto L_0030FB94; } }
    c.r[2].d[0] = 0ull | 65520ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0030FCD4; } }
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 1;
L_0030FB94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FB9Cu);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x0030FB9Cu) [[unlikely]] return; }
L_0030FB9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FBA4u); set32(c.r[4], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x0030FBA4u) [[unlikely]] return; }
L_0030FBA4:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FBB0u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x0030FBB0u) [[unlikely]] return; }
L_0030FBB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FBB8u); set32(c.r[4], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x0030FBB8u) [[unlikely]] return; }
L_0030FBB8:
    c.f[13] = ld32((c.r[29].w[0] + 200u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FBC4u); c.f[12] = ld32((c.r[29].w[0] + 192u));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x0030FBC4u) [[unlikely]] return; }
L_0030FBC4:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[1].d[0] = c.r[3].sd[0] < 8193ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].d[0] = 0ull | 32769ull;  if (t) { goto L_0030FBF0; } }
    c.r[2].d[0] = 0ull | 57344ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[3].sd[0] < 24576ll ? 1ull : 0ull;  if (t) { goto L_0030FC18; } }
    c.r[1].d[0] = 0ull | 32769ull;
    c.budget -= 1;
L_0030FBF0:
    c.r[1].d[0] = c.r[20].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 1024u);  if (t) { goto L_0030FC0C; } }
    set32(c.r[2], 0u + 2048u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 1830u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0030FCBC; } }
    set32(c.r[2], 0u + 1024u);
    c.budget -= 1;
L_0030FC0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 1830u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0030FCBC; } }
    c.r[2].d[0] = c.r[3].sd[0] < 24576ll ? 1ull : 0ull;
    c.budget -= 1;
L_0030FC18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[3].sd[0] < 8193ll ? 1ull : 0ull;  if (t) { goto L_0030FC5C; } }
    c.r[1].d[0] = 0ull | 40961ull;
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0030FC58; } }
    c.r[1].d[0] = 0ull | 32769ull;
    c.r[1].d[0] = c.r[20].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 2048u);  if (t) { goto L_0030FC50; } }
    set32(c.r[2], 0u + 1024u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 1830u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0030FCBC; } }
    set32(c.r[2], 0u + 2048u);
    c.budget -= 1;
L_0030FC50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 1830u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0030FCBC; } }
L_0030FC58:
    c.r[1].d[0] = c.r[3].sd[0] < 8193ll ? 1ull : 0ull;
    c.budget -= 1;
L_0030FC5C:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].d[0] = 0ull | 32769ull;  if (t) { goto L_0030FC9C; } }
    c.r[1].d[0] = c.r[3].sd[0] < 24576ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0030FC98; } }
    c.r[1].d[0] = 0ull | 32769ull;
    c.r[1].d[0] = c.r[20].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 8192u);  if (t) { goto L_0030FC90; } }
    set32(c.r[2], 0u + 4096u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 1830u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0030FCBC; } }
    set32(c.r[2], 0u + 8192u);
    c.budget -= 1;
L_0030FC90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 1830u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0030FCBC; } }
L_0030FC98:
    c.r[1].d[0] = 0ull | 32769ull;
    c.budget -= 1;
L_0030FC9C:
    c.r[1].d[0] = c.r[20].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 4096u);  if (t) { goto L_0030FCB8; } }
    set32(c.r[2], 0u + 8192u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 1830u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0030FCBC; } }
    set32(c.r[2], 0u + 4096u);
    c.budget -= 1;
L_0030FCB8:
    st16((c.r[19].w[0] + 1830u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_0030FCBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FCC4u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0083(c, 164u, depth + 1u); else { c.pc = 0x0030EE00u; return; } if (c.pc != 0x0030FCC4u) [[unlikely]] return; }
L_0030FCC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FCCCu);  if (depth < kMaxDepth) unit_0053(c, 69u, depth + 1u); else { c.pc = 0x0024D140u; return; } if (c.pc != 0x0030FCCCu) [[unlikely]] return; }
L_0030FCCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { [[clang::musttail]] return unit_0084(c, 11u, depth); } }
L_0030FCD4:
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_0030FCD8:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 2;
L_0030FCE0:
    set32(c.r[3], ld32((c.r[28].w[0] - 26476u)));
    set32(c.r[2], c.r[28].w[0] - 26440u);
    c.r[4].d[0] = c.r[3].d[0] ^ 1ull;
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.r[2].d[0] = c.r[21].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030F92Cu | kUnwind; return; } goto L_0030F92C; } }
    c.budget -= 1;
L_0030FD08:
    c.r[2].d[0] = ld16((c.r[19].w[0] + 846u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { mmi::paddub(c.r[2], c.r[0], c.r[0]);  [[clang::musttail]] return unit_0084(c, 11u, depth); }
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    mmi::paddub(c.r[3], c.r[0], c.r[0]);
    c.budget -= 3;
L_0030FD20:
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[5].w[0] << 5);  if (t) { goto L_0030FD44; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] >> 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030FD20u | kUnwind; return; } goto L_0030FD20; } }
    set32(c.r[2], c.r[5].w[0] << 5);
    c.budget -= 1;
L_0030FD44:
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[19].w[0] + 32u));
    set32(c.r[3], c.r[2].w[0] << 8);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[2], c.r[2].w[0] + 26144u);
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    c.f[1] = ld32((c.r[17].w[0] + 32u));
    set32(c.r[18], c.r[29].w[0] + 164u);
    set32(c.r[16], c.r[29].w[0] + 168u);
    set32(c.r[2], c.r[29].w[0] + 160u);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    set32(c.r[3], c.r[29].w[0] + 192u);
    st32((c.r[29].w[0] + 160u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[19].w[0] + 36u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[18].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[16].w[0]), c.f[0]);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    c.f[1] = ld32((c.r[29].w[0] + 160u));
    c.f[0] = ld32((c.r[16].w[0]));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FDB4u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x0030FDB4u) [[unlikely]] return; }
L_0030FDB4:
    c.f[1] = ld32((c.r[18].w[0]));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FDC4u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x0030FDC4u) [[unlikely]] return; }
L_0030FDC4:
    c.f[20] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FDD0u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 38u, depth + 1u); else { c.pc = 0x0024CAD0u; return; } if (c.pc != 0x0030FDD0u) [[unlikely]] return; }
L_0030FDD0:
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { [[clang::musttail]] return unit_0084(c, 10u, depth); } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0084(c, 10u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FDF8u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x0030FDF8u) [[unlikely]] return; }
L_0030FDF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FE00u); set32(c.r[4], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x0030FE00u) [[unlikely]] return; }
L_0030FE00:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FE0Cu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x0030FE0Cu) [[unlikely]] return; }
L_0030FE0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FE14u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x0030FE14u) [[unlikely]] return; }
L_0030FE14:
    c.f[12] = ld32((c.r[29].w[0] + 160u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FE20u); c.f[13] = ld32((c.r[16].w[0]));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x0030FE20u) [[unlikely]] return; }
L_0030FE20:
    c.r[16].d[0] = c.r[2].d[0] << 48;
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FE30u); c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);  if (depth < kMaxDepth) unit_0053(c, 98u, depth + 1u); else { c.pc = 0x0024D5E0u; return; } if (c.pc != 0x0030FE30u) [[unlikely]] return; }
L_0030FE30:
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    set32(c.r[16], c.r[16].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = 0ull | 65535ull;
    c.r[3].d[0] = c.r[16].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { [[clang::musttail]] return unit_0084(c, 10u, depth); } }
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0084(c, 10u, depth); } }
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FE60u); st16((c.r[19].w[0] + 1830u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x0030FE60u) [[unlikely]] return; }
L_0030FE60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FE68u); set32(c.r[4], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x0030FE68u) [[unlikely]] return; }
L_0030FE68:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FE74u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x0030FE74u) [[unlikely]] return; }
L_0030FE74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FE7Cu); set32(c.r[4], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x0030FE7Cu) [[unlikely]] return; }
L_0030FE7C:
    c.f[13] = ld32((c.r[29].w[0] + 200u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030FE88u); c.f[12] = ld32((c.r[29].w[0] + 192u));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x0030FE88u) [[unlikely]] return; }
L_0030FE88:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);  if (t) { goto L_0030FFC8; } }
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0; c.r[2].d[0] = c.r[3].sd[0] < 20480ll ? 1ull : 0ull;  if (t) { goto L_0030FEC4; } }
    c.r[2].d[0] = c.r[3].sd[0] < 12288ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0030FEDC; } }
    c.r[2].d[0] = c.r[3].sd[0] < 20480ll ? 1ull : 0ull;
    c.budget -= 1;
L_0030FEC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull | 53248ull;  if (t) { goto L_0030FEF0; } }
    c.r[1].d[0] = 0ull | 32768ull;
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0030FEEC; } }
L_0030FEDC:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 1830u)));
    c.r[2].d[0] = c.r[2].d[0] | 1024ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 1830u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0030FF38; } }
L_0030FEEC:
    c.r[2].d[0] = 0ull | 53248ull;
    c.budget -= 1;
L_0030FEF0:
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull | 32768ull;  if (t) { goto L_0030FF10; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0030FF2C; } }
    c.r[2].d[0] = 0ull | 32768ull;
    c.budget -= 1;
L_0030FF10:
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[3].sd[0] < 4096ll ? 1ull : 0ull;  if (t) { goto L_0030FF3C; } }
    c.r[1].d[0] = 0ull | 45056ull;
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0030FF38; } }
L_0030FF2C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 1830u)));
    c.r[2].d[0] = c.r[2].d[0] | 2048ull;
    st16((c.r[19].w[0] + 1830u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0030FF38:
    c.r[2].d[0] = c.r[3].sd[0] < 4096ll ? 1ull : 0ull;
    c.budget -= 1;
L_0030FF3C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull | 49152ull;  if (t) { goto L_0030FF54; } }
    c.r[2].d[0] = c.r[3].sd[0] < 16384ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0030FF70; } }
    c.r[2].d[0] = 0ull | 49152ull;
    c.budget -= 1;
L_0030FF54:
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[3].sd[0] < 16384ll ? 1ull : 0ull;  if (t) { goto L_0030FF84; } }
    c.r[1].d[0] = 0ull | 61440ull;
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0030FF80; } }
L_0030FF70:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 1830u)));
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 1830u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { [[clang::musttail]] return unit_0084(c, 5u, depth); } }
L_0030FF80:
    c.r[2].d[0] = c.r[3].sd[0] < 16384ll ? 1ull : 0ull;
    c.budget -= 1;
L_0030FF84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull | 36864ull;  if (t) { goto L_0030FF9C; } }
    c.r[2].d[0] = c.r[3].sd[0] < 28672ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0030FFB8; } }
    c.r[2].d[0] = 0ull | 36864ull;
    c.budget -= 1;
L_0030FF9C:
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (t) { [[clang::musttail]] return unit_0084(c, 6u, depth); } }
    c.r[1].d[0] = 0ull | 49152ull;
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0084(c, 5u, depth); } }
L_0030FFB8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 1830u)));
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 1830u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { [[clang::musttail]] return unit_0084(c, 5u, depth); } }
L_0030FFC8:
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0; c.r[2].d[0] = 0ull | 57344ull;  if (t) { goto L_0030FFE4; } }
    c.r[1].d[0] = c.r[3].sd[0] < 8193ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0084(c, 1u, depth); } }
    c.r[2].d[0] = 0ull | 57344ull;
    c.budget -= 1;
L_0030FFE4:
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[3].sd[0] < 24576ll ? 1ull : 0ull;  if (t) { [[clang::musttail]] return unit_0084(c, 3u, depth); } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0084(c, 2u, depth); } }
    [[clang::musttail]] return unit_0084(c, 1u, depth);
}

}
