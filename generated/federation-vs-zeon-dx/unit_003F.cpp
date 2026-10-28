#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_003F[4096] = {
    1, 0, 0, 0, 0, 0, 2, 3, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    23, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0,
    0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 41, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 44, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0,
    0, 0, 47, 0, 48, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 53, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0,
    65, 0, 0, 0, 66, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0,
    0, 0, 70, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 82,
    0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 86, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 89, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 92, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    95, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 104, 0, 0, 0, 0, 0, 105, 0, 0, 0, 106, 0,
    0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 110, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0,
    112, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 115, 0, 116, 0, 117, 0, 118, 0,
    119, 0, 120, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 125, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 128, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133,
    0, 0, 0, 134, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 138, 0, 0, 0, 0, 0, 0, 139,
    0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 143, 0, 144, 0,
    145, 0, 146, 0, 0, 0, 0, 0, 147, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0,
    0, 151, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    154, 0, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0,
    162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179,
    0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 189,
    0, 0, 0, 0, 190, 0, 0, 0, 0, 191, 0, 192, 0, 193, 0, 194, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 197,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0,
    200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 202, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 204, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 210, 0, 0, 0, 0, 0, 0,
    0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0,
    0, 0, 0, 0, 214, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 218, 0, 0,
    0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 233, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 239, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    245, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 248, 0, 0, 249,
};

void unit_003F(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001FC000;
    case 2u: goto L_001FC018;
    case 3u: goto L_001FC01C;
    case 4u: goto L_001FC040;
    case 5u: goto L_001FC0A4;
    case 6u: goto L_001FC140;
    case 7u: goto L_001FC1BC;
    case 8u: goto L_001FC240;
    case 9u: goto L_001FC2CC;
    case 10u: goto L_001FC2E8;
    case 11u: goto L_001FC3AC;
    case 12u: goto L_001FC430;
    case 13u: goto L_001FC4BC;
    case 14u: goto L_001FC4C8;
    case 15u: goto L_001FC600;
    case 16u: goto L_001FC628;
    case 17u: goto L_001FC71C;
    case 18u: goto L_001FC740;
    case 19u: goto L_001FC800;
    case 20u: goto L_001FC838;
    case 21u: goto L_001FC878;
    case 22u: goto L_001FC8CC;
    case 23u: goto L_001FC900;
    case 24u: goto L_001FC908;
    case 25u: goto L_001FC970;
    case 26u: goto L_001FCA10;
    case 27u: goto L_001FCA50;
    case 28u: goto L_001FCAF0;
    case 29u: goto L_001FCB28;
    case 30u: goto L_001FCB44;
    case 31u: goto L_001FCB6C;
    case 32u: goto L_001FCB9C;
    case 33u: goto L_001FCBB8;
    case 34u: goto L_001FCBFC;
    case 35u: goto L_001FCC24;
    case 36u: goto L_001FCCEC;
    case 37u: goto L_001FCD08;
    case 38u: goto L_001FCD40;
    case 39u: goto L_001FCD64;
    case 40u: goto L_001FCDA0;
    case 41u: goto L_001FCE14;
    case 42u: goto L_001FCE1C;
    case 43u: goto L_001FCE94;
    case 44u: goto L_001FCEB0;
    case 45u: goto L_001FCEB8;
    case 46u: goto L_001FCF6C;
    case 47u: goto L_001FCF88;
    case 48u: goto L_001FCF90;
    case 49u: goto L_001FCFA8;
    case 50u: goto L_001FCFEC;
    case 51u: goto L_001FD040;
    case 52u: goto L_001FD088;
    case 53u: goto L_001FD188;
    case 54u: goto L_001FD1A0;
    case 55u: goto L_001FD1C8;
    case 56u: goto L_001FD1E0;
    case 57u: goto L_001FD224;
    case 58u: goto L_001FD278;
    case 59u: goto L_001FD2C0;
    case 60u: goto L_001FD3C0;
    case 61u: goto L_001FD3D8;
    case 62u: goto L_001FD400;
    case 63u: goto L_001FD448;
    case 64u: goto L_001FD468;
    case 65u: goto L_001FD480;
    case 66u: goto L_001FD490;
    case 67u: goto L_001FD4A8;
    case 68u: goto L_001FD4E0;
    case 69u: goto L_001FD574;
    case 70u: goto L_001FD588;
    case 71u: goto L_001FD59C;
    case 72u: goto L_001FD600;
    case 73u: goto L_001FD628;
    case 74u: goto L_001FD63C;
    case 75u: goto L_001FD6A0;
    case 76u: goto L_001FD6C4;
    case 77u: goto L_001FD6CC;
    case 78u: goto L_001FD730;
    case 79u: goto L_001FD7DC;
    case 80u: goto L_001FD81C;
    case 81u: goto L_001FD860;
    case 82u: goto L_001FD87C;
    case 83u: goto L_001FD884;
    case 84u: goto L_001FD8C0;
    case 85u: goto L_001FD8DC;
    case 86u: goto L_001FD8EC;
    case 87u: goto L_001FD9C0;
    case 88u: goto L_001FD9DC;
    case 89u: goto L_001FDA08;
    case 90u: goto L_001FDA24;
    case 91u: goto L_001FDA58;
    case 92u: goto L_001FDA6C;
    case 93u: goto L_001FDAA0;
    case 94u: goto L_001FDAC0;
    case 95u: goto L_001FDB80;
    case 96u: goto L_001FDB88;
    case 97u: goto L_001FDCB4;
    case 98u: goto L_001FDCC0;
    case 99u: goto L_001FDCF4;
    case 100u: goto L_001FDD28;
    case 101u: goto L_001FDD34;
    case 102u: goto L_001FDD7C;
    case 103u: goto L_001FDE48;
    case 104u: goto L_001FDE50;
    case 105u: goto L_001FDE68;
    case 106u: goto L_001FDE78;
    case 107u: goto L_001FDE98;
    case 108u: goto L_001FDEB0;
    case 109u: goto L_001FDF3C;
    case 110u: goto L_001FDF44;
    case 111u: goto L_001FDF64;
    case 112u: goto L_001FDF80;
    case 113u: goto L_001FDFA0;
    case 114u: goto L_001FDFC0;
    case 115u: goto L_001FDFE0;
    case 116u: goto L_001FDFE8;
    case 117u: goto L_001FDFF0;
    case 118u: goto L_001FDFF8;
    case 119u: goto L_001FE000;
    case 120u: goto L_001FE008;
    case 121u: goto L_001FE020;
    case 122u: goto L_001FE040;
    case 123u: goto L_001FE050;
    case 124u: goto L_001FE070;
    case 125u: goto L_001FE118;
    case 126u: goto L_001FE120;
    case 127u: goto L_001FE1E4;
    case 128u: goto L_001FE1F0;
    case 129u: goto L_001FE224;
    case 130u: goto L_001FE250;
    case 131u: goto L_001FE25C;
    case 132u: goto L_001FE2A4;
    case 133u: goto L_001FE37C;
    case 134u: goto L_001FE38C;
    case 135u: goto L_001FE3A4;
    case 136u: goto L_001FE3C0;
    case 137u: goto L_001FE458;
    case 138u: goto L_001FE460;
    case 139u: goto L_001FE47C;
    case 140u: goto L_001FE498;
    case 141u: goto L_001FE4B8;
    case 142u: goto L_001FE4D8;
    case 143u: goto L_001FE4F0;
    case 144u: goto L_001FE4F8;
    case 145u: goto L_001FE500;
    case 146u: goto L_001FE508;
    case 147u: goto L_001FE520;
    case 148u: goto L_001FE52C;
    case 149u: goto L_001FE550;
    case 150u: goto L_001FE560;
    case 151u: goto L_001FE584;
    case 152u: goto L_001FE5A0;
    case 153u: goto L_001FE5D4;
    case 154u: goto L_001FE600;
    case 155u: goto L_001FE610;
    case 156u: goto L_001FE620;
    case 157u: goto L_001FE660;
    case 158u: goto L_001FE6C0;
    case 159u: goto L_001FE71C;
    case 160u: goto L_001FE730;
    case 161u: goto L_001FE768;
    case 162u: goto L_001FE780;
    case 163u: goto L_001FEA0C;
    case 164u: goto L_001FEA60;
    case 165u: goto L_001FEAB8;
    case 166u: goto L_001FEB14;
    case 167u: goto L_001FEBE4;
    case 168u: goto L_001FEC14;
    case 169u: goto L_001FEC30;
    case 170u: goto L_001FEE6C;
    case 171u: goto L_001FEEB4;
    case 172u: goto L_001FEEFC;
    case 173u: goto L_001FEF40;
    case 174u: goto L_001FEFE0;
    case 175u: goto L_001FF020;
    case 176u: goto L_001FF030;
    case 177u: goto L_001FF040;
    case 178u: goto L_001FF0B8;
    case 179u: goto L_001FF0FC;
    case 180u: goto L_001FF10C;
    case 181u: goto L_001FF158;
    case 182u: goto L_001FF1A0;
    case 183u: goto L_001FF1B4;
    case 184u: goto L_001FF1DC;
    case 185u: goto L_001FF204;
    case 186u: goto L_001FF22C;
    case 187u: goto L_001FF240;
    case 188u: goto L_001FF270;
    case 189u: goto L_001FF27C;
    case 190u: goto L_001FF290;
    case 191u: goto L_001FF2A4;
    case 192u: goto L_001FF2AC;
    case 193u: goto L_001FF2B4;
    case 194u: goto L_001FF2BC;
    case 195u: goto L_001FF2D0;
    case 196u: goto L_001FF2F0;
    case 197u: goto L_001FF2FC;
    case 198u: goto L_001FF3B8;
    case 199u: goto L_001FF3DC;
    case 200u: goto L_001FF400;
    case 201u: goto L_001FF470;
    case 202u: goto L_001FF478;
    case 203u: goto L_001FF4EC;
    case 204u: goto L_001FF4F4;
    case 205u: goto L_001FF544;
    case 206u: goto L_001FF54C;
    case 207u: goto L_001FF57C;
    case 208u: goto L_001FF5AC;
    case 209u: goto L_001FF5DC;
    case 210u: goto L_001FF5E4;
    case 211u: goto L_001FF604;
    case 212u: goto L_001FF644;
    case 213u: goto L_001FF674;
    case 214u: goto L_001FF690;
    case 215u: goto L_001FF698;
    case 216u: goto L_001FF6D8;
    case 217u: goto L_001FF768;
    case 218u: goto L_001FF774;
    case 219u: goto L_001FF798;
    case 220u: goto L_001FF870;
    case 221u: goto L_001FF8C0;
    case 222u: goto L_001FF8D0;
    case 223u: goto L_001FF928;
    case 224u: goto L_001FF968;
    case 225u: goto L_001FF9D0;
    case 226u: goto L_001FF9DC;
    case 227u: goto L_001FFA58;
    case 228u: goto L_001FFB08;
    case 229u: goto L_001FFB60;
    case 230u: goto L_001FFBA8;
    case 231u: goto L_001FFBFC;
    case 232u: goto L_001FFC48;
    case 233u: goto L_001FFC54;
    case 234u: goto L_001FFC5C;
    case 235u: goto L_001FFCC0;
    case 236u: goto L_001FFD2C;
    case 237u: goto L_001FFE38;
    case 238u: goto L_001FFE64;
    case 239u: goto L_001FFE98;
    case 240u: goto L_001FFEA4;
    case 241u: goto L_001FFED4;
    case 242u: goto L_001FFEE0;
    case 243u: goto L_001FFF10;
    case 244u: goto L_001FFF28;
    case 245u: goto L_001FFF80;
    case 246u: goto L_001FFF98;
    case 247u: goto L_001FFFE0;
    case 248u: goto L_001FFFF0;
    case 249u: goto L_001FFFFC;
    default: bad_entry(c, 0x001FC000u); return;
    }
L_001FC000:
    st32((c.r[1].w[0] - 20380u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC018u); st32((c.r[1].w[0] - 20368u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x001FC018u) [[unlikely]] return; }
L_001FC018:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001FC01C:
    c.r[2].d[0] = c.r[16].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 19u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FBE38u | kUnwind; return; } [[clang::musttail]] return unit_003E(c, 454u, depth); } }
    set32(c.r[2], 0u + 472u);
    st16((c.r[29].w[0] + 360u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 96u);
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 240u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 360u)));
    c.budget -= 6;
L_001FC040:
    set32(c.r[6], 0u + 235u);
    set32(c.r[5], c.r[29].w[0] + 320u);
    set32(c.r[16], c.r[2].w[0] + 53u);
    set32(c.r[3], c.r[3].w[0] + 40u);
    set32(c.r[2], c.r[29].w[0] + 364u);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] - 20416u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], c.r[29].w[0] + 360u);
    set32(c.r[2], c.r[7].w[0] + 16u);
    st16((c.r[30].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[29].w[0] + 320u), c.r[6].w[0]);
    st32((c.r[19].w[0]), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 320u)));
    set32(c.r[2], c.r[2].w[0] + 40u);
    st32((c.r[23].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] + 8u);
    st32((c.r[22].w[0]), c.r[2].w[0]);
    st32((c.r[1].w[0] - 20396u), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC0A4u); st32((c.r[1].w[0] - 20368u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x001FC0A4u) [[unlikely]] return; }
L_001FC0A4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 6u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 25424u);
    set32(c.r[7], 0u + 270u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[8], c.r[2].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = ld16((c.r[8].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[6], c.r[2].w[0] - 25504u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[29].w[0] + 360u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[8].d[0] = ld16((c.r[8].w[0] + 2u));
    set32(c.r[4], c.r[2].w[0] - 20416u);
    set32(c.r[5], c.r[29].w[0] + 320u);
    set32(c.r[3], c.r[29].w[0] + 360u);
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 360u)));
    set32(c.r[8], c.r[2].w[0] + 24u);
    set32(c.r[2], c.r[29].w[0] + 364u);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] + 24u);
    st16((c.r[30].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 256u)));
    st32((c.r[29].w[0] + 320u), c.r[7].w[0]);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 320u)));
    set32(c.r[2], c.r[2].w[0] + 24u);
    st32((c.r[23].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] + 12u);
    st32((c.r[22].w[0]), c.r[2].w[0]);
    st32((c.r[1].w[0] - 20380u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 39;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC140u); st32((c.r[1].w[0] - 20368u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x001FC140u) [[unlikely]] return; }
L_001FC140:
    set32(c.r[2], 0u + 472u);
    st16((c.r[29].w[0] + 360u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 80u);
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 240u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 360u)));
    set32(c.r[7], 0u + 262u);
    set32(c.r[5], c.r[29].w[0] + 320u);
    set32(c.r[6], c.r[2].w[0] + 43u);
    set32(c.r[3], c.r[3].w[0] + 40u);
    set32(c.r[2], c.r[29].w[0] + 364u);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] - 20416u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], c.r[29].w[0] + 360u);
    set32(c.r[2], c.r[8].w[0] + 16u);
    st16((c.r[30].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[29].w[0] + 320u), c.r[7].w[0]);
    st32((c.r[19].w[0]), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 320u)));
    set32(c.r[2], c.r[2].w[0] + 40u);
    st32((c.r[23].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] + 8u);
    st32((c.r[22].w[0]), c.r[2].w[0]);
    st32((c.r[1].w[0] - 20396u), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC1BCu); st32((c.r[1].w[0] - 20368u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x001FC1BCu) [[unlikely]] return; }
L_001FC1BC:
    set32(c.r[2], 0u + 440u);
    st16((c.r[29].w[0] + 360u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 40u);
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 360u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[6], c.r[2].w[0] - 25504u);
    set32(c.r[2], c.r[29].w[0] + 364u);
    set32(c.r[3], c.r[3].w[0] + 72u);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] - 20416u);
    set32(c.r[7], 0u + 379u);
    set32(c.r[2], c.r[8].w[0] + 40u);
    st16((c.r[30].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[29].w[0] + 320u), c.r[7].w[0]);
    st32((c.r[19].w[0]), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 320u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[5], c.r[29].w[0] + 320u);
    set32(c.r[3], c.r[29].w[0] + 360u);
    set32(c.r[2], c.r[2].w[0] + 72u);
    st32((c.r[23].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] + 20u);
    st32((c.r[22].w[0]), c.r[2].w[0]);
    st32((c.r[1].w[0] - 20380u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 33;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC240u); st32((c.r[1].w[0] - 20368u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x001FC240u) [[unlikely]] return; }
L_001FC240:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 8u)));
    set32(c.r[2], 0u + 13u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001FC2D4; } }
    set32(c.r[2], 0u + 220u);
    st16((c.r[29].w[0] + 360u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 56u);
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 240u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 360u)));
    set32(c.r[7], 0u + 450u);
    set32(c.r[5], c.r[29].w[0] + 320u);
    set32(c.r[6], c.r[2].w[0] + 61u);
    set32(c.r[3], c.r[3].w[0] + 44u);
    set32(c.r[2], c.r[29].w[0] + 364u);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] - 20416u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], c.r[29].w[0] + 360u);
    set32(c.r[2], c.r[8].w[0] + 24u);
    st16((c.r[30].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[29].w[0] + 320u), c.r[7].w[0]);
    st32((c.r[19].w[0]), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 320u)));
    set32(c.r[2], c.r[2].w[0] + 44u);
    st32((c.r[23].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] + 12u);
    st32((c.r[22].w[0]), c.r[2].w[0]);
    st32((c.r[1].w[0] - 20396u), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC2CCu); st32((c.r[1].w[0] - 20368u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x001FC2CCu) [[unlikely]] return; }
L_001FC2CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 368u);  if (t) { goto L_001FC434; } }
L_001FC2D4:
    set32(c.r[2], ld32((c.r[29].w[0] + 240u)));
    set32(c.r[16], 0u + 463u);
    mmi::paddub(c.r[20], c.r[0], c.r[0]);
    set32(c.r[21], c.r[2].w[0] + 61u);
    c.budget -= 5;
L_001FC2E8:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != 0ull;  if (t) { goto L_001FC31C; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 8u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x66660000u);
    c.r[2].d[0] = c.r[2].d[0] | 26215ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] >> 31);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_001FC334; } }
L_001FC31C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 8u)));
    set32(c.r[2], 0u + 10u);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 6;
L_001FC334:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    st16((c.r[29].w[0] + 360u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 56u);
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 360u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] - 20416u);
    set32(c.r[2], c.r[29].w[0] + 364u);
    set32(c.r[6], c.r[6].w[0] + 20u);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    set32(c.r[5], c.r[29].w[0] + 320u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], c.r[29].w[0] + 360u);
    set32(c.r[2], c.r[2].w[0] + 24u);
    st16((c.r[30].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[29].w[0] + 320u), c.r[16].w[0]);
    st32((c.r[19].w[0]), c.r[21].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 320u)));
    set32(c.r[2], c.r[2].w[0] + 20u);
    st32((c.r[23].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] + 12u);
    st32((c.r[22].w[0]), c.r[2].w[0]);
    st32((c.r[1].w[0] - 20396u), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC3ACu); st32((c.r[1].w[0] - 20368u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x001FC3ACu) [[unlikely]] return; }
L_001FC3AC:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FC2E8u | kUnwind; return; } goto L_001FC2E8; } }
    set32(c.r[2], 0u + 200u);
    st16((c.r[29].w[0] + 360u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 56u);
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 360u)));
    set32(c.r[7], 0u + 447u);
    set32(c.r[6], c.r[29].w[0] + 320u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] + 20u);
    set32(c.r[2], c.r[29].w[0] + 364u);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[5], c.r[29].w[0] + 360u);
    set32(c.r[4], c.r[3].w[0] - 20416u);
    set32(c.r[2], c.r[2].w[0] + 24u);
    st16((c.r[30].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[29].w[0] + 320u), c.r[7].w[0]);
    st32((c.r[19].w[0]), c.r[21].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 320u)));
    set32(c.r[2], c.r[2].w[0] + 20u);
    st32((c.r[23].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] + 12u);
    st32((c.r[22].w[0]), c.r[2].w[0]);
    st32((c.r[1].w[0] - 20396u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC430u); st32((c.r[1].w[0] - 20368u), c.r[5].w[0]);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x001FC430u) [[unlikely]] return; }
L_001FC430:
    set32(c.r[2], 0u + 368u);
    c.budget -= 1;
L_001FC434:
    st16((c.r[29].w[0] + 360u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 56u);
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 240u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 360u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[6], c.r[3].w[0] - 25504u);
    set32(c.r[7], 0u + 497u);
    set32(c.r[20], c.r[2].w[0] + 61u);
    set32(c.r[4], c.r[4].w[0] + 72u);
    set32(c.r[2], c.r[29].w[0] + 364u);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    set32(c.r[4], c.r[2].w[0] - 20416u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[5], c.r[29].w[0] + 320u);
    set32(c.r[2], c.r[8].w[0] + 24u);
    st16((c.r[30].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[29].w[0] + 320u), c.r[7].w[0]);
    st32((c.r[19].w[0]), c.r[20].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 320u)));
    set32(c.r[3], c.r[29].w[0] + 360u);
    set32(c.r[2], c.r[2].w[0] + 72u);
    st32((c.r[23].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] + 12u);
    st32((c.r[22].w[0]), c.r[2].w[0]);
    st32((c.r[1].w[0] - 20380u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 34;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC4BCu); st32((c.r[1].w[0] - 20368u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x001FC4BCu) [[unlikely]] return; }
L_001FC4BC:
    set32(c.r[21], 0u + 562u);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    st32((c.r[29].w[0] + 288u), 0u);
    c.budget -= 3;
L_001FC4C8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001FC500; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 10u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x51EB0000u);
    c.r[2].d[0] = c.r[2].d[0] | 34079ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] >> 31);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_001FC560; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001FC500:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_001FC548; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 10u)));
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
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_001FC560; } }
L_001FC548:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 10u)));
    set32(c.r[2], 0u + 10u);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 6;
L_001FC560:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001FC584; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 288u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001FC580; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_001FC604; }
L_001FC580:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001FC584:
    st32((c.r[29].w[0] + 288u), c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    st16((c.r[29].w[0] + 360u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 56u);
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 360u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] - 20416u);
    set32(c.r[2], c.r[29].w[0] + 364u);
    set32(c.r[6], c.r[6].w[0] + 20u);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    set32(c.r[5], c.r[29].w[0] + 320u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], c.r[29].w[0] + 360u);
    set32(c.r[2], c.r[2].w[0] + 24u);
    st16((c.r[30].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[29].w[0] + 320u), c.r[21].w[0]);
    st32((c.r[19].w[0]), c.r[20].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 320u)));
    set32(c.r[2], c.r[2].w[0] + 20u);
    st32((c.r[23].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] + 12u);
    st32((c.r[22].w[0]), c.r[2].w[0]);
    st32((c.r[1].w[0] - 20396u), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC600u); st32((c.r[1].w[0] - 20368u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x001FC600u) [[unlikely]] return; }
L_001FC600:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001FC604:
    c.r[2].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[21], c.r[21].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FC4C8u | kUnwind; return; } goto L_001FC4C8; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 240u)));
    mmi::paddub(c.r[21], c.r[0], c.r[0]);
    mmi::paddub(c.r[16], c.r[17], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 10u);
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    c.budget -= 6;
L_001FC628:
    set32(c.r[3], 0u + 5u);
    set32(c.r[2], 0u + 6u);
    if (c.r[21].d[0] != 0) c.r[3].d[0] = c.r[2].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    set32(c.r[2], 0u + 33u);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[3].w[0] << 2);  if (t) { goto L_001FC654; } }
    set32(c.r[3], 0u + 21u);
    set32(c.r[2], c.r[3].w[0] << 2);
    c.budget -= 2;
L_001FC654:
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[2].w[0] << 1);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 25392u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    set32(c.r[7], 0u + 252u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[5], c.r[29].w[0] + 320u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 19376u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[1].w[0] - 20364u), c.r[3].w[0]);
    set32(c.r[2], 0u + 289u);
    st16((c.r[29].w[0] + 360u), static_cast<std::uint16_t>(0u));
    if (c.r[21].d[0] != 0) c.r[7].d[0] = c.r[2].d[0];
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 360u)));
    set32(c.r[6], c.r[2].w[0] - 25504u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] - 20416u);
    set32(c.r[8], c.r[8].w[0] + 128u);
    set32(c.r[2], c.r[29].w[0] + 364u);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], c.r[29].w[0] + 360u);
    set32(c.r[2], c.r[2].w[0] + 128u);
    st16((c.r[30].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    st32((c.r[29].w[0] + 320u), c.r[7].w[0]);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 320u)));
    set32(c.r[2], c.r[2].w[0] + 128u);
    st32((c.r[23].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] + 64u);
    st32((c.r[22].w[0]), c.r[2].w[0]);
    st32((c.r[1].w[0] - 20380u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 50;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC71Cu); st32((c.r[1].w[0] - 20368u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x001FC71Cu) [[unlikely]] return; }
L_001FC71C:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[2].d[0] = c.r[21].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FC628u | kUnwind; return; } goto L_001FC628; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26276u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    st32((c.r[1].w[0] - 20364u), c.r[2].w[0]);
    c.budget -= 5;
L_001FC740:
    set32(c.r[2], c.r[16].w[0] + 6u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    st16((c.r[29].w[0] + 360u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 224u)));
    set32(c.r[3], c.r[16].w[0] + 140u);
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 360u)));
    set32(c.r[4], c.r[2].w[0] + 160u);
    set32(c.r[2], c.r[29].w[0] + 364u);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] + 22u);
    st16((c.r[30].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[29].w[0] + 320u), c.r[3].w[0]);
    st32((c.r[19].w[0]), c.r[20].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 320u)));
    set32(c.r[2], c.r[2].w[0] + 160u);
    st32((c.r[23].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] + 11u);
    c.budget -= 24;
    { const bool t = c.r[16].d[0] != 0ull; st32((c.r[22].w[0]), c.r[2].w[0]);  if (t) { goto L_001FC7B0; } }
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001FC7C0; } }
L_001FC7B0:
    set32(c.r[2], 0u + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_001FC7C0:
    set32(c.r[2], c.r[16].w[0] + 2u);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 25504u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 320u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 360u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20368u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC800u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x001FC800u) [[unlikely]] return; }
L_001FC800:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FC740u | kUnwind; return; } goto L_001FC740; } }
    set32(c.r[2], 0u + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 272u)));
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    set32(c.r[16], c.r[2].w[0] << 3);
    c.budget -= 10;
L_001FC838:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 26576u);
    set32(c.r[3], c.r[16].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 25552u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    set32(c.r[2], 0u + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20354u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC878u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001C(c, 21u, depth + 1u); else { c.pc = 0x00170680u; return; } if (c.pc != 0x001FC878u) [[unlikely]] return; }
L_001FC878:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FC838u | kUnwind; return; } goto L_001FC838; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 272u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[16], c.r[2].w[0] << 6);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 26064u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 25536u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    set32(c.r[2], 0u + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20354u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC8CCu); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001C(c, 21u, depth + 1u); else { c.pc = 0x00170680u; return; } if (c.pc != 0x001FC8CCu) [[unlikely]] return; }
L_001FC8CC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 25808u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 25520u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    set32(c.r[2], 0u + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20354u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 13;
L_001FC900:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC908u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001C(c, 21u, depth + 1u); else { c.pc = 0x00170680u; return; } if (c.pc != 0x001FC908u) [[unlikely]] return; }
L_001FC908:
    set32(c.r[3], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[3], c.r[3].w[0] + 8u);
    st32((c.r[29].w[0] + 208u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 224u)));
    set32(c.r[3], c.r[3].w[0] + 24u);
    st32((c.r[29].w[0] + 224u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 176u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    c.r[3].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FBBD8u | kUnwind; return; } [[clang::musttail]] return unit_003E(c, 450u, depth); } }
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 368u);  c.pc = t; return; }
L_001FC970:
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
    set32(c.r[5], ld32((c.r[28].w[0] - 26272u)));
    set32(c.r[19], c.r[4].w[0] + 320u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], 0u + 3u);
    st32((c.r[1].w[0] - 20364u), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[4].w[0]);
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), 0u);
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 26736u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 26672u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    set32(c.r[2], 0u + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20354u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 40;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCA10u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001C(c, 21u, depth + 1u); else { c.pc = 0x00170680u; return; } if (c.pc != 0x001FCA10u) [[unlikely]] return; }
L_001FCA10:
    set32(c.r[3], 0u + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] - 26656u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 26592u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] - 20416u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCA50u); st16((c.r[1].w[0] - 20354u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_001C(c, 21u, depth + 1u); else { c.pc = 0x00170680u; return; } if (c.pc != 0x001FCA50u) [[unlikely]] return; }
L_001FCA50:
    set32(c.r[3], ld32((c.r[28].w[0] - 26268u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], 0u + 3u);
    set32(c.r[16], c.r[29].w[0] + 198u);
    st32((c.r[1].w[0] - 20364u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[29].w[0] + 196u), static_cast<std::uint16_t>(0u));
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 196u)));
    set32(c.r[6], 0u + 128u);
    set32(c.r[3], 0u + 22u);
    set32(c.r[17], c.r[29].w[0] + 164u);
    set32(c.r[7], c.r[2].w[0] + 193u);
    set32(c.r[2], c.r[29].w[0] + 200u);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[30], c.r[29].w[0] + 180u);
    set32(c.r[2], c.r[29].w[0] + 202u);
    set32(c.r[7], c.r[7].w[0] + 180u);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[7].w[0]));
    st32((c.r[29].w[0] + 160u), c.r[6].w[0]);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[23], c.r[29].w[0] + 205u);
    set32(c.r[22], c.r[29].w[0] + 206u);
    set32(c.r[3], c.r[2].w[0] + 386u);
    set32(c.r[2], c.r[29].w[0] + 176u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + 180u);
    st32((c.r[30].w[0]), c.r[2].w[0]);
    st8((c.r[29].w[0] + 204u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[23].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[22].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.f[0] = ld32((c.r[19].w[0] + 4u));
    c.budget -= 40;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCAF0u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x001FCAF0u) [[unlikely]] return; }
L_001FCAF0:
    set32(c.r[18], c.r[29].w[0] + 207u);
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCB28u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x001FCB28u) [[unlikely]] return; }
L_001FCB28:
    set32(c.r[2], 0u + 255u);
    st8((c.r[29].w[0] + 204u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[23].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[22].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[21], c.r[2].w[0] - 25120u);
    mmi::paddub(c.r[20], c.r[0], c.r[0]);
    c.budget -= 7;
L_001FCB44:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_001FCB58; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_001FCB74; } }
L_001FCB58:
    c.f[0] = ld32((c.r[19].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCB6Cu); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x001FCB6Cu) [[unlikely]] return; }
L_001FCB6C:
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_001FCB74:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == c.r[2].d[0];  if (t) { goto L_001FCB88; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != c.r[2].d[0];  if (t) { goto L_001FCBA4; } }
L_001FCB88:
    c.f[0] = ld32((c.r[19].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCB9Cu); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x001FCB9Cu) [[unlikely]] return; }
L_001FCB9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001FCBC0; } }
L_001FCBA4:
    c.f[0] = ld32((c.r[19].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42800000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCBB8u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x001FCBB8u) [[unlikely]] return; }
L_001FCBB8:
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001FCBC0:
    set32(c.r[2], 0u + 5u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[21].w[0]);
    set32(c.r[2], c.r[28].w[0] - 29664u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20376u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 204u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] - 20416u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCBFCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_003F(c, 81u, depth + 1u); else { c.pc = 0x001FD860u; return; } if (c.pc != 0x001FCBFCu) [[unlikely]] return; }
L_001FCBFC:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[21], c.r[21].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FCB44u | kUnwind; return; } goto L_001FCB44; } }
    set32(c.r[2], 0u + 6u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[20], c.r[2].w[0] - 25168u);
    mmi::paddub(c.r[21], c.r[0], c.r[0]);
    c.budget -= 6;
L_001FCC24:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != 0ull;  if (t) { goto L_001FCC3C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26272u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] - 20364u), c.r[2].w[0]);  if (t) { goto L_001FCC48; } }
L_001FCC3C:
    set32(c.r[2], ld32((c.r[28].w[0] - 26268u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[2].w[0]);
    c.budget -= 3;
L_001FCC48:
    c.r[3].d[0] = ld16((c.r[20].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65300ull;
    set32(c.r[6], 0u + 128u);
    st16((c.r[29].w[0] + 196u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[20].w[0] + 2u));
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 196u)));
    set32(c.r[7], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[29].w[0] + 200u);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 6u)));
    set32(c.r[7], c.r[7].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[29].w[0] + 202u);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[3].d[0] = ld16((c.r[20].w[0] + 8u));
    st32((c.r[29].w[0] + 160u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[20].w[0] + 10u));
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.r[7].d[0] = ld16((c.r[20].w[0] + 12u));
    set32(c.r[3], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[7], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[29].w[0] + 176u);
    st32((c.r[3].w[0]), c.r[7].w[0]);
    c.r[7].d[0] = ld16((c.r[20].w[0] + 14u));
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    st32((c.r[30].w[0]), c.r[3].w[0]);
    st32((c.r[29].w[0] + 168u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 184u), c.r[2].w[0]);
    st8((c.r[29].w[0] + 204u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[23].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 36;
    { const bool t = c.r[21].d[0] != 0ull; st8((c.r[22].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { goto L_001FCCF4; } }
    c.f[0] = ld32((c.r[19].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCCECu); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x001FCCECu) [[unlikely]] return; }
L_001FCCEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001FCD10; } }
L_001FCCF4:
    c.f[0] = ld32((c.r[19].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCD08u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x001FCD08u) [[unlikely]] return; }
L_001FCD08:
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001FCD10:
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
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCD40u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x001FCD40u) [[unlikely]] return; }
L_001FCD40:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[2].d[0] = c.r[21].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FCC24u | kUnwind; return; } goto L_001FCC24; } }
    c.f[12] = ld32((c.r[19].w[0]));
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 5u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCD64u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0037(c, 147u, depth + 1u); else { c.pc = 0x001DE890u; return; } if (c.pc != 0x001FCD64u) [[unlikely]] return; }
L_001FCD64:
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
L_001FCDA0:
    set32(c.r[29], c.r[29].w[0] - 336u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26272u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], 0u + 3u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[1].w[0] - 20364u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 25024u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[18], c.r[17].w[0] + 320u);
    set32(c.r[23], c.r[29].w[0] + 224u);
    mmi::paddub(c.r[19], c.r[0], c.r[0]);
    st32((c.r[1].w[0] - 20392u), 0u);
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    c.budget -= 29;
L_001FCE14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCE1Cu); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x00102728u; return; } if (c.pc != 0x001FCE1Cu) [[unlikely]] return; }
L_001FCE1C:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3ECB0000u);  if (t) { goto L_001FCE3C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBECB0000u);
    c.r[2].d[0] = c.r[2].d[0] | 20657ull;
    c.f[0] = c.r[2].w[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0xBE530000u);  if (t) { goto L_001FCE48; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3ECB0000u);
    c.budget -= 1;
L_001FCE3C:
    c.r[2].d[0] = c.r[2].d[0] | 20657ull;
    c.f[0] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBE530000u);
    c.budget -= 3;
L_001FCE48:
    set32(c.r[16], c.r[29].w[0] + 244u);
    st32((c.r[29].w[0] + 240u), c.f[0]);
    c.r[2].d[0] = c.r[2].d[0] | 56728ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 248u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 10;
    { const bool t = c.r[19].d[0] != 0ull; st32((c.r[29].w[0] + 176u), c.r[2].w[0]);  if (t) { goto L_001FCE78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[17].w[0] + 116u));  if (t) { goto L_001FCE80; } }
L_001FCE78:
    c.f[0] = ld32((c.r[17].w[0] + 120u));
    c.budget -= 2;
L_001FCE80:
    set32(c.r[30], c.r[29].w[0] + 196u);
    set32(c.r[5], c.r[29].w[0] + 240u);
    st32((c.r[30].w[0]), c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCE94u); mmi::paddub(c.r[4], c.r[23], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x001FCE94u) [[unlikely]] return; }
L_001FCE94:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[6], c.r[2].w[0] - 25040u);
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[5], c.r[29].w[0] + 176u);
    set32(c.r[4], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCEB0u); set32(c.r[7], 0u + 7u);  if (depth < kMaxDepth) unit_001B(c, 149u, depth + 1u); else { c.pc = 0x0016E7C0u; return; } if (c.pc != 0x001FCEB0u) [[unlikely]] return; }
L_001FCEB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCEB8u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x00102728u; return; } if (c.pc != 0x001FCEB8u) [[unlikely]] return; }
L_001FCEB8:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3ECB0000u);  if (t) { goto L_001FCED8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBECB0000u);
    c.r[2].d[0] = c.r[2].d[0] | 20657ull;
    c.f[0] = c.r[2].w[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 240u), c.f[0]);  if (t) { goto L_001FCEE4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3ECB0000u);
    c.budget -= 1;
L_001FCED8:
    c.r[2].d[0] = c.r[2].d[0] | 20657ull;
    c.f[0] = c.r[2].w[0];
    st32((c.r[29].w[0] + 240u), c.f[0]);
    c.budget -= 3;
L_001FCEE4:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_001FCF1C; } }
    c.f[1] = ld32((c.r[17].w[0] + 116u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3ED50000u);
    c.r[2].d[0] = c.r[2].d[0] | 39741ull;
    c.f[2] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBE530000u);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.r[2].d[0] = c.r[2].d[0] | 56728ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.f[0]);  if (t) { goto L_001FCF48; } }
L_001FCF1C:
    c.f[1] = ld32((c.r[17].w[0] + 120u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3ED50000u);
    c.r[2].d[0] = c.r[2].d[0] | 39741ull;
    c.f[2] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBE530000u);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.r[2].d[0] = c.r[2].d[0] | 56728ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0]), c.f[0]);
    c.budget -= 11;
L_001FCF48:
    set32(c.r[2], c.r[29].w[0] + 248u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 240u);
    st32((c.r[30].w[0]), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCF6Cu); mmi::paddub(c.r[4], c.r[23], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x001FCF6Cu) [[unlikely]] return; }
L_001FCF6C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[6], c.r[2].w[0] - 25040u);
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[5], c.r[29].w[0] + 176u);
    set32(c.r[4], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCF88u); set32(c.r[7], 0u + 7u);  if (depth < kMaxDepth) unit_001B(c, 149u, depth + 1u); else { c.pc = 0x0016E7C0u; return; } if (c.pc != 0x001FCF88u) [[unlikely]] return; }
L_001FCF88:
    mmi::paddub(c.r[20], c.r[0], c.r[0]);
    mmi::paddub(c.r[21], c.r[0], c.r[0]);
    c.budget -= 2;
L_001FCF90:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_001FD1D0; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001FCFDC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCFA8u); c.f[12] = ld32((c.r[18].w[0] + 28u));  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x001FCFA8u) [[unlikely]] return; }
L_001FCFA8:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10620000u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[2].d[0] = c.r[2].d[0] | 19923ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] >> 31);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 6));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; set32(c.r[22], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_001FD0A4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001FCFDC:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_001FD030; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCFECu); c.f[12] = ld32((c.r[18].w[0] + 28u));  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x001FCFECu) [[unlikely]] return; }
L_001FCFEC:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    set32(c.r[2], 0u + 1000u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x51EB0000u);
    c.r[3].d[0] = c.hi.d[0];
    c.r[2].d[0] = c.r[2].d[0] | 34079ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] >> 31);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.budget -= 16;
    { const bool t = 0ull == 0ull; set32(c.r[22], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_001FD0A4; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_001FD030:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != c.r[2].d[0];  if (t) { goto L_001FD080; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD040u); c.f[12] = ld32((c.r[18].w[0] + 28u));  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x001FD040u) [[unlikely]] return; }
L_001FD040:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    set32(c.r[2], 0u + 100u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x66660000u);
    c.r[3].d[0] = c.hi.d[0];
    c.r[2].d[0] = c.r[2].d[0] | 26215ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] >> 31);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 16;
    { const bool t = 0ull == 0ull; set32(c.r[22], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_001FD0A4; } }
L_001FD080:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD088u); c.f[12] = ld32((c.r[18].w[0] + 28u));  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x001FD088u) [[unlikely]] return; }
L_001FD088:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    set32(c.r[2], 0u + 10u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[22].d[0] = c.hi.d[0];
    c.budget -= 7;
L_001FD0A4:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] != 0ull;  if (t) { goto L_001FD0C0; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == c.r[2].d[0];  if (t) { goto L_001FD0C0; } }
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { set32(c.r[20], c.r[20].w[0] + 1u);  goto L_001FD404; }
L_001FD0C0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 44u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[21], 0u + 1u);  if (t) { goto L_001FD0E0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBECB0000u);
    c.r[2].d[0] = c.r[2].d[0] | 20657ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 240u), c.r[2].w[0]);  if (t) { goto L_001FD148; } }
L_001FD0E0:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.f[0] = c.r[2].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D250000u);
    c.r[5].d[0] = c.r[2].d[0] | 58196ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBECB0000u);
    c.r[3].d[0] = c.r[2].d[0] | 20657ull;
    set32(c.r[2], 0u + 3u);
    c.f[2] = c.r[5].w[0];
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    set32(c.r[2], c.r[2].w[0] - c.r[20].w[0]);
    fpu_div(c, 1u, c.f[1], c.f[0]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 20;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 240u), c.f[0]);  if (t) { goto L_001FD148; } }
    c.f[0] = c.r[2].w[0];
    c.f[1] = ld32((c.r[29].w[0] + 240u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 240u), c.f[0]);
    c.budget -= 6;
L_001FD148:
    c.f[1] = ld32((c.r[17].w[0] + 116u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3ED50000u);
    c.r[2].d[0] = c.r[2].d[0] | 39741ull;
    c.f[2] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBE530000u);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.r[2].d[0] = c.r[2].d[0] | 56728ull;
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    set32(c.r[2], c.r[29].w[0] + 248u);
    st32((c.r[16].w[0]), c.f[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD188u); st32((c.r[2].w[0]), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x00102728u; return; } if (c.pc != 0x001FD188u) [[unlikely]] return; }
L_001FD188:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 240u);
    st32((c.r[30].w[0]), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD1A0u); mmi::paddub(c.r[4], c.r[23], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x001FD1A0u) [[unlikely]] return; }
L_001FD1A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 25024u);
    set32(c.r[3], c.r[22].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[5], c.r[29].w[0] + 176u);
    set32(c.r[7], 0u + 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD1C8u); set32(c.r[6], c.r[2].w[0] - 25040u);  if (depth < kMaxDepth) unit_001B(c, 149u, depth + 1u); else { c.pc = 0x0016E7C0u; return; } if (c.pc != 0x001FD1C8u) [[unlikely]] return; }
L_001FD1C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FD400; } }
L_001FD1D0:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001FD214; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD1E0u); c.f[12] = ld32((c.r[18].w[0] + 32u));  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x001FD1E0u) [[unlikely]] return; }
L_001FD1E0:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10620000u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[2].d[0] = c.r[2].d[0] | 19923ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] >> 31);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 6));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; set32(c.r[22], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_001FD2DC; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001FD214:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_001FD268; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD224u); c.f[12] = ld32((c.r[18].w[0] + 32u));  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x001FD224u) [[unlikely]] return; }
L_001FD224:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    set32(c.r[2], 0u + 1000u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x51EB0000u);
    c.r[3].d[0] = c.hi.d[0];
    c.r[2].d[0] = c.r[2].d[0] | 34079ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] >> 31);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.budget -= 16;
    { const bool t = 0ull == 0ull; set32(c.r[22], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_001FD2DC; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_001FD268:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != c.r[2].d[0];  if (t) { goto L_001FD2B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD278u); c.f[12] = ld32((c.r[18].w[0] + 32u));  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x001FD278u) [[unlikely]] return; }
L_001FD278:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    set32(c.r[2], 0u + 100u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x66660000u);
    c.r[3].d[0] = c.hi.d[0];
    c.r[2].d[0] = c.r[2].d[0] | 26215ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] >> 31);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 16;
    { const bool t = 0ull == 0ull; set32(c.r[22], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_001FD2DC; } }
L_001FD2B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD2C0u); c.f[12] = ld32((c.r[18].w[0] + 32u));  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x001FD2C0u) [[unlikely]] return; }
L_001FD2C0:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    set32(c.r[2], 0u + 10u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[22].d[0] = c.hi.d[0];
    c.budget -= 7;
L_001FD2DC:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] != 0ull;  if (t) { goto L_001FD2F8; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == c.r[2].d[0];  if (t) { goto L_001FD2F8; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_001FD400; } }
L_001FD2F8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 46u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[21], 0u + 1u);  if (t) { goto L_001FD318; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3ECB0000u);
    c.r[2].d[0] = c.r[2].d[0] | 20657ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 240u), c.r[2].w[0]);  if (t) { goto L_001FD380; } }
L_001FD318:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.f[0] = c.r[2].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D250000u);
    c.r[5].d[0] = c.r[2].d[0] | 58196ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3ECB0000u);
    c.r[3].d[0] = c.r[2].d[0] | 20657ull;
    set32(c.r[2], 0u + 3u);
    c.f[2] = c.r[5].w[0];
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    set32(c.r[2], c.r[2].w[0] - c.r[20].w[0]);
    fpu_div(c, 1u, c.f[1], c.f[0]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 20;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 240u), c.f[0]);  if (t) { goto L_001FD380; } }
    c.f[0] = c.r[2].w[0];
    c.f[1] = ld32((c.r[29].w[0] + 240u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 240u), c.f[0]);
    c.budget -= 6;
L_001FD380:
    c.f[1] = ld32((c.r[17].w[0] + 120u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3ED50000u);
    c.r[2].d[0] = c.r[2].d[0] | 39741ull;
    c.f[2] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBE530000u);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.r[2].d[0] = c.r[2].d[0] | 56728ull;
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    set32(c.r[2], c.r[29].w[0] + 248u);
    st32((c.r[16].w[0]), c.f[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD3C0u); st32((c.r[2].w[0]), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x00102728u; return; } if (c.pc != 0x001FD3C0u) [[unlikely]] return; }
L_001FD3C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 240u);
    st32((c.r[30].w[0]), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD3D8u); mmi::paddub(c.r[4], c.r[23], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x001FD3D8u) [[unlikely]] return; }
L_001FD3D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 25024u);
    set32(c.r[3], c.r[22].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[5], c.r[29].w[0] + 176u);
    set32(c.r[7], 0u + 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD400u); set32(c.r[6], c.r[2].w[0] - 25040u);  if (depth < kMaxDepth) unit_001B(c, 149u, depth + 1u); else { c.pc = 0x0016E7C0u; return; } if (c.pc != 0x001FD400u) [[unlikely]] return; }
L_001FD400:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_001FD404:
    c.r[2].d[0] = c.r[20].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FCF90u | kUnwind; return; } goto L_001FCF90; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[19].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FCE14u | kUnwind; return; } goto L_001FCE14; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 24960u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[29].w[0] + 320u);
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD448u); st128((c.r[3].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x00102728u; return; } if (c.pc != 0x001FD448u) [[unlikely]] return; }
L_001FD448:
    st32((c.r[29].w[0] + 304u), 0u);
    st32((c.r[29].w[0] + 308u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st32((c.r[29].w[0] + 312u), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 40u)));
    set32(c.r[6], 0u + 5u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD468u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 57u, depth + 1u); else { c.pc = 0x0013D0B0u; return; } if (c.pc != 0x001FD468u) [[unlikely]] return; }
L_001FD468:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001FD480; } }
    set32(c.r[5], c.r[29].w[0] + 256u);
    set32(c.r[6], c.r[29].w[0] + 320u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD480u); mmi::paddub(c.r[4], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_001B(c, 136u, depth + 1u); else { c.pc = 0x0016E520u; return; } if (c.pc != 0x001FD480u) [[unlikely]] return; }
L_001FD480:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 42u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD490u); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_000F(c, 57u, depth + 1u); else { c.pc = 0x0013D0B0u; return; } if (c.pc != 0x001FD490u) [[unlikely]] return; }
L_001FD490:
    mmi::paddub(c.r[4], c.r[2], c.r[0]);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001FD4A8; } }
    set32(c.r[5], c.r[29].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD4A8u); set32(c.r[6], c.r[29].w[0] + 320u);  if (depth < kMaxDepth) unit_001B(c, 136u, depth + 1u); else { c.pc = 0x0016E520u; return; } if (c.pc != 0x001FD4A8u) [[unlikely]] return; }
L_001FD4A8:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 336u);  c.pc = t; return; }
L_001FD4E0:
    set32(c.r[29], c.r[29].w[0] - 240u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[7], ld32((c.r[28].w[0] - 26272u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[6], 0u + 3u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[1].w[0] - 20364u), c.r[7].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), 0u);
    set32(c.r[2], 0u + 6u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[29].w[0] + 160u), 0u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[2], 0u + 198u);
    set32(c.r[16], c.r[4].w[0] + 320u);
    set32(c.r[20], c.r[29].w[0] + 160u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[29].w[0] + 164u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 168u), 0u);
    st32((c.r[29].w[0] + 176u), 0u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    mmi::paddub(c.r[22], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 198u);
    st32((c.r[29].w[0] + 180u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 184u), 0u);
    c.budget -= 37;
L_001FD574:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[21], c.r[29].w[0] + 192u);
    set32(c.r[18], c.r[2].w[0] - 24480u);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    mmi::paddub(c.r[19], c.r[21], c.r[0]);
    c.budget -= 5;
L_001FD588:
    c.f[1] = ld32((c.r[18].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD59Cu); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x001FD59Cu) [[unlikely]] return; }
L_001FD59C:
    set32(c.r[3], c.r[2].w[0] << 24);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[19].w[0]), c.r[2].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FD588u | kUnwind; return; } goto L_001FD588; } }
    set32(c.r[2], c.r[29].w[0] + 192u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 24736u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), c.r[20].w[0]);
    set32(c.r[2], 0u + 8u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20354u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD600u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001C(c, 21u, depth + 1u); else { c.pc = 0x00170680u; return; } if (c.pc != 0x001FD600u) [[unlikely]] return; }
L_001FD600:
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.r[2].d[0] = c.r[22].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FD574u | kUnwind; return; } goto L_001FD574; } }
    set32(c.r[2], 0u + 5u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[17], c.r[2].w[0] - 24480u);
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    c.budget -= 6;
L_001FD628:
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD63Cu); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x001FD63Cu) [[unlikely]] return; }
L_001FD63C:
    set32(c.r[3], c.r[2].w[0] << 24);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00800000u);
    c.r[2].d[0] = c.r[2].d[0] | 32896ull;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[21].w[0]), c.r[2].w[0]);
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 8ll ? 1ull : 0ull;
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[21], c.r[21].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FD628u | kUnwind; return; } goto L_001FD628; } }
    set32(c.r[2], c.r[29].w[0] + 192u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 24608u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), 0u);
    set32(c.r[2], 0u + 8u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20354u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD6A0u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001C(c, 21u, depth + 1u); else { c.pc = 0x00170680u; return; } if (c.pc != 0x001FD6A0u) [[unlikely]] return; }
L_001FD6A0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001FD830; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 25280u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 25284u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.f[0] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD6C4u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 291u, depth + 1u); else { c.pc = 0x0013B4D0u; return; } if (c.pc != 0x001FD6C4u) [[unlikely]] return; }
L_001FD6C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD6CCu); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x001FD6CCu) [[unlikely]] return; }
L_001FD6CC:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 25280u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 25284u)));
    set32(c.r[18], 0u + 6u);
    c.r[3].d[0] = c.r[6].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    if (c.r[3].d[0] == 0) c.r[18].d[0] = 0ull;
    c.r[1].d[0] = c.r[2].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[2].sd[0] < 30ll ? 1ull : 0ull;  if (t) { goto L_001FD6F8; } }
    set32(c.r[17], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u + 12u);  if (t) { goto L_001FD720; } }
L_001FD6F8:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[2].sd[0] < 60ll ? 1ull : 0ull;  if (t) { goto L_001FD708; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 2u);  if (t) { goto L_001FD720; } }
L_001FD708:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[17], 0u + 2u);  if (t) { goto L_001FD71C; } }
    set32(c.r[17], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 2u);  if (t) { goto L_001FD720; } }
L_001FD71C:
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.budget -= 1;
L_001FD720:
    c.r[1].d[0] = 0ll < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[19], c.r[0], c.r[0]);  if (t) { goto L_001FD830; } }
    set32(c.r[2], c.r[18].w[0] + c.r[19].w[0]);
    c.budget -= 1;
L_001FD730:
    set32(c.r[3], c.r[2].w[0] << 4);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 24944u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].d[0] = ld16((c.r[2].w[0]));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[10], c.r[29].w[0] + 230u);
    set32(c.r[3], c.r[29].w[0] + 132u);
    st16((c.r[29].w[0] + 228u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[9].d[0] = ld16((c.r[2].w[0] + 2u));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[7].w[0];
    set32(c.r[8], 0u + 128u);
    c.r[6].d[0] = c.r[6].d[0] | 65300ull;
    st16((c.r[10].w[0]), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 4u)));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 228u)));
    set32(c.r[7], c.r[7].w[0] + c.r[9].w[0]);
    st16((c.r[29].w[0] + 232u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[10].w[0])));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 6u)));
    set32(c.r[7], c.r[9].w[0] + c.r[7].w[0]);
    st16((c.r[29].w[0] + 234u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld16((c.r[2].w[0] + 8u));
    st32((c.r[29].w[0] + 128u), c.r[7].w[0]);
    c.r[7].d[0] = ld16((c.r[2].w[0] + 10u));
    st32((c.r[3].w[0]), c.r[7].w[0]);
    c.r[9].d[0] = ld16((c.r[2].w[0] + 12u));
    set32(c.r[7], ld32((c.r[29].w[0] + 128u)));
    set32(c.r[7], c.r[7].w[0] + c.r[9].w[0]);
    st32((c.r[29].w[0] + 144u), c.r[7].w[0]);
    c.r[7].d[0] = ld16((c.r[2].w[0] + 14u));
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    st32((c.r[29].w[0] + 148u), c.r[2].w[0]);
    st8((c.r[29].w[0] + 236u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st32((c.r[29].w[0] + 136u), c.r[6].w[0]);
    st8((c.r[29].w[0] + 237u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st32((c.r[29].w[0] + 152u), c.r[6].w[0]);
    st8((c.r[29].w[0] + 238u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.budget -= 43;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD7DCu); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x001FD7DCu) [[unlikely]] return; }
L_001FD7DC:
    st8((c.r[29].w[0] + 239u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 6u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[29].w[0] + 236u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 128u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 228u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20368u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD81Cu); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x001FD81Cu) [[unlikely]] return; }
L_001FD81C:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[3].d[0] = c.r[19].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], c.r[18].w[0] + c.r[19].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001FD730u | kUnwind; return; } goto L_001FD730; }
    c.budget -= 1;
L_001FD830:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_001FD860:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { goto L_001FD8A8; } }
L_001FD87C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD884u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_001B(c, 207u, depth + 1u); else { c.pc = 0x0016FA40u; return; } if (c.pc != 0x001FD884u) [[unlikely]] return; }
L_001FD884:
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[16], c.r[16].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 16u);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 8;
    { const bool t = c.r[16].d[0] != 0ull; st32((c.r[17].w[0] + 40u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FD87Cu | kUnwind; return; } goto L_001FD87C; } }
    c.budget -= 1;
L_001FD8A8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001FD8C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00860000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], c.r[2].w[0] + 26144u);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 7;
L_001FD8DC:
    set32(c.r[6], 0u + 8384u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD8ECu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x001FD8ECu) [[unlikely]] return; }
L_001FD8EC:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 348u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; st8((c.r[17].w[0] + 8386u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001FD970; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 9u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[17].w[0] + 8391u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 8384u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st8((c.r[17].w[0] + 8391u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 390u)));
    st8((c.r[17].w[0] + 8389u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 354u)));
    c.budget -= 16;
    { const bool t = c.r[16].d[0] != 0ull; st8((c.r[17].w[0] + 8387u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001FD968; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[3], c.r[3].w[0] - 14464u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 6u)));
    set32(c.r[4], c.r[4].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 8388u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001FD978; } }
L_001FD968:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 8388u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001FD978; } }
L_001FD970:
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_001FD978:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8386u)));
    c.r[3].d[0] = c.r[3].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_001FD994; }
    set32(c.r[3], 0u - 1u);
    st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 3;
L_001FD994:
    c.r[3].d[0] = c.r[16].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 8448u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FD8DCu | kUnwind; return; } goto L_001FD8DC; } }
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001FD9C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00860000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], c.r[3].w[0] + 26144u);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 7;
L_001FD9DC:
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(0u));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_001FDA0C; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8386u)));
    c.r[3].d[0] = c.r[3].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001FDA08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDA08u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0045(c, 119u, depth + 1u); else { c.pc = 0x00216410u; return; } if (c.pc != 0x001FDA08u) [[unlikely]] return; }
L_001FDA08:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001FDA0C:
    c.r[3].d[0] = c.r[16].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 8448u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FD9DCu | kUnwind; return; } goto L_001FD9DC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[16], c.r[3].w[0] + 26144u);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 3;
L_001FDA24:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_001FDA74; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[1].d[0] = c.r[3].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001FDA70; } }
    c.r[1].d[0] = c.r[3].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_001FDA64; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDA58u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_003F(c, 93u, depth + 1u); else { c.pc = 0x001FDAA0u; return; } if (c.pc != 0x001FDA58u) [[unlikely]] return; }
L_001FDA58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FDA70; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_001FDA64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDA6Cu);  if (depth < kMaxDepth) unit_003F(c, 123u, depth + 1u); else { c.pc = 0x001FE050u; return; } if (c.pc != 0x001FDA6Cu) [[unlikely]] return; }
L_001FDA6C:
    c.budget -= 1;
L_001FDA70:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_001FDA74:
    c.r[3].d[0] = c.r[17].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 8448u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FDA24u | kUnwind; return; } goto L_001FDA24; } }
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001FDAA0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 18944u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001FC000u < 16384u) { entry = entries_003F[(t - 0x001FC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001FDAC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[5], c.r[2].w[0] + 20960u);
    set32(c.r[3], 0u + 3u);
    set32(c.r[2], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[3], c.r[2].w[0] - 4768u);
    set32(c.r[6], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[8], c.r[2].w[0] + 11280u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 516u)));
    st32((c.r[4].w[0] + 8004u), c.r[2].w[0]);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8387u)));
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    set32(c.r[9], c.r[9].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[9].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[4].w[0] + 8000u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    st8((c.r[4].w[0] + 271u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8389u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8387u)));
    set32(c.r[5], c.r[9].w[0] << 3);
    set32(c.r[9], c.r[5].w[0] - c.r[9].w[0]);
    set32(c.r[5], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[9].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - c.r[9].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[8].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 48;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDB80u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0016(c, 134u, depth + 1u); else { c.pc = 0x0015B550u; return; } if (c.pc != 0x001FDB80u) [[unlikely]] return; }
L_001FDB80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDB88u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_001E(c, 118u, depth + 1u); else { c.pc = 0x0017A940u; return; } if (c.pc != 0x001FDB88u) [[unlikely]] return; }
L_001FDB88:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8389u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], c.r[2].w[0] + 15728u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[5], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 15;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001FDBD8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8387u)));
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8400u), c.r[2].w[0]);  if (t) { goto L_001FDBDC; } }
L_001FDBD8:
    st32((c.r[16].w[0] + 8400u), 0u);
    c.budget -= 1;
L_001FDBDC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], c.r[2].w[0] + 19248u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[4], c.r[2].w[0] + 7712u);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[16].w[0] + 8404u), c.r[3].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[7], c.r[2].w[0] + 7744u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[6], c.r[2].w[0] + 7360u);
    set32(c.r[4], c.r[4].w[0] + c.r[8].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x459C0000u);
    c.r[5].d[0] = c.r[2].d[0] | 16384ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC59C0000u);
    c.r[3].d[0] = c.r[2].d[0] | 16384ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st8((c.r[16].w[0] + 1600u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[2], c.r[2].w[0] + 7568u);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    st8((c.r[16].w[0] + 770u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[7], c.r[8].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 1);
    set32(c.r[7], c.r[6].w[0] + c.r[7].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    st8((c.r[16].w[0] + 8432u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 1u)));
    st8((c.r[16].w[0] + 8433u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 2u)));
    st8((c.r[16].w[0] + 8425u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 3u)));
    st8((c.r[16].w[0] + 8427u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 4u)));
    st8((c.r[16].w[0] + 8428u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 5u)));
    st8((c.r[16].w[0] + 8429u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[16].w[0] + 1232u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 1236u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[16].w[0] + 1276u), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.budget -= 54;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDCB4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 309u, depth + 1u); else { c.pc = 0x00303FD0u; return; } if (c.pc != 0x001FDCB4u) [[unlikely]] return; }
L_001FDCB4:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDCC0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 310u, depth + 1u); else { c.pc = 0x00303FF0u; return; } if (c.pc != 0x001FDCC0u) [[unlikely]] return; }
L_001FDCC0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    set32(c.r[5], 0u + 128u);
    set32(c.r[3], 0u + 240u);
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 268u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    st8((c.r[16].w[0] + 270u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[16].w[0] + 264u), c.r[16].w[0]);
    st8((c.r[16].w[0] + 576u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 579u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDCF4u); st8((c.r[16].w[0] + 956u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0073(c, 142u, depth + 1u); else { c.pc = 0x002CF1D0u; return; } if (c.pc != 0x001FDCF4u) [[unlikely]] return; }
L_001FDCF4:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], 0u + 10u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 373u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_001FDD2C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 19520u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDD28u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001FDD28u) [[unlikely]] return; }
L_001FDD28:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_001FDD2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDD34u);  if (depth < kMaxDepth) unit_003F(c, 162u, depth + 1u); else { c.pc = 0x001FE780u; return; } if (c.pc != 0x001FDD34u) [[unlikely]] return; }
L_001FDD34:
    st32((c.r[16].w[0] + 40u), 0u);
    st32((c.r[16].w[0] + 36u), 0u);
    st32((c.r[16].w[0] + 32u), 0u);
    st32((c.r[16].w[0] + 80u), 0u);
    st32((c.r[16].w[0] + 88u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00200000u);
    st32((c.r[16].w[0] + 104u), 0u);
    set32(c.r[2], c.r[2].w[0] - 3520u);
    st32((c.r[16].w[0] + 108u), 0u);
    st32((c.r[16].w[0] + 168u), c.r[2].w[0]);
    set32(c.r[2], 0u + 15u);
    st8((c.r[16].w[0] + 519u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 532u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 536u), static_cast<std::uint16_t>(0u));
    st8((c.r[16].w[0] + 539u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 572u), static_cast<std::uint16_t>(0u));
    mmi::paddub(c.r[3], c.r[0], c.r[0]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 18;
L_001FDD7C:
    set32(c.r[3], c.r[3].w[0] + 2u);
    st16((c.r[4].w[0] + 540u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 542u), static_cast<std::uint16_t>(0u));
    c.r[2].d[0] = c.r[3].sd[0] < 16ll ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FDD7Cu | kUnwind; return; } goto L_001FDD7C; } }
    st8((c.r[16].w[0] + 574u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 575u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 577u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 578u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 582u), static_cast<std::uint8_t>(0u));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], c.r[2].w[0] - 27424u);
    set32(c.r[4], 0u + 1u);
    st8((c.r[16].w[0] + 268u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st8((c.r[16].w[0] + 270u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[16].w[0] + 264u), c.r[16].w[0]);
    st8((c.r[16].w[0] + 736u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 741u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 758u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 748u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 803u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 274u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 812u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 806u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 810u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 728u), 0u);
    st32((c.r[16].w[0] + 732u), 0u);
    st32((c.r[16].w[0] + 1300u), 0u);
    st8((c.r[16].w[0] + 802u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 789u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 792u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 800u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 846u), static_cast<std::uint16_t>(0u));
    st8((c.r[16].w[0] + 755u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 1520u), 0u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[16].w[0] + 1260u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 1004u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 7780u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 7740u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 980u), c.r[2].w[0]);
    c.budget -= 44;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDE48u); st32((c.r[16].w[0] + 976u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x001FDE48u) [[unlikely]] return; }
L_001FDE48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDE50u); set32(c.r[4], c.r[16].w[0] + 8320u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x001FDE50u) [[unlikely]] return; }
L_001FDE50:
    c.f[12] = 0u;
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDE68u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 59u, depth + 1u); else { c.pc = 0x002CD7E0u; return; } if (c.pc != 0x001FDE68u) [[unlikely]] return; }
L_001FDE68:
    set32(c.r[4], c.r[16].w[0] + 704u);
    set32(c.r[6], 0u + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDE78u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x001FDE78u) [[unlikely]] return; }
L_001FDE78:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 19424u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDE98u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001FDE98u) [[unlikely]] return; }
L_001FDE98:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001FDEB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[3] = ld32((c.r[4].w[0] + 128u));
    c.f[2] = ld32((c.r[4].w[0] + 132u));
    c.f[1] = ld32((c.r[4].w[0] + 136u));
    c.f[0] = ld32((c.r[4].w[0] + 140u));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    st32((c.r[4].w[0] + 144u), c.f[3]);
    st32((c.r[4].w[0] + 148u), c.f[2]);
    st32((c.r[4].w[0] + 152u), c.f[1]);
    st32((c.r[4].w[0] + 156u), c.f[0]);
    c.f[3] = ld32((c.r[4].w[0] + 32u));
    c.f[2] = ld32((c.r[4].w[0] + 36u));
    c.f[1] = ld32((c.r[4].w[0] + 40u));
    c.f[0] = ld32((c.r[4].w[0] + 44u));
    st32((c.r[4].w[0] + 128u), c.f[3]);
    st32((c.r[4].w[0] + 132u), c.f[2]);
    st32((c.r[4].w[0] + 136u), c.f[1]);
    st32((c.r[4].w[0] + 140u), c.f[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 80u)));
    st32((c.r[4].w[0] + 1316u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 84u)));
    st32((c.r[4].w[0] + 1320u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 88u)));
    st32((c.r[4].w[0] + 1324u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 7752u));
    st32((c.r[4].w[0] + 7760u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 7792u));
    st32((c.r[4].w[0] + 7800u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 7756u));
    st32((c.r[4].w[0] + 7764u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 7796u));
    c.budget -= 35;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDF3Cu); st32((c.r[4].w[0] + 7804u), c.f[0]);  if (depth < kMaxDepth) unit_003F(c, 158u, depth + 1u); else { c.pc = 0x001FE6C0u; return; } if (c.pc != 0x001FDF3Cu) [[unlikely]] return; }
L_001FDF3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDF44u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_003F(c, 177u, depth + 1u); else { c.pc = 0x001FF040u; return; } if (c.pc != 0x001FDF44u) [[unlikely]] return; }
L_001FDF44:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 19328u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDF64u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001FDF64u) [[unlikely]] return; }
L_001FDF64:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[2], c.r[28].w[0] - 29656u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDF80u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001FDF80u) [[unlikely]] return; }
L_001FDF80:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 734u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 18928u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDFA0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001FDFA0u) [[unlikely]] return; }
L_001FDFA0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 735u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 18912u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDFC0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001FDFC0u) [[unlikely]] return; }
L_001FDFC0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 19232u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDFE0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001FDFE0u) [[unlikely]] return; }
L_001FDFE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDFE8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 160u, depth + 1u); else { c.pc = 0x002DDAF0u; return; } if (c.pc != 0x001FDFE8u) [[unlikely]] return; }
L_001FDFE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDFF0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 64u, depth + 1u); else { c.pc = 0x002D0540u; return; } if (c.pc != 0x001FDFF0u) [[unlikely]] return; }
L_001FDFF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDFF8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 237u, depth + 1u); else { c.pc = 0x002CFCE0u; return; } if (c.pc != 0x001FDFF8u) [[unlikely]] return; }
L_001FDFF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE000u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 316u, depth + 1u); else { c.pc = 0x0026FC50u; return; } if (c.pc != 0x001FE000u) [[unlikely]] return; }
L_001FE000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE008u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005D(c, 709u, depth + 1u); else { c.pc = 0x00276490u; return; } if (c.pc != 0x001FE008u) [[unlikely]] return; }
L_001FE008:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001FE020:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 742u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_001FE040:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_001FE050:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 18896u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001FC000u < 16384u) { entry = entries_003F[(t - 0x001FC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001FE070:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    set32(c.r[3], 0u + 3u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[16], c.r[6].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[2], c.r[2].w[0] + 21060u);
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    st32((c.r[4].w[0] + 8000u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 7776u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 7736u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 8004u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[5], c.r[2].w[0] - 4792u);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], c.r[2].w[0] + 16672u);
    set32(c.r[2], c.r[16].w[0] << 5);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[8].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    st8((c.r[4].w[0] + 271u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8389u)));
    set32(c.r[5], c.r[8].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[8].w[0]);
    set32(c.r[5], c.r[5].w[0] << 7);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 42;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE118u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0016(c, 134u, depth + 1u); else { c.pc = 0x0015B550u; return; } if (c.pc != 0x001FE118u) [[unlikely]] return; }
L_001FE118:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE120u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_001E(c, 118u, depth + 1u); else { c.pc = 0x0017A940u; return; } if (c.pc != 0x001FE120u) [[unlikely]] return; }
L_001FE120:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[2], c.r[2].w[0] + 20240u);
    set32(c.r[17], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[18].w[0] + 8400u), 0u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[2].w[0] + 7768u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[18].w[0] + 8404u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[2].w[0] + 7784u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st8((c.r[18].w[0] + 1600u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x459C0000u);
    c.r[4].d[0] = c.r[2].d[0] | 16384ull;
    st8((c.r[18].w[0] + 770u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC59C0000u);
    c.r[3].d[0] = c.r[2].d[0] | 16384ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[2].w[0] + 7664u);
    st32((c.r[18].w[0] + 1232u), c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[18].w[0] + 1236u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[5], 0u + 21u);
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[2].w[0] << 1);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[2].w[0] + 7488u);
    st32((c.r[18].w[0] + 1276u), c.r[4].w[0]);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    st8((c.r[18].w[0] + 8432u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    st8((c.r[18].w[0] + 8433u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    st8((c.r[18].w[0] + 8425u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    st8((c.r[18].w[0] + 8427u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    st8((c.r[18].w[0] + 8428u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    c.budget -= 49;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE1E4u); st8((c.r[18].w[0] + 8429u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0080(c, 309u, depth + 1u); else { c.pc = 0x00303FD0u; return; } if (c.pc != 0x001FE1E4u) [[unlikely]] return; }
L_001FE1E4:
    set32(c.r[5], 0u + 21u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE1F0u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 310u, depth + 1u); else { c.pc = 0x00303FF0u; return; } if (c.pc != 0x001FE1F0u) [[unlikely]] return; }
L_001FE1F0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8384u)));
    set32(c.r[5], 0u + 128u);
    set32(c.r[3], 0u + 240u);
    set32(c.r[2], 0u + 1u);
    st8((c.r[18].w[0] + 268u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1u)));
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    st8((c.r[18].w[0] + 270u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[18].w[0] + 264u), c.r[18].w[0]);
    st8((c.r[18].w[0] + 576u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[18].w[0] + 579u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE224u); st8((c.r[18].w[0] + 956u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0073(c, 142u, depth + 1u); else { c.pc = 0x002CF1D0u; return; } if (c.pc != 0x001FE224u) [[unlikely]] return; }
L_001FE224:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], 0u + 10u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 373u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (t) { goto L_001FE254; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 19136u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE250u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001FE250u) [[unlikely]] return; }
L_001FE250:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 1;
L_001FE254:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE25Cu);  if (depth < kMaxDepth) unit_003F(c, 169u, depth + 1u); else { c.pc = 0x001FEC30u; return; } if (c.pc != 0x001FE25Cu) [[unlikely]] return; }
L_001FE25C:
    st32((c.r[18].w[0] + 40u), 0u);
    st32((c.r[18].w[0] + 36u), 0u);
    st32((c.r[18].w[0] + 32u), 0u);
    st32((c.r[18].w[0] + 80u), 0u);
    st32((c.r[18].w[0] + 88u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002D0000u);
    st32((c.r[18].w[0] + 104u), 0u);
    set32(c.r[2], c.r[2].w[0] + 20832u);
    st32((c.r[18].w[0] + 108u), 0u);
    st32((c.r[18].w[0] + 168u), c.r[2].w[0]);
    set32(c.r[2], 0u + 15u);
    st8((c.r[18].w[0] + 519u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[18].w[0] + 532u), static_cast<std::uint8_t>(0u));
    st16((c.r[18].w[0] + 536u), static_cast<std::uint16_t>(0u));
    st8((c.r[18].w[0] + 539u), static_cast<std::uint8_t>(0u));
    st16((c.r[18].w[0] + 572u), static_cast<std::uint16_t>(0u));
    mmi::paddub(c.r[3], c.r[0], c.r[0]);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 18;
L_001FE2A4:
    set32(c.r[3], c.r[3].w[0] + 2u);
    st16((c.r[4].w[0] + 540u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 542u), static_cast<std::uint16_t>(0u));
    c.r[2].d[0] = c.r[3].sd[0] < 16ll ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FE2A4u | kUnwind; return; } goto L_001FE2A4; } }
    st8((c.r[18].w[0] + 574u), static_cast<std::uint8_t>(0u));
    st8((c.r[18].w[0] + 575u), static_cast<std::uint8_t>(0u));
    st8((c.r[18].w[0] + 577u), static_cast<std::uint8_t>(0u));
    st8((c.r[18].w[0] + 578u), static_cast<std::uint8_t>(0u));
    st8((c.r[18].w[0] + 582u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[8], 0u + 1u);
    c.f[12] = 0u;
    set32(c.r[2], c.r[2].w[0] - 27328u);
    st8((c.r[18].w[0] + 268u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1u)));
    set32(c.r[3], c.r[2].w[0] + c.r[17].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    st8((c.r[18].w[0] + 270u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st32((c.r[18].w[0] + 264u), c.r[18].w[0]);
    st8((c.r[18].w[0] + 736u), static_cast<std::uint8_t>(0u));
    st8((c.r[18].w[0] + 741u), static_cast<std::uint8_t>(0u));
    st8((c.r[18].w[0] + 758u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[18].w[0] + 748u), static_cast<std::uint8_t>(0u));
    st8((c.r[18].w[0] + 803u), static_cast<std::uint8_t>(0u));
    st8((c.r[18].w[0] + 274u), static_cast<std::uint8_t>(0u));
    st16((c.r[18].w[0] + 812u), static_cast<std::uint16_t>(0u));
    st16((c.r[18].w[0] + 806u), static_cast<std::uint16_t>(0u));
    st16((c.r[18].w[0] + 810u), static_cast<std::uint16_t>(0u));
    st32((c.r[18].w[0] + 728u), 0u);
    st32((c.r[18].w[0] + 732u), 0u);
    st32((c.r[18].w[0] + 1300u), 0u);
    st8((c.r[18].w[0] + 802u), static_cast<std::uint8_t>(0u));
    st8((c.r[18].w[0] + 789u), static_cast<std::uint8_t>(0u));
    st8((c.r[18].w[0] + 792u), static_cast<std::uint8_t>(0u));
    st8((c.r[18].w[0] + 800u), static_cast<std::uint8_t>(0u));
    st16((c.r[18].w[0] + 846u), static_cast<std::uint16_t>(0u));
    st8((c.r[18].w[0] + 755u), static_cast<std::uint8_t>(0u));
    st32((c.r[18].w[0] + 1520u), 0u);
    set32(c.r[3], ld32((c.r[3].w[0])));
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    st32((c.r[18].w[0] + 1260u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 1004u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 7780u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 7740u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 980u), c.r[2].w[0]);
    c.budget -= 47;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE37Cu); st32((c.r[18].w[0] + 976u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0073(c, 59u, depth + 1u); else { c.pc = 0x002CD7E0u; return; } if (c.pc != 0x001FE37Cu) [[unlikely]] return; }
L_001FE37C:
    set32(c.r[4], c.r[18].w[0] + 704u);
    set32(c.r[6], 0u + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE38Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x001FE38Cu) [[unlikely]] return; }
L_001FE38C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 19088u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE3A4u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001FE3A4u) [[unlikely]] return; }
L_001FE3A4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001FE3C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    c.f[3] = ld32((c.r[4].w[0] + 128u));
    c.f[2] = ld32((c.r[4].w[0] + 132u));
    c.f[1] = ld32((c.r[4].w[0] + 136u));
    c.f[0] = ld32((c.r[4].w[0] + 140u));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[16], c.r[2].w[0] - 32u);
    st32((c.r[4].w[0] + 144u), c.f[3]);
    st32((c.r[4].w[0] + 148u), c.f[2]);
    st32((c.r[4].w[0] + 152u), c.f[1]);
    st32((c.r[4].w[0] + 156u), c.f[0]);
    c.f[3] = ld32((c.r[4].w[0] + 32u));
    c.f[2] = ld32((c.r[4].w[0] + 36u));
    c.f[1] = ld32((c.r[4].w[0] + 40u));
    c.f[0] = ld32((c.r[4].w[0] + 44u));
    st32((c.r[4].w[0] + 128u), c.f[3]);
    st32((c.r[4].w[0] + 132u), c.f[2]);
    st32((c.r[4].w[0] + 136u), c.f[1]);
    st32((c.r[4].w[0] + 140u), c.f[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 80u)));
    st32((c.r[4].w[0] + 1316u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 84u)));
    st32((c.r[4].w[0] + 1320u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 88u)));
    st32((c.r[4].w[0] + 1324u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 7752u));
    st32((c.r[4].w[0] + 7760u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 7792u));
    st32((c.r[4].w[0] + 7800u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 7756u));
    st32((c.r[4].w[0] + 7764u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 7796u));
    c.budget -= 38;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE458u); st32((c.r[4].w[0] + 7804u), c.f[0]);  if (depth < kMaxDepth) unit_003F(c, 158u, depth + 1u); else { c.pc = 0x001FE6C0u; return; } if (c.pc != 0x001FE458u) [[unlikely]] return; }
L_001FE458:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE460u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_003F(c, 177u, depth + 1u); else { c.pc = 0x001FF040u; return; } if (c.pc != 0x001FE460u) [[unlikely]] return; }
L_001FE460:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 19040u);
    set32(c.r[16], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE47Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001FE47Cu) [[unlikely]] return; }
L_001FE47C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 733u)));
    set32(c.r[2], c.r[28].w[0] - 29648u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE498u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001FE498u) [[unlikely]] return; }
L_001FE498:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 734u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 18880u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE4B8u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001FE4B8u) [[unlikely]] return; }
L_001FE4B8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 735u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 18864u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE4D8u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001FE4D8u) [[unlikely]] return; }
L_001FE4D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 18992u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE4F0u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001FE4F0u) [[unlikely]] return; }
L_001FE4F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE4F8u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 160u, depth + 1u); else { c.pc = 0x002DDAF0u; return; } if (c.pc != 0x001FE4F8u) [[unlikely]] return; }
L_001FE4F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE500u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 133u, depth + 1u); else { c.pc = 0x00265F60u; return; } if (c.pc != 0x001FE500u) [[unlikely]] return; }
L_001FE500:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE508u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_005C(c, 162u, depth + 1u); else { c.pc = 0x00270D00u; return; } if (c.pc != 0x001FE508u) [[unlikely]] return; }
L_001FE508:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8386u)));
    set32(c.r[2], 0u + 38u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_001FE524; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE520u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_005C(c, 163u, depth + 1u); else { c.pc = 0x00270D30u; return; } if (c.pc != 0x001FE520u) [[unlikely]] return; }
L_001FE520:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_001FE524:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE52Cu);  if (depth < kMaxDepth) unit_005D(c, 709u, depth + 1u); else { c.pc = 0x00276490u; return; } if (c.pc != 0x001FE52Cu) [[unlikely]] return; }
L_001FE52C:
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001FE550:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001FE560:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_001FE598; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE584u);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x001FE584u) [[unlikely]] return; }
L_001FE584:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001FE5AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_001FE5F0; } }
L_001FE598:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE5A0u);  if (depth < kMaxDepth) unit_0059(c, 93u, depth + 1u); else { c.pc = 0x00264EF0u; return; } if (c.pc != 0x001FE5A0u) [[unlikely]] return; }
L_001FE5A0:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001FE5EC; } }
L_001FE5AC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7932u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001FE5DC; } }
    st8((c.r[16].w[0] + 7932u), static_cast<std::uint8_t>(0u));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7933u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7934u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7935u)));
    c.f[12] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE5D4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 59u, depth + 1u); else { c.pc = 0x002CD7E0u; return; } if (c.pc != 0x001FE5D4u) [[unlikely]] return; }
L_001FE5D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FE5EC; } }
L_001FE5DC:
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 7935u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 7934u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 7933u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_001FE5EC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_001FE5F0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001FE600:
    c.budget -= 2;
    { set32(c.r[5], ld32((c.r[4].w[0] + 84u)));  [[clang::musttail]] return unit_0075(c, 125u, depth); }
L_001FE610:
    c.budget -= 2;
    { set32(c.r[5], ld32((c.r[4].w[0] + 1312u)));  [[clang::musttail]] return unit_0075(c, 125u, depth); }
L_001FE620:
    set32(c.r[5], ld32((c.r[4].w[0] + 80u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 92u)));
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 84u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 96u)));
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0] + 84u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 88u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 100u)));
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 88u), c.r[3].w[0]);  c.pc = t; return; }
L_001FE660:
    set32(c.r[6], ld32((c.r[4].w[0] + 80u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 92u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = 0u;
    set32(c.r[3], c.r[6].w[0] + c.r[5].w[0]);
    st32((c.r[4].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 84u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 96u)));
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0] + 84u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 88u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 100u)));
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0] + 88u), c.r[3].w[0]);
    c.f[2] = ld32((c.r[4].w[0] + 1224u));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 21;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 1224u), c.f[1]);  if (t) { goto L_001FE6B8; } }
    st8((c.r[4].w[0] + 734u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_001FE6B8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001FE6C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 783u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_001FE6E0; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 783u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001FE6E0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 274u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001FE738; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 278u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001FE768; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 373u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[5], 0u + 12u);  if (t) { goto L_001FE728; } }
    set32(c.r[6], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE71Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 25u, depth + 1u); else { c.pc = 0x00198370u; return; } if (c.pc != 0x001FE71Cu) [[unlikely]] return; }
L_001FE71C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 274u)));  if (t) { goto L_001FE76C; } }
    set32(c.r[5], 0u + 12u);
    c.budget -= 1;
L_001FE728:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE730u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x001FE730u) [[unlikely]] return; }
L_001FE730:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FE768; } }
L_001FE738:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 278u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001FE768; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 373u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001FE768; } }
    set32(c.r[6], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE768u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 29u, depth + 1u); else { c.pc = 0x00198460u; return; } if (c.pc != 0x001FE768u) [[unlikely]] return; }
L_001FE768:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 274u)));
    c.budget -= 1;
L_001FE76C:
    st8((c.r[16].w[0] + 278u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001FE780:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    set32(c.r[3], c.r[2].w[0] + 4544u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8391u)));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[6], c.r[6].w[0] << 3);
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[10], c.r[3].w[0] + c.r[6].w[0]);  if (t) { goto L_001FE7C0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8389u)));
    set32(c.r[10], c.r[10].w[0] + 2u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 531u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001FE7D0; } }
L_001FE7C0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0])));
    st8((c.r[16].w[0] + 8389u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[10], c.r[10].w[0] + 2u);
    st8((c.r[16].w[0] + 531u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_001FE7D0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[10].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[8], c.r[2].w[0] + 6960u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[9], c.r[2].w[0] + 4928u);
    st16((c.r[16].w[0] + 842u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 840u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[10].w[0] + 2u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[6], c.r[2].w[0] + 5616u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[7], c.r[2].w[0] + 6192u);
    st16((c.r[16].w[0] + 844u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[2].w[0] + 784u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[2].w[0] + 2000u);
    st8((c.r[16].w[0] + 518u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[10], c.r[11].w[0] << 1);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    set32(c.r[10], c.r[10].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + c.r[10].w[0]);
    c.f[0] = ld32((c.r[8].w[0]));
    st32((c.r[16].w[0] + 8008u), c.f[0]);
    c.f[0] = ld32((c.r[8].w[0] + 4u));
    st32((c.r[16].w[0] + 8024u), c.f[0]);
    c.f[0] = ld32((c.r[8].w[0] + 8u));
    st32((c.r[16].w[0] + 8028u), c.f[0]);
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8391u)));
    set32(c.r[10], c.r[10].w[0] << 2);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    set32(c.r[8], c.r[8].w[0] << 1);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0])));
    st16((c.r[16].w[0] + 516u), static_cast<std::uint16_t>(c.r[8].w[0]));
    st16((c.r[16].w[0] + 514u), static_cast<std::uint16_t>(c.r[8].w[0]));
    st16((c.r[16].w[0] + 512u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8387u)));
    set32(c.r[8], c.r[9].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[8], c.r[10].w[0] + c.r[8].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[8], ld32((c.r[6].w[0])));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0])));
    st16((c.r[16].w[0] + 1576u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0] + 2u)));
    st16((c.r[16].w[0] + 1582u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st16((c.r[16].w[0] + 1580u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st16((c.r[16].w[0] + 1578u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0] + 4u)));
    st16((c.r[16].w[0] + 1584u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st16((c.r[16].w[0] + 1586u), static_cast<std::uint16_t>(0u));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0] + 6u)));
    st16((c.r[16].w[0] + 1588u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0] + 8u)));
    st16((c.r[16].w[0] + 1594u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st16((c.r[16].w[0] + 1592u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st16((c.r[16].w[0] + 1590u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0] + 10u)));
    st16((c.r[16].w[0] + 1596u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st16((c.r[16].w[0] + 1598u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 260u), 0u);
    st32((c.r[16].w[0] + 256u), 0u);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8387u)));
    set32(c.r[8], c.r[9].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.f[0] = ld32((c.r[6].w[0]));
    st32((c.r[16].w[0] + 8408u), c.f[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[6], c.r[6].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[16].w[0] + 1060u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    st32((c.r[16].w[0] + 1064u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[16].w[0] + 992u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[16].w[0] + 996u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[16].w[0] + 1000u), c.f[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 368u)));
    c.budget -= 98;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001FE974; } }
    c.f[0] = ld32((c.r[16].w[0] + 1000u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3ECC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 1000u), c.f[0]);
    c.budget -= 7;
L_001FE974:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[2].w[0] + 2512u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[6], c.r[2].w[0] + 1456u);
    mmi::paddub(c.r[9], c.r[16], c.r[0]);
    set32(c.r[2], c.r[7].w[0] << 2);
    set32(c.r[8], c.r[3].w[0] + c.r[2].w[0]);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[2].w[0] + 1056u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[2].w[0] + 2656u);
    st16((c.r[16].w[0] + 852u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0] + 2u)));
    st16((c.r[16].w[0] + 854u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    mmi::paddub(c.r[8], c.r[0], c.r[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.f[0] = ld32((c.r[6].w[0]));
    st32((c.r[16].w[0] + 1036u), c.f[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[6], c.r[7].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[16].w[0] + 1048u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    st32((c.r[16].w[0] + 1040u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    st32((c.r[16].w[0] + 1044u), c.f[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[3], c.r[6].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 38;
L_001FEA0C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[2].d[0] = c.r[8].sd[0] < 9ll ? 1ull : 0ull;
    st16((c.r[9].w[0] + 856u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[6], c.r[6].w[0] + 2u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[9], c.r[9].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FEA0Cu | kUnwind; return; } goto L_001FEA0C; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[2].w[0] - 4224u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[2].w[0] - 4080u);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    mmi::paddub(c.r[6], c.r[16], c.r[0]);
    st32((c.r[16].w[0] + 1136u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 14;
L_001FEA60:
    c.f[0] = ld32((c.r[3].w[0]));
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[2].d[0] = c.r[7].sd[0] < 8ll ? 1ull : 0ull;
    st32((c.r[6].w[0] + 1072u), c.f[0]);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FEA60u | kUnwind; return; } goto L_001FEA60; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[2].w[0] - 528u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[2].w[0] - 240u);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    mmi::paddub(c.r[6], c.r[16], c.r[0]);
    st32((c.r[16].w[0] + 1140u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] + 32u);
    c.budget -= 15;
L_001FEAB8:
    c.f[0] = ld32((c.r[3].w[0]));
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[2].d[0] = c.r[7].sd[0] < 8ll ? 1ull : 0ull;
    st32((c.r[6].w[0] + 1104u), c.f[0]);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FEAB8u | kUnwind; return; } goto L_001FEAB8; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[2].w[0] - 384u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[2].w[0] + 1600u);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    mmi::paddub(c.r[8], c.r[0], c.r[0]);
    mmi::paddub(c.r[7], c.r[16], c.r[0]);
    st32((c.r[16].w[0] + 1144u), c.f[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 16;
L_001FEB14:
    c.f[0] = ld32((c.r[3].w[0]));
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[2].d[0] = c.r[8].sd[0] < 3ll ? 1ull : 0ull;
    st32((c.r[7].w[0] + 1024u), c.f[0]);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FEB14u | kUnwind; return; } goto L_001FEB14; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[6], c.r[2].w[0] + 3248u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[2].w[0] + 3840u);
    set32(c.r[2], c.r[7].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[7], c.r[6].w[0] + c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.f[1] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47800000u);
    c.f[2] = c.r[2].w[0];
    st16((c.r[16].w[0] + 818u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st16((c.r[16].w[0] + 816u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 2u)));
    st16((c.r[16].w[0] + 830u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 4u)));
    st16((c.r[16].w[0] + 832u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 6u)));
    st16((c.r[16].w[0] + 836u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 8u)));
    st16((c.r[16].w[0] + 820u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 10u)));
    st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 12u)));
    st16((c.r[16].w[0] + 824u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 14u)));
    st16((c.r[16].w[0] + 826u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 14u)));
    st16((c.r[16].w[0] + 828u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[17], c.r[3].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[17].w[0]));
    st32((c.r[16].w[0] + 1248u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    st32((c.r[16].w[0] + 1252u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.budget -= 45;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEBE4u); c.f[12] = fp::mul(c.f[2], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x001FEBE4u) [[unlikely]] return; }
L_001FEBE4:
    st16((c.r[16].w[0] + 1256u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[1] = ld32((c.r[17].w[0] + 12u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.f[2] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47800000u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 1u, c.f[1], c.f[2]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEC14u); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x001FEC14u) [[unlikely]] return; }
L_001FEC14:
    st16((c.r[16].w[0] + 1258u), static_cast<std::uint16_t>(c.r[2].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001FEC30:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[6], c.r[3].w[0] + 4720u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8391u)));
    set32(c.r[5], c.r[5].w[0] - 32u);
    set32(c.r[8], c.r[5].w[0] << 3);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[10], c.r[6].w[0] + c.r[8].w[0]);  if (t) { goto L_001FEC60; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8389u)));
    set32(c.r[10], c.r[10].w[0] + 2u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 531u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001FEC70; } }
L_001FEC60:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0])));
    st8((c.r[4].w[0] + 8389u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[10], c.r[10].w[0] + 2u);
    st8((c.r[4].w[0] + 531u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_001FEC70:
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[10].w[0])));
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[6], c.r[3].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st16((c.r[4].w[0] + 842u), static_cast<std::uint16_t>(c.r[7].w[0]));
    st16((c.r[4].w[0] + 840u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[10].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] + 7216u);
    set32(c.r[11], c.r[3].w[0] + c.r[6].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st16((c.r[4].w[0] + 844u), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 4u)));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[9], c.r[9].w[0] + 6048u);
    set32(c.r[7], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 5024u);
    st8((c.r[4].w[0] + 518u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.f[0] = ld32((c.r[11].w[0]));
    c.r[10].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[10], c.r[10].w[0] + 6624u);
    set32(c.r[15], c.r[10].w[0] + c.r[7].w[0]);
    st32((c.r[4].w[0] + 8008u), c.f[0]);
    c.f[0] = ld32((c.r[11].w[0] + 4u));
    c.r[10].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[14], c.r[10].w[0] - 27888u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[13], c.r[10].w[0] - 27884u);
    st32((c.r[4].w[0] + 8024u), c.f[0]);
    c.f[0] = ld32((c.r[11].w[0] + 8u));
    c.r[10].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[10], c.r[10].w[0] + 960u);
    set32(c.r[12], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[11], c.r[10].w[0] + c.r[8].w[0]);
    st32((c.r[4].w[0] + 8028u), c.f[0]);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[10], c.r[10].w[0] + 2336u);
    c.r[24].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8391u)));
    set32(c.r[10], c.r[10].w[0] + c.r[12].w[0]);
    set32(c.r[9], c.r[9].w[0] + c.r[6].w[0]);
    set32(c.r[12], c.r[24].w[0] << 1);
    set32(c.r[3], c.r[12].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    st16((c.r[4].w[0] + 516u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 514u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 512u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0])));
    st16((c.r[4].w[0] + 1576u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0] + 2u)));
    st16((c.r[4].w[0] + 1582u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 1580u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 1578u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0] + 4u)));
    st16((c.r[4].w[0] + 1584u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 1586u), static_cast<std::uint16_t>(0u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0] + 6u)));
    st16((c.r[4].w[0] + 1588u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0] + 8u)));
    st16((c.r[4].w[0] + 1594u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 1592u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 1590u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0] + 10u)));
    st16((c.r[4].w[0] + 1596u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 1598u), static_cast<std::uint16_t>(0u));
    c.f[0] = ld32((c.r[15].w[0]));
    st32((c.r[4].w[0] + 8408u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[14].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[4].w[0] + 256u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[13].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[4].w[0] + 260u), c.f[0]);
    c.f[0] = ld32((c.r[11].w[0]));
    st32((c.r[4].w[0] + 1060u), c.f[0]);
    c.f[0] = ld32((c.r[11].w[0] + 4u));
    st32((c.r[4].w[0] + 1064u), c.f[0]);
    c.f[0] = ld32((c.r[10].w[0]));
    st32((c.r[4].w[0] + 992u), c.f[0]);
    c.f[0] = ld32((c.r[10].w[0] + 4u));
    st32((c.r[4].w[0] + 996u), c.f[0]);
    c.f[0] = ld32((c.r[10].w[0] + 8u));
    st32((c.r[4].w[0] + 1000u), c.f[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 368u)));
    c.budget -= 91;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001FEDF8; } }
    c.f[0] = ld32((c.r[4].w[0] + 1000u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3ECC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 1000u), c.f[0]);
    c.budget -= 7;
L_001FEDF8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[3].w[0] + 2608u);
    set32(c.r[11], c.r[3].w[0] + c.r[7].w[0]);
    c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[11].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[3].w[0] + 1552u);
    set32(c.r[9], c.r[3].w[0] + c.r[7].w[0]);
    st16((c.r[4].w[0] + 852u), static_cast<std::uint16_t>(c.r[10].w[0]));
    c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[11].w[0] + 2u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[3].w[0] + 1312u);
    set32(c.r[14], c.r[3].w[0] + c.r[6].w[0]);
    st16((c.r[4].w[0] + 854u), static_cast<std::uint16_t>(c.r[10].w[0]));
    c.f[0] = ld32((c.r[9].w[0]));
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    mmi::paddub(c.r[11], c.r[0], c.r[0]);
    st32((c.r[4].w[0] + 1036u), c.f[0]);
    c.f[0] = ld32((c.r[14].w[0]));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[9], c.r[9].w[0] + 3040u);
    set32(c.r[13], c.r[9].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0] + 1048u), c.f[0]);
    c.f[0] = ld32((c.r[14].w[0] + 4u));
    mmi::paddub(c.r[12], c.r[4], c.r[0]);
    st32((c.r[4].w[0] + 1040u), c.f[0]);
    c.f[0] = ld32((c.r[14].w[0] + 8u));
    st32((c.r[4].w[0] + 1044u), c.f[0]);
    c.budget -= 29;
L_001FEE6C:
    c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[13].w[0])));
    set32(c.r[11], c.r[11].w[0] + 1u);
    c.r[9].d[0] = c.r[11].sd[0] < 9ll ? 1ull : 0ull;
    st16((c.r[12].w[0] + 856u), static_cast<std::uint16_t>(c.r[10].w[0]));
    set32(c.r[13], c.r[13].w[0] + 2u);
    c.budget -= 7;
    { const bool t = c.r[9].d[0] != 0ull; set32(c.r[12], c.r[12].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FEE6Cu | kUnwind; return; } goto L_001FEE6C; } }
    set32(c.r[10], c.r[5].w[0] << 5);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], c.r[5].w[0] - 4128u);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    c.f[0] = ld32((c.r[5].w[0]));
    mmi::paddub(c.r[12], c.r[0], c.r[0]);
    mmi::paddub(c.r[9], c.r[4], c.r[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], c.r[5].w[0] - 3408u);
    set32(c.r[11], c.r[5].w[0] + c.r[10].w[0]);
    st32((c.r[4].w[0] + 1136u), c.f[0]);
    c.budget -= 11;
L_001FEEB4:
    c.f[0] = ld32((c.r[11].w[0]));
    set32(c.r[12], c.r[12].w[0] + 1u);
    c.r[5].d[0] = c.r[12].sd[0] < 8ll ? 1ull : 0ull;
    st32((c.r[9].w[0] + 1072u), c.f[0]);
    set32(c.r[11], c.r[11].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[9], c.r[9].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FEEB4u | kUnwind; return; } goto L_001FEEB4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], c.r[5].w[0] - 432u);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    c.f[0] = ld32((c.r[5].w[0]));
    mmi::paddub(c.r[11], c.r[0], c.r[0]);
    mmi::paddub(c.r[9], c.r[4], c.r[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], c.r[5].w[0] + 432u);
    set32(c.r[5], c.r[5].w[0] + c.r[10].w[0]);
    set32(c.r[10], c.r[5].w[0] + 32u);
    st32((c.r[4].w[0] + 1140u), c.f[0]);
    c.budget -= 11;
L_001FEEFC:
    c.f[0] = ld32((c.r[10].w[0]));
    set32(c.r[11], c.r[11].w[0] + 1u);
    c.r[5].d[0] = c.r[11].sd[0] < 8ll ? 1ull : 0ull;
    st32((c.r[9].w[0] + 1104u), c.f[0]);
    set32(c.r[10], c.r[10].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[9], c.r[9].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FEEFCu | kUnwind; return; } goto L_001FEEFC; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], c.r[5].w[0] - 288u);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    c.f[0] = ld32((c.r[5].w[0]));
    mmi::paddub(c.r[9], c.r[0], c.r[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], c.r[5].w[0] + 1856u);
    set32(c.r[7], c.r[5].w[0] + c.r[6].w[0]);
    st32((c.r[4].w[0] + 1144u), c.f[0]);
    mmi::paddub(c.r[6], c.r[4], c.r[0]);
    c.budget -= 10;
L_001FEF40:
    c.f[0] = ld32((c.r[7].w[0]));
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.r[5].d[0] = c.r[9].sd[0] < 3ll ? 1ull : 0ull;
    st32((c.r[6].w[0] + 1024u), c.f[0]);
    set32(c.r[7], c.r[7].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FEF40u | kUnwind; return; } goto L_001FEF40; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], c.r[5].w[0] + 3632u);
    set32(c.r[6], c.r[5].w[0] + c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[3].w[0] + 9344u);
    set32(c.r[7], c.r[3].w[0] + c.r[8].w[0]);
    st16((c.r[4].w[0] + 818u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[4].w[0] + 816u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 2u)));
    st16((c.r[4].w[0] + 830u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 4u)));
    st16((c.r[4].w[0] + 832u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 6u)));
    st16((c.r[4].w[0] + 836u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 8u)));
    st16((c.r[4].w[0] + 820u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 10u)));
    st16((c.r[4].w[0] + 822u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 12u)));
    st16((c.r[4].w[0] + 824u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 14u)));
    st16((c.r[4].w[0] + 826u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 14u)));
    st16((c.r[4].w[0] + 828u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[7].w[0]));
    st32((c.r[4].w[0] + 1148u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 4u));
    c.budget -= 30;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 1152u), c.f[0]);  c.pc = t; return; }
L_001FEFE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    st8((c.r[4].w[0] + 320u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 738u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001FF020; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[4].w[0] + 738u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_001FF020; } }
    set32(c.r[5], 0u + 6u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF020u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 29u, depth + 1u); else { c.pc = 0x00198460u; return; } if (c.pc != 0x001FF020u) [[unlikely]] return; }
L_001FF020:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001FF030:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001FF040:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 6u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 373u)));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001FF22C; } }
    c.f[3] = ld32((c.r[17].w[0] + 32u));
    c.f[2] = ld32((c.r[17].w[0] + 36u));
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 44u));
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[16], c.r[29].w[0] + 52u);
    st32((c.r[4].w[0]), c.f[3]);
    st32((c.r[4].w[0] + 4u), c.f[2]);
    st32((c.r[4].w[0] + 8u), c.f[1]);
    st32((c.r[4].w[0] + 12u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 8008u));
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0]), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 18;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001FF104; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF0B8u);  if (depth < kMaxDepth) unit_0075(c, 244u, depth + 1u); else { c.pc = 0x002D78B0u; return; } if (c.pc != 0x001FF0B8u) [[unlikely]] return; }
L_001FF0B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_001FF0F4; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 812u)));
    set32(c.r[4], 0u - 513u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[3].w[0] + 2008u);
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    st16((c.r[17].w[0] + 812u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8386u)));
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1000u), c.f[0]);  if (t) { goto L_001FF22C; } }
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_001FF0F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF0FCu);  if (depth < kMaxDepth) unit_004D(c, 274u, depth + 1u); else { c.pc = 0x00236A40u; return; } if (c.pc != 0x001FF0FCu) [[unlikely]] return; }
L_001FF0FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_001FF230; } }
L_001FF104:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF10Cu);  if (depth < kMaxDepth) unit_0075(c, 244u, depth + 1u); else { c.pc = 0x002D78B0u; return; } if (c.pc != 0x001FF10Cu) [[unlikely]] return; }
L_001FF10C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[17].w[0] + 32u);  if (t) { goto L_001FF150; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 812u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    c.f[1] = c.r[2].w[0];
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] | 512ull;
    st16((c.r[17].w[0] + 812u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 52u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 52u), c.f[0]);
    st8((c.r[17].w[0] + 782u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 15;
L_001FF150:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF158u);  if (depth < kMaxDepth) unit_0075(c, 244u, depth + 1u); else { c.pc = 0x002D78B0u; return; } if (c.pc != 0x001FF158u) [[unlikely]] return; }
L_001FF158:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001FF16C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 781u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001FF1BC; } }
L_001FF16C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 783u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_001FF1B8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 736u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[5], c.r[17].w[0] + 32u);  if (t) { goto L_001FF198; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_001FF1AC; } }
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 1;
L_001FF198:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF1A0u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_004E(c, 49u, depth + 1u); else { c.pc = 0x00238CA0u; return; } if (c.pc != 0x001FF1A0u) [[unlikely]] return; }
L_001FF1A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FF1B4; } }
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_001FF1AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF1B4u);  if (depth < kMaxDepth) unit_004F(c, 47u, depth + 1u); else { c.pc = 0x0023CC70u; return; } if (c.pc != 0x001FF1B4u) [[unlikely]] return; }
L_001FF1B4:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_001FF1B8:
    st8((c.r[17].w[0] + 783u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_001FF1BC:
    c.f[0] = ld32((c.r[17].w[0] + 2096u));
    set32(c.r[4], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 2100u));
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 2104u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF1DCu); st32((c.r[29].w[0] + 56u), c.f[0]);  if (depth < kMaxDepth) unit_0075(c, 244u, depth + 1u); else { c.pc = 0x002D78B0u; return; } if (c.pc != 0x001FF1DCu) [[unlikely]] return; }
L_001FF1DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001FF20C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 781u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001FF22C; } }
    set32(c.r[5], c.r[29].w[0] + 48u);
    st8((c.r[17].w[0] + 781u), static_cast<std::uint8_t>(0u));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF204u); st32((c.r[16].w[0]), 0u);  if (depth < kMaxDepth) unit_004E(c, 151u, depth + 1u); else { c.pc = 0x002395D0u; return; } if (c.pc != 0x001FF204u) [[unlikely]] return; }
L_001FF204:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FF22C; } }
L_001FF20C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 782u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001FF22C; } }
    set32(c.r[5], c.r[29].w[0] + 48u);
    st8((c.r[17].w[0] + 782u), static_cast<std::uint8_t>(0u));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF22Cu); st32((c.r[16].w[0]), 0u);  if (depth < kMaxDepth) unit_004D(c, 313u, depth + 1u); else { c.pc = 0x00237910u; return; } if (c.pc != 0x001FF22Cu) [[unlikely]] return; }
L_001FF22C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_001FF230:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001FF240:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8384u)));
    set32(c.r[3], 0u + 26064u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[2], c.r[2].w[0] + 27600u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF270u); set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0027(c, 85u, depth + 1u); else { c.pc = 0x0019EA80u; return; } if (c.pc != 0x001FF270u) [[unlikely]] return; }
L_001FF270:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF27Cu); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0027(c, 90u, depth + 1u); else { c.pc = 0x0019EB50u; return; } if (c.pc != 0x001FF27Cu) [[unlikely]] return; }
L_001FF27C:
    c.r[3].d[0] = ld64((c.r[17].w[0] + 26032u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001FF2BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF290u); set32(c.r[4], c.r[17].w[0] + 544u);  if (depth < kMaxDepth) unit_001C(c, 204u, depth + 1u); else { c.pc = 0x00173320u; return; } if (c.pc != 0x001FF290u) [[unlikely]] return; }
L_001FF290:
    st16((c.r[17].w[0] + 26054u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF2A4u); c.r[5].d[0] = c.r[2].d[0] | 4896ull;  if (depth < kMaxDepth) unit_0027(c, 67u, depth + 1u); else { c.pc = 0x0019E7A0u; return; } if (c.pc != 0x001FF2A4u) [[unlikely]] return; }
L_001FF2A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF2ACu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0027(c, 149u, depth + 1u); else { c.pc = 0x0019F980u; return; } if (c.pc != 0x001FF2ACu) [[unlikely]] return; }
L_001FF2AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF2B4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 272u, depth + 1u); else { c.pc = 0x0013B1A0u; return; } if (c.pc != 0x001FF2B4u) [[unlikely]] return; }
L_001FF2B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF2BCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0028(c, 108u, depth + 1u); else { c.pc = 0x001A19B0u; return; } if (c.pc != 0x001FF2BCu) [[unlikely]] return; }
L_001FF2BC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001FF2D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.r[5].d[0] = c.r[16].d[0] << 48;
    c.budget -= 8;
L_001FF2F0:
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF2FCu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_003D(c, 200u, depth + 1u); else { c.pc = 0x001F61F0u; return; } if (c.pc != 0x001FF2FCu) [[unlikely]] return; }
L_001FF2FC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[5].d[0] = c.r[16].d[0] << 48;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FF2F0u | kUnwind; return; } goto L_001FF2F0; } }
    st8((c.r[17].w[0] + 332u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 333u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 334u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 335u), static_cast<std::uint8_t>(0u));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[16], c.r[17].w[0] + 320u);  if (t) { goto L_001FF7B4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 300u);  if (t) { goto L_001FF374; } }
    set32(c.r[4], c.r[5].w[0] << 3);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8390u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] - 11440u);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 2));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    st16((c.r[17].w[0] + 516u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[17].w[0] + 514u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[17].w[0] + 512u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 300u);
    c.budget -= 13;
L_001FF374:
    st16((c.r[16].w[0] + 80u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 82u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 600u);
    st16((c.r[16].w[0] + 84u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 900u);
    st16((c.r[16].w[0] + 86u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(13ll) ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001FF6D8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], c.r[4].w[0] + 24720u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x001FC000u < 16384u) { entry = entries_003F[(t - 0x001FC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001FF3B8:
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 90u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 95u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 91u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 117u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 116u), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 118u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001FF6D8; } }
L_001FF3DC:
    set32(c.r[3], 0u + 2u);
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 90u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 95u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 91u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 117u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 116u), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 118u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001FF6D8; } }
L_001FF400:
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 90u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.f[1] = ld32((c.r[17].w[0] + 32u));
    set32(c.r[5], 0u + 10u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.f[0] = ld32((c.r[2].w[0] + 592u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 1760u), c.f[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[2].w[0] + 596u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 1764u), c.f[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = ld32((c.r[2].w[0] + 600u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 1768u), c.f[0]);
    st8((c.r[16].w[0] + 95u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 91u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 117u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 116u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 118u), static_cast<std::uint8_t>(0u));
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF470u); st8((c.r[17].w[0] + 274u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0026(c, 25u, depth + 1u); else { c.pc = 0x00198370u; return; } if (c.pc != 0x001FF470u) [[unlikely]] return; }
L_001FF470:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));  if (t) { goto L_001FF6DC; } }
L_001FF478:
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 90u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.f[1] = ld32((c.r[17].w[0] + 32u));
    set32(c.r[5], 0u + 10u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.f[0] = ld32((c.r[2].w[0] + 592u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 1760u), c.f[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[2].w[0] + 596u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 1764u), c.f[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = ld32((c.r[2].w[0] + 600u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 1768u), c.f[0]);
    st8((c.r[16].w[0] + 95u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 91u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 117u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 116u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 118u), static_cast<std::uint8_t>(0u));
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF4ECu); st8((c.r[17].w[0] + 274u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0026(c, 25u, depth + 1u); else { c.pc = 0x00198370u; return; } if (c.pc != 0x001FF4ECu) [[unlikely]] return; }
L_001FF4EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FF6D8; } }
L_001FF4F4:
    set32(c.r[3], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 11232u);
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 96u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 11136u);
    st32((c.r[16].w[0] + 100u), c.r[2].w[0]);
    st8((c.r[16].w[0] + 93u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 90u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 95u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 91u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 117u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 116u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 118u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], 0u + 10u);
    st8((c.r[17].w[0] + 274u), static_cast<std::uint8_t>(c.r[3].w[0]));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF544u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 25u, depth + 1u); else { c.pc = 0x00198370u; return; } if (c.pc != 0x001FF544u) [[unlikely]] return; }
L_001FF544:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FF6D8; } }
L_001FF54C:
    set32(c.r[2], 0u + 2u);
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 95u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 90u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 91u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 92u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 116u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43160000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF57Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0014(c, 151u, depth + 1u); else { c.pc = 0x00152F90u; return; } if (c.pc != 0x001FF57Cu) [[unlikely]] return; }
L_001FF57C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);  if (t) { goto L_001FF598; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E190000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), c.r[2].w[0]);  if (t) { goto L_001FF59C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.budget -= 1;
L_001FF598:
    st32((c.r[17].w[0] + 104u), c.r[2].w[0]);
    c.budget -= 1;
L_001FF59C:
    st32((c.r[17].w[0] + 52u), 0u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF5ACu); st32((c.r[16].w[0] + 104u), 0u);  if (depth < kMaxDepth) unit_0045(c, 185u, depth + 1u); else { c.pc = 0x00217370u; return; } if (c.pc != 0x001FF5ACu) [[unlikely]] return; }
L_001FF5AC:
    set32(c.r[2], 0u + 2u);
    st32((c.r[16].w[0] + 108u), c.f[0]);
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 117u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 118u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[5], 0u + 10u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    st8((c.r[2].w[0] + 652u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF5DCu); st8((c.r[17].w[0] + 274u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0026(c, 25u, depth + 1u); else { c.pc = 0x00198370u; return; } if (c.pc != 0x001FF5DCu) [[unlikely]] return; }
L_001FF5DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FF6D8; } }
L_001FF5E4:
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 90u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 95u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 91u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 117u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 116u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 118u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001FF6D8; } }
L_001FF604:
    set32(c.r[2], 0u + 2u);
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 95u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 90u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 91u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], 0u + 1u);
    st8((c.r[16].w[0] + 92u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 116u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 117u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 118u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43160000u);
    c.f[12] = c.r[2].w[0];
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF644u); st8((c.r[3].w[0] + 652u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (depth < kMaxDepth) unit_0014(c, 151u, depth + 1u); else { c.pc = 0x00152F90u; return; } if (c.pc != 0x001FF644u) [[unlikely]] return; }
L_001FF644:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);  if (t) { goto L_001FF660; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E190000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), c.r[2].w[0]);  if (t) { goto L_001FF664; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.budget -= 1;
L_001FF660:
    st32((c.r[17].w[0] + 104u), c.r[2].w[0]);
    c.budget -= 1;
L_001FF664:
    st32((c.r[17].w[0] + 52u), 0u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF674u); st32((c.r[16].w[0] + 104u), 0u);  if (depth < kMaxDepth) unit_0045(c, 186u, depth + 1u); else { c.pc = 0x002173D0u; return; } if (c.pc != 0x001FF674u) [[unlikely]] return; }
L_001FF674:
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 112u), c.f[0]);
    set32(c.r[5], 0u + 10u);
    st8((c.r[17].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF690u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 25u, depth + 1u); else { c.pc = 0x00198370u; return; } if (c.pc != 0x001FF690u) [[unlikely]] return; }
L_001FF690:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FF6D8; } }
L_001FF698:
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 95u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 90u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 91u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 92u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 117u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 116u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 118u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[5], 0u + 10u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    st8((c.r[2].w[0] + 652u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF6D8u); st8((c.r[17].w[0] + 274u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0026(c, 25u, depth + 1u); else { c.pc = 0x00198370u; return; } if (c.pc != 0x001FF6D8u) [[unlikely]] return; }
L_001FF6D8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    c.budget -= 1;
L_001FF6DC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] - 11104u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[17].w[0] + 1260u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 95u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001FF750; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    st32((c.r[17].w[0] + 104u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 92u), 0u);
    st32((c.r[17].w[0] + 96u), 0u);
    st32((c.r[17].w[0] + 100u), 0u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 93u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.f[3] = ld32((c.r[4].w[0]));
    c.f[2] = ld32((c.r[4].w[0] + 4u));
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    st32((c.r[17].w[0] + 1760u), c.f[3]);
    st32((c.r[17].w[0] + 1764u), c.f[2]);
    st32((c.r[17].w[0] + 1768u), c.f[1]);
    st32((c.r[17].w[0] + 1772u), c.f[0]);
    st8((c.r[16].w[0] + 94u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 92u), static_cast<std::uint8_t>(0u));
    c.budget -= 20;
L_001FF750:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_001FF84C; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF768u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0078(c, 319u, depth + 1u); else { c.pc = 0x002E3640u; return; } if (c.pc != 0x001FF768u) [[unlikely]] return; }
L_001FF768:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[18], 0u + 1u);
    c.budget -= 3;
L_001FF774:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    set32(c.r[2], c.r[18].w[0] + 3u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] << 56;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF798u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);  if (depth < kMaxDepth) unit_0078(c, 319u, depth + 1u); else { c.pc = 0x002E3640u; return; } if (c.pc != 0x001FF798u) [[unlikely]] return; }
L_001FF798:
    set32(c.r[18], c.r[18].w[0] + 1u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[3].d[0] = c.r[18].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FF774u | kUnwind; return; } goto L_001FF774; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);  if (t) { goto L_001FF850; } }
L_001FF7B4:
    set32(c.r[3], 0u + 1000u);
    st16((c.r[17].w[0] + 512u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[17].w[0] + 514u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[17].w[0] + 516u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 80u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 82u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 84u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 86u), static_cast<std::uint16_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 9u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 256u)));
    c.budget -= 13;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 4u);  if (t) { goto L_001FF814; } }
    set32(c.r[3], 0u + 3u);
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] - 11104u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1260u), c.r[3].w[0]);  if (t) { goto L_001FF834; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 1;
L_001FF814:
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] - 11104u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[17].w[0] + 1260u), c.r[3].w[0]);
    c.budget -= 8;
L_001FF834:
    set32(c.r[3], 0u - 9284u);
    st32((c.r[17].w[0] + 4612u), c.r[3].w[0]);
    set32(c.r[3], 0u + 20206u);
    st32((c.r[17].w[0] + 4624u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 104u), 0u);
    st32((c.r[17].w[0] + 52u), 0u);
    c.budget -= 6;
L_001FF84C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    c.budget -= 1;
L_001FF850:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001FF870:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[3], 0u - 1u);
    c.budget -= 10;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[16], c.r[17].w[0] + 320u);  if (t) { goto L_001FFE04; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 95u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001FF930; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 641u)));
    c.r[3].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001FF8C0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 280u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_001FF8C0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001FFAA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF8D0u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0040(c, 14u, depth + 1u); else { c.pc = 0x00200050u; return; } if (c.pc != 0x001FF8D0u) [[unlikely]] return; }
L_001FF8D0:
    set32(c.r[3], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 92u)));
    c.r[5].d[0] = 0ull | 65535ull;
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[17].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    st32((c.r[17].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[17].w[0] + 84u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 84u));
    st32((c.r[17].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[17].w[0] + 88u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 88u));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF928u); st32((c.r[17].w[0] + 88u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 232u, depth + 1u); else { c.pc = 0x0024B250u; return; } if (c.pc != 0x001FF928u) [[unlikely]] return; }
L_001FF928:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 514u)));  if (t) { goto L_001FFAAC; } }
L_001FF930:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 116u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001FFA60; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 641u)));
    c.r[3].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001FF958; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 280u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_001FF958:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001FF968; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF968u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0052(c, 232u, depth + 1u); else { c.pc = 0x0024B250u; return; } if (c.pc != 0x001FF968u) [[unlikely]] return; }
L_001FF968:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 117u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001FF9A0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.f[3] = ld32((c.r[17].w[0] + 32u));
    c.f[2] = ld32((c.r[17].w[0] + 36u));
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 44u));
    st32((c.r[3].w[0] + 592u), c.f[3]);
    st32((c.r[3].w[0] + 596u), c.f[2]);
    st32((c.r[3].w[0] + 600u), c.f[1]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 604u), c.f[0]);  if (t) { goto L_001FFAA8; } }
L_001FF9A0:
    c.f[5] = ld32((c.r[17].w[0] + 32u));
    c.f[4] = ld32((c.r[17].w[0] + 128u));
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 136u));
    c.f[3] = ld32((c.r[17].w[0] + 36u));
    c.f[2] = ld32((c.r[17].w[0] + 132u));
    c.f[4] = fp::sub(c.f[5], c.f[4]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[4], c.f[4]);
    c.f[20] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF9D0u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x001FF9D0u) [[unlikely]] return; }
L_001FF9D0:
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF9DCu); c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x001FF9DCu) [[unlikely]] return; }
L_001FF9DC:
    c.f[1] = ld32((c.r[16].w[0] + 104u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 118u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001FFA30; } }
    c.f[1] = ld32((c.r[16].w[0] + 104u));
    c.f[0] = ld32((c.r[16].w[0] + 108u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001FFAA8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 117u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001FFA24; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 117u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001FFAA8; } }
L_001FFA24:
    st8((c.r[16].w[0] + 116u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), 0u);  if (t) { goto L_001FFAA8; } }
L_001FFA30:
    c.f[1] = ld32((c.r[16].w[0] + 104u));
    c.f[0] = ld32((c.r[16].w[0] + 112u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001FFAA8; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFA58u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 9u, depth + 1u); else { c.pc = 0x00304280u; return; } if (c.pc != 0x001FFA58u) [[unlikely]] return; }
L_001FFA58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);  if (t) { goto L_001FFFC8; } }
L_001FFA60:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 90u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001FFAA8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.f[1] = ld32((c.r[17].w[0] + 1760u));
    c.f[0] = ld32((c.r[3].w[0] + 592u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 32u), c.f[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.f[1] = ld32((c.r[17].w[0] + 1764u));
    c.f[0] = ld32((c.r[3].w[0] + 596u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 36u), c.f[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.f[1] = ld32((c.r[17].w[0] + 1768u));
    c.f[0] = ld32((c.r[3].w[0] + 600u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 40u), c.f[0]);
    c.budget -= 15;
L_001FFAA8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 514u)));
    c.budget -= 1;
L_001FFAAC:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_001FFC5C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_001FFC5C; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001FFB08; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 514u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_001FFB00; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001FFAFC; } }
    st32((c.r[16].w[0]), 0u);
    set32(c.r[3], ld32((c.r[17].w[0] + 1260u)));
    set32(c.r[2], 0u - 513u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1260u), c.r[2].w[0]);  if (t) { goto L_001FFB08; } }
L_001FFAFC:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_001FFB00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFB08u);  if (depth < kMaxDepth) unit_0040(c, 55u, depth + 1u); else { c.pc = 0x00200770u; return; } if (c.pc != 0x001FFB08u) [[unlikely]] return; }
L_001FFB08:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001FFBB0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001FFB60; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 514u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_001FFB58; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001FFB54; } }
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[3], ld32((c.r[17].w[0] + 1260u)));
    set32(c.r[2], 0u - 3073u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1260u), c.r[2].w[0]);  if (t) { goto L_001FFB60; } }
L_001FFB54:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_001FFB58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFB60u);  if (depth < kMaxDepth) unit_0040(c, 67u, depth + 1u); else { c.pc = 0x00200A10u; return; } if (c.pc != 0x001FFB60u) [[unlikely]] return; }
L_001FFB60:
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_001FFC4C; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 514u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_001FFBA0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001FFB9C; } }
    st32((c.r[16].w[0] + 8u), 0u);
    set32(c.r[3], ld32((c.r[17].w[0] + 1260u)));
    set32(c.r[2], 0u - 12289u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1260u), c.r[2].w[0]);  if (t) { goto L_001FFC48; } }
L_001FFB9C:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_001FFBA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFBA8u);  if (depth < kMaxDepth) unit_0040(c, 78u, depth + 1u); else { c.pc = 0x00200CA0u; return; } if (c.pc != 0x001FFBA8u) [[unlikely]] return; }
L_001FFBA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FFC48; } }
L_001FFBB0:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001FFBFC; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 514u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_001FFBF4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001FFBF0; } }
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[3], ld32((c.r[17].w[0] + 1260u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 16383ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1260u), c.r[2].w[0]);  if (t) { goto L_001FFBFC; } }
L_001FFBF0:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_001FFBF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFBFCu);  if (depth < kMaxDepth) unit_0040(c, 89u, depth + 1u); else { c.pc = 0x00200F30u; return; } if (c.pc != 0x001FFBFCu) [[unlikely]] return; }
L_001FFBFC:
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001FFC48; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 514u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_001FFC40; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001FFC3C; } }
    st32((c.r[16].w[0] + 8u), 0u);
    set32(c.r[3], ld32((c.r[17].w[0] + 1260u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1260u), c.r[2].w[0]);  if (t) { goto L_001FFC48; } }
L_001FFC3C:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_001FFC40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFC48u);  if (depth < kMaxDepth) unit_0040(c, 100u, depth + 1u); else { c.pc = 0x002011C0u; return; } if (c.pc != 0x001FFC48u) [[unlikely]] return; }
L_001FFC48:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_001FFC4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFC54u);  if (depth < kMaxDepth) unit_0040(c, 113u, depth + 1u); else { c.pc = 0x00201450u; return; } if (c.pc != 0x001FFC54u) [[unlikely]] return; }
L_001FFC54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFC5Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0040(c, 120u, depth + 1u); else { c.pc = 0x00201630u; return; } if (c.pc != 0x001FFC5Cu) [[unlikely]] return; }
L_001FFC5C:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[5], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_001FFFC4; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 529u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001FFFC4; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 91u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001FFFC4; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 92u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_001FFD68; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001FFCD8; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x43160000u);  goto L_001FFCB4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FFFC4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43160000u);
    c.budget -= 1;
L_001FFCB4:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFCC0u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0014(c, 151u, depth + 1u); else { c.pc = 0x00152F90u; return; } if (c.pc != 0x001FFCC0u) [[unlikely]] return; }
L_001FFCC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001FFFC4; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 92u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 92u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001FFFC4; } }
L_001FFCD8:
    c.f[1] = ld32((c.r[17].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E190000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3CCC0000u);  goto L_001FFD08; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), c.r[2].w[0]);  if (t) { goto L_001FFD1C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3CCC0000u);
    c.budget -= 1;
L_001FFD08:
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.budget -= 5;
L_001FFD1C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43960000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFD2Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0014(c, 156u, depth + 1u); else { c.pc = 0x001530A0u; return; } if (c.pc != 0x001FFD2Cu) [[unlikely]] return; }
L_001FFD2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001FFFC4; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 92u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 29598u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 92u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[17].w[0] + 532u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[17].w[0] + 531u));
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001FFFC4; } }
L_001FFD68:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 640u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001FFDBC; } }
    c.f[1] = ld32((c.r[17].w[0] + 104u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[3].sd[0] = static_cast<std::int32_t>(0x3CCC0000u);  goto L_001FFDA4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), c.r[3].w[0]);  if (t) { goto L_001FFFC4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3CCC0000u);
    c.budget -= 1;
L_001FFDA4:
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), c.f[0]);  if (t) { goto L_001FFFC4; } }
L_001FFDBC:
    c.f[1] = ld32((c.r[17].w[0] + 104u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E190000u);
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    if (!(c.fcr31 & kFpuCondition)) { c.r[3].sd[0] = static_cast<std::int32_t>(0x3CCC0000u);  goto L_001FFDEC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), c.r[3].w[0]);  if (t) { goto L_001FFFC4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3CCC0000u);
    c.budget -= 1;
L_001FFDEC:
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), c.f[0]);  if (t) { goto L_001FFFC4; } }
L_001FFE04:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001FFE7C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001FFE30; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001FFFC4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FFFC4; } }
L_001FFE30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFE38u); set32(c.r[4], ld32((c.r[17].w[0] + 84u)));  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x001FFE38u) [[unlikely]] return; }
L_001FFE38:
    c.f[2] = ld32((c.r[17].w[0] + 104u));
    c.f[1] = ld32((c.r[17].w[0] + 32u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 32u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 52u));
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 36u), c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFE64u); set32(c.r[4], ld32((c.r[17].w[0] + 84u)));  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x001FFE64u) [[unlikely]] return; }
L_001FFE64:
    c.f[2] = ld32((c.r[17].w[0] + 104u));
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 40u), c.f[0]);  if (t) { goto L_001FFFC4; } }
L_001FFE7C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 18u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_001FFEB0; }
    set32(c.r[2], 0u + 90u);
    set32(c.r[5], 0u + 84u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFE98u); st8((c.r[16].w[0] + 18u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0079(c, 182u, depth + 1u); else { c.pc = 0x002E62A0u; return; } if (c.pc != 0x001FFE98u) [[unlikely]] return; }
L_001FFE98:
    set32(c.r[5], 0u + 85u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFEA4u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0079(c, 182u, depth + 1u); else { c.pc = 0x002E62A0u; return; } if (c.pc != 0x001FFEA4u) [[unlikely]] return; }
L_001FFEA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 19u)));  if (t) { goto L_001FFEB8; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_001FFEB0:
    st8((c.r[16].w[0] + 18u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 19u)));
    c.budget -= 2;
L_001FFEB8:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_001FFEEC; }
    set32(c.r[2], 0u + 90u);
    set32(c.r[5], 0u + 86u);
    st8((c.r[16].w[0] + 19u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFED4u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0079(c, 182u, depth + 1u); else { c.pc = 0x002E62A0u; return; } if (c.pc != 0x001FFED4u) [[unlikely]] return; }
L_001FFED4:
    set32(c.r[5], 0u + 87u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFEE0u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0079(c, 182u, depth + 1u); else { c.pc = 0x002E62A0u; return; } if (c.pc != 0x001FFEE0u) [[unlikely]] return; }
L_001FFEE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 20u)));  if (t) { goto L_001FFEF4; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_001FFEEC:
    st8((c.r[16].w[0] + 19u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 20u)));
    c.budget -= 2;
L_001FFEF4:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_001FFF50; }
    set32(c.r[2], 0u + 120u);
    st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 25u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFF10u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_007E(c, 176u, depth + 1u); else { c.pc = 0x002F9760u; return; } if (c.pc != 0x001FFF10u) [[unlikely]] return; }
L_001FFF10:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 25u)));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[5].d[0] = c.r[2].d[0] << 56;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFF28u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);  if (depth < kMaxDepth) unit_007E(c, 176u, depth + 1u); else { c.pc = 0x002F9760u; return; } if (c.pc != 0x001FFF28u) [[unlikely]] return; }
L_001FFF28:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 25u)));
    set32(c.r[3], c.r[3].w[0] + 2u);
    st8((c.r[16].w[0] + 25u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 25u)));
    c.r[3].d[0] = c.r[3].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001FFF54; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 25u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001FFF54; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_001FFF50:
    st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_001FFF54:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 21u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_001FFFC0; }
    set32(c.r[2], 0u + 120u);
    st8((c.r[16].w[0] + 21u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 26u)));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 12u);
    c.r[5].d[0] = c.r[2].d[0] << 56;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFF80u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);  if (depth < kMaxDepth) unit_007E(c, 176u, depth + 1u); else { c.pc = 0x002F9760u; return; } if (c.pc != 0x001FFF80u) [[unlikely]] return; }
L_001FFF80:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 26u)));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 13u);
    c.r[5].d[0] = c.r[2].d[0] << 56;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFF98u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);  if (depth < kMaxDepth) unit_007E(c, 176u, depth + 1u); else { c.pc = 0x002F9760u; return; } if (c.pc != 0x001FFF98u) [[unlikely]] return; }
L_001FFF98:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 26u)));
    set32(c.r[3], c.r[3].w[0] + 2u);
    st8((c.r[16].w[0] + 26u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 26u)));
    c.r[3].d[0] = c.r[3].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001FFFC4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 26u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001FFFC4; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_001FFFC0:
    st8((c.r[16].w[0] + 21u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_001FFFC4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    c.budget -= 1;
L_001FFFC8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001FFFE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
L_001FFFF0:
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(12ll) ? 1ull : 0ull;
    c.budget -= 3;
L_001FFFFC:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0040(c, 13u, depth); } }
    [[clang::musttail]] return unit_0040(c, 2u, depth);
}

}
