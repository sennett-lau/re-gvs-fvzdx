#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_001B[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0,
    0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0,
    25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    30, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0,
    0, 0, 0, 38, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 48, 0, 0, 49, 0, 0,
    0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 54, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    55, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 57, 0, 0, 0, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 71, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77,
    0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83,
    0, 0, 0, 84, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 94, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 99,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 117, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 128, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 130, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 133, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0,
    0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0,
    0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0,
    0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0,
    0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0,
    0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 163,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 165, 0, 0, 0, 166, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0,
    0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0,
    210, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 214, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0,
    0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_001B(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0016C000;
    case 2u: goto L_0016C030;
    case 3u: goto L_0016C050;
    case 4u: goto L_0016C06C;
    case 5u: goto L_0016C0B8;
    case 6u: goto L_0016C0E8;
    case 7u: goto L_0016C118;
    case 8u: goto L_0016C1A8;
    case 9u: goto L_0016C250;
    case 10u: goto L_0016C270;
    case 11u: goto L_0016C290;
    case 12u: goto L_0016C310;
    case 13u: goto L_0016C340;
    case 14u: goto L_0016C370;
    case 15u: goto L_0016C400;
    case 16u: goto L_0016C4A0;
    case 17u: goto L_0016C4C0;
    case 18u: goto L_0016C4DC;
    case 19u: goto L_0016C528;
    case 20u: goto L_0016C558;
    case 21u: goto L_0016C588;
    case 22u: goto L_0016C618;
    case 23u: goto L_0016C6C0;
    case 24u: goto L_0016C6E0;
    case 25u: goto L_0016C700;
    case 26u: goto L_0016C760;
    case 27u: goto L_0016C790;
    case 28u: goto L_0016C7C0;
    case 29u: goto L_0016C858;
    case 30u: goto L_0016C900;
    case 31u: goto L_0016C920;
    case 32u: goto L_0016C938;
    case 33u: goto L_0016C960;
    case 34u: goto L_0016C990;
    case 35u: goto L_0016C9C0;
    case 36u: goto L_0016CA48;
    case 37u: goto L_0016CAF0;
    case 38u: goto L_0016CB0C;
    case 39u: goto L_0016CB14;
    case 40u: goto L_0016CB50;
    case 41u: goto L_0016CC10;
    case 42u: goto L_0016CC38;
    case 43u: goto L_0016CCD0;
    case 44u: goto L_0016CE00;
    case 45u: goto L_0016CE40;
    case 46u: goto L_0016CEA4;
    case 47u: goto L_0016CED0;
    case 48u: goto L_0016CEE8;
    case 49u: goto L_0016CEF4;
    case 50u: goto L_0016CF10;
    case 51u: goto L_0016CF60;
    case 52u: goto L_0016CFC0;
    case 53u: goto L_0016D058;
    case 54u: goto L_0016D070;
    case 55u: goto L_0016D100;
    case 56u: goto L_0016D120;
    case 57u: goto L_0016D188;
    case 58u: goto L_0016D1A0;
    case 59u: goto L_0016D1B0;
    case 60u: goto L_0016D1D0;
    case 61u: goto L_0016D1E0;
    case 62u: goto L_0016D264;
    case 63u: goto L_0016D2B4;
    case 64u: goto L_0016D330;
    case 65u: goto L_0016D3B0;
    case 66u: goto L_0016D430;
    case 67u: goto L_0016D4D0;
    case 68u: goto L_0016D570;
    case 69u: goto L_0016D610;
    case 70u: goto L_0016D65C;
    case 71u: goto L_0016D668;
    case 72u: goto L_0016D6AC;
    case 73u: goto L_0016D6CC;
    case 74u: goto L_0016D6EC;
    case 75u: goto L_0016D718;
    case 76u: goto L_0016D74C;
    case 77u: goto L_0016D77C;
    case 78u: goto L_0016D784;
    case 79u: goto L_0016D804;
    case 80u: goto L_0016D840;
    case 81u: goto L_0016D8FC;
    case 82u: goto L_0016D940;
    case 83u: goto L_0016D97C;
    case 84u: goto L_0016D98C;
    case 85u: goto L_0016D998;
    case 86u: goto L_0016D9B8;
    case 87u: goto L_0016D9E4;
    case 88u: goto L_0016DA14;
    case 89u: goto L_0016DA70;
    case 90u: goto L_0016DAAC;
    case 91u: goto L_0016DAC8;
    case 92u: goto L_0016DB00;
    case 93u: goto L_0016DBC0;
    case 94u: goto L_0016DC0C;
    case 95u: goto L_0016DC1C;
    case 96u: goto L_0016DC98;
    case 97u: goto L_0016DCCC;
    case 98u: goto L_0016DCD8;
    case 99u: goto L_0016DCFC;
    case 100u: goto L_0016DD28;
    case 101u: goto L_0016DE10;
    case 102u: goto L_0016DE48;
    case 103u: goto L_0016DEB0;
    case 104u: goto L_0016DEC0;
    case 105u: goto L_0016DED0;
    case 106u: goto L_0016DEEC;
    case 107u: goto L_0016DF18;
    case 108u: goto L_0016DF50;
    case 109u: goto L_0016DF90;
    case 110u: goto L_0016DFF0;
    case 111u: goto L_0016E040;
    case 112u: goto L_0016E080;
    case 113u: goto L_0016E0C0;
    case 114u: goto L_0016E120;
    case 115u: goto L_0016E148;
    case 116u: goto L_0016E158;
    case 117u: goto L_0016E174;
    case 118u: goto L_0016E1A0;
    case 119u: goto L_0016E1B0;
    case 120u: goto L_0016E1E0;
    case 121u: goto L_0016E23C;
    case 122u: goto L_0016E258;
    case 123u: goto L_0016E280;
    case 124u: goto L_0016E2A8;
    case 125u: goto L_0016E2C8;
    case 126u: goto L_0016E300;
    case 127u: goto L_0016E360;
    case 128u: goto L_0016E378;
    case 129u: goto L_0016E3A0;
    case 130u: goto L_0016E3B0;
    case 131u: goto L_0016E3BC;
    case 132u: goto L_0016E3DC;
    case 133u: goto L_0016E408;
    case 134u: goto L_0016E410;
    case 135u: goto L_0016E4D4;
    case 136u: goto L_0016E520;
    case 137u: goto L_0016E548;
    case 138u: goto L_0016E64C;
    case 139u: goto L_0016E66C;
    case 140u: goto L_0016E68C;
    case 141u: goto L_0016E6AC;
    case 142u: goto L_0016E6CC;
    case 143u: goto L_0016E6EC;
    case 144u: goto L_0016E708;
    case 145u: goto L_0016E728;
    case 146u: goto L_0016E748;
    case 147u: goto L_0016E768;
    case 148u: goto L_0016E79C;
    case 149u: goto L_0016E7C0;
    case 150u: goto L_0016E7F0;
    case 151u: goto L_0016E8F4;
    case 152u: goto L_0016E914;
    case 153u: goto L_0016E934;
    case 154u: goto L_0016E954;
    case 155u: goto L_0016E974;
    case 156u: goto L_0016E994;
    case 157u: goto L_0016E9B0;
    case 158u: goto L_0016E9D0;
    case 159u: goto L_0016E9F0;
    case 160u: goto L_0016EA10;
    case 161u: goto L_0016EA44;
    case 162u: goto L_0016EA60;
    case 163u: goto L_0016EA7C;
    case 164u: goto L_0016EB84;
    case 165u: goto L_0016EC8C;
    case 166u: goto L_0016EC9C;
    case 167u: goto L_0016ECB0;
    case 168u: goto L_0016ECD0;
    case 169u: goto L_0016ECEC;
    case 170u: goto L_0016EDF4;
    case 171u: goto L_0016EE70;
    case 172u: goto L_0016EE90;
    case 173u: goto L_0016EEA8;
    case 174u: goto L_0016F014;
    case 175u: goto L_0016F030;
    case 176u: goto L_0016F050;
    case 177u: goto L_0016F0A4;
    case 178u: goto L_0016F0C0;
    case 179u: goto L_0016F0E8;
    case 180u: goto L_0016F140;
    case 181u: goto L_0016F160;
    case 182u: goto L_0016F190;
    case 183u: goto L_0016F1B8;
    case 184u: goto L_0016F1E0;
    case 185u: goto L_0016F210;
    case 186u: goto L_0016F240;
    case 187u: goto L_0016F290;
    case 188u: goto L_0016F300;
    case 189u: goto L_0016F360;
    case 190u: goto L_0016F3B8;
    case 191u: goto L_0016F450;
    case 192u: goto L_0016F474;
    case 193u: goto L_0016F580;
    case 194u: goto L_0016F5AC;
    case 195u: goto L_0016F6D0;
    case 196u: goto L_0016F724;
    case 197u: goto L_0016F850;
    case 198u: goto L_0016F870;
    case 199u: goto L_0016F8B0;
    case 200u: goto L_0016F8E0;
    case 201u: goto L_0016F930;
    case 202u: goto L_0016F970;
    case 203u: goto L_0016F9A8;
    case 204u: goto L_0016F9C0;
    case 205u: goto L_0016F9E0;
    case 206u: goto L_0016FA08;
    case 207u: goto L_0016FA40;
    case 208u: goto L_0016FA58;
    case 209u: goto L_0016FB60;
    case 210u: goto L_0016FB80;
    case 211u: goto L_0016FB98;
    case 212u: goto L_0016FCC0;
    case 213u: goto L_0016FCE0;
    case 214u: goto L_0016FCF8;
    case 215u: goto L_0016FE70;
    case 216u: goto L_0016FE90;
    case 217u: goto L_0016FEC4;
    case 218u: goto L_0016FEFC;
    case 219u: goto L_0016FF30;
    default: bad_entry(c, 0x0016C000u); return;
    }
L_0016C000:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 29581u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[2], c.r[2].w[0] + 31760u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0016C000u < 16384u) { entry = entries_001B[(t - 0x0016C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0016C030:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], c.r[3].w[0] + 25952u);
    set32(c.r[9], c.r[5].w[0] + 25952u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (t) { goto L_0016C180; } }
    set32(c.r[5], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_0016C050:
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 1u)));
    c.r[5].d[0] = c.r[5].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    set32(c.r[6], c.r[5].w[0] << 4);
    c.r[13].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 3u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[3].w[0] + c.r[6].w[0]);  if (t) { goto L_0016C158; } }
L_0016C06C:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 1u)));
    c.r[10].d[0] = c.r[12].d[0] << 56;
    c.r[10].d[0] = static_cast<std::uint64_t>(c.r[10].sd[0] >> 56);
    c.r[1].d[0] = c.r[6].sd[0] < c.r[10].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull; c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 3u)));  if (t) { goto L_0016C0A8; } }
    c.budget -= 2;
    if (c.r[10].d[0] != c.r[6].d[0]) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_0016C14C; }
    c.r[11].d[0] = c.r[13].d[0] << 56;
    c.r[10].d[0] = c.r[7].d[0] << 56;
    c.r[11].d[0] = static_cast<std::uint64_t>(c.r[11].sd[0] >> 56);
    c.r[10].d[0] = static_cast<std::uint64_t>(c.r[10].sd[0] >> 56);
    c.r[1].d[0] = c.r[11].sd[0] < c.r[10].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0016C148; } }
L_0016C0A8:
    set32(c.r[13], c.r[29].w[0]);
    set32(c.r[12], 0u + 4u);
    mmi::paddub(c.r[14], c.r[9], c.r[0]);
    c.budget -= 4;
L_0016C0B8:
    c.r[11].sd[0] = static_cast<std::int16_t>(ld16((c.r[14].w[0])));
    c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[14].w[0] + 2u)));
    set32(c.r[12], c.r[12].w[0] - 1u);
    st16((c.r[13].w[0]), static_cast<std::uint16_t>(c.r[11].w[0]));
    st16((c.r[13].w[0] + 2u), static_cast<std::uint16_t>(c.r[10].w[0]));
    set32(c.r[14], c.r[14].w[0] + 4u);
    c.budget -= 8;
    { const bool t = c.r[12].sd[0] > 0; set32(c.r[13], c.r[13].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016C0B8u | kUnwind; return; } goto L_0016C0B8; } }
    set32(c.r[12], 0u + 4u);
    mmi::paddub(c.r[14], c.r[8], c.r[0]);
    mmi::paddub(c.r[13], c.r[9], c.r[0]);
    c.budget -= 4;
L_0016C0E8:
    c.r[11].sd[0] = static_cast<std::int16_t>(ld16((c.r[14].w[0])));
    c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[14].w[0] + 2u)));
    set32(c.r[12], c.r[12].w[0] - 1u);
    st16((c.r[13].w[0]), static_cast<std::uint16_t>(c.r[11].w[0]));
    st16((c.r[13].w[0] + 2u), static_cast<std::uint16_t>(c.r[10].w[0]));
    set32(c.r[14], c.r[14].w[0] + 4u);
    c.budget -= 8;
    { const bool t = c.r[12].sd[0] > 0; set32(c.r[13], c.r[13].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016C0E8u | kUnwind; return; } goto L_0016C0E8; } }
    set32(c.r[14], c.r[29].w[0]);
    set32(c.r[12], 0u + 4u);
    mmi::paddub(c.r[13], c.r[8], c.r[0]);
    c.budget -= 4;
L_0016C118:
    c.r[11].sd[0] = static_cast<std::int16_t>(ld16((c.r[14].w[0])));
    c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[14].w[0] + 2u)));
    set32(c.r[12], c.r[12].w[0] - 1u);
    st16((c.r[13].w[0]), static_cast<std::uint16_t>(c.r[11].w[0]));
    st16((c.r[13].w[0] + 2u), static_cast<std::uint16_t>(c.r[10].w[0]));
    set32(c.r[14], c.r[14].w[0] + 4u);
    c.budget -= 8;
    { const bool t = c.r[12].sd[0] > 0; set32(c.r[13], c.r[13].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016C118u | kUnwind; return; } goto L_0016C118; } }
    c.r[12].d[0] = c.r[6].d[0] << 56;
    c.r[13].d[0] = c.r[7].d[0] << 56;
    c.r[12].d[0] = static_cast<std::uint64_t>(c.r[12].sd[0] >> 56);
    c.r[13].d[0] = static_cast<std::uint64_t>(c.r[13].sd[0] >> 56);
    c.budget -= 4;
L_0016C148:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_0016C14C:
    c.r[5].d[0] = c.r[5].d[0] << 56;
    set32(c.r[8], c.r[8].w[0] + 16u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 3;
L_0016C158:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2111u)));
    c.r[7].d[0] = c.r[5].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    c.r[6].d[0] = c.r[7].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016C06Cu | kUnwind; return; } goto L_0016C06C; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[4].d[0] = c.r[4].d[0] << 56;
    set32(c.r[9], c.r[9].w[0] + 16u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 4;
L_0016C180:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2111u)));
    c.r[6].d[0] = c.r[4].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.r[5].d[0] = c.r[6].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[5], c.r[6].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016C050u | kUnwind; return; } goto L_0016C050; } }
    mmi::paddub(c.r[8], c.r[0], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[6], c.r[3], c.r[0]);  if (t) { goto L_0016C1F0; } }
L_0016C1A8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3631u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0016C1CC; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 6u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[4], c.r[8].w[0] + 1u);  if (t) { goto L_0016C1E4; } }
    c.r[5].d[0] = c.r[8].d[0] << 56;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);  if (t) { goto L_0016C1E0; } }
L_0016C1CC:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 7u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016C1E0; } }
    c.r[5].d[0] = c.r[8].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 2;
L_0016C1E0:
    set32(c.r[4], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_0016C1E4:
    c.r[8].d[0] = c.r[4].d[0] << 56;
    set32(c.r[6], c.r[6].w[0] + 16u);
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    c.budget -= 3;
L_0016C1F0:
    c.r[4].d[0] = c.r[8].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[4].d[0] = c.r[4].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016C1A8u | kUnwind; return; } goto L_0016C1A8; } }
    c.r[7].d[0] = c.r[5].d[0] << 56;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x92490000u);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    c.r[4].d[0] = c.r[4].d[0] | 9363ull;
    mmi::mult(c, 0, c.r[4].w[0], c.r[7].w[0]);
    set32(c.r[6], c.r[7].w[0] >> 31);
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.r[5].d[0] = c.hi.d[0];
    set32(c.r[4], 0u + 7u);
    mmi::div(c, 0, c.r[7].w[0], c.r[4].w[0]);
    set32(c.r[4], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 2));
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    st8((c.r[3].w[0] + 2110u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = c.hi.d[0];
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0] + 3632u), static_cast<std::uint8_t>(c.r[4].w[0]));  c.pc = t; return; }
L_0016C250:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], c.r[3].w[0] + 25952u);
    set32(c.r[10], c.r[5].w[0] + 25952u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (t) { goto L_0016C3D8; } }
    set32(c.r[5], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_0016C270:
    c.r[13].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 1u)));
    c.r[5].d[0] = c.r[5].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    set32(c.r[6], c.r[5].w[0] << 4);
    c.r[14].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 2u)));
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 3u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[3].w[0] + c.r[6].w[0]);  if (t) { goto L_0016C3B0; } }
L_0016C290:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 2u)));
    c.r[11].d[0] = c.r[14].d[0] << 56;
    c.r[15].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 3u)));
    c.r[11].d[0] = static_cast<std::uint64_t>(c.r[11].sd[0] >> 56);
    c.r[1].d[0] = c.r[7].sd[0] < c.r[11].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 1u)));  if (t) { goto L_0016C300; } }
    c.budget -= 2;
    { const bool t = c.r[11].d[0] != c.r[7].d[0]; c.r[12].d[0] = c.r[13].d[0] << 56;  if (t) { goto L_0016C2D4; } }
    c.r[12].d[0] = c.r[13].d[0] << 56;
    c.r[11].d[0] = c.r[6].d[0] << 56;
    c.r[12].d[0] = static_cast<std::uint64_t>(c.r[12].sd[0] >> 56);
    c.r[11].d[0] = static_cast<std::uint64_t>(c.r[11].sd[0] >> 56);
    c.r[1].d[0] = c.r[11].sd[0] < c.r[12].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[1].d[0] != 0ull) { set32(c.r[14], c.r[29].w[0]);  goto L_0016C304; }
    c.r[12].d[0] = c.r[13].d[0] << 56;
    c.budget -= 1;
L_0016C2D4:
    c.r[11].d[0] = c.r[6].d[0] << 56;
    c.r[12].d[0] = static_cast<std::uint64_t>(c.r[12].sd[0] >> 56);
    c.r[11].d[0] = static_cast<std::uint64_t>(c.r[11].sd[0] >> 56);
    c.budget -= 5;
    if (c.r[12].d[0] != c.r[11].d[0]) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_0016C3A4; }
    c.r[11].d[0] = c.r[15].d[0] << 56;
    c.r[11].d[0] = static_cast<std::uint64_t>(c.r[11].sd[0] >> 56);
    c.r[1].d[0] = c.r[9].sd[0] < c.r[11].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0016C3A0; } }
    c.budget -= 1;
L_0016C300:
    set32(c.r[14], c.r[29].w[0]);
    c.budget -= 1;
L_0016C304:
    set32(c.r[13], 0u + 4u);
    mmi::paddub(c.r[15], c.r[10], c.r[0]);
    c.budget -= 3;
L_0016C310:
    c.r[12].sd[0] = static_cast<std::int16_t>(ld16((c.r[15].w[0])));
    c.r[11].sd[0] = static_cast<std::int16_t>(ld16((c.r[15].w[0] + 2u)));
    set32(c.r[13], c.r[13].w[0] - 1u);
    st16((c.r[14].w[0]), static_cast<std::uint16_t>(c.r[12].w[0]));
    st16((c.r[14].w[0] + 2u), static_cast<std::uint16_t>(c.r[11].w[0]));
    set32(c.r[15], c.r[15].w[0] + 4u);
    c.budget -= 8;
    { const bool t = c.r[13].sd[0] > 0; set32(c.r[14], c.r[14].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016C310u | kUnwind; return; } goto L_0016C310; } }
    set32(c.r[13], 0u + 4u);
    mmi::paddub(c.r[15], c.r[8], c.r[0]);
    mmi::paddub(c.r[14], c.r[10], c.r[0]);
    c.budget -= 4;
L_0016C340:
    c.r[12].sd[0] = static_cast<std::int16_t>(ld16((c.r[15].w[0])));
    c.r[11].sd[0] = static_cast<std::int16_t>(ld16((c.r[15].w[0] + 2u)));
    set32(c.r[13], c.r[13].w[0] - 1u);
    st16((c.r[14].w[0]), static_cast<std::uint16_t>(c.r[12].w[0]));
    st16((c.r[14].w[0] + 2u), static_cast<std::uint16_t>(c.r[11].w[0]));
    set32(c.r[15], c.r[15].w[0] + 4u);
    c.budget -= 8;
    { const bool t = c.r[13].sd[0] > 0; set32(c.r[14], c.r[14].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016C340u | kUnwind; return; } goto L_0016C340; } }
    set32(c.r[15], c.r[29].w[0]);
    set32(c.r[13], 0u + 4u);
    mmi::paddub(c.r[14], c.r[8], c.r[0]);
    c.budget -= 4;
L_0016C370:
    c.r[12].sd[0] = static_cast<std::int16_t>(ld16((c.r[15].w[0])));
    c.r[11].sd[0] = static_cast<std::int16_t>(ld16((c.r[15].w[0] + 2u)));
    set32(c.r[13], c.r[13].w[0] - 1u);
    st16((c.r[14].w[0]), static_cast<std::uint16_t>(c.r[12].w[0]));
    st16((c.r[14].w[0] + 2u), static_cast<std::uint16_t>(c.r[11].w[0]));
    set32(c.r[15], c.r[15].w[0] + 4u);
    c.budget -= 8;
    { const bool t = c.r[13].sd[0] > 0; set32(c.r[14], c.r[14].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016C370u | kUnwind; return; } goto L_0016C370; } }
    c.r[13].d[0] = c.r[6].d[0] << 56;
    c.r[14].d[0] = c.r[7].d[0] << 56;
    c.r[13].d[0] = static_cast<std::uint64_t>(c.r[13].sd[0] >> 56);
    c.r[14].d[0] = static_cast<std::uint64_t>(c.r[14].sd[0] >> 56);
    c.budget -= 4;
L_0016C3A0:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_0016C3A4:
    c.r[5].d[0] = c.r[5].d[0] << 56;
    set32(c.r[8], c.r[8].w[0] + 16u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 3;
L_0016C3B0:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2111u)));
    c.r[7].d[0] = c.r[5].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    c.r[6].d[0] = c.r[7].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016C290u | kUnwind; return; } goto L_0016C290; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[4].d[0] = c.r[4].d[0] << 56;
    set32(c.r[10], c.r[10].w[0] + 16u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 4;
L_0016C3D8:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2111u)));
    c.r[6].d[0] = c.r[4].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.r[5].d[0] = c.r[6].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[5], c.r[6].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016C270u | kUnwind; return; } goto L_0016C270; } }
    mmi::paddub(c.r[8], c.r[0], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[6], c.r[3], c.r[0]);  if (t) { goto L_0016C448; } }
L_0016C400:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3631u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0016C424; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 6u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[4], c.r[8].w[0] + 1u);  if (t) { goto L_0016C43C; } }
    c.r[5].d[0] = c.r[8].d[0] << 56;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);  if (t) { goto L_0016C438; } }
L_0016C424:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 7u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016C438; } }
    c.r[5].d[0] = c.r[8].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 2;
L_0016C438:
    set32(c.r[4], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_0016C43C:
    c.r[8].d[0] = c.r[4].d[0] << 56;
    set32(c.r[6], c.r[6].w[0] + 16u);
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    c.budget -= 3;
L_0016C448:
    c.r[4].d[0] = c.r[8].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[4].d[0] = c.r[4].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016C400u | kUnwind; return; } goto L_0016C400; } }
    c.r[7].d[0] = c.r[5].d[0] << 56;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x92490000u);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    c.r[4].d[0] = c.r[4].d[0] | 9363ull;
    mmi::mult(c, 0, c.r[4].w[0], c.r[7].w[0]);
    set32(c.r[6], c.r[7].w[0] >> 31);
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.r[5].d[0] = c.hi.d[0];
    set32(c.r[4], 0u + 7u);
    mmi::div(c, 0, c.r[7].w[0], c.r[4].w[0]);
    set32(c.r[4], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 2));
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    st8((c.r[3].w[0] + 2110u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = c.hi.d[0];
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0] + 3632u), static_cast<std::uint8_t>(c.r[4].w[0]));  c.pc = t; return; }
L_0016C4A0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], c.r[3].w[0] + 25952u);
    set32(c.r[9], c.r[5].w[0] + 25952u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (t) { goto L_0016C5F0; } }
    set32(c.r[5], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_0016C4C0:
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 1u)));
    c.r[5].d[0] = c.r[5].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    set32(c.r[6], c.r[5].w[0] << 4);
    c.r[13].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 3u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[3].w[0] + c.r[6].w[0]);  if (t) { goto L_0016C5C8; } }
L_0016C4DC:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 3u)));
    c.r[11].d[0] = c.r[13].d[0] << 56;
    c.r[11].d[0] = static_cast<std::uint64_t>(c.r[11].sd[0] >> 56);
    c.r[10].d[0] = c.r[11].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[10].d[0] != 0ull; c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 1u)));  if (t) { goto L_0016C518; } }
    c.budget -= 2;
    if (c.r[11].d[0] != c.r[7].d[0]) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_0016C5BC; }
    c.r[11].d[0] = c.r[12].d[0] << 56;
    c.r[10].d[0] = c.r[6].d[0] << 56;
    c.r[11].d[0] = static_cast<std::uint64_t>(c.r[11].sd[0] >> 56);
    c.r[10].d[0] = static_cast<std::uint64_t>(c.r[10].sd[0] >> 56);
    c.r[1].d[0] = c.r[10].sd[0] < c.r[11].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0016C5B8; } }
L_0016C518:
    set32(c.r[13], c.r[29].w[0]);
    set32(c.r[12], 0u + 4u);
    mmi::paddub(c.r[14], c.r[9], c.r[0]);
    c.budget -= 4;
L_0016C528:
    c.r[11].sd[0] = static_cast<std::int16_t>(ld16((c.r[14].w[0])));
    c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[14].w[0] + 2u)));
    set32(c.r[12], c.r[12].w[0] - 1u);
    st16((c.r[13].w[0]), static_cast<std::uint16_t>(c.r[11].w[0]));
    st16((c.r[13].w[0] + 2u), static_cast<std::uint16_t>(c.r[10].w[0]));
    set32(c.r[14], c.r[14].w[0] + 4u);
    c.budget -= 8;
    { const bool t = c.r[12].sd[0] > 0; set32(c.r[13], c.r[13].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016C528u | kUnwind; return; } goto L_0016C528; } }
    set32(c.r[12], 0u + 4u);
    mmi::paddub(c.r[14], c.r[8], c.r[0]);
    mmi::paddub(c.r[13], c.r[9], c.r[0]);
    c.budget -= 4;
L_0016C558:
    c.r[11].sd[0] = static_cast<std::int16_t>(ld16((c.r[14].w[0])));
    c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[14].w[0] + 2u)));
    set32(c.r[12], c.r[12].w[0] - 1u);
    st16((c.r[13].w[0]), static_cast<std::uint16_t>(c.r[11].w[0]));
    st16((c.r[13].w[0] + 2u), static_cast<std::uint16_t>(c.r[10].w[0]));
    set32(c.r[14], c.r[14].w[0] + 4u);
    c.budget -= 8;
    { const bool t = c.r[12].sd[0] > 0; set32(c.r[13], c.r[13].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016C558u | kUnwind; return; } goto L_0016C558; } }
    set32(c.r[14], c.r[29].w[0]);
    set32(c.r[12], 0u + 4u);
    mmi::paddub(c.r[13], c.r[8], c.r[0]);
    c.budget -= 4;
L_0016C588:
    c.r[11].sd[0] = static_cast<std::int16_t>(ld16((c.r[14].w[0])));
    c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[14].w[0] + 2u)));
    set32(c.r[12], c.r[12].w[0] - 1u);
    st16((c.r[13].w[0]), static_cast<std::uint16_t>(c.r[11].w[0]));
    st16((c.r[13].w[0] + 2u), static_cast<std::uint16_t>(c.r[10].w[0]));
    set32(c.r[14], c.r[14].w[0] + 4u);
    c.budget -= 8;
    { const bool t = c.r[12].sd[0] > 0; set32(c.r[13], c.r[13].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016C588u | kUnwind; return; } goto L_0016C588; } }
    c.r[12].d[0] = c.r[6].d[0] << 56;
    c.r[13].d[0] = c.r[7].d[0] << 56;
    c.r[12].d[0] = static_cast<std::uint64_t>(c.r[12].sd[0] >> 56);
    c.r[13].d[0] = static_cast<std::uint64_t>(c.r[13].sd[0] >> 56);
    c.budget -= 4;
L_0016C5B8:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_0016C5BC:
    c.r[5].d[0] = c.r[5].d[0] << 56;
    set32(c.r[8], c.r[8].w[0] + 16u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 3;
L_0016C5C8:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2111u)));
    c.r[7].d[0] = c.r[5].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    c.r[6].d[0] = c.r[7].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016C4DCu | kUnwind; return; } goto L_0016C4DC; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[4].d[0] = c.r[4].d[0] << 56;
    set32(c.r[9], c.r[9].w[0] + 16u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 4;
L_0016C5F0:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2111u)));
    c.r[6].d[0] = c.r[4].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.r[5].d[0] = c.r[6].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[5], c.r[6].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016C4C0u | kUnwind; return; } goto L_0016C4C0; } }
    mmi::paddub(c.r[8], c.r[0], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[6], c.r[3], c.r[0]);  if (t) { goto L_0016C660; } }
L_0016C618:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3631u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0016C63C; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 6u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[4], c.r[8].w[0] + 1u);  if (t) { goto L_0016C654; } }
    c.r[5].d[0] = c.r[8].d[0] << 56;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);  if (t) { goto L_0016C650; } }
L_0016C63C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 7u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016C650; } }
    c.r[5].d[0] = c.r[8].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 2;
L_0016C650:
    set32(c.r[4], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_0016C654:
    c.r[8].d[0] = c.r[4].d[0] << 56;
    set32(c.r[6], c.r[6].w[0] + 16u);
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    c.budget -= 3;
L_0016C660:
    c.r[4].d[0] = c.r[8].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[4].d[0] = c.r[4].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016C618u | kUnwind; return; } goto L_0016C618; } }
    c.r[7].d[0] = c.r[5].d[0] << 56;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x92490000u);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    c.r[4].d[0] = c.r[4].d[0] | 9363ull;
    mmi::mult(c, 0, c.r[4].w[0], c.r[7].w[0]);
    set32(c.r[6], c.r[7].w[0] >> 31);
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.r[5].d[0] = c.hi.d[0];
    set32(c.r[4], 0u + 7u);
    mmi::div(c, 0, c.r[7].w[0], c.r[4].w[0]);
    set32(c.r[4], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 2));
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    st8((c.r[3].w[0] + 2110u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = c.hi.d[0];
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0] + 3632u), static_cast<std::uint8_t>(c.r[4].w[0]));  c.pc = t; return; }
L_0016C6C0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], c.r[3].w[0] + 25952u);
    set32(c.r[8], c.r[5].w[0] + 25952u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (t) { goto L_0016C830; } }
    set32(c.r[5], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_0016C6E0:
    c.r[13].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 1u)));
    c.r[5].d[0] = c.r[5].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    set32(c.r[6], c.r[5].w[0] << 4);
    c.r[14].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 3u)));
    c.r[12].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0] + 12u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[3].w[0] + c.r[6].w[0]);  if (t) { goto L_0016C808; } }
L_0016C700:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 12u)));
    c.r[11].d[0] = c.r[12].d[0] << 48;
    c.r[11].d[0] = static_cast<std::uint64_t>(c.r[11].sd[0] >> 48);
    c.r[10].d[0] = c.r[11].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[10].d[0] != 0ull; c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 1u)));  if (t) { goto L_0016C750; } }
    c.budget -= 2;
    if (c.r[11].d[0] != c.r[6].d[0]) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_0016C7FC; }
    c.r[10].d[0] = c.r[13].d[0] << 48;
    c.r[11].d[0] = c.r[9].d[0] << 48;
    c.r[10].d[0] = static_cast<std::uint64_t>(c.r[10].sd[0] >> 48);
    c.r[11].d[0] = static_cast<std::uint64_t>(c.r[11].sd[0] >> 48);
    c.r[1].d[0] = c.r[11].sd[0] < c.r[10].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[1].d[0] != 0ull) { set32(c.r[13], c.r[29].w[0]);  goto L_0016C754; }
    c.r[10].d[0] = c.r[14].d[0] << 48;
    c.r[10].d[0] = static_cast<std::uint64_t>(c.r[10].sd[0] >> 48);
    c.r[1].d[0] = c.r[10].sd[0] < c.r[11].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0016C7F8; } }
L_0016C750:
    set32(c.r[13], c.r[29].w[0]);
    c.budget -= 1;
L_0016C754:
    set32(c.r[12], 0u + 4u);
    mmi::paddub(c.r[14], c.r[8], c.r[0]);
    c.budget -= 3;
L_0016C760:
    c.r[11].sd[0] = static_cast<std::int16_t>(ld16((c.r[14].w[0])));
    c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[14].w[0] + 2u)));
    set32(c.r[12], c.r[12].w[0] - 1u);
    st16((c.r[13].w[0]), static_cast<std::uint16_t>(c.r[11].w[0]));
    st16((c.r[13].w[0] + 2u), static_cast<std::uint16_t>(c.r[10].w[0]));
    set32(c.r[14], c.r[14].w[0] + 4u);
    c.budget -= 8;
    { const bool t = c.r[12].sd[0] > 0; set32(c.r[13], c.r[13].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016C760u | kUnwind; return; } goto L_0016C760; } }
    set32(c.r[12], 0u + 4u);
    mmi::paddub(c.r[14], c.r[7], c.r[0]);
    mmi::paddub(c.r[13], c.r[8], c.r[0]);
    c.budget -= 4;
L_0016C790:
    c.r[11].sd[0] = static_cast<std::int16_t>(ld16((c.r[14].w[0])));
    c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[14].w[0] + 2u)));
    set32(c.r[12], c.r[12].w[0] - 1u);
    st16((c.r[13].w[0]), static_cast<std::uint16_t>(c.r[11].w[0]));
    st16((c.r[13].w[0] + 2u), static_cast<std::uint16_t>(c.r[10].w[0]));
    set32(c.r[14], c.r[14].w[0] + 4u);
    c.budget -= 8;
    { const bool t = c.r[12].sd[0] > 0; set32(c.r[13], c.r[13].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016C790u | kUnwind; return; } goto L_0016C790; } }
    set32(c.r[14], c.r[29].w[0]);
    set32(c.r[12], 0u + 4u);
    mmi::paddub(c.r[13], c.r[7], c.r[0]);
    c.budget -= 4;
L_0016C7C0:
    c.r[11].sd[0] = static_cast<std::int16_t>(ld16((c.r[14].w[0])));
    c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[14].w[0] + 2u)));
    set32(c.r[12], c.r[12].w[0] - 1u);
    st16((c.r[13].w[0]), static_cast<std::uint16_t>(c.r[11].w[0]));
    st16((c.r[13].w[0] + 2u), static_cast<std::uint16_t>(c.r[10].w[0]));
    set32(c.r[14], c.r[14].w[0] + 4u);
    c.budget -= 8;
    { const bool t = c.r[12].sd[0] > 0; set32(c.r[13], c.r[13].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016C7C0u | kUnwind; return; } goto L_0016C7C0; } }
    c.r[13].d[0] = c.r[9].d[0] << 48;
    c.r[12].d[0] = c.r[6].d[0] << 48;
    c.r[13].d[0] = static_cast<std::uint64_t>(c.r[13].sd[0] >> 48);
    c.r[12].d[0] = static_cast<std::uint64_t>(c.r[12].sd[0] >> 48);
    mmi::paddub(c.r[14], c.r[13], c.r[0]);
    c.budget -= 6;
L_0016C7F8:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_0016C7FC:
    c.r[5].d[0] = c.r[5].d[0] << 48;
    set32(c.r[7], c.r[7].w[0] + 16u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.budget -= 3;
L_0016C808:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2111u)));
    c.r[9].d[0] = c.r[5].d[0] << 48;
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 48);
    c.r[6].d[0] = c.r[9].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016C700u | kUnwind; return; } goto L_0016C700; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[4].d[0] = c.r[4].d[0] << 48;
    set32(c.r[8], c.r[8].w[0] + 16u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.budget -= 4;
L_0016C830:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2111u)));
    c.r[6].d[0] = c.r[4].d[0] << 48;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.r[5].d[0] = c.r[6].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[5], c.r[6].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016C6E0u | kUnwind; return; } goto L_0016C6E0; } }
    mmi::paddub(c.r[8], c.r[0], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[6], c.r[3], c.r[0]);  if (t) { goto L_0016C8A0; } }
L_0016C858:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3631u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0016C87C; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 6u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[4], c.r[8].w[0] + 1u);  if (t) { goto L_0016C894; } }
    c.r[5].d[0] = c.r[8].d[0] << 48;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);  if (t) { goto L_0016C890; } }
L_0016C87C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 7u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016C890; } }
    c.r[5].d[0] = c.r[8].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.budget -= 2;
L_0016C890:
    set32(c.r[4], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_0016C894:
    c.r[8].d[0] = c.r[4].d[0] << 48;
    set32(c.r[6], c.r[6].w[0] + 16u);
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 48);
    c.budget -= 3;
L_0016C8A0:
    c.r[4].d[0] = c.r[8].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[4].d[0] = c.r[4].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016C858u | kUnwind; return; } goto L_0016C858; } }
    c.r[7].d[0] = c.r[5].d[0] << 48;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x92490000u);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    c.r[4].d[0] = c.r[4].d[0] | 9363ull;
    mmi::mult(c, 0, c.r[4].w[0], c.r[7].w[0]);
    set32(c.r[6], c.r[7].w[0] >> 31);
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.r[5].d[0] = c.hi.d[0];
    set32(c.r[4], 0u + 7u);
    mmi::div(c, 0, c.r[7].w[0], c.r[4].w[0]);
    set32(c.r[4], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 2));
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    st8((c.r[3].w[0] + 2110u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = c.hi.d[0];
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0] + 3632u), static_cast<std::uint8_t>(c.r[4].w[0]));  c.pc = t; return; }
L_0016C900:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], c.r[3].w[0] + 25952u);
    set32(c.r[7], c.r[5].w[0] + 25952u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (t) { goto L_0016CA20; } }
    set32(c.r[5], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_0016C920:
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 14u)));
    c.r[5].d[0] = c.r[5].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    set32(c.r[6], c.r[5].w[0] << 4);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[3].w[0] + c.r[6].w[0]);  if (t) { goto L_0016C9F8; } }
L_0016C938:
    c.r[13].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 14u)));
    c.r[8].d[0] = c.r[10].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    c.r[1].d[0] = c.r[8].sd[0] < c.r[13].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_0016C9EC; }
    set32(c.r[11], c.r[29].w[0]);
    set32(c.r[10], 0u + 4u);
    mmi::paddub(c.r[12], c.r[7], c.r[0]);
    c.budget -= 4;
L_0016C960:
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[12].w[0])));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[12].w[0] + 2u)));
    set32(c.r[10], c.r[10].w[0] - 1u);
    st16((c.r[11].w[0]), static_cast<std::uint16_t>(c.r[9].w[0]));
    st16((c.r[11].w[0] + 2u), static_cast<std::uint16_t>(c.r[8].w[0]));
    set32(c.r[12], c.r[12].w[0] + 4u);
    c.budget -= 8;
    { const bool t = c.r[10].sd[0] > 0; set32(c.r[11], c.r[11].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016C960u | kUnwind; return; } goto L_0016C960; } }
    set32(c.r[10], 0u + 4u);
    mmi::paddub(c.r[12], c.r[6], c.r[0]);
    mmi::paddub(c.r[11], c.r[7], c.r[0]);
    c.budget -= 4;
L_0016C990:
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[12].w[0])));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[12].w[0] + 2u)));
    set32(c.r[10], c.r[10].w[0] - 1u);
    st16((c.r[11].w[0]), static_cast<std::uint16_t>(c.r[9].w[0]));
    st16((c.r[11].w[0] + 2u), static_cast<std::uint16_t>(c.r[8].w[0]));
    set32(c.r[12], c.r[12].w[0] + 4u);
    c.budget -= 8;
    { const bool t = c.r[10].sd[0] > 0; set32(c.r[11], c.r[11].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016C990u | kUnwind; return; } goto L_0016C990; } }
    set32(c.r[12], c.r[29].w[0]);
    set32(c.r[10], 0u + 4u);
    mmi::paddub(c.r[11], c.r[6], c.r[0]);
    c.budget -= 4;
L_0016C9C0:
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[12].w[0])));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[12].w[0] + 2u)));
    set32(c.r[10], c.r[10].w[0] - 1u);
    st16((c.r[11].w[0]), static_cast<std::uint16_t>(c.r[9].w[0]));
    st16((c.r[11].w[0] + 2u), static_cast<std::uint16_t>(c.r[8].w[0]));
    set32(c.r[12], c.r[12].w[0] + 4u);
    c.budget -= 8;
    { const bool t = c.r[10].sd[0] > 0; set32(c.r[11], c.r[11].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016C9C0u | kUnwind; return; } goto L_0016C9C0; } }
    c.r[10].d[0] = c.r[13].d[0] << 56;
    c.r[10].d[0] = static_cast<std::uint64_t>(c.r[10].sd[0] >> 56);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 3;
L_0016C9EC:
    c.r[5].d[0] = c.r[5].d[0] << 56;
    set32(c.r[6], c.r[6].w[0] + 16u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 3;
L_0016C9F8:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2111u)));
    c.r[9].d[0] = c.r[5].d[0] << 56;
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 56);
    c.r[8].d[0] = c.r[9].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016C938u | kUnwind; return; } goto L_0016C938; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[4].d[0] = c.r[4].d[0] << 56;
    set32(c.r[7], c.r[7].w[0] + 16u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 4;
L_0016CA20:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2111u)));
    c.r[6].d[0] = c.r[4].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.r[5].d[0] = c.r[6].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[5], c.r[6].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016C920u | kUnwind; return; } goto L_0016C920; } }
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[6], c.r[3], c.r[0]);  if (t) { goto L_0016CA90; } }
L_0016CA48:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3631u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0016CA6C; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 6u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[4], c.r[7].w[0] + 1u);  if (t) { goto L_0016CA84; } }
    c.r[5].d[0] = c.r[7].d[0] << 56;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);  if (t) { goto L_0016CA80; } }
L_0016CA6C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 7u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016CA80; } }
    c.r[5].d[0] = c.r[7].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 2;
L_0016CA80:
    set32(c.r[4], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_0016CA84:
    c.r[7].d[0] = c.r[4].d[0] << 56;
    set32(c.r[6], c.r[6].w[0] + 16u);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    c.budget -= 3;
L_0016CA90:
    c.r[4].d[0] = c.r[7].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[4].d[0] = c.r[4].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016CA48u | kUnwind; return; } goto L_0016CA48; } }
    c.r[7].d[0] = c.r[5].d[0] << 56;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x92490000u);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    c.r[4].d[0] = c.r[4].d[0] | 9363ull;
    mmi::mult(c, 0, c.r[4].w[0], c.r[7].w[0]);
    set32(c.r[6], c.r[7].w[0] >> 31);
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.r[5].d[0] = c.hi.d[0];
    set32(c.r[4], 0u + 7u);
    mmi::div(c, 0, c.r[7].w[0], c.r[4].w[0]);
    set32(c.r[4], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 2));
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    st8((c.r[3].w[0] + 2110u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = c.hi.d[0];
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0] + 3632u), static_cast<std::uint8_t>(c.r[4].w[0]));  c.pc = t; return; }
L_0016CAF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { goto L_0016CB38; } }
L_0016CB0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CB14u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_001B(c, 207u, depth + 1u); else { c.pc = 0x0016FA40u; return; } if (c.pc != 0x0016CB14u) [[unlikely]] return; }
L_0016CB14:
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[16], c.r[16].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 16u);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 8;
    { const bool t = c.r[16].d[0] != 0ull; st32((c.r[17].w[0] + 40u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016CB0Cu | kUnwind; return; } goto L_0016CB0C; } }
    c.budget -= 1;
L_0016CB38:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0016CB50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00800000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 19760u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (t) { goto L_0016CB7C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 4560u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 12ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
L_0016CB7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);  if (t) { goto L_0016CBA0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 4560u)));
    set32(c.r[2], 0u + 13u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0016CB9C; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_0016CB9C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.budget -= 1;
L_0016CBA0:
    c.r[3].d[0] = c.r[2].d[0] | 5328ull;
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[6].d[0] = ld8((c.r[1].w[0] + 5328u));
    set32(c.r[3], 0u - 1u);
    c.r[5].d[0] = c.r[2].d[0] | 5312ull;
    c.r[4].d[0] = c.r[2].d[0] | 5760ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    st8((c.r[1].w[0] + 6224u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    st8((c.r[1].w[0] + 5776u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    st8((c.r[1].w[0] + 5329u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    st8((c.r[1].w[0] + 5330u), static_cast<std::uint8_t>(0u));
    st32((c.r[5].w[0]), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    st32((c.r[1].w[0] + 5316u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    st32((c.r[1].w[0] + 5320u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    st32((c.r[1].w[0] + 5324u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    st8((c.r[1].w[0] + 5777u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CC10u); st8((c.r[1].w[0] + 5778u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x0016CC10u) [[unlikely]] return; }
L_0016CC10:
    set32(c.r[2], 0u - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    st8((c.r[1].w[0] + 6225u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    st8((c.r[1].w[0] + 6226u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[4].d[0] = c.r[2].d[0] | 6208ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CC38u); c.r[5].d[0] = c.r[2].d[0] | 5312ull;  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x0016CC38u) [[unlikely]] return; }
L_0016CC38:
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 330u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0016CC68; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[3].d[0] = c.r[3].d[0] | 4896ull;
    st32((c.r[28].w[0] - 26224u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 104u)));
    st8((c.r[5].w[0] + 78u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 80u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0016CCBC; } }
L_0016CC68:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A30000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 10416u)));
    c.r[4].d[0] = c.r[3].d[0] & 1ull;
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[3], c.r[3].w[0] << 6);
    c.r[1].d[0] = c.r[1].d[0] | 5344ull;
    set32(c.r[3], c.r[3].w[0] + c.r[1].w[0]);
    st32((c.r[28].w[0] - 26224u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26224u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A30000u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 434u));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 104u)));
    st8((c.r[5].w[0] + 78u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 10416u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[4].d[0] = c.r[4].d[0] & 1ull;
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[3].w[0] + 80u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 21;
L_0016CCBC:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0016CCD0:
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 330u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0016CD00; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[2].d[0] = c.r[2].d[0] | 4896ull;
    st32((c.r[28].w[0] - 26224u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 104u)));
    st8((c.r[4].w[0] + 78u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 80u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0016CD54; } }
L_0016CD00:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A30000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 10416u)));
    c.r[3].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[2], c.r[2].w[0] << 6);
    c.r[1].d[0] = c.r[1].d[0] | 5344ull;
    set32(c.r[2], c.r[2].w[0] + c.r[1].w[0]);
    st32((c.r[28].w[0] - 26224u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26224u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A30000u);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 434u));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 104u)));
    st8((c.r[4].w[0] + 78u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 10416u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[2].w[0] + 80u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 21;
L_0016CD54:
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], c.r[2].w[0] - 28448u);
    set32(c.r[2], ld32((c.r[28].w[0] - 26224u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 78u)));
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 7);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 16u));
    st32((c.r[2].w[0] + 384u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 20u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26224u)));
    st32((c.r[2].w[0] + 388u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 24u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26224u)));
    st32((c.r[2].w[0] + 392u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 48u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26224u)));
    st32((c.r[2].w[0] + 400u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 52u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26224u)));
    st32((c.r[2].w[0] + 404u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 56u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26224u)));
    st32((c.r[2].w[0] + 408u), c.f[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 369u)));
    c.budget -= 30;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);  if (t) { goto L_0016CDF4; } }
    c.f[0] = ld32((c.r[3].w[0] + 64u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26224u)));
    st32((c.r[2].w[0] + 416u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 68u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26224u)));
    st32((c.r[2].w[0] + 420u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 72u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26224u)));
    st32((c.r[2].w[0] + 424u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.budget -= 10;
L_0016CDF4:
    c.budget -= 2;
    { c.r[4].d[0] = c.r[2].d[0] | 4896ull;  [[clang::musttail]] return unit_0029(c, 92u, depth); }
L_0016CE00:
    set32(c.r[6], ld32((c.r[28].w[0] - 26300u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 78u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 104u)));
    c.r[3].d[0] = c.r[5].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0016CE24; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0] + 136u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0016CE34; } }
L_0016CE24:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 105u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0016CE34; } }
    st8((c.r[6].w[0] + 137u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_0016CE34:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016CE40:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[16], c.r[2].w[0] - 28448u);
    set32(c.r[2], ld32((c.r[28].w[0] - 26224u)));
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    set32(c.r[4], c.r[29].w[0] + 32u);
    st32((c.r[2].w[0] + 384u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26224u)));
    st32((c.r[2].w[0] + 388u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26224u)));
    st32((c.r[2].w[0] + 392u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 48u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26224u)));
    st32((c.r[2].w[0] + 400u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26224u)));
    st32((c.r[2].w[0] + 404u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 56u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26224u)));
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CEA4u); st32((c.r[2].w[0] + 408u), c.f[0]);  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x00102728u; return; } if (c.pc != 0x0016CEA4u) [[unlikely]] return; }
L_0016CEA4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 14u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x38C90000u);
    c.r[2].d[0] = c.r[2].d[0] | 4058ull;
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.f[0] = c.r[2].w[0];
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CED0u); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0000(c, 229u, depth + 1u); else { c.pc = 0x001027C8u; return; } if (c.pc != 0x0016CED0u) [[unlikely]] return; }
L_0016CED0:
    set32(c.r[3], ld32((c.r[28].w[0] - 26224u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[6], c.r[2].w[0] - 26416u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CEE8u); set32(c.r[4], c.r[3].w[0] + 416u);  if (depth < kMaxDepth) unit_0000(c, 203u, depth + 1u); else { c.pc = 0x00102408u; return; } if (c.pc != 0x0016CEE8u) [[unlikely]] return; }
L_0016CEE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CEF4u); c.r[4].d[0] = c.r[2].d[0] | 4896ull;  if (depth < kMaxDepth) unit_0029(c, 92u, depth + 1u); else { c.pc = 0x001A52A0u; return; } if (c.pc != 0x0016CEF4u) [[unlikely]] return; }
L_0016CEF4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0016CF10:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0016CF24; } }
    set32(c.r[3], 0u + 128u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 26732u), c.r[3].w[0]);  if (t) { goto L_0016CF28; } }
L_0016CF24:
    st32((c.r[28].w[0] - 26732u), 0u);
    c.budget -= 1;
L_0016CF28:
    c.r[3].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[28].w[0] - 26728u), c.r[3].w[0]);  if (t) { goto L_0016CF40; } }
    set32(c.r[3], 0u + 1u);
    st32((c.r[28].w[0] - 26728u), c.r[3].w[0]);
    c.budget -= 2;
L_0016CF40:
    st8((c.r[28].w[0] - 26588u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 2u);
    st8((c.r[28].w[0] - 26587u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 26586u), static_cast<std::uint8_t>(0u));
    st32((c.r[28].w[0] - 26740u), 0u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 26736u), c.r[3].w[0]);  c.pc = t; return; }
L_0016CF60:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0016CF74; } }
    set32(c.r[3], 0u + 128u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 26732u), c.r[3].w[0]);  if (t) { goto L_0016CF78; } }
L_0016CF74:
    st32((c.r[28].w[0] - 26732u), 0u);
    c.budget -= 1;
L_0016CF78:
    c.r[3].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[28].w[0] - 26728u), c.r[3].w[0]);  if (t) { goto L_0016CF90; } }
    set32(c.r[3], 0u + 1u);
    st32((c.r[28].w[0] - 26728u), c.r[3].w[0]);
    c.budget -= 2;
L_0016CF90:
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 16));
    st8((c.r[28].w[0] - 26588u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 8));
    st8((c.r[28].w[0] - 26587u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 2u);
    st32((c.r[28].w[0] - 26740u), 0u);
    st8((c.r[28].w[0] - 26586u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 26736u), c.r[3].w[0]);  c.pc = t; return; }
L_0016CFC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_0016CFFC; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26732u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 26728u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    st32((c.r[28].w[0] - 26732u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26732u)));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_0016D028; } }
    set32(c.r[16], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 26732u), 0u);  if (t) { goto L_0016D028; } }
L_0016CFFC:
    set32(c.r[3], ld32((c.r[28].w[0] - 26732u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 26728u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[28].w[0] - 26732u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26732u)));
    c.r[2].d[0] = c.r[2].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0016D028; } }
    set32(c.r[2], 0u + 128u);
    set32(c.r[16], 0u + 1u);
    st32((c.r[28].w[0] - 26732u), c.r[2].w[0]);
    c.budget -= 3;
L_0016D028:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0016D04C; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26736u)));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0; st32((c.r[28].w[0] - 26736u), c.r[2].w[0]);  if (t) { goto L_0016D048; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_0016D04C; } }
L_0016D048:
    st32((c.r[28].w[0] - 26736u), 0u);
    c.budget -= 1;
L_0016D04C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00170000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D058u); set32(c.r[4], c.r[2].w[0] - 12032u);  if (depth < kMaxDepth) unit_0081(c, 121u, depth + 1u); else { c.pc = 0x00305ED0u; return; } if (c.pc != 0x0016D058u) [[unlikely]] return; }
L_0016D058:
    mmi::paddub(c.r[2], c.r[16], c.r[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0016D070:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0016D0A0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26732u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 26728u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    st32((c.r[28].w[0] - 26732u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26732u)));
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0016D0CC; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 26732u), 0u);  if (t) { goto L_0016D0CC; } }
L_0016D0A0:
    set32(c.r[4], ld32((c.r[28].w[0] - 26732u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 26728u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[28].w[0] - 26732u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26732u)));
    c.r[3].d[0] = c.r[3].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0016D0CC; } }
    set32(c.r[2], 0u + 128u);
    st32((c.r[28].w[0] - 26732u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
L_0016D0CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0016D0F4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26736u)));
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].sd[0] <= 0; st32((c.r[28].w[0] - 26736u), c.r[3].w[0]);  if (t) { goto L_0016D0EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0016D0F0; } }
L_0016D0EC:
    st32((c.r[28].w[0] - 26736u), 0u);
    c.budget -= 1;
L_0016D0F0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0016D0F4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 26740u), c.r[3].w[0]);  c.pc = t; return; }
L_0016D100:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 26732u)));
    set32(c.r[3], 0u + 1u);
    st32((c.r[28].w[0] - 26584u), c.r[3].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[28].w[0] - 26585u), static_cast<std::uint8_t>(c.r[4].w[0]));  c.pc = t; return; }
L_0016D120:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26584u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0016D188; } }
    c.r[5].d[0] = ld8((c.r[28].w[0] - 26587u));
    c.r[4].d[0] = ld8((c.r[28].w[0] - 26586u));
    c.r[3].d[0] = ld8((c.r[28].w[0] - 26585u));
    c.r[6].d[0] = ld8((c.r[28].w[0] - 26588u));
    set32(c.r[2], 0u + 1u);
    c.r[5].d[0] = c.r[5].d[0] << 8;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] << 24;
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    st64((c.r[1].w[0] - 26352u), c.r[2].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[4], c.r[2].w[0] - 26400u);
    set32(c.r[5], 0u + 24u);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D188u); st32((c.r[28].w[0] - 26584u), 0u);  if (depth < kMaxDepth) unit_0027(c, 105u, depth + 1u); else { c.pc = 0x0019F1A0u; return; } if (c.pc != 0x0016D188u) [[unlikely]] return; }
L_0016D188:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0016D1A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 26740u), 0u);  c.pc = t; return; }
L_0016D1B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26740u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0016D1D0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00170000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D1D0u); set32(c.r[4], c.r[2].w[0] - 12032u);  if (depth < kMaxDepth) unit_0081(c, 121u, depth + 1u); else { c.pc = 0x00305ED0u; return; } if (c.pc != 0x0016D1D0u) [[unlikely]] return; }
L_0016D1D0:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0016D1E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A30000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    set32(c.r[4], c.r[4].w[0] + 29344u);
    set32(c.r[5], ld32((c.r[1].w[0] + 10416u)));
    st32((c.r[28].w[0] - 26700u), c.r[4].w[0]);
    set32(c.r[4], 0u + 376u);
    st32((c.r[28].w[0] - 26704u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A30000u);
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[5], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[4].w[0] << 8);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[4], c.r[4].w[0] + 13472u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[28].w[0] - 26708u), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[6], c.r[4].w[0] + 8288u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[7], c.r[4].w[0] + 8256u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[8], c.r[4].w[0] + 8224u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[9], c.r[4].w[0] + 3040u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[10], c.r[4].w[0] + 3008u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[3], c.r[3].w[0] + 9600u);
    set32(c.r[11], c.r[4].w[0] + 2976u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 33;
L_0016D264:
    st32((c.r[7].w[0]), c.r[6].w[0]);
    st32((c.r[8].w[0]), 0u);
    st32((c.r[10].w[0]), c.r[9].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[11].w[0]), 0u);
    set32(c.r[6], c.r[6].w[0] + 864u);
    set32(c.r[7], c.r[7].w[0] + 4u);
    set32(c.r[8], c.r[8].w[0] + 4u);
    set32(c.r[9], c.r[9].w[0] + 864u);
    set32(c.r[10], c.r[10].w[0] + 4u);
    c.r[4].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[11], c.r[11].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016D264u | kUnwind; return; } goto L_0016D264; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[5], c.r[4].w[0] + 1952u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[6], c.r[4].w[0] + 1936u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[7], c.r[4].w[0] + 1920u);
    mmi::paddub(c.r[8], c.r[0], c.r[0]);
    c.budget -= 7;
L_0016D2B4:
    st32((c.r[6].w[0]), c.r[5].w[0]);
    set32(c.r[8], c.r[8].w[0] + 1u);
    st32((c.r[7].w[0]), 0u);
    set32(c.r[5], c.r[5].w[0] + 256u);
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.r[4].d[0] = c.r[8].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016D2B4u | kUnwind; return; } goto L_0016D2B4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[4], c.r[4].w[0] + 1408u);
    st32((c.r[28].w[0] - 26712u), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[4], c.r[4].w[0] + 1216u);
    st32((c.r[28].w[0] - 26720u), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[4].d[0] = c.r[4].d[0] | 18536ull;
    set32(c.r[5], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[28].w[0] - 26716u), 0u);
    st32((c.r[28].w[0] - 26724u), 0u);
    set32(c.r[4], ld32((c.r[5].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    c.r[4].d[0] = c.r[4].d[0] | 2ull;
    st32((c.r[5].w[0]), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[1].w[0] + 18536u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    c.r[4].d[0] = c.r[4].d[0] | 16ull;
    c.budget -= 22;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[1].w[0] + 18536u), c.r[4].w[0]);  c.pc = t; return; }
L_0016D330:
    set32(c.r[3], ld32((c.r[28].w[0] - 26704u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0016D344; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0016D3A4; } }
L_0016D344:
    set32(c.r[2], ld32((c.r[28].w[0] - 26716u)));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(128ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_0016D360; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0016D3A4; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_0016D360:
    set32(c.r[2], ld32((c.r[28].w[0] - 26700u)));
    st32((c.r[28].w[0] - 26704u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26708u)));
    set32(c.r[4], c.r[2].w[0] + 592u);
    st32((c.r[28].w[0] - 26700u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26708u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 26712u)));
    set32(c.r[4], c.r[4].w[0] + 544u);
    st32((c.r[28].w[0] - 26708u), c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26712u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 26716u)));
    set32(c.r[4], c.r[4].w[0] + 4u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[28].w[0] - 26712u), c.r[4].w[0]);
    st32((c.r[28].w[0] - 26716u), c.r[3].w[0]);
    c.budget -= 17;
L_0016D3A4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016D3B0:
    set32(c.r[3], ld32((c.r[28].w[0] - 26704u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0016D3C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0016D424; } }
L_0016D3C4:
    set32(c.r[2], ld32((c.r[28].w[0] - 26724u)));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(48ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_0016D3E0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0016D424; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_0016D3E0:
    set32(c.r[2], ld32((c.r[28].w[0] - 26700u)));
    st32((c.r[28].w[0] - 26704u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26708u)));
    set32(c.r[4], c.r[2].w[0] + 592u);
    st32((c.r[28].w[0] - 26700u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26708u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 26720u)));
    set32(c.r[4], c.r[4].w[0] + 544u);
    st32((c.r[28].w[0] - 26708u), c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26720u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 26724u)));
    set32(c.r[4], c.r[4].w[0] + 4u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[28].w[0] - 26720u), c.r[4].w[0]);
    st32((c.r[28].w[0] - 26724u), c.r[3].w[0]);
    c.budget -= 17;
L_0016D424:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016D430:
    set32(c.r[3], ld32((c.r[28].w[0] - 26704u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0016D444; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0016D4C0; } }
L_0016D444:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[2], c.r[2].w[0] + 8224u);
    set32(c.r[5], c.r[4].w[0] << 2);
    set32(c.r[6], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(216ll) ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_0016D470; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0016D4C0; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_0016D470:
    set32(c.r[2], ld32((c.r[28].w[0] - 26700u)));
    st32((c.r[28].w[0] - 26704u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[3], c.r[3].w[0] + 8256u);
    set32(c.r[4], ld32((c.r[28].w[0] - 26708u)));
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[2].w[0] + 592u);
    st32((c.r[28].w[0] - 26700u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26708u)));
    set32(c.r[3], c.r[3].w[0] + 544u);
    st32((c.r[28].w[0] - 26708u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] + 4u);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[6].w[0]), c.r[3].w[0]);
    c.budget -= 20;
L_0016D4C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016D4D0:
    set32(c.r[3], ld32((c.r[28].w[0] - 26704u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0016D4E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0016D560; } }
L_0016D4E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[2], c.r[2].w[0] + 2976u);
    set32(c.r[5], c.r[4].w[0] << 2);
    set32(c.r[6], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(216ll) ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_0016D510; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0016D560; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_0016D510:
    set32(c.r[2], ld32((c.r[28].w[0] - 26700u)));
    st32((c.r[28].w[0] - 26704u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[3], c.r[3].w[0] + 3008u);
    set32(c.r[4], ld32((c.r[28].w[0] - 26708u)));
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[2].w[0] + 592u);
    st32((c.r[28].w[0] - 26700u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26708u)));
    set32(c.r[3], c.r[3].w[0] + 544u);
    st32((c.r[28].w[0] - 26708u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] + 4u);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[6].w[0]), c.r[3].w[0]);
    c.budget -= 20;
L_0016D560:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016D570:
    set32(c.r[3], ld32((c.r[28].w[0] - 26704u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0016D584; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0016D600; } }
L_0016D584:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[2], c.r[2].w[0] + 1920u);
    set32(c.r[5], c.r[4].w[0] << 2);
    set32(c.r[6], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(64ll) ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_0016D5B0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0016D600; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_0016D5B0:
    set32(c.r[2], ld32((c.r[28].w[0] - 26700u)));
    st32((c.r[28].w[0] - 26704u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[3], c.r[3].w[0] + 1936u);
    set32(c.r[4], ld32((c.r[28].w[0] - 26708u)));
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[2].w[0] + 592u);
    st32((c.r[28].w[0] - 26700u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26708u)));
    set32(c.r[3], c.r[3].w[0] + 544u);
    st32((c.r[28].w[0] - 26708u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] + 4u);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[6].w[0]), c.r[3].w[0]);
    c.budget -= 20;
L_0016D600:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016D610:
    set32(c.r[29], c.r[29].w[0] - 528u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26716u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0016D914; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A40000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 28141u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[18], ld32((c.r[28].w[0] - 26712u)));
    set32(c.r[19], ld32((c.r[28].w[0] - 26716u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[3].d[0] | 4896ull;  if (t) { goto L_0016D908; } }
    set32(c.r[18], c.r[18].w[0] - 4u);
    c.budget -= 1;
L_0016D65C:
    set32(c.r[17], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D668u); set32(c.r[4], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_0027(c, 173u, depth + 1u); else { c.pc = 0x0019FE30u; return; } if (c.pc != 0x0016D668u) [[unlikely]] return; }
L_0016D668:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[2], 0u + 18u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 17u);  if (t) { goto L_0016D6B8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26224u)));
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[29].w[0] + 224u);
    set32(c.r[6], c.r[29].w[0] + 288u);
    c.r[20].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 433u)));
    set32(c.r[7], c.r[29].w[0] + 352u);
    set32(c.r[8], c.r[16].w[0] + 1856u);
    set32(c.r[2], c.r[20].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[20].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D6ACu); set32(c.r[9], c.r[2].w[0] + 1360u);  if (depth < kMaxDepth) unit_000D(c, 125u, depth + 1u); else { c.pc = 0x00135950u; return; } if (c.pc != 0x0016D6ACu) [[unlikely]] return; }
L_0016D6AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[29].w[0] + 352u);  if (t) { goto L_0016D754; } }
    set32(c.r[2], 0u + 17u);
    c.budget -= 1;
L_0016D6B8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0016D6F4; } }
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D6CCu); set32(c.r[5], c.r[29].w[0] + 416u);  if (depth < kMaxDepth) unit_0027(c, 100u, depth + 1u); else { c.pc = 0x0019EFA0u; return; } if (c.pc != 0x0016D6CCu) [[unlikely]] return; }
L_0016D6CC:
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[29].w[0] + 224u);
    set32(c.r[6], c.r[29].w[0] + 288u);
    set32(c.r[7], c.r[29].w[0] + 352u);
    set32(c.r[8], c.r[16].w[0] + 1856u);
    set32(c.r[9], c.r[29].w[0] + 416u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D6ECu); mmi::paddub(c.r[20], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_000D(c, 125u, depth + 1u); else { c.pc = 0x00135950u; return; } if (c.pc != 0x0016D6ECu) [[unlikely]] return; }
L_0016D6EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016D750; } }
L_0016D6F4:
    set32(c.r[2], ld32((c.r[28].w[0] - 26224u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 433u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[17].w[0] + 256u);  if (t) { goto L_0016D710; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], 0u + 1u);  if (t) { goto L_0016D720; } }
    set32(c.r[4], c.r[17].w[0] + 256u);
    c.budget -= 1;
L_0016D710:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D718u);  if (depth < kMaxDepth) unit_0075(c, 244u, depth + 1u); else { c.pc = 0x002D78B0u; return; } if (c.pc != 0x0016D718u) [[unlikely]] return; }
L_0016D718:
    mmi::paddub(c.r[20], c.r[2], c.r[0]);
    c.budget -= 2;
L_0016D720:
    set32(c.r[2], c.r[20].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[20].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[9], c.r[2].w[0] + 1360u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[29].w[0] + 224u);
    set32(c.r[6], c.r[29].w[0] + 288u);
    set32(c.r[7], c.r[29].w[0] + 352u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D74Cu); set32(c.r[8], c.r[16].w[0] + 1856u);  if (depth < kMaxDepth) unit_000D(c, 125u, depth + 1u); else { c.pc = 0x00135950u; return; } if (c.pc != 0x0016D74Cu) [[unlikely]] return; }
L_0016D74C:
    c.budget -= 1;
L_0016D750:
    set32(c.r[2], c.r[29].w[0] + 352u);
    c.budget -= 1;
L_0016D754:
    set32(c.r[4], c.r[17].w[0] + 272u);
    set32(c.r[5], c.r[17].w[0] + 336u);
    set32(c.r[6], c.r[17].w[0] + 400u);
    set32(c.r[7], c.r[17].w[0] + 464u);
    set32(c.r[8], c.r[17].w[0] + 208u);
    set32(c.r[9], c.r[29].w[0] + 160u);
    set32(c.r[10], c.r[29].w[0] + 224u);
    set32(c.r[11], c.r[29].w[0] + 288u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D77Cu); st64((c.r[29].w[0]), c.r[2].d[0]);  if (depth < kMaxDepth) unit_000D(c, 129u, depth + 1u); else { c.pc = 0x00135A80u; return; } if (c.pc != 0x0016D77Cu) [[unlikely]] return; }
L_0016D77C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D784u); mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 156u, depth + 1u); else { c.pc = 0x0019A4D0u; return; } if (c.pc != 0x0016D784u) [[unlikely]] return; }
L_0016D784:
    set32(c.r[2], c.r[20].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[3], c.r[2].w[0] << 4);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00880000u);
    set32(c.r[2], c.r[2].w[0] - 23440u);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[5].w[0] + 16u));
    set32(c.r[2], 0u - 128u);
    st32((c.r[29].w[0] + 128u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 20u));
    st32((c.r[29].w[0] + 132u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[29].w[0] + 136u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[29].w[0] + 140u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 22;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016D80C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[4], c.r[17].w[0] + 16u);
    set32(c.r[6], ld32((c.r[2].w[0])));
    set32(c.r[7], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[8], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[9], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[10], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[11], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D804u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0031(c, 243u, depth + 1u); else { c.pc = 0x001C74A0u; return; } if (c.pc != 0x0016D804u) [[unlikely]] return; }
L_0016D804:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[19].w[0] - 1u);  if (t) { goto L_0016D904; } }
L_0016D80C:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = ld16((c.r[4].w[0] + 98u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[3], c.r[17].w[0] + 16u);  if (t) { goto L_0016D84C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[5], c.r[17].w[0] + 16u);
    set32(c.r[7], c.r[29].w[0] + 128u);
    set32(c.r[2], c.r[2].w[0] + 32767u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D840u); c.r[8].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0027(c, 164u, depth + 1u); else { c.pc = 0x0019FCC0u; return; } if (c.pc != 0x0016D840u) [[unlikely]] return; }
L_0016D840:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016D900; } }
    set32(c.r[3], c.r[17].w[0] + 16u);
    c.budget -= 1;
L_0016D84C:
    set32(c.r[2], c.r[29].w[0] + 112u);
    ld128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[4]);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    c.f[3] = ld32((c.r[5].w[0] + 20u));
    c.f[2] = ld32((c.r[29].w[0] + 124u));
    c.f[1] = ld32((c.r[5].w[0] + 16u));
    c.f[0] = 0u;
    fpu_div(c, 2u, c.f[3], c.f[2]);
    c.f[1] = fp::add(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[29].w[0] + 120u), c.f[1]);  if (t) { goto L_0016D88C; } }
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 120u), c.f[0]);  if (t) { goto L_0016D8C8; } }
L_0016D88C:
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    c.f[1] = ld32((c.r[29].w[0] + 120u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0016D8AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 120u), c.f[0]);  if (t) { goto L_0016D8C8; } }
L_0016D8AC:
    c.f[0] = ld32((c.r[5].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], c.r[29].w[0] + 112u);  if (t) { goto L_0016D8CC; } }
    st32((c.r[29].w[0] + 120u), c.f[0]);
    c.budget -= 2;
L_0016D8C8:
    set32(c.r[3], c.r[29].w[0] + 112u);
    c.budget -= 1;
L_0016D8CC:
    set32(c.r[2], c.r[29].w[0] + 144u);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    vu::ftoi(c.vu0, 15u, 5u, 4u, 4);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[5]);
    set32(c.r[2], ld32((c.r[29].w[0] + 152u)));
    set32(c.r[5], c.r[17].w[0] + 16u);
    st32((c.r[17].w[0] + 576u), c.r[2].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D8FCu); set32(c.r[7], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0027(c, 161u, depth + 1u); else { c.pc = 0x0019FC30u; return; } if (c.pc != 0x0016D8FCu) [[unlikely]] return; }
L_0016D8FC:
    c.budget -= 1;
L_0016D900:
    set32(c.r[19], c.r[19].w[0] - 1u);
    c.budget -= 1;
L_0016D904:
    c.budget -= 1;
L_0016D908:
    c.budget -= 2;
    if (c.r[19].d[0] != 0ull) { set32(c.r[18], c.r[18].w[0] - 4u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0016D65Cu | kUnwind; return; } goto L_0016D65C; }
    st32((c.r[28].w[0] - 26716u), 0u);
    c.budget -= 1;
L_0016D914:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 528u);  c.pc = t; return; }
L_0016D940:
    set32(c.r[29], c.r[29].w[0] - 368u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26724u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0016DADC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[4], c.r[2].w[0] + 9760u);
    st32((c.r[29].w[0] + 84u), 0u);
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D97Cu); st32((c.r[29].w[0] + 80u), 0u);  if (depth < kMaxDepth) unit_0027(c, 105u, depth + 1u); else { c.pc = 0x0019F1A0u; return; } if (c.pc != 0x0016D97Cu) [[unlikely]] return; }
L_0016D97C:
    set32(c.r[18], ld32((c.r[28].w[0] - 26724u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[17], ld32((c.r[28].w[0] - 26720u)));  if (t) { goto L_0016DAD8; } }
    set32(c.r[17], c.r[17].w[0] - 4u);
    c.budget -= 1;
L_0016D98C:
    set32(c.r[16], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D998u); set32(c.r[4], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0027(c, 173u, depth + 1u); else { c.pc = 0x0019FE30u; return; } if (c.pc != 0x0016D998u) [[unlikely]] return; }
L_0016D998:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[29].w[0] + 160u);
    set32(c.r[6], c.r[29].w[0] + 224u);
    set32(c.r[7], c.r[29].w[0] + 288u);
    c.r[8].d[0] = c.r[2].d[0] | 6752ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D9B8u); c.r[9].d[0] = c.r[2].d[0] | 6256ull;  if (depth < kMaxDepth) unit_000D(c, 125u, depth + 1u); else { c.pc = 0x00135950u; return; } if (c.pc != 0x0016D9B8u) [[unlikely]] return; }
L_0016D9B8:
    set32(c.r[2], c.r[29].w[0] + 288u);
    set32(c.r[4], c.r[16].w[0] + 272u);
    set32(c.r[5], c.r[16].w[0] + 336u);
    set32(c.r[6], c.r[16].w[0] + 400u);
    set32(c.r[7], c.r[16].w[0] + 464u);
    set32(c.r[8], c.r[16].w[0] + 208u);
    set32(c.r[9], c.r[29].w[0] + 96u);
    set32(c.r[10], c.r[29].w[0] + 160u);
    set32(c.r[11], c.r[29].w[0] + 224u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D9E4u); st64((c.r[29].w[0]), c.r[2].d[0]);  if (depth < kMaxDepth) unit_000D(c, 129u, depth + 1u); else { c.pc = 0x00135A80u; return; } if (c.pc != 0x0016D9E4u) [[unlikely]] return; }
L_0016D9E4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[2], 0u + 18u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0016D9FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 128u);  if (t) { goto L_0016DA20; } }
L_0016D9FC:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[5], c.r[16].w[0] + 16u);
    set32(c.r[7], c.r[29].w[0] + 80u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DA14u); c.r[8].d[0] = 0ull | 32774ull;  if (depth < kMaxDepth) unit_0027(c, 164u, depth + 1u); else { c.pc = 0x0019FCC0u; return; } if (c.pc != 0x0016DA14u) [[unlikely]] return; }
L_0016DA14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] - 1u);  if (t) { goto L_0016DACC; } }
    set32(c.r[2], 0u - 128u);
    c.budget -= 1;
L_0016DA20:
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016DA78; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[4], c.r[16].w[0] + 16u);
    st32((c.r[29].w[0] + 364u), 0u);
    st32((c.r[29].w[0] + 360u), 0u);
    st32((c.r[29].w[0] + 356u), 0u);
    st32((c.r[29].w[0] + 352u), 0u);
    set32(c.r[6], ld32((c.r[2].w[0])));
    set32(c.r[7], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[8], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[9], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[10], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[11], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DA70u); set32(c.r[5], c.r[29].w[0] + 352u);  if (depth < kMaxDepth) unit_0031(c, 277u, depth + 1u); else { c.pc = 0x001C7B10u; return; } if (c.pc != 0x0016DA70u) [[unlikely]] return; }
L_0016DA70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016DAC8; } }
L_0016DA78:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = ld16((c.r[4].w[0] + 98u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0016DAB4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[5], c.r[16].w[0] + 16u);
    set32(c.r[7], c.r[29].w[0] + 80u);
    set32(c.r[2], c.r[2].w[0] + 32767u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DAACu); c.r[8].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0027(c, 164u, depth + 1u); else { c.pc = 0x0019FCC0u; return; } if (c.pc != 0x0016DAACu) [[unlikely]] return; }
L_0016DAAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016DAC8; } }
L_0016DAB4:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[5], c.r[16].w[0] + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DAC8u); set32(c.r[7], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0027(c, 164u, depth + 1u); else { c.pc = 0x0019FCC0u; return; } if (c.pc != 0x0016DAC8u) [[unlikely]] return; }
L_0016DAC8:
    set32(c.r[18], c.r[18].w[0] - 1u);
    c.budget -= 1;
L_0016DACC:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[17], c.r[17].w[0] - 4u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0016D98Cu | kUnwind; return; } goto L_0016D98C; }
    c.budget -= 1;
L_0016DAD8:
    st32((c.r[28].w[0] - 26724u), 0u);
    c.budget -= 1;
L_0016DADC:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 368u);  c.pc = t; return; }
L_0016DB00:
    set32(c.r[29], c.r[29].w[0] - 496u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; mmi::paddub(c.r[18], c.r[4], c.r[0]);  if (t) { goto L_0016DDEC; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 96u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0016DDEC; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0016DC14; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[5], c.r[2].w[0] + 26848u);
    c.r[3].d[0] = ld8((c.r[17].w[0] + 4u));
    set32(c.r[2], 0u + 26064u);
    c.r[7].d[0] = ld8((c.r[17].w[0] + 1u));
    mmi::mult(c, 1, c.r[4].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[1];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[2], c.r[2].w[0] + 27600u);
    set32(c.r[16], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[2].w[0] + 768u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[3].d[0] = c.r[2].d[0] | 244ull;
    set32(c.r[6], 0u + 21728u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    mmi::mult(c, 0, c.r[7].w[0], c.r[6].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    st128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    st128((c.r[4].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    st128((c.r[4].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    set32(c.r[2], ld32((c.r[5].w[0] + 21712u)));
    st32((c.r[29].w[0] + 488u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 34;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DBC0u); set32(c.r[4], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_001C(c, 204u, depth + 1u); else { c.pc = 0x00173320u; return; } if (c.pc != 0x0016DBC0u) [[unlikely]] return; }
L_0016DBC0:
    st16((c.r[29].w[0] + 490u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 488u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016DBD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[17].w[0] + 8u)));  if (t) { goto L_0016DBE0; } }
L_0016DBD8:
    set32(c.r[6], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 2;
L_0016DBE0:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 4u));
    set32(c.r[7], ld32((c.r[16].w[0] + 560u)));
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[2].w[0] + 1136u), c.r[7].w[0]);
    c.r[7].d[0] = ld8((c.r[17].w[0] + 4u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DC0Cu); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_001B(c, 101u, depth + 1u); else { c.pc = 0x0016DE10u; return; } if (c.pc != 0x0016DC0Cu) [[unlikely]] return; }
L_0016DC0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);  if (t) { goto L_0016DDF0; } }
L_0016DC14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DC1Cu); c.r[4].d[0] = ld8((c.r[17].w[0] + 1u));  if (depth < kMaxDepth) unit_001B(c, 66u, depth + 1u); else { c.pc = 0x0016D430u; return; } if (c.pc != 0x0016DC1Cu) [[unlikely]] return; }
L_0016DC1C:
    mmi::paddub(c.r[16], c.r[2], c.r[0]);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0016DDEC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[5].d[0] = c.r[2].d[0] | 244ull;
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[16].w[0] + 208u);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    st128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    st128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    st128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    c.r[4].d[0] = ld8((c.r[17].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], 0u + 21728u);
    set32(c.r[2], c.r[2].w[0] + 26848u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[17].w[0] + 4u));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[16].w[0] + 8u), 0u);
    c.r[4].d[0] = ld8((c.r[17].w[0] + 1u));
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 21712u)));
    st32((c.r[29].w[0] + 492u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DC98u); set32(c.r[4], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_001C(c, 204u, depth + 1u); else { c.pc = 0x00173320u; return; } if (c.pc != 0x0016DC98u) [[unlikely]] return; }
L_0016DC98:
    st16((c.r[29].w[0] + 494u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 492u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016DCB4; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_0016DCBC; } }
L_0016DCB4:
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 2;
L_0016DCBC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DCCCu); c.r[18].d[0] = c.r[2].d[0] | 4896ull;  if (depth < kMaxDepth) unit_0027(c, 173u, depth + 1u); else { c.pc = 0x0019FE30u; return; } if (c.pc != 0x0016DCCCu) [[unlikely]] return; }
L_0016DCCC:
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DCD8u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0027(c, 100u, depth + 1u); else { c.pc = 0x0019EFA0u; return; } if (c.pc != 0x0016DCD8u) [[unlikely]] return; }
L_0016DCD8:
    set32(c.r[8], c.r[18].w[0] + 1856u);
    c.r[17].d[0] = c.r[2].d[0] << 56;
    set32(c.r[4], c.r[29].w[0] + 224u);
    set32(c.r[5], c.r[29].w[0] + 288u);
    set32(c.r[6], c.r[29].w[0] + 352u);
    set32(c.r[7], c.r[29].w[0] + 416u);
    set32(c.r[9], c.r[29].w[0] + 112u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DCFCu); c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);  if (depth < kMaxDepth) unit_000D(c, 125u, depth + 1u); else { c.pc = 0x00135950u; return; } if (c.pc != 0x0016DCFCu) [[unlikely]] return; }
L_0016DCFC:
    set32(c.r[2], c.r[29].w[0] + 416u);
    set32(c.r[4], c.r[16].w[0] + 272u);
    set32(c.r[5], c.r[16].w[0] + 336u);
    set32(c.r[6], c.r[16].w[0] + 400u);
    set32(c.r[7], c.r[16].w[0] + 464u);
    set32(c.r[8], c.r[16].w[0] + 208u);
    set32(c.r[9], c.r[29].w[0] + 224u);
    set32(c.r[10], c.r[29].w[0] + 288u);
    set32(c.r[11], c.r[29].w[0] + 352u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DD28u); st64((c.r[29].w[0]), c.r[2].d[0]);  if (depth < kMaxDepth) unit_000D(c, 129u, depth + 1u); else { c.pc = 0x00135A80u; return; } if (c.pc != 0x0016DD28u) [[unlikely]] return; }
L_0016DD28:
    c.r[4].d[0] = c.r[17].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[3].w[0] << 4);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00880000u);
    set32(c.r[3], c.r[3].w[0] - 23440u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[16].w[0] + 16u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    ld128((c.r[5].w[0] + 48u) & ~15u, c.vu0.vf[8]);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[8]);
    c.f[3] = ld32((c.r[3].w[0] + 20u));
    c.f[2] = ld32((c.r[29].w[0] + 92u));
    c.f[1] = ld32((c.r[3].w[0] + 16u));
    c.f[0] = 0u;
    fpu_div(c, 2u, c.f[3], c.f[2]);
    c.f[1] = fp::add(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 22;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[29].w[0] + 88u), c.f[1]);  if (t) { goto L_0016DD8C; } }
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 88u), c.f[0]);  if (t) { goto L_0016DDC4; } }
L_0016DD8C:
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = ld32((c.r[29].w[0] + 88u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0016DDAC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 88u), c.f[0]);  if (t) { goto L_0016DDC4; } }
L_0016DDAC:
    c.f[0] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[29].w[0] + 80u);  if (t) { goto L_0016DDC8; } }
    st32((c.r[29].w[0] + 88u), c.f[0]);
    c.budget -= 1;
L_0016DDC4:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 1;
L_0016DDC8:
    set32(c.r[3], c.r[29].w[0] + 96u);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    vu::ftoi(c.vu0, 15u, 5u, 4u, 4);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[5]);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[4], ld32((c.r[29].w[0] + 104u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st32((c.r[16].w[0] + 576u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 588u), c.r[3].w[0]);
    c.budget -= 9;
L_0016DDEC:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0016DDF0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 496u);  c.pc = t; return; }
L_0016DE10:
    set32(c.r[29], c.r[29].w[0] - 480u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[5].w[0] + 26044u)));
    mmi::paddub(c.r[20], c.r[4], c.r[0]);
    mmi::paddub(c.r[17], c.r[6], c.r[0]);
    mmi::paddub(c.r[18], c.r[7], c.r[0]);
    c.r[4].d[0] = ld8((c.r[2].w[0] + 1u));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DE48u); mmi::paddub(c.r[19], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_001B(c, 66u, depth + 1u); else { c.pc = 0x0016D430u; return; } if (c.pc != 0x0016DE48u) [[unlikely]] return; }
L_0016DE48:
    mmi::paddub(c.r[16], c.r[2], c.r[0]);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0016DF30; } }
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[18].w[0]));
    st32((c.r[16].w[0] + 8u), c.r[20].w[0]);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 4u), c.r[17].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[17].d[0] = c.r[2].d[0] | 4896ull;
    set32(c.r[2], c.r[18].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 768u);
    set32(c.r[3], c.r[16].w[0] + 208u);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    st128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    st128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    st128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DEB0u); set32(c.r[4], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0027(c, 173u, depth + 1u); else { c.pc = 0x0019FE30u; return; } if (c.pc != 0x0016DEB0u) [[unlikely]] return; }
L_0016DEB0:
    set32(c.r[6], c.r[16].w[0] + 16u);
    mmi::paddub(c.r[4], c.r[20], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DEC0u); mmi::paddub(c.r[5], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0027(c, 95u, depth + 1u); else { c.pc = 0x0019EE10u; return; } if (c.pc != 0x0016DEC0u) [[unlikely]] return; }
L_0016DEC0:
    set32(c.r[4], c.r[29].w[0] + 112u);
    mmi::paddub(c.r[5], c.r[20], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DED0u); mmi::paddub(c.r[6], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0024(c, 162u, depth + 1u); else { c.pc = 0x001923A0u; return; } if (c.pc != 0x0016DED0u) [[unlikely]] return; }
L_0016DED0:
    set32(c.r[8], c.r[17].w[0] + 1856u);
    set32(c.r[4], c.r[29].w[0] + 224u);
    set32(c.r[5], c.r[29].w[0] + 288u);
    set32(c.r[6], c.r[29].w[0] + 352u);
    set32(c.r[7], c.r[29].w[0] + 416u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DEECu); set32(c.r[9], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000D(c, 125u, depth + 1u); else { c.pc = 0x00135950u; return; } if (c.pc != 0x0016DEECu) [[unlikely]] return; }
L_0016DEEC:
    set32(c.r[2], c.r[29].w[0] + 416u);
    set32(c.r[4], c.r[16].w[0] + 272u);
    set32(c.r[5], c.r[16].w[0] + 336u);
    set32(c.r[6], c.r[16].w[0] + 400u);
    set32(c.r[7], c.r[16].w[0] + 464u);
    set32(c.r[8], c.r[16].w[0] + 208u);
    set32(c.r[9], c.r[29].w[0] + 224u);
    set32(c.r[10], c.r[29].w[0] + 288u);
    set32(c.r[11], c.r[29].w[0] + 352u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DF18u); st64((c.r[29].w[0]), c.r[2].d[0]);  if (depth < kMaxDepth) unit_000D(c, 129u, depth + 1u); else { c.pc = 0x00135A80u; return; } if (c.pc != 0x0016DF18u) [[unlikely]] return; }
L_0016DF18:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 26043u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[19].w[0] + 560u)));
    st32((c.r[16].w[0] + 576u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 588u), c.r[3].w[0]);
    c.budget -= 6;
L_0016DF30:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 480u);  c.pc = t; return; }
L_0016DF50:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[5].w[0] + 26044u)));
    mmi::paddub(c.r[20], c.r[4], c.r[0]);
    mmi::paddub(c.r[19], c.r[6], c.r[0]);
    mmi::paddub(c.r[18], c.r[7], c.r[0]);
    c.f[20] = c.f[12];
    c.r[4].d[0] = ld8((c.r[2].w[0] + 1u));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DF90u); mmi::paddub(c.r[17], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_001B(c, 67u, depth + 1u); else { c.pc = 0x0016D4D0u; return; } if (c.pc != 0x0016DF90u) [[unlikely]] return; }
L_0016DF90:
    mmi::paddub(c.r[16], c.r[2], c.r[0]);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0016E014; } }
    set32(c.r[2], c.r[18].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] << 6);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[18].w[0]));
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[20].w[0]);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] + 768u);
    st32((c.r[16].w[0] + 4u), c.r[19].w[0]);
    set32(c.r[3], c.r[16].w[0] + 208u);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    st128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    st128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    st128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DFF0u); set32(c.r[4], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0027(c, 173u, depth + 1u); else { c.pc = 0x0019FE30u; return; } if (c.pc != 0x0016DFF0u) [[unlikely]] return; }
L_0016DFF0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 26043u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0] + 560u)));
    st32((c.r[16].w[0] + 576u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 588u), c.f[0]);
    c.budget -= 9;
L_0016E014:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0016E040:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8384u)));
    set32(c.r[3], 0u + 26064u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[2], c.r[2].w[0] + 27600u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 26044u)));
    c.r[4].d[0] = ld8((c.r[2].w[0] + 1u));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E080u); mmi::paddub(c.r[16], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_001B(c, 66u, depth + 1u); else { c.pc = 0x0016D430u; return; } if (c.pc != 0x0016E080u) [[unlikely]] return; }
L_0016E080:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016E0A4; } }
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[16].w[0]));
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 8u), c.r[17].w[0]);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 26043u)));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
L_0016E0A4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0016E0C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00660000u);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[3], c.r[3].w[0] + 8224u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0016E1C4; } }
    set32(c.r[3], 0u + 21728u);
    mmi::mult(c, 0, c.r[17].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], c.r[3].w[0] + 26848u);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 3u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[17].w[0] << 3);  if (t) { goto L_0016E124; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E120u);  if (depth < kMaxDepth) unit_000D(c, 274u, depth + 1u); else { c.pc = 0x00137DC0u; return; } if (c.pc != 0x0016E120u) [[unlikely]] return; }
L_0016E120:
    set32(c.r[3], c.r[17].w[0] << 3);
    c.budget -= 1;
L_0016E124:
    set32(c.r[4], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[4], c.r[3].w[0] << 5);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[3], c.r[3].w[0] + 8288u);
    set32(c.r[17], ld32((c.r[16].w[0])));
    c.budget -= 9;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[19], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_0016E1C0; } }
L_0016E148:
    set32(c.r[18], ld32((c.r[19].w[0])));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 2u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E158u); set32(c.r[19], c.r[19].w[0] + 4u);  if (depth < kMaxDepth) unit_0026(c, 156u, depth + 1u); else { c.pc = 0x0019A4D0u; return; } if (c.pc != 0x0016E158u) [[unlikely]] return; }
L_0016E158:
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0016E17C; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[6], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E174u); set32(c.r[5], c.r[18].w[0] + 16u);  if (depth < kMaxDepth) unit_0027(c, 158u, depth + 1u); else { c.pc = 0x0019FBB0u; return; } if (c.pc != 0x0016E174u) [[unlikely]] return; }
L_0016E174:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] - 1u);  if (t) { goto L_0016E1B4; } }
L_0016E17C:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 3u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0016E1A8; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8384u)));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1u)));
    set32(c.r[6], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E1A0u); set32(c.r[5], c.r[18].w[0] + 16u);  if (depth < kMaxDepth) unit_0027(c, 155u, depth + 1u); else { c.pc = 0x0019FB30u; return; } if (c.pc != 0x0016E1A0u) [[unlikely]] return; }
L_0016E1A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016E1B0; } }
L_0016E1A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E1B0u); c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1u)));  if (depth < kMaxDepth) unit_0027(c, 174u, depth + 1u); else { c.pc = 0x0019FF20u; return; } if (c.pc != 0x0016E1B0u) [[unlikely]] return; }
L_0016E1B0:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_0016E1B4:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016E148u | kUnwind; return; } goto L_0016E148; } }
    c.budget -= 1;
L_0016E1C0:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_0016E1C4:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0016E1E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00660000u);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[3], c.r[3].w[0] + 2976u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0016E2DC; } }
    set32(c.r[2], 0u + 21728u);
    mmi::mult(c, 0, c.r[17].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[2].w[0] + 26848u);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 3u));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016E23C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E23Cu);  if (depth < kMaxDepth) unit_000D(c, 274u, depth + 1u); else { c.pc = 0x00137DC0u; return; } if (c.pc != 0x0016E23Cu) [[unlikely]] return; }
L_0016E23C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[4], c.r[2].w[0] + 9760u);
    st32((c.r[29].w[0] + 68u), 0u);
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E258u); st32((c.r[29].w[0] + 64u), 0u);  if (depth < kMaxDepth) unit_0027(c, 105u, depth + 1u); else { c.pc = 0x0019F1A0u; return; } if (c.pc != 0x0016E258u) [[unlikely]] return; }
L_0016E258:
    set32(c.r[3], c.r[17].w[0] << 3);
    set32(c.r[4], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[4], c.r[3].w[0] << 5);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[3], c.r[3].w[0] + 3040u);
    set32(c.r[17], ld32((c.r[16].w[0])));
    c.budget -= 10;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[18], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_0016E2D8; } }
L_0016E280:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { goto L_0016E2B0; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[5], c.r[3].w[0] + 16u);
    set32(c.r[7], c.r[29].w[0] + 64u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E2A8u); set32(c.r[8], 0u + 3u);  if (depth < kMaxDepth) unit_0027(c, 164u, depth + 1u); else { c.pc = 0x0019FCC0u; return; } if (c.pc != 0x0016E2A8u) [[unlikely]] return; }
L_0016E2A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] - 1u);  if (t) { goto L_0016E2CC; } }
L_0016E2B0:
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[5], c.r[3].w[0] + 16u);
    set32(c.r[7], c.r[29].w[0] + 64u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E2C8u); set32(c.r[8], 0u + 3u);  if (depth < kMaxDepth) unit_0027(c, 164u, depth + 1u); else { c.pc = 0x0019FCC0u; return; } if (c.pc != 0x0016E2C8u) [[unlikely]] return; }
L_0016E2C8:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_0016E2CC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016E280u | kUnwind; return; } goto L_0016E280; } }
    c.budget -= 1;
L_0016E2D8:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_0016E2DC:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0016E300:
    set32(c.r[29], c.r[29].w[0] - 528u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00660000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    mmi::paddub(c.r[21], c.r[4], c.r[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[3].w[0] + 1920u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 16;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0016E4F4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A40000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 28141u)));
    set32(c.r[2], 0u - 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[16].d[0] = c.r[2].d[0] | 4896ull;
    set32(c.r[2], c.r[21].w[0] << 4);
    set32(c.r[3], c.r[2].w[0] - c.r[21].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    c.budget -= 8;
L_0016E360:
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[2].w[0] << 5);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    set32(c.r[2], c.r[2].w[0] - 27408u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E378u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000D(c, 279u, depth + 1u); else { c.pc = 0x00137E80u; return; } if (c.pc != 0x0016E378u) [[unlikely]] return; }
L_0016E378:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[3], c.r[3].w[0] + 1952u);
    set32(c.r[4], c.r[21].w[0] << 8);
    set32(c.r[18], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[3], c.r[3].w[0] + 1920u);
    set32(c.r[4], c.r[21].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; set32(c.r[19], ld32((c.r[3].w[0])));  if (t) { goto L_0016E4D8; } }
L_0016E3A0:
    set32(c.r[17], ld32((c.r[18].w[0])));
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E3B0u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_0027(c, 173u, depth + 1u); else { c.pc = 0x0019FE30u; return; } if (c.pc != 0x0016E3B0u) [[unlikely]] return; }
L_0016E3B0:
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E3BCu); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0027(c, 100u, depth + 1u); else { c.pc = 0x0019EFA0u; return; } if (c.pc != 0x0016E3BCu) [[unlikely]] return; }
L_0016E3BC:
    set32(c.r[4], c.r[29].w[0] + 272u);
    set32(c.r[5], c.r[29].w[0] + 336u);
    set32(c.r[6], c.r[29].w[0] + 400u);
    set32(c.r[7], c.r[29].w[0] + 464u);
    set32(c.r[8], c.r[16].w[0] + 1856u);
    set32(c.r[9], c.r[29].w[0] + 160u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E3DCu); mmi::paddub(c.r[20], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_000D(c, 125u, depth + 1u); else { c.pc = 0x00135950u; return; } if (c.pc != 0x0016E3DCu) [[unlikely]] return; }
L_0016E3DC:
    set32(c.r[2], c.r[29].w[0] + 464u);
    set32(c.r[4], c.r[17].w[0] + 272u);
    set32(c.r[5], c.r[17].w[0] + 336u);
    set32(c.r[6], c.r[17].w[0] + 400u);
    set32(c.r[7], c.r[17].w[0] + 464u);
    set32(c.r[8], c.r[17].w[0] + 208u);
    set32(c.r[9], c.r[29].w[0] + 272u);
    set32(c.r[10], c.r[29].w[0] + 336u);
    set32(c.r[11], c.r[29].w[0] + 400u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E408u); st64((c.r[29].w[0]), c.r[2].d[0]);  if (depth < kMaxDepth) unit_000D(c, 129u, depth + 1u); else { c.pc = 0x00135A80u; return; } if (c.pc != 0x0016E408u) [[unlikely]] return; }
L_0016E408:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E410u); mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 156u, depth + 1u); else { c.pc = 0x0019A4D0u; return; } if (c.pc != 0x0016E410u) [[unlikely]] return; }
L_0016E410:
    set32(c.r[2], c.r[20].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[3], c.r[2].w[0] << 4);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00880000u);
    set32(c.r[2], c.r[2].w[0] - 23440u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 16u);
    set32(c.r[3], c.r[29].w[0] + 128u);
    ld128((c.r[4].w[0] + 48u) & ~15u, c.vu0.vf[8]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[8]);
    c.f[3] = ld32((c.r[2].w[0] + 20u));
    c.f[2] = ld32((c.r[29].w[0] + 140u));
    c.f[1] = ld32((c.r[2].w[0] + 16u));
    c.f[0] = 0u;
    fpu_div(c, 2u, c.f[3], c.f[2]);
    c.f[1] = fp::add(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 20;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[29].w[0] + 136u), c.f[1]);  if (t) { goto L_0016E46C; } }
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 136u), c.f[0]);  if (t) { goto L_0016E4A8; } }
L_0016E46C:
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[29].w[0] + 136u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0016E48C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 136u), c.f[0]);  if (t) { goto L_0016E4A8; } }
L_0016E48C:
    c.f[0] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], c.r[29].w[0] + 128u);  if (t) { goto L_0016E4AC; } }
    st32((c.r[29].w[0] + 136u), c.f[0]);
    c.budget -= 2;
L_0016E4A8:
    set32(c.r[3], c.r[29].w[0] + 128u);
    c.budget -= 1;
L_0016E4AC:
    set32(c.r[2], c.r[29].w[0] + 144u);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    vu::ftoi(c.vu0, 15u, 5u, 4u, 4);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[5]);
    set32(c.r[2], ld32((c.r[29].w[0] + 152u)));
    st32((c.r[17].w[0] + 576u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E4D4u); set32(c.r[5], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_0027(c, 158u, depth + 1u); else { c.pc = 0x0019FBB0u; return; } if (c.pc != 0x0016E4D4u) [[unlikely]] return; }
L_0016E4D4:
    set32(c.r[19], c.r[19].w[0] - 1u);
    c.budget -= 1;
L_0016E4D8:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016E3A0u | kUnwind; return; } goto L_0016E3A0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[3], c.r[3].w[0] + 1920u);
    set32(c.r[4], c.r[21].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), 0u);
    c.budget -= 5;
L_0016E4F4:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 528u);  c.pc = t; return; }
L_0016E520:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], 0u + 112u);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E548u); mmi::paddub(c.r[16], c.r[6], c.r[0]);  if (depth < kMaxDepth) unit_001B(c, 188u, depth + 1u); else { c.pc = 0x0016F300u; return; } if (c.pc != 0x0016E548u) [[unlikely]] return; }
L_0016E548:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[5], c.r[2], c.r[0]);  if (t) { goto L_0016E79C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    st32((c.r[5].w[0] + 4u), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016E5B8; } }
    set32(c.r[6], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[3], 0u - 3841u);
    set32(c.r[2], c.r[6].w[0] >> 24);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[4], c.r[2].w[0] << 24);
    c.r[2].d[0] = c.r[6].d[0] << 40;
    c.r[2].d[0] = c.r[2].d[0] >> 40;
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 8ull;
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[2], c.r[2].w[0] << 8);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 20;
L_0016E5B8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[3], c.r[5].w[0] + 16u);
    st32((c.r[5].w[0] + 96u), c.r[2].w[0]);
    ld128((c.r[17].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[17].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[17].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[17].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    vu::move(c.vu0, 15u, 14u, 4u);
    vu::move(c.vu0, 15u, 15u, 5u);
    vu::move(c.vu0, 15u, 16u, 6u);
    vu::move(c.vu0, 15u, 17u, 7u);
    vu::sub(c.vu0, 6u, 14u, 0u, 4u);
    vu::sub(c.vu0, 6u, 15u, 0u, 5u);
    vu::sub(c.vu0, 6u, 16u, 0u, 6u);
    vu::sub(c.vu0, 6u, 17u, 0u, 7u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[14]);
    st128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[15]);
    st128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[16]);
    st128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[17]);
    set32(c.r[2], c.r[5].w[0] + 80u);
    ld128((c.r[16].w[0]) & ~15u, c.vu0.vf[4]);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 25;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0016E77C; } }
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0016E64C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], c.r[3].w[0] + 21344u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0016C000u < 16384u) { entry = entries_001B[(t - 0x0016C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0016E64C:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    set32(c.r[2], c.r[2].w[0] - 16720u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0016E770; } }
L_0016E66C:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 13664u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0016E770; } }
L_0016E68C:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[2], c.r[2].w[0] + 30832u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0016E770; } }
L_0016E6AC:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00800000u);
    set32(c.r[2], c.r[2].w[0] - 20000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0016E770; } }
L_0016E6CC:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 19056u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0016E770; } }
L_0016E6EC:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 8u));
    set32(c.r[2], c.r[28].w[0] - 26272u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0016E770; } }
L_0016E708:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 19488u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0016E770; } }
L_0016E728:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 8992u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0016E770; } }
L_0016E748:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 20336u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0016E770; } }
L_0016E768:
    set32(c.r[2], ld32((c.r[28].w[0] - 26276u)));
    st32((c.r[5].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 2;
L_0016E770:
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 34ull;
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 3;
L_0016E77C:
    st8((c.r[5].w[0] + 100u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = ld8((c.r[18].w[0]));
    st16((c.r[5].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    st8((c.r[5].w[0] + 101u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E79Cu); set32(c.r[4], ld32((c.r[18].w[0] + 16u)));  if (depth < kMaxDepth) unit_0026(c, 300u, depth + 1u); else { c.pc = 0x0019B910u; return; } if (c.pc != 0x0016E79Cu) [[unlikely]] return; }
L_0016E79C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0016E7C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], 0u + 112u);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    mmi::paddub(c.r[17], c.r[6], c.r[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E7F0u); mmi::paddub(c.r[16], c.r[7], c.r[0]);  if (depth < kMaxDepth) unit_001B(c, 188u, depth + 1u); else { c.pc = 0x0016F300u; return; } if (c.pc != 0x0016E7F0u) [[unlikely]] return; }
L_0016E7F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[5], c.r[2], c.r[0]);  if (t) { goto L_0016EA44; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    st32((c.r[5].w[0] + 4u), 0u);
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016E860; } }
    set32(c.r[6], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[3], 0u - 3841u);
    set32(c.r[2], c.r[6].w[0] >> 24);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[4], c.r[2].w[0] << 24);
    c.r[2].d[0] = c.r[6].d[0] << 40;
    c.r[2].d[0] = c.r[2].d[0] >> 40;
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 8ull;
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[2], c.r[2].w[0] << 8);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 20;
L_0016E860:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[3], c.r[5].w[0] + 16u);
    st32((c.r[5].w[0] + 96u), c.r[2].w[0]);
    ld128((c.r[18].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[18].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[18].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[18].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    vu::move(c.vu0, 15u, 14u, 4u);
    vu::move(c.vu0, 15u, 15u, 5u);
    vu::move(c.vu0, 15u, 16u, 6u);
    vu::move(c.vu0, 15u, 17u, 7u);
    vu::sub(c.vu0, 6u, 14u, 0u, 4u);
    vu::sub(c.vu0, 6u, 15u, 0u, 5u);
    vu::sub(c.vu0, 6u, 16u, 0u, 6u);
    vu::sub(c.vu0, 6u, 17u, 0u, 7u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[14]);
    st128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[15]);
    st128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[16]);
    st128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[17]);
    set32(c.r[2], c.r[5].w[0] + 80u);
    ld128((c.r[17].w[0]) & ~15u, c.vu0.vf[4]);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 25;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0016EA24; } }
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0016E8F4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], c.r[3].w[0] + 21392u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0016C000u < 16384u) { entry = entries_001B[(t - 0x0016C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0016E8F4:
    c.r[3].d[0] = ld8((c.r[19].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    set32(c.r[2], c.r[2].w[0] - 16720u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0016EA18; } }
L_0016E914:
    c.r[3].d[0] = ld8((c.r[19].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 13664u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0016EA18; } }
L_0016E934:
    c.r[3].d[0] = ld8((c.r[19].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[2], c.r[2].w[0] + 30832u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0016EA18; } }
L_0016E954:
    c.r[3].d[0] = ld8((c.r[19].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00800000u);
    set32(c.r[2], c.r[2].w[0] - 20000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0016EA18; } }
L_0016E974:
    c.r[3].d[0] = ld8((c.r[19].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 19056u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0016EA18; } }
L_0016E994:
    c.r[3].d[0] = ld8((c.r[19].w[0] + 8u));
    set32(c.r[2], c.r[28].w[0] - 26272u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0016EA18; } }
L_0016E9B0:
    c.r[3].d[0] = ld8((c.r[19].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 19488u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0016EA18; } }
L_0016E9D0:
    c.r[3].d[0] = ld8((c.r[19].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 8992u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0016EA18; } }
L_0016E9F0:
    c.r[3].d[0] = ld8((c.r[19].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 20336u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0016EA18; } }
L_0016EA10:
    set32(c.r[2], ld32((c.r[28].w[0] - 26276u)));
    st32((c.r[5].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 2;
L_0016EA18:
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 34ull;
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 3;
L_0016EA24:
    st8((c.r[5].w[0] + 100u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = ld8((c.r[19].w[0]));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    st16((c.r[5].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016EA44u); st8((c.r[5].w[0] + 101u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0026(c, 300u, depth + 1u); else { c.pc = 0x0019B910u; return; } if (c.pc != 0x0016EA44u) [[unlikely]] return; }
L_0016EA44:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0016EA60:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[4], 0u + 112u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016EA7Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_001B(c, 188u, depth + 1u); else { c.pc = 0x0016F300u; return; } if (c.pc != 0x0016EA7Cu) [[unlikely]] return; }
L_0016EA7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[2], c.r[0]);  if (t) { goto L_0016EA8C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0016ECB4; } }
L_0016EA8C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00040000u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[17].w[0] + 69u));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016EAF8; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], 0u - 3841u);
    set32(c.r[3], c.r[5].w[0] >> 24);
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[4], c.r[3].w[0] << 24);
    c.r[3].d[0] = c.r[5].d[0] << 40;
    c.r[3].d[0] = c.r[3].d[0] >> 40;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 8ull;
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[4].d[0] = ld8((c.r[17].w[0] + 69u));
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[4].d[0] = c.r[4].d[0] & 15ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[3], c.r[4].w[0] << 8);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 20;
L_0016EAF8:
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[3], c.r[16].w[0] + 16u);
    set32(c.r[4], c.r[16].w[0] + 80u);
    st32((c.r[16].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 36u)));
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    st128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    st128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    st128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    c.r[8].d[0] = ld32((c.r[5].w[0]));
    mmi::pextlb(c.r[9], c.r[0], c.r[8]);
    mmi::pextlh(c.r[8], c.r[0], c.r[9]);
    c.vu0.vf[4] = c.r[8];
    vu::itof(c.vu0, 15u, 5u, 4u, 0);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[5]);
    set32(c.r[2], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 23;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016EB68; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 34ull;
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 52u)));
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 5;
L_0016EB68:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 62u));
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016EBF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016EB84u);  if (depth < kMaxDepth) unit_0027(c, 64u, depth + 1u); else { c.pc = 0x0019E690u; return; } if (c.pc != 0x0016EB84u) [[unlikely]] return; }
L_0016EB84:
    set32(c.r[3], c.r[29].w[0] + 76u);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[29].w[0] + 76u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 4095ull;
    st8((c.r[16].w[0] + 14u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[29].w[0] + 77u));
    st8((c.r[16].w[0] + 15u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[5].w[0] >> 24);
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[4], c.r[3].w[0] << 24);
    c.r[3].d[0] = c.r[5].d[0] << 40;
    c.r[3].d[0] = c.r[3].d[0] >> 40;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 4ull;
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 14u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[4].d[0] = c.r[4].d[0] & 15ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[3], c.r[4].w[0] << 12);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 27;
L_0016EBF0:
    set32(c.r[4], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_0016ECA4; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26224u)));
    set32(c.r[4], c.r[16].w[0] + 64u);
    set32(c.r[3], c.r[29].w[0] + 48u);
    set32(c.r[2], c.r[2].w[0] + 256u);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[8]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[8].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[8].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[8].w[2]);
    vu::maddbc(c.vu0, 15u, 4u, 7u, c.vu0.vf[8].w[3]);
    vu::div(c.vu0, c.vu0.vf[0].w[3], c.vu0.vf[4].w[3]);
    vu::addbc(c.vu0, 8u, 5u, 0u, c.vu0.q);
    vu::mulbc(c.vu0, 14u, 4u, 4u, c.vu0.vf[5].w[0]);
    vu::ftoi(c.vu0, 15u, 5u, 4u, 0);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[5]);
    set32(c.r[2], ld32((c.r[29].w[0] + 56u)));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 11));
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 25;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0016EC68; } }
    st32((c.r[29].w[0] + 56u), 0u);
    c.budget -= 1;
L_0016EC68:
    set32(c.r[2], ld32((c.r[29].w[0] + 56u)));
    c.r[1].d[0] = c.r[2].sd[0] < 8192ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + 64u);  if (t) { goto L_0016EC84; } }
    set32(c.r[2], 0u + 8191u);
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[4], c.r[16].w[0] + 64u);
    c.budget -= 3;
L_0016EC84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016EC8Cu);  if (depth < kMaxDepth) unit_001B(c, 202u, depth + 1u); else { c.pc = 0x0016F970u; return; } if (c.pc != 0x0016EC8Cu) [[unlikely]] return; }
L_0016EC8C:
    set32(c.r[5], ld32((c.r[29].w[0] + 56u)));
    mmi::paddub(c.r[4], c.r[2], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016EC9Cu); mmi::paddub(c.r[6], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 301u, depth + 1u); else { c.pc = 0x0019B970u; return; } if (c.pc != 0x0016EC9Cu) [[unlikely]] return; }
L_0016EC9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0016ECB4; } }
L_0016ECA4:
    c.r[5].d[0] = ld16((c.r[17].w[0] + 60u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016ECB0u); mmi::paddub(c.r[6], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 301u, depth + 1u); else { c.pc = 0x0019B970u; return; } if (c.pc != 0x0016ECB0u) [[unlikely]] return; }
L_0016ECB0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0016ECB4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0016ECD0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[4], 0u + 112u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016ECECu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_001B(c, 188u, depth + 1u); else { c.pc = 0x0016F300u; return; } if (c.pc != 0x0016ECECu) [[unlikely]] return; }
L_0016ECEC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[2], c.r[0]);  if (t) { goto L_0016ECFC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0016EE74; } }
L_0016ECFC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00040000u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[17].w[0] + 69u));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016ED68; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], 0u - 3841u);
    set32(c.r[3], c.r[5].w[0] >> 24);
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[4], c.r[3].w[0] << 24);
    c.r[3].d[0] = c.r[5].d[0] << 40;
    c.r[3].d[0] = c.r[3].d[0] >> 40;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 8ull;
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[4].d[0] = ld8((c.r[17].w[0] + 69u));
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[4].d[0] = c.r[4].d[0] & 15ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[3], c.r[4].w[0] << 8);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 20;
L_0016ED68:
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[3], c.r[16].w[0] + 16u);
    set32(c.r[4], c.r[16].w[0] + 80u);
    st32((c.r[16].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 36u)));
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    st128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    st128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    st128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    c.r[8].d[0] = ld32((c.r[5].w[0]));
    mmi::pextlb(c.r[9], c.r[0], c.r[8]);
    mmi::pextlh(c.r[8], c.r[0], c.r[9]);
    c.vu0.vf[4] = c.r[8];
    vu::itof(c.vu0, 15u, 5u, 4u, 0);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[5]);
    set32(c.r[2], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 23;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016EDD8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 34ull;
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 52u)));
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 5;
L_0016EDD8:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 62u));
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016EE60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016EDF4u);  if (depth < kMaxDepth) unit_0027(c, 64u, depth + 1u); else { c.pc = 0x0019E690u; return; } if (c.pc != 0x0016EDF4u) [[unlikely]] return; }
L_0016EDF4:
    set32(c.r[3], c.r[29].w[0] + 60u);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[29].w[0] + 60u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 4095ull;
    st8((c.r[16].w[0] + 14u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[29].w[0] + 61u));
    st8((c.r[16].w[0] + 15u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[5].w[0] >> 24);
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[4], c.r[3].w[0] << 24);
    c.r[3].d[0] = c.r[5].d[0] << 40;
    c.r[3].d[0] = c.r[3].d[0] >> 40;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 4ull;
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 14u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[4].d[0] = c.r[4].d[0] & 15ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[3], c.r[4].w[0] << 12);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 27;
L_0016EE60:
    c.r[5].d[0] = ld16((c.r[17].w[0] + 60u));
    set32(c.r[4], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016EE70u); mmi::paddub(c.r[6], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 301u, depth + 1u); else { c.pc = 0x0019B970u; return; } if (c.pc != 0x0016EE70u) [[unlikely]] return; }
L_0016EE70:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0016EE74:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0016EE90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016EEA8u); set32(c.r[4], 0u + 112u);  if (depth < kMaxDepth) unit_001B(c, 188u, depth + 1u); else { c.pc = 0x0016F300u; return; } if (c.pc != 0x0016EEA8u) [[unlikely]] return; }
L_0016EEA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);  if (t) { goto L_0016EEBC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0016F018; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.budget -= 1;
L_0016EEBC:
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00040000u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[3], 0u - 3841u);
    set32(c.r[7], c.r[2].w[0] + 16u);
    set32(c.r[10], c.r[2].w[0] + 80u);
    set32(c.r[4], c.r[6].w[0] >> 24);
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[5], c.r[4].w[0] << 24);
    c.r[4].d[0] = c.r[6].d[0] << 40;
    c.r[4].d[0] = c.r[4].d[0] >> 40;
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st32((c.r[2].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.r[4].d[0] = c.r[4].d[0] | 8ull;
    st32((c.r[2].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | 512ull;
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    st32((c.r[2].w[0] + 96u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    st128((c.r[7].w[0]) & ~15u, c.vu0.vf[4]);
    st128((c.r[7].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    st128((c.r[7].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    st128((c.r[7].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    c.r[8].d[0] = ld32((c.r[4].w[0]));
    mmi::pextlb(c.r[9], c.r[0], c.r[8]);
    mmi::pextlh(c.r[8], c.r[0], c.r[9]);
    c.vu0.vf[4] = c.r[8];
    vu::itof(c.vu0, 15u, 5u, 4u, 0);
    st128((c.r[10].w[0]) & ~15u, c.vu0.vf[5]);
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 43;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0016EF7C; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 34ull;
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 5;
L_0016EF7C:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 62u));
    set32(c.r[4], c.r[29].w[0] + 32u);
    st16((c.r[2].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26224u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] + 256u);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[8]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[8].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[8].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[8].w[2]);
    vu::maddbc(c.vu0, 15u, 4u, 7u, c.vu0.vf[8].w[3]);
    vu::div(c.vu0, c.vu0.vf[0].w[3], c.vu0.vf[4].w[3]);
    vu::addbc(c.vu0, 8u, 5u, 0u, c.vu0.q);
    vu::mulbc(c.vu0, 14u, 4u, 4u, c.vu0.vf[5].w[0]);
    vu::ftoi(c.vu0, 15u, 5u, 4u, 0);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[5]);
    set32(c.r[3], ld32((c.r[29].w[0] + 40u)));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 11));
    st32((c.r[29].w[0] + 40u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 40u)));
    c.budget -= 27;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_0016EFEC; } }
    st32((c.r[29].w[0] + 40u), 0u);
    c.budget -= 1;
L_0016EFEC:
    set32(c.r[3], ld32((c.r[29].w[0] + 40u)));
    c.r[1].d[0] = c.r[3].sd[0] < 8192ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0016F004; } }
    set32(c.r[3], 0u + 8191u);
    st32((c.r[29].w[0] + 40u), c.r[3].w[0]);
    c.budget -= 2;
L_0016F004:
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 40u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F014u); mmi::paddub(c.r[6], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 301u, depth + 1u); else { c.pc = 0x0019B970u; return; } if (c.pc != 0x0016F014u) [[unlikely]] return; }
L_0016F014:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0016F018:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0016F030:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[4], 0u + 16u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F050u); mmi::paddub(c.r[17], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_001B(c, 186u, depth + 1u); else { c.pc = 0x0016F240u; return; } if (c.pc != 0x0016F050u) [[unlikely]] return; }
L_0016F050:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[5], c.r[2], c.r[0]);  if (t) { goto L_0016F0A4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x30000000u);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[2], c.r[2].w[0] - 26016u);
    set32(c.r[4], c.r[17].w[0] << 2);
    st32((c.r[5].w[0] + 4u), 0u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[5].w[0] + 8u), c.r[16].w[0]);
    c.r[3].d[0] = ld16((c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[2], c.r[2].w[0] - 26014u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st16((c.r[16].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[2].w[0]));
    set32(c.r[4], 0u + 15u);
    set32(c.r[2], 0u + 1u);
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F0A4u); st16((c.r[16].w[0] + 20u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0026(c, 300u, depth + 1u); else { c.pc = 0x0019B910u; return; } if (c.pc != 0x0016F0A4u) [[unlikely]] return; }
L_0016F0A4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0016F0C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[4], 0u + 16u);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F0E8u); mmi::paddub(c.r[17], c.r[6], c.r[0]);  if (depth < kMaxDepth) unit_001B(c, 186u, depth + 1u); else { c.pc = 0x0016F240u; return; } if (c.pc != 0x0016F0E8u) [[unlikely]] return; }
L_0016F0E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[6], c.r[2], c.r[0]);  if (t) { goto L_0016F140; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x30000000u);
    st32((c.r[6].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[2], c.r[2].w[0] - 26016u);
    set32(c.r[5], c.r[18].w[0] << 2);
    st32((c.r[6].w[0] + 4u), 0u);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st32((c.r[6].w[0] + 8u), c.r[16].w[0]);
    c.r[3].d[0] = ld16((c.r[2].w[0]));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[2], c.r[2].w[0] - 26014u);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st16((c.r[16].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[2].w[0]));
    set32(c.r[5], 0u + 15u);
    set32(c.r[2], 0u + 1u);
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F140u); st16((c.r[16].w[0] + 20u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0026(c, 301u, depth + 1u); else { c.pc = 0x0019B970u; return; } if (c.pc != 0x0016F140u) [[unlikely]] return; }
L_0016F140:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0016F160:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], 0u + 16u);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    mmi::paddub(c.r[17], c.r[6], c.r[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F190u); mmi::paddub(c.r[16], c.r[7], c.r[0]);  if (depth < kMaxDepth) unit_001B(c, 186u, depth + 1u); else { c.pc = 0x0016F240u; return; } if (c.pc != 0x0016F190u) [[unlikely]] return; }
L_0016F190:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[6], c.r[2], c.r[0]);  if (t) { goto L_0016F1B8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st32((c.r[6].w[0]), c.r[2].w[0]);
    st32((c.r[6].w[0] + 4u), 0u);
    st32((c.r[6].w[0] + 12u), c.r[18].w[0]);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F1B8u); st32((c.r[6].w[0] + 8u), c.r[19].w[0]);  if (depth < kMaxDepth) unit_0026(c, 301u, depth + 1u); else { c.pc = 0x0019B970u; return; } if (c.pc != 0x0016F1B8u) [[unlikely]] return; }
L_0016F1B8:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0016F1E0:
    c.r[6].d[0] = c.r[5].d[0] & 65535ull;
    c.r[3].d[0] = c.r[6].d[0] & 32768ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0016F200; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[5].d[0] = 0ull | 32768ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 98u), static_cast<std::uint16_t>(c.r[5].w[0]));  if (t) { goto L_0016F208; } }
L_0016F200:
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    st16((c.r[3].w[0] + 98u), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_0016F208:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[6].w[0]));  c.pc = t; return; }
L_0016F210:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[3], c.r[3].w[0] + 1216u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00640000u);
    st32((c.r[1].w[0] + 1200u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00640000u);
    st32((c.r[1].w[0] + 1204u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00640000u);
    st8((c.r[1].w[0] + 1212u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00640000u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[1].w[0] + 1213u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_0016F240:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 1204u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0016F27C; } }
    set32(c.r[2], c.r[3].w[0] - c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00640000u);
    st32((c.r[1].w[0] + 1204u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 1200u)));
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00640000u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 1200u), c.r[3].w[0]);  if (t) { goto L_0016F27C; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_0016F27C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016F290:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 1204u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0016F2DC; } }
    set32(c.r[2], c.r[3].w[0] - c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00640000u);
    st32((c.r[1].w[0] + 1204u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 1200u)));
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 1200u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00640000u);
    st32((c.r[1].w[0] + 1200u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00640000u);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[1].w[0] + 1204u)));  if (t) { goto L_0016F2EC; } }
L_0016F2DC:
    st32((c.r[4].w[0]), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 1204u)));
    c.budget -= 4;
L_0016F2EC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016F300:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[6], ld32((c.r[1].w[0] + 1200u)));
    set32(c.r[2], 0u - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[5], ld32((c.r[1].w[0] + 1204u)));
    set32(c.r[3], c.r[6].w[0] + 15u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[3], c.r[2].w[0] - c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] - c.r[3].w[0]);
    c.r[3].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 12;
    if (c.r[3].d[0] != 0ull) { mmi::paddub(c.r[2], c.r[0], c.r[0]);  goto L_0016F350; }
    set32(c.r[3], c.r[5].w[0] - c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00640000u);
    st32((c.r[1].w[0] + 1204u), c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00640000u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 1200u), c.r[3].w[0]);  if (t) { goto L_0016F350; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_0016F350:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016F360:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[4], c.r[29].w[0] + 32u);
    ld128((c.r[6].w[0]) & ~15u, c.vu0.vf[8]);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[5].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[5].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[8].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[8].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[8].w[2]);
    vu::maddbc(c.vu0, 15u, 4u, 7u, c.vu0.vf[8].w[3]);
    vu::div(c.vu0, c.vu0.vf[0].w[3], c.vu0.vf[4].w[3]);
    vu::addbc(c.vu0, 8u, 5u, 0u, c.vu0.q);
    vu::mulbc(c.vu0, 14u, 4u, 4u, c.vu0.vf[5].w[0]);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    vu::ftoi(c.vu0, 15u, 5u, 4u, 0);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F3B8u); st128((c.r[16].w[0]) & ~15u, c.vu0.vf[5]);  if (depth < kMaxDepth) unit_0000(c, 277u, depth + 1u); else { c.pc = 0x00102FB0u; return; } if (c.pc != 0x0016F3B8u) [[unlikely]] return; }
L_0016F3B8:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[2].d[0] = c.r[2].d[0] | 6248ull;
    c.f[1] = ld32((c.r[29].w[0] + 44u));
    c.f[0] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);  if (t) { goto L_0016F3F0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.r[2].d[0] = c.r[2].d[0] | 16ull;
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.budget -= 4;
L_0016F3F0:
    c.r[2].d[0] = c.r[2].d[0] | 6244ull;
    c.f[1] = ld32((c.r[29].w[0] + 44u));
    c.f[0] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0016F418; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.r[2].d[0] = c.r[2].d[0] | 32ull;
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 3;
L_0016F418:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1728u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1936u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0016F450:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[12], c.r[3].w[0] - 25936u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[11], c.r[29].w[0]);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.r[10].d[0] = c.r[3].d[0] | 6248ull;
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[9].d[0] = c.r[3].d[0] | 6244ull;  if (t) { goto L_0016F568; } }
L_0016F474:
    ld128((c.r[6].w[0]) & ~15u, c.vu0.vf[8]);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[5].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[5].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[8].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[8].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[8].w[2]);
    vu::maddbc(c.vu0, 15u, 4u, 7u, c.vu0.vf[8].w[3]);
    vu::div(c.vu0, c.vu0.vf[0].w[3], c.vu0.vf[4].w[3]);
    vu::addbc(c.vu0, 8u, 5u, 0u, c.vu0.q);
    vu::mulbc(c.vu0, 14u, 4u, 4u, c.vu0.vf[5].w[0]);
    st128((c.r[11].w[0]) & ~15u, c.vu0.vf[4]);
    vu::ftoi(c.vu0, 15u, 5u, 4u, 0);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[5]);
    vu::sub(c.vu0, 15u, 8u, 0u, 0u);
    ld128((c.r[12].w[0]) & ~15u, c.vu0.vf[6]);
    ctc2(c, 16u, 0u);
    vu::sub(c.vu0, 13u, 9u, 4u, 8u);
    vu::sub(c.vu0, 12u, 9u, 6u, 4u);
    set32(c.r[8], cfc2(c, 16u));
    c.r[8].d[0] = c.r[8].d[0] & 192ull;
    st32((c.r[4].w[0] + 12u), c.r[8].w[0]);
    c.f[1] = ld32((c.r[29].w[0] + 12u));
    c.f[0] = ld32((c.r[10].w[0]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 35;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0016F510; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.r[3].d[0] = c.r[3].d[0] | 16ull;
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 4;
L_0016F510:
    c.f[1] = ld32((c.r[29].w[0] + 12u));
    c.f[0] = ld32((c.r[9].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0016F538; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.r[3].d[0] = c.r[3].d[0] | 32ull;
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 4;
L_0016F538:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[8], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[6], c.r[6].w[0] + 16u);
    set32(c.r[7], c.r[7].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] - 1728u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[8].d[0];
    set32(c.r[3], c.r[3].w[0] - 1936u);
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 12;
L_0016F568:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016F474u | kUnwind; return; } goto L_0016F474; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0016F580:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[13], c.r[2].w[0] - 25936u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[12], c.r[29].w[0]);
    mmi::paddub(c.r[11], c.r[4], c.r[0]);
    mmi::paddub(c.r[10], c.r[0], c.r[0]);
    mmi::paddub(c.r[9], c.r[7], c.r[0]);
    c.r[8].d[0] = c.r[2].d[0] | 6248ull;
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[2].d[0] | 6244ull;  if (t) { goto L_0016F698; } }
L_0016F5AC:
    ld128((c.r[6].w[0]) & ~15u, c.vu0.vf[8]);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[5].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[5].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[8].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[8].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[8].w[2]);
    vu::maddbc(c.vu0, 15u, 4u, 7u, c.vu0.vf[8].w[3]);
    vu::div(c.vu0, c.vu0.vf[0].w[3], c.vu0.vf[4].w[3]);
    vu::addbc(c.vu0, 8u, 5u, 0u, c.vu0.q);
    vu::mulbc(c.vu0, 14u, 4u, 4u, c.vu0.vf[5].w[0]);
    st128((c.r[12].w[0]) & ~15u, c.vu0.vf[4]);
    vu::ftoi(c.vu0, 15u, 5u, 4u, 0);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[5]);
    vu::sub(c.vu0, 15u, 8u, 0u, 0u);
    ld128((c.r[13].w[0]) & ~15u, c.vu0.vf[6]);
    ctc2(c, 16u, 0u);
    vu::sub(c.vu0, 13u, 5u, 4u, 8u);
    vu::sub(c.vu0, 12u, 5u, 6u, 4u);
    set32(c.r[2], cfc2(c, 16u));
    c.r[2].d[0] = c.r[2].d[0] & 192ull;
    c.f[1] = ld32((c.r[29].w[0] + 12u));
    c.f[0] = ld32((c.r[8].w[0]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 34;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0016F638; } }
    c.r[2].d[0] = c.r[2].d[0] | 16ull;
    c.budget -= 1;
L_0016F638:
    c.f[1] = ld32((c.r[29].w[0] + 12u));
    c.f[0] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0016F658; } }
    c.r[2].d[0] = c.r[2].d[0] | 32ull;
    c.budget -= 2;
L_0016F658:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016F668; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[29], c.r[29].w[0] + 16u);  if (t) { goto L_0016F6C0; } }
L_0016F668:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[6], c.r[6].w[0] + 16u);
    set32(c.r[9], c.r[9].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] - 1728u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1936u);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[10], c.r[10].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 12;
L_0016F698:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016F5ACu | kUnwind; return; } goto L_0016F5AC; } }
    set32(c.r[2], c.r[10].w[0] >> 11);
    mmi::divu(c, 0, c.r[2].w[0], c.r[7].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[11].w[0] + 12u), c.r[2].w[0]);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 8;
L_0016F6C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016F6D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26224u)));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 256u);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[8]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[8].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[8].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[8].w[2]);
    vu::maddbc(c.vu0, 15u, 4u, 7u, c.vu0.vf[8].w[3]);
    vu::div(c.vu0, c.vu0.vf[0].w[3], c.vu0.vf[4].w[3]);
    vu::addbc(c.vu0, 8u, 5u, 0u, c.vu0.q);
    vu::mulbc(c.vu0, 14u, 4u, 4u, c.vu0.vf[5].w[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F724u); st128((c.r[16].w[0]) & ~15u, c.vu0.vf[4]);  if (depth < kMaxDepth) unit_0000(c, 277u, depth + 1u); else { c.pc = 0x00102FB0u; return; } if (c.pc != 0x0016F724u) [[unlikely]] return; }
L_0016F724:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[2].d[0] = c.r[2].d[0] | 6248ull;
    c.f[1] = ld32((c.r[16].w[0] + 12u));
    c.f[0] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);  if (t) { goto L_0016F750; } }
    c.r[3].d[0] = c.r[3].d[0] | 16ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.budget -= 2;
L_0016F750:
    c.r[2].d[0] = c.r[2].d[0] | 6244ull;
    c.f[1] = ld32((c.r[16].w[0] + 12u));
    c.f[0] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0016F770; } }
    c.r[3].d[0] = c.r[3].d[0] | 32ull;
    c.budget -= 1;
L_0016F770:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0016F780; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0016F83C; } }
L_0016F780:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[2], c.r[2].w[0] - 25920u);
    ld128((c.r[16].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[5]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[6]);
    vu::sub(c.vu0, 12u, 4u, 4u, 5u);
    vu::mul(c.vu0, 12u, 4u, 4u, 6u);
    vu::move(c.vu0, 3u, 4u, 6u);
    st128((c.r[16].w[0]) & ~15u, c.vu0.vf[4]);
    c.f[1] = ld32((c.r[16].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBDCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 18;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0016F830; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0016F82C; } }
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBD970000u);
    c.r[2].d[0] = c.r[2].d[0] | 36176ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0016F82C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D970000u);
    c.r[2].d[0] = c.r[2].d[0] | 36176ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0016F83C; } }
L_0016F82C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0016F830:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0016F840; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_0016F83C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0016F840:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0016F850:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00400000u);
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], c.r[5].w[0] + 3u);
    st8((c.r[4].w[0] + 12u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 13u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0016F870:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + 9u);
    c.r[6].d[0] = c.r[6].d[0] | 34ull;
    st32((c.r[4].w[0] + 4u), c.r[6].w[0]);
    st8((c.r[4].w[0] + 12u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], c.r[3].w[0] >> 1);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 13u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0016F8B0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[5].w[0] + 3u);
    c.r[6].d[0] = c.r[6].d[0] | 1ull;
    st32((c.r[4].w[0] + 4u), c.r[6].w[0]);
    st8((c.r[4].w[0] + 12u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 13u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0016F8E0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + 9u);
    c.r[6].d[0] = c.r[6].d[0] | 1ull;
    st32((c.r[4].w[0] + 4u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] >> 1);
    c.r[6].d[0] = c.r[6].d[0] | 34ull;
    st32((c.r[4].w[0] + 4u), c.r[6].w[0]);
    st8((c.r[4].w[0] + 12u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 13u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0016F930:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + 9u);
    c.r[6].d[0] = c.r[6].d[0] | 34ull;
    st32((c.r[4].w[0] + 4u), c.r[6].w[0]);
    st8((c.r[4].w[0] + 12u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], c.r[3].w[0] >> 1);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 13u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0016F970:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26224u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 432u));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0016F994; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0016F9D0; } }
L_0016F994:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 433u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_0016F9B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F9A8u);  if (depth < kMaxDepth) unit_0075(c, 244u, depth + 1u); else { c.pc = 0x002D78B0u; return; } if (c.pc != 0x0016F9A8u) [[unlikely]] return; }
L_0016F9A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[2], c.r[16], c.r[0]);  if (t) { goto L_0016F9D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 2u);  if (t) { goto L_0016F9CC; } }
L_0016F9B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F9C0u);  if (depth < kMaxDepth) unit_0075(c, 244u, depth + 1u); else { c.pc = 0x002D78B0u; return; } if (c.pc != 0x0016F9C0u) [[unlikely]] return; }
L_0016F9C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0016F9CC; } }
    set32(c.r[16], 0u + 2u);
    c.budget -= 1;
L_0016F9CC:
    mmi::paddub(c.r[2], c.r[16], c.r[0]);
    c.budget -= 1;
L_0016F9D0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0016F9E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[5].w[0] + 64u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0016FA2C; } }
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00640000u);
    st8((c.r[1].w[0] + 1213u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FA08u); set32(c.r[4], ld32((c.r[5].w[0] + 64u)));  if (depth < kMaxDepth) unit_0027(c, 64u, depth + 1u); else { c.pc = 0x0019E690u; return; } if (c.pc != 0x0016FA08u) [[unlikely]] return; }
L_0016FA08:
    set32(c.r[3], c.r[29].w[0] + 28u);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].d[0] = ld8((c.r[29].w[0] + 28u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00640000u);
    c.r[3].d[0] = ld8((c.r[29].w[0] + 29u));
    st8((c.r[1].w[0] + 1214u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00640000u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 1215u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0016FA34; } }
L_0016FA2C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00640000u);
    st8((c.r[1].w[0] + 1213u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0016FA34:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0016FA40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FA58u); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_001B(c, 186u, depth + 1u); else { c.pc = 0x0016F240u; return; } if (c.pc != 0x0016FA58u) [[unlikely]] return; }
L_0016FA58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);  if (t) { goto L_0016FA6C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0016FB64; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.budget -= 1;
L_0016FA6C:
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00240000u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 69u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0016FAD4; } }
    set32(c.r[6], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[3], 0u - 3841u);
    set32(c.r[4], c.r[6].w[0] >> 24);
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[5], c.r[4].w[0] << 24);
    c.r[4].d[0] = c.r[6].d[0] << 40;
    c.r[4].d[0] = c.r[4].d[0] >> 40;
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st32((c.r[2].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.r[4].d[0] = c.r[4].d[0] | 8ull;
    st32((c.r[2].w[0] + 4u), c.r[4].w[0]);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 69u));
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.r[5].d[0] = c.r[5].d[0] & 15ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[4], c.r[5].w[0] << 8);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 20;
L_0016FAD4:
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0016FB08; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    st16((c.r[2].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 4u)));
    st16((c.r[2].w[0] + 14u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 16u), c.r[3].w[0]);  if (t) { goto L_0016FB38; } }
L_0016FB08:
    set32(c.r[5], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[4], c.r[29].w[0] + 32u);
    ld128((c.r[5].w[0]) & ~15u, c.r[8]);
    ld128((c.r[3].w[0]) & ~15u, c.r[9]);
    mmi::paddsw(c.r[8], c.r[8], c.r[9]);
    st128((c.r[4].w[0]) & ~15u, c.r[8]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 32u)));
    st16((c.r[2].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 36u)));
    st16((c.r[2].w[0] + 14u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[29].w[0] + 40u)));
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 12;
L_0016FB38:
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[2].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    c.r[5].d[0] = ld16((c.r[16].w[0] + 60u));
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FB60u); mmi::paddub(c.r[6], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 301u, depth + 1u); else { c.pc = 0x0019B970u; return; } if (c.pc != 0x0016FB60u) [[unlikely]] return; }
L_0016FB60:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0016FB64:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0016FB80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FB98u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_001B(c, 186u, depth + 1u); else { c.pc = 0x0016F240u; return; } if (c.pc != 0x0016FB98u) [[unlikely]] return; }
L_0016FB98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);  if (t) { goto L_0016FBAC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0016FCC4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.budget -= 1;
L_0016FBAC:
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00200000u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 34ull;
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 69u));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0016FC20; } }
    set32(c.r[6], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[3], 0u - 3841u);
    set32(c.r[4], c.r[6].w[0] >> 24);
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[5], c.r[4].w[0] << 24);
    c.r[4].d[0] = c.r[6].d[0] << 40;
    c.r[4].d[0] = c.r[4].d[0] >> 40;
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st32((c.r[2].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.r[4].d[0] = c.r[4].d[0] | 8ull;
    st32((c.r[2].w[0] + 4u), c.r[4].w[0]);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 69u));
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.r[5].d[0] = c.r[5].d[0] & 15ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[4], c.r[5].w[0] << 8);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 20;
L_0016FC20:
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0016FC54; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    st16((c.r[2].w[0] + 16u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 4u)));
    st16((c.r[2].w[0] + 18u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_0016FC84; } }
L_0016FC54:
    set32(c.r[5], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[4], c.r[29].w[0] + 32u);
    ld128((c.r[5].w[0]) & ~15u, c.r[8]);
    ld128((c.r[3].w[0]) & ~15u, c.r[9]);
    mmi::paddsw(c.r[8], c.r[8], c.r[9]);
    st128((c.r[4].w[0]) & ~15u, c.r[8]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 32u)));
    st16((c.r[2].w[0] + 16u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 36u)));
    st16((c.r[2].w[0] + 18u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[29].w[0] + 40u)));
    st32((c.r[2].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 12;
L_0016FC84:
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[2].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[2].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    c.r[5].d[0] = ld16((c.r[16].w[0] + 60u));
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FCC0u); mmi::paddub(c.r[6], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 301u, depth + 1u); else { c.pc = 0x0019B970u; return; } if (c.pc != 0x0016FCC0u) [[unlikely]] return; }
L_0016FCC0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0016FCC4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0016FCE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FCF8u); set32(c.r[4], 0u + 40u);  if (depth < kMaxDepth) unit_001B(c, 186u, depth + 1u); else { c.pc = 0x0016F240u; return; } if (c.pc != 0x0016FCF8u) [[unlikely]] return; }
L_0016FCF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);  if (t) { goto L_0016FD0C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0016FE74; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.budget -= 1;
L_0016FD0C:
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 34ull;
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 69u));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[6], c.r[2].w[0] + 4u);  if (t) { goto L_0016FD80; } }
    set32(c.r[7], ld32((c.r[6].w[0])));
    set32(c.r[3], 0u - 3841u);
    set32(c.r[4], c.r[7].w[0] >> 24);
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[5], c.r[4].w[0] << 24);
    c.r[4].d[0] = c.r[7].d[0] << 40;
    c.r[4].d[0] = c.r[4].d[0] >> 40;
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st32((c.r[6].w[0]), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[6].w[0])));
    c.r[4].d[0] = c.r[4].d[0] | 8ull;
    st32((c.r[6].w[0]), c.r[4].w[0]);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 69u));
    set32(c.r[4], ld32((c.r[6].w[0])));
    c.r[5].d[0] = c.r[5].d[0] & 15ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[4], c.r[5].w[0] << 8);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st32((c.r[6].w[0]), c.r[3].w[0]);
    c.budget -= 20;
L_0016FD80:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    st16((c.r[2].w[0] + 16u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 4u)));
    st16((c.r[2].w[0] + 18u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    st32((c.r[2].w[0] + 20u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 16u)));
    st16((c.r[2].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 20u)));
    st16((c.r[2].w[0] + 30u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    st32((c.r[2].w[0] + 32u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 16;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0016FE34; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[2].w[0] + 16u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 18u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[2].w[0] + 18u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 28u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[2].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 30u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[2].w[0] + 30u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0] + 32u), c.r[3].w[0]);
    c.budget -= 29;
L_0016FE34:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[2].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    st32((c.r[2].w[0] + 36u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    c.r[5].d[0] = ld16((c.r[16].w[0] + 60u));
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FE70u); mmi::paddub(c.r[6], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 301u, depth + 1u); else { c.pc = 0x0019B970u; return; } if (c.pc != 0x0016FE70u) [[unlikely]] return; }
L_0016FE70:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0016FE74:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0016FE90:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = ld16((c.r[4].w[0] + 62u));
    mmi::paddub(c.r[20], c.r[4], c.r[0]);
    set32(c.r[2], c.r[16].w[0] << 4);
    set32(c.r[5], c.r[2].w[0] + 16u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FEC4u); set32(c.r[4], c.r[29].w[0] + 108u);  if (depth < kMaxDepth) unit_001B(c, 187u, depth + 1u); else { c.pc = 0x0016F290u; return; } if (c.pc != 0x0016FEC4u) [[unlikely]] return; }
L_0016FEC4:
    set32(c.r[3], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0016FF10; } }
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(64ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], c.r[2].w[0] - 16u);  goto L_0016FEE8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { [[clang::musttail]] return unit_001C(c, 10u, depth); } }
    set32(c.r[2], c.r[2].w[0] - 16u);
    c.budget -= 1;
L_0016FEE8:
    set32(c.r[16], c.r[2].w[0] >> 4);
    set32(c.r[2], c.r[16].w[0] << 4);
    set32(c.r[5], c.r[2].w[0] + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FEFCu); set32(c.r[4], c.r[29].w[0] + 108u);  if (depth < kMaxDepth) unit_001B(c, 187u, depth + 1u); else { c.pc = 0x0016F290u; return; } if (c.pc != 0x0016FEFCu) [[unlikely]] return; }
L_0016FEFC:
    set32(c.r[2], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0016FF10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { [[clang::musttail]] return unit_001C(c, 10u, depth); } }
L_0016FF10:
    set32(c.r[2], ld32((c.r[29].w[0] + 108u)));
    set32(c.r[17], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[18], ld32((c.r[20].w[0] + 36u)));
    set32(c.r[19], c.r[2].w[0] + 16u);
    st32((c.r[2].w[0] + 8u), c.r[19].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FF30u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_001B(c, 197u, depth + 1u); else { c.pc = 0x0016F850u; return; } if (c.pc != 0x0016FF30u) [[unlikely]] return; }
L_0016FF30:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 69u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016FF98; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 108u)));
    set32(c.r[2], 0u - 3841u);
    set32(c.r[5], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[3], c.r[5].w[0] >> 24);
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[4], c.r[3].w[0] << 24);
    c.r[3].d[0] = c.r[5].d[0] << 40;
    c.r[3].d[0] = c.r[3].d[0] >> 40;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st32((c.r[6].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 108u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 8ull;
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[20].w[0] + 69u));
    set32(c.r[4], ld32((c.r[29].w[0] + 108u)));
    c.r[3].d[0] = c.r[3].d[0] & 15ull;
    set32(c.r[5], c.r[3].w[0] << 8);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 23;
L_0016FF98:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00640000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 1213u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_001C(c, 2u, depth); } }
    set32(c.r[6], ld32((c.r[29].w[0] + 108u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[2].d[0] | 4095ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[5], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[2], c.r[5].w[0] >> 24);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[4], c.r[2].w[0] << 24);
    c.r[2].d[0] = c.r[5].d[0] << 40;
    c.r[2].d[0] = c.r[2].d[0] >> 40;
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st32((c.r[6].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 108u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[29].w[0] + 108u)));
    c.r[2].d[0] = ld8((c.r[1].w[0] + 1214u));
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    set32(c.r[2], c.r[2].w[0] << 12);
    c.budget -= 22;
    [[clang::musttail]] return unit_001C(c, 1u, depth);
}

}
