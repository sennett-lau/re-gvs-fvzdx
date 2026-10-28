#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0056[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 16, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 21, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 30, 0, 0,
    0, 0, 31, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 46, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0,
    0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0,
    81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 87, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    90, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 118, 0, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0,
    122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 126, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 128, 0, 0, 0, 129, 0, 0, 0, 130, 0, 0, 0, 0, 131, 0, 0,
    132, 0, 0, 0, 0, 0, 133, 0, 0, 134, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 146,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 148, 0, 149, 0, 150, 0, 151, 0, 0, 0, 152,
    0, 0, 153, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 156, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 158, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0, 0,
    0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    167, 0, 0, 0, 168, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    170, 0, 171, 0, 0, 172, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 175, 0,
    0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 0, 179, 0, 0, 0, 0, 180, 0, 181, 0, 0, 182, 0, 0, 183, 0, 0,
    0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185,
    0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0, 0, 188, 0, 0, 0, 0, 189, 0, 0, 190, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 0, 0, 195, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 197, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    199, 0, 200, 0, 0, 0, 0, 0, 201, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 204, 0, 205,
    0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 208, 0, 0, 0, 0, 0,
    209, 0, 0, 0, 0, 0, 210, 0, 211, 0, 0, 0, 0, 0, 0, 212, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 0,
    0, 217, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 219, 0, 0, 220, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 222, 0, 223, 0, 0,
    0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    225, 0, 0, 0, 226, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 233, 0, 0, 0, 0, 234, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0,
    238, 0, 0, 0, 0, 239, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0,
    0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 245, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 247, 0, 0, 0, 0, 248, 0, 0, 249, 0, 0, 250, 0, 0, 251, 0, 0, 252, 0, 0, 253, 0, 0, 0, 0, 254, 0, 0, 0,
    255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0,
    0, 0, 0, 0, 0, 259, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 262, 0, 0, 0, 0, 0, 0, 0,
    263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 265, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0,
    267, 0, 0, 0, 0, 268, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 271, 0, 0, 272, 0, 0, 0,
    0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 275, 0, 0, 276, 0, 277, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 279, 0, 0, 280, 0, 0, 281, 0, 0, 282, 0, 0, 283, 0, 0, 284, 0, 0, 0, 0, 0,
};

void unit_0056(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00258000;
    case 2u: goto L_00258028;
    case 3u: goto L_00258054;
    case 4u: goto L_00258084;
    case 5u: goto L_0025809C;
    case 6u: goto L_002580B0;
    case 7u: goto L_00258180;
    case 8u: goto L_002581C4;
    case 9u: goto L_002582D4;
    case 10u: goto L_002582F4;
    case 11u: goto L_00258324;
    case 12u: goto L_00258428;
    case 13u: goto L_00258430;
    case 14u: goto L_002584B0;
    case 15u: goto L_0025855C;
    case 16u: goto L_0025856C;
    case 17u: goto L_002585B0;
    case 18u: goto L_00258610;
    case 19u: goto L_00258648;
    case 20u: goto L_00258660;
    case 21u: goto L_00258674;
    case 22u: goto L_002586CC;
    case 23u: goto L_00258704;
    case 24u: goto L_00258760;
    case 25u: goto L_00258898;
    case 26u: goto L_00258A90;
    case 27u: goto L_00258AD0;
    case 28u: goto L_00258B24;
    case 29u: goto L_00258B5C;
    case 30u: goto L_00258B74;
    case 31u: goto L_00258B88;
    case 32u: goto L_00258B9C;
    case 33u: goto L_00258BF8;
    case 34u: goto L_00258C30;
    case 35u: goto L_00258C98;
    case 36u: goto L_00258DD0;
    case 37u: goto L_00258F2C;
    case 38u: goto L_00258F70;
    case 39u: goto L_00258FBC;
    case 40u: goto L_00259058;
    case 41u: goto L_002590E8;
    case 42u: goto L_0025917C;
    case 43u: goto L_002591B4;
    case 44u: goto L_002591CC;
    case 45u: goto L_002591E0;
    case 46u: goto L_002591F8;
    case 47u: goto L_0025923C;
    case 48u: goto L_0025926C;
    case 49u: goto L_00259338;
    case 50u: goto L_00259358;
    case 51u: goto L_00259384;
    case 52u: goto L_002593D4;
    case 53u: goto L_00259474;
    case 54u: goto L_00259494;
    case 55u: goto L_002594C0;
    case 56u: goto L_002594F0;
    case 57u: goto L_002595A0;
    case 58u: goto L_002595F4;
    case 59u: goto L_0025962C;
    case 60u: goto L_00259644;
    case 61u: goto L_00259658;
    case 62u: goto L_002596C0;
    case 63u: goto L_00259720;
    case 64u: goto L_002597A8;
    case 65u: goto L_002597C8;
    case 66u: goto L_00259880;
    case 67u: goto L_002598E4;
    case 68u: goto L_0025991C;
    case 69u: goto L_002599A4;
    case 70u: goto L_00259A20;
    case 71u: goto L_00259BDC;
    case 72u: goto L_00259C54;
    case 73u: goto L_00259C60;
    case 74u: goto L_00259CC4;
    case 75u: goto L_00259CEC;
    case 76u: goto L_00259D44;
    case 77u: goto L_00259D54;
    case 78u: goto L_00259DA0;
    case 79u: goto L_00259DD4;
    case 80u: goto L_00259DEC;
    case 81u: goto L_00259E00;
    case 82u: goto L_00259E54;
    case 83u: goto L_00259E7C;
    case 84u: goto L_00259F30;
    case 85u: goto L_0025A1B0;
    case 86u: goto L_0025A244;
    case 87u: goto L_0025A290;
    case 88u: goto L_0025A2A0;
    case 89u: goto L_0025A348;
    case 90u: goto L_0025A380;
    case 91u: goto L_0025A398;
    case 92u: goto L_0025A3AC;
    case 93u: goto L_0025A404;
    case 94u: goto L_0025A42C;
    case 95u: goto L_0025A4E4;
    case 96u: goto L_0025A5D8;
    case 97u: goto L_0025A670;
    case 98u: goto L_0025A6B0;
    case 99u: goto L_0025A6F8;
    case 100u: goto L_0025A850;
    case 101u: goto L_0025A884;
    case 102u: goto L_0025A8C0;
    case 103u: goto L_0025A8F0;
    case 104u: goto L_0025A92C;
    case 105u: goto L_0025A948;
    case 106u: goto L_0025A964;
    case 107u: goto L_0025A9C0;
    case 108u: goto L_0025A9F4;
    case 109u: goto L_0025AA2C;
    case 110u: goto L_0025AA5C;
    case 111u: goto L_0025AA98;
    case 112u: goto L_0025AAB4;
    case 113u: goto L_0025AAD0;
    case 114u: goto L_0025AB30;
    case 115u: goto L_0025AC30;
    case 116u: goto L_0025AC50;
    case 117u: goto L_0025AC5C;
    case 118u: goto L_0025AC8C;
    case 119u: goto L_0025ACA0;
    case 120u: goto L_0025ACB0;
    case 121u: goto L_0025ACF0;
    case 122u: goto L_0025AD00;
    case 123u: goto L_0025ADA0;
    case 124u: goto L_0025ADC0;
    case 125u: goto L_0025ADE0;
    case 126u: goto L_0025ADF8;
    case 127u: goto L_0025AE34;
    case 128u: goto L_0025AE40;
    case 129u: goto L_0025AE50;
    case 130u: goto L_0025AE60;
    case 131u: goto L_0025AE74;
    case 132u: goto L_0025AE80;
    case 133u: goto L_0025AE98;
    case 134u: goto L_0025AEA4;
    case 135u: goto L_0025AEB0;
    case 136u: goto L_0025AED0;
    case 137u: goto L_0025AEF4;
    case 138u: goto L_0025AF34;
    case 139u: goto L_0025AF40;
    case 140u: goto L_0025AF50;
    case 141u: goto L_0025AF60;
    case 142u: goto L_0025AFA8;
    case 143u: goto L_0025AFE4;
    case 144u: goto L_0025B0D0;
    case 145u: goto L_0025B0E0;
    case 146u: goto L_0025B0FC;
    case 147u: goto L_0025B140;
    case 148u: goto L_0025B154;
    case 149u: goto L_0025B15C;
    case 150u: goto L_0025B164;
    case 151u: goto L_0025B16C;
    case 152u: goto L_0025B17C;
    case 153u: goto L_0025B188;
    case 154u: goto L_0025B198;
    case 155u: goto L_0025B230;
    case 156u: goto L_0025B250;
    case 157u: goto L_0025B258;
    case 158u: goto L_0025B288;
    case 159u: goto L_0025B290;
    case 160u: goto L_0025B2C4;
    case 161u: goto L_0025B2E0;
    case 162u: goto L_0025B2F0;
    case 163u: goto L_0025B310;
    case 164u: goto L_0025B330;
    case 165u: goto L_0025B344;
    case 166u: goto L_0025B350;
    case 167u: goto L_0025B380;
    case 168u: goto L_0025B390;
    case 169u: goto L_0025B3A0;
    case 170u: goto L_0025B400;
    case 171u: goto L_0025B408;
    case 172u: goto L_0025B414;
    case 173u: goto L_0025B420;
    case 174u: goto L_0025B468;
    case 175u: goto L_0025B478;
    case 176u: goto L_0025B48C;
    case 177u: goto L_0025B49C;
    case 178u: goto L_0025B4AC;
    case 179u: goto L_0025B4C0;
    case 180u: goto L_0025B4D4;
    case 181u: goto L_0025B4DC;
    case 182u: goto L_0025B4E8;
    case 183u: goto L_0025B4F4;
    case 184u: goto L_0025B514;
    case 185u: goto L_0025B57C;
    case 186u: goto L_0025B58C;
    case 187u: goto L_0025B59C;
    case 188u: goto L_0025B5B0;
    case 189u: goto L_0025B5C4;
    case 190u: goto L_0025B5D0;
    case 191u: goto L_0025B5DC;
    case 192u: goto L_0025B60C;
    case 193u: goto L_0025B650;
    case 194u: goto L_0025B660;
    case 195u: goto L_0025B678;
    case 196u: goto L_0025B6A8;
    case 197u: goto L_0025B6BC;
    case 198u: goto L_0025B6D0;
    case 199u: goto L_0025B700;
    case 200u: goto L_0025B708;
    case 201u: goto L_0025B720;
    case 202u: goto L_0025B730;
    case 203u: goto L_0025B75C;
    case 204u: goto L_0025B774;
    case 205u: goto L_0025B77C;
    case 206u: goto L_0025B788;
    case 207u: goto L_0025B7D8;
    case 208u: goto L_0025B7E8;
    case 209u: goto L_0025B800;
    case 210u: goto L_0025B818;
    case 211u: goto L_0025B820;
    case 212u: goto L_0025B83C;
    case 213u: goto L_0025B848;
    case 214u: goto L_0025B898;
    case 215u: goto L_0025B8E0;
    case 216u: goto L_0025B8F0;
    case 217u: goto L_0025B904;
    case 218u: goto L_0025B920;
    case 219u: goto L_0025B934;
    case 220u: goto L_0025B940;
    case 221u: goto L_0025B95C;
    case 222u: goto L_0025B96C;
    case 223u: goto L_0025B974;
    case 224u: goto L_0025B998;
    case 225u: goto L_0025BA00;
    case 226u: goto L_0025BA10;
    case 227u: goto L_0025BA20;
    case 228u: goto L_0025BA3C;
    case 229u: goto L_0025BA6C;
    case 230u: goto L_0025BAB0;
    case 231u: goto L_0025BAC0;
    case 232u: goto L_0025BADC;
    case 233u: goto L_0025BB0C;
    case 234u: goto L_0025BB20;
    case 235u: goto L_0025BB30;
    case 236u: goto L_0025BB50;
    case 237u: goto L_0025BB70;
    case 238u: goto L_0025BB80;
    case 239u: goto L_0025BB94;
    case 240u: goto L_0025BB9C;
    case 241u: goto L_0025BBD0;
    case 242u: goto L_0025BBE4;
    case 243u: goto L_0025BC08;
    case 244u: goto L_0025BC40;
    case 245u: goto L_0025BC54;
    case 246u: goto L_0025BC5C;
    case 247u: goto L_0025BC8C;
    case 248u: goto L_0025BCA0;
    case 249u: goto L_0025BCAC;
    case 250u: goto L_0025BCB8;
    case 251u: goto L_0025BCC4;
    case 252u: goto L_0025BCD0;
    case 253u: goto L_0025BCDC;
    case 254u: goto L_0025BCF0;
    case 255u: goto L_0025BD00;
    case 256u: goto L_0025BD2C;
    case 257u: goto L_0025BD40;
    case 258u: goto L_0025BD74;
    case 259u: goto L_0025BD94;
    case 260u: goto L_0025BDA4;
    case 261u: goto L_0025BDD8;
    case 262u: goto L_0025BDE0;
    case 263u: goto L_0025BE00;
    case 264u: goto L_0025BE48;
    case 265u: goto L_0025BE54;
    case 266u: goto L_0025BE6C;
    case 267u: goto L_0025BE80;
    case 268u: goto L_0025BE94;
    case 269u: goto L_0025BEA0;
    case 270u: goto L_0025BED0;
    case 271u: goto L_0025BEE4;
    case 272u: goto L_0025BEF0;
    case 273u: goto L_0025BF14;
    case 274u: goto L_0025BF40;
    case 275u: goto L_0025BF54;
    case 276u: goto L_0025BF60;
    case 277u: goto L_0025BF68;
    case 278u: goto L_0025BF98;
    case 279u: goto L_0025BFAC;
    case 280u: goto L_0025BFB8;
    case 281u: goto L_0025BFC4;
    case 282u: goto L_0025BFD0;
    case 283u: goto L_0025BFDC;
    case 284u: goto L_0025BFE8;
    default: bad_entry(c, 0x00258000u); return;
    }
L_00258000:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44920000u);
    c.r[3].d[0] = c.r[3].d[0] | 57344ull;
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00258558; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1760u), c.r[3].w[0]);  if (t) { goto L_00258558; } }
L_00258028:
    c.f[0] = ld32((c.r[16].w[0] + 1760u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44770000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00258558; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1760u), c.r[3].w[0]);  if (t) { goto L_00258558; } }
L_00258054:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1738u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00258068; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0] + 1738u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00258068:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1738u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025808C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258084u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 33u, depth + 1u); else { c.pc = 0x0024C9F0u; return; } if (c.pc != 0x00258084u) [[unlikely]] return; }
L_00258084:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025809C; } }
L_0025808C:
    st8((c.r[16].w[0] + 1724u), static_cast<std::uint8_t>(0u));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025809Cu); st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0053(c, 107u, depth + 1u); else { c.pc = 0x0024D7D0u; return; } if (c.pc != 0x0025809Cu) [[unlikely]] return; }
L_0025809C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1736u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[2].w[0] - 1u);  goto L_002581F4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002580B0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 105u, depth + 1u); else { c.pc = 0x0024D750u; return; } if (c.pc != 0x002580B0u) [[unlikely]] return; }
L_002580B0:
    set32(c.r[3], ld32((c.r[16].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_00258420; } }
    c.f[1] = ld32((c.r[3].w[0] + 1068u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0025841C; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 532u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025841C; } }
    st32((c.r[16].w[0] + 1824u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 1520u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (t) { goto L_0025811C; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025813C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_0025813C; } }
L_0025811C:
    c.f[1] = ld32((c.r[3].w[0] + 36u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0025813C; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_0025813C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x42AA0000u);  if (t) { goto L_0025816C; } }
    c.r[4].d[0] = ld16((c.r[16].w[0] + 704u));
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], 0u + 45u);
    c.r[4].d[0] = c.r[4].d[0] | 768ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 1724u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1730u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0025841C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42AA0000u);
    c.budget -= 1;
L_0025816C:
    c.f[12] = c.r[2].w[0];
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258180u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 2u, depth + 1u); else { c.pc = 0x0024C040u; return; } if (c.pc != 0x00258180u) [[unlikely]] return; }
L_00258180:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x435C0000u);  if (t) { goto L_002581B0; } }
    c.r[4].d[0] = ld16((c.r[16].w[0] + 704u));
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], 0u + 45u);
    c.r[4].d[0] = c.r[4].d[0] | 256ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 1724u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1730u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0025841C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x435C0000u);
    c.budget -= 1;
L_002581B0:
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 16384u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002581C4u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 2u, depth + 1u); else { c.pc = 0x0024C040u; return; } if (c.pc != 0x002581C4u) [[unlikely]] return; }
L_002581C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025841C; } }
    c.r[4].d[0] = ld16((c.r[16].w[0] + 704u));
    set32(c.r[3], 0u + 3u);
    set32(c.r[2], 0u + 45u);
    c.r[4].d[0] = c.r[4].d[0] | 512ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 1724u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1730u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0025841C; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 1;
L_002581F4:
    st16((c.r[16].w[0] + 1736u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 1520u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0025841C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (t) { goto L_0025822C; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025824C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_0025824C; } }
L_0025822C:
    c.f[1] = ld32((c.r[3].w[0] + 36u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0025824C; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_0025824C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002582CC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1725u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0025829C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00258274; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025841C; } }
L_00258274:
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1F00000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0025841C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0025841C; } }
L_0025829C:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1A00000u);
    c.f[0] = c.r[2].w[0];
    c.r[2].d[0] = c.r[3].d[0] | 4096ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0025841C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0025841C; } }
L_002582CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002582D4u); set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x002582D4u) [[unlikely]] return; }
L_002582D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = ld32((c.r[16].w[0] + 32u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002582F4u); set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x002582F4u) [[unlikely]] return; }
L_002582F4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    set32(c.r[17], c.r[29].w[0] + 52u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45FA0000u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    st32((c.r[29].w[0] + 56u), c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258324u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0045(c, 199u, depth + 1u); else { c.pc = 0x00217650u; return; } if (c.pc != 0x00258324u) [[unlikely]] return; }
L_00258324:
    st32((c.r[17].w[0]), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1725u)));
    set32(c.r[4], 0u + 2u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_002583E4; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002583A8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00258354; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025841C; } }
L_00258354:
    c.f[1] = ld32((c.r[17].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.f[0] = c.r[2].w[0];
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x41C00000u);  if (t) { goto L_00258384; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0025841C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    c.budget -= 1;
L_00258384:
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0025841C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0025841C; } }
L_002583A8:
    c.f[0] = ld32((c.r[17].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.f[1] = c.r[2].w[0];
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002583D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0025841C; } }
L_002583D4:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0025841C; } }
L_002583E4:
    c.f[0] = ld32((c.r[17].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    c.f[1] = c.r[2].w[0];
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00258410; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0025841C; } }
L_00258410:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0025841C:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_00258420:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258428u);  if (depth < kMaxDepth) unit_0056(c, 98u, depth + 1u); else { c.pc = 0x0025A6B0u; return; } if (c.pc != 0x00258428u) [[unlikely]] return; }
L_00258428:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00258558; } }
L_00258430:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    set32(c.r[4], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1725u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00258494; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0025845C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00258558; } }
L_0025845C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1730u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_00258478; }
    st8((c.r[16].w[0] + 1724u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00258558; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_00258478:
    st8((c.r[16].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00258558; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00258558; } }
L_00258494:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00258558; } }
    st8((c.r[16].w[0] + 1724u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00258558; } }
L_002584B0:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    set32(c.r[4], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 512ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1725u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00258528; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002584E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00258558; } }
L_002584E8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1730u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_00258504; }
    st8((c.r[16].w[0] + 1724u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00258558; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_00258504:
    st8((c.r[16].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00258558; } }
    set32(c.r[3], 0u + 30u);
    st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00258558; } }
L_00258528:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1730u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_00258554; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00258558; } }
    st8((c.r[16].w[0] + 1724u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00258558; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_00258554:
    st8((c.r[16].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_00258558:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1858u)));
    c.budget -= 1;
L_0025855C:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_00258584; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025856Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 109u, depth + 1u); else { c.pc = 0x0024D850u; return; } if (c.pc != 0x0025856Cu) [[unlikely]] return; }
L_0025856C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00258594; } }
    set32(c.r[3], 0u + 45u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1858u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00258594; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_00258584:
    st16((c.r[16].w[0] + 1858u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_00258594:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002585B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1724u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 7;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002589CC; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_0025894C; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_002588A0; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_00258618; } }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);  goto L_00258604; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1858u)));  if (t) { goto L_00258A80; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.budget -= 1;
L_00258604:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258610u);  if (depth < kMaxDepth) unit_0056(c, 100u, depth + 1u); else { c.pc = 0x0025A850u; return; } if (c.pc != 0x00258610u) [[unlikely]] return; }
L_00258610:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00258A7C; } }
L_00258618:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1738u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025862C; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0] + 1738u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0025862C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1738u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00258650; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258648u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 33u, depth + 1u); else { c.pc = 0x0024C9F0u; return; } if (c.pc != 0x00258648u) [[unlikely]] return; }
L_00258648:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00258660; } }
L_00258650:
    st8((c.r[16].w[0] + 1724u), static_cast<std::uint8_t>(0u));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258660u); st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0053(c, 107u, depth + 1u); else { c.pc = 0x0024D7D0u; return; } if (c.pc != 0x00258660u) [[unlikely]] return; }
L_00258660:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1736u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[2].w[0] - 1u);  goto L_0025874C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258674u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 105u, depth + 1u); else { c.pc = 0x0024D750u; return; } if (c.pc != 0x00258674u) [[unlikely]] return; }
L_00258674:
    set32(c.r[3], ld32((c.r[16].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_00258890; } }
    c.f[1] = ld32((c.r[3].w[0] + 1068u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0025888C; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 532u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025888C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 16384u);
    st32((c.r[16].w[0] + 1824u), c.r[3].w[0]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002586CCu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 2u, depth + 1u); else { c.pc = 0x0024C040u; return; } if (c.pc != 0x002586CCu) [[unlikely]] return; }
L_002586CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x44480000u);  if (t) { goto L_002586F0; } }
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 1724u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] | 256ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00258738; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44480000u);
    c.budget -= 1;
L_002586F0:
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 16384u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258704u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 2u, depth + 1u); else { c.pc = 0x0024C040u; return; } if (c.pc != 0x00258704u) [[unlikely]] return; }
L_00258704:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_00258728; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 1724u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] | 512ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00258738; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_00258728:
    st8((c.r[16].w[0] + 1724u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] | 768ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_00258738:
    set32(c.r[2], 0u + 45u);
    st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1730u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0025888C; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 1;
L_0025874C:
    st16((c.r[16].w[0] + 1736u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258760u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0052(c, 239u, depth + 1u); else { c.pc = 0x0024B350u; return; } if (c.pc != 0x00258760u) [[unlikely]] return; }
L_00258760:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], 0u + 11u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 256u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00258794; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43910000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00258794; } }
    c.f[0] = c.f[1];
    c.budget -= 1;
L_00258794:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);  if (t) { goto L_002587C4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[1] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[2] = c.r[2].w[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1725u)));  if (t) { goto L_002587D4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.budget -= 1;
L_002587C4:
    c.f[1] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[2] = c.r[2].w[0];
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1725u)));
    c.budget -= 4;
L_002587D4:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00258864; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00258838; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002587FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025888C; } }
L_002587FC:
    c.f[3] = ld32((c.r[16].w[0] + 36u));
    c.f[1] = fp::add(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[1]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = fp::add(c.f[0], c.f[2]);  goto L_00258820; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0025888C; } }
    c.f[0] = fp::add(c.f[0], c.f[2]);
    c.budget -= 1;
L_00258820:
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0025888C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0025888C; } }
L_00258838:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 704u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0025888C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0025888C; } }
L_00258864:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 704u));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0025888C; } }
    st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0025888C:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_00258890:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258898u);  if (depth < kMaxDepth) unit_0056(c, 98u, depth + 1u); else { c.pc = 0x0025A6B0u; return; } if (c.pc != 0x00258898u) [[unlikely]] return; }
L_00258898:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00258A7C; } }
L_002588A0:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    set32(c.r[4], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 512ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1725u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00258918; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002588D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00258A7C; } }
L_002588D8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1730u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_002588F4; }
    st8((c.r[16].w[0] + 1724u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00258A7C; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_002588F4:
    st8((c.r[16].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00258A7C; } }
    set32(c.r[3], 0u + 64u);
    st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00258A7C; } }
L_00258918:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1730u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_00258944; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00258A7C; } }
    st8((c.r[16].w[0] + 1724u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00258A7C; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_00258944:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00258A7C; } }
L_0025894C:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    set32(c.r[4], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1725u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_002589B0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00258978; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00258A7C; } }
L_00258978:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1730u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_00258994; }
    st8((c.r[16].w[0] + 1724u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00258A7C; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_00258994:
    st8((c.r[16].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00258A7C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00258A7C; } }
L_002589B0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00258A7C; } }
    st8((c.r[16].w[0] + 1724u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00258A7C; } }
L_002589CC:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    set32(c.r[4], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1725u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00258A34; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002589F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00258A7C; } }
L_002589F8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1730u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_00258A14; }
    st8((c.r[16].w[0] + 1724u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00258A7C; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_00258A14:
    st8((c.r[16].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00258A7C; } }
    st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1730u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00258A7C; } }
L_00258A34:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00258A50; } }
    st8((c.r[16].w[0] + 1724u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00258A7C; } }
L_00258A50:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1730u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_00258A78; }
    set32(c.r[3], 0u + 6u);
    st8((c.r[16].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 256ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00258A7C; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_00258A78:
    st8((c.r[16].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_00258A7C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1858u)));
    c.budget -= 1;
L_00258A80:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_00258AA8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258A90u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 109u, depth + 1u); else { c.pc = 0x0024D850u; return; } if (c.pc != 0x00258A90u) [[unlikely]] return; }
L_00258A90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00258AB8; } }
    set32(c.r[3], 0u + 45u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1858u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00258AB8; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_00258AA8:
    st16((c.r[16].w[0] + 1858u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_00258AB8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00258AD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1724u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 7;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_00258E64; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_00258DD8; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_00258B2C; } }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);  goto L_00258B18; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1858u)));  if (t) { goto L_00258F1C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.budget -= 1;
L_00258B18:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258B24u);  if (depth < kMaxDepth) unit_0056(c, 100u, depth + 1u); else { c.pc = 0x0025A850u; return; } if (c.pc != 0x00258B24u) [[unlikely]] return; }
L_00258B24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00258F18; } }
L_00258B2C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1738u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00258B40; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0] + 1738u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00258B40:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1738u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00258B64; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258B5Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 33u, depth + 1u); else { c.pc = 0x0024C9F0u; return; } if (c.pc != 0x00258B5Cu) [[unlikely]] return; }
L_00258B5C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00258B74; } }
L_00258B64:
    st8((c.r[16].w[0] + 1724u), static_cast<std::uint8_t>(0u));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258B74u); st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0053(c, 107u, depth + 1u); else { c.pc = 0x0024D7D0u; return; } if (c.pc != 0x00258B74u) [[unlikely]] return; }
L_00258B74:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1736u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[2].w[0] - 1u);  goto L_00258C84; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258B88u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 105u, depth + 1u); else { c.pc = 0x0024D750u; return; } if (c.pc != 0x00258B88u) [[unlikely]] return; }
L_00258B88:
    set32(c.r[5], ld32((c.r[16].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_00258DC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258B9Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0055(c, 22u, depth + 1u); else { c.pc = 0x00254320u; return; } if (c.pc != 0x00258B9Cu) [[unlikely]] return; }
L_00258B9C:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00258DC4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1520u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    c.f[1] = ld32((c.r[3].w[0] + 1068u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00258DC4; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 532u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00258DC4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42FA0000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 16384u);
    st32((c.r[16].w[0] + 1824u), c.r[3].w[0]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258BF8u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 2u, depth + 1u); else { c.pc = 0x0024C040u; return; } if (c.pc != 0x00258BF8u) [[unlikely]] return; }
L_00258BF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x44160000u);  if (t) { goto L_00258C1C; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    set32(c.r[2], 0u + 2u);
    c.r[3].d[0] = c.r[3].d[0] | 256ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1724u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00258C64; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44160000u);
    c.budget -= 1;
L_00258C1C:
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 16384u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258C30u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 2u, depth + 1u); else { c.pc = 0x0024C040u; return; } if (c.pc != 0x00258C30u) [[unlikely]] return; }
L_00258C30:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00258C50; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    set32(c.r[2], 0u + 3u);
    c.r[3].d[0] = c.r[3].d[0] | 512ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1724u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00258C64; } }
L_00258C50:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    set32(c.r[2], 0u + 2u);
    c.r[3].d[0] = c.r[3].d[0] | 768ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 1724u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
L_00258C64:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    set32(c.r[2], 0u + 45u);
    c.r[3].d[0] = c.r[3].d[0] | 8192ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1730u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00258DC4; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 1;
L_00258C84:
    st16((c.r[16].w[0] + 1736u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258C98u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0052(c, 239u, depth + 1u); else { c.pc = 0x0024B350u; return; } if (c.pc != 0x00258C98u) [[unlikely]] return; }
L_00258C98:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], 0u + 11u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 256u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00258CCC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43910000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00258CCC; } }
    c.f[0] = c.f[1];
    c.budget -= 1;
L_00258CCC:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);  if (t) { goto L_00258CFC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[1] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41E00000u);
    c.f[2] = c.r[2].w[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1725u)));  if (t) { goto L_00258D0C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.budget -= 1;
L_00258CFC:
    c.f[1] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42960000u);
    c.f[2] = c.r[2].w[0];
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1725u)));
    c.budget -= 4;
L_00258D0C:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00258D9C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00258D70; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00258D34; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00258DC4; } }
L_00258D34:
    c.f[3] = ld32((c.r[16].w[0] + 36u));
    c.f[1] = fp::add(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[1]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = fp::add(c.f[0], c.f[2]);  goto L_00258D58; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00258DC4; } }
    c.f[0] = fp::add(c.f[0], c.f[2]);
    c.budget -= 1;
L_00258D58:
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00258DC4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00258DC4; } }
L_00258D70:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 704u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00258DC4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00258DC4; } }
L_00258D9C:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 704u));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00258DC4; } }
    st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00258DC4:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_00258DC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258DD0u);  if (depth < kMaxDepth) unit_0056(c, 98u, depth + 1u); else { c.pc = 0x0025A6B0u; return; } if (c.pc != 0x00258DD0u) [[unlikely]] return; }
L_00258DD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00258F18; } }
L_00258DD8:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    set32(c.r[4], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] | 8192ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1725u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00258E48; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00258E10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00258F18; } }
L_00258E10:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1730u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_00258E2C; }
    st8((c.r[16].w[0] + 1724u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00258F18; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_00258E2C:
    st8((c.r[16].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00258F18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00258F18; } }
L_00258E48:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00258F18; } }
    st8((c.r[16].w[0] + 1724u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00258F18; } }
L_00258E64:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    set32(c.r[4], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] | 8192ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 512ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1725u)));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00258EE8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00258EA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00258F18; } }
L_00258EA8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1730u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_00258EC4; }
    st8((c.r[16].w[0] + 1724u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00258F18; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_00258EC4:
    st8((c.r[16].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00258F18; } }
    set32(c.r[3], 0u + 64u);
    st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00258F18; } }
L_00258EE8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1730u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_00258F14; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00258F18; } }
    st8((c.r[16].w[0] + 1724u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00258F18; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_00258F14:
    st8((c.r[16].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_00258F18:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1858u)));
    c.budget -= 1;
L_00258F1C:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_00258F44; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258F2Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 109u, depth + 1u); else { c.pc = 0x0024D850u; return; } if (c.pc != 0x00258F2Cu) [[unlikely]] return; }
L_00258F2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00258F54; } }
    set32(c.r[3], 0u + 45u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1858u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00258F54; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_00258F44:
    st16((c.r[16].w[0] + 1858u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_00258F54:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00258F70:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1724u)));
    set32(c.r[5], 0u + 2u);
    c.budget -= 8;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002594F8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_00259184; } }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);  goto L_00258FB0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_00259584; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.budget -= 1;
L_00258FB0:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258FBCu);  if (depth < kMaxDepth) unit_0056(c, 100u, depth + 1u); else { c.pc = 0x0025A850u; return; } if (c.pc != 0x00258FBCu) [[unlikely]] return; }
L_00258FBC:
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 9u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 256u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00259580; } }
    c.f[0] = ld32((c.r[16].w[0] + 1760u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43950000u);
    c.f[12] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[12]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x446B0000u);  if (t) { goto L_00259064; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44400000u);
    c.f[13] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[13]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00259060; } }
    c.f[1] = ld32((c.r[16].w[0] + 1768u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44840000u);
    c.r[3].d[0] = c.r[3].d[0] | 57344ull;
    c.f[14] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[14]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00259060; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44960000u);
    c.r[3].d[0] = c.r[3].d[0] | 24576ull;
    c.f[15] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[15]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00259060; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259058u); set32(c.r[4], c.r[16].w[0] + 1760u);  if (depth < kMaxDepth) unit_0056(c, 114u, depth + 1u); else { c.pc = 0x0025AB30u; return; } if (c.pc != 0x00259058u) [[unlikely]] return; }
L_00259058:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00259580; } }
L_00259060:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x446B0000u);
    c.budget -= 1;
L_00259064:
    c.r[3].d[0] = c.r[3].d[0] | 49152ull;
    c.f[12] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[12]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x44950000u);  if (t) { goto L_002590F4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44A70000u);
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    c.f[13] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[13]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002590F0; } }
    c.f[1] = ld32((c.r[16].w[0] + 1768u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44020000u);
    c.r[3].d[0] = c.r[3].d[0] | 49152ull;
    c.f[14] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[14]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002590F0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x449C0000u);
    c.f[15] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[15]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002590F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002590E8u); set32(c.r[4], c.r[16].w[0] + 1760u);  if (depth < kMaxDepth) unit_0056(c, 114u, depth + 1u); else { c.pc = 0x0025AB30u; return; } if (c.pc != 0x002590E8u) [[unlikely]] return; }
L_002590E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00259580; } }
L_002590F0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44950000u);
    c.budget -= 1;
L_002590F4:
    c.r[3].d[0] = c.r[3].d[0] | 49152ull;
    c.f[12] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[12]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00259580; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44A30000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.f[13] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[13]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00259580; } }
    c.f[0] = ld32((c.r[16].w[0] + 1768u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44880000u);
    c.r[3].d[0] = c.r[3].d[0] | 40960ull;
    c.f[14] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[14]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00259580; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44C50000u);
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    c.f[15] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[15]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00259580; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025917Cu); set32(c.r[4], c.r[16].w[0] + 1760u);  if (depth < kMaxDepth) unit_0056(c, 114u, depth + 1u); else { c.pc = 0x0025AB30u; return; } if (c.pc != 0x0025917Cu) [[unlikely]] return; }
L_0025917C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00259580; } }
L_00259184:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1738u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00259198; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0] + 1738u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00259198:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1738u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002591BC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002591B4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 33u, depth + 1u); else { c.pc = 0x0024C9F0u; return; } if (c.pc != 0x002591B4u) [[unlikely]] return; }
L_002591B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002591CC; } }
L_002591BC:
    st8((c.r[16].w[0] + 1724u), static_cast<std::uint8_t>(0u));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002591CCu); st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0053(c, 107u, depth + 1u); else { c.pc = 0x0024D7D0u; return; } if (c.pc != 0x002591CCu) [[unlikely]] return; }
L_002591CC:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1736u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[2].w[0] - 1u);  goto L_002592F0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002591E0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 105u, depth + 1u); else { c.pc = 0x0024D750u; return; } if (c.pc != 0x002591E0u) [[unlikely]] return; }
L_002591E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43960000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 8192u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002591F8u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 2u, depth + 1u); else { c.pc = 0x0024C040u; return; } if (c.pc != 0x002591F8u) [[unlikely]] return; }
L_002591F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x43480000u);  if (t) { goto L_00259228; } }
    c.r[4].d[0] = ld16((c.r[16].w[0] + 704u));
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], 0u + 45u);
    c.r[4].d[0] = c.r[4].d[0] | 512ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 1724u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1730u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002592F4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43480000u);
    c.budget -= 1;
L_00259228:
    c.f[12] = c.r[2].w[0];
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025923Cu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 2u, depth + 1u); else { c.pc = 0x0024C040u; return; } if (c.pc != 0x0025923Cu) [[unlikely]] return; }
L_0025923C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002592F4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1520u)));
    st32((c.r[16].w[0] + 1824u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1838u)));
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));  if (t) { goto L_00259260; } }
    set32(c.r[2], c.r[3].w[0] + 3u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_00259260:
    c.r[17].d[0] = c.r[2].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025926Cu); c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x0025926Cu) [[unlikely]] return; }
L_0025926C:
    c.r[3].d[0] = c.r[2].d[0] & 15ull;
    c.r[2].d[0] = c.r[17].d[0] & 7ull;
    set32(c.r[2], c.r[2].w[0] << 4);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 11952u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 15;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002592C8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002592B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_002592D8; } }
L_002592B8:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] | 256ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_002592D4; } }
L_002592C8:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] | 768ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_002592D4:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_002592D8:
    st8((c.r[16].w[0] + 1724u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 45u);
    st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1730u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002592F4; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 1;
L_002592F0:
    st16((c.r[16].w[0] + 1736u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_002592F4:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1726u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0025944C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0025942C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00259320; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002594E8; } }
L_00259320:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 816u)));
    c.r[2].d[0] = c.r[2].sd[0] < 4000ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002593B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259338u); set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x00259338u) [[unlikely]] return; }
L_00259338:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x420C0000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = ld32((c.r[16].w[0] + 32u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259358u); set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x00259358u) [[unlikely]] return; }
L_00259358:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x420C0000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45FA0000u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 56u), c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259384u); st32((c.r[29].w[0] + 52u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0045(c, 199u, depth + 1u); else { c.pc = 0x00217650u; return; } if (c.pc != 0x00259384u) [[unlikely]] return; }
L_00259384:
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::add(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002593B0; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 1726u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002593B0:
    c.f[3] = ld32((c.r[16].w[0] + 1760u));
    c.f[2] = ld32((c.r[16].w[0] + 32u));
    c.f[1] = ld32((c.r[16].w[0] + 1768u));
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002593D4u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002593D4u) [[unlikely]] return; }
L_002593D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x438C0000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002594E4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025941C; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1738u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002594E4; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_002594E4; } }
L_0025941C:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_002594E4; } }
L_0025942C:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002594E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1726u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002594E4; } }
L_0025944C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00259460; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1726u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002594E4; } }
L_00259460:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259474u); set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x00259474u) [[unlikely]] return; }
L_00259474:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x420C0000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = ld32((c.r[16].w[0] + 32u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259494u); set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x00259494u) [[unlikely]] return; }
L_00259494:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x420C0000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45FA0000u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 56u), c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002594C0u); st32((c.r[29].w[0] + 52u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0045(c, 199u, depth + 1u); else { c.pc = 0x00217650u; return; } if (c.pc != 0x002594C0u) [[unlikely]] return; }
L_002594C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[1] = c.r[2].w[0];
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002594E4; } }
    st8((c.r[16].w[0] + 1726u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_002594E4:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002594E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002594F0u);  if (depth < kMaxDepth) unit_0055(c, 83u, depth + 1u); else { c.pc = 0x00255570u; return; } if (c.pc != 0x002594F0u) [[unlikely]] return; }
L_002594F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00259580; } }
L_002594F8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00259510; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00259510:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1725u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00259568; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00259530; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00259580; } }
L_00259530:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1730u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_0025954C; }
    st8((c.r[16].w[0] + 1724u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00259580; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_0025954C:
    st8((c.r[16].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00259580; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00259580; } }
L_00259568:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00259580; } }
    st8((c.r[16].w[0] + 1724u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00259580:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00259584:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002595A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1724u)));
    set32(c.r[3], 0u + 2u);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.budget -= 10;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_00259914; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_002595FC; } }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x40D00000u);  goto L_002595E8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025998C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40D00000u);
    c.budget -= 1;
L_002595E8:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002595F4u);  if (depth < kMaxDepth) unit_0056(c, 100u, depth + 1u); else { c.pc = 0x0025A850u; return; } if (c.pc != 0x002595F4u) [[unlikely]] return; }
L_002595F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025998C; } }
L_002595FC:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 1738u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00259610; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[17].w[0] + 1738u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00259610:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 1738u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00259634; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025962Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 33u, depth + 1u); else { c.pc = 0x0024C9F0u; return; } if (c.pc != 0x0025962Cu) [[unlikely]] return; }
L_0025962C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00259644; } }
L_00259634:
    st8((c.r[17].w[0] + 1724u), static_cast<std::uint8_t>(0u));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259644u); st8((c.r[17].w[0] + 1725u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0053(c, 107u, depth + 1u); else { c.pc = 0x0024D7D0u; return; } if (c.pc != 0x00259644u) [[unlikely]] return; }
L_00259644:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 1736u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[2].w[0] - 1u);  goto L_002597B4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259658u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 105u, depth + 1u); else { c.pc = 0x0024D750u; return; } if (c.pc != 0x00259658u) [[unlikely]] return; }
L_00259658:
    set32(c.r[3], ld32((c.r[17].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_002597A0; } }
    c.f[1] = ld32((c.r[3].w[0] + 1068u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0025979C; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 532u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025979C; } }
    st32((c.r[17].w[0] + 1824u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 1824u)));
    c.f[2] = ld32((c.r[17].w[0] + 32u));
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    c.f[3] = ld32((c.r[2].w[0] + 32u));
    c.f[1] = ld32((c.r[2].w[0] + 40u));
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002596C0u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002596C0u) [[unlikely]] return; }
L_002596C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43160000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00259700; } }
    c.r[4].d[0] = ld16((c.r[17].w[0] + 704u));
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], 0u + 45u);
    c.r[4].d[0] = c.r[4].d[0] | 768ull;
    st16((c.r[17].w[0] + 704u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st8((c.r[17].w[0] + 1724u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 1725u), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 1730u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0025979C; } }
L_00259700:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1838u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));  if (t) { goto L_00259714; } }
    set32(c.r[2], c.r[3].w[0] + 3u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_00259714:
    c.r[18].d[0] = c.r[2].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259720u); c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x00259720u) [[unlikely]] return; }
L_00259720:
    c.r[3].d[0] = c.r[2].d[0] & 15ull;
    c.r[2].d[0] = c.r[18].d[0] & 7ull;
    set32(c.r[2], c.r[2].w[0] << 4);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 11824u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 15;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0025977C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0025976C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_0025978C; } }
L_0025976C:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] | 512ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 704u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00259788; } }
L_0025977C:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] | 256ull;
    st16((c.r[17].w[0] + 704u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00259788:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_0025978C:
    st8((c.r[17].w[0] + 1724u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 45u);
    st8((c.r[17].w[0] + 1725u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 1730u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_0025979C:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_002597A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002597A8u);  if (depth < kMaxDepth) unit_0055(c, 83u, depth + 1u); else { c.pc = 0x00255570u; return; } if (c.pc != 0x002597A8u) [[unlikely]] return; }
L_002597A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025998C; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 1;
L_002597B4:
    st16((c.r[17].w[0] + 1736u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002597C8u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0052(c, 239u, depth + 1u); else { c.pc = 0x0024B350u; return; } if (c.pc != 0x002597C8u) [[unlikely]] return; }
L_002597C8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    c.f[1] = c.r[3].w[0];
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    c.f[2] = fp::add(c.f[1], c.f[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x42FA0000u);
    set32(c.r[3], 0u + 2u);
    c.f[1] = c.r[5].w[0];
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.f[1] = fp::add(c.f[1], c.f[0]);  if (t) { goto L_00259818; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 5u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 256u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00259818; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::add(c.f[2], c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[0]);
    c.budget -= 5;
L_00259818:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1725u)));
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_002598EC; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00259888; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00259844; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025998C; } }
L_00259844:
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00259860; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00259874; } }
L_00259860:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { mmi::paddub(c.r[4], c.r[17], c.r[0]);  goto L_00259878; }
    st8((c.r[17].w[0] + 1725u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 1;
L_00259874:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_00259878:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259880u);  if (depth < kMaxDepth) unit_0055(c, 83u, depth + 1u); else { c.pc = 0x00255570u; return; } if (c.pc != 0x00259880u) [[unlikely]] return; }
L_00259880:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025998C; } }
L_00259888:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002598B4; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 1738u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002598C0; } }
    c.r[2].d[0] = ld16((c.r[17].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 704u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_002598C0; } }
L_002598B4:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st16((c.r[17].w[0] + 704u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_002598C0:
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_002598DC; } }
    st8((c.r[17].w[0] + 1725u), static_cast<std::uint8_t>(0u));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 2;
L_002598DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002598E4u);  if (depth < kMaxDepth) unit_0055(c, 83u, depth + 1u); else { c.pc = 0x00255570u; return; } if (c.pc != 0x002598E4u) [[unlikely]] return; }
L_002598E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025998C; } }
L_002598EC:
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[16], 0u + 1u);  goto L_0025990C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 1725u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0025998C; } }
    set32(c.r[16], 0u + 1u);
    c.budget -= 1;
L_0025990C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025998C; } }
L_00259914:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025991Cu);  if (depth < kMaxDepth) unit_0055(c, 83u, depth + 1u); else { c.pc = 0x00255570u; return; } if (c.pc != 0x0025991Cu) [[unlikely]] return; }
L_0025991C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1725u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00259974; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0025993C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025998C; } }
L_0025993C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1730u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_00259958; }
    st8((c.r[17].w[0] + 1724u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 1725u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0025998C; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_00259958:
    st8((c.r[17].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0025998C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 1725u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0025998C; } }
L_00259974:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0025998C; } }
    st8((c.r[17].w[0] + 1724u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[17].w[0] + 1725u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0025998C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_002599FC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002599A4u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0052(c, 239u, depth + 1u); else { c.pc = 0x0024B350u; return; } if (c.pc != 0x002599A4u) [[unlikely]] return; }
L_002599A4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    c.f[1] = c.r[3].w[0];
    c.f[2] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002599FC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002599F0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 1738u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002599FC; } }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002599FC; } }
L_002599F0:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[17].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_002599FC:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00259A20:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[6], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != c.r[6].d[0]; mmi::paddub(c.r[19], c.r[4], c.r[0]);  if (t) { goto L_00259B24; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 789u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00259B24; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 1844u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00259B24; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 1865u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00259B24; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 1866u)));
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_00259B1C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[6].d[0]; set32(c.r[4], 0u + 1u);  if (t) { goto L_00259AF4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00259AC0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00259AAC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 1865u)));  if (t) { goto L_00259B28; } }
L_00259AAC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 1603u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00259B24; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 1866u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00259B24; } }
L_00259AC0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 1603u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00259AD4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 1866u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { goto L_00259B24; } }
L_00259AD4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 806u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_0025A264; } }
    c.r[3].d[0] = ld16((c.r[19].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 384ull;
    st16((c.r[19].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 1866u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00259B24; } }
L_00259AF4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 806u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_00259B14; } }
    c.r[3].d[0] = ld16((c.r[19].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[19].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 1866u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_00259B24; } }
L_00259B14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 1866u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00259B24; } }
L_00259B1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 1866u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { goto L_0025A264; } }
L_00259B24:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 1865u)));
    c.budget -= 1;
L_00259B28:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00259B7C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 1866u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_00259B74; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00259B50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));  if (t) { goto L_00259B80; } }
L_00259B50:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 806u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00259B7C; } }
    c.r[3].d[0] = ld16((c.r[19].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[19].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 1866u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_0025A264; } }
L_00259B74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 1866u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0025A264; } }
L_00259B7C:
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    c.budget -= 1;
L_00259B80:
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; mmi::paddub(c.r[17], c.r[0], c.r[0]);  if (t) { goto L_00259D68; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 28022u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00259BB8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 28020u)));
    set32(c.r[3], 0u + 64u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00259BD0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_00259BB8:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);  if (t) { goto L_00259D68; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 28020u)));
    set32(c.r[3], 0u + 79u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00259D68; } }
L_00259BD0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[18], c.r[3].w[0] + 26144u);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 3;
L_00259BDC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[5].d[0]) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_00259D5C; }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8386u)));
    set32(c.r[3], 0u + 38u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00259D58; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 512u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42340000u);
    c.f[5] = c.r[2].w[0];
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    st16((c.r[19].w[0] + 514u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[18].w[0] + 32u));
    st32((c.r[19].w[0] + 1760u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 40u));
    st32((c.r[19].w[0] + 1768u), c.f[0]);
    c.f[6] = ld32((c.r[18].w[0] + 36u));
    c.f[4] = ld32((c.r[18].w[0] + 32u));
    c.f[3] = ld32((c.r[19].w[0] + 32u));
    c.f[1] = ld32((c.r[18].w[0] + 40u));
    c.f[0] = ld32((c.r[19].w[0] + 40u));
    c.f[2] = ld32((c.r[19].w[0] + 36u));
    c.f[20] = fp::add(c.f[5], c.f[6]);
    c.f[3] = fp::sub(c.f[4], c.f[3]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[3], c.f[3]);
    c.f[21] = fp::sub(c.f[20], c.f[2]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259C54u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x00259C54u) [[unlikely]] return; }
L_00259C54:
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259C60u); c.f[12] = fp::add(c.facc, fp::mul(c.f[21], c.f[21]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x00259C60u) [[unlikely]] return; }
L_00259C60:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 1867u)));
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[5].d[0]) { c.r[3].sd[0] = static_cast<std::int32_t>(0x42140000u);  goto L_00259D10; }
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00259CF4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x43160000u);  if (t) { goto L_00259C8C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00259D58; } }
L_00259C8C:
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00259D58; } }
    set32(c.r[2], 0u + 140u);
    st8((c.r[19].w[0] + 1867u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st16((c.r[19].w[0] + 1868u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[4], c.r[2].w[0] + 29248u);
    set32(c.r[5], 0u + 5u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259CC4u); set32(c.r[6], 0u + 41u);  if (depth < kMaxDepth) unit_0025(c, 266u, depth + 1u); else { c.pc = 0x00196D00u; return; } if (c.pc != 0x00259CC4u) [[unlikely]] return; }
L_00259CC4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 28022u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[8].d[0] = c.r[2].d[0] << 56;  if (t) { goto L_00259D58; } }
    set32(c.r[4], 0u + 6u);
    set32(c.r[6], 0u + 8u);
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259CECu); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0035(c, 80u, depth + 1u); else { c.pc = 0x001D5FA0u; return; } if (c.pc != 0x00259CECu) [[unlikely]] return; }
L_00259CEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00259D58; } }
L_00259CF4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 1868u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_00259D08; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 1867u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_00259D58; } }
L_00259D08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 1868u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00259D58; } }
L_00259D10:
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00259D58; } }
    st16((c.r[19].w[0] + 514u), static_cast<std::uint16_t>(0u));
    st32((c.r[19].w[0] + 604u), c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 604u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (t) { goto L_00259D4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259D44u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0013(c, 20u, depth + 1u); else { c.pc = 0x0014C8D0u; return; } if (c.pc != 0x00259D44u) [[unlikely]] return; }
L_00259D44:
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 2;
L_00259D4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259D54u);  if (depth < kMaxDepth) unit_0058(c, 374u, depth + 1u); else { c.pc = 0x00263640u; return; } if (c.pc != 0x00259D54u) [[unlikely]] return; }
L_00259D54:
    c.budget -= 1;
L_00259D58:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00259D5C:
    c.r[3].d[0] = c.r[16].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 8448u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00259BDCu | kUnwind; return; } goto L_00259BDC; } }
L_00259D68:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 1724u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[5], 0u + 1u);  if (t) { goto L_0025A1B8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_00259DA8; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x40E60000u);  goto L_00259D90; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 1858u)));  if (t) { goto L_0025A234; } }
L_00259D90:
    c.r[2].d[0] = c.r[2].d[0] | 26214ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259DA0u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0056(c, 100u, depth + 1u); else { c.pc = 0x0025A850u; return; } if (c.pc != 0x00259DA0u) [[unlikely]] return; }
L_00259DA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025A230; } }
L_00259DA8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 1738u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00259DBC; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[19].w[0] + 1738u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00259DBC:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 1738u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);  if (t) { goto L_00259DDC; } }
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259DD4u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 33u, depth + 1u); else { c.pc = 0x0024C9F0u; return; } if (c.pc != 0x00259DD4u) [[unlikely]] return; }
L_00259DD4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00259DEC; } }
L_00259DDC:
    st8((c.r[19].w[0] + 1724u), static_cast<std::uint8_t>(0u));
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259DECu); st8((c.r[19].w[0] + 1725u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0053(c, 107u, depth + 1u); else { c.pc = 0x0024D7D0u; return; } if (c.pc != 0x00259DECu) [[unlikely]] return; }
L_00259DEC:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 1736u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (t) { goto L_00259EFC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259E00u);  if (depth < kMaxDepth) unit_0053(c, 105u, depth + 1u); else { c.pc = 0x0024D750u; return; } if (c.pc != 0x00259E00u) [[unlikely]] return; }
L_00259E00:
    set32(c.r[3], ld32((c.r[19].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (t) { goto L_0025A1A8; } }
    c.f[1] = ld32((c.r[3].w[0] + 1068u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0025A1A4; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 532u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x43FA0000u);  if (t) { goto L_0025A1A4; } }
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 8192u);
    st32((c.r[19].w[0] + 1824u), c.r[3].w[0]);
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259E54u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 2u, depth + 1u); else { c.pc = 0x0024C040u; return; } if (c.pc != 0x00259E54u) [[unlikely]] return; }
L_00259E54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025A1A4; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 1838u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));  if (t) { goto L_00259E70; } }
    set32(c.r[2], c.r[3].w[0] + 3u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_00259E70:
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259E7Cu); c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x00259E7Cu) [[unlikely]] return; }
L_00259E7C:
    c.r[3].d[0] = c.r[2].d[0] & 15ull;
    c.r[2].d[0] = c.r[16].d[0] & 7ull;
    set32(c.r[2], c.r[2].w[0] << 4);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 11696u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 15;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00259ED8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00259EC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_00259EE8; } }
L_00259EC8:
    c.r[2].d[0] = ld16((c.r[19].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] | 512ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 704u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00259EE4; } }
L_00259ED8:
    c.r[2].d[0] = ld16((c.r[19].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] | 256ull;
    st16((c.r[19].w[0] + 704u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00259EE4:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_00259EE8:
    st8((c.r[19].w[0] + 1724u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 45u);
    st8((c.r[19].w[0] + 1725u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 1730u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0025A1A4; } }
L_00259EFC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 1844u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] - 1u);  if (t) { goto L_00259F1C; } }
    c.r[2].d[0] = ld16((c.r[19].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 704u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0025A1A4; } }
L_00259F1C:
    st16((c.r[19].w[0] + 1736u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259F30u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0052(c, 239u, depth + 1u); else { c.pc = 0x0024B350u; return; } if (c.pc != 0x00259F30u) [[unlikely]] return; }
L_00259F30:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);  if (t) { goto L_00259F9C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 28022u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);  if (t) { goto L_00259F80; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 28020u)));
    set32(c.r[2], 0u + 109u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x43E10000u);  if (t) { goto L_00259F7C; } }
    c.f[2] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43FA0000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00259FB8; } }
L_00259F7C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.budget -= 1;
L_00259F80:
    c.f[1] = c.r[2].w[0];
    c.f[2] = fp::add(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.f[1] = fp::add(c.f[1], c.f[0]);  if (t) { goto L_00259FB8; } }
L_00259F9C:
    c.f[1] = c.r[2].w[0];
    c.f[2] = fp::add(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::add(c.f[1], c.f[0]);
    c.budget -= 7;
L_00259FB8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_0025A06C; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 1725u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0025A044; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0025A01C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00259FE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025A1A4; } }
L_00259FE8:
    c.f[0] = ld32((c.r[19].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0025A004; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 1725u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0025A1A4; } }
L_0025A004:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0025A1A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0025A1A4; } }
L_0025A01C:
    c.r[2].d[0] = ld16((c.r[19].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    st16((c.r[19].w[0] + 704u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[19].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0025A1A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 1725u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0025A1A4; } }
L_0025A044:
    c.r[2].d[0] = ld16((c.r[19].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    st16((c.r[19].w[0] + 704u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[19].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0025A1A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 1725u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0025A1A4; } }
L_0025A06C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 1725u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0025A154; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0025A10C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);  if (t) { goto L_0025A094; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025A1A4; } }
L_0025A094:
    c.f[3] = c.r[2].w[0];
    c.f[2] = ld32((c.r[19].w[0] + 36u));
    c.f[1] = fp::add(c.f[3], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0025A0C8; } }
    c.f[1] = fp::sub(c.f[20], c.f[3]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x42A00000u);  if (t) { goto L_0025A0D0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0025A0C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 1725u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0025A1A4; } }
L_0025A0D0:
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 2u);  if (t) { goto L_0025A104; } }
    c.f[0] = fp::add(c.f[3], c.f[20]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0025A1A4; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_0025A104:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 1725u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0025A1A4; } }
L_0025A10C:
    c.r[3].d[0] = ld16((c.r[19].w[0] + 704u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[2] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[2], c.f[0]);
    c.r[2].d[0] = c.r[3].d[0] | 4096ull;
    st16((c.r[19].w[0] + 704u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[1] = ld32((c.r[19].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[0] = fp::sub(c.f[20], c.f[2]);  if (t) { goto L_0025A1A4; } }
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0025A1A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 1725u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0025A1A4; } }
L_0025A154:
    c.r[3].d[0] = ld16((c.r[19].w[0] + 704u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.r[2].d[0] = c.r[3].d[0] | 8192ull;
    st16((c.r[19].w[0] + 704u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[1] = ld32((c.r[19].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);  if (t) { goto L_0025A1A4; } }
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[0], c.f[20]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0025A1A4; } }
    st8((c.r[19].w[0] + 1725u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0025A1A4:
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 1;
L_0025A1A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A1B0u);  if (depth < kMaxDepth) unit_0056(c, 98u, depth + 1u); else { c.pc = 0x0025A6B0u; return; } if (c.pc != 0x0025A1B0u) [[unlikely]] return; }
L_0025A1B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025A230; } }
L_0025A1B8:
    c.r[3].d[0] = ld16((c.r[19].w[0] + 704u));
    set32(c.r[4], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[19].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 1725u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_0025A218; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0025A1E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025A230; } }
L_0025A1E4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 1730u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_0025A1FC; }
    st8((c.r[19].w[0] + 1724u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 1725u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0025A230; } }
L_0025A1FC:
    st8((c.r[19].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0025A230; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 1725u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0025A230; } }
L_0025A218:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0025A230; } }
    st8((c.r[19].w[0] + 1724u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[19].w[0] + 1725u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0025A230:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 1858u)));
    c.budget -= 1;
L_0025A234:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_0025A254; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A244u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 109u, depth + 1u); else { c.pc = 0x0024D850u; return; } if (c.pc != 0x0025A244u) [[unlikely]] return; }
L_0025A244:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 45u);  if (t) { goto L_0025A264; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 1858u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0025A264; } }
L_0025A254:
    st16((c.r[19].w[0] + 1858u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[19].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[19].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_0025A264:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0025A290:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0025A2A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1865u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_0025A308; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1866u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_0025A300; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0025A2DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1724u)));  if (t) { goto L_0025A30C; } }
L_0025A2DC:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 806u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0025A308; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1866u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_0025A698; } }
L_0025A300:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1866u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0025A698; } }
L_0025A308:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1724u)));
    c.budget -= 1;
L_0025A30C:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0025A5E0; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_0025A350; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x40E60000u);  goto L_0025A338; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1858u)));  if (t) { goto L_0025A660; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40E60000u);
    c.budget -= 1;
L_0025A338:
    c.r[2].d[0] = c.r[2].d[0] | 26214ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A348u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0056(c, 100u, depth + 1u); else { c.pc = 0x0025A850u; return; } if (c.pc != 0x0025A348u) [[unlikely]] return; }
L_0025A348:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025A65C; } }
L_0025A350:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1738u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025A364; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0] + 1738u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0025A364:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1738u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025A388; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A380u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 33u, depth + 1u); else { c.pc = 0x0024C9F0u; return; } if (c.pc != 0x0025A380u) [[unlikely]] return; }
L_0025A380:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025A398; } }
L_0025A388:
    st8((c.r[16].w[0] + 1724u), static_cast<std::uint8_t>(0u));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A398u); st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0053(c, 107u, depth + 1u); else { c.pc = 0x0024D7D0u; return; } if (c.pc != 0x0025A398u) [[unlikely]] return; }
L_0025A398:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1736u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0025A4AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A3ACu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 105u, depth + 1u); else { c.pc = 0x0024D750u; return; } if (c.pc != 0x0025A3ACu) [[unlikely]] return; }
L_0025A3AC:
    set32(c.r[3], ld32((c.r[16].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_0025A5D0; } }
    c.f[1] = ld32((c.r[3].w[0] + 1068u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0025A5CC; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 532u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025A5CC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43FA0000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 8192u);
    st32((c.r[16].w[0] + 1824u), c.r[3].w[0]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A404u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 2u, depth + 1u); else { c.pc = 0x0024C040u; return; } if (c.pc != 0x0025A404u) [[unlikely]] return; }
L_0025A404:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025A5CC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1838u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));  if (t) { goto L_0025A420; } }
    set32(c.r[2], c.r[3].w[0] + 3u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_0025A420:
    c.r[17].d[0] = c.r[2].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A42Cu); c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x0025A42Cu) [[unlikely]] return; }
L_0025A42C:
    c.r[3].d[0] = c.r[2].d[0] & 15ull;
    c.r[2].d[0] = c.r[17].d[0] & 7ull;
    set32(c.r[2], c.r[2].w[0] << 4);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 11568u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 15;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0025A488; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0025A478; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_0025A498; } }
L_0025A478:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] | 512ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0025A494; } }
L_0025A488:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] | 256ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0025A494:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_0025A498:
    st8((c.r[16].w[0] + 1724u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 45u);
    st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1730u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0025A5CC; } }
L_0025A4AC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1844u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] - 1u);  if (t) { goto L_0025A4D0; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0025A5CC; } }
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_0025A4D0:
    st16((c.r[16].w[0] + 1736u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A4E4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0052(c, 239u, depth + 1u); else { c.pc = 0x0024B350u; return; } if (c.pc != 0x0025A4E4u) [[unlikely]] return; }
L_0025A4E4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1725u)));
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_0025A598; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0025A560; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);  if (t) { goto L_0025A514; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025A5CC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.budget -= 1;
L_0025A514:
    c.f[1] = c.r[2].w[0];
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.f[1] = fp::add(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);  if (t) { goto L_0025A53C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0025A5CC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.budget -= 1;
L_0025A53C:
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0025A5CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0025A5CC; } }
L_0025A560:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.r[2].d[0] = c.r[3].d[0] | 4096ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0025A5CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0025A5CC; } }
L_0025A598:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.r[2].d[0] = c.r[3].d[0] | 8192ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0025A5CC; } }
    st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0025A5CC:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_0025A5D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A5D8u);  if (depth < kMaxDepth) unit_0056(c, 98u, depth + 1u); else { c.pc = 0x0025A6B0u; return; } if (c.pc != 0x0025A5D8u) [[unlikely]] return; }
L_0025A5D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025A65C; } }
L_0025A5E0:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    set32(c.r[4], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1725u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_0025A644; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0025A60C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025A65C; } }
L_0025A60C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1730u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_0025A628; }
    st8((c.r[16].w[0] + 1724u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0025A65C; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_0025A628:
    st8((c.r[16].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0025A65C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0025A65C; } }
L_0025A644:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0025A65C; } }
    st8((c.r[16].w[0] + 1724u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0025A65C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1858u)));
    c.budget -= 1;
L_0025A660:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_0025A688; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A670u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 109u, depth + 1u); else { c.pc = 0x0024D850u; return; } if (c.pc != 0x0025A670u) [[unlikely]] return; }
L_0025A670:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025A698; } }
    set32(c.r[3], 0u + 45u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1858u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0025A698; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_0025A688:
    st16((c.r[16].w[0] + 1858u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_0025A698:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0025A6B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1844u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_0025A6DC; } }
    c.f[0] = ld32((c.r[16].w[0] + 1792u));
    st32((c.r[16].w[0] + 1760u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 1800u));
    st32((c.r[16].w[0] + 1768u), c.f[0]);
    c.budget -= 4;
L_0025A6DC:
    c.f[3] = ld32((c.r[16].w[0] + 1760u));
    c.f[2] = ld32((c.r[16].w[0] + 32u));
    c.f[1] = ld32((c.r[16].w[0] + 1768u));
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.f[12] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A6F8u); c.f[13] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x0025A6F8u) [[unlikely]] return; }
L_0025A6F8:
    set32(c.r[5], ld32((c.r[16].w[0] + 84u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    mmi::paddub(c.r[6], c.r[2], c.r[0]);
    c.r[3].d[0] = 0ull | 65535ull;
    c.r[6].d[0] = c.r[6].d[0] & c.r[3].d[0];
    set32(c.r[3], 0u + 39u);
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[6], c.r[6].w[0] - c.r[5].w[0]);  if (t) { goto L_0025A7A4; } }
    c.r[4].d[0] = c.r[6].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < 4096ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = 0ull | 32769ull;  if (t) { goto L_0025A74C; } }
    c.r[1].d[0] = 0ull | 32769ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0025A748; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 2048ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0025A838; } }
L_0025A748:
    c.r[1].d[0] = 0ull | 32769ull;
    c.budget -= 1;
L_0025A74C:
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0025A778; } }
    c.r[1].d[0] = 0ull | 61441ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0025A778; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 1024ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0025A838; } }
L_0025A778:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1738u)));
    c.r[1].d[0] = c.r[3].sd[0] < 31ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0025A838; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 530u));
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0025A838; } }
    set32(c.r[3], 0u + 30u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1738u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0025A838; } }
L_0025A7A4:
    c.r[4].d[0] = c.r[6].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < 4096ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = 0ull | 32769ull;  if (t) { goto L_0025A7D8; } }
    c.r[1].d[0] = 0ull | 32769ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0025A7D4; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 2048ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0025A838; } }
L_0025A7D4:
    c.r[1].d[0] = 0ull | 32769ull;
    c.budget -= 1;
L_0025A7D8:
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0025A804; } }
    c.r[1].d[0] = 0ull | 61441ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0025A804; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 1024ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0025A838; } }
L_0025A804:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1738u)));
    c.r[1].d[0] = c.r[3].sd[0] < 31ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0025A838; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 530u));
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0025A838; } }
    set32(c.r[3], 0u + 30u);
    st16((c.r[16].w[0] + 1738u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0025A838:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0025A850:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 1732u)));
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    c.f[20] = c.f[12];
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { goto L_0025A978; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A884u);  if (depth < kMaxDepth) unit_0052(c, 180u, depth + 1u); else { c.pc = 0x0024A530u; return; } if (c.pc != 0x0025A884u) [[unlikely]] return; }
L_0025A884:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 3u);  if (t) { goto L_0025A970; } }
    st32((c.r[17].w[0] + 1824u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 1724u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 300u);
    st8((c.r[17].w[0] + 1725u), static_cast<std::uint8_t>(0u));
    st16((c.r[17].w[0] + 1738u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 1738u)));
    c.r[3].d[0] = c.r[16].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st16((c.r[17].w[0] + 1738u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A8C0u); set32(c.r[16], ld32((c.r[17].w[0] + 1824u)));  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x0025A8C0u) [[unlikely]] return; }
L_0025A8C0:
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 15232u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[17].w[0] + 1740u), c.f[0]);
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A8F0u); st32((c.r[17].w[0] + 1740u), c.f[0]);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x0025A8F0u) [[unlikely]] return; }
L_0025A8F0:
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 15168u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[17].w[0] + 1748u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 1748u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[18].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A92Cu); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x0025A92Cu) [[unlikely]] return; }
L_0025A92C:
    c.f[2] = ld32((c.r[17].w[0] + 1740u));
    c.f[1] = ld32((c.r[16].w[0] + 32u));
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A948u); st32((c.r[17].w[0] + 1760u), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x0025A948u) [[unlikely]] return; }
L_0025A948:
    c.f[2] = ld32((c.r[17].w[0] + 1740u));
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A964u); st32((c.r[17].w[0] + 1768u), c.f[0]);  if (depth < kMaxDepth) unit_0055(c, 174u, depth + 1u); else { c.pc = 0x002562B0u; return; } if (c.pc != 0x0025A964u) [[unlikely]] return; }
L_0025A964:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);  if (t) { goto L_0025A9A0; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 1;
L_0025A970:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 1732u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0025A99C; } }
L_0025A978:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[17].w[0] + 1732u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 1732u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0025A99C; } }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    st16((c.r[17].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0025A99C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0025A9A0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0025A9C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 1732u)));
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    c.f[20] = c.f[12];
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { goto L_0025AAE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A9F4u);  if (depth < kMaxDepth) unit_0052(c, 180u, depth + 1u); else { c.pc = 0x0024A530u; return; } if (c.pc != 0x0025A9F4u) [[unlikely]] return; }
L_0025A9F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 3u);  if (t) { goto L_0025AADC; } }
    st32((c.r[17].w[0] + 1824u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 1724u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 300u);
    st16((c.r[17].w[0] + 1738u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 1738u)));
    c.r[3].d[0] = c.r[16].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st16((c.r[17].w[0] + 1738u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025AA2Cu); set32(c.r[16], ld32((c.r[17].w[0] + 1824u)));  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x0025AA2Cu) [[unlikely]] return; }
L_0025AA2C:
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 15232u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[17].w[0] + 1740u), c.f[0]);
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025AA5Cu); st32((c.r[17].w[0] + 1740u), c.f[0]);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x0025AA5Cu) [[unlikely]] return; }
L_0025AA5C:
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 15168u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[17].w[0] + 1748u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 1748u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[18].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025AA98u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x0025AA98u) [[unlikely]] return; }
L_0025AA98:
    c.f[2] = ld32((c.r[17].w[0] + 1740u));
    c.f[1] = ld32((c.r[16].w[0] + 32u));
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025AAB4u); st32((c.r[17].w[0] + 1760u), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x0025AAB4u) [[unlikely]] return; }
L_0025AAB4:
    c.f[2] = ld32((c.r[17].w[0] + 1740u));
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025AAD0u); st32((c.r[17].w[0] + 1768u), c.f[0]);  if (depth < kMaxDepth) unit_0055(c, 174u, depth + 1u); else { c.pc = 0x002562B0u; return; } if (c.pc != 0x0025AAD0u) [[unlikely]] return; }
L_0025AAD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);  if (t) { goto L_0025AB0C; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 1;
L_0025AADC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 1732u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0025AB08; } }
L_0025AAE4:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[17].w[0] + 1732u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 1732u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0025AB08; } }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    st16((c.r[17].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0025AB08:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0025AB0C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0025AB30:
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[13]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0025AB4C; } }
    c.f[0] = c.f[12];
    c.f[12] = c.f[13];
    c.f[13] = c.f[0];
    c.budget -= 3;
L_0025AB4C:
    fpu_compare(c, fp::key(c.f[14]) <= fp::key(c.f[15]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0025AB68; } }
    c.f[0] = c.f[14];
    c.f[14] = c.f[15];
    c.f[15] = c.f[0];
    c.budget -= 3;
L_0025AB68:
    c.f[1] = ld32((c.r[4].w[0]));
    c.f[3] = ld32((c.r[4].w[0] + 8u));
    c.f[0] = fp::sub(c.f[1], c.f[12]);
    c.f[2] = fp::sub(c.f[3], c.f[14]);
    c.f[1] = fp::sub(c.f[13], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[3] = fp::sub(c.f[15], c.f[3]);  if (t) { goto L_0025ABDC; } }
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[3]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0025ABBC; } }
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0025ABB4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.f[12]);  if (t) { goto L_0025AC28; } }
L_0025ABB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 8u), c.f[14]);  if (t) { goto L_0025AC28; } }
L_0025ABBC:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[3]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0025ABD4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.f[12]);  if (t) { goto L_0025AC28; } }
L_0025ABD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 8u), c.f[15]);  if (t) { goto L_0025AC28; } }
L_0025ABDC:
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[3]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0025AC0C; } }
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0025AC04; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.f[13]);  if (t) { goto L_0025AC28; } }
L_0025AC04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 8u), c.f[14]);  if (t) { goto L_0025AC28; } }
L_0025AC0C:
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[3]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0025AC24; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.f[13]);  if (t) { goto L_0025AC28; } }
L_0025AC24:
    st32((c.r[4].w[0] + 8u), c.f[15]);
    c.budget -= 1;
L_0025AC28:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0025AC30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], 0u + 75u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { goto L_0025AC68; } }
    c.r[5].d[0] = c.r[16].d[0] << 56;
    c.budget -= 1;
L_0025AC50:
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025AC5Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0049(c, 69u, depth + 1u); else { c.pc = 0x00224EF0u; return; } if (c.pc != 0x0025AC5Cu) [[unlikely]] return; }
L_0025AC5C:
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[16].d[0] = c.r[2].d[0] << 56;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);
    c.budget -= 3;
L_0025AC68:
    c.r[2].d[0] = c.r[16].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[1].d[0] = c.r[2].sd[0] < 81ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; c.r[5].d[0] = c.r[16].d[0] << 56;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025AC50u | kUnwind; return; } goto L_0025AC50; } }
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025AC8Cu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 12u, depth + 1u); else { c.pc = 0x00304300u; return; } if (c.pc != 0x0025AC8Cu) [[unlikely]] return; }
L_0025AC8C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0025ACA0:
    set32(c.r[5], c.r[4].w[0] + 320u);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    set32(c.r[3], 0u + 255u);
    set32(c.r[2], c.r[5].w[0] + c.r[6].w[0]);
    c.budget -= 4;
L_0025ACB0:
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[2].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0] + 20u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[6].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[5].w[0] + c.r[6].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025ACB0u | kUnwind; return; } goto L_0025ACB0; } }
    st8((c.r[5].w[0] + 18u), static_cast<std::uint8_t>(0u));
    st8((c.r[5].w[0] + 19u), static_cast<std::uint8_t>(0u));
    st8((c.r[5].w[0] + 16u), static_cast<std::uint8_t>(0u));
    st8((c.r[5].w[0] + 17u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], 0u + 9u);
    c.budget -= 7;
    { mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00198370u | kUnwind; return; } [[clang::musttail]] return unit_0026(c, 25u, depth); }
L_0025ACF0:
    set32(c.r[5], c.r[4].w[0] + 320u);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    set32(c.r[3], 0u + 1u);
    set32(c.r[7], c.r[5].w[0] + c.r[6].w[0]);
    c.budget -= 4;
L_0025AD00:
    c.r[2].d[0] = ld8((c.r[7].w[0]));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[6], c.r[6].w[0] + 1u);  goto L_0025AD8C; }
    c.r[2].d[0] = ld8((c.r[7].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025AD88; } }
    c.r[3].d[0] = ld16((c.r[4].w[0] + 704u));
    c.r[2].d[0] = c.r[3].d[0] & 2048ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] & 1024ull;  if (t) { goto L_0025AD38; } }
    set32(c.r[2], 0u + 17u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[7].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0025AD98; } }
    c.r[2].d[0] = c.r[3].d[0] & 1024ull;
    c.budget -= 1;
L_0025AD38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] & 8192ull;  if (t) { goto L_0025AD50; } }
    set32(c.r[2], 0u + 19u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[7].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0025AD98; } }
    c.r[2].d[0] = c.r[3].d[0] & 8192ull;
    c.budget -= 1;
L_0025AD50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] & 4096ull;  if (t) { goto L_0025AD68; } }
    set32(c.r[2], 0u + 18u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[7].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0025AD98; } }
    c.r[2].d[0] = c.r[3].d[0] & 4096ull;
    c.budget -= 1;
L_0025AD68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 16u);  if (t) { goto L_0025AD80; } }
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[7].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0025AD98; } }
    set32(c.r[2], 0u + 16u);
    c.budget -= 1;
L_0025AD80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[7].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0025AD98; } }
L_0025AD88:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_0025AD8C:
    c.r[2].d[0] = c.r[6].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], c.r[5].w[0] + c.r[6].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025AD00u | kUnwind; return; } goto L_0025AD00; } }
L_0025AD98:
    c.budget -= 2;
    { set32(c.r[5], 0u + 10u);  [[clang::musttail]] return unit_005B(c, 100u, depth); }
L_0025ADA0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 729u)));
    set32(c.r[2], c.r[28].w[0] - 29192u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00258000u < 16384u) { entry = entries_0056[(t - 0x00258000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0025ADC0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 729u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 729u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { st32((c.r[4].w[0] + 1200u), c.r[2].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00198960u | kUnwind; return; } [[clang::musttail]] return unit_0026(c, 51u, depth); }
L_0025ADE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025ADF8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0056(c, 145u, depth + 1u); else { c.pc = 0x0025B0E0u; return; } if (c.pc != 0x0025ADF8u) [[unlikely]] return; }
L_0025ADF8:
    c.f[2] = ld32((c.r[17].w[0] + 7740u));
    c.f[1] = ld32((c.r[17].w[0] + 1200u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 1200u), c.f[1]);  if (t) { goto L_0025AEB0; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 1580u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0025AE48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025AE34u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 38u, depth + 1u); else { c.pc = 0x001985A0u; return; } if (c.pc != 0x0025AE34u) [[unlikely]] return; }
L_0025AE34:
    set32(c.r[5], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025AE40u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 100u, depth + 1u); else { c.pc = 0x0026DB00u; return; } if (c.pc != 0x0025AE40u) [[unlikely]] return; }
L_0025AE40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_0025AEB4; } }
L_0025AE48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025AE50u);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x0025AE50u) [[unlikely]] return; }
L_0025AE50:
    c.r[16].d[0] = c.r[2].d[0] & 1ull;
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025AE60u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 64u, depth + 1u); else { c.pc = 0x002DC7B0u; return; } if (c.pc != 0x0025AE60u) [[unlikely]] return; }
L_0025AE60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_0025AE78; } }
    set32(c.r[5], c.r[16].w[0] + 31u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025AE74u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0079(c, 182u, depth + 1u); else { c.pc = 0x002E62A0u; return; } if (c.pc != 0x0025AE74u) [[unlikely]] return; }
L_0025AE74:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_0025AE78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025AE80u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 64u, depth + 1u); else { c.pc = 0x002DC7B0u; return; } if (c.pc != 0x0025AE80u) [[unlikely]] return; }
L_0025AE80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 5u);  if (t) { goto L_0025AE9C; } }
    c.r[2].d[0] = c.r[16].d[0] ^ 1ull;
    set32(c.r[5], c.r[2].w[0] + 31u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025AE98u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0079(c, 182u, depth + 1u); else { c.pc = 0x002E62A0u; return; } if (c.pc != 0x0025AE98u) [[unlikely]] return; }
L_0025AE98:
    set32(c.r[5], 0u + 5u);
    c.budget -= 1;
L_0025AE9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025AEA4u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 33u, depth + 1u); else { c.pc = 0x00198530u; return; } if (c.pc != 0x0025AEA4u) [[unlikely]] return; }
L_0025AEA4:
    set32(c.r[5], 0u + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025AEB0u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 100u, depth + 1u); else { c.pc = 0x0026DB00u; return; } if (c.pc != 0x0025AEB0u) [[unlikely]] return; }
L_0025AEB0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0025AEB4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0025AED0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[4], c.r[16].w[0] + 320u);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[3], 0u + 1u);
    set32(c.r[7], c.r[4].w[0] + c.r[5].w[0]);
    c.budget -= 9;
L_0025AEF4:
    c.r[2].d[0] = ld8((c.r[7].w[0]));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_0025AF1C; }
    c.r[2].d[0] = ld8((c.r[7].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[8], c.r[7].w[0] + 8u);  if (t) { goto L_0025AF18; } }
    c.r[2].d[0] = c.r[6].d[0] | 32ull;
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0025AF18:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_0025AF1C:
    c.r[2].d[0] = c.r[5].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], c.r[4].w[0] + c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025AEF4u | kUnwind; return; } goto L_0025AEF4; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025AF34u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x0025AF34u) [[unlikely]] return; }
L_0025AF34:
    set32(c.r[5], 0u + 10u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025AF40u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 100u, depth + 1u); else { c.pc = 0x0026DB00u; return; } if (c.pc != 0x0025AF40u) [[unlikely]] return; }
L_0025AF40:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0025AF50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0025AF60:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    mmi::paddub(c.r[20], c.r[4], c.r[0]);
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[16], c.r[20].w[0] + 320u);  if (t) { goto L_0025B0A8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 18u)));
    c.r[1].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0025B038; } }
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    set32(c.r[18], c.r[16].w[0] + c.r[17].w[0]);
    c.budget -= 2;
L_0025AFA8:
    c.r[4].d[0] = ld8((c.r[18].w[0]));
    set32(c.r[3], 0u + 255u);
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_0025B02C; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[19], c.r[18].w[0] + 20u);  if (t) { goto L_0025AFD4; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0025B018; } }
L_0025AFD4:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 19u)));
    mmi::paddub(c.r[4], c.r[20], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025AFE4u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_007C(c, 237u, depth + 1u); else { c.pc = 0x002F2930u; return; } if (c.pc != 0x0025AFE4u) [[unlikely]] return; }
L_0025AFE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025B038; } }
    set32(c.r[3], 0u + 255u);
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[18].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 19u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    st8((c.r[16].w[0] + 19u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 18u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 18u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 11;
L_0025B018:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 18u)));
    c.r[1].d[0] = c.r[3].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0025B038; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0025B02C:
    c.r[3].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[16].w[0] + c.r[17].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025AFA8u | kUnwind; return; } goto L_0025AFA8; } }
L_0025B038:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 16u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0025B060; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 1260u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFE70000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 1260u), c.r[3].w[0]);  if (t) { goto L_0025B070; } }
L_0025B060:
    set32(c.r[4], ld32((c.r[20].w[0] + 1260u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00180000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[20].w[0] + 1260u), c.r[3].w[0]);
    c.budget -= 4;
L_0025B070:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 17u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0025B098; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 1260u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFF9F0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 1260u), c.r[3].w[0]);  if (t) { goto L_0025B0A8; } }
L_0025B098:
    set32(c.r[4], ld32((c.r[20].w[0] + 1260u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[20].w[0] + 1260u), c.r[3].w[0]);
    c.budget -= 4;
L_0025B0A8:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0025B0D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0025B0E0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B0FCu); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 134u, depth + 1u); else { c.pc = 0x00265FB0u; return; } if (c.pc != 0x0025B0FCu) [[unlikely]] return; }
L_0025B0FC:
    c.f[0] = ld32((c.r[16].w[0] + 3504u));
    set32(c.r[18], c.r[29].w[0] + 148u);
    set32(c.r[17], c.r[29].w[0] + 152u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    st32((c.r[29].w[0] + 128u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 3508u));
    set32(c.r[5], c.r[29].w[0] + 128u);
    st32((c.r[29].w[0] + 132u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 3512u));
    st32((c.r[29].w[0] + 136u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 3568u));
    st32((c.r[29].w[0] + 144u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 3572u));
    st32((c.r[18].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 3576u));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B140u); st32((c.r[17].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x0025B140u) [[unlikely]] return; }
L_0025B140:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B154u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x0025B154u) [[unlikely]] return; }
L_0025B154:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B15Cu); set32(c.r[4], c.r[16].w[0] + 3456u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x0025B15Cu) [[unlikely]] return; }
L_0025B15C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B164u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_000F(c, 17u, depth + 1u); else { c.pc = 0x0013C880u; return; } if (c.pc != 0x0025B164u) [[unlikely]] return; }
L_0025B164:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B16Cu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0025B16Cu) [[unlikely]] return; }
L_0025B16C:
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[16].w[0] + 1328u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B17Cu); set32(c.r[6], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_005B(c, 138u, depth + 1u); else { c.pc = 0x0026E440u; return; } if (c.pc != 0x0025B17Cu) [[unlikely]] return; }
L_0025B17C:
    c.f[13] = ld32((c.r[17].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B188u); c.f[12] = ld32((c.r[18].w[0]));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x0025B188u) [[unlikely]] return; }
L_0025B188:
    c.f[0] = c.r[2].w[0];
    mmi::paddub(c.r[17], c.r[2], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B198u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 291u, depth + 1u); else { c.pc = 0x0013B4D0u; return; } if (c.pc != 0x0025B198u) [[unlikely]] return; }
L_0025B198:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44400000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0025B1DC; } }
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] <= 0;  if (t) { goto L_0025B1CC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1292u)));
    set32(c.r[3], c.r[3].w[0] + 768u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1292u), c.r[3].w[0]);  if (t) { goto L_0025B1E8; } }
L_0025B1CC:
    set32(c.r[3], ld32((c.r[16].w[0] + 1292u)));
    set32(c.r[3], c.r[3].w[0] - 768u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1292u), c.r[3].w[0]);  if (t) { goto L_0025B1E8; } }
L_0025B1DC:
    set32(c.r[3], ld32((c.r[16].w[0] + 1292u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[16].w[0] + 1292u), c.r[3].w[0]);
    c.budget -= 3;
L_0025B1E8:
    set32(c.r[3], ld32((c.r[16].w[0] + 1292u)));
    c.r[1].d[0] = c.r[3].sd[0] < 16385ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0025B200; } }
    set32(c.r[3], 0u + 16384u);
    st32((c.r[16].w[0] + 1292u), c.r[3].w[0]);
    c.budget -= 2;
L_0025B200:
    set32(c.r[3], ld32((c.r[16].w[0] + 1292u)));
    c.r[1].d[0] = c.r[3].sd[0] < -2048ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0025B218; } }
    set32(c.r[3], 0u - 2048u);
    st32((c.r[16].w[0] + 1292u), c.r[3].w[0]);
    c.budget -= 2;
L_0025B218:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0025B230:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], 0u + 82u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { goto L_0025B268; } }
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_0025B250:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B258u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0049(c, 69u, depth + 1u); else { c.pc = 0x00224EF0u; return; } if (c.pc != 0x0025B258u) [[unlikely]] return; }
L_0025B258:
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);
    c.budget -= 4;
L_0025B268:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[1].d[0] = c.r[2].sd[0] < 84ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025B250u | kUnwind; return; } goto L_0025B250; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 141u);  if (t) { goto L_0025B2A0; } }
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_0025B288:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B290u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0049(c, 69u, depth + 1u); else { c.pc = 0x00224EF0u; return; } if (c.pc != 0x0025B290u) [[unlikely]] return; }
L_0025B290:
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);
    c.budget -= 4;
L_0025B2A0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[1].d[0] = c.r[2].sd[0] < 147ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025B288u | kUnwind; return; } goto L_0025B288; } }
    set32(c.r[6], 0u + 1u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B2C4u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 12u, depth + 1u); else { c.pc = 0x00304300u; return; } if (c.pc != 0x0025B2C4u) [[unlikely]] return; }
L_0025B2C4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0025B2E0:
    st32((c.r[4].w[0] + 320u), 0u);
    st32((c.r[4].w[0] + 1292u), 0u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 1288u), 0u);  c.pc = t; return; }
L_0025B2F0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 728u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 11120u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00258000u < 16384u) { entry = entries_0056[(t - 0x00258000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0025B310:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 736u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0025B33C; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B330u); st8((c.r[4].w[0] + 728u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0056(c, 198u, depth + 1u); else { c.pc = 0x0025B6D0u; return; } if (c.pc != 0x0025B330u) [[unlikely]] return; }
L_0025B330:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0025B348; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0025B33C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B344u); st8((c.r[4].w[0] + 728u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0056(c, 166u, depth + 1u); else { c.pc = 0x0025B350u; return; } if (c.pc != 0x0025B344u) [[unlikely]] return; }
L_0025B344:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_0025B348:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0025B350:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 729u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 11136u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 12;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B380u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025B380u) [[unlikely]] return; }
L_0025B380:
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B390u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 169u, depth + 1u); else { c.pc = 0x002D62A0u; return; } if (c.pc != 0x0025B390u) [[unlikely]] return; }
L_0025B390:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0025B3A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.f[12] = 0u;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 729u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F8C0000u);
    c.r[3].d[0] = c.r[2].d[0] | 52429ull;
    set32(c.r[5], 0u + 4u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 729u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[4].w[0] + 108u), 0u);
    st32((c.r[4].w[0] + 104u), 0u);
    st8((c.r[4].w[0] + 575u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 275u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 276u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 277u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 104u), c.r[3].w[0]);
    set32(c.r[6], 0u + 8u);
    set32(c.r[7], 0u + 5u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    st32((c.r[4].w[0] + 1200u), c.r[2].w[0]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B400u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 90u, depth + 1u); else { c.pc = 0x00264D10u; return; } if (c.pc != 0x0025B400u) [[unlikely]] return; }
L_0025B400:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B408u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 172u, depth + 1u); else { c.pc = 0x002DAD30u; return; } if (c.pc != 0x0025B408u) [[unlikely]] return; }
L_0025B408:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B414u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x0025B414u) [[unlikely]] return; }
L_0025B414:
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B420u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 105u, depth + 1u); else { c.pc = 0x002D56C0u; return; } if (c.pc != 0x0025B420u) [[unlikely]] return; }
L_0025B420:
    set32(c.r[2], ld32((c.r[16].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 2u);  if (t) { goto L_0025B484; } }
    set32(c.r[2], 0u + 2u);
    c.f[12] = 0u;
    st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B468u); st8((c.r[16].w[0] + 575u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0059(c, 90u, depth + 1u); else { c.pc = 0x00264D10u; return; } if (c.pc != 0x0025B468u) [[unlikely]] return; }
L_0025B468:
    set32(c.r[6], 0u + 36u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B478u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 12u, depth + 1u); else { c.pc = 0x00304300u; return; } if (c.pc != 0x0025B478u) [[unlikely]] return; }
L_0025B478:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0025B4B0; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 1;
L_0025B484:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B48Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x0025B48Cu) [[unlikely]] return; }
L_0025B48C:
    set32(c.r[5], 0u + 18u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B49Cu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 29u, depth + 1u); else { c.pc = 0x00198460u; return; } if (c.pc != 0x0025B49Cu) [[unlikely]] return; }
L_0025B49C:
    set32(c.r[6], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B4ACu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 25u, depth + 1u); else { c.pc = 0x00198370u; return; } if (c.pc != 0x0025B4ACu) [[unlikely]] return; }
L_0025B4AC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0025B4B0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0025B4C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B4D4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 93u, depth + 1u); else { c.pc = 0x00264EF0u; return; } if (c.pc != 0x0025B4D4u) [[unlikely]] return; }
L_0025B4D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B4DCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 172u, depth + 1u); else { c.pc = 0x002DAD30u; return; } if (c.pc != 0x0025B4DCu) [[unlikely]] return; }
L_0025B4DC:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B4E8u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x0025B4E8u) [[unlikely]] return; }
L_0025B4E8:
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B4F4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 105u, depth + 1u); else { c.pc = 0x002D56C0u; return; } if (c.pc != 0x0025B4F4u) [[unlikely]] return; }
L_0025B4F4:
    c.f[1] = ld32((c.r[16].w[0] + 1004u));
    c.f[0] = ld32((c.r[16].w[0] + 1200u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41880000u);
    c.f[12] = c.r[2].w[0];
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B514u); st32((c.r[16].w[0] + 1200u), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 178u, depth + 1u); else { c.pc = 0x002DAF40u; return; } if (c.pc != 0x0025B514u) [[unlikely]] return; }
L_0025B514:
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0025B53C; } }
    c.f[1] = ld32((c.r[16].w[0] + 1200u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0025B59C; } }
L_0025B53C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 729u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[1] = c.r[2].w[0];
    c.f[12] = 0u;
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B57Cu); st8((c.r[16].w[0] + 575u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0059(c, 90u, depth + 1u); else { c.pc = 0x00264D10u; return; } if (c.pc != 0x0025B57Cu) [[unlikely]] return; }
L_0025B57C:
    set32(c.r[6], 0u + 36u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B58Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 12u, depth + 1u); else { c.pc = 0x00304300u; return; } if (c.pc != 0x0025B58Cu) [[unlikely]] return; }
L_0025B58C:
    set32(c.r[6], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B59Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 29u, depth + 1u); else { c.pc = 0x00198460u; return; } if (c.pc != 0x0025B59Cu) [[unlikely]] return; }
L_0025B59C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0025B5B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B5C4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 172u, depth + 1u); else { c.pc = 0x002DAD30u; return; } if (c.pc != 0x0025B5C4u) [[unlikely]] return; }
L_0025B5C4:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B5D0u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x0025B5D0u) [[unlikely]] return; }
L_0025B5D0:
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B5DCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 105u, depth + 1u); else { c.pc = 0x002D56C0u; return; } if (c.pc != 0x0025B5DCu) [[unlikely]] return; }
L_0025B5DC:
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_0025B604; } }
    st32((c.r[16].w[0] + 108u), 0u);
    st32((c.r[16].w[0] + 104u), 0u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
L_0025B604:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B60Cu);  if (depth < kMaxDepth) unit_0059(c, 93u, depth + 1u); else { c.pc = 0x00264EF0u; return; } if (c.pc != 0x0025B60Cu) [[unlikely]] return; }
L_0025B60C:
    c.f[1] = ld32((c.r[16].w[0] + 7796u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0025B650; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 729u)));
    c.f[12] = 0u;
    set32(c.r[7], 0u + 40u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B650u); st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0059(c, 90u, depth + 1u); else { c.pc = 0x00264D10u; return; } if (c.pc != 0x0025B650u) [[unlikely]] return; }
L_0025B650:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0025B660:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B678u); set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));  if (depth < kMaxDepth) unit_0075(c, 105u, depth + 1u); else { c.pc = 0x002D56C0u; return; } if (c.pc != 0x0025B678u) [[unlikely]] return; }
L_0025B678:
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_0025B6A0; } }
    st32((c.r[16].w[0] + 108u), 0u);
    st32((c.r[16].w[0] + 104u), 0u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
L_0025B6A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B6A8u);  if (depth < kMaxDepth) unit_0059(c, 93u, depth + 1u); else { c.pc = 0x00264EF0u; return; } if (c.pc != 0x0025B6A8u) [[unlikely]] return; }
L_0025B6A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025B6BC; } }
    set32(c.r[5], 0u + 15u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B6BCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 89u, depth + 1u); else { c.pc = 0x0026D960u; return; } if (c.pc != 0x0025B6BCu) [[unlikely]] return; }
L_0025B6BC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0025B6D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 729u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 11152u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 12;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B700u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025B700u) [[unlikely]] return; }
L_0025B700:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B708u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 39u, depth + 1u); else { c.pc = 0x002D8810u; return; } if (c.pc != 0x0025B708u) [[unlikely]] return; }
L_0025B708:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025B720; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B720u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 169u, depth + 1u); else { c.pc = 0x002D62A0u; return; } if (c.pc != 0x0025B720u) [[unlikely]] return; }
L_0025B720:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0025B730:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 729u)));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 729u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[4].w[0] + 575u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 52u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B75Cu); set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));  if (depth < kMaxDepth) unit_0075(c, 117u, depth + 1u); else { c.pc = 0x002D58B0u; return; } if (c.pc != 0x0025B75Cu) [[unlikely]] return; }
L_0025B75C:
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 275u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 276u), static_cast<std::uint8_t>(0u));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B774u); st8((c.r[16].w[0] + 277u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0059(c, 93u, depth + 1u); else { c.pc = 0x00264EF0u; return; } if (c.pc != 0x0025B774u) [[unlikely]] return; }
L_0025B774:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B77Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 172u, depth + 1u); else { c.pc = 0x002DAD30u; return; } if (c.pc != 0x0025B77Cu) [[unlikely]] return; }
L_0025B77C:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B788u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 113u, depth + 1u); else { c.pc = 0x002D9850u; return; } if (c.pc != 0x0025B788u) [[unlikely]] return; }
L_0025B788:
    set32(c.r[3], ld32((c.r[16].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0025B7E8; } }
    set32(c.r[2], 0u + 3u);
    c.f[12] = 0u;
    st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[16].w[0] + 1200u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B7D8u); st8((c.r[16].w[0] + 575u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0059(c, 90u, depth + 1u); else { c.pc = 0x00264D10u; return; } if (c.pc != 0x0025B7D8u) [[unlikely]] return; }
L_0025B7D8:
    set32(c.r[6], 0u + 36u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B7E8u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 12u, depth + 1u); else { c.pc = 0x00304300u; return; } if (c.pc != 0x0025B7E8u) [[unlikely]] return; }
L_0025B7E8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0025B800:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B818u); set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));  if (depth < kMaxDepth) unit_0075(c, 117u, depth + 1u); else { c.pc = 0x002D58B0u; return; } if (c.pc != 0x0025B818u) [[unlikely]] return; }
L_0025B818:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B820u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 93u, depth + 1u); else { c.pc = 0x00264EF0u; return; } if (c.pc != 0x0025B820u) [[unlikely]] return; }
L_0025B820:
    c.f[1] = ld32((c.r[16].w[0] + 1200u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B83Cu); st32((c.r[16].w[0] + 1200u), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 172u, depth + 1u); else { c.pc = 0x002DAD30u; return; } if (c.pc != 0x0025B83Cu) [[unlikely]] return; }
L_0025B83C:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B848u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 113u, depth + 1u); else { c.pc = 0x002D9850u; return; } if (c.pc != 0x0025B848u) [[unlikely]] return; }
L_0025B848:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025B86C; } }
    c.f[1] = ld32((c.r[16].w[0] + 1200u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0025B904; } }
L_0025B86C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 729u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[12] = 0u;
    set32(c.r[6], 0u + 8u);
    set32(c.r[7], 0u + 5u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[3].w[0]));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B898u); st32((c.r[16].w[0] + 1200u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0059(c, 90u, depth + 1u); else { c.pc = 0x00264D10u; return; } if (c.pc != 0x0025B898u) [[unlikely]] return; }
L_0025B898:
    set32(c.r[2], ld32((c.r[16].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 2u);  if (t) { goto L_0025B8FC; } }
    set32(c.r[2], 0u + 3u);
    c.f[12] = 0u;
    st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B8E0u); st8((c.r[16].w[0] + 575u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0059(c, 90u, depth + 1u); else { c.pc = 0x00264D10u; return; } if (c.pc != 0x0025B8E0u) [[unlikely]] return; }
L_0025B8E0:
    set32(c.r[6], 0u + 36u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B8F0u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 12u, depth + 1u); else { c.pc = 0x00304300u; return; } if (c.pc != 0x0025B8F0u) [[unlikely]] return; }
L_0025B8F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0025B908; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 1;
L_0025B8FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B904u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x0025B904u) [[unlikely]] return; }
L_0025B904:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0025B908:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0025B920:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B934u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 172u, depth + 1u); else { c.pc = 0x002DAD30u; return; } if (c.pc != 0x0025B934u) [[unlikely]] return; }
L_0025B934:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B940u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x0025B940u) [[unlikely]] return; }
L_0025B940:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F990000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B95Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 107u, depth + 1u); else { c.pc = 0x002DD2A0u; return; } if (c.pc != 0x0025B95Cu) [[unlikely]] return; }
L_0025B95C:
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.f[12] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B96Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 121u, depth + 1u); else { c.pc = 0x002D5980u; return; } if (c.pc != 0x0025B96Cu) [[unlikely]] return; }
L_0025B96C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B974u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 93u, depth + 1u); else { c.pc = 0x00264EF0u; return; } if (c.pc != 0x0025B974u) [[unlikely]] return; }
L_0025B974:
    c.f[1] = ld32((c.r[16].w[0] + 1200u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41880000u);
    c.f[12] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B998u); st32((c.r[16].w[0] + 1200u), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 178u, depth + 1u); else { c.pc = 0x002DAF40u; return; } if (c.pc != 0x0025B998u) [[unlikely]] return; }
L_0025B998:
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0025B9C0; } }
    c.f[1] = ld32((c.r[16].w[0] + 1200u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0025BA10; } }
L_0025B9C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 729u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[1] = c.r[2].w[0];
    c.f[12] = 0u;
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BA00u); st8((c.r[16].w[0] + 575u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0059(c, 90u, depth + 1u); else { c.pc = 0x00264D10u; return; } if (c.pc != 0x0025BA00u) [[unlikely]] return; }
L_0025BA00:
    set32(c.r[6], 0u + 36u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BA10u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 12u, depth + 1u); else { c.pc = 0x00304300u; return; } if (c.pc != 0x0025BA10u) [[unlikely]] return; }
L_0025BA10:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0025BA20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.f[12] = 0u;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BA3Cu); set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));  if (depth < kMaxDepth) unit_0075(c, 121u, depth + 1u); else { c.pc = 0x002D5980u; return; } if (c.pc != 0x0025BA3Cu) [[unlikely]] return; }
L_0025BA3C:
    c.f[1] = ld32((c.r[16].w[0] + 104u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_0025BA64; } }
    st32((c.r[16].w[0] + 108u), 0u);
    st32((c.r[16].w[0] + 104u), 0u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
L_0025BA64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BA6Cu);  if (depth < kMaxDepth) unit_0059(c, 93u, depth + 1u); else { c.pc = 0x00264EF0u; return; } if (c.pc != 0x0025BA6Cu) [[unlikely]] return; }
L_0025BA6C:
    c.f[1] = ld32((c.r[16].w[0] + 7796u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0025BAB0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 729u)));
    c.f[12] = 0u;
    set32(c.r[7], 0u + 40u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BAB0u); st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0059(c, 90u, depth + 1u); else { c.pc = 0x00264D10u; return; } if (c.pc != 0x0025BAB0u) [[unlikely]] return; }
L_0025BAB0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0025BAC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.f[12] = 0u;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BADCu); set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));  if (depth < kMaxDepth) unit_0075(c, 121u, depth + 1u); else { c.pc = 0x002D5980u; return; } if (c.pc != 0x0025BADCu) [[unlikely]] return; }
L_0025BADC:
    c.f[1] = ld32((c.r[16].w[0] + 104u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_0025BB04; } }
    st32((c.r[16].w[0] + 108u), 0u);
    st32((c.r[16].w[0] + 104u), 0u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
L_0025BB04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BB0Cu);  if (depth < kMaxDepth) unit_0059(c, 93u, depth + 1u); else { c.pc = 0x00264EF0u; return; } if (c.pc != 0x0025BB0Cu) [[unlikely]] return; }
L_0025BB0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025BB20; } }
    set32(c.r[5], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BB20u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 89u, depth + 1u); else { c.pc = 0x0026D960u; return; } if (c.pc != 0x0025BB20u) [[unlikely]] return; }
L_0025BB20:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0025BB30:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 728u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 11176u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00258000u < 16384u) { entry = entries_0056[(t - 0x00258000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0025BB50:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 729u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 11200u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00258000u < 16384u) { entry = entries_0056[(t - 0x00258000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0025BB70:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 729u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 729u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0025BB80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BB94u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0057(c, 200u, depth + 1u); else { c.pc = 0x0025D750u; return; } if (c.pc != 0x0025BB94u) [[unlikely]] return; }
L_0025BB94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BB9Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0057(c, 220u, depth + 1u); else { c.pc = 0x0025DA60u; return; } if (c.pc != 0x0025BB9Cu) [[unlikely]] return; }
L_0025BB9C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025BBB8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 729u)));
    set32(c.r[3], 0u + 16u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
L_0025BBB8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0025BBD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BBE4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0057(c, 220u, depth + 1u); else { c.pc = 0x0025DA60u; return; } if (c.pc != 0x0025BBE4u) [[unlikely]] return; }
L_0025BBE4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0025BC10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BC08u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0057(c, 200u, depth + 1u); else { c.pc = 0x0025D750u; return; } if (c.pc != 0x0025BC08u) [[unlikely]] return; }
L_0025BC08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025BC24; } }
L_0025BC10:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 729u)));
    set32(c.r[3], 0u + 16u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
L_0025BC24:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0025BC40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BC54u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0057(c, 220u, depth + 1u); else { c.pc = 0x0025DA60u; return; } if (c.pc != 0x0025BC54u) [[unlikely]] return; }
L_0025BC54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BC5Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0057(c, 200u, depth + 1u); else { c.pc = 0x0025D750u; return; } if (c.pc != 0x0025BC5Cu) [[unlikely]] return; }
L_0025BC5C:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0025BCF0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 729u)));
    set32(c.r[2], 0u + 70u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BC8Cu); st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0077(c, 64u, depth + 1u); else { c.pc = 0x002DC7B0u; return; } if (c.pc != 0x0025BC8Cu) [[unlikely]] return; }
L_0025BC8C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_0025BCE8; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BCA0u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x0025BCA0u) [[unlikely]] return; }
L_0025BCA0:
    set32(c.r[5], 0u + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BCACu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_007A(c, 8u, depth + 1u); else { c.pc = 0x002E8110u; return; } if (c.pc != 0x0025BCACu) [[unlikely]] return; }
L_0025BCAC:
    set32(c.r[5], 0u + 106u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BCB8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0048(c, 63u, depth + 1u); else { c.pc = 0x00220ED0u; return; } if (c.pc != 0x0025BCB8u) [[unlikely]] return; }
L_0025BCB8:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BCC4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 33u, depth + 1u); else { c.pc = 0x00198530u; return; } if (c.pc != 0x0025BCC4u) [[unlikely]] return; }
L_0025BCC4:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BCD0u); set32(c.r[5], 0u + 13u);  if (depth < kMaxDepth) unit_0023(c, 144u, depth + 1u); else { c.pc = 0x0018DAB0u; return; } if (c.pc != 0x0025BCD0u) [[unlikely]] return; }
L_0025BCD0:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 8384u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BCDCu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0024(c, 106u, depth + 1u); else { c.pc = 0x00191900u; return; } if (c.pc != 0x0025BCDCu) [[unlikely]] return; }
L_0025BCDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0025BCF4; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_0025BCE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BCF0u);  if (depth < kMaxDepth) unit_0026(c, 38u, depth + 1u); else { c.pc = 0x001985A0u; return; } if (c.pc != 0x0025BCF0u) [[unlikely]] return; }
L_0025BCF0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0025BCF4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0025BD00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0025BD2C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BD2Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 100u, depth + 1u); else { c.pc = 0x0026DB00u; return; } if (c.pc != 0x0025BD2Cu) [[unlikely]] return; }
L_0025BD2C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0025BD40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 729u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 11232u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 13;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BD74u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025BD74u) [[unlikely]] return; }
L_0025BD74:
    c.f[1] = ld32((c.r[16].w[0] + 320u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.r[2].d[0] = c.r[2].d[0] | 26214ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[17], c.r[16].w[0] + 320u);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BD94u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x0025BD94u) [[unlikely]] return; }
L_0025BD94:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BDA4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 105u, depth + 1u); else { c.pc = 0x002D56C0u; return; } if (c.pc != 0x0025BDA4u) [[unlikely]] return; }
L_0025BDA4:
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 2u);  if (t) { goto L_0025BDCC; } }
    st32((c.r[16].w[0] + 108u), 0u);
    st32((c.r[16].w[0] + 104u), 0u);
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
L_0025BDCC:
    st8((c.r[16].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BDD8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 169u, depth + 1u); else { c.pc = 0x002D62A0u; return; } if (c.pc != 0x0025BDD8u) [[unlikely]] return; }
L_0025BDD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BDE0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 93u, depth + 1u); else { c.pc = 0x00264EF0u; return; } if (c.pc != 0x0025BDE0u) [[unlikely]] return; }
L_0025BDE0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0025BE00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 729u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[0] = c.r[2].w[0];
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 729u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[1] = ld32((c.r[4].w[0] + 104u));
    c.f[1] = c.f[1] ^ fp::kSign;
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 108u), c.f[0]);
    st8((c.r[4].w[0] + 275u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[4].w[0] + 276u), static_cast<std::uint8_t>(0u));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BE48u); st8((c.r[4].w[0] + 277u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0076(c, 176u, depth + 1u); else { c.pc = 0x002DAED0u; return; } if (c.pc != 0x0025BE48u) [[unlikely]] return; }
L_0025BE48:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BE54u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 113u, depth + 1u); else { c.pc = 0x002D9850u; return; } if (c.pc != 0x0025BE54u) [[unlikely]] return; }
L_0025BE54:
    c.f[12] = 0u;
    set32(c.r[7], 0u + 11u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BE6Cu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 90u, depth + 1u); else { c.pc = 0x00264D10u; return; } if (c.pc != 0x0025BE6Cu) [[unlikely]] return; }
L_0025BE6C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0025BE80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BE94u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 176u, depth + 1u); else { c.pc = 0x002DAED0u; return; } if (c.pc != 0x0025BE94u) [[unlikely]] return; }
L_0025BE94:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BEA0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 113u, depth + 1u); else { c.pc = 0x002D9850u; return; } if (c.pc != 0x0025BEA0u) [[unlikely]] return; }
L_0025BEA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025BEBC; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 729u)));
    set32(c.r[3], 0u + 16u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
L_0025BEBC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0025BED0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BEE4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 176u, depth + 1u); else { c.pc = 0x002DAED0u; return; } if (c.pc != 0x0025BEE4u) [[unlikely]] return; }
L_0025BEE4:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BEF0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 113u, depth + 1u); else { c.pc = 0x002D9850u; return; } if (c.pc != 0x0025BEF0u) [[unlikely]] return; }
L_0025BEF0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0025BF1C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BF14u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0057(c, 200u, depth + 1u); else { c.pc = 0x0025D750u; return; } if (c.pc != 0x0025BF14u) [[unlikely]] return; }
L_0025BF14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025BF30; } }
L_0025BF1C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 729u)));
    set32(c.r[3], 0u + 16u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
L_0025BF30:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0025BF40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BF54u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 176u, depth + 1u); else { c.pc = 0x002DAED0u; return; } if (c.pc != 0x0025BF54u) [[unlikely]] return; }
L_0025BF54:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BF60u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 113u, depth + 1u); else { c.pc = 0x002D9850u; return; } if (c.pc != 0x0025BF60u) [[unlikely]] return; }
L_0025BF60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BF68u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0057(c, 200u, depth + 1u); else { c.pc = 0x0025D750u; return; } if (c.pc != 0x0025BF68u) [[unlikely]] return; }
L_0025BF68:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_0057(c, 4u, depth); } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 729u)));
    set32(c.r[2], 0u + 70u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BF98u); st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0077(c, 64u, depth + 1u); else { c.pc = 0x002DC7B0u; return; } if (c.pc != 0x0025BF98u) [[unlikely]] return; }
L_0025BF98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { [[clang::musttail]] return unit_0057(c, 3u, depth); } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BFACu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x0025BFACu) [[unlikely]] return; }
L_0025BFAC:
    set32(c.r[5], 0u + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BFB8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_007A(c, 8u, depth + 1u); else { c.pc = 0x002E8110u; return; } if (c.pc != 0x0025BFB8u) [[unlikely]] return; }
L_0025BFB8:
    set32(c.r[5], 0u + 106u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BFC4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0048(c, 63u, depth + 1u); else { c.pc = 0x00220ED0u; return; } if (c.pc != 0x0025BFC4u) [[unlikely]] return; }
L_0025BFC4:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BFD0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 33u, depth + 1u); else { c.pc = 0x00198530u; return; } if (c.pc != 0x0025BFD0u) [[unlikely]] return; }
L_0025BFD0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BFDCu); set32(c.r[5], 0u + 13u);  if (depth < kMaxDepth) unit_0023(c, 144u, depth + 1u); else { c.pc = 0x0018DAB0u; return; } if (c.pc != 0x0025BFDCu) [[unlikely]] return; }
L_0025BFDC:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 8384u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BFE8u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0024(c, 106u, depth + 1u); else { c.pc = 0x00191900u; return; } if (c.pc != 0x0025BFE8u) [[unlikely]] return; }
L_0025BFE8:
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[2], c.r[2].w[0] + 32767u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    st32((c.r[16].w[0] + 1312u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C004u); set32(c.r[4], ld32((c.r[16].w[0] + 1292u)));  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x0025C004u) [[unlikely]] return; }
    [[clang::musttail]] return unit_0057(c, 2u, depth);
}

}
