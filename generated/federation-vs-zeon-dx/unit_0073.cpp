#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0073[4096] = {
    1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0,
    0, 9, 0, 10, 0, 0, 0, 11, 0, 12, 0, 13, 0, 0, 0, 14, 0, 0, 15, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 17,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0,
    0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 33, 0, 0, 0, 34, 0, 35, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 38, 0,
    0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    42, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    56, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 63, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 69, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 73, 0, 0, 74, 0, 0, 75, 0, 76,
    0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 80, 0, 0, 81, 0, 0, 82, 0, 0, 83, 0, 84, 0, 85, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 88, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 89, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 92, 0, 0, 0, 0, 93, 0, 0, 0, 0, 94, 0, 0, 0, 0, 95, 0, 0, 96, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 100, 0, 0, 0, 0, 101, 0, 0, 0, 0,
    102, 0, 0, 0, 0, 103, 0, 0, 104, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0,
    0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0,
    0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147,
    0, 148, 0, 149, 0, 150, 0, 151, 0, 0, 152, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 156, 0, 0, 157, 0, 0, 158, 0, 0, 159, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0,
    0, 0, 0, 161, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 163, 0, 164, 0, 165, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 169, 0, 0, 170, 0, 171, 0, 0, 0,
    0, 0, 172, 0, 0, 173, 0, 0, 174, 0, 0, 175, 0, 176, 0, 0, 0, 177, 0, 0, 178, 0, 0, 179, 0, 180, 0, 0, 181, 0, 182, 0,
    0, 0, 0, 183, 0, 0, 184, 0, 0, 185, 0, 186, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 189, 0, 190, 0, 0,
    0, 191, 0, 0, 192, 0, 0, 193, 0, 194, 0, 0, 0, 195, 0, 196, 0, 0, 0, 197, 0, 0, 198, 0, 0, 199, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 201, 0, 202, 0, 0, 0, 203, 0, 0, 204, 0, 0, 205, 0, 0, 206,
    0, 0, 0, 207, 0, 208, 0, 0, 0, 209, 0, 0, 210, 0, 0, 211, 0, 0, 212, 0, 213, 0, 0, 0, 214, 0, 0, 215, 0, 0, 216, 0,
    0, 217, 0, 0, 0, 218, 0, 0, 219, 0, 0, 220, 0, 221, 0, 0, 222, 0, 0, 223, 0, 224, 0, 0, 0, 0, 0, 225, 0, 0, 226, 0,
    0, 227, 0, 0, 228, 0, 0, 0, 229, 0, 0, 230, 0, 0, 231, 0, 232, 0, 0, 233, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 240, 0, 0, 241, 0, 0, 242, 0, 0, 243, 0, 0, 0,
    0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 247, 0, 248, 0, 249, 0, 0, 250, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    252, 0, 0, 253, 0, 0, 254, 0, 255, 0, 0, 0, 0, 0, 256, 0, 0, 257, 0, 0, 258, 0, 0, 259, 0, 260, 0, 0, 0, 261, 0, 0,
};

void unit_0073(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002CC000;
    case 2u: goto L_002CC014;
    case 3u: goto L_002CC044;
    case 4u: goto L_002CC170;
    case 5u: goto L_002CC280;
    case 6u: goto L_002CC360;
    case 7u: goto L_002CC3E0;
    case 8u: goto L_002CC460;
    case 9u: goto L_002CC484;
    case 10u: goto L_002CC48C;
    case 11u: goto L_002CC49C;
    case 12u: goto L_002CC4A4;
    case 13u: goto L_002CC4AC;
    case 14u: goto L_002CC4BC;
    case 15u: goto L_002CC4C8;
    case 16u: goto L_002CC4E0;
    case 17u: goto L_002CC4FC;
    case 18u: goto L_002CC524;
    case 19u: goto L_002CC568;
    case 20u: goto L_002CC590;
    case 21u: goto L_002CC61C;
    case 22u: goto L_002CC62C;
    case 23u: goto L_002CC650;
    case 24u: goto L_002CC668;
    case 25u: goto L_002CC68C;
    case 26u: goto L_002CC6F0;
    case 27u: goto L_002CC730;
    case 28u: goto L_002CC780;
    case 29u: goto L_002CC7BC;
    case 30u: goto L_002CC870;
    case 31u: goto L_002CC97C;
    case 32u: goto L_002CC9C0;
    case 33u: goto L_002CC9C8;
    case 34u: goto L_002CC9D8;
    case 35u: goto L_002CC9E0;
    case 36u: goto L_002CCA0C;
    case 37u: goto L_002CCA5C;
    case 38u: goto L_002CCA78;
    case 39u: goto L_002CCA84;
    case 40u: goto L_002CCAD0;
    case 41u: goto L_002CCB50;
    case 42u: goto L_002CCD80;
    case 43u: goto L_002CCD90;
    case 44u: goto L_002CCDB8;
    case 45u: goto L_002CCDC8;
    case 46u: goto L_002CCFCC;
    case 47u: goto L_002CCFF4;
    case 48u: goto L_002CD030;
    case 49u: goto L_002CD060;
    case 50u: goto L_002CD28C;
    case 51u: goto L_002CD29C;
    case 52u: goto L_002CD3C8;
    case 53u: goto L_002CD3F0;
    case 54u: goto L_002CD41C;
    case 55u: goto L_002CD460;
    case 56u: goto L_002CD680;
    case 57u: goto L_002CD690;
    case 58u: goto L_002CD794;
    case 59u: goto L_002CD7E0;
    case 60u: goto L_002CD828;
    case 61u: goto L_002CD9B0;
    case 62u: goto L_002CD9C0;
    case 63u: goto L_002CDA0C;
    case 64u: goto L_002CDA1C;
    case 65u: goto L_002CDC20;
    case 66u: goto L_002CDC48;
    case 67u: goto L_002CDC84;
    case 68u: goto L_002CDCB0;
    case 69u: goto L_002CDCC4;
    case 70u: goto L_002CDCCC;
    case 71u: goto L_002CDCF0;
    case 72u: goto L_002CDD50;
    case 73u: goto L_002CDD5C;
    case 74u: goto L_002CDD68;
    case 75u: goto L_002CDD74;
    case 76u: goto L_002CDD7C;
    case 77u: goto L_002CDD84;
    case 78u: goto L_002CDDC0;
    case 79u: goto L_002CDE20;
    case 80u: goto L_002CDE2C;
    case 81u: goto L_002CDE38;
    case 82u: goto L_002CDE44;
    case 83u: goto L_002CDE50;
    case 84u: goto L_002CDE58;
    case 85u: goto L_002CDE60;
    case 86u: goto L_002CDEA0;
    case 87u: goto L_002CDED8;
    case 88u: goto L_002CDEE4;
    case 89u: goto L_002CDF0C;
    case 90u: goto L_002CDF18;
    case 91u: goto L_002CDF50;
    case 92u: goto L_002CDF84;
    case 93u: goto L_002CDF98;
    case 94u: goto L_002CDFAC;
    case 95u: goto L_002CDFC0;
    case 96u: goto L_002CDFCC;
    case 97u: goto L_002CDFD8;
    case 98u: goto L_002CE010;
    case 99u: goto L_002CE044;
    case 100u: goto L_002CE058;
    case 101u: goto L_002CE06C;
    case 102u: goto L_002CE080;
    case 103u: goto L_002CE094;
    case 104u: goto L_002CE0A0;
    case 105u: goto L_002CE0AC;
    case 106u: goto L_002CE0F0;
    case 107u: goto L_002CE190;
    case 108u: goto L_002CE1E0;
    case 109u: goto L_002CE220;
    case 110u: goto L_002CE230;
    case 111u: goto L_002CE284;
    case 112u: goto L_002CE2B8;
    case 113u: goto L_002CE308;
    case 114u: goto L_002CE328;
    case 115u: goto L_002CE610;
    case 116u: goto L_002CE6B8;
    case 117u: goto L_002CE710;
    case 118u: goto L_002CE754;
    case 119u: goto L_002CE790;
    case 120u: goto L_002CE7B4;
    case 121u: goto L_002CE888;
    case 122u: goto L_002CE8A8;
    case 123u: goto L_002CE8DC;
    case 124u: goto L_002CE994;
    case 125u: goto L_002CE9B4;
    case 126u: goto L_002CEA98;
    case 127u: goto L_002CEACC;
    case 128u: goto L_002CEAEC;
    case 129u: goto L_002CEB10;
    case 130u: goto L_002CEB30;
    case 131u: goto L_002CEBB0;
    case 132u: goto L_002CEC24;
    case 133u: goto L_002CEC98;
    case 134u: goto L_002CEE40;
    case 135u: goto L_002CEEE0;
    case 136u: goto L_002CEF60;
    case 137u: goto L_002CF068;
    case 138u: goto L_002CF088;
    case 139u: goto L_002CF0BC;
    case 140u: goto L_002CF11C;
    case 141u: goto L_002CF190;
    case 142u: goto L_002CF1D0;
    case 143u: goto L_002CF1FC;
    case 144u: goto L_002CF240;
    case 145u: goto L_002CF280;
    case 146u: goto L_002CF2B0;
    case 147u: goto L_002CF2FC;
    case 148u: goto L_002CF304;
    case 149u: goto L_002CF30C;
    case 150u: goto L_002CF314;
    case 151u: goto L_002CF31C;
    case 152u: goto L_002CF328;
    case 153u: goto L_002CF340;
    case 154u: goto L_002CF370;
    case 155u: goto L_002CF398;
    case 156u: goto L_002CF3AC;
    case 157u: goto L_002CF3B8;
    case 158u: goto L_002CF3C4;
    case 159u: goto L_002CF3D0;
    case 160u: goto L_002CF3E8;
    case 161u: goto L_002CF40C;
    case 162u: goto L_002CF424;
    case 163u: goto L_002CF43C;
    case 164u: goto L_002CF444;
    case 165u: goto L_002CF44C;
    case 166u: goto L_002CF458;
    case 167u: goto L_002CF4DC;
    case 168u: goto L_002CF5D0;
    case 169u: goto L_002CF5DC;
    case 170u: goto L_002CF5E8;
    case 171u: goto L_002CF5F0;
    case 172u: goto L_002CF608;
    case 173u: goto L_002CF614;
    case 174u: goto L_002CF620;
    case 175u: goto L_002CF62C;
    case 176u: goto L_002CF634;
    case 177u: goto L_002CF644;
    case 178u: goto L_002CF650;
    case 179u: goto L_002CF65C;
    case 180u: goto L_002CF664;
    case 181u: goto L_002CF670;
    case 182u: goto L_002CF678;
    case 183u: goto L_002CF68C;
    case 184u: goto L_002CF698;
    case 185u: goto L_002CF6A4;
    case 186u: goto L_002CF6AC;
    case 187u: goto L_002CF6B8;
    case 188u: goto L_002CF760;
    case 189u: goto L_002CF76C;
    case 190u: goto L_002CF774;
    case 191u: goto L_002CF784;
    case 192u: goto L_002CF790;
    case 193u: goto L_002CF79C;
    case 194u: goto L_002CF7A4;
    case 195u: goto L_002CF7B4;
    case 196u: goto L_002CF7BC;
    case 197u: goto L_002CF7CC;
    case 198u: goto L_002CF7D8;
    case 199u: goto L_002CF7E4;
    case 200u: goto L_002CF9B4;
    case 201u: goto L_002CF9C0;
    case 202u: goto L_002CF9C8;
    case 203u: goto L_002CF9D8;
    case 204u: goto L_002CF9E4;
    case 205u: goto L_002CF9F0;
    case 206u: goto L_002CF9FC;
    case 207u: goto L_002CFA0C;
    case 208u: goto L_002CFA14;
    case 209u: goto L_002CFA24;
    case 210u: goto L_002CFA30;
    case 211u: goto L_002CFA3C;
    case 212u: goto L_002CFA48;
    case 213u: goto L_002CFA50;
    case 214u: goto L_002CFA60;
    case 215u: goto L_002CFA6C;
    case 216u: goto L_002CFA78;
    case 217u: goto L_002CFA84;
    case 218u: goto L_002CFA94;
    case 219u: goto L_002CFAA0;
    case 220u: goto L_002CFAAC;
    case 221u: goto L_002CFAB4;
    case 222u: goto L_002CFAC0;
    case 223u: goto L_002CFACC;
    case 224u: goto L_002CFAD4;
    case 225u: goto L_002CFAEC;
    case 226u: goto L_002CFAF8;
    case 227u: goto L_002CFB04;
    case 228u: goto L_002CFB10;
    case 229u: goto L_002CFB20;
    case 230u: goto L_002CFB2C;
    case 231u: goto L_002CFB38;
    case 232u: goto L_002CFB40;
    case 233u: goto L_002CFB4C;
    case 234u: goto L_002CFB58;
    case 235u: goto L_002CFB80;
    case 236u: goto L_002CFC34;
    case 237u: goto L_002CFCE0;
    case 238u: goto L_002CFD10;
    case 239u: goto L_002CFD38;
    case 240u: goto L_002CFD4C;
    case 241u: goto L_002CFD58;
    case 242u: goto L_002CFD64;
    case 243u: goto L_002CFD70;
    case 244u: goto L_002CFD88;
    case 245u: goto L_002CFDAC;
    case 246u: goto L_002CFDC4;
    case 247u: goto L_002CFDDC;
    case 248u: goto L_002CFDE4;
    case 249u: goto L_002CFDEC;
    case 250u: goto L_002CFDF8;
    case 251u: goto L_002CFE8C;
    case 252u: goto L_002CFF80;
    case 253u: goto L_002CFF8C;
    case 254u: goto L_002CFF98;
    case 255u: goto L_002CFFA0;
    case 256u: goto L_002CFFB8;
    case 257u: goto L_002CFFC4;
    case 258u: goto L_002CFFD0;
    case 259u: goto L_002CFFDC;
    case 260u: goto L_002CFFE4;
    case 261u: goto L_002CFFF4;
    default: bad_entry(c, 0x002CC000u); return;
    }
L_002CC000:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[10], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));  if (t) { goto L_002CC044; } }
    set32(c.r[2], c.r[2].w[0] + 31u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[10], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));  if (t) { goto L_002CC044; } }
L_002CC014:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_002CC044; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 9u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[2], c.r[2].w[0] - 18896u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    mmi::mult(c, 0, c.r[10].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[10], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));  if (t) { goto L_002CC044; } }
    set32(c.r[2], c.r[2].w[0] + 31u);
    set32(c.r[10], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.budget -= 2;
L_002CC044:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_002CC084; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[2], c.r[2].w[0] - 18832u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 375u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    mmi::mult(c, 0, c.r[10].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[10], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));  if (t) { goto L_002CC084; } }
    set32(c.r[2], c.r[2].w[0] + 31u);
    set32(c.r[10], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.budget -= 2;
L_002CC084:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 2656u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 372u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    mmi::mult(c, 0, c.r[10].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));  if (t) { goto L_002CC0B0; } }
    set32(c.r[2], c.r[3].w[0] + 31u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.budget -= 2;
L_002CC0B0:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_002CC0E8; } }
    c.r[4].d[0] = ld8((c.r[4].w[0] + 531u));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 531u));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));  if (t) { goto L_002CC10C; } }
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { mmi::paddub(c.r[2], c.r[3], c.r[0]);  goto L_002CC0E0; }
    set32(c.r[2], c.r[2].w[0] + 7u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));
    mmi::paddub(c.r[2], c.r[3], c.r[0]);
    c.budget -= 3;
L_002CC0E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 270u)));  if (t) { goto L_002CC110; } }
L_002CC0E8:
    c.r[4].d[0] = ld8((c.r[4].w[0] + 531u));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 531u));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));  if (t) { goto L_002CC10C; } }
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { mmi::paddub(c.r[2], c.r[3], c.r[0]);  goto L_002CC10C; }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    mmi::paddub(c.r[2], c.r[3], c.r[0]);
    c.budget -= 3;
L_002CC10C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 270u)));
    c.budget -= 1;
L_002CC110:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002CC15C; } }
    set32(c.r[4], ld32((c.r[5].w[0] + 264u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002CC15C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002CC15C; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 8192ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));  if (t) { goto L_002CC15C; } }
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { mmi::paddub(c.r[2], c.r[3], c.r[0]);  goto L_002CC15C; }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    mmi::paddub(c.r[2], c.r[3], c.r[0]);
    c.budget -= 3;
L_002CC15C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002CC168; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002CC168:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CC170:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_002CC180; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002CC26C; } }
L_002CC180:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 514u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002CC194; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002CC26C; } }
L_002CC194:
    set32(c.r[6], ld32((c.r[4].w[0] + 604u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_002CC1A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002CC26C; } }
L_002CC1A8:
    set32(c.r[7], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 290u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002CC1C8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 296u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002CC1D0; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_002CC1C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CC26C; } }
L_002CC1D0:
    st16((c.r[4].w[0] + 516u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 514u)));
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    st16((c.r[4].w[0] + 514u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 514u)));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_002CC1F0; } }
    st16((c.r[4].w[0] + 514u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_002CC1F0:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002CC23C; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 514u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_002CC260; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 529u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CC260; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 531u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[2], c.r[2].w[0] + 29596u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002CC260; } }
L_002CC23C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 514u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_002CC260; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 1u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002CC260; } }
    set32(c.r[2], 0u + 1u);
    st16((c.r[4].w[0] + 514u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002CC260:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 514u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
L_002CC26C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CC280:
    c.r[2].d[0] = ld8((c.r[5].w[0] + 5u));
    c.r[6].d[0] = ld8((c.r[4].w[0] + 581u));
    c.r[7].d[0] = ld8((c.r[5].w[0] + 13u));
    set32(c.r[3], 0u + 1u);
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    set32(c.r[5], c.r[3].w[0] << (c.r[6].w[0] & 31u));
    c.r[3].d[0] = c.r[7].d[0] & 4ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));  if (t) { goto L_002CC2D0; } }
    c.r[3].d[0] = c.r[7].d[0] & 8ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00070000u);  if (t) { goto L_002CC2BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 4ull;  if (t) { goto L_002CC2D0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00070000u);
    c.budget -= 1;
L_002CC2BC:
    c.r[3].d[0] = c.r[3].d[0] | 61443ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[7].d[0] & 32ull;  if (t) { goto L_002CC2D4; } }
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    c.budget -= 1;
L_002CC2D0:
    c.r[3].d[0] = c.r[7].d[0] & 32ull;
    c.budget -= 1;
L_002CC2D4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[7].d[0] & 1ull;  if (t) { goto L_002CC30C; } }
    c.r[3].d[0] = c.r[7].d[0] & 16ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00070000u);  if (t) { goto L_002CC2F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 2ull;  if (t) { goto L_002CC308; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00070000u);
    c.budget -= 1;
L_002CC2F4:
    c.r[3].d[0] = c.r[3].d[0] | 59384ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002CC308; } }
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    c.budget -= 1;
L_002CC308:
    c.r[3].d[0] = c.r[7].d[0] & 1ull;
    c.budget -= 1;
L_002CC30C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002CC318; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_002CC318:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    c.r[3].d[0] = c.r[6].d[0] & 8ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = c.r[2].d[0] | 1ull;  goto L_002CC348; }
    c.r[5].d[0] = ld8((c.r[4].w[0] + 741u));
    set32(c.r[3], 0u + 7u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002CC344; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[6].d[0] & 8192ull;  if (t) { goto L_002CC34C; } }
L_002CC344:
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    c.budget -= 1;
L_002CC348:
    c.r[3].d[0] = c.r[6].d[0] & 8192ull;
    c.budget -= 1;
L_002CC34C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002CC358; } }
    set32(c.r[2], 0u + 8u);
    c.budget -= 1;
L_002CC358:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CC360:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_002CC374; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 584u)));  if (t) { goto L_002CC380; } }
L_002CC374:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 84u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 586u)));
    c.budget -= 3;
L_002CC380:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[3].d[0]) { set32(c.r[2], c.r[4].w[0] - c.r[5].w[0]);  goto L_002CC3C0; }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[2], c.r[4].w[0] - c.r[5].w[0]);  goto L_002CC3A0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CC3D8; } }
    set32(c.r[2], c.r[4].w[0] - c.r[5].w[0]);
    c.budget -= 1;
L_002CC3A0:
    set32(c.r[2], c.r[2].w[0] + 8192u);
    c.r[2].d[0] = c.r[2].d[0] ^ 32768ull;
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 14));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 3ull;  if (t) { goto L_002CC3D8; } }
    set32(c.r[2], c.r[4].w[0] - c.r[5].w[0]);
    c.budget -= 1;
L_002CC3C0:
    set32(c.r[2], c.r[2].w[0] + 16384u);
    c.r[2].d[0] = c.r[2].d[0] ^ 32768ull;
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 15));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
L_002CC3D8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CC3E0:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 10u)));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 584u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[6], c.r[3].w[0] - 27120u);
    c.r[9].d[0] = 0ull | 65535ull;
    set32(c.r[3], c.r[8].w[0] << 12);
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & c.r[9].d[0];
    st16((c.r[4].w[0] + 584u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 11u)));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 586u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FD90000u);
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    c.f[2] = c.r[3].w[0];
    set32(c.r[8], c.r[8].w[0] << 12);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    st16((c.r[4].w[0] + 586u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[5].d[0] = ld8((c.r[5].w[0] + 9u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42000000u);
    c.f[0] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBDAE0000u);
    c.r[3].d[0] = c.r[3].d[0] | 5243ull;
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 104u), c.f[0]);
    c.budget -= 31;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 108u), c.r[3].w[0]);  c.pc = t; return; }
L_002CC460:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[5], c.r[17].w[0] + 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[6], c.r[29].w[0] + 64u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC484u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0045(c, 218u, depth + 1u); else { c.pc = 0x00217E60u; return; } if (c.pc != 0x002CC484u) [[unlikely]] return; }
L_002CC484:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC48Cu);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002CC48Cu) [[unlikely]] return; }
L_002CC48C:
    set32(c.r[2], ld32((c.r[17].w[0] + 88u)));
    c.r[3].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC49Cu); c.r[4].d[0] = c.r[2].d[0] & c.r[3].d[0];  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002CC49Cu) [[unlikely]] return; }
L_002CC49C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC4A4u); c.r[4].d[0] = ld16((c.r[17].w[0] + 586u));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002CC4A4u) [[unlikely]] return; }
L_002CC4A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC4ACu); c.r[4].d[0] = ld16((c.r[17].w[0] + 80u));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002CC4ACu) [[unlikely]] return; }
L_002CC4AC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC4BCu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 210u, depth + 1u); else { c.pc = 0x00102500u; return; } if (c.pc != 0x002CC4BCu) [[unlikely]] return; }
L_002CC4BC:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC4C8u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x002CC4C8u) [[unlikely]] return; }
L_002CC4C8:
    set32(c.r[16], c.r[29].w[0] + 68u);
    c.f[0] = ld32((c.r[29].w[0] + 72u));
    c.f[1] = ld32((c.r[16].w[0]));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC4E0u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002CC4E0u) [[unlikely]] return; }
L_002CC4E0:
    c.f[1] = ld32((c.r[16].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 586u)));
    fpu_div(c, 20u, c.f[1], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC4FCu);  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x002CC4FCu) [[unlikely]] return; }
L_002CC4FC:
    c.f[3] = ld32((c.r[17].w[0] + 104u));
    c.f[2] = ld32((c.r[17].w[0] + 1004u));
    c.f[1] = ld32((c.r[17].w[0] + 32u));
    c.f[3] = fp::mul(c.f[3], c.f[20]);
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 32u), c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC524u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 586u)));  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x002CC524u) [[unlikely]] return; }
L_002CC524:
    c.f[3] = ld32((c.r[17].w[0] + 104u));
    c.f[2] = ld32((c.r[17].w[0] + 1004u));
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    set32(c.r[5], c.r[17].w[0] + 32u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.f[3] = fp::mul(c.f[3], c.f[20]);
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 40u), c.f[0]);
    c.f[2] = ld32((c.r[17].w[0] + 108u));
    c.f[1] = ld32((c.r[17].w[0] + 1004u));
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC568u); st32((c.r[17].w[0] + 104u), c.f[0]);  if (depth < kMaxDepth) unit_0045(c, 199u, depth + 1u); else { c.pc = 0x00217650u; return; } if (c.pc != 0x002CC568u) [[unlikely]] return; }
L_002CC568:
    st32((c.r[17].w[0] + 36u), c.f[0]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002CC590:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 10u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 584u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], c.r[2].w[0] - 27088u);
    c.r[8].d[0] = 0ull | 65535ull;
    set32(c.r[2], c.r[7].w[0] << 12);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & c.r[8].d[0];
    st16((c.r[4].w[0] + 584u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 11u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 586u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F430000u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    c.f[2] = c.r[2].w[0];
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[7], c.r[7].w[0] << 12);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42000000u);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.f[0] = c.r[2].w[0];
    st16((c.r[4].w[0] + 586u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[2].d[0] = ld8((c.r[5].w[0] + 9u));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 584u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_div(c, 20u, c.f[1], c.f[0]);
    c.budget -= 35;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC61Cu);  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x002CC61Cu) [[unlikely]] return; }
L_002CC61C:
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC62Cu); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 584u)));  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x002CC62Cu) [[unlikely]] return; }
L_002CC62C:
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    st32((c.r[16].w[0] + 52u), c.f[0]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002CC650:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC668u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 586u)));  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x002CC668u) [[unlikely]] return; }
L_002CC668:
    c.f[3] = ld32((c.r[16].w[0] + 104u));
    c.f[2] = ld32((c.r[16].w[0] + 1004u));
    c.f[1] = ld32((c.r[16].w[0] + 32u));
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 32u), c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC68Cu); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 586u)));  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x002CC68Cu) [[unlikely]] return; }
L_002CC68C:
    c.f[4] = ld32((c.r[16].w[0] + 104u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBD730000u);
    c.r[3].d[0] = c.r[3].d[0] | 46662ull;
    c.f[3] = ld32((c.r[16].w[0] + 1004u));
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[2] = c.r[3].w[0];
    c.f[0] = fp::mul(c.f[4], c.f[0]);
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 40u), c.f[0]);
    c.f[3] = ld32((c.r[16].w[0] + 52u));
    c.f[1] = ld32((c.r[16].w[0] + 1004u));
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    c.f[1] = fp::mul(c.f[3], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 36u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 1004u));
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 52u), c.f[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 25;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002CC6F0:
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 736u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 7u);
    st8((c.r[4].w[0] + 741u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    set32(c.r[3], 0u + 2u);
    c.r[5].d[0] = c.r[5].d[0] | 8ull;
    st16((c.r[4].w[0] + 812u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[4].w[0] + 530u));
    c.r[5].d[0] = c.r[5].d[0] | 32ull;
    st8((c.r[4].w[0] + 530u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 1601u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_002CC730:
    set32(c.r[3], 0u + 5u);
    st8((c.r[4].w[0] + 736u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 741u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    set32(c.r[3], 0u - 9u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    st16((c.r[4].w[0] + 812u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] | 8192ull;
    st16((c.r[4].w[0] + 812u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 530u));
    c.r[3].d[0] = c.r[3].d[0] & 15ull;
    st8((c.r[4].w[0] + 530u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 52u), 0u);
    st32((c.r[4].w[0] + 68u), 0u);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 1601u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_002CC780:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld16((c.r[4].w[0] + 536u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002CC7B0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 616u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[16].w[0] + 32u);  if (t) { goto L_002CC7B4; } }
    st16((c.r[16].w[0] + 536u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 616u), 0u);
    c.budget -= 2;
L_002CC7B0:
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.budget -= 1;
L_002CC7B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC7BCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0045(c, 199u, depth + 1u); else { c.pc = 0x00217650u; return; } if (c.pc != 0x002CC7BCu) [[unlikely]] return; }
L_002CC7BC:
    st32((c.r[16].w[0] + 36u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 132u));
    c.f[2] = ld32((c.r[16].w[0] + 8028u));
    c.f[1] = fp::sub(c.f[0], c.f[1]);
    c.f[0] = c.f[2] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002CC7F8; } }
    set32(c.r[2], 0u + 30u);
    st8((c.r[16].w[0] + 744u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 132u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 36u), c.f[0]);  if (t) { goto L_002CC85C; } }
L_002CC7F8:
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002CC85C; } }
    c.f[1] = ld32((c.r[16].w[0] + 32u));
    c.f[0] = ld32((c.r[16].w[0] + 128u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002CC838; } }
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = ld32((c.r[16].w[0] + 136u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002CC858; } }
L_002CC838:
    c.f[3] = ld32((c.r[16].w[0] + 128u));
    c.f[2] = ld32((c.r[16].w[0] + 132u));
    c.f[1] = ld32((c.r[16].w[0] + 136u));
    c.f[0] = ld32((c.r[16].w[0] + 140u));
    st32((c.r[16].w[0] + 32u), c.f[3]);
    st32((c.r[16].w[0] + 36u), c.f[2]);
    st32((c.r[16].w[0] + 40u), c.f[1]);
    st32((c.r[16].w[0] + 44u), c.f[0]);
    c.budget -= 8;
L_002CC858:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_002CC85C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002CC870:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[3] = ld32((c.r[4].w[0] + 32u));
    c.f[2] = ld32((c.r[4].w[0] + 36u));
    c.f[1] = ld32((c.r[4].w[0] + 40u));
    c.f[0] = ld32((c.r[4].w[0] + 44u));
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[2], c.r[29].w[0] + 64u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[5].w[0]), c.f[3]);
    st32((c.r[5].w[0] + 4u), c.f[2]);
    st32((c.r[5].w[0] + 8u), c.f[1]);
    st32((c.r[5].w[0] + 12u), c.f[0]);
    c.f[3] = ld32((c.r[4].w[0] + 128u));
    c.f[2] = ld32((c.r[4].w[0] + 132u));
    c.f[1] = ld32((c.r[4].w[0] + 136u));
    c.f[0] = ld32((c.r[4].w[0] + 140u));
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.budget -= 26;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { goto L_002CC968; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00070000u);
    set32(c.r[3], c.r[3].w[0] << (c.r[4].w[0] & 31u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[17].w[0] + 32u);  goto L_002CC96C; }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 580u));
    set32(c.r[2], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002CC968; } }
    set32(c.r[2], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002CC968; } }
    set32(c.r[2], 0u + 19u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002CC968; } }
    set32(c.r[2], 0u + 20u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002CC968; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[2], c.r[2].w[0] - 18464u);
    c.f[1] = ld32((c.r[29].w[0] + 52u));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 68u));
    c.f[2] = ld32((c.r[2].w[0]));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[2], c.r[2].w[0] - 18464u);
    st32((c.r[29].w[0] + 52u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8386u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.budget -= 17;
L_002CC968:
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 1;
L_002CC96C:
    set32(c.r[5], c.r[29].w[0] + 120u);
    set32(c.r[6], c.r[29].w[0] + 124u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC97Cu); mmi::paddub(c.r[7], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0046(c, 25u, depth + 1u); else { c.pc = 0x00218EB0u; return; } if (c.pc != 0x002CC97Cu) [[unlikely]] return; }
L_002CC97C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[16], c.r[29].w[0] + 52u);  if (t) { goto L_002CC990; } }
    st32((c.r[29].w[0] + 124u), 0u);
    set32(c.r[16], c.r[29].w[0] + 52u);
    c.budget -= 2;
L_002CC990:
    c.f[0] = ld32((c.r[29].w[0] + 124u));
    c.f[1] = ld32((c.r[16].w[0]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[5], c.r[29].w[0] + 48u);  if (t) { goto L_002CC9B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002CCAB4; } }
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.budget -= 1;
L_002CC9B4:
    set32(c.r[6], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC9C0u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0045(c, 218u, depth + 1u); else { c.pc = 0x00217E60u; return; } if (c.pc != 0x002CC9C0u) [[unlikely]] return; }
L_002CC9C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC9C8u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x002CC9C8u) [[unlikely]] return; }
L_002CC9C8:
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC9D8u); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002CC9D8u) [[unlikely]] return; }
L_002CC9D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC9E0u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000F(c, 20u, depth + 1u); else { c.pc = 0x0013C9E0u; return; } if (c.pc != 0x002CC9E0u) [[unlikely]] return; }
L_002CC9E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002CCA2C; } }
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCA0Cu); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x002CCA0Cu) [[unlikely]] return; }
L_002CCA0C:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002CCA2C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002CCAB4; } }
L_002CCA2C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 744u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 120u)));  if (t) { goto L_002CCA40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 854u)));  if (t) { goto L_002CCA48; } }
L_002CCA40:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 852u)));
    c.budget -= 2;
L_002CCA48:
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002CCAA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCA5Cu); c.r[4].d[0] = c.r[3].d[0] & 65535ull;  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x002CCA5Cu) [[unlikely]] return; }
L_002CCA5C:
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[2] = ld32((c.r[29].w[0] + 124u));
    set32(c.r[4], c.r[29].w[0] + 80u);
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCA78u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x002CCA78u) [[unlikely]] return; }
L_002CCA78:
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCA84u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x002CCA84u) [[unlikely]] return; }
L_002CCA84:
    st32((c.r[17].w[0] + 108u), 0u);
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.r[2].d[0] = c.r[2].d[0] | 26214ull;
    c.f[1] = c.r[2].w[0];
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), c.f[0]);  if (t) { goto L_002CCAB4; } }
L_002CCAA8:
    c.f[0] = ld32((c.r[29].w[0] + 124u));
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 36u), c.f[0]);
    c.budget -= 3;
L_002CCAB4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002CCAD0:
    c.r[6].d[0] = ld8((c.r[5].w[0] + 7u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[3], c.r[2].w[0] + 29984u);
    set32(c.r[2], 0u + 4u);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 580u));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == c.r[2].d[0]; set32(c.r[5], ld32((c.r[3].w[0])));  if (t) { goto L_002CCB34; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_002CCB24; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[2].d[0]) { set32(c.r[5], 0u + 7u);  goto L_002CCB18; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8384u)));  if (t) { goto L_002CCB3C; } }
    set32(c.r[5], 0u + 7u);
    c.budget -= 1;
L_002CCB18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CCB38; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_002CCB24:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_002CCB38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[5], c.r[3], c.r[0]);  if (t) { goto L_002CCB38; } }
L_002CCB34:
    set32(c.r[5], 0u + 8u);
    c.budget -= 1;
L_002CCB38:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8384u)));
    c.budget -= 1;
L_002CCB3C:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0018DAB0u | kUnwind; return; } [[clang::musttail]] return unit_0023(c, 144u, depth); }
L_002CCB50:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], 0u + 4u);
    c.f[20] = c.f[12];
    mmi::paddub(c.r[19], c.r[5], c.r[0]);
    mmi::paddub(c.r[20], c.r[4], c.r[0]);
    mmi::paddub(c.r[18], c.r[6], c.r[0]);
    c.budget -= 15;
    { const bool t = c.r[19].d[0] == c.r[2].d[0]; mmi::paddub(c.r[17], c.r[7], c.r[0]);  if (t) { goto L_002CCBA0; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 8000u)));
    st32((c.r[20].w[0] + 7736u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 8000u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 7776u), c.r[2].w[0]);  if (t) { goto L_002CCBB0; } }
L_002CCBA0:
    set32(c.r[2], ld32((c.r[20].w[0] + 8004u)));
    st32((c.r[20].w[0] + 7736u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 8004u)));
    st32((c.r[20].w[0] + 7776u), c.r[2].w[0]);
    c.budget -= 4;
L_002CCBB0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 762u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CCC8C; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_002CCC1C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 758u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002CCC18; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 8386u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 8387u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[4], c.r[2].w[0] + 30544u);
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 17;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);  if (t) { goto L_002CCD58; } }
L_002CCC18:
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_002CCC1C:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[2].d[0]; set32(c.r[2], c.r[18].w[0] << 2);  if (t) { goto L_002CCC74; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 8386u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 8387u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[5], c.r[2].w[0] + 30544u);
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[6], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[4], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 19;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);  if (t) { goto L_002CCD58; } }
    set32(c.r[2], c.r[18].w[0] << 2);
    c.budget -= 1;
L_002CCC74:
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 1168u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_002CCD58; } }
L_002CCC8C:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_002CCCEC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 758u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002CCCE8; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 8386u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 8387u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[4], c.r[2].w[0] + 30112u);
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 17;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);  if (t) { goto L_002CCD58; } }
L_002CCCE8:
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_002CCCEC:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[2].d[0]; set32(c.r[2], c.r[18].w[0] << 2);  if (t) { goto L_002CCD44; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 8386u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 8387u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[5], c.r[2].w[0] + 30112u);
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[6], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[4], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 19;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);  if (t) { goto L_002CCD58; } }
    set32(c.r[2], c.r[18].w[0] << 2);
    c.budget -= 1;
L_002CCD44:
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] - 1312u);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
L_002CCD58:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 7744u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002CCD90; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_002CCD90; } }
    set32(c.r[4], c.r[20].w[0] + 2048u);
    set32(c.r[5], c.r[20].w[0] + 5120u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCD80u); set32(c.r[6], c.r[20].w[0] + 4960u);  if (depth < kMaxDepth) unit_005B(c, 138u, depth + 1u); else { c.pc = 0x0026E440u; return; } if (c.pc != 0x002CCD80u) [[unlikely]] return; }
L_002CCD80:
    set32(c.r[4], c.r[20].w[0] + 2048u);
    set32(c.r[5], c.r[20].w[0] + 5136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCD90u); set32(c.r[6], c.r[20].w[0] + 4976u);  if (depth < kMaxDepth) unit_005B(c, 138u, depth + 1u); else { c.pc = 0x0026E440u; return; } if (c.pc != 0x002CCD90u) [[unlikely]] return; }
L_002CCD90:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 7784u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002CCDE8; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_002CCDE8; } }
    set32(c.r[4], c.r[20].w[0] + 1984u);
    set32(c.r[5], c.r[20].w[0] + 5088u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCDB8u); set32(c.r[6], c.r[20].w[0] + 4928u);  if (depth < kMaxDepth) unit_005B(c, 138u, depth + 1u); else { c.pc = 0x0026E440u; return; } if (c.pc != 0x002CCDB8u) [[unlikely]] return; }
L_002CCDB8:
    set32(c.r[4], c.r[20].w[0] + 1984u);
    set32(c.r[5], c.r[20].w[0] + 5104u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCDC8u); set32(c.r[6], c.r[20].w[0] + 4944u);  if (depth < kMaxDepth) unit_005B(c, 138u, depth + 1u); else { c.pc = 0x0026E440u; return; } if (c.pc != 0x002CCDC8u) [[unlikely]] return; }
L_002CCDC8:
    c.f[3] = ld32((c.r[20].w[0] + 4048u));
    c.f[2] = ld32((c.r[20].w[0] + 4052u));
    c.f[1] = ld32((c.r[20].w[0] + 4056u));
    c.f[0] = ld32((c.r[20].w[0] + 4060u));
    st32((c.r[20].w[0] + 5056u), c.f[3]);
    st32((c.r[20].w[0] + 5060u), c.f[2]);
    st32((c.r[20].w[0] + 5064u), c.f[1]);
    st32((c.r[20].w[0] + 5068u), c.f[0]);
    c.budget -= 8;
L_002CCDE8:
    st16((c.r[20].w[0] + 7744u), static_cast<std::uint16_t>(c.r[19].w[0]));
    st16((c.r[20].w[0] + 7784u), static_cast<std::uint16_t>(c.r[19].w[0]));
    st16((c.r[20].w[0] + 7746u), static_cast<std::uint16_t>(c.r[18].w[0]));
    st16((c.r[20].w[0] + 7786u), static_cast<std::uint16_t>(c.r[18].w[0]));
    c.r[4].d[0] = ld8((c.r[16].w[0]));
    set32(c.r[5], ld32((c.r[20].w[0] + 7736u)));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1u));
    set32(c.r[2], 0u + 254u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[20].w[0] + 7748u), c.r[3].w[0]);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 4u));
    set32(c.r[5], ld32((c.r[20].w[0] + 7776u)));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 5u));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[20].w[0] + 7788u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0]));
    st16((c.r[20].w[0] + 7768u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1u));
    st16((c.r[20].w[0] + 7770u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 2u));
    st8((c.r[20].w[0] + 7772u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 4u));
    st16((c.r[20].w[0] + 7808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 5u));
    st16((c.r[20].w[0] + 7810u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 6u));
    st8((c.r[20].w[0] + 7812u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[20].w[0] + 7804u), 0u);
    st32((c.r[20].w[0] + 7764u), 0u);
    st32((c.r[20].w[0] + 7800u), 0u);
    st32((c.r[20].w[0] + 7760u), 0u);
    st32((c.r[20].w[0] + 7792u), 0u);
    st32((c.r[20].w[0] + 7752u), 0u);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8u));
    c.budget -= 50;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002CCEB4; } }
    st8((c.r[20].w[0] + 8052u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_002CCEB4:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 9u));
    set32(c.r[2], 0u + 254u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 4u);  if (t) { goto L_002CCECC; } }
    st8((c.r[20].w[0] + 8053u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 4u);
    c.budget -= 2;
L_002CCECC:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_002CCF18; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 8386u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 758u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[2].w[0] + 8016u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 736u)));
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], ld32((c.r[3].w[0])));  if (t) { goto L_002CCF04; } }
    set32(c.r[3], c.r[3].w[0] + 5u);
    c.budget -= 1;
L_002CCF04:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 8387u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 754u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002CCF2C; } }
L_002CCF18:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 13u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002CCF2C; } }
    st8((c.r[20].w[0] + 754u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_002CCF2C:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 15u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[1] = c.r[2].w[0];
    set32(c.r[2], 0u - 1u);
    st8((c.r[20].w[0] + 743u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 743u)));
    c.r[3].d[0] = c.r[3].d[0] & 15ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[20].w[0] + 8020u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 11u));
    st8((c.r[20].w[0] + 8056u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 12u));
    st8((c.r[20].w[0] + 8057u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 16u));
    st8((c.r[20].w[0] + 8054u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 17u));
    st8((c.r[20].w[0] + 8055u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.budget -= 25;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002CCF94; } }
    st8((c.r[20].w[0] + 7775u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_002CCF94:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002CCFAC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    st8((c.r[20].w[0] + 7815u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002CCFAC:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 10u));
    c.r[2].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002CCFCC; } }
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = c.r[3].d[0] & 127ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCFCCu); mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 12u, depth + 1u); else { c.pc = 0x00304300u; return; } if (c.pc != 0x002CCFCCu) [[unlikely]] return; }
L_002CCFCC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 14u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002CCFE0; } }
    st8((c.r[20].w[0] + 758u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_002CCFE0:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 18u));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002CCFF4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCFF4u); mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_003C(c, 228u, depth + 1u); else { c.pc = 0x001F31E0u; return; } if (c.pc != 0x002CCFF4u) [[unlikely]] return; }
L_002CCFF4:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_002CD010; } }
    st32((c.r[20].w[0] + 7796u), c.f[20]);
    st32((c.r[20].w[0] + 7756u), c.f[20]);
    st8((c.r[20].w[0] + 7814u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 7774u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002CD020; } }
L_002CD010:
    st32((c.r[20].w[0] + 7796u), 0u);
    st32((c.r[20].w[0] + 7756u), 0u);
    st8((c.r[20].w[0] + 7814u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st8((c.r[20].w[0] + 7774u), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.budget -= 4;
L_002CD020:
    c.f[12] = c.f[20];
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD030u); mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 86u, depth + 1u); else { c.pc = 0x002CDEA0u; return; } if (c.pc != 0x002CD030u) [[unlikely]] return; }
L_002CD030:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 19u));
    st8((c.r[20].w[0] + 8058u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002CD060:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8059u)));
    mmi::paddub(c.r[19], c.r[5], c.r[0]);
    mmi::paddub(c.r[18], c.r[6], c.r[0]);
    c.f[20] = c.f[12];
    mmi::paddub(c.r[17], c.r[7], c.r[0]);
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[20], c.r[4], c.r[0]);  if (t) { goto L_002CD43C; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_002CD0B4; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 8000u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 7736u), c.r[2].w[0]);  if (t) { goto L_002CD0BC; } }
L_002CD0B4:
    set32(c.r[2], ld32((c.r[20].w[0] + 8004u)));
    st32((c.r[20].w[0] + 7736u), c.r[2].w[0]);
    c.budget -= 2;
L_002CD0BC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 762u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CD198; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_002CD128; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 758u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002CD124; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 8386u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 8387u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[4], c.r[2].w[0] + 30544u);
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 17;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);  if (t) { goto L_002CD264; } }
L_002CD124:
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_002CD128:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[2].d[0]; set32(c.r[2], c.r[18].w[0] << 2);  if (t) { goto L_002CD180; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 8386u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 8387u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[5], c.r[2].w[0] + 30544u);
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[6], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[4], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 19;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);  if (t) { goto L_002CD264; } }
    set32(c.r[2], c.r[18].w[0] << 2);
    c.budget -= 1;
L_002CD180:
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 1168u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_002CD264; } }
L_002CD198:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_002CD1F8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 758u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002CD1F4; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 8386u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 8387u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[4], c.r[2].w[0] + 30112u);
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 17;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);  if (t) { goto L_002CD264; } }
L_002CD1F4:
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_002CD1F8:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[2].d[0]; set32(c.r[2], c.r[18].w[0] << 2);  if (t) { goto L_002CD250; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 8386u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 8387u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[5], c.r[2].w[0] + 30112u);
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[6], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[4], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 19;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);  if (t) { goto L_002CD264; } }
    set32(c.r[2], c.r[18].w[0] << 2);
    c.budget -= 1;
L_002CD250:
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] - 1312u);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
L_002CD264:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 7744u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002CD29C; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_002CD29C; } }
    set32(c.r[4], c.r[20].w[0] + 2048u);
    set32(c.r[5], c.r[20].w[0] + 5120u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD28Cu); set32(c.r[6], c.r[20].w[0] + 4960u);  if (depth < kMaxDepth) unit_005B(c, 138u, depth + 1u); else { c.pc = 0x0026E440u; return; } if (c.pc != 0x002CD28Cu) [[unlikely]] return; }
L_002CD28C:
    set32(c.r[4], c.r[20].w[0] + 2048u);
    set32(c.r[5], c.r[20].w[0] + 5136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD29Cu); set32(c.r[6], c.r[20].w[0] + 4976u);  if (depth < kMaxDepth) unit_005B(c, 138u, depth + 1u); else { c.pc = 0x0026E440u; return; } if (c.pc != 0x002CD29Cu) [[unlikely]] return; }
L_002CD29C:
    st16((c.r[20].w[0] + 7744u), static_cast<std::uint16_t>(c.r[19].w[0]));
    st16((c.r[20].w[0] + 7746u), static_cast<std::uint16_t>(c.r[18].w[0]));
    c.r[4].d[0] = ld8((c.r[16].w[0]));
    set32(c.r[5], ld32((c.r[20].w[0] + 7736u)));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1u));
    set32(c.r[2], 0u + 254u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[20].w[0] + 7748u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0]));
    st16((c.r[20].w[0] + 7768u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1u));
    st16((c.r[20].w[0] + 7770u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 2u));
    st8((c.r[20].w[0] + 7772u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[20].w[0] + 7764u), 0u);
    st32((c.r[20].w[0] + 7760u), 0u);
    st32((c.r[20].w[0] + 7752u), 0u);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8u));
    c.budget -= 27;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002CD30C; } }
    st8((c.r[20].w[0] + 8052u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_002CD30C:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 9u));
    set32(c.r[2], 0u + 254u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 4u);  if (t) { goto L_002CD324; } }
    st8((c.r[20].w[0] + 8053u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 4u);
    c.budget -= 2;
L_002CD324:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_002CD370; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 8386u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 758u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[2].w[0] + 8016u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 736u)));
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], ld32((c.r[3].w[0])));  if (t) { goto L_002CD35C; } }
    set32(c.r[3], c.r[3].w[0] + 5u);
    c.budget -= 1;
L_002CD35C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 8387u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 754u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002CD384; } }
L_002CD370:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 13u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002CD384; } }
    st8((c.r[20].w[0] + 754u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_002CD384:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 11u));
    set32(c.r[2], 0u - 1u);
    st8((c.r[20].w[0] + 8056u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 16u));
    st8((c.r[20].w[0] + 8054u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002CD3A8; } }
    st8((c.r[20].w[0] + 7775u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_002CD3A8:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 10u));
    c.r[2].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002CD3C8; } }
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = c.r[3].d[0] & 127ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD3C8u); mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 12u, depth + 1u); else { c.pc = 0x00304300u; return; } if (c.pc != 0x002CD3C8u) [[unlikely]] return; }
L_002CD3C8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 14u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002CD3DC; } }
    st8((c.r[20].w[0] + 758u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_002CD3DC:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 18u));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002CD3F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD3F0u); mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_003C(c, 228u, depth + 1u); else { c.pc = 0x001F31E0u; return; } if (c.pc != 0x002CD3F0u) [[unlikely]] return; }
L_002CD3F0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_002CD404; } }
    st32((c.r[20].w[0] + 7756u), c.f[20]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 7774u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002CD40C; } }
L_002CD404:
    st32((c.r[20].w[0] + 7756u), 0u);
    st8((c.r[20].w[0] + 7774u), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.budget -= 2;
L_002CD40C:
    c.f[12] = c.f[20];
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD41Cu); mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 91u, depth + 1u); else { c.pc = 0x002CDF50u; return; } if (c.pc != 0x002CD41Cu) [[unlikely]] return; }
L_002CD41C:
    c.r[3].d[0] = ld8((c.r[20].w[0] + 8058u));
    c.r[3].d[0] = c.r[3].d[0] & 254ull;
    st8((c.r[20].w[0] + 8058u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 19u)));
    c.r[3].d[0] = ld8((c.r[20].w[0] + 8058u));
    c.r[4].d[0] = c.r[4].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[20].w[0] + 8058u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
L_002CD43C:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002CD460:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], 0u + 4u);
    c.f[20] = c.f[12];
    mmi::paddub(c.r[19], c.r[5], c.r[0]);
    mmi::paddub(c.r[20], c.r[4], c.r[0]);
    mmi::paddub(c.r[18], c.r[6], c.r[0]);
    c.budget -= 15;
    { const bool t = c.r[19].d[0] == c.r[2].d[0]; mmi::paddub(c.r[17], c.r[7], c.r[0]);  if (t) { goto L_002CD4A8; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 8000u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 7776u), c.r[2].w[0]);  if (t) { goto L_002CD4B0; } }
L_002CD4A8:
    set32(c.r[2], ld32((c.r[20].w[0] + 8004u)));
    st32((c.r[20].w[0] + 7776u), c.r[2].w[0]);
    c.budget -= 2;
L_002CD4B0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 762u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CD58C; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_002CD51C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 758u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002CD518; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 8386u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 8387u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[4], c.r[2].w[0] + 30544u);
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 17;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);  if (t) { goto L_002CD658; } }
L_002CD518:
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_002CD51C:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[2].d[0]; set32(c.r[2], c.r[18].w[0] << 2);  if (t) { goto L_002CD574; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 8386u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 8387u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[5], c.r[2].w[0] + 30544u);
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[6], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[4], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 19;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);  if (t) { goto L_002CD658; } }
    set32(c.r[2], c.r[18].w[0] << 2);
    c.budget -= 1;
L_002CD574:
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 1168u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_002CD658; } }
L_002CD58C:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_002CD5EC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 758u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002CD5E8; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 8386u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 8387u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[4], c.r[2].w[0] + 30112u);
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 17;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);  if (t) { goto L_002CD658; } }
L_002CD5E8:
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_002CD5EC:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[2].d[0]; set32(c.r[2], c.r[18].w[0] << 2);  if (t) { goto L_002CD644; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 8386u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 8387u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[5], c.r[2].w[0] + 30112u);
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[6], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[4], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 19;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);  if (t) { goto L_002CD658; } }
    set32(c.r[2], c.r[18].w[0] << 2);
    c.budget -= 1;
L_002CD644:
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] - 1312u);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
L_002CD658:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 7784u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002CD6B0; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_002CD6B0; } }
    set32(c.r[4], c.r[20].w[0] + 1984u);
    set32(c.r[5], c.r[20].w[0] + 5088u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD680u); set32(c.r[6], c.r[20].w[0] + 4928u);  if (depth < kMaxDepth) unit_005B(c, 138u, depth + 1u); else { c.pc = 0x0026E440u; return; } if (c.pc != 0x002CD680u) [[unlikely]] return; }
L_002CD680:
    set32(c.r[4], c.r[20].w[0] + 1984u);
    set32(c.r[5], c.r[20].w[0] + 5104u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD690u); set32(c.r[6], c.r[20].w[0] + 4944u);  if (depth < kMaxDepth) unit_005B(c, 138u, depth + 1u); else { c.pc = 0x0026E440u; return; } if (c.pc != 0x002CD690u) [[unlikely]] return; }
L_002CD690:
    c.f[3] = ld32((c.r[20].w[0] + 4048u));
    c.f[2] = ld32((c.r[20].w[0] + 4052u));
    c.f[1] = ld32((c.r[20].w[0] + 4056u));
    c.f[0] = ld32((c.r[20].w[0] + 4060u));
    st32((c.r[20].w[0] + 5056u), c.f[3]);
    st32((c.r[20].w[0] + 5060u), c.f[2]);
    st32((c.r[20].w[0] + 5064u), c.f[1]);
    st32((c.r[20].w[0] + 5068u), c.f[0]);
    c.budget -= 8;
L_002CD6B0:
    st16((c.r[20].w[0] + 7784u), static_cast<std::uint16_t>(c.r[19].w[0]));
    st16((c.r[20].w[0] + 7786u), static_cast<std::uint16_t>(c.r[18].w[0]));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 4u));
    set32(c.r[5], ld32((c.r[20].w[0] + 7776u)));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 5u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[1] = c.r[2].w[0];
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], 0u - 1u);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[20].w[0] + 7788u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 4u));
    st16((c.r[20].w[0] + 7808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 5u));
    st16((c.r[20].w[0] + 7810u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 6u));
    st8((c.r[20].w[0] + 7812u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 15u));
    st8((c.r[20].w[0] + 743u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 743u)));
    c.r[3].d[0] = c.r[3].d[0] & 15ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[20].w[0] + 8020u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 12u));
    st8((c.r[20].w[0] + 8057u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 17u));
    st8((c.r[20].w[0] + 8055u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[20].w[0] + 7804u), 0u);
    st32((c.r[20].w[0] + 7800u), 0u);
    st32((c.r[20].w[0] + 7792u), 0u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7u)));
    c.budget -= 44;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002CD768; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    st8((c.r[20].w[0] + 7815u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002CD768:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_002CD77C; } }
    st32((c.r[20].w[0] + 7796u), c.f[20]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 7814u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002CD784; } }
L_002CD77C:
    st32((c.r[20].w[0] + 7796u), 0u);
    st8((c.r[20].w[0] + 7814u), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.budget -= 2;
L_002CD784:
    c.f[12] = c.f[20];
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD794u); mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 98u, depth + 1u); else { c.pc = 0x002CE010u; return; } if (c.pc != 0x002CD794u) [[unlikely]] return; }
L_002CD794:
    c.r[3].d[0] = ld8((c.r[20].w[0] + 8058u));
    c.r[3].d[0] = c.r[3].d[0] & 253ull;
    st8((c.r[20].w[0] + 8058u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 19u)));
    c.r[3].d[0] = ld8((c.r[20].w[0] + 8058u));
    c.r[4].d[0] = c.r[4].d[0] & 2ull;
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[20].w[0] + 8058u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002CD7E0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    set32(c.r[2], 0u + 1u);
    c.f[20] = c.f[12];
    mmi::paddub(c.r[20], c.r[4], c.r[0]);
    mmi::paddub(c.r[19], c.r[5], c.r[0]);
    mmi::paddub(c.r[18], c.r[6], c.r[0]);
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[17], c.r[7], c.r[0]);  if (t) { goto L_002CD830; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD828u);  if (depth < kMaxDepth) unit_0059(c, 90u, depth + 1u); else { c.pc = 0x00264D10u; return; } if (c.pc != 0x002CD828u) [[unlikely]] return; }
L_002CD828:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);  if (t) { goto L_002CDC90; } }
L_002CD830:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_002CD850; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 8000u)));
    st32((c.r[20].w[0] + 7736u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 8000u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 7776u), c.r[2].w[0]);  if (t) { goto L_002CD860; } }
L_002CD850:
    set32(c.r[2], ld32((c.r[20].w[0] + 8004u)));
    st32((c.r[20].w[0] + 7736u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 8004u)));
    st32((c.r[20].w[0] + 7776u), c.r[2].w[0]);
    c.budget -= 4;
L_002CD860:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_002CD8C0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 758u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002CD8BC; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 8386u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 8387u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[4], c.r[2].w[0] + 30112u);
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 17;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);  if (t) { goto L_002CD964; } }
L_002CD8BC:
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_002CD8C0:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 5u);  if (t) { goto L_002CD8E8; } }
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] - 1312u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_002CD964; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 1;
L_002CD8E8:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_002CD91C; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[2].w[0] - 1424u);
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);  if (t) { goto L_002CD964; } }
L_002CD91C:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 8386u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 8387u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[5], c.r[2].w[0] + 30112u);
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[6], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[4], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 18;
L_002CD964:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 7744u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 4u);  if (t) { goto L_002CD988; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 7768u)));
    set32(c.r[2], 0u + 7u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002CD9C0; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_002CD988:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_002CD9C0; } }
    c.r[3].d[0] = ld8((c.r[16].w[0]));
    set32(c.r[2], 0u + 7u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002CD9C0; } }
    set32(c.r[4], c.r[20].w[0] + 2048u);
    set32(c.r[5], c.r[20].w[0] + 5120u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD9B0u); set32(c.r[6], c.r[20].w[0] + 4960u);  if (depth < kMaxDepth) unit_005B(c, 138u, depth + 1u); else { c.pc = 0x0026E440u; return; } if (c.pc != 0x002CD9B0u) [[unlikely]] return; }
L_002CD9B0:
    set32(c.r[4], c.r[20].w[0] + 2048u);
    set32(c.r[5], c.r[20].w[0] + 5136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD9C0u); set32(c.r[6], c.r[20].w[0] + 4976u);  if (depth < kMaxDepth) unit_005B(c, 138u, depth + 1u); else { c.pc = 0x0026E440u; return; } if (c.pc != 0x002CD9C0u) [[unlikely]] return; }
L_002CD9C0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 7784u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 4u);  if (t) { goto L_002CD9E4; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 7808u)));
    set32(c.r[2], 0u + 7u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002CDA3C; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_002CD9E4:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_002CDA3C; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 4u));
    set32(c.r[2], 0u + 7u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002CDA3C; } }
    set32(c.r[4], c.r[20].w[0] + 1984u);
    set32(c.r[5], c.r[20].w[0] + 5088u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDA0Cu); set32(c.r[6], c.r[20].w[0] + 4928u);  if (depth < kMaxDepth) unit_005B(c, 138u, depth + 1u); else { c.pc = 0x0026E440u; return; } if (c.pc != 0x002CDA0Cu) [[unlikely]] return; }
L_002CDA0C:
    set32(c.r[4], c.r[20].w[0] + 1984u);
    set32(c.r[5], c.r[20].w[0] + 5104u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDA1Cu); set32(c.r[6], c.r[20].w[0] + 4944u);  if (depth < kMaxDepth) unit_005B(c, 138u, depth + 1u); else { c.pc = 0x0026E440u; return; } if (c.pc != 0x002CDA1Cu) [[unlikely]] return; }
L_002CDA1C:
    c.f[3] = ld32((c.r[20].w[0] + 4048u));
    c.f[2] = ld32((c.r[20].w[0] + 4052u));
    c.f[1] = ld32((c.r[20].w[0] + 4056u));
    c.f[0] = ld32((c.r[20].w[0] + 4060u));
    st32((c.r[20].w[0] + 5056u), c.f[3]);
    st32((c.r[20].w[0] + 5060u), c.f[2]);
    st32((c.r[20].w[0] + 5064u), c.f[1]);
    st32((c.r[20].w[0] + 5068u), c.f[0]);
    c.budget -= 8;
L_002CDA3C:
    st16((c.r[20].w[0] + 7744u), static_cast<std::uint16_t>(c.r[19].w[0]));
    st16((c.r[20].w[0] + 7784u), static_cast<std::uint16_t>(c.r[19].w[0]));
    st16((c.r[20].w[0] + 7746u), static_cast<std::uint16_t>(c.r[18].w[0]));
    st16((c.r[20].w[0] + 7786u), static_cast<std::uint16_t>(c.r[18].w[0]));
    c.r[4].d[0] = ld8((c.r[16].w[0]));
    set32(c.r[5], ld32((c.r[20].w[0] + 7736u)));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1u));
    set32(c.r[2], 0u + 254u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[20].w[0] + 7748u), c.r[3].w[0]);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 4u));
    set32(c.r[5], ld32((c.r[20].w[0] + 7776u)));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 5u));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[20].w[0] + 7788u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0]));
    st16((c.r[20].w[0] + 7768u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1u));
    st16((c.r[20].w[0] + 7770u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 2u));
    st8((c.r[20].w[0] + 7772u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 4u));
    st16((c.r[20].w[0] + 7808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 5u));
    st16((c.r[20].w[0] + 7810u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 6u));
    st8((c.r[20].w[0] + 7812u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[20].w[0] + 7804u), 0u);
    st32((c.r[20].w[0] + 7764u), 0u);
    st32((c.r[20].w[0] + 7800u), 0u);
    st32((c.r[20].w[0] + 7760u), 0u);
    st32((c.r[20].w[0] + 7792u), 0u);
    st32((c.r[20].w[0] + 7752u), 0u);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8u));
    c.budget -= 50;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002CDB08; } }
    st8((c.r[20].w[0] + 8052u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_002CDB08:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 9u));
    set32(c.r[2], 0u + 254u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 4u);  if (t) { goto L_002CDB20; } }
    st8((c.r[20].w[0] + 8053u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 4u);
    c.budget -= 2;
L_002CDB20:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_002CDB6C; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 8386u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 758u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[2].w[0] + 8016u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 736u)));
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], ld32((c.r[3].w[0])));  if (t) { goto L_002CDB58; } }
    set32(c.r[3], c.r[3].w[0] + 5u);
    c.budget -= 1;
L_002CDB58:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 8387u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 754u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002CDB80; } }
L_002CDB6C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 13u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002CDB80; } }
    st8((c.r[20].w[0] + 754u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_002CDB80:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 15u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[1] = c.r[2].w[0];
    set32(c.r[2], 0u - 1u);
    st8((c.r[20].w[0] + 743u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 743u)));
    c.r[3].d[0] = c.r[3].d[0] & 15ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[20].w[0] + 8020u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 11u));
    st8((c.r[20].w[0] + 8056u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 12u));
    st8((c.r[20].w[0] + 8057u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 16u));
    st8((c.r[20].w[0] + 8054u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 17u));
    st8((c.r[20].w[0] + 8055u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.budget -= 25;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002CDBE8; } }
    st8((c.r[20].w[0] + 7775u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_002CDBE8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002CDC00; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    st8((c.r[20].w[0] + 7815u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002CDC00:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 10u));
    c.r[2].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002CDC20; } }
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = c.r[3].d[0] & 127ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDC20u); mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 12u, depth + 1u); else { c.pc = 0x00304300u; return; } if (c.pc != 0x002CDC20u) [[unlikely]] return; }
L_002CDC20:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 14u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002CDC34; } }
    st8((c.r[20].w[0] + 758u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_002CDC34:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 18u));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002CDC48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDC48u); mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_003C(c, 228u, depth + 1u); else { c.pc = 0x001F31E0u; return; } if (c.pc != 0x002CDC48u) [[unlikely]] return; }
L_002CDC48:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_002CDC64; } }
    st32((c.r[20].w[0] + 7796u), c.f[20]);
    st32((c.r[20].w[0] + 7756u), c.f[20]);
    st8((c.r[20].w[0] + 7814u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 7774u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002CDC74; } }
L_002CDC64:
    st32((c.r[20].w[0] + 7796u), 0u);
    st32((c.r[20].w[0] + 7756u), 0u);
    st8((c.r[20].w[0] + 7814u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st8((c.r[20].w[0] + 7774u), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.budget -= 4;
L_002CDC74:
    c.f[12] = c.f[20];
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDC84u); mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 86u, depth + 1u); else { c.pc = 0x002CDEA0u; return; } if (c.pc != 0x002CDC84u) [[unlikely]] return; }
L_002CDC84:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 19u));
    st8((c.r[20].w[0] + 8058u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    c.budget -= 3;
L_002CDC90:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002CDCB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDCC4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x002CDCC4u) [[unlikely]] return; }
L_002CDCC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDCCCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 78u, depth + 1u); else { c.pc = 0x002CDDC0u; return; } if (c.pc != 0x002CDCCCu) [[unlikely]] return; }
L_002CDCCC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7813u)));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002CDCF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 7773u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { goto L_002CDD18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_002CDDAC; } }
L_002CDD18:
    c.f[1] = ld32((c.r[17].w[0] + 7740u));
    c.f[0] = ld32((c.r[17].w[0] + 7752u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 7752u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 7774u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 3u);  if (t) { goto L_002CDD48; } }
    c.f[1] = ld32((c.r[17].w[0] + 7740u));
    c.f[0] = ld32((c.r[17].w[0] + 7756u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 7756u), c.f[0]);
    set32(c.r[5], 0u + 3u);
    c.budget -= 5;
L_002CDD48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDD50u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 131u, depth + 1u); else { c.pc = 0x002CEBB0u; return; } if (c.pc != 0x002CDD50u) [[unlikely]] return; }
L_002CDD50:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDD5Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 131u, depth + 1u); else { c.pc = 0x002CEBB0u; return; } if (c.pc != 0x002CDD5Cu) [[unlikely]] return; }
L_002CDD5C:
    set32(c.r[5], 0u + 7u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDD68u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 131u, depth + 1u); else { c.pc = 0x002CEBB0u; return; } if (c.pc != 0x002CDD68u) [[unlikely]] return; }
L_002CDD68:
    set32(c.r[5], 0u + 6u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDD74u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 131u, depth + 1u); else { c.pc = 0x002CEBB0u; return; } if (c.pc != 0x002CDD74u) [[unlikely]] return; }
L_002CDD74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_002CDD90; } }
L_002CDD7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDD84u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 134u, depth + 1u); else { c.pc = 0x002CEE40u; return; } if (c.pc != 0x002CDD84u) [[unlikely]] return; }
L_002CDD84:
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
L_002CDD90:
    c.r[5].d[0] = c.r[16].d[0] & 65535ull;
    c.r[2].d[0] = c.r[5].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CDD7Cu | kUnwind; return; } goto L_002CDD7C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 7773u)));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 3;
L_002CDDAC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002CDDC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 7813u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { goto L_002CDDE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_002CDE84; } }
L_002CDDE8:
    c.f[1] = ld32((c.r[17].w[0] + 7780u));
    c.f[0] = ld32((c.r[17].w[0] + 7792u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 7792u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 7814u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 8u);  if (t) { goto L_002CDE18; } }
    c.f[1] = ld32((c.r[17].w[0] + 7780u));
    c.f[0] = ld32((c.r[17].w[0] + 7796u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 7796u), c.f[0]);
    set32(c.r[5], 0u + 8u);
    c.budget -= 5;
L_002CDE18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDE20u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 131u, depth + 1u); else { c.pc = 0x002CEBB0u; return; } if (c.pc != 0x002CDE20u) [[unlikely]] return; }
L_002CDE20:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDE2Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 131u, depth + 1u); else { c.pc = 0x002CEBB0u; return; } if (c.pc != 0x002CDE2Cu) [[unlikely]] return; }
L_002CDE2C:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDE38u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 131u, depth + 1u); else { c.pc = 0x002CEBB0u; return; } if (c.pc != 0x002CDE38u) [[unlikely]] return; }
L_002CDE38:
    set32(c.r[5], 0u + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDE44u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 131u, depth + 1u); else { c.pc = 0x002CEBB0u; return; } if (c.pc != 0x002CDE44u) [[unlikely]] return; }
L_002CDE44:
    set32(c.r[5], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDE50u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 131u, depth + 1u); else { c.pc = 0x002CEBB0u; return; } if (c.pc != 0x002CDE50u) [[unlikely]] return; }
L_002CDE50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(6ll);  if (t) { goto L_002CDE68; } }
L_002CDE58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDE60u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 134u, depth + 1u); else { c.pc = 0x002CEE40u; return; } if (c.pc != 0x002CDE60u) [[unlikely]] return; }
L_002CDE60:
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 2;
L_002CDE68:
    c.r[5].d[0] = c.r[16].d[0] & 65535ull;
    c.r[2].d[0] = c.r[5].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CDE58u | kUnwind; return; } goto L_002CDE58; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 7813u)));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 3;
L_002CDE84:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002CDEA0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    st8((c.r[4].w[0] + 7813u), static_cast<std::uint8_t>(0u));
    c.f[20] = c.f[12];
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    st8((c.r[4].w[0] + 7773u), static_cast<std::uint8_t>(0u));
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_002CDEF0; } }
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 1;
L_002CDED8:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDEE4u); mmi::paddub(c.r[6], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 106u, depth + 1u); else { c.pc = 0x002CE0F0u; return; } if (c.pc != 0x002CDEE4u) [[unlikely]] return; }
L_002CDEE4:
    set32(c.r[3], c.r[16].w[0] + 1u);
    c.r[16].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 3;
L_002CDEF0:
    c.r[5].d[0] = c.r[16].d[0] & 65535ull;
    c.r[3].d[0] = c.r[5].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CDED8u | kUnwind; return; } goto L_002CDED8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_002CDF20; } }
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 1;
L_002CDF0C:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDF18u); mmi::paddub(c.r[6], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 115u, depth + 1u); else { c.pc = 0x002CE610u; return; } if (c.pc != 0x002CDF18u) [[unlikely]] return; }
L_002CDF18:
    set32(c.r[3], c.r[16].w[0] + 1u);
    c.r[16].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 2;
L_002CDF20:
    c.r[5].d[0] = c.r[16].d[0] & 65535ull;
    c.r[3].d[0] = c.r[5].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CDF0Cu | kUnwind; return; } goto L_002CDF0C; } }
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002CDF50:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[5], 0u + 3u);
    c.f[20] = c.f[12];
    st8((c.r[4].w[0] + 7773u), static_cast<std::uint8_t>(0u));
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDF84u); mmi::paddub(c.r[6], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 106u, depth + 1u); else { c.pc = 0x002CE0F0u; return; } if (c.pc != 0x002CDF84u) [[unlikely]] return; }
L_002CDF84:
    set32(c.r[5], 0u + 2u);
    c.f[12] = c.f[20];
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDF98u); mmi::paddub(c.r[6], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 106u, depth + 1u); else { c.pc = 0x002CE0F0u; return; } if (c.pc != 0x002CDF98u) [[unlikely]] return; }
L_002CDF98:
    set32(c.r[5], 0u + 7u);
    c.f[12] = c.f[20];
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDFACu); mmi::paddub(c.r[6], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 106u, depth + 1u); else { c.pc = 0x002CE0F0u; return; } if (c.pc != 0x002CDFACu) [[unlikely]] return; }
L_002CDFAC:
    set32(c.r[5], 0u + 6u);
    c.f[12] = c.f[20];
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDFC0u); mmi::paddub(c.r[6], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 106u, depth + 1u); else { c.pc = 0x002CE0F0u; return; } if (c.pc != 0x002CDFC0u) [[unlikely]] return; }
L_002CDFC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_002CDFE0; } }
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 1;
L_002CDFCC:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDFD8u); mmi::paddub(c.r[6], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 115u, depth + 1u); else { c.pc = 0x002CE610u; return; } if (c.pc != 0x002CDFD8u) [[unlikely]] return; }
L_002CDFD8:
    set32(c.r[3], c.r[16].w[0] + 1u);
    c.r[16].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 2;
L_002CDFE0:
    c.r[5].d[0] = c.r[16].d[0] & 65535ull;
    c.r[3].d[0] = c.r[5].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CDFCCu | kUnwind; return; } goto L_002CDFCC; } }
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002CE010:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[5], 0u + 8u);
    c.f[20] = c.f[12];
    st8((c.r[4].w[0] + 7813u), static_cast<std::uint8_t>(0u));
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE044u); mmi::paddub(c.r[6], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 106u, depth + 1u); else { c.pc = 0x002CE0F0u; return; } if (c.pc != 0x002CE044u) [[unlikely]] return; }
L_002CE044:
    set32(c.r[5], 0u + 1u);
    c.f[12] = c.f[20];
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE058u); mmi::paddub(c.r[6], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 106u, depth + 1u); else { c.pc = 0x002CE0F0u; return; } if (c.pc != 0x002CE058u) [[unlikely]] return; }
L_002CE058:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.f[12] = c.f[20];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE06Cu); mmi::paddub(c.r[6], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 106u, depth + 1u); else { c.pc = 0x002CE0F0u; return; } if (c.pc != 0x002CE06Cu) [[unlikely]] return; }
L_002CE06C:
    set32(c.r[5], 0u + 5u);
    c.f[12] = c.f[20];
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE080u); mmi::paddub(c.r[6], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 106u, depth + 1u); else { c.pc = 0x002CE0F0u; return; } if (c.pc != 0x002CE080u) [[unlikely]] return; }
L_002CE080:
    set32(c.r[5], 0u + 4u);
    c.f[12] = c.f[20];
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE094u); mmi::paddub(c.r[6], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 106u, depth + 1u); else { c.pc = 0x002CE0F0u; return; } if (c.pc != 0x002CE094u) [[unlikely]] return; }
L_002CE094:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(6ll);  if (t) { goto L_002CE0B8; } }
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 1;
L_002CE0A0:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE0ACu); mmi::paddub(c.r[6], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 115u, depth + 1u); else { c.pc = 0x002CE610u; return; } if (c.pc != 0x002CE0ACu) [[unlikely]] return; }
L_002CE0AC:
    set32(c.r[3], c.r[16].w[0] + 1u);
    c.r[16].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 3;
L_002CE0B8:
    c.r[5].d[0] = c.r[16].d[0] & 65535ull;
    c.r[3].d[0] = c.r[5].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CE0A0u | kUnwind; return; } goto L_002CE0A0; } }
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002CE0F0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    mmi::paddub(c.r[21], c.r[5], c.r[0]);
    set32(c.r[3], c.r[21].w[0] - 2u);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.f[20] = c.f[12];
    mmi::paddub(c.r[16], c.r[6], c.r[0]);
    c.budget -= 17;
    { const bool t = c.r[1].d[0] != 0ull; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { goto L_002CE144; } }
    set32(c.r[6], c.r[21].w[0] - 6u);
    c.r[1].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[18], c.r[17].w[0] + 7776u);  if (t) { goto L_002CE150; } }
L_002CE144:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[17].w[0] + 7736u);  if (t) { goto L_002CE150; } }
    set32(c.r[18], c.r[17].w[0] + 7776u);
    c.budget -= 1;
L_002CE150:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 39u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[6], c.r[6].w[0] + 30976u);
    set32(c.r[9], ld32((c.r[18].w[0])));
    set32(c.r[8], c.r[21].w[0] << 1);
    set32(c.r[8], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[6], ld32((c.r[18].w[0] + 12u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], ld32((c.r[6].w[0])));
    set32(c.r[20], c.r[9].w[0] + c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[20].w[0])));
    set32(c.r[19], c.r[9].w[0] + c.r[6].w[0]);
    set32(c.r[6], 0u - 1u);
    c.budget -= 16;
L_002CE190:
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[7], ld32((c.r[19].w[0])));
    c.budget -= 7;
    { const bool t = c.r[7].d[0] != c.r[6].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CE190u | kUnwind; return; } goto L_002CE190; } }
    c.f[0] = ld32((c.r[19].w[0] - 8u));
    c.f[12] = fp::cvt_s_w(c.f[0]);
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[12]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;  if (t) { goto L_002CE210; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[6].d[0] == 0ull) { c.f[20] = c.f[12];  goto L_002CE20C; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[6].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[0] = fp::add(c.f[0], c.f[12]);  if (t) { goto L_002CE1E8; } }
L_002CE1E0:
    c.f[20] = fp::sub(c.f[20], c.f[0]);
    c.budget -= 2;
L_002CE1E8:
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CE1E0u | kUnwind; return; } goto L_002CE1E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CE20C; } }
    c.f[20] = c.f[12];
    c.budget -= 1;
L_002CE20C:
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 1;
L_002CE210:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[21].w[0] << 3);  if (t) { goto L_002CE2E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE220u);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002CE220u) [[unlikely]] return; }
L_002CE220:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE230u); set32(c.r[22], c.r[2].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002CE230u) [[unlikely]] return; }
L_002CE230:
    set32(c.r[3], c.r[22].w[0] - c.r[2].w[0]);
    st32((c.r[17].w[0] + 7928u), c.r[3].w[0]);
    set32(c.r[3], 0u + 2u);
    c.budget -= 5;
    { const bool t = c.r[21].d[0] != c.r[3].d[0]; set32(c.r[5], c.r[17].w[0] + 7824u);  if (t) { goto L_002CE250; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[17].w[0] + 7840u);  if (t) { goto L_002CE250; } }
    set32(c.r[5], c.r[17].w[0] + 7824u);
    c.budget -= 1;
L_002CE250:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 39u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002CE26C; } }
    c.f[0] = ld32((c.r[19].w[0] - 4u));
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.f[0]);  if (t) { goto L_002CE274; } }
L_002CE26C:
    c.f[0] = ld32((c.r[19].w[0] - 4u));
    st32((c.r[5].w[0]), c.f[0]);
    c.budget -= 2;
L_002CE274:
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[6], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
L_002CE284:
    set32(c.r[6], c.r[6].w[0] + 8u);
    set32(c.r[4], ld32((c.r[6].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CE284u | kUnwind; return; } goto L_002CE284; } }
    c.f[0] = ld32((c.r[6].w[0] - 4u));
    st32((c.r[5].w[0] + 4u), c.f[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[6], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], 0u - 1u);
    c.budget -= 6;
L_002CE2B8:
    set32(c.r[6], c.r[6].w[0] + 8u);
    set32(c.r[4], ld32((c.r[6].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CE2B8u | kUnwind; return; } goto L_002CE2B8; } }
    c.f[0] = ld32((c.r[6].w[0] - 4u));
    st32((c.r[5].w[0] + 8u), c.f[0]);
    set32(c.r[3], c.r[21].w[0] << 3);
    c.budget -= 3;
L_002CE2E0:
    set32(c.r[5], c.r[3].w[0] - c.r[21].w[0]);
    set32(c.r[3], c.r[21].w[0] << 4);
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[6], c.r[3].w[0] + 4928u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[17].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (t) { goto L_002CE5D0; } }
L_002CE308:
    set32(c.r[10], ld32((c.r[20].w[0])));
    set32(c.r[8], ld32((c.r[18].w[0])));
    set32(c.r[3], c.r[5].w[0] + 5216u);
    set32(c.r[9], 0u - 1u);
    set32(c.r[8], c.r[8].w[0] + c.r[10].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[11], c.r[8].w[0] + 8u);  if (t) { goto L_002CE330; } }
    mmi::paddub(c.r[8], c.r[11], c.r[0]);
    c.budget -= 1;
L_002CE328:
    set32(c.r[11], c.r[11].w[0] + 8u);
    c.budget -= 2;
L_002CE330:
    set32(c.r[10], ld32((c.r[11].w[0])));
    c.f[0] = c.r[10].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002CE358; } }
    c.budget -= 2;
    if (c.r[10].d[0] != c.r[9].d[0]) { mmi::paddub(c.r[8], c.r[11], c.r[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CE328u | kUnwind; return; } goto L_002CE328; }
L_002CE358:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[9], 0u + 1u);  if (t) { goto L_002CE4F0; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull; st16((c.r[3].w[0] + 4u), static_cast<std::uint16_t>(0u));  if (t) { goto L_002CE388; } }
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 39u)));
    c.budget -= 3;
    { const bool t = c.r[9].d[0] == 0ull;  if (t) { goto L_002CE388; } }
    c.f[1] = ld32((c.r[8].w[0] + 4u));
    c.f[0] = ld32((c.r[11].w[0] + 4u));
    c.f[2] = c.f[1] ^ fp::kSign;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[0] ^ fp::kSign;  if (t) { goto L_002CE398; } }
L_002CE388:
    c.f[2] = ld32((c.r[8].w[0] + 4u));
    c.f[0] = ld32((c.r[11].w[0] + 4u));
    c.budget -= 4;
L_002CE398:
    set32(c.r[10], ld32((c.r[11].w[0])));
    set32(c.r[9], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[10].d[0] == c.r[9].d[0];  if (t) { goto L_002CE40C; } }
    set32(c.r[7], ld32((c.r[8].w[0])));
    c.f[1] = fp::sub(c.f[0], c.f[2]);
    set32(c.r[7], c.r[10].w[0] - c.r[7].w[0]);
    c.f[0] = c.r[7].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[3].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[8].w[0]));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::sub(c.f[20], c.f[0]);
    st32((c.r[3].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 16u));
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[3].w[0] + 12u), c.f[0]);
    st32((c.r[3].w[0] + 8u), c.f[2]);
    st32((c.r[3].w[0]), c.r[11].w[0]);
    c.f[0] = ld32((c.r[11].w[0]));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[3].w[0] + 24u), c.f[0]);
    c.f[1] = ld32((c.r[3].w[0] + 12u));
    c.f[0] = ld32((c.r[3].w[0] + 20u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::add(c.f[2], c.f[0]);
    c.budget -= 25;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.f[0]);  if (t) { goto L_002CE5B8; } }
L_002CE40C:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[9].d[0] == 0ull; set32(c.r[9], 0u + 2u);  if (t) { goto L_002CE428; } }
    set32(c.r[9], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 37u), static_cast<std::uint8_t>(c.r[9].w[0]));  if (t) { goto L_002CE430; } }
    set32(c.r[9], 0u + 2u);
    c.budget -= 1;
L_002CE428:
    st8((c.r[18].w[0] + 37u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.budget -= 2;
L_002CE430:
    c.f[0] = ld32((c.r[8].w[0]));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[18].w[0] + 20u), c.f[0]);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 36u)));
    c.budget -= 6;
    if (c.r[9].d[0] == 0ull) { c.r[7].sd[0] = static_cast<std::int32_t>(0x461C0000u);  goto L_002CE4C0; }
    set32(c.r[10], ld32((c.r[20].w[0])));
    set32(c.r[9], ld32((c.r[18].w[0])));
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != 0ull; set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);  if (t) { goto L_002CE470; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 39u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_002CE470; } }
    c.f[0] = ld32((c.r[9].w[0] + 4u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[0] ^ fp::kSign;  if (t) { goto L_002CE478; } }
L_002CE470:
    c.f[0] = ld32((c.r[9].w[0] + 4u));
    c.budget -= 2;
L_002CE478:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[3].w[0] + 16u), c.r[7].w[0]);
    c.f[1] = ld32((c.r[8].w[0]));
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::sub(c.f[20], c.f[1]);
    st32((c.r[3].w[0] + 20u), c.f[1]);
    st32((c.r[3].w[0] + 24u), 0u);
    st32((c.r[3].w[0] + 12u), c.f[0]);
    st32((c.r[3].w[0] + 8u), c.f[2]);
    st32((c.r[3].w[0]), c.r[9].w[0]);
    c.f[1] = ld32((c.r[3].w[0] + 12u));
    c.f[0] = ld32((c.r[3].w[0] + 20u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::add(c.f[2], c.f[0]);
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.f[0]);  if (t) { goto L_002CE5B8; } }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x461C0000u);
    c.budget -= 1;
L_002CE4C0:
    c.r[7].d[0] = c.r[7].d[0] | 15360ull;
    st32((c.r[3].w[0] + 16u), c.r[7].w[0]);
    st32((c.r[3].w[0] + 20u), 0u);
    st32((c.r[3].w[0] + 12u), 0u);
    st32((c.r[3].w[0] + 8u), c.f[2]);
    st32((c.r[3].w[0]), c.r[8].w[0]);
    c.f[0] = ld32((c.r[8].w[0]));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[3].w[0] + 24u), c.f[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.f[2]);  if (t) { goto L_002CE5B8; } }
    set32(c.r[9], 0u + 1u);
    c.budget -= 1;
L_002CE4F0:
    st16((c.r[3].w[0] + 4u), static_cast<std::uint16_t>(c.r[9].w[0]));
    set32(c.r[10], ld32((c.r[11].w[0])));
    set32(c.r[9], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[10].d[0] != c.r[9].d[0];  if (t) { goto L_002CE510; } }
    set32(c.r[10], ld32((c.r[20].w[0])));
    set32(c.r[9], ld32((c.r[18].w[0])));
    set32(c.r[11], c.r[9].w[0] + c.r[10].w[0]);
    c.budget -= 3;
L_002CE510:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_002CE538; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 39u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_002CE538; } }
    c.f[1] = ld32((c.r[8].w[0] + 4u));
    c.f[0] = ld32((c.r[11].w[0] + 4u));
    c.f[3] = c.f[1] ^ fp::kSign;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.f[1] = c.f[0] ^ fp::kSign;  if (t) { goto L_002CE548; } }
L_002CE538:
    c.f[3] = ld32((c.r[8].w[0] + 4u));
    c.f[1] = ld32((c.r[11].w[0] + 4u));
    c.budget -= 4;
L_002CE548:
    c.f[0] = c.r[16].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[3].w[0] + 16u), c.f[0]);
    st32((c.r[3].w[0] + 20u), 0u);
    set32(c.r[7], ld32((c.r[11].w[0])));
    set32(c.r[9], ld32((c.r[8].w[0])));
    c.budget -= 9;
    { const bool t = c.r[7].d[0] == c.r[9].d[0];  if (t) { goto L_002CE598; } }
    c.f[2] = fp::sub(c.f[1], c.f[3]);
    set32(c.r[7], c.r[7].w[0] - c.r[9].w[0]);
    c.f[1] = c.r[7].w[0];
    c.f[0] = c.r[9].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::sub(c.f[20], c.f[0]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[3] = fp::add(c.f[3], c.f[0]);
    c.budget -= 11;
L_002CE598:
    st32((c.r[3].w[0]), c.r[8].w[0]);
    st32((c.r[3].w[0] + 24u), c.f[20]);
    c.f[0] = ld32((c.r[6].w[0]));
    c.f[1] = fp::sub(c.f[3], c.f[0]);
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 16u));
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[3].w[0] + 12u), c.f[0]);
    c.budget -= 8;
L_002CE5B8:
    set32(c.r[3], c.r[4].w[0] + 1u);
    set32(c.r[20], c.r[20].w[0] + 4u);
    set32(c.r[5], c.r[5].w[0] + 28u);
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.r[4].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 6;
L_002CE5D0:
    c.r[7].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[7].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CE308u | kUnwind; return; } goto L_002CE308; } }
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_002CE610:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    mmi::paddub(c.r[20], c.r[5], c.r[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[20].w[0] - 6u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    mmi::paddub(c.r[21], c.r[4], c.r[0]);
    c.f[20] = c.f[12];
    c.budget -= 19;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[29].w[0] + 220u), c.r[6].w[0]);  if (t) { goto L_002CE664; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[21].w[0] + 7776u);  if (t) { goto L_002CE668; } }
L_002CE664:
    set32(c.r[16], c.r[21].w[0] + 7736u);
    c.budget -= 1;
L_002CE668:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[3], c.r[3].w[0] + 31032u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 39u)));
    set32(c.r[5], c.r[3].w[0] + c.r[20].w[0]);
    set32(c.r[7], ld32((c.r[16].w[0])));
    c.r[19].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[6], c.r[20].w[0] << 1);
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[5], c.r[5].w[0] + 31008u);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 36u)));
    set32(c.r[17], c.r[7].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[5], c.r[7].w[0] + c.r[3].w[0]);
    set32(c.r[3], 0u - 1u);
    c.budget -= 20;
L_002CE6B8:
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CE6B8u | kUnwind; return; } goto L_002CE6B8; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] - 4u)));
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002CE73C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.f[20] = c.f[1];  goto L_002CE73C; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[0] = fp::add(c.f[0], c.f[1]);  if (t) { goto L_002CE718; } }
L_002CE710:
    c.f[20] = fp::sub(c.f[20], c.f[0]);
    c.budget -= 2;
L_002CE718:
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CE710u | kUnwind; return; } goto L_002CE710; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 220u)));  if (t) { goto L_002CE740; } }
    c.f[20] = c.f[1];
    c.budget -= 1;
L_002CE73C:
    set32(c.r[3], ld32((c.r[29].w[0] + 220u)));
    c.budget -= 1;
L_002CE740:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[20].w[0] << 3);  if (t) { goto L_002CE758; } }
    mmi::paddub(c.r[4], c.r[21], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE754u); mmi::paddub(c.r[5], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 146u, depth + 1u); else { c.pc = 0x002CF2B0u; return; } if (c.pc != 0x002CE754u) [[unlikely]] return; }
L_002CE754:
    set32(c.r[3], c.r[20].w[0] << 3);
    c.budget -= 1;
L_002CE758:
    set32(c.r[4], c.r[3].w[0] - c.r[20].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 176u), c.r[3].w[0]);
    set32(c.r[3], c.r[19].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[18], c.r[17].w[0] + 8u);
    set32(c.r[19], c.r[21].w[0] + c.r[3].w[0]);
    st16((c.r[29].w[0] + 192u), static_cast<std::uint16_t>(0u));
    c.budget -= 14;
    { const bool t = 0ull == 0ull; c.r[23].d[0] = 0ull + static_cast<std::uint64_t>(2ll);  if (t) { goto L_002CEB60; } }
L_002CE790:
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[17], c.r[3].w[0] + 6056u);
    set32(c.r[21], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], 0u - 1u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[22], c.r[21].w[0] + 4u);  if (t) { goto L_002CE7B8; } }
    mmi::paddub(c.r[21], c.r[22], c.r[0]);
    c.budget -= 1;
L_002CE7B4:
    set32(c.r[22], c.r[22].w[0] + 4u);
    c.budget -= 1;
L_002CE7B8:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0])));
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002CE7E8; } }
    c.r[4].d[0] = c.r[4].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { mmi::paddub(c.r[21], c.r[22], c.r[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CE7B4u | kUnwind; return; } goto L_002CE7B4; }
L_002CE7E8:
    set32(c.r[3], ld32((c.r[29].w[0] + 220u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002CEA00; }
    c.r[4].d[0] = c.r[23].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st16((c.r[17].w[0] + 4u), static_cast<std::uint16_t>(0u));  if (t) { goto L_002CE828; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 39u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002CE828; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 2u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0] + 2u)));
    set32(c.r[3], 0u - c.r[3].w[0]);
    set32(c.r[5], 0u - c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = c.r[5].d[0] & 65535ull;  if (t) { goto L_002CE838; } }
L_002CE828:
    c.r[3].d[0] = ld16((c.r[21].w[0] + 2u));
    c.r[7].d[0] = ld16((c.r[22].w[0] + 2u));
    c.budget -= 4;
L_002CE838:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0])));
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_002CE8E8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0])));
    c.r[20].d[0] = c.r[3].d[0] & 65535ull;
    c.r[4].d[0] = c.r[7].d[0] & 65535ull;
    mmi::paddub(c.r[5], c.r[20], c.r[0]);
    set32(c.r[2], c.r[6].w[0] - c.r[2].w[0]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[17].w[0] + 16u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0])));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::sub(c.f[20], c.f[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE888u); st32((c.r[17].w[0] + 20u), c.f[0]);  if (depth < kMaxDepth) unit_0073(c, 145u, depth + 1u); else { c.pc = 0x002CF280u; return; } if (c.pc != 0x002CE888u) [[unlikely]] return; }
L_002CE888:
    c.f[1] = c.r[2].w[0];
    c.f[0] = ld32((c.r[17].w[0] + 16u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE8A8u);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002CE8A8u) [[unlikely]] return; }
L_002CE8A8:
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 8u), c.r[20].w[0]);
    st32((c.r[17].w[0]), c.r[22].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0])));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[17].w[0] + 24u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 12u));
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE8DCu); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002CE8DCu) [[unlikely]] return; }
L_002CE8DC:
    set32(c.r[3], c.r[20].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 4544u), c.r[3].w[0]);  if (t) { goto L_002CEB38; } }
L_002CE8E8:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[5], 0u + 2u);  if (t) { goto L_002CE904; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 37u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_002CE908; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 1;
L_002CE904:
    st8((c.r[16].w[0] + 37u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 1;
L_002CE908:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0])));
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 20u), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 36u)));
    c.budget -= 8;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[3].d[0] & 65535ull;  goto L_002CE9C4; }
    set32(c.r[5], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[22], c.r[2].w[0] + c.r[5].w[0]);  if (t) { goto L_002CE954; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 39u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CE954; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0] + 2u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_002CE960; } }
L_002CE954:
    c.r[2].d[0] = ld16((c.r[22].w[0] + 2u));
    c.budget -= 3;
L_002CE960:
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0])));
    c.r[20].d[0] = c.r[3].d[0] & 65535ull;
    mmi::paddub(c.r[5], c.r[20], c.r[0]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::sub(c.f[20], c.f[0]);
    st32((c.r[17].w[0] + 20u), c.f[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE994u); st32((c.r[17].w[0] + 24u), 0u);  if (depth < kMaxDepth) unit_0073(c, 145u, depth + 1u); else { c.pc = 0x002CF280u; return; } if (c.pc != 0x002CE994u) [[unlikely]] return; }
L_002CE994:
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 8u), c.r[20].w[0]);
    st32((c.r[17].w[0]), c.r[22].w[0]);
    c.f[1] = ld32((c.r[17].w[0] + 12u));
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE9B4u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002CE9B4u) [[unlikely]] return; }
L_002CE9B4:
    set32(c.r[3], c.r[20].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 4544u), c.r[3].w[0]);  if (t) { goto L_002CEB38; } }
    c.r[4].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 1;
L_002CE9C4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x461C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 15360ull;
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 20u), 0u);
    st32((c.r[17].w[0] + 12u), 0u);
    st32((c.r[17].w[0] + 8u), c.r[4].w[0]);
    st32((c.r[17].w[0]), c.r[21].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0])));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[17].w[0] + 24u), c.f[0]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 4544u), c.r[4].w[0]);  if (t) { goto L_002CEB38; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002CEA00:
    st16((c.r[17].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0])));
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[23].d[0] & 65535ull;  if (t) { goto L_002CEA24; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[22], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[23].d[0] & 65535ull;
    c.budget -= 4;
L_002CEA24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CEA54; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 39u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CEA54; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 2u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0] + 2u)));
    set32(c.r[3], 0u - c.r[3].w[0]);
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_002CEA60; } }
L_002CEA54:
    c.r[5].d[0] = ld16((c.r[21].w[0] + 2u));
    c.r[4].d[0] = ld16((c.r[22].w[0] + 2u));
    c.budget -= 3;
L_002CEA60:
    set32(c.r[2], ld32((c.r[29].w[0] + 220u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[17].w[0] + 16u), c.f[0]);
    st32((c.r[17].w[0] + 20u), 0u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0])));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0])));
    c.budget -= 10;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[5].d[0] & 65535ull;  goto L_002CEAF8; }
    c.r[30].d[0] = c.r[5].d[0] & 65535ull;
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CEA98u); mmi::paddub(c.r[5], c.r[30], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 145u, depth + 1u); else { c.pc = 0x002CF280u; return; } if (c.pc != 0x002CEA98u) [[unlikely]] return; }
L_002CEA98:
    c.f[0] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0])));
    c.r[20].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0])));
    c.f[1] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], c.r[3].w[0] - c.r[20].w[0]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CEACCu);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002CEACCu) [[unlikely]] return; }
L_002CEACC:
    c.f[0] = c.r[20].w[0];
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::sub(c.f[20], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CEAECu); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002CEAECu) [[unlikely]] return; }
L_002CEAEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[30].w[0] + c.r[2].w[0]);  if (t) { goto L_002CEAF8; } }
    c.r[4].d[0] = c.r[5].d[0] & 65535ull;
    c.budget -= 1;
L_002CEAF8:
    st32((c.r[17].w[0]), c.r[21].w[0]);
    st32((c.r[17].w[0] + 24u), c.f[20]);
    set32(c.r[2], ld32((c.r[19].w[0] + 4544u)));
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CEB10u); set32(c.r[5], ld32((c.r[17].w[0] + 8u)));  if (depth < kMaxDepth) unit_0073(c, 145u, depth + 1u); else { c.pc = 0x002CF280u; return; } if (c.pc != 0x002CEB10u) [[unlikely]] return; }
L_002CEB10:
    c.f[1] = c.r[2].w[0];
    c.f[0] = ld32((c.r[17].w[0] + 16u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CEB30u);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002CEB30u) [[unlikely]] return; }
L_002CEB30:
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 2;
L_002CEB38:
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[19], c.r[19].w[0] + 4u);
    set32(c.r[18], c.r[18].w[0] - 4u);
    set32(c.r[3], c.r[3].w[0] + 28u);
    st32((c.r[29].w[0] + 176u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[29].w[0] + 192u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[29].w[0] + 192u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[23].w[0] - 1u);
    c.r[23].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 10;
L_002CEB60:
    c.r[3].d[0] = ld16((c.r[29].w[0] + 192u));
    mmi::paddub(c.r[3], c.r[3], c.r[0]);
    c.r[3].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CE790u | kUnwind; return; } goto L_002CE790; } }
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_002CEBB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], c.r[5].w[0] - 2u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_002CEBD8; } }
    set32(c.r[3], c.r[5].w[0] - 6u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[4].w[0] + 7776u);  if (t) { goto L_002CEBE4; } }
L_002CEBD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[4].w[0] + 7736u);  if (t) { goto L_002CEBE4; } }
    set32(c.r[3], c.r[4].w[0] + 7776u);
    c.budget -= 1;
L_002CEBE4:
    set32(c.r[7], c.r[5].w[0] << 3);
    set32(c.r[8], c.r[7].w[0] - c.r[5].w[0]);
    set32(c.r[7], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] - c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[9], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[9].w[0]);
    set32(c.r[9], c.r[4].w[0] + 4928u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[4], c.r[4].w[0] + 30976u);
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[10], c.r[4].w[0] + c.r[5].w[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[8], c.r[0], c.r[0]);  if (t) { goto L_002CEE18; } }
L_002CEC24:
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = ld32((c.r[7].w[0] + 5236u));
    c.f[2] = fp::add(c.f[0], c.f[1]);
    st32((c.r[7].w[0] + 5236u), c.f[2]);
    c.f[0] = ld32((c.r[7].w[0] + 5232u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[5], c.r[7].w[0] + 5216u);  if (t) { goto L_002CEDEC; } }
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 39u)));
    set32(c.r[4], ld32((c.r[5].w[0])));
    set32(c.r[12], c.r[10].w[0] + c.r[12].w[0]);
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[12].w[0])));
    set32(c.r[25], c.r[4].w[0] + 8u);
    st32((c.r[5].w[0]), c.r[25].w[0]);
    c.f[3] = ld32((c.r[5].w[0] + 20u));
    c.f[2] = ld32((c.r[5].w[0] + 16u));
    c.f[0] = ld32((c.r[4].w[0]));
    c.f[1] = ld32((c.r[5].w[0] + 24u));
    set32(c.r[31], c.r[12].w[0] << 2);
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[2]);
    c.f[2] = fp::sub(c.f[1], c.f[0]);
    set32(c.r[13], 0u + 1u);
    set32(c.r[12], 0u + 2u);
    set32(c.r[24], 0u - 1u);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 20;
L_002CEC98:
    set32(c.r[16], ld32((c.r[25].w[0])));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[24].d[0];  if (t) { goto L_002CECB8; } }
    set32(c.r[15], ld32((c.r[4].w[0])));
    set32(c.r[15], c.r[16].w[0] - c.r[15].w[0]);
    c.f[0] = c.r[15].w[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002CED00; } }
L_002CECB8:
    c.r[15].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[15].d[0] == 0ull;  if (t) { goto L_002CECF0; } }
    set32(c.r[15], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.f[3] = c.r[14].w[0];
    set32(c.r[15], c.r[31].w[0] + c.r[15].w[0]);
    set32(c.r[15], ld32((c.r[15].w[0])));
    set32(c.r[15], c.r[16].w[0] + c.r[15].w[0]);
    set32(c.r[15], c.r[8].w[0] + c.r[15].w[0]);
    set32(c.r[15], ld32((c.r[15].w[0])));
    set32(c.r[25], c.r[16].w[0] + c.r[15].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 37u), static_cast<std::uint8_t>(c.r[13].w[0]));  if (t) { goto L_002CED00; } }
L_002CECF0:
    c.f[2] = 0u;
    c.f[3] = c.r[14].w[0];
    st8((c.r[3].w[0] + 37u), static_cast<std::uint8_t>(c.r[12].w[0]));
    c.budget -= 4;
L_002CED00:
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[3]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002CED20; } }
    c.f[2] = fp::sub(c.f[2], c.f[3]);
    mmi::paddub(c.r[4], c.r[25], c.r[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[25], c.r[25].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CEC98u | kUnwind; return; } goto L_002CEC98; } }
L_002CED20:
    c.f[0] = ld32((c.r[4].w[0]));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[2]);
    c.budget -= 5;
    { const bool t = c.r[11].d[0] != 0ull; st32((c.r[3].w[0] + 20u), c.f[0]);  if (t) { goto L_002CED54; } }
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 39u)));
    c.budget -= 3;
    { const bool t = c.r[11].d[0] == 0ull;  if (t) { goto L_002CED54; } }
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = ld32((c.r[25].w[0] + 4u));
    c.f[4] = c.f[1] ^ fp::kSign;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[0] ^ fp::kSign;  if (t) { goto L_002CED60; } }
L_002CED54:
    c.f[4] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = ld32((c.r[25].w[0] + 4u));
    c.budget -= 3;
L_002CED60:
    set32(c.r[12], ld32((c.r[25].w[0])));
    set32(c.r[11], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[12].d[0] == c.r[11].d[0]; c.r[11].sd[0] = static_cast<std::int32_t>(0x461C0000u);  if (t) { goto L_002CEDB8; } }
    c.f[1] = fp::sub(c.f[0], c.f[4]);
    st32((c.r[5].w[0] + 20u), c.f[2]);
    st32((c.r[5].w[0] + 16u), c.f[3]);
    c.f[0] = ld32((c.r[5].w[0] + 16u));
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[5].w[0] + 12u), c.f[0]);
    st32((c.r[5].w[0] + 8u), c.f[4]);
    st32((c.r[5].w[0]), c.r[25].w[0]);
    c.f[0] = ld32((c.r[25].w[0]));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[5].w[0] + 24u), c.f[0]);
    c.f[1] = ld32((c.r[5].w[0] + 12u));
    c.f[0] = ld32((c.r[5].w[0] + 20u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::add(c.f[4], c.f[0]);
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st32((c.r[9].w[0]), c.f[0]);  if (t) { goto L_002CEDE0; } }
    c.r[11].sd[0] = static_cast<std::int32_t>(0x461C0000u);
    c.budget -= 1;
L_002CEDB8:
    c.r[11].d[0] = c.r[11].d[0] | 15360ull;
    st32((c.r[5].w[0] + 16u), c.r[11].w[0]);
    st32((c.r[5].w[0] + 20u), 0u);
    st32((c.r[5].w[0] + 12u), 0u);
    st32((c.r[5].w[0] + 8u), c.f[4]);
    st32((c.r[5].w[0]), c.r[4].w[0]);
    c.f[0] = ld32((c.r[4].w[0]));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[5].w[0] + 24u), c.f[0]);
    st32((c.r[9].w[0]), c.f[4]);
    c.budget -= 10;
L_002CEDE0:
    st16((c.r[5].w[0] + 4u), static_cast<std::uint16_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 38u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002CEE00; } }
L_002CEDEC:
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[9].w[0]), c.f[0]);
    c.budget -= 5;
L_002CEE00:
    set32(c.r[4], c.r[6].w[0] + 1u);
    set32(c.r[7], c.r[7].w[0] + 28u);
    set32(c.r[8], c.r[8].w[0] + 4u);
    set32(c.r[9], c.r[9].w[0] + 4u);
    c.r[6].d[0] = c.r[4].d[0] & 65535ull;
    c.budget -= 6;
L_002CEE18:
    c.r[11].d[0] = c.r[6].d[0] & 65535ull;
    c.r[4].d[0] = c.r[11].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CEC24u | kUnwind; return; } goto L_002CEC24; } }
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002CEE40:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[3], c.r[5].w[0] - 6u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[1].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_002CEE80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[4].w[0] + 7776u);  if (t) { goto L_002CEE84; } }
L_002CEE80:
    set32(c.r[16], c.r[4].w[0] + 7736u);
    c.budget -= 1;
L_002CEE84:
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[6], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[19], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[3], c.r[3].w[0] + 31032u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[6], c.r[5].w[0] << 1);
    set32(c.r[20], 0u + 8u);
    mmi::paddub(c.r[30], c.r[0], c.r[0]);
    c.r[23].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[3], c.r[3].w[0] + 31008u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[29].w[0] + 160u), c.r[3].w[0]);
    set32(c.r[3], c.r[7].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 23;
    { const bool t = 0ull == 0ull; set32(c.r[21], c.r[4].w[0] + c.r[3].w[0]);  if (t) { goto L_002CF148; } }
L_002CEEE0:
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = ld32((c.r[19].w[0] + 6076u));
    c.f[1] = fp::add(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 6076u), c.f[1]);
    c.f[0] = ld32((c.r[19].w[0] + 6072u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[18], c.r[19].w[0] + 6056u);  if (t) { goto L_002CF10C; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 39u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[6], ld32((c.r[18].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[17], c.r[6].w[0] + 4u);
    st32((c.r[18].w[0]), c.r[17].w[0]);
    c.f[2] = ld32((c.r[18].w[0] + 20u));
    c.f[1] = ld32((c.r[18].w[0] + 16u));
    set32(c.r[7], c.r[3].w[0] << 2);
    c.f[0] = ld32((c.r[18].w[0] + 24u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.f[1] = fp::add(c.f[0], c.f[1]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    set32(c.r[9], 0u + 1u);
    set32(c.r[8], 0u + 2u);
    set32(c.r[3], 0u - 1u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 23;
L_002CEF60:
    c.r[12].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[12].d[0] == c.r[3].d[0];  if (t) { goto L_002CEF80; } }
    c.r[11].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    set32(c.r[11], c.r[12].w[0] - c.r[11].w[0]);
    c.f[0] = c.r[11].w[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002CEFC8; } }
L_002CEF80:
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[11].d[0] == 0ull;  if (t) { goto L_002CEFB8; } }
    set32(c.r[11], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[12], ld32((c.r[16].w[0])));
    c.f[2] = c.r[10].w[0];
    set32(c.r[11], c.r[7].w[0] + c.r[11].w[0]);
    set32(c.r[11], ld32((c.r[11].w[0] + 36u)));
    set32(c.r[11], c.r[12].w[0] + c.r[11].w[0]);
    set32(c.r[11], c.r[20].w[0] + c.r[11].w[0]);
    set32(c.r[11], ld32((c.r[11].w[0] + 12u)));
    set32(c.r[17], c.r[12].w[0] + c.r[11].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 37u), static_cast<std::uint8_t>(c.r[9].w[0]));  if (t) { goto L_002CEFC8; } }
L_002CEFB8:
    c.f[1] = 0u;
    c.f[2] = c.r[10].w[0];
    st8((c.r[16].w[0] + 37u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.budget -= 4;
L_002CEFC8:
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002CEFE8; } }
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    mmi::paddub(c.r[6], c.r[17], c.r[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CEF60u | kUnwind; return; } goto L_002CEF60; } }
L_002CEFE8:
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    c.r[3].d[0] = c.r[23].d[0] & 65535ull;
    c.f[0] = c.r[7].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[16].w[0] + 20u), c.f[0]);  if (t) { goto L_002CF030; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 39u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002CF030; } }
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 2u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 2u)));
    set32(c.r[7], 0u - c.r[7].w[0]);
    set32(c.r[3], 0u - c.r[3].w[0]);
    c.r[9].d[0] = c.r[7].d[0] & 65535ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = c.r[3].d[0] & 65535ull;  if (t) { goto L_002CF040; } }
L_002CF030:
    c.r[9].d[0] = ld16((c.r[6].w[0] + 2u));
    c.r[8].d[0] = ld16((c.r[17].w[0] + 2u));
    c.budget -= 4;
L_002CF040:
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == c.r[3].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x461C0000u);  if (t) { goto L_002CF0CC; } }
    st32((c.r[18].w[0] + 20u), c.f[1]);
    c.r[22].d[0] = c.r[9].d[0] & 65535ull;
    st32((c.r[18].w[0] + 16u), c.f[2]);
    c.r[4].d[0] = c.r[8].d[0] & 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF068u); mmi::paddub(c.r[5], c.r[22], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 145u, depth + 1u); else { c.pc = 0x002CF280u; return; } if (c.pc != 0x002CF068u) [[unlikely]] return; }
L_002CF068:
    c.f[1] = c.r[2].w[0];
    c.f[0] = ld32((c.r[18].w[0] + 16u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF088u);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002CF088u) [[unlikely]] return; }
L_002CF088:
    st32((c.r[18].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 8u), c.r[22].w[0]);
    st32((c.r[18].w[0]), c.r[17].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[18].w[0] + 24u), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 12u));
    c.f[0] = ld32((c.r[18].w[0] + 20u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF0BCu); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002CF0BCu) [[unlikely]] return; }
L_002CF0BC:
    set32(c.r[3], c.r[22].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 4544u), c.r[3].w[0]);  if (t) { goto L_002CF100; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x461C0000u);
    c.budget -= 1;
L_002CF0CC:
    c.r[3].d[0] = c.r[3].d[0] | 15360ull;
    st32((c.r[18].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 20u), 0u);
    c.r[7].d[0] = c.r[9].d[0] & 65535ull;
    st32((c.r[18].w[0] + 12u), 0u);
    st32((c.r[18].w[0] + 8u), c.r[7].w[0]);
    st32((c.r[18].w[0]), c.r[6].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[18].w[0] + 24u), c.f[0]);
    st32((c.r[21].w[0] + 4544u), c.r[7].w[0]);
    c.budget -= 13;
L_002CF100:
    st16((c.r[18].w[0] + 4u), static_cast<std::uint16_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 38u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002CF128; } }
L_002CF10C:
    c.f[0] = ld32((c.r[18].w[0] + 12u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF11Cu); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002CF11Cu) [[unlikely]] return; }
L_002CF11C:
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[21].w[0] + 4544u), c.r[3].w[0]);
    c.budget -= 3;
L_002CF128:
    set32(c.r[3], c.r[30].w[0] + 1u);
    c.r[30].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[3], c.r[23].w[0] - 1u);
    set32(c.r[19], c.r[19].w[0] + 28u);
    set32(c.r[21], c.r[21].w[0] + 4u);
    set32(c.r[20], c.r[20].w[0] - 4u);
    c.r[23].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 8;
L_002CF148:
    c.r[3].d[0] = c.r[30].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CEEE0u | kUnwind; return; } goto L_002CEEE0; } }
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
L_002CF190:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 976u), c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[3].w[0] + 8192u);
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[4].w[0] + 980u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 976u));
    c.f[0] = ld32((c.r[4].w[0] + 980u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 1004u), c.f[0]);
    st32((c.r[4].w[0] + 7780u), c.f[0]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 7740u), c.f[0]);  c.pc = t; return; }
L_002CF1D0:
    set32(c.r[6], ld32((c.r[4].w[0] + 176u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[5], 0u + 21728u);
    set32(c.r[3], c.r[3].w[0] + 26848u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 14u)));
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    mmi::paddub(c.r[8], c.r[4], c.r[0]);
    mmi::mult(c, 0, c.r[6].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[5].w[0] + 48u);  if (t) { goto L_002CF220; } }
L_002CF1FC:
    c.f[0] = ld32((c.r[6].w[0] + 48u));
    set32(c.r[7], c.r[7].w[0] + 1u);
    st32((c.r[8].w[0] + 4032u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 52u));
    st32((c.r[8].w[0] + 4036u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 56u));
    st32((c.r[8].w[0] + 4040u), c.f[0]);
    set32(c.r[6], c.r[6].w[0] + 240u);
    set32(c.r[8], c.r[8].w[0] + 16u);
    c.budget -= 9;
L_002CF220:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1600u)));
    c.r[3].d[0] = c.r[7].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CF1FCu | kUnwind; return; } goto L_002CF1FC; } }
    set32(c.r[6], c.r[5].w[0] + 4608u);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (t) { goto L_002CF268; } }
L_002CF240:
    c.f[0] = ld32((c.r[6].w[0] + 48u));
    set32(c.r[7], c.r[7].w[0] + 1u);
    st32((c.r[5].w[0] + 4336u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 52u));
    st32((c.r[5].w[0] + 4340u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 56u));
    st32((c.r[5].w[0] + 4344u), c.f[0]);
    set32(c.r[6], c.r[6].w[0] + 240u);
    set32(c.r[5], c.r[5].w[0] + 16u);
    c.budget -= 10;
L_002CF268:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 770u)));
    c.r[3].d[0] = c.r[7].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CF240u | kUnwind; return; } goto L_002CF240; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CF280:
    set32(c.r[2], c.r[4].w[0] - c.r[5].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[1].d[0] = 0ull | 32769ull;
    c.r[1].d[0] = c.r[2].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002CF2A0; } }
    set32(c.r[2], c.r[2].w[0] - 32768u);
    set32(c.r[2], c.r[2].w[0] - 32768u);
    c.budget -= 2;
L_002CF2A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CF2B0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.r[1].d[0] = c.r[5].sd[0] < 12ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_002CF2CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_002CF2D0; } }
L_002CF2CC:
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_002CF2D0:
    c.r[6].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8058u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[6].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002CF328; } }
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF2FCu); set32(c.r[16], c.r[2].w[0] + 4544u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002CF2FCu) [[unlikely]] return; }
L_002CF2FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF304u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002CF304u) [[unlikely]] return; }
L_002CF304:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF30Cu); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002CF30Cu) [[unlikely]] return; }
L_002CF30C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF314u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002CF314u) [[unlikely]] return; }
L_002CF314:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF31Cu); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002CF31Cu) [[unlikely]] return; }
L_002CF31C:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF328u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 287u, depth + 1u); else { c.pc = 0x0026F7D0u; return; } if (c.pc != 0x002CF328u) [[unlikely]] return; }
L_002CF328:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002CF340:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[17], c.r[16].w[0] + 4032u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF370u); set32(c.r[18], c.r[16].w[0] + 4544u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002CF370u) [[unlikely]] return; }
L_002CF370:
    c.f[5] = ld32((c.r[16].w[0] + 32u));
    c.f[4] = ld32((c.r[17].w[0]));
    c.f[3] = ld32((c.r[16].w[0] + 36u));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.f[12] = fp::add(c.f[5], c.f[4]);
    c.f[13] = fp::add(c.f[3], c.f[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF398u); c.f[14] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002CF398u) [[unlikely]] return; }
L_002CF398:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 762u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CF3F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF3ACu); set32(c.r[4], c.r[16].w[0] + 8320u);  if (depth < kMaxDepth) unit_000E(c, 330u, depth + 1u); else { c.pc = 0x0013BF40u; return; } if (c.pc != 0x002CF3ACu) [[unlikely]] return; }
L_002CF3AC:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF3B8u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002CF3B8u) [[unlikely]] return; }
L_002CF3B8:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF3C4u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002CF3C4u) [[unlikely]] return; }
L_002CF3C4:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF3D0u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002CF3D0u) [[unlikely]] return; }
L_002CF3D0:
    c.f[0] = ld32((c.r[16].w[0] + 8012u));
    c.f[12] = 0u;
    c.f[14] = c.f[12];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF3E8u); c.f[13] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002CF3E8u) [[unlikely]] return; }
L_002CF3E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (t) { goto L_002CF450; } }
L_002CF3F0:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    c.r[4].d[0] = 0ull | 65535ull;
    set32(c.r[18], c.r[18].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF40Cu); c.r[4].d[0] = c.r[2].d[0] & c.r[4].d[0];  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002CF40Cu) [[unlikely]] return; }
L_002CF40C:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[18], c.r[18].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF424u); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002CF424u) [[unlikely]] return; }
L_002CF424:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[3], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[18], c.r[18].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF43Cu); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002CF43Cu) [[unlikely]] return; }
L_002CF43C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF444u); c.r[4].d[0] = ld16((c.r[16].w[0] + 7820u));  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002CF444u) [[unlikely]] return; }
L_002CF444:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF44Cu); c.r[4].d[0] = ld16((c.r[16].w[0] + 7816u));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002CF44Cu) [[unlikely]] return; }
L_002CF44C:
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 1;
L_002CF450:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF458u);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x002CF458u) [[unlikely]] return; }
L_002CF458:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7784u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002CF4E4; } }
    c.f[3] = ld32((c.r[16].w[0] + 4928u));
    c.f[2] = ld32((c.r[16].w[0] + 4932u));
    c.f[1] = ld32((c.r[16].w[0] + 4936u));
    c.f[0] = ld32((c.r[16].w[0] + 4940u));
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[2], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[16].w[0] + 5088u);
    st32((c.r[4].w[0]), c.f[3]);
    st32((c.r[4].w[0] + 4u), c.f[2]);
    st32((c.r[4].w[0] + 8u), c.f[1]);
    st32((c.r[4].w[0] + 12u), c.f[0]);
    c.f[3] = ld32((c.r[16].w[0] + 4944u));
    c.f[2] = ld32((c.r[16].w[0] + 4948u));
    c.f[1] = ld32((c.r[16].w[0] + 4952u));
    c.f[0] = ld32((c.r[16].w[0] + 4956u));
    set32(c.r[6], 0u + 2u);
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 4304u));
    c.f[0] = ld32((c.r[29].w[0] + 112u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 112u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 4256u));
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF4DCu); st32((c.r[2].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 318u, depth + 1u); else { c.pc = 0x0013B9B0u; return; } if (c.pc != 0x002CF4DCu) [[unlikely]] return; }
L_002CF4DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7744u)));  if (t) { goto L_002CF6BC; } }
L_002CF4E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[2].w[0] + 6864u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[6], c.r[2].w[0] + 6864u);
    c.f[1] = ld32((c.r[16].w[0] + 4928u));
    set32(c.r[19], c.r[29].w[0] + 128u);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], c.r[2].w[0] + 6864u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st32((c.r[29].w[0] + 112u), c.f[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[4], c.r[2].w[0] + 6864u);
    c.f[1] = ld32((c.r[16].w[0] + 4932u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[2].w[0] + 6864u);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.f[0] = ld32((c.r[6].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[2].w[0] + 6864u);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 116u), c.f[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.f[1] = ld32((c.r[16].w[0] + 4936u));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[5].w[0]));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 120u), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.f[1] = ld32((c.r[16].w[0] + 4944u));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[4].w[0]));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[19].w[0]), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.f[1] = ld32((c.r[16].w[0] + 4948u));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 132u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.f[1] = ld32((c.r[16].w[0] + 4952u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 136u), c.f[0]);
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 59;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF5D0u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002CF5D0u) [[unlikely]] return; }
L_002CF5D0:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF5DCu); set32(c.r[20], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002CF5DCu) [[unlikely]] return; }
L_002CF5DC:
    set32(c.r[4], ld32((c.r[20].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF5E8u); set32(c.r[20], c.r[20].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002CF5E8u) [[unlikely]] return; }
L_002CF5E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF5F0u); set32(c.r[4], ld32((c.r[20].w[0])));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002CF5F0u) [[unlikely]] return; }
L_002CF5F0:
    c.f[12] = ld32((c.r[16].w[0] + 4224u));
    c.f[13] = ld32((c.r[16].w[0] + 4228u));
    c.f[14] = ld32((c.r[16].w[0] + 4232u));
    set32(c.r[20], c.r[16].w[0] + 4224u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF608u); set32(c.r[21], c.r[16].w[0] + 4688u);  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002CF608u) [[unlikely]] return; }
L_002CF608:
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF614u); set32(c.r[21], c.r[21].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002CF614u) [[unlikely]] return; }
L_002CF614:
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF620u); set32(c.r[21], c.r[21].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002CF620u) [[unlikely]] return; }
L_002CF620:
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF62Cu); set32(c.r[21], c.r[21].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002CF62Cu) [[unlikely]] return; }
L_002CF62C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF634u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x002CF634u) [[unlikely]] return; }
L_002CF634:
    c.f[13] = ld32((c.r[20].w[0] + 20u));
    c.f[14] = ld32((c.r[20].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF644u); c.f[12] = ld32((c.r[20].w[0] + 16u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002CF644u) [[unlikely]] return; }
L_002CF644:
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF650u); set32(c.r[21], c.r[21].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002CF650u) [[unlikely]] return; }
L_002CF650:
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF65Cu); set32(c.r[21], c.r[21].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002CF65Cu) [[unlikely]] return; }
L_002CF65C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF664u); set32(c.r[4], ld32((c.r[21].w[0])));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002CF664u) [[unlikely]] return; }
L_002CF664:
    set32(c.r[5], c.r[16].w[0] + 5104u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF670u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002CF670u) [[unlikely]] return; }
L_002CF670:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF678u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x002CF678u) [[unlikely]] return; }
L_002CF678:
    c.f[12] = ld32((c.r[16].w[0] + 4288u));
    c.f[13] = ld32((c.r[16].w[0] + 4292u));
    c.f[14] = ld32((c.r[16].w[0] + 4296u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF68Cu); set32(c.r[19], c.r[16].w[0] + 4736u);  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002CF68Cu) [[unlikely]] return; }
L_002CF68C:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF698u); set32(c.r[19], c.r[19].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002CF698u) [[unlikely]] return; }
L_002CF698:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF6A4u); set32(c.r[19], c.r[19].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002CF6A4u) [[unlikely]] return; }
L_002CF6A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF6ACu); set32(c.r[4], ld32((c.r[19].w[0])));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002CF6ACu) [[unlikely]] return; }
L_002CF6AC:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF6B8u); set32(c.r[5], c.r[16].w[0] + 5088u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002CF6B8u) [[unlikely]] return; }
L_002CF6B8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7744u)));
    c.budget -= 1;
L_002CF6BC:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002CF7EC; } }
    c.f[3] = ld32((c.r[16].w[0] + 4960u));
    c.f[2] = ld32((c.r[16].w[0] + 4964u));
    c.f[1] = ld32((c.r[16].w[0] + 4968u));
    c.f[0] = ld32((c.r[16].w[0] + 4972u));
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[19], c.r[29].w[0] + 128u);
    set32(c.r[20], c.r[29].w[0] + 144u);
    st32((c.r[4].w[0]), c.f[3]);
    st32((c.r[4].w[0] + 4u), c.f[2]);
    st32((c.r[4].w[0] + 8u), c.f[1]);
    st32((c.r[4].w[0] + 12u), c.f[0]);
    c.f[3] = ld32((c.r[16].w[0] + 4976u));
    c.f[2] = ld32((c.r[16].w[0] + 4980u));
    c.f[1] = ld32((c.r[16].w[0] + 4984u));
    c.f[0] = ld32((c.r[16].w[0] + 4988u));
    set32(c.r[21], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[16].w[0] + 7952u);
    st32((c.r[19].w[0]), c.f[3]);
    st32((c.r[19].w[0] + 4u), c.f[2]);
    st32((c.r[19].w[0] + 8u), c.f[1]);
    st32((c.r[19].w[0] + 12u), c.f[0]);
    c.f[3] = ld32((c.r[16].w[0] + 7840u));
    c.f[2] = ld32((c.r[16].w[0] + 7844u));
    c.f[1] = ld32((c.r[16].w[0] + 7848u));
    c.f[0] = ld32((c.r[16].w[0] + 7852u));
    st32((c.r[20].w[0]), c.f[3]);
    st32((c.r[20].w[0] + 4u), c.f[2]);
    st32((c.r[20].w[0] + 8u), c.f[1]);
    st32((c.r[20].w[0] + 12u), c.f[0]);
    c.f[3] = ld32((c.r[16].w[0] + 7824u));
    c.f[2] = ld32((c.r[16].w[0] + 7828u));
    c.f[1] = ld32((c.r[16].w[0] + 7832u));
    c.f[0] = ld32((c.r[16].w[0] + 7836u));
    st32((c.r[21].w[0]), c.f[3]);
    st32((c.r[21].w[0] + 4u), c.f[2]);
    st32((c.r[21].w[0] + 8u), c.f[1]);
    c.budget -= 38;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF760u); st32((c.r[21].w[0] + 12u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x002CF760u) [[unlikely]] return; }
L_002CF760:
    set32(c.r[5], c.r[16].w[0] + 7936u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF76Cu); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x002CF76Cu) [[unlikely]] return; }
L_002CF76C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF774u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x002CF774u) [[unlikely]] return; }
L_002CF774:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF784u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002CF784u) [[unlikely]] return; }
L_002CF784:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF790u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002CF790u) [[unlikely]] return; }
L_002CF790:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF79Cu); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002CF79Cu) [[unlikely]] return; }
L_002CF79C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF7A4u); set32(c.r[4], ld32((c.r[18].w[0])));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002CF7A4u) [[unlikely]] return; }
L_002CF7A4:
    set32(c.r[2], ld32((c.r[16].w[0] + 7916u)));
    c.r[3].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF7B4u); c.r[4].d[0] = c.r[2].d[0] & c.r[3].d[0];  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002CF7B4u) [[unlikely]] return; }
L_002CF7B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF7BCu); c.r[4].d[0] = ld16((c.r[16].w[0] + 7912u));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002CF7BCu) [[unlikely]] return; }
L_002CF7BC:
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[16].w[0] + 5120u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF7CCu); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_000E(c, 318u, depth + 1u); else { c.pc = 0x0013B9B0u; return; } if (c.pc != 0x002CF7CCu) [[unlikely]] return; }
L_002CF7CC:
    set32(c.r[5], c.r[16].w[0] + 7872u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF7D8u); mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002CF7D8u) [[unlikely]] return; }
L_002CF7D8:
    set32(c.r[5], c.r[16].w[0] + 7856u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF7E4u); mmi::paddub(c.r[4], c.r[21], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002CF7E4u) [[unlikely]] return; }
L_002CF7E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);  if (t) { goto L_002CFB5C; } }
L_002CF7EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[2].w[0] + 6768u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], c.r[2].w[0] + 6768u);
    c.f[1] = ld32((c.r[16].w[0] + 4960u));
    set32(c.r[19], c.r[29].w[0] + 128u);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[12], c.r[3].w[0] + 6768u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[11], c.r[3].w[0] + 6768u);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[10], c.r[3].w[0] + 6768u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st32((c.r[29].w[0] + 112u), c.f[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[9], c.r[3].w[0] + 6768u);
    c.f[1] = ld32((c.r[16].w[0] + 4964u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[8], c.r[3].w[0] + 6768u);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[7], c.r[3].w[0] + 6768u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    set32(c.r[4], c.r[2].w[0] + 6768u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[6], c.r[3].w[0] + 6768u);
    st32((c.r[29].w[0] + 116u), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.f[1] = ld32((c.r[16].w[0] + 4968u));
    set32(c.r[2], c.r[2].w[0] + 6768u);
    set32(c.r[21], c.r[29].w[0] + 144u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    set32(c.r[20], c.r[29].w[0] + 160u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[16].w[0] + 7952u);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[3].w[0] + 6768u);
    st32((c.r[29].w[0] + 120u), c.f[0]);
    c.r[13].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.f[1] = ld32((c.r[16].w[0] + 4976u));
    set32(c.r[13], c.r[13].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[13].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[19].w[0]), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.f[1] = ld32((c.r[16].w[0] + 4980u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[12].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 132u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.f[1] = ld32((c.r[16].w[0] + 4984u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[11].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 136u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.f[1] = ld32((c.r[16].w[0] + 7840u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[10].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[21].w[0]), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.f[1] = ld32((c.r[16].w[0] + 7844u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[9].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 148u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.f[1] = ld32((c.r[16].w[0] + 7848u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[8].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 152u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.f[1] = ld32((c.r[16].w[0] + 7824u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[20].w[0]), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.f[1] = ld32((c.r[16].w[0] + 7828u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 164u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.f[1] = ld32((c.r[16].w[0] + 7832u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 114;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF9B4u); st32((c.r[29].w[0] + 168u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x002CF9B4u) [[unlikely]] return; }
L_002CF9B4:
    set32(c.r[5], c.r[16].w[0] + 7936u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF9C0u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x002CF9C0u) [[unlikely]] return; }
L_002CF9C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF9C8u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x002CF9C8u) [[unlikely]] return; }
L_002CF9C8:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF9D8u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002CF9D8u) [[unlikely]] return; }
L_002CF9D8:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF9E4u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002CF9E4u) [[unlikely]] return; }
L_002CF9E4:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF9F0u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002CF9F0u) [[unlikely]] return; }
L_002CF9F0:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF9FCu); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002CF9FCu) [[unlikely]] return; }
L_002CF9FC:
    set32(c.r[2], ld32((c.r[16].w[0] + 7916u)));
    c.r[3].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFA0Cu); c.r[4].d[0] = c.r[2].d[0] & c.r[3].d[0];  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002CFA0Cu) [[unlikely]] return; }
L_002CFA0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFA14u); c.r[4].d[0] = ld16((c.r[16].w[0] + 7912u));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002CFA14u) [[unlikely]] return; }
L_002CFA14:
    c.f[13] = ld32((c.r[17].w[0] + 36u));
    c.f[14] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFA24u); c.f[12] = ld32((c.r[17].w[0] + 32u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002CFA24u) [[unlikely]] return; }
L_002CFA24:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFA30u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002CFA30u) [[unlikely]] return; }
L_002CFA30:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFA3Cu); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002CFA3Cu) [[unlikely]] return; }
L_002CFA3C:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFA48u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002CFA48u) [[unlikely]] return; }
L_002CFA48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFA50u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x002CFA50u) [[unlikely]] return; }
L_002CFA50:
    c.f[13] = ld32((c.r[17].w[0] + 52u));
    c.f[14] = ld32((c.r[17].w[0] + 56u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFA60u); c.f[12] = ld32((c.r[17].w[0] + 48u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002CFA60u) [[unlikely]] return; }
L_002CFA60:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFA6Cu); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002CFA6Cu) [[unlikely]] return; }
L_002CFA6C:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFA78u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002CFA78u) [[unlikely]] return; }
L_002CFA78:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFA84u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002CFA84u) [[unlikely]] return; }
L_002CFA84:
    c.f[13] = ld32((c.r[17].w[0] + 68u));
    c.f[14] = ld32((c.r[17].w[0] + 72u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFA94u); c.f[12] = ld32((c.r[17].w[0] + 64u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002CFA94u) [[unlikely]] return; }
L_002CFA94:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFAA0u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002CFAA0u) [[unlikely]] return; }
L_002CFAA0:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFAACu); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002CFAACu) [[unlikely]] return; }
L_002CFAAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFAB4u); set32(c.r[4], ld32((c.r[18].w[0])));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002CFAB4u) [[unlikely]] return; }
L_002CFAB4:
    set32(c.r[5], c.r[16].w[0] + 5136u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFAC0u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002CFAC0u) [[unlikely]] return; }
L_002CFAC0:
    set32(c.r[5], c.r[16].w[0] + 7856u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFACCu); mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002CFACCu) [[unlikely]] return; }
L_002CFACC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFAD4u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x002CFAD4u) [[unlikely]] return; }
L_002CFAD4:
    c.f[12] = ld32((c.r[16].w[0] + 4144u));
    c.f[13] = ld32((c.r[16].w[0] + 4148u));
    c.f[14] = ld32((c.r[16].w[0] + 4152u));
    set32(c.r[17], c.r[16].w[0] + 4144u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFAECu); set32(c.r[18], c.r[16].w[0] + 4628u);  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002CFAECu) [[unlikely]] return; }
L_002CFAEC:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFAF8u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002CFAF8u) [[unlikely]] return; }
L_002CFAF8:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFB04u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002CFB04u) [[unlikely]] return; }
L_002CFB04:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFB10u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002CFB10u) [[unlikely]] return; }
L_002CFB10:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFB20u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002CFB20u) [[unlikely]] return; }
L_002CFB20:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFB2Cu); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002CFB2Cu) [[unlikely]] return; }
L_002CFB2C:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFB38u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002CFB38u) [[unlikely]] return; }
L_002CFB38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFB40u); set32(c.r[4], ld32((c.r[18].w[0])));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002CFB40u) [[unlikely]] return; }
L_002CFB40:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFB4Cu); set32(c.r[5], c.r[16].w[0] + 5120u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002CFB4Cu) [[unlikely]] return; }
L_002CFB4C:
    set32(c.r[5], c.r[16].w[0] + 7872u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFB58u); mmi::paddub(c.r[4], c.r[21], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002CFB58u) [[unlikely]] return; }
L_002CFB58:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002CFB5C:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_002CFB80:
    c.f[0] = ld32((c.r[4].w[0] + 4052u));
    set32(c.r[3], 0u + 4u);
    st32((c.r[4].w[0] + 8016u), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 7784u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002CFBBC; } }
    c.f[3] = ld32((c.r[4].w[0] + 5056u));
    c.f[2] = ld32((c.r[4].w[0] + 5060u));
    c.f[1] = ld32((c.r[4].w[0] + 5064u));
    c.f[0] = ld32((c.r[4].w[0] + 5068u));
    st32((c.r[4].w[0] + 4048u), c.f[3]);
    st32((c.r[4].w[0] + 4052u), c.f[2]);
    st32((c.r[4].w[0] + 4056u), c.f[1]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4060u), c.f[0]);  if (t) { goto L_002CFC28; } }
L_002CFBBC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[6], c.r[3].w[0] + 6672u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], c.r[3].w[0] + 6672u);
    c.f[1] = ld32((c.r[4].w[0] + 5056u));
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[3].w[0] + 6672u);
    st32((c.r[4].w[0] + 4048u), c.f[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    c.f[1] = ld32((c.r[4].w[0] + 5060u));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[5].w[0]));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 4052u), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    c.f[1] = ld32((c.r[4].w[0] + 5064u));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 4056u), c.f[0]);
    c.budget -= 27;
L_002CFC28:
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[6], c.r[4], c.r[0]);  if (t) { goto L_002CFC68; } }
L_002CFC34:
    c.f[3] = ld32((c.r[6].w[0] + 4992u));
    c.f[2] = ld32((c.r[6].w[0] + 4996u));
    c.f[1] = ld32((c.r[6].w[0] + 5000u));
    c.f[0] = ld32((c.r[6].w[0] + 5004u));
    set32(c.r[3], c.r[5].w[0] + 1u);
    c.r[5].d[0] = c.r[3].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    st32((c.r[6].w[0] + 5152u), c.f[3]);
    st32((c.r[6].w[0] + 5156u), c.f[2]);
    st32((c.r[6].w[0] + 5160u), c.f[1]);
    st32((c.r[6].w[0] + 5164u), c.f[0]);
    set32(c.r[6], c.r[6].w[0] + 16u);
    c.budget -= 13;
L_002CFC68:
    c.r[3].d[0] = c.r[5].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CFC34u | kUnwind; return; } goto L_002CFC34; } }
    c.f[1] = ld32((c.r[4].w[0] + 5024u));
    c.f[0] = ld32((c.r[4].w[0] + 7984u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 5184u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 5028u));
    c.f[0] = ld32((c.r[4].w[0] + 7988u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 5188u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 5032u));
    c.f[0] = ld32((c.r[4].w[0] + 7992u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 5192u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 5040u));
    c.f[0] = ld32((c.r[4].w[0] + 7968u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 5200u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 5044u));
    c.f[0] = ld32((c.r[4].w[0] + 7972u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 5204u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 5048u));
    c.f[0] = ld32((c.r[4].w[0] + 7976u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 25;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 5208u), c.f[0]);  c.pc = t; return; }
L_002CFCE0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[17], c.r[16].w[0] + 4032u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFD10u); set32(c.r[18], c.r[16].w[0] + 4544u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002CFD10u) [[unlikely]] return; }
L_002CFD10:
    c.f[5] = ld32((c.r[16].w[0] + 32u));
    c.f[4] = ld32((c.r[17].w[0]));
    c.f[3] = ld32((c.r[16].w[0] + 36u));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.f[12] = fp::add(c.f[5], c.f[4]);
    c.f[13] = fp::add(c.f[3], c.f[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFD38u); c.f[14] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002CFD38u) [[unlikely]] return; }
L_002CFD38:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 762u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CFD90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFD4Cu); set32(c.r[4], c.r[16].w[0] + 8320u);  if (depth < kMaxDepth) unit_000E(c, 330u, depth + 1u); else { c.pc = 0x0013BF40u; return; } if (c.pc != 0x002CFD4Cu) [[unlikely]] return; }
L_002CFD4C:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFD58u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002CFD58u) [[unlikely]] return; }
L_002CFD58:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFD64u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002CFD64u) [[unlikely]] return; }
L_002CFD64:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFD70u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002CFD70u) [[unlikely]] return; }
L_002CFD70:
    c.f[0] = ld32((c.r[16].w[0] + 8012u));
    c.f[12] = 0u;
    c.f[14] = c.f[12];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFD88u); c.f[13] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002CFD88u) [[unlikely]] return; }
L_002CFD88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (t) { goto L_002CFDF0; } }
L_002CFD90:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    c.r[4].d[0] = 0ull | 65535ull;
    set32(c.r[18], c.r[18].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFDACu); c.r[4].d[0] = c.r[2].d[0] & c.r[4].d[0];  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002CFDACu) [[unlikely]] return; }
L_002CFDAC:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[18], c.r[18].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFDC4u); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002CFDC4u) [[unlikely]] return; }
L_002CFDC4:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[3], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[18], c.r[18].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFDDCu); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002CFDDCu) [[unlikely]] return; }
L_002CFDDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFDE4u); c.r[4].d[0] = ld16((c.r[16].w[0] + 7820u));  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002CFDE4u) [[unlikely]] return; }
L_002CFDE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFDECu); c.r[4].d[0] = ld16((c.r[16].w[0] + 7816u));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002CFDECu) [[unlikely]] return; }
L_002CFDEC:
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 1;
L_002CFDF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFDF8u);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x002CFDF8u) [[unlikely]] return; }
L_002CFDF8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7784u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002CFE94; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7808u)));
    set32(c.r[2], 0u + 7u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002CFE94; } }
    c.f[3] = ld32((c.r[16].w[0] + 4928u));
    c.f[2] = ld32((c.r[16].w[0] + 4932u));
    c.f[1] = ld32((c.r[16].w[0] + 4936u));
    c.f[0] = ld32((c.r[16].w[0] + 4940u));
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[2], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[16].w[0] + 5088u);
    st32((c.r[4].w[0]), c.f[3]);
    st32((c.r[4].w[0] + 4u), c.f[2]);
    st32((c.r[4].w[0] + 8u), c.f[1]);
    st32((c.r[4].w[0] + 12u), c.f[0]);
    c.f[3] = ld32((c.r[16].w[0] + 4944u));
    c.f[2] = ld32((c.r[16].w[0] + 4948u));
    c.f[1] = ld32((c.r[16].w[0] + 4952u));
    c.f[0] = ld32((c.r[16].w[0] + 4956u));
    set32(c.r[6], 0u + 2u);
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 4304u));
    c.f[0] = ld32((c.r[29].w[0] + 112u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 112u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 4256u));
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFE8Cu); st32((c.r[2].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 318u, depth + 1u); else { c.pc = 0x0013B9B0u; return; } if (c.pc != 0x002CFE8Cu) [[unlikely]] return; }
L_002CFE8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7744u)));  if (t) { [[clang::musttail]] return unit_0074(c, 12u, depth); } }
L_002CFE94:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[2].w[0] + 6864u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[6], c.r[2].w[0] + 6864u);
    c.f[1] = ld32((c.r[16].w[0] + 4928u));
    set32(c.r[19], c.r[29].w[0] + 128u);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], c.r[2].w[0] + 6864u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st32((c.r[29].w[0] + 112u), c.f[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[4], c.r[2].w[0] + 6864u);
    c.f[1] = ld32((c.r[16].w[0] + 4932u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[2].w[0] + 6864u);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.f[0] = ld32((c.r[6].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[2].w[0] + 6864u);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 116u), c.f[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.f[1] = ld32((c.r[16].w[0] + 4936u));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[5].w[0]));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 120u), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.f[1] = ld32((c.r[16].w[0] + 4944u));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[4].w[0]));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[19].w[0]), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.f[1] = ld32((c.r[16].w[0] + 4948u));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 132u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.f[1] = ld32((c.r[16].w[0] + 4952u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 136u), c.f[0]);
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 59;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFF80u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002CFF80u) [[unlikely]] return; }
L_002CFF80:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFF8Cu); set32(c.r[20], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002CFF8Cu) [[unlikely]] return; }
L_002CFF8C:
    set32(c.r[4], ld32((c.r[20].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFF98u); set32(c.r[20], c.r[20].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002CFF98u) [[unlikely]] return; }
L_002CFF98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFFA0u); set32(c.r[4], ld32((c.r[20].w[0])));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002CFFA0u) [[unlikely]] return; }
L_002CFFA0:
    c.f[12] = ld32((c.r[16].w[0] + 4224u));
    c.f[13] = ld32((c.r[16].w[0] + 4228u));
    c.f[14] = ld32((c.r[16].w[0] + 4232u));
    set32(c.r[20], c.r[16].w[0] + 4224u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFFB8u); set32(c.r[21], c.r[16].w[0] + 4688u);  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002CFFB8u) [[unlikely]] return; }
L_002CFFB8:
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFFC4u); set32(c.r[21], c.r[21].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002CFFC4u) [[unlikely]] return; }
L_002CFFC4:
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFFD0u); set32(c.r[21], c.r[21].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002CFFD0u) [[unlikely]] return; }
L_002CFFD0:
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFFDCu); set32(c.r[21], c.r[21].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002CFFDCu) [[unlikely]] return; }
L_002CFFDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFFE4u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x002CFFE4u) [[unlikely]] return; }
L_002CFFE4:
    c.f[13] = ld32((c.r[20].w[0] + 20u));
    c.f[14] = ld32((c.r[20].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFFF4u); c.f[12] = ld32((c.r[20].w[0] + 16u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002CFFF4u) [[unlikely]] return; }
L_002CFFF4:
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0000u); set32(c.r[21], c.r[21].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002D0000u) [[unlikely]] return; }
    [[clang::musttail]] return unit_0074(c, 1u, depth);
}

}
