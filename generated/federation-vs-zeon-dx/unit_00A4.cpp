#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00A4[4096] = {
    1, 2, 0, 0, 0, 0, 3, 0, 0, 4, 0, 5, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0,
    11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 26, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 32, 0, 33, 0, 0, 34, 0, 35, 0, 0, 36, 0, 37, 0, 0, 38, 0,
    39, 0, 0, 40, 0, 41, 0, 0, 42, 0, 43, 0, 0, 44, 0, 45, 46, 0, 47, 0, 48, 0, 0, 49, 0, 50, 0, 0, 51, 0, 52, 0,
    0, 53, 0, 54, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 57, 0, 0, 0,
    0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0,
    0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0,
    0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0,
    112, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 117,
    0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 122, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 128, 0, 129, 0, 0, 0, 0, 130, 0,
    0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 134,
    0, 135, 0, 0, 0, 136, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 138, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140,
    0, 0, 0, 0, 141, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0,
    0, 0, 0, 0, 0, 144, 0, 145, 0, 0, 0, 0, 146, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 152, 0, 0, 153, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 159, 0, 0, 0, 160, 0, 0, 0,
    0, 0, 161, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 163, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0,
    167, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0,
    0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 186,
    0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 190,
    0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0,
    195, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 198, 0, 199, 0, 0, 0, 200,
    0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 204, 0, 205, 0, 0,
    0, 206, 0, 0, 207, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00A4(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00390000;
    case 2u: goto L_00390004;
    case 3u: goto L_00390018;
    case 4u: goto L_00390024;
    case 5u: goto L_0039002C;
    case 6u: goto L_00390038;
    case 7u: goto L_0039007C;
    case 8u: goto L_00390140;
    case 9u: goto L_003901B8;
    case 10u: goto L_003901E0;
    case 11u: goto L_00390200;
    case 12u: goto L_003902B0;
    case 13u: goto L_0039031C;
    case 14u: goto L_00390440;
    case 15u: goto L_003904F0;
    case 16u: goto L_00390570;
    case 17u: goto L_00390640;
    case 18u: goto L_00390710;
    case 19u: goto L_00390728;
    case 20u: goto L_00390740;
    case 21u: goto L_00390758;
    case 22u: goto L_0039078C;
    case 23u: goto L_003907B0;
    case 24u: goto L_003907D0;
    case 25u: goto L_0039083C;
    case 26u: goto L_00390840;
    case 27u: goto L_0039085C;
    case 28u: goto L_00390910;
    case 29u: goto L_00390940;
    case 30u: goto L_00390988;
    case 31u: goto L_003909B0;
    case 32u: goto L_003909BC;
    case 33u: goto L_003909C4;
    case 34u: goto L_003909D0;
    case 35u: goto L_003909D8;
    case 36u: goto L_003909E4;
    case 37u: goto L_003909EC;
    case 38u: goto L_003909F8;
    case 39u: goto L_00390A00;
    case 40u: goto L_00390A0C;
    case 41u: goto L_00390A14;
    case 42u: goto L_00390A20;
    case 43u: goto L_00390A28;
    case 44u: goto L_00390A34;
    case 45u: goto L_00390A3C;
    case 46u: goto L_00390A40;
    case 47u: goto L_00390A48;
    case 48u: goto L_00390A50;
    case 49u: goto L_00390A5C;
    case 50u: goto L_00390A64;
    case 51u: goto L_00390A70;
    case 52u: goto L_00390A78;
    case 53u: goto L_00390A84;
    case 54u: goto L_00390A8C;
    case 55u: goto L_00390A98;
    case 56u: goto L_00390AE4;
    case 57u: goto L_00390AF0;
    case 58u: goto L_00390B10;
    case 59u: goto L_00390BBC;
    case 60u: goto L_00390C40;
    case 61u: goto L_00390CE4;
    case 62u: goto L_00390DC8;
    case 63u: goto L_00390DF0;
    case 64u: goto L_00390E40;
    case 65u: goto L_00390EBC;
    case 66u: goto L_00390F88;
    case 67u: goto L_00390FB4;
    case 68u: goto L_00391394;
    case 69u: goto L_003913E0;
    case 70u: goto L_0039147C;
    case 71u: goto L_00391548;
    case 72u: goto L_00391578;
    case 73u: goto L_00391848;
    case 74u: goto L_00391890;
    case 75u: goto L_00391AD4;
    case 76u: goto L_00391B1C;
    case 77u: goto L_00391C00;
    case 78u: goto L_00391C60;
    case 79u: goto L_00391D04;
    case 80u: goto L_00391E08;
    case 81u: goto L_00391E40;
    case 82u: goto L_00391FA0;
    case 83u: goto L_00391FE4;
    case 84u: goto L_003920C4;
    case 85u: goto L_00392100;
    case 86u: goto L_003921A4;
    case 87u: goto L_0039221C;
    case 88u: goto L_00392240;
    case 89u: goto L_0039233C;
    case 90u: goto L_00392378;
    case 91u: goto L_00392460;
    case 92u: goto L_003924E8;
    case 93u: goto L_00392630;
    case 94u: goto L_00392668;
    case 95u: goto L_00392730;
    case 96u: goto L_003927C0;
    case 97u: goto L_00392850;
    case 98u: goto L_003928A4;
    case 99u: goto L_00392928;
    case 100u: goto L_00392940;
    case 101u: goto L_00392A74;
    case 102u: goto L_00392A8C;
    case 103u: goto L_00392AA8;
    case 104u: goto L_00392AC4;
    case 105u: goto L_00392AFC;
    case 106u: goto L_00392BBC;
    case 107u: goto L_00392BD4;
    case 108u: goto L_00392BEC;
    case 109u: goto L_00392C04;
    case 110u: goto L_00392C38;
    case 111u: goto L_00392CE8;
    case 112u: goto L_00392D00;
    case 113u: goto L_00392D18;
    case 114u: goto L_00392D30;
    case 115u: goto L_00392D64;
    case 116u: goto L_00392E64;
    case 117u: goto L_00392E7C;
    case 118u: goto L_00392E94;
    case 119u: goto L_00392EAC;
    case 120u: goto L_00392EE0;
    case 121u: goto L_00392F10;
    case 122u: goto L_00392F2C;
    case 123u: goto L_00392F34;
    case 124u: goto L_00392F70;
    case 125u: goto L_00392FA0;
    case 126u: goto L_003933F0;
    case 127u: goto L_00393448;
    case 128u: goto L_0039345C;
    case 129u: goto L_00393464;
    case 130u: goto L_00393478;
    case 131u: goto L_0039349C;
    case 132u: goto L_003934B0;
    case 133u: goto L_003934E4;
    case 134u: goto L_003934FC;
    case 135u: goto L_00393504;
    case 136u: goto L_00393514;
    case 137u: goto L_0039352C;
    case 138u: goto L_00393540;
    case 139u: goto L_0039354C;
    case 140u: goto L_0039357C;
    case 141u: goto L_00393590;
    case 142u: goto L_003935A4;
    case 143u: goto L_003935F0;
    case 144u: goto L_00393614;
    case 145u: goto L_0039361C;
    case 146u: goto L_00393630;
    case 147u: goto L_00393644;
    case 148u: goto L_0039365C;
    case 149u: goto L_00393690;
    case 150u: goto L_00393730;
    case 151u: goto L_003937E0;
    case 152u: goto L_00393808;
    case 153u: goto L_00393814;
    case 154u: goto L_0039382C;
    case 155u: goto L_00393850;
    case 156u: goto L_00393890;
    case 157u: goto L_003938B0;
    case 158u: goto L_003938C8;
    case 159u: goto L_003938E0;
    case 160u: goto L_003938F0;
    case 161u: goto L_00393908;
    case 162u: goto L_00393920;
    case 163u: goto L_00393984;
    case 164u: goto L_003939A4;
    case 165u: goto L_003939D0;
    case 166u: goto L_003939E8;
    case 167u: goto L_00393A00;
    case 168u: goto L_00393A1C;
    case 169u: goto L_00393A38;
    case 170u: goto L_00393A50;
    case 171u: goto L_00393A6C;
    case 172u: goto L_00393AA0;
    case 173u: goto L_00393AC0;
    case 174u: goto L_00393AD0;
    case 175u: goto L_00393B30;
    case 176u: goto L_00393B3C;
    case 177u: goto L_00393B60;
    case 178u: goto L_00393B70;
    case 179u: goto L_00393B90;
    case 180u: goto L_00393BAC;
    case 181u: goto L_00393BE0;
    case 182u: goto L_00393C1C;
    case 183u: goto L_00393C28;
    case 184u: goto L_00393C4C;
    case 185u: goto L_00393C5C;
    case 186u: goto L_00393C7C;
    case 187u: goto L_00393C98;
    case 188u: goto L_00393CD0;
    case 189u: goto L_00393CE4;
    case 190u: goto L_00393CFC;
    case 191u: goto L_00393D14;
    case 192u: goto L_00393D2C;
    case 193u: goto L_00393D48;
    case 194u: goto L_00393D70;
    case 195u: goto L_00393D80;
    case 196u: goto L_00393D90;
    case 197u: goto L_00393DD4;
    case 198u: goto L_00393DE4;
    case 199u: goto L_00393DEC;
    case 200u: goto L_00393DFC;
    case 201u: goto L_00393E04;
    case 202u: goto L_00393E30;
    case 203u: goto L_00393ED8;
    case 204u: goto L_00393EEC;
    case 205u: goto L_00393EF4;
    case 206u: goto L_00393F04;
    case 207u: goto L_00393F10;
    case 208u: goto L_00393F18;
    case 209u: goto L_00393F50;
    case 210u: goto L_00393F60;
    case 211u: goto L_00393F70;
    default: bad_entry(c, 0x00390000u); return;
    }
L_00390000:
    st16((c.r[28].w[0] - 24592u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_00390004:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[2].d[0] = c.r[2].d[0] & 127ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390018u); st16((c.r[28].w[0] - 24590u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0016(c, 129u, depth + 1u); else { c.pc = 0x0015B440u; return; } if (c.pc != 0x00390018u) [[unlikely]] return; }
L_00390018:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[3].d[0] = c.r[3].d[0] & 127ull;
    c.budget -= 3;
L_00390024:
    st16((c.r[28].w[0] - 24588u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 166u)));
    c.budget -= 2;
L_0039002C:
    set32(c.r[3], 0u + 2u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st16((c.r[17].w[0] + 166u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 3;
L_00390038:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 166u)));
    c.r[4].d[0] = c.r[4].d[0] & 15ull;
    st16((c.r[17].w[0] + 166u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_003901DC; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00390080; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0039006C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003901D8; } }
L_0039006C:
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039007Cu); st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_00A4(c, 124u, depth + 1u); else { c.pc = 0x00392F70u; return; } if (c.pc != 0x0039007Cu) [[unlikely]] return; }
L_0039007C:
    st16((c.r[16].w[0] + 72u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_00390080:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 329u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00390128; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[6], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[4], c.r[3].w[0] - 25300u);
    st8((c.r[5].w[0] + 643u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    set32(c.r[3], 0u + 12u);
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
    c.budget -= 38;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 62u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003901D8; } }
L_00390128:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 72u)));
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 16u)));
    set32(c.r[6], c.r[3].w[0] + 18u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 18u)));
    c.budget -= 6;
L_00390140:
    c.r[3].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[5].w[0] + 1u);  if (t) { goto L_00390160; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003901A0; } }
    set32(c.r[3], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_00390160:
    st16((c.r[16].w[0] + 72u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 72u)));
    c.r[3].d[0] = c.r[3].sd[0] < 12ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003901A0; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[5], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[3], c.r[3].w[0] - 25300u);
    st8((c.r[4].w[0] + 643u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[5].w[0]);
    c.budget -= 11;
L_003901A0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003901B8; } }
    set32(c.r[5], 0u + 59u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003901B8u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x00197670u; return; } if (c.pc != 0x003901B8u) [[unlikely]] return; }
L_003901B8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.r[3].d[0] = c.r[3].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003901D8; } }
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_003901D8:
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_003901DC:
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_003901E0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00390200:
    set32(c.r[5], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 11u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 386u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00390224; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003902A4; } }
L_00390224:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_003902A0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0039025C; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00390250; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039029C; } }
L_00390250:
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43F00000u);
    st32((c.r[4].w[0] + 36u), c.r[3].w[0]);
    c.budget -= 3;
L_0039025C:
    c.f[1] = ld32((c.r[4].w[0] + 36u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    c.f[0] = c.r[3].w[0];
    c.f[2] = 0u;
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[4].w[0] + 36u), c.f[0]);  if (t) { goto L_00390290; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 329u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0039029C; } }
L_00390290:
    set32(c.r[3], 0u + 2u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 36u), 0u);
    c.budget -= 3;
L_0039029C:
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_003902A0:
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_003902A4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003902B0:
    set32(c.r[6], ld32((c.r[28].w[0] - 26304u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 11u)));
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 386u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[3], c.r[4].w[0] + 320u);  if (t) { goto L_003904E4; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_00390304; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[5], c.r[6].w[0] + 1u);  if (t) { goto L_003902EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_003904E0; } }
    set32(c.r[5], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_003902EC:
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st32((c.r[3].w[0]), 0u);
    st32((c.r[3].w[0] + 4u), 0u);
    st32((c.r[3].w[0] + 8u), 0u);
    st32((c.r[3].w[0] + 12u), 0u);
    c.budget -= 6;
L_00390304:
    set32(c.r[7], ld32((c.r[28].w[0] - 26304u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 11u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 386u)));
    c.budget -= 7;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_0039040C; } }
    goto L_00390320;
L_0039031C:
    c.budget -= 1;
L_00390320:
    c.f[1] = ld32((c.r[3].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3CA30000u);
    c.r[5].d[0] = c.r[5].d[0] | 55050ull;
    c.f[0] = c.r[5].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[2] = c.r[5].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[3].w[0]), c.f[0]);  if (t) { goto L_00390354; } }
    st32((c.r[3].w[0]), c.r[5].w[0]);
    c.budget -= 1;
L_00390354:
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
    { const bool t = c.r[5].d[0] != 0ull; c.r[5].d[0] = c.r[6].sd[0] < 60ll ? 1ull : 0ull;  if (t) { goto L_003903C0; } }
    set32(c.r[5], c.r[7].w[0] - c.r[6].w[0]);
    c.f[0] = c.r[5].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[5].d[0] = c.r[5].d[0] | 52429ull;
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 4u), c.f[0]);  if (t) { goto L_0039040C; } }
    c.r[5].d[0] = c.r[6].sd[0] < 60ll ? 1ull : 0ull;
    c.budget -= 1;
L_003903C0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[5], 0u + 60u);  if (t) { goto L_003903D8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 4u), c.r[5].w[0]);  if (t) { goto L_0039040C; } }
    set32(c.r[5], 0u + 60u);
    c.budget -= 1;
L_003903D8:
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
L_0039040C:
    set32(c.r[7], ld32((c.r[28].w[0] - 26304u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 11u)));
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 386u)));
    c.budget -= 7;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_00390460; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[5].d[0] = c.r[6].d[0] & 8ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_00390454; } }
    goto L_00390444;
L_00390440:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_00390444:
    c.r[5].d[0] = c.r[6].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0039045C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_00390454:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 8u), c.r[5].w[0]);  if (t) { goto L_00390460; } }
L_0039045C:
    st32((c.r[3].w[0] + 8u), 0u);
    c.budget -= 1;
L_00390460:
    set32(c.r[6], ld32((c.r[28].w[0] - 26304u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 11u)));
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 386u)));
    c.r[5].d[0] = c.r[5].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_003904DC; } }
    c.f[1] = ld32((c.r[3].w[0] + 12u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3CA30000u);
    c.r[5].d[0] = c.r[5].d[0] | 55050ull;
    c.f[0] = c.r[5].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[2] = c.r[5].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[3].w[0] + 12u), c.f[0]);  if (t) { goto L_003904B0; } }
    st32((c.r[3].w[0] + 12u), c.r[5].w[0]);
    c.budget -= 1;
L_003904B0:
    c.f[1] = ld32((c.r[3].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[5].d[0] = c.r[5].d[0] | 52429ull;
    c.f[0] = c.r[5].w[0];
    c.f[2] = 0u;
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[3].w[0]), c.f[0]);  if (t) { goto L_003904DC; } }
    st32((c.r[3].w[0]), 0u);
    c.budget -= 1;
L_003904DC:
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_003904E0:
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_003904E4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003904F0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    set32(c.r[5], ld32((c.r[1].w[0] - 16720u)));
    set32(c.r[4], 0u + 3u);
    set32(c.r[3], 0u + 11u);
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st32((c.r[1].w[0] - 20392u), 0u);
    set32(c.r[2], c.r[2].w[0] - 18624u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] - 18560u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    set32(c.r[2], 0u + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20354u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 29;
    { set32(c.r[4], c.r[2].w[0] - 20416u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00170680u | kUnwind; return; } [[clang::musttail]] return unit_001C(c, 21u, depth); }
L_00390570:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 3u);
    set32(c.r[7], ld32((c.r[28].w[0] - 26304u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[2].w[0]);
    set32(c.r[2], 0u + 13u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[6], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), 0u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 6u)));
    set32(c.r[2], 0u + 8u);
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 260u)));
    if (c.r[3].d[0] != 0) c.r[18].d[0] = c.r[2].d[0];
    c.r[2].d[0] = c.r[3].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 27;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[4].w[0] + 320u);  if (t) { goto L_003905EC; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 640u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
L_003905EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_00390624; } }
    c.r[2].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00390614; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 640u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 2ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
L_00390614:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00390620; } }
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 1;
L_00390620:
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_00390624:
    mmi::paddub(c.r[3], c.r[0], c.r[0]);
    if (c.r[6].d[0] == 0) c.r[3].d[0] = c.r[2].d[0];
    set32(c.r[2], 0u + 14u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[18], c.r[18].w[0] + c.r[3].w[0]);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 7;
L_00390640:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_0039065C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 16716u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] - 20364u), c.r[2].w[0]);  if (t) { goto L_00390670; } }
L_0039065C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 16720u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[2].w[0]);
    c.budget -= 5;
L_00390670:
    set32(c.r[2], c.r[17].w[0] + c.r[18].w[0]);
    set32(c.r[3], c.r[2].w[0] << 4);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] - 18544u);
    set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[6].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[9].d[0] = c.r[2].d[0] | 65300ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[7], c.r[29].w[0] + 68u);
    st32((c.r[29].w[0] + 64u), c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[6].w[0] + 2u));
    set32(c.r[8], c.r[29].w[0] + 102u);
    st32((c.r[7].w[0]), c.r[2].w[0]);
    st32((c.r[29].w[0] + 72u), c.r[9].w[0]);
    c.r[3].d[0] = ld16((c.r[6].w[0] + 4u));
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[7].w[0])));
    c.r[3].d[0] = ld16((c.r[6].w[0] + 6u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 84u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 88u), c.r[9].w[0]);
    c.r[2].d[0] = ld16((c.r[6].w[0] + 8u));
    st16((c.r[29].w[0] + 100u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[6].w[0] + 10u));
    st16((c.r[8].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 12u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 100u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st16((c.r[29].w[0] + 104u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0])));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 14u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st16((c.r[29].w[0] + 106u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0]));
    c.budget -= 40;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390710u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x00390710u) [[unlikely]] return; }
L_00390710:
    st8((c.r[29].w[0] + 108u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390728u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x00390728u) [[unlikely]] return; }
L_00390728:
    st8((c.r[29].w[0] + 109u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390740u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x00390740u) [[unlikely]] return; }
L_00390740:
    st8((c.r[29].w[0] + 110u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390758u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x00390758u) [[unlikely]] return; }
L_00390758:
    st8((c.r[29].w[0] + 111u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[29].w[0] + 108u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 100u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20368u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039078Cu); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x0039078Cu) [[unlikely]] return; }
L_0039078C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00390640u | kUnwind; return; } goto L_00390640; } }
    c.f[12] = ld32((c.r[16].w[0]));
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003907B0u); set32(c.r[6], 0u + 13u);  if (depth < kMaxDepth) unit_0037(c, 147u, depth + 1u); else { c.pc = 0x001DE890u; return; } if (c.pc != 0x003907B0u) [[unlikely]] return; }
L_003907B0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003907D0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    set32(c.r[7], ld32((c.r[1].w[0] - 16720u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[6], 0u + 3u);
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[7].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[29].w[0] + 80u), 0u);
    st32((c.r[1].w[0] - 20392u), 0u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    set32(c.r[2], c.r[2].w[0] - 25284u);
    c.f[0] = ld32((c.r[4].w[0] + 36u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039083Cu); c.f[12] = fp::sub(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x0039083Cu) [[unlikely]] return; }
L_0039083C:
    st32((c.r[29].w[0] + 84u), c.r[2].w[0]);
    c.budget -= 1;
L_00390840:
    set32(c.r[2], 0u + 7u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[17], c.r[2].w[0] - 18288u);
    st32((c.r[29].w[0] + 88u), 0u);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 7;
L_0039085C:
    c.r[4].d[0] = ld16((c.r[17].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[11], c.r[29].w[0] + 106u);
    set32(c.r[2], c.r[29].w[0] + 52u);
    st16((c.r[29].w[0] + 104u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[9].d[0] = ld16((c.r[17].w[0] + 2u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65300ull;
    set32(c.r[8], c.r[28].w[0] - 26968u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[11].w[0]), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 4u)));
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 104u)));
    set32(c.r[7], c.r[29].w[0] + 48u);
    set32(c.r[6], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 104u);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    st16((c.r[29].w[0] + 108u), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[11].w[0])));
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 6u)));
    set32(c.r[4], c.r[4].w[0] - 20416u);
    set32(c.r[9], c.r[10].w[0] + c.r[9].w[0]);
    st16((c.r[29].w[0] + 110u), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld16((c.r[17].w[0] + 8u));
    st32((c.r[29].w[0] + 48u), c.r[9].w[0]);
    c.r[9].d[0] = ld16((c.r[17].w[0] + 10u));
    st32((c.r[2].w[0]), c.r[9].w[0]);
    st32((c.r[29].w[0] + 56u), c.r[3].w[0]);
    c.r[10].d[0] = ld16((c.r[17].w[0] + 12u));
    set32(c.r[9], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    st32((c.r[29].w[0] + 64u), c.r[9].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[9].d[0] = ld16((c.r[17].w[0] + 14u));
    st32((c.r[1].w[0] - 20380u), c.r[8].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[9].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[29].w[0] + 72u), c.r[3].w[0]);
    c.budget -= 45;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390910u); st32((c.r[1].w[0] - 20368u), c.r[5].w[0]);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x00390910u) [[unlikely]] return; }
L_00390910:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(14ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039085Cu | kUnwind; return; } goto L_0039085C; } }
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00390940:
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
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[18], c.r[0], c.r[0]);  if (t) { goto L_00390AA8; } }
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(12ll) ? 1ull : 0ull;
    c.budget -= 1;
L_00390988:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[18].w[0] + 1u);  if (t) { goto L_00390A9C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[4].w[0] - 11696u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00390000u < 16384u) { entry = entries_00A4[(t - 0x00390000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003909B0:
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003909BCu); mmi::paddub(c.r[5], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_00A4(c, 58u, depth + 1u); else { c.pc = 0x00390B10u; return; } if (c.pc != 0x003909BCu) [[unlikely]] return; }
L_003909BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00390A98; } }
L_003909C4:
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003909D0u); mmi::paddub(c.r[5], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_00A4(c, 58u, depth + 1u); else { c.pc = 0x00390B10u; return; } if (c.pc != 0x003909D0u) [[unlikely]] return; }
L_003909D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00390A98; } }
L_003909D8:
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003909E4u); mmi::paddub(c.r[5], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_00A4(c, 58u, depth + 1u); else { c.pc = 0x00390B10u; return; } if (c.pc != 0x003909E4u) [[unlikely]] return; }
L_003909E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00390A98; } }
L_003909EC:
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003909F8u); mmi::paddub(c.r[5], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_00A4(c, 58u, depth + 1u); else { c.pc = 0x00390B10u; return; } if (c.pc != 0x003909F8u) [[unlikely]] return; }
L_003909F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00390A98; } }
L_00390A00:
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390A0Cu); mmi::paddub(c.r[5], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_00A4(c, 58u, depth + 1u); else { c.pc = 0x00390B10u; return; } if (c.pc != 0x00390A0Cu) [[unlikely]] return; }
L_00390A0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00390A98; } }
L_00390A14:
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390A20u); mmi::paddub(c.r[5], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_00A4(c, 58u, depth + 1u); else { c.pc = 0x00390B10u; return; } if (c.pc != 0x00390A20u) [[unlikely]] return; }
L_00390A20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00390A98; } }
L_00390A28:
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390A34u); mmi::paddub(c.r[5], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_00A4(c, 63u, depth + 1u); else { c.pc = 0x00390DF0u; return; } if (c.pc != 0x00390A34u) [[unlikely]] return; }
L_00390A34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00390A98; } }
L_00390A3C:
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 1;
L_00390A40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390A48u); mmi::paddub(c.r[5], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_00A4(c, 63u, depth + 1u); else { c.pc = 0x00390DF0u; return; } if (c.pc != 0x00390A48u) [[unlikely]] return; }
L_00390A48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00390A98; } }
L_00390A50:
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390A5Cu); mmi::paddub(c.r[5], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_00A4(c, 58u, depth + 1u); else { c.pc = 0x00390B10u; return; } if (c.pc != 0x00390A5Cu) [[unlikely]] return; }
L_00390A5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00390A98; } }
L_00390A64:
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390A70u); mmi::paddub(c.r[5], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_00A4(c, 58u, depth + 1u); else { c.pc = 0x00390B10u; return; } if (c.pc != 0x00390A70u) [[unlikely]] return; }
L_00390A70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00390A98; } }
L_00390A78:
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390A84u); mmi::paddub(c.r[5], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_00A4(c, 69u, depth + 1u); else { c.pc = 0x003913E0u; return; } if (c.pc != 0x00390A84u) [[unlikely]] return; }
L_00390A84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00390A98; } }
L_00390A8C:
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390A98u); mmi::paddub(c.r[5], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_00A4(c, 74u, depth + 1u); else { c.pc = 0x00391890u; return; } if (c.pc != 0x00390A98u) [[unlikely]] return; }
L_00390A98:
    set32(c.r[3], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_00390A9C:
    c.r[18].d[0] = c.r[3].d[0] << 48;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);
    c.budget -= 3;
L_00390AA8:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 72u)));
    c.r[5].d[0] = c.r[18].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    set32(c.r[3], c.r[4].w[0] + 1u);
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(12ll) ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00390988u | kUnwind; return; } goto L_00390988; } }
    c.r[3].d[0] = c.r[4].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00390AF0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8435u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (t) { goto L_00390AE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390AE4u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_00A4(c, 81u, depth + 1u); else { c.pc = 0x00391E40u; return; } if (c.pc != 0x00390AE4u) [[unlikely]] return; }
L_00390AE4:
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 1;
L_00390AE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390AF0u);  if (depth < kMaxDepth) unit_00A4(c, 85u, depth + 1u); else { c.pc = 0x00392100u; return; } if (c.pc != 0x00390AF0u) [[unlikely]] return; }
L_00390AF0:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00390B10:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    set32(c.r[6], ld32((c.r[1].w[0] - 16720u)));
    c.r[8].d[0] = c.r[5].d[0] << 48;
    set32(c.r[5], 0u + 3u);
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 7u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[29].w[0] + 128u), 0u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[2], c.r[2].w[0] - 25284u);
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 48);
    set32(c.r[7], c.r[4].w[0] + 320u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    set32(c.r[2], c.r[8].w[0] << 2);
    set32(c.r[18], c.r[7].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[8].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    set32(c.r[20], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] - 18064u);
    set32(c.r[3], 0u - c.r[3].w[0]);
    st32((c.r[29].w[0] + 132u), c.r[3].w[0]);
    set32(c.r[19], c.r[2].w[0] + c.r[20].w[0]);
    st32((c.r[29].w[0] + 136u), 0u);
    c.budget -= 43;
L_00390BBC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_00390BF4; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 18u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x66660000u);
    c.r[2].d[0] = c.r[2].d[0] | 26215ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] >> 31);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_00390C10; } }
L_00390BF4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 18u)));
    set32(c.r[2], 0u + 10u);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 7;
L_00390C10:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; c.r[3].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_00390C28; } }
    c.r[2].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_00390CEC; }
    c.budget -= 1;
L_00390C28:
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    st16((c.r[29].w[0] + 152u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 6;
L_00390C40:
    set32(c.r[2], 0u + 88u);
    set32(c.r[6], c.r[29].w[0] + 154u);
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 152u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[8], c.r[4].w[0] - 17916u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[2], c.r[29].w[0] + 100u);
    set32(c.r[4], c.r[5].w[0] + 19u);
    st16((c.r[29].w[0] + 156u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65300ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[7], c.r[29].w[0] + 96u);
    set32(c.r[9], c.r[9].w[0] + 19u);
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
    c.budget -= 41;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390CE4u); st32((c.r[29].w[0] + 120u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x00390CE4u) [[unlikely]] return; }
L_00390CE4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 2;
L_00390CEC:
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00390BBCu | kUnwind; return; } goto L_00390BBC; } }
    c.r[3].d[0] = ld16((c.r[19].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] - 18062u);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    st16((c.r[29].w[0] + 152u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].d[0] = ld16((c.r[2].w[0]));
    set32(c.r[5], c.r[29].w[0] + 154u);
    set32(c.r[10], c.r[29].w[0] + 100u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] - 18060u);
    set32(c.r[3], c.r[2].w[0] + c.r[20].w[0]);
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] - 18058u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 152u)));
    set32(c.r[8], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[6], c.r[29].w[0] + 96u);
    set32(c.r[2], c.r[4].w[0] + 19u);
    st16((c.r[29].w[0] + 156u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[11].d[0] = c.r[2].d[0] | 65300ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[7], c.r[2].w[0] - 17920u);
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390DC8u); st32((c.r[29].w[0] + 120u), c.r[11].w[0]);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x00390DC8u) [[unlikely]] return; }
L_00390DC8:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_00390DF0:
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
    c.r[20].d[0] = c.r[5].d[0] << 48;
    set32(c.r[5], 0u + 3u);
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[5].w[0]);
    c.budget -= 20;
L_00390E40:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 7u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 6u);
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 48);
    set32(c.r[16], c.r[4].w[0] + 320u);
    c.budget -= 10;
    { const bool t = c.r[20].d[0] != c.r[2].d[0]; st32((c.r[29].w[0] + 192u), 0u);  if (t) { goto L_00390E88; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[2], c.r[2].w[0] - 25284u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - c.r[2].w[0]);  if (t) { goto L_00390EA8; } }
L_00390E88:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[3], c.r[2].w[0] - 25284u);
    set32(c.r[2], 0u + 12u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 8;
L_00390EA8:
    st32((c.r[29].w[0] + 196u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[18], c.r[2].w[0] - 17904u);
    st32((c.r[29].w[0] + 200u), 0u);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 5;
L_00390EBC:
    c.r[3].d[0] = ld16((c.r[18].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[19], c.r[29].w[0] + 218u);
    set32(c.r[23], c.r[29].w[0] + 164u);
    st16((c.r[29].w[0] + 216u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 2u));
    c.r[2].d[0] = c.r[2].d[0] | 65300ull;
    set32(c.r[8], c.r[28].w[0] - 26964u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[7], c.r[29].w[0] + 160u);
    st16((c.r[19].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 4u)));
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 216u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[3].w[0] - 20416u);
    set32(c.r[3], c.r[29].w[0] + 220u);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0])));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 6u)));
    set32(c.r[6], c.r[29].w[0] + 192u);
    set32(c.r[5], c.r[29].w[0] + 216u);
    set32(c.r[9], c.r[9].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[29].w[0] + 222u);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 8u));
    st32((c.r[29].w[0] + 160u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[18].w[0] + 10u));
    st32((c.r[23].w[0]), c.r[3].w[0]);
    set32(c.r[3], c.r[29].w[0] + 168u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[9].d[0] = ld16((c.r[18].w[0] + 12u));
    set32(c.r[3], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[9], c.r[3].w[0] + c.r[9].w[0]);
    set32(c.r[3], c.r[29].w[0] + 176u);
    st32((c.r[3].w[0]), c.r[9].w[0]);
    c.r[9].d[0] = ld16((c.r[18].w[0] + 14u));
    set32(c.r[3], ld32((c.r[23].w[0])));
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390F88u); st32((c.r[1].w[0] - 20368u), c.r[5].w[0]);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x00390F88u) [[unlikely]] return; }
L_00390F88:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00390EBCu | kUnwind; return; } goto L_00390EBC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[17], c.r[3].w[0] - 17872u);
    set32(c.r[3], c.r[20].w[0] << 2);
    set32(c.r[18], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[30], c.r[20].w[0] + 1u);
    mmi::paddub(c.r[21], c.r[0], c.r[0]);
    mmi::paddub(c.r[22], c.r[0], c.r[0]);
    c.budget -= 7;
L_00390FB4:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00390FF0; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 18u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x51EB0000u);
    c.r[3].d[0] = c.r[3].d[0] | 34079ull;
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] >> 31);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 65535ull;  if (t) { goto L_00391250; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_00390FF0:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_00391040; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 18u)));
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
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 65535ull;  if (t) { goto L_00391250; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_00391040:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != c.r[3].d[0];  if (t) { goto L_0039107C; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 18u)));
    set32(c.r[4], 0u + 100u);
    set32(c.r[3], 0u + 10u);
    mmi::div(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 13;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 65535ull;  if (t) { goto L_00391250; } }
L_0039107C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 72u)));
    c.r[1].d[0] = c.r[30].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], 0u + 3u);  if (t) { goto L_00391144; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[21].d[0] != c.r[3].d[0];  if (t) { goto L_003910DC; } }
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
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 65535ull;  if (t) { goto L_00391110; } }
L_003910DC:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 80u)));
    set32(c.r[4], 0u + 100u);
    set32(c.r[3], 0u + 10u);
    mmi::div(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 13;
L_00391110:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 80u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 24592u)));
    set32(c.r[4], 0u + 100u);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    st16((c.r[16].w[0] + 80u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 80u)));
    mmi::div(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 80u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_00391250; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 1;
L_00391144:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 6u);  if (t) { goto L_003911E0; } }
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != c.r[3].d[0];  if (t) { goto L_00391198; } }
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
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_003911D4; } }
L_00391198:
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
L_003911D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 65535ull;  if (t) { goto L_00391250; } }
    set32(c.r[3], 0u + 6u);
    c.budget -= 1;
L_003911E0:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != c.r[3].d[0];  if (t) { goto L_0039121C; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 74u)));
    set32(c.r[4], 0u + 100u);
    set32(c.r[3], 0u + 10u);
    mmi::div(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 13;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 65535ull;  if (t) { goto L_0039124C; } }
L_0039121C:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 76u)));
    set32(c.r[4], 0u + 100u);
    set32(c.r[3], 0u + 10u);
    mmi::div(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 12;
L_0039124C:
    c.budget -= 1;
L_00391250:
    c.r[1].d[0] = c.r[21].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00391278; } }
    c.r[4].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00391278; } }
    c.r[4].d[0] = c.r[22].d[0] & 65535ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[21], c.r[21].w[0] + 1u);  goto L_0039139C; }
    c.budget -= 1;
L_00391278:
    c.r[4].d[0] = ld16((c.r[17].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[5].d[0] = c.r[2].d[0] | 65300ull;
    c.r[1].d[0] = c.r[21].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.r[22].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[29].w[0] + 160u), c.r[4].w[0]);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 2u));
    st32((c.r[23].w[0]), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 168u);
    st32((c.r[2].w[0]), c.r[5].w[0]);
    c.r[4].d[0] = ld16((c.r[17].w[0] + 4u));
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[29].w[0] + 176u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.r[4].d[0] = ld16((c.r[17].w[0] + 6u));
    set32(c.r[2], ld32((c.r[23].w[0])));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[29].w[0] + 180u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    set32(c.r[2], c.r[29].w[0] + 184u);
    c.budget -= 23;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[2].w[0]), c.r[5].w[0]);  if (t) { goto L_00391318; } }
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    st16((c.r[29].w[0] + 216u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 88u);
    st16((c.r[19].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 216u)));
    set32(c.r[3], c.r[2].w[0] + 19u);
    set32(c.r[2], c.r[29].w[0] + 220u);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0])));
    set32(c.r[3], c.r[2].w[0] + 19u);
    set32(c.r[2], c.r[29].w[0] + 222u);
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00391358; } }
L_00391318:
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    st16((c.r[29].w[0] + 216u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 88u);
    st16((c.r[19].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 216u)));
    set32(c.r[3], c.r[2].w[0] + 19u);
    set32(c.r[2], c.r[29].w[0] + 220u);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0])));
    set32(c.r[3], c.r[2].w[0] + 19u);
    set32(c.r[2], c.r[29].w[0] + 222u);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 16;
L_00391358:
    set32(c.r[2], c.r[28].w[0] - 26964u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 160u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 192u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 216u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20368u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391394u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x00391394u) [[unlikely]] return; }
L_00391394:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 2;
L_0039139C:
    c.r[3].d[0] = c.r[21].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00390FB4u | kUnwind; return; } goto L_00390FB4; } }
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
L_003913E0:
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
    set32(c.r[2], 0u + 7u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[16], c.r[4].w[0] + 320u);
    st32((c.r[29].w[0] + 192u), 0u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[3], c.r[2].w[0] - 25284u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[18], c.r[2].w[0] - 17824u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    set32(c.r[2], 0u - c.r[3].w[0]);
    st32((c.r[29].w[0] + 196u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 200u), 0u);
    c.budget -= 39;
L_0039147C:
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
    set32(c.r[8], c.r[28].w[0] - 26960u);
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391548u); st32((c.r[1].w[0] - 20368u), c.r[5].w[0]);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x00391548u) [[unlikely]] return; }
L_00391548:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039147Cu | kUnwind; return; } goto L_0039147C; } }
    c.r[3].d[0] = c.r[19].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[19], c.r[16].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[18], c.r[3].w[0] - 17792u);
    mmi::paddub(c.r[21], c.r[0], c.r[0]);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 8;
L_00391578:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_003915B4; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 18u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x51EB0000u);
    c.r[3].d[0] = c.r[3].d[0] | 34079ull;
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] >> 31);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[3].d[0] & 65535ull;  if (t) { goto L_00391758; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_003915B4:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_00391604; } }
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
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[3].d[0] & 65535ull;  if (t) { goto L_00391758; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_00391604:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != c.r[3].d[0];  if (t) { goto L_00391640; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 18u)));
    set32(c.r[4], 0u + 100u);
    set32(c.r[3], 0u + 10u);
    mmi::div(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 13;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[3].d[0] & 65535ull;  if (t) { goto L_00391758; } }
L_00391640:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 72u)));
    c.r[1].d[0] = c.r[3].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u + 3u);  if (t) { goto L_003916DC; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[21].d[0] != c.r[3].d[0];  if (t) { goto L_0039168C; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 84u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x66660000u);
    c.r[3].d[0] = c.r[3].d[0] | 26215ull;
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] >> 31);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[3].d[0] & 65535ull;  if (t) { goto L_003916A8; } }
L_0039168C:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 84u)));
    set32(c.r[3], 0u + 10u);
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.r[6].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 7;
L_003916A8:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 84u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 24588u)));
    set32(c.r[3], 0u + 100u);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    st16((c.r[16].w[0] + 84u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 84u)));
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 84u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00391758; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 1;
L_003916DC:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != c.r[3].d[0];  if (t) { goto L_00391728; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 78u)));
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
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[3].d[0] & 65535ull;  if (t) { goto L_00391758; } }
L_00391728:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 78u)));
    set32(c.r[4], 0u + 100u);
    set32(c.r[3], 0u + 10u);
    mmi::div(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.r[6].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 12;
L_00391758:
    c.r[1].d[0] = c.r[21].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00391780; } }
    c.r[3].d[0] = c.r[6].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00391780; } }
    c.r[3].d[0] = c.r[17].d[0] & 65535ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[21], c.r[21].w[0] + 1u);  goto L_0039184C; }
    c.budget -= 1;
L_00391780:
    c.r[5].d[0] = ld16((c.r[18].w[0]));
    c.r[4].d[0] = c.r[6].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[29].w[0] + 160u), c.r[5].w[0]);
    set32(c.r[10], c.r[3].w[0] << 2);
    c.r[3].d[0] = ld16((c.r[18].w[0] + 2u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65300ull;
    set32(c.r[9], 0u + 88u);
    set32(c.r[8], c.r[28].w[0] - 26960u);
    st32((c.r[20].w[0]), c.r[3].w[0]);
    set32(c.r[3], c.r[29].w[0] + 168u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[12].d[0] = ld16((c.r[18].w[0] + 4u));
    set32(c.r[11], ld32((c.r[29].w[0] + 160u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[3].w[0] - 20416u);
    set32(c.r[3], c.r[29].w[0] + 176u);
    set32(c.r[11], c.r[11].w[0] + c.r[12].w[0]);
    st32((c.r[3].w[0]), c.r[11].w[0]);
    c.r[11].d[0] = ld16((c.r[18].w[0] + 6u));
    set32(c.r[3], ld32((c.r[20].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[7], c.r[29].w[0] + 160u);
    set32(c.r[6], c.r[29].w[0] + 192u);
    set32(c.r[11], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[3], c.r[29].w[0] + 180u);
    st32((c.r[3].w[0]), c.r[11].w[0]);
    set32(c.r[3], c.r[29].w[0] + 184u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    st16((c.r[29].w[0] + 216u), static_cast<std::uint16_t>(c.r[10].w[0]));
    st16((c.r[22].w[0]), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 216u)));
    set32(c.r[5], c.r[29].w[0] + 216u);
    c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[2], c.r[2].w[0] + 19u);
    st16((c.r[30].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0])));
    set32(c.r[2], c.r[2].w[0] + 19u);
    st16((c.r[23].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[1].w[0] - 20380u), c.r[8].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[7].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 50;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391848u); st32((c.r[1].w[0] - 20368u), c.r[5].w[0]);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x00391848u) [[unlikely]] return; }
L_00391848:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 1;
L_0039184C:
    c.r[3].d[0] = c.r[21].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00391578u | kUnwind; return; } goto L_00391578; } }
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
L_00391890:
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
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 11u)));
    set32(c.r[3], ld32((c.r[1].w[0] - 16716u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[5], c.r[2].w[0] + 26144u);
    set32(c.r[2], 0u + 3u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[6], c.r[7].w[0] << 5);
    st32((c.r[1].w[0] - 20364u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[6].w[0] << 8);
    set32(c.r[18], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[29].w[0] + 192u), 0u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[2], c.r[2].w[0] - 25284u);
    set32(c.r[16], c.r[29].w[0] + 164u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    set32(c.r[4], 0u + 231u);
    set32(c.r[3], 0u + 171u);
    set32(c.r[30], c.r[29].w[0] + 184u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[7].d[0] = c.r[2].d[0] | 65300ull;
    set32(c.r[2], 0u - c.r[5].w[0]);
    st32((c.r[29].w[0] + 196u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 160u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 200u), 0u);
    set32(c.r[2], c.r[29].w[0] + 168u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[2].w[0]), c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 160u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x55550000u);
    c.r[2].d[0] = c.r[2].d[0] | 21846ull;
    set32(c.r[17], c.r[29].w[0] + 218u);
    set32(c.r[23], c.r[29].w[0] + 220u);
    set32(c.r[4], c.r[3].w[0] + 64u);
    set32(c.r[3], c.r[29].w[0] + 176u);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[6], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[5], c.r[3].w[0] - 17744u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], c.r[3].w[0] - 17742u);
    set32(c.r[6], c.r[6].w[0] + 16u);
    set32(c.r[3], c.r[29].w[0] + 180u);
    st32((c.r[3].w[0]), c.r[6].w[0]);
    st32((c.r[30].w[0]), c.r[7].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8434u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[6].d[0] = ld8((c.r[18].w[0] + 531u));
    set32(c.r[11], c.r[3].w[0] - 17740u);
    set32(c.r[22], c.r[29].w[0] + 222u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[7].w[0]);
    set32(c.r[8], c.r[7].w[0] >> 31);
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[3].w[0] + c.r[6].w[0]);
    c.r[7].d[0] = c.hi.d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[10], c.r[3].w[0] - 17738u);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[7].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[6].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].d[0] = ld16((c.r[5].w[0]));
    set32(c.r[9], 0u + 6u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[8], c.r[28].w[0] - 26956u);
    st16((c.r[29].w[0] + 216u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8434u)));
    c.r[5].d[0] = ld8((c.r[18].w[0] + 531u));
    set32(c.r[7], c.r[29].w[0] + 160u);
    set32(c.r[6], c.r[29].w[0] + 192u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    set32(c.r[14], c.r[3].w[0] >> 31);
    c.r[13].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[12], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[13], c.r[13].w[0] + c.r[14].w[0]);
    set32(c.r[12], c.r[13].w[0] + c.r[12].w[0]);
    set32(c.r[12], c.r[12].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] + c.r[12].w[0]);
    c.r[12].d[0] = ld16((c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[5], c.r[29].w[0] + 216u);
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[12].w[0]));
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8434u)));
    c.r[13].d[0] = ld8((c.r[18].w[0] + 531u));
    set32(c.r[4], c.r[3].w[0] - 20416u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 216u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[12].w[0]);
    set32(c.r[14], c.r[12].w[0] >> 31);
    set32(c.r[12], c.r[13].w[0] << 2);
    set32(c.r[12], c.r[12].w[0] + c.r[13].w[0]);
    c.r[13].d[0] = c.hi.d[0];
    set32(c.r[13], c.r[13].w[0] + c.r[14].w[0]);
    set32(c.r[12], c.r[13].w[0] + c.r[12].w[0]);
    set32(c.r[12], c.r[12].w[0] << 3);
    set32(c.r[11], c.r[11].w[0] + c.r[12].w[0]);
    c.r[11].sd[0] = static_cast<std::int16_t>(ld16((c.r[11].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[11].w[0]);
    st16((c.r[23].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8434u)));
    c.r[11].d[0] = ld8((c.r[18].w[0] + 531u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    mmi::mult(c, 0, c.r[2].w[0], c.r[12].w[0]);
    set32(c.r[2], c.r[11].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[11].w[0]);
    c.r[11].d[0] = c.hi.d[0];
    set32(c.r[12], c.r[12].w[0] >> 31);
    set32(c.r[11], c.r[11].w[0] + c.r[12].w[0]);
    set32(c.r[2], c.r[11].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[10].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st16((c.r[22].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[8].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[7].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 145;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391AD4u); st32((c.r[1].w[0] - 20368u), c.r[5].w[0]);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x00391AD4u) [[unlikely]] return; }
L_00391AD4:
    set32(c.r[2], 0u + 7u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8434u)));
    set32(c.r[3], c.r[2].w[0] - 17584u);
    c.r[2].d[0] = ld8((c.r[18].w[0] + 531u));
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[20].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 14;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_00391C10; } }
    c.r[1].d[0] = 0ll < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[19], c.r[0], c.r[0]);  if (t) { goto L_00391C10; } }
    mmi::paddub(c.r[21], c.r[0], c.r[0]);
    c.budget -= 1;
L_00391B1C:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 531u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] - 17664u);
    set32(c.r[4], 0u + 171u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[20].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    set32(c.r[3], 0u + 172u);
    set32(c.r[10], 0u + 160u);
    set32(c.r[9], 0u + 48u);
    st32((c.r[29].w[0] + 160u), c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[18].w[0] + 531u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65300ull;
    set32(c.r[8], c.r[28].w[0] - 26956u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    if (c.r[5].d[0] != 0) c.r[4].d[0] = c.r[3].d[0];
    set32(c.r[3], c.r[29].w[0] + 168u);
    st32((c.r[16].w[0]), c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[11], ld32((c.r[29].w[0] + 160u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[3].w[0] - 20416u);
    set32(c.r[3], c.r[29].w[0] + 176u);
    set32(c.r[11], c.r[11].w[0] + 15u);
    st32((c.r[3].w[0]), c.r[11].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[7], c.r[29].w[0] + 160u);
    set32(c.r[6], c.r[29].w[0] + 192u);
    set32(c.r[5], c.r[29].w[0] + 216u);
    set32(c.r[11], c.r[3].w[0] + 7u);
    set32(c.r[3], c.r[29].w[0] + 180u);
    st32((c.r[3].w[0]), c.r[11].w[0]);
    st32((c.r[30].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[18].w[0] + 531u));
    if (c.r[2].d[0] != 0) c.r[10].d[0] = 0ull;
    st16((c.r[29].w[0] + 216u), static_cast<std::uint16_t>(c.r[10].w[0]));
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 216u)));
    set32(c.r[2], c.r[2].w[0] + 15u);
    st16((c.r[23].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + 15u);
    st16((c.r[22].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[1].w[0] - 20380u), c.r[8].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[7].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 57;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391C00u); st32((c.r[1].w[0] - 20368u), c.r[5].w[0]);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x00391C00u) [[unlikely]] return; }
L_00391C00:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[21], c.r[21].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00391B1Cu | kUnwind; return; } goto L_00391B1C; } }
L_00391C10:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8434u)));
    set32(c.r[3], c.r[2].w[0] - 17582u);
    c.r[2].d[0] = ld8((c.r[18].w[0] + 531u));
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[20].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 11;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_00391D18; } }
    c.r[1].d[0] = 0ll < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[21], c.r[0], c.r[0]);  if (t) { goto L_00391D18; } }
    set32(c.r[2], c.r[20].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[3], c.r[2].w[0] << 1);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] - 17616u);
    set32(c.r[19], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
L_00391C60:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[3], 0u + 176u);
    c.r[2].d[0] = c.r[2].d[0] | 65300ull;
    set32(c.r[10], 0u + 48u);
    st32((c.r[29].w[0] + 160u), c.r[4].w[0]);
    set32(c.r[4], c.r[29].w[0] + 168u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[9], c.r[28].w[0] - 26956u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[8], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[4].w[0] + 15u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[7], c.r[29].w[0] + 192u);
    set32(c.r[6], c.r[29].w[0] + 216u);
    set32(c.r[11], c.r[5].w[0] + 7u);
    set32(c.r[5], c.r[29].w[0] + 180u);
    st32((c.r[5].w[0]), c.r[11].w[0]);
    st32((c.r[30].w[0]), c.r[2].w[0]);
    st16((c.r[29].w[0] + 216u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[10].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 216u)));
    set32(c.r[4], c.r[4].w[0] - 20416u);
    set32(c.r[2], c.r[2].w[0] + 15u);
    st16((c.r[23].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + 15u);
    st16((c.r[22].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[1].w[0] - 20380u), c.r[9].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[8].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), c.r[7].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 41;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391D04u); st32((c.r[1].w[0] - 20368u), c.r[6].w[0]);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x00391D04u) [[unlikely]] return; }
L_00391D04:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[2].d[0] = c.r[21].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00391C60u | kUnwind; return; } goto L_00391C60; } }
    c.budget -= 1;
L_00391D18:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 16720u)));
    set32(c.r[2], 0u + 170u);
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[2], 0u + 174u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[3].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[4].d[0] = c.r[2].d[0] | 65300ull;
    set32(c.r[2], c.r[29].w[0] + 168u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[3], c.r[2].w[0] + 64u);
    set32(c.r[2], c.r[29].w[0] + 176u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], c.r[2].w[0] + 10u);
    set32(c.r[2], c.r[29].w[0] + 180u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    st32((c.r[30].w[0]), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8434u)));
    c.budget -= 24;
    { const bool t = c.r[3].sd[0] >= 0; c.r[2].d[0] = c.r[3].d[0] & 3ull;  if (t) { goto L_00391D84; } }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[2].w[0] << 6);  goto L_00391D88; }
    set32(c.r[2], c.r[2].w[0] - 4u);
    c.budget -= 1;
L_00391D84:
    set32(c.r[2], c.r[2].w[0] << 6);
    c.budget -= 1;
L_00391D88:
    set32(c.r[2], c.r[2].w[0] + 256u);
    st16((c.r[29].w[0] + 216u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8434u)));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));  if (t) { goto L_00391DA4; } }
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_00391DA4:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 216u)));
    set32(c.r[7], c.r[28].w[0] - 26956u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[6], c.r[29].w[0] + 160u);
    set32(c.r[2], c.r[2].w[0] + 63u);
    st16((c.r[23].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] - 20416u);
    set32(c.r[5], c.r[29].w[0] + 192u);
    set32(c.r[2], c.r[8].w[0] + 19u);
    st16((c.r[22].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[1].w[0] - 20380u), c.r[7].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), c.r[5].w[0]);
    set32(c.r[3], c.r[29].w[0] + 216u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391E08u); st32((c.r[1].w[0] - 20368u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x00391E08u) [[unlikely]] return; }
L_00391E08:
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
L_00391E40:
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
    set32(c.r[5], ld32((c.r[1].w[0] - 16720u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 11u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[3], c.r[2].w[0] + 26144u);
    set32(c.r[2], 0u + 3u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[2].w[0]);
    set32(c.r[2], c.r[6].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] << 8);
    set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 7u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[29].w[0] + 192u), 0u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[2], c.r[2].w[0] - 25284u);
    set32(c.r[3], 0u + 88u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[17], c.r[29].w[0] + 218u);
    set32(c.r[20], c.r[29].w[0] + 220u);
    st16((c.r[29].w[0] + 216u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], 0u - c.r[4].w[0]);
    st32((c.r[29].w[0] + 196u), c.r[3].w[0]);
    st32((c.r[1].w[0] - 20364u), c.r[5].w[0]);
    set32(c.r[2], 0u + 152u);
    st32((c.r[29].w[0] + 200u), 0u);
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 216u)));
    set32(c.r[21], c.r[29].w[0] + 222u);
    set32(c.r[4], 0u + 30u);
    set32(c.r[3], 0u + 194u);
    set32(c.r[2], c.r[2].w[0] + 151u);
    st16((c.r[20].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[18], c.r[29].w[0] + 164u);
    set32(c.r[30], c.r[29].w[0] + 168u);
    set32(c.r[5], c.r[5].w[0] + 23u);
    st16((c.r[21].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    st32((c.r[29].w[0] + 160u), c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 65300ull;
    st32((c.r[18].w[0]), c.r[3].w[0]);
    st32((c.r[30].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[23], c.r[29].w[0] + 176u);
    set32(c.r[22], c.r[29].w[0] + 180u);
    set32(c.r[19], c.r[29].w[0] + 184u);
    set32(c.r[3], c.r[3].w[0] + 152u);
    st32((c.r[23].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[9], ld32((c.r[18].w[0])));
    set32(c.r[4], c.r[3].w[0] - 20416u);
    set32(c.r[8], c.r[28].w[0] - 26948u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], c.r[9].w[0] + 12u);
    st32((c.r[22].w[0]), c.r[3].w[0]);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    st32((c.r[1].w[0] - 20380u), c.r[8].w[0]);
    set32(c.r[7], c.r[29].w[0] + 160u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[7].w[0]);
    set32(c.r[6], c.r[29].w[0] + 192u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), c.r[6].w[0]);
    set32(c.r[5], c.r[29].w[0] + 216u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 88;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391FA0u); st32((c.r[1].w[0] - 20368u), c.r[5].w[0]);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x00391FA0u) [[unlikely]] return; }
L_00391FA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] - 17424u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 192u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), c.r[2].w[0]);
    set32(c.r[2], c.r[28].w[0] - 26952u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20376u), c.r[2].w[0]);
    set32(c.r[2], c.r[28].w[0] - 26944u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] - 20416u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391FE4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00A4(c, 121u, depth + 1u); else { c.pc = 0x00392F10u; return; } if (c.pc != 0x00391FE4u) [[unlikely]] return; }
L_00391FE4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 16716u)));
    set32(c.r[2], 0u + 262u);
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[2], 0u + 191u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[3].w[0]);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[4].d[0] = c.r[2].d[0] | 65300ull;
    st32((c.r[30].w[0]), c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[10], c.r[2].w[0] - 17464u);
    set32(c.r[3], ld32((c.r[29].w[0] + 160u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[9], c.r[2].w[0] - 17462u);
    set32(c.r[8], 0u + 2u);
    set32(c.r[2], c.r[3].w[0] + 32u);
    st32((c.r[23].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[7], c.r[28].w[0] - 26948u);
    set32(c.r[6], c.r[29].w[0] + 160u);
    set32(c.r[2], c.r[2].w[0] + 16u);
    st32((c.r[22].w[0]), c.r[2].w[0]);
    st32((c.r[19].w[0]), c.r[4].w[0]);
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8435u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] - 20416u);
    set32(c.r[5], c.r[29].w[0] + 192u);
    set32(c.r[2], c.r[11].w[0] << 2);
    set32(c.r[2], c.r[10].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    set32(c.r[3], c.r[29].w[0] + 216u);
    st16((c.r[29].w[0] + 216u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8435u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[9].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 216u)));
    set32(c.r[2], c.r[2].w[0] + 31u);
    st16((c.r[20].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + 31u);
    st16((c.r[21].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[7].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 56;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003920C4u); st32((c.r[1].w[0] - 20368u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x003920C4u) [[unlikely]] return; }
L_003920C4:
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
L_00392100:
    set32(c.r[29], c.r[29].w[0] - 320u);
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
    set32(c.r[2], 0u + 320u);
    st32((c.r[29].w[0] + 288u), c.r[2].w[0]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[3], c.r[2].w[0] - 25284u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] - 17376u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[2], 0u + 33u);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[2], 0u + 256u);
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    set32(c.r[30], 0u + 61u);
    set32(c.r[2], 0u - c.r[3].w[0]);
    st32((c.r[29].w[0] + 292u), c.r[2].w[0]);
    set32(c.r[2], 0u + 19u);
    st32((c.r[29].w[0] + 224u), c.r[2].w[0]);
    set32(c.r[2], 0u + 53u);
    set32(c.r[23], 0u + 62u);
    mmi::paddub(c.r[20], c.r[0], c.r[0]);
    st32((c.r[29].w[0] + 296u), 0u);
    st32((c.r[29].w[0] + 208u), 0u);
    st32((c.r[29].w[0] + 240u), c.r[2].w[0]);
    c.budget -= 41;
L_003921A4:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[6], c.r[2].w[0] + 26144u);
    set32(c.r[2], 0u + 5u);
    set32(c.r[3], c.r[3].w[0] + c.r[20].w[0]);
    c.r[7].d[0] = ld8((c.r[3].w[0] + 376u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 288u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], c.r[28].w[0] - 26940u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    set32(c.r[2], c.r[7].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] << 8);
    st32((c.r[1].w[0] - 20392u), c.r[4].w[0]);
    set32(c.r[19], c.r[6].w[0] + c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20376u), c.r[3].w[0]);
    set32(c.r[2], c.r[28].w[0] - 26936u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039221Cu); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_00A4(c, 121u, depth + 1u); else { c.pc = 0x00392F10u; return; } if (c.pc != 0x0039221Cu) [[unlikely]] return; }
L_0039221C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 16712u)));
    set32(c.r[2], 0u + 6u);
    mmi::paddub(c.r[21], c.r[0], c.r[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 9;
L_00392240:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != 0ull;  if (t) { goto L_00392288; } }
    c.r[5].d[0] = ld8((c.r[19].w[0] + 531u));
    set32(c.r[2], 0u + 64u);
    mmi::paddub(c.r[3], c.r[0], c.r[0]);
    set32(c.r[4], 0u + 40u);
    if (c.r[5].d[0] != 0) c.r[3].d[0] = c.r[2].d[0];
    st16((c.r[29].w[0] + 312u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[5].d[0] = ld8((c.r[19].w[0] + 531u));
    set32(c.r[2], 0u + 215u);
    set32(c.r[3], 0u + 104u);
    st32((c.r[29].w[0] + 256u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 256u)));
    if (c.r[5].d[0] != 0) c.r[4].d[0] = c.r[3].d[0];
    st16((c.r[29].w[0] + 316u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[2], c.r[2].w[0] + 40u);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 272u), c.r[2].w[0]);  if (t) { goto L_003922C8; } }
L_00392288:
    c.r[5].d[0] = ld8((c.r[19].w[0] + 531u));
    set32(c.r[3], 0u + 39u);
    set32(c.r[2], 0u + 103u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    if (c.r[5].d[0] != 0) c.r[3].d[0] = c.r[2].d[0];
    st16((c.r[29].w[0] + 312u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[5].d[0] = ld8((c.r[19].w[0] + 531u));
    set32(c.r[2], 0u + 255u);
    set32(c.r[3], 0u + 64u);
    st32((c.r[29].w[0] + 256u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 256u)));
    if (c.r[5].d[0] != 0) c.r[4].d[0] = c.r[3].d[0];
    st16((c.r[29].w[0] + 316u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[2], c.r[2].w[0] + 40u);
    st32((c.r[29].w[0] + 272u), c.r[2].w[0]);
    c.budget -= 16;
L_003922C8:
    set32(c.r[16], c.r[29].w[0] + 314u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(0u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[7], c.r[2].w[0] + 20260u);
    set32(c.r[2], c.r[29].w[0] + 318u);
    set32(c.r[3], c.r[3].w[0] + 80u);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[17], c.r[29].w[0] + 260u);
    set32(c.r[22], c.r[29].w[0] + 276u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[8], ld32((c.r[17].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] - 20416u);
    set32(c.r[6], c.r[29].w[0] + 256u);
    set32(c.r[2], c.r[8].w[0] + 40u);
    st32((c.r[22].w[0]), c.r[2].w[0]);
    st32((c.r[1].w[0] - 20380u), c.r[7].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[6].w[0]);
    set32(c.r[5], c.r[29].w[0] + 288u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), c.r[5].w[0]);
    set32(c.r[3], c.r[29].w[0] + 312u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039233Cu); st32((c.r[1].w[0] - 20368u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x0039233Cu) [[unlikely]] return; }
L_0039233C:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[2].d[0] = c.r[21].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00392240u | kUnwind; return; } goto L_00392240; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 16720u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], 0u + 6u);
    set32(c.r[19], c.r[2].w[0] - 17408u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    mmi::paddub(c.r[21], c.r[0], c.r[0]);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 11;
L_00392378:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != 0ull;  if (t) { goto L_0039238C; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_00392394; } }
L_0039238C:
    c.r[2].d[0] = ld16((c.r[19].w[0]));
    c.budget -= 2;
L_00392394:
    st16((c.r[29].w[0] + 312u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[19].w[0] + 2u));
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 312u)));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[29].w[0] + 316u);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 6u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 318u);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld16((c.r[19].w[0] + 8u));
    c.budget -= 16;
    { const bool t = c.r[20].d[0] != 0ull; st32((c.r[29].w[0] + 256u), c.r[2].w[0]);  if (t) { goto L_003923E0; } }
    c.r[2].d[0] = ld16((c.r[19].w[0] + 10u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_003923F0; } }
L_003923E0:
    c.r[3].d[0] = ld16((c.r[19].w[0] + 10u));
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 4;
L_003923F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[10].d[0] = c.r[2].d[0] | 65300ull;
    st32((c.r[29].w[0] + 264u), c.r[10].w[0]);
    c.r[3].d[0] = ld16((c.r[19].w[0] + 12u));
    set32(c.r[2], ld32((c.r[29].w[0] + 256u)));
    set32(c.r[7], c.r[28].w[0] - 26932u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[6], c.r[29].w[0] + 256u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[29].w[0] + 272u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[9].d[0] = ld16((c.r[19].w[0] + 14u));
    set32(c.r[8], ld32((c.r[17].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] - 20416u);
    set32(c.r[5], c.r[29].w[0] + 288u);
    set32(c.r[2], c.r[8].w[0] + c.r[9].w[0]);
    st32((c.r[22].w[0]), c.r[2].w[0]);
    st32((c.r[1].w[0] - 20380u), c.r[7].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), c.r[5].w[0]);
    set32(c.r[3], c.r[29].w[0] + 312u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[29].w[0] + 280u), c.r[10].w[0]);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392460u); st32((c.r[1].w[0] - 20368u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x00392460u) [[unlikely]] return; }
L_00392460:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[2].d[0] = c.r[21].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00392378u | kUnwind; return; } goto L_00392378; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26276u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], 0u + 1u);
    st16((c.r[29].w[0] + 312u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[1].w[0] - 20364u), c.r[4].w[0]);
    set32(c.r[4], c.r[2].w[0] + c.r[20].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 376u));
    mmi::paddub(c.r[19], c.r[0], c.r[0]);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].d[0] = ld8((c.r[4].w[0] + 376u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 312u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 368u)));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] - 1u);
    set32(c.r[2], c.r[29].w[0] + 316u);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[3], c.r[2].w[0] + 22u);
    set32(c.r[2], c.r[29].w[0] + 318u);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 30;
L_003924E8:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_00392594; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], 0u + 122u);
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    st32((c.r[29].w[0] + 256u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 256u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[6], c.r[20].w[0] + c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[6].w[0] + 376u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 368u)));
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[29].w[0] + 272u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    st32((c.r[17].w[0]), c.r[30].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + 10u);
    st32((c.r[22].w[0]), c.r[2].w[0]);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10u)));
    c.r[3].d[0] = ld8((c.r[6].w[0] + 376u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 27;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00392580; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 166u)));
    c.r[1].d[0] = c.r[2].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00392580; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[2], c.r[2].w[0] + 20256u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);  if (t) { goto L_00392600; } }
L_00392580:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[2], c.r[2].w[0] + 20200u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);  if (t) { goto L_00392600; } }
L_00392594:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 123u);
    set32(c.r[6], ld32((c.r[28].w[0] - 26304u)));
    st32((c.r[29].w[0] + 256u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[29].w[0] + 256u)));
    set32(c.r[4], 0u + 4u);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    c.r[7].d[0] = ld8((c.r[2].w[0] + 376u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[3], c.r[2].w[0] + 20204u);
    set32(c.r[2], c.r[6].w[0] + c.r[7].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 368u)));
    set32(c.r[2], c.r[6].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 272u);
    st32((c.r[2].w[0]), c.r[5].w[0]);
    st32((c.r[17].w[0]), c.r[23].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + 10u);
    st32((c.r[22].w[0]), c.r[2].w[0]);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[3].w[0]);
    c.budget -= 27;
L_00392600:
    set32(c.r[2], c.r[19].w[0] + 9u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[29].w[0] + 256u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 312u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20368u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392630u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x00392630u) [[unlikely]] return; }
L_00392630:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003924E8u | kUnwind; return; } goto L_003924E8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 19376u);
    set32(c.r[3], c.r[3].w[0] + c.r[20].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 400u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392668u); set32(c.r[5], c.r[20].w[0] + 16u);  if (depth < kMaxDepth) unit_001B(c, 175u, depth + 1u); else { c.pc = 0x0016F030u; return; } if (c.pc != 0x00392668u) [[unlikely]] return; }
L_00392668:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], 0u + 7u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[3].w[0] + c.r[20].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 400u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 19376u);
    set32(c.r[4], 0u + 16u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[8], ld32((c.r[2].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[7], 0u + 169u);
    set32(c.r[6], c.r[28].w[0] - 26928u);
    st32((c.r[1].w[0] - 20364u), c.r[8].w[0]);
    st16((c.r[29].w[0] + 312u), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[4], c.r[2].w[0] - 20416u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 312u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[5], c.r[29].w[0] + 256u);
    set32(c.r[3], c.r[29].w[0] + 312u);
    set32(c.r[8], c.r[2].w[0] + 128u);
    set32(c.r[2], c.r[29].w[0] + 316u);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[8], c.r[2].w[0] + 112u);
    set32(c.r[2], c.r[29].w[0] + 318u);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[8].w[0]));
    st32((c.r[29].w[0] + 256u), c.r[7].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 256u)));
    set32(c.r[7], c.r[2].w[0] + 128u);
    set32(c.r[2], c.r[29].w[0] + 272u);
    st32((c.r[2].w[0]), c.r[7].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 224u)));
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + 56u);
    st32((c.r[22].w[0]), c.r[2].w[0]);
    st32((c.r[1].w[0] - 20380u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 50;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392730u); st32((c.r[1].w[0] - 20368u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x00392730u) [[unlikely]] return; }
L_00392730:
    st16((c.r[29].w[0] + 312u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 312u)));
    set32(c.r[8], 0u + 122u);
    set32(c.r[7], 0u + 8u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], c.r[2].w[0] + 128u);
    set32(c.r[2], c.r[29].w[0] + 316u);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] - 20416u);
    set32(c.r[2], c.r[29].w[0] + 318u);
    set32(c.r[9], c.r[9].w[0] + 16u);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[9].w[0]));
    st32((c.r[29].w[0] + 256u), c.r[8].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 256u)));
    set32(c.r[6], c.r[28].w[0] - 26932u);
    set32(c.r[5], c.r[29].w[0] + 256u);
    set32(c.r[3], c.r[29].w[0] + 312u);
    set32(c.r[8], c.r[2].w[0] + 128u);
    set32(c.r[2], c.r[29].w[0] + 272u);
    st32((c.r[2].w[0]), c.r[8].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 240u)));
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + 8u);
    st32((c.r[22].w[0]), c.r[2].w[0]);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 36;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003927C0u); st32((c.r[1].w[0] - 20368u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x003927C0u) [[unlikely]] return; }
L_003927C0:
    set32(c.r[3], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[30], c.r[30].w[0] + 44u);
    set32(c.r[3], c.r[3].w[0] + 16u);
    st32((c.r[29].w[0] + 160u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[3], c.r[3].w[0] + 44u);
    st32((c.r[29].w[0] + 176u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[3], c.r[3].w[0] + 48u);
    st32((c.r[29].w[0] + 192u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[3], c.r[3].w[0] + 44u);
    st32((c.r[29].w[0] + 208u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 224u)));
    set32(c.r[3], c.r[3].w[0] + 44u);
    st32((c.r[29].w[0] + 224u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 240u)));
    set32(c.r[3], c.r[3].w[0] + 44u);
    st32((c.r[29].w[0] + 240u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[20].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 23;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[23], c.r[23].w[0] + 44u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003921A4u | kUnwind; return; } goto L_003921A4; } }
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 320u);  c.pc = t; return; }
L_00392850:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], 0u + 12u);  if (t) { goto L_00392878; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 14u);  if (t) { goto L_00392878; } }
    set32(c.r[16], 0u + 12u);
    c.budget -= 1;
L_00392878:
    st32((c.r[29].w[0] + 32u), 0u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[2], c.r[2].w[0] - 25284u);
    c.f[0] = ld32((c.r[4].w[0] + 36u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003928A4u); c.f[12] = fp::sub(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x003928A4u) [[unlikely]] return; }
L_003928A4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    set32(c.r[6], ld32((c.r[1].w[0] - 16720u)));
    st32((c.r[29].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[4], 0u + 3u);
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 7u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] - 17312u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] - 17088u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20376u), c.r[2].w[0]);
    set32(c.r[2], c.r[28].w[0] - 26924u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] - 20416u);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.budget -= 33;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392928u); st32((c.r[29].w[0] + 40u), 0u);  if (depth < kMaxDepth) unit_00A4(c, 121u, depth + 1u); else { c.pc = 0x00392F10u; return; } if (c.pc != 0x00392928u) [[unlikely]] return; }
L_00392928:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00392940:
    set32(c.r[29], c.r[29].w[0] - 208u);
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
    set32(c.r[9], ld32((c.r[1].w[0] - 16720u)));
    mmi::paddub(c.r[21], c.r[4], c.r[0]);
    set32(c.r[8], 0u + 3u);
    set32(c.r[7], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[3].d[0] = ld16((c.r[1].w[0] - 17024u));
    set32(c.r[6], 0u + 13u);
    set32(c.r[17], c.r[29].w[0] + 198u);
    set32(c.r[18], c.r[29].w[0] + 164u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[2].d[0] = ld16((c.r[1].w[0] - 17022u));
    st16((c.r[29].w[0] + 196u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65300ull;
    st32((c.r[29].w[0] + 168u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 184u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[9].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[8].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 17020u)));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 196u)));
    set32(c.r[6], 0u + 32u);
    set32(c.r[3], 0u + 352u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[7], c.r[7].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 200u);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 17018u)));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[30], c.r[29].w[0] + 176u);
    set32(c.r[2], c.r[29].w[0] + 202u);
    set32(c.r[7], c.r[8].w[0] + c.r[7].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 11u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[2].d[0] = ld16((c.r[1].w[0] - 17014u));
    set32(c.r[23], c.r[29].w[0] + 180u);
    set32(c.r[16], c.r[21].w[0] + 320u);
    if (c.r[7].d[0] != 0) c.r[6].d[0] = c.r[3].d[0];
    st32((c.r[29].w[0] + 160u), c.r[6].w[0]);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[3].d[0] = ld16((c.r[1].w[0] - 17012u));
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[30].w[0]), c.r[2].w[0]);
    c.r[3].d[0] = ld16((c.r[1].w[0] - 17010u));
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[23].w[0]), c.r[2].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 320u));
    c.budget -= 77;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392A74u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x00392A74u) [[unlikely]] return; }
L_00392A74:
    st8((c.r[29].w[0] + 204u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392A8Cu); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x00392A8Cu) [[unlikely]] return; }
L_00392A8C:
    set32(c.r[22], c.r[29].w[0] + 205u);
    st8((c.r[22].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392AA8u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x00392AA8u) [[unlikely]] return; }
L_00392AA8:
    set32(c.r[19], c.r[29].w[0] + 206u);
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392AC4u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x00392AC4u) [[unlikely]] return; }
L_00392AC4:
    set32(c.r[20], c.r[29].w[0] + 207u);
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[29].w[0] + 204u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 160u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 196u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20368u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392AFCu); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x00392AFCu) [[unlikely]] return; }
L_00392AFC:
    set32(c.r[7], ld32((c.r[28].w[0] - 26304u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 11u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 386u)));
    c.budget -= 7;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_00392C38; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[7].d[0] = ld16((c.r[1].w[0] - 17008u));
    set32(c.r[6], 0u + 128u);
    set32(c.r[3], 0u + 448u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[2].d[0] = ld16((c.r[1].w[0] - 17006u));
    st16((c.r[29].w[0] + 196u), static_cast<std::uint16_t>(c.r[7].w[0]));
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 17004u)));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 196u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[2], c.r[29].w[0] + 200u);
    set32(c.r[7], c.r[8].w[0] + c.r[7].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 17002u)));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[7], c.r[7].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 202u);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 11u)));
    c.r[2].d[0] = ld16((c.r[1].w[0] - 16998u));
    if (c.r[7].d[0] != 0) c.r[6].d[0] = c.r[3].d[0];
    st32((c.r[29].w[0] + 160u), c.r[6].w[0]);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[3].d[0] = ld16((c.r[1].w[0] - 16996u));
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[30].w[0]), c.r[2].w[0]);
    c.r[3].d[0] = ld16((c.r[1].w[0] - 16994u));
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[23].w[0]), c.r[2].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.budget -= 41;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392BBCu); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x00392BBCu) [[unlikely]] return; }
L_00392BBC:
    st8((c.r[29].w[0] + 204u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392BD4u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x00392BD4u) [[unlikely]] return; }
L_00392BD4:
    st8((c.r[22].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392BECu); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x00392BECu) [[unlikely]] return; }
L_00392BEC:
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392C04u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x00392C04u) [[unlikely]] return; }
L_00392C04:
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[29].w[0] + 204u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 160u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 196u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20368u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392C38u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x00392C38u) [[unlikely]] return; }
L_00392C38:
    set32(c.r[7], ld32((c.r[28].w[0] - 26304u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 11u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[7], c.r[6].w[0] + c.r[7].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 386u)));
    c.budget -= 7;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_00392D64; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 392u)));
    c.r[1].d[0] = c.r[3].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00392D64; } }
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + 256u);
    st16((c.r[29].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 160u);
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 196u)));
    set32(c.r[7], 0u + 148u);
    set32(c.r[6], 0u + 468u);
    set32(c.r[3], 0u + 112u);
    set32(c.r[8], c.r[2].w[0] + 23u);
    set32(c.r[2], c.r[29].w[0] + 200u);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[2], c.r[29].w[0] + 202u);
    set32(c.r[8], c.r[8].w[0] + 31u);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 11u)));
    if (c.r[2].d[0] != 0) c.r[7].d[0] = c.r[6].d[0];
    st32((c.r[29].w[0] + 160u), c.r[7].w[0]);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[2], c.r[2].w[0] + 24u);
    st32((c.r[30].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] + 16u);
    st32((c.r[23].w[0]), c.r[2].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    c.budget -= 33;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392CE8u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x00392CE8u) [[unlikely]] return; }
L_00392CE8:
    st8((c.r[29].w[0] + 204u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392D00u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x00392D00u) [[unlikely]] return; }
L_00392D00:
    st8((c.r[22].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392D18u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x00392D18u) [[unlikely]] return; }
L_00392D18:
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392D30u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x00392D30u) [[unlikely]] return; }
L_00392D30:
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[29].w[0] + 204u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 160u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 196u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20368u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392D64u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x00392D64u) [[unlikely]] return; }
L_00392D64:
    set32(c.r[6], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 11u)));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 386u)));
    c.r[3].d[0] = c.r[6].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00392EE0; } }
    set32(c.r[2], c.r[6].w[0] - 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], c.r[3].w[0] - 17024u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[6].d[0] = ld16((c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], c.r[3].w[0] - 17022u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st16((c.r[29].w[0] + 196u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld16((c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], c.r[3].w[0] - 17020u);
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 196u)));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], c.r[3].w[0] - 17018u);
    set32(c.r[6], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[7], c.r[8].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[29].w[0] + 200u);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    set32(c.r[8], 0u + 32u);
    set32(c.r[7], 0u + 352u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[9], c.r[9].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[29].w[0] + 202u);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 11u)));
    set32(c.r[3], c.r[6].w[0] - 17014u);
    set32(c.r[6], c.r[3].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    if (c.r[9].d[0] != 0) c.r[8].d[0] = c.r[7].d[0];
    st32((c.r[29].w[0] + 160u), c.r[8].w[0]);
    c.r[7].d[0] = ld16((c.r[6].w[0]));
    set32(c.r[3], c.r[3].w[0] - 17012u);
    set32(c.r[6], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[18].w[0]), c.r[7].w[0]);
    c.r[7].d[0] = ld16((c.r[6].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], c.r[3].w[0] - 17010u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    set32(c.r[6], ld32((c.r[29].w[0] + 160u)));
    c.f[1] = c.r[2].w[0];
    set32(c.r[2], c.r[6].w[0] + c.r[7].w[0]);
    st32((c.r[30].w[0]), c.r[2].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[23].w[0]), c.r[2].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    c.budget -= 57;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392E64u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x00392E64u) [[unlikely]] return; }
L_00392E64:
    st8((c.r[29].w[0] + 204u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392E7Cu); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x00392E7Cu) [[unlikely]] return; }
L_00392E7C:
    st8((c.r[22].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392E94u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x00392E94u) [[unlikely]] return; }
L_00392E94:
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392EACu); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x00392EACu) [[unlikely]] return; }
L_00392EAC:
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[29].w[0] + 204u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 160u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 196u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20368u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392EE0u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x00392EE0u) [[unlikely]] return; }
L_00392EE0:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_00392F10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { goto L_00392F58; } }
L_00392F2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392F34u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_001B(c, 207u, depth + 1u); else { c.pc = 0x0016FA40u; return; } if (c.pc != 0x00392F34u) [[unlikely]] return; }
L_00392F34:
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[16], c.r[16].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 16u);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 8;
    { const bool t = c.r[16].d[0] != 0ull; st32((c.r[17].w[0] + 40u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00392F2Cu | kUnwind; return; } goto L_00392F2C; } }
    c.budget -= 1;
L_00392F58:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00392F70:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 11u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[3], c.r[3].w[0] + 26144u);
    mmi::paddub(c.r[8], c.r[0], c.r[0]);
    set32(c.r[5], c.r[6].w[0] << 5);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] + 320u);
    set32(c.r[5], c.r[5].w[0] << 8);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[9], c.r[4], c.r[0]);  if (t) { goto L_00392FC8; } }
    set32(c.r[5], c.r[3].w[0] + c.r[6].w[0]);
    c.budget -= 1;
L_00392FA0:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1612u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1618u)));
    set32(c.r[5], c.r[8].w[0] + 1u);
    c.r[8].d[0] = c.r[5].d[0] << 48;
    set32(c.r[5], c.r[7].w[0] + c.r[6].w[0]);
    st16((c.r[9].w[0] + 16u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[9].w[0] + 18u), static_cast<std::uint16_t>(0u));
    set32(c.r[9], c.r[9].w[0] + 4u);
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 48);
    c.budget -= 10;
L_00392FC8:
    c.r[6].d[0] = c.r[8].d[0] << 48;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.r[5].d[0] = c.r[6].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[5], c.r[3].w[0] + c.r[6].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00392FA0u | kUnwind; return; } goto L_00392FA0; } }
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 1630u)));
    c.budget -= 3;
    { const bool t = c.r[9].d[0] != 0ull;  if (t) { goto L_00392FF4; } }
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (t) { goto L_00393050; } }
L_00392FF4:
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 1632u)));
    set32(c.r[6], 0u + 10000u);
    set32(c.r[5], 0u + 100u);
    mmi::mult(c, 1, c.r[8].w[0], c.r[6].w[0]);
    c.r[6].d[0] = c.lo.d[1];
    mmi::div(c, 1, c.r[6].w[0], c.r[9].w[0]);
    set32(c.r[7], c.r[8].w[0] << 2);
    set32(c.r[8], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[8].w[0] + c.r[7].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    c.r[6].d[0] = c.lo.d[1];
    mmi::div(c, 0, c.r[7].w[0], c.r[9].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    mmi::div(c, 0, c.r[6].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.hi.d[0];
    c.r[6].d[0] = c.r[7].d[0] << 48;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.r[7].d[0] = c.r[5].d[0] << 48;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    c.budget -= 23;
L_00393050:
    st16((c.r[4].w[0] + 40u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st16((c.r[4].w[0] + 42u), static_cast<std::uint16_t>(0u));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 40u)));
    c.r[1].d[0] = c.r[5].sd[0] < 100ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00393074; } }
    st16((c.r[4].w[0] + 74u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 80u), static_cast<std::uint16_t>(c.r[7].w[0]));  if (t) { goto L_0039307C; } }
L_00393074:
    st16((c.r[4].w[0] + 74u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 80u), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_0039307C:
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 1624u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 1626u)));
    c.r[5].d[0] = c.r[7].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != 0ull; mmi::paddub(c.r[9], c.r[0], c.r[0]);  if (t) { goto L_0039311C; } }
    set32(c.r[5], c.r[7].w[0] - c.r[6].w[0]);
    c.r[6].d[0] = c.r[5].d[0] << 48;
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 1628u)));
    set32(c.r[7], c.r[7].w[0] + c.r[5].w[0]);
    c.budget -= 6;
    { const bool t = c.r[7].d[0] != 0ull; c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);  if (t) { goto L_003930B4; } }
    mmi::paddub(c.r[9], c.r[0], c.r[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (t) { goto L_00393120; } }
L_003930B4:
    c.r[8].d[0] = c.r[6].d[0] << 48;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 48);
    set32(c.r[5], c.r[8].w[0] << 2);
    set32(c.r[6], c.r[5].w[0] + c.r[8].w[0]);
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    mmi::div(c, 0, c.r[5].w[0], c.r[7].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.r[9].d[0] = c.r[5].d[0] << 48;
    set32(c.r[5], 0u + 10000u);
    mmi::mult(c, 1, c.r[8].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[1];
    mmi::div(c, 1, c.r[5].w[0], c.r[7].w[0]);
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 48);
    set32(c.r[5], 0u + 100u);
    c.r[6].d[0] = c.lo.d[1];
    mmi::div(c, 0, c.r[6].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.hi.d[0];
    c.r[6].d[0] = c.r[5].d[0] << 48;
    c.budget -= 25;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);  if (t) { goto L_00393120; } }
    mmi::paddub(c.r[9], c.r[0], c.r[0]);
    c.budget -= 1;
L_0039311C:
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 1;
L_00393120:
    st16((c.r[4].w[0] + 44u), static_cast<std::uint16_t>(c.r[9].w[0]));
    st16((c.r[4].w[0] + 46u), static_cast<std::uint16_t>(0u));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 44u)));
    c.r[1].d[0] = c.r[5].sd[0] < 100ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00393144; } }
    st16((c.r[4].w[0] + 76u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 82u), static_cast<std::uint16_t>(c.r[6].w[0]));  if (t) { goto L_0039314C; } }
L_00393144:
    st16((c.r[4].w[0] + 76u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 82u), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_0039314C:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 1634u)));
    st16((c.r[4].w[0] + 48u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[4].w[0] + 50u), static_cast<std::uint16_t>(0u));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 8389u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_00393178; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 26300u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 1634u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 268u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[6].w[0] - c.r[5].w[0]);  if (t) { goto L_00393188; } }
L_00393178:
    set32(c.r[6], ld32((c.r[28].w[0] - 26300u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 1634u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 269u)));
    set32(c.r[5], c.r[6].w[0] - c.r[5].w[0]);
    c.budget -= 4;
L_00393188:
    st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[4].w[0] + 54u), static_cast<std::uint16_t>(0u));
    set32(c.r[6], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[5], 0u + 4u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 184u)));
    c.budget -= 7;
    { const bool t = c.r[7].d[0] != c.r[5].d[0];  if (t) { goto L_00393290; } }
    set32(c.r[9], ld32((c.r[6].w[0] + 516u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x88880000u);
    set32(c.r[8], 0u + 60u);
    c.r[6].d[0] = c.r[5].d[0] | 34953ull;
    mmi::mult(c, 0, c.r[6].w[0], c.r[9].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x22B60000u);
    c.r[7].d[0] = c.r[5].d[0] | 15551ull;
    c.r[5].d[0] = c.hi.d[0];
    set32(c.r[6], c.r[9].w[0] >> 31);
    set32(c.r[5], c.r[5].w[0] + c.r[9].w[0]);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 5));
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    st16((c.r[4].w[0] + 56u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[4].w[0] + 58u), static_cast<std::uint16_t>(0u));
    set32(c.r[5], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[5], ld32((c.r[5].w[0] + 516u)));
    mmi::div(c, 0, c.r[5].w[0], c.r[8].w[0]);
    c.r[6].d[0] = c.hi.d[0];
    set32(c.r[5], c.r[6].w[0] << 5);
    set32(c.r[6], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] - c.r[6].w[0]);
    mmi::mult(c, 0, c.r[7].w[0], c.r[5].w[0]);
    set32(c.r[6], c.r[5].w[0] >> 31);
    c.r[5].d[0] = c.hi.d[0];
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 3));
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    st16((c.r[4].w[0] + 78u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[5], ld32((c.r[5].w[0] + 516u)));
    mmi::div(c, 0, c.r[5].w[0], c.r[8].w[0]);
    c.r[6].d[0] = c.hi.d[0];
    set32(c.r[5], c.r[6].w[0] << 5);
    set32(c.r[6], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] - c.r[6].w[0]);
    mmi::mult(c, 0, c.r[7].w[0], c.r[5].w[0]);
    set32(c.r[6], c.r[5].w[0] >> 31);
    c.r[5].d[0] = c.hi.d[0];
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 3));
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    st16((c.r[4].w[0] + 84u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 56u)));
    c.r[1].d[0] = c.r[5].sd[0] < 1000ll ? 1ull : 0ull;
    c.budget -= 52;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003933DC; } }
    set32(c.r[5], 0u + 999u);
    st16((c.r[4].w[0] + 56u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[5], 0u + 99u);
    st16((c.r[4].w[0] + 58u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 78u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 84u), static_cast<std::uint16_t>(c.r[5].w[0]));  if (t) { goto L_003933DC; } }
L_00393290:
    set32(c.r[8], ld32((c.r[28].w[0] - 26300u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[5], c.r[5].w[0] + 15136u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 109u)));
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    c.budget -= 9;
    { const bool t = c.r[7].d[0] != c.r[5].d[0];  if (t) { goto L_003932BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 56u), static_cast<std::uint16_t>(0u));  if (t) { goto L_00393338; } }
L_003932BC:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 648u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_00393320; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0] + 302u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_003932F8; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[6], c.r[6].w[0] + 15136u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0] + 300u)));
    set32(c.r[7], c.r[7].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    set32(c.r[5], c.r[6].w[0] - c.r[5].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 56u), static_cast<std::uint16_t>(c.r[5].w[0]));  if (t) { goto L_00393338; } }
L_003932F8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[6], c.r[6].w[0] + 15136u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0] + 300u)));
    set32(c.r[7], c.r[7].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    set32(c.r[6], c.r[6].w[0] - 1u);
    set32(c.r[5], c.r[6].w[0] - c.r[5].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 56u), static_cast<std::uint16_t>(c.r[5].w[0]));  if (t) { goto L_00393338; } }
L_00393320:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[5], c.r[5].w[0] + 15136u);
    set32(c.r[6], c.r[7].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    st16((c.r[4].w[0] + 56u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 6;
L_00393338:
    st16((c.r[4].w[0] + 58u), static_cast<std::uint16_t>(0u));
    set32(c.r[6], ld32((c.r[28].w[0] - 26300u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x22B60000u);
    c.r[8].d[0] = c.r[5].d[0] | 15551ull;
    set32(c.r[9], 0u + 60u);
    set32(c.r[7], 0u + 100u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 302u)));
    mmi::div(c, 0, c.r[5].w[0], c.r[9].w[0]);
    c.r[6].d[0] = c.hi.d[0];
    set32(c.r[5], c.r[6].w[0] << 5);
    set32(c.r[6], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] - c.r[6].w[0]);
    mmi::mult(c, 0, c.r[8].w[0], c.r[5].w[0]);
    set32(c.r[6], c.r[5].w[0] >> 31);
    c.r[5].d[0] = c.hi.d[0];
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 3));
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[7].w[0] - c.r[5].w[0]);
    st16((c.r[4].w[0] + 78u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 302u)));
    mmi::div(c, 0, c.r[5].w[0], c.r[9].w[0]);
    c.r[6].d[0] = c.hi.d[0];
    set32(c.r[5], c.r[6].w[0] << 5);
    set32(c.r[6], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] - c.r[6].w[0]);
    mmi::mult(c, 0, c.r[8].w[0], c.r[5].w[0]);
    set32(c.r[6], c.r[5].w[0] >> 31);
    c.r[5].d[0] = c.hi.d[0];
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 3));
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[7].w[0] - c.r[5].w[0]);
    st16((c.r[4].w[0] + 84u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 41;
L_003933DC:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 8434u)));
    st16((c.r[4].w[0] + 60u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 8434u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 62u), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003933F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2u));
    set32(c.r[2], 0u + 2u);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_003935AC; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0039350C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[3].w[0] + 1u);  if (t) { goto L_00393434; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003935D0; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_00393434:
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 5248u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393448u); st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009D(c, 283u, depth + 1u); else { c.pc = 0x00376BE0u; return; } if (c.pc != 0x00393448u) [[unlikely]] return; }
L_00393448:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00390000u);
    set32(c.r[6], c.r[2].w[0] + 13808u);
    set32(c.r[4], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039345Cu); set32(c.r[5], 0u + 68u);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x0039345Cu) [[unlikely]] return; }
L_0039345C:
    set32(c.r[18], c.r[28].w[0] - 26920u);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 2;
L_00393464:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00390000u);
    set32(c.r[6], c.r[2].w[0] + 13968u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393478u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x00393478u) [[unlikely]] return; }
L_00393478:
    st32((c.r[2].w[0] + 28u), c.r[16].w[0]);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 285u), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00393464u | kUnwind; return; } goto L_00393464; } }
    set32(c.r[17], c.r[28].w[0] - 26920u);
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    c.budget -= 2;
L_0039349C:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00390000u);
    set32(c.r[6], c.r[2].w[0] + 13968u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003934B0u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x003934B0u) [[unlikely]] return; }
L_003934B0:
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 28u), c.r[16].w[0]);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[2].w[0] + 285u), static_cast<std::uint8_t>(c.r[18].w[0]));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039349Cu | kUnwind; return; } goto L_0039349C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00390000u);
    set32(c.r[6], c.r[2].w[0] + 14128u);
    set32(c.r[4], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003934E4u); set32(c.r[5], 0u + 69u);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x003934E4u) [[unlikely]] return; }
L_003934E4:
    st32((c.r[2].w[0] + 28u), c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00390000u);
    set32(c.r[6], c.r[2].w[0] + 14128u);
    set32(c.r[4], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003934FCu); set32(c.r[5], 0u + 70u);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x003934FCu) [[unlikely]] return; }
L_003934FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393504u); st32((c.r[2].w[0] + 28u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_009A(c, 532u, depth + 1u); else { c.pc = 0x0036B670u; return; } if (c.pc != 0x00393504u) [[unlikely]] return; }
L_00393504:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003935CC; } }
L_0039350C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393514u);  if (depth < kMaxDepth) unit_0097(c, 178u, depth + 1u); else { c.pc = 0x0035D5B0u; return; } if (c.pc != 0x00393514u) [[unlikely]] return; }
L_00393514:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003935CC; } }
    set32(c.r[4], c.r[16].w[0] + 8u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039352Cu); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_009D(c, 314u, depth + 1u); else { c.pc = 0x00377460u; return; } if (c.pc != 0x0039352Cu) [[unlikely]] return; }
L_0039352C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 32u);  if (t) { goto L_00393544; } }
    set32(c.r[5], 0u + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393540u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x00393540u) [[unlikely]] return; }
L_00393540:
    set32(c.r[4], 0u + 32u);
    c.budget -= 1;
L_00393544:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039354Cu);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x0039354Cu) [[unlikely]] return; }
L_0039354C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 64u);  if (t) { goto L_00393588; } }
    c.r[5].d[0] = ld8((c.r[16].w[0] + 2u));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 16u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], 0u + 4u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039357Cu); st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x0039357Cu) [[unlikely]] return; }
L_0039357C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003935CC; } }
    set32(c.r[4], 0u + 64u);
    c.budget -= 1;
L_00393588:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393590u);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x00393590u) [[unlikely]] return; }
L_00393590:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003935CC; } }
    set32(c.r[5], 0u + 54u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003935A4u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x003935A4u) [[unlikely]] return; }
L_003935A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 2u);  if (t) { goto L_003935D0; } }
L_003935AC:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_003935CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003935D0; } }
L_003935CC:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_003935D0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003935F0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    c.f[12] = c.r[2].w[0];
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.f[13] = c.f[12];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393614u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0017(c, 229u, depth + 1u); else { c.pc = 0x0015E250u; return; } if (c.pc != 0x00393614u) [[unlikely]] return; }
L_00393614:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039361Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x0039361Cu) [[unlikely]] return; }
L_0039361C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[17], c.r[2].w[0] + 14384u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[18], c.r[2].w[0] - 16960u);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 5;
L_00393630:
    c.r[6].d[0] = ld16((c.r[17].w[0] + 2u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393644u); set32(c.r[5], c.r[2].w[0] - 11648u);  if (depth < kMaxDepth) unit_0006(c, 7u, depth + 1u); else { c.pc = 0x001180C0u; return; } if (c.pc != 0x00393644u) [[unlikely]] return; }
L_00393644:
    c.f[12] = ld32((c.r[18].w[0]));
    c.f[13] = ld32((c.r[18].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039365Cu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x0039365Cu) [[unlikely]] return; }
L_0039365C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[17], c.r[17].w[0] + 328u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00393630u | kUnwind; return; } goto L_00393630; } }
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00393690:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[6], ld32((c.r[4].w[0] + 28u)));  if (t) { goto L_00393720; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003936CC; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[3], c.r[5].w[0] + 1u);  if (t) { goto L_003936C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00393720; } }
    set32(c.r[3], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_003936C0:
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 3;
L_003936CC:
    c.r[3].d[0] = ld8((c.r[6].w[0] + 8u));
    c.r[5].d[0] = ld8((c.r[4].w[0] + 285u));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003936E8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] - 16944u);  if (t) { goto L_00393708; } }
L_003936E8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00393700; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] - 16932u);  if (t) { goto L_00393708; } }
L_00393700:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], c.r[3].w[0] - 16920u);
    c.budget -= 2;
L_00393708:
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[4].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    st32((c.r[4].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    st32((c.r[4].w[0] + 108u), c.f[0]);
    c.budget -= 6;
L_00393720:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00393730:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[6], ld32((c.r[4].w[0] + 28u)));  if (t) { goto L_003937A4; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00393768; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[3], c.r[5].w[0] + 1u);  if (t) { goto L_00393760; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003937D0; } }
    set32(c.r[3], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_00393760:
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 36u), 0u);
    c.budget -= 2;
L_00393768:
    c.r[5].d[0] = ld8((c.r[6].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[3].w[0] - 11640u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[4].w[0] + 32u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[6].w[0] + 12u));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003937D0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(0u));  if (t) { goto L_003937D0; } }
L_003937A4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_003937CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003937D0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_003937CC:
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_003937D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003937E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[2].w[0] - 11552u);
    set32(c.r[5], 0u + 18439u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    mmi::paddub(c.r[8], c.r[0], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393808u); mmi::paddub(c.r[9], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0002(c, 300u, depth + 1u); else { c.pc = 0x0010A458u; return; } if (c.pc != 0x00393808u) [[unlikely]] return; }
L_00393808:
    set32(c.r[3], ld32((c.r[28].w[0] - 30528u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393814u); st32((c.r[3].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A4(c, 155u, depth + 1u); else { c.pc = 0x00393850u; return; } if (c.pc != 0x00393814u) [[unlikely]] return; }
L_00393814:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00393824; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00393838; } }
L_00393824:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039382Cu);  if (depth < kMaxDepth) unit_00A4(c, 156u, depth + 1u); else { c.pc = 0x00393890u; return; } if (c.pc != 0x0039382Cu) [[unlikely]] return; }
L_0039382C:
    set32(c.r[3], 0u - 2u);
    if (c.r[2].d[0] == 0) c.r[3].d[0] = 0ull;
    mmi::paddub(c.r[2], c.r[3], c.r[0]);
    c.budget -= 3;
L_00393838:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00393850:
    set32(c.r[3], ld32((c.r[28].w[0] - 30528u)));
    set32(c.r[2], 0u + 3u);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0039387C; } }
    set32(c.r[2], 0u - 19u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00393878; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00393888; } }
L_00393878:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0039387C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00393888; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_00393888:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00393890:
    set32(c.r[4], ld32((c.r[28].w[0] - 30528u)));
    set32(c.r[3], 0u + 1u);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; if (c.r[4].d[0] != 0) c.r[2].d[0] = c.r[3].d[0];  c.pc = t; return; }
L_003938B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[4], c.r[2].w[0] + 2848u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003938C8u); set32(c.r[5], c.r[4].w[0] + 160u);  if (depth < kMaxDepth) unit_0029(c, 110u, depth + 1u); else { c.pc = 0x001A57E0u; return; } if (c.pc != 0x003938C8u) [[unlikely]] return; }
L_003938C8:
    set32(c.r[3], 0u - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    st32((c.r[1].w[0] + 2848u), c.r[3].w[0]);
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003938E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003938F0u);  if (depth < kMaxDepth) unit_00A4(c, 151u, depth + 1u); else { c.pc = 0x003937E0u; return; } if (c.pc != 0x003938F0u) [[unlikely]] return; }
L_003938F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00393900; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0039390C; } }
L_00393900:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393908u);  if (depth < kMaxDepth) unit_00A4(c, 162u, depth + 1u); else { c.pc = 0x00393920u; return; } if (c.pc != 0x00393908u) [[unlikely]] return; }
L_00393908:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_0039390C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00393920:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30528u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[4], c.r[2].w[0] - 17072u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], c.r[2].w[0] - 11544u);
    st16((c.r[3].w[0] + 10u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 30528u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[7].d[0] = 0ull << 48;
    set32(c.r[6], c.r[2].w[0] - 11552u);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    st16((c.r[3].w[0] + 8u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 30528u)));
    st8((c.r[2].w[0] + 7u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 30528u)));
    st8((c.r[2].w[0] + 29u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 30528u)));
    st8((c.r[2].w[0] + 28u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 30528u)));
    st8((c.r[2].w[0] + 6u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 30528u)));
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393984u); st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(c.r[7].w[0]));  if (depth < kMaxDepth) unit_0006(c, 7u, depth + 1u); else { c.pc = 0x001180C0u; return; } if (c.pc != 0x00393984u) [[unlikely]] return; }
L_00393984:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[5], c.r[2].w[0] - 17072u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[2].w[0] - 11528u);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003939A4u); mmi::paddub(c.r[8], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0002(c, 263u, depth + 1u); else { c.pc = 0x00109F90u; return; } if (c.pc != 0x003939A4u) [[unlikely]] return; }
L_003939A4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_003939C0; } }
    set32(c.r[3], 0u - 16u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_003939C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 100u);  if (t) { goto L_00393A8C; } }
L_003939C0:
    set32(c.r[2], ld32((c.r[28].w[0] - 30528u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003939D0u); st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_00A4(c, 172u, depth + 1u); else { c.pc = 0x00393AA0u; return; } if (c.pc != 0x003939D0u) [[unlikely]] return; }
L_003939D0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_003939E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_00393A90; } }
L_003939E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003939E8u);  if (depth < kMaxDepth) unit_00A4(c, 181u, depth + 1u); else { c.pc = 0x00393BE0u; return; } if (c.pc != 0x003939E8u) [[unlikely]] return; }
L_003939E8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_003939F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00393A8C; } }
L_003939F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393A00u);  if (depth < kMaxDepth) unit_00A5(c, 72u, depth + 1u); else { c.pc = 0x00394770u; return; } if (c.pc != 0x00393A00u) [[unlikely]] return; }
L_00393A00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00393A14; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30528u)));
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 28u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00393A14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393A1Cu);  if (depth < kMaxDepth) unit_00A5(c, 75u, depth + 1u); else { c.pc = 0x003947C0u; return; } if (c.pc != 0x00393A1Cu) [[unlikely]] return; }
L_00393A1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00393A30; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30528u)));
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 29u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00393A30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393A38u);  if (depth < kMaxDepth) unit_00A5(c, 81u, depth + 1u); else { c.pc = 0x00394920u; return; } if (c.pc != 0x00393A38u) [[unlikely]] return; }
L_00393A38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00393A48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 4u);  if (t) { goto L_00393A8C; } }
L_00393A48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393A50u);  if (depth < kMaxDepth) unit_00A5(c, 82u, depth + 1u); else { c.pc = 0x00394970u; return; } if (c.pc != 0x00393A50u) [[unlikely]] return; }
L_00393A50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (t) { goto L_00393A64; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 5u);  if (t) { goto L_00393A8C; } }
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 1;
L_00393A64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393A6Cu);  if (depth < kMaxDepth) unit_00A5(c, 78u, depth + 1u); else { c.pc = 0x00394810u; return; } if (c.pc != 0x00393A6Cu) [[unlikely]] return; }
L_00393A6C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00393A7C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 3u);  if (t) { goto L_00393A8C; } }
L_00393A7C:
    set32(c.r[3], ld32((c.r[28].w[0] - 30528u)));
    set32(c.r[4], 0u + 1u);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    st8((c.r[3].w[0] + 7u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 4;
L_00393A8C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_00393A90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00393AA0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393AC0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00A5(c, 96u, depth + 1u); else { c.pc = 0x00394C10u; return; } if (c.pc != 0x00393AC0u) [[unlikely]] return; }
L_00393AC0:
    set32(c.r[2], ld32((c.r[28].w[0] - 30528u)));
    set32(c.r[4], c.r[2].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393AD0u); set32(c.r[5], c.r[2].w[0] + 96u);  if (depth < kMaxDepth) unit_0002(c, 207u, depth + 1u); else { c.pc = 0x00109808u; return; } if (c.pc != 0x00393AD0u) [[unlikely]] return; }
L_00393AD0:
    set32(c.r[3], 0u - 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00393AFC; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00393AEC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 50u);  if (t) { goto L_00393B0C; } }
L_00393AEC:
    set32(c.r[2], ld32((c.r[28].w[0] - 30528u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00393B14; } }
L_00393AFC:
    set32(c.r[2], ld32((c.r[28].w[0] - 30528u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 6u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00393B14; } }
    set32(c.r[2], 0u - 50u);
    c.budget -= 1;
L_00393B0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);  if (t) { goto L_00393BBC; } }
L_00393B14:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[4], c.r[2].w[0] - 17072u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], c.r[2].w[0] - 11520u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393B30u); set32(c.r[6], c.r[2].w[0] - 11528u);  if (depth < kMaxDepth) unit_0006(c, 7u, depth + 1u); else { c.pc = 0x001180C0u; return; } if (c.pc != 0x00393B30u) [[unlikely]] return; }
L_00393B30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393B3Cu); set32(c.r[4], c.r[2].w[0] - 17072u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x00109480u; return; } if (c.pc != 0x00393B3Cu) [[unlikely]] return; }
L_00393B3C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; mmi::paddub(c.r[16], c.r[2], c.r[0]);  if (t) { goto L_00393B50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 100u);  if (t) { goto L_00393BB8; } }
    mmi::paddub(c.r[16], c.r[2], c.r[0]);
    c.budget -= 1;
L_00393B50:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00D80000u);
    c.r[19].d[0] = c.r[2].d[0] | 14336ull;
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    mmi::paddub(c.r[18], c.r[19], c.r[0]);
    c.budget -= 4;
L_00393B60:
    mmi::paddub(c.r[5], c.r[18], c.r[0]);
    set32(c.r[18], c.r[5].w[0] + 324u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393B70u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0002(c, 194u, depth + 1u); else { c.pc = 0x001096B0u; return; } if (c.pc != 0x00393B70u) [[unlikely]] return; }
L_00393B70:
    mmi::paddub(c.r[20], c.r[2], c.r[0]);
    c.budget -= 3;
    { const bool t = c.r[20].sd[0] <= 0; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_00393B88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00393B60u | kUnwind; return; } goto L_00393B60; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_00393B88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393B90u);  if (depth < kMaxDepth) unit_0002(c, 180u, depth + 1u); else { c.pc = 0x00109548u; return; } if (c.pc != 0x00393B90u) [[unlikely]] return; }
L_00393B90:
    c.budget -= 2;
    { const bool t = c.r[20].sd[0] >= 0; mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (t) { goto L_00393BA4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 50u);  if (t) { goto L_00393BB8; } }
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 1;
L_00393BA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393BACu); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_00A5(c, 83u, depth + 1u); else { c.pc = 0x003949A0u; return; } if (c.pc != 0x00393BACu) [[unlikely]] return; }
L_00393BAC:
    set32(c.r[3], ld32((c.r[28].w[0] - 30528u)));
    st16((c.r[3].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 3;
L_00393BB8:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00393BBC:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00393BE0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30528u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 6u));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00393C14; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00393CA4; } }
L_00393C14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393C1Cu);  if (depth < kMaxDepth) unit_00A5(c, 96u, depth + 1u); else { c.pc = 0x00394C10u; return; } if (c.pc != 0x00393C1Cu) [[unlikely]] return; }
L_00393C1C:
    set32(c.r[2], ld32((c.r[28].w[0] - 30528u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393C28u); set32(c.r[4], c.r[2].w[0] + 32u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x00109480u; return; } if (c.pc != 0x00393C28u) [[unlikely]] return; }
L_00393C28:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; mmi::paddub(c.r[16], c.r[2], c.r[0]);  if (t) { goto L_00393C3C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 50u);  if (t) { goto L_00393CA4; } }
    mmi::paddub(c.r[16], c.r[2], c.r[0]);
    c.budget -= 1;
L_00393C3C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00D80000u);
    c.r[19].d[0] = c.r[2].d[0] | 14336ull;
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    mmi::paddub(c.r[18], c.r[19], c.r[0]);
    c.budget -= 4;
L_00393C4C:
    mmi::paddub(c.r[5], c.r[18], c.r[0]);
    set32(c.r[18], c.r[5].w[0] + 324u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393C5Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0002(c, 194u, depth + 1u); else { c.pc = 0x001096B0u; return; } if (c.pc != 0x00393C5Cu) [[unlikely]] return; }
L_00393C5C:
    mmi::paddub(c.r[20], c.r[2], c.r[0]);
    c.budget -= 3;
    { const bool t = c.r[20].sd[0] <= 0; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_00393C74; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00393C4Cu | kUnwind; return; } goto L_00393C4C; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_00393C74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393C7Cu);  if (depth < kMaxDepth) unit_0002(c, 180u, depth + 1u); else { c.pc = 0x00109548u; return; } if (c.pc != 0x00393C7Cu) [[unlikely]] return; }
L_00393C7C:
    c.budget -= 2;
    { const bool t = c.r[20].sd[0] >= 0; mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (t) { goto L_00393C90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 50u);  if (t) { goto L_00393CA4; } }
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 1;
L_00393C90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393C98u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_00A5(c, 89u, depth + 1u); else { c.pc = 0x00394AB0u; return; } if (c.pc != 0x00393C98u) [[unlikely]] return; }
L_00393C98:
    set32(c.r[3], ld32((c.r[28].w[0] - 30528u)));
    st16((c.r[3].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 3;
L_00393CA4:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00393CD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393CE4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_00A4(c, 155u, depth + 1u); else { c.pc = 0x00393850u; return; } if (c.pc != 0x00393CE4u) [[unlikely]] return; }
L_00393CE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00393CF4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00393D54; } }
L_00393CF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393CFCu);  if (depth < kMaxDepth) unit_00A4(c, 156u, depth + 1u); else { c.pc = 0x00393890u; return; } if (c.pc != 0x00393CFCu) [[unlikely]] return; }
L_00393CFC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00393D0C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 2u);  if (t) { goto L_00393D54; } }
L_00393D0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393D14u);  if (depth < kMaxDepth) unit_00A5(c, 81u, depth + 1u); else { c.pc = 0x00394920u; return; } if (c.pc != 0x00393D14u) [[unlikely]] return; }
L_00393D14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00393D24; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 4u);  if (t) { goto L_00393D54; } }
L_00393D24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393D2Cu);  if (depth < kMaxDepth) unit_00A5(c, 82u, depth + 1u); else { c.pc = 0x00394970u; return; } if (c.pc != 0x00393D2Cu) [[unlikely]] return; }
L_00393D2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_00393D40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 5u);  if (t) { goto L_00393D54; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_00393D40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393D48u);  if (depth < kMaxDepth) unit_00A5(c, 78u, depth + 1u); else { c.pc = 0x00394810u; return; } if (c.pc != 0x00393D48u) [[unlikely]] return; }
L_00393D48:
    set32(c.r[3], 0u - 3u);
    if (c.r[2].d[0] == 0) c.r[3].d[0] = 0ull;
    mmi::paddub(c.r[2], c.r[3], c.r[0]);
    c.budget -= 3;
L_00393D54:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00393D70:
    c.budget -= 2;
    { mmi::paddub(c.r[4], c.r[0], c.r[0]);  goto L_00393D90; }
L_00393D80:
    c.budget -= 2;
    { set32(c.r[4], 0u + 1u);  goto L_00393D90; }
L_00393D90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30528u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 12u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { goto L_00393ED0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00393DC4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00393F34; } }
L_00393DC4:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00393DDC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393DD4u);  if (depth < kMaxDepth) unit_00A5(c, 102u, depth + 1u); else { c.pc = 0x00394D60u; return; } if (c.pc != 0x00393DD4u) [[unlikely]] return; }
L_00393DD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00393DE4; } }
L_00393DDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393DE4u);  if (depth < kMaxDepth) unit_00A5(c, 99u, depth + 1u); else { c.pc = 0x00394CB0u; return; } if (c.pc != 0x00393DE4u) [[unlikely]] return; }
L_00393DE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393DECu);  if (depth < kMaxDepth) unit_0028(c, 269u, depth + 1u); else { c.pc = 0x001A3AC0u; return; } if (c.pc != 0x00393DECu) [[unlikely]] return; }
L_00393DEC:
    set32(c.r[2], ld32((c.r[28].w[0] - 30528u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393DFCu); set32(c.r[4], c.r[2].w[0] + 32u);  if (depth < kMaxDepth) unit_0001(c, 452u, depth + 1u); else { c.pc = 0x00107CA0u; return; } if (c.pc != 0x00393DFCu) [[unlikely]] return; }
L_00393DFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393E04u); mmi::paddub(c.r[16], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0028(c, 270u, depth + 1u); else { c.pc = 0x001A3AD0u; return; } if (c.pc != 0x00393E04u) [[unlikely]] return; }
L_00393E04:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { goto L_00393E74; } }
    set32(c.r[2], 0u - 2u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_00393E20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[28].w[0] - 30528u)));  if (t) { goto L_00393E34; } }
L_00393E20:
    set32(c.r[3], ld32((c.r[28].w[0] - 30528u)));
    set32(c.r[2], 0u - 6u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 12u), static_cast<std::uint16_t>(0u));  if (t) { goto L_00393F34; } }
L_00393E30:
    set32(c.r[3], ld32((c.r[28].w[0] - 30528u)));
    c.budget -= 1;
L_00393E34:
    set32(c.r[2], 0u - 13u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; st16((c.r[3].w[0] + 12u), static_cast<std::uint16_t>(0u));  if (t) { goto L_00393E60; } }
    set32(c.r[2], 0u - 5u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[2], 0u - 7u);  if (t) { goto L_00393E58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 50u);  if (t) { goto L_00393E6C; } }
    set32(c.r[2], 0u - 7u);
    c.budget -= 1;
L_00393E58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_00393F38; } }
L_00393E60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 8u);  if (t) { goto L_00393F34; } }
    set32(c.r[2], 0u - 50u);
    c.budget -= 1;
L_00393E6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00393F34; } }
L_00393E74:
    set32(c.r[2], ld32((c.r[28].w[0] - 30528u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; st16((c.r[2].w[0] + 18u), static_cast<std::uint16_t>(c.r[16].w[0]));  if (t) { goto L_00393EA0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01B90000u);
    c.r[4].d[0] = c.r[2].d[0] | 61440ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 30528u)));
    set32(c.r[3], 0u + 3540u);
    st32((c.r[2].w[0] + 24u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30528u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_00393EBC; } }
L_00393EA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00D50000u);
    c.r[4].d[0] = c.r[2].d[0] | 14336ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 30528u)));
    c.r[3].d[0] = 0ull | 33792ull;
    st32((c.r[2].w[0] + 24u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30528u)));
    st32((c.r[2].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 7;
L_00393EBC:
    set32(c.r[3], ld32((c.r[28].w[0] - 30528u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00393F30; } }
L_00393ED0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393ED8u);  if (depth < kMaxDepth) unit_0028(c, 269u, depth + 1u); else { c.pc = 0x001A3AC0u; return; } if (c.pc != 0x00393ED8u) [[unlikely]] return; }
L_00393ED8:
    set32(c.r[2], ld32((c.r[28].w[0] - 30528u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 24u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393EECu); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 18u)));  if (depth < kMaxDepth) unit_0002(c, 35u, depth + 1u); else { c.pc = 0x001082E0u; return; } if (c.pc != 0x00393EECu) [[unlikely]] return; }
L_00393EEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393EF4u); mmi::paddub(c.r[16], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0028(c, 270u, depth + 1u); else { c.pc = 0x001A3AD0u; return; } if (c.pc != 0x00393EF4u) [[unlikely]] return; }
L_00393EF4:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00393E30u | kUnwind; return; } goto L_00393E30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393F04u);  if (depth < kMaxDepth) unit_0028(c, 269u, depth + 1u); else { c.pc = 0x001A3AC0u; return; } if (c.pc != 0x00393F04u) [[unlikely]] return; }
L_00393F04:
    set32(c.r[2], ld32((c.r[28].w[0] - 30528u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393F10u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 18u)));  if (depth < kMaxDepth) unit_0001(c, 472u, depth + 1u); else { c.pc = 0x00107F28u; return; } if (c.pc != 0x00393F10u) [[unlikely]] return; }
L_00393F10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393F18u); mmi::paddub(c.r[16], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0028(c, 270u, depth + 1u); else { c.pc = 0x001A3AD0u; return; } if (c.pc != 0x00393F18u) [[unlikely]] return; }
L_00393F18:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00393E30u | kUnwind; return; } goto L_00393E30; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30528u)));
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 12u), static_cast<std::uint16_t>(0u));  if (t) { goto L_00393F34; } }
L_00393F30:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00393F34:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00393F38:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00393F50:
    c.budget -= 2;
    { mmi::paddub(c.r[4], c.r[0], c.r[0]);  goto L_00393F70; }
L_00393F60:
    c.budget -= 2;
    { set32(c.r[4], 0u + 1u);  goto L_00393F70; }
L_00393F70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 30528u)));
    set32(c.r[2], 0u + 44u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 12u)));
    c.budget -= 10;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[6], c.r[4].w[0] + 12u);  if (t) { [[clang::musttail]] return unit_00A5(c, 68u, depth); } }
    set32(c.r[2], 0u + 43u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_00A5(c, 64u, depth); } }
    set32(c.r[2], 0u + 42u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_00A5(c, 60u, depth); } }
    set32(c.r[2], 0u + 41u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_00A5(c, 54u, depth); } }
    set32(c.r[2], 0u + 40u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_00A5(c, 53u, depth); } }
    set32(c.r[2], 0u + 32u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; c.r[2].d[0] = 0ull | 50343ull;  if (t) { [[clang::musttail]] return unit_00A5(c, 49u, depth); } }
    set32(c.r[2], 0u + 31u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_00A5(c, 45u, depth); } }
    set32(c.r[3], 0u + 30u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { [[clang::musttail]] return unit_00A5(c, 39u, depth); } }
    set32(c.r[2], 0u + 21u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 511u);  if (t) { [[clang::musttail]] return unit_00A5(c, 35u, depth); } }
    set32(c.r[2], 0u + 20u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_00A5(c, 30u, depth); } }
    [[clang::musttail]] return unit_00A5(c, 2u, depth);
}

}
