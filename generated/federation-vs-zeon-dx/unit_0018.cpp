#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0018[4096] = {
    1, 0, 2, 3, 4, 0, 5, 0, 0, 0, 0, 0, 0, 0, 6, 0, 7, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 12, 0, 13, 0, 14,
    15, 0, 0, 0, 0, 0, 0, 16, 0, 17, 0, 0, 18, 0, 0, 0, 0, 0, 0, 19, 0, 20, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0,
    22, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0,
    27, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 29, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    31, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0,
    0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0,
    0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 38, 0, 0, 39, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    59, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0,
    0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    66, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 71, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    80, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0,
    0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 86, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    91, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 98, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    104, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0,
    0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 121, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 131,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0,
    0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 148, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 157, 0, 158, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0,
    0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0018(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00160000;
    case 2u: goto L_00160008;
    case 3u: goto L_0016000C;
    case 4u: goto L_00160010;
    case 5u: goto L_00160018;
    case 6u: goto L_00160038;
    case 7u: goto L_00160040;
    case 8u: goto L_00160058;
    case 9u: goto L_001600A4;
    case 10u: goto L_001600A8;
    case 11u: goto L_001600D0;
    case 12u: goto L_001600EC;
    case 13u: goto L_001600F4;
    case 14u: goto L_001600FC;
    case 15u: goto L_00160100;
    case 16u: goto L_0016011C;
    case 17u: goto L_00160124;
    case 18u: goto L_00160130;
    case 19u: goto L_0016014C;
    case 20u: goto L_00160154;
    case 21u: goto L_00160174;
    case 22u: goto L_00160180;
    case 23u: goto L_001601A4;
    case 24u: goto L_001601B0;
    case 25u: goto L_001601C0;
    case 26u: goto L_001601F0;
    case 27u: goto L_00160200;
    case 28u: goto L_00160210;
    case 29u: goto L_00160230;
    case 30u: goto L_00160234;
    case 31u: goto L_00160280;
    case 32u: goto L_001602A4;
    case 33u: goto L_001602F0;
    case 34u: goto L_00160314;
    case 35u: goto L_00160360;
    case 36u: goto L_00160384;
    case 37u: goto L_001603D0;
    case 38u: goto L_001603E4;
    case 39u: goto L_001603F0;
    case 40u: goto L_00160450;
    case 41u: goto L_00160470;
    case 42u: goto L_001604C0;
    case 43u: goto L_001604E0;
    case 44u: goto L_00160520;
    case 45u: goto L_00160540;
    case 46u: goto L_00160570;
    case 47u: goto L_00160610;
    case 48u: goto L_001606C0;
    case 49u: goto L_00160700;
    case 50u: goto L_0016084C;
    case 51u: goto L_001608D0;
    case 52u: goto L_00160B50;
    case 53u: goto L_00160CF0;
    case 54u: goto L_00160F50;
    case 55u: goto L_00160F9C;
    case 56u: goto L_00160FCC;
    case 57u: goto L_0016103C;
    case 58u: goto L_00161040;
    case 59u: goto L_00161080;
    case 60u: goto L_00161084;
    case 61u: goto L_001610D0;
    case 62u: goto L_0016111C;
    case 63u: goto L_00161174;
    case 64u: goto L_0016118C;
    case 65u: goto L_001611B4;
    case 66u: goto L_00161200;
    case 67u: goto L_0016120C;
    case 68u: goto L_0016122C;
    case 69u: goto L_00161254;
    case 70u: goto L_001612A4;
    case 71u: goto L_001612B0;
    case 72u: goto L_001612B8;
    case 73u: goto L_00161318;
    case 74u: goto L_001613D0;
    case 75u: goto L_0016143C;
    case 76u: goto L_00161520;
    case 77u: goto L_0016154C;
    case 78u: goto L_0016163C;
    case 79u: goto L_0016183C;
    case 80u: goto L_00161880;
    case 81u: goto L_00161888;
    case 82u: goto L_001618C0;
    case 83u: goto L_001618EC;
    case 84u: goto L_00161904;
    case 85u: goto L_0016193C;
    case 86u: goto L_00161940;
    case 87u: goto L_00161954;
    case 88u: goto L_001619EC;
    case 89u: goto L_00161C3C;
    case 90u: goto L_00161D60;
    case 91u: goto L_00161E00;
    case 92u: goto L_00161E10;
    case 93u: goto L_00161E5C;
    case 94u: goto L_00161EB0;
    case 95u: goto L_00161EDC;
    case 96u: goto L_00162080;
    case 97u: goto L_001622EC;
    case 98u: goto L_00162398;
    case 99u: goto L_001623A0;
    case 100u: goto L_001623D4;
    case 101u: goto L_0016243C;
    case 102u: goto L_001624A0;
    case 103u: goto L_001624CC;
    case 104u: goto L_00162500;
    case 105u: goto L_00162520;
    case 106u: goto L_0016254C;
    case 107u: goto L_00162554;
    case 108u: goto L_0016263C;
    case 109u: goto L_001628B4;
    case 110u: goto L_001628BC;
    case 111u: goto L_00162988;
    case 112u: goto L_001629B0;
    case 113u: goto L_00162A10;
    case 114u: goto L_00162A20;
    case 115u: goto L_00162A30;
    case 116u: goto L_00162AF8;
    case 117u: goto L_00162B14;
    case 118u: goto L_00162B4C;
    case 119u: goto L_00162B88;
    case 120u: goto L_00162C6C;
    case 121u: goto L_00162C78;
    case 122u: goto L_00162D24;
    case 123u: goto L_00162DBC;
    case 124u: goto L_00162E3C;
    case 125u: goto L_00162E98;
    case 126u: goto L_00162EB0;
    case 127u: goto L_00163040;
    case 128u: goto L_00163080;
    case 129u: goto L_00163100;
    case 130u: goto L_001631DC;
    case 131u: goto L_001631FC;
    case 132u: goto L_001632A4;
    case 133u: goto L_00163300;
    case 134u: goto L_00163338;
    case 135u: goto L_00163474;
    case 136u: goto L_001634A4;
    case 137u: goto L_00163504;
    case 138u: goto L_0016352C;
    case 139u: goto L_001635EC;
    case 140u: goto L_00163608;
    case 141u: goto L_001636CC;
    case 142u: goto L_00163710;
    case 143u: goto L_0016378C;
    case 144u: goto L_001638E4;
    case 145u: goto L_00163928;
    case 146u: goto L_001639C4;
    case 147u: goto L_00163AA8;
    case 148u: goto L_00163AC8;
    case 149u: goto L_00163AD0;
    case 150u: goto L_00163B50;
    case 151u: goto L_00163B58;
    case 152u: goto L_00163BC8;
    case 153u: goto L_00163C30;
    case 154u: goto L_00163D2C;
    case 155u: goto L_00163D40;
    case 156u: goto L_00163DA8;
    case 157u: goto L_00163E04;
    case 158u: goto L_00163E0C;
    case 159u: goto L_00163E20;
    case 160u: goto L_00163E78;
    case 161u: goto L_00163E90;
    case 162u: goto L_00163F34;
    case 163u: goto L_00163F88;
    case 164u: goto L_00163FC0;
    default: bad_entry(c, 0x00160000u); return;
    }
L_00160000:
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 1;
    c.pc = 0x00160004u; [[clang::musttail]] return dispatch(c, 0u, depth);
L_00160008:
    c.budget -= 1;
L_0016000C:
    c.budget -= 1;
L_00160010:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    c.budget -= 2;
L_00160018:
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    mmi::paddub(c.r[17], c.r[6], c.r[0]);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 8;
L_00160038:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00160040u); c.r[4].d[0] = ld8((c.r[18].w[0]));  if (depth < kMaxDepth) unit_0096(c, 44u, depth + 1u); else { c.pc = 0x003586A0u; return; } if (c.pc != 0x00160040u) [[unlikely]] return; }
L_00160040:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00160078; } }
    set32(c.r[3], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[19].w[0] + c.r[16].w[0]);  if (t) { goto L_001600A4; } }
L_00160058:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    set32(c.r[4], c.r[19].w[0] + c.r[16].w[0]);
    set32(c.r[16], c.r[16].w[0] + 2u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1u)));
    set32(c.r[18], c.r[18].w[0] + 2u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00160090; } }
L_00160078:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    set32(c.r[3], c.r[19].w[0] + c.r[16].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[18], c.r[18].w[0] + 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 6;
L_00160090:
    c.r[3].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00160038u | kUnwind; return; } goto L_00160038; } }
    set32(c.r[3], c.r[19].w[0] + c.r[16].w[0]);
    c.budget -= 2;
L_001600A4:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_001600A8:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001600D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[4], c.r[29].w[0] + 16u);
    set32(c.r[6], 0u + 16u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001600ECu); set32(c.r[5], c.r[2].w[0] + 84u);  if (depth < kMaxDepth) unit_0018(c, 4u, depth + 1u); else { c.pc = 0x00160010u; return; } if (c.pc != 0x001600ECu) [[unlikely]] return; }
L_001600EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001600F4u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0017(c, 238u, depth + 1u); else { c.pc = 0x0015E390u; return; } if (c.pc != 0x001600F4u) [[unlikely]] return; }
L_001600F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001600FCu); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0017(c, 239u, depth + 1u); else { c.pc = 0x0015E3A0u; return; } if (c.pc != 0x001600FCu) [[unlikely]] return; }
L_001600FC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43640000u);
    c.budget -= 1;
L_00160100:
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42780000u);
    c.f[13] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016011Cu); set32(c.r[4], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_0017(c, 240u, depth + 1u); else { c.pc = 0x0015E3B0u; return; } if (c.pc != 0x0016011Cu) [[unlikely]] return; }
L_0016011C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00160124u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0017(c, 239u, depth + 1u); else { c.pc = 0x0015E3A0u; return; } if (c.pc != 0x00160124u) [[unlikely]] return; }
L_00160124:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00160130:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[4], c.r[29].w[0] + 16u);
    set32(c.r[6], 0u + 8u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016014Cu); set32(c.r[5], c.r[2].w[0] + 102u);  if (depth < kMaxDepth) unit_0018(c, 4u, depth + 1u); else { c.pc = 0x00160010u; return; } if (c.pc != 0x0016014Cu) [[unlikely]] return; }
L_0016014C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00160154u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0017(c, 238u, depth + 1u); else { c.pc = 0x0015E390u; return; } if (c.pc != 0x00160154u) [[unlikely]] return; }
L_00160154:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43CE0000u);
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42E00000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00160174u); set32(c.r[4], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_0017(c, 240u, depth + 1u); else { c.pc = 0x0015E3B0u; return; } if (c.pc != 0x00160174u) [[unlikely]] return; }
L_00160174:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00160180:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[16], c.r[3].w[0] + 21656u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 29786u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001601F0; } }
    set32(c.r[5], 0u + 4u);
    c.budget -= 1;
L_001601A4:
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001601B0u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x001601B0u) [[unlikely]] return; }
L_001601B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001601F0; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00160000u);
    c.budget -= 2;
L_001601C0:
    set32(c.r[4], 0u + 20u);
    set32(c.r[3], c.r[3].w[0] + 1216u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[16], c.r[16].w[0] + 2u);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 12;
L_001601F0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[3], 0u + 127u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[5], 0u + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001601A4u | kUnwind; return; } goto L_001601A4; } }
L_00160200:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00160210:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[16], c.r[2].w[0] + 25952u);
    set32(c.r[5], 0u + 4u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00160234u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x00160234u) [[unlikely]] return; }
    goto L_00160234;
L_00160230:
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 1;
L_00160234:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00160270; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00160000u);
    set32(c.r[5], 0u + 20u);
    set32(c.r[4], 0u + 4u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] + 1216u);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 3637u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 13;
L_00160270:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00160280:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[16], c.r[2].w[0] + 25952u);
    set32(c.r[5], 0u + 4u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001602A4u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x001602A4u) [[unlikely]] return; }
L_001602A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001602E0; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00160000u);
    set32(c.r[5], 0u + 20u);
    set32(c.r[4], 0u + 11u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] + 1216u);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 3637u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 13;
L_001602E0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001602F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[16], c.r[2].w[0] + 25952u);
    set32(c.r[5], 0u + 4u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00160314u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x00160314u) [[unlikely]] return; }
L_00160314:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00160350; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00160000u);
    set32(c.r[5], 0u + 20u);
    set32(c.r[4], 0u + 10u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] + 1216u);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 3637u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 13;
L_00160350:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00160360:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[16], c.r[2].w[0] + 25952u);
    set32(c.r[5], 0u + 4u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00160384u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x00160384u) [[unlikely]] return; }
L_00160384:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001603C0; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00160000u);
    set32(c.r[5], 0u + 20u);
    set32(c.r[4], 0u + 12u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] + 1216u);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 3637u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 13;
L_001603C0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001603D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    set32(c.r[5], 0u + 4u);
    c.budget -= 5;
L_001603E4:
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001603F0u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x001603F0u) [[unlikely]] return; }
L_001603F0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_0016042C; }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00160000u);
    set32(c.r[5], 0u + 20u);
    set32(c.r[4], c.r[16].w[0] + 5u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] + 1216u);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 13;
L_0016042C:
    c.r[3].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], 0u + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001603E4u | kUnwind; return; } goto L_001603E4; } }
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00160450:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[5], 0u + 4u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00160470u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x00160470u) [[unlikely]] return; }
L_00160470:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001604A8; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00160000u);
    set32(c.r[5], 0u + 20u);
    set32(c.r[4], 0u + 9u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] + 1216u);
    st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 12;
L_001604A8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001604C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[2], c.r[2].w[0] + 21680u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00160000u < 16384u) { entry = entries_0018[(t - 0x00160000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001604E0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[3], c.r[3].w[0] + 21600u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[4].w[0] + 168u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 88u), 0u);
    st32((c.r[4].w[0] + 84u), 0u);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 80u), 0u);  c.pc = t; return; }
L_00160520:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[2], c.r[2].w[0] + 21696u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00160000u < 16384u) { entry = entries_0018[(t - 0x00160000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00160540:
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 6u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0016055C; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0016055C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00160570:
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 6u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[6], c.r[4].w[0] + 320u);  if (t) { goto L_00160608; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001605D0; } }
    c.f[1] = ld32((c.r[6].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D230000u);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    c.f[0] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[2] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[6].w[0]), c.f[0]);  if (t) { goto L_00160600; } }
    st32((c.r[6].w[0]), c.r[3].w[0]);
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0] + 80u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00160600; } }
L_001605D0:
    c.f[1] = ld32((c.r[6].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D230000u);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    c.f[0] = c.r[3].w[0];
    c.f[2] = 0u;
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[6].w[0]), c.f[0]);  if (t) { goto L_00160600; } }
    st32((c.r[6].w[0]), 0u);
    st8((c.r[6].w[0] + 80u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00160600:
    set32(c.r[3], 0u + 2u);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00160608:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00160610:
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 6u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[6], c.r[4].w[0] + 320u);  if (t) { goto L_001606B4; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00160670; } }
    c.f[1] = ld32((c.r[6].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D230000u);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    c.f[0] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[2] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[6].w[0]), c.f[0]);  if (t) { goto L_001606AC; } }
    st32((c.r[6].w[0]), c.r[3].w[0]);
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0] + 80u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001606AC; } }
L_00160670:
    c.f[1] = ld32((c.r[6].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D230000u);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    c.f[0] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3ECC0000u);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 13;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[6].w[0]), c.f[0]);  if (t) { goto L_001606AC; } }
    st32((c.r[6].w[0]), c.r[3].w[0]);
    st8((c.r[6].w[0] + 80u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_001606AC:
    set32(c.r[3], 0u + 2u);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001606B4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001606C0:
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[6], c.r[3].w[0] + 25952u);
    set32(c.r[3], 0u + 6u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_001606F4; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 3635u)));
    set32(c.r[3], 0u + 11u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001606F4; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001606F4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00160700:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[8], c.r[3].w[0] + 25952u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[3], c.r[4].w[0] + 320u);  if (t) { goto L_0016082C; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_00160754; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[5], c.r[6].w[0] + 1u);  if (t) { goto L_00160738; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));  if (t) { goto L_001608A4; } }
    set32(c.r[5], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_00160738:
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[5], 0u + 20u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st32((c.r[3].w[0]), 0u);
    st32((c.r[3].w[0] + 4u), 0u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 80u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001608A0; } }
L_00160754:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00160768; } }
    set32(c.r[5], c.r[5].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 2;
L_00160768:
    c.f[1] = ld32((c.r[3].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3CF50000u);
    c.r[5].d[0] = c.r[5].d[0] | 49807ull;
    c.f[0] = c.r[5].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[2] = c.r[5].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[3].w[0]), c.f[0]);  if (t) { goto L_0016079C; } }
    st32((c.r[3].w[0]), c.r[5].w[0]);
    c.budget -= 1;
L_0016079C:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 166u)));
    set32(c.r[5], 0u + 9u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 3635u)));
    c.budget -= 7;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_001607D4; } }
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 166u)));
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.r[7].d[0] = c.r[7].d[0] & 4ull;
    if (c.r[7].d[0] != 0) c.r[6].d[0] = c.r[5].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 48u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { goto L_001607D8; } }
L_001607D4:
    st8((c.r[3].w[0] + 48u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_001607D8:
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 3u)));
    c.r[5].d[0] = c.r[5].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_001607F4; } }
    set32(c.r[5], 0u + 1u);
    st8((c.r[3].w[0] + 48u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 2;
L_001607F4:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 3635u)));
    set32(c.r[3], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001608A0; } }
    set32(c.r[3], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001608A0; } }
    set32(c.r[3], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001608A0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001608A0; } }
L_0016082C:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3D750000u);
    c.r[5].d[0] = c.r[5].d[0] | 49807ull;
    c.f[2] = c.r[5].w[0];
    c.f[1] = 0u;
    set32(c.r[5], c.r[6].w[0] + 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.budget -= 8;
L_0016084C:
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[3].w[0] + 4u), c.f[0]);  if (t) { goto L_00160864; } }
    st32((c.r[3].w[0] + 4u), 0u);
    c.budget -= 1;
L_00160864:
    c.f[2] = ld32((c.r[3].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3D750000u);
    c.r[5].d[0] = c.r[5].d[0] | 49807ull;
    c.f[1] = c.r[5].w[0];
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[3].w[0]), c.f[1]);  if (t) { goto L_001608A0; } }
    st32((c.r[3].w[0]), 0u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_001608A0:
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 1;
L_001608A4:
    set32(c.r[3], 0u + 6u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_001608BC; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001608BC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001608D0:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[6], 0u + 2u);
    set32(c.r[3], c.r[3].w[0] + 25952u);
    c.budget -= 6;
    { const bool t = c.r[7].d[0] == c.r[6].d[0]; set32(c.r[5], c.r[4].w[0] + 320u);  if (t) { goto L_00160AAC; } }
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[6].d[0];  if (t) { goto L_00160924; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull; set32(c.r[3], c.r[7].w[0] + 1u);  if (t) { goto L_00160908; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));  if (t) { goto L_00160B24; } }
    set32(c.r[3], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_00160908:
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 20u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[5].w[0]), 0u);
    st32((c.r[5].w[0] + 4u), 0u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 80u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00160B20; } }
L_00160924:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00160938; } }
    set32(c.r[6], c.r[6].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.budget -= 2;
L_00160938:
    c.f[1] = ld32((c.r[5].w[0]));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3CF50000u);
    c.r[6].d[0] = c.r[6].d[0] | 49807ull;
    c.f[0] = c.r[6].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[2] = c.r[6].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[5].w[0]), c.f[0]);  if (t) { goto L_0016096C; } }
    st32((c.r[5].w[0]), c.r[6].w[0]);
    c.budget -= 1;
L_0016096C:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_001609F4; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3635u)));
    set32(c.r[6], 0u + 9u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == c.r[6].d[0];  if (t) { goto L_001609A8; } }
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3CA30000u);
    c.r[6].d[0] = c.r[6].d[0] | 55050ull;
    c.f[0] = c.r[6].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 4u), c.f[0]);  if (t) { goto L_001609C4; } }
L_001609A8:
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3DA30000u);
    c.r[6].d[0] = c.r[6].d[0] | 55050ull;
    c.f[0] = c.r[6].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[5].w[0] + 4u), c.f[0]);
    c.budget -= 7;
L_001609C4:
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[6].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00160A6C; } }
    st32((c.r[5].w[0] + 4u), c.r[6].w[0]);
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 80u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { goto L_00160A6C; } }
L_001609F4:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3635u)));
    set32(c.r[6], 0u + 9u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == c.r[6].d[0];  if (t) { goto L_00160A24; } }
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3CA30000u);
    c.r[6].d[0] = c.r[6].d[0] | 55050ull;
    c.f[0] = c.r[6].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 4u), c.f[0]);  if (t) { goto L_00160A40; } }
L_00160A24:
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3DA30000u);
    c.r[6].d[0] = c.r[6].d[0] | 55050ull;
    c.f[0] = c.r[6].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[5].w[0] + 4u), c.f[0]);
    c.budget -= 7;
L_00160A40:
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3ECC0000u);
    c.r[6].d[0] = c.r[6].d[0] | 52429ull;
    c.f[1] = c.r[6].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00160A6C; } }
    st32((c.r[5].w[0] + 4u), c.r[6].w[0]);
    st8((c.r[5].w[0] + 80u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00160A6C:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3635u)));
    set32(c.r[3], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00160A88; } }
    set32(c.r[3], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_00160A9C; } }
L_00160A88:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    c.r[3].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00160B20; } }
L_00160A9C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00160B20; } }
L_00160AAC:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D750000u);
    c.r[3].d[0] = c.r[3].d[0] | 49807ull;
    c.f[2] = c.r[3].w[0];
    c.f[1] = 0u;
    set32(c.r[3], c.r[6].w[0] + 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 13;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[5].w[0] + 4u), c.f[0]);  if (t) { goto L_00160AE4; } }
    st32((c.r[5].w[0] + 4u), 0u);
    c.budget -= 1;
L_00160AE4:
    c.f[2] = ld32((c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D750000u);
    c.r[3].d[0] = c.r[3].d[0] | 49807ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[5].w[0]), c.f[1]);  if (t) { goto L_00160B20; } }
    st32((c.r[5].w[0]), 0u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_00160B20:
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 1;
L_00160B24:
    set32(c.r[3], 0u + 6u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_00160B3C; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00160B3C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00160B50:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[7], c.r[3].w[0] + 25952u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[3], c.r[4].w[0] + 320u);  if (t) { goto L_00160C4C; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_00160BA4; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[5], c.r[6].w[0] + 1u);  if (t) { goto L_00160B88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));  if (t) { goto L_00160CC8; } }
    set32(c.r[5], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_00160B88:
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[5], 0u + 20u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st32((c.r[3].w[0]), 0u);
    st32((c.r[3].w[0] + 4u), 0u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 80u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00160CC4; } }
L_00160BA4:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00160BB8; } }
    set32(c.r[5], c.r[5].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 2;
L_00160BB8:
    c.f[1] = ld32((c.r[3].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3CF50000u);
    c.r[5].d[0] = c.r[5].d[0] | 49807ull;
    c.f[0] = c.r[5].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[2] = c.r[5].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[3].w[0]), c.f[0]);  if (t) { goto L_00160BEC; } }
    st32((c.r[3].w[0]), c.r[5].w[0]);
    c.budget -= 1;
L_00160BEC:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 166u)));
    set32(c.r[5], 0u + 12u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 3635u)));
    c.budget -= 7;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_00160C24; } }
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 166u)));
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.r[7].d[0] = c.r[7].d[0] & 4ull;
    if (c.r[7].d[0] != 0) c.r[6].d[0] = c.r[5].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 48u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { goto L_00160C28; } }
L_00160C24:
    st8((c.r[3].w[0] + 48u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00160C28:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    c.r[1].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00160CC4; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00160CC4; } }
L_00160C4C:
    st8((c.r[3].w[0] + 48u), static_cast<std::uint8_t>(0u));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3D750000u);
    c.r[5].d[0] = c.r[5].d[0] | 49807ull;
    c.f[2] = c.r[5].w[0];
    c.f[1] = 0u;
    set32(c.r[5], c.r[6].w[0] + 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[3].w[0] + 4u), c.f[0]);  if (t) { goto L_00160C88; } }
    st32((c.r[3].w[0] + 4u), 0u);
    c.budget -= 1;
L_00160C88:
    c.f[2] = ld32((c.r[3].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3D750000u);
    c.r[5].d[0] = c.r[5].d[0] | 49807ull;
    c.f[1] = c.r[5].w[0];
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[3].w[0]), c.f[1]);  if (t) { goto L_00160CC4; } }
    st32((c.r[3].w[0]), 0u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_00160CC4:
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 1;
L_00160CC8:
    set32(c.r[3], 0u + 6u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_00160CE0; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00160CE0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00160CF0:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[7], c.r[3].w[0] + 25952u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[3], c.r[4].w[0] + 320u);  if (t) { goto L_00160EB0; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_00160D44; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[5], c.r[6].w[0] + 1u);  if (t) { goto L_00160D28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));  if (t) { goto L_00160F28; } }
    set32(c.r[5], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_00160D28:
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[5], 0u + 20u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st32((c.r[3].w[0]), 0u);
    st32((c.r[3].w[0] + 4u), 0u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 80u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00160F24; } }
L_00160D44:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00160D58; } }
    set32(c.r[5], c.r[5].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 2;
L_00160D58:
    c.f[1] = ld32((c.r[3].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3CF50000u);
    c.r[5].d[0] = c.r[5].d[0] | 49807ull;
    c.f[0] = c.r[5].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[2] = c.r[5].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[3].w[0]), c.f[0]);  if (t) { goto L_00160D8C; } }
    st32((c.r[3].w[0]), c.r[5].w[0]);
    c.budget -= 1;
L_00160D8C:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_00160E14; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 3635u)));
    set32(c.r[5], 0u + 12u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_00160DC8; } }
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3CA30000u);
    c.r[5].d[0] = c.r[5].d[0] | 55050ull;
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 4u), c.f[0]);  if (t) { goto L_00160DE4; } }
L_00160DC8:
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3DA30000u);
    c.r[5].d[0] = c.r[5].d[0] | 55050ull;
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[3].w[0] + 4u), c.f[0]);
    c.budget -= 7;
L_00160DE4:
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[5].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00160E8C; } }
    st32((c.r[3].w[0] + 4u), c.r[5].w[0]);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 80u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_00160E8C; } }
L_00160E14:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 3635u)));
    set32(c.r[5], 0u + 12u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_00160E44; } }
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3CA30000u);
    c.r[5].d[0] = c.r[5].d[0] | 55050ull;
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 4u), c.f[0]);  if (t) { goto L_00160E60; } }
L_00160E44:
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3DA30000u);
    c.r[5].d[0] = c.r[5].d[0] | 55050ull;
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[3].w[0] + 4u), c.f[0]);
    c.budget -= 7;
L_00160E60:
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3ECC0000u);
    c.r[5].d[0] = c.r[5].d[0] | 52429ull;
    c.f[1] = c.r[5].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00160E8C; } }
    st32((c.r[3].w[0] + 4u), c.r[5].w[0]);
    st8((c.r[3].w[0] + 80u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00160E8C:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    c.r[1].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00160F24; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00160F24; } }
L_00160EB0:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3D750000u);
    c.r[5].d[0] = c.r[5].d[0] | 49807ull;
    c.f[2] = c.r[5].w[0];
    c.f[1] = 0u;
    set32(c.r[5], c.r[6].w[0] + 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 13;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[3].w[0] + 4u), c.f[0]);  if (t) { goto L_00160EE8; } }
    st32((c.r[3].w[0] + 4u), 0u);
    c.budget -= 1;
L_00160EE8:
    c.f[2] = ld32((c.r[3].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3D750000u);
    c.r[5].d[0] = c.r[5].d[0] | 49807ull;
    c.f[1] = c.r[5].w[0];
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[3].w[0]), c.f[1]);  if (t) { goto L_00160F24; } }
    st32((c.r[3].w[0]), 0u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_00160F24:
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 1;
L_00160F28:
    set32(c.r[3], 0u + 6u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_00160F40; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00160F40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00160F50:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[16], c.r[3].w[0] + 25952u);
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[17], c.r[18].w[0] + 320u);  if (t) { goto L_00161388; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], c.r[3].w[0] + 21264u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00160000u < 16384u) { entry = entries_0018[(t - 0x00160000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00160F9C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[18].w[0] + 112u), 0u);
    st32((c.r[18].w[0] + 116u), 0u);
    st32((c.r[17].w[0] + 32u), 0u);
    st32((c.r[17].w[0] + 36u), 0u);
    st32((c.r[17].w[0] + 40u), 0u);
    st32((c.r[17].w[0]), 0u);
    st8((c.r[17].w[0] + 81u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 2108u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 12;
L_00160FCC:
    c.f[1] = ld32((c.r[17].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[3].sd[0] = static_cast<std::int32_t>(0x3E190000u);  goto L_0016106C; }
    st32((c.r[17].w[0] + 32u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[3].sd[0] = static_cast<std::int32_t>(0x3E190000u);  goto L_00161050; }
    st32((c.r[17].w[0] + 36u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[3].sd[0] = static_cast<std::int32_t>(0x3E190000u);  goto L_00161034; }
    st32((c.r[17].w[0] + 40u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00161388; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E190000u);
    c.budget -= 1;
L_00161034:
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    c.f[0] = c.r[3].w[0];
    c.budget -= 2;
L_0016103C:
    c.budget -= 1;
L_00161040:
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 40u), c.f[0]);  if (t) { goto L_00161388; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E190000u);
    c.budget -= 1;
L_00161050:
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 36u), c.f[0]);  if (t) { goto L_00161388; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E190000u);
    c.budget -= 1;
L_0016106C:
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 32u), c.f[0]);  if (t) { goto L_00161388; } }
    goto L_00161084;
L_00161080:
    st32((c.r[17].w[0] + 32u), c.f[0]);
    c.budget -= 1;
L_00161084:
    c.f[1] = ld32((c.r[18].w[0] + 116u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[4].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);  if (t) { goto L_001610B8; } }
    set32(c.r[3], c.r[5].w[0] + 1u);
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 116u), c.r[4].w[0]);  if (t) { goto L_00161388; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.budget -= 1;
L_001610B8:
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 116u), c.f[0]);  if (t) { goto L_00161388; } }
L_001610D0:
    c.f[1] = ld32((c.r[18].w[0] + 112u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[4].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x3E190000u);  if (t) { goto L_00161104; } }
    set32(c.r[3], c.r[5].w[0] + 1u);
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 112u), c.r[4].w[0]);  if (t) { goto L_00161388; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E190000u);
    c.budget -= 1;
L_00161104:
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 112u), c.f[0]);  if (t) { goto L_00161388; } }
L_0016111C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3626u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00161388; } }
    set32(c.r[5], 0u + 1u);
    st8((c.r[17].w[0] + 81u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.f[1] = ld32((c.r[17].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D230000u);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    c.f[0] = c.r[3].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[4].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[17].w[0]), c.f[0]);  if (t) { goto L_00161388; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[17].w[0]), c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 3708u), static_cast<std::uint16_t>(c.r[5].w[0]));  if (t) { goto L_00161388; } }
L_00161174:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 6u)));
    set32(c.r[2], c.r[2].w[0] << (c.r[3].w[0] & 31u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016118Cu); c.r[4].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_000E(c, 164u, depth + 1u); else { c.pc = 0x0013A470u; return; } if (c.pc != 0x0016118Cu) [[unlikely]] return; }
L_0016118C:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001611C4; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 6u)));
    set32(c.r[2], c.r[2].w[0] << (c.r[3].w[0] & 31u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001611B4u); c.r[4].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_000E(c, 164u, depth + 1u); else { c.pc = 0x0013A470u; return; } if (c.pc != 0x001611B4u) [[unlikely]] return; }
L_001611B4:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00161214; } }
L_001611C4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2108u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00161214; } }
    set32(c.r[2], 0u + 30u);
    st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2108u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[16].w[0] + 2108u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2108u)));
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 3606u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161200u); st16((c.r[16].w[0] + 2068u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0016(c, 109u, depth + 1u); else { c.pc = 0x0015A730u; return; } if (c.pc != 0x00161200u) [[unlikely]] return; }
L_00161200:
    set32(c.r[5], 0u + 43u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016120Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x0016120Cu) [[unlikely]] return; }
L_0016120C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (t) { goto L_001612B4; } }
L_00161214:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 6u)));
    set32(c.r[2], c.r[2].w[0] << (c.r[3].w[0] & 31u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016122Cu); c.r[4].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_000E(c, 164u, depth + 1u); else { c.pc = 0x0013A470u; return; } if (c.pc != 0x0016122Cu) [[unlikely]] return; }
L_0016122C:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00161264; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 6u)));
    set32(c.r[2], c.r[2].w[0] << (c.r[3].w[0] & 31u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161254u); c.r[4].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_000E(c, 164u, depth + 1u); else { c.pc = 0x0013A470u; return; } if (c.pc != 0x00161254u) [[unlikely]] return; }
L_00161254:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] & 1024ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001612B0; } }
L_00161264:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2108u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2107u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001612B0; } }
    set32(c.r[2], 0u + 30u);
    st16((c.r[18].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2108u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 2108u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2108u)));
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 3606u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001612A4u); st16((c.r[16].w[0] + 2068u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0016(c, 109u, depth + 1u); else { c.pc = 0x0015A730u; return; } if (c.pc != 0x001612A4u) [[unlikely]] return; }
L_001612A4:
    set32(c.r[5], 0u + 43u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001612B0u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x001612B0u) [[unlikely]] return; }
L_001612B0:
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 1;
L_001612B4:
    mmi::paddub(c.r[6], c.r[18], c.r[0]);
    c.budget -= 1;
L_001612B8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 164u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], c.r[17].w[0] + c.r[5].w[0]);  goto L_001612E4; }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[6].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 164u)));
    set32(c.r[3], c.r[17].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = c.r[4].d[0] & 4ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 48u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_001612E8; } }
    set32(c.r[3], c.r[17].w[0] + c.r[5].w[0]);
    c.budget -= 1;
L_001612E4:
    st8((c.r[3].w[0] + 48u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_001612E8:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[3].d[0] = c.r[5].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001612B8u | kUnwind; return; } goto L_001612B8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3635u)));
    set32(c.r[3], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00161388; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00161388; } }
L_00161318:
    c.f[1] = ld32((c.r[18].w[0] + 112u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E990000u);
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    c.f[0] = c.r[3].w[0];
    c.f[2] = 0u;
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[18].w[0] + 112u), c.f[0]);  if (t) { goto L_0016134C; } }
    st32((c.r[18].w[0] + 112u), 0u);
    st32((c.r[18].w[0] + 116u), 0u);
    st8((c.r[17].w[0] + 81u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_0016134C:
    c.f[2] = ld32((c.r[17].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DA30000u);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0]), c.f[1]);  if (t) { goto L_00161388; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[17].w[0]), 0u);
    c.budget -= 4;
L_00161388:
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 6u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001613B4; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001613B4; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[18].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001613B4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001613D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[16], c.r[3].w[0] + 25952u);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    set32(c.r[3], 0u + 4u);
    c.budget -= 12;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[17], c.r[18].w[0] + 320u);  if (t) { goto L_00161864; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (t) { goto L_00161548; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00161484; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_00161458; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[3], c.r[5].w[0] + 1u);  if (t) { goto L_00161438; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3635u)));  if (t) { goto L_00161D00; } }
    set32(c.r[3], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_00161438:
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_0016143C:
    st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st8((c.r[17].w[0] + 81u), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0]), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    st8((c.r[17].w[0] + 82u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 3834u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 7;
L_00161458:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 164u)));
    c.r[3].d[0] = c.r[3].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00161CFC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00161CFC; } }
L_00161484:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 164u)));
    c.r[1].d[0] = c.r[3].sd[0] < 21ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0016149C; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0016149C:
    c.f[1] = ld32((c.r[17].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D230000u);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    c.f[0] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[2] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[17].w[0]), c.f[0]);  if (t) { goto L_001614D0; } }
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_001614D0:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 164u)));
    set32(c.r[3], 0u + 21u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00161CFC; } }
    c.f[0] = ld32((c.r[17].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00161CFC; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    set32(c.r[4], 0u + 10u);
    set32(c.r[3], 0u + 1u);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st16((c.r[18].w[0] + 166u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st8((c.r[17].w[0] + 81u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
L_00161520:
    set32(c.r[6], c.r[6].w[0] + 2u);
    st32((c.r[17].w[0] + 8u), 0u);
    st32((c.r[17].w[0] + 12u), 0u);
    c.r[3].d[0] = c.r[6].sd[0] < 6ll ? 1ull : 0ull;
    set32(c.r[17], c.r[17].w[0] + 8u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00161520u | kUnwind; return; } goto L_00161520; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00161CFC; } }
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 1;
L_00161548:
    mmi::paddub(c.r[3], c.r[17], c.r[0]);
    c.budget -= 1;
L_0016154C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[6], 0u + 1u);  if (t) { goto L_001615CC; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3691u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_001615C8; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_00161588; } }
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[5].d[0] = c.r[5].d[0] | 52429ull;
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.budget -= 7;
L_00161588:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3691u)));
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_001617D8; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 3692u)));
    c.r[1].d[0] = c.r[5].sd[0] < 12ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001617D8; } }
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[5].d[0] = c.r[5].d[0] | 52429ull;
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 8u), c.f[0]);  if (t) { goto L_001617D8; } }
L_001615C8:
    set32(c.r[6], 0u + 1u);
    c.budget -= 1;
L_001615CC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[6].d[0]; set32(c.r[5], 0u + 3u);  if (t) { goto L_0016165C; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3691u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00161658; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[6].d[0];  if (t) { goto L_00161618; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 3692u)));
    c.r[1].d[0] = c.r[5].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00161618; } }
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[5].d[0] = c.r[5].d[0] | 52429ull;
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.budget -= 8;
L_00161618:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3691u)));
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_001617D8; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 3692u)));
    c.r[1].d[0] = c.r[5].sd[0] < 26ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001617D8; } }
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.budget -= 1;
L_0016163C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[5].d[0] = c.r[5].d[0] | 52429ull;
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 8u), c.f[0]);  if (t) { goto L_001617D8; } }
L_00161658:
    set32(c.r[5], 0u + 3u);
    c.budget -= 1;
L_0016165C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[5].d[0]; set32(c.r[5], 0u + 4u);  if (t) { goto L_00161704; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3691u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_00161690; } }
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[5].d[0] = c.r[5].d[0] | 52429ull;
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.budget -= 8;
L_00161690:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3691u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_001616C0; } }
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[5].d[0] = c.r[5].d[0] | 52429ull;
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.budget -= 8;
L_001616C0:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3691u)));
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_001617D8; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 3692u)));
    c.r[1].d[0] = c.r[5].sd[0] < 12ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001617D8; } }
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[5].d[0] = c.r[5].d[0] | 52429ull;
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 8u), c.f[0]);  if (t) { goto L_001617D8; } }
    set32(c.r[5], 0u + 4u);
    c.budget -= 1;
L_00161704:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_001617B8; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3691u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_00161738; } }
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[5].d[0] = c.r[5].d[0] | 52429ull;
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.budget -= 8;
L_00161738:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3691u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_00161778; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 3692u)));
    c.r[1].d[0] = c.r[5].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00161778; } }
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[5].d[0] = c.r[5].d[0] | 52429ull;
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.budget -= 8;
L_00161778:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3691u)));
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_001617D8; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 3692u)));
    c.r[1].d[0] = c.r[5].sd[0] < 26ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001617D8; } }
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[5].d[0] = c.r[5].d[0] | 52429ull;
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 8u), c.f[0]);  if (t) { goto L_001617D8; } }
L_001617B8:
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[5].d[0] = c.r[5].d[0] | 52429ull;
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.budget -= 8;
L_001617D8:
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001617F8; } }
    st32((c.r[3].w[0] + 8u), 0u);
    c.budget -= 1;
L_001617F8:
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[5].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[4], c.r[4].w[0] + 1u);  goto L_00161824; }
    st32((c.r[3].w[0] + 8u), c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 3;
L_00161824:
    c.r[5].d[0] = c.r[4].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016154Cu | kUnwind; return; } goto L_0016154C; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 166u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[18].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0016183C:
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00161CFC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 2068u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 60u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00161CFC; } }
L_00161864:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 166u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[18].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 6u)));
    set32(c.r[2], c.r[2].w[0] << (c.r[3].w[0] & 31u));
    c.budget -= 7;
L_00161880:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161888u); c.r[4].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_000E(c, 164u, depth + 1u); else { c.pc = 0x0013A470u; return; } if (c.pc != 0x00161888u) [[unlikely]] return; }
L_00161888:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001618EC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3690u)));
    c.r[1].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001618EC; } }
    set32(c.r[3], c.r[2].w[0] - 3u);
    set32(c.r[4], ld32((c.r[16].w[0] + 3692u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
L_001618C0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001618EC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 82u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001618EC; } }
    st8((c.r[17].w[0] + 82u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 43u);
    st8((c.r[16].w[0] + 3691u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001618ECu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x001618ECu) [[unlikely]] return; }
L_001618EC:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 6u)));
    set32(c.r[2], c.r[2].w[0] << (c.r[3].w[0] & 31u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161904u); c.r[4].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_000E(c, 164u, depth + 1u); else { c.pc = 0x0013A470u; return; } if (c.pc != 0x00161904u) [[unlikely]] return; }
L_00161904:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] & 8192ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00161954; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3690u)));
    c.r[1].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00161954; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 3692u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00161954; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 82u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00161954; } }
    goto L_00161940;
L_0016193C:
    c.budget -= 1;
L_00161940:
    st8((c.r[16].w[0] + 3691u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], 0u + 43u);
    st8((c.r[17].w[0] + 82u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161954u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x00161954u) [[unlikely]] return; }
L_00161954:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3691u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00161968; } }
    st32((c.r[16].w[0] + 3692u), 0u);
    st8((c.r[17].w[0] + 82u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00161968:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3691u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001619B4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 3692u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 3692u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3690u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 3692u)));
    set32(c.r[4], c.r[3].w[0] - 3u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001619B4; } }
    st32((c.r[16].w[0] + 3692u), c.r[3].w[0]);
    st8((c.r[17].w[0] + 82u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_001619B4:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3691u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (t) { goto L_001619E8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 3692u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[16].w[0] + 3692u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 3692u)));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_001619E4; } }
    st32((c.r[16].w[0] + 3692u), 0u);
    st8((c.r[17].w[0] + 82u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_001619E4:
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 1;
L_001619E8:
    mmi::paddub(c.r[3], c.r[17], c.r[0]);
    c.budget -= 1;
L_001619EC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[6], 0u + 1u);  if (t) { goto L_00161A6C; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3691u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00161A68; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_00161A28; } }
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[5].d[0] = c.r[5].d[0] | 52429ull;
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.budget -= 7;
L_00161A28:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3691u)));
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_00161C78; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 3692u)));
    c.r[1].d[0] = c.r[5].sd[0] < 12ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00161C78; } }
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[5].d[0] = c.r[5].d[0] | 52429ull;
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 8u), c.f[0]);  if (t) { goto L_00161C78; } }
L_00161A68:
    set32(c.r[6], 0u + 1u);
    c.budget -= 1;
L_00161A6C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[6].d[0]; set32(c.r[5], 0u + 3u);  if (t) { goto L_00161AFC; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3691u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00161AF8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[6].d[0];  if (t) { goto L_00161AB8; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 3692u)));
    c.r[1].d[0] = c.r[5].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00161AB8; } }
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[5].d[0] = c.r[5].d[0] | 52429ull;
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.budget -= 8;
L_00161AB8:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3691u)));
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_00161C78; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 3692u)));
    c.r[1].d[0] = c.r[5].sd[0] < 26ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00161C78; } }
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[5].d[0] = c.r[5].d[0] | 52429ull;
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 8u), c.f[0]);  if (t) { goto L_00161C78; } }
L_00161AF8:
    set32(c.r[5], 0u + 3u);
    c.budget -= 1;
L_00161AFC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[5].d[0]; set32(c.r[5], 0u + 4u);  if (t) { goto L_00161BA4; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3691u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_00161B30; } }
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[5].d[0] = c.r[5].d[0] | 52429ull;
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.budget -= 8;
L_00161B30:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3691u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_00161B60; } }
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[5].d[0] = c.r[5].d[0] | 52429ull;
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.budget -= 8;
L_00161B60:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3691u)));
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_00161C78; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 3692u)));
    c.r[1].d[0] = c.r[5].sd[0] < 12ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00161C78; } }
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[5].d[0] = c.r[5].d[0] | 52429ull;
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 8u), c.f[0]);  if (t) { goto L_00161C78; } }
    set32(c.r[5], 0u + 4u);
    c.budget -= 1;
L_00161BA4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_00161C58; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3691u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_00161BD8; } }
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[5].d[0] = c.r[5].d[0] | 52429ull;
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.budget -= 8;
L_00161BD8:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3691u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_00161C18; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 3692u)));
    c.r[1].d[0] = c.r[5].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00161C18; } }
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[5].d[0] = c.r[5].d[0] | 52429ull;
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.budget -= 8;
L_00161C18:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3691u)));
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_00161C78; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 3692u)));
    c.r[1].d[0] = c.r[5].sd[0] < 26ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00161C78; } }
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.budget -= 1;
L_00161C3C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[5].d[0] = c.r[5].d[0] | 52429ull;
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 8u), c.f[0]);  if (t) { goto L_00161C78; } }
L_00161C58:
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[5].d[0] = c.r[5].d[0] | 52429ull;
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.budget -= 8;
L_00161C78:
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00161C98; } }
    st32((c.r[3].w[0] + 8u), 0u);
    c.budget -= 1;
L_00161C98:
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[5].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[4], c.r[4].w[0] + 1u);  goto L_00161CC4; }
    st32((c.r[3].w[0] + 8u), c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 3;
L_00161CC4:
    c.r[5].d[0] = c.r[4].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001619ECu | kUnwind; return; } goto L_001619EC; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 60u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 2068u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00161CFC; } }
    st16((c.r[17].w[0] + 60u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 20u), 0u);
    st32((c.r[17].w[0] + 24u), 0u);
    c.budget -= 7;
L_00161CFC:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3635u)));
    c.budget -= 1;
L_00161D00:
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00161D20; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 3834u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00161D3C; } }
L_00161D20:
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 6u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00161D3C; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[18].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00161D3C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00161D60:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[6], c.r[4].w[0] + 320u);  if (t) { goto L_00161D94; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[3], c.r[5].w[0] + 1u);  if (t) { goto L_00161D84; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));  if (t) { goto L_00161DDC; } }
    set32(c.r[3], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_00161D84:
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 112u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st32((c.r[6].w[0] + 44u), c.r[3].w[0]);
    c.budget -= 4;
L_00161D94:
    c.f[2] = ld32((c.r[4].w[0] + 112u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[1] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[1] = fp::add(c.f[2], c.f[1]);
    st32((c.r[4].w[0] + 112u), c.f[1]);
    c.f[1] = ld32((c.r[6].w[0] + 44u));
    c.f[0] = c.r[3].w[0];
    c.f[2] = 0u;
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 15;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[6].w[0] + 44u), c.f[0]);  if (t) { goto L_00161DD8; } }
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[6].w[0] + 44u), 0u);
    c.budget -= 2;
L_00161DD8:
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 1;
L_00161DDC:
    set32(c.r[3], 0u + 6u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_00161DF4; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00161DF4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00161E00:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00161E10:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    set32(c.r[17], c.r[18].w[0] + 320u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[16], c.r[4].w[0] + 25952u);  if (t) { goto L_00162934; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], c.r[4].w[0] + 21296u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00160000u < 16384u) { entry = entries_0018[(t - 0x00160000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00161E5C:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[5], 0u + 60u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st8((c.r[17].w[0] + 81u), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0]), 0u);
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    st8((c.r[17].w[0] + 79u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 83u), static_cast<std::uint8_t>(0u));
    st16((c.r[17].w[0] + 70u), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0] + 66u), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0] + 68u), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0] + 74u), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0] + 76u), static_cast<std::uint16_t>(0u));
    st8((c.r[17].w[0] + 78u), static_cast<std::uint8_t>(0u));
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00161EB0u); st8((c.r[16].w[0] + 3834u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x00161EB0u) [[unlikely]] return; }
L_00161EB0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] + 2u);
    st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 164u)));
    c.r[3].d[0] = c.r[3].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00162934; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00162934; } }
L_00161EDC:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 164u)));
    c.r[1].d[0] = c.r[3].sd[0] < 21ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00161F0C; } }
    set32(c.r[3], c.r[3].w[0] + 2u);
    st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 164u)));
    c.r[1].d[0] = c.r[3].sd[0] < 22ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00161F0C; } }
    set32(c.r[3], 0u + 21u);
    st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00161F0C:
    c.f[1] = ld32((c.r[17].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[2] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[17].w[0]), c.f[0]);  if (t) { goto L_00161F40; } }
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_00161F40:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 164u)));
    set32(c.r[3], 0u + 21u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00162934; } }
    c.f[0] = ld32((c.r[17].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00162934; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[17].w[0] + 81u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2070u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00162134; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[6], c.r[3].w[0] - 22912u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[5], c.r[3].w[0] - 22910u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 79u)));
    set32(c.r[3], c.r[7].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[10], c.r[3].w[0] - 22908u);
    st16((c.r[17].w[0] + 52u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[9], c.r[3].w[0] - 22906u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 79u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[7], c.r[3].w[0] - 13232u);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[6], c.r[3].w[0] - 13230u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[8].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[8].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    set32(c.r[4], 0u + 40u);
    st16((c.r[17].w[0] + 54u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10u)));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 79u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[5], c.r[3].w[0] - 13228u);
    set32(c.r[3], 0u + 3u);
    set32(c.r[11], c.r[12].w[0] << 4);
    set32(c.r[11], c.r[11].w[0] + c.r[12].w[0]);
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    set32(c.r[8], c.r[8].w[0] << 1);
    set32(c.r[8], c.r[8].w[0] + c.r[10].w[0]);
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0])));
    st16((c.r[17].w[0] + 56u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10u)));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 79u)));
    set32(c.r[10], c.r[11].w[0] << 4);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    set32(c.r[10], c.r[10].w[0] << 2);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    set32(c.r[8], c.r[8].w[0] << 1);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0])));
    st16((c.r[17].w[0] + 62u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 62u)));
    set32(c.r[8], c.r[9].w[0] << 1);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    c.budget -= 60;
L_00162080:
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0])));
    st16((c.r[17].w[0] + 70u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 62u)));
    set32(c.r[7], c.r[8].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    st16((c.r[17].w[0] + 64u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 62u)));
    set32(c.r[6], c.r[7].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    st16((c.r[17].w[0] + 66u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[17].w[0] + 68u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st8((c.r[17].w[0] + 84u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 52u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 23;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001620E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 72u), static_cast<std::uint16_t>(0u));  if (t) { goto L_001622D4; } }
L_001620E4:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 79u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[5], c.r[3].w[0] - 22902u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[6], c.r[7].w[0] << 4);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] - 13232u);
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.budget -= 20;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 72u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001622D4; } }
L_00162134:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[6], c.r[3].w[0] - 11696u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[5], c.r[3].w[0] - 11694u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 79u)));
    set32(c.r[3], c.r[7].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[10], c.r[3].w[0] - 11692u);
    st16((c.r[17].w[0] + 52u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[9], c.r[3].w[0] - 11690u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 79u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[7], c.r[3].w[0] - 12352u);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[6], c.r[3].w[0] - 12350u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[8].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[8].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    set32(c.r[4], 0u + 40u);
    st16((c.r[17].w[0] + 54u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10u)));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 79u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[5], c.r[3].w[0] - 12348u);
    set32(c.r[3], 0u + 3u);
    set32(c.r[11], c.r[12].w[0] << 4);
    set32(c.r[11], c.r[11].w[0] + c.r[12].w[0]);
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    set32(c.r[8], c.r[8].w[0] << 1);
    set32(c.r[8], c.r[8].w[0] + c.r[10].w[0]);
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0])));
    st16((c.r[17].w[0] + 56u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10u)));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 79u)));
    set32(c.r[10], c.r[11].w[0] << 4);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    set32(c.r[10], c.r[10].w[0] << 2);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    set32(c.r[8], c.r[8].w[0] << 1);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0])));
    st16((c.r[17].w[0] + 62u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 62u)));
    set32(c.r[8], c.r[9].w[0] << 1);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0])));
    st16((c.r[17].w[0] + 70u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 62u)));
    set32(c.r[7], c.r[8].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    st16((c.r[17].w[0] + 64u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 62u)));
    set32(c.r[6], c.r[7].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    st16((c.r[17].w[0] + 66u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[17].w[0] + 68u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st8((c.r[17].w[0] + 84u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 52u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 83;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00162288; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 72u), static_cast<std::uint16_t>(0u));  if (t) { goto L_001622D4; } }
L_00162288:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 79u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[5], c.r[3].w[0] - 11686u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[6], c.r[7].w[0] << 4);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] - 12352u);
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    st16((c.r[17].w[0] + 72u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 19;
L_001622D4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 79u)));
    set32(c.r[3], c.r[3].w[0] + 4u);
    st8((c.r[17].w[0] + 79u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[17].w[0] + 8u), 0u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 116u), 0u);  if (t) { goto L_00162934; } }
L_001622EC:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 70u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0016232C; } }
    c.f[1] = ld32((c.r[18].w[0] + 116u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[2] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[18].w[0] + 116u), c.f[0]);  if (t) { goto L_0016232C; } }
    st32((c.r[18].w[0] + 116u), c.r[3].w[0]);
    c.budget -= 1;
L_0016232C:
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[4].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[17].w[0] + 8u), c.f[0]);  if (t) { goto L_00162934; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[17].w[0] + 8u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 64u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00162934; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 78u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 64u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 66u)));
    set32(c.r[4], c.r[2].w[0] + 29248u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00162398u); set32(c.r[6], c.r[3].w[0] - 1u);  if (depth < kMaxDepth) unit_0025(c, 262u, depth + 1u); else { c.pc = 0x00196BF0u; return; } if (c.pc != 0x00162398u) [[unlikely]] return; }
L_00162398:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3635u)));  if (t) { goto L_00162938; } }
L_001623A0:
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 83u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 64u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001624B4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 78u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001624B4; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 76u)));
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001623D4u); st16((c.r[17].w[0] + 76u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0025(c, 271u, depth + 1u); else { c.pc = 0x00196E40u; return; } if (c.pc != 0x001623D4u) [[unlikely]] return; }
L_001623D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001624B4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2070u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0016241C; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 62u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[3], c.r[2].w[0] - 13232u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 84u)));
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 66u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0016244C; } }
L_0016241C:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 62u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[3], c.r[2].w[0] - 12352u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 84u)));
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 8;
L_0016243C:
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    st16((c.r[17].w[0] + 66u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_0016244C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 66u)));
    set32(c.r[2], 0u + 255u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001624A8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001624A8; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 78u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 40u);
    st16((c.r[17].w[0] + 68u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 84u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[4], c.r[2].w[0] + 29248u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 84u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 64u)));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 66u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001624A0u); set32(c.r[6], c.r[2].w[0] - 1u);  if (depth < kMaxDepth) unit_0025(c, 262u, depth + 1u); else { c.pc = 0x00196BF0u; return; } if (c.pc != 0x001624A0u) [[unlikely]] return; }
L_001624A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));  if (t) { goto L_001624B8; } }
L_001624A8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 68u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[17].w[0] + 68u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_001624B4:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.budget -= 1;
L_001624B8:
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 6u)));
    set32(c.r[2], c.r[2].w[0] << (c.r[3].w[0] & 31u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001624CCu); c.r[4].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_000E(c, 164u, depth + 1u); else { c.pc = 0x0013A470u; return; } if (c.pc != 0x001624CCu) [[unlikely]] return; }
L_001624CC:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 32768ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00162508; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 83u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 78u), static_cast<std::uint8_t>(0u));
    st16((c.r[17].w[0] + 72u), static_cast<std::uint16_t>(0u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00162500u); st16((c.r[17].w[0] + 52u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0025(c, 270u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x00162500u) [[unlikely]] return; }
L_00162500:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00162934; } }
L_00162508:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 6u)));
    set32(c.r[2], c.r[2].w[0] << (c.r[3].w[0] & 31u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00162520u); c.r[4].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_000E(c, 164u, depth + 1u); else { c.pc = 0x0013A470u; return; } if (c.pc != 0x00162520u) [[unlikely]] return; }
L_00162520:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00162934; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 83u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016254Cu); st8((c.r[17].w[0] + 78u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0025(c, 270u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x0016254Cu) [[unlikely]] return; }
L_0016254C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00162934; } }
L_00162554:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 70u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00162598; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00162598; } }
    c.f[1] = ld32((c.r[18].w[0] + 116u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.f[2] = 0u;
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[18].w[0] + 116u), c.f[0]);  if (t) { goto L_00162598; } }
    st32((c.r[18].w[0] + 116u), 0u);
    c.budget -= 1;
L_00162598:
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.f[2] = 0u;
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 8u), c.f[0]);  if (t) { goto L_00162934; } }
    st32((c.r[17].w[0] + 8u), 0u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 52u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[17].w[0] + 52u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 52u)));
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_0016289C; } }
    set32(c.r[3], 0u + 3u);
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2070u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00162740; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[8], c.r[4].w[0] - 22912u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 54u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 56u)));
    set32(c.r[9], c.r[4].w[0] - 22910u);
    set32(c.r[4], c.r[6].w[0] + c.r[5].w[0]);
    st16((c.r[17].w[0] + 54u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[7], c.r[4].w[0] - 13232u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 79u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[6], c.r[4].w[0] - 13230u);
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10u)));
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[5], c.r[10].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + c.r[10].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[8].w[0] + c.r[5].w[0]);
    c.budget -= 19;
L_0016263C:
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    st16((c.r[17].w[0] + 56u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10u)));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 79u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[5], c.r[4].w[0] - 13228u);
    set32(c.r[4], 0u + 40u);
    set32(c.r[10], c.r[11].w[0] << 4);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    set32(c.r[10], c.r[10].w[0] << 2);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    set32(c.r[8], c.r[8].w[0] << 1);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0])));
    st16((c.r[17].w[0] + 62u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 62u)));
    set32(c.r[8], c.r[9].w[0] << 1);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0])));
    st16((c.r[17].w[0] + 70u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 62u)));
    set32(c.r[7], c.r[8].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    st16((c.r[17].w[0] + 64u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 62u)));
    set32(c.r[6], c.r[7].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    st16((c.r[17].w[0] + 66u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[17].w[0] + 68u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st8((c.r[17].w[0] + 84u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 52u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 43;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001626F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 72u), static_cast<std::uint16_t>(0u));  if (t) { goto L_0016288C; } }
L_001626F0:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 79u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[5], c.r[3].w[0] - 22906u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[6], c.r[7].w[0] << 4);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] - 13232u);
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.budget -= 20;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 72u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0016288C; } }
L_00162740:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[8], c.r[4].w[0] - 11696u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 54u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 56u)));
    set32(c.r[9], c.r[4].w[0] - 11694u);
    set32(c.r[4], c.r[6].w[0] + c.r[5].w[0]);
    st16((c.r[17].w[0] + 54u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[7], c.r[4].w[0] - 12352u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 79u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[6], c.r[4].w[0] - 12350u);
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10u)));
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[5], c.r[10].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + c.r[10].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[8].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    st16((c.r[17].w[0] + 56u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10u)));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 79u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[5], c.r[4].w[0] - 12348u);
    set32(c.r[4], 0u + 40u);
    set32(c.r[10], c.r[11].w[0] << 4);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    set32(c.r[10], c.r[10].w[0] << 2);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    set32(c.r[8], c.r[8].w[0] << 1);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0])));
    st16((c.r[17].w[0] + 62u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 62u)));
    set32(c.r[8], c.r[9].w[0] << 1);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0])));
    st16((c.r[17].w[0] + 70u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 62u)));
    set32(c.r[7], c.r[8].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    st16((c.r[17].w[0] + 64u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 62u)));
    set32(c.r[6], c.r[7].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    st16((c.r[17].w[0] + 66u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[17].w[0] + 68u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st8((c.r[17].w[0] + 84u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 52u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 62;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00162840; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 72u), static_cast<std::uint16_t>(0u));  if (t) { goto L_0016288C; } }
L_00162840:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 79u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[5], c.r[3].w[0] - 11690u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[6], c.r[7].w[0] << 4);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] - 12352u);
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    st16((c.r[17].w[0] + 72u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 19;
L_0016288C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 79u)));
    set32(c.r[3], c.r[3].w[0] + 2u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 79u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00162934; } }
L_0016289C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    set32(c.r[5], 0u + 60u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001628B4u); st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x001628B4u) [[unlikely]] return; }
L_001628B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00162934; } }
L_001628BC:
    c.f[1] = ld32((c.r[17].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.f[2] = 0u;
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0]), c.f[0]);  if (t) { goto L_001628E8; } }
    st32((c.r[17].w[0]), 0u);
    c.budget -= 1;
L_001628E8:
    c.f[0] = ld32((c.r[17].w[0]));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00162934; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 2u);
    st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 164u)));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_00162934; } }
    st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 3705u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 3834u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
L_00162934:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3635u)));
    c.budget -= 1;
L_00162938:
    set32(c.r[3], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00162954; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 3705u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001629F0; } }
L_00162954:
    c.f[1] = ld32((c.r[18].w[0] + 116u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 2u);  if (t) { goto L_001629EC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 78u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001629E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00162988u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 272u, depth + 1u); else { c.pc = 0x00196E60u; return; } if (c.pc != 0x00162988u) [[unlikely]] return; }
L_00162988:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_00162998; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 74u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001629E8; } }
L_00162998:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 76u)));
    c.r[3].d[0] = c.r[3].d[0] & 7ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001629E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001629B0u);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x001629B0u) [[unlikely]] return; }
L_001629B0:
    set32(c.r[3], 0u + 3u);
    c.r[4].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001629C4; } }
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 1;
L_001629C4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 74u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_001629E4; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[3].d[0] = c.r[4].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001629E4; } }
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 1;
L_001629E4:
    st16((c.r[17].w[0] + 74u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 1;
L_001629E8:
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_001629EC:
    st8((c.r[18].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_001629F0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00162A10:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00162A20:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_00162A30:
    set32(c.r[29], c.r[29].w[0] - 256u);
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
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[6], ld32((c.r[1].w[0] - 13664u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[20], c.r[2].w[0] + 25952u);
    set32(c.r[5], 0u + 3u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 29496u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[3], c.r[3].w[0] + 21760u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 35;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[1].w[0] - 20396u), c.r[3].w[0]);  if (t) { goto L_00162AD0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[2], c.r[2].w[0] + 21888u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);  if (t) { goto L_00162AE0; } }
L_00162AD0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[2], c.r[2].w[0] + 21920u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    c.budget -= 4;
L_00162AE0:
    set32(c.r[2], 0u + 8u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20354u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00162AF8u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001C(c, 21u, depth + 1u); else { c.pc = 0x00170680u; return; } if (c.pc != 0x00162AF8u) [[unlikely]] return; }
L_00162AF8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[17], c.r[2].w[0] + 21952u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[18], c.r[2].w[0] + 22080u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[19], c.r[2].w[0] + 22112u);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 7;
L_00162B14:
    set32(c.r[5], 0u + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[17].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    st32((c.r[1].w[0] - 20376u), c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] + 20320u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00162B4Cu); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_0019(c, 110u, depth + 1u); else { c.pc = 0x001665E0u; return; } if (c.pc != 0x00162B4Cu) [[unlikely]] return; }
L_00162B4C:
    set32(c.r[2], 0u + 3u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    st32((c.r[1].w[0] - 20396u), c.r[19].w[0]);
    set32(c.r[2], c.r[2].w[0] + 20368u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    set32(c.r[2], 0u + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20354u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00162B88u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001C(c, 21u, depth + 1u); else { c.pc = 0x00170680u; return; } if (c.pc != 0x00162B88u) [[unlikely]] return; }
L_00162B88:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[17], c.r[17].w[0] + 64u);
    set32(c.r[18], c.r[18].w[0] + 16u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 64u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00162B14u | kUnwind; return; } goto L_00162B14; } }
    set32(c.r[2], 0u + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 2070u)));
    set32(c.r[4], 0u + 200u);
    set32(c.r[3], 0u + 220u);
    set32(c.r[2], 0u + 20u);
    if (c.r[5].d[0] != 0) c.r[4].d[0] = c.r[3].d[0];
    st16((c.r[29].w[0] + 248u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[16], c.r[29].w[0] + 250u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 248u)));
    set32(c.r[4], 0u + 427u);
    set32(c.r[3], 0u + 12u);
    set32(c.r[17], c.r[29].w[0] + 212u);
    set32(c.r[5], c.r[2].w[0] + 19u);
    set32(c.r[2], c.r[29].w[0] + 252u);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[8].d[0] = c.r[2].d[0] | 65300ull;
    set32(c.r[2], c.r[29].w[0] + 254u);
    set32(c.r[30], c.r[29].w[0] + 216u);
    set32(c.r[5], c.r[5].w[0] + 19u);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    st32((c.r[29].w[0] + 208u), c.r[4].w[0]);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[30].w[0]), c.r[8].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[6], c.r[2].w[0] + 20332u);
    set32(c.r[23], c.r[29].w[0] + 224u);
    set32(c.r[18], c.r[29].w[0] + 228u);
    set32(c.r[2], c.r[3].w[0] + 20u);
    st32((c.r[23].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[7], ld32((c.r[17].w[0])));
    set32(c.r[4], c.r[2].w[0] - 20416u);
    set32(c.r[19], c.r[29].w[0] + 232u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[7].w[0] + 10u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    st32((c.r[19].w[0]), c.r[8].w[0]);
    st32((c.r[1].w[0] - 20380u), c.r[6].w[0]);
    set32(c.r[5], c.r[29].w[0] + 208u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[5].w[0]);
    set32(c.r[3], c.r[29].w[0] + 248u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 51;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00162C6Cu); st32((c.r[1].w[0] - 20368u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x00162C6Cu) [[unlikely]] return; }
L_00162C6C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[21], c.r[2].w[0] + 22240u);
    mmi::paddub(c.r[22], c.r[0], c.r[0]);
    c.budget -= 3;
L_00162C78:
    c.r[3].d[0] = ld16((c.r[21].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[8].d[0] = c.r[2].d[0] | 65300ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[6], c.r[2].w[0] + 20324u);
    st16((c.r[29].w[0] + 248u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[7].d[0] = ld16((c.r[21].w[0] + 2u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] - 20416u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[5], c.r[29].w[0] + 208u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 248u)));
    set32(c.r[3], c.r[29].w[0] + 248u);
    set32(c.r[7], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[29].w[0] + 252u);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 6u)));
    set32(c.r[7], c.r[7].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 254u);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[2].d[0] = ld16((c.r[21].w[0] + 8u));
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[21].w[0] + 10u));
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[30].w[0]), c.r[8].w[0]);
    c.r[7].d[0] = ld16((c.r[21].w[0] + 12u));
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    st32((c.r[23].w[0]), c.r[2].w[0]);
    c.r[7].d[0] = ld16((c.r[21].w[0] + 14u));
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    st32((c.r[19].w[0]), c.r[8].w[0]);
    st32((c.r[1].w[0] - 20380u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 43;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00162D24u); st32((c.r[1].w[0] - 20368u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x00162D24u) [[unlikely]] return; }
L_00162D24:
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.r[2].d[0] = c.r[22].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[21], c.r[21].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00162C78u | kUnwind; return; } goto L_00162C78; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 2066u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[1].d[0] = c.r[2].sd[0] < 1000ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull; c.r[7].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_00162D54; } }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(999ll);
    c.r[7].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 2;
L_00162D54:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x51EB0000u);
    c.r[2].d[0] = c.r[2].d[0] | 34079ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[7].w[0]);
    set32(c.r[4], 0u + 100u);
    set32(c.r[6], c.r[7].w[0] >> 31);
    c.r[5].d[0] = c.hi.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x66660000u);
    c.r[3].d[0] = c.r[2].d[0] | 26215ull;
    mmi::div(c, 0, c.r[7].w[0], c.r[4].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 5));
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[2], 0u + 10u);
    set32(c.r[21], 0u + 221u);
    mmi::paddub(c.r[22], c.r[0], c.r[0]);
    c.r[5].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    set32(c.r[4], c.r[5].w[0] >> 31);
    c.r[3].d[0] = c.hi.d[0];
    mmi::div(c, 0, c.r[5].w[0], c.r[2].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    c.budget -= 26;
L_00162DBC:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00162DD4; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_00162DF0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00162DD4:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] != c.r[2].d[0];  if (t) { goto L_00162DE8; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_00162DF0; } }
L_00162DE8:
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 2;
L_00162DF0:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    st16((c.r[29].w[0] + 248u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 20u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 248u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[7].d[0] = c.r[2].d[0] | 65300ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[6], c.r[3].w[0] + 20324u);
    set32(c.r[4], c.r[4].w[0] + 19u);
    set32(c.r[2], c.r[29].w[0] + 252u);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] - 20416u);
    c.budget -= 19;
L_00162E3C:
    set32(c.r[2], c.r[29].w[0] + 254u);
    set32(c.r[9], c.r[9].w[0] + 19u);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[9].w[0]));
    set32(c.r[8], 0u + 13u);
    st32((c.r[29].w[0] + 208u), c.r[21].w[0]);
    st32((c.r[17].w[0]), c.r[8].w[0]);
    st32((c.r[30].w[0]), c.r[7].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[5], c.r[29].w[0] + 208u);
    set32(c.r[3], c.r[29].w[0] + 248u);
    set32(c.r[2], c.r[2].w[0] + 20u);
    st32((c.r[23].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + 10u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    st32((c.r[19].w[0]), c.r[7].w[0]);
    st32((c.r[1].w[0] - 20380u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00162E98u); st32((c.r[1].w[0] - 20368u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x00162E98u) [[unlikely]] return; }
L_00162E98:
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.r[2].d[0] = c.r[22].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[21], c.r[21].w[0] + 18u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00162DBCu | kUnwind; return; } goto L_00162DBC; } }
    set32(c.r[21], 0u + 542u);
    mmi::paddub(c.r[22], c.r[0], c.r[0]);
    c.budget -= 2;
L_00162EB0:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00162EE8; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 2064u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10620000u);
    c.r[2].d[0] = c.r[2].d[0] | 19923ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] >> 31);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 6));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_00162F94; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00162EE8:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_00162F34; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 2064u)));
    set32(c.r[3], 0u + 1000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x51EB0000u);
    c.r[2].d[0] = c.r[2].d[0] | 34079ull;
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] >> 31);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.budget -= 16;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_00162F94; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_00162F34:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] != c.r[2].d[0];  if (t) { goto L_00162F7C; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 2064u)));
    set32(c.r[3], 0u + 100u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x66660000u);
    c.r[2].d[0] = c.r[2].d[0] | 26215ull;
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] >> 31);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 16;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_00162F94; } }
L_00162F7C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 2064u)));
    set32(c.r[2], 0u + 10u);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 6;
L_00162F94:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    st16((c.r[29].w[0] + 248u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 20u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 248u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[7].d[0] = c.r[2].d[0] | 65300ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[6], c.r[3].w[0] + 20324u);
    set32(c.r[4], c.r[4].w[0] + 19u);
    set32(c.r[2], c.r[29].w[0] + 252u);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] - 20416u);
    set32(c.r[2], c.r[29].w[0] + 254u);
    set32(c.r[9], c.r[9].w[0] + 19u);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[9].w[0]));
    set32(c.r[8], 0u + 13u);
    st32((c.r[29].w[0] + 208u), c.r[21].w[0]);
    st32((c.r[17].w[0]), c.r[8].w[0]);
    st32((c.r[30].w[0]), c.r[7].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[5], c.r[29].w[0] + 208u);
    set32(c.r[3], c.r[29].w[0] + 248u);
    set32(c.r[2], c.r[2].w[0] + 20u);
    st32((c.r[23].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + 10u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    st32((c.r[19].w[0]), c.r[7].w[0]);
    st32((c.r[1].w[0] - 20380u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 43;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00163040u); st32((c.r[1].w[0] - 20368u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x00163040u) [[unlikely]] return; }
L_00163040:
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.r[3].d[0] = c.r[22].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[21], c.r[21].w[0] + 18u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00162EB0u | kUnwind; return; } goto L_00162EB0; } }
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 256u);  c.pc = t; return; }
L_00163080:
    set32(c.r[29], c.r[29].w[0] - 256u);
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
    st32((c.r[29].w[0]), c.f[20]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[2], c.r[4].w[0] + 320u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 28023u)));
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[2], c.r[2].w[0] + 25952u);
    c.budget -= 20;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[29].w[0] + 176u), c.r[2].w[0]);  if (t) { goto L_001630E4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 13660u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] - 20364u), c.r[2].w[0]);  if (t) { goto L_001630F4; } }
L_001630E4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 13656u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[2].w[0]);
    c.budget -= 4;
L_001630F4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), 0u);
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
L_00163100:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[3].w[0]);
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[19], c.r[29].w[0] + 246u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    st16((c.r[29].w[0] + 244u), static_cast<std::uint16_t>(0u));
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[19].w[0]), static_cast<std::uint16_t>(0u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 244u)));
    c.r[4].d[0] = c.r[2].d[0] | 65300ull;
    set32(c.r[30], c.r[29].w[0] + 248u);
    set32(c.r[23], c.r[29].w[0] + 250u);
    set32(c.r[2], c.r[3].w[0] + 511u);
    st16((c.r[30].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0])));
    set32(c.r[20], c.r[29].w[0] + 212u);
    set32(c.r[21], c.r[29].w[0] + 224u);
    set32(c.r[22], c.r[29].w[0] + 228u);
    set32(c.r[2], c.r[2].w[0] + 319u);
    st16((c.r[23].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[29].w[0] + 208u), 0u);
    st32((c.r[20].w[0]), 0u);
    st32((c.r[29].w[0] + 216u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[2], c.r[2].w[0] + 640u);
    st32((c.r[21].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0])));
    set32(c.r[2], c.r[2].w[0] + 224u);
    st32((c.r[22].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    st32((c.r[29].w[0] + 232u), c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 3544u)));
    c.budget -= 37;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001631A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[2], c.r[2].w[0] + 20348u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);  if (t) { goto L_001631B8; } }
L_001631A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[2], c.r[2].w[0] + 20364u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    c.budget -= 4;
L_001631B8:
    set32(c.r[2], c.r[29].w[0] + 208u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 244u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20368u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001631DCu); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x001631DCu) [[unlikely]] return; }
L_001631DC:
    set32(c.r[2], 0u + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[17], c.r[2].w[0] + 22352u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[18], c.r[2].w[0] + 22672u);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 8;
L_001631FC:
    c.r[2].d[0] = ld16((c.r[17].w[0]));
    c.r[1].d[0] = c.r[16].sd[0] < 5ll ? 1ull : 0ull;
    st16((c.r[29].w[0] + 244u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[17].w[0] + 2u));
    st16((c.r[19].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 244u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st16((c.r[30].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0])));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 6u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st16((c.r[23].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[17].w[0] + 8u));
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 10u));
    st32((c.r[20].w[0]), c.r[2].w[0]);
    c.r[3].d[0] = ld16((c.r[17].w[0] + 12u));
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[21].w[0]), c.r[2].w[0]);
    c.r[3].d[0] = ld16((c.r[17].w[0] + 14u));
    set32(c.r[2], ld32((c.r[20].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 26;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[22].w[0]), c.r[2].w[0]);  if (t) { goto L_00163270; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] - 20380u), c.r[18].w[0]);  if (t) { goto L_00163280; } }
L_00163270:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[2], c.r[2].w[0] + 22692u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    c.budget -= 4;
L_00163280:
    set32(c.r[2], c.r[29].w[0] + 208u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 244u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20368u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001632A4u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x001632A4u) [[unlikely]] return; }
L_001632A4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 12ll ? 1ull : 0ull;
    set32(c.r[17], c.r[17].w[0] + 16u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001631FCu | kUnwind; return; } goto L_001631FC; } }
    set32(c.r[5], 0u + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[2], c.r[2].w[0] + 22704u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[2], c.r[2].w[0] + 22768u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20376u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[2], c.r[2].w[0] + 20320u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00163300u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_0019(c, 110u, depth + 1u); else { c.pc = 0x001665E0u; return; } if (c.pc != 0x00163300u) [[unlikely]] return; }
L_00163300:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[2], c.r[2].w[0] + 22784u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[2], c.r[2].w[0] + 20368u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    set32(c.r[2], 0u + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20354u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00163338u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001C(c, 21u, depth + 1u); else { c.pc = 0x00170680u; return; } if (c.pc != 0x00163338u) [[unlikely]] return; }
L_00163338:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 28023u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[8], 0u + 13u);
    set32(c.r[2], 0u + 12u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[7], ld32((c.r[1].w[0] - 13664u)));
    if (c.r[3].d[0] != 0) c.r[8].d[0] = c.r[2].d[0];
    set32(c.r[6], c.r[6].w[0] + 22352u);
    set32(c.r[2], c.r[8].w[0] << 4);
    set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[7].w[0]);
    c.r[7].d[0] = ld16((c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[6], c.r[6].w[0] + 22354u);
    set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);
    st16((c.r[29].w[0] + 244u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld16((c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[6], c.r[6].w[0] + 22356u);
    st16((c.r[19].w[0]), static_cast<std::uint16_t>(c.r[7].w[0]));
    set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 244u)));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[6], c.r[6].w[0] + 22358u);
    set32(c.r[7], c.r[8].w[0] + c.r[7].w[0]);
    st16((c.r[30].w[0]), static_cast<std::uint16_t>(c.r[7].w[0]));
    set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0])));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[6], c.r[6].w[0] + 22360u);
    set32(c.r[7], c.r[8].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);
    st16((c.r[23].w[0]), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld16((c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[6], c.r[6].w[0] + 22362u);
    set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 208u), c.r[7].w[0]);
    c.r[7].d[0] = ld16((c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[6], c.r[6].w[0] + 22364u);
    st32((c.r[20].w[0]), c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[7], ld32((c.r[29].w[0] + 208u)));
    c.r[8].d[0] = ld16((c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[6], c.r[6].w[0] + 22366u);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[7].w[0] + c.r[8].w[0]);
    st32((c.r[21].w[0]), c.r[6].w[0]);
    c.r[6].d[0] = ld16((c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[20].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.budget -= 59;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[22].w[0]), c.r[2].w[0]);  if (t) { goto L_00163434; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 29785u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0016344C; } }
L_00163434:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_001634C8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 29784u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001634C4; } }
L_0016344C:
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    c.f[20] = ld32((c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42340000u);
    c.f[1] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x425C0000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00163474u); c.f[12] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x00163474u) [[unlikely]] return; }
L_00163474:
    set32(c.r[6], c.r[2].w[0] << 8);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42340000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = c.r[2].w[0];
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st32((c.r[29].w[0] + 252u), c.r[3].w[0]);
    c.f[0] = fp::mul(c.f[1], c.f[20]);
    set32(c.r[3], ld32((c.r[29].w[0] + 252u)));
    c.f[12] = fp::sub(c.f[1], c.f[0]);
    c.r[2].d[0] = c.r[3].d[0] | c.r[6].d[0];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001634A4u); st32((c.r[29].w[0] + 252u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x001634A4u) [[unlikely]] return; }
L_001634A4:
    set32(c.r[3], ld32((c.r[29].w[0] + 252u)));
    set32(c.r[4], c.r[2].w[0] << 16);
    set32(c.r[2], c.r[29].w[0] + 252u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 252u), c.r[2].w[0]);  if (t) { goto L_001634E0; } }
L_001634C4:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_001634C8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[2], c.r[2].w[0] + 22696u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    c.budget -= 6;
L_001634E0:
    set32(c.r[2], c.r[29].w[0] + 208u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 244u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20368u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00163504u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x00163504u) [[unlikely]] return; }
L_00163504:
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3834u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001636DC; } }
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[16], c.r[2].w[0] + 22352u);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 6;
L_0016352C:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 224u));
    st16((c.r[29].w[0] + 244u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 226u));
    st16((c.r[19].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 228u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 244u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st16((c.r[30].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0])));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 230u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st16((c.r[23].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 232u));
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 234u));
    st32((c.r[20].w[0]), c.r[2].w[0]);
    c.r[3].d[0] = ld16((c.r[16].w[0] + 236u));
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[21].w[0]), c.r[2].w[0]);
    c.r[3].d[0] = ld16((c.r[16].w[0] + 238u));
    set32(c.r[2], ld32((c.r[20].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 25;
    { const bool t = c.r[17].d[0] != 0ull; st32((c.r[22].w[0]), c.r[2].w[0]);  if (t) { goto L_001635A4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A30000u);
    set32(c.r[2], c.r[2].w[0] + 11232u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] - 20364u), c.r[2].w[0]);  if (t) { goto L_001635B8; } }
L_001635A4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 13664u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[2].w[0]);
    c.budget -= 5;
L_001635B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[2], c.r[2].w[0] + 22692u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 208u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 244u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20368u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001635ECu); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x001635ECu) [[unlikely]] return; }
L_001635EC:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016352Cu | kUnwind; return; } goto L_0016352C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[16], c.r[2].w[0] + 22352u);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 3;
L_00163608:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 256u));
    c.r[1].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    st16((c.r[29].w[0] + 244u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 258u));
    st16((c.r[19].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 260u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 244u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st16((c.r[30].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0])));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 262u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st16((c.r[23].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 264u));
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 266u));
    st32((c.r[20].w[0]), c.r[2].w[0]);
    c.r[3].d[0] = ld16((c.r[16].w[0] + 268u));
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[21].w[0]), c.r[2].w[0]);
    c.r[3].d[0] = ld16((c.r[16].w[0] + 270u));
    set32(c.r[2], ld32((c.r[20].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 26;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[22].w[0]), c.r[2].w[0]);  if (t) { goto L_00163684; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A30000u);
    set32(c.r[2], c.r[2].w[0] + 11232u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] - 20364u), c.r[2].w[0]);  if (t) { goto L_00163698; } }
L_00163684:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 13664u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[2].w[0]);
    c.budget -= 5;
L_00163698:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[2], c.r[2].w[0] + 22692u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 208u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 244u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20368u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001636CCu); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x001636CCu) [[unlikely]] return; }
L_001636CC:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00163608u | kUnwind; return; } goto L_00163608; } }
L_001636DC:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 256u);  c.pc = t; return; }
L_00163710:
    set32(c.r[29], c.r[29].w[0] - 240u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    set32(c.r[3], c.r[4].w[0] + 320u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st32((c.r[29].w[0] + 176u), c.r[3].w[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[3], c.r[3].w[0] + 25952u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st32((c.r[29].w[0] + 160u), c.r[3].w[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), 0u);
    set32(c.r[3], 0u + 3u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[3].w[0]);
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65300ull;
    st32((c.r[29].w[0] + 200u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 216u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[20], c.r[3].w[0] + 22848u);
    mmi::paddub(c.r[30], c.r[0], c.r[0]);
    c.budget -= 31;
L_0016378C:
    set32(c.r[3], ld32((c.r[29].w[0] + 160u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2071u)));
    c.r[3].d[0] = ld16((c.r[20].w[0]));
    c.budget -= 5;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[30], c.r[30].w[0] + 1u);  goto L_00163BF4; }
    set32(c.r[3], c.r[30].w[0] - 12u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00163BF0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 13664u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[3], 0u + 5u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[30].w[0]);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 3392u)));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0016384C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[2], c.r[2].w[0] + 20352u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    set32(c.r[2], 0u + 240u);
    st16((c.r[29].w[0] + 228u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 22u);
    set32(c.r[3], c.r[29].w[0] + 230u);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 228u)));
    set32(c.r[4], c.r[29].w[0] + 196u);
    set32(c.r[2], c.r[2].w[0] + 16u);
    st16((c.r[29].w[0] + 232u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 16u);
    st16((c.r[29].w[0] + 234u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[20].w[0] + 2u));
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[20].w[0] + 4u));
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[2], c.r[2].w[0] + 16u);
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] + 8u);
    c.budget -= 27;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 212u), c.r[2].w[0]);  if (t) { goto L_001638C0; } }
L_0016384C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[2], c.r[2].w[0] + 20356u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    set32(c.r[2], 0u + 200u);
    st16((c.r[29].w[0] + 228u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 472u);
    set32(c.r[3], c.r[29].w[0] + 230u);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 228u)));
    set32(c.r[4], c.r[29].w[0] + 196u);
    set32(c.r[2], c.r[2].w[0] + 20u);
    st16((c.r[29].w[0] + 232u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 20u);
    st16((c.r[29].w[0] + 234u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[20].w[0] + 2u));
    set32(c.r[2], c.r[2].w[0] - 2u);
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[20].w[0] + 4u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[2], c.r[2].w[0] + 20u);
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] + 9u);
    st32((c.r[29].w[0] + 212u), c.r[2].w[0]);
    c.budget -= 29;
L_001638C0:
    set32(c.r[2], c.r[29].w[0] + 192u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 228u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20368u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001638E4u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x001638E4u) [[unlikely]] return; }
L_001638E4:
    set32(c.r[3], ld32((c.r[29].w[0] + 160u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2106u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[30].d[0];  if (t) { goto L_001639C8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[6], ld32((c.r[1].w[0] - 13660u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[3], 0u + 6u);
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[2].w[0]));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00163928u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x00163928u) [[unlikely]] return; }
L_00163928:
    set32(c.r[2], c.r[2].w[0] << 24);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st32((c.r[29].w[0] + 236u), c.r[2].w[0]);
    set32(c.r[2], 0u + 354u);
    st16((c.r[29].w[0] + 228u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 370u);
    set32(c.r[7], c.r[29].w[0] + 230u);
    st16((c.r[7].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 228u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[8], c.r[29].w[0] + 196u);
    set32(c.r[6], c.r[29].w[0] + 236u);
    set32(c.r[4], c.r[4].w[0] + 28u);
    st16((c.r[29].w[0] + 232u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0])));
    set32(c.r[4], c.r[2].w[0] - 20416u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[5], c.r[29].w[0] + 192u);
    set32(c.r[2], c.r[7].w[0] + 28u);
    st16((c.r[29].w[0] + 234u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[20].w[0] + 2u));
    set32(c.r[3], c.r[29].w[0] + 228u);
    set32(c.r[2], c.r[2].w[0] - 6u);
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[20].w[0] + 4u));
    set32(c.r[2], c.r[2].w[0] - 3u);
    st32((c.r[8].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[2], c.r[2].w[0] + 28u);
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[8].w[0])));
    st32((c.r[1].w[0] - 20380u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + 13u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20368u), c.r[3].w[0]);
    c.budget -= 39;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001639C4u); st32((c.r[29].w[0] + 212u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x001639C4u) [[unlikely]] return; }
L_001639C4:
    c.budget -= 1;
L_001639C8:
    set32(c.r[3], ld32((c.r[29].w[0] + 160u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3639u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[30].d[0];  if (t) { goto L_00163AA8; } }
    c.r[2].d[0] = ld16((c.r[20].w[0] + 6u));
    set32(c.r[4], c.r[29].w[0] + 230u);
    set32(c.r[5], c.r[29].w[0] + 196u);
    st16((c.r[29].w[0] + 228u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[20].w[0] + 8u));
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 228u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[3], c.r[3].w[0] + 127u);
    st16((c.r[29].w[0] + 232u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] - 56u);
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] + 15u);
    st16((c.r[29].w[0] + 234u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[2].w[0] - 8u);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[2], c.r[2].w[0] + 128u);
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[2].w[0] + 8u);
    st32((c.r[29].w[0] + 212u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[20].w[0]));
    c.budget -= 27;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00163A58; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 13660u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] - 20364u), c.r[2].w[0]);  if (t) { goto L_00163A68; } }
L_00163A58:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 13656u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[2].w[0]);
    c.budget -= 4;
L_00163A68:
    set32(c.r[2], 0u + 7u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[2], c.r[2].w[0] + 20324u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 192u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 228u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20368u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00163AA8u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x00163AA8u) [[unlikely]] return; }
L_00163AA8:
    c.r[4].d[0] = ld16((c.r[20].w[0] + 10u));
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[6], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[6].w[0] + 0u);
    c.budget -= 8;
L_00163AC8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3712u)));
    c.budget -= 2;
L_00163AD0:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_00163AE8; }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00163AD0u | kUnwind; return; } goto L_00163AD0; } }
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_00163AE8:
    c.r[3].d[0] = c.r[5].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00163AC8u | kUnwind; return; } goto L_00163AC8; } }
    set32(c.r[3], 0u + 248u);
    set32(c.r[23], c.r[6].w[0] + 4u);
    st16((c.r[29].w[0] + 228u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 388u);
    set32(c.r[6], c.r[29].w[0] + 230u);
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 228u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[5], ld32((c.r[1].w[0] - 13660u)));
    set32(c.r[4], 0u + 3u);
    set32(c.r[21], 0u + 4u);
    set32(c.r[3], c.r[3].w[0] + 24u);
    st16((c.r[29].w[0] + 232u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    set32(c.r[19], c.r[3].w[0] + 23168u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[18], c.r[16].w[0] << 1);
    st32((c.r[1].w[0] - 20364u), c.r[5].w[0]);
    set32(c.r[3], c.r[6].w[0] + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st16((c.r[29].w[0] + 234u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 23;
L_00163B50:
    c.r[22].sd[0] = static_cast<std::int8_t>(ld8((c.r[23].w[0] + 3712u)));
    mmi::paddub(c.r[17], c.r[18], c.r[0]);
    c.budget -= 2;
L_00163B58:
    c.budget -= 2;
    if (c.r[22].d[0] == 0ull) { set32(c.r[21], c.r[21].w[0] - 1u);  goto L_00163BE0; }
    c.r[6].d[0] = ld16((c.r[20].w[0] + 2u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] - 20416u);
    set32(c.r[7], c.r[29].w[0] + 196u);
    set32(c.r[2], c.r[6].w[0] + 15u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[20].w[0] + 4u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[5], c.r[29].w[0] + 192u);
    set32(c.r[3], c.r[29].w[0] + 228u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] - c.r[17].w[0]);
    st32((c.r[7].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[2], c.r[2].w[0] + 24u);
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[7].w[0])));
    st32((c.r[1].w[0] - 20380u), c.r[19].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] + 10u);
    st32((c.r[1].w[0] - 20396u), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[29].w[0] + 212u), c.r[2].w[0]);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00163BC8u); st32((c.r[1].w[0] - 20368u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x00163BC8u) [[unlikely]] return; }
L_00163BC8:
    set32(c.r[22], c.r[22].w[0] - 1u);
    set32(c.r[17], c.r[17].w[0] - 2u);
    set32(c.r[18], c.r[18].w[0] - 2u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00163B58u | kUnwind; return; } goto L_00163B58; } }
    set32(c.r[21], c.r[21].w[0] - 1u);
    c.budget -= 1;
L_00163BE0:
    set32(c.r[23], c.r[23].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[21].sd[0] >= 0; set32(c.r[19], c.r[19].w[0] - 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00163B50u | kUnwind; return; } goto L_00163B50; } }
    c.budget -= 1;
L_00163BF0:
    set32(c.r[30], c.r[30].w[0] + 1u);
    c.budget -= 1;
L_00163BF4:
    c.r[3].d[0] = c.r[30].sd[0] < 25ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016378Cu | kUnwind; return; } goto L_0016378C; } }
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
L_00163C30:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 13664u)));
    set32(c.r[10], 0u + 3u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 6u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[10].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 216u);
    st16((c.r[29].w[0] + 72u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 40u);
    set32(c.r[6], c.r[29].w[0] + 74u);
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 29540u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 72u)));
    c.r[12].d[0] = c.r[2].d[0] | 65300ull;
    set32(c.r[11], c.r[29].w[0] + 20u);
    set32(c.r[8], 0u - 6u);
    set32(c.r[2], c.r[5].w[0] + 39u);
    st16((c.r[29].w[0] + 76u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 29544u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[7], c.r[2].w[0] + 20324u);
    set32(c.r[2], c.r[5].w[0] + 39u);
    st16((c.r[29].w[0] + 78u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[29].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[11].w[0]), c.r[3].w[0]);
    st32((c.r[29].w[0] + 24u), c.r[12].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[9], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[4], c.r[2].w[0] - 20416u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[6], c.r[29].w[0] + 48u);
    set32(c.r[2], c.r[9].w[0] + 40u);
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[11].w[0])));
    set32(c.r[5], c.r[29].w[0] + 16u);
    set32(c.r[3], c.r[29].w[0] + 72u);
    st32((c.r[1].w[0] - 20380u), c.r[7].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] + 20u);
    st32((c.r[1].w[0] - 20396u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 48u), c.r[8].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[29].w[0] + 36u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 52u), c.r[10].w[0]);
    st32((c.r[1].w[0] - 20368u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 40u), c.r[12].w[0]);
    c.budget -= 63;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00163D2Cu); st32((c.r[29].w[0] + 56u), 0u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x00163D2Cu) [[unlikely]] return; }
L_00163D2C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00163D40:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[6], ld32((c.r[1].w[0] - 13664u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[16], c.r[2].w[0] + 25952u);
    set32(c.r[3], 0u + 3u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[3].w[0]);
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[0] = ld32((c.r[4].w[0] + 320u));
    c.f[1] = c.r[2].w[0];
    set32(c.r[17], c.r[4].w[0] + 320u);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00163DA8u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x00163DA8u) [[unlikely]] return; }
L_00163DA8:
    set32(c.r[3], c.r[2].w[0] << 24);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[29].w[0] + 112u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 112u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    set32(c.r[2], 0u + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[2], c.r[2].w[0] + 23184u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[2], c.r[2].w[0] + 23248u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20376u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] - 20416u);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00163E04u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0019(c, 110u, depth + 1u); else { c.pc = 0x001665E0u; return; } if (c.pc != 0x00163E04u) [[unlikely]] return; }
L_00163E04:
    set32(c.r[19], c.r[29].w[0] + 112u);
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    c.budget -= 2;
L_00163E0C:
    c.f[0] = ld32((c.r[17].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C00000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00163E20u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x00163E20u) [[unlikely]] return; }
L_00163E20:
    set32(c.r[2], c.r[2].w[0] << 24);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00163E0Cu | kUnwind; return; } goto L_00163E0C; } }
    set32(c.r[2], c.r[29].w[0] + 112u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    set32(c.r[2], 0u + 8u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[2], c.r[2].w[0] + 23264u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    set32(c.r[2], 0u + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20354u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00163E78u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001C(c, 21u, depth + 1u); else { c.pc = 0x00170680u; return; } if (c.pc != 0x00163E78u) [[unlikely]] return; }
L_00163E78:
    set32(c.r[2], 0u + 11u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[18], c.r[2].w[0] + 23328u);
    mmi::paddub(c.r[19], c.r[0], c.r[0]);
    c.budget -= 6;
L_00163E90:
    c.r[3].d[0] = ld16((c.r[18].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[7], c.r[29].w[0] + 154u);
    set32(c.r[8], c.r[29].w[0] + 84u);
    st16((c.r[29].w[0] + 152u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 2u));
    c.r[2].d[0] = c.r[2].d[0] | 65300ull;
    st16((c.r[7].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 152u)));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st16((c.r[29].w[0] + 156u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0])));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 6u)));
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    st16((c.r[29].w[0] + 158u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 8u));
    st32((c.r[29].w[0] + 80u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[18].w[0] + 10u));
    st32((c.r[8].w[0]), c.r[3].w[0]);
    st32((c.r[29].w[0] + 88u), c.r[2].w[0]);
    c.r[6].d[0] = ld16((c.r[18].w[0] + 12u));
    set32(c.r[3], ld32((c.r[29].w[0] + 80u)));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[29].w[0] + 96u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[8].w[0])));
    c.r[6].d[0] = ld16((c.r[18].w[0] + 14u));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[29].w[0] + 100u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 104u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 48u)));
    c.budget -= 33;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00163F20; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3631u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);  if (t) { goto L_00163F50; } }
L_00163F20:
    c.f[0] = ld32((c.r[17].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00163F34u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x00163F34u) [[unlikely]] return; }
L_00163F34:
    set32(c.r[3], c.r[2].w[0] << 24);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00800000u);
    c.r[2].d[0] = c.r[2].d[0] | 32896ull;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 112u), c.r[2].w[0]);  if (t) { goto L_00163F58; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 1;
L_00163F50:
    c.r[2].d[0] = c.r[2].d[0] | 32896ull;
    st32((c.r[29].w[0] + 112u), c.r[2].w[0]);
    c.budget -= 2;
L_00163F58:
    set32(c.r[2], c.r[29].w[0] + 112u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 80u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 152u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20368u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00163F88u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x00163F88u) [[unlikely]] return; }
L_00163F88:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[3].d[0] = c.r[19].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00163E90u | kUnwind; return; } goto L_00163E90; } }
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_00163FC0:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[7], ld32((c.r[1].w[0] - 13664u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[16], c.r[2].w[0] + 25952u);
    set32(c.r[6], 0u + 3u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.budget -= 16;
    [[clang::musttail]] return unit_0019(c, 1u, depth);
}

}
