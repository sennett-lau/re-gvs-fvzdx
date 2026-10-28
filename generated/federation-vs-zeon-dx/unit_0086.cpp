#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0086[4096] = {
    1, 2, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 7, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 16, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    18, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0,
    22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 24, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0,
    30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 33, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 36, 0, 0, 0, 0, 0, 37, 0, 38, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 41, 0, 42, 0, 43, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 46, 0, 47, 0, 48, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 50, 0, 0, 51, 0, 52, 0, 0, 0, 0, 0, 53, 0, 54, 0, 0, 55, 0, 0, 56, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 58,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0,
    62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 65, 0, 66, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0,
    69, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0,
    0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 77, 0, 0, 78, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83,
    0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 86, 0, 87, 0, 88, 0, 89, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0,
    0, 0, 0, 0, 100, 0, 101, 0, 102, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 106, 0, 107, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0,
    0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0,
    0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 134, 0,
    0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 141, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 144, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 147, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0,
    0, 0, 0, 151, 0, 0, 152, 0, 153, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 156, 0, 0, 157, 0, 0, 0, 0, 158, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 162, 0, 0, 0, 163, 0,
    0, 0, 164, 0, 165, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    169, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 172, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0,
    0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 177, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 183, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0,
    189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 191, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 195, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    198, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 205, 0, 0, 206, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 209, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 212,
    0, 0, 213, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0,
    0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222,
    0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 224, 0, 0, 225, 0, 226, 0, 0, 0, 0, 0, 227, 0, 228, 0, 0, 0, 0, 0, 229, 0,
    0, 0, 0, 230, 0, 0, 0, 231, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233,
    0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 237, 0, 0,
    0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 243, 0, 0, 0,
    0, 244, 0, 0, 0, 245, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0,
    0, 0, 0, 0, 251, 0, 0, 252, 0, 253, 0, 0, 0, 0, 254, 0, 255, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0,
    0, 0, 0, 0, 260, 0, 0, 261, 0, 262, 0, 0, 0, 0, 263, 0, 264, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 268, 0, 0, 269, 0, 270, 0, 0, 0,
    0, 271, 0, 272, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 281, 0, 0, 0,
    0, 0, 0, 282, 0, 0, 283, 0, 284, 0, 0, 0, 0, 0, 285, 0, 286, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 288, 0, 0, 0, 289,
    0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 292, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 301, 0, 0, 0, 0, 302, 0, 0, 0, 303, 0, 0,
    304, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0,
    309, 0, 0, 310, 0, 311, 0, 0, 0, 0, 312, 0, 313, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0086(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00318000;
    case 2u: goto L_00318004;
    case 3u: goto L_00318014;
    case 4u: goto L_00318038;
    case 5u: goto L_00318048;
    case 6u: goto L_00318054;
    case 7u: goto L_00318084;
    case 8u: goto L_0031809C;
    case 9u: goto L_003180D4;
    case 10u: goto L_003180EC;
    case 11u: goto L_00318140;
    case 12u: goto L_0031825C;
    case 13u: goto L_003182D8;
    case 14u: goto L_003182E8;
    case 15u: goto L_00318334;
    case 16u: goto L_00318344;
    case 17u: goto L_00318350;
    case 18u: goto L_00318380;
    case 19u: goto L_00318398;
    case 20u: goto L_003183D0;
    case 21u: goto L_003183E8;
    case 22u: goto L_00318400;
    case 23u: goto L_00318440;
    case 24u: goto L_00318448;
    case 25u: goto L_00318460;
    case 26u: goto L_003184A0;
    case 27u: goto L_003184C0;
    case 28u: goto L_003184CC;
    case 29u: goto L_003184E0;
    case 30u: goto L_00318500;
    case 31u: goto L_003185AC;
    case 32u: goto L_003185B4;
    case 33u: goto L_00318710;
    case 34u: goto L_0031871C;
    case 35u: goto L_00318750;
    case 36u: goto L_00318758;
    case 37u: goto L_00318770;
    case 38u: goto L_00318778;
    case 39u: goto L_003187A0;
    case 40u: goto L_00318858;
    case 41u: goto L_00318860;
    case 42u: goto L_00318868;
    case 43u: goto L_00318870;
    case 44u: goto L_003188A0;
    case 45u: goto L_003188D8;
    case 46u: goto L_003188E0;
    case 47u: goto L_003188E8;
    case 48u: goto L_003188F0;
    case 49u: goto L_00318938;
    case 50u: goto L_00318A84;
    case 51u: goto L_00318A90;
    case 52u: goto L_00318A98;
    case 53u: goto L_00318AB0;
    case 54u: goto L_00318AB8;
    case 55u: goto L_00318AC4;
    case 56u: goto L_00318AD0;
    case 57u: goto L_00318AE4;
    case 58u: goto L_00318AFC;
    case 59u: goto L_00318B24;
    case 60u: goto L_00318B50;
    case 61u: goto L_00318B70;
    case 62u: goto L_00318B80;
    case 63u: goto L_00318BB4;
    case 64u: goto L_00318BD8;
    case 65u: goto L_00318BE0;
    case 66u: goto L_00318BE8;
    case 67u: goto L_00318C28;
    case 68u: goto L_00318C5C;
    case 69u: goto L_00318C80;
    case 70u: goto L_00318CA0;
    case 71u: goto L_00318D3C;
    case 72u: goto L_00318D70;
    case 73u: goto L_00318D90;
    case 74u: goto L_00318DC4;
    case 75u: goto L_00318E00;
    case 76u: goto L_00318E2C;
    case 77u: goto L_00318E40;
    case 78u: goto L_00318E4C;
    case 79u: goto L_00318E54;
    case 80u: goto L_00318E88;
    case 81u: goto L_00318EB0;
    case 82u: goto L_00318FAC;
    case 83u: goto L_00318FFC;
    case 84u: goto L_00319010;
    case 85u: goto L_00319084;
    case 86u: goto L_0031911C;
    case 87u: goto L_00319124;
    case 88u: goto L_0031912C;
    case 89u: goto L_00319134;
    case 90u: goto L_00319150;
    case 91u: goto L_00319254;
    case 92u: goto L_00319264;
    case 93u: goto L_003192BC;
    case 94u: goto L_003192CC;
    case 95u: goto L_0031937C;
    case 96u: goto L_003193A8;
    case 97u: goto L_003193B8;
    case 98u: goto L_003193C8;
    case 99u: goto L_003193F0;
    case 100u: goto L_00319410;
    case 101u: goto L_00319418;
    case 102u: goto L_00319420;
    case 103u: goto L_0031943C;
    case 104u: goto L_00319468;
    case 105u: goto L_0031949C;
    case 106u: goto L_003194B4;
    case 107u: goto L_003194BC;
    case 108u: goto L_003194D0;
    case 109u: goto L_003195C4;
    case 110u: goto L_003195F0;
    case 111u: goto L_00319614;
    case 112u: goto L_003196F0;
    case 113u: goto L_00319714;
    case 114u: goto L_003197F4;
    case 115u: goto L_0031988C;
    case 116u: goto L_00319980;
    case 117u: goto L_00319A2C;
    case 118u: goto L_00319C00;
    case 119u: goto L_00319D10;
    case 120u: goto L_00319D58;
    case 121u: goto L_00319D9C;
    case 122u: goto L_00319EE8;
    case 123u: goto L_00319F18;
    case 124u: goto L_00319F30;
    case 125u: goto L_00319FE0;
    case 126u: goto L_0031A018;
    case 127u: goto L_0031A050;
    case 128u: goto L_0031A094;
    case 129u: goto L_0031A1C0;
    case 130u: goto L_0031A1F0;
    case 131u: goto L_0031A218;
    case 132u: goto L_0031A344;
    case 133u: goto L_0031A36C;
    case 134u: goto L_0031A378;
    case 135u: goto L_0031A38C;
    case 136u: goto L_0031A3D0;
    case 137u: goto L_0031A400;
    case 138u: goto L_0031A4A0;
    case 139u: goto L_0031A4AC;
    case 140u: goto L_0031A4D0;
    case 141u: goto L_0031A508;
    case 142u: goto L_0031A51C;
    case 143u: goto L_0031A568;
    case 144u: goto L_0031A590;
    case 145u: goto L_0031A5A0;
    case 146u: goto L_0031A5E0;
    case 147u: goto L_0031A5EC;
    case 148u: goto L_0031A620;
    case 149u: goto L_0031A640;
    case 150u: goto L_0031A670;
    case 151u: goto L_0031A68C;
    case 152u: goto L_0031A698;
    case 153u: goto L_0031A6A0;
    case 154u: goto L_0031A6B0;
    case 155u: goto L_0031A6E8;
    case 156u: goto L_0031A784;
    case 157u: goto L_0031A790;
    case 158u: goto L_0031A7A4;
    case 159u: goto L_0031A7AC;
    case 160u: goto L_0031A7EC;
    case 161u: goto L_0031A850;
    case 162u: goto L_0031A868;
    case 163u: goto L_0031A878;
    case 164u: goto L_0031A888;
    case 165u: goto L_0031A890;
    case 166u: goto L_0031A89C;
    case 167u: goto L_0031A914;
    case 168u: goto L_0031A940;
    case 169u: goto L_0031A980;
    case 170u: goto L_0031A98C;
    case 171u: goto L_0031A9C0;
    case 172u: goto L_0031AA04;
    case 173u: goto L_0031AA10;
    case 174u: goto L_0031AA74;
    case 175u: goto L_0031AA90;
    case 176u: goto L_0031AADC;
    case 177u: goto L_0031AAF0;
    case 178u: goto L_0031AB50;
    case 179u: goto L_0031AB70;
    case 180u: goto L_0031ABB4;
    case 181u: goto L_0031ABC0;
    case 182u: goto L_0031AC64;
    case 183u: goto L_0031AC70;
    case 184u: goto L_0031ACD4;
    case 185u: goto L_0031AD00;
    case 186u: goto L_0031AD8C;
    case 187u: goto L_0031ADF0;
    case 188u: goto L_0031AE68;
    case 189u: goto L_0031AE80;
    case 190u: goto L_0031AEE0;
    case 191u: goto L_0031AEF0;
    case 192u: goto L_0031AF48;
    case 193u: goto L_0031AF60;
    case 194u: goto L_0031AFA4;
    case 195u: goto L_0031AFB0;
    case 196u: goto L_0031AFCC;
    case 197u: goto L_0031AFE0;
    case 198u: goto L_0031B080;
    case 199u: goto L_0031B090;
    case 200u: goto L_0031B0F4;
    case 201u: goto L_0031B120;
    case 202u: goto L_0031B190;
    case 203u: goto L_0031B20C;
    case 204u: goto L_0031B230;
    case 205u: goto L_0031B23C;
    case 206u: goto L_0031B248;
    case 207u: goto L_0031B260;
    case 208u: goto L_0031B2AC;
    case 209u: goto L_0031B2B8;
    case 210u: goto L_0031B2D0;
    case 211u: goto L_0031B358;
    case 212u: goto L_0031B37C;
    case 213u: goto L_0031B388;
    case 214u: goto L_0031B3A0;
    case 215u: goto L_0031B3C0;
    case 216u: goto L_0031B3F0;
    case 217u: goto L_0031B438;
    case 218u: goto L_0031B46C;
    case 219u: goto L_0031B484;
    case 220u: goto L_0031B4B8;
    case 221u: goto L_0031B4D0;
    case 222u: goto L_0031B4FC;
    case 223u: goto L_0031B510;
    case 224u: goto L_0031B52C;
    case 225u: goto L_0031B538;
    case 226u: goto L_0031B540;
    case 227u: goto L_0031B558;
    case 228u: goto L_0031B560;
    case 229u: goto L_0031B578;
    case 230u: goto L_0031B58C;
    case 231u: goto L_0031B59C;
    case 232u: goto L_0031B5B4;
    case 233u: goto L_0031B5FC;
    case 234u: goto L_0031B618;
    case 235u: goto L_0031B648;
    case 236u: goto L_0031B660;
    case 237u: goto L_0031B674;
    case 238u: goto L_0031B694;
    case 239u: goto L_0031B6C4;
    case 240u: goto L_0031B6D4;
    case 241u: goto L_0031B714;
    case 242u: goto L_0031B760;
    case 243u: goto L_0031B770;
    case 244u: goto L_0031B784;
    case 245u: goto L_0031B794;
    case 246u: goto L_0031B7A0;
    case 247u: goto L_0031B7C0;
    case 248u: goto L_0031B830;
    case 249u: goto L_0031B840;
    case 250u: goto L_0031B86C;
    case 251u: goto L_0031B890;
    case 252u: goto L_0031B89C;
    case 253u: goto L_0031B8A4;
    case 254u: goto L_0031B8B8;
    case 255u: goto L_0031B8C0;
    case 256u: goto L_0031B8D8;
    case 257u: goto L_0031B924;
    case 258u: goto L_0031B940;
    case 259u: goto L_0031B96C;
    case 260u: goto L_0031B990;
    case 261u: goto L_0031B99C;
    case 262u: goto L_0031B9A4;
    case 263u: goto L_0031B9B8;
    case 264u: goto L_0031B9C0;
    case 265u: goto L_0031B9D8;
    case 266u: goto L_0031BA24;
    case 267u: goto L_0031BA40;
    case 268u: goto L_0031BA5C;
    case 269u: goto L_0031BA68;
    case 270u: goto L_0031BA70;
    case 271u: goto L_0031BA84;
    case 272u: goto L_0031BA8C;
    case 273u: goto L_0031BAA0;
    case 274u: goto L_0031BAD0;
    case 275u: goto L_0031BB18;
    case 276u: goto L_0031BB4C;
    case 277u: goto L_0031BB64;
    case 278u: goto L_0031BB98;
    case 279u: goto L_0031BBB0;
    case 280u: goto L_0031BBDC;
    case 281u: goto L_0031BBF0;
    case 282u: goto L_0031BC0C;
    case 283u: goto L_0031BC18;
    case 284u: goto L_0031BC20;
    case 285u: goto L_0031BC38;
    case 286u: goto L_0031BC40;
    case 287u: goto L_0031BC58;
    case 288u: goto L_0031BC6C;
    case 289u: goto L_0031BC7C;
    case 290u: goto L_0031BC94;
    case 291u: goto L_0031BCDC;
    case 292u: goto L_0031BCF4;
    case 293u: goto L_0031BD24;
    case 294u: goto L_0031BD40;
    case 295u: goto L_0031BD54;
    case 296u: goto L_0031BD74;
    case 297u: goto L_0031BDA4;
    case 298u: goto L_0031BDB4;
    case 299u: goto L_0031BDF4;
    case 300u: goto L_0031BE40;
    case 301u: goto L_0031BE50;
    case 302u: goto L_0031BE64;
    case 303u: goto L_0031BE74;
    case 304u: goto L_0031BE80;
    case 305u: goto L_0031BEA0;
    case 306u: goto L_0031BF18;
    case 307u: goto L_0031BF30;
    case 308u: goto L_0031BF5C;
    case 309u: goto L_0031BF80;
    case 310u: goto L_0031BF8C;
    case 311u: goto L_0031BF94;
    case 312u: goto L_0031BFA8;
    case 313u: goto L_0031BFB0;
    case 314u: goto L_0031BFC8;
    default: bad_entry(c, 0x00318000u); return;
    }
L_00318000:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_00318004:
    c.f[12] = ld32((c.r[17].w[0] + 52u));
    set32(c.r[5], c.r[17].w[0] + 1440u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318014u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 313u, depth + 1u); else { c.pc = 0x0034B7E0u; return; } if (c.pc != 0x00318014u) [[unlikely]] return; }
L_00318014:
    c.f[12] = ld32((c.r[17].w[0] + 104u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[29].w[0] + 48u);  if (t) { goto L_003180A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318038u); set32(c.r[5], c.r[17].w[0] + 1424u);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x00318038u) [[unlikely]] return; }
L_00318038:
    c.f[12] = ld32((c.r[17].w[0] + 52u));
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318048u); set32(c.r[5], c.r[17].w[0] + 1440u);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x00318048u) [[unlikely]] return; }
L_00318048:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318054u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x00318054u) [[unlikely]] return; }
L_00318054:
    c.f[0] = ld32((c.r[17].w[0] + 8336u));
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8340u));
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8344u));
    st32((c.r[29].w[0] + 72u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 1024u));
    c.f[0] = ld32((c.r[17].w[0] + 1004u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318084u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_005B(c, 306u, depth + 1u); else { c.pc = 0x0026FAE0u; return; } if (c.pc != 0x00318084u) [[unlikely]] return; }
L_00318084:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], c.r[17].w[0] + 1424u);
    set32(c.r[6], c.r[29].w[0] + 64u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031809Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 296u, depth + 1u); else { c.pc = 0x0034B590u; return; } if (c.pc != 0x0031809Cu) [[unlikely]] return; }
L_0031809C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[17].w[0] + 1216u));  if (t) { goto L_003180F0; } }
L_003180A4:
    c.f[0] = ld32((c.r[17].w[0] + 8336u));
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[17].w[0] + 1440u);
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8340u));
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8344u));
    st32((c.r[29].w[0] + 72u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 1024u));
    c.f[0] = ld32((c.r[17].w[0] + 1004u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003180D4u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_005B(c, 306u, depth + 1u); else { c.pc = 0x0026FAE0u; return; } if (c.pc != 0x003180D4u) [[unlikely]] return; }
L_003180D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], c.r[17].w[0] + 1424u);
    set32(c.r[6], c.r[29].w[0] + 64u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003180ECu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 296u, depth + 1u); else { c.pc = 0x0034B590u; return; } if (c.pc != 0x003180ECu) [[unlikely]] return; }
L_003180EC:
    c.f[1] = ld32((c.r[17].w[0] + 1216u));
    c.budget -= 1;
L_003180F0:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_0031812C; } }
    c.f[2] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 1216u), c.f[0]);  if (t) { goto L_0031812C; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 778u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0031812C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00318140:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 732u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_003181F8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[3].w[0] + 1u);  if (t) { goto L_00318170; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[16].w[0] + 108u));  if (t) { goto L_00318260; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_00318170:
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 275u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 276u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 8u);
    st8((c.r[16].w[0] + 277u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 741u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 763u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[2].w[0] + 609u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[2].w[0];
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = c.f[0];
    st32((c.r[16].w[0] + 1216u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 34;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 68u), c.f[0]);  if (t) { goto L_0031825C; } }
L_003181F8:
    c.f[1] = ld32((c.r[16].w[0] + 1004u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    c.f[2] = 0u;
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 1216u), c.f[0]);  if (t) { goto L_0031825C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 732u)));
    set32(c.r[2], 0u - 73u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 96u), 0u);
    st32((c.r[16].w[0] + 1308u), 0u);
    st32((c.r[16].w[0] + 1304u), 0u);
    st8((c.r[16].w[0] + 736u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st16((c.r[16].w[0] + 812u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 68u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 108u), 0u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031825Cu); st32((c.r[16].w[0] + 104u), 0u);  if (depth < kMaxDepth) unit_0086(c, 210u, depth + 1u); else { c.pc = 0x0031B2D0u; return; } if (c.pc != 0x0031825Cu) [[unlikely]] return; }
L_0031825C:
    c.f[1] = ld32((c.r[16].w[0] + 108u));
    c.budget -= 1;
L_00318260:
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.f[2] = 0u;
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 68u));
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 13;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0031829C; } }
    st32((c.r[16].w[0] + 108u), 0u);
    st32((c.r[16].w[0] + 104u), 0u);
    c.budget -= 2;
L_0031829C:
    c.f[1] = ld32((c.r[16].w[0] + 52u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003182C8; } }
    st32((c.r[16].w[0] + 108u), 0u);
    st32((c.r[16].w[0] + 104u), 0u);
    st32((c.r[16].w[0] + 68u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    c.budget -= 4;
L_003182C8:
    c.f[12] = ld32((c.r[16].w[0] + 104u));
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003182D8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 313u, depth + 1u); else { c.pc = 0x0034B7E0u; return; } if (c.pc != 0x003182D8u) [[unlikely]] return; }
L_003182D8:
    c.f[12] = ld32((c.r[16].w[0] + 52u));
    set32(c.r[5], c.r[16].w[0] + 1440u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003182E8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 313u, depth + 1u); else { c.pc = 0x0034B7E0u; return; } if (c.pc != 0x003182E8u) [[unlikely]] return; }
L_003182E8:
    c.f[1] = ld32((c.r[16].w[0] + 52u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[3].d[0] = c.r[3].d[0] | 4719ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003183E8; } }
    c.f[12] = ld32((c.r[16].w[0] + 104u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003183A0; } }
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318334u); set32(c.r[5], c.r[16].w[0] + 1424u);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x00318334u) [[unlikely]] return; }
L_00318334:
    c.f[12] = ld32((c.r[16].w[0] + 52u));
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318344u); set32(c.r[5], c.r[16].w[0] + 1440u);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x00318344u) [[unlikely]] return; }
L_00318344:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318350u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x00318350u) [[unlikely]] return; }
L_00318350:
    c.f[0] = ld32((c.r[16].w[0] + 8336u));
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8340u));
    st32((c.r[29].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8344u));
    st32((c.r[29].w[0] + 56u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 1024u));
    c.f[0] = ld32((c.r[16].w[0] + 1004u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318380u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_005B(c, 306u, depth + 1u); else { c.pc = 0x0026FAE0u; return; } if (c.pc != 0x00318380u) [[unlikely]] return; }
L_00318380:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], c.r[16].w[0] + 1424u);
    set32(c.r[6], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318398u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 296u, depth + 1u); else { c.pc = 0x0034B590u; return; } if (c.pc != 0x00318398u) [[unlikely]] return; }
L_00318398:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_003183EC; } }
L_003183A0:
    c.f[0] = ld32((c.r[16].w[0] + 8336u));
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[16].w[0] + 1440u);
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8340u));
    st32((c.r[29].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8344u));
    st32((c.r[29].w[0] + 56u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 1024u));
    c.f[0] = ld32((c.r[16].w[0] + 1004u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003183D0u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_005B(c, 306u, depth + 1u); else { c.pc = 0x0026FAE0u; return; } if (c.pc != 0x003183D0u) [[unlikely]] return; }
L_003183D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], c.r[16].w[0] + 1424u);
    set32(c.r[6], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003183E8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 296u, depth + 1u); else { c.pc = 0x0034B590u; return; } if (c.pc != 0x003183E8u) [[unlikely]] return; }
L_003183E8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_003183EC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00318400:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 732u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_00318440; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 13472u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00318440u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00318440u) [[unlikely]] return; }
L_00318440:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318448u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0085(c, 101u, depth + 1u); else { c.pc = 0x00314BA0u; return; } if (c.pc != 0x00318448u) [[unlikely]] return; }
L_00318448:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00318460:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 732u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_003184C0; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 13472u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003184A0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003184A0u) [[unlikely]] return; }
L_003184A0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[2], 0u + 32u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_003184C4; } }
    set32(c.r[5], 0u + 9u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003184C0u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 29u, depth + 1u); else { c.pc = 0x00198460u; return; } if (c.pc != 0x003184C0u) [[unlikely]] return; }
L_003184C0:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_003184C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003184CCu);  if (depth < kMaxDepth) unit_0058(c, 381u, depth + 1u); else { c.pc = 0x002637C0u; return; } if (c.pc != 0x003184CCu) [[unlikely]] return; }
L_003184CC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003184E0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 992u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00318000u < 16384u) { entry = entries_0086[(t - 0x00318000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00318500:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 21060u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[16], c.r[6].w[0] - 32u);
    st8((c.r[4].w[0] + 280u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 760u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 795u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 788u), static_cast<std::uint8_t>(0u));
    set32(c.r[18], c.r[16].w[0] << 3);
    st8((c.r[4].w[0] + 762u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[2].w[0])));
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[2], c.r[2].w[0] - 4792u);
    st32((c.r[4].w[0] + 8000u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[4].w[0] + 8004u), 0u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    st8((c.r[4].w[0] + 271u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8389u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], c.r[2].w[0] + 15904u);
    set32(c.r[2], c.r[16].w[0] << 5);
    set32(c.r[5], c.r[8].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[8].w[0]);
    set32(c.r[5], c.r[5].w[0] << 7);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 43;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003185ACu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0016(c, 134u, depth + 1u); else { c.pc = 0x0015B550u; return; } if (c.pc != 0x003185ACu) [[unlikely]] return; }
L_003185AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003185B4u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_001E(c, 118u, depth + 1u); else { c.pc = 0x0017A940u; return; } if (c.pc != 0x003185B4u) [[unlikely]] return; }
L_003185B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[2], c.r[2].w[0] + 20240u);
    set32(c.r[17], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[19].w[0] + 8400u), 0u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[2].w[0] + 7768u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[19].w[0] + 8404u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[2].w[0] + 7784u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st8((c.r[19].w[0] + 1600u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[2].w[0] + 7664u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st8((c.r[19].w[0] + 770u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[19].w[0] + 1276u), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8391u)));
    c.budget -= 25;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00318634; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00318634; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 742u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0031865C; } }
L_00318634:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00318658; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 29658u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 742u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0031865C; } }
L_00318658:
    st8((c.r[19].w[0] + 742u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0031865C:
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[2].w[0] << 1);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[2].w[0] + 7488u);
    set32(c.r[8], c.r[2].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[2].w[0] + 7489u);
    set32(c.r[7], c.r[2].w[0] + c.r[4].w[0]);
    st8((c.r[19].w[0] + 8432u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 1u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[2].w[0] + 7490u);
    set32(c.r[6], c.r[2].w[0] + c.r[4].w[0]);
    st8((c.r[19].w[0] + 8433u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 2u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[2].w[0] + 4720u);
    set32(c.r[3], c.r[2].w[0] + c.r[18].w[0]);
    st8((c.r[19].w[0] + 8425u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 3u)));
    set32(c.r[5], 0u + 21u);
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    st8((c.r[19].w[0] + 8427u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 4u)));
    st8((c.r[19].w[0] + 8428u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 5u)));
    st8((c.r[19].w[0] + 8429u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    st8((c.r[19].w[0] + 8432u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    st8((c.r[19].w[0] + 8433u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    st8((c.r[19].w[0] + 8425u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8389u)));
    st8((c.r[19].w[0] + 531u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 2u)));
    st16((c.r[19].w[0] + 842u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[19].w[0] + 840u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 4u)));
    st16((c.r[19].w[0] + 844u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 6u)));
    c.budget -= 45;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318710u); st8((c.r[19].w[0] + 518u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0080(c, 309u, depth + 1u); else { c.pc = 0x00303FD0u; return; } if (c.pc != 0x00318710u) [[unlikely]] return; }
L_00318710:
    set32(c.r[5], 0u + 21u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031871Cu); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 310u, depth + 1u); else { c.pc = 0x00303FF0u; return; } if (c.pc != 0x0031871Cu) [[unlikely]] return; }
L_0031871C:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8384u)));
    set32(c.r[3], 0u + 128u);
    set32(c.r[2], 0u + 240u);
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    st8((c.r[19].w[0] + 268u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8391u)));
    st8((c.r[19].w[0] + 269u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 1u)));
    st8((c.r[19].w[0] + 270u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[19].w[0] + 264u), c.r[19].w[0]);
    st8((c.r[19].w[0] + 576u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318750u); st8((c.r[19].w[0] + 579u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0073(c, 142u, depth + 1u); else { c.pc = 0x002CF1D0u; return; } if (c.pc != 0x00318750u) [[unlikely]] return; }
L_00318750:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318758u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0078(c, 47u, depth + 1u); else { c.pc = 0x002E0670u; return; } if (c.pc != 0x00318758u) [[unlikely]] return; }
L_00318758:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 13808u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00318770u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00318770u) [[unlikely]] return; }
L_00318770:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318778u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0086(c, 39u, depth + 1u); else { c.pc = 0x003187A0u; return; } if (c.pc != 0x00318778u) [[unlikely]] return; }
L_00318778:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003187A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[3] = ld32((c.r[4].w[0] + 128u));
    c.f[2] = ld32((c.r[4].w[0] + 132u));
    c.f[1] = ld32((c.r[4].w[0] + 136u));
    c.f[0] = ld32((c.r[4].w[0] + 140u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1008u);
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
    set32(c.r[3], ld32((c.r[4].w[0] + 80u)));
    st32((c.r[4].w[0] + 1316u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 84u)));
    st32((c.r[4].w[0] + 1320u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 88u)));
    st32((c.r[4].w[0] + 1324u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 7816u)));
    st32((c.r[4].w[0] + 8060u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 7820u)));
    st32((c.r[4].w[0] + 8064u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 7752u));
    st32((c.r[4].w[0] + 7760u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 7792u));
    st32((c.r[4].w[0] + 7800u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 7756u));
    st32((c.r[4].w[0] + 7764u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 7796u));
    st32((c.r[4].w[0] + 7804u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 46;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00318858u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00318858u) [[unlikely]] return; }
L_00318858:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318860u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 133u, depth + 1u); else { c.pc = 0x00265F60u; return; } if (c.pc != 0x00318860u) [[unlikely]] return; }
L_00318860:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318868u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005C(c, 162u, depth + 1u); else { c.pc = 0x00270D00u; return; } if (c.pc != 0x00318868u) [[unlikely]] return; }
L_00318868:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318870u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005D(c, 709u, depth + 1u); else { c.pc = 0x00276490u; return; } if (c.pc != 0x00318870u) [[unlikely]] return; }
L_00318870:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 760u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00318884; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00318884:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003188A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 788u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    st8((c.r[4].w[0] + 788u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 795u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003188D8u); st8((c.r[4].w[0] + 795u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x003188D8u) [[unlikely]] return; }
L_003188D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003188E0u); set32(c.r[4], c.r[16].w[0] + 8320u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x003188E0u) [[unlikely]] return; }
L_003188E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003188E8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0086(c, 116u, depth + 1u); else { c.pc = 0x00319980u; return; } if (c.pc != 0x003188E8u) [[unlikely]] return; }
L_003188E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003188F0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0086(c, 124u, depth + 1u); else { c.pc = 0x00319F30u; return; } if (c.pc != 0x003188F0u) [[unlikely]] return; }
L_003188F0:
    set32(c.r[2], 0u - 1u);
    st8((c.r[16].w[0] + 739u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 740u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 80u), 0u);
    st32((c.r[16].w[0] + 88u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002D0000u);
    st32((c.r[16].w[0] + 104u), 0u);
    set32(c.r[2], c.r[2].w[0] + 20832u);
    st32((c.r[16].w[0] + 108u), 0u);
    st32((c.r[16].w[0] + 168u), c.r[2].w[0]);
    set32(c.r[2], 0u + 14u);
    st8((c.r[16].w[0] + 519u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 532u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 536u), static_cast<std::uint16_t>(0u));
    st8((c.r[16].w[0] + 539u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 572u), static_cast<std::uint16_t>(0u));
    mmi::paddub(c.r[3], c.r[0], c.r[0]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 18;
L_00318938:
    set32(c.r[3], c.r[3].w[0] + 2u);
    st16((c.r[4].w[0] + 540u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 542u), static_cast<std::uint16_t>(0u));
    c.r[2].d[0] = c.r[3].sd[0] < 16ll ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00318938u | kUnwind; return; } goto L_00318938; } }
    st8((c.r[16].w[0] + 574u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 575u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 577u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 578u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 582u), static_cast<std::uint8_t>(0u));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], 0u + 255u);
    st8((c.r[16].w[0] + 268u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8391u)));
    set32(c.r[2], c.r[2].w[0] - 27456u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    st8((c.r[16].w[0] + 269u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    st8((c.r[16].w[0] + 270u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[16].w[0] + 264u), c.r[16].w[0]);
    st8((c.r[16].w[0] + 736u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 741u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 758u), static_cast<std::uint8_t>(c.r[6].w[0]));
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
    st8((c.r[16].w[0] + 279u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 800u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 756u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 783u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 782u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 781u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 769u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 764u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 766u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 1308u), 0u);
    st32((c.r[16].w[0] + 1304u), 0u);
    st32((c.r[16].w[0] + 100u), 0u);
    st32((c.r[16].w[0] + 92u), 0u);
    st8((c.r[16].w[0] + 1603u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 7900u), 0u);
    st32((c.r[16].w[0] + 7896u), 0u);
    st32((c.r[16].w[0] + 7892u), 0u);
    st32((c.r[16].w[0] + 7888u), 0u);
    st32((c.r[16].w[0] + 7908u), 0u);
    st32((c.r[16].w[0] + 7904u), 0u);
    st32((c.r[16].w[0] + 7916u), 0u);
    st32((c.r[16].w[0] + 7912u), 0u);
    st32((c.r[16].w[0] + 7820u), 0u);
    st32((c.r[16].w[0] + 7816u), 0u);
    st32((c.r[16].w[0] + 7924u), 0u);
    st32((c.r[16].w[0] + 7920u), 0u);
    st32((c.r[16].w[0] + 7960u), 0u);
    st32((c.r[16].w[0] + 7956u), 0u);
    st32((c.r[16].w[0] + 7952u), 0u);
    st32((c.r[16].w[0] + 7944u), 0u);
    st32((c.r[16].w[0] + 7940u), 0u);
    st32((c.r[16].w[0] + 7936u), 0u);
    st8((c.r[16].w[0] + 8057u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 8056u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 846u), static_cast<std::uint16_t>(0u));
    st8((c.r[16].w[0] + 755u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 1520u), 0u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 76;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318A84u); st32((c.r[16].w[0] + 1260u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005B(c, 88u, depth + 1u); else { c.pc = 0x0026D880u; return; } if (c.pc != 0x00318A84u) [[unlikely]] return; }
L_00318A84:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318A90u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 87u, depth + 1u); else { c.pc = 0x0026D7B0u; return; } if (c.pc != 0x00318A90u) [[unlikely]] return; }
L_00318A90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318A98u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 131u, depth + 1u); else { c.pc = 0x00265EF0u; return; } if (c.pc != 0x00318A98u) [[unlikely]] return; }
L_00318A98:
    c.f[12] = 0u;
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318AB0u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 90u, depth + 1u); else { c.pc = 0x00264D10u; return; } if (c.pc != 0x00318AB0u) [[unlikely]] return; }
L_00318AB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318AB8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 134u, depth + 1u); else { c.pc = 0x00265FB0u; return; } if (c.pc != 0x00318AB8u) [[unlikely]] return; }
L_00318AB8:
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318AC4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 316u, depth + 1u); else { c.pc = 0x0034B820u; return; } if (c.pc != 0x00318AC4u) [[unlikely]] return; }
L_00318AC4:
    set32(c.r[5], c.r[16].w[0] + 1440u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318AD0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 316u, depth + 1u); else { c.pc = 0x0034B820u; return; } if (c.pc != 0x00318AD0u) [[unlikely]] return; }
L_00318AD0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[16].w[0] + 1472u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318AE4u); set32(c.r[5], c.r[16].w[0] + 1424u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x00318AE4u) [[unlikely]] return; }
L_00318AE4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    set32(c.r[4], c.r[16].w[0] + 704u);
    set32(c.r[6], 0u + 20u);
    st32((c.r[16].w[0] + 1068u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318AFCu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x00318AFCu) [[unlikely]] return; }
L_00318AFC:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 3u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00318B2C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8391u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00318B50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318B24u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0052(c, 177u, depth + 1u); else { c.pc = 0x0024A480u; return; } if (c.pc != 0x00318B24u) [[unlikely]] return; }
L_00318B24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));  if (t) { goto L_00318B54; } }
L_00318B2C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8391u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_00318B48; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8440u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00318B50; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_00318B48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318B50u);  if (depth < kMaxDepth) unit_0052(c, 177u, depth + 1u); else { c.pc = 0x0024A480u; return; } if (c.pc != 0x00318B50u) [[unlikely]] return; }
L_00318B50:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.budget -= 1;
L_00318B54:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 13728u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00318B70u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00318B70u) [[unlikely]] return; }
L_00318B70:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00318B80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 640u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_00318BC0; } }
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[16].w[0] + 704u);
    set32(c.r[6], 0u + 20u);
    st8((c.r[16].w[0] + 532u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318BB4u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x00318BB4u) [[unlikely]] return; }
L_00318BB4:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 790u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 962u), static_cast<std::uint16_t>(0u));
    c.budget -= 3;
L_00318BC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[16].w[0] + 1068u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 704u));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318BD8u); st16((c.r[16].w[0] + 706u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0086(c, 136u, depth + 1u); else { c.pc = 0x0031A3D0u; return; } if (c.pc != 0x00318BD8u) [[unlikely]] return; }
L_00318BD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318BE0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 41u, depth + 1u); else { c.pc = 0x002D4610u; return; } if (c.pc != 0x00318BE0u) [[unlikely]] return; }
L_00318BE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318BE8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0086(c, 99u, depth + 1u); else { c.pc = 0x003193F0u; return; } if (c.pc != 0x00318BE8u) [[unlikely]] return; }
L_00318BE8:
    set32(c.r[3], 0u + 4000u);
    st16((c.r[16].w[0] + 816u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 512u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00318C28; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 891u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00318C28; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[4], c.r[16].w[0] + 704u);
    set32(c.r[6], 0u + 20u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318C28u); st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x00318C28u) [[unlikely]] return; }
L_00318C28:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 640u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00318C68; } }
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[16].w[0] + 704u);
    set32(c.r[6], 0u + 20u);
    st8((c.r[16].w[0] + 532u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318C5Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x00318C5Cu) [[unlikely]] return; }
L_00318C5C:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 790u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 962u), static_cast<std::uint16_t>(0u));
    c.budget -= 3;
L_00318C68:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00318C80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318CA0u); st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0086(c, 118u, depth + 1u); else { c.pc = 0x00319C00u; return; } if (c.pc != 0x00318CA0u) [[unlikely]] return; }
L_00318CA0:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 739u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 740u), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 788u));
    set32(c.r[4], 0u + 4000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    set32(c.r[2], 0u + 3u);
    c.r[5].d[0] = c.r[5].d[0] & 128ull;
    st8((c.r[16].w[0] + 788u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 795u));
    c.r[5].d[0] = c.r[5].d[0] & 128ull;
    st8((c.r[16].w[0] + 795u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st16((c.r[16].w[0] + 816u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st32((c.r[16].w[0] + 1068u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 18;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00318D08; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8391u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_00318D34; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 789u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00318D30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 790u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00318D30; } }
L_00318D08:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8391u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00318D30; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8440u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00318D30; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 789u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00318D30; } }
    st8((c.r[16].w[0] + 790u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00318D30:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_00318D34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318D3Cu);  if (depth < kMaxDepth) unit_0059(c, 93u, depth + 1u); else { c.pc = 0x00264EF0u; return; } if (c.pc != 0x00318D3Cu) [[unlikely]] return; }
L_00318D3C:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 640u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00318D7C; } }
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[16].w[0] + 704u);
    set32(c.r[6], 0u + 20u);
    st8((c.r[16].w[0] + 532u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318D70u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x00318D70u) [[unlikely]] return; }
L_00318D70:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 790u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 962u), static_cast<std::uint16_t>(0u));
    c.budget -= 3;
L_00318D7C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00318D90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 640u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_00318DD0; } }
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[16].w[0] + 704u);
    set32(c.r[6], 0u + 20u);
    st8((c.r[16].w[0] + 532u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318DC4u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x00318DC4u) [[unlikely]] return; }
L_00318DC4:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 790u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 962u), static_cast<std::uint16_t>(0u));
    c.budget -= 3;
L_00318DD0:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    set32(c.r[2], 0u + 3u);
    st16((c.r[16].w[0] + 706u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00318E08; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8391u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00318E2C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318E00u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0084(c, 171u, depth + 1u); else { c.pc = 0x003115F0u; return; } if (c.pc != 0x00318E00u) [[unlikely]] return; }
L_00318E00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 789u)));  if (t) { goto L_00318E30; } }
L_00318E08:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8391u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_00318E24; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8440u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00318E2C; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_00318E24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318E2Cu);  if (depth < kMaxDepth) unit_0084(c, 171u, depth + 1u); else { c.pc = 0x003115F0u; return; } if (c.pc != 0x00318E2Cu) [[unlikely]] return; }
L_00318E2C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 789u)));
    c.budget -= 1;
L_00318E30:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_00318E44; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318E40u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0086(c, 154u, depth + 1u); else { c.pc = 0x0031A6B0u; return; } if (c.pc != 0x00318E40u) [[unlikely]] return; }
L_00318E40:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_00318E44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318E4Cu);  if (depth < kMaxDepth) unit_0075(c, 41u, depth + 1u); else { c.pc = 0x002D4610u; return; } if (c.pc != 0x00318E4Cu) [[unlikely]] return; }
L_00318E4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318E54u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0086(c, 99u, depth + 1u); else { c.pc = 0x003193F0u; return; } if (c.pc != 0x00318E54u) [[unlikely]] return; }
L_00318E54:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 640u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00318E94; } }
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[16].w[0] + 704u);
    set32(c.r[6], 0u + 20u);
    st8((c.r[16].w[0] + 532u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318E88u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x00318E88u) [[unlikely]] return; }
L_00318E88:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 790u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 962u), static_cast<std::uint16_t>(0u));
    c.budget -= 3;
L_00318E94:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00318EB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], ld32((c.r[28].w[0] - 26300u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 641u)));
    c.r[1].d[0] = c.r[4].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 10;
    if (c.r[1].d[0] == 0ull) { c.r[2].d[0] = c.r[4].sd[0] < 6ll ? 1ull : 0ull;  goto L_00318EE8; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 280u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00318FFC; } }
    c.r[2].d[0] = c.r[4].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 1;
L_00318EE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_00318FF4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 760u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00318FF0; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 78u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 330u)));
    set32(c.r[3], c.r[3].w[0] - 28448u);
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 7);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_00318F64; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 6u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00318FF0; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00318FF0; } }
    st8((c.r[17].w[0] + 803u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 274u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[17].w[0] + 1260u)));
    set32(c.r[3], 0u - 33u);
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[17].w[0] + 1260u), c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 760u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00318FF0; } }
L_00318F64:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[2], c.r[2].w[0] - 31003u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8389u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 6u)));
    set32(c.r[3], c.r[4].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 12;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_00318FD0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_00318FF0; } }
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318FACu); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x00318FACu) [[unlikely]] return; }
L_00318FAC:
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00318FF0; } }
L_00318FD0:
    st8((c.r[17].w[0] + 803u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 274u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[17].w[0] + 1260u)));
    set32(c.r[3], 0u - 33u);
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[17].w[0] + 1260u), c.r[3].w[0]);
    st8((c.r[17].w[0] + 760u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
L_00318FF0:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_00318FF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318FFCu);  if (depth < kMaxDepth) unit_0086(c, 99u, depth + 1u); else { c.pc = 0x003193F0u; return; } if (c.pc != 0x00318FFCu) [[unlikely]] return; }
L_00318FFC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00319010:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 640u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_0031908C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 641u)));
    c.r[2].d[0] = c.r[2].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0031908C; } }
    c.r[2].d[0] = c.r[3].d[0] << 56;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8389u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0031908C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 648u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0031908C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8391u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0031908C; } }
    set32(c.r[2], 0u + 3u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319084u); st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0086(c, 90u, depth + 1u); else { c.pc = 0x00319150u; return; } if (c.pc != 0x00319084u) [[unlikely]] return; }
L_00319084:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00319140; } }
L_0031908C:
    c.f[3] = ld32((c.r[16].w[0] + 128u));
    c.f[2] = ld32((c.r[16].w[0] + 132u));
    c.f[1] = ld32((c.r[16].w[0] + 136u));
    c.f[0] = ld32((c.r[16].w[0] + 140u));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    st32((c.r[16].w[0] + 144u), c.f[3]);
    st32((c.r[16].w[0] + 148u), c.f[2]);
    st32((c.r[16].w[0] + 152u), c.f[1]);
    st32((c.r[16].w[0] + 156u), c.f[0]);
    c.f[3] = ld32((c.r[16].w[0] + 32u));
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = ld32((c.r[16].w[0] + 44u));
    st32((c.r[16].w[0] + 128u), c.f[3]);
    st32((c.r[16].w[0] + 132u), c.f[2]);
    st32((c.r[16].w[0] + 136u), c.f[1]);
    st32((c.r[16].w[0] + 140u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 80u)));
    st32((c.r[16].w[0] + 1316u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    st32((c.r[16].w[0] + 1320u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    st32((c.r[16].w[0] + 1324u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 7816u)));
    st32((c.r[16].w[0] + 8060u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 7820u)));
    st32((c.r[16].w[0] + 8064u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 7752u));
    st32((c.r[16].w[0] + 7760u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 7792u));
    st32((c.r[16].w[0] + 7800u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 7756u));
    st32((c.r[16].w[0] + 7764u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 7796u));
    c.budget -= 36;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031911Cu); st32((c.r[16].w[0] + 7804u), c.f[0]);  if (depth < kMaxDepth) unit_0086(c, 73u, depth + 1u); else { c.pc = 0x00318D90u; return; } if (c.pc != 0x0031911Cu) [[unlikely]] return; }
L_0031911C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319124u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 133u, depth + 1u); else { c.pc = 0x00265F60u; return; } if (c.pc != 0x00319124u) [[unlikely]] return; }
L_00319124:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031912Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005C(c, 162u, depth + 1u); else { c.pc = 0x00270D00u; return; } if (c.pc != 0x0031912Cu) [[unlikely]] return; }
L_0031912C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319134u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005D(c, 709u, depth + 1u); else { c.pc = 0x00276490u; return; } if (c.pc != 0x00319134u) [[unlikely]] return; }
L_00319134:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 3;
L_00319140:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00319150:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 640u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003191B4; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 641u)));
    c.r[3].d[0] = c.r[3].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[4].d[0] << 56;  if (t) { goto L_003193D8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8389u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003193D8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 648u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003193D8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8391u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003191B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_003193DC; } }
L_003191B4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 95u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_003193B0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8391u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0031928C; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0031928C; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_00319228; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 529u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00319210; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 531u));
    set32(c.r[3], c.r[2].w[0] + c.r[6].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 384u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 384u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00319248; } }
L_00319210:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 531u));
    set32(c.r[3], c.r[2].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 326u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 326u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00319248; } }
L_00319228:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 529u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_0031924C; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 531u));
    set32(c.r[3], c.r[2].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 326u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[3].w[0] + 326u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
L_00319248:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_0031924C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319254u);  if (depth < kMaxDepth) unit_0081(c, 9u, depth + 1u); else { c.pc = 0x00304280u; return; } if (c.pc != 0x00319254u) [[unlikely]] return; }
L_00319254:
    set32(c.r[6], 0u + 8384u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319264u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x00319264u) [[unlikely]] return; }
L_00319264:
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0031927C; } }
    st8((c.r[16].w[0] + 8438u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0031927C:
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003193D8; } }
L_0031928C:
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_003192F0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 29658u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);  if (t) { goto L_003192EC; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003192BCu); st8((c.r[1].w[0] + 29658u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0016(c, 116u, depth + 1u); else { c.pc = 0x0015AB20u; return; } if (c.pc != 0x003192BCu) [[unlikely]] return; }
L_003192BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_003192D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003192CCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 274u, depth + 1u); else { c.pc = 0x002D7E50u; return; } if (c.pc != 0x003192CCu) [[unlikely]] return; }
L_003192CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));  if (t) { goto L_00319308; } }
L_003192D4:
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u - 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 739u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 891u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00319304; } }
L_003192EC:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_003192F0:
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u - 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 739u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 891u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
L_00319304:
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    c.budget -= 1;
L_00319308:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 6u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[6].d[0];  if (t) { goto L_003193D8; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 640u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003193D8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003193D8; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 260u)));
    c.r[3].d[0] = c.r[3].d[0] & 7ull;
    c.r[3].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[6].w[0] + c.r[5].w[0]);  if (t) { goto L_00319388; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8389u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00319384; } }
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 692u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003193D8; } }
    set32(c.r[2], 0u + 3u);
    st8((c.r[5].w[0] + 701u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 13u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031937Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 45u, depth + 1u); else { c.pc = 0x00198720u; return; } if (c.pc != 0x0031937Cu) [[unlikely]] return; }
L_0031937C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003193D8; } }
L_00319384:
    set32(c.r[3], c.r[6].w[0] + c.r[5].w[0]);
    c.budget -= 1;
L_00319388:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 688u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003193D8; } }
    set32(c.r[2], 0u + 3u);
    st8((c.r[5].w[0] + 700u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 13u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003193A8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x003193A8u) [[unlikely]] return; }
L_003193A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003193D8; } }
L_003193B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003193B8u);  if (depth < kMaxDepth) unit_0081(c, 9u, depth + 1u); else { c.pc = 0x00304280u; return; } if (c.pc != 0x003193B8u) [[unlikely]] return; }
L_003193B8:
    set32(c.r[6], 0u + 8384u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003193C8u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x003193C8u) [[unlikely]] return; }
L_003193C8:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u - 1u);
    st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_003193D8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_003193DC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003193F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319410u); set32(c.r[16], c.r[2].w[0] - 32u);  if (depth < kMaxDepth) unit_0075(c, 192u, depth + 1u); else { c.pc = 0x002D6630u; return; } if (c.pc != 0x00319410u) [[unlikely]] return; }
L_00319410:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319418u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0086(c, 108u, depth + 1u); else { c.pc = 0x003194D0u; return; } if (c.pc != 0x00319418u) [[unlikely]] return; }
L_00319418:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319420u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0084(c, 359u, depth + 1u); else { c.pc = 0x00313FD0u; return; } if (c.pc != 0x00319420u) [[unlikely]] return; }
L_00319420:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 13952u);
    set32(c.r[16], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031943Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031943Cu) [[unlikely]] return; }
L_0031943C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 811u)));
    set32(c.r[2], 0u - 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00319468; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 496u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00319468u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00319468u) [[unlikely]] return; }
L_00319468:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 810u)));
    set32(c.r[2], 0u - 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0031949C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 944u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031949Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031949Cu) [[unlikely]] return; }
L_0031949C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 14000u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003194B4u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003194B4u) [[unlikely]] return; }
L_003194B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003194BCu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 160u, depth + 1u); else { c.pc = 0x002DDAF0u; return; } if (c.pc != 0x003194BCu) [[unlikely]] return; }
L_003194BC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003194D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 764u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_00319578; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_00319518; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8433u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00319590; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00319590; } }
L_00319518:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 834u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[2].w[0] - 1u);  goto L_00319570; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00319540; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 816u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 830u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 816u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00319550; } }
L_00319540:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 816u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 832u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st16((c.r[16].w[0] + 816u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_00319550:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 816u)));
    c.r[1].d[0] = c.r[2].sd[0] < 4001ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00319590; } }
    set32(c.r[2], 0u + 4000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 816u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00319590; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 1;
L_00319570:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 834u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00319590; } }
L_00319578:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00319590; } }
    set32(c.r[2], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 764u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00319590:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 274u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003195F8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 278u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003195C4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003195C4; } }
    set32(c.r[6], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003195C4u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 25u, depth + 1u); else { c.pc = 0x00198370u; return; } if (c.pc != 0x003195C4u) [[unlikely]] return; }
L_003195C4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 274u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[16].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00319614; } }
    set32(c.r[6], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003195F0u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 29u, depth + 1u); else { c.pc = 0x00198460u; return; } if (c.pc != 0x003195F0u) [[unlikely]] return; }
L_003195F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));  if (t) { goto L_00319618; } }
L_003195F8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 278u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00319614; } }
    set32(c.r[6], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319614u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 29u, depth + 1u); else { c.pc = 0x00198460u; return; } if (c.pc != 0x00319614u) [[unlikely]] return; }
L_00319614:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    c.budget -= 1;
L_00319618:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031962C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 274u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 278u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00319630; } }
L_0031962C:
    st8((c.r[16].w[0] + 278u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00319630:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 780u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00319644; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[16].w[0] + 780u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00319644:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 784u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00319674; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[16].w[0] + 784u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00319674; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    set32(c.r[2], 0u - 4u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st16((c.r[16].w[0] + 812u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_00319674:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 538u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031968C; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 538u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00319690; } }
L_0031968C:
    st16((c.r[16].w[0] + 536u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_00319690:
    c.f[1] = ld32((c.r[16].w[0] + 1052u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003196B8; } }
    c.f[0] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 1052u), c.f[0]);
    c.budget -= 3;
L_003196B8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 838u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_003196E8; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0] + 838u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003196E4; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 840u)));
    st16((c.r[16].w[0] + 842u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_003196E4:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_003196E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003196F0u);  if (depth < kMaxDepth) unit_0077(c, 65u, depth + 1u); else { c.pc = 0x002DC880u; return; } if (c.pc != 0x003196F0u) [[unlikely]] return; }
L_003196F0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 891u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0031988C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 789u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0031988C; } }
    set32(c.r[5], c.r[29].w[0] + 44u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319714u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 88u, depth + 1u); else { c.pc = 0x002DCED0u; return; } if (c.pc != 0x00319714u) [[unlikely]] return; }
L_00319714:
    st8((c.r[16].w[0] + 802u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 802u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0031988C; } }
    c.f[1] = ld32((c.r[29].w[0] + 44u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0031988C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8391u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00319760; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1844u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0031988C; } }
L_00319760:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 12288ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_00319780; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 789u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0031978C; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_00319780:
    st8((c.r[16].w[0] + 789u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[16].w[0] + 1068u), c.r[3].w[0]);
    c.budget -= 3;
L_0031978C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[3], 0u + 38u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003197F4; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    set32(c.r[3], 0u + 3u);
    c.r[4].d[0] = c.r[4].d[0] & 3ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003197F4; } }
    c.f[1] = ld32((c.r[16].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = c.r[2].w[0];
    c.f[0] = 0u;
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    st32((c.r[16].w[0] + 104u), c.f[1]);
    st32((c.r[16].w[0] + 108u), 0u);
    c.f[1] = ld32((c.r[16].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[5], 0u + 10u);  if (t) { goto L_003197EC; } }
    st32((c.r[16].w[0] + 52u), 0u);
    set32(c.r[5], 0u + 10u);
    c.budget -= 2;
L_003197EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003197F4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 89u, depth + 1u); else { c.pc = 0x0026D960u; return; } if (c.pc != 0x003197F4u) [[unlikely]] return; }
L_003197F4:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 784u));
    c.r[1].d[0] = c.r[3].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0031980C; } }
    set32(c.r[3], 0u + 10u);
    st8((c.r[16].w[0] + 784u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0031980C:
    st8((c.r[16].w[0] + 766u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 888u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], 0u + 1u);
    st8((c.r[16].w[0] + 889u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 790u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0031988C; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0031988C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 6u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0031988C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8389u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 692u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00319870; } }
    set32(c.r[3], 0u + 4u);
    st8((c.r[4].w[0] + 701u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00319870:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 640u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0031988C; } }
    set32(c.r[5], 0u + 18u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031988Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 45u, depth + 1u); else { c.pc = 0x00198720u; return; } if (c.pc != 0x0031988Cu) [[unlikely]] return; }
L_0031988C:
    c.f[2] = ld32((c.r[16].w[0] + 1068u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003198D4; } }
    c.f[0] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 1068u), c.f[0]);  if (t) { goto L_003198CC; } }
    st8((c.r[16].w[0] + 532u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1068u), 0u);  if (t) { goto L_003198D4; } }
L_003198CC:
    set32(c.r[3], 0u + 128u);
    st8((c.r[16].w[0] + 532u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003198D4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00319958; } }
    c.f[2] = ld32((c.r[16].w[0] + 1240u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00319920; } }
    c.f[0] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 1240u), c.f[0]);  if (t) { goto L_00319920; } }
    st32((c.r[16].w[0] + 1240u), 0u);
    st8((c.r[16].w[0] + 800u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00319920:
    c.f[2] = ld32((c.r[16].w[0] + 1244u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00319958; } }
    c.f[0] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 1244u), c.f[0]);  if (t) { goto L_00319958; } }
    st32((c.r[16].w[0] + 1244u), 0u);
    c.budget -= 1;
L_00319958:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 757u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0031996C; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 757u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0031996C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00319980:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], c.r[3].w[0] + 4720u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[3].w[0] + 7216u);
    set32(c.r[9], c.r[6].w[0] - 32u);
    set32(c.r[6], c.r[9].w[0] << 3);
    set32(c.r[7], c.r[5].w[0] + c.r[6].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 2u)));
    set32(c.r[5], c.r[9].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[9].w[0]);
    set32(c.r[17], c.r[5].w[0] << 2);
    set32(c.r[8], c.r[3].w[0] + c.r[17].w[0]);
    st16((c.r[4].w[0] + 842u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st16((c.r[4].w[0] + 840u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] - 5312u);
    set32(c.r[16], c.r[9].w[0] << 2);
    set32(c.r[5], c.r[3].w[0] + c.r[16].w[0]);
    st16((c.r[4].w[0] + 844u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 6u)));
    set32(c.r[3], 0u + 2u);
    st8((c.r[4].w[0] + 518u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.f[0] = ld32((c.r[8].w[0]));
    st32((c.r[4].w[0] + 8008u), c.f[0]);
    c.f[0] = ld32((c.r[8].w[0] + 4u));
    st32((c.r[4].w[0] + 8024u), c.f[0]);
    c.f[0] = ld32((c.r[8].w[0] + 8u));
    st32((c.r[4].w[0] + 8028u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[4].w[0] + 8012u), c.f[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 26304u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 41;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; mmi::paddub(c.r[18], c.r[4], c.r[0]);  if (t) { goto L_00319A34; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319A2Cu);  if (depth < kMaxDepth) unit_0014(c, 149u, depth + 1u); else { c.pc = 0x00152E20u; return; } if (c.pc != 0x00319A2Cu) [[unlikely]] return; }
L_00319A2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));  if (t) { goto L_00319A60; } }
L_00319A34:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8391u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[3].w[0] + 5024u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    st16((c.r[18].w[0] + 516u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[18].w[0] + 514u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[18].w[0] + 512u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    c.budget -= 11;
L_00319A60:
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00319AA0; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8386u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[3], c.r[3].w[0] - 14720u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8437u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);  if (t) { goto L_00319AAC; } }
L_00319AA0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[3].w[0] + 6048u);
    set32(c.r[6], c.r[3].w[0] + c.r[17].w[0]);
    c.budget -= 3;
L_00319AAC:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    set32(c.r[5], 0u + 3u);
    st16((c.r[18].w[0] + 1576u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 2u)));
    st16((c.r[18].w[0] + 1582u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[18].w[0] + 1580u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[18].w[0] + 1578u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 4u)));
    st16((c.r[18].w[0] + 1584u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[18].w[0] + 1586u), static_cast<std::uint16_t>(0u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 6u)));
    st16((c.r[18].w[0] + 1588u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 8u)));
    st16((c.r[18].w[0] + 1594u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[18].w[0] + 1592u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[18].w[0] + 1590u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 10u)));
    st16((c.r[18].w[0] + 1596u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[18].w[0] + 1598u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 23;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_00319B44; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 25608u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_00319B3C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00319B2C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00319B44; } }
L_00319B2C:
    st16((c.r[18].w[0] + 1588u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 1576u), static_cast<std::uint16_t>(c.r[5].w[0]));  if (t) { goto L_00319B44; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_00319B3C:
    st16((c.r[18].w[0] + 1588u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[18].w[0] + 1576u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00319B44:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[3].w[0] + 6624u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[7], c.r[3].w[0] - 27888u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[6], c.r[3].w[0] - 27884u);
    st32((c.r[18].w[0] + 8408u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[5], c.r[3].w[0] - 1472u);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8386u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[3].w[0] - 1472u);
    set32(c.r[3], c.r[8].w[0] << 3);
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[18].w[0] + 256u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8386u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[18].w[0] + 260u), c.f[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8387u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8386u)));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[3].w[0] << 3);
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[18].w[0] + 1604u), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8387u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8386u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    st32((c.r[18].w[0] + 1608u), c.f[0]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 47;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00319C00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[6], c.r[2].w[0] - 6784u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] - 7216u);
    set32(c.r[3], c.r[3].w[0] - 32u);
    set32(c.r[11], c.r[3].w[0] << 3);
    set32(c.r[7], c.r[6].w[0] + c.r[11].w[0]);
    c.f[0] = ld32((c.r[7].w[0]));
    set32(c.r[10], c.r[3].w[0] << 4);
    set32(c.r[13], c.r[2].w[0] + c.r[10].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[2].w[0] + 2608u);
    st32((c.r[4].w[0] + 1060u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 4u));
    set32(c.r[6], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[9], c.r[3].w[0] << 1);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    st32((c.r[4].w[0] + 1064u), c.f[0]);
    c.f[0] = ld32((c.r[13].w[0]));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[7], c.r[7].w[0] + 1552u);
    set32(c.r[24], c.r[7].w[0] + c.r[6].w[0]);
    st32((c.r[4].w[0] + 992u), c.f[0]);
    c.f[0] = ld32((c.r[13].w[0] + 4u));
    set32(c.r[7], c.r[9].w[0] + c.r[3].w[0]);
    set32(c.r[8], c.r[7].w[0] << 2);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[7], c.r[7].w[0] - 6432u);
    st32((c.r[4].w[0] + 996u), c.f[0]);
    c.f[0] = ld32((c.r[13].w[0] + 8u));
    set32(c.r[12], c.r[7].w[0] + c.r[8].w[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[7], c.r[7].w[0] - 6992u);
    st32((c.r[4].w[0] + 1000u), c.f[0]);
    c.f[0] = ld32((c.r[13].w[0] + 12u));
    set32(c.r[15], c.r[7].w[0] + c.r[9].w[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[7], c.r[7].w[0] - 7600u);
    st32((c.r[4].w[0] + 1056u), c.f[0]);
    c.r[25].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    set32(c.r[14], c.r[7].w[0] + c.r[6].w[0]);
    c.r[13].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[13], c.r[13].w[0] - 3408u);
    st16((c.r[4].w[0] + 852u), static_cast<std::uint16_t>(c.r[25].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 2u)));
    set32(c.r[7], c.r[3].w[0] << 5);
    set32(c.r[17], c.r[13].w[0] + c.r[7].w[0]);
    mmi::paddub(c.r[13], c.r[0], c.r[0]);
    mmi::paddub(c.r[25], c.r[16], c.r[0]);
    st16((c.r[4].w[0] + 854u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[24].w[0]));
    st32((c.r[4].w[0] + 1036u), c.f[0]);
    c.f[0] = ld32((c.r[12].w[0]));
    st32((c.r[4].w[0] + 1048u), c.f[0]);
    c.f[0] = ld32((c.r[12].w[0] + 4u));
    st32((c.r[4].w[0] + 1040u), c.f[0]);
    c.f[0] = ld32((c.r[12].w[0] + 8u));
    st32((c.r[4].w[0] + 1044u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[15].w[0])));
    st16((c.r[4].w[0] + 856u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[14].w[0]));
    st32((c.r[4].w[0] + 1136u), c.f[0]);
    c.budget -= 68;
L_00319D10:
    c.f[0] = ld32((c.r[17].w[0]));
    set32(c.r[13], c.r[13].w[0] + 1u);
    c.r[2].d[0] = c.r[13].sd[0] < 8ll ? 1ull : 0ull;
    st32((c.r[25].w[0] + 1072u), c.f[0]);
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[25], c.r[25].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00319D10u | kUnwind; return; } goto L_00319D10; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[2].w[0] - 432u);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    mmi::paddub(c.r[13], c.r[0], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[2].w[0] + 432u);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[12], c.r[2].w[0] + 32u);
    st32((c.r[16].w[0] + 1140u), c.f[0]);
    mmi::paddub(c.r[7], c.r[16], c.r[0]);
    c.budget -= 11;
L_00319D58:
    c.f[0] = ld32((c.r[12].w[0]));
    set32(c.r[13], c.r[13].w[0] + 1u);
    c.r[2].d[0] = c.r[13].sd[0] < 8ll ? 1ull : 0ull;
    st32((c.r[7].w[0] + 1104u), c.f[0]);
    set32(c.r[12], c.r[12].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00319D58u | kUnwind; return; } goto L_00319D58; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[2].w[0] - 288u);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    mmi::paddub(c.r[6], c.r[16], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] - 5008u);
    set32(c.r[7], c.r[2].w[0] + c.r[8].w[0]);
    st32((c.r[16].w[0] + 1144u), c.f[0]);
    mmi::paddub(c.r[8], c.r[0], c.r[0]);
    c.budget -= 10;
L_00319D9C:
    c.f[0] = ld32((c.r[7].w[0]));
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[2].d[0] = c.r[8].sd[0] < 3ll ? 1ull : 0ull;
    st32((c.r[6].w[0] + 1024u), c.f[0]);
    set32(c.r[7], c.r[7].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00319D9Cu | kUnwind; return; } goto L_00319D9C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] - 4816u);
    set32(c.r[2], c.r[2].w[0] + c.r[9].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] - 4736u);
    set32(c.r[2], c.r[2].w[0] + c.r[9].w[0]);
    st16((c.r[16].w[0] + 878u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    st16((c.r[16].w[0] + 874u), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[6], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 15;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { goto L_00319E1C; } }
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8437u)));
    set32(c.r[3], c.r[2].w[0] << 4);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[2], c.r[2].w[0] - 18784u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] << 4);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[6].w[0] + c.r[2].w[0]);  if (t) { goto L_00319E28; } }
L_00319E1C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] - 5952u);
    set32(c.r[7], c.r[2].w[0] + c.r[10].w[0]);
    c.budget -= 3;
L_00319E28:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[2].w[0] + 9344u);
    set32(c.r[6], c.r[2].w[0] + c.r[11].w[0]);
    st16((c.r[16].w[0] + 818u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 816u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 2u)));
    set32(c.r[2], 0u + 41u);
    st16((c.r[16].w[0] + 830u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 4u)));
    st16((c.r[16].w[0] + 832u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 6u)));
    st16((c.r[16].w[0] + 836u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 8u)));
    st16((c.r[16].w[0] + 820u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 10u)));
    st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 12u)));
    st16((c.r[16].w[0] + 824u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 14u)));
    st16((c.r[16].w[0] + 826u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 828u), static_cast<std::uint16_t>(0u));
    c.f[0] = ld32((c.r[6].w[0]));
    st32((c.r[16].w[0] + 1148u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    st32((c.r[16].w[0] + 1152u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.budget -= 29;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00319EA8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[2].w[0] - 5424u);  if (t) { goto L_00319EB0; } }
L_00319EA8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[17], c.r[2].w[0] - 5440u);
    c.budget -= 2;
L_00319EB0:
    c.f[0] = ld32((c.r[17].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.f[1] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47800000u);
    c.f[2] = c.r[2].w[0];
    st32((c.r[16].w[0] + 1248u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    st32((c.r[16].w[0] + 1252u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319EE8u); c.f[12] = fp::mul(c.f[2], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x00319EE8u) [[unlikely]] return; }
L_00319EE8:
    st16((c.r[16].w[0] + 1256u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[1] = ld32((c.r[17].w[0] + 12u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.f[2] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47800000u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 1u, c.f[1], c.f[2]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319F18u); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x00319F18u) [[unlikely]] return; }
L_00319F18:
    st16((c.r[16].w[0] + 1258u), static_cast<std::uint16_t>(c.r[2].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00319F30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    c.f[0] = ld32((c.r[1].w[0] - 2528u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[6], c.r[2].w[0] + 6768u);
    set32(c.r[8], c.r[3].w[0] - 32u);
    st32((c.r[4].w[0] + 1060u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.f[0] = ld32((c.r[1].w[0] - 2524u));
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    mmi::paddub(c.r[9], c.r[16], c.r[0]);
    st32((c.r[4].w[0] + 1064u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.f[0] = ld32((c.r[1].w[0] + 6704u));
    st32((c.r[4].w[0] + 992u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.f[0] = ld32((c.r[1].w[0] + 6708u));
    st32((c.r[4].w[0] + 996u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.f[0] = ld32((c.r[1].w[0] + 6712u));
    st32((c.r[4].w[0] + 1000u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 2520u)));
    st16((c.r[4].w[0] + 852u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 2518u)));
    st16((c.r[4].w[0] + 854u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.f[0] = ld32((c.r[1].w[0] - 2516u));
    st32((c.r[4].w[0] + 1036u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.f[0] = ld32((c.r[1].w[0] + 6744u));
    st32((c.r[4].w[0] + 1048u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.f[0] = ld32((c.r[1].w[0] + 6748u));
    st32((c.r[4].w[0] + 1040u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.f[0] = ld32((c.r[1].w[0] + 6752u));
    st32((c.r[4].w[0] + 1044u), c.f[0]);
    c.budget -= 44;
L_00319FE0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[2].d[0] = c.r[7].sd[0] < 9ll ? 1ull : 0ull;
    st16((c.r[9].w[0] + 856u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[6], c.r[6].w[0] + 2u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[9], c.r[9].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00319FE0u | kUnwind; return; } goto L_00319FE0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.f[0] = ld32((c.r[1].w[0] - 2512u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], c.r[2].w[0] + 6800u);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    mmi::paddub(c.r[6], c.r[16], c.r[0]);
    st32((c.r[16].w[0] + 1136u), c.f[0]);
    c.budget -= 7;
L_0031A018:
    c.f[0] = ld32((c.r[3].w[0]));
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[2].d[0] = c.r[7].sd[0] < 8ll ? 1ull : 0ull;
    st32((c.r[6].w[0] + 1072u), c.f[0]);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031A018u | kUnwind; return; } goto L_0031A018; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.f[0] = ld32((c.r[1].w[0] - 2508u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[6], c.r[2].w[0] + 6832u);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    mmi::paddub(c.r[3], c.r[16], c.r[0]);
    st32((c.r[16].w[0] + 1140u), c.f[0]);
    c.budget -= 7;
L_0031A050:
    c.f[0] = ld32((c.r[6].w[0]));
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[2].d[0] = c.r[7].sd[0] < 8ll ? 1ull : 0ull;
    st32((c.r[3].w[0] + 1104u), c.f[0]);
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031A050u | kUnwind; return; } goto L_0031A050; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[2].w[0] - 288u);
    set32(c.r[3], c.r[8].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    mmi::paddub(c.r[3], c.r[16], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[6], c.r[2].w[0] + 6864u);
    st32((c.r[16].w[0] + 1144u), c.f[0]);
    c.budget -= 10;
L_0031A094:
    c.f[0] = ld32((c.r[6].w[0]));
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[2].d[0] = c.r[7].sd[0] < 3ll ? 1ull : 0ull;
    st32((c.r[3].w[0] + 1024u), c.f[0]);
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031A094u | kUnwind; return; } goto L_0031A094; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] - 4816u);
    set32(c.r[7], c.r[8].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    set32(c.r[3], c.r[8].w[0] << 3);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] - 4736u);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    st16((c.r[16].w[0] + 878u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[2].w[0] + 9344u);
    set32(c.r[7], c.r[2].w[0] + c.r[3].w[0]);
    st16((c.r[16].w[0] + 874u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 6720u)));
    set32(c.r[2], 0u + 41u);
    st16((c.r[16].w[0] + 818u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 816u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 6722u)));
    st16((c.r[16].w[0] + 830u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 6724u)));
    st16((c.r[16].w[0] + 832u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 6726u)));
    st16((c.r[16].w[0] + 836u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 6728u)));
    st16((c.r[16].w[0] + 820u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 6730u)));
    st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 6732u)));
    st16((c.r[16].w[0] + 824u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 6734u)));
    st16((c.r[16].w[0] + 826u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 828u), static_cast<std::uint16_t>(0u));
    c.f[0] = ld32((c.r[7].w[0]));
    st32((c.r[16].w[0] + 1148u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 4u));
    st32((c.r[16].w[0] + 1152u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.budget -= 49;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0031A180; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[2].w[0] - 5424u);  if (t) { goto L_0031A188; } }
L_0031A180:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[17], c.r[2].w[0] - 5440u);
    c.budget -= 2;
L_0031A188:
    c.f[0] = ld32((c.r[17].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.f[1] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47800000u);
    c.f[2] = c.r[2].w[0];
    st32((c.r[16].w[0] + 1248u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    st32((c.r[16].w[0] + 1252u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A1C0u); c.f[12] = fp::mul(c.f[2], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x0031A1C0u) [[unlikely]] return; }
L_0031A1C0:
    st16((c.r[16].w[0] + 1256u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[1] = ld32((c.r[17].w[0] + 12u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.f[2] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47800000u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 1u, c.f[1], c.f[2]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A1F0u); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x0031A1F0u) [[unlikely]] return; }
L_0031A1F0:
    set32(c.r[4], 0u + 1u);
    st16((c.r[16].w[0] + 1258u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 790u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0031A220; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A218u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0014(c, 143u, depth + 1u); else { c.pc = 0x001529F0u; return; } if (c.pc != 0x0031A218u) [[unlikely]] return; }
L_0031A218:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 890u)));  if (t) { goto L_0031A348; } }
L_0031A220:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 95u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0031A344; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8391u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031A244; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0031A344; } }
L_0031A244:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 801u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_0031A33C; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 801u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], c.r[2].w[0] - 7248u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8389u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[2], c.r[2].w[0] - 14304u);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.r[7].d[0] = c.r[2].d[0] << 56;
    set32(c.r[2], c.r[28].w[0] - 26520u);
    set32(c.r[8], c.r[2].w[0] + c.r[6].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], c.r[2].w[0] + 6608u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[2], c.r[2].w[0] + 6512u);
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    set32(c.r[4], c.r[6].w[0] + 1u);
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[5], c.r[7].w[0] + c.r[5].w[0]);
    c.r[7].d[0] = c.r[5].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 256u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.f[3] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[16].w[0] + 32u), c.f[3]);
    st32((c.r[16].w[0] + 36u), c.f[2]);
    st32((c.r[16].w[0] + 40u), c.f[1]);
    st32((c.r[16].w[0] + 44u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 16u)));
    st8((c.r[16].w[0] + 890u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] << 8);
    c.budget -= 58;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 84u), c.r[2].w[0]);  if (t) { goto L_0031A344; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_0031A33C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A344u);  if (depth < kMaxDepth) unit_0090(c, 165u, depth + 1u); else { c.pc = 0x00342960u; return; } if (c.pc != 0x0031A344u) [[unlikely]] return; }
L_0031A344:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 890u)));
    c.budget -= 1;
L_0031A348:
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0031A380; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A36Cu); set32(c.r[5], c.r[3].w[0] + 592u);  if (depth < kMaxDepth) unit_0092(c, 260u, depth + 1u); else { c.pc = 0x0034B0B0u; return; } if (c.pc != 0x0031A36Cu) [[unlikely]] return; }
L_0031A36C:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A378u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_003C(c, 229u, depth + 1u); else { c.pc = 0x001F3280u; return; } if (c.pc != 0x0031A378u) [[unlikely]] return; }
L_0031A378:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 884u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0031A390; } }
L_0031A380:
    set32(c.r[5], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A38Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 300u, depth + 1u); else { c.pc = 0x0034B640u; return; } if (c.pc != 0x0031A38Cu) [[unlikely]] return; }
L_0031A38C:
    st8((c.r[16].w[0] + 884u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0031A390:
    st8((c.r[16].w[0] + 885u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 891u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 880u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 882u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 104u), 0u);
    st32((c.r[16].w[0] + 1004u), 0u);
    st32((c.r[16].w[0] + 48u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 56u), 0u);
    st32((c.r[16].w[0] + 108u), 0u);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0031A3D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    set32(c.r[3], 0u + 33u);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_0031A3F8; } }
    set32(c.r[3], 0u + 41u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0031A408; } }
L_0031A3F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A400u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0090(c, 175u, depth + 1u); else { c.pc = 0x00342BC0u; return; } if (c.pc != 0x0031A400u) [[unlikely]] return; }
L_0031A400:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0031A594; } }
L_0031A408:
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 712u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 714u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 716u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 718u), static_cast<std::uint16_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 891u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0031A590; } }
    set32(c.r[3], 0u + 4000u);
    st16((c.r[16].w[0] + 816u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 890u)));
    set32(c.r[3], 0u + 15u);
    c.budget -= 6;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 1u);  goto L_0031A584; }
    set32(c.r[3], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 9u);  if (t) { goto L_0031A458; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031A590; } }
    set32(c.r[3], 0u + 9u);
    c.budget -= 1;
L_0031A458:
    st8((c.r[16].w[0] + 739u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 740u), static_cast<std::uint8_t>(0u));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 884u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0031A554; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0031A500; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0031A4C8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0031A498; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031A590; } }
L_0031A498:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A4A0u);  if (depth < kMaxDepth) unit_0086(c, 148u, depth + 1u); else { c.pc = 0x0031A620u; return; } if (c.pc != 0x0031A4A0u) [[unlikely]] return; }
L_0031A4A0:
    set32(c.r[5], 0u + 9u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A4ACu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_003C(c, 227u, depth + 1u); else { c.pc = 0x001F3160u; return; } if (c.pc != 0x0031A4ACu) [[unlikely]] return; }
L_0031A4AC:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 884u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 884u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0031A590; } }
L_0031A4C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A4D0u);  if (depth < kMaxDepth) unit_0086(c, 148u, depth + 1u); else { c.pc = 0x0031A620u; return; } if (c.pc != 0x0031A4D0u) [[unlikely]] return; }
L_0031A4D0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0031A4F0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 884u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 884u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0031A590; } }
L_0031A4F0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 884u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 884u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0031A590; } }
L_0031A500:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A508u);  if (depth < kMaxDepth) unit_0086(c, 148u, depth + 1u); else { c.pc = 0x0031A620u; return; } if (c.pc != 0x0031A508u) [[unlikely]] return; }
L_0031A508:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 704u));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A51Cu); st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0086(c, 145u, depth + 1u); else { c.pc = 0x0031A5A0u; return; } if (c.pc != 0x0031A51Cu) [[unlikely]] return; }
L_0031A51C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031A590; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 884u)));
    set32(c.r[3], 0u + 30u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 884u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st16((c.r[16].w[0] + 880u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 788u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    st8((c.r[16].w[0] + 788u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 795u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 795u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0031A590; } }
L_0031A554:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 880u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_0031A578; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A568u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_003C(c, 227u, depth + 1u); else { c.pc = 0x001F3160u; return; } if (c.pc != 0x0031A568u) [[unlikely]] return; }
L_0031A568:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 891u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0031A590; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_0031A578:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 880u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0031A590; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0031A584:
    set32(c.r[5], 0u + 9u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A590u); st8((c.r[16].w[0] + 891u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003C(c, 227u, depth + 1u); else { c.pc = 0x001F3160u; return; } if (c.pc != 0x0031A590u) [[unlikely]] return; }
L_0031A590:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0031A594:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0031A5A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.f[4] = ld32((c.r[4].w[0] + 32u));
    c.f[0] = ld32((c.r[4].w[0] + 40u));
    c.f[2] = ld32((c.r[4].w[0] + 36u));
    c.f[5] = ld32((c.r[2].w[0] + 592u));
    c.f[1] = ld32((c.r[2].w[0] + 600u));
    c.f[3] = ld32((c.r[2].w[0] + 596u));
    c.f[4] = fp::sub(c.f[5], c.f[4]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[4], c.f[4]);
    c.f[20] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A5E0u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x0031A5E0u) [[unlikely]] return; }
L_0031A5E0:
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A5ECu); c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x0031A5ECu) [[unlikely]] return; }
L_0031A5EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43D20000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0031A60C; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_0031A60C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0031A620:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.f[13] = 0u;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[12] = c.r[2].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A640u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0086(c, 150u, depth + 1u); else { c.pc = 0x0031A670u; return; } if (c.pc != 0x0031A640u) [[unlikely]] return; }
L_0031A640:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031A654; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 4096ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0031A654:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0031A670:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    st32((c.r[29].w[0] + 16u), 0u);
    st32((c.r[29].w[0] + 20u), c.f[13]);
    set32(c.r[4], c.r[4].w[0] + 8320u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A68Cu); st32((c.r[29].w[0] + 24u), c.f[12]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x0031A68Cu) [[unlikely]] return; }
L_0031A68C:
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A698u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x0031A698u) [[unlikely]] return; }
L_0031A698:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A6A0u); set32(c.r[4], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_0077(c, 192u, depth + 1u); else { c.pc = 0x002DE280u; return; } if (c.pc != 0x0031A6A0u) [[unlikely]] return; }
L_0031A6A0:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0031A6B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    set32(c.r[3], 0u + 33u);
    c.budget -= 8;
    if (c.r[4].d[0] == c.r[3].d[0]) { mmi::paddub(c.r[4], c.r[16], c.r[0]);  goto L_0031A6E0; }
    set32(c.r[3], 0u + 41u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0031A6F0; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_0031A6E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A6E8u);  if (depth < kMaxDepth) unit_0090(c, 200u, depth + 1u); else { c.pc = 0x00342F30u; return; } if (c.pc != 0x0031A6E8u) [[unlikely]] return; }
L_0031A6E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0031A83C; } }
L_0031A6F0:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 578u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0031A704; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 789u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0031A704:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 789u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0031A71C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    st32((c.r[16].w[0] + 1068u), c.r[3].w[0]);
    c.budget -= 2;
L_0031A71C:
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 712u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 714u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 716u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], 0u + 4000u);
    st16((c.r[16].w[0] + 718u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 816u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[5], 0u + 9u);
    st8((c.r[16].w[0] + 739u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 740u), static_cast<std::uint8_t>(0u));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 888u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 14;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[5], 0u + 1u);  goto L_0031A7E0; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { mmi::paddub(c.r[4], c.r[16], c.r[0]);  goto L_0031A79C; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], c.r[4].w[0] + 1u);  goto L_0031A774; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031A838; } }
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_0031A774:
    st8((c.r[16].w[0] + 888u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A784u); st16((c.r[16].w[0] + 886u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_003C(c, 227u, depth + 1u); else { c.pc = 0x001F3160u; return; } if (c.pc != 0x0031A784u) [[unlikely]] return; }
L_0031A784:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A790u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_003C(c, 229u, depth + 1u); else { c.pc = 0x001F3280u; return; } if (c.pc != 0x0031A790u) [[unlikely]] return; }
L_0031A790:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031A838; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_0031A79C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A7A4u);  if (depth < kMaxDepth) unit_0086(c, 161u, depth + 1u); else { c.pc = 0x0031A850u; return; } if (c.pc != 0x0031A7A4u) [[unlikely]] return; }
L_0031A7A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A7ACu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0086(c, 168u, depth + 1u); else { c.pc = 0x0031A940u; return; } if (c.pc != 0x0031A7ACu) [[unlikely]] return; }
L_0031A7AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031A838; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 888u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 888u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 788u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    st8((c.r[16].w[0] + 788u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 795u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 795u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0031A838; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_0031A7E0:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A7ECu); st8((c.r[16].w[0] + 789u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_003C(c, 227u, depth + 1u); else { c.pc = 0x001F3160u; return; } if (c.pc != 0x0031A7ECu) [[unlikely]] return; }
L_0031A7EC:
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u + 3u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0031A814; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8391u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 4000u);  if (t) { goto L_0031A834; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 790u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0031A830; } }
L_0031A814:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8391u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0031A830; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8440u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0031A830; } }
    st8((c.r[16].w[0] + 790u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0031A830:
    set32(c.r[3], 0u + 4000u);
    c.budget -= 1;
L_0031A834:
    st16((c.r[16].w[0] + 816u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 1;
L_0031A838:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0031A83C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0031A850:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A868u); set32(c.r[4], c.r[16].w[0] + 8320u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x0031A868u) [[unlikely]] return; }
L_0031A868:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A878u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 211u, depth + 1u); else { c.pc = 0x00102548u; return; } if (c.pc != 0x0031A878u) [[unlikely]] return; }
L_0031A878:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A888u); set32(c.r[4], c.r[2].w[0] + 592u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x0031A888u) [[unlikely]] return; }
L_0031A888:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A890u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x0031A890u) [[unlikely]] return; }
L_0031A890:
    c.f[13] = ld32((c.r[29].w[0] + 40u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A89Cu); c.f[12] = ld32((c.r[29].w[0] + 32u));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x0031A89Cu) [[unlikely]] return; }
L_0031A89C:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[1].d[0] = c.r[3].sd[0] < 4097ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0031A8C4; } }
    c.r[2].d[0] = 0ull | 61440ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = 0ull | 32769ull;  if (t) { goto L_0031A8D8; } }
L_0031A8C4:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0031A900; } }
    c.r[1].d[0] = 0ull | 32769ull;
    c.budget -= 1;
L_0031A8D8:
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0031A8F4; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] | 2048ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0031A900; } }
L_0031A8F4:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] | 1024ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0031A900:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[12] = c.r[2].w[0];
    c.f[13] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A914u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0086(c, 150u, depth + 1u); else { c.pc = 0x0031A670u; return; } if (c.pc != 0x0031A914u) [[unlikely]] return; }
L_0031A914:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031A928; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 4096ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0031A928:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0031A940:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.f[4] = ld32((c.r[4].w[0] + 32u));
    c.f[0] = ld32((c.r[4].w[0] + 40u));
    c.f[2] = ld32((c.r[4].w[0] + 36u));
    c.f[5] = ld32((c.r[2].w[0] + 592u));
    c.f[1] = ld32((c.r[2].w[0] + 600u));
    c.f[3] = ld32((c.r[2].w[0] + 596u));
    c.f[4] = fp::sub(c.f[5], c.f[4]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[4], c.f[4]);
    c.f[20] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A980u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x0031A980u) [[unlikely]] return; }
L_0031A980:
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A98Cu); c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x0031A98Cu) [[unlikely]] return; }
L_0031A98C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43D20000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0031A9AC; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_0031A9AC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0031A9C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8433u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0031A9E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0031AA04; } }
L_0031A9E0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_0031A9FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0031AA04; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_0031A9FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031AA04u);  if (depth < kMaxDepth) unit_005B(c, 88u, depth + 1u); else { c.pc = 0x0026D880u; return; } if (c.pc != 0x0031AA04u) [[unlikely]] return; }
L_0031AA04:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0031AA10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8433u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0031AA30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0031AA80; } }
L_0031AA30:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 816u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0031AA44; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0031AA80; } }
L_0031AA44:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031AA5C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0031AA80; } }
L_0031AA5C:
    c.r[2].d[0] = ld16((c.r[4].w[0] + 708u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0031AA80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031AA74u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_005B(c, 88u, depth + 1u); else { c.pc = 0x0026D880u; return; } if (c.pc != 0x0031AA74u) [[unlikely]] return; }
L_0031AA74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031AA80; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_0031AA80:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0031AA90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 816u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031AACC; } }
    c.r[2].d[0] = ld16((c.r[4].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0031AAC4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 778u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0031AACC; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_0031AAC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0031AAE0; } }
L_0031AACC:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 836u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031AADCu); st16((c.r[4].w[0] + 834u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_005B(c, 88u, depth + 1u); else { c.pc = 0x0026D880u; return; } if (c.pc != 0x0031AADCu) [[unlikely]] return; }
L_0031AADC:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_0031AAE0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0031AAF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8433u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0031AB18; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_0031AB20; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_0031AB18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0031AB60; } }
L_0031AB20:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031AB38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0031AB5C; } }
L_0031AB38:
    c.r[2].d[0] = ld16((c.r[4].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] & 15360ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0031AB5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031AB50u);  if (depth < kMaxDepth) unit_005B(c, 88u, depth + 1u); else { c.pc = 0x0026D880u; return; } if (c.pc != 0x0031AB50u) [[unlikely]] return; }
L_0031AB50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031AB5C; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_0031AB5C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_0031AB60:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0031AB70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031AB90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0031ABB4; } }
L_0031AB90:
    c.r[2].d[0] = ld16((c.r[4].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] & 15360ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 5u);  if (t) { goto L_0031ABAC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0031ABB4; } }
    set32(c.r[5], 0u + 5u);
    c.budget -= 1;
L_0031ABAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031ABB4u);  if (depth < kMaxDepth) unit_005B(c, 88u, depth + 1u); else { c.pc = 0x0026D880u; return; } if (c.pc != 0x0031ABB4u) [[unlikely]] return; }
L_0031ABB4:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0031ABC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8433u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0031ABE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0031AC64; } }
L_0031ABE0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 816u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0031ABF4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0031AC64; } }
L_0031ABF4:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 784u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031AC08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0031AC64; } }
L_0031AC08:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0031AC28; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 780u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031AC30; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_0031AC28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0031AC68; } }
L_0031AC30:
    c.r[2].d[0] = ld16((c.r[4].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0031AC50; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 794u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 6u);  if (t) { goto L_0031AC5C; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_0031AC50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031AC64; } }
    set32(c.r[5], 0u + 6u);
    c.budget -= 1;
L_0031AC5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031AC64u);  if (depth < kMaxDepth) unit_005B(c, 88u, depth + 1u); else { c.pc = 0x0026D880u; return; } if (c.pc != 0x0031AC64u) [[unlikely]] return; }
L_0031AC64:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_0031AC68:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0031AC70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 736u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_0031AC94; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0031ACE8; } }
L_0031AC94:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 816u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031ACB8; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031ACB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0031ACE8; } }
L_0031ACB8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0031ACD4; } }
    set32(c.r[5], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031ACD4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 88u, depth + 1u); else { c.pc = 0x0026D880u; return; } if (c.pc != 0x0031ACD4u) [[unlikely]] return; }
L_0031ACD4:
    st8((c.r[16].w[0] + 274u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 836u)));
    set32(c.r[2], 0u + 1u);
    st16((c.r[16].w[0] + 834u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 763u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
L_0031ACE8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0031AD00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8433u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_0031AD28; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0031AD30; } }
L_0031AD28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0031ADD8; } }
L_0031AD30:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031AD48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0031ADD8; } }
L_0031AD48:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 784u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031AD5C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0031ADD8; } }
L_0031AD5C:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    set32(c.r[2], ld32((c.r[16].w[0] + 724u)));
    c.r[3].d[0] = c.r[3].d[0] & 15360ull;
    set32(c.r[3], c.r[3].w[0] << 10);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 9u);  if (t) { goto L_0031AD84; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0031ADD8; } }
    set32(c.r[5], 0u + 9u);
    c.budget -= 1;
L_0031AD84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031AD8Cu);  if (depth < kMaxDepth) unit_005B(c, 88u, depth + 1u); else { c.pc = 0x0026D880u; return; } if (c.pc != 0x0031AD8Cu) [[unlikely]] return; }
L_0031AD8C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0031AD9C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0031ADD8; } }
L_0031AD9C:
    set32(c.r[5], ld32((c.r[16].w[0] + 724u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[2].w[0] + 1040u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF0F0000u);
    c.r[3].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[2], c.r[5].w[0] >> 20);
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[4], c.r[4].w[0] << 10);
    st16((c.r[16].w[0] + 850u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 724u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 724u), c.r[3].w[0]);
    c.budget -= 15;
L_0031ADD8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0031ADF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 816u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0031AE0C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0031AE6C; } }
L_0031AE0C:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 784u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031AE20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0031AE6C; } }
L_0031AE20:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031AE38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0031AE6C; } }
L_0031AE38:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 704u));
    set32(c.r[2], ld32((c.r[4].w[0] + 724u)));
    c.r[3].d[0] = c.r[3].d[0] & 15360ull;
    set32(c.r[3], c.r[3].w[0] << 18);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 12u);  if (t) { goto L_0031AE60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0031AE6C; } }
    set32(c.r[5], 0u + 12u);
    c.budget -= 1;
L_0031AE60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031AE68u);  if (depth < kMaxDepth) unit_005B(c, 88u, depth + 1u); else { c.pc = 0x0026D880u; return; } if (c.pc != 0x0031AE68u) [[unlikely]] return; }
L_0031AE68:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0031AE6C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0031AE80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031AEA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0031AEE0; } }
L_0031AEA0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 816u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 14u);  if (t) { goto L_0031AED8; } }
    c.r[2].d[0] = ld16((c.r[4].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] & 15360ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0031AECC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 778u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0031AED4; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_0031AECC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0031AEE4; } }
L_0031AED4:
    set32(c.r[5], 0u + 14u);
    c.budget -= 1;
L_0031AED8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031AEE0u);  if (depth < kMaxDepth) unit_005B(c, 88u, depth + 1u); else { c.pc = 0x0026D880u; return; } if (c.pc != 0x0031AEE0u) [[unlikely]] return; }
L_0031AEE0:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_0031AEE4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0031AEF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8425u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0031AF10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0031AF54; } }
L_0031AF10:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031AF28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0031AF54; } }
L_0031AF28:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 704u));
    c.r[2].d[0] = ld16((c.r[4].w[0] + 706u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0031AF54; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031AF48u); set32(c.r[5], 0u + 15u);  if (depth < kMaxDepth) unit_005B(c, 88u, depth + 1u); else { c.pc = 0x0026D880u; return; } if (c.pc != 0x0031AF48u) [[unlikely]] return; }
L_0031AF48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031AF54; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_0031AF54:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0031AF60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_0031AF84; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0031AFD0; } }
L_0031AF84:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031AF9C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0031AFD0; } }
L_0031AF9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031AFA4u);  if (depth < kMaxDepth) unit_0076(c, 180u, depth + 1u); else { c.pc = 0x002DB050u; return; } if (c.pc != 0x0031AFA4u) [[unlikely]] return; }
L_0031AFA4:
    set32(c.r[5], 0u + 17u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031AFB0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 88u, depth + 1u); else { c.pc = 0x0026D880u; return; } if (c.pc != 0x0031AFB0u) [[unlikely]] return; }
L_0031AFB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 17u);  if (t) { goto L_0031AFC4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0031AFD0; } }
    set32(c.r[5], 0u + 17u);
    c.budget -= 1;
L_0031AFC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031AFCCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 87u, depth + 1u); else { c.pc = 0x0026D7B0u; return; } if (c.pc != 0x0031AFCCu) [[unlikely]] return; }
L_0031AFCC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0031AFD0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0031AFE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 816u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0031AFFC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0031B080; } }
L_0031AFFC:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 784u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031B010; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0031B080; } }
L_0031B010:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0031B030; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 780u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031B038; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_0031B030:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0031B084; } }
L_0031B038:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 704u));
    c.r[2].d[0] = c.r[3].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[3].d[0] & 128ull;  if (t) { goto L_0031B054; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0031B080; } }
    c.r[2].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 1;
L_0031B054:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0031B06C; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 794u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 18u);  if (t) { goto L_0031B078; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_0031B06C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031B080; } }
    set32(c.r[5], 0u + 18u);
    c.budget -= 1;
L_0031B078:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B080u);  if (depth < kMaxDepth) unit_005B(c, 88u, depth + 1u); else { c.pc = 0x0026D880u; return; } if (c.pc != 0x0031B080u) [[unlikely]] return; }
L_0031B080:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_0031B084:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0031B090:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 736u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_0031B0B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0031B108; } }
L_0031B0B4:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 816u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031B0D8; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031B0D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0031B108; } }
L_0031B0D8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0031B0F4; } }
    set32(c.r[5], 0u + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B0F4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 88u, depth + 1u); else { c.pc = 0x0026D880u; return; } if (c.pc != 0x0031B0F4u) [[unlikely]] return; }
L_0031B0F4:
    st8((c.r[16].w[0] + 274u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 836u)));
    set32(c.r[2], 0u + 1u);
    st16((c.r[16].w[0] + 834u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 763u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
L_0031B108:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0031B120:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { goto L_0031B164; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 784u));
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0031B164; } }
    st8((c.r[17].w[0] + 784u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_0031B164:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8433u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_0031B188; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 812u)));
    set32(c.r[2], 0u - 3u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st16((c.r[17].w[0] + 812u), static_cast<std::uint16_t>(c.r[2].w[0]));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 5;
L_0031B188:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B190u);  if (depth < kMaxDepth) unit_0076(c, 180u, depth + 1u); else { c.pc = 0x002DB050u; return; } if (c.pc != 0x0031B190u) [[unlikely]] return; }
L_0031B190:
    st32((c.r[17].w[0] + 1308u), 0u);
    st32((c.r[17].w[0] + 1304u), 0u);
    st32((c.r[17].w[0] + 96u), 0u);
    st32((c.r[17].w[0] + 68u), 0u);
    st32((c.r[17].w[0] + 52u), 0u);
    st32((c.r[17].w[0] + 108u), 0u);
    st32((c.r[17].w[0] + 104u), 0u);
    st8((c.r[17].w[0] + 741u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 812u)));
    set32(c.r[2], 0u - 31229u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st16((c.r[17].w[0] + 812u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 736u)));
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031B1D4; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 836u)));
    st16((c.r[17].w[0] + 834u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0031B1D4:
    st8((c.r[17].w[0] + 736u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 763u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 779u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8386u)));
    set32(c.r[2], 0u + 38u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[7].d[0] = c.r[16].d[0] << 48;  if (t) { goto L_0031B218; } }
    c.r[7].d[0] = c.r[16].d[0] << 48;
    c.f[12] = 0u;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B20Cu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 90u, depth + 1u); else { c.pc = 0x00264D10u; return; } if (c.pc != 0x0031B20Cu) [[unlikely]] return; }
L_0031B20C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_0031B234; } }
    c.r[7].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_0031B218:
    c.f[12] = 0u;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B230u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 137u, depth + 1u); else { c.pc = 0x00265FE0u; return; } if (c.pc != 0x0031B230u) [[unlikely]] return; }
L_0031B230:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_0031B234:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B23Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 87u, depth + 1u); else { c.pc = 0x0026D7B0u; return; } if (c.pc != 0x0031B23Cu) [[unlikely]] return; }
L_0031B23C:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B248u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 88u, depth + 1u); else { c.pc = 0x0026D880u; return; } if (c.pc != 0x0031B248u) [[unlikely]] return; }
L_0031B248:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0031B260:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_0031B29C; } }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[3], c.r[2].w[0] + 1u);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 784u));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0031B29C; } }
    st8((c.r[16].w[0] + 784u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_0031B29C:
    st8((c.r[16].w[0] + 763u), static_cast<std::uint8_t>(0u));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B2ACu); st8((c.r[16].w[0] + 779u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0076(c, 180u, depth + 1u); else { c.pc = 0x002DB050u; return; } if (c.pc != 0x0031B2ACu) [[unlikely]] return; }
L_0031B2AC:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B2B8u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 87u, depth + 1u); else { c.pc = 0x0026D7B0u; return; } if (c.pc != 0x0031B2B8u) [[unlikely]] return; }
L_0031B2B8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0031B2D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 1308u), 0u);
    st32((c.r[4].w[0] + 1304u), 0u);
    st32((c.r[4].w[0] + 96u), 0u);
    st32((c.r[4].w[0] + 68u), 0u);
    st32((c.r[4].w[0] + 52u), 0u);
    st32((c.r[4].w[0] + 108u), 0u);
    st32((c.r[4].w[0] + 104u), 0u);
    st8((c.r[4].w[0] + 741u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    set32(c.r[2], 0u - 31229u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st16((c.r[4].w[0] + 812u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 736u)));
    c.budget -= 18;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_0031B320; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 836u)));
    st16((c.r[16].w[0] + 834u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0031B320:
    st8((c.r[16].w[0] + 736u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 763u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 779u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[2], 0u + 38u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[7].d[0] = c.r[5].d[0] << 48;  if (t) { goto L_0031B364; } }
    c.r[7].d[0] = c.r[5].d[0] << 48;
    c.f[12] = 0u;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B358u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 90u, depth + 1u); else { c.pc = 0x00264D10u; return; } if (c.pc != 0x0031B358u) [[unlikely]] return; }
L_0031B358:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_0031B380; } }
    c.r[7].d[0] = c.r[5].d[0] << 48;
    c.budget -= 1;
L_0031B364:
    c.f[12] = 0u;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B37Cu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 137u, depth + 1u); else { c.pc = 0x00265FE0u; return; } if (c.pc != 0x0031B37Cu) [[unlikely]] return; }
L_0031B37C:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_0031B380:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B388u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 88u, depth + 1u); else { c.pc = 0x0026D880u; return; } if (c.pc != 0x0031B388u) [[unlikely]] return; }
L_0031B388:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0031B3A0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 732u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 1184u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00318000u < 16384u) { entry = entries_0086[(t - 0x00318000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0031B3C0:
    set32(c.r[2], 0u + 2u);
    st8((c.r[4].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 1216u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00318000u < 16384u) { entry = entries_0086[(t - 0x00318000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0031B3F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 7u);
    st8((c.r[4].w[0] + 275u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[4].w[0] + 276u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 277u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 575u), static_cast<std::uint8_t>(0u));
    c.f[0] = ld32((c.r[4].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42800000u);
    c.f[1] = c.r[2].w[0];
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[5], c.r[16].w[0] + 1424u);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B438u); st32((c.r[4].w[0] + 108u), c.f[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x0031B438u) [[unlikely]] return; }
L_0031B438:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 758u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);  if (t) { goto L_0031B478; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[7], 0u + 4u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B46Cu); st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x0031B46Cu) [[unlikely]] return; }
L_0031B46C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0031B500; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.budget -= 1;
L_0031B478:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B484u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 59u, depth + 1u); else { c.pc = 0x0034CDC0u; return; } if (c.pc != 0x0031B484u) [[unlikely]] return; }
L_0031B484:
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[5], 0u + 2u);  if (t) { goto L_0031B4DC; } }
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBD000000u);
    set32(c.r[5], c.r[16].w[0] + 1424u);
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B4B8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 316u, depth + 1u); else { c.pc = 0x0034B820u; return; } if (c.pc != 0x0031B4B8u) [[unlikely]] return; }
L_0031B4B8:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B4D0u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x0031B4D0u) [[unlikely]] return; }
L_0031B4D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031B4FC; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 1;
L_0031B4DC:
    c.f[12] = 0u;
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    set32(c.r[7], 0u + 8u);
    st32((c.r[16].w[0] + 1216u), c.r[2].w[0]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B4FCu); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x0031B4FCu) [[unlikely]] return; }
L_0031B4FC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0031B500:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0031B510:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 1u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B52Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x0031B52Cu) [[unlikely]] return; }
L_0031B52C:
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B538u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x0031B538u) [[unlikely]] return; }
L_0031B538:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B540u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x0031B540u) [[unlikely]] return; }
L_0031B540:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);  if (t) { goto L_0031B56C; } }
    set32(c.r[5], 0u + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B558u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 27u, depth + 1u); else { c.pc = 0x0034C680u; return; } if (c.pc != 0x0031B558u) [[unlikely]] return; }
L_0031B558:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B560u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 19u, depth + 1u); else { c.pc = 0x0034C550u; return; } if (c.pc != 0x0031B560u) [[unlikely]] return; }
L_0031B560:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0031B64C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.budget -= 1;
L_0031B56C:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B578u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x0031B578u) [[unlikely]] return; }
L_0031B578:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41100000u);  if (t) { goto L_0031B590; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B58Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0088(c, 47u, depth + 1u); else { c.pc = 0x00320460u; return; } if (c.pc != 0x0031B58Cu) [[unlikely]] return; }
L_0031B58C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41100000u);
    c.budget -= 1;
L_0031B590:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B59Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x0031B59Cu) [[unlikely]] return; }
L_0031B59C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031B648; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B5B4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 59u, depth + 1u); else { c.pc = 0x0034CDC0u; return; } if (c.pc != 0x0031B5B4u) [[unlikely]] return; }
L_0031B5B4:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_0031B620; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 4u);  goto L_0031B5D8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031B648; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_0031B5D8:
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBD000000u);
    set32(c.r[5], c.r[16].w[0] + 1424u);
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B5FCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 316u, depth + 1u); else { c.pc = 0x0034B820u; return; } if (c.pc != 0x0031B5FCu) [[unlikely]] return; }
L_0031B5FC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B618u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x0031B618u) [[unlikely]] return; }
L_0031B618:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031B648; } }
L_0031B620:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[12] = 0u;
    set32(c.r[7], 0u + 8u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    mmi::paddub(c.r[6], c.r[5], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B648u); st32((c.r[16].w[0] + 1216u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x0031B648u) [[unlikely]] return; }
L_0031B648:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0031B64C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0031B660:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B674u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x0031B674u) [[unlikely]] return; }
L_0031B674:
    c.f[1] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    set32(c.r[6], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B694u); st32((c.r[16].w[0] + 1216u), c.f[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x0031B694u) [[unlikely]] return; }
L_0031B694:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[16].w[0] + 1424u);  if (t) { goto L_0031B6BC; } }
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[5], c.r[16].w[0] + 1424u);  if (t) { goto L_0031B758; } }
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 1;
L_0031B6BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B6C4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 316u, depth + 1u); else { c.pc = 0x0034B820u; return; } if (c.pc != 0x0031B6C4u) [[unlikely]] return; }
L_0031B6C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B6D4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 59u, depth + 1u); else { c.pc = 0x0034CDC0u; return; } if (c.pc != 0x0031B6D4u) [[unlikely]] return; }
L_0031B6D4:
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0031B71C; } }
    set32(c.r[2], 0u + 4u);
    c.f[12] = 0u;
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBD000000u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 3u);
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B714u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x0031B714u) [[unlikely]] return; }
L_0031B714:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031B754; } }
L_0031B71C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 7u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 1164u));
    st32((c.r[16].w[0] + 1216u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 1156u));
    st32((c.r[16].w[0] + 104u), c.f[0]);
    st32((c.r[16].w[0] + 108u), 0u);
    st8((c.r[16].w[0] + 779u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 275u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 276u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 277u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 14;
L_0031B754:
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 1;
L_0031B758:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B760u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x0031B760u) [[unlikely]] return; }
L_0031B760:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0031B770:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B784u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x0031B784u) [[unlikely]] return; }
L_0031B784:
    set32(c.r[6], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B794u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x0031B794u) [[unlikely]] return; }
L_0031B794:
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B7A0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x0031B7A0u) [[unlikely]] return; }
L_0031B7A0:
    c.f[1] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[12] = c.r[2].w[0];
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B7C0u); st32((c.r[16].w[0] + 1216u), c.f[0]);  if (depth < kMaxDepth) unit_0093(c, 59u, depth + 1u); else { c.pc = 0x0034CDC0u; return; } if (c.pc != 0x0031B7C0u) [[unlikely]] return; }
L_0031B7C0:
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0031B7E8; } }
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0031B830; } }
L_0031B7E8:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBD000000u);
    set32(c.r[2], 0u + 7u);
    c.f[12] = 0u;
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 104u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 108u), c.r[3].w[0]);
    st8((c.r[16].w[0] + 275u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 276u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 3u);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B830u); st8((c.r[16].w[0] + 277u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x0031B830u) [[unlikely]] return; }
L_0031B830:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0031B840:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.f[12] = c.r[2].w[0];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[13] = c.r[2].w[0];
    set32(c.r[6], 0u + 1u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B86Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 191u, depth + 1u); else { c.pc = 0x002DE200u; return; } if (c.pc != 0x0031B86Cu) [[unlikely]] return; }
L_0031B86C:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[6], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B890u); st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x0031B890u) [[unlikely]] return; }
L_0031B890:
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B89Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x0031B89Cu) [[unlikely]] return; }
L_0031B89C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B8A4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x0031B8A4u) [[unlikely]] return; }
L_0031B8A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41B80000u);  if (t) { goto L_0031B8CC; } }
    set32(c.r[5], 0u + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B8B8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 27u, depth + 1u); else { c.pc = 0x0034C680u; return; } if (c.pc != 0x0031B8B8u) [[unlikely]] return; }
L_0031B8B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B8C0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 19u, depth + 1u); else { c.pc = 0x0034C550u; return; } if (c.pc != 0x0031B8C0u) [[unlikely]] return; }
L_0031B8C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0031B928; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B80000u);
    c.budget -= 1;
L_0031B8CC:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B8D8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 75u, depth + 1u); else { c.pc = 0x002D07A0u; return; } if (c.pc != 0x0031B8D8u) [[unlikely]] return; }
L_0031B8D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031B924; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0031B924; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBD000000u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 104u), c.r[3].w[0]);
    set32(c.r[6], 0u + 4u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B924u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x0031B924u) [[unlikely]] return; }
L_0031B924:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0031B928:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0031B940:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.f[12] = c.r[2].w[0];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[13] = c.r[2].w[0];
    set32(c.r[6], 0u + 1u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B96Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 191u, depth + 1u); else { c.pc = 0x002DE200u; return; } if (c.pc != 0x0031B96Cu) [[unlikely]] return; }
L_0031B96C:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[6], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B990u); st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x0031B990u) [[unlikely]] return; }
L_0031B990:
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B99Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x0031B99Cu) [[unlikely]] return; }
L_0031B99C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B9A4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x0031B9A4u) [[unlikely]] return; }
L_0031B9A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x42180000u);  if (t) { goto L_0031B9CC; } }
    set32(c.r[5], 0u + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B9B8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 27u, depth + 1u); else { c.pc = 0x0034C680u; return; } if (c.pc != 0x0031B9B8u) [[unlikely]] return; }
L_0031B9B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B9C0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 19u, depth + 1u); else { c.pc = 0x0034C550u; return; } if (c.pc != 0x0031B9C0u) [[unlikely]] return; }
L_0031B9C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0031BA28; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42180000u);
    c.budget -= 1;
L_0031B9CC:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B9D8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 75u, depth + 1u); else { c.pc = 0x002D07A0u; return; } if (c.pc != 0x0031B9D8u) [[unlikely]] return; }
L_0031B9D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031BA24; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0031BA24; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBD000000u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 104u), c.r[3].w[0]);
    set32(c.r[6], 0u + 5u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BA24u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x0031BA24u) [[unlikely]] return; }
L_0031BA24:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0031BA28:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0031BA40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 3u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BA5Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x0031BA5Cu) [[unlikely]] return; }
L_0031BA5C:
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BA68u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x0031BA68u) [[unlikely]] return; }
L_0031BA68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BA70u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x0031BA70u) [[unlikely]] return; }
L_0031BA70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031BA8C; } }
    set32(c.r[5], 0u + 9u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BA84u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 27u, depth + 1u); else { c.pc = 0x0034C680u; return; } if (c.pc != 0x0031BA84u) [[unlikely]] return; }
L_0031BA84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BA8Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 19u, depth + 1u); else { c.pc = 0x0034C550u; return; } if (c.pc != 0x0031BA8Cu) [[unlikely]] return; }
L_0031BA8C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0031BAA0:
    set32(c.r[2], 0u + 2u);
    st8((c.r[4].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 1248u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00318000u < 16384u) { entry = entries_0086[(t - 0x00318000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0031BAD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 7u);
    st8((c.r[4].w[0] + 275u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[4].w[0] + 276u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 277u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 575u), static_cast<std::uint8_t>(0u));
    c.f[0] = ld32((c.r[4].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42800000u);
    c.f[1] = c.r[2].w[0];
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[5], c.r[16].w[0] + 1424u);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BB18u); st32((c.r[4].w[0] + 108u), c.f[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x0031BB18u) [[unlikely]] return; }
L_0031BB18:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 758u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);  if (t) { goto L_0031BB58; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[7], 0u + 4u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BB4Cu); st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x0031BB4Cu) [[unlikely]] return; }
L_0031BB4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0031BBE0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.budget -= 1;
L_0031BB58:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BB64u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 59u, depth + 1u); else { c.pc = 0x0034CDC0u; return; } if (c.pc != 0x0031BB64u) [[unlikely]] return; }
L_0031BB64:
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[5], 0u + 2u);  if (t) { goto L_0031BBBC; } }
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBD000000u);
    set32(c.r[5], c.r[16].w[0] + 1424u);
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BB98u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 316u, depth + 1u); else { c.pc = 0x0034B820u; return; } if (c.pc != 0x0031BB98u) [[unlikely]] return; }
L_0031BB98:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 6u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BBB0u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x0031BBB0u) [[unlikely]] return; }
L_0031BBB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031BBDC; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 1;
L_0031BBBC:
    c.f[12] = 0u;
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    set32(c.r[7], 0u + 8u);
    st32((c.r[16].w[0] + 1216u), c.r[2].w[0]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BBDCu); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x0031BBDCu) [[unlikely]] return; }
L_0031BBDC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0031BBE0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0031BBF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 1u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BC0Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x0031BC0Cu) [[unlikely]] return; }
L_0031BC0C:
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BC18u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x0031BC18u) [[unlikely]] return; }
L_0031BC18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BC20u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x0031BC20u) [[unlikely]] return; }
L_0031BC20:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);  if (t) { goto L_0031BC4C; } }
    set32(c.r[5], 0u + 9u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BC38u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 27u, depth + 1u); else { c.pc = 0x0034C680u; return; } if (c.pc != 0x0031BC38u) [[unlikely]] return; }
L_0031BC38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BC40u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 19u, depth + 1u); else { c.pc = 0x0034C550u; return; } if (c.pc != 0x0031BC40u) [[unlikely]] return; }
L_0031BC40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0031BD28; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.budget -= 1;
L_0031BC4C:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BC58u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x0031BC58u) [[unlikely]] return; }
L_0031BC58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41100000u);  if (t) { goto L_0031BC70; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BC6Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0088(c, 47u, depth + 1u); else { c.pc = 0x00320460u; return; } if (c.pc != 0x0031BC6Cu) [[unlikely]] return; }
L_0031BC6C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41100000u);
    c.budget -= 1;
L_0031BC70:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BC7Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x0031BC7Cu) [[unlikely]] return; }
L_0031BC7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031BD24; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BC94u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 59u, depth + 1u); else { c.pc = 0x0034CDC0u; return; } if (c.pc != 0x0031BC94u) [[unlikely]] return; }
L_0031BC94:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_0031BCFC; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 4u);  goto L_0031BCB8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031BD24; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_0031BCB8:
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBD000000u);
    set32(c.r[5], c.r[16].w[0] + 1424u);
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BCDCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 316u, depth + 1u); else { c.pc = 0x0034B820u; return; } if (c.pc != 0x0031BCDCu) [[unlikely]] return; }
L_0031BCDC:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 6u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BCF4u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x0031BCF4u) [[unlikely]] return; }
L_0031BCF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031BD24; } }
L_0031BCFC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[12] = 0u;
    set32(c.r[7], 0u + 8u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    mmi::paddub(c.r[6], c.r[5], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BD24u); st32((c.r[16].w[0] + 1216u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x0031BD24u) [[unlikely]] return; }
L_0031BD24:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0031BD28:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0031BD40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BD54u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x0031BD54u) [[unlikely]] return; }
L_0031BD54:
    c.f[1] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    set32(c.r[6], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BD74u); st32((c.r[16].w[0] + 1216u), c.f[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x0031BD74u) [[unlikely]] return; }
L_0031BD74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[16].w[0] + 1424u);  if (t) { goto L_0031BD9C; } }
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[5], c.r[16].w[0] + 1424u);  if (t) { goto L_0031BE38; } }
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 1;
L_0031BD9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BDA4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 316u, depth + 1u); else { c.pc = 0x0034B820u; return; } if (c.pc != 0x0031BDA4u) [[unlikely]] return; }
L_0031BDA4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BDB4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 59u, depth + 1u); else { c.pc = 0x0034CDC0u; return; } if (c.pc != 0x0031BDB4u) [[unlikely]] return; }
L_0031BDB4:
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0031BDFC; } }
    set32(c.r[2], 0u + 4u);
    c.f[12] = 0u;
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBD000000u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 6u);
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BDF4u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x0031BDF4u) [[unlikely]] return; }
L_0031BDF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031BE34; } }
L_0031BDFC:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 7u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 1164u));
    st32((c.r[16].w[0] + 1216u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 1156u));
    st32((c.r[16].w[0] + 104u), c.f[0]);
    st32((c.r[16].w[0] + 108u), 0u);
    st8((c.r[16].w[0] + 779u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 275u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 276u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 277u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 14;
L_0031BE34:
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 1;
L_0031BE38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BE40u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x0031BE40u) [[unlikely]] return; }
L_0031BE40:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0031BE50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BE64u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x0031BE64u) [[unlikely]] return; }
L_0031BE64:
    set32(c.r[6], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BE74u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x0031BE74u) [[unlikely]] return; }
L_0031BE74:
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BE80u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x0031BE80u) [[unlikely]] return; }
L_0031BE80:
    c.f[1] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[12] = c.r[2].w[0];
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BEA0u); st32((c.r[16].w[0] + 1216u), c.f[0]);  if (depth < kMaxDepth) unit_0093(c, 59u, depth + 1u); else { c.pc = 0x0034CDC0u; return; } if (c.pc != 0x0031BEA0u) [[unlikely]] return; }
L_0031BEA0:
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0031BEC8; } }
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0031BF18; } }
L_0031BEC8:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBD000000u);
    set32(c.r[2], 0u + 7u);
    c.f[12] = 0u;
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[16].w[0] + 1216u), c.r[5].w[0]);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 104u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 108u), c.r[3].w[0]);
    st8((c.r[16].w[0] + 275u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 276u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 6u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BF18u); st8((c.r[16].w[0] + 277u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x0031BF18u) [[unlikely]] return; }
L_0031BF18:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0031BF30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.f[12] = c.r[2].w[0];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[13] = c.r[2].w[0];
    set32(c.r[6], 0u + 1u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BF5Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 191u, depth + 1u); else { c.pc = 0x002DE200u; return; } if (c.pc != 0x0031BF5Cu) [[unlikely]] return; }
L_0031BF5C:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[6], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BF80u); st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x0031BF80u) [[unlikely]] return; }
L_0031BF80:
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BF8Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x0031BF8Cu) [[unlikely]] return; }
L_0031BF8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BF94u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x0031BF94u) [[unlikely]] return; }
L_0031BF94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41600000u);  if (t) { goto L_0031BFBC; } }
    set32(c.r[5], 0u + 10u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BFA8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 27u, depth + 1u); else { c.pc = 0x0034C680u; return; } if (c.pc != 0x0031BFA8u) [[unlikely]] return; }
L_0031BFA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BFB0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 19u, depth + 1u); else { c.pc = 0x0034C550u; return; } if (c.pc != 0x0031BFB0u) [[unlikely]] return; }
L_0031BFB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { [[clang::musttail]] return unit_0087(c, 3u, depth); } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41600000u);
    c.budget -= 1;
L_0031BFBC:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BFC8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 75u, depth + 1u); else { c.pc = 0x002D07A0u; return; } if (c.pc != 0x0031BFC8u) [[unlikely]] return; }
L_0031BFC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0087(c, 2u, depth); } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0087(c, 2u, depth); } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBD000000u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[16].w[0] + 104u), c.r[3].w[0]);
    set32(c.r[6], 0u + 7u);
    c.budget -= 9;
    [[clang::musttail]] return unit_0087(c, 1u, depth);
}

}
