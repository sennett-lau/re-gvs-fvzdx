#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0011[4096] = {
    1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 4, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 7, 0, 0, 8, 0, 0, 0, 0, 0, 0, 9, 10, 0, 0, 0, 0, 0, 0, 0,
    11, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 15, 0, 0, 16, 0, 0, 0, 17, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 31, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    37, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0,
    0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0,
    0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62,
    0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0,
    0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0,
    0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84,
    85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 92, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 96, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    98, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 108, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 117, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 143, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0011(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00144000;
    case 2u: goto L_00144004;
    case 3u: goto L_00144058;
    case 4u: goto L_00144084;
    case 5u: goto L_00144090;
    case 6u: goto L_001440A8;
    case 7u: goto L_001440B4;
    case 8u: goto L_001440C0;
    case 9u: goto L_001440DC;
    case 10u: goto L_001440E0;
    case 11u: goto L_00144100;
    case 12u: goto L_00144120;
    case 13u: goto L_00144170;
    case 14u: goto L_001441A0;
    case 15u: goto L_001441B0;
    case 16u: goto L_001441BC;
    case 17u: goto L_001441CC;
    case 18u: goto L_001441D8;
    case 19u: goto L_00144284;
    case 20u: goto L_001442B0;
    case 21u: goto L_0014438C;
    case 22u: goto L_00144448;
    case 23u: goto L_0014446C;
    case 24u: goto L_001444B4;
    case 25u: goto L_001444F0;
    case 26u: goto L_001445C4;
    case 27u: goto L_001445D0;
    case 28u: goto L_00144638;
    case 29u: goto L_0014463C;
    case 30u: goto L_001448CC;
    case 31u: goto L_00144904;
    case 32u: goto L_00144920;
    case 33u: goto L_00144950;
    case 34u: goto L_00144970;
    case 35u: goto L_001449A0;
    case 36u: goto L_00144A48;
    case 37u: goto L_00144A80;
    case 38u: goto L_00144A8C;
    case 39u: goto L_00144B28;
    case 40u: goto L_00144CE4;
    case 41u: goto L_00144D20;
    case 42u: goto L_00144D40;
    case 43u: goto L_00144D74;
    case 44u: goto L_00144D98;
    case 45u: goto L_00144E00;
    case 46u: goto L_00144EE8;
    case 47u: goto L_00144F38;
    case 48u: goto L_00144F44;
    case 49u: goto L_00144FA8;
    case 50u: goto L_001450DC;
    case 51u: goto L_00145110;
    case 52u: goto L_00145248;
    case 53u: goto L_0014527C;
    case 54u: goto L_001452D4;
    case 55u: goto L_00145328;
    case 56u: goto L_0014536C;
    case 57u: goto L_00145388;
    case 58u: goto L_001453CC;
    case 59u: goto L_001453EC;
    case 60u: goto L_00145480;
    case 61u: goto L_00145544;
    case 62u: goto L_0014557C;
    case 63u: goto L_00145588;
    case 64u: goto L_00145640;
    case 65u: goto L_00145744;
    case 66u: goto L_00145778;
    case 67u: goto L_001458C4;
    case 68u: goto L_001458FC;
    case 69u: goto L_0014595C;
    case 70u: goto L_001459AC;
    case 71u: goto L_001459F8;
    case 72u: goto L_00145A18;
    case 73u: goto L_00145A64;
    case 74u: goto L_00145A88;
    case 75u: goto L_00145B90;
    case 76u: goto L_00145CA4;
    case 77u: goto L_00145CA8;
    case 78u: goto L_00145D04;
    case 79u: goto L_00145D74;
    case 80u: goto L_00145DE4;
    case 81u: goto L_00145E20;
    case 82u: goto L_00145E40;
    case 83u: goto L_00145EC0;
    case 84u: goto L_00145F7C;
    case 85u: goto L_00145F80;
    case 86u: goto L_00145FEC;
    case 87u: goto L_0014606C;
    case 88u: goto L_001460E4;
    case 89u: goto L_0014612C;
    case 90u: goto L_00146160;
    case 91u: goto L_001461E0;
    case 92u: goto L_001461EC;
    case 93u: goto L_00146258;
    case 94u: goto L_00146444;
    case 95u: goto L_001464DC;
    case 96u: goto L_001464E0;
    case 97u: goto L_0014662C;
    case 98u: goto L_00146680;
    case 99u: goto L_00146694;
    case 100u: goto L_001467DC;
    case 101u: goto L_00146814;
    case 102u: goto L_0014684C;
    case 103u: goto L_00146888;
    case 104u: goto L_001468B8;
    case 105u: goto L_0014695C;
    case 106u: goto L_00146A5C;
    case 107u: goto L_00146A90;
    case 108u: goto L_00146B08;
    case 109u: goto L_00146B14;
    case 110u: goto L_00146BAC;
    case 111u: goto L_00146D38;
    case 112u: goto L_00146D68;
    case 113u: goto L_00146E2C;
    case 114u: goto L_00146E44;
    case 115u: goto L_00146F88;
    case 116u: goto L_00146FDC;
    case 117u: goto L_00146FF0;
    case 118u: goto L_0014713C;
    case 119u: goto L_00147174;
    case 120u: goto L_001471AC;
    case 121u: goto L_001471F8;
    case 122u: goto L_00147228;
    case 123u: goto L_0014723C;
    case 124u: goto L_0014725C;
    case 125u: goto L_001472C0;
    case 126u: goto L_00147414;
    case 127u: goto L_00147460;
    case 128u: goto L_001474B4;
    case 129u: goto L_001474C0;
    case 130u: goto L_0014751C;
    case 131u: goto L_001476C4;
    case 132u: goto L_001476D8;
    case 133u: goto L_00147774;
    case 134u: goto L_00147844;
    case 135u: goto L_001478A0;
    case 136u: goto L_00147918;
    case 137u: goto L_0014792C;
    case 138u: goto L_00147A74;
    case 139u: goto L_00147AAC;
    case 140u: goto L_00147AE4;
    case 141u: goto L_00147B30;
    case 142u: goto L_00147C48;
    case 143u: goto L_00147D10;
    case 144u: goto L_00147D24;
    case 145u: goto L_00147E3C;
    case 146u: goto L_00147E84;
    case 147u: goto L_00147EC4;
    case 148u: goto L_00147F10;
    case 149u: goto L_00147F40;
    case 150u: goto L_00147FA4;
    case 151u: goto L_00147FB0;
    default: bad_entry(c, 0x00144000u); return;
    }
L_00144000:
    c.f[13] = c.f[12];
    c.budget -= 1;
L_00144004:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 762u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00144098; } }
    c.f[0] = ld32((c.r[16].w[0] + 8352u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[5], c.r[29].w[0] + 448u);
    set32(c.r[18], c.r[29].w[0] + 456u);
    st32((c.r[29].w[0] + 448u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8356u));
    set32(c.r[2], c.r[2].w[0] - 28448u);
    mmi::paddub(c.r[6], c.r[5], c.r[0]);
    st32((c.r[29].w[0] + 452u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8360u));
    st32((c.r[18].w[0]), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144058u); set32(c.r[4], c.r[2].w[0] + 144u);  if (depth < kMaxDepth) unit_005B(c, 147u, depth + 1u); else { c.pc = 0x0026E4D0u; return; } if (c.pc != 0x00144058u) [[unlikely]] return; }
L_00144058:
    c.f[12] = ld32((c.r[29].w[0] + 448u));
    c.f[13] = ld32((c.r[18].w[0]));
    c.f[0] = 0u;
    c.facc = fp::mul(c.f[12], c.f[12]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[13], c.f[13]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00144088; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144084u);  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x00144084u) [[unlikely]] return; }
L_00144084:
    st32((c.r[22].w[0] + 100u), c.r[2].w[0]);
    c.budget -= 1;
L_00144088:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144090u); set32(c.r[4], ld32((c.r[22].w[0] + 100u)));  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00144090u) [[unlikely]] return; }
L_00144090:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 352u);  if (t) { goto L_001440AC; } }
L_00144098:
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 1296u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001440A8u); set32(c.r[4], c.r[3].w[0] - c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x001440A8u) [[unlikely]] return; }
L_001440A8:
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.budget -= 1;
L_001440AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001440B4u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x001440B4u) [[unlikely]] return; }
L_001440B4:
    set32(c.r[5], ld32((c.r[29].w[0] + 208u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001440C0u); mmi::paddub(c.r[4], c.r[23], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x001440C0u) [[unlikely]] return; }
L_001440C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 9080u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[5], c.r[29].w[0] + 352u);
    set32(c.r[6], c.r[2].w[0] - 9152u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001440DCu); set32(c.r[7], 0u + 8u);  if (depth < kMaxDepth) unit_001B(c, 149u, depth + 1u); else { c.pc = 0x0016E7C0u; return; } if (c.pc != 0x001440DCu) [[unlikely]] return; }
L_001440DC:
    c.budget -= 1;
L_001440E0:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 369u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00144160; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], c.r[3].w[0] - 28448u);
    set32(c.r[6], c.r[29].w[0] + 272u);
    c.budget -= 4;
L_00144100:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 6u)));
    set32(c.r[5], 0u + 8u);
    set32(c.r[7], c.r[4].w[0] + c.r[19].w[0]);
    set32(c.r[4], c.r[7].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[4], c.r[4].w[0] << 7);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[7], c.r[3].w[0] + 144u);
    c.budget -= 8;
L_00144120:
    set32(c.r[4], ld32((c.r[7].w[0])));
    set32(c.r[3], ld32((c.r[7].w[0] + 4u)));
    set32(c.r[5], c.r[5].w[0] - 1u);
    st32((c.r[6].w[0]), c.r[4].w[0]);
    st32((c.r[6].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[7], c.r[7].w[0] + 8u);
    c.budget -= 8;
    { const bool t = c.r[5].sd[0] > 0; set32(c.r[6], c.r[6].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00144120u | kUnwind; return; } goto L_00144120; } }
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 320u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    st32((c.r[29].w[0] + 324u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    st32((c.r[29].w[0] + 328u), c.f[0]);
    st32((c.r[29].w[0] + 332u), c.r[3].w[0]);
    c.budget -= 8;
L_00144160:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[21], c.r[3].w[0] + 26144u);
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    c.budget -= 4;
L_00144170:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 6u)));
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    c.budget -= 5;
    if (c.r[18].d[0] == c.r[3].d[0]) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_00144474; }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 369u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 272u);  if (t) { goto L_001441A8; } }
    set32(c.r[5], c.r[21].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001441A0u); set32(c.r[6], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_005B(c, 138u, depth + 1u); else { c.pc = 0x0026E440u; return; } if (c.pc != 0x001441A0u) [[unlikely]] return; }
L_001441A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 4u)));  if (t) { goto L_001441DC; } }
L_001441A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001441B0u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x001441B0u) [[unlikely]] return; }
L_001441B0:
    set32(c.r[2], ld32((c.r[16].w[0] + 1296u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001441BCu); set32(c.r[4], 0u - c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x001441BCu) [[unlikely]] return; }
L_001441BC:
    set32(c.r[4], c.r[29].w[0] + 336u);
    set32(c.r[5], c.r[21].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001441CCu); set32(c.r[6], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001441CCu) [[unlikely]] return; }
L_001441CC:
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001441D8u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x001441D8u) [[unlikely]] return; }
L_001441D8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 4u)));
    c.budget -= 1;
L_001441DC:
    set32(c.r[20], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[20].d[0];  if (t) { goto L_00144470; } }
    c.f[1] = ld32((c.r[22].w[0] + 104u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00144470; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8389u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 8389u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0014422C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 8386u)));
    c.r[2].d[0] = c.r[2].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);  if (t) { goto L_0014424C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], 0u + 3u);  if (t) { goto L_00144248; } }
L_0014422C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 8386u)));
    c.r[2].d[0] = c.r[2].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[20], c.r[0], c.r[0]);  if (t) { goto L_00144244; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], 0u + 2u);  if (t) { goto L_00144248; } }
L_00144244:
    c.budget -= 1;
L_00144248:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.budget -= 1;
L_0014424C:
    st32((c.r[17].w[0] + 40u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[2] = c.r[2].w[0];
    set32(c.r[30], c.r[29].w[0] + 344u);
    c.f[4] = ld32((c.r[29].w[0] + 336u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43960000u);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[3] = ld32((c.r[30].w[0]));
    c.f[0] = c.r[2].w[0];
    c.facc = fp::mul(c.f[4], c.f[4]);
    c.f[20] = fp::add(c.f[0], c.f[1]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144284u); c.f[12] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));  if (depth < kMaxDepth) unit_000E(c, 292u, depth + 1u); else { c.pc = 0x0013B4E0u; return; } if (c.pc != 0x00144284u) [[unlikely]] return; }
L_00144284:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00144300; } }
    set32(c.r[20], c.r[29].w[0] + 340u);
    c.f[12] = c.f[20];
    c.f[21] = ld32((c.r[20].w[0]));
    set32(c.r[4], c.r[29].w[0] + 336u);
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001442B0u); st32((c.r[20].w[0]), 0u);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x001442B0u) [[unlikely]] return; }
L_001442B0:
    st32((c.r[20].w[0]), c.f[21]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8389u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 8389u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001442E4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 8386u)));
    c.r[2].d[0] = c.r[2].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], 0u + 1u);  if (t) { goto L_001442DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], 0u + 3u);  if (t) { goto L_00144300; } }
L_001442DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[29].w[0] + 340u));  if (t) { goto L_00144304; } }
L_001442E4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 8386u)));
    c.r[2].d[0] = c.r[2].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[20], c.r[0], c.r[0]);  if (t) { goto L_001442FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], 0u + 2u);  if (t) { goto L_00144300; } }
L_001442FC:
    c.budget -= 1;
L_00144300:
    c.f[1] = ld32((c.r[29].w[0] + 340u));
    c.budget -= 1;
L_00144304:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43FA0000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0xC3FA0000u);  if (t) { goto L_00144330; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[21] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 352u);  if (t) { goto L_00144384; } }
L_00144330:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = fp::sub(c.f[1], c.f[0]);  goto L_0014435C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[21] = c.r[2].w[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00144380; } }
L_0014435C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3A510000u);
    c.r[3].d[0] = c.r[2].d[0] | 46872ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.f[1] = c.r[3].w[0];
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = c.r[2].w[0];
    c.f[21] = fp::add(c.f[0], c.f[1]);
    c.budget -= 9;
L_00144380:
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.budget -= 1;
L_00144384:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014438Cu);  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x00102728u; return; } if (c.pc != 0x0014438Cu) [[unlikely]] return; }
L_0014438C:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_001443C8; } }
    c.f[1] = ld32((c.r[29].w[0] + 336u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3BB40000u);
    c.r[2].d[0] = c.r[2].d[0] | 14680ull;
    c.f[0] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBD370000u);
    fpu_div(c, 1u, c.f[1], c.f[20]);
    c.r[2].d[0] = c.r[2].d[0] | 5977ull;
    c.f[1] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 416u), c.f[0]);  if (t) { goto L_001443F8; } }
L_001443C8:
    c.f[1] = ld32((c.r[29].w[0] + 336u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3BB40000u);
    c.r[2].d[0] = c.r[2].d[0] | 14680ull;
    c.f[0] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D370000u);
    fpu_div(c, 1u, c.f[1], c.f[20]);
    c.r[2].d[0] = c.r[2].d[0] | 5977ull;
    c.f[1] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 416u), c.f[0]);
    c.budget -= 12;
L_001443F8:
    c.f[1] = ld32((c.r[30].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3BB40000u);
    c.r[2].d[0] = c.r[2].d[0] | 14680ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[5], c.r[29].w[0] + 416u);
    fpu_div(c, 1u, c.f[1], c.f[20]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3C680000u);
    c.r[3].d[0] = c.r[2].d[0] | 44178ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBDCC0000u);
    st32((c.r[29].w[0] + 352u), c.f[21]);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    mmi::paddub(c.r[4], c.r[23], c.r[0]);
    st32((c.r[29].w[0] + 372u), c.f[21]);
    c.f[1] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 420u), c.f[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144448u); st32((c.r[29].w[0] + 424u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x00144448u) [[unlikely]] return; }
L_00144448:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 9088u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[2], c.r[2].w[0] - 9216u);
    set32(c.r[3], c.r[20].w[0] << 4);
    set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[29].w[0] + 352u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014446Cu); set32(c.r[7], 0u + 9u);  if (depth < kMaxDepth) unit_001B(c, 149u, depth + 1u); else { c.pc = 0x0016E7C0u; return; } if (c.pc != 0x0014446Cu) [[unlikely]] return; }
L_0014446C:
    c.budget -= 1;
L_00144470:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_00144474:
    c.r[3].d[0] = c.r[18].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[21], c.r[21].w[0] + 8448u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00144170u | kUnwind; return; } goto L_00144170; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 64u);
    st32((c.r[29].w[0] + 176u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[3], c.r[3].w[0] + 4u);
    st32((c.r[29].w[0] + 192u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[3], c.r[3].w[0] + 16u);
    st32((c.r[29].w[0] + 208u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[19].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 8448u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00143E04u | kUnwind; return; } [[clang::musttail]] return unit_0010(c, 203u, depth); } }
L_001444B4:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 480u);  c.pc = t; return; }
L_001444F0:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[5], c.r[3].w[0] + 26144u);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 6u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 74u)));
    set32(c.r[6], c.r[7].w[0] << 5);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 8);
    c.budget -= 19;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[5].w[0] + c.r[6].w[0]);  if (t) { goto L_00144970; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8388u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[18], 0u + 21u);  if (t) { goto L_00144558; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[18], c.r[0], c.r[0]);  if (t) { goto L_00144558; } }
    set32(c.r[18], 0u + 21u);
    c.budget -= 1;
L_00144558:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 512u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 514u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));  if (t) { goto L_00144570; } }
    set32(c.r[2], c.r[3].w[0] + 3u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_00144570:
    c.r[1].d[0] = c.r[2].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; mmi::paddub(c.r[17], c.r[0], c.r[0]);  if (t) { goto L_00144598; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 166u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00144594; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_00144598; } }
L_00144594:
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 1;
L_00144598:
    c.f[12] = ld32((c.r[4].w[0] + 104u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[12]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001445E0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001445C4u); set32(c.r[5], c.r[2].w[0] + 20144u);  if (depth < kMaxDepth) unit_0000(c, 219u, depth + 1u); else { c.pc = 0x00102668u; return; } if (c.pc != 0x001445C4u) [[unlikely]] return; }
L_001445C4:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001445D0u); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0000(c, 224u, depth + 1u); else { c.pc = 0x001026F8u; return; } if (c.pc != 0x001445D0u) [[unlikely]] return; }
L_001445D0:
    set32(c.r[2], c.r[29].w[0] + 112u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] - 20392u), c.r[2].w[0]);  if (t) { goto L_001445E8; } }
L_001445E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), 0u);
    c.budget -= 2;
L_001445E8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    set32(c.r[5], ld32((c.r[1].w[0] - 16720u)));
    set32(c.r[4], 0u + 3u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 8u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[20], c.r[2].w[0] - 8880u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[2], c.r[2].w[0] + 20160u);
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[21], c.r[2].w[0] + c.r[3].w[0]);
    mmi::paddub(c.r[19], c.r[0], c.r[0]);
    c.budget -= 20;
L_00144638:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_0014463C:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_00144680; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 516u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x51EB0000u);
    c.r[2].d[0] = c.r[2].d[0] | 34079ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] >> 31);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] << 2);  if (t) { goto L_001447F0; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_00144680:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 4u);  if (t) { goto L_001446D8; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 516u)));
    set32(c.r[3], 0u + 100u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x66660000u);
    c.r[2].d[0] = c.r[2].d[0] | 26215ull;
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] >> 31);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 19;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] << 2);  if (t) { goto L_001447F0; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_001446D8:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 5u);  if (t) { goto L_00144720; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 516u)));
    set32(c.r[3], 0u + 100u);
    set32(c.r[2], 0u + 10u);
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] << 2);  if (t) { goto L_001447F0; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 1;
L_00144720:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 6u);  if (t) { goto L_0014475C; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 512u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x51EB0000u);
    c.r[2].d[0] = c.r[2].d[0] | 34079ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] >> 31);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] << 4);  if (t) { goto L_001447F0; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 1;
L_0014475C:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 7u);  if (t) { goto L_001447AC; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 512u)));
    set32(c.r[3], 0u + 100u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x66660000u);
    c.r[2].d[0] = c.r[2].d[0] | 26215ull;
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] >> 31);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 17;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] << 4);  if (t) { goto L_001447F0; } }
    set32(c.r[2], 0u + 7u);
    c.budget -= 1;
L_001447AC:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_001447E8; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 512u)));
    set32(c.r[3], 0u + 100u);
    set32(c.r[2], 0u + 10u);
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 13;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] << 4);  if (t) { goto L_001447F0; } }
L_001447E8:
    c.r[2].d[0] = ld16((c.r[20].w[0]));
    c.budget -= 2;
L_001447F0:
    st16((c.r[29].w[0] + 184u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld16((c.r[20].w[0] + 2u));
    set32(c.r[5], c.r[29].w[0] + 186u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[6], c.r[29].w[0] + 132u);
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 184u)));
    c.r[2].d[0] = c.r[2].d[0] | 65300ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[29].w[0] + 188u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 6u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st16((c.r[29].w[0] + 190u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[20].w[0] + 8u));
    st32((c.r[29].w[0] + 128u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[20].w[0] + 10u));
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    st32((c.r[6].w[0]), c.r[3].w[0]);
    c.r[4].d[0] = ld16((c.r[20].w[0] + 12u));
    set32(c.r[3], ld32((c.r[29].w[0] + 128u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[29].w[0] + 144u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.r[4].d[0] = ld16((c.r[20].w[0] + 14u));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[29].w[0] + 148u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 136u), c.r[2].w[0]);
    c.budget -= 31;
    { const bool t = c.r[19].d[0] != 0ull; st32((c.r[29].w[0] + 152u), c.r[2].w[0]);  if (t) { goto L_00144880; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 6584u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);  if (t) { goto L_001448A8; } }
L_00144880:
    c.r[2].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001448A0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[2], c.r[2].w[0] + 20168u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);  if (t) { goto L_001448A8; } }
L_001448A0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[21].w[0]);
    c.budget -= 2;
L_001448A8:
    set32(c.r[2], c.r[29].w[0] + 128u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 184u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20368u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001448CCu); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x001448CCu) [[unlikely]] return; }
L_001448CC:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00144638u | kUnwind; return; } goto L_00144638; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 6568u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 5;
    { const bool t = c.r[18].d[0] != 0ull; st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);  if (t) { goto L_0014490C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] - 20416u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144904u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0013(c, 17u, depth + 1u); else { c.pc = 0x0014C780u; return; } if (c.pc != 0x00144904u) [[unlikely]] return; }
L_00144904:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00144920; } }
L_0014490C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] - 20416u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144920u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0013(c, 17u, depth + 1u); else { c.pc = 0x0014C780u; return; } if (c.pc != 0x00144920u) [[unlikely]] return; }
L_00144920:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00144970; } }
    set32(c.r[2], 0u + 7u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] != 0ull; st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00144958; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[6].d[0] = c.r[17].d[0] << 56;
    set32(c.r[4], c.r[2].w[0] - 20416u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144950u); c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);  if (depth < kMaxDepth) unit_0013(c, 18u, depth + 1u); else { c.pc = 0x0014C7E0u; return; } if (c.pc != 0x00144950u) [[unlikely]] return; }
L_00144950:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);  if (t) { goto L_00144974; } }
L_00144958:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[6].d[0] = c.r[17].d[0] << 56;
    set32(c.r[4], c.r[2].w[0] - 20416u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144970u); c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);  if (depth < kMaxDepth) unit_0013(c, 18u, depth + 1u); else { c.pc = 0x0014C7E0u; return; } if (c.pc != 0x00144970u) [[unlikely]] return; }
L_00144970:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00144974:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_001449A0:
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
    set32(c.r[5], ld32((c.r[28].w[0] - 26304u)));
    st32((c.r[29].w[0] + 204u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[4], c.r[3].w[0] + 26144u);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 6u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 74u)));
    set32(c.r[5], c.r[6].w[0] << 5);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 8);
    c.budget -= 23;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[4].w[0] + c.r[5].w[0]);  if (t) { goto L_00144DC8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 16720u)));
    set32(c.r[3], 0u + 3u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[23], 0u + 8u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 23u);
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[2], 0u + 24u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[30], 0u + 9u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[23].w[0]));
    mmi::paddub(c.r[20], c.r[0], c.r[0]);
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    c.budget -= 19;
L_00144A48:
    set32(c.r[2], ld32((c.r[29].w[0] + 204u)));
    c.f[0] = 0u;
    c.f[12] = ld32((c.r[2].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[12]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00144A9C; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != 0ull;  if (t) { goto L_00144A70; } }
    c.f[12] = c.f[12] ^ fp::kSign;
    c.budget -= 1;
L_00144A70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144A80u); set32(c.r[5], c.r[2].w[0] + 20144u);  if (depth < kMaxDepth) unit_0000(c, 219u, depth + 1u); else { c.pc = 0x00102668u; return; } if (c.pc != 0x00144A80u) [[unlikely]] return; }
L_00144A80:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144A8Cu); set32(c.r[5], c.r[29].w[0] + 256u);  if (depth < kMaxDepth) unit_0000(c, 224u, depth + 1u); else { c.pc = 0x001026F8u; return; } if (c.pc != 0x00144A8Cu) [[unlikely]] return; }
L_00144A8C:
    set32(c.r[2], c.r[29].w[0] + 208u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] - 20392u), c.r[2].w[0]);  if (t) { goto L_00144AA8; } }
L_00144A9C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), 0u);
    c.budget -= 3;
L_00144AA8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8388u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[18], 0u + 21u);  if (t) { goto L_00144AC4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[18], c.r[0], c.r[0]);  if (t) { goto L_00144AC4; } }
    set32(c.r[18], 0u + 21u);
    c.budget -= 1;
L_00144AC4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 512u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 514u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));  if (t) { goto L_00144ADC; } }
    set32(c.r[2], c.r[3].w[0] + 3u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_00144ADC:
    c.r[1].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; mmi::paddub(c.r[17], c.r[0], c.r[0]);  if (t) { goto L_00144B08; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 204u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 166u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00144B04; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_00144B08; } }
L_00144B04:
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 1;
L_00144B08:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[21], c.r[2].w[0] - 8752u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[2], c.r[2].w[0] + 20160u);
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[22], c.r[2].w[0] + c.r[3].w[0]);
    mmi::paddub(c.r[19], c.r[0], c.r[0]);
    c.budget -= 8;
L_00144B28:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_00144B70; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 516u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x51EB0000u);
    c.r[2].d[0] = c.r[2].d[0] | 34079ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] >> 31);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] << 2);  if (t) { goto L_00144C14; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_00144B70:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_00144BC8; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 516u)));
    set32(c.r[3], 0u + 100u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x66660000u);
    c.r[2].d[0] = c.r[2].d[0] | 26215ull;
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] >> 31);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 19;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] << 2);  if (t) { goto L_00144C14; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_00144BC8:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_00144C0C; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 516u)));
    set32(c.r[3], 0u + 100u);
    set32(c.r[2], 0u + 10u);
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] << 2);  if (t) { goto L_00144C14; } }
L_00144C0C:
    c.r[2].d[0] = ld16((c.r[21].w[0]));
    c.budget -= 2;
L_00144C14:
    st16((c.r[29].w[0] + 280u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[21].w[0] + 2u));
    set32(c.r[4], c.r[29].w[0] + 282u);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 280u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st16((c.r[29].w[0] + 284u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 6u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 13;
    { const bool t = c.r[20].d[0] != 0ull; st16((c.r[29].w[0] + 286u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00144C50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld16((c.r[21].w[0] + 8u));  if (t) { goto L_00144C58; } }
L_00144C50:
    c.r[2].d[0] = ld16((c.r[21].w[0] + 10u));
    c.budget -= 2;
L_00144C58:
    st32((c.r[29].w[0] + 224u), c.r[2].w[0]);
    c.r[3].d[0] = ld16((c.r[21].w[0] + 12u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[5].d[0] = c.r[2].d[0] | 65300ull;
    set32(c.r[4], c.r[29].w[0] + 228u);
    set32(c.r[2], c.r[18].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[3].d[0] = ld16((c.r[21].w[0] + 14u));
    set32(c.r[2], ld32((c.r[29].w[0] + 224u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 240u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[3].d[0] = ld16((c.r[21].w[0] + 16u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 244u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 232u), c.r[5].w[0]);
    c.budget -= 18;
    { const bool t = c.r[19].d[0] != 0ull; st32((c.r[29].w[0] + 248u), c.r[5].w[0]);  if (t) { goto L_00144CB4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 6584u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);  if (t) { goto L_00144CC0; } }
L_00144CB4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[22].w[0]);
    c.budget -= 3;
L_00144CC0:
    set32(c.r[2], c.r[29].w[0] + 224u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 280u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20368u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144CE4u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x00144CE4u) [[unlikely]] return; }
L_00144CE4:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[21], c.r[21].w[0] + 18u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00144B28u | kUnwind; return; } goto L_00144B28; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 6568u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 5;
    { const bool t = c.r[18].d[0] != 0ull; st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);  if (t) { goto L_00144D28; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 160u)));
    set32(c.r[6], 0u + 4u);
    mmi::paddub(c.r[5], c.r[2], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144D20u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_0013(c, 17u, depth + 1u); else { c.pc = 0x0014C780u; return; } if (c.pc != 0x00144D20u) [[unlikely]] return; }
L_00144D20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00144D40; } }
L_00144D28:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 176u)));
    set32(c.r[6], 0u + 4u);
    mmi::paddub(c.r[5], c.r[2], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144D40u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_0013(c, 17u, depth + 1u); else { c.pc = 0x0014C780u; return; } if (c.pc != 0x00144D40u) [[unlikely]] return; }
L_00144D40:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00144D98; } }
    set32(c.r[2], 0u + 7u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] != 0ull; st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00144D7C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[6].d[0] = c.r[17].d[0] << 56;
    c.r[5].d[0] = c.r[23].d[0] << 56;
    set32(c.r[4], c.r[2].w[0] - 20416u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144D74u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);  if (depth < kMaxDepth) unit_0013(c, 18u, depth + 1u); else { c.pc = 0x0014C7E0u; return; } if (c.pc != 0x00144D74u) [[unlikely]] return; }
L_00144D74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 160u)));  if (t) { goto L_00144D9C; } }
L_00144D7C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[6].d[0] = c.r[17].d[0] << 56;
    c.r[5].d[0] = c.r[30].d[0] << 56;
    set32(c.r[4], c.r[2].w[0] - 20416u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144D98u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);  if (depth < kMaxDepth) unit_0013(c, 18u, depth + 1u); else { c.pc = 0x0014C7E0u; return; } if (c.pc != 0x00144D98u) [[unlikely]] return; }
L_00144D98:
    set32(c.r[3], ld32((c.r[29].w[0] + 160u)));
    c.budget -= 1;
L_00144D9C:
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[23], c.r[23].w[0] + 2u);
    set32(c.r[30], c.r[30].w[0] + 2u);
    set32(c.r[3], c.r[3].w[0] + 2u);
    st32((c.r[29].w[0] + 160u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[3], c.r[3].w[0] + 2u);
    st32((c.r[29].w[0] + 176u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[20].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 8448u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00144A48u | kUnwind; return; } goto L_00144A48; } }
L_00144DC8:
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
L_00144E00:
    set32(c.r[29], c.r[29].w[0] - 400u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00860000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 316u), c.r[4].w[0]);
    set32(c.r[5], c.r[3].w[0] + 26144u);
    set32(c.r[6], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 316u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 6u)));
    set32(c.r[3], c.r[3].w[0] + 320u);
    st32((c.r[29].w[0] + 160u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 74u)));
    set32(c.r[4], c.r[6].w[0] << 5);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] << 8);
    c.budget -= 26;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[30], c.r[5].w[0] + c.r[4].w[0]);  if (t) { goto L_00145450; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[30].w[0] + 8388u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_00144E88; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 208u), c.r[3].w[0]);  if (t) { goto L_00144E8C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_00144E88:
    st32((c.r[29].w[0] + 208u), c.r[3].w[0]);
    c.budget -= 1;
L_00144E8C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[22], 0u + 21u);  if (t) { goto L_00144EA4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[22], c.r[0], c.r[0]);  if (t) { goto L_00144EA4; } }
    set32(c.r[22], 0u + 21u);
    c.budget -= 1;
L_00144EA4:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_00144EBC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 288u), 0u);  if (t) { goto L_00144EC0; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_00144EBC:
    st32((c.r[29].w[0] + 288u), c.r[3].w[0]);
    c.budget -= 1;
L_00144EC0:
    set32(c.r[3], ld32((c.r[29].w[0] + 208u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[29].w[0] + 192u), 0u);  if (t) { goto L_00145450; } }
    set32(c.r[2], 0u + 181u);
    st32((c.r[29].w[0] + 256u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    st32((c.r[29].w[0] + 224u), c.r[30].w[0]);
    st32((c.r[29].w[0] + 240u), 0u);
    st32((c.r[29].w[0] + 272u), c.r[2].w[0]);
    c.budget -= 6;
L_00144EE8:
    set32(c.r[2], ld32((c.r[29].w[0] + 224u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 160u)));
    st32((c.r[29].w[0] + 176u), 0u);
    c.f[0] = 0u;
    set32(c.r[19], c.r[2].w[0] + 1576u);
    set32(c.r[2], ld32((c.r[29].w[0] + 316u)));
    c.f[12] = ld32((c.r[2].w[0] + 104u));
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[12]));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 59u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    if (c.r[4].d[0] != 0) c.r[2].d[0] = c.r[3].d[0];
    c.budget -= 16;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[29].w[0] + 176u), c.r[2].w[0]);  if (t) { goto L_00144F54; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[4], c.r[29].w[0] + 368u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144F38u); set32(c.r[5], c.r[2].w[0] + 20144u);  if (depth < kMaxDepth) unit_0000(c, 219u, depth + 1u); else { c.pc = 0x00102668u; return; } if (c.pc != 0x00144F38u) [[unlikely]] return; }
L_00144F38:
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00144F44u); set32(c.r[5], c.r[29].w[0] + 368u);  if (depth < kMaxDepth) unit_0000(c, 224u, depth + 1u); else { c.pc = 0x001026F8u; return; } if (c.pc != 0x00144F44u) [[unlikely]] return; }
L_00144F44:
    set32(c.r[2], c.r[29].w[0] + 320u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] - 20392u), c.r[2].w[0]);  if (t) { goto L_00144F60; } }
L_00144F54:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), 0u);
    c.budget -= 3;
L_00144F60:
    set32(c.r[2], 0u + 3u);
    set32(c.r[21], ld32((c.r[29].w[0] + 240u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 9u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    mmi::paddub(c.r[20], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[2], c.r[2].w[0] + 20160u);
    set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 18;
L_00144FA8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[2], c.r[2].w[0] - 8672u);
    set32(c.r[3], c.r[21].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[2].w[0]));
    set32(c.r[16], c.r[29].w[0] + 390u);
    set32(c.r[17], c.r[29].w[0] + 340u);
    st16((c.r[29].w[0] + 388u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].d[0] = ld16((c.r[2].w[0] + 2u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65300ull;
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 388u)));
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[29].w[0] + 392u);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 6u)));
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[29].w[0] + 394u);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[4].d[0] = ld16((c.r[2].w[0] + 8u));
    st32((c.r[29].w[0] + 336u), c.r[4].w[0]);
    c.r[4].d[0] = ld16((c.r[2].w[0] + 10u));
    set32(c.r[4], c.r[22].w[0] + c.r[4].w[0]);
    st32((c.r[17].w[0]), c.r[4].w[0]);
    c.r[5].d[0] = ld16((c.r[2].w[0] + 12u));
    set32(c.r[4], ld32((c.r[29].w[0] + 336u)));
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[29].w[0] + 352u);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.r[4].d[0] = ld16((c.r[2].w[0] + 14u));
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[29].w[0] + 356u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    st32((c.r[29].w[0] + 344u), c.r[3].w[0]);
    c.budget -= 40;
    { const bool t = c.r[20].d[0] != 0ull; st32((c.r[29].w[0] + 360u), c.r[3].w[0]);  if (t) { goto L_0014506C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 16720u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 6584u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);  if (t) { goto L_001450B8; } }
L_0014506C:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001450A0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[30].w[0] + 8439u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001450A0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 16700u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] - 20364u), c.r[2].w[0]);  if (t) { goto L_001450B0; } }
L_001450A0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 16704u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[2].w[0]);
    c.budget -= 4;
L_001450B0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[18].w[0]);
    c.budget -= 2;
L_001450B8:
    set32(c.r[2], c.r[29].w[0] + 336u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 388u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20368u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001450DCu); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x001450DCu) [[unlikely]] return; }
L_001450DC:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[21], c.r[21].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00144FA8u | kUnwind; return; } goto L_00144FA8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 16720u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 256u)));
    set32(c.r[20], 0u + 583u);
    mmi::paddub(c.r[21], c.r[0], c.r[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[23], c.r[22].w[0] + c.r[2].w[0]);
    st32((c.r[1].w[0] - 20364u), c.r[3].w[0]);
    c.budget -= 9;
L_00145110:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0014514C; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 6u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x51EB0000u);
    c.r[2].d[0] = c.r[2].d[0] | 34079ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] >> 31);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] << 4);  if (t) { goto L_001451C8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0014514C:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != c.r[2].d[0];  if (t) { goto L_00145198; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 6u)));
    set32(c.r[3], 0u + 100u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x66660000u);
    c.r[2].d[0] = c.r[2].d[0] | 26215ull;
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] >> 31);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 17;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] << 4);  if (t) { goto L_001451C8; } }
L_00145198:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 6u)));
    set32(c.r[3], 0u + 100u);
    set32(c.r[2], 0u + 10u);
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 12;
L_001451C8:
    st16((c.r[29].w[0] + 388u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 44u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 388u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] - 20416u);
    set32(c.r[2], c.r[29].w[0] + 392u);
    set32(c.r[6], c.r[6].w[0] + 15u);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[5], c.r[29].w[0] + 336u);
    set32(c.r[3], c.r[29].w[0] + 388u);
    set32(c.r[6], c.r[2].w[0] + 19u);
    set32(c.r[2], c.r[29].w[0] + 394u);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));
    st32((c.r[29].w[0] + 336u), c.r[20].w[0]);
    st32((c.r[17].w[0]), c.r[23].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 336u)));
    set32(c.r[6], c.r[2].w[0] + 16u);
    set32(c.r[2], c.r[29].w[0] + 352u);
    st32((c.r[2].w[0]), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[6], c.r[2].w[0] + 10u);
    set32(c.r[2], c.r[29].w[0] + 356u);
    st32((c.r[2].w[0]), c.r[6].w[0]);
    st32((c.r[1].w[0] - 20380u), c.r[18].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145248u); st32((c.r[1].w[0] - 20368u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x00145248u) [[unlikely]] return; }
L_00145248:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[2].d[0] = c.r[21].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00145110u | kUnwind; return; } goto L_00145110; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42000000u);
    c.f[2] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[29].w[0] + 272u)));
    c.f[1] = ld32((c.r[2].w[0] + 16u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x48000000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014527Cu); c.f[12] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x0014527Cu) [[unlikely]] return; }
L_0014527C:
    set32(c.r[4], c.r[29].w[0] + 396u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 288u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], c.r[2].w[0] << 4);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[2], c.r[2].w[0] - 8608u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20376u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] + 19u);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[2], c.r[2].w[0] + 20160u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001452D4u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001B(c, 207u, depth + 1u); else { c.pc = 0x0016FA40u; return; } if (c.pc != 0x001452D4u) [[unlikely]] return; }
L_001452D4:
    set32(c.r[2], 0u + 8u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 288u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[2].w[0] << 4);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[2], c.r[2].w[0] - 8608u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    set32(c.r[2], c.r[28].w[0] - 31976u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20376u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[2], c.r[2].w[0] + 20244u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145328u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001B(c, 207u, depth + 1u); else { c.pc = 0x0016FA40u; return; } if (c.pc != 0x00145328u) [[unlikely]] return; }
L_00145328:
    set32(c.r[2], 0u + 7u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 6568u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00145374; } }
    c.budget -= 2;
    { const bool t = c.r[22].d[0] != 0ull;  if (t) { goto L_00145374; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] - 20416u);
    set32(c.r[5], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014536Cu); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0013(c, 17u, depth + 1u); else { c.pc = 0x0014C780u; return; } if (c.pc != 0x0014536Cu) [[unlikely]] return; }
L_0014536C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 176u)));  if (t) { goto L_0014538C; } }
L_00145374:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[5], 0u + 4u);
    set32(c.r[4], c.r[2].w[0] - 20416u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145388u); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0013(c, 17u, depth + 1u); else { c.pc = 0x0014C780u; return; } if (c.pc != 0x00145388u) [[unlikely]] return; }
L_00145388:
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    c.budget -= 1;
L_0014538C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001453F0; } }
    set32(c.r[2], 0u + 6u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001453D4; } }
    c.budget -= 2;
    { const bool t = c.r[22].d[0] != 0ull;  if (t) { goto L_001453D4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[6].d[0] = c.r[3].d[0] << 56;
    set32(c.r[4], c.r[2].w[0] - 20416u);
    set32(c.r[5], 0u + 3u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001453CCu); c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);  if (depth < kMaxDepth) unit_0013(c, 18u, depth + 1u); else { c.pc = 0x0014C7E0u; return; } if (c.pc != 0x001453CCu) [[unlikely]] return; }
L_001453CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 224u)));  if (t) { goto L_001453F4; } }
L_001453D4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 176u)));
    set32(c.r[5], 0u + 4u);
    mmi::paddub(c.r[6], c.r[2], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001453ECu); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_0013(c, 18u, depth + 1u); else { c.pc = 0x0014C7E0u; return; } if (c.pc != 0x001453ECu) [[unlikely]] return; }
L_001453EC:
    c.budget -= 1;
L_001453F0:
    set32(c.r[3], ld32((c.r[29].w[0] + 224u)));
    c.budget -= 1;
L_001453F4:
    set32(c.r[3], c.r[3].w[0] + 12u);
    st32((c.r[29].w[0] + 224u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 240u)));
    set32(c.r[3], c.r[3].w[0] + 2u);
    st32((c.r[29].w[0] + 240u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 256u)));
    set32(c.r[3], c.r[3].w[0] + 21u);
    st32((c.r[29].w[0] + 256u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 272u)));
    set32(c.r[3], c.r[3].w[0] + 4u);
    st32((c.r[29].w[0] + 272u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 288u)));
    set32(c.r[3], c.r[3].w[0] + 2u);
    st32((c.r[29].w[0] + 288u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 192u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 208u)));
    c.r[3].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 22;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00144EE8u | kUnwind; return; } goto L_00144EE8; } }
    c.budget -= 1;
L_00145450:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 400u);  c.pc = t; return; }
L_00145480:
    set32(c.r[29], c.r[29].w[0] - 560u);
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
    set32(c.r[6], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00860000u);
    st32((c.r[29].w[0] + 476u), c.r[4].w[0]);
    set32(c.r[5], c.r[3].w[0] + 26144u);
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 476u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 6u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 74u)));
    set32(c.r[3], c.r[3].w[0] + 320u);
    st32((c.r[29].w[0] + 352u), c.r[3].w[0]);
    set32(c.r[3], c.r[6].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 27;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 160u), c.r[3].w[0]);  if (t) { goto L_00145B58; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 16720u)));
    set32(c.r[4], 0u + 3u);
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    st32((c.r[29].w[0] + 384u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[4].w[0]);
    set32(c.r[4], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 352u)));
    st32((c.r[29].w[0] + 368u), c.r[3].w[0]);
    set32(c.r[3], 0u + 27u);
    st32((c.r[29].w[0] + 400u), c.r[3].w[0]);
    set32(c.r[3], 0u + 28u);
    st32((c.r[29].w[0] + 416u), c.r[3].w[0]);
    set32(c.r[3], 0u + 12u);
    st32((c.r[29].w[0] + 432u), c.r[3].w[0]);
    set32(c.r[3], 0u + 13u);
    st32((c.r[29].w[0] + 448u), c.r[3].w[0]);
    c.budget -= 22;
L_00145544:
    set32(c.r[3], ld32((c.r[29].w[0] + 476u)));
    c.f[0] = 0u;
    c.f[12] = ld32((c.r[3].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[12]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00145598; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_0014556C; } }
    c.f[12] = c.f[12] ^ fp::kSign;
    c.budget -= 1;
L_0014556C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[4], c.r[29].w[0] + 528u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014557Cu); set32(c.r[5], c.r[2].w[0] + 20144u);  if (depth < kMaxDepth) unit_0000(c, 219u, depth + 1u); else { c.pc = 0x00102668u; return; } if (c.pc != 0x0014557Cu) [[unlikely]] return; }
L_0014557C:
    set32(c.r[4], c.r[29].w[0] + 480u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145588u); set32(c.r[5], c.r[29].w[0] + 528u);  if (depth < kMaxDepth) unit_0000(c, 224u, depth + 1u); else { c.pc = 0x001026F8u; return; } if (c.pc != 0x00145588u) [[unlikely]] return; }
L_00145588:
    set32(c.r[3], c.r[29].w[0] + 480u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] - 20392u), c.r[3].w[0]);  if (t) { goto L_001455A0; } }
L_00145598:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), 0u);
    c.budget -= 2;
L_001455A0:
    set32(c.r[3], ld32((c.r[29].w[0] + 160u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 8388u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_001455C4; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 208u), c.r[3].w[0]);  if (t) { goto L_001455C8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_001455C4:
    st32((c.r[29].w[0] + 208u), c.r[3].w[0]);
    c.budget -= 1;
L_001455C8:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 21u);  if (t) { goto L_001455E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 224u), 0u);  if (t) { goto L_001455E4; } }
    set32(c.r[3], 0u + 21u);
    c.budget -= 1;
L_001455E0:
    st32((c.r[29].w[0] + 224u), c.r[3].w[0]);
    c.budget -= 1;
L_001455E4:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_001455FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 240u), 0u);  if (t) { goto L_00145600; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_001455FC:
    st32((c.r[29].w[0] + 240u), c.r[3].w[0]);
    c.budget -= 1;
L_00145600:
    set32(c.r[3], ld32((c.r[29].w[0] + 208u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[29].w[0] + 192u), 0u);  if (t) { goto L_00145AE8; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    st32((c.r[29].w[0] + 272u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 352u)));
    st32((c.r[29].w[0] + 288u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[21], c.r[2].w[0] - 8544u);
    set32(c.r[2], 0u + 181u);
    st32((c.r[29].w[0] + 304u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 368u)));
    st32((c.r[29].w[0] + 320u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 384u)));
    st32((c.r[29].w[0] + 336u), c.r[2].w[0]);
    c.budget -= 12;
L_00145640:
    set32(c.r[2], ld32((c.r[29].w[0] + 272u)));
    st32((c.r[29].w[0] + 176u), 0u);
    c.r[3].d[0] = ld16((c.r[21].w[0]));
    set32(c.r[4], 0u + 1u);
    set32(c.r[23], c.r[29].w[0] + 550u);
    set32(c.r[16], c.r[2].w[0] + 1576u);
    set32(c.r[2], ld32((c.r[29].w[0] + 288u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 59u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    st16((c.r[29].w[0] + 548u), static_cast<std::uint16_t>(c.r[3].w[0]));
    if (c.r[5].d[0] != 0) c.r[2].d[0] = c.r[4].d[0];
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[21].w[0] + 2u));
    st16((c.r[23].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 548u)));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[29].w[0] + 552u);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[23].w[0])));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 6u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 554u);
    c.budget -= 25;
    { const bool t = c.r[18].d[0] != 0ull; st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001456AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld16((c.r[21].w[0] + 8u));  if (t) { goto L_001456B4; } }
L_001456AC:
    c.r[2].d[0] = ld16((c.r[21].w[0] + 10u));
    c.budget -= 2;
L_001456B4:
    st32((c.r[29].w[0] + 496u), c.r[2].w[0]);
    c.r[4].d[0] = ld16((c.r[21].w[0] + 12u));
    set32(c.r[3], ld32((c.r[29].w[0] + 224u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[22], c.r[29].w[0] + 500u);
    set32(c.r[8], 0u + 9u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[22].w[0]), c.r[3].w[0]);
    c.r[5].d[0] = ld16((c.r[21].w[0] + 14u));
    set32(c.r[4], ld32((c.r[29].w[0] + 496u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[7], c.r[3].w[0] - 6584u);
    set32(c.r[3], c.r[29].w[0] + 512u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.r[10].d[0] = ld16((c.r[21].w[0] + 16u));
    set32(c.r[9], ld32((c.r[22].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[3].w[0] - 20416u);
    set32(c.r[3], c.r[29].w[0] + 516u);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    st32((c.r[3].w[0]), c.r[9].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[7].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 65300ull;
    st32((c.r[29].w[0] + 504u), c.r[2].w[0]);
    set32(c.r[6], c.r[29].w[0] + 496u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[6].w[0]);
    set32(c.r[5], c.r[29].w[0] + 548u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20368u), c.r[5].w[0]);
    c.budget -= 36;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145744u); st32((c.r[29].w[0] + 520u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x00145744u) [[unlikely]] return; }
L_00145744:
    set32(c.r[3], ld32((c.r[29].w[0] + 224u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 304u)));
    set32(c.r[19], 0u + 30u);
    set32(c.r[20], 0u + 582u);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 256u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[2], c.r[2].w[0] + 20160u);
    set32(c.r[30], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 13;
L_00145778:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001457B4; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 6u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x51EB0000u);
    c.r[2].d[0] = c.r[2].d[0] | 34079ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] >> 31);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] << 4);  if (t) { goto L_00145830; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001457B4:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_00145800; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 6u)));
    set32(c.r[3], 0u + 100u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x66660000u);
    c.r[2].d[0] = c.r[2].d[0] | 26215ull;
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] >> 31);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 17;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] << 4);  if (t) { goto L_00145830; } }
L_00145800:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 6u)));
    set32(c.r[3], 0u + 100u);
    set32(c.r[2], 0u + 10u);
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 12;
L_00145830:
    st16((c.r[29].w[0] + 548u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 44u);
    st16((c.r[23].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 548u)));
    set32(c.r[3], c.r[2].w[0] + 15u);
    set32(c.r[2], c.r[29].w[0] + 552u);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[23].w[0])));
    set32(c.r[3], c.r[2].w[0] + 19u);
    set32(c.r[2], c.r[29].w[0] + 554u);
    c.budget -= 12;
    { const bool t = c.r[18].d[0] != 0ull; st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00145868; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 496u), c.r[19].w[0]);  if (t) { goto L_00145870; } }
L_00145868:
    st32((c.r[29].w[0] + 496u), c.r[20].w[0]);
    c.budget -= 2;
L_00145870:
    set32(c.r[2], ld32((c.r[29].w[0] + 256u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[5], c.r[29].w[0] + 496u);
    set32(c.r[3], c.r[29].w[0] + 548u);
    st32((c.r[22].w[0]), c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[29].w[0] + 496u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] - 20416u);
    set32(c.r[2], c.r[29].w[0] + 512u);
    set32(c.r[6], c.r[6].w[0] + 16u);
    st32((c.r[2].w[0]), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[22].w[0])));
    set32(c.r[6], c.r[2].w[0] + 10u);
    set32(c.r[2], c.r[29].w[0] + 516u);
    st32((c.r[2].w[0]), c.r[6].w[0]);
    st32((c.r[1].w[0] - 20380u), c.r[30].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001458C4u); st32((c.r[1].w[0] - 20368u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x001458C4u) [[unlikely]] return; }
L_001458C4:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[19], c.r[19].w[0] + 12u);
    c.r[2].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00145778u | kUnwind; return; } goto L_00145778; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42000000u);
    c.f[2] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[29].w[0] + 320u)));
    c.f[1] = ld32((c.r[2].w[0] + 16u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x48000000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001458FCu); c.f[12] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x001458FCu) [[unlikely]] return; }
L_001458FC:
    set32(c.r[4], c.r[29].w[0] + 556u);
    set32(c.r[3], ld32((c.r[29].w[0] + 240u)));
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 336u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[2], c.r[2].w[0] - 8496u);
    set32(c.r[3], c.r[16].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20376u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] + 19u);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[2], c.r[2].w[0] + 20160u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014595Cu); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001B(c, 207u, depth + 1u); else { c.pc = 0x0016FA40u; return; } if (c.pc != 0x0014595Cu) [[unlikely]] return; }
L_0014595C:
    set32(c.r[2], c.r[16].w[0] + 1u);
    set32(c.r[3], c.r[2].w[0] << 4);
    set32(c.r[2], 0u + 8u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[2], c.r[2].w[0] - 8496u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    set32(c.r[2], c.r[28].w[0] - 31972u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20376u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[2], c.r[2].w[0] + 20244u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001459ACu); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001B(c, 207u, depth + 1u); else { c.pc = 0x0016FA40u; return; } if (c.pc != 0x001459ACu) [[unlikely]] return; }
L_001459AC:
    set32(c.r[2], 0u + 7u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 6568u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00145A00; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 224u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00145A00; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 400u)));
    set32(c.r[6], 0u + 4u);
    mmi::paddub(c.r[5], c.r[2], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001459F8u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_0013(c, 17u, depth + 1u); else { c.pc = 0x0014C780u; return; } if (c.pc != 0x001459F8u) [[unlikely]] return; }
L_001459F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 176u)));  if (t) { goto L_00145A1C; } }
L_00145A00:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 416u)));
    set32(c.r[6], 0u + 4u);
    mmi::paddub(c.r[5], c.r[2], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145A18u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_0013(c, 17u, depth + 1u); else { c.pc = 0x0014C780u; return; } if (c.pc != 0x00145A18u) [[unlikely]] return; }
L_00145A18:
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    c.budget -= 1;
L_00145A1C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00145A88; } }
    set32(c.r[2], 0u + 6u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00145A6C; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 224u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00145A6C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 432u)));
    c.r[6].d[0] = c.r[3].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    mmi::paddub(c.r[5], c.r[2], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145A64u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_0013(c, 18u, depth + 1u); else { c.pc = 0x0014C7E0u; return; } if (c.pc != 0x00145A64u) [[unlikely]] return; }
L_00145A64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 272u)));  if (t) { goto L_00145A8C; } }
L_00145A6C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 176u)));
    mmi::paddub(c.r[6], c.r[2], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 448u)));
    mmi::paddub(c.r[5], c.r[2], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145A88u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_0013(c, 18u, depth + 1u); else { c.pc = 0x0014C7E0u; return; } if (c.pc != 0x00145A88u) [[unlikely]] return; }
L_00145A88:
    set32(c.r[3], ld32((c.r[29].w[0] + 272u)));
    c.budget -= 1;
L_00145A8C:
    set32(c.r[3], c.r[3].w[0] + 12u);
    st32((c.r[29].w[0] + 272u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 288u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 288u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 304u)));
    set32(c.r[3], c.r[3].w[0] + 21u);
    st32((c.r[29].w[0] + 304u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 320u)));
    set32(c.r[3], c.r[3].w[0] + 4u);
    st32((c.r[29].w[0] + 320u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 336u)));
    set32(c.r[3], c.r[3].w[0] + 2u);
    st32((c.r[29].w[0] + 336u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 192u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 208u)));
    c.r[3].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 22;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[21], c.r[21].w[0] + 18u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00145640u | kUnwind; return; } goto L_00145640; } }
    c.budget -= 1;
L_00145AE8:
    set32(c.r[3], ld32((c.r[29].w[0] + 352u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 2u);
    st32((c.r[29].w[0] + 352u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 368u)));
    set32(c.r[3], c.r[3].w[0] + 8u);
    st32((c.r[29].w[0] + 368u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 384u)));
    set32(c.r[3], c.r[3].w[0] + 4u);
    st32((c.r[29].w[0] + 384u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 400u)));
    set32(c.r[3], c.r[3].w[0] + 2u);
    st32((c.r[29].w[0] + 400u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 416u)));
    set32(c.r[3], c.r[3].w[0] + 2u);
    st32((c.r[29].w[0] + 416u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 432u)));
    set32(c.r[3], c.r[3].w[0] + 2u);
    st32((c.r[29].w[0] + 432u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 448u)));
    set32(c.r[3], c.r[3].w[0] + 2u);
    st32((c.r[29].w[0] + 448u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[3], c.r[3].w[0] + 8448u);
    st32((c.r[29].w[0] + 160u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 28;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00145544u | kUnwind; return; } goto L_00145544; } }
L_00145B58:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 560u);  c.pc = t; return; }
L_00145B90:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 74u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00145E20; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    set32(c.r[6], ld32((c.r[1].w[0] - 16720u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[7], c.r[2].w[0] + 26144u);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 6u)));
    set32(c.r[5], 0u + 3u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], 0u + 1u);
    st32((c.r[1].w[0] - 20392u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], 0u + 7u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 124u);
    set32(c.r[5], c.r[29].w[0] + 186u);
    st16((c.r[29].w[0] + 184u), static_cast<std::uint16_t>(0u));
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 184u)));
    set32(c.r[3], c.r[8].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[16], c.r[7].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 79u);
    st16((c.r[29].w[0] + 188u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[9].d[0] = c.r[2].d[0] | 65300ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    set32(c.r[6], c.r[2].w[0] - 6584u);
    set32(c.r[4], 0u + 280u);
    set32(c.r[3], 0u + 211u);
    set32(c.r[2], c.r[5].w[0] + 11u);
    st16((c.r[29].w[0] + 190u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[8], c.r[29].w[0] + 148u);
    st32((c.r[29].w[0] + 144u), c.r[4].w[0]);
    st32((c.r[8].w[0]), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[7], ld32((c.r[29].w[0] + 144u)));
    set32(c.r[4], c.r[2].w[0] - 20416u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[5], c.r[29].w[0] + 144u);
    set32(c.r[2], c.r[7].w[0] + 80u);
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[8].w[0])));
    set32(c.r[3], c.r[29].w[0] + 184u);
    st32((c.r[1].w[0] - 20380u), c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] + 6u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 164u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[29].w[0] + 152u), c.r[9].w[0]);
    st32((c.r[1].w[0] - 20368u), c.r[3].w[0]);
    c.budget -= 61;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145CA4u); st32((c.r[29].w[0] + 168u), c.r[9].w[0]);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x00145CA4u) [[unlikely]] return; }
L_00145CA4:
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 1;
L_00145CA8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[2], 0u + 6u);  if (t) { goto L_00145D24; } }
    set32(c.r[2], 0u + 7u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[2], c.r[2].w[0] - 8368u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 818u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    c.f[1] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x457A0000u);
    c.f[0] = c.r[2].w[0];
    c.f[2] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145D04u);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x00145D04u) [[unlikely]] return; }
L_00145D04:
    set32(c.r[3], 0u + 360u);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 48u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 80u), c.r[3].w[0]);  if (t) { goto L_00145D90; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 1;
L_00145D24:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[2], c.r[2].w[0] - 8352u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 818u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    c.f[1] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x457A0000u);
    c.f[0] = c.r[2].w[0];
    c.f[2] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145D74u);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x00145D74u) [[unlikely]] return; }
L_00145D74:
    set32(c.r[3], 0u + 360u);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[2], 0u + 280u);
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 7;
L_00145D90:
    set32(c.r[2], 0u + 205u);
    st32((c.r[29].w[0] + 84u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[2], 0u + 209u);
    st32((c.r[29].w[0] + 100u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65300ull;
    st32((c.r[29].w[0] + 104u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 88u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 72u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    set32(c.r[2], 0u + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20354u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145DE4u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001B(c, 216u, depth + 1u); else { c.pc = 0x0016FE90u; return; } if (c.pc != 0x00145DE4u) [[unlikely]] return; }
L_00145DE4:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00145CA8u | kUnwind; return; } goto L_00145CA8; } }
    set32(c.r[5], 0u + 5u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[2], c.r[2].w[0] - 6568u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] - 20416u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145E20u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0013(c, 17u, depth + 1u); else { c.pc = 0x0014C780u; return; } if (c.pc != 0x00145E20u) [[unlikely]] return; }
L_00145E20:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_00145E40:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[4], c.r[3].w[0] + 26144u);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 6u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 74u)));
    set32(c.r[5], c.r[6].w[0] << 5);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 8);
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[4].w[0] + c.r[5].w[0]);  if (t) { goto L_00146140; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    set32(c.r[6], ld32((c.r[1].w[0] - 16720u)));
    set32(c.r[5], 0u + 3u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], 0u + 7u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[3].w[0]));
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    c.budget -= 16;
L_00145EC0:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 816u)));
    set32(c.r[3], 0u + 4000u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_00146134; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 789u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00146130; } }
    set32(c.r[2], 0u + 124u);
    set32(c.r[5], c.r[29].w[0] + 202u);
    st16((c.r[29].w[0] + 200u), static_cast<std::uint16_t>(0u));
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 200u)));
    set32(c.r[4], 0u + 120u);
    set32(c.r[2], 0u + 440u);
    if (c.r[18].d[0] != 0) c.r[4].d[0] = c.r[2].d[0];
    set32(c.r[2], c.r[3].w[0] + 79u);
    st16((c.r[29].w[0] + 204u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[8].d[0] = c.r[2].d[0] | 65300ull;
    set32(c.r[3], 0u + 211u);
    set32(c.r[7], c.r[29].w[0] + 164u);
    set32(c.r[2], c.r[5].w[0] + 11u);
    st16((c.r[29].w[0] + 206u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[29].w[0] + 160u), c.r[4].w[0]);
    st32((c.r[7].w[0]), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[6], c.r[2].w[0] - 6584u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[5], c.r[29].w[0] + 160u);
    set32(c.r[2], c.r[4].w[0] + 80u);
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[7], ld32((c.r[7].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] - 20416u);
    set32(c.r[3], c.r[29].w[0] + 200u);
    st32((c.r[1].w[0] - 20380u), c.r[6].w[0]);
    set32(c.r[2], c.r[7].w[0] + 6u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 180u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[29].w[0] + 168u), c.r[8].w[0]);
    st32((c.r[1].w[0] - 20368u), c.r[3].w[0]);
    c.budget -= 40;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145F7Cu); st32((c.r[29].w[0] + 184u), c.r[8].w[0]);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x00145F7Cu) [[unlikely]] return; }
L_00145F7C:
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 1;
L_00145F80:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[2], 0u + 6u);  if (t) { goto L_0014600C; } }
    set32(c.r[2], 0u + 7u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[2], c.r[2].w[0] - 8368u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    set32(c.r[3], 0u + 200u);
    set32(c.r[2], 0u + 520u);
    if (c.r[18].d[0] != 0) c.r[3].d[0] = c.r[2].d[0];
    st32((c.r[29].w[0] + 160u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 818u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    c.f[1] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x457A0000u);
    c.f[0] = c.r[2].w[0];
    c.f[2] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00145FECu);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x00145FECu) [[unlikely]] return; }
L_00145FEC:
    set32(c.r[3], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 112u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_00146090; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 1;
L_0014600C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[2], c.r[2].w[0] - 8352u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    set32(c.r[3], 0u + 120u);
    set32(c.r[2], 0u + 440u);
    if (c.r[18].d[0] != 0) c.r[3].d[0] = c.r[2].d[0];
    st32((c.r[29].w[0] + 160u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 818u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    c.f[1] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x457A0000u);
    c.f[0] = c.r[2].w[0];
    c.f[2] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014606Cu);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x0014606Cu) [[unlikely]] return; }
L_0014606C:
    set32(c.r[4], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[3], 0u + 80u);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 112u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 96u), c.r[4].w[0]);
    c.budget -= 9;
L_00146090:
    set32(c.r[2], 0u + 205u);
    st32((c.r[29].w[0] + 100u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[2], 0u + 209u);
    st32((c.r[29].w[0] + 116u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 84u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65300ull;
    st32((c.r[29].w[0] + 120u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 104u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 88u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    set32(c.r[2], 0u + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20354u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001460E4u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001B(c, 216u, depth + 1u); else { c.pc = 0x0016FE90u; return; } if (c.pc != 0x001460E4u) [[unlikely]] return; }
L_001460E4:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00145F80u | kUnwind; return; } goto L_00145F80; } }
    set32(c.r[2], 0u + 5u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 6568u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    set32(c.r[2], c.r[18].w[0] + 31u);
    c.r[5].d[0] = c.r[2].d[0] << 56;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] - 20416u);
    set32(c.r[6], 0u + 4u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014612Cu); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);  if (depth < kMaxDepth) unit_0013(c, 17u, depth + 1u); else { c.pc = 0x0014C780u; return; } if (c.pc != 0x0014612Cu) [[unlikely]] return; }
L_0014612C:
    c.budget -= 1;
L_00146130:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_00146134:
    c.r[3].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 8448u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00145EC0u | kUnwind; return; } goto L_00145EC0; } }
L_00146140:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_00146160:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[28].w[0] - 26304u)));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[4], c.r[3].w[0] + 26144u);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 6u)));
    set32(c.r[18], c.r[16].w[0] + 320u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 74u)));
    set32(c.r[5], c.r[6].w[0] << 5);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 8);
    c.budget -= 21;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[4].w[0] + c.r[5].w[0]);  if (t) { goto L_00146A6C; } }
    c.f[12] = ld32((c.r[16].w[0] + 104u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[12]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001461FC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001461E0u); set32(c.r[5], c.r[2].w[0] + 20144u);  if (depth < kMaxDepth) unit_0000(c, 219u, depth + 1u); else { c.pc = 0x00102668u; return; } if (c.pc != 0x001461E0u) [[unlikely]] return; }
L_001461E0:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001461ECu); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0000(c, 224u, depth + 1u); else { c.pc = 0x001026F8u; return; } if (c.pc != 0x001461ECu) [[unlikely]] return; }
L_001461EC:
    set32(c.r[2], c.r[29].w[0] + 112u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] - 20392u), c.r[2].w[0]);  if (t) { goto L_00146204; } }
L_001461FC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), 0u);
    c.budget -= 2;
L_00146204:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    set32(c.r[5], ld32((c.r[1].w[0] - 16720u)));
    set32(c.r[4], 0u + 3u);
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[19], 0u + 1u);
    set32(c.r[3], 0u + 9u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[19].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 17;
    { const bool t = c.r[2].d[0] == c.r[19].d[0];  if (t) { goto L_0014624C; } }
    mmi::paddub(c.r[19], c.r[0], c.r[0]);
    c.budget -= 1;
L_0014624C:
    c.r[1].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00146458; } }
L_00146258:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[3], c.r[2].w[0] - 8336u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8389u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[4], c.r[2].w[0] - 8336u);
    c.r[1].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[5].d[0] = ld16((c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[11], c.r[3].w[0] - 8336u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[9], c.r[3].w[0] - 8336u);
    st16((c.r[29].w[0] + 200u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[8], c.r[3].w[0] - 8336u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8389u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[7], c.r[3].w[0] - 8336u);
    set32(c.r[2], c.r[29].w[0] + 202u);
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = ld16((c.r[3].w[0] + 2u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[6], c.r[4].w[0] - 8336u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[13].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8389u)));
    set32(c.r[5], c.r[4].w[0] - 8336u);
    c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 200u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[3], c.r[29].w[0] + 148u);
    set32(c.r[12], c.r[13].w[0] << 1);
    set32(c.r[12], c.r[12].w[0] + c.r[13].w[0]);
    set32(c.r[12], c.r[12].w[0] << 1);
    set32(c.r[12], c.r[19].w[0] + c.r[12].w[0]);
    set32(c.r[12], c.r[12].w[0] << 4);
    set32(c.r[11], c.r[11].w[0] + c.r[12].w[0]);
    c.r[11].sd[0] = static_cast<std::int16_t>(ld16((c.r[11].w[0] + 4u)));
    c.r[4].d[0] = c.r[4].d[0] | 65300ull;
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st16((c.r[29].w[0] + 204u), static_cast<std::uint16_t>(c.r[10].w[0]));
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8389u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    set32(c.r[10], c.r[11].w[0] << 1);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    set32(c.r[10], c.r[10].w[0] << 1);
    set32(c.r[10], c.r[19].w[0] + c.r[10].w[0]);
    set32(c.r[10], c.r[10].w[0] << 4);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0] + 6u)));
    set32(c.r[2], c.r[2].w[0] + c.r[9].w[0]);
    st16((c.r[29].w[0] + 206u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8389u)));
    set32(c.r[2], c.r[9].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[9].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[8].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 8u));
    st32((c.r[29].w[0] + 144u), c.r[2].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8389u)));
    set32(c.r[2], c.r[8].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 10u));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8389u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 144u)));
    set32(c.r[7], c.r[8].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 1);
    set32(c.r[7], c.r[19].w[0] + c.r[7].w[0]);
    set32(c.r[7], c.r[7].w[0] << 4);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[6].d[0] = ld16((c.r[6].w[0] + 12u));
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8389u)));
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0] + 14u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 164u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 152u), c.r[4].w[0]);
    c.budget -= 104;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[29].w[0] + 168u), c.r[4].w[0]);  if (t) { goto L_0014640C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[2], c.r[2].w[0] + 20180u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);  if (t) { goto L_00146420; } }
L_0014640C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[2], c.r[2].w[0] + 20184u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    c.budget -= 5;
L_00146420:
    set32(c.r[2], c.r[29].w[0] + 144u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 200u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20368u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00146444u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x00146444u) [[unlikely]] return; }
L_00146444:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00146258u | kUnwind; return; } goto L_00146258; } }
    c.budget -= 1;
L_00146458:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; mmi::paddub(c.r[21], c.r[0], c.r[0]);  if (t) { goto L_001464E0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 16712u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[3], c.r[2].w[0] - 8144u);
    set32(c.r[2], c.r[28].w[0] - 31968u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20376u), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8434u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8389u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[4], c.r[2].w[0] - 8128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20368u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 6560u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001464DCu); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001B(c, 210u, depth + 1u); else { c.pc = 0x0016FB80u; return; } if (c.pc != 0x001464DCu) [[unlikely]] return; }
L_001464DC:
    mmi::paddub(c.r[21], c.r[0], c.r[0]);
    c.budget -= 1;
L_001464E0:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != 0ull;  if (t) { goto L_00146578; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8389u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0014652C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 290u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 288u)));
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00146554; } }
L_0014652C:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 296u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 294u)));
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 10;
L_00146554:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[2], c.r[2].w[0] + 20188u);
    st32((c.r[16].w[0] + 112u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    set32(c.r[2], 0u + 9u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00146608; } }
L_00146578:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8389u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001465BC; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 292u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 288u)));
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001465E4; } }
L_001465BC:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 298u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 294u)));
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 10;
L_001465E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[2], c.r[2].w[0] + 20196u);
    st32((c.r[16].w[0] + 112u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    set32(c.r[2], 0u + 8u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 9;
L_00146608:
    c.f[1] = ld32((c.r[16].w[0] + 112u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43800000u);
    c.f[2] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x48C00000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014662Cu); c.f[12] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x0014662Cu) [[unlikely]] return; }
L_0014662C:
    set32(c.r[3], c.r[29].w[0] + 196u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], 0u + 51u);
    st32((c.r[29].w[0] + 128u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20376u), c.r[3].w[0]);
    set32(c.r[2], 0u + 18u);
    set32(c.r[19], c.r[29].w[0] + 132u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[20], c.r[29].w[0] + 136u);
    c.r[2].d[0] = c.r[2].d[0] | 65300ull;
    st32((c.r[20].w[0]), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 128u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] - 20416u);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00146680u); st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_001B(c, 207u, depth + 1u); else { c.pc = 0x0016FA40u; return; } if (c.pc != 0x00146680u) [[unlikely]] return; }
L_00146680:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[2].d[0] = c.r[21].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001464E0u | kUnwind; return; } goto L_001464E0; } }
    mmi::paddub(c.r[21], c.r[0], c.r[0]);
    c.budget -= 1;
L_00146694:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != 0ull;  if (t) { goto L_0014672C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8389u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001466E0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 296u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 294u)));
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00146708; } }
L_001466E0:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 290u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 288u)));
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 10;
L_00146708:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[2], c.r[2].w[0] + 20192u);
    st32((c.r[16].w[0] + 112u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    set32(c.r[2], 0u + 9u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001467B8; } }
L_0014672C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8389u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00146770; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 298u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 294u)));
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00146798; } }
L_00146770:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 292u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 288u)));
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 10;
L_00146798:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[2], c.r[2].w[0] + 20196u);
    st32((c.r[16].w[0] + 112u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    set32(c.r[2], 0u + 8u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 8;
L_001467B8:
    c.f[1] = ld32((c.r[16].w[0] + 112u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43800000u);
    c.f[2] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x48A00000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001467DCu); c.f[12] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x001467DCu) [[unlikely]] return; }
L_001467DC:
    set32(c.r[3], c.r[29].w[0] + 196u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20376u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 112u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43800000u);
    c.f[2] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x424C0000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00146814u); c.f[12] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x00146814u) [[unlikely]] return; }
L_00146814:
    st32((c.r[29].w[0] + 128u), c.r[2].w[0]);
    set32(c.r[2], 0u + 23u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65300ull;
    st32((c.r[20].w[0]), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 128u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] - 20416u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014684Cu); st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_001B(c, 207u, depth + 1u); else { c.pc = 0x0016FA40u; return; } if (c.pc != 0x0014684Cu) [[unlikely]] return; }
L_0014684C:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[2].d[0] = c.r[21].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00146694u | kUnwind; return; } goto L_00146694; } }
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 7u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[5], 0u + 5u);
    set32(c.r[4], c.r[2].w[0] - 20416u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00146888u); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0013(c, 18u, depth + 1u); else { c.pc = 0x0014C7E0u; return; } if (c.pc != 0x00146888u) [[unlikely]] return; }
L_00146888:
    set32(c.r[2], 0u + 7u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 6568u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[5], 0u + 6u);
    set32(c.r[4], c.r[2].w[0] - 20416u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001468B8u); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0013(c, 17u, depth + 1u); else { c.pc = 0x0014C780u; return; } if (c.pc != 0x001468B8u) [[unlikely]] return; }
L_001468B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65300ull;
    st32((c.r[29].w[0] + 152u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 168u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 84u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001468F4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[5], 0u + 6u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 97u);
    st8((c.r[4].w[0] + 368u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st16((c.r[29].w[0] + 200u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st16((c.r[29].w[0] + 202u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00146918; } }
L_001468F4:
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u + 1u);
    st16((c.r[29].w[0] + 200u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 6u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[29].w[0] + 202u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 9;
L_00146918:
    set32(c.r[5], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 26276u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 200u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 6u)));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 368u)));
    st32((c.r[1].w[0] - 20364u), c.r[2].w[0]);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st16((c.r[29].w[0] + 204u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 202u)));
    set32(c.r[2], c.r[2].w[0] + 22u);
    st16((c.r[29].w[0] + 206u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 17;
L_0014695C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_001469BC; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 50u);
    st32((c.r[29].w[0] + 144u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 144u)));
    set32(c.r[3], 0u + 29u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 6u)));
    set32(c.r[7], c.r[29].w[0] + 148u);
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 368u)));
    set32(c.r[5], c.r[6].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[29].w[0] + 160u), c.r[4].w[0]);
    st32((c.r[7].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[7].w[0])));
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[3].w[0] + 10u);
    c.budget -= 22;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 164u), c.r[2].w[0]);  if (t) { goto L_00146A10; } }
L_001469BC:
    set32(c.r[6], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 51u);
    st32((c.r[29].w[0] + 144u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 144u)));
    set32(c.r[3], 0u + 30u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 6u)));
    set32(c.r[7], c.r[29].w[0] + 148u);
    set32(c.r[2], 0u + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 368u)));
    set32(c.r[5], c.r[6].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[29].w[0] + 160u), c.r[4].w[0]);
    st32((c.r[7].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[7].w[0])));
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[3].w[0] + 10u);
    st32((c.r[29].w[0] + 164u), c.r[2].w[0]);
    c.budget -= 21;
L_00146A10:
    set32(c.r[2], c.r[16].w[0] + 9u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[16].w[0] + 10u);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[2], c.r[2].w[0] + 20160u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 144u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 200u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20368u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00146A5Cu); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x00146A5Cu) [[unlikely]] return; }
L_00146A5C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014695Cu | kUnwind; return; } goto L_0014695C; } }
L_00146A6C:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_00146A90:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[28].w[0] - 26304u)));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[4], c.r[3].w[0] + 26144u);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 6u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 74u)));
    set32(c.r[5], c.r[6].w[0] << 5);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 8);
    c.budget -= 19;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[4].w[0] + c.r[5].w[0]);  if (t) { goto L_00147434; } }
    c.f[12] = ld32((c.r[16].w[0] + 104u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[12]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00146B30; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00146B08u); set32(c.r[5], c.r[2].w[0] + 20144u);  if (depth < kMaxDepth) unit_0000(c, 219u, depth + 1u); else { c.pc = 0x00102668u; return; } if (c.pc != 0x00146B08u) [[unlikely]] return; }
L_00146B08:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00146B14u); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0000(c, 224u, depth + 1u); else { c.pc = 0x001026F8u; return; } if (c.pc != 0x00146B14u) [[unlikely]] return; }
L_00146B14:
    set32(c.r[3], ld32((c.r[29].w[0] + 96u)));
    set32(c.r[2], c.r[29].w[0] + 96u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 100u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 96u), 0u);  if (t) { goto L_00146B38; } }
L_00146B30:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), 0u);
    c.budget -= 2;
L_00146B38:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    set32(c.r[5], ld32((c.r[1].w[0] - 16720u)));
    set32(c.r[4], 0u + 3u);
    set32(c.r[6], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 9u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 264u)));
    c.budget -= 17;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], 0u + 4u);  if (t) { goto L_00146BA0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 265u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[19], 0u + 2u);  if (t) { goto L_00146B94; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00146B9C; } }
    set32(c.r[19], 0u + 2u);
    c.budget -= 1;
L_00146B94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[1].d[0] = 0ull < c.r[19].d[0] ? 1ull : 0ull;  if (t) { goto L_00146BA4; } }
L_00146B9C:
    set32(c.r[19], 0u + 4u);
    c.budget -= 1;
L_00146BA0:
    c.r[1].d[0] = 0ull < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_00146BA4:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[18], c.r[0], c.r[0]);  if (t) { goto L_00146D48; } }
L_00146BAC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[3], c.r[2].w[0] - 8000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8389u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[5], c.r[2].w[0] - 8000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = ld16((c.r[2].w[0]));
    set32(c.r[3], c.r[29].w[0] + 186u);
    st16((c.r[29].w[0] + 184u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[13], c.r[4].w[0] - 8000u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8389u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[12], c.r[4].w[0] - 8000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[7], c.r[2].w[0] - 8000u);
    set32(c.r[4], c.r[6].w[0] << 2);
    set32(c.r[4], c.r[18].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.r[6].d[0] = ld16((c.r[4].w[0] + 2u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[2], c.r[2].w[0] - 8000u);
    set32(c.r[5], c.r[29].w[0] + 132u);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[11], c.r[4].w[0] - 8000u);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8389u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[10], c.r[4].w[0] - 8000u);
    c.r[14].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 184u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[6].d[0] = c.r[4].d[0] | 65300ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[9], c.r[4].w[0] + 20180u);
    set32(c.r[4], c.r[8].w[0] << 2);
    set32(c.r[4], c.r[18].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);
    c.r[15].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 4u)));
    set32(c.r[8], c.r[29].w[0] + 128u);
    set32(c.r[7], c.r[29].w[0] + 184u);
    set32(c.r[14], c.r[14].w[0] + c.r[15].w[0]);
    st16((c.r[29].w[0] + 188u), static_cast<std::uint16_t>(c.r[14].w[0]));
    c.r[14].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8389u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    set32(c.r[4], c.r[4].w[0] - 20416u);
    set32(c.r[14], c.r[14].w[0] << 2);
    set32(c.r[14], c.r[18].w[0] + c.r[14].w[0]);
    set32(c.r[14], c.r[14].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[14].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 6u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st16((c.r[29].w[0] + 190u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8389u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[13].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 8u));
    st32((c.r[29].w[0] + 128u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8389u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[12].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 10u));
    st32((c.r[5].w[0]), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8389u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[11].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0] + 12u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 144u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8389u)));
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[10].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0] + 14u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[1].w[0] - 20380u), c.r[9].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[29].w[0] + 148u), c.r[2].w[0]);
    st32((c.r[1].w[0] - 20396u), c.r[8].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[29].w[0] + 136u), c.r[6].w[0]);
    st32((c.r[1].w[0] - 20368u), c.r[7].w[0]);
    c.budget -= 99;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00146D38u); st32((c.r[29].w[0] + 152u), c.r[6].w[0]);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x00146D38u) [[unlikely]] return; }
L_00146D38:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00146BACu | kUnwind; return; } goto L_00146BAC; } }
L_00146D48:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 264u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[18], c.r[0], c.r[0]);  if (t) { goto L_00146D68; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 265u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[20], c.r[0], c.r[0]);  if (t) { goto L_00146E44; } }
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    c.budget -= 1;
L_00146D68:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[2], c.r[2].w[0] + 26144u);
    set32(c.r[5], 0u + 192u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 6u)));
    set32(c.r[4], 0u + 216u);
    set32(c.r[9], c.r[29].w[0] + 186u);
    set32(c.r[8], 0u + 19u);
    set32(c.r[7], c.r[6].w[0] + c.r[18].w[0]);
    set32(c.r[6], c.r[7].w[0] << 5);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 8389u)));
    set32(c.r[3], 0u + 45u);
    set32(c.r[7], 0u + 34u);
    set32(c.r[10], c.r[29].w[0] + 132u);
    if (c.r[6].d[0] != 0) c.r[5].d[0] = c.r[4].d[0];
    st16((c.r[29].w[0] + 184u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[9].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 598u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 184u)));
    if (c.r[18].d[0] != 0) c.r[8].d[0] = c.r[2].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[6], c.r[2].w[0] + 20184u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[3].w[0] + 22u);
    st16((c.r[29].w[0] + 188u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] - 20416u);
    set32(c.r[5], c.r[29].w[0] + 128u);
    set32(c.r[2], c.r[9].w[0] + 20u);
    st32((c.r[29].w[0] + 128u), c.r[8].w[0]);
    st16((c.r[29].w[0] + 190u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[10].w[0]), c.r[7].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    set32(c.r[3], c.r[29].w[0] + 184u);
    set32(c.r[2], c.r[2].w[0] + 23u);
    st32((c.r[29].w[0] + 144u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[10].w[0])));
    st32((c.r[1].w[0] - 20380u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + 11u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20368u), c.r[3].w[0]);
    c.budget -= 49;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00146E2Cu); st32((c.r[29].w[0] + 148u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x00146E2Cu) [[unlikely]] return; }
L_00146E2C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00146D68u | kUnwind; return; } goto L_00146D68; } }
    mmi::paddub(c.r[20], c.r[0], c.r[0]);
    c.budget -= 2;
L_00146E44:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != 0ull;  if (t) { goto L_00146EDC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8389u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00146E90; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 290u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 288u)));
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00146EB8; } }
L_00146E90:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 296u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 294u)));
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 10;
L_00146EB8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[2], c.r[2].w[0] + 20188u);
    st32((c.r[16].w[0] + 112u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    set32(c.r[2], 0u + 9u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00146F68; } }
L_00146EDC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8389u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00146F20; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 292u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 288u)));
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00146F48; } }
L_00146F20:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 298u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 294u)));
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 10;
L_00146F48:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[2], c.r[2].w[0] + 20196u);
    st32((c.r[16].w[0] + 112u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    set32(c.r[2], 0u + 8u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 8;
L_00146F68:
    c.f[0] = ld32((c.r[16].w[0] + 112u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43800000u);
    c.f[1] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x49000000u);
    c.f[2] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00146F88u); c.f[12] = fp::add(c.f[2], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x00146F88u) [[unlikely]] return; }
L_00146F88:
    set32(c.r[3], c.r[29].w[0] + 180u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], 0u + 20u);
    st32((c.r[29].w[0] + 112u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20376u), c.r[3].w[0]);
    set32(c.r[2], 0u + 18u);
    set32(c.r[18], c.r[29].w[0] + 116u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[19], c.r[29].w[0] + 120u);
    c.r[2].d[0] = c.r[2].d[0] | 65300ull;
    st32((c.r[19].w[0]), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 112u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] - 20416u);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00146FDCu); st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_001B(c, 207u, depth + 1u); else { c.pc = 0x0016FA40u; return; } if (c.pc != 0x00146FDCu) [[unlikely]] return; }
L_00146FDC:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00146E44u | kUnwind; return; } goto L_00146E44; } }
    mmi::paddub(c.r[20], c.r[0], c.r[0]);
    c.budget -= 1;
L_00146FF0:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != 0ull;  if (t) { goto L_00147088; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8389u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0014703C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 296u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 294u)));
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00147064; } }
L_0014703C:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 290u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 288u)));
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 10;
L_00147064:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[2], c.r[2].w[0] + 20192u);
    st32((c.r[16].w[0] + 112u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    set32(c.r[2], 0u + 9u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00147118; } }
L_00147088:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8389u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001470CC; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 298u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 294u)));
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001470F4; } }
L_001470CC:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 292u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 288u)));
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 10;
L_001470F4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[2], c.r[2].w[0] + 20196u);
    st32((c.r[16].w[0] + 112u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    set32(c.r[2], 0u + 8u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 9;
L_00147118:
    c.f[1] = ld32((c.r[16].w[0] + 112u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43800000u);
    c.f[2] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x49000000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014713Cu); c.f[12] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x0014713Cu) [[unlikely]] return; }
L_0014713C:
    set32(c.r[3], c.r[29].w[0] + 180u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20376u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 112u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43800000u);
    c.f[2] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43B60000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00147174u); c.f[12] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x00147174u) [[unlikely]] return; }
L_00147174:
    st32((c.r[29].w[0] + 112u), c.r[2].w[0]);
    set32(c.r[2], 0u + 18u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65300ull;
    st32((c.r[19].w[0]), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 112u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] - 20416u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001471ACu); st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_001B(c, 207u, depth + 1u); else { c.pc = 0x0016FA40u; return; } if (c.pc != 0x001471ACu) [[unlikely]] return; }
L_001471AC:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00146FF0u | kUnwind; return; } goto L_00146FF0; } }
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 7u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 6568u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] - 20416u);
    set32(c.r[5], 0u + 33u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001471F8u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0013(c, 17u, depth + 1u); else { c.pc = 0x0014C780u; return; } if (c.pc != 0x001471F8u) [[unlikely]] return; }
L_001471F8:
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 264u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00147214; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 265u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00147434; } }
L_00147214:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] - 20416u);
    set32(c.r[5], 0u + 54u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00147228u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0013(c, 17u, depth + 1u); else { c.pc = 0x0014C780u; return; } if (c.pc != 0x00147228u) [[unlikely]] return; }
L_00147228:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] - 20416u);
    set32(c.r[5], 0u + 55u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014723Cu); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0013(c, 17u, depth + 1u); else { c.pc = 0x0014C780u; return; } if (c.pc != 0x0014723Cu) [[unlikely]] return; }
L_0014723C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65300ull;
    st32((c.r[29].w[0] + 136u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 152u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26276u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    st32((c.r[1].w[0] - 20364u), c.r[2].w[0]);
    c.budget -= 8;
L_0014725C:
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 1u);
    st16((c.r[29].w[0] + 184u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[5], c.r[29].w[0] + 186u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 6u)));
    set32(c.r[2], c.r[4].w[0] + c.r[16].w[0]);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[4], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 368u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 184u)));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[29].w[0] + 188u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    set32(c.r[2], c.r[2].w[0] + 22u);
    st16((c.r[29].w[0] + 190u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 25;
L_001472C0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_00147348; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_001472D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 43u);  if (t) { goto L_001472F8; } }
L_001472D8:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 595u);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 368u)));
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 8;
L_001472F8:
    set32(c.r[5], ld32((c.r[28].w[0] - 26304u)));
    st32((c.r[29].w[0] + 128u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 128u)));
    set32(c.r[3], 0u + 34u);
    set32(c.r[7], c.r[29].w[0] + 132u);
    set32(c.r[5], c.r[16].w[0] + c.r[5].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 368u)));
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[5], c.r[6].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[29].w[0] + 144u), c.r[4].w[0]);
    st32((c.r[7].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[7].w[0])));
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[3].w[0] + 10u);
    c.budget -= 20;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 148u), c.r[2].w[0]);  if (t) { goto L_001473C8; } }
L_00147348:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_00147358; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 44u);  if (t) { goto L_00147378; } }
L_00147358:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 596u);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 368u)));
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 8;
L_00147378:
    set32(c.r[5], ld32((c.r[28].w[0] - 26304u)));
    st32((c.r[29].w[0] + 128u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 128u)));
    set32(c.r[3], 0u + 35u);
    set32(c.r[7], c.r[29].w[0] + 132u);
    set32(c.r[5], c.r[16].w[0] + c.r[5].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 368u)));
    set32(c.r[2], 0u + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[5], c.r[6].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[29].w[0] + 144u), c.r[4].w[0]);
    st32((c.r[7].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[7].w[0])));
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[3].w[0] + 10u);
    st32((c.r[29].w[0] + 148u), c.r[2].w[0]);
    c.budget -= 20;
L_001473C8:
    set32(c.r[2], c.r[17].w[0] + 9u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[17].w[0] + 10u);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[2], c.r[2].w[0] + 20160u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 128u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 184u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20368u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00147414u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x00147414u) [[unlikely]] return; }
L_00147414:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001472C0u | kUnwind; return; } goto L_001472C0; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014725Cu | kUnwind; return; } goto L_0014725C; } }
L_00147434:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_00147460:
    set32(c.r[29], c.r[29].w[0] - 224u);
    c.f[0] = 0u;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[12] = ld32((c.r[4].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[17], c.r[2].w[0] + 25952u);
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[12]));
    c.budget -= 17;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_001474D0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001474B4u); set32(c.r[5], c.r[2].w[0] + 20144u);  if (depth < kMaxDepth) unit_0000(c, 219u, depth + 1u); else { c.pc = 0x00102668u; return; } if (c.pc != 0x001474B4u) [[unlikely]] return; }
L_001474B4:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001474C0u); set32(c.r[5], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0000(c, 224u, depth + 1u); else { c.pc = 0x001026F8u; return; } if (c.pc != 0x001474C0u) [[unlikely]] return; }
L_001474C0:
    set32(c.r[2], c.r[29].w[0] + 128u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] - 20392u), c.r[2].w[0]);  if (t) { goto L_001474D8; } }
L_001474D0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), 0u);
    c.budget -= 2;
L_001474D8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    set32(c.r[5], ld32((c.r[1].w[0] - 16720u)));
    set32(c.r[4], 0u + 3u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 9u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3703u)));
    c.budget -= 16;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_00147B38; } }
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    c.budget -= 1;
L_0014751C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[3], c.r[2].w[0] - 7872u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2070u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[4], c.r[2].w[0] - 7872u);
    c.r[1].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[5].d[0] = ld16((c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[11], c.r[3].w[0] - 7872u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[9], c.r[3].w[0] - 7872u);
    st16((c.r[29].w[0] + 216u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[8], c.r[3].w[0] - 7872u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2070u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[7], c.r[3].w[0] - 7872u);
    set32(c.r[2], c.r[29].w[0] + 218u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = ld16((c.r[3].w[0] + 2u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[6], c.r[4].w[0] - 7872u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2070u)));
    set32(c.r[5], c.r[4].w[0] - 7872u);
    c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 216u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[3], c.r[29].w[0] + 164u);
    set32(c.r[12], c.r[12].w[0] << 2);
    set32(c.r[12], c.r[18].w[0] + c.r[12].w[0]);
    set32(c.r[12], c.r[12].w[0] << 4);
    set32(c.r[11], c.r[11].w[0] + c.r[12].w[0]);
    c.r[11].sd[0] = static_cast<std::int16_t>(ld16((c.r[11].w[0] + 4u)));
    c.r[4].d[0] = c.r[4].d[0] | 65300ull;
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st16((c.r[29].w[0] + 220u), static_cast<std::uint16_t>(c.r[10].w[0]));
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2070u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    set32(c.r[10], c.r[10].w[0] << 2);
    set32(c.r[10], c.r[18].w[0] + c.r[10].w[0]);
    set32(c.r[10], c.r[10].w[0] << 4);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0] + 6u)));
    set32(c.r[2], c.r[2].w[0] + c.r[9].w[0]);
    st16((c.r[29].w[0] + 222u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2070u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[8].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 8u));
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2070u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 10u));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2070u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[18].w[0] + c.r[7].w[0]);
    set32(c.r[7], c.r[7].w[0] << 4);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[6].d[0] = ld16((c.r[6].w[0] + 12u));
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2070u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0] + 14u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 180u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 168u), c.r[4].w[0]);
    c.budget -= 88;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[29].w[0] + 184u), c.r[4].w[0]);  if (t) { goto L_00147690; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[2], c.r[2].w[0] + 20180u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);  if (t) { goto L_001476A0; } }
L_00147690:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[2], c.r[2].w[0] + 20184u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    c.budget -= 4;
L_001476A0:
    set32(c.r[2], c.r[29].w[0] + 160u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 216u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20368u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001476C4u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x001476C4u) [[unlikely]] return; }
L_001476C4:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014751Cu | kUnwind; return; } goto L_0014751C; } }
    mmi::paddub(c.r[20], c.r[0], c.r[0]);
    c.budget -= 1;
L_001476D8:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001477A8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2070u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00147724; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 290u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 288u)));
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014774C; } }
L_00147724:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 296u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 294u)));
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 10;
L_0014774C:
    st32((c.r[16].w[0] + 112u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 112u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43800000u);
    c.f[2] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x49000000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00147774u); c.f[12] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x00147774u) [[unlikely]] return; }
L_00147774:
    set32(c.r[3], c.r[29].w[0] + 212u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[2], c.r[2].w[0] + 20188u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    set32(c.r[2], 0u + 11u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001478D0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001477A8:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_00147878; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2070u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001477F4; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 292u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 288u)));
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014781C; } }
L_001477F4:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 298u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 294u)));
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 10;
L_0014781C:
    st32((c.r[16].w[0] + 112u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 112u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43800000u);
    c.f[2] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x49000000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00147844u); c.f[12] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x00147844u) [[unlikely]] return; }
L_00147844:
    set32(c.r[3], c.r[29].w[0] + 212u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[2], c.r[2].w[0] + 20196u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    set32(c.r[2], 0u + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001478D0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_00147878:
    st32((c.r[16].w[0] + 112u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 112u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43800000u);
    c.f[2] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x49400000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001478A0u); c.f[12] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x001478A0u) [[unlikely]] return; }
L_001478A0:
    set32(c.r[3], c.r[29].w[0] + 212u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[2], c.r[2].w[0] + 20252u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    set32(c.r[2], 0u + 7u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 12;
L_001478D0:
    set32(c.r[2], c.r[29].w[0] + 212u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20376u), c.r[2].w[0]);
    set32(c.r[2], 0u + 51u);
    st32((c.r[29].w[0] + 144u), c.r[2].w[0]);
    set32(c.r[2], 0u + 19u);
    set32(c.r[18], c.r[29].w[0] + 148u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[19], c.r[29].w[0] + 152u);
    c.r[2].d[0] = c.r[2].d[0] | 65300ull;
    st32((c.r[19].w[0]), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 144u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00147918u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001B(c, 207u, depth + 1u); else { c.pc = 0x0016FA40u; return; } if (c.pc != 0x00147918u) [[unlikely]] return; }
L_00147918:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001476D8u | kUnwind; return; } goto L_001476D8; } }
    mmi::paddub(c.r[20], c.r[0], c.r[0]);
    c.budget -= 1;
L_0014792C:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != 0ull;  if (t) { goto L_001479C4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2070u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00147978; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 296u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 294u)));
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001479A0; } }
L_00147978:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 290u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 288u)));
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 10;
L_001479A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[2], c.r[2].w[0] + 20192u);
    st32((c.r[16].w[0] + 112u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    set32(c.r[2], 0u + 9u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00147A50; } }
L_001479C4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2070u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00147A08; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 298u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 294u)));
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00147A30; } }
L_00147A08:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 292u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 288u)));
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 10;
L_00147A30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[2], c.r[2].w[0] + 20196u);
    st32((c.r[16].w[0] + 112u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    set32(c.r[2], 0u + 8u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 8;
L_00147A50:
    c.f[1] = ld32((c.r[16].w[0] + 112u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43800000u);
    c.f[2] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x48C00000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00147A74u); c.f[12] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x00147A74u) [[unlikely]] return; }
L_00147A74:
    set32(c.r[3], c.r[29].w[0] + 212u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20376u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 112u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43800000u);
    c.f[2] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x424C0000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00147AACu); c.f[12] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x00147AACu) [[unlikely]] return; }
L_00147AAC:
    st32((c.r[29].w[0] + 144u), c.r[2].w[0]);
    set32(c.r[2], 0u + 24u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65300ull;
    st32((c.r[19].w[0]), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 144u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] - 20416u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00147AE4u); st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_001B(c, 207u, depth + 1u); else { c.pc = 0x0016FA40u; return; } if (c.pc != 0x00147AE4u) [[unlikely]] return; }
L_00147AE4:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014792Cu | kUnwind; return; } goto L_0014792C; } }
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 7u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 6568u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] - 20416u);
    set32(c.r[5], 0u + 43u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00147B30u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0013(c, 17u, depth + 1u); else { c.pc = 0x0014C780u; return; } if (c.pc != 0x00147B30u) [[unlikely]] return; }
L_00147B30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);  if (t) { goto L_00147F14; } }
L_00147B38:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_00147BBC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2070u)));
    set32(c.r[21], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; if (c.r[3].d[0] != 0) c.r[21].d[0] = 0ull;  if (t) { goto L_00147B5C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 294u)));  if (t) { goto L_00147B68; } }
L_00147B5C:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 288u)));
    c.budget -= 3;
L_00147B68:
    c.r[20].d[0] = c.r[2].d[0] << 48;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 48);  if (t) { goto L_00147B80; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 296u)));  if (t) { goto L_00147B8C; } }
L_00147B80:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 290u)));
    c.budget -= 3;
L_00147B8C:
    c.r[18].d[0] = c.r[2].d[0] << 48;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);  if (t) { goto L_00147BA4; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 298u)));  if (t) { goto L_00147BB0; } }
L_00147BA4:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 292u)));
    c.budget -= 3;
L_00147BB0:
    c.r[19].d[0] = c.r[2].d[0] << 48;
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 48);
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
L_00147BBC:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; mmi::paddub(c.r[22], c.r[0], c.r[0]);  if (t) { goto L_00147C44; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2070u)));
    set32(c.r[21], 0u + 4u);
    set32(c.r[2], 0u + 6u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; if (c.r[3].d[0] != 0) c.r[21].d[0] = c.r[2].d[0];  if (t) { goto L_00147BE4; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 288u)));  if (t) { goto L_00147BF0; } }
L_00147BE4:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 294u)));
    c.budget -= 3;
L_00147BF0:
    c.r[20].d[0] = c.r[2].d[0] << 48;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 48);  if (t) { goto L_00147C08; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 290u)));  if (t) { goto L_00147C14; } }
L_00147C08:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 296u)));
    c.budget -= 3;
L_00147C14:
    c.r[18].d[0] = c.r[2].d[0] << 48;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);  if (t) { goto L_00147C2C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 292u)));  if (t) { goto L_00147C38; } }
L_00147C2C:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 298u)));
    c.budget -= 3;
L_00147C38:
    c.r[19].d[0] = c.r[2].d[0] << 48;
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 48);
    mmi::paddub(c.r[22], c.r[0], c.r[0]);
    c.budget -= 3;
L_00147C44:
    set32(c.r[2], c.r[21].w[0] + c.r[22].w[0]);
    c.budget -= 1;
L_00147C48:
    set32(c.r[3], c.r[2].w[0] << 4);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[2], c.r[2].w[0] - 7744u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].d[0] = ld16((c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[6].d[0] = c.r[4].d[0] | 65300ull;
    set32(c.r[3], c.r[29].w[0] + 218u);
    set32(c.r[5], c.r[29].w[0] + 164u);
    st16((c.r[29].w[0] + 216u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[8].d[0] = ld16((c.r[2].w[0] + 2u));
    set32(c.r[4], c.r[22].w[0] + 5u);
    set32(c.r[7], c.r[4].w[0] << 2);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[4], c.r[4].w[0] + 20160u);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[11].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 4u)));
    c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 216u)));
    set32(c.r[9], c.r[4].w[0] + c.r[7].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[8], c.r[29].w[0] + 160u);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st16((c.r[29].w[0] + 220u), static_cast<std::uint16_t>(c.r[10].w[0]));
    c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    set32(c.r[7], c.r[29].w[0] + 216u);
    set32(c.r[4], c.r[4].w[0] - 20416u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 6u)));
    set32(c.r[3], c.r[10].w[0] + c.r[3].w[0]);
    st16((c.r[29].w[0] + 222u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[2].w[0] + 8u));
    st32((c.r[29].w[0] + 160u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[2].w[0] + 10u));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.r[10].d[0] = ld16((c.r[2].w[0] + 12u));
    set32(c.r[3], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[3], c.r[3].w[0] + c.r[10].w[0]);
    st32((c.r[29].w[0] + 176u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[2].w[0] + 14u));
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[1].w[0] - 20380u), c.r[9].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[29].w[0] + 180u), c.r[2].w[0]);
    st32((c.r[1].w[0] - 20396u), c.r[8].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[29].w[0] + 168u), c.r[6].w[0]);
    st32((c.r[1].w[0] - 20368u), c.r[7].w[0]);
    c.budget -= 50;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00147D10u); st32((c.r[29].w[0] + 184u), c.r[6].w[0]);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x00147D10u) [[unlikely]] return; }
L_00147D10:
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.r[2].d[0] = c.r[22].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[21].w[0] + c.r[22].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00147C48u | kUnwind; return; } goto L_00147C48; } }
    mmi::paddub(c.r[21], c.r[0], c.r[0]);
    c.budget -= 1;
L_00147D24:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00147D9C; } }
    c.f[1] = c.r[18].w[0];
    c.f[0] = c.r[20].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    set32(c.r[2], 0u + 1u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 112u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3703u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00147D70; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[2], c.r[2].w[0] + 20192u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);  if (t) { goto L_00147D80; } }
L_00147D70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[2], c.r[2].w[0] + 20188u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    c.budget -= 4;
L_00147D80:
    set32(c.r[2], 0u + 9u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00147E18; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_00147D9C:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != c.r[3].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_00147DEC; } }
    c.f[1] = c.r[19].w[0];
    c.f[0] = c.r[20].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[3], c.r[2].w[0] + 20196u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], 0u + 8u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 112u), c.f[0]);
    st32((c.r[1].w[0] - 20380u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00147E18; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_00147DEC:
    st32((c.r[16].w[0] + 112u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[2], c.r[2].w[0] + 20252u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    set32(c.r[2], 0u + 7u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 11;
L_00147E18:
    c.f[1] = ld32((c.r[16].w[0] + 112u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43800000u);
    c.f[2] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x49000000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00147E3Cu); c.f[12] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x00147E3Cu) [[unlikely]] return; }
L_00147E3C:
    set32(c.r[3], c.r[29].w[0] + 212u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20376u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3703u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 51u);  if (t) { goto L_00147E90; } }
    c.f[1] = ld32((c.r[16].w[0] + 112u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43800000u);
    c.f[2] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00147E84u); c.f[12] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x00147E84u) [[unlikely]] return; }
L_00147E84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 144u), c.r[2].w[0]);  if (t) { goto L_00147E98; } }
    set32(c.r[2], 0u + 51u);
    c.budget -= 1;
L_00147E90:
    st32((c.r[29].w[0] + 144u), c.r[2].w[0]);
    c.budget -= 2;
L_00147E98:
    set32(c.r[2], 0u + 20u);
    st32((c.r[29].w[0] + 148u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65300ull;
    st32((c.r[29].w[0] + 152u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 144u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00147EC4u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001B(c, 207u, depth + 1u); else { c.pc = 0x0016FA40u; return; } if (c.pc != 0x00147EC4u) [[unlikely]] return; }
L_00147EC4:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[2].d[0] = c.r[21].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00147D24u | kUnwind; return; } goto L_00147D24; } }
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 7u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 6568u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] - 20416u);
    set32(c.r[5], 0u + 44u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00147F10u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0013(c, 17u, depth + 1u); else { c.pc = 0x0014C780u; return; } if (c.pc != 0x00147F10u) [[unlikely]] return; }
L_00147F10:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00147F14:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_00147F40:
    set32(c.r[29], c.r[29].w[0] - 192u);
    c.f[0] = 0u;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[19], c.r[29].w[0] + 116u);
    st32((c.r[29].w[0] + 112u), 0u);
    st32((c.r[19].w[0]), 0u);
    st32((c.r[29].w[0] + 120u), 0u);
    c.f[12] = ld32((c.r[4].w[0] + 104u));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[17], c.r[16].w[0] + 320u);
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[12]));
    c.budget -= 21;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[18], c.r[3].w[0] + 25952u);  if (t) { goto L_00147FC0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00147FA4u); set32(c.r[5], c.r[2].w[0] + 20144u);  if (depth < kMaxDepth) unit_0000(c, 219u, depth + 1u); else { c.pc = 0x00102668u; return; } if (c.pc != 0x00147FA4u) [[unlikely]] return; }
L_00147FA4:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00147FB0u); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0000(c, 224u, depth + 1u); else { c.pc = 0x001026F8u; return; } if (c.pc != 0x00147FB0u) [[unlikely]] return; }
L_00147FB0:
    set32(c.r[3], c.r[29].w[0] + 112u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] - 20392u), c.r[3].w[0]);  if (t) { goto L_00147FC8; } }
L_00147FC0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), 0u);
    c.budget -= 2;
L_00147FC8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    set32(c.r[5], ld32((c.r[1].w[0] - 16720u)));
    set32(c.r[4], 0u + 3u);
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3703u)));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0012(c, 2u, depth); } }
    set32(c.r[3], ld32((c.r[19].w[0])));
    c.budget -= 1;
    [[clang::musttail]] return unit_0012(c, 1u, depth);
}

}
