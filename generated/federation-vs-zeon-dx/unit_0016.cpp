#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0016[4096] = {
    1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 12, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    14, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    18, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 39, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0,
    0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 69, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 76, 0, 77, 0, 78, 0, 79, 0, 80, 0, 81, 0,
    0, 0, 0, 0, 82, 0, 0, 0, 0, 83, 0, 0, 0, 84, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 90, 0, 91, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 93, 0, 0, 0, 0, 94, 0, 0, 0, 95, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99,
    0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102,
    0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 105, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0,
    0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 112, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0,
    0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 132, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 137, 0, 138,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 142, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 145, 0, 146, 0, 0, 0,
    0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153,
    0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 164, 0, 165, 0,
    166, 0, 167, 0, 168, 0, 169, 0, 0, 170, 0, 171, 0, 172, 0, 173, 0, 174, 0, 175, 0, 176, 0, 177, 0, 178, 0, 179, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 180, 0, 181, 0, 182, 0, 183, 0, 184, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 189, 0, 190,
};

void unit_0016(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00158000;
    case 2u: goto L_00158004;
    case 3u: goto L_00158030;
    case 4u: goto L_0015804C;
    case 5u: goto L_00158120;
    case 6u: goto L_001581A8;
    case 7u: goto L_001581E0;
    case 8u: goto L_00158220;
    case 9u: goto L_001582EC;
    case 10u: goto L_00158334;
    case 11u: goto L_00158364;
    case 12u: goto L_00158370;
    case 13u: goto L_001583C4;
    case 14u: goto L_00158400;
    case 15u: goto L_00158408;
    case 16u: goto L_0015845C;
    case 17u: goto L_001584AC;
    case 18u: goto L_00158600;
    case 19u: goto L_00158620;
    case 20u: goto L_001586B8;
    case 21u: goto L_001587C4;
    case 22u: goto L_001587D0;
    case 23u: goto L_00158864;
    case 24u: goto L_00158920;
    case 25u: goto L_00158928;
    case 26u: goto L_001589C4;
    case 27u: goto L_00158A50;
    case 28u: goto L_00158ACC;
    case 29u: goto L_00158AF0;
    case 30u: goto L_00158B78;
    case 31u: goto L_00158BB4;
    case 32u: goto L_00158BF0;
    case 33u: goto L_00158C24;
    case 34u: goto L_00158C70;
    case 35u: goto L_00158CA8;
    case 36u: goto L_00158CE0;
    case 37u: goto L_00158D18;
    case 38u: goto L_00158D58;
    case 39u: goto L_00158D74;
    case 40u: goto L_00158DB8;
    case 41u: goto L_00158E18;
    case 42u: goto L_00158E28;
    case 43u: goto L_00158E3C;
    case 44u: goto L_00158F80;
    case 45u: goto L_00158FC8;
    case 46u: goto L_00159050;
    case 47u: goto L_001590C0;
    case 48u: goto L_001590E0;
    case 49u: goto L_00159104;
    case 50u: goto L_00159128;
    case 51u: goto L_00159150;
    case 52u: goto L_00159190;
    case 53u: goto L_001591BC;
    case 54u: goto L_001591E8;
    case 55u: goto L_00159224;
    case 56u: goto L_00159270;
    case 57u: goto L_001592E0;
    case 58u: goto L_00159318;
    case 59u: goto L_001593F0;
    case 60u: goto L_00159434;
    case 61u: goto L_0015950C;
    case 62u: goto L_00159528;
    case 63u: goto L_001595A0;
    case 64u: goto L_001595DC;
    case 65u: goto L_00159618;
    case 66u: goto L_0015964C;
    case 67u: goto L_00159698;
    case 68u: goto L_001596D0;
    case 69u: goto L_00159708;
    case 70u: goto L_00159724;
    case 71u: goto L_00159768;
    case 72u: goto L_001597CC;
    case 73u: goto L_00159810;
    case 74u: goto L_001598BC;
    case 75u: goto L_00159940;
    case 76u: goto L_00159950;
    case 77u: goto L_00159958;
    case 78u: goto L_00159960;
    case 79u: goto L_00159968;
    case 80u: goto L_00159970;
    case 81u: goto L_00159978;
    case 82u: goto L_00159990;
    case 83u: goto L_001599A4;
    case 84u: goto L_001599B4;
    case 85u: goto L_001599C0;
    case 86u: goto L_00159A00;
    case 87u: goto L_00159AB0;
    case 88u: goto L_00159AEC;
    case 89u: goto L_00159BA0;
    case 90u: goto L_00159BA8;
    case 91u: goto L_00159BB0;
    case 92u: goto L_00159BD0;
    case 93u: goto L_00159C0C;
    case 94u: goto L_00159C20;
    case 95u: goto L_00159C30;
    case 96u: goto L_00159C3C;
    case 97u: goto L_00159C9C;
    case 98u: goto L_00159CA8;
    case 99u: goto L_00159EFC;
    case 100u: goto L_00159F08;
    case 101u: goto L_0015A110;
    case 102u: goto L_0015A17C;
    case 103u: goto L_0015A188;
    case 104u: goto L_0015A3D8;
    case 105u: goto L_0015A3E0;
    case 106u: goto L_0015A5F0;
    case 107u: goto L_0015A614;
    case 108u: goto L_0015A630;
    case 109u: goto L_0015A730;
    case 110u: goto L_0015A880;
    case 111u: goto L_0015A8E0;
    case 112u: goto L_0015A90C;
    case 113u: goto L_0015A918;
    case 114u: goto L_0015A974;
    case 115u: goto L_0015A988;
    case 116u: goto L_0015AB20;
    case 117u: goto L_0015AC10;
    case 118u: goto L_0015AC3C;
    case 119u: goto L_0015AD5C;
    case 120u: goto L_0015AE54;
    case 121u: goto L_0015AE90;
    case 122u: goto L_0015B070;
    case 123u: goto L_0015B0C0;
    case 124u: goto L_0015B0CC;
    case 125u: goto L_0015B19C;
    case 126u: goto L_0015B20C;
    case 127u: goto L_0015B3C4;
    case 128u: goto L_0015B420;
    case 129u: goto L_0015B440;
    case 130u: goto L_0015B490;
    case 131u: goto L_0015B4E0;
    case 132u: goto L_0015B4F8;
    case 133u: goto L_0015B524;
    case 134u: goto L_0015B550;
    case 135u: goto L_0015B5A0;
    case 136u: goto L_0015B5E8;
    case 137u: goto L_0015B5F4;
    case 138u: goto L_0015B5FC;
    case 139u: goto L_0015B6B0;
    case 140u: goto L_0015B6C0;
    case 141u: goto L_0015B6EC;
    case 142u: goto L_0015B6F4;
    case 143u: goto L_0015B72C;
    case 144u: goto L_0015B754;
    case 145u: goto L_0015B768;
    case 146u: goto L_0015B770;
    case 147u: goto L_0015B790;
    case 148u: goto L_0015B7C0;
    case 149u: goto L_0015B814;
    case 150u: goto L_0015B850;
    case 151u: goto L_0015B8C0;
    case 152u: goto L_0015B900;
    case 153u: goto L_0015BA7C;
    case 154u: goto L_0015BA98;
    case 155u: goto L_0015BAB4;
    case 156u: goto L_0015BACC;
    case 157u: goto L_0015BAE0;
    case 158u: goto L_0015BB80;
    case 159u: goto L_0015BC1C;
    case 160u: goto L_0015BCF0;
    case 161u: goto L_0015BD54;
    case 162u: goto L_0015BE1C;
    case 163u: goto L_0015BE60;
    case 164u: goto L_0015BE70;
    case 165u: goto L_0015BE78;
    case 166u: goto L_0015BE80;
    case 167u: goto L_0015BE88;
    case 168u: goto L_0015BE90;
    case 169u: goto L_0015BE98;
    case 170u: goto L_0015BEA4;
    case 171u: goto L_0015BEAC;
    case 172u: goto L_0015BEB4;
    case 173u: goto L_0015BEBC;
    case 174u: goto L_0015BEC4;
    case 175u: goto L_0015BECC;
    case 176u: goto L_0015BED4;
    case 177u: goto L_0015BEDC;
    case 178u: goto L_0015BEE4;
    case 179u: goto L_0015BEEC;
    case 180u: goto L_0015BF14;
    case 181u: goto L_0015BF1C;
    case 182u: goto L_0015BF24;
    case 183u: goto L_0015BF2C;
    case 184u: goto L_0015BF34;
    case 185u: goto L_0015BF40;
    case 186u: goto L_0015BF50;
    case 187u: goto L_0015BF60;
    case 188u: goto L_0015BFE0;
    case 189u: goto L_0015BFF4;
    case 190u: goto L_0015BFFC;
    default: bad_entry(c, 0x00158000u); return;
    }
L_00158000:
    c.budget -= 1;
L_00158004:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.f[0] = c.r[18].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.f[1] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], c.r[2].w[0] - 15200u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158030u); c.f[12] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x00158030u) [[unlikely]] return; }
L_00158030:
    st16((c.r[19].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_00158120; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00158120; } }
L_0015804C:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 512u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00158120; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2070u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_00158084; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 1u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 640u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_001580A0; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 2;
L_00158084:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_001580D8; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 2u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 640u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_001580D8; } }
L_001580A0:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[4], c.r[4].w[0] - 15904u);
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 8u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_001580D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));  if (t) { goto L_00158110; } }
L_001580D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 2u)));  if (t) { goto L_00158110; } }
L_001580D8:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[4], c.r[4].w[0] - 15904u);
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 8u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_00158108; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 4u)));  if (t) { goto L_00158110; } }
L_00158108:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 6u)));
    c.budget -= 2;
L_00158110:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[19].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_00158120:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 12u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 10u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00158138; } }
    st16((c.r[19].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 1;
L_00158138:
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 12u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[3], c.r[3].w[0] - 15024u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 10u)));
    set32(c.r[6], c.r[7].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 4u)));
    set32(c.r[4], c.r[6].w[0] << 2);
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    mmi::div(c, 0, c.r[4].w[0], c.r[5].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 20;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00158194; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_0015819C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_00158194:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001581A0; } }
L_0015819C:
    st8((c.r[19].w[0] + 4u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_001581A0:
    set32(c.r[19], c.r[19].w[0] + 16u);
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 2;
L_001581A8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2111u)));
    c.r[3].d[0] = c.r[20].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00157FA4u | kUnwind; return; } [[clang::musttail]] return unit_0015(c, 252u, depth); } }
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001581E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[16], c.r[3].w[0] + 25952u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[5], c.r[5].w[0] + 26144u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    mmi::paddub(c.r[3], c.r[0], c.r[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[10], c.r[6].w[0] + 5680u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[8], c.r[6].w[0] + 9648u);
    set32(c.r[7], 0u + 127u);
    c.budget -= 16;
L_00158220:
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[11].d[0] == 0ull;  if (t) { goto L_001582A0; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8391u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_001582A0; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    c.r[1].d[0] = c.r[6].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001582A0; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2070u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_0015826C; } }
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 2068u)));
    set32(c.r[6], c.r[9].w[0] << 3);
    set32(c.r[6], c.r[6].w[0] + c.r[9].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[10].w[0] + c.r[6].w[0]);  if (t) { goto L_00158280; } }
L_0015826C:
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 2068u)));
    set32(c.r[6], c.r[9].w[0] << 3);
    set32(c.r[6], c.r[6].w[0] + c.r[9].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[8].w[0] + c.r[6].w[0]);
    c.budget -= 5;
L_00158280:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 25u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[7].d[0]; c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 514u)));  if (t) { goto L_001582A0; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3706u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_001582A0; } }
    mmi::paddub(c.r[9], c.r[0], c.r[0]);
    c.budget -= 2;
L_001582A0:
    c.budget -= 2;
    if (c.r[11].d[0] == 0ull) { set32(c.r[3], c.r[3].w[0] + 1u);  goto L_001582D4; }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8438u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_001582D0; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    c.r[1].d[0] = c.r[6].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001582D0; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 514u)));
    c.budget -= 3;
L_001582D0:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_001582D4:
    c.r[6].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 8448u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00158220u | kUnwind; return; } goto L_00158220; } }
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (t) { goto L_00158318; } }
L_001582EC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 6u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00158300; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[5].w[0] + 12u), static_cast<std::uint16_t>(c.r[9].w[0]));  if (t) { goto L_00158310; } }
L_00158300:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 7u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], c.r[5].w[0] + 16u);  goto L_00158314; }
    st16((c.r[5].w[0] + 12u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 1;
L_00158310:
    set32(c.r[5], c.r[5].w[0] + 16u);
    c.budget -= 1;
L_00158314:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_00158318:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2111u)));
    c.r[3].d[0] = c.r[6].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001582ECu | kUnwind; return; } goto L_001582EC; } }
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[17], c.r[16], c.r[0]);  if (t) { goto L_00158470; } }
L_00158334:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001583D0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[3], 0u + 41u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001583D0; } }
    set32(c.r[2], c.r[18].w[0] << 4);
    set32(c.r[8], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[7], c.r[18], c.r[0]);  if (t) { goto L_00158398; } }
    set32(c.r[6], c.r[8].w[0] + 16u);
    c.budget -= 1;
L_00158364:
    set32(c.r[4], 0u + 4u);
    mmi::paddub(c.r[5], c.r[8], c.r[0]);
    c.budget -= 3;
L_00158370:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 2u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[5].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00158370u | kUnwind; return; } goto L_00158370; } }
    set32(c.r[8], c.r[8].w[0] + 16u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 2;
L_00158398:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2111u)));
    c.r[2].d[0] = c.r[7].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[8].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00158364u | kUnwind; return; } goto L_00158364; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[2], c.r[2].w[0] + 25952u);
    set32(c.r[3], c.r[7].w[0] << 4);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], 0u + 32u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001583C4u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x001583C4u) [[unlikely]] return; }
L_001583C4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2111u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 2111u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_001583D0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[17], c.r[17].w[0] + 16u);  goto L_0015846C; }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[3], 0u + 41u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00158468; } }
    set32(c.r[2], c.r[18].w[0] << 4);
    set32(c.r[7], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[8], c.r[18], c.r[0]);  if (t) { goto L_00158430; } }
    set32(c.r[6], c.r[7].w[0] + 16u);
    c.budget -= 1;
L_00158400:
    set32(c.r[4], 0u + 4u);
    mmi::paddub(c.r[5], c.r[7], c.r[0]);
    c.budget -= 2;
L_00158408:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 2u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[5].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00158408u | kUnwind; return; } goto L_00158408; } }
    set32(c.r[7], c.r[7].w[0] + 16u);
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 2;
L_00158430:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2111u)));
    c.r[2].d[0] = c.r[8].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[7].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00158400u | kUnwind; return; } goto L_00158400; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[2], c.r[2].w[0] + 25952u);
    set32(c.r[3], c.r[8].w[0] << 4);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], 0u + 32u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015845Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x0015845Cu) [[unlikely]] return; }
L_0015845C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2111u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 2111u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00158468:
    set32(c.r[17], c.r[17].w[0] + 16u);
    c.budget -= 1;
L_0015846C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_00158470:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2111u)));
    c.r[3].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00158334u | kUnwind; return; } goto L_00158334; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[3], c.r[3].w[0] - 15552u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], c.r[4].w[0] - 15552u);
    set32(c.r[10], c.r[9].w[0] - 15024u);
    mmi::paddub(c.r[8], c.r[0], c.r[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[7], c.r[16], c.r[0]);  if (t) { goto L_001585D8; } }
L_001584AC:
    set32(c.r[9], ld32((c.r[28].w[0] - 26304u)));
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 512u)));
    c.budget -= 4;
    { const bool t = c.r[9].d[0] != 0ull;  if (t) { goto L_00158560; } }
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2070u)));
    c.budget -= 3;
    { const bool t = c.r[12].d[0] != 0ull;  if (t) { goto L_001584D8; } }
    set32(c.r[9], ld32((c.r[28].w[0] - 26300u)));
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 640u)));
    c.budget -= 4;
    { const bool t = c.r[9].d[0] == c.r[6].d[0];  if (t) { goto L_001584F0; } }
L_001584D8:
    c.budget -= 2;
    { const bool t = c.r[12].d[0] != c.r[6].d[0];  if (t) { goto L_00158520; } }
    set32(c.r[9], ld32((c.r[28].w[0] - 26300u)));
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 640u)));
    c.budget -= 4;
    { const bool t = c.r[9].d[0] != c.r[5].d[0];  if (t) { goto L_00158520; } }
L_001584F0:
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    set32(c.r[9], c.r[11].w[0] << 2);
    set32(c.r[9], c.r[9].w[0] + c.r[11].w[0]);
    set32(c.r[9], c.r[9].w[0] << 1);
    set32(c.r[11], c.r[4].w[0] + c.r[9].w[0]);
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[11].w[0] + 8u)));
    c.budget -= 8;
    { const bool t = c.r[12].d[0] != c.r[9].d[0];  if (t) { goto L_00158518; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[11].sd[0] = static_cast<std::int16_t>(ld16((c.r[11].w[0])));  if (t) { goto L_00158550; } }
L_00158518:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[11].sd[0] = static_cast<std::int16_t>(ld16((c.r[11].w[0] + 2u)));  if (t) { goto L_00158550; } }
L_00158520:
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    set32(c.r[9], c.r[11].w[0] << 2);
    set32(c.r[9], c.r[9].w[0] + c.r[11].w[0]);
    set32(c.r[9], c.r[9].w[0] << 1);
    set32(c.r[11], c.r[3].w[0] + c.r[9].w[0]);
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[11].w[0] + 8u)));
    c.budget -= 8;
    { const bool t = c.r[12].d[0] != c.r[9].d[0];  if (t) { goto L_00158548; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[11].sd[0] = static_cast<std::int16_t>(ld16((c.r[11].w[0] + 4u)));  if (t) { goto L_00158550; } }
L_00158548:
    c.r[11].sd[0] = static_cast<std::int16_t>(ld16((c.r[11].w[0] + 6u)));
    c.budget -= 2;
L_00158550:
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 12u)));
    set32(c.r[9], c.r[9].w[0] + c.r[11].w[0]);
    st16((c.r[7].w[0] + 12u), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.budget -= 4;
L_00158560:
    c.r[11].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 12u)));
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 10u)));
    c.r[1].d[0] = c.r[9].sd[0] < c.r[11].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00158578; } }
    st16((c.r[7].w[0] + 12u), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.budget -= 1;
L_00158578:
    c.r[14].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 12u)));
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.r[11].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 10u)));
    set32(c.r[12], c.r[14].w[0] << 2);
    set32(c.r[13], c.r[12].w[0] + c.r[14].w[0]);
    set32(c.r[12], c.r[13].w[0] << 2);
    set32(c.r[12], c.r[13].w[0] + c.r[12].w[0]);
    set32(c.r[12], c.r[12].w[0] << 2);
    mmi::div(c, 0, c.r[12].w[0], c.r[11].w[0]);
    set32(c.r[9], c.r[9].w[0] << 3);
    set32(c.r[9], c.r[10].w[0] + c.r[9].w[0]);
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0] + 6u)));
    c.r[11].d[0] = c.lo.d[0];
    c.r[9].d[0] = c.r[11].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[9].d[0] != 0ull;  if (t) { goto L_001585C0; } }
    c.budget -= 2;
    { const bool t = c.r[14].d[0] != 0ull;  if (t) { goto L_001585C8; } }
L_001585C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[7].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { goto L_001585D0; } }
L_001585C8:
    st8((c.r[7].w[0] + 4u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_001585D0:
    set32(c.r[7], c.r[7].w[0] + 16u);
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 2;
L_001585D8:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2111u)));
    c.r[9].d[0] = c.r[8].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[9].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001584ACu | kUnwind; return; } goto L_001584AC; } }
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00158600:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[3], c.r[3].w[0] + 25952u);
    set32(c.r[6], c.r[4].w[0] + 17232u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    mmi::paddub(c.r[11], c.r[0], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 8;
L_00158620:
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3392u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_00158644; }
    c.r[4].d[0] = ld16((c.r[6].w[0] + 12u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00158640; } }
    set32(c.r[11], 0u + 1u);
    c.budget -= 1;
L_00158640:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_00158644:
    c.r[4].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(25ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 14u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00158620u | kUnwind; return; } goto L_00158620; } }
    c.r[14].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2070u)));
    c.r[13].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2111u)));
    set32(c.r[5], 0u + 107u);
    set32(c.r[4], 0u + 124u);
    c.budget -= 6;
    { const bool t = c.r[13].sd[0] > 0; if (c.r[14].d[0] != 0) c.r[5].d[0] = c.r[4].d[0];  if (t) { goto L_00158698; } }
    set32(c.r[7], 0u + 1u);
    c.r[4].d[0] = c.r[5].d[0] & 31ull;
    set32(c.r[7], c.r[7].w[0] << (c.r[4].w[0] & 31u));
    set32(c.r[4], c.r[5].w[0] >> 5);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[6], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[6].w[0] + 3360u)));
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = c.r[5].d[0] | c.r[7].d[0];
    st32((c.r[6].w[0] + 3360u), c.r[5].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 3704u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00158A38; } }
L_00158698:
    set32(c.r[6], 0u + 2u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[5], 0u + 3u);
    mmi::paddub(c.r[9], c.r[0], c.r[0]);
    mmi::paddub(c.r[10], c.r[0], c.r[0]);
    mmi::paddub(c.r[8], c.r[0], c.r[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[12], c.r[3], c.r[0]);  if (t) { goto L_00158708; } }
L_001586B8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[12].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_001586D0; } }
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[10], c.r[10].w[0] + 1u);  if (t) { goto L_00158700; } }
L_001586D0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[7].d[0];  if (t) { goto L_001586E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[9], c.r[9].w[0] + 1u);  if (t) { goto L_00158700; } }
L_001586E0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[6].d[0];  if (t) { goto L_001586F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[9], c.r[9].w[0] + 1u);  if (t) { goto L_00158700; } }
L_001586F0:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[5].d[0]) { set32(c.r[12], c.r[12].w[0] + 16u);  goto L_00158704; }
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.budget -= 2;
L_00158700:
    set32(c.r[12], c.r[12].w[0] + 16u);
    c.budget -= 1;
L_00158704:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_00158708:
    c.r[4].d[0] = c.r[8].d[0] < c.r[13].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001586B8u | kUnwind; return; } goto L_001586B8; } }
    c.budget -= 2;
    { const bool t = c.r[9].d[0] != 0ull;  if (t) { goto L_0015875C; } }
    c.budget -= 2;
    { const bool t = c.r[11].d[0] != 0ull;  if (t) { goto L_0015875C; } }
    set32(c.r[5], 0u + 117u);
    set32(c.r[4], 0u + 126u);
    if (c.r[14].d[0] != 0) c.r[5].d[0] = c.r[4].d[0];
    set32(c.r[7], 0u + 1u);
    c.r[4].d[0] = c.r[5].d[0] & 31ull;
    set32(c.r[7], c.r[7].w[0] << (c.r[4].w[0] & 31u));
    set32(c.r[4], c.r[5].w[0] >> 5);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[6], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[6].w[0] + 3360u)));
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = c.r[5].d[0] | c.r[7].d[0];
    st32((c.r[6].w[0] + 3360u), c.r[5].w[0]);
    st8((c.r[3].w[0] + 3704u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 14;
L_0015875C:
    c.budget -= 2;
    { const bool t = c.r[10].d[0] != 0ull;  if (t) { goto L_001587A0; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2070u)));
    set32(c.r[6], 0u + 118u);
    set32(c.r[4], 0u + 127u);
    set32(c.r[7], 0u + 1u);
    if (c.r[5].d[0] != 0) c.r[6].d[0] = c.r[4].d[0];
    c.r[4].d[0] = c.r[6].d[0] & 31ull;
    set32(c.r[7], c.r[7].w[0] << (c.r[4].w[0] & 31u));
    set32(c.r[4], c.r[6].w[0] >> 5);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[6], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[6].w[0] + 3360u)));
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = c.r[5].d[0] | c.r[7].d[0];
    st32((c.r[6].w[0] + 3360u), c.r[5].w[0]);
    st8((c.r[3].w[0] + 3704u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 15;
L_001587A0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2070u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00158A38; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[12], c.r[5].w[0] + 18016u);
    mmi::paddub(c.r[10], c.r[0], c.r[0]);
    mmi::paddub(c.r[14], c.r[0], c.r[0]);
    set32(c.r[6], 0u + 58u);
    set32(c.r[7], 0u + 255u);
    c.budget -= 6;
L_001587C4:
    mmi::paddub(c.r[15], c.r[0], c.r[0]);
    mmi::paddub(c.r[11], c.r[12], c.r[0]);
    c.budget -= 3;
L_001587D0:
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[11].w[0])));
    c.budget -= 3;
    if (c.r[8].d[0] == c.r[7].d[0]) { set32(c.r[15], c.r[15].w[0] + 1u);  goto L_00158824; }
    set32(c.r[5], c.r[8].w[0] >> 5);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[13], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[13].w[0] + 3312u)));
    set32(c.r[9], 0u + 1u);
    set32(c.r[9], c.r[9].w[0] << (c.r[8].w[0] & 31u));
    c.r[5].d[0] = c.r[5].d[0] & c.r[9].d[0];
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00158820; } }
    set32(c.r[5], ld32((c.r[13].w[0] + 3328u)));
    c.r[5].d[0] = c.r[5].d[0] & c.r[9].d[0];
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_00158820; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == c.r[6].d[0];  if (t) { goto L_00158820; } }
    set32(c.r[10], 0u + 1u);
    c.budget -= 2;
L_00158820:
    set32(c.r[15], c.r[15].w[0] + 1u);
    c.budget -= 1;
L_00158824:
    c.r[5].d[0] = c.r[15].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[11], c.r[11].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001587D0u | kUnwind; return; } goto L_001587D0; } }
    set32(c.r[14], c.r[14].w[0] + 1u);
    c.r[5].d[0] = c.r[14].d[0] < static_cast<std::uint64_t>(26ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[12], c.r[12].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001587C4u | kUnwind; return; } goto L_001587C4; } }
    c.budget -= 2;
    { const bool t = c.r[10].d[0] != 0ull;  if (t) { goto L_001588B8; } }
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2111u)));
    set32(c.r[8], 0u + 1u);
    set32(c.r[7], 0u + 2u);
    set32(c.r[6], 0u + 16u);
    mmi::paddub(c.r[12], c.r[0], c.r[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[9], c.r[3], c.r[0]);  if (t) { goto L_001588A8; } }
L_00158864:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_00158878; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[10], 0u + 1u);  if (t) { goto L_001588A0; } }
L_00158878:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[8].d[0];  if (t) { goto L_00158888; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[10], c.r[8], c.r[0]);  if (t) { goto L_001588A0; } }
L_00158888:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[7].d[0]) { set32(c.r[9], c.r[9].w[0] + 16u);  goto L_001588A4; }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0])));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[6].d[0];  if (t) { goto L_001588A0; } }
    mmi::paddub(c.r[10], c.r[8], c.r[0]);
    c.budget -= 1;
L_001588A0:
    set32(c.r[9], c.r[9].w[0] + 16u);
    c.budget -= 1;
L_001588A4:
    set32(c.r[12], c.r[12].w[0] + 1u);
    c.budget -= 1;
L_001588A8:
    c.r[5].d[0] = c.r[12].d[0] < c.r[11].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00158864u | kUnwind; return; } goto L_00158864; } }
    c.budget -= 1;
L_001588B8:
    c.budget -= 2;
    { const bool t = c.r[10].d[0] != 0ull;  if (t) { goto L_001588F8; } }
    set32(c.r[6], 0u + 117u);
    set32(c.r[5], 0u + 126u);
    if (c.r[4].d[0] != 0) c.r[6].d[0] = c.r[5].d[0];
    set32(c.r[7], 0u + 1u);
    c.r[4].d[0] = c.r[6].d[0] & 31ull;
    set32(c.r[7], c.r[7].w[0] << (c.r[4].w[0] & 31u));
    set32(c.r[4], c.r[6].w[0] >> 5);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[6], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[6].w[0] + 3360u)));
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = c.r[5].d[0] | c.r[7].d[0];
    st32((c.r[6].w[0] + 3360u), c.r[5].w[0]);
    st8((c.r[3].w[0] + 3704u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 14;
L_001588F8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[14], c.r[4].w[0] + 18016u);
    mmi::paddub(c.r[11], c.r[0], c.r[0]);
    mmi::paddub(c.r[12], c.r[0], c.r[0]);
    mmi::paddub(c.r[24], c.r[0], c.r[0]);
    set32(c.r[8], 0u + 24u);
    set32(c.r[7], 0u + 50u);
    set32(c.r[6], 0u + 53u);
    set32(c.r[5], 0u + 56u);
    set32(c.r[9], 0u + 255u);
    c.budget -= 10;
L_00158920:
    mmi::paddub(c.r[25], c.r[0], c.r[0]);
    mmi::paddub(c.r[13], c.r[14], c.r[0]);
    c.budget -= 2;
L_00158928:
    c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[13].w[0])));
    c.budget -= 3;
    if (c.r[10].d[0] == c.r[9].d[0]) { set32(c.r[25], c.r[25].w[0] + 1u);  goto L_00158994; }
    set32(c.r[4], c.r[10].w[0] >> 5);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[15], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[15].w[0] + 3312u)));
    set32(c.r[31], 0u + 1u);
    set32(c.r[31], c.r[31].w[0] << (c.r[10].w[0] & 31u));
    c.r[4].d[0] = c.r[4].d[0] & c.r[31].d[0];
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00158990; } }
    set32(c.r[4], ld32((c.r[15].w[0] + 3328u)));
    c.r[4].d[0] = c.r[4].d[0] & c.r[31].d[0];
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00158990; } }
    c.budget -= 2;
    { const bool t = c.r[10].d[0] == c.r[8].d[0];  if (t) { goto L_00158990; } }
    c.budget -= 2;
    { const bool t = c.r[10].d[0] == c.r[7].d[0];  if (t) { goto L_00158990; } }
    c.budget -= 2;
    { const bool t = c.r[10].d[0] == c.r[6].d[0];  if (t) { goto L_00158990; } }
    c.budget -= 2;
    { const bool t = c.r[10].d[0] == c.r[5].d[0];  if (t) { goto L_00158990; } }
    set32(c.r[11], 0u + 1u);
    c.budget -= 2;
L_00158990:
    set32(c.r[25], c.r[25].w[0] + 1u);
    c.budget -= 1;
L_00158994:
    c.r[4].d[0] = c.r[25].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[13], c.r[13].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00158928u | kUnwind; return; } goto L_00158928; } }
    set32(c.r[24], c.r[24].w[0] + 1u);
    c.r[4].d[0] = c.r[24].d[0] < static_cast<std::uint64_t>(26ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[14], c.r[14].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00158920u | kUnwind; return; } goto L_00158920; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2111u)));
    set32(c.r[5], 0u + 2u);
    mmi::paddub(c.r[8], c.r[0], c.r[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[6], c.r[3], c.r[0]);  if (t) { goto L_001589E0; } }
L_001589C4:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 2u)));
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[5].d[0]) { set32(c.r[6], c.r[6].w[0] + 16u);  goto L_001589DC; }
    set32(c.r[12], 0u + 1u);
    set32(c.r[6], c.r[6].w[0] + 16u);
    c.budget -= 3;
L_001589DC:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_001589E0:
    c.r[4].d[0] = c.r[8].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001589C4u | kUnwind; return; } goto L_001589C4; } }
    c.budget -= 2;
    { const bool t = c.r[11].d[0] != 0ull;  if (t) { goto L_00158A38; } }
    c.budget -= 2;
    { const bool t = c.r[12].d[0] != 0ull;  if (t) { goto L_00158A38; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2070u)));
    set32(c.r[6], 0u + 117u);
    set32(c.r[4], 0u + 126u);
    set32(c.r[7], 0u + 1u);
    if (c.r[5].d[0] != 0) c.r[6].d[0] = c.r[4].d[0];
    c.r[4].d[0] = c.r[6].d[0] & 31ull;
    set32(c.r[7], c.r[7].w[0] << (c.r[4].w[0] & 31u));
    set32(c.r[4], c.r[6].w[0] >> 5);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[6], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[6].w[0] + 3360u)));
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = c.r[5].d[0] | c.r[7].d[0];
    st32((c.r[6].w[0] + 3360u), c.r[5].w[0]);
    st8((c.r[3].w[0] + 3704u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 15;
L_00158A38:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00158A50:
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
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[16], c.r[3].w[0] + 25952u);
    set32(c.r[3], 0u + 120u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    st32((c.r[29].w[0] + 208u), c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 28022u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 208u)));
    if (c.r[4].d[0] != 0) c.r[3].d[0] = c.r[3].d[0];
    st32((c.r[29].w[0] + 208u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 208u)));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 24;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[29].w[0] + 160u), 0u);  if (t) { goto L_00158F48; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[3], c.r[3].w[0] + 29696u);
    st32((c.r[29].w[0] + 256u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[3], c.r[3].w[0] - 32480u);
    st32((c.r[29].w[0] + 272u), c.r[3].w[0]);
    mmi::paddub(c.r[23], c.r[16], c.r[0]);
    c.budget -= 7;
L_00158ACC:
    set32(c.r[3], ld32((c.r[29].w[0] + 256u)));
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    mmi::paddub(c.r[19], c.r[0], c.r[0]);
    st32((c.r[29].w[0] + 176u), 0u);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    mmi::paddub(c.r[22], c.r[16], c.r[0]);
    st32((c.r[29].w[0] + 224u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 272u)));
    st32((c.r[29].w[0] + 240u), c.r[3].w[0]);
    c.budget -= 9;
L_00158AF0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2070u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00158B10; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 224u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 224u)));
    c.r[30].d[0] = ld16((c.r[4].w[0] + 2u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld16((c.r[3].w[0]));  if (t) { goto L_00158B28; } }
L_00158B10:
    set32(c.r[3], ld32((c.r[29].w[0] + 240u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 240u)));
    c.r[3].d[0] = ld16((c.r[3].w[0]));
    c.r[30].d[0] = ld16((c.r[4].w[0] + 2u));
    c.budget -= 6;
L_00158B28:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[20], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));  if (t) { goto L_00158B38; } }
    set32(c.r[4], c.r[3].w[0] + 31u);
    set32(c.r[20], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 5));
    c.budget -= 2;
L_00158B38:
    set32(c.r[21], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; c.r[4].d[0] = c.r[3].d[0] & 31ull;  if (t) { goto L_00158B50; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[1].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(14ll) ? 1ull : 0ull;  if (t) { goto L_00158B54; } }
    set32(c.r[4], c.r[4].w[0] - 32u);
    c.budget -= 1;
L_00158B50:
    c.r[1].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(14ll) ? 1ull : 0ull;
    c.budget -= 1;
L_00158B54:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[21], c.r[21].w[0] << (c.r[4].w[0] & 31u));  if (t) { goto L_00158E28; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[5], c.r[4].w[0] + 20928u);
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x00158000u < 16384u) { entry = entries_0016[(t - 0x00158000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00158B78:
    c.r[4].d[0] = 0ull | 65535ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00158E28; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 2066u)));
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[19], 0u + 1u);  goto L_00158BAC; }
    c.r[1].d[0] = c.r[30].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00158BA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u + 1u);  if (t) { goto L_00158E28; } }
L_00158BA8:
    set32(c.r[19], 0u + 1u);
    c.budget -= 1;
L_00158BAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 224u)));  if (t) { goto L_00158E2C; } }
L_00158BB4:
    c.r[4].d[0] = 0ull | 65535ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00158E28; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 2064u)));
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[19], 0u + 1u);  goto L_00158BE8; }
    c.r[1].d[0] = c.r[30].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00158BE4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u + 1u);  if (t) { goto L_00158E28; } }
L_00158BE4:
    set32(c.r[19], 0u + 1u);
    c.budget -= 1;
L_00158BE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00158E28; } }
L_00158BF0:
    c.r[4].d[0] = 0ull | 65535ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00158E28; } }
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2112u)));
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { set32(c.r[19], 0u + 1u);  goto L_00158C1C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u + 1u);  if (t) { goto L_00158E28; } }
    set32(c.r[19], 0u + 1u);
    c.budget -= 1;
L_00158C1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00158E28; } }
L_00158C24:
    c.r[4].d[0] = 0ull | 65535ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00158E28; } }
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2112u)));
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[19], 0u + 1u);  goto L_00158C68; }
    set32(c.r[3], c.r[20].w[0] << 2);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 3328u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[21].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00158C64; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u + 1u);  if (t) { goto L_00158E28; } }
L_00158C64:
    set32(c.r[19], 0u + 1u);
    c.budget -= 1;
L_00158C68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00158E28; } }
L_00158C70:
    c.r[4].d[0] = 0ull | 65535ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00158E28; } }
    set32(c.r[3], c.r[20].w[0] << 2);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 3328u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[21].d[0];
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { set32(c.r[19], 0u + 1u);  goto L_00158CA0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u + 1u);  if (t) { goto L_00158E28; } }
    set32(c.r[19], 0u + 1u);
    c.budget -= 1;
L_00158CA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00158E28; } }
L_00158CA8:
    c.r[4].d[0] = 0ull | 65535ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00158E28; } }
    set32(c.r[3], c.r[20].w[0] << 2);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 3360u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[21].d[0];
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { set32(c.r[19], 0u + 1u);  goto L_00158CD8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u + 1u);  if (t) { goto L_00158E28; } }
    set32(c.r[19], 0u + 1u);
    c.budget -= 1;
L_00158CD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00158E28; } }
L_00158CE0:
    c.r[4].d[0] = 0ull | 65535ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00158E28; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 2066u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00158E28; } }
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00158E28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158D18u);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x00158D18u) [[unlikely]] return; }
L_00158D18:
    c.r[3].d[0] = c.r[2].d[0] & 15ull;
    c.r[3].d[0] = c.r[30].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[19], 0u + 1u);  goto L_00158D50; }
    set32(c.r[3], c.r[20].w[0] << 2);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 3328u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[21].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00158D4C; } }
    set32(c.r[18], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 176u), c.r[18].w[0]);  if (t) { goto L_00158E28; } }
L_00158D4C:
    set32(c.r[19], 0u + 1u);
    c.budget -= 1;
L_00158D50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00158E28; } }
L_00158D58:
    c.r[4].d[0] = 0ull | 65535ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00158E28; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2111u)));
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (t) { goto L_00158D90; } }
L_00158D74:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[4].d[0]) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_00158D8C; }
    set32(c.r[6], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 3;
L_00158D8C:
    c.budget -= 1;
L_00158D90:
    c.r[4].d[0] = c.r[5].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00158D74u | kUnwind; return; } goto L_00158D74; } }
    c.budget -= 2;
    if (c.r[6].d[0] != 0ull) { set32(c.r[19], 0u + 1u);  goto L_00158DB0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u + 1u);  if (t) { goto L_00158E28; } }
    set32(c.r[19], 0u + 1u);
    c.budget -= 1;
L_00158DB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00158E28; } }
L_00158DB8:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00158DC8; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[4].d[0] = 0ull | 65535ull;  if (t) { goto L_00158DDC; } }
L_00158DC8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[23].w[0] + 2116u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00158E28; } }
    c.r[4].d[0] = 0ull | 65535ull;
    c.budget -= 2;
L_00158DDC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00158E28; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[23].w[0] + 2116u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[23].w[0] + 2116u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[23].w[0] + 2116u)));
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[19], 0u + 1u);  if (t) { goto L_00158E10; } }
    set32(c.r[18], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[19], c.r[0], c.r[0]);  if (t) { goto L_00158E28; } }
    set32(c.r[19], 0u + 1u);
    c.budget -= 1;
L_00158E10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[18], c.r[0], c.r[0]);  if (t) { goto L_00158E28; } }
L_00158E18:
    c.r[4].d[0] = 0ull | 65535ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00158E28; } }
    st32((c.r[29].w[0] + 204u), c.r[3].w[0]);
    c.budget -= 1;
L_00158E28:
    set32(c.r[3], ld32((c.r[29].w[0] + 224u)));
    c.budget -= 1;
L_00158E2C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 2u);
    st32((c.r[29].w[0] + 224u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 240u)));
    c.budget -= 4;
L_00158E3C:
    set32(c.r[3], c.r[3].w[0] + 2u);
    st32((c.r[29].w[0] + 240u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[17].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[22], c.r[22].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00158AF0u | kUnwind; return; } goto L_00158AF0; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00158F10; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_00158F10; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].sd[0] >= 0; c.r[5].d[0] = c.r[4].d[0] & 31ull;  if (t) { goto L_00158E7C; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00158E7C; } }
    set32(c.r[5], c.r[5].w[0] - 32u);
    c.budget -= 1;
L_00158E7C:
    set32(c.r[4], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[3], c.r[3].w[0] << (c.r[5].w[0] & 31u));
    c.budget -= 4;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 5));  if (t) { goto L_00158E94; } }
    set32(c.r[4], c.r[4].w[0] + 31u);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 5));
    c.budget -= 2;
L_00158E94:
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[7], c.r[16].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[7].w[0] + 3312u)));
    c.r[4].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[8], c.r[7].w[0] + 3312u);  if (t) { goto L_00158EE8; } }
    set32(c.r[4], ld32((c.r[7].w[0] + 3328u)));
    c.r[4].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00158EE8; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 204u)));
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].sd[0] >= 0; c.r[5].d[0] = c.r[4].d[0] & 31ull;  if (t) { goto L_00158ED8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00158ED8; } }
    set32(c.r[5], c.r[5].w[0] - 32u);
    c.budget -= 1;
L_00158ED8:
    set32(c.r[4], ld32((c.r[16].w[0] + 3548u)));
    set32(c.r[6], c.r[6].w[0] << (c.r[5].w[0] & 31u));
    c.r[4].d[0] = c.r[4].d[0] | c.r[6].d[0];
    st32((c.r[16].w[0] + 3548u), c.r[4].w[0]);
    c.budget -= 4;
L_00158EE8:
    set32(c.r[4], ld32((c.r[8].w[0])));
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[8].w[0]), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 176u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00158F10; } }
    c.r[4].d[0] = ~(c.r[3].d[0] | 0ull);
    set32(c.r[3], ld32((c.r[7].w[0] + 3328u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    st32((c.r[7].w[0] + 3328u), c.r[3].w[0]);
    c.budget -= 4;
L_00158F10:
    set32(c.r[3], ld32((c.r[29].w[0] + 256u)));
    set32(c.r[3], c.r[3].w[0] + 28u);
    st32((c.r[29].w[0] + 256u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 272u)));
    set32(c.r[3], c.r[3].w[0] + 28u);
    st32((c.r[29].w[0] + 272u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 160u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 208u)));
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[23], c.r[23].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00158ACCu | kUnwind; return; } goto L_00158ACC; } }
L_00158F48:
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
L_00158F80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 28022u)));
    set32(c.r[8], 0u + 120u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[3], c.r[3].w[0] + 25952u);
    if (c.r[4].d[0] != 0) c.r[8].d[0] = c.r[8].d[0];
    c.r[1].d[0] = 0ll < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (t) { goto L_001592C0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[13], c.r[4].w[0] - 29120u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[14], c.r[4].w[0] - 26720u);
    mmi::paddub(c.r[12], c.r[3], c.r[0]);
    c.budget -= 5;
L_00158FC8:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] >= 0; set32(c.r[24], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 5));  if (t) { goto L_00158FD8; } }
    set32(c.r[4], c.r[5].w[0] + 31u);
    set32(c.r[24], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 5));
    c.budget -= 2;
L_00158FD8:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] >= 0; c.r[15].d[0] = c.r[5].d[0] & 31ull;  if (t) { goto L_00158FEC; } }
    c.budget -= 2;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[4], c.r[24].w[0] << 2);  if (t) { goto L_00158FF0; } }
    set32(c.r[15], c.r[15].w[0] - 32u);
    c.budget -= 1;
L_00158FEC:
    set32(c.r[4], c.r[24].w[0] << 2);
    c.budget -= 1;
L_00158FF0:
    set32(c.r[7], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[7].w[0] + 3312u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[6], c.r[6].w[0] << (c.r[15].w[0] & 31u));
    c.r[4].d[0] = c.r[4].d[0] & c.r[6].d[0];
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00159018; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[12].w[0] + 2114u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[12].w[0] + 2114u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
L_00159018:
    set32(c.r[4], ld32((c.r[7].w[0] + 3328u)));
    c.r[4].d[0] = c.r[4].d[0] & c.r[6].d[0];
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[6], c.r[24].w[0] << 2);  if (t) { goto L_0015903C; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[12].w[0] + 2115u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[12].w[0] + 2115u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[6], c.r[24].w[0] << 2);
    c.budget -= 5;
L_0015903C:
    set32(c.r[11], c.r[3].w[0] + c.r[6].w[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    mmi::paddub(c.r[9], c.r[13], c.r[0]);
    mmi::paddub(c.r[10], c.r[14], c.r[0]);
    c.budget -= 5;
L_00159050:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2070u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_00159064; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = ld16((c.r[9].w[0]));  if (t) { goto L_0015906C; } }
L_00159064:
    c.r[6].d[0] = ld16((c.r[10].w[0]));
    c.budget -= 2;
L_0015906C:
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] >= 0; set32(c.r[25], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 5));  if (t) { goto L_0015907C; } }
    set32(c.r[16], c.r[6].w[0] + 31u);
    set32(c.r[25], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 5));
    c.budget -= 2;
L_0015907C:
    set32(c.r[31], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] >= 0; c.r[16].d[0] = c.r[6].d[0] & 31ull;  if (t) { goto L_00159094; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;  if (t) { goto L_00159098; } }
    set32(c.r[16], c.r[16].w[0] - 32u);
    c.budget -= 1;
L_00159094:
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 1;
L_00159098:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[31], c.r[31].w[0] << (c.r[16].w[0] & 31u));  if (t) { goto L_00159270; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[17], c.r[16].w[0] + 20992u);
    set32(c.r[16], c.r[4].w[0] << 2);
    set32(c.r[16], c.r[16].w[0] + c.r[17].w[0]);
    set32(c.r[16], ld32((c.r[16].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[16].w[0];  c.pc = t; if (t - 0x00158000u < 16384u) { entry = entries_0016[(t - 0x00158000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001590C0:
    c.r[16].d[0] = 0ull | 65535ull;
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[16].d[0]) { set32(c.r[4], c.r[4].w[0] + 1u);  goto L_00159274; }
    c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 2066u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[6].d[0];  if (t) { goto L_00159270; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], 0u + 1u);  if (t) { goto L_00159270; } }
L_001590E0:
    c.r[16].d[0] = 0ull | 65535ull;
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[16].d[0];  if (t) { goto L_00159270; } }
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[12].w[0] + 2114u)));
    c.r[6].d[0] = c.r[16].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_00159270; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], 0u + 1u);  if (t) { goto L_00159270; } }
L_00159104:
    c.r[16].d[0] = 0ull | 65535ull;
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[16].d[0];  if (t) { goto L_00159270; } }
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[12].w[0] + 2113u)));
    c.r[6].d[0] = c.r[16].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_00159270; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], 0u + 1u);  if (t) { goto L_00159270; } }
L_00159128:
    c.r[16].d[0] = 0ull | 65535ull;
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[16].d[0];  if (t) { goto L_00159270; } }
    set32(c.r[6], c.r[6].w[0] << 3);
    set32(c.r[6], c.r[3].w[0] + c.r[6].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 2112u)));
    c.budget -= 5;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00159270; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], 0u + 1u);  if (t) { goto L_00159270; } }
L_00159150:
    c.r[16].d[0] = 0ull | 65535ull;
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[16].d[0];  if (t) { goto L_00159270; } }
    set32(c.r[6], c.r[6].w[0] << 3);
    set32(c.r[6], c.r[3].w[0] + c.r[6].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 2112u)));
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_00159270; } }
    set32(c.r[6], c.r[25].w[0] << 2);
    set32(c.r[6], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[6].w[0] + 3328u)));
    c.r[6].d[0] = c.r[6].d[0] & c.r[31].d[0];
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00159270; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], 0u + 1u);  if (t) { goto L_00159270; } }
L_00159190:
    c.r[16].d[0] = 0ull | 65535ull;
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[16].d[0];  if (t) { goto L_00159270; } }
    set32(c.r[6], c.r[25].w[0] << 2);
    set32(c.r[6], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[6].w[0] + 3328u)));
    c.r[6].d[0] = c.r[6].d[0] & c.r[31].d[0];
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00159270; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], 0u + 1u);  if (t) { goto L_00159270; } }
L_001591BC:
    c.r[16].d[0] = 0ull | 65535ull;
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[16].d[0];  if (t) { goto L_00159270; } }
    set32(c.r[6], c.r[25].w[0] << 2);
    set32(c.r[6], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[6].w[0] + 3360u)));
    c.r[6].d[0] = c.r[6].d[0] & c.r[31].d[0];
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00159270; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], 0u + 1u);  if (t) { goto L_00159270; } }
L_001591E8:
    c.r[25].d[0] = 0ull | 65535ull;
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[25].d[0];  if (t) { goto L_00159270; } }
    c.r[25].sd[0] = static_cast<std::int8_t>(ld8((c.r[12].w[0] + 2115u)));
    c.r[1].d[0] = c.r[6].sd[0] < c.r[25].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00159270; } }
    st8((c.r[12].w[0] + 2115u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], ld32((c.r[11].w[0] + 3328u)));
    set32(c.r[16], 0u + 1u);
    set32(c.r[16], c.r[16].w[0] << (c.r[15].w[0] & 31u));
    c.r[25].d[0] = ~(c.r[16].d[0] | 0ull);
    c.r[6].d[0] = c.r[6].d[0] & c.r[25].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[11].w[0] + 3328u), c.r[6].w[0]);  if (t) { goto L_00159270; } }
L_00159224:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull; c.r[25].d[0] = 0ull | 65535ull;  if (t) { goto L_0015923C; } }
    c.r[25].sd[0] = static_cast<std::int8_t>(ld8((c.r[12].w[0] + 2117u)));
    c.budget -= 3;
    { const bool t = c.r[25].d[0] == 0ull;  if (t) { goto L_00159270; } }
    c.r[25].d[0] = 0ull | 65535ull;
    c.budget -= 1;
L_0015923C:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[25].d[0];  if (t) { goto L_00159270; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[12].w[0] + 2117u)));
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[12].w[0] + 2117u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[12].w[0] + 2117u)));
    c.r[1].d[0] = c.r[6].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (t) { goto L_0015926C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], 0u + 1u);  if (t) { goto L_00159270; } }
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.budget -= 1;
L_0015926C:
    c.budget -= 1;
L_00159270:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_00159274:
    c.r[6].d[0] = c.r[4].sd[0] < 10ll ? 1ull : 0ull;
    set32(c.r[9], c.r[9].w[0] + 2u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[10], c.r[10].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00159050u | kUnwind; return; } goto L_00159050; } }
    c.budget -= 2;
    if (c.r[7].d[0] == 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_001592AC; }
    set32(c.r[4], c.r[24].w[0] << 2);
    set32(c.r[6], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[6].w[0] + 3328u)));
    set32(c.r[7], 0u + 1u);
    set32(c.r[7], c.r[7].w[0] << (c.r[15].w[0] & 31u));
    c.r[4].d[0] = c.r[4].d[0] | c.r[7].d[0];
    st32((c.r[6].w[0] + 3328u), c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 8;
L_001592AC:
    set32(c.r[12], c.r[12].w[0] + 8u);
    set32(c.r[13], c.r[13].w[0] + 20u);
    c.r[4].d[0] = c.r[5].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[14], c.r[14].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00158FC8u | kUnwind; return; } goto L_00158FC8; } }
L_001592C0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001592E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 28022u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[9], c.r[3].w[0] + 25952u);
    set32(c.r[3], 0u + 120u);
    if (c.r[4].d[0] != 0) c.r[3].d[0] = c.r[3].d[0];
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[10], c.r[0], c.r[0]);  if (t) { goto L_001593E8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[4], c.r[4].w[0] - 29120u);
    set32(c.r[5], c.r[5].w[0] - 26720u);
    c.r[8].d[0] = 0ull | 65535ull;
    c.budget -= 5;
L_00159318:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 2070u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull; mmi::paddub(c.r[12], c.r[0], c.r[0]);  if (t) { goto L_0015932C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[11].d[0] = ld16((c.r[4].w[0] + 12u));  if (t) { goto L_00159334; } }
L_0015932C:
    c.r[11].d[0] = ld16((c.r[5].w[0] + 12u));
    c.budget -= 2;
L_00159334:
    c.budget -= 2;
    { const bool t = c.r[11].sd[0] >= 0; set32(c.r[13], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[11].w[0]) >> 5));  if (t) { goto L_00159344; } }
    set32(c.r[6], c.r[11].w[0] + 31u);
    set32(c.r[13], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 5));
    c.budget -= 2;
L_00159344:
    set32(c.r[7], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[11].sd[0] >= 0; c.r[6].d[0] = c.r[11].d[0] & 31ull;  if (t) { goto L_0015935C; } }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[7], c.r[7].w[0] << (c.r[6].w[0] & 31u));  goto L_00159360; }
    set32(c.r[6], c.r[6].w[0] - 32u);
    c.budget -= 1;
L_0015935C:
    set32(c.r[7], c.r[7].w[0] << (c.r[6].w[0] & 31u));
    c.budget -= 1;
L_00159360:
    c.budget -= 2;
    { const bool t = c.r[11].d[0] == c.r[8].d[0];  if (t) { goto L_00159388; } }
    set32(c.r[6], c.r[13].w[0] << 2);
    set32(c.r[6], c.r[9].w[0] + c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[6].w[0] + 3360u)));
    c.r[6].d[0] = c.r[6].d[0] & c.r[7].d[0];
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00159388; } }
    set32(c.r[12], 0u + 1u);
    c.budget -= 2;
L_00159388:
    c.budget -= 2;
    if (c.r[12].d[0] == 0ull) { set32(c.r[10], c.r[10].w[0] + 1u);  goto L_001593D4; }
    set32(c.r[11], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[10].sd[0] >= 0; c.r[6].d[0] = c.r[10].d[0] & 31ull;  if (t) { goto L_001593A8; } }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[11], c.r[11].w[0] << (c.r[6].w[0] & 31u));  goto L_001593AC; }
    set32(c.r[6], c.r[6].w[0] - 32u);
    c.budget -= 1;
L_001593A8:
    set32(c.r[11], c.r[11].w[0] << (c.r[6].w[0] & 31u));
    c.budget -= 1;
L_001593AC:
    c.budget -= 2;
    { const bool t = c.r[10].sd[0] >= 0; set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[10].w[0]) >> 5));  if (t) { goto L_001593BC; } }
    set32(c.r[6], c.r[10].w[0] + 31u);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 5));
    c.budget -= 2;
L_001593BC:
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[7], c.r[9].w[0] + c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[7].w[0] + 3328u)));
    c.r[6].d[0] = c.r[6].d[0] | c.r[11].d[0];
    st32((c.r[7].w[0] + 3328u), c.r[6].w[0]);
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.budget -= 6;
L_001593D4:
    set32(c.r[4], c.r[4].w[0] + 20u);
    c.r[6].d[0] = c.r[10].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00159318u | kUnwind; return; } goto L_00159318; } }
    c.budget -= 1;
L_001593E8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001593F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 29496u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[3], c.r[3].w[0] + 25952u);
    c.budget -= 11;
    { const bool t = c.r[5].d[0] == 0ull; mmi::paddub(c.r[13], c.r[0], c.r[0]);  if (t) { goto L_001594D0; } }
    mmi::paddub(c.r[11], c.r[0], c.r[0]);
    set32(c.r[10], 0u + 124u);
    set32(c.r[9], 0u + 1u);
    set32(c.r[8], 0u + 126u);
    set32(c.r[7], 0u + 2u);
    set32(c.r[6], 0u + 127u);
    c.budget -= 6;
L_00159434:
    c.budget -= 2;
    { const bool t = c.r[11].d[0] != 0ull;  if (t) { goto L_00159448; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2070u)));
    set32(c.r[4], 0u + 107u);
    if (c.r[5].d[0] != 0) c.r[4].d[0] = c.r[10].d[0];
    c.budget -= 3;
L_00159448:
    c.budget -= 2;
    { const bool t = c.r[11].d[0] != c.r[9].d[0];  if (t) { goto L_00159460; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2070u)));
    set32(c.r[4], 0u + 117u);
    if (c.r[5].d[0] != 0) c.r[4].d[0] = c.r[8].d[0];
    c.budget -= 4;
L_00159460:
    c.budget -= 2;
    { const bool t = c.r[11].d[0] != c.r[7].d[0]; set32(c.r[12], 0u + 1u);  if (t) { goto L_0015947C; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2070u)));
    set32(c.r[4], 0u + 118u);
    if (c.r[5].d[0] != 0) c.r[4].d[0] = c.r[6].d[0];
    set32(c.r[12], 0u + 1u);
    c.budget -= 5;
L_0015947C:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] >= 0; c.r[5].d[0] = c.r[4].d[0] & 31ull;  if (t) { goto L_00159490; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[12], c.r[12].w[0] << (c.r[5].w[0] & 31u));  goto L_00159494; }
    set32(c.r[5], c.r[5].w[0] - 32u);
    c.budget -= 1;
L_00159490:
    set32(c.r[12], c.r[12].w[0] << (c.r[5].w[0] & 31u));
    c.budget -= 1;
L_00159494:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 5));  if (t) { goto L_001594A4; } }
    set32(c.r[5], c.r[4].w[0] + 31u);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 5));
    c.budget -= 2;
L_001594A4:
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0] + 3360u)));
    c.r[5].d[0] = c.r[5].d[0] & c.r[12].d[0];
    c.budget -= 6;
    if (c.r[5].d[0] == 0ull) { set32(c.r[11], c.r[11].w[0] + 1u);  goto L_001594C4; }
    set32(c.r[13], 0u + 1u);
    set32(c.r[11], c.r[11].w[0] + 1u);
    c.budget -= 2;
L_001594C4:
    c.r[5].d[0] = c.r[11].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00159434u | kUnwind; return; } goto L_00159434; } }
L_001594D0:
    c.budget -= 2;
    { const bool t = c.r[13].d[0] != 0ull;  if (t) { goto L_00159920; } }
    st8((c.r[3].w[0] + 3704u), static_cast<std::uint8_t>(0u));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2070u)));
    set32(c.r[11], 0u + 119u);
    set32(c.r[5], 0u + 128u);
    if (c.r[6].d[0] != 0) c.r[11].d[0] = c.r[5].d[0];
    c.r[1].d[0] = 0ll < c.r[11].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (t) { goto L_001598A8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[15], c.r[5].w[0] - 24320u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[24], c.r[5].w[0] - 21216u);
    mmi::paddub(c.r[25], c.r[3], c.r[0]);
    c.budget -= 5;
L_0015950C:
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    mmi::paddub(c.r[8], c.r[0], c.r[0]);
    mmi::paddub(c.r[31], c.r[0], c.r[0]);
    mmi::paddub(c.r[12], c.r[15], c.r[0]);
    mmi::paddub(c.r[13], c.r[24], c.r[0]);
    mmi::paddub(c.r[14], c.r[3], c.r[0]);
    c.budget -= 7;
L_00159528:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2070u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_00159540; } }
    c.r[10].d[0] = ld16((c.r[12].w[0] + 2u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[9].d[0] = ld16((c.r[12].w[0]));  if (t) { goto L_00159550; } }
L_00159540:
    c.r[9].d[0] = ld16((c.r[13].w[0]));
    c.r[10].d[0] = ld16((c.r[13].w[0] + 2u));
    c.budget -= 4;
L_00159550:
    c.budget -= 2;
    { const bool t = c.r[9].sd[0] >= 0; set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 5));  if (t) { goto L_00159560; } }
    set32(c.r[7], c.r[9].w[0] + 31u);
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 5));
    c.budget -= 2;
L_00159560:
    set32(c.r[16], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[9].sd[0] >= 0; c.r[17].d[0] = c.r[9].d[0] & 31ull;  if (t) { goto L_00159578; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[1].d[0] = c.r[31].d[0] < static_cast<std::uint64_t>(13ll) ? 1ull : 0ull;  if (t) { goto L_0015957C; } }
    set32(c.r[17], c.r[17].w[0] - 32u);
    c.budget -= 1;
L_00159578:
    c.r[1].d[0] = c.r[31].d[0] < static_cast<std::uint64_t>(13ll) ? 1ull : 0ull;
    c.budget -= 1;
L_0015957C:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[16], c.r[16].w[0] << (c.r[17].w[0] & 31u));  if (t) { goto L_00159810; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[18], c.r[17].w[0] + 21040u);
    set32(c.r[17], c.r[31].w[0] << 2);
    set32(c.r[17], c.r[17].w[0] + c.r[18].w[0]);
    set32(c.r[17], ld32((c.r[17].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[17].w[0];  c.pc = t; if (t - 0x00158000u < 16384u) { entry = entries_0016[(t - 0x00158000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001595A0:
    c.r[7].d[0] = 0ull | 65535ull;
    c.budget -= 3;
    if (c.r[9].d[0] == c.r[7].d[0]) { set32(c.r[31], c.r[31].w[0] + 1u);  goto L_00159814; }
    c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 2066u)));
    c.r[7].d[0] = c.r[16].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[7].d[0] != 0ull) { set32(c.r[6], 0u + 1u);  goto L_001595D4; }
    c.r[1].d[0] = c.r[10].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001595D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_00159810; } }
L_001595D0:
    set32(c.r[6], 0u + 1u);
    c.budget -= 1;
L_001595D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00159810; } }
L_001595DC:
    c.r[7].d[0] = 0ull | 65535ull;
    c.budget -= 3;
    { const bool t = c.r[9].d[0] == c.r[7].d[0];  if (t) { goto L_00159810; } }
    c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 2064u)));
    c.r[7].d[0] = c.r[16].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[7].d[0] != 0ull) { set32(c.r[6], 0u + 1u);  goto L_00159610; }
    c.r[1].d[0] = c.r[10].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0015960C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_00159810; } }
L_0015960C:
    set32(c.r[6], 0u + 1u);
    c.budget -= 1;
L_00159610:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00159810; } }
L_00159618:
    c.r[7].d[0] = 0ull | 65535ull;
    c.budget -= 3;
    { const bool t = c.r[9].d[0] == c.r[7].d[0];  if (t) { goto L_00159810; } }
    set32(c.r[7], c.r[9].w[0] << 3);
    set32(c.r[7], c.r[3].w[0] + c.r[7].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 2112u)));
    c.budget -= 5;
    if (c.r[7].d[0] == 0ull) { set32(c.r[6], 0u + 1u);  goto L_00159644; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_00159810; } }
    set32(c.r[6], 0u + 1u);
    c.budget -= 1;
L_00159644:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00159810; } }
L_0015964C:
    c.r[10].d[0] = 0ull | 65535ull;
    c.budget -= 3;
    { const bool t = c.r[9].d[0] == c.r[10].d[0];  if (t) { goto L_00159810; } }
    set32(c.r[9], c.r[9].w[0] << 3);
    set32(c.r[9], c.r[3].w[0] + c.r[9].w[0]);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 2112u)));
    c.budget -= 5;
    if (c.r[9].d[0] != 0ull) { set32(c.r[6], 0u + 1u);  goto L_00159690; }
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[7].w[0] + 3328u)));
    c.r[7].d[0] = c.r[7].d[0] & c.r[16].d[0];
    c.budget -= 6;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_0015968C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_00159810; } }
L_0015968C:
    set32(c.r[6], 0u + 1u);
    c.budget -= 1;
L_00159690:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00159810; } }
L_00159698:
    c.r[10].d[0] = 0ull | 65535ull;
    c.budget -= 3;
    { const bool t = c.r[9].d[0] == c.r[10].d[0];  if (t) { goto L_00159810; } }
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[7].w[0] + 3328u)));
    c.r[7].d[0] = c.r[7].d[0] & c.r[16].d[0];
    c.budget -= 6;
    if (c.r[7].d[0] == 0ull) { set32(c.r[6], 0u + 1u);  goto L_001596C8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_00159810; } }
    set32(c.r[6], 0u + 1u);
    c.budget -= 1;
L_001596C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00159810; } }
L_001596D0:
    c.r[10].d[0] = 0ull | 65535ull;
    c.budget -= 3;
    { const bool t = c.r[9].d[0] == c.r[10].d[0];  if (t) { goto L_00159810; } }
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[7].w[0] + 3360u)));
    c.r[7].d[0] = c.r[7].d[0] & c.r[16].d[0];
    c.budget -= 6;
    if (c.r[7].d[0] == 0ull) { set32(c.r[6], 0u + 1u);  goto L_00159700; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_00159810; } }
    set32(c.r[6], 0u + 1u);
    c.budget -= 1;
L_00159700:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00159810; } }
L_00159708:
    c.r[7].d[0] = 0ull | 65535ull;
    c.budget -= 3;
    { const bool t = c.r[9].d[0] == c.r[7].d[0];  if (t) { goto L_00159810; } }
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2111u)));
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[10], c.r[0], c.r[0]);  if (t) { goto L_00159740; } }
L_00159724:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[14].w[0])));
    c.budget -= 3;
    if (c.r[9].d[0] != c.r[7].d[0]) { set32(c.r[10], c.r[10].w[0] + 1u);  goto L_0015973C; }
    set32(c.r[16], 0u + 1u);
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.budget -= 3;
L_0015973C:
    c.budget -= 1;
L_00159740:
    c.r[7].d[0] = c.r[10].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00159724u | kUnwind; return; } goto L_00159724; } }
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[6], 0u + 1u);  goto L_00159760; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_00159810; } }
    set32(c.r[6], 0u + 1u);
    c.budget -= 1;
L_00159760:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00159810; } }
L_00159768:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00159778; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; c.r[7].d[0] = 0ull | 65535ull;  if (t) { goto L_0015978C; } }
L_00159778:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[25].w[0] + 2118u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_00159810; } }
    c.r[7].d[0] = 0ull | 65535ull;
    c.budget -= 2;
L_0015978C:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] == c.r[7].d[0];  if (t) { goto L_00159810; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[25].w[0] + 2118u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[25].w[0] + 2118u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[25].w[0] + 2118u)));
    c.r[5].d[0] = c.r[5].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[6], 0u + 1u);  if (t) { goto L_001597C4; } }
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[8], c.r[0], c.r[0]);  if (t) { goto L_00159810; } }
    set32(c.r[6], 0u + 1u);
    c.budget -= 1;
L_001597C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (t) { goto L_00159810; } }
L_001597CC:
    set32(c.r[7], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[9].d[0] != c.r[7].d[0];  if (t) { goto L_001597E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 1u);  if (t) { goto L_00159810; } }
L_001597E0:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3544u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != 0ull; c.r[7].d[0] = c.r[9].d[0] & 2ull;  if (t) { goto L_00159804; } }
    c.r[7].d[0] = c.r[9].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_00159810; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 1u);  if (t) { goto L_00159810; } }
    c.r[7].d[0] = c.r[9].d[0] & 2ull;
    c.budget -= 1;
L_00159804:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_00159810; } }
    set32(c.r[6], 0u + 1u);
    c.budget -= 1;
L_00159810:
    set32(c.r[31], c.r[31].w[0] + 1u);
    c.budget -= 1;
L_00159814:
    c.r[7].d[0] = c.r[31].sd[0] < 14ll ? 1ull : 0ull;
    set32(c.r[12], c.r[12].w[0] + 2u);
    set32(c.r[13], c.r[13].w[0] + 2u);
    c.budget -= 5;
    { const bool t = c.r[7].d[0] != 0ull; set32(c.r[14], c.r[14].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00159528u | kUnwind; return; } goto L_00159528; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[4], c.r[4].w[0] + 1u);  goto L_00159894; }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_00159890; } }
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] >= 0; c.r[5].d[0] = c.r[4].d[0] & 31ull;  if (t) { goto L_00159850; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[6], c.r[6].w[0] << (c.r[5].w[0] & 31u));  goto L_00159854; }
    set32(c.r[5], c.r[5].w[0] - 32u);
    c.budget -= 1;
L_00159850:
    set32(c.r[6], c.r[6].w[0] << (c.r[5].w[0] & 31u));
    c.budget -= 1;
L_00159854:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 5));  if (t) { goto L_00159864; } }
    set32(c.r[5], c.r[4].w[0] + 31u);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 5));
    c.budget -= 2;
L_00159864:
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[7], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[7].w[0] + 3360u)));
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    c.budget -= 6;
    { const bool t = c.r[8].d[0] == 0ull; st32((c.r[7].w[0] + 3360u), c.r[5].w[0]);  if (t) { goto L_00159890; } }
    set32(c.r[5], ld32((c.r[7].w[0] + 3376u)));
    c.r[6].d[0] = ~(c.r[6].d[0] | 0ull);
    c.r[5].d[0] = c.r[5].d[0] & c.r[6].d[0];
    st32((c.r[7].w[0] + 3376u), c.r[5].w[0]);
    c.budget -= 5;
L_00159890:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_00159894:
    set32(c.r[15], c.r[15].w[0] + 26u);
    set32(c.r[24], c.r[24].w[0] + 26u);
    c.r[5].d[0] = c.r[4].sd[0] < c.r[11].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[25], c.r[25].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015950Cu | kUnwind; return; } goto L_0015950C; } }
L_001598A8:
    c.r[1].d[0] = 0ll < c.r[11].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (t) { goto L_00159920; } }
    set32(c.r[5], 0u + 1u);
    set32(c.r[8], 0u + 1u);
    c.budget -= 2;
L_001598BC:
    c.budget -= 2;
    { const bool t = c.r[7].sd[0] >= 0; c.r[4].d[0] = c.r[7].d[0] & 31ull;  if (t) { goto L_001598D0; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[8], c.r[8].w[0] << (c.r[4].w[0] & 31u));  goto L_001598D4; }
    set32(c.r[4], c.r[4].w[0] - 32u);
    c.budget -= 1;
L_001598D0:
    set32(c.r[8], c.r[8].w[0] << (c.r[4].w[0] & 31u));
    c.budget -= 1;
L_001598D4:
    c.budget -= 2;
    { const bool t = c.r[7].sd[0] >= 0; set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 5));  if (t) { goto L_001598E4; } }
    set32(c.r[4], c.r[7].w[0] + 31u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 5));
    c.budget -= 2;
L_001598E4:
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[6], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[6].w[0] + 3360u)));
    c.r[4].d[0] = c.r[4].d[0] & c.r[8].d[0];
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_00159914; }
    set32(c.r[4], ld32((c.r[6].w[0] + 3376u)));
    c.r[4].d[0] = c.r[4].d[0] & c.r[8].d[0];
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00159910; } }
    st8((c.r[3].w[0] + 3704u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 1;
L_00159910:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_00159914:
    c.r[4].d[0] = c.r[7].sd[0] < c.r[11].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[8], 0u + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001598BCu | kUnwind; return; } goto L_001598BC; } }
L_00159920:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00159940:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159950u);  if (depth < kMaxDepth) unit_0080(c, 308u, depth + 1u); else { c.pc = 0x00303FA0u; return; } if (c.pc != 0x00159950u) [[unlikely]] return; }
L_00159950:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159958u);  if (depth < kMaxDepth) unit_0081(c, 5u, depth + 1u); else { c.pc = 0x003040D0u; return; } if (c.pc != 0x00159958u) [[unlikely]] return; }
L_00159958:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159960u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0080(c, 287u, depth + 1u); else { c.pc = 0x00303B80u; return; } if (c.pc != 0x00159960u) [[unlikely]] return; }
L_00159960:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159968u); set32(c.r[4], 0u + 5u);  if (depth < kMaxDepth) unit_0080(c, 287u, depth + 1u); else { c.pc = 0x00303B80u; return; } if (c.pc != 0x00159968u) [[unlikely]] return; }
L_00159968:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159970u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0080(c, 295u, depth + 1u); else { c.pc = 0x00303D30u; return; } if (c.pc != 0x00159970u) [[unlikely]] return; }
L_00159970:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159978u); set32(c.r[4], 0u + 5u);  if (depth < kMaxDepth) unit_0080(c, 295u, depth + 1u); else { c.pc = 0x00303D30u; return; } if (c.pc != 0x00159978u) [[unlikely]] return; }
L_00159978:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00159990:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00300000u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001599A4u); set32(c.r[4], c.r[2].w[0] + 15904u);  if (depth < kMaxDepth) unit_0081(c, 121u, depth + 1u); else { c.pc = 0x00305ED0u; return; } if (c.pc != 0x001599A4u) [[unlikely]] return; }
L_001599A4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00300000u);
    set32(c.r[4], c.r[2].w[0] + 16016u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001599B4u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 122u, depth + 1u); else { c.pc = 0x00305F10u; return; } if (c.pc != 0x001599B4u) [[unlikely]] return; }
L_001599B4:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001599C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[6], ld32((c.r[1].w[0] + 29540u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[7], c.r[3].w[0] + 25952u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[4], 0u + 127u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[5], ld32((c.r[1].w[0] + 29544u)));
    set32(c.r[11], c.r[6].w[0] - 6u);
    set32(c.r[13], c.r[3].w[0] + 17232u);
    mmi::paddub(c.r[8], c.r[0], c.r[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[12], c.r[5].w[0] + 3u);
    st8((c.r[1].w[0] + 29591u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[6], 0u + 20u);
    set32(c.r[5], 0u + 10u);
    c.budget -= 16;
L_00159A00:
    set32(c.r[4], c.r[8].w[0] - 12u);
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00159A18; } }
    mmi::paddub(c.r[3], c.r[0], c.r[0]);
    c.budget -= 2;
L_00159A18:
    set32(c.r[9], 0u + 55u);
    if (c.r[3].d[0] == 0) c.r[9].d[0] = c.r[6].d[0];
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00159A30; } }
    mmi::paddub(c.r[3], c.r[0], c.r[0]);
    c.budget -= 1;
L_00159A30:
    set32(c.r[10], 0u + 12u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 2071u)));
    if (c.r[3].d[0] == 0) c.r[10].d[0] = c.r[5].d[0];
    c.r[3].d[0] = ld16((c.r[13].w[0]));
    c.budget -= 6;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[8], c.r[8].w[0] + 1u);  goto L_00159A9C; }
    c.r[4].d[0] = ld16((c.r[13].w[0] + 2u));
    set32(c.r[3], c.r[4].w[0] - c.r[9].w[0]);
    c.r[3].d[0] = c.r[11].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00159A98; } }
    set32(c.r[3], c.r[9].w[0] + c.r[4].w[0]);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[11].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00159A98; } }
    c.r[4].d[0] = ld16((c.r[13].w[0] + 4u));
    set32(c.r[3], c.r[4].w[0] - c.r[10].w[0]);
    c.r[3].d[0] = c.r[12].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00159A98; } }
    set32(c.r[3], c.r[10].w[0] + c.r[4].w[0]);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[12].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00159A98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[7].w[0] + 3639u), static_cast<std::uint8_t>(c.r[8].w[0]));  if (t) { goto L_00159AA8; } }
L_00159A98:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_00159A9C:
    c.r[3].d[0] = c.r[8].sd[0] < 25ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[13], c.r[13].w[0] + 14u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00159A00u | kUnwind; return; } goto L_00159A00; } }
L_00159AA8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00159AB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[2], c.r[2].w[0] + 25952u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    st8((c.r[1].w[0] + 28059u), static_cast<std::uint8_t>(0u));
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    mmi::paddub(c.r[3], c.r[0], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    mmi::paddub(c.r[6], c.r[2], c.r[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[10], c.r[7].w[0] + 17584u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[9], c.r[7].w[0] + 18016u);
    set32(c.r[8], 0u + 255u);
    c.budget -= 15;
L_00159AEC:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2070u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_00159B10; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 3639u)));
    set32(c.r[7], c.r[7].w[0] << 4);
    set32(c.r[7], c.r[10].w[0] + c.r[7].w[0]);
    set32(c.r[7], c.r[5].w[0] + c.r[7].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[11].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0])));  if (t) { goto L_00159B28; } }
L_00159B10:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 3639u)));
    set32(c.r[7], c.r[7].w[0] << 4);
    set32(c.r[7], c.r[9].w[0] + c.r[7].w[0]);
    set32(c.r[7], c.r[5].w[0] + c.r[7].w[0]);
    c.r[11].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0])));
    c.budget -= 6;
L_00159B28:
    c.budget -= 2;
    if (c.r[11].d[0] == c.r[8].d[0]) { set32(c.r[3], c.r[3].w[0] + 1u);  goto L_00159B8C; }
    set32(c.r[7], c.r[11].w[0] >> 5);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[13], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[13].w[0] + 3312u)));
    set32(c.r[12], 0u + 1u);
    set32(c.r[12], c.r[12].w[0] << (c.r[11].w[0] & 31u));
    c.r[7].d[0] = c.r[7].d[0] & c.r[12].d[0];
    c.budget -= 9;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_00159B88; } }
    set32(c.r[7], ld32((c.r[13].w[0] + 3328u)));
    c.r[7].d[0] = c.r[7].d[0] & c.r[12].d[0];
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_00159B88; } }
    st16((c.r[6].w[0] + 3608u), static_cast<std::uint16_t>(c.r[11].w[0]));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2107u)));
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull; st8((c.r[2].w[0] + 2107u), static_cast<std::uint8_t>(c.r[7].w[0]));  if (t) { goto L_00159B80; } }
    st16((c.r[2].w[0] + 2068u), static_cast<std::uint16_t>(c.r[11].w[0]));
    c.budget -= 2;
L_00159B80:
    set32(c.r[6], c.r[6].w[0] + 2u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 2;
L_00159B88:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_00159B8C:
    c.r[7].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00159AECu | kUnwind; return; } goto L_00159AEC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159BA0u);  if (depth < kMaxDepth) unit_0016(c, 109u, depth + 1u); else { c.pc = 0x0015A730u; return; } if (c.pc != 0x00159BA0u) [[unlikely]] return; }
L_00159BA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159BA8u);  if (depth < kMaxDepth) unit_001F(c, 23u, depth + 1u); else { c.pc = 0x0017C2C0u; return; } if (c.pc != 0x00159BA8u) [[unlikely]] return; }
L_00159BA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159BB0u);  if (depth < kMaxDepth) unit_001F(c, 30u, depth + 1u); else { c.pc = 0x0017C3E0u; return; } if (c.pc != 0x00159BB0u) [[unlikely]] return; }
L_00159BB0:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 256u)));
    st16((c.r[28].w[0] - 26796u), static_cast<std::uint16_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00159BD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    st16((c.r[4].w[0] + 2066u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 2064u), static_cast<std::uint16_t>(0u));
    set32(c.r[5], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2070u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 6u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st8((c.r[2].w[0] + 260u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2070u)));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00159C14; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159C0Cu); set32(c.r[4], c.r[2].w[0] + 25952u);  if (depth < kMaxDepth) unit_0016(c, 95u, depth + 1u); else { c.pc = 0x00159C30u; return; } if (c.pc != 0x00159C0Cu) [[unlikely]] return; }
L_00159C0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_00159C24; } }
L_00159C14:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159C20u); set32(c.r[4], c.r[2].w[0] + 25952u);  if (depth < kMaxDepth) unit_0016(c, 101u, depth + 1u); else { c.pc = 0x0015A110u; return; } if (c.pc != 0x00159C20u) [[unlikely]] return; }
L_00159C20:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_00159C24:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00159C30:
    set32(c.r[3], 0u + 7u);
    st8((c.r[4].w[0] + 2071u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 2106u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00159C3C:
    st16((c.r[4].w[0] + 3536u), static_cast<std::uint16_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3544u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 3u);  if (t) { goto L_00159EA4; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 2072u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 2073u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 2074u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 2075u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 2076u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 2077u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    st32((c.r[4].w[0] + 3520u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 3528u), c.r[3].w[0]);
    set32(c.r[3], 0u + 2047u);
    st32((c.r[4].w[0] + 3524u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 3532u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[3], c.r[3].w[0] - 14688u);
    st8((c.r[4].w[0] + 2111u), static_cast<std::uint8_t>(0u));
    c.budget -= 19;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (t) { goto L_00159E80; } }
    set32(c.r[8], 0u + 4u);
    c.budget -= 1;
L_00159C9C:
    mmi::paddub(c.r[10], c.r[3], c.r[0]);
    mmi::paddub(c.r[9], c.r[5], c.r[0]);
    c.budget -= 3;
L_00159CA8:
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[10].w[0])));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[10].w[0] + 2u)));
    set32(c.r[8], c.r[8].w[0] - 1u);
    st16((c.r[9].w[0]), static_cast<std::uint16_t>(c.r[7].w[0]));
    st16((c.r[9].w[0] + 2u), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[10], c.r[10].w[0] + 4u);
    c.budget -= 8;
    { const bool t = c.r[8].sd[0] > 0; set32(c.r[9], c.r[9].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00159CA8u | kUnwind; return; } goto L_00159CA8; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[7], c.r[6].w[0] - 15024u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2070u)));
    set32(c.r[8], c.r[8].w[0] << 3);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3536u)));
    st8((c.r[5].w[0] + 14u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 3536u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    st16((c.r[4].w[0] + 3536u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.r[1].d[0] = c.r[7].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 19;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[6], c.r[7].w[0] << 2);  if (t) { goto L_00159D78; } }
    set32(c.r[6], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 3u)));
    set32(c.r[7], c.r[6].w[0] << 2);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[6], c.r[6].w[0] - 25728u);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[6], c.r[8].w[0] + c.r[6].w[0]);
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    st16((c.r[5].w[0] + 10u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[7], c.r[6].w[0] - 25728u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 3u)));
    set32(c.r[8], c.r[9].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    c.budget -= 24;
    { const bool t = 0ull == 0ull; st16((c.r[5].w[0] + 12u), static_cast<std::uint16_t>(c.r[6].w[0]));  if (t) { goto L_00159DD0; } }
    set32(c.r[6], c.r[7].w[0] << 2);
    c.budget -= 1;
L_00159D78:
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 3u)));
    set32(c.r[7], c.r[6].w[0] << 2);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[6], c.r[6].w[0] - 25296u);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[6], c.r[8].w[0] + c.r[6].w[0]);
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] - 640u)));
    st16((c.r[5].w[0] + 10u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[7], c.r[6].w[0] - 25296u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 3u)));
    set32(c.r[8], c.r[9].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] - 640u)));
    st16((c.r[5].w[0] + 12u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.budget -= 22;
L_00159DD0:
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 12u)));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 10u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3544u)));
    set32(c.r[8], c.r[9].w[0] << 2);
    set32(c.r[9], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[8], c.r[9].w[0] << 2);
    set32(c.r[8], c.r[9].w[0] + c.r[8].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    mmi::div(c, 0, c.r[8].w[0], c.r[7].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    c.r[8].d[0] = c.r[7].d[0] << 48;
    c.budget -= 15;
    { const bool t = c.r[6].d[0] != 0ull; c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 48);  if (t) { goto L_00159E28; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[6], c.r[6].w[0] - 15024u);
    set32(c.r[7], c.r[7].w[0] << 3);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 4u)));  if (t) { goto L_00159E44; } }
L_00159E28:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[6], c.r[6].w[0] - 15024u);
    set32(c.r[7], c.r[7].w[0] << 3);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 6u)));
    c.budget -= 7;
L_00159E44:
    c.r[6].d[0] = c.r[6].d[0] << 48;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.r[6].d[0] = c.r[8].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[6], 0u + 1u);  if (t) { goto L_00159E64; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (t) { goto L_00159E64; } }
    set32(c.r[6], 0u + 1u);
    c.budget -= 1;
L_00159E64:
    st8((c.r[5].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2111u)));
    set32(c.r[3], c.r[3].w[0] + 16u);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 2111u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 7;
L_00159E80:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[6], 0u + 127u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != c.r[6].d[0]; set32(c.r[8], 0u + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00159C9Cu | kUnwind; return; } goto L_00159C9C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2111u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 2111u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0015A104; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 1;
L_00159EA4:
    st8((c.r[4].w[0] + 2072u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 5u);
    st8((c.r[4].w[0] + 2073u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], 0u + 2u);
    st8((c.r[4].w[0] + 2074u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], 0u + 4u);
    st8((c.r[4].w[0] + 2075u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 2076u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    st8((c.r[4].w[0] + 2077u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    st32((c.r[4].w[0] + 3520u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 3528u), c.r[3].w[0]);
    set32(c.r[3], 0u + 2047u);
    st32((c.r[4].w[0] + 3524u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 3532u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[3], c.r[3].w[0] - 14560u);
    st8((c.r[4].w[0] + 2111u), static_cast<std::uint8_t>(0u));
    c.budget -= 21;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (t) { goto L_0015A0E8; } }
    set32(c.r[8], 0u + 4u);
    c.budget -= 1;
L_00159EFC:
    mmi::paddub(c.r[10], c.r[3], c.r[0]);
    mmi::paddub(c.r[9], c.r[5], c.r[0]);
    c.budget -= 3;
L_00159F08:
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[10].w[0])));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[10].w[0] + 2u)));
    set32(c.r[8], c.r[8].w[0] - 1u);
    st16((c.r[9].w[0]), static_cast<std::uint16_t>(c.r[7].w[0]));
    st16((c.r[9].w[0] + 2u), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[10], c.r[10].w[0] + 4u);
    c.budget -= 8;
    { const bool t = c.r[8].sd[0] > 0; set32(c.r[9], c.r[9].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00159F08u | kUnwind; return; } goto L_00159F08; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[7], c.r[6].w[0] - 15024u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2070u)));
    set32(c.r[8], c.r[8].w[0] << 3);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3536u)));
    st8((c.r[5].w[0] + 14u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 3536u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    st16((c.r[4].w[0] + 3536u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.r[1].d[0] = c.r[7].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 19;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[6], c.r[7].w[0] << 2);  if (t) { goto L_00159FD8; } }
    set32(c.r[6], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 3u)));
    set32(c.r[7], c.r[6].w[0] << 2);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[6], c.r[6].w[0] - 25728u);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[6], c.r[8].w[0] + c.r[6].w[0]);
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    st16((c.r[5].w[0] + 10u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[7], c.r[6].w[0] - 25728u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 3u)));
    set32(c.r[8], c.r[9].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    c.budget -= 24;
    { const bool t = 0ull == 0ull; st16((c.r[5].w[0] + 12u), static_cast<std::uint16_t>(c.r[6].w[0]));  if (t) { goto L_0015A030; } }
    set32(c.r[6], c.r[7].w[0] << 2);
    c.budget -= 1;
L_00159FD8:
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 3u)));
    set32(c.r[7], c.r[6].w[0] << 2);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[6], c.r[6].w[0] - 25296u);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[6], c.r[8].w[0] + c.r[6].w[0]);
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] - 640u)));
    st16((c.r[5].w[0] + 10u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[7], c.r[6].w[0] - 25296u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 3u)));
    set32(c.r[8], c.r[9].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] - 640u)));
    st16((c.r[5].w[0] + 12u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.budget -= 22;
L_0015A030:
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 12u)));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 10u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3544u)));
    set32(c.r[8], c.r[9].w[0] << 2);
    set32(c.r[9], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[8], c.r[9].w[0] << 2);
    set32(c.r[8], c.r[9].w[0] + c.r[8].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    mmi::div(c, 0, c.r[8].w[0], c.r[7].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    c.r[8].d[0] = c.r[7].d[0] << 48;
    c.budget -= 15;
    { const bool t = c.r[6].d[0] != 0ull; c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 48);  if (t) { goto L_0015A088; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[6], c.r[6].w[0] - 15024u);
    set32(c.r[7], c.r[7].w[0] << 3);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 4u)));  if (t) { goto L_0015A0A8; } }
L_0015A088:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[6], c.r[6].w[0] - 15024u);
    set32(c.r[7], c.r[7].w[0] << 3);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 6u)));
    c.budget -= 8;
L_0015A0A8:
    c.r[7].d[0] = c.r[8].d[0] << 48;
    c.r[6].d[0] = c.r[6].d[0] << 48;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.r[6].d[0] = c.r[7].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[6], 0u + 1u);  if (t) { goto L_0015A0D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (t) { goto L_0015A0D0; } }
    set32(c.r[6], 0u + 1u);
    c.budget -= 1;
L_0015A0D0:
    st8((c.r[5].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2111u)));
    set32(c.r[3], c.r[3].w[0] + 16u);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 2111u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 6;
L_0015A0E8:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[6], 0u + 127u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != c.r[6].d[0]; set32(c.r[8], 0u + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00159EFCu | kUnwind; return; } goto L_00159EFC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2111u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[4].w[0] + 2111u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0015A104:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0015A110:
    set32(c.r[5], 0u + 4u);
    st8((c.r[4].w[0] + 2071u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 2106u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st16((c.r[4].w[0] + 3538u), static_cast<std::uint16_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3544u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 3u);  if (t) { goto L_0015A384; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 2072u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 2073u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 2074u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 2075u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 2076u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 2077u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65534ull;
    st32((c.r[4].w[0] + 3520u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 3528u), c.r[3].w[0]);
    set32(c.r[3], 0u + 32767u);
    st32((c.r[4].w[0] + 3524u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 3532u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[3], c.r[3].w[0] - 14624u);
    st8((c.r[4].w[0] + 2111u), static_cast<std::uint8_t>(0u));
    c.budget -= 19;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (t) { goto L_0015A360; } }
    set32(c.r[8], 0u + 4u);
    c.budget -= 1;
L_0015A17C:
    mmi::paddub(c.r[10], c.r[3], c.r[0]);
    mmi::paddub(c.r[9], c.r[5], c.r[0]);
    c.budget -= 3;
L_0015A188:
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[10].w[0])));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[10].w[0] + 2u)));
    set32(c.r[8], c.r[8].w[0] - 1u);
    st16((c.r[9].w[0]), static_cast<std::uint16_t>(c.r[7].w[0]));
    st16((c.r[9].w[0] + 2u), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[10], c.r[10].w[0] + 4u);
    c.budget -= 8;
    { const bool t = c.r[8].sd[0] > 0; set32(c.r[9], c.r[9].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015A188u | kUnwind; return; } goto L_0015A188; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[7], c.r[6].w[0] - 15024u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2070u)));
    set32(c.r[8], c.r[8].w[0] << 3);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3538u)));
    st8((c.r[5].w[0] + 14u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 3538u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    st16((c.r[4].w[0] + 3538u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.r[1].d[0] = c.r[7].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 19;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[6], c.r[7].w[0] << 2);  if (t) { goto L_0015A258; } }
    set32(c.r[6], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 3u)));
    set32(c.r[7], c.r[6].w[0] << 2);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[6], c.r[6].w[0] - 25728u);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[6], c.r[8].w[0] + c.r[6].w[0]);
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    st16((c.r[5].w[0] + 10u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[7], c.r[6].w[0] - 25728u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 3u)));
    set32(c.r[8], c.r[9].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    c.budget -= 24;
    { const bool t = 0ull == 0ull; st16((c.r[5].w[0] + 12u), static_cast<std::uint16_t>(c.r[6].w[0]));  if (t) { goto L_0015A2B0; } }
    set32(c.r[6], c.r[7].w[0] << 2);
    c.budget -= 1;
L_0015A258:
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 3u)));
    set32(c.r[7], c.r[6].w[0] << 2);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[6], c.r[6].w[0] - 25296u);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[6], c.r[8].w[0] + c.r[6].w[0]);
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] - 640u)));
    st16((c.r[5].w[0] + 10u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[7], c.r[6].w[0] - 25296u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 3u)));
    set32(c.r[8], c.r[9].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] - 640u)));
    st16((c.r[5].w[0] + 12u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.budget -= 22;
L_0015A2B0:
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 12u)));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 10u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3544u)));
    set32(c.r[8], c.r[9].w[0] << 2);
    set32(c.r[9], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[8], c.r[9].w[0] << 2);
    set32(c.r[8], c.r[9].w[0] + c.r[8].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    mmi::div(c, 0, c.r[8].w[0], c.r[7].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    c.r[8].d[0] = c.r[7].d[0] << 48;
    c.budget -= 15;
    { const bool t = c.r[6].d[0] != 0ull; c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 48);  if (t) { goto L_0015A308; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[6], c.r[6].w[0] - 15024u);
    set32(c.r[7], c.r[7].w[0] << 3);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 4u)));  if (t) { goto L_0015A324; } }
L_0015A308:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[6], c.r[6].w[0] - 15024u);
    set32(c.r[7], c.r[7].w[0] << 3);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 6u)));
    c.budget -= 7;
L_0015A324:
    c.r[6].d[0] = c.r[6].d[0] << 48;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.r[6].d[0] = c.r[8].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[6], 0u + 1u);  if (t) { goto L_0015A344; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (t) { goto L_0015A344; } }
    set32(c.r[6], 0u + 1u);
    c.budget -= 1;
L_0015A344:
    st8((c.r[5].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2111u)));
    set32(c.r[3], c.r[3].w[0] + 16u);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 2111u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 7;
L_0015A360:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[6], 0u + 127u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != c.r[6].d[0]; set32(c.r[8], 0u + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015A17Cu | kUnwind; return; } goto L_0015A17C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2111u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 2111u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0015A5DC; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 1;
L_0015A384:
    st8((c.r[4].w[0] + 2072u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 5u);
    st8((c.r[4].w[0] + 2073u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 2u);
    st8((c.r[4].w[0] + 2074u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 2075u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 2076u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 2077u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65534ull;
    st32((c.r[4].w[0] + 3520u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 3528u), c.r[3].w[0]);
    set32(c.r[3], 0u + 32767u);
    st32((c.r[4].w[0] + 3524u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 3532u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[3], c.r[3].w[0] - 14080u);
    st8((c.r[4].w[0] + 2111u), static_cast<std::uint8_t>(0u));
    c.budget -= 20;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (t) { goto L_0015A5C0; } }
    set32(c.r[8], 0u + 4u);
    c.budget -= 1;
L_0015A3D8:
    mmi::paddub(c.r[10], c.r[3], c.r[0]);
    mmi::paddub(c.r[9], c.r[5], c.r[0]);
    c.budget -= 2;
L_0015A3E0:
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[10].w[0])));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[10].w[0] + 2u)));
    set32(c.r[8], c.r[8].w[0] - 1u);
    st16((c.r[9].w[0]), static_cast<std::uint16_t>(c.r[7].w[0]));
    st16((c.r[9].w[0] + 2u), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[10], c.r[10].w[0] + 4u);
    c.budget -= 8;
    { const bool t = c.r[8].sd[0] > 0; set32(c.r[9], c.r[9].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015A3E0u | kUnwind; return; } goto L_0015A3E0; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[7], c.r[6].w[0] - 15024u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2070u)));
    set32(c.r[8], c.r[8].w[0] << 3);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3538u)));
    st8((c.r[5].w[0] + 14u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 3538u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    st16((c.r[4].w[0] + 3538u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.r[1].d[0] = c.r[7].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 19;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[6], c.r[7].w[0] << 2);  if (t) { goto L_0015A4B0; } }
    set32(c.r[6], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 3u)));
    set32(c.r[7], c.r[6].w[0] << 2);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[6], c.r[6].w[0] - 25728u);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[6], c.r[8].w[0] + c.r[6].w[0]);
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    st16((c.r[5].w[0] + 10u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[7], c.r[6].w[0] - 25728u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 3u)));
    set32(c.r[8], c.r[9].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    c.budget -= 24;
    { const bool t = 0ull == 0ull; st16((c.r[5].w[0] + 12u), static_cast<std::uint16_t>(c.r[6].w[0]));  if (t) { goto L_0015A508; } }
    set32(c.r[6], c.r[7].w[0] << 2);
    c.budget -= 1;
L_0015A4B0:
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 3u)));
    set32(c.r[7], c.r[6].w[0] << 2);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[6], c.r[6].w[0] - 25296u);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[6], c.r[8].w[0] + c.r[6].w[0]);
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] - 640u)));
    st16((c.r[5].w[0] + 10u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[7], c.r[6].w[0] - 25296u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 3u)));
    set32(c.r[8], c.r[9].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] - 640u)));
    st16((c.r[5].w[0] + 12u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.budget -= 22;
L_0015A508:
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 12u)));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 10u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3544u)));
    set32(c.r[8], c.r[9].w[0] << 2);
    set32(c.r[9], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[8], c.r[9].w[0] << 2);
    set32(c.r[8], c.r[9].w[0] + c.r[8].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    mmi::div(c, 0, c.r[8].w[0], c.r[7].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    c.r[8].d[0] = c.r[7].d[0] << 48;
    c.budget -= 15;
    { const bool t = c.r[6].d[0] != 0ull; c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 48);  if (t) { goto L_0015A560; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[6], c.r[6].w[0] - 15024u);
    set32(c.r[7], c.r[7].w[0] << 3);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 4u)));  if (t) { goto L_0015A580; } }
L_0015A560:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[6], c.r[6].w[0] - 15024u);
    set32(c.r[7], c.r[7].w[0] << 3);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 6u)));
    c.budget -= 8;
L_0015A580:
    c.r[7].d[0] = c.r[8].d[0] << 48;
    c.r[6].d[0] = c.r[6].d[0] << 48;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.r[6].d[0] = c.r[7].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[6], 0u + 1u);  if (t) { goto L_0015A5A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (t) { goto L_0015A5A8; } }
    set32(c.r[6], 0u + 1u);
    c.budget -= 1;
L_0015A5A8:
    st8((c.r[5].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2111u)));
    set32(c.r[3], c.r[3].w[0] + 16u);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 2111u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 6;
L_0015A5C0:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[6], 0u + 127u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != c.r[6].d[0]; set32(c.r[8], 0u + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015A3D8u | kUnwind; return; } goto L_0015A3D8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2111u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[4].w[0] + 2111u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0015A5DC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0015A5F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[4], c.r[2].w[0] + 29600u);
    set32(c.r[6], 0u + 32u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A614u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x0015A614u) [[unlikely]] return; }
L_0015A614:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 3680u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[3], c.r[3].w[0] + 14016u);
    set32(c.r[6], c.r[16].w[0] + 3648u);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[7], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[5], 0u + 4u);
    c.budget -= 7;
L_0015A630:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0])));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 2u)));
    set32(c.r[5], c.r[5].w[0] - 1u);
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    st16((c.r[6].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[7], c.r[7].w[0] + 4u);
    c.budget -= 8;
    { const bool t = c.r[5].sd[0] > 0; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015A630u | kUnwind; return; } goto L_0015A630; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3648u)));
    c.r[1].d[0] = c.r[4].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[4].w[0] << 2);  if (t) { goto L_0015A6C4; } }
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3651u)));
    set32(c.r[4], c.r[3].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[3], c.r[3].w[0] - 25728u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    st16((c.r[16].w[0] + 3658u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3648u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[4], c.r[3].w[0] - 25728u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3651u)));
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.budget -= 24;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 3660u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0015A71C; } }
    set32(c.r[3], c.r[4].w[0] << 2);
    c.budget -= 1;
L_0015A6C4:
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3651u)));
    set32(c.r[4], c.r[3].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[3], c.r[3].w[0] - 25936u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    st16((c.r[16].w[0] + 3658u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3648u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[4], c.r[3].w[0] - 25936u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3651u)));
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    st16((c.r[16].w[0] + 3660u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 22;
L_0015A71C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0015A730:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 28022u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 25952u);  if (t) { goto L_0015A764; } }
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 2068u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[4], c.r[4].w[0] + 5680u);
    set32(c.r[5], c.r[6].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);  if (t) { goto L_0015A780; } }
L_0015A764:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 2068u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[4], c.r[4].w[0] + 9648u);
    set32(c.r[5], c.r[6].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.budget -= 7;
L_0015A780:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[6], ld32((c.r[28].w[0] - 26300u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[7].d[0] = c.r[5].d[0] | 3584ull;
    set32(c.r[9], 0u + 1u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st8((c.r[6].w[0] + 256u), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[10], ld32((c.r[28].w[0] - 26300u)));
    c.r[6].d[0] = c.r[5].d[0] | 61440ull;
    set32(c.r[5], 0u + 127u);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 256u)));
    set32(c.r[8], c.r[9].w[0] << (c.r[8].w[0] & 31u));
    c.r[7].d[0] = c.r[8].d[0] & c.r[7].d[0];
    c.r[7].d[0] = 0ull < c.r[7].d[0] ? 1ull : 0ull;
    st8((c.r[10].w[0] + 368u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[8], ld32((c.r[28].w[0] - 26300u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 256u)));
    set32(c.r[7], c.r[9].w[0] << (c.r[7].w[0] & 31u));
    c.r[6].d[0] = c.r[7].d[0] & c.r[6].d[0];
    c.r[6].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;
    st8((c.r[8].w[0] + 369u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 25u)));
    c.budget -= 24;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_0015A7E4; } }
    mmi::paddub(c.r[9], c.r[0], c.r[0]);
    c.budget -= 1;
L_0015A7E4:
    st8((c.r[3].w[0] + 3706u), static_cast<std::uint8_t>(c.r[9].w[0]));
    set32(c.r[8], ld32((c.r[28].w[0] - 26300u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[6], c.r[5].w[0] + 19424u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[5], c.r[5].w[0] + 19424u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 256u)));
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    st8((c.r[8].w[0] + 257u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[6], ld32((c.r[28].w[0] - 26300u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 256u)));
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    st8((c.r[3].w[0] + 3700u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 20u)));
    st16((c.r[3].w[0] + 3680u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 6u)));
    st8((c.r[3].w[0] + 3682u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8u)));
    st8((c.r[3].w[0] + 3683u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 2u)));
    st16((c.r[3].w[0] + 3684u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 4u)));
    st16((c.r[3].w[0] + 3686u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2070u)));
    c.budget -= 28;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0015A898; } }
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 2068u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[5], c.r[4].w[0] - 27072u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[4], c.r[4].w[0] - 27070u);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    st16((c.r[3].w[0] + 3688u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 2068u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    c.budget -= 11;
L_0015A880:
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    st8((c.r[3].w[0] + 3690u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[3].w[0] + 3691u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 3692u), 0u);  if (t) { goto L_0015A8D8; } }
L_0015A898:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 2068u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[5], c.r[4].w[0] - 24992u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[4], c.r[4].w[0] - 24990u);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    st16((c.r[3].w[0] + 3688u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 2068u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    st8((c.r[3].w[0] + 3690u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[3].w[0] + 3691u), static_cast<std::uint8_t>(0u));
    st32((c.r[3].w[0] + 3692u), 0u);
    c.budget -= 16;
L_0015A8D8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0015A8E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[6], c.r[3].w[0] + 25952u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    st8((c.r[1].w[0] + 29784u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    st8((c.r[1].w[0] + 29785u), static_cast<std::uint8_t>(0u));
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    mmi::paddub(c.r[8], c.r[6], c.r[0]);
    c.budget -= 11;
L_0015A90C:
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    mmi::paddub(c.r[7], c.r[8], c.r[0]);
    c.budget -= 3;
L_0015A918:
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[7].w[0] + 3712u), static_cast<std::uint8_t>(0u));
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[3].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015A918u | kUnwind; return; } goto L_0015A918; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[3].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(24ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] + 5u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015A90Cu | kUnwind; return; } goto L_0015A90C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[11], c.r[3].w[0] + 17584u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[12], c.r[3].w[0] + 18016u);
    mmi::paddub(c.r[8], c.r[0], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[31], c.r[5].w[0] + 9648u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 5680u);
    set32(c.r[5], 0u + 255u);
    c.budget -= 12;
L_0015A974:
    set32(c.r[13], c.r[6].w[0] + c.r[7].w[0]);
    st8((c.r[13].w[0] + 3392u), static_cast<std::uint8_t>(0u));
    mmi::paddub(c.r[14], c.r[0], c.r[0]);
    mmi::paddub(c.r[9], c.r[11], c.r[0]);
    mmi::paddub(c.r[10], c.r[12], c.r[0]);
    c.budget -= 5;
L_0015A988:
    c.r[15].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 2070u)));
    c.budget -= 3;
    { const bool t = c.r[15].d[0] != 0ull;  if (t) { goto L_0015A99C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[24].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0])));  if (t) { goto L_0015A9A8; } }
L_0015A99C:
    c.r[24].sd[0] = static_cast<std::int16_t>(ld16((c.r[10].w[0])));
    c.budget -= 3;
L_0015A9A8:
    c.budget -= 2;
    if (c.r[24].d[0] == c.r[5].d[0]) { set32(c.r[14], c.r[14].w[0] + 1u);  goto L_0015AA64; }
    set32(c.r[25], 0u + 1u);
    set32(c.r[25], c.r[25].w[0] << (c.r[24].w[0] & 31u));
    c.budget -= 4;
    { const bool t = c.r[24].sd[0] >= 0; set32(c.r[15], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[24].w[0]) >> 5));  if (t) { goto L_0015A9C8; } }
    set32(c.r[15], c.r[24].w[0] + 31u);
    set32(c.r[15], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[15].w[0]) >> 5));
    c.budget -= 2;
L_0015A9C8:
    set32(c.r[15], c.r[15].w[0] << 2);
    set32(c.r[16], c.r[6].w[0] + c.r[15].w[0]);
    set32(c.r[15], ld32((c.r[16].w[0] + 3312u)));
    c.r[15].d[0] = c.r[15].d[0] & c.r[25].d[0];
    c.budget -= 6;
    { const bool t = c.r[15].d[0] == 0ull;  if (t) { goto L_0015AA60; } }
    set32(c.r[15], ld32((c.r[16].w[0] + 3328u)));
    c.r[15].d[0] = c.r[15].d[0] & c.r[25].d[0];
    c.budget -= 4;
    { const bool t = c.r[15].d[0] != 0ull;  if (t) { goto L_0015AA60; } }
    c.r[1].d[0] = c.r[7].d[0] < static_cast<std::uint64_t>(14ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; st8((c.r[13].w[0] + 3392u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0015AA04; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0] + 3832u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0015AA08; } }
L_0015AA04:
    st8((c.r[6].w[0] + 3833u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 1;
L_0015AA08:
    c.r[15].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 2070u)));
    c.budget -= 3;
    { const bool t = c.r[15].d[0] != 0ull; set32(c.r[8], 0u + 1u);  if (t) { goto L_0015AA28; } }
    set32(c.r[15], c.r[24].w[0] << 3);
    set32(c.r[15], c.r[15].w[0] + c.r[24].w[0]);
    set32(c.r[15], c.r[15].w[0] << 2);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[15], c.r[3].w[0] + c.r[15].w[0]);  if (t) { goto L_0015AA38; } }
L_0015AA28:
    set32(c.r[15], c.r[24].w[0] << 3);
    set32(c.r[15], c.r[15].w[0] + c.r[24].w[0]);
    set32(c.r[15], c.r[15].w[0] << 2);
    set32(c.r[15], c.r[31].w[0] + c.r[15].w[0]);
    c.budget -= 4;
L_0015AA38:
    c.r[25].sd[0] = static_cast<std::int8_t>(ld8((c.r[15].w[0])));
    c.r[15].sd[0] = static_cast<std::int16_t>(ld16((c.r[15].w[0] + 6u)));
    set32(c.r[24], c.r[25].w[0] << 2);
    set32(c.r[24], c.r[24].w[0] + c.r[25].w[0]);
    set32(c.r[24], c.r[6].w[0] + c.r[24].w[0]);
    set32(c.r[24], c.r[24].w[0] + c.r[15].w[0]);
    c.r[15].sd[0] = static_cast<std::int8_t>(ld8((c.r[24].w[0] + 3712u)));
    set32(c.r[15], c.r[15].w[0] + 1u);
    st8((c.r[24].w[0] + 3712u), static_cast<std::uint8_t>(c.r[15].w[0]));
    c.budget -= 10;
L_0015AA60:
    set32(c.r[14], c.r[14].w[0] + 1u);
    c.budget -= 1;
L_0015AA64:
    set32(c.r[9], c.r[9].w[0] + 2u);
    c.r[15].d[0] = c.r[14].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[15].d[0] != 0ull; set32(c.r[10], c.r[10].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015A988u | kUnwind; return; } goto L_0015A988; } }
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[11], c.r[11].w[0] + 16u);
    c.r[9].d[0] = c.r[7].d[0] < static_cast<std::uint64_t>(26ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[9].d[0] != 0ull; set32(c.r[12], c.r[12].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015A974u | kUnwind; return; } goto L_0015A974; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { goto L_0015AB08; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 2070u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0015AAB0; } }
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], 0u + 105u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0] + 3398u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0015AAB8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0015AAB0:
    set32(c.r[4], 0u + 108u);
    st8((c.r[6].w[0] + 3394u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0015AAB8:
    set32(c.r[7], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] >= 0; c.r[3].d[0] = c.r[4].d[0] & 31ull;  if (t) { goto L_0015AAD0; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[7], c.r[7].w[0] << (c.r[3].w[0] & 31u));  goto L_0015AAD4; }
    set32(c.r[3], c.r[3].w[0] - 32u);
    c.budget -= 1;
L_0015AAD0:
    set32(c.r[7], c.r[7].w[0] << (c.r[3].w[0] & 31u));
    c.budget -= 1;
L_0015AAD4:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 5));  if (t) { goto L_0015AAE4; } }
    set32(c.r[3], c.r[4].w[0] + 31u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));
    c.budget -= 2;
L_0015AAE4:
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 3312u)));
    c.r[4].d[0] = ~(c.r[7].d[0] | 0ull);
    c.r[3].d[0] = c.r[3].d[0] | c.r[7].d[0];
    st32((c.r[5].w[0] + 3312u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 3328u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    st32((c.r[5].w[0] + 3328u), c.r[3].w[0]);
    c.budget -= 9;
L_0015AB08:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0015AB20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[3], c.r[2].w[0] + 25952u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 28022u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0015AB58; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 2068u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[2], c.r[2].w[0] + 5680u);
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_0015AB74; } }
L_0015AB58:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 2068u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[2], c.r[2].w[0] + 9648u);
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[8], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
L_0015AB74:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 25u)));
    set32(c.r[2], 0u + 127u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0015AC00; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[2], c.r[2].w[0] + 14576u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    st8((c.r[4].w[0] + 8386u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 25u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[6], c.r[2].w[0] + 14577u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[5], c.r[2].w[0] + 14578u);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[3], c.r[2].w[0] + 14579u);
    set32(c.r[2], 0u + 1u);
    st8((c.r[4].w[0] + 8387u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 25u)));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    st8((c.r[4].w[0] + 8388u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 25u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    st8((c.r[4].w[0] + 8437u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 30;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 8439u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0015AC00; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_0015AC00:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0015AC10:
    set32(c.r[5], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[6], c.r[3].w[0] + 26144u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 29432u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 6u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[4], c.r[4].w[0] + 25952u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    st32((c.r[1].w[0] + 29432u), c.r[3].w[0]);
    c.budget -= 11;
L_0015AC3C:
    set32(c.r[3], c.r[5].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 28022u)));
    set32(c.r[3], c.r[3].w[0] << 8);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);  if (t) { goto L_0015AC6C; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[5], 0u + 1u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 640u)));
    c.budget -= 5;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_0015AC90; } }
L_0015AC6C:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2070u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_0015ADF0; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[5], 0u + 2u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 640u)));
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_0015ADF0; } }
L_0015AC90:
    set32(c.r[5], ld32((c.r[4].w[0] + 3484u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[4].w[0] + 3484u), c.r[5].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 8435u)));
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == 0ull; mmi::paddub(c.r[9], c.r[0], c.r[0]);  if (t) { goto L_0015AD50; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_0015ACC0; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 3508u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[4].w[0] + 3508u), c.r[5].w[0]);
    c.budget -= 3;
L_0015ACC0:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 8435u)));
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_0015ACDC; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 3504u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[4].w[0] + 3504u), c.r[5].w[0]);
    c.budget -= 3;
L_0015ACDC:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 8435u)));
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_0015ACF8; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 3500u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[4].w[0] + 3500u), c.r[5].w[0]);
    c.budget -= 3;
L_0015ACF8:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 8435u)));
    set32(c.r[5], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_0015AD14; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 3496u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[4].w[0] + 3496u), c.r[5].w[0]);
    c.budget -= 3;
L_0015AD14:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 8435u)));
    set32(c.r[5], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_0015AD30; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 3492u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[4].w[0] + 3492u), c.r[5].w[0]);
    c.budget -= 3;
L_0015AD30:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 8435u)));
    set32(c.r[5], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_0015AD4C; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 3488u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[4].w[0] + 3488u), c.r[5].w[0]);
    c.budget -= 3;
L_0015AD4C:
    mmi::paddub(c.r[9], c.r[0], c.r[0]);
    c.budget -= 1;
L_0015AD50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[10], c.r[4], c.r[0]);  if (t) { goto L_0015AD88; } }
    set32(c.r[5], c.r[3].w[0] + c.r[6].w[0]);
    c.budget -= 1;
L_0015AD5C:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1612u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1618u)));
    set32(c.r[6], ld32((c.r[10].w[0] + 3424u)));
    set32(c.r[5], c.r[9].w[0] + 1u);
    c.r[9].d[0] = c.r[5].d[0] << 48;
    set32(c.r[5], c.r[8].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    st32((c.r[10].w[0] + 3424u), c.r[5].w[0]);
    set32(c.r[10], c.r[10].w[0] + 4u);
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 48);
    c.budget -= 11;
L_0015AD88:
    c.r[6].d[0] = c.r[9].d[0] << 48;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.r[5].d[0] = c.r[6].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[5], c.r[3].w[0] + c.r[6].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015AD5Cu | kUnwind; return; } goto L_0015AD5C; } }
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 1634u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 3472u)));
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    st32((c.r[4].w[0] + 3472u), c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 8389u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0015ADCC; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 26300u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 1634u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 268u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[6].w[0] - c.r[5].w[0]);  if (t) { goto L_0015ADDC; } }
L_0015ADCC:
    set32(c.r[6], ld32((c.r[28].w[0] - 26300u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 1634u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 269u)));
    set32(c.r[5], c.r[6].w[0] - c.r[5].w[0]);
    c.budget -= 4;
L_0015ADDC:
    c.r[6].d[0] = c.r[5].d[0] << 48;
    set32(c.r[5], ld32((c.r[4].w[0] + 3476u)));
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    st32((c.r[4].w[0] + 3476u), c.r[5].w[0]);
    c.budget -= 5;
L_0015ADF0:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 1632u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 3464u)));
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    st32((c.r[4].w[0] + 3464u), c.r[5].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 1630u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 3460u)));
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    st32((c.r[4].w[0] + 3460u), c.r[5].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 1624u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 3448u)));
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    st32((c.r[4].w[0] + 3448u), c.r[5].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 1626u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 3452u)));
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    st32((c.r[4].w[0] + 3452u), c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 1628u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 3456u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[4].w[0] + 3456u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 3512u)));
    set32(c.r[5], ld32((c.r[5].w[0] + 516u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[4].w[0] + 3512u), c.r[3].w[0]);
    c.budget -= 25;
L_0015AE54:
    set32(c.r[5], ld32((c.r[4].w[0] + 3512u)));
    c.r[3].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(3600ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0015AE7C; } }
    set32(c.r[3], c.r[5].w[0] - 3600u);
    st32((c.r[4].w[0] + 3512u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 3516u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 3516u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015AE54u | kUnwind; return; } goto L_0015AE54; } }
L_0015AE7C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0015AE90:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    st32((c.r[1].w[0] + 29492u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 28016u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 29492u)));
    set32(c.r[5], c.r[6].w[0] << 5);
    set32(c.r[5], c.r[5].w[0] - c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    st32((c.r[1].w[0] + 29492u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[6], ld32((c.r[1].w[0] + 29436u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[4], ld32((c.r[1].w[0] + 29492u)));
    set32(c.r[6], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    st32((c.r[1].w[0] + 29492u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 29412u)));
    c.budget -= 31;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 25952u);  if (t) { goto L_0015AF18; } }
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[8], c.r[0], c.r[0]);  if (t) { goto L_0015AF6C; } }
L_0015AF18:
    set32(c.r[7], ld32((c.r[3].w[0] + 3464u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x66660000u);
    set32(c.r[5], ld32((c.r[3].w[0] + 3460u)));
    c.r[4].d[0] = c.r[4].d[0] | 26215ull;
    set32(c.r[6], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[7].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    mmi::div(c, 0, c.r[6].w[0], c.r[5].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[4].w[0], c.r[8].w[0]);
    set32(c.r[5], c.r[8].w[0] >> 31);
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 2));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = c.r[4].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.budget -= 21;
L_0015AF6C:
    c.r[4].d[0] = c.r[4].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0015AF9C; } }
    set32(c.r[6], c.r[4].w[0] << 2);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[4], c.r[4].w[0] - 13632u);
    set32(c.r[5], ld32((c.r[3].w[0] + 3540u)));
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0] + 3540u), c.r[4].w[0]);
    c.budget -= 8;
L_0015AF9C:
    set32(c.r[6], ld32((c.r[3].w[0] + 3448u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 3452u)));
    c.r[4].d[0] = c.r[6].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull; mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (t) { goto L_0015B030; } }
    set32(c.r[4], c.r[6].w[0] - c.r[5].w[0]);
    c.r[5].d[0] = c.r[4].d[0] << 48;
    set32(c.r[4], ld32((c.r[3].w[0] + 3456u)));
    set32(c.r[6], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = c.r[6].d[0] != 0ull; c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);  if (t) { goto L_0015AFD4; } }
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[9], c.r[0], c.r[0]);  if (t) { goto L_0015B034; } }
L_0015AFD4:
    c.r[5].d[0] = c.r[5].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    mmi::div(c, 0, c.r[4].w[0], c.r[6].w[0]);
    c.r[9].d[0] = c.lo.d[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x66660000u);
    c.r[4].d[0] = c.r[4].d[0] | 26215ull;
    mmi::mult(c, 0, c.r[4].w[0], c.r[9].w[0]);
    set32(c.r[5], c.r[9].w[0] >> 31);
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 2));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = c.r[4].d[0] << 48;
    c.budget -= 22;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (t) { goto L_0015B034; } }
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 1;
L_0015B030:
    mmi::paddub(c.r[9], c.r[0], c.r[0]);
    c.budget -= 1;
L_0015B034:
    c.r[4].d[0] = c.r[4].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (t) { goto L_0015B068; } }
    set32(c.r[6], c.r[4].w[0] << 2);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[4], c.r[4].w[0] - 13584u);
    set32(c.r[5], ld32((c.r[3].w[0] + 3540u)));
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0] + 3540u), c.r[4].w[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 9;
L_0015B068:
    mmi::paddub(c.r[10], c.r[0], c.r[0]);
    mmi::paddub(c.r[7], c.r[3], c.r[0]);
    c.budget -= 2;
L_0015B070:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 3424u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[4].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    set32(c.r[5], c.r[10].w[0] + c.r[5].w[0]);
    c.r[10].d[0] = c.r[5].d[0] << 48;
    set32(c.r[7], c.r[7].w[0] + 4u);
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != 0ull; c.r[10].d[0] = static_cast<std::uint64_t>(c.r[10].sd[0] >> 48);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015B070u | kUnwind; return; } goto L_0015B070; } }
    c.r[5].d[0] = c.r[10].d[0] << 48;
    set32(c.r[4], 0u + 10000u);
    set32(c.r[6], ld32((c.r[3].w[0] + 3540u)));
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    mmi::mult(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[10].d[0] = c.lo.d[0];
    mmi::paddub(c.r[14], c.r[0], c.r[0]);
    mmi::paddub(c.r[12], c.r[3], c.r[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[6], c.r[6].w[0] + c.r[10].w[0]);
    set32(c.r[13], c.r[4].w[0] - 13536u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    st32((c.r[3].w[0] + 3540u), c.r[6].w[0]);
    c.budget -= 12;
L_0015B0C0:
    c.r[11].sd[0] = static_cast<std::int16_t>(ld16((c.r[12].w[0] + 3488u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (t) { goto L_0015B0E8; } }
L_0015B0CC:
    set32(c.r[6], ld32((c.r[3].w[0] + 3540u)));
    set32(c.r[4], ld32((c.r[13].w[0])));
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0] + 3540u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[13].w[0])));
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 7;
L_0015B0E8:
    c.r[4].d[0] = c.r[7].d[0] < c.r[11].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015B0CCu | kUnwind; return; } goto L_0015B0CC; } }
    set32(c.r[14], c.r[14].w[0] + 1u);
    set32(c.r[12], c.r[12].w[0] + 4u);
    c.r[4].d[0] = c.r[14].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[13], c.r[13].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015B0C0u | kUnwind; return; } goto L_0015B0C0; } }
    set32(c.r[11], ld32((c.r[3].w[0] + 3480u)));
    set32(c.r[7], ld32((c.r[3].w[0] + 3484u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x05F50000u);
    set32(c.r[6], ld32((c.r[3].w[0] + 3540u)));
    c.r[4].d[0] = c.r[4].d[0] | 57599ull;
    set32(c.r[11], c.r[11].w[0] - c.r[7].w[0]);
    set32(c.r[7], c.r[11].w[0] << 5);
    set32(c.r[7], c.r[7].w[0] - c.r[11].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[11], c.r[7].w[0] + c.r[11].w[0]);
    set32(c.r[7], c.r[11].w[0] << 2);
    set32(c.r[11], c.r[11].w[0] + c.r[7].w[0]);
    set32(c.r[7], c.r[11].w[0] << 2);
    set32(c.r[7], c.r[11].w[0] + c.r[7].w[0]);
    set32(c.r[7], c.r[7].w[0] << 5);
    set32(c.r[6], c.r[6].w[0] - c.r[7].w[0]);
    st32((c.r[3].w[0] + 3540u), c.r[6].w[0]);
    set32(c.r[11], ld32((c.r[3].w[0] + 3472u)));
    set32(c.r[7], ld32((c.r[3].w[0] + 3476u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 3540u)));
    set32(c.r[11], c.r[11].w[0] + c.r[7].w[0]);
    set32(c.r[7], c.r[11].w[0] << 5);
    set32(c.r[7], c.r[7].w[0] - c.r[11].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[11].w[0]);
    set32(c.r[7], c.r[7].w[0] << 3);
    set32(c.r[6], c.r[6].w[0] - c.r[7].w[0]);
    st32((c.r[3].w[0] + 3540u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0] + 3540u)));
    c.r[1].d[0] = c.r[4].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 32;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0015B18C; } }
    st32((c.r[3].w[0] + 3540u), c.r[4].w[0]);
    c.budget -= 1;
L_0015B18C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[7], c.r[4].w[0] - 13696u);
    st32((c.r[3].w[0] + 3468u), 0u);
    mmi::paddub(c.r[11], c.r[0], c.r[0]);
    c.budget -= 4;
L_0015B19C:
    set32(c.r[6], ld32((c.r[3].w[0] + 3540u)));
    set32(c.r[4], ld32((c.r[7].w[0])));
    c.r[4].d[0] = c.r[6].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[4].d[0] != 0ull) { set32(c.r[11], c.r[11].w[0] + 1u);  goto L_0015B1C4; }
    set32(c.r[4], ld32((c.r[3].w[0] + 3468u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[3].w[0] + 3468u), c.r[4].w[0]);
    set32(c.r[11], c.r[11].w[0] + 1u);
    c.budget -= 5;
L_0015B1C4:
    c.r[4].d[0] = c.r[11].d[0] < static_cast<std::uint64_t>(15ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015B19Cu | kUnwind; return; } goto L_0015B19C; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 3468u)));
    c.r[1].d[0] = c.r[4].sd[0] < 15ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[4], 0u + 255u);  if (t) { goto L_0015B1EC; } }
    set32(c.r[4], 0u + 14u);
    st32((c.r[3].w[0] + 3468u), c.r[4].w[0]);
    set32(c.r[4], 0u + 255u);
    c.budget -= 3;
L_0015B1EC:
    st32((c.r[3].w[0] + 3696u), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[6], c.r[4].w[0] - 13504u);
    mmi::paddub(c.r[11], c.r[0], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[14], c.r[4].w[0] - 13504u);
    set32(c.r[12], 0u + 7u);
    c.budget -= 8;
L_0015B20C:
    set32(c.r[13], ld32((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = c.r[13].d[0] == 0ull; mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (t) { goto L_0015B238; } }
    set32(c.r[15], ld32((c.r[3].w[0] + 3540u)));
    c.r[1].d[0] = c.r[13].d[0] < c.r[15].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0015B240; } }
    set32(c.r[13], ld32((c.r[6].w[0] + 4u)));
    c.r[13].d[0] = c.r[13].d[0] < c.r[15].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[13].d[0] != 0ull;  if (t) { goto L_0015B240; } }
L_0015B238:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 2;
L_0015B240:
    set32(c.r[13], ld32((c.r[6].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[13].d[0] == 0ull) { set32(c.r[4], c.r[4].w[0] + 1u);  goto L_0015B26C; }
    c.r[1].d[0] = c.r[13].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0015B270; } }
    set32(c.r[13], ld32((c.r[6].w[0] + 12u)));
    c.r[13].d[0] = c.r[13].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[13].d[0] != 0ull;  if (t) { goto L_0015B270; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_0015B26C:
    c.budget -= 1;
L_0015B270:
    set32(c.r[13], ld32((c.r[6].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[13].d[0] == 0ull) { set32(c.r[4], c.r[4].w[0] + 1u);  goto L_0015B29C; }
    c.r[1].d[0] = c.r[13].d[0] < c.r[10].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0015B2A0; } }
    set32(c.r[13], ld32((c.r[6].w[0] + 20u)));
    c.r[13].d[0] = c.r[13].d[0] < c.r[10].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[13].d[0] != 0ull;  if (t) { goto L_0015B2A0; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_0015B29C:
    c.budget -= 1;
L_0015B2A0:
    set32(c.r[13], ld32((c.r[6].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[13].d[0] == 0ull) { set32(c.r[4], c.r[4].w[0] + 1u);  goto L_0015B2D4; }
    c.r[15].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 2066u)));
    c.r[1].d[0] = c.r[13].d[0] < c.r[15].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0015B2D8; } }
    set32(c.r[13], ld32((c.r[6].w[0] + 28u)));
    c.r[13].d[0] = c.r[13].d[0] < c.r[15].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[13].d[0] != 0ull;  if (t) { goto L_0015B2D8; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 2;
L_0015B2D4:
    c.budget -= 1;
L_0015B2D8:
    c.r[13].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2070u)));
    set32(c.r[13], c.r[13].w[0] << 3);
    set32(c.r[13], c.r[14].w[0] + c.r[13].w[0]);
    set32(c.r[15], c.r[7].w[0] + c.r[13].w[0]);
    set32(c.r[13], ld32((c.r[15].w[0] + 32u)));
    c.budget -= 7;
    if (c.r[13].d[0] == 0ull) { set32(c.r[4], c.r[4].w[0] + 1u);  goto L_0015B31C; }
    set32(c.r[24], ld32((c.r[3].w[0] + 3484u)));
    c.r[1].d[0] = c.r[13].d[0] < c.r[24].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0015B320; } }
    set32(c.r[13], ld32((c.r[15].w[0] + 36u)));
    c.r[13].d[0] = c.r[13].d[0] < c.r[24].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[13].d[0] != 0ull;  if (t) { goto L_0015B320; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 2;
L_0015B31C:
    c.budget -= 1;
L_0015B320:
    set32(c.r[13], ld32((c.r[6].w[0] + 48u)));
    c.budget -= 3;
    if (c.r[13].d[0] == 0ull) { set32(c.r[4], c.r[4].w[0] + 1u);  goto L_0015B34C; }
    c.r[1].d[0] = c.r[13].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0015B350; } }
    set32(c.r[13], ld32((c.r[6].w[0] + 52u)));
    c.r[13].d[0] = c.r[13].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[13].d[0] != 0ull;  if (t) { goto L_0015B350; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_0015B34C:
    c.budget -= 1;
L_0015B350:
    set32(c.r[13], ld32((c.r[6].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[13].d[0] == 0ull) { set32(c.r[4], c.r[4].w[0] + 1u);  goto L_0015B37C; }
    c.r[1].d[0] = c.r[13].d[0] < c.r[9].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0015B380; } }
    set32(c.r[13], ld32((c.r[6].w[0] + 60u)));
    c.r[13].d[0] = c.r[13].d[0] < c.r[9].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[13].d[0] != 0ull;  if (t) { goto L_0015B380; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_0015B37C:
    c.budget -= 1;
L_0015B380:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[12].d[0]) { set32(c.r[11], c.r[11].w[0] + 1u);  goto L_0015B394; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 3696u), c.r[11].w[0]);  if (t) { goto L_0015B3A8; } }
    set32(c.r[11], c.r[11].w[0] + 1u);
    c.budget -= 1;
L_0015B394:
    set32(c.r[6], c.r[6].w[0] + 64u);
    c.r[4].d[0] = c.r[11].d[0] < static_cast<std::uint64_t>(12ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 64u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015B20Cu | kUnwind; return; } goto L_0015B20C; } }
    c.budget -= 1;
L_0015B3A8:
    set32(c.r[5], ld32((c.r[3].w[0] + 3696u)));
    set32(c.r[4], 0u + 255u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_0015B410; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[6], c.r[4].w[0] - 12736u);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.budget -= 3;
L_0015B3C4:
    set32(c.r[5], ld32((c.r[6].w[0])));
    set32(c.r[4], ld32((c.r[3].w[0] + 3540u)));
    c.r[1].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_0015B3E8; }
    set32(c.r[4], c.r[7].w[0] + 12u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 3696u), c.r[4].w[0]);  if (t) { goto L_0015B3F8; } }
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_0015B3E8:
    c.r[4].d[0] = c.r[7].d[0] < static_cast<std::uint64_t>(26ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015B3C4u | kUnwind; return; } goto L_0015B3C4; } }
    c.budget -= 1;
L_0015B3F8:
    set32(c.r[5], ld32((c.r[3].w[0] + 3696u)));
    set32(c.r[4], 0u + 255u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_0015B410; } }
    set32(c.r[4], 0u + 37u);
    st32((c.r[3].w[0] + 3696u), c.r[4].w[0]);
    c.budget -= 2;
L_0015B410:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0015B420:
    set32(c.r[3], 0u + 1u);
    st8((c.r[28].w[0] - 26768u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 195u);
    st8((c.r[28].w[0] - 26772u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 451u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[28].w[0] - 26776u), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0015B440:
    c.r[2].d[0] = ld16((c.r[28].w[0] - 26776u));
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].d[0] = c.r[2].d[0] << 48;
    st16((c.r[29].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    st16((c.r[29].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 8u));
    c.r[3].d[0] = ld8((c.r[29].w[0] + 13u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[29].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[29].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld16((c.r[29].w[0] + 8u));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[28].w[0] - 26776u), static_cast<std::uint16_t>(c.r[2].w[0]));  c.pc = t; return; }
L_0015B490:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 26768u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26780u)));
    c.r[4].d[0] = ld8((c.r[28].w[0] - 26772u));
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    st32((c.r[28].w[0] - 26780u), c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 8));
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[4].w[0] + c.r[3].w[0]);
    st8((c.r[28].w[0] - 26772u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[28].w[0] - 26772u));
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[28].w[0] - 26768u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0015B4E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B4F8u); set32(c.r[4], ld32((c.r[4].w[0] + 84u)));  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x0015B4F8u) [[unlikely]] return; }
L_0015B4F8:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B524u); set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x0015B524u) [[unlikely]] return; }
L_0015B524:
    c.f[2] = ld32((c.r[16].w[0] + 104u));
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 40u), c.f[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0015B550:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[4].w[0] + 176u), c.r[5].w[0]);  if (t) { goto L_0015B594; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[4].w[0] + 180u), c.r[3].w[0]);  if (t) { goto L_0015B594; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 180u)));
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[4].w[0] + 184u), c.r[3].w[0]);  if (t) { goto L_0015B594; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 184u)));
    set32(c.r[5], c.r[7].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[4].w[0] + 188u), c.r[3].w[0]);
    c.budget -= 5;
L_0015B594:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0015B5A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], 0u - 1u);
    c.f[20] = c.f[12];
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.budget -= 10;
    { const bool t = c.r[6].d[0] == c.r[2].d[0]; mmi::paddub(c.r[16], c.r[5], c.r[0]);  if (t) { goto L_0015B684; } }
    set32(c.r[2], c.r[6].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[2].w[0] << 7);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 28448u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B5E8u); set32(c.r[4], c.r[2].w[0] + 80u);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x0015B5E8u) [[unlikely]] return; }
L_0015B5E8:
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B5F4u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x0015B5F4u) [[unlikely]] return; }
L_0015B5F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B5FCu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x0015B5FCu) [[unlikely]] return; }
L_0015B5FC:
    set32(c.r[2], c.r[29].w[0] + 72u);
    c.f[2] = 0u;
    c.f[1] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0015B684; } }
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0015B684; } }
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[16].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 68u));
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[1] = fp::mul(c.f[20], c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[0] = fp::mul(c.f[20], c.f[1]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 18;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u - 1u);  if (t) { goto L_0015B67C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0015B67C; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_0015B67C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);  if (t) { goto L_0015B698; } }
L_0015B684:
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0]), 0u);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    c.budget -= 5;
L_0015B698:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0015B6B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0015B6C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[2], c.r[2].w[0] + 19456u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], c.r[4].w[0] << 4);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B6ECu); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_000E(c, 316u, depth + 1u); else { c.pc = 0x0013B910u; return; } if (c.pc != 0x0015B6ECu) [[unlikely]] return; }
L_0015B6EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B6F4u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x0015B6F4u) [[unlikely]] return; }
L_0015B6F4:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 330u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 331u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015B754; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_0015B738; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF000000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B72Cu); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x0015B72Cu) [[unlikely]] return; }
L_0015B72C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0])));  if (t) { goto L_0015B758; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_0015B738:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_0015B754; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B754u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x0015B754u) [[unlikely]] return; }
L_0015B754:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_0015B758:
    c.f[13] = ld32((c.r[16].w[0] + 8u));
    c.f[14] = ld32((c.r[16].w[0] + 12u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B768u); c.f[12] = ld32((c.r[16].w[0] + 4u));  if (depth < kMaxDepth) unit_000E(c, 304u, depth + 1u); else { c.pc = 0x0013B740u; return; } if (c.pc != 0x0015B768u) [[unlikely]] return; }
L_0015B768:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B770u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 316u, depth + 1u); else { c.pc = 0x0013B910u; return; } if (c.pc != 0x0015B770u) [[unlikely]] return; }
L_0015B770:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0015B790:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[2], c.r[2].w[0] + 19552u);
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[12] = ld32((c.r[2].w[0] + 4u));
    c.f[13] = ld32((c.r[2].w[0] + 8u));
    c.f[14] = ld32((c.r[2].w[0] + 12u));
    c.budget -= 9;
    { set32(c.r[4], ld32((c.r[2].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0013B860u | kUnwind; return; } [[clang::musttail]] return unit_000E(c, 312u, depth); }
L_0015B7C0:
    set32(c.r[29], c.r[29].w[0] - 768u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[6], c.r[0]);
    set32(c.r[2], c.r[16].w[0] - 1u);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    c.budget -= 16;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (t) { goto L_0015B870; } }
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] - 3u);  if (t) { goto L_0015B830; } }
    set32(c.r[6], c.r[29].w[0] + 704u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 2;
L_0015B814:
    st32((c.r[6].w[0]), c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 2u);
    st32((c.r[6].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 8u);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015B814u | kUnwind; return; } goto L_0015B814; } }
L_0015B830:
    set32(c.r[4], c.r[16].w[0] - 1u);
    c.r[1].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0015B870; } }
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[6], c.r[2].w[0] + 704u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 4;
L_0015B850:
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[6].w[0]), c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015B850u | kUnwind; return; } goto L_0015B850; } }
    c.budget -= 1;
L_0015B870:
    c.f[3] = ld32((c.r[29].w[0] + 704u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[3], c.r[16].w[0] - 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[2] = fp::mul(c.f[1], c.f[3]);
    st32((c.r[29].w[0] + 128u), 0u);
    st32((c.r[29].w[0] + 256u), c.f[3]);
    set32(c.r[19], c.r[29].w[0] + 384u);
    st32((c.r[29].w[0] + 192u), c.f[2]);
    c.f[3] = ld32((c.r[18].w[0] + 16u));
    c.f[2] = ld32((c.r[18].w[0]));
    c.f[0] = c.r[2].w[0];
    set32(c.r[20], c.r[29].w[0] + 448u);
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    set32(c.r[10], 0u + 1u);
    c.f[2] = fp::mul(c.f[0], c.f[2]);
    st32((c.r[29].w[0] + 320u), c.f[2]);
    c.f[3] = ld32((c.r[18].w[0] + 20u));
    c.budget -= 20;
L_0015B8C0:
    c.f[2] = ld32((c.r[18].w[0] + 4u));
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    c.f[2] = fp::mul(c.f[0], c.f[2]);
    st32((c.r[19].w[0]), c.f[2]);
    c.f[3] = ld32((c.r[18].w[0] + 24u));
    c.f[2] = ld32((c.r[18].w[0] + 8u));
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    c.f[2] = fp::mul(c.f[0], c.f[2]);
    c.budget -= 10;
    { const bool t = c.r[1].d[0] != 0ull; st32((c.r[20].w[0]), c.f[2]);  if (t) { goto L_0015B9F0; } }
    set32(c.r[4], c.r[29].w[0] + 708u);
    set32(c.r[5], c.r[29].w[0] + 132u);
    set32(c.r[6], c.r[29].w[0] + 196u);
    set32(c.r[7], c.r[29].w[0] + 260u);
    set32(c.r[8], c.r[18].w[0] + 16u);
    set32(c.r[9], c.r[29].w[0] + 324u);
    c.budget -= 6;
L_0015B900:
    c.f[2] = ld32((c.r[4].w[0]));
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.r[2].d[0] = c.r[10].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    st32((c.r[5].w[0]), c.f[2]);
    c.f[3] = ld32((c.r[4].w[0] - 4u));
    c.f[2] = ld32((c.r[4].w[0]));
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.f[2] = fp::add(c.f[3], c.f[2]);
    c.f[2] = fp::mul(c.f[1], c.f[2]);
    st32((c.r[6].w[0]), c.f[2]);
    c.f[2] = ld32((c.r[4].w[0] - 4u));
    set32(c.r[6], c.r[6].w[0] + 4u);
    st32((c.r[7].w[0]), c.f[2]);
    c.f[4] = ld32((c.r[8].w[0]));
    c.f[3] = ld32((c.r[8].w[0] - 16u));
    c.f[2] = ld32((c.r[8].w[0] + 16u));
    c.f[5] = ld32((c.r[4].w[0]));
    c.f[6] = ld32((c.r[4].w[0] - 4u));
    set32(c.r[7], c.r[7].w[0] + 4u);
    c.f[3] = fp::sub(c.f[4], c.f[3]);
    c.f[2] = fp::sub(c.f[2], c.f[4]);
    c.f[3] = fp::mul(c.f[5], c.f[3]);
    c.f[2] = fp::mul(c.f[6], c.f[2]);
    fpu_div(c, 3u, c.f[3], c.f[6]);
    fpu_div(c, 2u, c.f[2], c.f[5]);
    c.f[2] = fp::add(c.f[3], c.f[2]);
    c.f[2] = fp::mul(c.f[0], c.f[2]);
    st32((c.r[9].w[0]), c.f[2]);
    c.f[4] = ld32((c.r[8].w[0] + 4u));
    c.f[3] = ld32((c.r[8].w[0] - 12u));
    c.f[2] = ld32((c.r[8].w[0] + 20u));
    c.f[5] = ld32((c.r[4].w[0]));
    c.f[6] = ld32((c.r[4].w[0] - 4u));
    c.f[3] = fp::sub(c.f[4], c.f[3]);
    c.f[2] = fp::sub(c.f[2], c.f[4]);
    c.f[3] = fp::mul(c.f[5], c.f[3]);
    c.f[2] = fp::mul(c.f[6], c.f[2]);
    fpu_div(c, 3u, c.f[3], c.f[6]);
    fpu_div(c, 2u, c.f[2], c.f[5]);
    c.f[2] = fp::add(c.f[3], c.f[2]);
    c.f[2] = fp::mul(c.f[0], c.f[2]);
    st32((c.r[9].w[0] + 64u), c.f[2]);
    c.f[4] = ld32((c.r[8].w[0] + 8u));
    c.f[3] = ld32((c.r[8].w[0] - 8u));
    c.f[2] = ld32((c.r[8].w[0] + 24u));
    c.f[5] = ld32((c.r[4].w[0]));
    c.f[6] = ld32((c.r[4].w[0] - 4u));
    c.f[3] = fp::sub(c.f[4], c.f[3]);
    set32(c.r[8], c.r[8].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.f[2] = fp::sub(c.f[2], c.f[4]);
    c.f[3] = fp::mul(c.f[5], c.f[3]);
    c.f[2] = fp::mul(c.f[6], c.f[2]);
    fpu_div(c, 3u, c.f[3], c.f[6]);
    fpu_div(c, 2u, c.f[2], c.f[5]);
    c.f[2] = fp::add(c.f[3], c.f[2]);
    c.f[2] = fp::mul(c.f[0], c.f[2]);
    st32((c.r[9].w[0] + 128u), c.f[2]);
    c.budget -= 60;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[9], c.r[9].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015B900u | kUnwind; return; } goto L_0015B900; } }
L_0015B9F0:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[10], c.r[2].w[0] + c.r[29].w[0]);
    c.f[1] = ld32((c.r[10].w[0] + 696u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
    st32((c.r[10].w[0] + 252u), 0u);
    set32(c.r[2], c.r[16].w[0] << 4);
    set32(c.r[3], c.r[2].w[0] + c.r[18].w[0]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    st32((c.r[10].w[0] + 124u), c.f[1]);
    set32(c.r[4], c.r[29].w[0] + 128u);
    st32((c.r[10].w[0] + 188u), c.f[0]);
    c.f[1] = ld32((c.r[3].w[0] - 16u));
    c.f[0] = ld32((c.r[3].w[0] - 32u));
    c.f[2] = c.r[2].w[0];
    set32(c.r[5], c.r[29].w[0] + 192u);
    set32(c.r[6], c.r[29].w[0] + 256u);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    set32(c.r[7], c.r[29].w[0] + 320u);
    set32(c.r[8], c.r[29].w[0] + 512u);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    mmi::paddub(c.r[9], c.r[16], c.r[0]);
    st32((c.r[10].w[0] + 316u), c.f[0]);
    c.f[1] = ld32((c.r[3].w[0] - 12u));
    c.f[0] = ld32((c.r[3].w[0] - 28u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    st32((c.r[10].w[0] + 380u), c.f[0]);
    c.f[1] = ld32((c.r[3].w[0] - 8u));
    c.f[0] = ld32((c.r[3].w[0] - 24u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.budget -= 35;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BA7Cu); st32((c.r[10].w[0] + 444u), c.f[0]);  if (depth < kMaxDepth) unit_0016(c, 160u, depth + 1u); else { c.pc = 0x0015BCF0u; return; } if (c.pc != 0x0015BA7Cu) [[unlikely]] return; }
L_0015BA7C:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[29].w[0] + 192u);
    set32(c.r[6], c.r[29].w[0] + 256u);
    set32(c.r[8], c.r[29].w[0] + 576u);
    mmi::paddub(c.r[7], c.r[19], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BA98u); mmi::paddub(c.r[9], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0016(c, 160u, depth + 1u); else { c.pc = 0x0015BCF0u; return; } if (c.pc != 0x0015BA98u) [[unlikely]] return; }
L_0015BA98:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[29].w[0] + 192u);
    set32(c.r[6], c.r[29].w[0] + 256u);
    set32(c.r[8], c.r[29].w[0] + 640u);
    mmi::paddub(c.r[7], c.r[20], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BAB4u); mmi::paddub(c.r[9], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0016(c, 160u, depth + 1u); else { c.pc = 0x0015BCF0u; return; } if (c.pc != 0x0015BAB4u) [[unlikely]] return; }
L_0015BAB4:
    set32(c.r[3], c.r[16].w[0] - 1u);
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[21], c.r[0], c.r[0]);  if (t) { goto L_0015BCC0; } }
    set32(c.r[19], c.r[29].w[0] + 704u);
    set32(c.r[20], c.r[29].w[0] + 512u);
    c.budget -= 2;
L_0015BACC:
    c.f[20] = ld32((c.r[19].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BAE0u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_000E(c, 296u, depth + 1u); else { c.pc = 0x0013B590u; return; } if (c.pc != 0x0015BAE0u) [[unlikely]] return; }
L_0015BAE0:
    c.f[3] = ld32((c.r[20].w[0]));
    c.f[2] = ld32((c.r[20].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[5] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[20], c.f[20]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[6] = ld32((c.r[18].w[0]));
    c.f[4] = ld32((c.r[18].w[0] + 16u));
    c.f[2] = fp::add(c.f[3], c.f[2]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[4] = fp::sub(c.f[6], c.f[4]);
    c.f[2] = fp::mul(c.f[5], c.f[4]);
    fpu_div(c, 0u, c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[20].w[0]));
    c.f[6] = ld32((c.r[19].w[0]));
    c.f[4] = ld32((c.r[18].w[0] + 16u));
    c.f[3] = ld32((c.r[18].w[0]));
    c.f[0] = ld32((c.r[20].w[0] + 4u));
    c.f[13] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[5], c.f[1]);
    c.f[3] = fp::sub(c.f[4], c.f[3]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[2] = fp::mul(c.f[6], c.f[6]);
    c.f[3] = fp::mul(c.f[13], c.f[3]);
    fpu_div(c, 2u, c.f[3], c.f[2]);
    fpu_div(c, 0u, c.f[0], c.f[6]);
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    st32((c.r[17].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0]));
    st32((c.r[17].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0]));
    st32((c.r[17].w[0] + 48u), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 4u));
    c.f[0] = ld32((c.r[18].w[0] + 20u));
    c.f[12] = ld32((c.r[19].w[0]));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 40;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BB80u); c.f[20] = fp::mul(c.f[5], c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 296u, depth + 1u); else { c.pc = 0x0013B590u; return; } if (c.pc != 0x0015BB80u) [[unlikely]] return; }
L_0015BB80:
    fpu_div(c, 2u, c.f[20], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[1] = ld32((c.r[20].w[0] + 64u));
    c.f[3] = ld32((c.r[19].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = ld32((c.r[20].w[0] + 68u));
    c.f[13] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[1], c.f[0]);
    c.f[0] = fp::mul(c.f[3], c.f[3]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[2]);
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.f[5] = ld32((c.r[18].w[0] + 20u));
    c.f[4] = ld32((c.r[18].w[0] + 4u));
    c.f[6] = ld32((c.r[19].w[0]));
    c.f[1] = ld32((c.r[20].w[0] + 64u));
    c.f[2] = c.r[2].w[0];
    c.f[0] = ld32((c.r[20].w[0] + 68u));
    c.f[4] = fp::sub(c.f[5], c.f[4]);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[3] = fp::mul(c.f[6], c.f[6]);
    c.f[4] = fp::mul(c.f[13], c.f[4]);
    fpu_div(c, 3u, c.f[4], c.f[3]);
    fpu_div(c, 0u, c.f[0], c.f[6]);
    c.f[0] = fp::sub(c.f[3], c.f[0]);
    st32((c.r[17].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 64u));
    st32((c.r[17].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 4u));
    st32((c.r[17].w[0] + 52u), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 8u));
    c.f[0] = ld32((c.r[18].w[0] + 24u));
    c.f[12] = ld32((c.r[19].w[0]));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 39;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BC1Cu); c.f[20] = fp::mul(c.f[2], c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 296u, depth + 1u); else { c.pc = 0x0013B590u; return; } if (c.pc != 0x0015BC1Cu) [[unlikely]] return; }
L_0015BC1C:
    fpu_div(c, 2u, c.f[20], c.f[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[1] = ld32((c.r[20].w[0] + 128u));
    c.f[3] = ld32((c.r[19].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[21], c.r[21].w[0] + 1u);
    set32(c.r[3], c.r[16].w[0] - 1u);
    c.r[3].d[0] = c.r[21].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.f[0] = ld32((c.r[20].w[0] + 132u));
    c.f[4] = c.r[5].w[0];
    c.f[1] = fp::add(c.f[1], c.f[0]);
    c.f[0] = fp::mul(c.f[3], c.f[3]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[2]);
    st32((c.r[17].w[0] + 8u), c.f[0]);
    c.f[6] = ld32((c.r[18].w[0] + 24u));
    c.f[5] = ld32((c.r[18].w[0] + 8u));
    c.f[7] = ld32((c.r[19].w[0]));
    c.f[1] = ld32((c.r[20].w[0] + 128u));
    c.f[2] = c.r[4].w[0];
    c.f[0] = ld32((c.r[20].w[0] + 132u));
    c.f[5] = fp::sub(c.f[6], c.f[5]);
    set32(c.r[19], c.r[19].w[0] + 4u);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[3] = fp::mul(c.f[7], c.f[7]);
    c.f[4] = fp::mul(c.f[4], c.f[5]);
    fpu_div(c, 3u, c.f[4], c.f[3]);
    fpu_div(c, 0u, c.f[0], c.f[7]);
    c.f[0] = fp::sub(c.f[3], c.f[0]);
    st32((c.r[17].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 128u));
    st32((c.r[17].w[0] + 40u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 8u));
    set32(c.r[20], c.r[20].w[0] + 4u);
    st32((c.r[17].w[0] + 56u), c.f[0]);
    set32(c.r[18], c.r[18].w[0] + 16u);
    c.budget -= 41;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 64u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015BACCu | kUnwind; return; } goto L_0015BACC; } }
L_0015BCC0:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 768u);  c.pc = t; return; }
L_0015BCF0:
    c.f[3] = ld32((c.r[5].w[0]));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[3]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[29], c.r[29].w[0] - 64u);  if (t) { goto L_0015BD28; } }
    c.f[0] = ld32((c.r[7].w[0]));
    fpu_div(c, 0u, c.f[0], c.f[3]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[8].w[0]), c.f[0]);  if (t) { goto L_0015BD2C; } }
L_0015BD28:
    st32((c.r[8].w[0]), 0u);
    c.budget -= 1;
L_0015BD2C:
    c.r[1].d[0] = c.r[9].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[10], 0u + 1u);  if (t) { goto L_0015BE00; } }
    set32(c.r[11], c.r[4].w[0] + 4u);
    set32(c.r[12], c.r[7].w[0] + 4u);
    set32(c.r[6], c.r[6].w[0] + 4u);
    set32(c.r[5], c.r[5].w[0] + 4u);
    set32(c.r[4], c.r[29].w[0] + 4u);
    set32(c.r[7], c.r[8].w[0] + 4u);
    c.f[2] = 0u;
    c.budget -= 7;
L_0015BD54:
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[3]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0015BD80; } }
    c.f[0] = ld32((c.r[6].w[0] - 4u));
    fpu_div(c, 0u, c.f[0], c.f[3]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] - 4u), c.f[0]);  if (t) { goto L_0015BD88; } }
L_0015BD80:
    st32((c.r[4].w[0] - 4u), 0u);
    c.budget -= 2;
L_0015BD88:
    c.f[4] = ld32((c.r[11].w[0]));
    c.f[1] = ld32((c.r[4].w[0] - 4u));
    c.f[0] = ld32((c.r[5].w[0]));
    c.f[1] = fp::mul(c.f[4], c.f[1]);
    c.f[3] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[3]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0015BDD0; } }
    c.f[1] = ld32((c.r[7].w[0] - 4u));
    c.f[0] = ld32((c.r[12].w[0]));
    c.f[1] = fp::mul(c.f[4], c.f[1]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_div(c, 0u, c.f[0], c.f[3]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0]), c.f[0]);  if (t) { goto L_0015BDD8; } }
L_0015BDD0:
    st32((c.r[7].w[0]), 0u);
    c.budget -= 2;
L_0015BDD8:
    set32(c.r[10], c.r[10].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] + 4u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    set32(c.r[11], c.r[11].w[0] + 4u);
    set32(c.r[5], c.r[5].w[0] + 4u);
    set32(c.r[7], c.r[7].w[0] + 4u);
    c.r[3].d[0] = c.r[10].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[12], c.r[12].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015BD54u | kUnwind; return; } goto L_0015BD54; } }
    c.budget -= 1;
L_0015BE00:
    set32(c.r[5], c.r[9].w[0] - 2u);
    c.budget -= 3;
    if (c.r[5].sd[0] < 0) { set32(c.r[29], c.r[29].w[0] + 64u);  goto L_0015BE4C; }
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[8].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[3], c.r[3].w[0]);
    c.budget -= 4;
L_0015BE1C:
    c.f[2] = ld32((c.r[3].w[0]));
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = ld32((c.r[4].w[0]));
    set32(c.r[5], c.r[5].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] - 4u);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[4].w[0]), c.f[0]);
    c.budget -= 10;
    { const bool t = c.r[5].sd[0] >= 0; set32(c.r[4], c.r[4].w[0] - 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015BE1Cu | kUnwind; return; } goto L_0015BE1C; } }
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 2;
L_0015BE4C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0015BE60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BE70u);  if (depth < kMaxDepth) unit_0029(c, 68u, depth + 1u); else { c.pc = 0x001A4F70u; return; } if (c.pc != 0x0015BE70u) [[unlikely]] return; }
L_0015BE70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BE78u);  if (depth < kMaxDepth) unit_0029(c, 60u, depth + 1u); else { c.pc = 0x001A4E70u; return; } if (c.pc != 0x0015BE78u) [[unlikely]] return; }
L_0015BE78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BE80u);  if (depth < kMaxDepth) unit_000E(c, 136u, depth + 1u); else { c.pc = 0x00139F30u; return; } if (c.pc != 0x0015BE80u) [[unlikely]] return; }
L_0015BE80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BE88u);  if (depth < kMaxDepth) unit_000E(c, 171u, depth + 1u); else { c.pc = 0x0013A680u; return; } if (c.pc != 0x0015BE88u) [[unlikely]] return; }
L_0015BE88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BE90u);  if (depth < kMaxDepth) unit_0080(c, 270u, depth + 1u); else { c.pc = 0x003036C0u; return; } if (c.pc != 0x0015BE90u) [[unlikely]] return; }
L_0015BE90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BE98u);  if (depth < kMaxDepth) unit_0081(c, 120u, depth + 1u); else { c.pc = 0x00305EB0u; return; } if (c.pc != 0x0015BE98u) [[unlikely]] return; }
L_0015BE98:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BEA4u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 79u)));  if (depth < kMaxDepth) unit_0025(c, 204u, depth + 1u); else { c.pc = 0x00196560u; return; } if (c.pc != 0x0015BEA4u) [[unlikely]] return; }
L_0015BEA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BEACu);  if (depth < kMaxDepth) unit_0025(c, 235u, depth + 1u); else { c.pc = 0x00196850u; return; } if (c.pc != 0x0015BEACu) [[unlikely]] return; }
L_0015BEAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BEB4u);  if (depth < kMaxDepth) unit_0020(c, 260u, depth + 1u); else { c.pc = 0x00182990u; return; } if (c.pc != 0x0015BEB4u) [[unlikely]] return; }
L_0015BEB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BEBCu);  if (depth < kMaxDepth) unit_00A4(c, 157u, depth + 1u); else { c.pc = 0x003938B0u; return; } if (c.pc != 0x0015BEBCu) [[unlikely]] return; }
L_0015BEBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BEC4u);  if (depth < kMaxDepth) unit_0029(c, 300u, depth + 1u); else { c.pc = 0x001A7560u; return; } if (c.pc != 0x0015BEC4u) [[unlikely]] return; }
L_0015BEC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BECCu);  if (depth < kMaxDepth) unit_000E(c, 191u, depth + 1u); else { c.pc = 0x0013A9E0u; return; } if (c.pc != 0x0015BECCu) [[unlikely]] return; }
L_0015BECC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BED4u);  if (depth < kMaxDepth) unit_0017(c, 181u, depth + 1u); else { c.pc = 0x0015D730u; return; } if (c.pc != 0x0015BED4u) [[unlikely]] return; }
L_0015BED4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BEDCu); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0017(c, 187u, depth + 1u); else { c.pc = 0x0015D8D0u; return; } if (c.pc != 0x0015BEDCu) [[unlikely]] return; }
L_0015BEDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BEE4u);  if (depth < kMaxDepth) unit_0017(c, 250u, depth + 1u); else { c.pc = 0x0015E540u; return; } if (c.pc != 0x0015BEE4u) [[unlikely]] return; }
L_0015BEE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BEECu);  if (depth < kMaxDepth) unit_0025(c, 5u, depth + 1u); else { c.pc = 0x00194070u; return; } if (c.pc != 0x0015BEECu) [[unlikely]] return; }
L_0015BEEC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44150000u);
    c.r[2].d[0] = c.r[2].d[0] | 47514ull;
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x49FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65320ull;
    c.f[14] = c.r[2].w[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BF14u);  if (depth < kMaxDepth) unit_0029(c, 96u, depth + 1u); else { c.pc = 0x001A5340u; return; } if (c.pc != 0x0015BF14u) [[unlikely]] return; }
L_0015BF14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BF1Cu);  if (depth < kMaxDepth) unit_001E(c, 72u, depth + 1u); else { c.pc = 0x00179810u; return; } if (c.pc != 0x0015BF1Cu) [[unlikely]] return; }
L_0015BF1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BF24u);  if (depth < kMaxDepth) unit_001E(c, 187u, depth + 1u); else { c.pc = 0x0017B860u; return; } if (c.pc != 0x0015BF24u) [[unlikely]] return; }
L_0015BF24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BF2Cu);  if (depth < kMaxDepth) unit_001E(c, 202u, depth + 1u); else { c.pc = 0x0017BBF0u; return; } if (c.pc != 0x0015BF2Cu) [[unlikely]] return; }
L_0015BF2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BF34u);  if (depth < kMaxDepth) unit_0093(c, 238u, depth + 1u); else { c.pc = 0x0034F640u; return; } if (c.pc != 0x0015BF34u) [[unlikely]] return; }
L_0015BF34:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00160000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BF40u); set32(c.r[4], c.r[2].w[0] - 11648u);  if (depth < kMaxDepth) unit_0022(c, 228u, depth + 1u); else { c.pc = 0x0018BC70u; return; } if (c.pc != 0x0015BF40u) [[unlikely]] return; }
L_0015BF40:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0015BF50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BF60u);  if (depth < kMaxDepth) unit_0029(c, 68u, depth + 1u); else { c.pc = 0x001A4F70u; return; } if (c.pc != 0x0015BF60u) [[unlikely]] return; }
L_0015BF60:
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[4], c.r[2].w[0] + 4560u);
    set32(c.r[3], 0u + 1u);
    st8((c.r[5].w[0] + 84u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[6], 0u + 512u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 87u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 84u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 88u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 74u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st32((c.r[2].w[0] + 20u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 116u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[2].w[0] + 7u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[2].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[2].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BFE0u); st8((c.r[2].w[0] + 6u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x0015BFE0u) [[unlikely]] return; }
L_0015BFE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[4], c.r[2].w[0] + 3792u);
    set32(c.r[6], 0u + 512u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BFF4u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x0015BFF4u) [[unlikely]] return; }
L_0015BFF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BFFCu);  if (depth < kMaxDepth) unit_0080(c, 270u, depth + 1u); else { c.pc = 0x003036C0u; return; } if (c.pc != 0x0015BFFCu) [[unlikely]] return; }
L_0015BFFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C004u);  if (depth < kMaxDepth) unit_0099(c, 128u, depth + 1u); else { c.pc = 0x003657A0u; return; } if (c.pc != 0x0015C004u) [[unlikely]] return; }
    [[clang::musttail]] return unit_0017(c, 2u, depth);
}

}
