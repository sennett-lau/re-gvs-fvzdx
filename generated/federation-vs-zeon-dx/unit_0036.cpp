#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0036[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0,
    8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 11, 0, 0, 0,
    12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0,
    0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 26,
    0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0, 36, 0, 0, 37, 0, 0, 38, 0, 39, 0, 0, 0,
    40, 0, 41, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 0, 44, 0, 0, 45, 0, 46, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0,
    0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 51,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    53, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 56, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 69, 0, 0, 70, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 76, 0, 0, 0,
    77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 86, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89,
    0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 98,
    0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0,
    101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 113,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 124, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0,
    0, 127, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 131, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 133, 0, 0, 134, 0, 0, 0, 0,
    0, 135, 0, 0, 0, 0, 0, 136, 0, 0, 137, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 139, 0, 0, 140, 0, 0, 0, 0, 0, 141,
    0, 0, 0, 0, 0, 142, 0, 0, 143, 0, 0, 0, 0, 0, 144, 0, 0, 0, 145, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0,
    0, 148, 0, 0, 149, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 151, 0, 0, 152, 0, 0, 0, 0, 0, 153, 0, 0, 0, 154, 0, 0,
    155, 0, 0, 0, 0, 0, 156, 0, 0, 157, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    163, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 166, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0,
    0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0,
    0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    186, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 189, 0,
    190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0,
    193, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0, 0, 212, 0,
    0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0,
    0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 221, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 224, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 227, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0036(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001D8000;
    case 2u: goto L_001D8028;
    case 3u: goto L_001D81B0;
    case 4u: goto L_001D81C0;
    case 5u: goto L_001D81D0;
    case 6u: goto L_001D81F8;
    case 7u: goto L_001D8260;
    case 8u: goto L_001D8280;
    case 9u: goto L_001D83C0;
    case 10u: goto L_001D83E0;
    case 11u: goto L_001D83F0;
    case 12u: goto L_001D8400;
    case 13u: goto L_001D8460;
    case 14u: goto L_001D8560;
    case 15u: goto L_001D85EC;
    case 16u: goto L_001D8630;
    case 17u: goto L_001D86E0;
    case 18u: goto L_001D8790;
    case 19u: goto L_001D8820;
    case 20u: goto L_001D8868;
    case 21u: goto L_001D8888;
    case 22u: goto L_001D88B4;
    case 23u: goto L_001D88D4;
    case 24u: goto L_001D8900;
    case 25u: goto L_001D8A6C;
    case 26u: goto L_001D8A7C;
    case 27u: goto L_001D8A90;
    case 28u: goto L_001D8B3C;
    case 29u: goto L_001D8BA4;
    case 30u: goto L_001D8C20;
    case 31u: goto L_001D8C60;
    case 32u: goto L_001D8D34;
    case 33u: goto L_001D8D8C;
    case 34u: goto L_001D8DB0;
    case 35u: goto L_001D8DC0;
    case 36u: goto L_001D8DD0;
    case 37u: goto L_001D8DDC;
    case 38u: goto L_001D8DE8;
    case 39u: goto L_001D8DF0;
    case 40u: goto L_001D8E00;
    case 41u: goto L_001D8E08;
    case 42u: goto L_001D8E18;
    case 43u: goto L_001D8E28;
    case 44u: goto L_001D8E3C;
    case 45u: goto L_001D8E48;
    case 46u: goto L_001D8E50;
    case 47u: goto L_001D8E60;
    case 48u: goto L_001D8EE0;
    case 49u: goto L_001D8F04;
    case 50u: goto L_001D8F58;
    case 51u: goto L_001D8F7C;
    case 52u: goto L_001D8FB0;
    case 53u: goto L_001D9000;
    case 54u: goto L_001D9008;
    case 55u: goto L_001D9040;
    case 56u: goto L_001D904C;
    case 57u: goto L_001D9064;
    case 58u: goto L_001D90A0;
    case 59u: goto L_001D90C8;
    case 60u: goto L_001D9130;
    case 61u: goto L_001D9160;
    case 62u: goto L_001D91D0;
    case 63u: goto L_001D91F0;
    case 64u: goto L_001D9228;
    case 65u: goto L_001D9238;
    case 66u: goto L_001D92B8;
    case 67u: goto L_001D92C8;
    case 68u: goto L_001D92E0;
    case 69u: goto L_001D9308;
    case 70u: goto L_001D9314;
    case 71u: goto L_001D9320;
    case 72u: goto L_001D93A0;
    case 73u: goto L_001D93C0;
    case 74u: goto L_001D93F0;
    case 75u: goto L_001D9460;
    case 76u: goto L_001D9470;
    case 77u: goto L_001D9480;
    case 78u: goto L_001D94E0;
    case 79u: goto L_001D9560;
    case 80u: goto L_001D95C0;
    case 81u: goto L_001D9600;
    case 82u: goto L_001D96E0;
    case 83u: goto L_001D9770;
    case 84u: goto L_001D97B0;
    case 85u: goto L_001D97C0;
    case 86u: goto L_001D9810;
    case 87u: goto L_001D9818;
    case 88u: goto L_001D9874;
    case 89u: goto L_001D98FC;
    case 90u: goto L_001D9908;
    case 91u: goto L_001D9930;
    case 92u: goto L_001D9960;
    case 93u: goto L_001D9A20;
    case 94u: goto L_001D9AD8;
    case 95u: goto L_001D9B40;
    case 96u: goto L_001D9B50;
    case 97u: goto L_001D9C60;
    case 98u: goto L_001D9C7C;
    case 99u: goto L_001D9C94;
    case 100u: goto L_001D9CDC;
    case 101u: goto L_001D9D00;
    case 102u: goto L_001D9DAC;
    case 103u: goto L_001D9E04;
    case 104u: goto L_001D9E28;
    case 105u: goto L_001D9E48;
    case 106u: goto L_001D9EA0;
    case 107u: goto L_001D9EC4;
    case 108u: goto L_001D9EE0;
    case 109u: goto L_001D9F38;
    case 110u: goto L_001D9F5C;
    case 111u: goto L_001D9F90;
    case 112u: goto L_001DA060;
    case 113u: goto L_001DA07C;
    case 114u: goto L_001DA0D4;
    case 115u: goto L_001DA0F8;
    case 116u: goto L_001DA130;
    case 117u: goto L_001DA140;
    case 118u: goto L_001DA1B8;
    case 119u: goto L_001DA1DC;
    case 120u: goto L_001DA238;
    case 121u: goto L_001DA25C;
    case 122u: goto L_001DA290;
    case 123u: goto L_001DA2E4;
    case 124u: goto L_001DA2F0;
    case 125u: goto L_001DA340;
    case 126u: goto L_001DA3F0;
    case 127u: goto L_001DA404;
    case 128u: goto L_001DA418;
    case 129u: goto L_001DA438;
    case 130u: goto L_001DA4A4;
    case 131u: goto L_001DA4B0;
    case 132u: goto L_001DA4C8;
    case 133u: goto L_001DA4E0;
    case 134u: goto L_001DA4EC;
    case 135u: goto L_001DA504;
    case 136u: goto L_001DA51C;
    case 137u: goto L_001DA528;
    case 138u: goto L_001DA540;
    case 139u: goto L_001DA558;
    case 140u: goto L_001DA564;
    case 141u: goto L_001DA57C;
    case 142u: goto L_001DA594;
    case 143u: goto L_001DA5A0;
    case 144u: goto L_001DA5B8;
    case 145u: goto L_001DA5C8;
    case 146u: goto L_001DA5D4;
    case 147u: goto L_001DA5EC;
    case 148u: goto L_001DA604;
    case 149u: goto L_001DA610;
    case 150u: goto L_001DA628;
    case 151u: goto L_001DA640;
    case 152u: goto L_001DA64C;
    case 153u: goto L_001DA664;
    case 154u: goto L_001DA674;
    case 155u: goto L_001DA680;
    case 156u: goto L_001DA698;
    case 157u: goto L_001DA6A4;
    case 158u: goto L_001DA6C0;
    case 159u: goto L_001DA774;
    case 160u: goto L_001DA7CC;
    case 161u: goto L_001DA7F0;
    case 162u: goto L_001DA820;
    case 163u: goto L_001DA900;
    case 164u: goto L_001DA920;
    case 165u: goto L_001DA938;
    case 166u: goto L_001DA984;
    case 167u: goto L_001DA9A0;
    case 168u: goto L_001DAA70;
    case 169u: goto L_001DAA8C;
    case 170u: goto L_001DAAE4;
    case 171u: goto L_001DAB08;
    case 172u: goto L_001DAB40;
    case 173u: goto L_001DAB50;
    case 174u: goto L_001DABC4;
    case 175u: goto L_001DABEC;
    case 176u: goto L_001DAC48;
    case 177u: goto L_001DAC6C;
    case 178u: goto L_001DACF4;
    case 179u: goto L_001DAD4C;
    case 180u: goto L_001DAD70;
    case 181u: goto L_001DADB8;
    case 182u: goto L_001DAE10;
    case 183u: goto L_001DAE34;
    case 184u: goto L_001DAE70;
    case 185u: goto L_001DAE98;
    case 186u: goto L_001DAF00;
    case 187u: goto L_001DAF20;
    case 188u: goto L_001DAF60;
    case 189u: goto L_001DAF78;
    case 190u: goto L_001DAF80;
    case 191u: goto L_001DAFCC;
    case 192u: goto L_001DAFE8;
    case 193u: goto L_001DB000;
    case 194u: goto L_001DB020;
    case 195u: goto L_001DB030;
    case 196u: goto L_001DB040;
    case 197u: goto L_001DB080;
    case 198u: goto L_001DB0C0;
    case 199u: goto L_001DB100;
    case 200u: goto L_001DB170;
    case 201u: goto L_001DB1B0;
    case 202u: goto L_001DB270;
    case 203u: goto L_001DB300;
    case 204u: goto L_001DB3AC;
    case 205u: goto L_001DB500;
    case 206u: goto L_001DB558;
    case 207u: goto L_001DB614;
    case 208u: goto L_001DB63C;
    case 209u: goto L_001DB700;
    case 210u: goto L_001DB7D4;
    case 211u: goto L_001DB7E4;
    case 212u: goto L_001DB7F8;
    case 213u: goto L_001DB810;
    case 214u: goto L_001DB89C;
    case 215u: goto L_001DB91C;
    case 216u: goto L_001DB928;
    case 217u: goto L_001DB9F8;
    case 218u: goto L_001DBA04;
    case 219u: goto L_001DBA30;
    case 220u: goto L_001DBAF8;
    case 221u: goto L_001DBB8C;
    case 222u: goto L_001DBB98;
    case 223u: goto L_001DBC08;
    case 224u: goto L_001DBC98;
    case 225u: goto L_001DBCA4;
    case 226u: goto L_001DBD1C;
    case 227u: goto L_001DBD98;
    case 228u: goto L_001DBDA4;
    case 229u: goto L_001DBE20;
    case 230u: goto L_001DBEB0;
    case 231u: goto L_001DBEBC;
    case 232u: goto L_001DBF10;
    default: bad_entry(c, 0x001D8000u); return;
    }
L_001D8000:
    st8((c.r[3].w[0] + 11u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { goto L_001D805C; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 7u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 11u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_001D805C; } }
    c.r[4].d[0] = c.r[6].d[0] & 4096ull;
    c.budget -= 1;
L_001D8028:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001D805C; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 11u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[6].d[0] = c.r[4].d[0] << 56;
    st8((c.r[3].w[0] + 11u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 7u)));
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[1].d[0] = c.r[4].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001D805C; } }
    st8((c.r[3].w[0] + 11u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_001D805C:
    c.r[4].d[0] = ld16((c.r[7].w[0]));
    c.r[4].d[0] = c.r[4].d[0] & 33632ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[4], c.r[5].w[0] << 1);  if (t) { goto L_001D8080; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_001D819C; } }
    set32(c.r[4], c.r[5].w[0] << 1);
    c.budget -= 1;
L_001D8080:
    set32(c.r[5], 0u + 32u);
    st16((c.r[3].w[0] + 4u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[7], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[8], ld32((c.r[28].w[0] - 26304u)));
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 257u)));
    set32(c.r[5], c.r[4].w[0] + c.r[8].w[0]);
    set32(c.r[9], c.r[11].w[0] + c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 264u)));
    c.budget -= 10;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[5], c.r[4].w[0] + c.r[8].w[0]);  if (t) { goto L_001D812C; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 11u)));
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_001D8128; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 256u)));
    c.r[5].d[0] = c.r[5].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_001D8128; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[7], c.r[5].w[0] - 20948u);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 6u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[6], c.r[5].w[0] - 20946u);
    set32(c.r[5], c.r[8].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[8].w[0]);
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[5], c.r[7].w[0] + c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    st8((c.r[9].w[0] + 272u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 6u)));
    set32(c.r[5], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[7], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 257u)));
    set32(c.r[5], c.r[7].w[0] << 3);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 24;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 280u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_001D819C; } }
L_001D8128:
    set32(c.r[5], c.r[4].w[0] + c.r[8].w[0]);
    c.budget -= 1;
L_001D812C:
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 6u)));
    set32(c.r[7], c.r[11].w[0] + c.r[5].w[0]);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 11u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[8], c.r[5].w[0] - 21068u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[6], c.r[5].w[0] - 21066u);
    set32(c.r[9], c.r[10].w[0] + c.r[9].w[0]);
    set32(c.r[5], c.r[9].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[9].w[0]);
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[5], c.r[8].w[0] + c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    st8((c.r[7].w[0] + 272u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 6u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 11u)));
    set32(c.r[5], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[7], c.r[8].w[0] + c.r[7].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[7].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 257u)));
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    st8((c.r[3].w[0] + 280u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 28;
L_001D819C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D81B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D81C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D81D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[5], 0u + 6u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D81F8u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x001D81F8u) [[unlikely]] return; }
L_001D81F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D8248; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x001E0000u);
    set32(c.r[5], 0u + 22u);
    set32(c.r[4], 0u + 2u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[3], c.r[3].w[0] - 32160u);
    st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], c.r[3].w[0] - 20160u);
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 18;
L_001D8248:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001D8260:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[2].w[0] - 18864u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001D8000u < 16384u) { entry = entries_0036[(t - 0x001D8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001D8280:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], 0u + 4u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001D8390; } }
    set32(c.r[6], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[6].d[0];  if (t) { goto L_001D8354; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001D8354; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001D82FC; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001D82D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D83B8; } }
L_001D82D0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_001D82F4; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 104u), 0u);  if (t) { goto L_001D83B8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_001D82F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 104u), c.r[3].w[0]);  if (t) { goto L_001D83B8; } }
L_001D82FC:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.r[3].d[0] = c.r[5].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001D834C; } }
    c.r[3].d[0] = c.r[5].d[0] & 127ull;
    st8((c.r[4].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], c.r[3].w[0] - 20176u);
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_001D83B8; } }
    set32(c.r[3], 0u + 30u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001D83B8; } }
L_001D834C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(0u));  if (t) { goto L_001D83B8; } }
L_001D8354:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.r[3].d[0] = c.r[5].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001D8388; } }
    c.r[3].d[0] = c.r[5].d[0] & 127ull;
    st8((c.r[4].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + 10u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001D83B8; } }
L_001D8388:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(0u));  if (t) { goto L_001D83B8; } }
L_001D8390:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.r[3].d[0] = c.r[5].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001D83B4; } }
    c.r[3].d[0] = c.r[5].d[0] & 127ull;
    st8((c.r[4].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 20u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001D83B8; } }
L_001D83B4:
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_001D83B8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D83C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[2].w[0] - 18848u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001D8000u < 16384u) { entry = entries_0036[(t - 0x001D8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001D83E0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_001D83F0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_001D8400:
    c.f[1] = ld32((c.r[4].w[0] + 104u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[5].w[0];
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_001D844C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D080000u);
    c.r[3].d[0] = c.r[3].d[0] | 34953ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[4].w[0] + 104u), c.f[0]);  if (t) { goto L_001D8448; } }
    st32((c.r[4].w[0] + 104u), c.r[5].w[0]);
    c.budget -= 1;
L_001D8448:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_001D844C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_001D8460:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001D84F8; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001D8484; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001D8520; } }
L_001D8484:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 166u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_001D84C4; } }
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 25721u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    st8((c.r[1].w[0] + 25721u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 9;
L_001D84C4:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 166u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[1] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[2] = c.r[5].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 104u), c.f[0]);  if (t) { goto L_001D8520; } }
L_001D84F8:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    set32(c.r[3], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_001D8514; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 104u), c.r[3].w[0]);  if (t) { goto L_001D8520; } }
L_001D8514:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.f[0] = ld32((c.r[1].w[0] + 25704u));
    st32((c.r[4].w[0] + 104u), c.f[0]);
    c.budget -= 3;
L_001D8520:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    set32(c.r[3], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_001D853C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001D8554; } }
L_001D853C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 25720u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001D8554; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001D8554:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D8560:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { goto L_001D85F0; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    set32(c.r[16], c.r[17].w[0] + 32u);
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[4].sd[0] > 0; st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001D85B8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0]), 0u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 25721u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 25721u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001D85F0; } }
L_001D85B8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[1] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3800000u);
    c.f[0] = c.r[2].w[0];
    c.f[2] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D85ECu); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x001D85ECu) [[unlikely]] return; }
L_001D85EC:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_001D85F0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.f[0] = ld32((c.r[1].w[0] + 25704u));
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 25720u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001D8614; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001D8614:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001D8630:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001D86AC; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[5].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].sd[0] > 0; st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001D8678; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[4].w[0] + 104u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 25721u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 25721u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001D86B8; } }
L_001D8678:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[1] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[2] = c.r[5].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 104u), c.f[0]);  if (t) { goto L_001D86B8; } }
L_001D86AC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.f[0] = ld32((c.r[1].w[0] + 25704u));
    st32((c.r[4].w[0] + 104u), c.f[0]);
    c.budget -= 3;
L_001D86B8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 25720u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001D86D0; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001D86D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D86E0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001D874C; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[5].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].sd[0] > 0; st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001D8714; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 104u), c.r[3].w[0]);  if (t) { goto L_001D8740; } }
L_001D8714:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[1] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[2] = c.r[5].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 104u), c.f[0]);
    c.budget -= 11;
L_001D8740:
    c.f[0] = ld32((c.r[4].w[0] + 104u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 112u), c.f[0]);  if (t) { goto L_001D876C; } }
L_001D874C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.f[1] = ld32((c.r[1].w[0] + 25704u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 104u), c.f[1]);
    st32((c.r[4].w[0] + 112u), c.f[0]);
    c.budget -= 8;
L_001D876C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 25720u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001D8784; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001D8784:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D8790:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[16], c.r[2].w[0] - 20416u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), 0u);
    set32(c.r[2], c.r[29].w[0] + 108u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20376u), c.r[2].w[0]);
    set32(c.r[19], c.r[29].w[0] + 112u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[19].w[0]);
    set32(c.r[2], 0u + 3u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20354u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[2].w[0] - 18816u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[18], c.r[2].w[0] - 18752u);
    mmi::paddub(c.r[20], c.r[4], c.r[0]);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 36;
L_001D8820:
    set32(c.r[2], ld32((c.r[18].w[0])));
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[19].w[0] + 3u));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_001D8844; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001D885C; } }
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.budget -= 1;
L_001D8844:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_001D885C:
    c.f[0] = ld32((c.r[20].w[0] + 104u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8868u); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x001D8868u) [[unlikely]] return; }
L_001D8868:
    set32(c.r[17], c.r[17].w[0] + 1u);
    st8((c.r[19].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[17].sd[0] < 4ll ? 1ull : 0ull;
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D8820u | kUnwind; return; } goto L_001D8820; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8888u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_001C(c, 21u, depth + 1u); else { c.pc = 0x00170680u; return; } if (c.pc != 0x001D8888u) [[unlikely]] return; }
L_001D8888:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[2].w[0] - 20320u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00E00000u);
    c.r[2].d[0] = c.r[2].d[0] | 640ull;
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[20].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D88B4u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x001D88B4u) [[unlikely]] return; }
L_001D88B4:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], c.r[2].w[0] << 24);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[2].d[0] = c.r[2].d[0] | 20817ull;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D88D4u); st32((c.r[29].w[0] + 112u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001B(c, 207u, depth + 1u); else { c.pc = 0x0016FA40u; return; } if (c.pc != 0x001D88D4u) [[unlikely]] return; }
L_001D88D4:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001D8900:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[29].w[0] + 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), 0u);
    set32(c.r[2], c.r[29].w[0] + 76u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], c.r[2].w[0] - 18648u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[5], c.r[2].w[0] - 18736u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[8], 0u + 3u);
    set32(c.r[2], c.r[6].w[0] << 3);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[1].w[0] - 20368u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    set32(c.r[3], c.r[2].w[0] - 19056u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[7], 0u + 2u);
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    set32(c.r[6], 0u + 1u);
    set32(c.r[10], c.r[29].w[0] + 48u);
    set32(c.r[16], c.r[29].w[0] + 79u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[9], ld32((c.r[3].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[5].d[0] = c.r[2].d[0] | 65304ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[1].w[0] - 20364u), c.r[9].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[8].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[7].w[0]));
    st32((c.r[29].w[0] + 56u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 40u), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[29].w[0] + 60u), c.r[6].w[0]);
    set32(c.r[3], c.r[2].w[0] - 18704u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[29].w[0] + 44u), c.r[6].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[7], c.r[29].w[0] + 52u);
    set32(c.r[2], c.r[2].w[0] - 18592u);
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[6], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    st32((c.r[10].w[0]), c.r[3].w[0]);
    st32((c.r[29].w[0] + 32u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 2u)));
    st32((c.r[7].w[0]), c.r[3].w[0]);
    st32((c.r[29].w[0] + 36u), c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[10].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[10].w[0]), c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 6u)));
    set32(c.r[3], ld32((c.r[7].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[7].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0]));
    c.budget -= 78;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_001D8A48; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001D8A60; } }
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.budget -= 1;
L_001D8A48:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_001D8A60:
    c.f[0] = ld32((c.r[4].w[0] + 104u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8A6Cu); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x001D8A6Cu) [[unlikely]] return; }
L_001D8A6C:
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8A7Cu); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x001D8A7Cu) [[unlikely]] return; }
L_001D8A7C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001D8A90:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[2], c.r[2].w[0] - 9616u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[19], c.r[28].w[0] - 30064u);
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    set32(c.r[3], ld32((c.r[1].w[0] - 19056u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[16], c.r[2].w[0] - 20416u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[2].w[0] - 20304u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), c.r[5].w[0]);
    set32(c.r[2], c.r[29].w[0] + 140u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[3].w[0]);
    set32(c.r[2], 0u + 3u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[2].w[0]);
    set32(c.r[2], 0u + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    mmi::paddub(c.r[21], c.r[4], c.r[0]);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    st32((c.r[29].w[0] + 112u), c.r[2].w[0]);
    c.budget -= 43;
L_001D8B3C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 10u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[2].w[0] - 18560u);
    set32(c.r[20], c.r[29].w[0] + 143u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0])));
    st32((c.r[29].w[0] + 140u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[20].w[0]));
    c.budget -= 13;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_001D8B80; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001D8B98; } }
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.budget -= 1;
L_001D8B80:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_001D8B98:
    c.f[0] = ld32((c.r[21].w[0] + 104u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8BA4u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x001D8BA4u) [[unlikely]] return; }
L_001D8BA4:
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 10u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[2].w[0] - 18480u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[18].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    st32((c.r[1].w[0] - 20288u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[1].w[0] - 20304u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 2u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[1].w[0] - 20284u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[1].w[0] - 20300u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 20288u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 4u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[1].w[0] - 20288u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 20284u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 6u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8C20u); st32((c.r[1].w[0] - 20284u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x001D8C20u) [[unlikely]] return; }
L_001D8C20:
    set32(c.r[3], 0u + 2u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    st16((c.r[16].w[0] + 60u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[18], c.r[18].w[0] + 8u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D8B3Cu | kUnwind; return; } goto L_001D8B3C; } }
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_001D8C60:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[18], c.r[2].w[0] - 20416u);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 25696u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], c.r[3].w[0] - 20304u);
    set32(c.r[16], c.r[29].w[0] + 168u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], c.r[3].w[0] - 18240u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 1);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[16].w[0]);
    set32(c.r[2], 0u + 3u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 6u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20354u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[19], c.r[2].w[0] - 20304u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[20], c.r[2].w[0] - 18336u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[2].w[0] - 18280u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    mmi::paddub(c.r[21], c.r[0], c.r[0]);
    mmi::paddub(c.r[23], c.r[16], c.r[0]);
    c.f[0] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[20] = fp::cvt_s_w(c.f[0]);
    set32(c.r[22], c.r[2].w[0] - 18400u);
    c.budget -= 53;
L_001D8D34:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0])));
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 2u)));
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[22].w[0])));
    st32((c.r[23].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[23].w[0] + 3u));
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[20], c.r[20].w[0] + 4u);  if (t) { goto L_001D8D64; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001D8D80; } }
L_001D8D64:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 7;
L_001D8D80:
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8D8Cu); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x001D8D8Cu) [[unlikely]] return; }
L_001D8D8C:
    set32(c.r[21], c.r[21].w[0] + 1u);
    st8((c.r[23].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[21].sd[0] < 6ll ? 1ull : 0ull;
    set32(c.r[19], c.r[19].w[0] + 16u);
    set32(c.r[22], c.r[22].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[23], c.r[23].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D8D34u | kUnwind; return; } goto L_001D8D34; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8DB0u); c.f[12] = ld32((c.r[17].w[0] + 104u));  if (depth < kMaxDepth) unit_0007(c, 115u, depth + 1u); else { c.pc = 0x0011DF88u; return; } if (c.pc != 0x001D8DB0u) [[unlikely]] return; }
L_001D8DB0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3FF00000u);
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8DC0u); mmi::paddub(c.r[5], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0007(c, 19u, depth + 1u); else { c.pc = 0x0011CB58u; return; } if (c.pc != 0x001D8DC0u) [[unlikely]] return; }
L_001D8DC0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40340000u);
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8DD0u); mmi::paddub(c.r[5], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0007(c, 24u, depth + 1u); else { c.pc = 0x0011CBC0u; return; } if (c.pc != 0x001D8DD0u) [[unlikely]] return; }
L_001D8DD0:
    mmi::paddub(c.r[19], c.r[2], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8DDCu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0007(c, 115u, depth + 1u); else { c.pc = 0x0011DF88u; return; } if (c.pc != 0x001D8DDCu) [[unlikely]] return; }
L_001D8DDC:
    mmi::paddub(c.r[5], c.r[19], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8DE8u); mmi::paddub(c.r[4], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0007(c, 19u, depth + 1u); else { c.pc = 0x0011CB58u; return; } if (c.pc != 0x001D8DE8u) [[unlikely]] return; }
L_001D8DE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8DF0u); mmi::paddub(c.r[4], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0007(c, 50u, depth + 1u); else { c.pc = 0x0011D1F0u; return; } if (c.pc != 0x001D8DF0u) [[unlikely]] return; }
L_001D8DF0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[1].w[0] - 18236u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8E00u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_001C(c, 21u, depth + 1u); else { c.pc = 0x00170680u; return; } if (c.pc != 0x001D8E00u) [[unlikely]] return; }
L_001D8E00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8E08u); c.f[12] = ld32((c.r[17].w[0] + 104u));  if (depth < kMaxDepth) unit_0007(c, 115u, depth + 1u); else { c.pc = 0x0011DF88u; return; } if (c.pc != 0x001D8E08u) [[unlikely]] return; }
L_001D8E08:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3FF00000u);
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8E18u); mmi::paddub(c.r[5], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0007(c, 19u, depth + 1u); else { c.pc = 0x0011CB58u; return; } if (c.pc != 0x001D8E18u) [[unlikely]] return; }
L_001D8E18:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40340000u);
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8E28u); mmi::paddub(c.r[5], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0007(c, 24u, depth + 1u); else { c.pc = 0x0011CBC0u; return; } if (c.pc != 0x001D8E28u) [[unlikely]] return; }
L_001D8E28:
    mmi::paddub(c.r[19], c.r[2], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41880000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8E3Cu); c.f[12] = fp::add(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_0007(c, 115u, depth + 1u); else { c.pc = 0x0011DF88u; return; } if (c.pc != 0x001D8E3Cu) [[unlikely]] return; }
L_001D8E3C:
    mmi::paddub(c.r[5], c.r[19], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8E48u); mmi::paddub(c.r[4], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0007(c, 14u, depth + 1u); else { c.pc = 0x0011CB00u; return; } if (c.pc != 0x001D8E48u) [[unlikely]] return; }
L_001D8E48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8E50u); mmi::paddub(c.r[4], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0007(c, 50u, depth + 1u); else { c.pc = 0x0011D1F0u; return; } if (c.pc != 0x001D8E50u) [[unlikely]] return; }
L_001D8E50:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[1].w[0] - 18236u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8E60u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_001C(c, 21u, depth + 1u); else { c.pc = 0x00170680u; return; } if (c.pc != 0x001D8E60u) [[unlikely]] return; }
L_001D8E60:
    c.f[1] = ld32((c.r[17].w[0] + 104u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001D8F7C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[5], ld32((c.r[1].w[0] - 19056u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], c.r[2].w[0] - 18264u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], c.r[2].w[0] - 18280u);
    st32((c.r[18].w[0] + 52u), c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[19], c.r[2].w[0] - 20304u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[18].w[0] + 48u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[5], ld32((c.r[1].w[0] + 25696u)));
    set32(c.r[20], c.r[2].w[0] - 18304u);
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.r[4].d[0] = ld16((c.r[1].w[0] + 25700u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[20] = c.r[2].w[0];
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8EE0u); st32((c.r[1].w[0] - 18236u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x001D8EE0u) [[unlikely]] return; }
L_001D8EE0:
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[17], c.r[2].w[0] - 18368u);
    c.f[1] = fp::add(c.f[20], c.f[0]);
    mmi::paddub(c.r[21], c.r[0], c.r[0]);
    c.f[0] = c.r[3].w[0];
    c.f[20] = fp::add(c.f[0], c.f[1]);
    c.budget -= 9;
L_001D8F04:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0])));
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 2u)));
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 3u));
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[20], c.r[20].w[0] + 4u);  if (t) { goto L_001D8F34; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001D8F50; } }
L_001D8F34:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_001D8F50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8F58u); c.f[12] = fp::mul(c.f[20], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x001D8F58u) [[unlikely]] return; }
L_001D8F58:
    set32(c.r[21], c.r[21].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[21].sd[0] < 6ll ? 1ull : 0ull;
    set32(c.r[19], c.r[19].w[0] + 16u);
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D8F04u | kUnwind; return; } goto L_001D8F04; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8F7Cu); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_001C(c, 30u, depth + 1u); else { c.pc = 0x00170A40u; return; } if (c.pc != 0x001D8F7Cu) [[unlikely]] return; }
L_001D8F7C:
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_001D8FB0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[0] = ld32((c.r[4].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[19], c.r[29].w[0] + 144u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    set32(c.r[17], c.r[2].w[0] - 18224u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[18], c.r[2].w[0] - 18888u);
    mmi::paddub(c.r[20], c.r[4], c.r[0]);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    st32((c.r[1].w[0] - 18020u), c.f[0]);
    c.budget -= 20;
L_001D9000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9008u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x00102728u; return; } if (c.pc != 0x001D9008u) [[unlikely]] return; }
L_001D9008:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (t) { goto L_001D9044; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[2].w[0] - 18016u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[6], c.r[29].w[0] + 160u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    st128((c.r[6].w[0]) & ~15u, c.r[2]);
    c.f[0] = ld32((c.r[20].w[0] + 112u));
    st32((c.r[29].w[0] + 160u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 112u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9040u); st32((c.r[29].w[0] + 164u), c.f[0]);  if (depth < kMaxDepth) unit_000D(c, 122u, depth + 1u); else { c.pc = 0x00135810u; return; } if (c.pc != 0x001D9040u) [[unlikely]] return; }
L_001D9040:
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 1;
L_001D9044:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D904Cu); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x001D904Cu) [[unlikely]] return; }
L_001D904C:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    set32(c.r[6], c.r[2].w[0] - 18032u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9064u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_001B(c, 149u, depth + 1u); else { c.pc = 0x0016E7C0u; return; } if (c.pc != 0x001D9064u) [[unlikely]] return; }
L_001D9064:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    set32(c.r[17], c.r[17].w[0] + 64u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D9000u | kUnwind; return; } goto L_001D9000; } }
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_001D90A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[5], 0u + 6u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D90C8u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x001D90C8u) [[unlikely]] return; }
L_001D90C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D9118; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x001E0000u);
    set32(c.r[5], 0u + 22u);
    set32(c.r[4], 0u + 2u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[3], c.r[3].w[0] - 28208u);
    st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], c.r[3].w[0] - 17696u);
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 18;
L_001D9118:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001D9130:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    mmi::paddub(c.r[16], c.r[6], c.r[0]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    set32(c.r[5], 0u + 6u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9160u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x001D9160u) [[unlikely]] return; }
L_001D9160:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D91B4; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x001E0000u);
    set32(c.r[5], 0u + 22u);
    set32(c.r[4], 0u + 2u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[2].w[0] + 28u), c.r[18].w[0]);
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[3], c.r[3].w[0] - 28208u);
    st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], c.r[3].w[0] - 17696u);
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 19;
L_001D91B4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001D91D0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[2].w[0] - 17648u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001D8000u < 16384u) { entry = entries_0036[(t - 0x001D8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001D91F0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001D93B8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[5], c.r[5].w[0] + 14368u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x001D8000u < 16384u) { entry = entries_0036[(t - 0x001D8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001D9228:
    set32(c.r[3], 0u + 10u);
    st32((c.r[4].w[0] + 104u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001D93B8; } }
L_001D9238:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 104u), c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], c.r[3].w[0] - 17808u);
    set32(c.r[7], 0u + 10u);
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[8].w[0]));
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[6], c.r[3].w[0] - 17792u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[5], c.r[3].w[0] - 17788u);
    set32(c.r[7], c.r[7].w[0] << 3);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.f[0] = ld32((c.r[6].w[0]));
    set32(c.r[3], c.r[28].w[0] - 30056u);
    st32((c.r[4].w[0] + 32u), c.f[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    set32(c.r[6], c.r[6].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[4].w[0] + 36u), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    st8((c.r[4].w[0] + 279u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 32;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 274u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001D93B8; } }
L_001D92B8:
    set32(c.r[3], 0u + 10u);
    st32((c.r[4].w[0] + 104u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001D93B8; } }
L_001D92C8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 104u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[4].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[3], 0u + 10u);
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 6;
L_001D92E0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 104u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 112u), 0u);
    set32(c.r[3], 0u + 10u);
    st32((c.r[4].w[0] + 116u), 0u);
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 25792u)));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 275u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001D93B8; } }
L_001D9308:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 104u), c.r[3].w[0]);  if (t) { goto L_001D93B8; } }
L_001D9314:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 104u), c.r[3].w[0]);  if (t) { goto L_001D93B8; } }
L_001D9320:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 104u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001D9340; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 274u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001D9364; } }
L_001D9340:
    set32(c.r[5], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], c.r[3].w[0] - 2u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 101u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_001D9360; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 274u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001D9364; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_001D9360:
    st8((c.r[4].w[0] + 274u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_001D9364:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[5], c.r[3].w[0] - 17744u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], c.r[3].w[0] - 17740u);
    set32(c.r[6], c.r[6].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[4].w[0] + 32u), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 36u), c.f[0]);  if (t) { goto L_001D93B8; } }
L_001D93A0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 104u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[4].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[3], 0u + 10u);
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 6;
L_001D93B8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D93C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[2].w[0] - 17632u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 12;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001D93F0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001D93F0u) [[unlikely]] return; }
L_001D93F0:
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001D9410; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_001D9410:
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 2u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_001D9444; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001D9440; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 5u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001D9448; } }
L_001D9440:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_001D9444:
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_001D9448:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001D9460:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_001D9470:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_001D9480:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001D9494; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D94D8; } }
L_001D9494:
    c.f[1] = ld32((c.r[4].w[0] + 104u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 104u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 166u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001D94D8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_001D94D8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D94E0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001D9550; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001D9500; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D9550; } }
L_001D9500:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_001D954C; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 166u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], c.r[5].w[0] + 1u);  goto L_001D9540; }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.f[1] = ld32((c.r[4].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 32u), c.f[0]);  if (t) { goto L_001D9550; } }
    set32(c.r[3], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_001D9540:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001D9550; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_001D954C:
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 1;
L_001D9550:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D9560:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001D9574; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D95B8; } }
L_001D9574:
    c.f[1] = ld32((c.r[4].w[0] + 104u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 104u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 166u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001D95B8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_001D95B8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D95C0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 166u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001D95EC; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.f[1] = ld32((c.r[4].w[0] + 52u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 52u), c.f[0]);
    c.budget -= 8;
L_001D95EC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D9600:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001D971C; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001D96F0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001D9690; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001D9640; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_001D9764; } }
L_001D9640:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 166u)));
    set32(c.r[3], c.r[5].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull; st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001D9670; } }
    c.f[1] = ld32((c.r[4].w[0] + 112u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 112u), c.f[0]);  if (t) { goto L_001D9760; } }
L_001D9670:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[5], 0u + 10u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 112u), c.r[3].w[0]);  if (t) { goto L_001D9760; } }
L_001D9690:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 166u)));
    set32(c.r[3], c.r[5].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull; st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001D96C0; } }
    c.f[1] = ld32((c.r[4].w[0] + 116u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 116u), c.f[0]);  if (t) { goto L_001D9760; } }
L_001D96C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 116u), c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 275u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D96E0u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_0036(c, 60u, depth + 1u); else { c.pc = 0x001D9130u; return; } if (c.pc != 0x001D96E0u) [[unlikely]] return; }
L_001D96E0:
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 25794u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001D9760; } }
L_001D96F0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 25793u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001D9760; } }
    set32(c.r[3], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 10u);
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 25794u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001D9760; } }
L_001D971C:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 166u)));
    set32(c.r[3], c.r[5].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull; st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001D974C; } }
    c.f[1] = ld32((c.r[4].w[0] + 116u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 116u), c.f[0]);  if (t) { goto L_001D9760; } }
L_001D974C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[1].w[0] + 25793u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
L_001D9760:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_001D9764:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001D9770:
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    c.r[3].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001D9790; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_001D9790:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 25792u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001D97A8; } }
    st8((c.r[4].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_001D97A8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D97B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D97C0:
    set32(c.r[6], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 2u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 2u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_001D98D0; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 4u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_001D98D0; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.r[1].d[0] = c.r[7].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001D9954; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[5], c.r[3].w[0] + 14448u);
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x001D8000u < 16384u) { entry = entries_0036[(t - 0x001D8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001D9810:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 274u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001D9954; } }
L_001D9818:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 6u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_001D984C; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 10u)));
    set32(c.r[3], c.r[7].w[0] - 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_001D9844; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 274u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001D9954; } }
L_001D9844:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 274u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001D9954; } }
L_001D984C:
    set32(c.r[5], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], c.r[7].w[0] - 2u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 101u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_001D986C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 274u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001D9954; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_001D986C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 274u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001D9954; } }
L_001D9874:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 6u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_001D98A8; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 10u)));
    set32(c.r[3], c.r[7].w[0] - 4u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_001D98A0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 274u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001D9954; } }
L_001D98A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 274u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001D9954; } }
L_001D98A8:
    set32(c.r[5], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], c.r[7].w[0] - 4u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 111u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_001D98C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 274u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001D9954; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_001D98C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 274u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001D9954; } }
L_001D98D0:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.r[1].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001D9954; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[5], c.r[3].w[0] + 14416u);
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x001D8000u < 16384u) { entry = entries_0036[(t - 0x001D8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001D98FC:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 274u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001D9954; } }
L_001D9908:
    set32(c.r[5], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], c.r[6].w[0] - 2u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 101u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_001D9928; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 274u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001D9954; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_001D9928:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 274u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001D9954; } }
L_001D9930:
    set32(c.r[5], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], c.r[6].w[0] - 4u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 111u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_001D9950; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 274u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001D9954; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_001D9950:
    st8((c.r[4].w[0] + 274u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_001D9954:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D9960:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001D99C4; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001D9980; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D9A14; } }
L_001D9980:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 166u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], c.r[5].w[0] + 1u);  goto L_001D99B4; }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.f[1] = ld32((c.r[4].w[0] + 52u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 52u), c.f[0]);  if (t) { goto L_001D9A14; } }
    set32(c.r[3], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_001D99B4:
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 10u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001D9A14; } }
L_001D99C4:
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 2u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 6u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_001D9A14; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 166u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001D9A08; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.f[1] = ld32((c.r[4].w[0] + 52u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 52u), c.f[0]);  if (t) { goto L_001D9A14; } }
L_001D9A08:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_001D9A14:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D9A20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[6], ld32((c.r[1].w[0] - 19056u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[2].w[0] - 18000u);
    set32(c.r[3], 0u + 3u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), 0u);
    set32(c.r[2], c.r[29].w[0] + 44u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30032u)));
    st32((c.r[1].w[0] - 20364u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], c.r[28].w[0] - 30048u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[16], c.r[29].w[0] + 47u);
    st32((c.r[1].w[0] - 20368u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0]));
    c.budget -= 33;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_001D9AB4; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001D9ACC; } }
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.budget -= 1;
L_001D9AB4:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_001D9ACC:
    c.f[0] = ld32((c.r[4].w[0] + 104u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9AD8u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x001D9AD8u) [[unlikely]] return; }
L_001D9AD8:
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30040u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30038u)));
    set32(c.r[4], c.r[2].w[0] - 20416u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30036u)));
    st32((c.r[1].w[0] - 17984u), c.r[7].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[1].w[0] - 18000u), c.r[7].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[1].w[0] - 17980u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[1].w[0] - 17996u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 17984u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30034u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[1].w[0] - 17984u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 17980u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9B40u); st32((c.r[1].w[0] - 17980u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x001D9B40u) [[unlikely]] return; }
L_001D9B40:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001D9B50:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[16], c.r[2].w[0] - 20416u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 19056u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], c.r[3].w[0] - 18000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), 0u);
    set32(c.r[3], c.r[29].w[0] + 92u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[2].w[0]);
    set32(c.r[2], 0u + 3u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 33;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[19], c.r[4], c.r[0]);  if (t) { goto L_001D9BE8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 100u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[3].d[0] << 56;  if (t) { goto L_001D9BEC; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 1;
L_001D9BE8:
    c.r[18].d[0] = c.r[3].d[0] << 56;
    c.budget -= 1;
L_001D9BEC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] - 17592u);
    set32(c.r[3], c.r[18].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 48u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 274u)));
    set32(c.r[2], c.r[28].w[0] - 30024u);
    set32(c.r[17], c.r[29].w[0] + 95u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    c.budget -= 16;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_001D9C3C; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001D9C54; } }
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.budget -= 1;
L_001D9C3C:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_001D9C54:
    c.f[0] = ld32((c.r[19].w[0] + 104u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9C60u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x001D9C60u) [[unlikely]] return; }
L_001D9C60:
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[12] = ld32((c.r[19].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[2].w[0] - 17536u);
    set32(c.r[3], c.r[18].w[0] << 2);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9C7Cu); set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x001D9C7Cu) [[unlikely]] return; }
L_001D9C7C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[1].w[0] - 17984u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[1].w[0] - 18000u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9C94u); c.f[12] = ld32((c.r[19].w[0] + 36u));  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x001D9C94u) [[unlikely]] return; }
L_001D9C94:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[1].w[0] - 17980u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[1].w[0] - 17996u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 17984u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[1].w[0] - 17984u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 17980u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 2u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9CDCu); st32((c.r[1].w[0] - 17980u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x001D9CDCu) [[unlikely]] return; }
L_001D9CDC:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001D9D00:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[18], c.r[2].w[0] - 20416u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 18000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[16], c.r[29].w[0] + 144u);
    set32(c.r[2], c.r[2].w[0] - 17264u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[16].w[0]);
    set32(c.r[2], 0u + 3u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 12u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20354u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[19], c.r[2].w[0] - 18000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[20], c.r[2].w[0] - 17408u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[22], c.r[2].w[0] - 17504u);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    mmi::paddub(c.r[21], c.r[0], c.r[0]);
    mmi::paddub(c.r[23], c.r[16], c.r[0]);
    c.budget -= 43;
L_001D9DAC:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0])));
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 2u)));
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[22].w[0])));
    st32((c.r[23].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[23].w[0] + 3u));
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[20], c.r[20].w[0] + 4u);  if (t) { goto L_001D9DDC; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001D9DF8; } }
L_001D9DDC:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 7;
L_001D9DF8:
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9E04u); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x001D9E04u) [[unlikely]] return; }
L_001D9E04:
    set32(c.r[21], c.r[21].w[0] + 1u);
    st8((c.r[23].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[21].sd[0] < 12ll ? 1ull : 0ull;
    set32(c.r[19], c.r[19].w[0] + 16u);
    set32(c.r[22], c.r[22].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[23], c.r[23].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D9DACu | kUnwind; return; } goto L_001D9DAC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9E28u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_001C(c, 21u, depth + 1u); else { c.pc = 0x00170680u; return; } if (c.pc != 0x001D9E28u) [[unlikely]] return; }
L_001D9E28:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[21], c.r[2].w[0] - 18000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[22], c.r[2].w[0] - 17360u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[19], c.r[2].w[0] - 17504u);
    mmi::paddub(c.r[23], c.r[0], c.r[0]);
    mmi::paddub(c.r[20], c.r[16], c.r[0]);
    c.budget -= 8;
L_001D9E48:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0])));
    st32((c.r[21].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0] + 2u)));
    st32((c.r[21].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0])));
    st32((c.r[20].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[20].w[0] + 3u));
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[22], c.r[22].w[0] + 4u);  if (t) { goto L_001D9E78; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001D9E94; } }
L_001D9E78:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 7;
L_001D9E94:
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9EA0u); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x001D9EA0u) [[unlikely]] return; }
L_001D9EA0:
    set32(c.r[23], c.r[23].w[0] + 1u);
    st8((c.r[20].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[23].sd[0] < 12ll ? 1ull : 0ull;
    set32(c.r[21], c.r[21].w[0] + 16u);
    set32(c.r[19], c.r[19].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D9E48u | kUnwind; return; } goto L_001D9E48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9EC4u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_001C(c, 21u, depth + 1u); else { c.pc = 0x00170680u; return; } if (c.pc != 0x001D9EC4u) [[unlikely]] return; }
L_001D9EC4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[20], c.r[2].w[0] - 18000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[21], c.r[2].w[0] - 17312u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[19], c.r[2].w[0] - 17456u);
    mmi::paddub(c.r[22], c.r[0], c.r[0]);
    c.budget -= 7;
L_001D9EE0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0])));
    st32((c.r[20].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 2u)));
    st32((c.r[20].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0])));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 3u));
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[21], c.r[21].w[0] + 4u);  if (t) { goto L_001D9F10; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001D9F2C; } }
L_001D9F10:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 7;
L_001D9F2C:
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9F38u); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x001D9F38u) [[unlikely]] return; }
L_001D9F38:
    set32(c.r[22], c.r[22].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[22].sd[0] < 12ll ? 1ull : 0ull;
    set32(c.r[20], c.r[20].w[0] + 16u);
    set32(c.r[19], c.r[19].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D9EE0u | kUnwind; return; } goto L_001D9EE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9F5Cu); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_001C(c, 21u, depth + 1u); else { c.pc = 0x00170680u; return; } if (c.pc != 0x001D9F5Cu) [[unlikely]] return; }
L_001D9F5C:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_001D9F90:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], c.r[3].w[0] - 18000u);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], c.r[3].w[0] - 17104u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[23], c.r[2].w[0] - 20416u);
    set32(c.r[3], c.r[29].w[0] + 168u);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[3].w[0]);
    set32(c.r[3], 0u + 3u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[3].w[0]);
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 6u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20354u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[17], c.r[3].w[0] - 18000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[18], c.r[3].w[0] - 17184u);
    c.f[0] = ld32((c.r[4].w[0] + 52u));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[28].w[0] - 30016u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.budget -= 52;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA060u); c.f[12] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x001DA060u) [[unlikely]] return; }
L_001DA060:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[1].w[0] - 17100u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[22], c.r[29].w[0] + 168u);
    set32(c.r[20], c.r[2].w[0] - 17248u);
    mmi::paddub(c.r[19], c.r[0], c.r[0]);
    mmi::paddub(c.r[21], c.r[22], c.r[0]);
    c.budget -= 7;
L_001DA07C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 2u)));
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0])));
    st32((c.r[21].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[21].w[0] + 3u));
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { goto L_001DA0AC; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001DA0C8; } }
L_001DA0AC:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 7;
L_001DA0C8:
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA0D4u); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x001DA0D4u) [[unlikely]] return; }
L_001DA0D4:
    set32(c.r[19], c.r[19].w[0] + 1u);
    st8((c.r[21].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[19].sd[0] < 6ll ? 1ull : 0ull;
    set32(c.r[17], c.r[17].w[0] + 16u);
    set32(c.r[20], c.r[20].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[21], c.r[21].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001DA07Cu | kUnwind; return; } goto L_001DA07C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA0F8u); mmi::paddub(c.r[4], c.r[23], c.r[0]);  if (depth < kMaxDepth) unit_001C(c, 21u, depth + 1u); else { c.pc = 0x00170680u; return; } if (c.pc != 0x001DA0F8u) [[unlikely]] return; }
L_001DA0F8:
    c.f[2] = ld32((c.r[16].w[0] + 52u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = ld32((c.r[1].w[0] - 17100u));
    c.f[3] = c.r[2].w[0];
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41500000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[2]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA130u); c.f[12] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x001DA130u) [[unlikely]] return; }
L_001DA130:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[1].w[0] - 17100u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA140u); mmi::paddub(c.r[4], c.r[23], c.r[0]);  if (depth < kMaxDepth) unit_001C(c, 21u, depth + 1u); else { c.pc = 0x00170680u; return; } if (c.pc != 0x001DA140u) [[unlikely]] return; }
L_001DA140:
    c.f[1] = ld32((c.r[16].w[0] + 52u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001DA25C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 19056u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[2].w[0] - 17128u);
    set32(c.r[3], c.r[28].w[0] - 30016u);
    st32((c.r[23].w[0] + 52u), c.r[4].w[0]);
    st32((c.r[23].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[18], c.r[2].w[0] - 18000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[19], c.r[2].w[0] - 17152u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[20] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[4].d[0] = ld16((c.r[1].w[0] + 25700u));
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA1B8u); st32((c.r[1].w[0] - 17100u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x001DA1B8u) [[unlikely]] return; }
L_001DA1B8:
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[17], c.r[2].w[0] - 17216u);
    c.f[1] = fp::add(c.f[20], c.f[0]);
    mmi::paddub(c.r[20], c.r[0], c.r[0]);
    c.f[0] = c.r[3].w[0];
    c.f[20] = fp::add(c.f[0], c.f[1]);
    c.budget -= 9;
L_001DA1DC:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0])));
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 2u)));
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    st32((c.r[22].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[22].w[0] + 3u));
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[19], c.r[19].w[0] + 4u);  if (t) { goto L_001DA20C; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001DA228; } }
L_001DA20C:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_001DA228:
    c.f[1] = fp::mul(c.f[20], c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA238u); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x001DA238u) [[unlikely]] return; }
L_001DA238:
    set32(c.r[20], c.r[20].w[0] + 1u);
    st8((c.r[22].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[20].sd[0] < 6ll ? 1ull : 0ull;
    set32(c.r[18], c.r[18].w[0] + 16u);
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[22], c.r[22].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001DA1DCu | kUnwind; return; } goto L_001DA1DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA25Cu); mmi::paddub(c.r[4], c.r[23], c.r[0]);  if (depth < kMaxDepth) unit_001C(c, 30u, depth + 1u); else { c.pc = 0x00170A40u; return; } if (c.pc != 0x001DA25Cu) [[unlikely]] return; }
L_001DA25C:
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_001DA290:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.f[0] = ld32((c.r[4].w[0] + 112u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], c.r[2].w[0] - 17088u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40190000u);
    set32(c.r[7], 0u + 3u);
    st32((c.r[29].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 116u));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[6].d[0] = c.r[2].d[0] | 6425ull;
    set32(c.r[5], c.r[29].w[0] + 16u);
    mmi::paddub(c.r[8], c.r[7], c.r[0]);
    st32((c.r[29].w[0] + 20u), c.f[0]);
    st32((c.r[29].w[0] + 24u), c.r[9].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA2E4u); set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0037(c, 153u, depth + 1u); else { c.pc = 0x001DEB90u; return; } if (c.pc != 0x001DA2E4u) [[unlikely]] return; }
L_001DA2E4:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001DA2F0:
    set32(c.r[29], c.r[29].w[0] - 384u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    set32(c.r[13], c.r[3].w[0] - 17024u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    ld128((c.r[13].w[0]) & ~15u, c.r[11]);
    ld128((c.r[13].w[0] + 16u) & ~15u, c.r[10]);
    ld128((c.r[13].w[0] + 32u) & ~15u, c.r[9]);
    ld128((c.r[13].w[0] + 48u) & ~15u, c.r[5]);
    set32(c.r[12], c.r[29].w[0] + 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[8], c.r[3].w[0] - 16944u);
    st128((c.r[12].w[0]) & ~15u, c.r[11]);
    st128((c.r[12].w[0] + 16u) & ~15u, c.r[10]);
    st128((c.r[12].w[0] + 32u) & ~15u, c.r[9]);
    st128((c.r[12].w[0] + 48u) & ~15u, c.r[5]);
    ld128((c.r[13].w[0] + 64u) & ~15u, c.r[3]);
    set32(c.r[7], c.r[29].w[0] + 112u);
    set32(c.r[6], 0u + 5u);
    st128((c.r[12].w[0] + 64u) & ~15u, c.r[3]);
    c.budget -= 20;
L_001DA340:
    ld128((c.r[8].w[0]) & ~15u, c.r[5]);
    ld128((c.r[8].w[0] + 16u) & ~15u, c.r[3]);
    set32(c.r[6], c.r[6].w[0] - 1u);
    st128((c.r[7].w[0]) & ~15u, c.r[5]);
    st128((c.r[7].w[0] + 16u) & ~15u, c.r[3]);
    set32(c.r[8], c.r[8].w[0] + 32u);
    c.budget -= 8;
    { const bool t = c.r[6].sd[0] > 0; set32(c.r[7], c.r[7].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001DA340u | kUnwind; return; } goto L_001DA340; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 25794u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001DA6A4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[3].d[0] = c.r[2].d[0] << 56;  goto L_001DA3A8; }
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 100u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], 0u + 4u);  goto L_001DA39C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[3].d[0] << 56;  if (t) { goto L_001DA3B0; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 1;
L_001DA39C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DA3AC; } }
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.budget -= 1;
L_001DA3A8:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 1;
L_001DA3AC:
    c.r[16].d[0] = c.r[3].d[0] << 56;
    c.budget -= 1;
L_001DA3B0:
    set32(c.r[2], 0u + 5u);
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[4], 0u + 2u);  if (t) { goto L_001DA3E8; } }
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_001DA3E4; } }
    set32(c.r[2], 0u + 13u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_001DA3E4; } }
    set32(c.r[2], 0u + 15u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (t) { goto L_001DA3FC; } }
L_001DA3E4:
    set32(c.r[4], 0u + 2u);
    c.budget -= 1;
L_001DA3E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA3F0u);  if (depth < kMaxDepth) unit_0017(c, 238u, depth + 1u); else { c.pc = 0x0015E390u; return; } if (c.pc != 0x001DA3F0u) [[unlikely]] return; }
L_001DA3F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[16].w[0] << 2);  if (t) { goto L_001DA408; } }
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 1;
L_001DA3FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA404u);  if (depth < kMaxDepth) unit_0017(c, 238u, depth + 1u); else { c.pc = 0x0015E390u; return; } if (c.pc != 0x001DA404u) [[unlikely]] return; }
L_001DA404:
    set32(c.r[2], c.r[16].w[0] << 2);
    c.budget -= 1;
L_001DA408:
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA418u); set32(c.r[4], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_0006(c, 36u, depth + 1u); else { c.pc = 0x00118760u; return; } if (c.pc != 0x001DA418u) [[unlikely]] return; }
L_001DA418:
    set32(c.r[2], c.r[16].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.f[12] = ld32((c.r[2].w[0] + 112u));
    c.f[13] = ld32((c.r[2].w[0] + 116u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[3].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA438u); set32(c.r[4], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_0017(c, 240u, depth + 1u); else { c.pc = 0x0015E3B0u; return; } if (c.pc != 0x001DA438u) [[unlikely]] return; }
L_001DA438:
    set32(c.r[2], 0u + 15u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[4], c.r[29].w[0] + 272u);  if (t) { goto L_001DA634; } }
    set32(c.r[2], 0u + 13u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[4], c.r[29].w[0] + 272u);  if (t) { goto L_001DA5F8; } }
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[4], c.r[29].w[0] + 272u);  if (t) { goto L_001DA588; } }
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[4], c.r[29].w[0] + 272u);  if (t) { goto L_001DA54C; } }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[4], c.r[29].w[0] + 272u);  if (t) { goto L_001DA510; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[4], c.r[29].w[0] + 272u);  if (t) { goto L_001DA4D4; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[4], c.r[29].w[0] + 272u);  if (t) { goto L_001DA498; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (t) { goto L_001DA69C; } }
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 1;
L_001DA498:
    set32(c.r[6], 0u + 100u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA4A4u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x001DA4A4u) [[unlikely]] return; }
L_001DA4A4:
    set32(c.r[5], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA4B0u); set32(c.r[4], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_0006(c, 36u, depth + 1u); else { c.pc = 0x00118760u; return; } if (c.pc != 0x001DA4B0u) [[unlikely]] return; }
L_001DA4B0:
    c.f[12] = ld32((c.r[29].w[0] + 168u));
    c.f[13] = ld32((c.r[29].w[0] + 172u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA4C8u); set32(c.r[4], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_0017(c, 240u, depth + 1u); else { c.pc = 0x0015E3B0u; return; } if (c.pc != 0x001DA4C8u) [[unlikely]] return; }
L_001DA4C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DA698; } }
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 1;
L_001DA4D4:
    set32(c.r[6], 0u + 100u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA4E0u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x001DA4E0u) [[unlikely]] return; }
L_001DA4E0:
    set32(c.r[5], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA4ECu); set32(c.r[4], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_0006(c, 36u, depth + 1u); else { c.pc = 0x00118760u; return; } if (c.pc != 0x001DA4ECu) [[unlikely]] return; }
L_001DA4EC:
    c.f[12] = ld32((c.r[29].w[0] + 160u));
    c.f[13] = ld32((c.r[29].w[0] + 164u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA504u); set32(c.r[4], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_0017(c, 240u, depth + 1u); else { c.pc = 0x0015E3B0u; return; } if (c.pc != 0x001DA504u) [[unlikely]] return; }
L_001DA504:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DA698; } }
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 1;
L_001DA510:
    set32(c.r[6], 0u + 100u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA51Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x001DA51Cu) [[unlikely]] return; }
L_001DA51C:
    set32(c.r[5], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA528u); set32(c.r[4], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_0006(c, 36u, depth + 1u); else { c.pc = 0x00118760u; return; } if (c.pc != 0x001DA528u) [[unlikely]] return; }
L_001DA528:
    c.f[12] = ld32((c.r[29].w[0] + 256u));
    c.f[13] = ld32((c.r[29].w[0] + 260u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA540u); set32(c.r[4], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_0017(c, 240u, depth + 1u); else { c.pc = 0x0015E3B0u; return; } if (c.pc != 0x001DA540u) [[unlikely]] return; }
L_001DA540:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DA698; } }
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 1;
L_001DA54C:
    set32(c.r[6], 0u + 100u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA558u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x001DA558u) [[unlikely]] return; }
L_001DA558:
    set32(c.r[5], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA564u); set32(c.r[4], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_0006(c, 36u, depth + 1u); else { c.pc = 0x00118760u; return; } if (c.pc != 0x001DA564u) [[unlikely]] return; }
L_001DA564:
    c.f[12] = ld32((c.r[29].w[0] + 264u));
    c.f[13] = ld32((c.r[29].w[0] + 268u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA57Cu); set32(c.r[4], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_0017(c, 240u, depth + 1u); else { c.pc = 0x0015E3B0u; return; } if (c.pc != 0x001DA57Cu) [[unlikely]] return; }
L_001DA57C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DA698; } }
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 1;
L_001DA588:
    set32(c.r[6], 0u + 100u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA594u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x001DA594u) [[unlikely]] return; }
L_001DA594:
    set32(c.r[5], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA5A0u); set32(c.r[4], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_0006(c, 36u, depth + 1u); else { c.pc = 0x00118760u; return; } if (c.pc != 0x001DA5A0u) [[unlikely]] return; }
L_001DA5A0:
    c.f[12] = ld32((c.r[29].w[0] + 200u));
    c.f[13] = ld32((c.r[29].w[0] + 204u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA5B8u); set32(c.r[4], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_0017(c, 240u, depth + 1u); else { c.pc = 0x0015E3B0u; return; } if (c.pc != 0x001DA5B8u) [[unlikely]] return; }
L_001DA5B8:
    set32(c.r[4], c.r[29].w[0] + 272u);
    set32(c.r[6], 0u + 100u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA5C8u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x001DA5C8u) [[unlikely]] return; }
L_001DA5C8:
    set32(c.r[5], ld32((c.r[29].w[0] + 80u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA5D4u); set32(c.r[4], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_0006(c, 36u, depth + 1u); else { c.pc = 0x00118760u; return; } if (c.pc != 0x001DA5D4u) [[unlikely]] return; }
L_001DA5D4:
    c.f[12] = ld32((c.r[29].w[0] + 208u));
    c.f[13] = ld32((c.r[29].w[0] + 212u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA5ECu); set32(c.r[4], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_0017(c, 240u, depth + 1u); else { c.pc = 0x0015E3B0u; return; } if (c.pc != 0x001DA5ECu) [[unlikely]] return; }
L_001DA5EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DA698; } }
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 1;
L_001DA5F8:
    set32(c.r[6], 0u + 100u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA604u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x001DA604u) [[unlikely]] return; }
L_001DA604:
    set32(c.r[5], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA610u); set32(c.r[4], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_0006(c, 36u, depth + 1u); else { c.pc = 0x00118760u; return; } if (c.pc != 0x001DA610u) [[unlikely]] return; }
L_001DA610:
    c.f[12] = ld32((c.r[29].w[0] + 224u));
    c.f[13] = ld32((c.r[29].w[0] + 228u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA628u); set32(c.r[4], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_0017(c, 240u, depth + 1u); else { c.pc = 0x0015E3B0u; return; } if (c.pc != 0x001DA628u) [[unlikely]] return; }
L_001DA628:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DA698; } }
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 1;
L_001DA634:
    set32(c.r[6], 0u + 100u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA640u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x001DA640u) [[unlikely]] return; }
L_001DA640:
    set32(c.r[5], ld32((c.r[29].w[0] + 96u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA64Cu); set32(c.r[4], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_0006(c, 36u, depth + 1u); else { c.pc = 0x00118760u; return; } if (c.pc != 0x001DA64Cu) [[unlikely]] return; }
L_001DA64C:
    c.f[12] = ld32((c.r[29].w[0] + 240u));
    c.f[13] = ld32((c.r[29].w[0] + 244u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA664u); set32(c.r[4], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_0017(c, 240u, depth + 1u); else { c.pc = 0x0015E3B0u; return; } if (c.pc != 0x001DA664u) [[unlikely]] return; }
L_001DA664:
    set32(c.r[4], c.r[29].w[0] + 272u);
    set32(c.r[6], 0u + 100u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA674u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x001DA674u) [[unlikely]] return; }
L_001DA674:
    set32(c.r[5], ld32((c.r[29].w[0] + 100u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA680u); set32(c.r[4], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_0006(c, 36u, depth + 1u); else { c.pc = 0x00118760u; return; } if (c.pc != 0x001DA680u) [[unlikely]] return; }
L_001DA680:
    c.f[12] = ld32((c.r[29].w[0] + 248u));
    c.f[13] = ld32((c.r[29].w[0] + 252u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA698u); set32(c.r[4], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_0017(c, 240u, depth + 1u); else { c.pc = 0x0015E3B0u; return; } if (c.pc != 0x001DA698u) [[unlikely]] return; }
L_001DA698:
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 1;
L_001DA69C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA6A4u);  if (depth < kMaxDepth) unit_0017(c, 238u, depth + 1u); else { c.pc = 0x0015E390u; return; } if (c.pc != 0x001DA6A4u) [[unlikely]] return; }
L_001DA6A4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 384u);  c.pc = t; return; }
L_001DA6C0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[16], c.r[2].w[0] - 20416u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[2].w[0] - 18000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[2].w[0] - 16736u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), c.r[2].w[0]);
    set32(c.r[21], c.r[29].w[0] + 128u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[21].w[0]);
    set32(c.r[2], 0u + 3u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[2].w[0]);
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20354u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    set32(c.r[17], c.r[2].w[0] - 18000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], c.r[2].w[0] - 16784u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[18], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[20], c.r[2].w[0] - 16752u);
    mmi::paddub(c.r[22], c.r[4], c.r[0]);
    mmi::paddub(c.r[19], c.r[0], c.r[0]);
    c.budget -= 45;
L_001DA774:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 2u)));
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0])));
    st32((c.r[21].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[21].w[0] + 3u));
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { goto L_001DA7A4; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001DA7C0; } }
L_001DA7A4:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 7;
L_001DA7C0:
    c.f[0] = ld32((c.r[22].w[0] + 104u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA7CCu); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x001DA7CCu) [[unlikely]] return; }
L_001DA7CC:
    set32(c.r[19], c.r[19].w[0] + 1u);
    st8((c.r[21].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[19].sd[0] < 4ll ? 1ull : 0ull;
    set32(c.r[17], c.r[17].w[0] + 16u);
    set32(c.r[20], c.r[20].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[21], c.r[21].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001DA774u | kUnwind; return; } goto L_001DA774; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA7F0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_001C(c, 21u, depth + 1u); else { c.pc = 0x00170680u; return; } if (c.pc != 0x001DA7F0u) [[unlikely]] return; }
L_001DA7F0:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_001DA820:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 19056u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[2].w[0] - 18000u);
    set32(c.r[16], c.r[29].w[0] + 63u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), 0u);
    set32(c.r[2], c.r[29].w[0] + 60u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[3].w[0]);
    set32(c.r[2], 0u + 3u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], c.r[2].w[0] - 16720u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[6], c.r[6].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[1].w[0] - 20368u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 274u)));
    set32(c.r[2], c.r[2].w[0] - 16648u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0]));
    c.budget -= 43;
    { const bool t = c.r[2].sd[0] < 0; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { goto L_001DA8D8; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001DA8F4; } }
L_001DA8D8:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 7;
L_001DA8F4:
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA900u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x001DA900u) [[unlikely]] return; }
L_001DA900:
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[12] = ld32((c.r[17].w[0] + 32u));
    set32(c.r[2], c.r[2].w[0] - 16672u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA920u); set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x001DA920u) [[unlikely]] return; }
L_001DA920:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[1].w[0] - 17984u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[1].w[0] - 18000u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA938u); c.f[12] = ld32((c.r[17].w[0] + 36u));  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x001DA938u) [[unlikely]] return; }
L_001DA938:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[1].w[0] - 17980u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[1].w[0] - 17996u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 17984u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] - 20416u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[1].w[0] - 17984u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 17980u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 2u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA984u); st32((c.r[1].w[0] - 17980u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x001DA984u) [[unlikely]] return; }
L_001DA984:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001DA9A0:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[3], c.r[3].w[0] - 18000u);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], c.r[3].w[0] - 16384u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[23], c.r[2].w[0] - 20416u);
    set32(c.r[3], c.r[29].w[0] + 160u);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[3].w[0]);
    set32(c.r[3], 0u + 3u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[3].w[0]);
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 8u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20354u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[18], c.r[3].w[0] - 18000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 5u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[19], c.r[3].w[0] - 16544u);
    c.f[0] = ld32((c.r[4].w[0] + 52u));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[28].w[0] - 30008u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.budget -= 52;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAA70u); c.f[12] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x001DAA70u) [[unlikely]] return; }
L_001DAA70:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[1].w[0] - 16380u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[16], c.r[29].w[0] + 160u);
    set32(c.r[21], c.r[2].w[0] - 16624u);
    mmi::paddub(c.r[20], c.r[0], c.r[0]);
    mmi::paddub(c.r[22], c.r[16], c.r[0]);
    c.budget -= 7;
L_001DAA8C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0])));
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 2u)));
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0])));
    st32((c.r[22].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[22].w[0] + 3u));
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[19], c.r[19].w[0] + 4u);  if (t) { goto L_001DAABC; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001DAAD8; } }
L_001DAABC:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 7;
L_001DAAD8:
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAAE4u); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x001DAAE4u) [[unlikely]] return; }
L_001DAAE4:
    set32(c.r[20], c.r[20].w[0] + 1u);
    st8((c.r[22].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[20].sd[0] < 8ll ? 1ull : 0ull;
    set32(c.r[18], c.r[18].w[0] + 16u);
    set32(c.r[21], c.r[21].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[22], c.r[22].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001DAA8Cu | kUnwind; return; } goto L_001DAA8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAB08u); mmi::paddub(c.r[4], c.r[23], c.r[0]);  if (depth < kMaxDepth) unit_001C(c, 21u, depth + 1u); else { c.pc = 0x00170680u; return; } if (c.pc != 0x001DAB08u) [[unlikely]] return; }
L_001DAB08:
    c.f[2] = ld32((c.r[17].w[0] + 52u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = ld32((c.r[1].w[0] - 16380u));
    c.f[3] = c.r[2].w[0];
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41500000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[2]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAB40u); c.f[12] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x001DAB40u) [[unlikely]] return; }
L_001DAB40:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[1].w[0] - 16380u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAB50u); mmi::paddub(c.r[4], c.r[23], c.r[0]);  if (depth < kMaxDepth) unit_001C(c, 21u, depth + 1u); else { c.pc = 0x00170680u; return; } if (c.pc != 0x001DAB50u) [[unlikely]] return; }
L_001DAB50:
    c.f[1] = ld32((c.r[17].w[0] + 52u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001DAE34; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 19056u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[2].w[0] - 16448u);
    set32(c.r[3], c.r[28].w[0] - 30008u);
    st32((c.r[23].w[0] + 52u), c.r[4].w[0]);
    st32((c.r[23].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[20], c.r[2].w[0] - 18000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[21], c.r[2].w[0] - 16512u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 5u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[20] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    st32((c.r[1].w[0] - 16380u), c.r[2].w[0]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DABC4u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 12u)));  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x001DABC4u) [[unlikely]] return; }
L_001DABC4:
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[18], c.r[2].w[0] - 16592u);
    c.f[1] = fp::add(c.f[20], c.f[0]);
    mmi::paddub(c.r[22], c.r[0], c.r[0]);
    mmi::paddub(c.r[19], c.r[16], c.r[0]);
    c.f[0] = c.r[3].w[0];
    c.f[20] = fp::add(c.f[0], c.f[1]);
    c.budget -= 10;
L_001DABEC:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0])));
    st32((c.r[20].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 2u)));
    st32((c.r[20].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0])));
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[19].w[0] + 3u));
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[21], c.r[21].w[0] + 4u);  if (t) { goto L_001DAC1C; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001DAC38; } }
L_001DAC1C:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_001DAC38:
    c.f[1] = fp::mul(c.f[20], c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAC48u); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x001DAC48u) [[unlikely]] return; }
L_001DAC48:
    set32(c.r[22], c.r[22].w[0] + 1u);
    st8((c.r[19].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[22].sd[0] < 8ll ? 1ull : 0ull;
    set32(c.r[20], c.r[20].w[0] + 16u);
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001DABECu | kUnwind; return; } goto L_001DABEC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAC6Cu); mmi::paddub(c.r[4], c.r[23], c.r[0]);  if (depth < kMaxDepth) unit_001C(c, 30u, depth + 1u); else { c.pc = 0x00170A40u; return; } if (c.pc != 0x001DAC6Cu) [[unlikely]] return; }
L_001DAC6C:
    set32(c.r[6], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 3u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 6u)));
    c.budget -= 5;
    if (c.r[6].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 4u);  goto L_001DAC90; }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_001DAE34; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_001DAC90:
    st16((c.r[23].w[0] + 62u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[6], ld32((c.r[1].w[0] - 19056u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], c.r[2].w[0] - 16416u);
    set32(c.r[2], 0u + 3u);
    st32((c.r[23].w[0] + 52u), c.r[6].w[0]);
    st32((c.r[23].w[0] + 48u), c.r[3].w[0]);
    st16((c.r[23].w[0] + 60u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[6], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[20], c.r[2].w[0] - 18000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[21], c.r[2].w[0] - 16480u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 5u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], c.r[28].w[0] - 30008u);
    set32(c.r[18], c.r[2].w[0] - 16560u);
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    mmi::paddub(c.r[22], c.r[0], c.r[0]);
    mmi::paddub(c.r[19], c.r[16], c.r[0]);
    st32((c.r[1].w[0] - 16380u), c.r[3].w[0]);
    c.budget -= 25;
L_001DACF4:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0])));
    st32((c.r[20].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 2u)));
    st32((c.r[20].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0])));
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[19].w[0] + 3u));
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[21], c.r[21].w[0] + 4u);  if (t) { goto L_001DAD24; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001DAD40; } }
L_001DAD24:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 7;
L_001DAD40:
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAD4Cu); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x001DAD4Cu) [[unlikely]] return; }
L_001DAD4C:
    set32(c.r[22], c.r[22].w[0] + 1u);
    st8((c.r[19].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[22].sd[0] < 4ll ? 1ull : 0ull;
    set32(c.r[20], c.r[20].w[0] + 16u);
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001DACF4u | kUnwind; return; } goto L_001DACF4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAD70u); mmi::paddub(c.r[4], c.r[23], c.r[0]);  if (depth < kMaxDepth) unit_001C(c, 30u, depth + 1u); else { c.pc = 0x00170A40u; return; } if (c.pc != 0x001DAD70u) [[unlikely]] return; }
L_001DAD70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[2].w[0] - 16400u);
    st32((c.r[23].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[19], c.r[2].w[0] - 18000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[20], c.r[2].w[0] - 16464u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 5u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], c.r[28].w[0] - 30008u);
    set32(c.r[18], c.r[2].w[0] - 16560u);
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    mmi::paddub(c.r[21], c.r[0], c.r[0]);
    st32((c.r[1].w[0] - 16380u), c.r[3].w[0]);
    c.budget -= 18;
L_001DADB8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0])));
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 2u)));
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0])));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 3u));
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[20], c.r[20].w[0] + 4u);  if (t) { goto L_001DADE8; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001DAE04; } }
L_001DADE8:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 7;
L_001DAE04:
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAE10u); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x001DAE10u) [[unlikely]] return; }
L_001DAE10:
    set32(c.r[21], c.r[21].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[21].sd[0] < 4ll ? 1ull : 0ull;
    set32(c.r[19], c.r[19].w[0] + 16u);
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001DADB8u | kUnwind; return; } goto L_001DADB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAE34u); mmi::paddub(c.r[4], c.r[23], c.r[0]);  if (depth < kMaxDepth) unit_001C(c, 30u, depth + 1u); else { c.pc = 0x00170A40u; return; } if (c.pc != 0x001DAE34u) [[unlikely]] return; }
L_001DAE34:
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_001DAE70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[5], 0u + 6u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAE98u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x001DAE98u) [[unlikely]] return; }
L_001DAE98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DAEE8; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x001E0000u);
    set32(c.r[5], 0u + 22u);
    set32(c.r[4], 0u + 3u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[3], c.r[3].w[0] - 20736u);
    st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], c.r[3].w[0] - 16032u);
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 18;
L_001DAEE8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001DAF00:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[2].w[0] - 15984u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001D8000u < 16384u) { entry = entries_0036[(t - 0x001D8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001DAF20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001DAFE8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[5], c.r[5].w[0] + 15328u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x001D8000u < 16384u) { entry = entries_0036[(t - 0x001D8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001DAF60:
    set32(c.r[2], c.r[4].w[0] + 320u);
    set32(c.r[4], c.r[2].w[0] + 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[5], c.r[2].w[0] + 5168u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAF78u); set32(c.r[6], 0u + 64u);  if (depth < kMaxDepth) unit_0005(c, 230u, depth + 1u); else { c.pc = 0x00116C60u; return; } if (c.pc != 0x001DAF78u) [[unlikely]] return; }
L_001DAF78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_001DAFEC; } }
L_001DAF80:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.r[3].d[0] = c.r[5].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001DAFB4; } }
    c.r[3].d[0] = c.r[5].d[0] & 127ull;
    st8((c.r[4].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + 10u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001DAFB8; } }
L_001DAFB4:
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_001DAFB8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 104u), c.r[3].w[0]);
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 384u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001DAFE8; } }
L_001DAFCC:
    st32((c.r[4].w[0] + 104u), 0u);
    c.r[3].d[0] = 0ull | 49152ull;
    st32((c.r[4].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[3], 0u + 1024u);
    st32((c.r[4].w[0] + 84u), c.r[3].w[0]);
    set32(c.r[3], 0u - 1u);
    st8((c.r[4].w[0] + 384u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
L_001DAFE8:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_001DAFEC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001DB000:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[2].w[0] - 15968u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001D8000u < 16384u) { entry = entries_0036[(t - 0x001D8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001DB020:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_001DB030:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_001DB040:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.f[1] = ld32((c.r[1].w[0] + 25708u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 104u), c.f[1]);  if (t) { goto L_001DB070; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001DB078; } }
L_001DB070:
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001DB078:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DB080:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.f[1] = ld32((c.r[1].w[0] + 25708u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 104u), c.f[1]);  if (t) { goto L_001DB0B0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001DB0B8; } }
L_001DB0B0:
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001DB0B8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DB0C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.f[1] = ld32((c.r[1].w[0] + 25708u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 104u), c.f[1]);  if (t) { goto L_001DB0F0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001DB0F8; } }
L_001DB0F0:
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001DB0F8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DB100:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 7u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001DB124; } }
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(0u));
    c.budget -= 4;
L_001DB124:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 166u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.f[0] = 0u;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.f[1] = ld32((c.r[1].w[0] + 25708u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 104u), c.f[1]);  if (t) { goto L_001DB15C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001DB164; } }
L_001DB15C:
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001DB164:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DB170:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.f[1] = ld32((c.r[1].w[0] + 25708u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 104u), c.f[1]);  if (t) { goto L_001DB1A0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001DB1A8; } }
L_001DB1A0:
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001DB1A8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DB1B0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.f[1] = ld32((c.r[1].w[0] + 25708u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 104u), c.f[1]);  if (t) { goto L_001DB1E0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001DB268; } }
L_001DB1E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 25720u)));
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[6].d[0];  if (t) { goto L_001DB218; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 25724u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_001DB218; } }
    set32(c.r[7], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 3u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001DB228; } }
L_001DB218:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001DB268; } }
L_001DB228:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 4u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_001DB258; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 6u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001DB258; } }
    st8((c.r[4].w[0] + 10u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001DB260; } }
L_001DB258:
    st8((c.r[4].w[0] + 10u), static_cast<std::uint8_t>(0u));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_001DB260:
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001DB268:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DB270:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 25720u)));
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[6].d[0];  if (t) { goto L_001DB2C4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 25724u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_001DB2C4; } }
    set32(c.r[7], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 3u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001DB2C4; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 4u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_001DB2C4; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 6u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_001DB2D4; } }
L_001DB2C4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001DB2F4; } }
L_001DB2D4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 5u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001DB2E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 10u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001DB2EC; } }
L_001DB2E8:
    st8((c.r[4].w[0] + 10u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 1;
L_001DB2EC:
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001DB2F4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DB300:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[7], c.r[3].w[0] + 25696u);
    set32(c.r[3], 0u + 2u);
    c.budget -= 10;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { goto L_001DB3E4; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_001DB3B4; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_001DB344; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DB484; } }
L_001DB344:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    set32(c.r[16], c.r[17].w[0] + 32u);
    set32(c.r[3], c.r[6].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[6].sd[0] > 0; st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001DB378; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0]), 0u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 25u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[7].w[0] + 25u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001DB484; } }
L_001DB378:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[1] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3200000u);
    c.f[0] = c.r[2].w[0];
    c.f[2] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB3ACu); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x001DB3ACu) [[unlikely]] return; }
L_001DB3AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_001DB484; } }
L_001DB3B4:
    set32(c.r[3], ld32((c.r[7].w[0] + 20u)));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001DB484; } }
    set32(c.r[3], c.r[6].w[0] + 1u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 384u)));
    set32(c.r[3], 0u + 30u);
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    st8((c.r[17].w[0] + 384u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001DB484; } }
L_001DB3E4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_001DB424; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 384u)));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), c.f[0]);  if (t) { goto L_001DB484; } }
L_001DB424:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 384u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001DB464; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[1] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[2] = c.r[4].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), c.f[0]);  if (t) { goto L_001DB484; } }
L_001DB464:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.budget -= 8;
L_001DB484:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.f[1] = ld32((c.r[1].w[0] + 25708u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001DB4C8; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 104u), c.f[1]);  if (t) { goto L_001DB4C8; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001DB4C8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001DB4E0; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001DB4E0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001DB500:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[16], c.r[3].w[0] + 25696u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 384u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[5], c.r[17].w[0] + 320u);
    set32(c.r[3], ld32((c.r[1].w[0] + 25696u)));
    c.budget -= 13;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[6], c.r[5].w[0] + 64u);  if (t) { goto L_001DB558; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[4].d[0] = c.r[4].d[0] << 56;
    set32(c.r[3], 0u - 1u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_001DB558; } }
    set32(c.r[5], 0u + 43u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB558u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x001DB558u) [[unlikely]] return; }
L_001DB558:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001DB664; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001DB644; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001DB5E0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001DB590; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[17].w[0] + 80u)));  if (t) { goto L_001DB69C; } }
L_001DB590:
    c.f[1] = ld32((c.r[17].w[0] + 104u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[5].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[17].w[0] + 104u), c.f[0]);  if (t) { goto L_001DB698; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    set32(c.r[3], 0u - 128u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[17].w[0] + 104u), c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 27u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 27u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001DB698; } }
L_001DB5E0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 27u)));
    c.r[3].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] & 2ull;  if (t) { goto L_001DB620; } }
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 4096u);
    st32((c.r[17].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[2], 0u + 32u);
    set32(c.r[5], 0u + 4u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB614u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x001DB614u) [[unlikely]] return; }
L_001DB614:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DB698; } }
    c.r[3].d[0] = c.r[4].d[0] & 2ull;
    c.budget -= 1;
L_001DB620:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001DB698; } }
    set32(c.r[2], c.r[5].w[0] + 2u);
    set32(c.r[5], 0u + 53u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB63Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x001DB63Cu) [[unlikely]] return; }
L_001DB63C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DB698; } }
L_001DB644:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].sd[0] > 0; st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001DB698; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001DB698; } }
L_001DB664:
    c.f[1] = ld32((c.r[17].w[0] + 104u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.f[2] = 0u;
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 104u), c.f[0]);  if (t) { goto L_001DB698; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[17].w[0] + 104u), 0u);
    c.budget -= 3;
L_001DB698:
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    c.budget -= 1;
L_001DB69C:
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 27u)));
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_001DB6CC; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_001DB6E4; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_001DB6CC:
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 27u)));
    c.r[3].d[0] = c.r[3].d[0] & 127ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 27u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001DB6E8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_001DB6E4:
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_001DB6E8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001DB700:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[8], ld32((c.r[1].w[0] - 19056u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[2].w[0] - 16368u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30000u)));
    set32(c.r[7], 0u + 3u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 29998u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), 0u);
    set32(c.r[2], c.r[29].w[0] + 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[2].w[0] - 15928u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[9], c.r[9].w[0] << 3);
    set32(c.r[9], c.r[2].w[0] + c.r[9].w[0]);
    st32((c.r[1].w[0] - 20368u), c.r[9].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[8].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[7].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[1].w[0] - 16368u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[1].w[0] - 16364u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 29996u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 29994u)));
    st32((c.r[1].w[0] - 16352u), c.r[2].w[0]);
    set32(c.r[2], 0u + 5u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80800000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[2].d[0] = c.r[2].d[0] | 32896ull;
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    st32((c.r[1].w[0] - 16348u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[0] = ld32((c.r[4].w[0] + 104u));
    c.f[1] = c.r[2].w[0];
    c.budget -= 53;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB7D4u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x001DB7D4u) [[unlikely]] return; }
L_001DB7D4:
    st8((c.r[29].w[0] + 35u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB7E4u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x001DB7E4u) [[unlikely]] return; }
L_001DB7E4:
    c.f[12] = ld32((c.r[16].w[0] + 104u));
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 5u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB7F8u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0037(c, 147u, depth + 1u); else { c.pc = 0x001DE890u; return; } if (c.pc != 0x001DB7F8u) [[unlikely]] return; }
L_001DB7F8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001DB810:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[16], c.r[2].w[0] - 20416u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 19056u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], c.r[3].w[0] - 16368u);
    mmi::paddub(c.r[20], c.r[4], c.r[0]);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), 0u);
    set32(c.r[3], c.r[29].w[0] + 108u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[2].w[0]);
    set32(c.r[2], 0u + 3u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[2].w[0]);
    set32(c.r[2], 0u + 7u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[18], c.r[2].w[0] - 15904u);
    c.budget -= 35;
L_001DB89C:
    st32((c.r[16].w[0] + 48u), c.r[18].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 8u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[19], c.r[29].w[0] + 111u);
    st32((c.r[1].w[0] - 16368u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 10u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[1].w[0] - 16364u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 12u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[1].w[0] - 16352u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 14u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[1].w[0] - 16348u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[19].w[0]));
    c.budget -= 19;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_001DB8F8; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001DB910; } }
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.budget -= 1;
L_001DB8F8:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_001DB910:
    c.f[0] = ld32((c.r[20].w[0] + 104u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB91Cu); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x001DB91Cu) [[unlikely]] return; }
L_001DB91C:
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB928u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x001DB928u) [[unlikely]] return; }
L_001DB928:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001DB89Cu | kUnwind; return; } goto L_001DB89C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[2].w[0] - 15552u);
    st32((c.r[16].w[0] + 48u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 15544u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 15542u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 15540u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 15538u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 15536u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 25702u)));
    st32((c.r[29].w[0] + 108u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[1].w[0] - 16368u), c.r[9].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[1].w[0] - 16364u), c.r[8].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[1].w[0] - 16352u), c.r[7].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 25;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[1].w[0] - 16348u), c.r[6].w[0]);  if (t) { goto L_001DB9B8; } }
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DB9B8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].d[0] = c.r[2].d[0] | 51711ull;
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 3;
L_001DB9B8:
    c.r[2].d[0] = ld8((c.r[19].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_001DB9D4; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001DB9EC; } }
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.budget -= 1;
L_001DB9D4:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_001DB9EC:
    c.f[0] = ld32((c.r[20].w[0] + 104u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB9F8u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x001DB9F8u) [[unlikely]] return; }
L_001DB9F8:
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBA04u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x001DBA04u) [[unlikely]] return; }
L_001DBA04:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001DBA30:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] - 9600u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[8], c.r[29].w[0] + 144u);
    mmi::paddub(c.r[21], c.r[4], c.r[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    mmi::paddub(c.r[22], c.r[0], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[17], c.r[2].w[0] + 5168u);
    set32(c.r[2], c.r[21].w[0] + 320u);
    set32(c.r[18], c.r[2].w[0] + 64u);
    st128((c.r[8].w[0]) & ~15u, c.r[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[16], c.r[2].w[0] - 20416u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 29992u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[7], c.r[2].w[0] - 16368u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 29990u)));
    st32((c.r[1].w[0] - 20396u), c.r[7].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), c.r[8].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[1].w[0] - 16368u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[1].w[0] - 16364u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 29988u)));
    set32(c.r[3], c.r[29].w[0] + 172u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 29986u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[1].w[0] - 16352u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st32((c.r[1].w[0] - 16348u), c.r[6].w[0]);
    set32(c.r[2], 0u + 4u);
    mmi::paddub(c.r[20], c.r[0], c.r[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 7u)));
    if (c.r[3].d[0] != 0) c.r[22].d[0] = c.r[2].d[0];
    st32((c.r[29].w[0] + 144u), 0u);
    c.budget -= 50;
L_001DBAF8:
    set32(c.r[2], c.r[20].w[0] + 1u);
    set32(c.r[3], c.r[2].w[0] << 3);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[2].w[0] - 16240u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 48u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != c.r[20].d[0]; mmi::paddub(c.r[3], c.r[22], c.r[0]);  if (t) { goto L_001DBB20; } }
    set32(c.r[3], c.r[22].w[0] + 1u);
    c.budget -= 1;
L_001DBB20:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[20].d[0];  if (t) { goto L_001DBB30; } }
    set32(c.r[3], c.r[3].w[0] + 2u);
    c.budget -= 1;
L_001DBB30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[2].w[0] - 16160u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[19], c.r[29].w[0] + 175u);
    st32((c.r[29].w[0] + 172u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[19].w[0]));
    c.budget -= 10;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_001DBB68; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001DBB80; } }
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.budget -= 1;
L_001DBB68:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_001DBB80:
    c.f[0] = ld32((c.r[21].w[0] + 104u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBB8Cu); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x001DBB8Cu) [[unlikely]] return; }
L_001DBB8C:
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBB98u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x001DBB98u) [[unlikely]] return; }
L_001DBB98:
    set32(c.r[3], ld32((c.r[29].w[0] + 144u)));
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].sd[0] < 8ll ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] + 24u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 144u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001DBAF8u | kUnwind; return; } goto L_001DBAF8; } }
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 29984u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 29982u)));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 29980u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 29978u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st32((c.r[1].w[0] - 16368u), c.r[9].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[1].w[0] - 16364u), c.r[8].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[1].w[0] - 16352u), c.r[7].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[1].w[0] - 16348u), c.r[6].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 7u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 17;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[22], 0u + 4u);  if (t) { goto L_001DBC00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[22], c.r[0], c.r[0]);  if (t) { goto L_001DBC00; } }
    set32(c.r[22], 0u + 4u);
    c.budget -= 1;
L_001DBC00:
    st32((c.r[29].w[0] + 144u), 0u);
    mmi::paddub(c.r[20], c.r[0], c.r[0]);
    c.budget -= 2;
L_001DBC08:
    set32(c.r[2], c.r[20].w[0] + 1u);
    set32(c.r[3], c.r[2].w[0] << 3);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[2].w[0] - 16240u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 48u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != c.r[20].d[0]; mmi::paddub(c.r[3], c.r[22], c.r[0]);  if (t) { goto L_001DBC30; } }
    set32(c.r[3], c.r[22].w[0] + 1u);
    c.budget -= 1;
L_001DBC30:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[20].d[0];  if (t) { goto L_001DBC40; } }
    set32(c.r[3], c.r[3].w[0] + 2u);
    c.budget -= 1;
L_001DBC40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[2].w[0] - 16160u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[29].w[0] + 172u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[19].w[0]));
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_001DBC74; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001DBC8C; } }
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.budget -= 1;
L_001DBC74:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_001DBC8C:
    c.f[0] = ld32((c.r[21].w[0] + 104u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBC98u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x001DBC98u) [[unlikely]] return; }
L_001DBC98:
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBCA4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x001DBCA4u) [[unlikely]] return; }
L_001DBCA4:
    set32(c.r[3], ld32((c.r[29].w[0] + 144u)));
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].sd[0] < 4ll ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] + 56u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 144u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001DBC08u | kUnwind; return; } goto L_001DBC08; } }
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 29976u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 29974u)));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 29972u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 29970u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st32((c.r[1].w[0] - 16368u), c.r[9].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[1].w[0] - 16364u), c.r[8].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[1].w[0] - 16352u), c.r[7].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[1].w[0] - 16348u), c.r[6].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 7u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 17;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[23], 0u + 4u);  if (t) { goto L_001DBD0C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[23], c.r[0], c.r[0]);  if (t) { goto L_001DBD0C; } }
    set32(c.r[23], 0u + 4u);
    c.budget -= 1;
L_001DBD0C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[22], c.r[2].w[0] - 15528u);
    st32((c.r[29].w[0] + 144u), 0u);
    mmi::paddub(c.r[20], c.r[0], c.r[0]);
    c.budget -= 4;
L_001DBD1C:
    st32((c.r[16].w[0] + 48u), c.r[22].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[20].d[0]; mmi::paddub(c.r[3], c.r[23], c.r[0]);  if (t) { goto L_001DBD30; } }
    set32(c.r[3], c.r[23].w[0] + 1u);
    c.budget -= 1;
L_001DBD30:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[20].d[0];  if (t) { goto L_001DBD40; } }
    set32(c.r[3], c.r[3].w[0] + 2u);
    c.budget -= 1;
L_001DBD40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[2].w[0] - 16160u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[29].w[0] + 172u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[19].w[0]));
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_001DBD74; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001DBD8C; } }
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.budget -= 1;
L_001DBD74:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_001DBD8C:
    c.f[0] = ld32((c.r[21].w[0] + 104u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBD98u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x001DBD98u) [[unlikely]] return; }
L_001DBD98:
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBDA4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x001DBDA4u) [[unlikely]] return; }
L_001DBDA4:
    set32(c.r[3], ld32((c.r[29].w[0] + 144u)));
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].sd[0] < 5ll ? 1ull : 0ull;
    set32(c.r[22], c.r[22].w[0] + 8u);
    set32(c.r[3], c.r[3].w[0] + 38u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 144u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001DBD1Cu | kUnwind; return; } goto L_001DBD1C; } }
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 29968u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 29966u)));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 29964u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 29962u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st32((c.r[1].w[0] - 16368u), c.r[9].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[1].w[0] - 16364u), c.r[8].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[1].w[0] - 16352u), c.r[7].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[29].w[0] + 144u), 0u);
    st32((c.r[1].w[0] - 16348u), c.r[6].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 7u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 18;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[23], 0u + 4u);  if (t) { goto L_001DBE14; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[23], c.r[0], c.r[0]);  if (t) { goto L_001DBE14; } }
    set32(c.r[23], 0u + 4u);
    c.budget -= 1;
L_001DBE14:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[20], c.r[2].w[0] - 15488u);
    mmi::paddub(c.r[22], c.r[0], c.r[0]);
    c.budget -= 3;
L_001DBE20:
    st32((c.r[16].w[0] + 48u), c.r[20].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[22].d[0]; mmi::paddub(c.r[3], c.r[23], c.r[0]);  if (t) { goto L_001DBE38; } }
    set32(c.r[3], c.r[23].w[0] + 1u);
    c.budget -= 2;
L_001DBE38:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[22].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_001DBE4C; } }
    set32(c.r[3], c.r[3].w[0] + 2u);
    set32(c.r[2], 0u + 2u);
    c.budget -= 2;
L_001DBE4C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001DBE58; } }
    mmi::paddub(c.r[3], c.r[0], c.r[0]);
    c.budget -= 1;
L_001DBE58:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[2].w[0] - 16160u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[29].w[0] + 172u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[19].w[0]));
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_001DBE8C; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001DBEA4; } }
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.budget -= 1;
L_001DBE8C:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_001DBEA4:
    c.f[0] = ld32((c.r[21].w[0] + 104u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBEB0u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x001DBEB0u) [[unlikely]] return; }
L_001DBEB0:
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBEBCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x001DBEBCu) [[unlikely]] return; }
L_001DBEBC:
    set32(c.r[6], ld32((c.r[29].w[0] + 144u)));
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.r[3].d[0] = c.r[22].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[20], c.r[20].w[0] + 8u);
    set32(c.r[6], c.r[6].w[0] + 112u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[29].w[0] + 144u), c.r[6].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001DBE20u | kUnwind; return; } goto L_001DBE20; } }
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_001DBF10:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 9584u);
    st32((c.r[29].w[0]), c.f[20]);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[6], c.r[29].w[0] + 160u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[16], c.r[2].w[0] - 20416u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st128((c.r[6].w[0]) & ~15u, c.r[3]);
    set32(c.r[3], c.r[2].w[0] - 16368u);
    st32((c.r[1].w[0] - 20396u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), c.r[6].w[0]);
    set32(c.r[3], c.r[29].w[0] + 176u);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[3].w[0]);
    set32(c.r[3], 0u + 3u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[3].w[0]);
    set32(c.r[6], 0u + 6u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 7u)));
    c.r[1].d[0] = c.r[2].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 41;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[23], c.r[4], c.r[0]);  if (t) { goto L_001DBFD0; } }
    set32(c.r[2], 0u + 8u);
    st16((c.r[16].w[0] + 62u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[19], c.r[2].w[0] - 16128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[2].w[0] - 15472u);  if (t) { goto L_001DBFE4; } }
L_001DBFD0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[19], c.r[2].w[0] - 16120u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[18], c.r[2].w[0] - 15440u);
    st16((c.r[16].w[0] + 62u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.budget -= 5;
L_001DBFE4:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[17], c.r[2].w[0] - 16368u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[21], c.r[29].w[0] + 176u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 7u)));
    set32(c.r[2], c.r[2].w[0] - 15344u);
    c.budget -= 7;
    [[clang::musttail]] return unit_0037(c, 1u, depth);
}

}
