#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0015[4096] = {
    1, 0, 0, 0, 0, 0, 2, 3, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0,
    0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 14, 0, 0, 15,
    0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0,
    0, 22, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 25, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0,
    0, 28, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 33, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    35, 0, 36, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 40, 0, 41, 0, 42, 0, 43, 0, 0, 44, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46,
    0, 47, 0, 0, 0, 0, 0, 0, 48, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 51, 0, 52, 0, 53, 0, 0, 54, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0,
    57, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 63, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 65, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 71, 0, 0, 0, 0, 0, 0,
    0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0,
    0, 0, 79, 0, 80, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 83, 0,
    84, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0,
    0, 90, 0, 0, 0, 0, 91, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 106, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 110, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0,
    114, 0, 0, 0, 0, 115, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132,
    0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 144, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0,
    0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 154,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 163, 0, 0, 0, 164, 0, 0, 0, 165, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0,
    0, 0, 0, 0, 0, 173, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0,
    0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 0, 0, 189, 0, 190, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 191, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 196, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0,
    0, 199, 0, 200, 0, 201, 0, 0, 0, 202, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 205, 0, 0, 206, 0, 0, 0, 207, 0, 208, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 213, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 216, 0, 217, 0, 218, 0, 219, 0, 0, 0, 0, 0, 0,
    0, 0, 220, 0, 0, 0, 0, 221, 0, 222, 0, 0, 223, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 225, 0, 226, 0, 227, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 230,
    0, 0, 0, 0, 231, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 235, 0, 236, 0, 237, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 239, 0, 0, 240, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 242, 0, 0, 0, 0, 243, 0, 244, 0, 245, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 247, 0, 248, 0, 0, 0, 0, 249, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0015(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00154000;
    case 2u: goto L_00154018;
    case 3u: goto L_0015401C;
    case 4u: goto L_00154040;
    case 5u: goto L_001540D0;
    case 6u: goto L_0015410C;
    case 7u: goto L_0015412C;
    case 8u: goto L_00154164;
    case 9u: goto L_00154184;
    case 10u: goto L_001541C0;
    case 11u: goto L_001541E0;
    case 12u: goto L_0015421C;
    case 13u: goto L_00154268;
    case 14u: goto L_00154270;
    case 15u: goto L_0015427C;
    case 16u: goto L_001542A0;
    case 17u: goto L_001542C0;
    case 18u: goto L_00154400;
    case 19u: goto L_00154434;
    case 20u: goto L_00154454;
    case 21u: goto L_00154478;
    case 22u: goto L_00154484;
    case 23u: goto L_001544A4;
    case 24u: goto L_001544D8;
    case 25u: goto L_001544F8;
    case 26u: goto L_00154528;
    case 27u: goto L_00154574;
    case 28u: goto L_00154584;
    case 29u: goto L_001545A0;
    case 30u: goto L_001545C0;
    case 31u: goto L_0015460C;
    case 32u: goto L_00154630;
    case 33u: goto L_0015463C;
    case 34u: goto L_00154640;
    case 35u: goto L_00154680;
    case 36u: goto L_00154688;
    case 37u: goto L_00154698;
    case 38u: goto L_001546C4;
    case 39u: goto L_001546D4;
    case 40u: goto L_00154704;
    case 41u: goto L_0015470C;
    case 42u: goto L_00154714;
    case 43u: goto L_0015471C;
    case 44u: goto L_00154728;
    case 45u: goto L_00154740;
    case 46u: goto L_001547FC;
    case 47u: goto L_00154804;
    case 48u: goto L_00154820;
    case 49u: goto L_00154828;
    case 50u: goto L_00154858;
    case 51u: goto L_00154894;
    case 52u: goto L_0015489C;
    case 53u: goto L_001548A4;
    case 54u: goto L_001548B0;
    case 55u: goto L_001548BC;
    case 56u: goto L_001548DC;
    case 57u: goto L_00154900;
    case 58u: goto L_0015490C;
    case 59u: goto L_0015491C;
    case 60u: goto L_00154960;
    case 61u: goto L_001549F4;
    case 62u: goto L_00154A6C;
    case 63u: goto L_00154A74;
    case 64u: goto L_00154AD8;
    case 65u: goto L_00154B18;
    case 66u: goto L_00154B20;
    case 67u: goto L_00154BC0;
    case 68u: goto L_00154BCC;
    case 69u: goto L_00154C20;
    case 70u: goto L_00154C5C;
    case 71u: goto L_00154C64;
    case 72u: goto L_00154C88;
    case 73u: goto L_00154CE0;
    case 74u: goto L_00154E30;
    case 75u: goto L_00154E78;
    case 76u: goto L_00155168;
    case 77u: goto L_00155340;
    case 78u: goto L_0015536C;
    case 79u: goto L_00155388;
    case 80u: goto L_00155390;
    case 81u: goto L_001553A0;
    case 82u: goto L_0015546C;
    case 83u: goto L_00155478;
    case 84u: goto L_00155480;
    case 85u: goto L_00155490;
    case 86u: goto L_001554C0;
    case 87u: goto L_00155528;
    case 88u: goto L_00155610;
    case 89u: goto L_00155664;
    case 90u: goto L_00155684;
    case 91u: goto L_00155698;
    case 92u: goto L_001556A4;
    case 93u: goto L_00155720;
    case 94u: goto L_0015576C;
    case 95u: goto L_001557C0;
    case 96u: goto L_0015582C;
    case 97u: goto L_00155844;
    case 98u: goto L_0015586C;
    case 99u: goto L_001558CC;
    case 100u: goto L_00155920;
    case 101u: goto L_00155934;
    case 102u: goto L_00155964;
    case 103u: goto L_001559AC;
    case 104u: goto L_001559B8;
    case 105u: goto L_001559EC;
    case 106u: goto L_001559F8;
    case 107u: goto L_00155A2C;
    case 108u: goto L_00155A38;
    case 109u: goto L_00155A6C;
    case 110u: goto L_00155A78;
    case 111u: goto L_00155AAC;
    case 112u: goto L_00155AB8;
    case 113u: goto L_00155AF4;
    case 114u: goto L_00155B00;
    case 115u: goto L_00155B14;
    case 116u: goto L_00155B28;
    case 117u: goto L_00155B98;
    case 118u: goto L_00155D3C;
    case 119u: goto L_00155E60;
    case 120u: goto L_00155EAC;
    case 121u: goto L_00155F84;
    case 122u: goto L_00155FAC;
    case 123u: goto L_00155FF8;
    case 124u: goto L_00156090;
    case 125u: goto L_001560C4;
    case 126u: goto L_00156124;
    case 127u: goto L_0015616C;
    case 128u: goto L_00156220;
    case 129u: goto L_00156394;
    case 130u: goto L_001564BC;
    case 131u: goto L_001564D4;
    case 132u: goto L_001565FC;
    case 133u: goto L_00156614;
    case 134u: goto L_00156648;
    case 135u: goto L_00156668;
    case 136u: goto L_001566D8;
    case 137u: goto L_001567A4;
    case 138u: goto L_001567EC;
    case 139u: goto L_001568C0;
    case 140u: goto L_00156910;
    case 141u: goto L_00156AB4;
    case 142u: goto L_00156AC0;
    case 143u: goto L_00156AE8;
    case 144u: goto L_00156AF4;
    case 145u: goto L_00156B5C;
    case 146u: goto L_00156BE0;
    case 147u: goto L_00156C68;
    case 148u: goto L_00156CA0;
    case 149u: goto L_00156CC0;
    case 150u: goto L_00156CF0;
    case 151u: goto L_00156D10;
    case 152u: goto L_00156D40;
    case 153u: goto L_00156D60;
    case 154u: goto L_00156D7C;
    case 155u: goto L_00156DF0;
    case 156u: goto L_00156F48;
    case 157u: goto L_00157000;
    case 158u: goto L_00157060;
    case 159u: goto L_00157094;
    case 160u: goto L_001570C4;
    case 161u: goto L_001570D0;
    case 162u: goto L_00157120;
    case 163u: goto L_00157128;
    case 164u: goto L_00157138;
    case 165u: goto L_00157148;
    case 166u: goto L_00157158;
    case 167u: goto L_001571A0;
    case 168u: goto L_001571CC;
    case 169u: goto L_001571DC;
    case 170u: goto L_00157218;
    case 171u: goto L_00157230;
    case 172u: goto L_00157270;
    case 173u: goto L_00157294;
    case 174u: goto L_001572A4;
    case 175u: goto L_001572D0;
    case 176u: goto L_001572E0;
    case 177u: goto L_00157330;
    case 178u: goto L_0015733C;
    case 179u: goto L_00157380;
    case 180u: goto L_00157448;
    case 181u: goto L_001574F8;
    case 182u: goto L_0015751C;
    case 183u: goto L_00157548;
    case 184u: goto L_001575A0;
    case 185u: goto L_001575B8;
    case 186u: goto L_00157628;
    case 187u: goto L_0015763C;
    case 188u: goto L_0015764C;
    case 189u: goto L_00157664;
    case 190u: goto L_0015766C;
    case 191u: goto L_0015770C;
    case 192u: goto L_00157720;
    case 193u: goto L_0015777C;
    case 194u: goto L_001577C0;
    case 195u: goto L_00157838;
    case 196u: goto L_00157840;
    case 197u: goto L_00157848;
    case 198u: goto L_0015786C;
    case 199u: goto L_00157884;
    case 200u: goto L_0015788C;
    case 201u: goto L_00157894;
    case 202u: goto L_001578A4;
    case 203u: goto L_001578AC;
    case 204u: goto L_001578D4;
    case 205u: goto L_00157914;
    case 206u: goto L_00157920;
    case 207u: goto L_00157930;
    case 208u: goto L_00157938;
    case 209u: goto L_00157940;
    case 210u: goto L_00157984;
    case 211u: goto L_001579A8;
    case 212u: goto L_001579CC;
    case 213u: goto L_001579D4;
    case 214u: goto L_001579F0;
    case 215u: goto L_00157A44;
    case 216u: goto L_00157A4C;
    case 217u: goto L_00157A54;
    case 218u: goto L_00157A5C;
    case 219u: goto L_00157A64;
    case 220u: goto L_00157A88;
    case 221u: goto L_00157A9C;
    case 222u: goto L_00157AA4;
    case 223u: goto L_00157AB0;
    case 224u: goto L_00157AC4;
    case 225u: goto L_00157B10;
    case 226u: goto L_00157B18;
    case 227u: goto L_00157B20;
    case 228u: goto L_00157B34;
    case 229u: goto L_00157B74;
    case 230u: goto L_00157B7C;
    case 231u: goto L_00157B90;
    case 232u: goto L_00157BA0;
    case 233u: goto L_00157BE0;
    case 234u: goto L_00157C38;
    case 235u: goto L_00157C40;
    case 236u: goto L_00157C48;
    case 237u: goto L_00157C50;
    case 238u: goto L_00157C58;
    case 239u: goto L_00157C84;
    case 240u: goto L_00157C90;
    case 241u: goto L_00157CA8;
    case 242u: goto L_00157D04;
    case 243u: goto L_00157D18;
    case 244u: goto L_00157D20;
    case 245u: goto L_00157D28;
    case 246u: goto L_00157D3C;
    case 247u: goto L_00157D54;
    case 248u: goto L_00157D5C;
    case 249u: goto L_00157D70;
    case 250u: goto L_00157E90;
    case 251u: goto L_00157ED8;
    case 252u: goto L_00157FA4;
    case 253u: goto L_00157FDC;
    default: bad_entry(c, 0x00154000u); return;
    }
L_00154000:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 3704u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
L_00154018:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3624u)));
    c.budget -= 1;
L_0015401C:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_0015402C; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 3624u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0015402C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00154040:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[16], c.r[3].w[0] + 25952u);
    set32(c.r[3], 0u + 4u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 10;
    { const bool t = c.r[7].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 12u);  if (t) { goto L_0015453C; } }
    set32(c.r[6], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[6].d[0];  if (t) { goto L_001543E8; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[5].d[0]; set32(c.r[4], 0u + 1u);  if (t) { goto L_001542B8; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[4].d[0]; set32(c.r[3], 0u + 9u);  if (t) { goto L_0015423C; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull; set32(c.r[3], 0u + 8u);  if (t) { goto L_001540A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_001545B4; } }
    set32(c.r[3], 0u + 8u);
    c.budget -= 1;
L_001540A0:
    st8((c.r[16].w[0] + 3635u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 3604u)));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_00154230; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3637u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_001545B0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 6u)));
    set32(c.r[2], c.r[4].w[0] << (c.r[2].w[0] & 31u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001540D0u); c.r[4].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_000E(c, 164u, depth + 1u); else { c.pc = 0x0013A470u; return; } if (c.pc != 0x001540D0u) [[unlikely]] return; }
L_001540D0:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00154114; } }
    set32(c.r[7], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 30u);
    set32(c.r[2], 0u + 9u);
    set32(c.r[5], 0u + 4u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 3u)));
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[7].w[0] + 3u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st16((c.r[16].w[0] + 3604u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015410Cu); st8((c.r[16].w[0] + 3635u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x0015410Cu) [[unlikely]] return; }
L_0015410C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3631u)));  if (t) { goto L_00154220; } }
L_00154114:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 6u)));
    set32(c.r[2], c.r[2].w[0] << (c.r[3].w[0] & 31u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015412Cu); c.r[4].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_000E(c, 164u, depth + 1u); else { c.pc = 0x0013A470u; return; } if (c.pc != 0x0015412Cu) [[unlikely]] return; }
L_0015412C:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015416C; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[5], 0u + 53u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[6].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154164u); st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x00154164u) [[unlikely]] return; }
L_00154164:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015421C; } }
L_0015416C:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 6u)));
    set32(c.r[2], c.r[2].w[0] << (c.r[3].w[0] & 31u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154184u); c.r[4].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_000E(c, 164u, depth + 1u); else { c.pc = 0x0013A470u; return; } if (c.pc != 0x00154184u) [[unlikely]] return; }
L_00154184:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 8192ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001541C8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3631u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[16].w[0] + 3631u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3631u)));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[5], 0u + 43u);  if (t) { goto L_001541B8; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 3631u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 43u);
    c.budget -= 3;
L_001541B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001541C0u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x001541C0u) [[unlikely]] return; }
L_001541C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015421C; } }
L_001541C8:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 6u)));
    set32(c.r[2], c.r[2].w[0] << (c.r[3].w[0] & 31u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001541E0u); c.r[4].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_000E(c, 164u, depth + 1u); else { c.pc = 0x0013A470u; return; } if (c.pc != 0x001541E0u) [[unlikely]] return; }
L_001541E0:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0015421C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3631u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 3631u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3631u)));
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[5], 0u + 43u);  if (t) { goto L_00154214; } }
    st8((c.r[16].w[0] + 3631u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], 0u + 43u);
    c.budget -= 2;
L_00154214:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015421Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x0015421Cu) [[unlikely]] return; }
L_0015421C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3631u)));
    c.budget -= 1;
L_00154220:
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 3631u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001545B0; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_00154230:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 3604u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001545B0; } }
    set32(c.r[3], 0u + 9u);
    c.budget -= 1;
L_0015423C:
    st8((c.r[16].w[0] + 3635u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 3604u)));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_001542AC; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3631u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_00154284; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154268u); st8((c.r[16].w[0] + 3707u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (depth < kMaxDepth) unit_0018(c, 33u, depth + 1u); else { c.pc = 0x001602F0u; return; } if (c.pc != 0x00154268u) [[unlikely]] return; }
L_00154268:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154270u);  if (depth < kMaxDepth) unit_0018(c, 35u, depth + 1u); else { c.pc = 0x00160360u; return; } if (c.pc != 0x00154270u) [[unlikely]] return; }
L_00154270:
    set32(c.r[5], 0u + 60u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015427Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x0015427Cu) [[unlikely]] return; }
L_0015427C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001545B0; } }
L_00154284:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[5], 0u + 8u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001542A0u); st8((c.r[16].w[0] + 3635u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_001B(c, 50u, depth + 1u); else { c.pc = 0x0016CF10u; return; } if (c.pc != 0x001542A0u) [[unlikely]] return; }
L_001542A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001545B0; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_001542AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 3604u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001545B0; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_001542B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001542C0u);  if (depth < kMaxDepth) unit_001B(c, 52u, depth + 1u); else { c.pc = 0x0016CFC0u; return; } if (c.pc != 0x001542C0u) [[unlikely]] return; }
L_001542C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001545B0; } }
    st8((c.r[16].w[0] + 3704u), static_cast<std::uint8_t>(0u));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3631u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00154308; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2071u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00154304; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 2071u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00154308; } }
L_00154304:
    st8((c.r[16].w[0] + 2071u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00154308:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3631u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00154334; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 7u);
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 3630u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
L_00154334:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3631u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00154368; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[5], 0u + 7u);
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 3630u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 9;
L_00154368:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3631u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00154394; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 12u);
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
L_00154394:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3631u)));
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_001545B0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 7u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001545B0; } }
L_001543E8:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 6u)));
    set32(c.r[2], c.r[2].w[0] << (c.r[3].w[0] & 31u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154400u); c.r[4].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_000E(c, 164u, depth + 1u); else { c.pc = 0x0013A470u; return; } if (c.pc != 0x00154400u) [[unlikely]] return; }
L_00154400:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015443C; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], 0u + 30u);
    set32(c.r[5], 0u + 4u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[6].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154434u); st16((c.r[16].w[0] + 3604u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x00154434u) [[unlikely]] return; }
L_00154434:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3707u)));  if (t) { goto L_0015452C; } }
L_0015443C:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 6u)));
    set32(c.r[2], c.r[2].w[0] << (c.r[3].w[0] & 31u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154454u); c.r[4].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_000E(c, 164u, depth + 1u); else { c.pc = 0x0013A470u; return; } if (c.pc != 0x00154454u) [[unlikely]] return; }
L_00154454:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015448C; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], 0u + 20u);
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154478u); st16((c.r[16].w[0] + 3604u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0018(c, 31u, depth + 1u); else { c.pc = 0x00160280u; return; } if (c.pc != 0x00154478u) [[unlikely]] return; }
L_00154478:
    set32(c.r[5], 0u + 53u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154484u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x00154484u) [[unlikely]] return; }
L_00154484:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00154528; } }
L_0015448C:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 6u)));
    set32(c.r[2], c.r[2].w[0] << (c.r[3].w[0] & 31u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001544A4u); c.r[4].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_000E(c, 164u, depth + 1u); else { c.pc = 0x0013A470u; return; } if (c.pc != 0x001544A4u) [[unlikely]] return; }
L_001544A4:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 8192ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001544E0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3707u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001544E0; } }
    set32(c.r[2], c.r[3].w[0] - 1u);
    set32(c.r[5], 0u + 43u);
    st8((c.r[16].w[0] + 3707u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001544D8u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x001544D8u) [[unlikely]] return; }
L_001544D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00154528; } }
L_001544E0:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 6u)));
    set32(c.r[2], c.r[2].w[0] << (c.r[3].w[0] & 31u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001544F8u); c.r[4].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_000E(c, 164u, depth + 1u); else { c.pc = 0x0013A470u; return; } if (c.pc != 0x001544F8u) [[unlikely]] return; }
L_001544F8:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00154528; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3707u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00154528; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[5], 0u + 43u);
    st8((c.r[16].w[0] + 3707u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154528u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x00154528u) [[unlikely]] return; }
L_00154528:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3707u)));
    c.budget -= 1;
L_0015452C:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 3707u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001545B0; } }
    set32(c.r[3], 0u + 12u);
    c.budget -= 1;
L_0015453C:
    st8((c.r[16].w[0] + 3635u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 3604u)));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_001545AC; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3707u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0015458C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 8u);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154574u); st8((c.r[16].w[0] + 3635u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_001B(c, 50u, depth + 1u); else { c.pc = 0x0016CF10u; return; } if (c.pc != 0x00154574u) [[unlikely]] return; }
L_00154574:
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 120u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154584u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0025(c, 284u, depth + 1u); else { c.pc = 0x00197090u; return; } if (c.pc != 0x00154584u) [[unlikely]] return; }
L_00154584:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001545B0; } }
L_0015458C:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], 0u + 20u);
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001545A0u); st16((c.r[16].w[0] + 3604u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0018(c, 31u, depth + 1u); else { c.pc = 0x00160280u; return; } if (c.pc != 0x001545A0u) [[unlikely]] return; }
L_001545A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001545B0; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_001545AC:
    st16((c.r[16].w[0] + 3604u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 1;
L_001545B0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_001545B4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001545C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[16], c.r[2].w[0] + 25952u);
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001546CC; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00154638; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00154604; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00154704; } }
L_00154604:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015460Cu);  if (depth < kMaxDepth) unit_0093(c, 300u, depth + 1u); else { c.pc = 0x0034FD20u; return; } if (c.pc != 0x0015460Cu) [[unlikely]] return; }
L_0015460C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00154704; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2070u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154630u); st16((c.r[28].w[0] - 26792u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0021(c, 77u, depth + 1u); else { c.pc = 0x00184FA0u; return; } if (c.pc != 0x00154630u) [[unlikely]] return; }
L_00154630:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00154704; } }
L_00154638:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154640u);  if (depth < kMaxDepth) unit_0021(c, 86u, depth + 1u); else { c.pc = 0x00185060u; return; } if (c.pc != 0x00154640u) [[unlikely]] return; }
    goto L_00154640;
L_0015463C:
    c.budget -= 1;
L_00154640:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00154704; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2070u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 26792u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001546A0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 84u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154680u); st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_000E(c, 28u, depth + 1u); else { c.pc = 0x00138590u; return; } if (c.pc != 0x00154680u) [[unlikely]] return; }
L_00154680:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154688u);  if (depth < kMaxDepth) unit_001F(c, 9u, depth + 1u); else { c.pc = 0x0017C120u; return; } if (c.pc != 0x00154688u) [[unlikely]] return; }
L_00154688:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00180000u);
    set32(c.r[4], c.r[2].w[0] - 15936u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154698u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 253u, depth + 1u); else { c.pc = 0x0034F7F0u; return; } if (c.pc != 0x00154698u) [[unlikely]] return; }
L_00154698:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001546BC; } }
L_001546A0:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 6u);
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
L_001546BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001546C4u);  if (depth < kMaxDepth) unit_0016(c, 111u, depth + 1u); else { c.pc = 0x0015A8E0u; return; } if (c.pc != 0x001546C4u) [[unlikely]] return; }
L_001546C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00154704; } }
L_001546CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001546D4u);  if (depth < kMaxDepth) unit_0093(c, 300u, depth + 1u); else { c.pc = 0x0034FD20u; return; } if (c.pc != 0x001546D4u) [[unlikely]] return; }
L_001546D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00154704; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 6u);
    st8((c.r[2].w[0] + 84u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154704u); st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0017(c, 268u, depth + 1u); else { c.pc = 0x0015E810u; return; } if (c.pc != 0x00154704u) [[unlikely]] return; }
L_00154704:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015470Cu);  if (depth < kMaxDepth) unit_0080(c, 308u, depth + 1u); else { c.pc = 0x00303FA0u; return; } if (c.pc != 0x0015470Cu) [[unlikely]] return; }
L_0015470C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154714u); set32(c.r[4], 0u + 6u);  if (depth < kMaxDepth) unit_0080(c, 287u, depth + 1u); else { c.pc = 0x00303B80u; return; } if (c.pc != 0x00154714u) [[unlikely]] return; }
L_00154714:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015471Cu); set32(c.r[4], 0u + 6u);  if (depth < kMaxDepth) unit_0080(c, 295u, depth + 1u); else { c.pc = 0x00303D30u; return; } if (c.pc != 0x0015471Cu) [[unlikely]] return; }
L_0015471C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00300000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154728u); set32(c.r[4], c.r[2].w[0] + 15904u);  if (depth < kMaxDepth) unit_0081(c, 121u, depth + 1u); else { c.pc = 0x00305ED0u; return; } if (c.pc != 0x00154728u) [[unlikely]] return; }
L_00154728:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00154740:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[16], c.r[3].w[0] + 25952u);
    set32(c.r[3], 0u + 3u);
    set32(c.r[6], c.r[4].w[0] + 3u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00154914; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], 0u + 1u);  goto L_00154834; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001547FC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00154794; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0015494C; } }
L_00154794:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[3], c.r[2].w[0] + 19088u);
    set32(c.r[4], 0u + 10u);
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 3635u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 3626u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 3708u), static_cast<std::uint16_t>(0u));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3639u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[2], c.r[2].w[0] + 19090u);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0]));
    st32((c.r[16].w[0] + 3596u), c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3639u)));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001547FCu); st32((c.r[16].w[0] + 3600u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0018(c, 37u, depth + 1u); else { c.pc = 0x001603D0u; return; } if (c.pc != 0x001547FCu) [[unlikely]] return; }
L_001547FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154804u);  if (depth < kMaxDepth) unit_0093(c, 300u, depth + 1u); else { c.pc = 0x0034FD20u; return; } if (c.pc != 0x00154804u) [[unlikely]] return; }
L_00154804:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00154948; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154820u); st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0029(c, 79u, depth + 1u); else { c.pc = 0x001A5090u; return; } if (c.pc != 0x00154820u) [[unlikely]] return; }
L_00154820:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154828u);  if (depth < kMaxDepth) unit_001E(c, 151u, depth + 1u); else { c.pc = 0x0017B100u; return; } if (c.pc != 0x00154828u) [[unlikely]] return; }
L_00154828:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00154948; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_00154834:
    st8((c.r[16].w[0] + 3626u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 3708u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00154948; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 6u)));
    set32(c.r[2], c.r[4].w[0] << (c.r[2].w[0] & 31u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154858u); c.r[4].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_000E(c, 164u, depth + 1u); else { c.pc = 0x0013A470u; return; } if (c.pc != 0x00154858u) [[unlikely]] return; }
L_00154858:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001548C4; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], 0u + 4u);
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st16((c.r[16].w[0] + 3604u), static_cast<std::uint16_t>(0u));
    st8((c.r[16].w[0] + 3635u), static_cast<std::uint8_t>(0u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154894u); st8((c.r[16].w[0] + 3631u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0016(c, 109u, depth + 1u); else { c.pc = 0x0015A730u; return; } if (c.pc != 0x00154894u) [[unlikely]] return; }
L_00154894:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015489Cu);  if (depth < kMaxDepth) unit_0014(c, 74u, depth + 1u); else { c.pc = 0x001517F0u; return; } if (c.pc != 0x0015489Cu) [[unlikely]] return; }
L_0015489C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001548A4u);  if (depth < kMaxDepth) unit_001E(c, 175u, depth + 1u); else { c.pc = 0x0017B600u; return; } if (c.pc != 0x001548A4u) [[unlikely]] return; }
L_001548A4:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001548B0u); set32(c.r[4], c.r[2].w[0] + 688u);  if (depth < kMaxDepth) unit_001F(c, 34u, depth + 1u); else { c.pc = 0x0017C4B0u; return; } if (c.pc != 0x001548B0u) [[unlikely]] return; }
L_001548B0:
    set32(c.r[5], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001548BCu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x001548BCu) [[unlikely]] return; }
L_001548BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00154948; } }
L_001548C4:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 6u)));
    set32(c.r[2], c.r[2].w[0] << (c.r[3].w[0] & 31u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001548DCu); c.r[4].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_000E(c, 164u, depth + 1u); else { c.pc = 0x0013A470u; return; } if (c.pc != 0x001548DCu) [[unlikely]] return; }
L_001548DC:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00154948; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154900u); st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_001F(c, 27u, depth + 1u); else { c.pc = 0x0017C370u; return; } if (c.pc != 0x00154900u) [[unlikely]] return; }
L_00154900:
    set32(c.r[5], 0u + 53u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015490Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x0015490Cu) [[unlikely]] return; }
L_0015490C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00154948; } }
L_00154914:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015491Cu);  if (depth < kMaxDepth) unit_0093(c, 246u, depth + 1u); else { c.pc = 0x0034F730u; return; } if (c.pc != 0x0015491Cu) [[unlikely]] return; }
L_0015491C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00154948; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[3], 0u + 60u);
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 3635u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 3624u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 9;
L_00154948:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0015494C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00154960:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[16], c.r[3].w[0] + 25952u);
    set32(c.r[4], 0u + 3u);
    set32(c.r[3], c.r[5].w[0] + 3u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 3u)));
    c.budget -= 13;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[4], 0u + 1u);  if (t) { goto L_00154C80; } }
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_00154B28; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_001549EC; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001549BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 26788u)));  if (t) { goto L_00154CB8; } }
L_001549BC:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], 0u + 119u);
    set32(c.r[2], 0u + 128u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[16].w[0] + 3635u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 3705u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2070u)));
    if (c.r[3].d[0] != 0) c.r[4].d[0] = c.r[2].d[0];
    st16((c.r[28].w[0] - 26784u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st16((c.r[28].w[0] - 26788u), static_cast<std::uint16_t>(0u));
    c.budget -= 12;
L_001549EC:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 26784u)));
    c.budget -= 2;
L_001549F4:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 26788u)));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 5));  if (t) { goto L_00154A08; } }
    set32(c.r[2], c.r[5].w[0] + 31u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.budget -= 2;
L_00154A08:
    set32(c.r[17], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] >= 0; c.r[2].d[0] = c.r[5].d[0] & 31ull;  if (t) { goto L_00154A20; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[18], c.r[3].w[0] << 2);  if (t) { goto L_00154A24; } }
    set32(c.r[2], c.r[2].w[0] - 32u);
    c.budget -= 1;
L_00154A20:
    set32(c.r[18], c.r[3].w[0] << 2);
    c.budget -= 1;
L_00154A24:
    set32(c.r[3], c.r[16].w[0] + c.r[18].w[0]);
    set32(c.r[17], c.r[17].w[0] << (c.r[2].w[0] & 31u));
    set32(c.r[2], ld32((c.r[3].w[0] + 3360u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[17].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00154AE0; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 3376u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[17].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00154AE0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 3705u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154A6Cu); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 26788u)));  if (depth < kMaxDepth) unit_0018(c, 40u, depth + 1u); else { c.pc = 0x00160450u; return; } if (c.pc != 0x00154A6Cu) [[unlikely]] return; }
L_00154A6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154A74u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 26788u)));  if (depth < kMaxDepth) unit_0015(c, 73u, depth + 1u); else { c.pc = 0x00154CE0u; return; } if (c.pc != 0x00154A74u) [[unlikely]] return; }
L_00154A74:
    set32(c.r[5], c.r[18].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 3376u)));
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = c.r[4].d[0] | c.r[17].d[0];
    st32((c.r[5].w[0] + 3376u), c.r[4].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2070u)));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_00154AB0; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 26788u)));
    set32(c.r[3], 0u + 69u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], 0u + 2u);  goto L_00154ACC; }
    set32(c.r[3], 0u + 83u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00154AC8; } }
L_00154AB0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_00154CB4; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 26788u)));
    set32(c.r[3], 0u + 46u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00154CB4; } }
L_00154AC8:
    set32(c.r[4], 0u + 2u);
    c.budget -= 1;
L_00154ACC:
    set32(c.r[5], 0u + 63u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154AD8u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 284u, depth + 1u); else { c.pc = 0x00197090u; return; } if (c.pc != 0x00154AD8u) [[unlikely]] return; }
L_00154AD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00154CB4; } }
L_00154AE0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 26788u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[28].w[0] - 26788u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 26788u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001549F4u | kUnwind; return; } goto L_001549F4; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], 0u + 2u);
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154B18u); st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0016(c, 57u, depth + 1u); else { c.pc = 0x001592E0u; return; } if (c.pc != 0x00154B18u) [[unlikely]] return; }
L_00154B18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154B20u);  if (depth < kMaxDepth) unit_0016(c, 111u, depth + 1u); else { c.pc = 0x0015A8E0u; return; } if (c.pc != 0x00154B20u) [[unlikely]] return; }
L_00154B20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00154CB4; } }
L_00154B28:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3705u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00154CB4; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2070u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_00154B70; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 26788u)));
    set32(c.r[4], 0u + 87u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_00154BA4; } }
    set32(c.r[4], 0u + 107u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_00154BA4; } }
    set32(c.r[4], c.r[5].w[0] - 117u);
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00154BA4; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_00154B70:
    c.budget -= 2;
    if (c.r[6].d[0] != c.r[4].d[0]) { set32(c.r[3], 0u + 1u);  goto L_00154BD8; }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 26788u)));
    set32(c.r[4], 0u + 106u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_00154BA4; } }
    set32(c.r[4], 0u + 124u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_00154BA4; } }
    set32(c.r[4], c.r[5].w[0] - 126u);
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00154BD4; } }
L_00154BA4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 120u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154BC0u); st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0025(c, 284u, depth + 1u); else { c.pc = 0x00197090u; return; } if (c.pc != 0x00154BC0u) [[unlikely]] return; }
L_00154BC0:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154BCCu); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_001B(c, 50u, depth + 1u); else { c.pc = 0x0016CF10u; return; } if (c.pc != 0x00154BCCu) [[unlikely]] return; }
L_00154BCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00154CB4; } }
L_00154BD4:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_00154BD8:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_00154BFC; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 26788u)));
    set32(c.r[3], 0u + 69u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], 0u + 16u);  goto L_00154C18; }
    set32(c.r[3], 0u + 83u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00154C14; } }
L_00154BFC:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_00154C20; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 26788u)));
    set32(c.r[3], 0u + 46u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00154C20; } }
L_00154C14:
    set32(c.r[4], 0u + 16u);
    c.budget -= 1;
L_00154C18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154C20u);  if (depth < kMaxDepth) unit_0025(c, 255u, depth + 1u); else { c.pc = 0x00196A70u; return; } if (c.pc != 0x00154C20u) [[unlikely]] return; }
L_00154C20:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 26788u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 26784u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st16((c.r[28].w[0] - 26788u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 26788u)));
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00154C6C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], 0u + 2u);
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154C5Cu); st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0016(c, 57u, depth + 1u); else { c.pc = 0x001592E0u; return; } if (c.pc != 0x00154C5Cu) [[unlikely]] return; }
L_00154C5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154C64u);  if (depth < kMaxDepth) unit_0016(c, 111u, depth + 1u); else { c.pc = 0x0015A8E0u; return; } if (c.pc != 0x00154C64u) [[unlikely]] return; }
L_00154C64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00154CB4; } }
L_00154C6C:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00154CB4; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_00154C80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154C88u);  if (depth < kMaxDepth) unit_001B(c, 52u, depth + 1u); else { c.pc = 0x0016CFC0u; return; } if (c.pc != 0x00154C88u) [[unlikely]] return; }
L_00154C88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00154CB4; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 13u);
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st32((c.r[3].w[0] + 4u), 0u);
    c.budget -= 9;
L_00154CB4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 26788u)));
    c.budget -= 1;
L_00154CB8:
    st16((c.r[16].w[0] + 3710u), static_cast<std::uint16_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00154CE0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 28022u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 25952u);  if (t) { goto L_00154D14; } }
    c.r[5].d[0] = c.r[4].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    set32(c.r[6], c.r[5].w[0] << 3);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[5], c.r[5].w[0] - 17888u);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));  if (t) { goto L_00154D34; } }
L_00154D14:
    c.r[5].d[0] = c.r[4].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    set32(c.r[6], c.r[5].w[0] << 3);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[5], c.r[5].w[0] - 16928u);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    c.budget -= 8;
L_00154D34:
    c.r[6].d[0] = c.r[5].d[0] << 48;
    set32(c.r[5], 0u + 4u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.budget -= 5;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_00155240; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_00155330; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_001550FC; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_00154FCC; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00154D7C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00155330; } }
L_00154D7C:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2070u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != 0ull; c.r[5].d[0] = c.r[4].d[0] << 56;  if (t) { goto L_00154DAC; } }
    c.r[5].d[0] = c.r[4].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    set32(c.r[6], c.r[5].w[0] << 3);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[5], c.r[5].w[0] - 17886u);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));  if (t) { goto L_00154DC8; } }
    c.r[5].d[0] = c.r[4].d[0] << 56;
    c.budget -= 1;
L_00154DAC:
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    set32(c.r[6], c.r[5].w[0] << 3);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[5], c.r[5].w[0] - 16926u);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    c.budget -= 7;
L_00154DC8:
    c.r[10].d[0] = c.r[5].d[0] << 48;
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != 0ull; c.r[10].d[0] = static_cast<std::uint64_t>(c.r[10].sd[0] >> 48);  if (t) { goto L_00154DF4; } }
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[5], c.r[4].w[0] << 3);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[4], c.r[4].w[0] - 17884u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));  if (t) { goto L_00154E14; } }
L_00154DF4:
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[5], c.r[4].w[0] << 3);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[4], c.r[4].w[0] - 16924u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    c.budget -= 8;
L_00154E14:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2111u)));
    c.r[4].d[0] = c.r[4].d[0] << 48;
    set32(c.r[7], 0u + 4u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[9], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[8], c.r[9].w[0] + 16u);
    c.budget -= 7;
L_00154E30:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0])));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0] + 2u)));
    set32(c.r[7], c.r[7].w[0] - 1u);
    st16((c.r[8].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));
    st16((c.r[8].w[0] + 2u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[9], c.r[9].w[0] + 4u);
    c.budget -= 8;
    { const bool t = c.r[7].sd[0] > 0; set32(c.r[8], c.r[8].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00154E30u | kUnwind; return; } goto L_00154E30; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[7], c.r[6].w[0] + 18448u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2111u)));
    c.r[5].d[0] = c.r[10].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    set32(c.r[8], c.r[5].w[0] << 4);
    set32(c.r[10], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[8], 0u + 4u);
    set32(c.r[9], c.r[3].w[0] + c.r[6].w[0]);
    c.budget -= 10;
L_00154E78:
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[10].w[0])));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[10].w[0] + 2u)));
    set32(c.r[8], c.r[8].w[0] - 1u);
    st16((c.r[9].w[0]), static_cast<std::uint16_t>(c.r[7].w[0]));
    st16((c.r[9].w[0] + 2u), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[10], c.r[10].w[0] + 4u);
    c.budget -= 8;
    { const bool t = c.r[8].sd[0] > 0; set32(c.r[9], c.r[9].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00154E78u | kUnwind; return; } goto L_00154E78; } }
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2070u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[7], c.r[6].w[0] - 15024u);
    set32(c.r[8], c.r[5].w[0] << 3);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2111u)));
    set32(c.r[8], c.r[9].w[0] << 1);
    set32(c.r[7], c.r[8].w[0] + c.r[7].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.r[1].d[0] = c.r[5].sd[0] < 32ll ? 1ull : 0ull;
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    st8((c.r[6].w[0] + 1u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2111u)));
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    st8((c.r[6].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2070u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2111u)));
    set32(c.r[7], c.r[7].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 3536u)));
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    st8((c.r[6].w[0] + 14u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2070u)));
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[7], c.r[6].w[0] + c.r[3].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 3536u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 32;
    { const bool t = c.r[1].d[0] == 0ull; st16((c.r[7].w[0] + 3536u), static_cast<std::uint16_t>(c.r[6].w[0]));  if (t) { goto L_00154F6C; } }
    c.r[4].d[0] = c.r[4].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    set32(c.r[6], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[7], c.r[5].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[5], c.r[5].w[0] - 25728u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2111u)));
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    st16((c.r[4].w[0] + 10u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2111u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 21;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 12u), static_cast<std::uint16_t>(c.r[5].w[0]));  if (t) { goto L_00154FBC; } }
L_00154F6C:
    c.r[4].d[0] = c.r[4].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    set32(c.r[6], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[7], c.r[5].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[5], c.r[5].w[0] - 25936u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2111u)));
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    st16((c.r[4].w[0] + 10u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2111u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    st16((c.r[4].w[0] + 12u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 20;
L_00154FBC:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2111u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2111u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00155330; } }
L_00154FCC:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2070u)));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] != 0ull; c.r[5].d[0] = c.r[4].d[0] << 56;  if (t) { goto L_00154FFC; } }
    c.r[5].d[0] = c.r[4].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    set32(c.r[6], c.r[5].w[0] << 3);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[5], c.r[5].w[0] - 17886u);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));  if (t) { goto L_00155018; } }
    c.r[5].d[0] = c.r[4].d[0] << 56;
    c.budget -= 1;
L_00154FFC:
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    set32(c.r[6], c.r[5].w[0] << 3);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[5], c.r[5].w[0] - 16926u);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    c.budget -= 7;
L_00155018:
    c.r[7].d[0] = c.r[5].d[0] << 48;
    c.budget -= 3;
    { const bool t = c.r[8].d[0] != 0ull; c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);  if (t) { goto L_00155044; } }
    c.r[5].d[0] = c.r[4].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    set32(c.r[6], c.r[5].w[0] << 3);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[5], c.r[5].w[0] - 17884u);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));  if (t) { goto L_00155064; } }
L_00155044:
    c.r[5].d[0] = c.r[4].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    set32(c.r[6], c.r[5].w[0] << 3);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[5], c.r[5].w[0] - 16924u);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    c.budget -= 8;
L_00155064:
    c.r[7].d[0] = c.r[7].d[0] << 48;
    c.r[6].d[0] = c.r[5].d[0] << 48;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    c.budget -= 5;
    { const bool t = c.r[7].d[0] != 0ull; c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);  if (t) { goto L_0015507C; } }
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 1;
L_0015507C:
    set32(c.r[5], 0u + 19u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[5].d[0]; set32(c.r[5], 0u + 20u);  if (t) { goto L_00155090; } }
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 20u);
    c.budget -= 2;
L_00155090:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != c.r[5].d[0]; set32(c.r[5], 0u + 3u);  if (t) { goto L_001550A0; } }
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 3u);
    c.budget -= 2;
L_001550A0:
    c.budget -= 2;
    if (c.r[7].d[0] != c.r[5].d[0]) { set32(c.r[5], 0u + 4u);  goto L_001550B0; }
    mmi::paddub(c.r[4], c.r[5], c.r[0]);
    set32(c.r[5], 0u + 4u);
    c.budget -= 2;
L_001550B0:
    c.budget -= 2;
    if (c.r[7].d[0] != c.r[5].d[0]) { set32(c.r[5], 0u + 5u);  goto L_001550C0; }
    mmi::paddub(c.r[4], c.r[5], c.r[0]);
    set32(c.r[5], 0u + 5u);
    c.budget -= 2;
L_001550C0:
    c.budget -= 2;
    if (c.r[7].d[0] != c.r[5].d[0]) { c.r[4].d[0] = c.r[4].d[0] << 48;  goto L_001550D0; }
    mmi::paddub(c.r[4], c.r[5], c.r[0]);
    c.r[4].d[0] = c.r[4].d[0] << 48;
    c.budget -= 2;
L_001550D0:
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2072u)));
    set32(c.r[5], c.r[3].w[0] + 2072u);
    c.r[3].d[0] = c.r[6].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00155330; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { goto L_00155330; } }
L_001550FC:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2070u)));
    c.budget -= 3;
    if (c.r[5].d[0] != 0ull) { c.r[4].d[0] = c.r[4].d[0] << 56;  goto L_0015512C; }
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[5], c.r[4].w[0] << 3);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[4], c.r[4].w[0] - 17886u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));  if (t) { goto L_00155148; } }
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.budget -= 1;
L_0015512C:
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[5], c.r[4].w[0] << 3);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[4], c.r[4].w[0] - 16926u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    c.budget -= 7;
L_00155148:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[11], c.r[7].w[0] - 15024u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[10], c.r[7].w[0] - 15024u);
    set32(c.r[8], 0u + 1u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[6], c.r[3], c.r[0]);  if (t) { goto L_00155228; } }
L_00155168:
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 12u)));
    set32(c.r[7], c.r[7].w[0] + c.r[5].w[0]);
    st16((c.r[6].w[0] + 12u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 12u)));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 10u)));
    c.r[1].d[0] = c.r[7].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00155190; } }
    st16((c.r[6].w[0] + 12u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.budget -= 2;
L_00155190:
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 12u)));
    c.r[12].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 10u)));
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3544u)));
    set32(c.r[13], c.r[7].w[0] << 2);
    set32(c.r[14], c.r[13].w[0] + c.r[7].w[0]);
    set32(c.r[13], c.r[14].w[0] << 2);
    set32(c.r[13], c.r[14].w[0] + c.r[13].w[0]);
    set32(c.r[13], c.r[13].w[0] << 2);
    mmi::div(c, 0, c.r[13].w[0], c.r[12].w[0]);
    c.r[12].d[0] = c.lo.d[0];
    c.r[12].d[0] = c.r[12].d[0] << 48;
    c.budget -= 15;
    { const bool t = c.r[9].d[0] != 0ull; c.r[12].d[0] = static_cast<std::uint64_t>(c.r[12].sd[0] >> 48);  if (t) { goto L_001551E0; } }
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[9], c.r[9].w[0] << 3);
    set32(c.r[9], c.r[11].w[0] + c.r[9].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0] + 4u)));  if (t) { goto L_001551F4; } }
L_001551E0:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[9], c.r[9].w[0] << 3);
    set32(c.r[9], c.r[10].w[0] + c.r[9].w[0]);
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0] + 6u)));
    c.budget -= 5;
L_001551F4:
    c.r[9].d[0] = c.r[9].d[0] << 48;
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 48);
    c.r[9].d[0] = c.r[12].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[9].d[0] != 0ull;  if (t) { goto L_00155210; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_00155218; } }
L_00155210:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0] + 4u), static_cast<std::uint8_t>(c.r[8].w[0]));  if (t) { goto L_00155220; } }
L_00155218:
    st8((c.r[6].w[0] + 4u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00155220:
    set32(c.r[6], c.r[6].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 2;
L_00155228:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2111u)));
    c.r[7].d[0] = c.r[4].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00155168u | kUnwind; return; } goto L_00155168; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00155330; } }
L_00155240:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2070u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; c.r[5].d[0] = c.r[4].d[0] << 56;  if (t) { goto L_00155270; } }
    c.r[5].d[0] = c.r[4].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    set32(c.r[6], c.r[5].w[0] << 3);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[5], c.r[5].w[0] - 17886u);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));  if (t) { goto L_0015528C; } }
    c.r[5].d[0] = c.r[4].d[0] << 56;
    c.budget -= 1;
L_00155270:
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    set32(c.r[6], c.r[5].w[0] << 3);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[5], c.r[5].w[0] - 16926u);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    c.budget -= 7;
L_0015528C:
    c.r[6].d[0] = c.r[5].d[0] << 48;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_001552A4; } }
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    set32(c.r[5], 0u + 1u);
    c.budget -= 2;
L_001552A4:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[5].d[0]; set32(c.r[5], 0u + 2u);  if (t) { goto L_001552B4; } }
    set32(c.r[4], 0u + 11u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 2;
L_001552B4:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[5].d[0]; set32(c.r[5], 0u + 3u);  if (t) { goto L_001552C4; } }
    set32(c.r[4], 0u + 12u);
    set32(c.r[5], 0u + 3u);
    c.budget -= 2;
L_001552C4:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[5].d[0]; set32(c.r[5], 0u + 4u);  if (t) { goto L_001552D4; } }
    set32(c.r[4], 0u + 13u);
    set32(c.r[5], 0u + 4u);
    c.budget -= 2;
L_001552D4:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[5].d[0]; set32(c.r[5], 0u + 5u);  if (t) { goto L_001552E4; } }
    set32(c.r[4], 0u + 14u);
    set32(c.r[5], 0u + 5u);
    c.budget -= 2;
L_001552E4:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[5].d[0]; set32(c.r[7], 0u + 1u);  if (t) { goto L_001552F4; } }
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    set32(c.r[7], 0u + 1u);
    c.budget -= 2;
L_001552F4:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] >= 0; c.r[5].d[0] = c.r[4].d[0] & 31ull;  if (t) { goto L_00155308; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[4], 0u + 5u);  if (t) { goto L_0015530C; } }
    set32(c.r[5], c.r[5].w[0] - 32u);
    c.budget -= 1;
L_00155308:
    set32(c.r[4], 0u + 5u);
    c.budget -= 1;
L_0015530C:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[4].d[0]; set32(c.r[7], c.r[7].w[0] << (c.r[5].w[0] & 31u));  if (t) { goto L_00155324; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 3520u)));
    c.r[4].d[0] = c.r[4].d[0] | c.r[7].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 3520u), c.r[4].w[0]);  if (t) { goto L_00155330; } }
L_00155324:
    set32(c.r[4], ld32((c.r[3].w[0] + 3524u)));
    c.r[4].d[0] = c.r[4].d[0] | c.r[7].d[0];
    st32((c.r[3].w[0] + 3524u), c.r[4].w[0]);
    c.budget -= 3;
L_00155330:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00155340:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[2], c.r[2].w[0] + 19360u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0015536Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0015536Cu) [[unlikely]] return; }
L_0015536C:
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 8u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00155390; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155388u);  if (depth < kMaxDepth) unit_0016(c, 75u, depth + 1u); else { c.pc = 0x00159940u; return; } if (c.pc != 0x00155388u) [[unlikely]] return; }
L_00155388:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155390u);  if (depth < kMaxDepth) unit_0016(c, 82u, depth + 1u); else { c.pc = 0x00159990u; return; } if (c.pc != 0x00155390u) [[unlikely]] return; }
L_00155390:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001553A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 29582u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], c.r[2].w[0] + 25952u);  if (t) { goto L_0015540C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[5], 0u + 3u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x92490000u);
    c.r[3].d[0] = c.r[3].d[0] | 9363ull;
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 3584u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 3585u), static_cast<std::uint8_t>(0u));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2111u)));
    set32(c.r[5], c.r[4].w[0] - 1u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    set32(c.r[4], c.r[5].w[0] >> 31);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[2].w[0] + 2109u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[2].w[0] + 2110u), static_cast<std::uint8_t>(0u));
    c.budget -= 20;
L_0015540C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 3630u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_00155464; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x92490000u);
    c.r[3].d[0] = c.r[3].d[0] | 9363ull;
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 3584u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 3585u), static_cast<std::uint8_t>(0u));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2111u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    set32(c.r[4], c.r[5].w[0] >> 31);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[2].w[0] + 2109u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[2].w[0] + 2110u), static_cast<std::uint8_t>(0u));
    c.budget -= 18;
L_00155464:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015546Cu);  if (depth < kMaxDepth) unit_001B(c, 1u, depth + 1u); else { c.pc = 0x0016C000u; return; } if (c.pc != 0x0015546Cu) [[unlikely]] return; }
L_0015546C:
    set32(c.r[5], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155478u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_001B(c, 50u, depth + 1u); else { c.pc = 0x0016CF10u; return; } if (c.pc != 0x00155478u) [[unlikely]] return; }
L_00155478:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155480u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_001B(c, 52u, depth + 1u); else { c.pc = 0x0016CFC0u; return; } if (c.pc != 0x00155480u) [[unlikely]] return; }
L_00155480:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00155490:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[2], c.r[2].w[0] + 19392u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00154000u < 16384u) { entry = entries_0015[(t - 0x00154000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001554C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[16], c.r[3].w[0] + 25952u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 29536u)));
    set32(c.r[6], 0u + 1u);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[6].d[0]; mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (t) { goto L_0015569C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001554FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_00155704; } }
L_001554FC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3584u)));
    set32(c.r[5], 0u + 3u);
    set32(c.r[4], 0u + 2u);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 3584u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 3636u), static_cast<std::uint8_t>(0u));
    mmi::paddub(c.r[8], c.r[0], c.r[0]);
    mmi::paddub(c.r[9], c.r[16], c.r[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 3635u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { goto L_001555A0; } }
L_00155528:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 6u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00155540; } }
    c.r[8].d[0] = c.r[7].d[0] << 48;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 48);
    c.budget -= 3;
L_00155540:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3700u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00155568; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00155568; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_00155568; } }
    st8((c.r[9].w[0] + 8u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 1;
L_00155568:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3700u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[6].d[0]; set32(c.r[2], c.r[7].w[0] + 1u);  if (t) { goto L_00155594; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00155590; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_00155590; } }
    st8((c.r[9].w[0] + 8u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 1;
L_00155590:
    set32(c.r[2], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_00155594:
    c.r[7].d[0] = c.r[2].d[0] << 48;
    set32(c.r[9], c.r[9].w[0] + 16u);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    c.budget -= 3;
L_001555A0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2111u)));
    c.r[3].d[0] = c.r[7].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00155528u | kUnwind; return; } goto L_00155528; } }
    c.r[5].d[0] = c.r[8].d[0] << 48;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x92490000u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.r[2].d[0] = c.r[2].d[0] | 9363ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[5].w[0]);
    set32(c.r[4], c.r[5].w[0] >> 31);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[2], 0u + 7u);
    mmi::div(c, 0, c.r[5].w[0], c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st8((c.r[16].w[0] + 2110u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.hi.d[0];
    st8((c.r[16].w[0] + 3632u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 3680u)));
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 20;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00155630; } }
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    mmi::paddub(c.r[3], c.r[16], c.r[0]);
    c.budget -= 2;
L_00155610:
    set32(c.r[2], c.r[4].w[0] + 2u);
    c.r[4].d[0] = c.r[2].d[0] << 48;
    st8((c.r[3].w[0] + 7u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    st8((c.r[3].w[0] + 23u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[4].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00155610u | kUnwind; return; } goto L_00155610; } }
L_00155630:
    st8((c.r[16].w[0] + 3631u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 3680u)));
    set32(c.r[2], 0u + 256u);
    c.r[3].d[0] = c.r[3].d[0] & 768ull;
    c.r[17].d[0] = c.r[3].d[0] << 48;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);
    c.budget -= 8;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 768u);  if (t) { goto L_00155668; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 3631u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155664u); set32(c.r[4], c.r[2].w[0] + 25952u);  if (depth < kMaxDepth) unit_0016(c, 106u, depth + 1u); else { c.pc = 0x0015A5F0u; return; } if (c.pc != 0x00155664u) [[unlikely]] return; }
L_00155664:
    set32(c.r[2], 0u + 768u);
    c.budget -= 1;
L_00155668:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 768u);  if (t) { goto L_00155688; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 3631u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155684u); set32(c.r[4], c.r[2].w[0] + 25952u);  if (depth < kMaxDepth) unit_0016(c, 106u, depth + 1u); else { c.pc = 0x0015A5F0u; return; } if (c.pc != 0x00155684u) [[unlikely]] return; }
L_00155684:
    set32(c.r[2], 0u + 768u);
    c.budget -= 1;
L_00155688:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_00155698; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155698u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0019(c, 116u, depth + 1u); else { c.pc = 0x001666D0u; return; } if (c.pc != 0x00155698u) [[unlikely]] return; }
L_00155698:
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 1;
L_0015569C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001556A4u);  if (depth < kMaxDepth) unit_001B(c, 52u, depth + 1u); else { c.pc = 0x0016CFC0u; return; } if (c.pc != 0x001556A4u) [[unlikely]] return; }
L_001556A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00155700; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3631u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001556C4; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001556DC; } }
L_001556C4:
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], 0u + 2u);
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 3584u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 3635u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_001556DC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3631u)));
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_00155700; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 3u);
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 3584u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 3635u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 5;
L_00155700:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00155704:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00155720:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[16], c.r[2].w[0] + 25952u);
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    st8((c.r[1].w[0] + 29587u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    st8((c.r[1].w[0] + 29788u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 6u)));
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    set32(c.r[2], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] << (c.r[3].w[0] & 31u));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015576Cu); c.r[4].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_000E(c, 164u, depth + 1u); else { c.pc = 0x0013A470u; return; } if (c.pc != 0x0015576Cu) [[unlikely]] return; }
L_0015576C:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[17].d[0] << 48;  if (t) { goto L_0015579C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[5], 0u + 3u);
    set32(c.r[3], 0u + 2u);
    set32(c.r[17], 0u + 1u);
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 3584u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 3631u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[17].d[0] << 48;
    c.budget -= 8;
L_0015579C:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00156208; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 6u)));
    set32(c.r[2], c.r[2].w[0] << (c.r[3].w[0] & 31u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001557C0u); c.r[4].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_000E(c, 164u, depth + 1u); else { c.pc = 0x0013A470u; return; } if (c.pc != 0x001557C0u) [[unlikely]] return; }
L_001557C0:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 8192ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015582C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3632u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[16].w[0] + 3632u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3632u)));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[5], 0u + 41u);  if (t) { goto L_00155824; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2110u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2109u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00155804; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 3632u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00155820; } }
L_00155804:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2111u)));
    set32(c.r[2], 0u + 7u);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    st8((c.r[16].w[0] + 3632u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
L_00155820:
    set32(c.r[5], 0u + 41u);
    c.budget -= 1;
L_00155824:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015582Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x0015582Cu) [[unlikely]] return; }
L_0015582C:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 6u)));
    set32(c.r[2], c.r[2].w[0] << (c.r[3].w[0] & 31u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155844u); c.r[4].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_000E(c, 164u, depth + 1u); else { c.pc = 0x0013A470u; return; } if (c.pc != 0x00155844u) [[unlikely]] return; }
L_00155844:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015586C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3632u)));
    set32(c.r[5], 0u + 41u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015586Cu); st8((c.r[16].w[0] + 3632u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x0015586Cu) [[unlikely]] return; }
L_0015586C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2110u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2109u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3632u)));  if (t) { goto L_00155884; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 6u);  if (t) { goto L_0015589C; } }
L_00155884:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2111u)));
    set32(c.r[2], 0u + 7u);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 6;
L_0015589C:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001558B4; } }
    st8((c.r[16].w[0] + 3632u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_001558B4:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 6u)));
    set32(c.r[2], c.r[2].w[0] << (c.r[3].w[0] & 31u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001558CCu); c.r[4].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_000E(c, 164u, depth + 1u); else { c.pc = 0x0013A470u; return; } if (c.pc != 0x001558CCu) [[unlikely]] return; }
L_001558CC:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00155F6C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3636u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00155F6C; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2110u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3632u)));
    set32(c.r[2], 0u + 41u);
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[4], c.r[16].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[18], c.r[0], c.r[0]);  if (t) { goto L_0015598C; } }
    set32(c.r[5], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155920u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x00155920u) [[unlikely]] return; }
L_00155920:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3631u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (t) { goto L_00155960; } }
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.budget -= 2;
L_00155934:
    set32(c.r[3], c.r[4].w[0] + 2u);
    c.r[4].d[0] = c.r[3].d[0] << 48;
    st8((c.r[5].w[0] + 6u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    st8((c.r[5].w[0] + 22u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = c.r[4].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00155934u | kUnwind; return; } goto L_00155934; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));  if (t) { goto L_00155D74; } }
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 1;
L_00155960:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_00155964:
    set32(c.r[3], c.r[5].w[0] + 2u);
    c.r[5].d[0] = c.r[3].d[0] << 48;
    st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    st8((c.r[4].w[0] + 23u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = c.r[5].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00155964u | kUnwind; return; } goto L_00155964; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00155D70; } }
L_0015598C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    c.r[17].d[0] = c.r[3].d[0] << 56;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);  if (t) { goto L_001559C0; } }
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001559ACu); set32(c.r[18], 0u + 1u);  if (depth < kMaxDepth) unit_0019(c, 116u, depth + 1u); else { c.pc = 0x001666D0u; return; } if (c.pc != 0x001559ACu) [[unlikely]] return; }
L_001559AC:
    set32(c.r[5], 0u + 54u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001559B8u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x001559B8u) [[unlikely]] return; }
L_001559B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00155D70; } }
L_001559C0:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 3680u)));
    c.r[2].d[0] = c.r[6].d[0] & 1024ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[6].d[0] & 4096ull;  if (t) { goto L_00155A04; } }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    set32(c.r[4], 0u + 2u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_00155A00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001559ECu); set32(c.r[18], 0u + 1u);  if (depth < kMaxDepth) unit_0019(c, 116u, depth + 1u); else { c.pc = 0x001666D0u; return; } if (c.pc != 0x001559ECu) [[unlikely]] return; }
L_001559EC:
    set32(c.r[5], 0u + 54u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001559F8u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x001559F8u) [[unlikely]] return; }
L_001559F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00155D70; } }
L_00155A00:
    c.r[2].d[0] = c.r[6].d[0] & 4096ull;
    c.budget -= 1;
L_00155A04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[6].d[0] & 8192ull;  if (t) { goto L_00155A44; } }
    c.r[3].d[0] = c.r[17].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[2].d[0] = c.r[6].d[0] & 255ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00155A40; } }
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155A2Cu); set32(c.r[18], 0u + 1u);  if (depth < kMaxDepth) unit_0019(c, 116u, depth + 1u); else { c.pc = 0x001666D0u; return; } if (c.pc != 0x00155A2Cu) [[unlikely]] return; }
L_00155A2C:
    set32(c.r[5], 0u + 54u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155A38u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x00155A38u) [[unlikely]] return; }
L_00155A38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00155D70; } }
L_00155A40:
    c.r[2].d[0] = c.r[6].d[0] & 8192ull;
    c.budget -= 1;
L_00155A44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00155A80; } }
    c.r[3].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = c.r[6].d[0] & 255ull;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00155A80; } }
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155A6Cu); set32(c.r[18], 0u + 1u);  if (depth < kMaxDepth) unit_0019(c, 116u, depth + 1u); else { c.pc = 0x001666D0u; return; } if (c.pc != 0x00155A6Cu) [[unlikely]] return; }
L_00155A6C:
    set32(c.r[5], 0u + 54u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155A78u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x00155A78u) [[unlikely]] return; }
L_00155A78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00155D70; } }
L_00155A80:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3700u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00155AC4; } }
    c.r[3].d[0] = c.r[5].d[0] << 48;
    set32(c.r[2], 0u + 3u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00155AC0; } }
    set32(c.r[18], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155AACu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0019(c, 116u, depth + 1u); else { c.pc = 0x001666D0u; return; } if (c.pc != 0x00155AACu) [[unlikely]] return; }
L_00155AAC:
    set32(c.r[5], 0u + 54u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155AB8u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x00155AB8u) [[unlikely]] return; }
L_00155AB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00155D70; } }
L_00155AC0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00155AC4:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[2].d[0]) { set32(c.r[5], 0u + 4u);  goto L_00155B0C; }
    c.r[3].d[0] = c.r[5].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[18], 0u + 1u);  goto L_00155AEC; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00155B08; } }
    set32(c.r[18], 0u + 1u);
    c.budget -= 1;
L_00155AEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155AF4u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0019(c, 116u, depth + 1u); else { c.pc = 0x001666D0u; return; } if (c.pc != 0x00155AF4u) [[unlikely]] return; }
L_00155AF4:
    set32(c.r[5], 0u + 54u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155B00u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x00155B00u) [[unlikely]] return; }
L_00155B00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00155D70; } }
L_00155B08:
    set32(c.r[5], 0u + 4u);
    c.budget -= 1;
L_00155B0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155B14u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x00155B14u) [[unlikely]] return; }
L_00155B14:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3631u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (t) { goto L_00155B94; } }
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 2;
L_00155B28:
    set32(c.r[3], c.r[5].w[0] + 2u);
    c.r[5].d[0] = c.r[3].d[0] << 48;
    st8((c.r[4].w[0] + 6u), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    st8((c.r[4].w[0] + 22u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = c.r[5].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00155B28u | kUnwind; return; } goto L_00155B28; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2110u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3632u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2110u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3632u)));
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 18;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 7u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00155C10; } }
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 1;
L_00155B94:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_00155B98:
    set32(c.r[3], c.r[5].w[0] + 2u);
    c.r[5].d[0] = c.r[3].d[0] << 48;
    st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    st8((c.r[4].w[0] + 23u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = c.r[5].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00155B98u | kUnwind; return; } goto L_00155B98; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2110u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3632u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st8((c.r[3].w[0] + 7u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2110u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3632u)));
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[3].w[0] + 6u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 6u)));
    c.budget -= 20;
    if (c.r[3].d[0] == 0ull) { c.r[17].d[0] = c.r[17].d[0] << 48;  goto L_00155C14; }
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 3836u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 2;
L_00155C10:
    c.r[17].d[0] = c.r[17].d[0] << 48;
    c.budget -= 1;
L_00155C14:
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[3], 0u + 19u);  if (t) { goto L_00155C34; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2072u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00155CBC; } }
    set32(c.r[3], 0u + 19u);
    c.budget -= 1;
L_00155C34:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 20u);  if (t) { goto L_00155C50; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2073u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00155CBC; } }
    set32(c.r[3], 0u + 20u);
    c.budget -= 1;
L_00155C50:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_00155C6C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2074u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00155CBC; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 1;
L_00155C6C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 4u);  if (t) { goto L_00155C88; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2075u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00155CBC; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 1;
L_00155C88:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 5u);  if (t) { goto L_00155CA4; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2076u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00155CBC; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 1;
L_00155CA4:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[3].d[0]; set32(c.r[3], c.r[17].w[0] - 19u);  if (t) { goto L_00155D40; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2077u)));
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00155D3C; } }
L_00155CBC:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], 0u + 3u);
    set32(c.r[3], 0u + 20u);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 3635u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 3584u), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
    { const bool t = c.r[17].d[0] != 0ull; st16((c.r[16].w[0] + 3604u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00155CE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (t) { goto L_00155D34; } }
L_00155CE8:
    set32(c.r[2], 0u + 19u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_00155CFC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_00155D34; } }
L_00155CFC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[3].d[0];  if (t) { goto L_00155D0C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00155D34; } }
L_00155D0C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[4].d[0]; set32(c.r[5], 0u + 4u);  if (t) { goto L_00155D20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (t) { goto L_00155D34; } }
    set32(c.r[5], 0u + 4u);
    c.budget -= 1;
L_00155D20:
    c.budget -= 2;
    if (c.r[17].d[0] != c.r[5].d[0]) { set32(c.r[5], 0u + 5u);  goto L_00155D34; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00155D34; } }
    set32(c.r[5], 0u + 5u);
    c.budget -= 1;
L_00155D34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155D3Cu); st8((c.r[16].w[0] + 3638u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (depth < kMaxDepth) unit_0019(c, 120u, depth + 1u); else { c.pc = 0x001667B0u; return; } if (c.pc != 0x00155D3Cu) [[unlikely]] return; }
L_00155D3C:
    set32(c.r[3], c.r[17].w[0] - 19u);
    c.budget -= 1;
L_00155D40:
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00155D70; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2110u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3632u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st8((c.r[3].w[0] + 8u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 9;
L_00155D70:
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 1;
L_00155D74:
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00155F48; } }
    c.r[3].d[0] = c.r[18].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00155F48; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2110u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3632u)));
    set32(c.r[3], 0u + 41u);
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00155F48; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3631u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00155DE4; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3836u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00155DE4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 3631u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00155DF0; } }
L_00155DE4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3631u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 3631u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00155DF0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 3680u)));
    c.r[3].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00155E14; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3631u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00155E14; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 3631u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00155E14:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 3680u)));
    c.r[3].d[0] = c.r[3].d[0] & 512ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00155E3C; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3631u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00155E3C; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 3631u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00155E3C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3631u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00155F48; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2111u)));
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (t) { goto L_00155E88; } }
L_00155E60:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 6u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[6].w[0] + 1u);  if (t) { goto L_00155E7C; } }
    c.r[4].d[0] = c.r[6].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    set32(c.r[3], c.r[6].w[0] + 1u);
    c.budget -= 4;
L_00155E7C:
    c.r[6].d[0] = c.r[3].d[0] << 48;
    set32(c.r[5], c.r[5].w[0] + 16u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.budget -= 3;
L_00155E88:
    c.r[3].d[0] = c.r[6].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00155E60u | kUnwind; return; } goto L_00155E60; } }
    mmi::paddub(c.r[8], c.r[0], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[6], c.r[16], c.r[0]);  if (t) { goto L_00155ED0; } }
L_00155EAC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 7u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[8].w[0] + 1u);  if (t) { goto L_00155EC4; } }
    c.r[5].d[0] = c.r[8].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    set32(c.r[3], c.r[8].w[0] + 1u);
    c.budget -= 3;
L_00155EC4:
    c.r[8].d[0] = c.r[3].d[0] << 48;
    set32(c.r[6], c.r[6].w[0] + 16u);
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 48);
    c.budget -= 3;
L_00155ED0:
    c.r[3].d[0] = c.r[8].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00155EACu | kUnwind; return; } goto L_00155EAC; } }
    c.r[4].d[0] = c.r[4].d[0] << 48;
    c.r[3].d[0] = c.r[5].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[6].d[0] = c.r[5].d[0] << 48;  if (t) { goto L_00155F0C; } }
    set32(c.r[3], c.r[5].w[0] + 1u);
    c.r[5].d[0] = c.r[3].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.r[6].d[0] = c.r[5].d[0] << 48;
    c.budget -= 4;
L_00155F0C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x92490000u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.r[3].d[0] = c.r[3].d[0] | 9363ull;
    mmi::mult(c, 0, c.r[3].w[0], c.r[6].w[0]);
    set32(c.r[5], c.r[6].w[0] >> 31);
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[3], 0u + 7u);
    mmi::div(c, 0, c.r[6].w[0], c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st8((c.r[16].w[0] + 2110u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.hi.d[0];
    st8((c.r[16].w[0] + 3632u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 15;
L_00155F48:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3631u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00156208; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 3u);
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 3584u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00156208; } }
L_00155F6C:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 6u)));
    set32(c.r[2], c.r[2].w[0] << (c.r[3].w[0] & 31u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155F84u); c.r[4].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_000E(c, 164u, depth + 1u); else { c.pc = 0x0013A470u; return; } if (c.pc != 0x00155F84u) [[unlikely]] return; }
L_00155F84:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00156078; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3631u)));
    set32(c.r[5], 0u + 53u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155FACu); st8((c.r[16].w[0] + 3631u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x00155FACu) [[unlikely]] return; }
L_00155FAC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3631u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_00155FC8; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 3680u)));
    c.r[3].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00155FE4; } }
L_00155FC8:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 4u);
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 3631u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00156208; } }
L_00155FE4:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2111u)));
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_00156020; } }
L_00155FF8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 6u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[6].w[0] + 1u);  if (t) { goto L_00156014; } }
    c.r[7].d[0] = c.r[6].d[0] << 48;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    set32(c.r[3], c.r[6].w[0] + 1u);
    c.budget -= 4;
L_00156014:
    c.r[6].d[0] = c.r[3].d[0] << 48;
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.budget -= 3;
L_00156020:
    c.r[3].d[0] = c.r[6].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00155FF8u | kUnwind; return; } goto L_00155FF8; } }
    c.r[6].d[0] = c.r[7].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x92490000u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.r[3].d[0] = c.r[3].d[0] | 9363ull;
    mmi::mult(c, 0, c.r[3].w[0], c.r[6].w[0]);
    set32(c.r[5], c.r[6].w[0] >> 31);
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[3], 0u + 7u);
    mmi::div(c, 0, c.r[6].w[0], c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st8((c.r[16].w[0] + 2110u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 3632u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00156208; } }
L_00156078:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 6u)));
    set32(c.r[2], c.r[2].w[0] << (c.r[3].w[0] & 31u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156090u); c.r[4].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_000E(c, 164u, depth + 1u); else { c.pc = 0x0013A470u; return; } if (c.pc != 0x00156090u) [[unlikely]] return; }
L_00156090:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] & 512ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00156208; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3631u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00156208; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[5], 0u + 43u);
    st8((c.r[16].w[0] + 3631u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001560C4u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x001560C4u) [[unlikely]] return; }
L_001560C4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 3680u)));
    c.r[3].d[0] = c.r[3].d[0] & 512ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001560EC; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3631u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001560EC; } }
    set32(c.r[3], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 3631u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001560EC:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3631u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00156110; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 3u);
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 3584u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00156208; } }
L_00156110:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2111u)));
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_00156148; } }
L_00156124:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 6u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[6].w[0] + 1u);  if (t) { goto L_0015613C; } }
    c.r[7].d[0] = c.r[6].d[0] << 48;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    set32(c.r[3], c.r[6].w[0] + 1u);
    c.budget -= 3;
L_0015613C:
    c.r[6].d[0] = c.r[3].d[0] << 48;
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.budget -= 3;
L_00156148:
    c.r[3].d[0] = c.r[6].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00156124u | kUnwind; return; } goto L_00156124; } }
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    mmi::paddub(c.r[8], c.r[0], c.r[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_00156190; } }
L_0015616C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 7u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[6].w[0] + 1u);  if (t) { goto L_00156184; } }
    c.r[8].d[0] = c.r[6].d[0] << 48;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 48);
    set32(c.r[3], c.r[6].w[0] + 1u);
    c.budget -= 3;
L_00156184:
    c.r[6].d[0] = c.r[3].d[0] << 48;
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.budget -= 3;
L_00156190:
    c.r[3].d[0] = c.r[6].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015616Cu | kUnwind; return; } goto L_0015616C; } }
    c.r[4].d[0] = c.r[7].d[0] << 48;
    c.r[3].d[0] = c.r[8].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[6].d[0] = c.r[8].d[0] << 48;  if (t) { goto L_001561CC; } }
    set32(c.r[3], c.r[8].w[0] + 1u);
    c.r[8].d[0] = c.r[3].d[0] << 48;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 48);
    c.r[6].d[0] = c.r[8].d[0] << 48;
    c.budget -= 4;
L_001561CC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x92490000u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.r[3].d[0] = c.r[3].d[0] | 9363ull;
    mmi::mult(c, 0, c.r[3].w[0], c.r[6].w[0]);
    set32(c.r[5], c.r[6].w[0] >> 31);
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[3], 0u + 7u);
    mmi::div(c, 0, c.r[6].w[0], c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st8((c.r[16].w[0] + 2110u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.hi.d[0];
    st8((c.r[16].w[0] + 3632u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 15;
L_00156208:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00156220:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[16], c.r[3].w[0] + 25952u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 29536u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 10;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001566E0; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_00156380; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[3], 0u + 3u);  if (t) { goto L_00156268; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_001568AC; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 1;
L_00156268:
    st8((c.r[16].w[0] + 3635u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2110u)));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3632u)));
    set32(c.r[5], 0u + 4u);
    set32(c.r[6], c.r[7].w[0] << 3);
    set32(c.r[6], c.r[6].w[0] - c.r[7].w[0]);
    set32(c.r[6], c.r[8].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[6], c.r[6].w[0] + c.r[16].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 8u)));
    st16((c.r[28].w[0] - 26800u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2110u)));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3632u)));
    set32(c.r[6], c.r[7].w[0] << 3);
    set32(c.r[6], c.r[6].w[0] - c.r[7].w[0]);
    set32(c.r[6], c.r[8].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[6], c.r[6].w[0] + c.r[16].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 9u)));
    st16((c.r[28].w[0] - 26804u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2110u)));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3632u)));
    set32(c.r[6], c.r[7].w[0] << 3);
    set32(c.r[6], c.r[6].w[0] - c.r[7].w[0]);
    set32(c.r[6], c.r[8].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[6], c.r[6].w[0] + c.r[16].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 8u)));
    st16((c.r[28].w[0] - 26808u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2110u)));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3632u)));
    set32(c.r[6], c.r[7].w[0] << 3);
    set32(c.r[6], c.r[6].w[0] - c.r[7].w[0]);
    set32(c.r[6], c.r[8].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[7], c.r[16].w[0] + c.r[6].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.budget -= 39;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_00156314; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 9u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_00156314; } }
    st16((c.r[28].w[0] - 26808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 1;
L_00156314:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2110u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3632u)));
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[4], c.r[16].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00156354; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00156354; } }
    set32(c.r[3], 0u + 2u);
    st16((c.r[28].w[0] - 26808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00156354:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 3604u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 3604u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001568A8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3584u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 3584u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001568A8; } }
L_00156380:
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 6u)));
    set32(c.r[2], c.r[4].w[0] << (c.r[2].w[0] & 31u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156394u); c.r[4].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_000E(c, 164u, depth + 1u); else { c.pc = 0x0013A470u; return; } if (c.pc != 0x00156394u) [[unlikely]] return; }
L_00156394:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 8192ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001564BC; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 26808u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[28].w[0] - 26808u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 26808u)));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_001563D0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3638u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2072u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[28].w[0] - 26808u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
L_001563D0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2110u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3632u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 26808u)));
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st8((c.r[2].w[0] + 8u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2110u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3632u)));
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[4], c.r[16].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 19;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00156444; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 26808u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00156444; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3700u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00156444; } }
    set32(c.r[2], 0u + 3u);
    st8((c.r[4].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00156444:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2110u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3632u)));
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[4], c.r[16].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[5], 0u + 43u);  if (t) { goto L_001564B4; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 26808u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001564AC; } }
    st8((c.r[4].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2110u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3632u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 9u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_001564B0; } }
L_001564AC:
    st8((c.r[4].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_001564B0:
    set32(c.r[5], 0u + 43u);
    c.budget -= 1;
L_001564B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001564BCu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x001564BCu) [[unlikely]] return; }
L_001564BC:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 6u)));
    set32(c.r[2], c.r[2].w[0] << (c.r[3].w[0] & 31u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001564D4u); c.r[4].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_000E(c, 164u, depth + 1u); else { c.pc = 0x0013A470u; return; } if (c.pc != 0x001564D4u) [[unlikely]] return; }
L_001564D4:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001565FC; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 26808u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[28].w[0] - 26808u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3638u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 26808u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2072u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00156510; } }
    st16((c.r[28].w[0] - 26808u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_00156510:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2110u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3632u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 26808u)));
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st8((c.r[2].w[0] + 8u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2110u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3632u)));
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[4], c.r[16].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 19;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00156584; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 26808u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00156584; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3700u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00156584; } }
    set32(c.r[2], 0u + 3u);
    st8((c.r[4].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00156584:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2110u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3632u)));
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[4], c.r[16].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[5], 0u + 43u);  if (t) { goto L_001565F4; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 26808u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001565EC; } }
    st8((c.r[4].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2110u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3632u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 9u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_001565F0; } }
L_001565EC:
    st8((c.r[4].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_001565F0:
    set32(c.r[5], 0u + 43u);
    c.budget -= 1;
L_001565F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001565FCu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x001565FCu) [[unlikely]] return; }
L_001565FC:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 6u)));
    set32(c.r[2], c.r[2].w[0] << (c.r[3].w[0] & 31u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156614u); c.r[4].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_000E(c, 164u, depth + 1u); else { c.pc = 0x0013A470u; return; } if (c.pc != 0x00156614u) [[unlikely]] return; }
L_00156614:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00156650; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3584u)));
    set32(c.r[5], 0u + 4u);
    set32(c.r[2], 0u + 30u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 3584u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 3635u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156648u); st16((c.r[16].w[0] + 3604u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x00156648u) [[unlikely]] return; }
L_00156648:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001568A8; } }
L_00156650:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 6u)));
    set32(c.r[2], c.r[2].w[0] << (c.r[3].w[0] & 31u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156668u); c.r[4].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_000E(c, 164u, depth + 1u); else { c.pc = 0x0013A470u; return; } if (c.pc != 0x00156668u) [[unlikely]] return; }
L_00156668:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001568A8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], 0u + 53u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2110u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3632u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 26800u)));
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st8((c.r[2].w[0] + 8u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2110u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3632u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 26804u)));
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001566D8u); st8((c.r[2].w[0] + 9u), static_cast<std::uint8_t>(c.r[7].w[0]));  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x001566D8u) [[unlikely]] return; }
L_001566D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001568A8; } }
L_001566E0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 3604u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 3604u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00156888; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3631u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_00156728; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3836u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00156728; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 3631u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00156734; } }
L_00156728:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3631u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 3631u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00156734:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 3680u)));
    c.r[3].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00156758; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3631u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00156758; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 3631u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00156758:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 3680u)));
    c.r[3].d[0] = c.r[3].d[0] & 512ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00156780; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3631u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00156780; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 3631u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00156780:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3631u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00156888; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2111u)));
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[6], c.r[16], c.r[0]);  if (t) { goto L_001567C8; } }
L_001567A4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 6u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[4].w[0] + 1u);  if (t) { goto L_001567BC; } }
    c.r[5].d[0] = c.r[4].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    set32(c.r[3], c.r[4].w[0] + 1u);
    c.budget -= 3;
L_001567BC:
    c.r[4].d[0] = c.r[3].d[0] << 48;
    set32(c.r[6], c.r[6].w[0] + 16u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.budget -= 3;
L_001567C8:
    c.r[3].d[0] = c.r[4].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001567A4u | kUnwind; return; } goto L_001567A4; } }
    mmi::paddub(c.r[8], c.r[0], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_00156810; } }
L_001567EC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 7u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[8].w[0] + 1u);  if (t) { goto L_00156804; } }
    c.r[6].d[0] = c.r[8].d[0] << 48;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    set32(c.r[3], c.r[8].w[0] + 1u);
    c.budget -= 3;
L_00156804:
    c.r[8].d[0] = c.r[3].d[0] << 48;
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 48);
    c.budget -= 3;
L_00156810:
    c.r[3].d[0] = c.r[8].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001567ECu | kUnwind; return; } goto L_001567EC; } }
    c.r[4].d[0] = c.r[5].d[0] << 48;
    c.r[3].d[0] = c.r[6].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 6;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[6].d[0] = c.r[6].d[0] << 48;  goto L_0015684C; }
    set32(c.r[3], c.r[6].w[0] + 1u);
    c.r[6].d[0] = c.r[3].d[0] << 48;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.r[6].d[0] = c.r[6].d[0] << 48;
    c.budget -= 4;
L_0015684C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x92490000u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.r[3].d[0] = c.r[3].d[0] | 9363ull;
    mmi::mult(c, 0, c.r[3].w[0], c.r[6].w[0]);
    set32(c.r[5], c.r[6].w[0] >> 31);
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[3], 0u + 7u);
    mmi::div(c, 0, c.r[6].w[0], c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st8((c.r[16].w[0] + 2110u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.hi.d[0];
    st8((c.r[16].w[0] + 3632u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 15;
L_00156888:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3631u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001568A8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 3u);
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 3584u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_001568A8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_001568AC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001568C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[4], c.r[3].w[0] + 25952u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 29536u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00156AFC; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[9], 0u + 3u);  if (t) { goto L_001568F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_00156BD8; } }
    set32(c.r[9], 0u + 3u);
    c.budget -= 1;
L_001568F8:
    set32(c.r[10], 0u + 2u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[7], c.r[4], c.r[0]);  if (t) { goto L_00156A50; } }
L_00156910:
    c.r[12].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 3680u)));
    c.r[8].d[0] = c.r[12].d[0] & 256ull;
    c.budget -= 4;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_00156928; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 1u);  if (t) { goto L_00156A68; } }
L_00156928:
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 6u)));
    c.budget -= 3;
    { const bool t = c.r[11].d[0] != 0ull;  if (t) { goto L_00156940; } }
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 7u)));
    c.budget -= 3;
    if (c.r[8].d[0] == 0ull) { set32(c.r[2], c.r[2].w[0] + 1u);  goto L_00156A44; }
L_00156940:
    c.budget -= 2;
    { const bool t = c.r[11].d[0] == 0ull; c.r[8].d[0] = c.r[12].d[0] & 4096ull;  if (t) { goto L_00156954; } }
    mmi::paddub(c.r[6], c.r[3], c.r[0]);
    c.r[8].d[0] = c.r[12].d[0] & 4096ull;
    c.budget -= 3;
L_00156954:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull; c.r[8].d[0] = c.r[12].d[0] & 8192ull;  if (t) { goto L_00156984; } }
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[8].d[0] != 0ull) { mmi::paddub(c.r[5], c.r[3], c.r[0]);  goto L_0015697C; }
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.r[11].d[0] = c.r[12].d[0] & 255ull;
    c.budget -= 4;
    { const bool t = c.r[11].d[0] == c.r[8].d[0];  if (t) { goto L_00156980; } }
    mmi::paddub(c.r[5], c.r[3], c.r[0]);
    c.budget -= 1;
L_0015697C:
    c.budget -= 1;
L_00156980:
    c.r[8].d[0] = c.r[12].d[0] & 8192ull;
    c.budget -= 1;
L_00156984:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull; c.r[8].d[0] = c.r[12].d[0] & 1024ull;  if (t) { goto L_001569B8; } }
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[8].d[0] != 0ull) { mmi::paddub(c.r[5], c.r[3], c.r[0]);  goto L_001569AC; }
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.r[11].d[0] = c.r[12].d[0] & 255ull;
    c.budget -= 4;
    { const bool t = c.r[11].d[0] != c.r[8].d[0];  if (t) { goto L_00156A40; } }
    mmi::paddub(c.r[5], c.r[3], c.r[0]);
    c.budget -= 1;
L_001569AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00156A40; } }
    c.r[8].d[0] = c.r[12].d[0] & 1024ull;
    c.budget -= 1;
L_001569B8:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_001569E4; } }
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[8].d[0] != 0ull) { mmi::paddub(c.r[5], c.r[3], c.r[0]);  goto L_001569DC; }
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == c.r[10].d[0];  if (t) { goto L_00156A40; } }
    mmi::paddub(c.r[5], c.r[3], c.r[0]);
    c.budget -= 1;
L_001569DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00156A40; } }
L_001569E4:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[8].d[0] != 0ull) { mmi::paddub(c.r[5], c.r[3], c.r[0]);  goto L_00156A3C; }
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3700u)));
    c.budget -= 3;
    { const bool t = c.r[11].d[0] != 0ull;  if (t) { goto L_00156A08; } }
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == c.r[9].d[0];  if (t) { goto L_00156A38; } }
L_00156A08:
    c.budget -= 2;
    { const bool t = c.r[11].d[0] != c.r[3].d[0];  if (t) { goto L_00156A20; } }
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == c.r[3].d[0];  if (t) { goto L_00156A38; } }
    c.budget -= 1;
L_00156A20:
    c.budget -= 2;
    { const bool t = c.r[11].d[0] != c.r[3].d[0];  if (t) { goto L_00156A40; } }
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] != c.r[10].d[0];  if (t) { goto L_00156A40; } }
    c.budget -= 1;
L_00156A38:
    mmi::paddub(c.r[5], c.r[3], c.r[0]);
    c.budget -= 1;
L_00156A3C:
    c.budget -= 1;
L_00156A40:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 1;
L_00156A44:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    set32(c.r[7], c.r[7].w[0] + 16u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
L_00156A50:
    c.r[8].d[0] = c.r[2].d[0] << 48;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 48);
    c.r[8].d[0] = c.r[8].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00156910u | kUnwind; return; } goto L_00156910; } }
    c.budget -= 1;
L_00156A68:
    c.r[6].d[0] = c.r[6].d[0] << 48;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00156A88; } }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00156AC8; } }
L_00156A88:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3584u)));
    set32(c.r[2], 0u + 1u);
    mmi::paddub(c.r[3], c.r[0], c.r[0]);
    if (c.r[6].d[0] != 0) c.r[3].d[0] = c.r[2].d[0];
    set32(c.r[2], 0u + 2u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 3584u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 3585u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 3635u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156AB4u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0019(c, 116u, depth + 1u); else { c.pc = 0x001666D0u; return; } if (c.pc != 0x00156AB4u) [[unlikely]] return; }
L_00156AB4:
    set32(c.r[5], 0u + 54u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156AC0u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x00156AC0u) [[unlikely]] return; }
L_00156AC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00156BD4; } }
L_00156AC8:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[5], 0u + 4u);
    set32(c.r[2], 0u + 20u);
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 3584u), static_cast<std::uint8_t>(0u));
    st16((c.r[4].w[0] + 3604u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156AE8u); st8((c.r[4].w[0] + 3633u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0019(c, 118u, depth + 1u); else { c.pc = 0x00166750u; return; } if (c.pc != 0x00156AE8u) [[unlikely]] return; }
L_00156AE8:
    set32(c.r[5], 0u + 60u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156AF4u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x00156AF4u) [[unlikely]] return; }
L_00156AF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00156BD4; } }
L_00156AFC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3636u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00156BD4; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3631u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[4].w[0] + 3631u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 3680u)));
    c.r[3].d[0] = c.r[3].d[0] & 512ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00156B30; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3585u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00156B34; } }
L_00156B30:
    st8((c.r[4].w[0] + 3631u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00156B34:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    mmi::paddub(c.r[8], c.r[0], c.r[0]);
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 3584u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 3585u), static_cast<std::uint8_t>(0u));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2111u)));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[7], c.r[4], c.r[0]);  if (t) { goto L_00156B80; } }
L_00156B5C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 6u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[8].w[0] + 1u);  if (t) { goto L_00156B74; } }
    c.r[6].d[0] = c.r[8].d[0] << 48;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    set32(c.r[3], c.r[8].w[0] + 1u);
    c.budget -= 3;
L_00156B74:
    c.r[8].d[0] = c.r[3].d[0] << 48;
    set32(c.r[7], c.r[7].w[0] + 16u);
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 48);
    c.budget -= 3;
L_00156B80:
    c.r[3].d[0] = c.r[8].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00156B5Cu | kUnwind; return; } goto L_00156B5C; } }
    c.r[7].d[0] = c.r[6].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x92490000u);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    c.r[3].d[0] = c.r[3].d[0] | 9363ull;
    mmi::mult(c, 0, c.r[3].w[0], c.r[7].w[0]);
    set32(c.r[6], c.r[7].w[0] >> 31);
    c.r[5].d[0] = c.hi.d[0];
    set32(c.r[3], 0u + 7u);
    mmi::div(c, 0, c.r[7].w[0], c.r[3].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st8((c.r[4].w[0] + 2110u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.hi.d[0];
    st8((c.r[4].w[0] + 3632u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 16;
L_00156BD4:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_00156BD8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00156BE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 29536u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[4], 0u + 2u);
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[16], c.r[3].w[0] + 25952u);  if (t) { goto L_00156E90; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00156C54; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[3], 0u + 5u);  if (t) { goto L_00156C24; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00156FE8; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 1;
L_00156C24:
    st8((c.r[16].w[0] + 3635u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 3604u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 3604u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00156FE4; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3584u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 3584u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00156FE4; } }
L_00156C54:
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 6u)));
    set32(c.r[2], c.r[3].w[0] << (c.r[2].w[0] & 31u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156C68u); c.r[4].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_000E(c, 164u, depth + 1u); else { c.pc = 0x0013A470u; return; } if (c.pc != 0x00156C68u) [[unlikely]] return; }
L_00156C68:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00156CA8; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3584u)));
    set32(c.r[3], 0u + 6u);
    set32(c.r[2], 0u + 30u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 3584u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 3635u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], 0u + 4u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156CA0u); st16((c.r[16].w[0] + 3604u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x00156CA0u) [[unlikely]] return; }
L_00156CA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00156FE4; } }
L_00156CA8:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 6u)));
    set32(c.r[2], c.r[2].w[0] << (c.r[3].w[0] & 31u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156CC0u); c.r[4].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_000E(c, 164u, depth + 1u); else { c.pc = 0x0013A470u; return; } if (c.pc != 0x00156CC0u) [[unlikely]] return; }
L_00156CC0:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 8192ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00156CF8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3633u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00156CF8; } }
    set32(c.r[5], 0u + 43u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156CF0u); st8((c.r[16].w[0] + 3633u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x00156CF0u) [[unlikely]] return; }
L_00156CF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00156FE4; } }
L_00156CF8:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 6u)));
    set32(c.r[2], c.r[2].w[0] << (c.r[3].w[0] & 31u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156D10u); c.r[4].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_000E(c, 164u, depth + 1u); else { c.pc = 0x0013A470u; return; } if (c.pc != 0x00156D10u) [[unlikely]] return; }
L_00156D10:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00156D48; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3633u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00156D48; } }
    set32(c.r[2], 0u + 1u);
    set32(c.r[5], 0u + 43u);
    st8((c.r[16].w[0] + 3633u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156D40u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x00156D40u) [[unlikely]] return; }
L_00156D40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00156FE4; } }
L_00156D48:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 6u)));
    set32(c.r[2], c.r[2].w[0] << (c.r[3].w[0] & 31u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156D60u); c.r[4].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_000E(c, 164u, depth + 1u); else { c.pc = 0x0013A470u; return; } if (c.pc != 0x00156D60u) [[unlikely]] return; }
L_00156D60:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00156FE4; } }
    set32(c.r[5], 0u + 53u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156D7Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x00156D7Cu) [[unlikely]] return; }
L_00156D7C:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 3680u)));
    set32(c.r[3], 0u + 768u);
    c.r[4].d[0] = c.r[4].d[0] & 768ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00156DAC; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 4u);
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 3584u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00156FE4; } }
L_00156DAC:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 3584u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3631u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 3631u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 3680u)));
    c.r[3].d[0] = c.r[3].d[0] & 512ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00156DDC; } }
    st8((c.r[16].w[0] + 3631u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00156DDC:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2111u)));
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[6], c.r[16], c.r[0]);  if (t) { goto L_00156E38; } }
L_00156DF0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3631u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00156E14; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 6u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[4].w[0] + 1u);  if (t) { goto L_00156E2C; } }
    c.r[5].d[0] = c.r[4].d[0] << 48;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);  if (t) { goto L_00156E28; } }
L_00156E14:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 7u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00156E28; } }
    c.r[5].d[0] = c.r[4].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.budget -= 2;
L_00156E28:
    set32(c.r[3], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_00156E2C:
    c.r[4].d[0] = c.r[3].d[0] << 48;
    set32(c.r[6], c.r[6].w[0] + 16u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.budget -= 3;
L_00156E38:
    c.r[3].d[0] = c.r[4].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00156DF0u | kUnwind; return; } goto L_00156DF0; } }
    c.r[6].d[0] = c.r[5].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x92490000u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.r[3].d[0] = c.r[3].d[0] | 9363ull;
    mmi::mult(c, 0, c.r[3].w[0], c.r[6].w[0]);
    set32(c.r[5], c.r[6].w[0] >> 31);
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[3], 0u + 7u);
    mmi::div(c, 0, c.r[6].w[0], c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st8((c.r[16].w[0] + 2110u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 3632u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00156FE4; } }
L_00156E90:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 3604u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 3604u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00156FE4; } }
    set32(c.r[3], 0u + 5u);
    st8((c.r[16].w[0] + 3635u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3633u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00156ED4; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00156FE4; } }
L_00156ED4:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 3680u)));
    set32(c.r[3], 0u + 768u);
    c.r[4].d[0] = c.r[4].d[0] & 768ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00156F04; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 4u);
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 3584u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00156FE4; } }
L_00156F04:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 3584u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3631u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 3631u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 3680u)));
    c.r[3].d[0] = c.r[3].d[0] & 512ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00156F34; } }
    st8((c.r[16].w[0] + 3631u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00156F34:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2111u)));
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_00156F90; } }
L_00156F48:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3631u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00156F6C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 6u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[6].w[0] + 1u);  if (t) { goto L_00156F84; } }
    c.r[7].d[0] = c.r[6].d[0] << 48;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);  if (t) { goto L_00156F80; } }
L_00156F6C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 7u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00156F80; } }
    c.r[7].d[0] = c.r[6].d[0] << 48;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    c.budget -= 2;
L_00156F80:
    set32(c.r[3], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_00156F84:
    c.r[6].d[0] = c.r[3].d[0] << 48;
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.budget -= 3;
L_00156F90:
    c.r[3].d[0] = c.r[6].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00156F48u | kUnwind; return; } goto L_00156F48; } }
    c.r[6].d[0] = c.r[7].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x92490000u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.r[3].d[0] = c.r[3].d[0] | 9363ull;
    mmi::mult(c, 0, c.r[3].w[0], c.r[6].w[0]);
    set32(c.r[5], c.r[6].w[0] >> 31);
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[3], 0u + 7u);
    mmi::div(c, 0, c.r[6].w[0], c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st8((c.r[16].w[0] + 2110u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.hi.d[0];
    st8((c.r[16].w[0] + 3632u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 16;
L_00156FE4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00156FE8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00157000:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[6], c.r[3].w[0] + 25952u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 2u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[7], c.r[3].w[0] + 3u);  if (t) { goto L_0015707C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { mmi::paddub(c.r[4], c.r[0], c.r[0]);  goto L_00157058; }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00157040; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_001570C8; } }
L_00157040:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[6].w[0] + 3635u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[6].w[0] + 3636u), static_cast<std::uint8_t>(0u));
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 6;
L_00157058:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157060u);  if (depth < kMaxDepth) unit_001B(c, 52u, depth + 1u); else { c.pc = 0x0016CFC0u; return; } if (c.pc != 0x00157060u) [[unlikely]] return; }
L_00157060:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001570C4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001570C4; } }
L_0015707C:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 6u)));
    set32(c.r[2], c.r[2].w[0] << (c.r[3].w[0] & 31u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157094u); c.r[4].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_000E(c, 164u, depth + 1u); else { c.pc = 0x0013A470u; return; } if (c.pc != 0x00157094u) [[unlikely]] return; }
L_00157094:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001570C4; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 5u);
    set32(c.r[5], 0u + 53u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001570C4u); st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x001570C4u) [[unlikely]] return; }
L_001570C4:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_001570C8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001570D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[16], c.r[3].w[0] + 25952u);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[6], c.r[3].w[0] + 3u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00157140; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0015710C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0015721C; } }
L_0015710C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[5], 0u + 8u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157120u); st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_001B(c, 50u, depth + 1u); else { c.pc = 0x0016CF10u; return; } if (c.pc != 0x00157120u) [[unlikely]] return; }
L_00157120:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157128u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_001B(c, 52u, depth + 1u); else { c.pc = 0x0016CFC0u; return; } if (c.pc != 0x00157128u) [[unlikely]] return; }
L_00157128:
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 120u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157138u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0025(c, 284u, depth + 1u); else { c.pc = 0x00197090u; return; } if (c.pc != 0x00157138u) [[unlikely]] return; }
L_00157138:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00157218; } }
L_00157140:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157148u);  if (depth < kMaxDepth) unit_001B(c, 52u, depth + 1u); else { c.pc = 0x0016CFC0u; return; } if (c.pc != 0x00157148u) [[unlikely]] return; }
L_00157148:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00157218; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157158u);  if (depth < kMaxDepth) unit_0093(c, 300u, depth + 1u); else { c.pc = 0x0034FD20u; return; } if (c.pc != 0x00157158u) [[unlikely]] return; }
L_00157158:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00157218; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 8u);
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001571A0u); st8((c.r[2].w[0] + 7u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_001F(c, 27u, depth + 1u); else { c.pc = 0x0017C370u; return; } if (c.pc != 0x001571A0u) [[unlikely]] return; }
L_001571A0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3639u)));
    st8((c.r[16].w[0] + 2106u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 3680u)));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[3], c.r[0], c.r[0]);  if (t) { goto L_001571D8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[4], c.r[2].w[0] + 29600u);
    set32(c.r[6], 0u + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001571CCu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x001571CCu) [[unlikely]] return; }
L_001571CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 3643u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00157204; } }
    mmi::paddub(c.r[3], c.r[0], c.r[0]);
    c.budget -= 1;
L_001571D8:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_001571DC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 6u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], c.r[3].w[0] + 1u);  goto L_001571F4; }
    st8((c.r[4].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
L_001571F4:
    c.r[2].d[0] = c.r[3].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001571DCu | kUnwind; return; } goto L_001571DC; } }
    st8((c.r[16].w[0] + 3643u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00157204:
    st8((c.r[16].w[0] + 3644u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 3645u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 3646u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157218u); st8((c.r[16].w[0] + 3647u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0014(c, 55u, depth + 1u); else { c.pc = 0x00150F20u; return; } if (c.pc != 0x00157218u) [[unlikely]] return; }
L_00157218:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0015721C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00157230:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[16], c.r[3].w[0] + 25952u);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_0015729C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00157268; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_001572D4; } }
L_00157268:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157270u);  if (depth < kMaxDepth) unit_0093(c, 246u, depth + 1u); else { c.pc = 0x0034F730u; return; } if (c.pc != 0x00157270u) [[unlikely]] return; }
L_00157270:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001572D0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 8u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157294u); st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_001B(c, 50u, depth + 1u); else { c.pc = 0x0016CF10u; return; } if (c.pc != 0x00157294u) [[unlikely]] return; }
L_00157294:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001572D0; } }
L_0015729C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001572A4u);  if (depth < kMaxDepth) unit_001B(c, 52u, depth + 1u); else { c.pc = 0x0016CFC0u; return; } if (c.pc != 0x001572A4u) [[unlikely]] return; }
L_001572A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001572D0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 6u);
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001572D0u); st8((c.r[16].w[0] + 3704u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_001F(c, 27u, depth + 1u); else { c.pc = 0x0017C370u; return; } if (c.pc != 0x001572D0u) [[unlikely]] return; }
L_001572D0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_001572D4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001572E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[16], c.r[3].w[0] + 25952u);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[6], c.r[3].w[0] + 3u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    c.budget -= 11;
    if (c.r[3].d[0] == c.r[4].d[0]) { set32(c.r[4], 0u + 1u);  goto L_00157334; }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0015731C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00157368; } }
L_0015731C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[5], 0u + 8u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157330u); st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_001B(c, 50u, depth + 1u); else { c.pc = 0x0016CF10u; return; } if (c.pc != 0x00157330u) [[unlikely]] return; }
L_00157330:
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_00157334:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015733Cu);  if (depth < kMaxDepth) unit_001B(c, 52u, depth + 1u); else { c.pc = 0x0016CFC0u; return; } if (c.pc != 0x0015733Cu) [[unlikely]] return; }
L_0015733C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00157364; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 6u);
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 3704u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
L_00157364:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00157368:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00157380:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[6], c.r[3].w[0] + 25952u);
    set32(c.r[4], 0u + 3u);
    set32(c.r[3], c.r[5].w[0] + 3u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 3u)));
    c.budget -= 10;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_00157540; } }
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_00157514; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_001574F0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001573D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_00157590; } }
L_001573D0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 2070u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_001573FC; } }
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 2068u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[4], c.r[4].w[0] + 5680u);
    set32(c.r[5], c.r[6].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);  if (t) { goto L_00157418; } }
L_001573FC:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 2068u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[4], c.r[4].w[0] + 9648u);
    set32(c.r[5], c.r[6].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.budget -= 7;
L_00157418:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[4], 0u + 3u);  if (t) { goto L_001574E0; } }
    set32(c.r[5], 0u + 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[7], c.r[3].w[0] + 26144u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00730000u);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    st8((c.r[4].w[0] + 520u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[5], c.r[3].w[0] - 14464u);
    c.budget -= 9;
L_00157448:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].d[0] = c.r[6].sd[0] < 5ll ? 1ull : 0ull;
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 8391u)));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 8386u)));
    st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 8389u)));
    st8((c.r[5].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 8387u)));
    st8((c.r[5].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 8388u)));
    st8((c.r[5].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 8390u)));
    st8((c.r[5].w[0] + 6u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 890u)));
    st8((c.r[5].w[0] + 7u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 512u)));
    st16((c.r[5].w[0] + 8u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 514u)));
    st16((c.r[5].w[0] + 16u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 768u)));
    st8((c.r[5].w[0] + 10u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 8438u)));
    st8((c.r[5].w[0] + 11u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 1838u)));
    st8((c.r[5].w[0] + 12u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 1842u)));
    st8((c.r[5].w[0] + 13u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 8437u)));
    st8((c.r[5].w[0] + 14u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[7], c.r[7].w[0] + 8448u);
    c.budget -= 35;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00157448u | kUnwind; return; } goto L_00157448; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015758C; } }
    set32(c.r[4], 0u + 3u);
    c.budget -= 1;
L_001574E0:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 520u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0015758C; } }
L_001574F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001574F8u);  if (depth < kMaxDepth) unit_0093(c, 300u, depth + 1u); else { c.pc = 0x0034FD20u; return; } if (c.pc != 0x001574F8u) [[unlikely]] return; }
L_001574F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0015758C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0015758C; } }
L_00157514:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015751Cu);  if (depth < kMaxDepth) unit_002A(c, 160u, depth + 1u); else { c.pc = 0x001A89E0u; return; } if (c.pc != 0x0015751Cu) [[unlikely]] return; }
L_0015751C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015758C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 4u), 0u);  if (t) { goto L_0015758C; } }
L_00157540:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157548u);  if (depth < kMaxDepth) unit_001D(c, 52u, depth + 1u); else { c.pc = 0x00174670u; return; } if (c.pc != 0x00157548u) [[unlikely]] return; }
L_00157548:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015758C; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 9u);
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 7u), static_cast<std::uint8_t>(0u));
    c.budget -= 15;
L_0015758C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_00157590:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001575A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001575B8u); set32(c.r[16], c.r[2].w[0] + 25952u);  if (depth < kMaxDepth) unit_001D(c, 146u, depth + 1u); else { c.pc = 0x00175180u; return; } if (c.pc != 0x001575B8u) [[unlikely]] return; }
L_001575B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015770C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 5u);
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 3548u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 640u)));
    st8((c.r[16].w[0] + 3625u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 512u)));
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00157620; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 2066u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[16].w[0] + 2066u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 2066u)));
    c.r[1].d[0] = c.r[2].sd[0] < 1000ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00157620; } }
    set32(c.r[2], 0u + 999u);
    st16((c.r[16].w[0] + 2066u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00157620:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157628u);  if (depth < kMaxDepth) unit_0015(c, 249u, depth + 1u); else { c.pc = 0x00157D70u; return; } if (c.pc != 0x00157628u) [[unlikely]] return; }
L_00157628:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3544u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00157644; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015763Cu);  if (depth < kMaxDepth) unit_0015(c, 250u, depth + 1u); else { c.pc = 0x00157E90u; return; } if (c.pc != 0x0015763Cu) [[unlikely]] return; }
L_0015763C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));  if (t) { goto L_00157650; } }
L_00157644:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015764Cu);  if (depth < kMaxDepth) unit_0016(c, 7u, depth + 1u); else { c.pc = 0x001581E0u; return; } if (c.pc != 0x0015764Cu) [[unlikely]] return; }
L_0015764C:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.budget -= 1;
L_00157650:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 512u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0015770C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157664u);  if (depth < kMaxDepth) unit_0016(c, 44u, depth + 1u); else { c.pc = 0x00158F80u; return; } if (c.pc != 0x00157664u) [[unlikely]] return; }
L_00157664:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015766Cu);  if (depth < kMaxDepth) unit_0016(c, 117u, depth + 1u); else { c.pc = 0x0015AC10u; return; } if (c.pc != 0x0015766Cu) [[unlikely]] return; }
L_0015766C:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2070u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_001576A0; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 2068u)));
    set32(c.r[3], 0u + 75u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0015769C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 640u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001576CC; } }
L_0015769C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_001576A0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0015770C; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 2068u)));
    set32(c.r[3], 0u + 92u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0015770C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 640u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0015770C; } }
L_001576CC:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 10u);
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015770Cu); st8((c.r[2].w[0] + 7u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0016(c, 121u, depth + 1u); else { c.pc = 0x0015AE90u; return; } if (c.pc != 0x0015770Cu) [[unlikely]] return; }
L_0015770C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00157720:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[5], c.r[3].w[0] + 25952u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[6], c.r[3].w[0] + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00157774; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00157758; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_001577AC; } }
L_00157758:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 2070u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[2].w[0] + 150u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 7;
L_00157774:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015777Cu);  if (depth < kMaxDepth) unit_0033(c, 181u, depth + 1u); else { c.pc = 0x001CFB50u; return; } if (c.pc != 0x0015777Cu) [[unlikely]] return; }
L_0015777C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001577A8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 11u);
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st32((c.r[3].w[0] + 4u), 0u);
    c.budget -= 9;
L_001577A8:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_001577AC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001577C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[16], c.r[3].w[0] + 25952u);
    set32(c.r[3], 0u + 4u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 2u)));
    c.budget -= 10;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 1u);  goto L_001579B4; }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0015797C; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00157928; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0015789C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0015781C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_001579D8; } }
L_0015781C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[5].w[0] + 3u);  if (t) { goto L_00157840; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157838u); st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000E(c, 28u, depth + 1u); else { c.pc = 0x00138590u; return; } if (c.pc != 0x00157838u) [[unlikely]] return; }
L_00157838:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157840u);  if (depth < kMaxDepth) unit_001F(c, 42u, depth + 1u); else { c.pc = 0x0017C680u; return; } if (c.pc != 0x00157840u) [[unlikely]] return; }
L_00157840:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157848u);  if (depth < kMaxDepth) unit_0093(c, 300u, depth + 1u); else { c.pc = 0x0034FD20u; return; } if (c.pc != 0x00157848u) [[unlikely]] return; }
L_00157848:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001579D4; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015786Cu); st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_001F(c, 43u, depth + 1u); else { c.pc = 0x0017C6D0u; return; } if (c.pc != 0x0015786Cu) [[unlikely]] return; }
L_0015786C:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    st8((c.r[2].w[0] + 643u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 3628u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157884u); st8((c.r[16].w[0] + 3627u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00A1(c, 152u, depth + 1u); else { c.pc = 0x00385AC0u; return; } if (c.pc != 0x00157884u) [[unlikely]] return; }
L_00157884:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015788Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_00A1(c, 152u, depth + 1u); else { c.pc = 0x00385AC0u; return; } if (c.pc != 0x0015788Cu) [[unlikely]] return; }
L_0015788C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157894u);  if (depth < kMaxDepth) unit_0018(c, 22u, depth + 1u); else { c.pc = 0x00160180u; return; } if (c.pc != 0x00157894u) [[unlikely]] return; }
L_00157894:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001579D4; } }
L_0015789C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001578A4u);  if (depth < kMaxDepth) unit_0016(c, 75u, depth + 1u); else { c.pc = 0x00159940u; return; } if (c.pc != 0x001578A4u) [[unlikely]] return; }
L_001578A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001578ACu);  if (depth < kMaxDepth) unit_0016(c, 82u, depth + 1u); else { c.pc = 0x00159990u; return; } if (c.pc != 0x001578ACu) [[unlikely]] return; }
L_001578AC:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 643u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001579D4; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 6u)));
    set32(c.r[2], c.r[2].w[0] << (c.r[3].w[0] & 31u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001578D4u); c.r[4].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_000E(c, 164u, depth + 1u); else { c.pc = 0x0013A470u; return; } if (c.pc != 0x001578D4u) [[unlikely]] return; }
L_001578D4:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001579D4; } }
    set32(c.r[7], ld32((c.r[28].w[0] - 26300u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[2], 0u - 1u);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    set32(c.r[4], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 2u)));
    set32(c.r[5], 0u + 8u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[7].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5175u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157914u); if (c.r[3].d[0] == 0) c.r[6].d[0] = c.r[2].d[0];  if (depth < kMaxDepth) unit_001B(c, 51u, depth + 1u); else { c.pc = 0x0016CF60u; return; } if (c.pc != 0x00157914u) [[unlikely]] return; }
L_00157914:
    set32(c.r[5], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157920u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x00157920u) [[unlikely]] return; }
L_00157920:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001579D4; } }
L_00157928:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157930u);  if (depth < kMaxDepth) unit_0016(c, 75u, depth + 1u); else { c.pc = 0x00159940u; return; } if (c.pc != 0x00157930u) [[unlikely]] return; }
L_00157930:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157938u);  if (depth < kMaxDepth) unit_0016(c, 82u, depth + 1u); else { c.pc = 0x00159990u; return; } if (c.pc != 0x00157938u) [[unlikely]] return; }
L_00157938:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157940u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_001B(c, 52u, depth + 1u); else { c.pc = 0x0016CFC0u; return; } if (c.pc != 0x00157940u) [[unlikely]] return; }
L_00157940:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001579D4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5175u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001579D4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001579D4; } }
L_0015797C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157984u);  if (depth < kMaxDepth) unit_0020(c, 240u, depth + 1u); else { c.pc = 0x001827C0u; return; } if (c.pc != 0x00157984u) [[unlikely]] return; }
L_00157984:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001579D4; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00200000u);
    set32(c.r[4], c.r[2].w[0] - 31408u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001579A8u); st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0081(c, 121u, depth + 1u); else { c.pc = 0x00305ED0u; return; } if (c.pc != 0x001579A8u) [[unlikely]] return; }
L_001579A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001579D4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001579B4:
    st64((c.r[5].w[0]), c.r[2].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00200000u);
    set32(c.r[4], c.r[2].w[0] - 31408u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001579CCu); st64((c.r[3].w[0] + 8u), 0ull);  if (depth < kMaxDepth) unit_0081(c, 121u, depth + 1u); else { c.pc = 0x00305ED0u; return; } if (c.pc != 0x001579CCu) [[unlikely]] return; }
L_001579CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001579D4u);  if (depth < kMaxDepth) unit_000E(c, 28u, depth + 1u); else { c.pc = 0x00138590u; return; } if (c.pc != 0x001579D4u) [[unlikely]] return; }
L_001579D4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_001579D8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001579F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 2u)));
    c.budget -= 7;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], 0u + 1u);  goto L_00157B2C; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { mmi::paddub(c.r[4], c.r[0], c.r[0]);  goto L_00157ABC; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00157A28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_00157B80; } }
L_00157A28:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[5].w[0] + 3u);  if (t) { goto L_00157A5C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157A44u); st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0025(c, 235u, depth + 1u); else { c.pc = 0x00196850u; return; } if (c.pc != 0x00157A44u) [[unlikely]] return; }
L_00157A44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157A4Cu);  if (depth < kMaxDepth) unit_000E(c, 28u, depth + 1u); else { c.pc = 0x00138590u; return; } if (c.pc != 0x00157A4Cu) [[unlikely]] return; }
L_00157A4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157A54u);  if (depth < kMaxDepth) unit_0080(c, 270u, depth + 1u); else { c.pc = 0x003036C0u; return; } if (c.pc != 0x00157A54u) [[unlikely]] return; }
L_00157A54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157A5Cu);  if (depth < kMaxDepth) unit_001F(c, 42u, depth + 1u); else { c.pc = 0x0017C680u; return; } if (c.pc != 0x00157A5Cu) [[unlikely]] return; }
L_00157A5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157A64u);  if (depth < kMaxDepth) unit_0093(c, 300u, depth + 1u); else { c.pc = 0x0034FD20u; return; } if (c.pc != 0x00157A64u) [[unlikely]] return; }
L_00157A64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00157B7C; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157A88u); st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_001F(c, 43u, depth + 1u); else { c.pc = 0x0017C6D0u; return; } if (c.pc != 0x00157A88u) [[unlikely]] return; }
L_00157A88:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 300u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157A9Cu); st16((c.r[2].w[0] + 14u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_00A1(c, 152u, depth + 1u); else { c.pc = 0x00385AC0u; return; } if (c.pc != 0x00157A9Cu) [[unlikely]] return; }
L_00157A9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157AA4u); set32(c.r[4], 0u + 7u);  if (depth < kMaxDepth) unit_00A1(c, 152u, depth + 1u); else { c.pc = 0x00385AC0u; return; } if (c.pc != 0x00157AA4u) [[unlikely]] return; }
L_00157AA4:
    set32(c.r[5], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157AB0u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_001B(c, 50u, depth + 1u); else { c.pc = 0x0016CF10u; return; } if (c.pc != 0x00157AB0u) [[unlikely]] return; }
L_00157AB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00157B7C; } }
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 1;
L_00157ABC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157AC4u);  if (depth < kMaxDepth) unit_001B(c, 52u, depth + 1u); else { c.pc = 0x0016CFC0u; return; } if (c.pc != 0x00157AC4u) [[unlikely]] return; }
L_00157AC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00157B10; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 14u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[3].w[0] + 14u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00157B10; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[6].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 8u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157B10u); st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_001B(c, 51u, depth + 1u); else { c.pc = 0x0016CF60u; return; } if (c.pc != 0x00157B10u) [[unlikely]] return; }
L_00157B10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157B18u);  if (depth < kMaxDepth) unit_0016(c, 75u, depth + 1u); else { c.pc = 0x00159940u; return; } if (c.pc != 0x00157B18u) [[unlikely]] return; }
L_00157B18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157B20u);  if (depth < kMaxDepth) unit_0016(c, 82u, depth + 1u); else { c.pc = 0x00159990u; return; } if (c.pc != 0x00157B20u) [[unlikely]] return; }
L_00157B20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00157B7C; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_00157B2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157B34u);  if (depth < kMaxDepth) unit_001B(c, 52u, depth + 1u); else { c.pc = 0x0016CFC0u; return; } if (c.pc != 0x00157B34u) [[unlikely]] return; }
L_00157B34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00157B6C; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 4u), 0u);  if (t) { goto L_00157B7C; } }
L_00157B6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157B74u);  if (depth < kMaxDepth) unit_0016(c, 75u, depth + 1u); else { c.pc = 0x00159940u; return; } if (c.pc != 0x00157B74u) [[unlikely]] return; }
L_00157B74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157B7Cu);  if (depth < kMaxDepth) unit_0016(c, 82u, depth + 1u); else { c.pc = 0x00159990u; return; } if (c.pc != 0x00157B7Cu) [[unlikely]] return; }
L_00157B7C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_00157B80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00157B90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157BA0u);  if (depth < kMaxDepth) unit_0015(c, 233u, depth + 1u); else { c.pc = 0x00157BE0u; return; } if (c.pc != 0x00157BA0u) [[unlikely]] return; }
L_00157BA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00157BD4; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st32((c.r[3].w[0] + 4u), 0u);
    c.budget -= 11;
L_00157BD4:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00157BE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 3u);
    set32(c.r[5], c.r[4].w[0] + 4u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 8;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], 0u + 1u);  goto L_00157D34; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { mmi::paddub(c.r[4], c.r[0], c.r[0]);  goto L_00157CA0; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00157C50; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00157C28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_00157D64; } }
L_00157C28:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157C38u); st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0025(c, 235u, depth + 1u); else { c.pc = 0x00196850u; return; } if (c.pc != 0x00157C38u) [[unlikely]] return; }
L_00157C38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157C40u);  if (depth < kMaxDepth) unit_0080(c, 270u, depth + 1u); else { c.pc = 0x003036C0u; return; } if (c.pc != 0x00157C40u) [[unlikely]] return; }
L_00157C40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157C48u);  if (depth < kMaxDepth) unit_000E(c, 28u, depth + 1u); else { c.pc = 0x00138590u; return; } if (c.pc != 0x00157C48u) [[unlikely]] return; }
L_00157C48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157C50u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_001F(c, 266u, depth + 1u); else { c.pc = 0x0017F6B0u; return; } if (c.pc != 0x00157C50u) [[unlikely]] return; }
L_00157C50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157C58u);  if (depth < kMaxDepth) unit_0093(c, 300u, depth + 1u); else { c.pc = 0x0034FD20u; return; } if (c.pc != 0x00157C58u) [[unlikely]] return; }
L_00157C58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00157C94; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 360u);
    set32(c.r[4], 0u + 8u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[5].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157C84u); st16((c.r[2].w[0] + 14u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_00A1(c, 152u, depth + 1u); else { c.pc = 0x00385AC0u; return; } if (c.pc != 0x00157C84u) [[unlikely]] return; }
L_00157C84:
    set32(c.r[5], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157C90u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_001B(c, 50u, depth + 1u); else { c.pc = 0x0016CF10u; return; } if (c.pc != 0x00157C90u) [[unlikely]] return; }
L_00157C90:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_00157C94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00157D60; } }
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 1;
L_00157CA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157CA8u);  if (depth < kMaxDepth) unit_001B(c, 52u, depth + 1u); else { c.pc = 0x0016CFC0u; return; } if (c.pc != 0x00157CA8u) [[unlikely]] return; }
L_00157CA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00157D18; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 14u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[3].w[0] + 14u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00157D18; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_00157D10; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157D04u); c.r[6].d[0] = c.r[2].d[0] | 65535ull;  if (depth < kMaxDepth) unit_001B(c, 51u, depth + 1u); else { c.pc = 0x0016CF60u; return; } if (c.pc != 0x00157D04u) [[unlikely]] return; }
L_00157D04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00157D18; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_00157D10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157D18u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_001B(c, 50u, depth + 1u); else { c.pc = 0x0016CF10u; return; } if (c.pc != 0x00157D18u) [[unlikely]] return; }
L_00157D18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157D20u);  if (depth < kMaxDepth) unit_0016(c, 75u, depth + 1u); else { c.pc = 0x00159940u; return; } if (c.pc != 0x00157D20u) [[unlikely]] return; }
L_00157D20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157D28u);  if (depth < kMaxDepth) unit_0016(c, 82u, depth + 1u); else { c.pc = 0x00159990u; return; } if (c.pc != 0x00157D28u) [[unlikely]] return; }
L_00157D28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00157D60; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_00157D34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157D3Cu);  if (depth < kMaxDepth) unit_001B(c, 52u, depth + 1u); else { c.pc = 0x0016CFC0u; return; } if (c.pc != 0x00157D3Cu) [[unlikely]] return; }
L_00157D3C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00157D4C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00157D60; } }
L_00157D4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157D54u);  if (depth < kMaxDepth) unit_0016(c, 75u, depth + 1u); else { c.pc = 0x00159940u; return; } if (c.pc != 0x00157D54u) [[unlikely]] return; }
L_00157D54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157D5Cu);  if (depth < kMaxDepth) unit_0016(c, 82u, depth + 1u); else { c.pc = 0x00159990u; return; } if (c.pc != 0x00157D5Cu) [[unlikely]] return; }
L_00157D5C:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_00157D60:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_00157D64:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00157D70:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 28022u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 25952u);  if (t) { goto L_00157D98; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 1u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 640u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_00157DBC; } }
L_00157D98:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2070u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_00157E44; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 2u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 640u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_00157E44; } }
L_00157DBC:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 2064u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 3684u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    st16((c.r[3].w[0] + 2064u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 2064u)));
    c.r[1].d[0] = c.r[4].sd[0] < 10001ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00157DE4; } }
    set32(c.r[4], 0u + 9999u);
    st16((c.r[3].w[0] + 2064u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 2;
L_00157DE4:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 2068u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[5], c.r[4].w[0] + c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 2112u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[5].w[0] + 2112u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 2068u)));
    c.budget -= 10;
    { const bool t = c.r[5].sd[0] >= 0; c.r[4].d[0] = c.r[5].d[0] & 31ull;  if (t) { goto L_00157E18; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[6], c.r[6].w[0] << (c.r[4].w[0] & 31u));  goto L_00157E1C; }
    set32(c.r[4], c.r[4].w[0] - 32u);
    c.budget -= 1;
L_00157E18:
    set32(c.r[6], c.r[6].w[0] << (c.r[4].w[0] & 31u));
    c.budget -= 1;
L_00157E1C:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] >= 0; set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 5));  if (t) { goto L_00157E2C; } }
    set32(c.r[4], c.r[5].w[0] + 31u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 5));
    c.budget -= 2;
L_00157E2C:
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 3328u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 3328u), c.r[3].w[0]);  if (t) { goto L_00157E7C; } }
L_00157E44:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 3686u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 2064u)));
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    st16((c.r[3].w[0] + 2064u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 2064u)));
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { goto L_00157E64; } }
    st16((c.r[3].w[0] + 2064u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_00157E64:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 2068u)));
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2113u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 2113u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_00157E7C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00157E90:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[16], c.r[3].w[0] + 25952u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[4], c.r[4].w[0] + 26144u);
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    mmi::paddub(c.r[3], c.r[0], c.r[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[9], c.r[5].w[0] + 5680u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[7], c.r[5].w[0] + 9648u);
    set32(c.r[6], 0u + 127u);
    c.budget -= 18;
L_00157ED8:
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[10].d[0] == 0ull;  if (t) { goto L_00157F58; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8391u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_00157F58; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.r[1].d[0] = c.r[5].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00157F58; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2070u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_00157F24; } }
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 2068u)));
    set32(c.r[5], c.r[8].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] + c.r[8].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[9].w[0] + c.r[5].w[0]);  if (t) { goto L_00157F38; } }
L_00157F24:
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 2068u)));
    set32(c.r[5], c.r[8].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] + c.r[8].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[7].w[0] + c.r[5].w[0]);
    c.budget -= 5;
L_00157F38:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 25u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[6].d[0]; c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 514u)));  if (t) { goto L_00157F58; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3706u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_00157F58; } }
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 2;
L_00157F58:
    c.budget -= 2;
    if (c.r[10].d[0] == 0ull) { set32(c.r[3], c.r[3].w[0] + 1u);  goto L_00157F8C; }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8438u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00157F88; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.r[1].d[0] = c.r[5].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00157F88; } }
    c.r[18].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 514u)));
    c.budget -= 3;
L_00157F88:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_00157F8C:
    c.r[5].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 8448u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00157ED8u | kUnwind; return; } goto L_00157ED8; } }
    mmi::paddub(c.r[20], c.r[0], c.r[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[19], c.r[16], c.r[0]);  if (t) { [[clang::musttail]] return unit_0016(c, 6u, depth); } }
L_00157FA4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 6u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00157FF8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.f[0] = c.r[17].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.f[1] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], c.r[2].w[0] - 15200u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157FDCu); c.f[12] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x00157FDCu) [[unlikely]] return; }
L_00157FDC:
    st16((c.r[19].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { [[clang::musttail]] return unit_0016(c, 5u, depth); } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_0016(c, 5u, depth); } }
L_00157FF8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 7u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0016(c, 4u, depth); } }
    [[clang::musttail]] return unit_0016(c, 2u, depth);
}

}
