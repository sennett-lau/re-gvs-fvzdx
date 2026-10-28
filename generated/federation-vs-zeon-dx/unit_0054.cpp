#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0054[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 4, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 6, 7, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 15, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 20, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    27, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 34, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 43,
    0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 45, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 48, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 52, 0, 0, 0,
    0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0,
    0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0,
    69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0,
    0, 0, 71, 0, 0, 0, 0, 72, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0,
    0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0,
    0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0,
    0, 0, 0, 0, 85, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0,
    0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 102, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 108, 0, 109, 0, 0, 0, 0, 0, 110, 0, 111, 0, 0, 0, 0, 0, 112, 0,
    113, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0,
    127, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 129, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 132, 0, 0, 0, 0, 133, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 137, 0,
    0, 0, 0, 0, 0, 138, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146,
    0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 152,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0,
    0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 168, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 172, 0, 173, 0, 0, 0, 0, 0, 174, 0, 175, 0,
    0, 0, 0, 0, 176, 0, 177, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 183, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 190, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0,
    200, 0, 0, 0, 201, 0, 0, 0, 202, 0, 0, 0, 203, 0, 0, 0, 204, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0,
    210, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 212, 0, 213, 0, 0, 0, 0, 0, 0, 214, 0, 215, 0, 0, 0, 0, 0,
    216, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 219, 0, 220, 0, 0, 0, 0, 0, 0, 221, 0, 222,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0,
    0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 231, 0, 0, 0, 232, 0, 0, 0, 233, 0,
    0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0054(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00250000;
    case 2u: goto L_00250024;
    case 3u: goto L_00250064;
    case 4u: goto L_00250070;
    case 5u: goto L_002500AC;
    case 6u: goto L_002500CC;
    case 7u: goto L_002500D0;
    case 8u: goto L_002500F0;
    case 9u: goto L_00250128;
    case 10u: goto L_0025014C;
    case 11u: goto L_00250210;
    case 12u: goto L_0025022C;
    case 13u: goto L_00250248;
    case 14u: goto L_00250268;
    case 15u: goto L_00250290;
    case 16u: goto L_00250298;
    case 17u: goto L_002502C0;
    case 18u: goto L_00250300;
    case 19u: goto L_0025033C;
    case 20u: goto L_00250344;
    case 21u: goto L_0025035C;
    case 22u: goto L_00250390;
    case 23u: goto L_002503A8;
    case 24u: goto L_002503C0;
    case 25u: goto L_002503FC;
    case 26u: goto L_00250458;
    case 27u: goto L_00250480;
    case 28u: goto L_00250490;
    case 29u: goto L_00250504;
    case 30u: goto L_0025052C;
    case 31u: goto L_0025053C;
    case 32u: goto L_00250570;
    case 33u: goto L_002505A8;
    case 34u: goto L_00250608;
    case 35u: goto L_00250624;
    case 36u: goto L_00250650;
    case 37u: goto L_00250694;
    case 38u: goto L_0025071C;
    case 39u: goto L_00250760;
    case 40u: goto L_0025079C;
    case 41u: goto L_002507B4;
    case 42u: goto L_002507E4;
    case 43u: goto L_002507FC;
    case 44u: goto L_00250818;
    case 45u: goto L_00250838;
    case 46u: goto L_00250840;
    case 47u: goto L_002508C0;
    case 48u: goto L_002508D0;
    case 49u: goto L_002508D8;
    case 50u: goto L_00250910;
    case 51u: goto L_00250960;
    case 52u: goto L_00250970;
    case 53u: goto L_00250984;
    case 54u: goto L_002509CC;
    case 55u: goto L_002509F0;
    case 56u: goto L_00250A6C;
    case 57u: goto L_00250A84;
    case 58u: goto L_00250AAC;
    case 59u: goto L_00250B2C;
    case 60u: goto L_00250B44;
    case 61u: goto L_00250B58;
    case 62u: goto L_00250BA8;
    case 63u: goto L_00250C30;
    case 64u: goto L_00250C3C;
    case 65u: goto L_00250C8C;
    case 66u: goto L_00250CDC;
    case 67u: goto L_00250D3C;
    case 68u: goto L_00250D60;
    case 69u: goto L_00250D80;
    case 70u: goto L_00250DF0;
    case 71u: goto L_00250E08;
    case 72u: goto L_00250E1C;
    case 73u: goto L_00250E24;
    case 74u: goto L_00250E58;
    case 75u: goto L_00250E90;
    case 76u: goto L_00250EF0;
    case 77u: goto L_00250F0C;
    case 78u: goto L_00250F38;
    case 79u: goto L_00250F84;
    case 80u: goto L_00251078;
    case 81u: goto L_00251090;
    case 82u: goto L_002510C0;
    case 83u: goto L_002510D4;
    case 84u: goto L_002510F0;
    case 85u: goto L_00251110;
    case 86u: goto L_00251118;
    case 87u: goto L_0025118C;
    case 88u: goto L_002511BC;
    case 89u: goto L_00251204;
    case 90u: goto L_00251250;
    case 91u: goto L_00251274;
    case 92u: goto L_002512F0;
    case 93u: goto L_00251308;
    case 94u: goto L_00251330;
    case 95u: goto L_002513B4;
    case 96u: goto L_002513C8;
    case 97u: goto L_00251418;
    case 98u: goto L_002514A8;
    case 99u: goto L_00251800;
    case 100u: goto L_00251828;
    case 101u: goto L_00251940;
    case 102u: goto L_00251948;
    case 103u: goto L_00251960;
    case 104u: goto L_002519F4;
    case 105u: goto L_00251A44;
    case 106u: goto L_00251B48;
    case 107u: goto L_00251BA0;
    case 108u: goto L_00251BB8;
    case 109u: goto L_00251BC0;
    case 110u: goto L_00251BD8;
    case 111u: goto L_00251BE0;
    case 112u: goto L_00251BF8;
    case 113u: goto L_00251C00;
    case 114u: goto L_00251C20;
    case 115u: goto L_00251CAC;
    case 116u: goto L_00251D90;
    case 117u: goto L_00251DC4;
    case 118u: goto L_00251EA0;
    case 119u: goto L_00251FB0;
    case 120u: goto L_00251FC0;
    case 121u: goto L_00252124;
    case 122u: goto L_002521B0;
    case 123u: goto L_002521C0;
    case 124u: goto L_00252220;
    case 125u: goto L_0025225C;
    case 126u: goto L_002522E4;
    case 127u: goto L_00252300;
    case 128u: goto L_00252320;
    case 129u: goto L_0025238C;
    case 130u: goto L_002523A0;
    case 131u: goto L_002523C8;
    case 132u: goto L_002523DC;
    case 133u: goto L_002523F0;
    case 134u: goto L_0025243C;
    case 135u: goto L_0025247C;
    case 136u: goto L_002524E4;
    case 137u: goto L_002524F8;
    case 138u: goto L_00252514;
    case 139u: goto L_00252524;
    case 140u: goto L_00252550;
    case 141u: goto L_002525D0;
    case 142u: goto L_002525E4;
    case 143u: goto L_00252650;
    case 144u: goto L_0025269C;
    case 145u: goto L_002526C8;
    case 146u: goto L_002526FC;
    case 147u: goto L_0025271C;
    case 148u: goto L_00252774;
    case 149u: goto L_0025279C;
    case 150u: goto L_002527CC;
    case 151u: goto L_002527E8;
    case 152u: goto L_002527FC;
    case 153u: goto L_00252978;
    case 154u: goto L_0025298C;
    case 155u: goto L_00252B54;
    case 156u: goto L_00252BB4;
    case 157u: goto L_00252BC8;
    case 158u: goto L_00252C70;
    case 159u: goto L_00252CA0;
    case 160u: goto L_00252CBC;
    case 161u: goto L_00252DD0;
    case 162u: goto L_00252F24;
    case 163u: goto L_00252FE8;
    case 164u: goto L_00253020;
    case 165u: goto L_002530C8;
    case 166u: goto L_002530E0;
    case 167u: goto L_00253158;
    case 168u: goto L_00253170;
    case 169u: goto L_0025319C;
    case 170u: goto L_00253274;
    case 171u: goto L_002532B8;
    case 172u: goto L_002532D0;
    case 173u: goto L_002532D8;
    case 174u: goto L_002532F0;
    case 175u: goto L_002532F8;
    case 176u: goto L_00253310;
    case 177u: goto L_00253318;
    case 178u: goto L_00253330;
    case 179u: goto L_00253420;
    case 180u: goto L_002534C8;
    case 181u: goto L_002534E0;
    case 182u: goto L_00253560;
    case 183u: goto L_00253578;
    case 184u: goto L_002535E8;
    case 185u: goto L_002536E0;
    case 186u: goto L_0025371C;
    case 187u: goto L_0025374C;
    case 188u: goto L_00253780;
    case 189u: goto L_002537AC;
    case 190u: goto L_002537B4;
    case 191u: goto L_002537D0;
    case 192u: goto L_002537E0;
    case 193u: goto L_002537F0;
    case 194u: goto L_00253828;
    case 195u: goto L_0025386C;
    case 196u: goto L_002538FC;
    case 197u: goto L_00253928;
    case 198u: goto L_00253960;
    case 199u: goto L_00253970;
    case 200u: goto L_00253980;
    case 201u: goto L_00253990;
    case 202u: goto L_002539A0;
    case 203u: goto L_002539B0;
    case 204u: goto L_002539C0;
    case 205u: goto L_002539D0;
    case 206u: goto L_002539E0;
    case 207u: goto L_00253A38;
    case 208u: goto L_00253A40;
    case 209u: goto L_00253A6C;
    case 210u: goto L_00253A80;
    case 211u: goto L_00253A9C;
    case 212u: goto L_00253ABC;
    case 213u: goto L_00253AC4;
    case 214u: goto L_00253AE0;
    case 215u: goto L_00253AE8;
    case 216u: goto L_00253B00;
    case 217u: goto L_00253B14;
    case 218u: goto L_00253B30;
    case 219u: goto L_00253B50;
    case 220u: goto L_00253B58;
    case 221u: goto L_00253B74;
    case 222u: goto L_00253B7C;
    case 223u: goto L_00253BA8;
    case 224u: goto L_00253C28;
    case 225u: goto L_00253C3C;
    case 226u: goto L_00253C74;
    case 227u: goto L_00253C98;
    case 228u: goto L_00253CAC;
    case 229u: goto L_00253CE0;
    case 230u: goto L_00253D48;
    case 231u: goto L_00253D58;
    case 232u: goto L_00253D68;
    case 233u: goto L_00253D78;
    case 234u: goto L_00253D98;
    case 235u: goto L_00253DF0;
    case 236u: goto L_00253E24;
    case 237u: goto L_00253E34;
    case 238u: goto L_00253E6C;
    case 239u: goto L_00253EF0;
    case 240u: goto L_00253F34;
    case 241u: goto L_00253FD4;
    case 242u: goto L_00253FE0;
    default: bad_entry(c, 0x00250000u); return;
    }
L_00250000:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], 0u + 16u);  if (t) { goto L_00250014; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_002500AC; } }
    set32(c.r[4], 0u + 16u);
    c.budget -= 1;
L_00250014:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != c.r[4].d[0];  if (t) { goto L_00250034; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_00250034; } }
    goto L_00250028;
L_00250024:
    c.budget -= 1;
L_00250028:
    set32(c.r[16], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1824u), c.r[6].w[0]);  if (t) { goto L_002500AC; } }
L_00250034:
    c.f[5] = ld32((c.r[5].w[0] + 32u));
    c.f[4] = ld32((c.r[17].w[0] + 32u));
    c.f[1] = ld32((c.r[5].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    c.f[3] = ld32((c.r[5].w[0] + 36u));
    c.f[2] = ld32((c.r[17].w[0] + 36u));
    c.f[4] = fp::sub(c.f[5], c.f[4]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[4], c.f[4]);
    c.f[20] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250064u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x00250064u) [[unlikely]] return; }
L_00250064:
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250070u); c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x00250070u) [[unlikely]] return; }
L_00250070:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8387u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[4], c.r[3].w[0] + 11200u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8386u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[3].w[0] << 3);
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[1] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 14;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002500AC; } }
    set32(c.r[16], 0u + 1u);
    c.budget -= 1;
L_002500AC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_002500CC; } }
    c.r[4].d[0] = ld16((c.r[17].w[0] + 704u));
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = c.r[4].d[0] | 64ull;
    st16((c.r[17].w[0] + 704u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st8((c.r[17].w[0] + 1840u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[17].w[0] + 1738u), static_cast<std::uint16_t>(0u));
    c.budget -= 6;
L_002500CC:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002500D0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002500F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1725u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_00250480; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], c.r[4].w[0] + 26064u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00250000u < 16384u) { entry = entries_0054[(t - 0x00250000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00250128:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00250160; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8387u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00250160; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025014Cu);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x0025014Cu) [[unlikely]] return; }
L_0025014C:
    c.r[3].d[0] = c.r[2].d[0] & 31ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00250160; } }
    set32(c.r[3], 0u + 5u);
    st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00250160:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_00250240; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[3], 0u + 19u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 20u);  if (t) { goto L_00250190; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8387u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002501A8; } }
    set32(c.r[3], 0u + 20u);
    c.budget -= 1;
L_00250190:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_002501EC; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8387u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002501EC; } }
L_002501A8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 279u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002501EC; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1578u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1580u)));
    c.budget -= 4;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 2));  if (t) { goto L_002501CC; } }
    set32(c.r[3], c.r[4].w[0] + 3u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    c.budget -= 2;
L_002501CC:
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002501EC; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00250480; } }
L_002501EC:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1732u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[2].w[0] - 1u);  goto L_0025021C; }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 30u);
    st8((c.r[16].w[0] + 1730u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250210u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 50u, depth + 1u); else { c.pc = 0x0024CF20u; return; } if (c.pc != 0x00250210u) [[unlikely]] return; }
L_00250210:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_00250224; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 1;
L_0025021C:
    st16((c.r[16].w[0] + 1732u), static_cast<std::uint16_t>(c.r[2].w[0]));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 2;
L_00250224:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025022Cu);  if (depth < kMaxDepth) unit_0055(c, 35u, depth + 1u); else { c.pc = 0x00254710u; return; } if (c.pc != 0x0025022Cu) [[unlikely]] return; }
L_0025022C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00250250; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00250484; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_00250240:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250248u);  if (depth < kMaxDepth) unit_0055(c, 54u, depth + 1u); else { c.pc = 0x00254D80u; return; } if (c.pc != 0x00250248u) [[unlikely]] return; }
L_00250248:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00250480; } }
L_00250250:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1842u)));
    set32(c.r[3], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 9u);  if (t) { goto L_00250274; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250268u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0054(c, 206u, depth + 1u); else { c.pc = 0x002539E0u; return; } if (c.pc != 0x00250268u) [[unlikely]] return; }
L_00250268:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00250480; } }
    set32(c.r[3], 0u + 9u);
    c.budget -= 1;
L_00250274:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00250480; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1843u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00250480; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250290u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0054(c, 206u, depth + 1u); else { c.pc = 0x002539E0u; return; } if (c.pc != 0x00250290u) [[unlikely]] return; }
L_00250290:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00250480; } }
L_00250298:
    set32(c.r[3], ld32((c.r[16].w[0] + 1824u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00250308; } }
    c.f[3] = ld32((c.r[3].w[0] + 32u));
    c.f[2] = ld32((c.r[16].w[0] + 32u));
    c.f[1] = ld32((c.r[3].w[0] + 40u));
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.f[12] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002502C0u); c.f[13] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x002502C0u) [[unlikely]] return; }
L_002502C0:
    mmi::paddub(c.r[4], c.r[2], c.r[0]);
    c.r[3].d[0] = 0ull | 65535ull;
    c.r[4].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = ld16((c.r[16].w[0] + 84u));
    set32(c.r[4], c.r[4].w[0] - c.r[3].w[0]);
    c.r[3].d[0] = c.r[4].d[0] & 65535ull;
    c.r[1].d[0] = c.r[3].sd[0] < 1024ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002502F8; } }
    c.r[1].d[0] = 0ull | 64513ull;
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00250308; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002502F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250300u);  if (depth < kMaxDepth) unit_0054(c, 188u, depth + 1u); else { c.pc = 0x00253780u; return; } if (c.pc != 0x00250300u) [[unlikely]] return; }
L_00250300:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00250480; } }
L_00250308:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1730u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1730u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_00250334; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 8192ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00250480; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_00250334:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025033Cu);  if (depth < kMaxDepth) unit_0054(c, 188u, depth + 1u); else { c.pc = 0x00253780u; return; } if (c.pc != 0x0025033Cu) [[unlikely]] return; }
L_0025033C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00250480; } }
L_00250344:
    c.r[4].d[0] = ld16((c.r[16].w[0] + 704u));
    set32(c.r[3], 0u + 3u);
    c.r[4].d[0] = c.r[4].d[0] | 640ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00250480; } }
L_0025035C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_00250388; } }
    set32(c.r[3], 0u + 4u);
    st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 640ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00250480; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_00250388:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00250480; } }
L_00250390:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00250480; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00250480; } }
L_002503A8:
    c.r[4].d[0] = ld16((c.r[16].w[0] + 704u));
    set32(c.r[3], 0u + 6u);
    c.r[4].d[0] = c.r[4].d[0] | 640ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00250480; } }
L_002503C0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 5u);  if (t) { goto L_002503F4; } }
    set32(c.r[3], 0u + 7u);
    st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = ld16((c.r[16].w[0] + 704u));
    set32(c.r[3], 0u + 90u);
    c.r[4].d[0] = c.r[4].d[0] | 640ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00250480; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 1;
L_002503F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00250480; } }
L_002503FC:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 640ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 575u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00250438; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 592u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00250438; } }
    c.r[3].d[0] = ld8((c.r[3].w[0] + 531u));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 531u));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00250438; } }
    set32(c.r[3], 0u + 8u);
    st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00250438:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1730u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_00250454; }
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00250458; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_00250454:
    st8((c.r[16].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_00250458:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00250480; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 30u);
    st8((c.r[16].w[0] + 1730u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250480u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 50u, depth + 1u); else { c.pc = 0x0024CF20u; return; } if (c.pc != 0x00250480u) [[unlikely]] return; }
L_00250480:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00250484:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00250490:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1725u)));
    set32(c.r[3], 0u + 3u);
    set32(c.r[17], 0u + 1u);
    c.budget -= 12;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; mmi::paddub(c.r[18], c.r[4], c.r[0]);  if (t) { goto L_00250770; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_00250740; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[17].d[0];  if (t) { goto L_002505C0; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002504E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1724u)));  if (t) { goto L_00250C14; } }
L_002504E4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002504FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1725u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_00250C10; } }
L_002504FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250504u);  if (depth < kMaxDepth) unit_0055(c, 35u, depth + 1u); else { c.pc = 0x00254710u; return; } if (c.pc != 0x00250504u) [[unlikely]] return; }
L_00250504:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00250D60; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1724u)));
    mmi::paddub(c.r[3], c.r[17], c.r[0]);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00250C10; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025052Cu); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 33u, depth + 1u); else { c.pc = 0x0024C9F0u; return; } if (c.pc != 0x0025052Cu) [[unlikely]] return; }
L_0025052C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00250544; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025053Cu); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 61u, depth + 1u); else { c.pc = 0x0024D040u; return; } if (c.pc != 0x0025053Cu) [[unlikely]] return; }
L_0025053C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00250C10; } }
L_00250544:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 816u)));
    c.r[3].d[0] = c.r[3].sd[0] < 4000ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00250C10; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    st32((c.r[18].w[0] + 1752u), c.r[2].w[0]);
    c.f[12] = ld32((c.r[18].w[0] + 1752u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250570u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0055(c, 73u, depth + 1u); else { c.pc = 0x00255300u; return; } if (c.pc != 0x00250570u) [[unlikely]] return; }
L_00250570:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00250588; } }
    mmi::paddub(c.r[3], c.r[17], c.r[0]);
    st8((c.r[18].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1726u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00250C10; } }
L_00250588:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1848u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 15104u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[12] = ld32((c.r[2].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002505A8u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 33u, depth + 1u); else { c.pc = 0x0024C9F0u; return; } if (c.pc != 0x002505A8u) [[unlikely]] return; }
L_002505A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00250C10; } }
    set32(c.r[3], 0u + 3u);
    st8((c.r[18].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1726u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00250C10; } }
L_002505C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1726u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[17].d[0];  if (t) { goto L_00250600; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002505DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00250C10; } }
L_002505DC:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00250C10; } }
    c.r[3].d[0] = ld16((c.r[18].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[18].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1726u), static_cast<std::uint8_t>(c.r[17].w[0]));  if (t) { goto L_00250C10; } }
L_00250600:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250608u); set32(c.r[4], ld32((c.r[18].w[0] + 84u)));  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x00250608u) [[unlikely]] return; }
L_00250608:
    c.f[2] = ld32((c.r[18].w[0] + 1752u));
    c.f[1] = ld32((c.r[18].w[0] + 32u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250624u); set32(c.r[4], ld32((c.r[18].w[0] + 84u)));  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x00250624u) [[unlikely]] return; }
L_00250624:
    c.f[2] = ld32((c.r[18].w[0] + 1752u));
    c.f[1] = ld32((c.r[18].w[0] + 40u));
    set32(c.r[19], c.r[29].w[0] + 100u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 36u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250650u); st32((c.r[19].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0045(c, 199u, depth + 1u); else { c.pc = 0x00217650u; return; } if (c.pc != 0x00250650u) [[unlikely]] return; }
L_00250650:
    st32((c.r[19].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = ld32((c.r[18].w[0] + 36u));
    c.f[0] = fp::add(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_0025067C; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0025067C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250694u); st32((c.r[19].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0077(c, 192u, depth + 1u); else { c.pc = 0x002DE280u; return; } if (c.pc != 0x00250694u) [[unlikely]] return; }
L_00250694:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002506A0; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002506A0:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 530u));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 3u);  if (t) { goto L_002506B8; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[3], 0u + 3u);
    c.budget -= 2;
L_002506B8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[3].d[0];  if (t) { goto L_002506D0; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[18].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1726u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00250C10; } }
L_002506D0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002506EC; } }
    st8((c.r[18].w[0] + 1725u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1726u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00250C10; } }
L_002506EC:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st16((c.r[18].w[0] + 704u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 816u)));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] > 0; mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (t) { goto L_00250714; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[18].w[0] + 1725u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[18].w[0] + 1726u), static_cast<std::uint8_t>(0u));
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 4;
L_00250714:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025071Cu);  if (depth < kMaxDepth) unit_0055(c, 54u, depth + 1u); else { c.pc = 0x00254D80u; return; } if (c.pc != 0x0025071Cu) [[unlikely]] return; }
L_0025071C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00250D60; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00250C10; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1839u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00250C10; } }
L_00250740:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00250758; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1725u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00250C10; } }
L_00250758:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250760u);  if (depth < kMaxDepth) unit_0055(c, 54u, depth + 1u); else { c.pc = 0x00254D80u; return; } if (c.pc != 0x00250760u) [[unlikely]] return; }
L_00250760:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00250C10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);  if (t) { goto L_00250D64; } }
L_00250770:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1726u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00250C10; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[5], c.r[5].w[0] + 26112u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00250000u < 16384u) { entry = entries_0054[(t - 0x00250000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0025079C:
    c.r[4].d[0] = ld16((c.r[18].w[0] + 704u));
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = c.r[4].d[0] | 128ull;
    st16((c.r[18].w[0] + 704u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1726u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00250C10; } }
L_002507B4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002507DC; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[18].w[0] + 1726u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00250C10; } }
L_002507DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1726u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00250C10; } }
L_002507E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    st32((c.r[18].w[0] + 1752u), c.r[2].w[0]);
    c.f[12] = ld32((c.r[18].w[0] + 1752u));
    c.f[13] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002507FCu); mmi::paddub(c.r[17], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0055(c, 73u, depth + 1u); else { c.pc = 0x00255300u; return; } if (c.pc != 0x002507FCu) [[unlikely]] return; }
L_002507FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00250820; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[18].w[0] + 1725u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[18].w[0] + 1726u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250818u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0055(c, 83u, depth + 1u); else { c.pc = 0x00255570u; return; } if (c.pc != 0x00250818u) [[unlikely]] return; }
L_00250818:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00250D60; } }
L_00250820:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 704u));
    set32(c.r[5], c.r[18].w[0] + 32u);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250838u); st16((c.r[18].w[0] + 704u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0045(c, 199u, depth + 1u); else { c.pc = 0x00217650u; return; } if (c.pc != 0x00250838u) [[unlikely]] return; }
L_00250838:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250840u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x00250840u) [[unlikely]] return; }
L_00250840:
    c.r[3].d[0] = c.r[2].d[0] & 7ull;
    set32(c.r[5], c.r[3].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] - 13488u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8386u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    set32(c.r[3], 0u + 18u);
    c.budget -= 10;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.f[20] = fp::add(c.f[20], c.f[0]);  if (t) { goto L_00250878; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[3].w[0];
    c.f[20] = fp::add(c.f[20], c.f[0]);
    c.budget -= 4;
L_00250878:
    c.f[0] = ld32((c.r[18].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00250898; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1726u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00250C10; } }
L_00250898:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (t) { goto L_002508B8; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00250C10; } }
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 1;
L_002508B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002508C0u);  if (depth < kMaxDepth) unit_0055(c, 54u, depth + 1u); else { c.pc = 0x00254D80u; return; } if (c.pc != 0x002508C0u) [[unlikely]] return; }
L_002508C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00250C10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00250D60; } }
L_002508D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002508D8u); mmi::paddub(c.r[17], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0055(c, 54u, depth + 1u); else { c.pc = 0x00254D80u; return; } if (c.pc != 0x002508D8u) [[unlikely]] return; }
L_002508D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00250D60; } }
    c.f[1] = ld32((c.r[18].w[0] + 52u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00250C10; } }
    set32(c.r[3], 0u + 4u);
    st8((c.r[18].w[0] + 1726u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1839u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00250C10; } }
L_00250910:
    c.r[5].d[0] = ld16((c.r[18].w[0] + 704u));
    set32(c.r[3], 0u + 5u);
    c.r[5].d[0] = c.r[5].d[0] | 128ull;
    st16((c.r[18].w[0] + 704u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st8((c.r[18].w[0] + 1726u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 816u)));
    c.budget -= 8;
    { const bool t = c.r[3].sd[0] > 0; mmi::paddub(c.r[17], c.r[0], c.r[0]);  if (t) { goto L_0025093C; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00250C10; } }
L_0025093C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00250958; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00250C10; } }
L_00250958:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250960u);  if (depth < kMaxDepth) unit_0055(c, 54u, depth + 1u); else { c.pc = 0x00254D80u; return; } if (c.pc != 0x00250960u) [[unlikely]] return; }
L_00250960:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00250C10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00250D60; } }
L_00250970:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 704u));
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250984u); st16((c.r[18].w[0] + 704u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0055(c, 54u, depth + 1u); else { c.pc = 0x00254D80u; return; } if (c.pc != 0x00250984u) [[unlikely]] return; }
L_00250984:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00250D60; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 6u);  if (t) { goto L_002509B0; } }
    c.r[4].d[0] = ld8((c.r[18].w[0] + 741u));
    set32(c.r[3], 0u + 14u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 4u);  if (t) { goto L_002509BC; } }
    set32(c.r[3], 0u + 6u);
    c.budget -= 1;
L_002509B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1726u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00250C10; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 1;
L_002509BC:
    st8((c.r[18].w[0] + 1726u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1839u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00250C10; } }
L_002509CC:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 741u));
    set32(c.r[2], 0u + 14u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);  if (t) { goto L_00250A9C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41E00000u);
    st32((c.r[18].w[0] + 1752u), c.r[2].w[0]);
    c.f[13] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002509F0u); c.f[12] = ld32((c.r[18].w[0] + 1752u));  if (depth < kMaxDepth) unit_0055(c, 78u, depth + 1u); else { c.pc = 0x00255430u; return; } if (c.pc != 0x002509F0u) [[unlikely]] return; }
L_002509F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00250A14; } }
    mmi::paddub(c.r[3], c.r[17], c.r[0]);
    st8((c.r[18].w[0] + 1839u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 7u);
    st8((c.r[18].w[0] + 1726u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 30u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1731u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00250C10; } }
L_00250A14:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[18].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00250A3C; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00250C10; } }
L_00250A3C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 816u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_00250A54; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00250C10; } }
L_00250A54:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 530u));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x420C0000u);  if (t) { goto L_00250A78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250A6Cu); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 61u, depth + 1u); else { c.pc = 0x0024D040u; return; } if (c.pc != 0x00250A6Cu) [[unlikely]] return; }
L_00250A6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00250C10; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x420C0000u);
    c.budget -= 1;
L_00250A78:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250A84u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 33u, depth + 1u); else { c.pc = 0x0024C9F0u; return; } if (c.pc != 0x00250A84u) [[unlikely]] return; }
L_00250A84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00250C10; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00250C10; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.budget -= 1;
L_00250A9C:
    st32((c.r[18].w[0] + 1752u), c.r[2].w[0]);
    c.f[13] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250AACu); c.f[12] = ld32((c.r[18].w[0] + 1752u));  if (depth < kMaxDepth) unit_0055(c, 73u, depth + 1u); else { c.pc = 0x00255300u; return; } if (c.pc != 0x00250AACu) [[unlikely]] return; }
L_00250AAC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00250AC4; } }
    mmi::paddub(c.r[3], c.r[17], c.r[0]);
    st8((c.r[18].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1726u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00250C10; } }
L_00250AC4:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[18].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00250AEC; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00250C10; } }
L_00250AEC:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 816u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_00250B04; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00250C10; } }
L_00250B04:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 530u));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (t) { goto L_00250B24; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00250C10; } }
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 1;
L_00250B24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250B2Cu);  if (depth < kMaxDepth) unit_0055(c, 54u, depth + 1u); else { c.pc = 0x00254D80u; return; } if (c.pc != 0x00250B2Cu) [[unlikely]] return; }
L_00250B2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00250D60; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x420C0000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250B44u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 33u, depth + 1u); else { c.pc = 0x0024C9F0u; return; } if (c.pc != 0x00250B44u) [[unlikely]] return; }
L_00250B44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00250C10; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00250C10; } }
L_00250B58:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00250B74; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[18].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
L_00250B74:
    st8((c.r[18].w[0] + 1839u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1731u)));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_00250BA0; }
    c.r[4].d[0] = ld16((c.r[18].w[0] + 704u));
    set32(c.r[3], 0u + 8u);
    c.r[4].d[0] = c.r[4].d[0] | 128ull;
    st16((c.r[18].w[0] + 704u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1726u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00250C10; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_00250BA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1731u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00250C10; } }
L_00250BA8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_00250BC4; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[18].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
L_00250BC4:
    st8((c.r[18].w[0] + 1839u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[18].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 512ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00250BF0; } }
    st8((c.r[18].w[0] + 1725u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1726u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00250C10; } }
L_00250BF0:
    c.r[4].d[0] = ld8((c.r[18].w[0] + 741u));
    set32(c.r[3], 0u + 14u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00250C10; } }
    set32(c.r[3], 0u + 7u);
    st8((c.r[18].w[0] + 1726u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 30u);
    st8((c.r[18].w[0] + 1731u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_00250C10:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1724u)));
    c.budget -= 1;
L_00250C14:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00250C3C; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (t) { goto L_00250C34; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250C30u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0054(c, 206u, depth + 1u); else { c.pc = 0x002539E0u; return; } if (c.pc != 0x00250C30u) [[unlikely]] return; }
L_00250C30:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 1;
L_00250C34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250C3Cu);  if (depth < kMaxDepth) unit_0055(c, 139u, depth + 1u); else { c.pc = 0x00255F20u; return; } if (c.pc != 0x00250C3Cu) [[unlikely]] return; }
L_00250C3C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 1738u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00250C50; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[18].w[0] + 1738u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00250C50:
    c.r[4].d[0] = ld8((c.r[18].w[0] + 741u));
    set32(c.r[3], 0u + 14u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00250C94; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1724u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { mmi::paddub(c.r[4], c.r[18], c.r[0]);  goto L_00250C84; }
    set32(c.r[3], c.r[4].w[0] - 2u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00250CDC; } }
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 1;
L_00250C84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250C8Cu);  if (depth < kMaxDepth) unit_0055(c, 83u, depth + 1u); else { c.pc = 0x00255570u; return; } if (c.pc != 0x00250C8Cu) [[unlikely]] return; }
L_00250C8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1724u)));  if (t) { goto L_00250CE0; } }
L_00250C94:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1724u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00250CB4; } }
    set32(c.r[3], c.r[4].w[0] - 2u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00250CDC; } }
L_00250CB4:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1725u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (t) { goto L_00250CD4; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00250CDC; } }
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 1;
L_00250CD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250CDCu);  if (depth < kMaxDepth) unit_0055(c, 83u, depth + 1u); else { c.pc = 0x00255570u; return; } if (c.pc != 0x00250CDCu) [[unlikely]] return; }
L_00250CDC:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1724u)));
    c.budget -= 1;
L_00250CE0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00250D60; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1725u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00250D60; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 1854u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_00250D48; }
    c.r[4].d[0] = ld8((c.r[18].w[0] + 530u));
    c.r[3].d[0] = c.r[4].d[0] & 4ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 60u);  goto L_00250D30; }
    c.r[3].d[0] = c.r[4].d[0] & 128ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00250D2C; } }
    c.r[3].d[0] = c.r[4].d[0] & 8ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00250D4C; } }
L_00250D2C:
    set32(c.r[2], 0u + 60u);
    c.budget -= 1;
L_00250D30:
    st16((c.r[18].w[0] + 1854u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250D3Cu); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0054(c, 99u, depth + 1u); else { c.pc = 0x00251800u; return; } if (c.pc != 0x00250D3Cu) [[unlikely]] return; }
L_00250D3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00250D60; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_00250D48:
    st16((c.r[18].w[0] + 1854u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 1;
L_00250D4C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 1738u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00250D60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250D60u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 61u, depth + 1u); else { c.pc = 0x0024D040u; return; } if (c.pc != 0x00250D60u) [[unlikely]] return; }
L_00250D60:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00250D64:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00250D80:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1725u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 10;
    { const bool t = c.r[7].d[0] == c.r[3].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_0025104C; } }
    set32(c.r[6], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[6].d[0];  if (t) { goto L_00251034; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[5].d[0];  if (t) { goto L_00250EA8; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_00250DD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1724u)));  if (t) { goto L_00251484; } }
L_00250DD0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00250DE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { goto L_00251480; } }
L_00250DE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250DF0u);  if (depth < kMaxDepth) unit_0055(c, 35u, depth + 1u); else { c.pc = 0x00254710u; return; } if (c.pc != 0x00250DF0u) [[unlikely]] return; }
L_00250DF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002517E0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250E08u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 33u, depth + 1u); else { c.pc = 0x0024C9F0u; return; } if (c.pc != 0x00250E08u) [[unlikely]] return; }
L_00250E08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00250E2C; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 1824u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250E1Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0055(c, 85u, depth + 1u); else { c.pc = 0x00255680u; return; } if (c.pc != 0x00250E1Cu) [[unlikely]] return; }
L_00250E1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250E24u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0055(c, 174u, depth + 1u); else { c.pc = 0x002562B0u; return; } if (c.pc != 0x00250E24u) [[unlikely]] return; }
L_00250E24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00251480; } }
L_00250E2C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 816u)));
    c.r[3].d[0] = c.r[3].sd[0] < 4000ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00251480; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    st32((c.r[16].w[0] + 1752u), c.r[2].w[0]);
    c.f[12] = ld32((c.r[16].w[0] + 1752u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250E58u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0055(c, 73u, depth + 1u); else { c.pc = 0x00255300u; return; } if (c.pc != 0x00250E58u) [[unlikely]] return; }
L_00250E58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00250E70; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1726u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00251480; } }
L_00250E70:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1848u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 15104u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[12] = ld32((c.r[2].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250E90u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 33u, depth + 1u); else { c.pc = 0x0024C9F0u; return; } if (c.pc != 0x00250E90u) [[unlikely]] return; }
L_00250E90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00251480; } }
    set32(c.r[3], 0u + 3u);
    st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1726u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00251480; } }
L_00250EA8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1726u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_00250EE8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00250EC4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00251480; } }
L_00250EC4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00251480; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1726u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_00251480; } }
L_00250EE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250EF0u); set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x00250EF0u) [[unlikely]] return; }
L_00250EF0:
    c.f[2] = ld32((c.r[16].w[0] + 1752u));
    c.f[1] = ld32((c.r[16].w[0] + 32u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250F0Cu); set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x00250F0Cu) [[unlikely]] return; }
L_00250F0C:
    c.f[2] = ld32((c.r[16].w[0] + 1752u));
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    set32(c.r[18], c.r[29].w[0] + 84u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 88u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250F38u); st32((c.r[18].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0045(c, 199u, depth + 1u); else { c.pc = 0x00217650u; return; } if (c.pc != 0x00250F38u) [[unlikely]] return; }
L_00250F38:
    st32((c.r[18].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = fp::add(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; mmi::paddub(c.r[17], c.r[0], c.r[0]);  if (t) { goto L_00250F6C; } }
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.r[17].d[0] = c.r[2].d[0] << 56;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);
    c.budget -= 3;
L_00250F6C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250F84u); st32((c.r[18].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0077(c, 192u, depth + 1u); else { c.pc = 0x002DE280u; return; } if (c.pc != 0x00250F84u) [[unlikely]] return; }
L_00250F84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00250F98; } }
    set32(c.r[3], c.r[17].w[0] + 1u);
    c.r[17].d[0] = c.r[3].d[0] << 56;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);
    c.budget -= 3;
L_00250F98:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 530u));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] << 56;  if (t) { goto L_00250FB8; } }
    set32(c.r[3], c.r[17].w[0] + 1u);
    c.r[17].d[0] = c.r[3].d[0] << 56;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);
    c.r[4].d[0] = c.r[17].d[0] << 56;
    c.budget -= 4;
L_00250FB8:
    set32(c.r[3], 0u + 3u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00250FD8; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1726u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00251480; } }
L_00250FD8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00250FF4; } }
    st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1726u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00251480; } }
L_00250FF4:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 816u)));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_00251018; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 1726u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_00251018:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00251480; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1839u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00251480; } }
L_00251034:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00251480; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00251480; } }
L_0025104C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1726u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00251480; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[5], c.r[5].w[0] + 26160u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00250000u < 16384u) { entry = entries_0054[(t - 0x00250000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00251078:
    c.r[4].d[0] = ld16((c.r[16].w[0] + 704u));
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = c.r[4].d[0] | 128ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1726u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00251480; } }
L_00251090:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002510B8; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 1726u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00251480; } }
L_002510B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1726u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00251480; } }
L_002510C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    st32((c.r[16].w[0] + 1752u), c.r[2].w[0]);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002510D4u); c.f[12] = ld32((c.r[16].w[0] + 1752u));  if (depth < kMaxDepth) unit_0055(c, 73u, depth + 1u); else { c.pc = 0x00255300u; return; } if (c.pc != 0x002510D4u) [[unlikely]] return; }
L_002510D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002510F8; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 1726u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002510F0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0055(c, 83u, depth + 1u); else { c.pc = 0x00255570u; return; } if (c.pc != 0x002510F0u) [[unlikely]] return; }
L_002510F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);  if (t) { goto L_002517E4; } }
L_002510F8:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 704u));
    set32(c.r[5], c.r[16].w[0] + 32u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251110u); st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0045(c, 199u, depth + 1u); else { c.pc = 0x00217650u; return; } if (c.pc != 0x00251110u) [[unlikely]] return; }
L_00251110:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251118u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x00251118u) [[unlikely]] return; }
L_00251118:
    c.r[3].d[0] = c.r[2].d[0] & 7ull;
    set32(c.r[5], c.r[3].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] - 13488u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    set32(c.r[3], 0u + 18u);
    c.budget -= 10;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.f[20] = fp::add(c.f[20], c.f[0]);  if (t) { goto L_00251150; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[3].w[0];
    c.f[20] = fp::add(c.f[20], c.f[0]);
    c.budget -= 4;
L_00251150:
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00251170; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1726u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00251480; } }
L_00251170:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00251480; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00251480; } }
L_0025118C:
    c.f[1] = ld32((c.r[16].w[0] + 52u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00251480; } }
    set32(c.r[3], 0u + 4u);
    st8((c.r[16].w[0] + 1726u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1839u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00251480; } }
L_002511BC:
    c.r[4].d[0] = ld16((c.r[16].w[0] + 704u));
    set32(c.r[3], 0u + 5u);
    c.r[4].d[0] = c.r[4].d[0] | 128ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 1726u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 816u)));
    c.budget -= 8;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_002511E8; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00251480; } }
L_002511E8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00251480; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00251480; } }
L_00251204:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 6u);  if (t) { goto L_00251234; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 741u));
    set32(c.r[3], 0u + 14u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 4u);  if (t) { goto L_00251240; } }
    set32(c.r[3], 0u + 6u);
    c.budget -= 1;
L_00251234:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1726u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00251480; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 1;
L_00251240:
    st8((c.r[16].w[0] + 1726u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1839u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00251480; } }
L_00251250:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 741u));
    set32(c.r[2], 0u + 14u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);  if (t) { goto L_00251320; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41E00000u);
    st32((c.r[16].w[0] + 1752u), c.r[2].w[0]);
    c.f[13] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251274u); c.f[12] = ld32((c.r[16].w[0] + 1752u));  if (depth < kMaxDepth) unit_0055(c, 78u, depth + 1u); else { c.pc = 0x00255430u; return; } if (c.pc != 0x00251274u) [[unlikely]] return; }
L_00251274:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00251298; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 1839u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 7u);
    st8((c.r[16].w[0] + 1726u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 30u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1731u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00251480; } }
L_00251298:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002512C0; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00251480; } }
L_002512C0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 816u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_002512D8; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00251480; } }
L_002512D8:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 530u));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x420C0000u);  if (t) { goto L_002512FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002512F0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 61u, depth + 1u); else { c.pc = 0x0024D040u; return; } if (c.pc != 0x002512F0u) [[unlikely]] return; }
L_002512F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00251480; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x420C0000u);
    c.budget -= 1;
L_002512FC:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251308u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 33u, depth + 1u); else { c.pc = 0x0024C9F0u; return; } if (c.pc != 0x00251308u) [[unlikely]] return; }
L_00251308:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00251480; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00251480; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.budget -= 1;
L_00251320:
    st32((c.r[16].w[0] + 1752u), c.r[2].w[0]);
    c.f[13] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251330u); c.f[12] = ld32((c.r[16].w[0] + 1752u));  if (depth < kMaxDepth) unit_0055(c, 73u, depth + 1u); else { c.pc = 0x00255300u; return; } if (c.pc != 0x00251330u) [[unlikely]] return; }
L_00251330:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00251348; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1726u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00251480; } }
L_00251348:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00251370; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00251480; } }
L_00251370:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 816u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_00251388; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00251480; } }
L_00251388:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 530u));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x420C0000u);  goto L_002513A8; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00251480; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x420C0000u);
    c.budget -= 1;
L_002513A8:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002513B4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 33u, depth + 1u); else { c.pc = 0x0024C9F0u; return; } if (c.pc != 0x002513B4u) [[unlikely]] return; }
L_002513B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00251480; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00251480; } }
L_002513C8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_002513E4; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
L_002513E4:
    st8((c.r[16].w[0] + 1839u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1731u)));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_00251410; }
    c.r[4].d[0] = ld16((c.r[16].w[0] + 704u));
    set32(c.r[3], 0u + 8u);
    c.r[4].d[0] = c.r[4].d[0] | 128ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1726u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00251480; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_00251410:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1731u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00251480; } }
L_00251418:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_00251434; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
L_00251434:
    st8((c.r[16].w[0] + 1839u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 512ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00251460; } }
    st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1726u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00251480; } }
L_00251460:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 741u));
    set32(c.r[3], 0u + 14u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00251480; } }
    set32(c.r[3], 0u + 7u);
    st8((c.r[16].w[0] + 1726u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 30u);
    st8((c.r[16].w[0] + 1731u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_00251480:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1724u)));
    c.budget -= 1;
L_00251484:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { mmi::paddub(c.r[4], c.r[16], c.r[0]);  goto L_002514A0; }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002517E0; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002514A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002514A8u);  if (depth < kMaxDepth) unit_0055(c, 83u, depth + 1u); else { c.pc = 0x00255570u; return; } if (c.pc != 0x002514A8u) [[unlikely]] return; }
L_002514A8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1735u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_002517DC; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1724u)));
    set32(c.r[6], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[6].d[0];  if (t) { goto L_00251640; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1727u)));
    set32(c.r[5], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_00251620; } }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_002515E8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_002515B0; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_00251530; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00251504; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002517E0; } }
L_00251504:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1725u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_00251528; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1726u)));
    set32(c.r[3], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002517E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1727u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_002517E0; } }
L_00251528:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1727u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_002517E0; } }
L_00251530:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 512ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8387u)));
    c.r[1].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00251550; } }
    mmi::paddub(c.r[3], c.r[6], c.r[0]);
    c.budget -= 1;
L_00251550:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1848u)));
    c.r[4].d[0] = c.r[3].d[0] << 56;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[3], c.r[3].w[0] - 15008u);
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = c.r[4].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    st8((c.r[16].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1730u)));
    c.budget -= 16;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 3u);  if (t) { goto L_002515A0; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1727u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002517E0; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 1;
L_002515A0:
    st8((c.r[16].w[0] + 1727u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 60u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002517E0; } }
L_002515B0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1730u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002515CC; } }
    set32(c.r[3], 0u + 60u);
    st8((c.r[16].w[0] + 1727u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002517E0; } }
L_002515CC:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 512ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1730u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002517E0; } }
L_002515E8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00251600; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1727u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_002517E0; } }
L_00251600:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1730u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_00251618; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1727u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_002517E0; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_00251618:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002517E0; } }
L_00251620:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002517E0; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 1724u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1727u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002517E0; } }
L_00251640:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1727u)));
    set32(c.r[5], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_002517B8; } }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00251780; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_00251728; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_002516A4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00251680; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002517E0; } }
L_00251680:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 741u));
    set32(c.r[3], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002517E0; } }
    set32(c.r[3], 0u + 13u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002517E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1727u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_002517E0; } }
L_002516A4:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[3], 0u + 17u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002516C4; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 768ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002516D0; } }
L_002516C4:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 256ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_002516D0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1848u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8388u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] - 14928u);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.r[4].d[0] = c.r[4].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    st8((c.r[16].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1730u)));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 3u);  if (t) { goto L_00251718; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1727u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002517E0; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 1;
L_00251718:
    st8((c.r[16].w[0] + 1727u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 60u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002517E0; } }
L_00251728:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1730u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00251744; } }
    set32(c.r[3], 0u + 60u);
    st8((c.r[16].w[0] + 1727u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002517E0; } }
L_00251744:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[3], 0u + 17u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00251764; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 768ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00251770; } }
L_00251764:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 256ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00251770:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1730u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002517E0; } }
L_00251780:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00251798; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1727u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_002517E0; } }
L_00251798:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1730u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_002517B0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1727u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_002517E0; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_002517B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002517E0; } }
L_002517B8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002517E0; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 1724u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1727u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002517E0; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_002517DC:
    st8((c.r[16].w[0] + 1735u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_002517E0:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002517E4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00251800:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 1296u)));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[17], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251828u); st16((c.r[4].w[0] + 1830u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x00251828u) [[unlikely]] return; }
L_00251828:
    c.r[4].d[0] = c.r[17].d[0] & 65535ull;
    c.r[1].d[0] = c.r[4].sd[0] < 12289ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].d[0] = c.r[2].d[0] & 1ull;  if (t) { goto L_00251848; } }
    c.r[2].d[0] = 0ull | 53248ull;
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[4].sd[0] < 20480ll ? 1ull : 0ull;  if (t) { goto L_00251874; } }
L_00251848:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00251860; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1830u)));
    c.r[2].d[0] = c.r[2].d[0] | 1024ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1830u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_002518B0; } }
L_00251860:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1830u)));
    c.r[2].d[0] = c.r[2].d[0] | 2048ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1830u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_002518B0; } }
    c.r[2].d[0] = c.r[4].sd[0] < 20480ll ? 1ull : 0ull;
    c.budget -= 1;
L_00251874:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[4].sd[0] < 4096ll ? 1ull : 0ull;  if (t) { goto L_002518B4; } }
    c.r[1].d[0] = 0ull | 45057ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002518B0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002518A4; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1830u)));
    c.r[2].d[0] = c.r[2].d[0] | 1024ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1830u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_002518B0; } }
L_002518A4:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1830u)));
    c.r[2].d[0] = c.r[2].d[0] | 2048ull;
    st16((c.r[16].w[0] + 1830u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_002518B0:
    c.r[2].d[0] = c.r[4].sd[0] < 4096ll ? 1ull : 0ull;
    c.budget -= 1;
L_002518B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull | 36864ull;  if (t) { goto L_002518F4; } }
    c.r[1].d[0] = c.r[4].sd[0] < 28673ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002518F0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002518E0; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1830u)));
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1830u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00251934; } }
L_002518E0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1830u)));
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1830u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00251934; } }
L_002518F0:
    c.r[2].d[0] = 0ull | 36864ull;
    c.budget -= 1;
L_002518F4:
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { mmi::paddub(c.r[4], c.r[16], c.r[0]);  goto L_00251938; }
    c.r[1].d[0] = 0ull | 61441ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00251934; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00251928; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1830u)));
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1830u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00251934; } }
L_00251928:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1830u)));
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    st16((c.r[16].w[0] + 1830u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00251934:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_00251938:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251940u);  if (depth < kMaxDepth) unit_0054(c, 201u, depth + 1u); else { c.pc = 0x00253990u; return; } if (c.pc != 0x00251940u) [[unlikely]] return; }
L_00251940:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251948u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 69u, depth + 1u); else { c.pc = 0x0024D140u; return; } if (c.pc != 0x00251948u) [[unlikely]] return; }
L_00251948:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00251960:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 9;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 1u);  goto L_00251990; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));  if (t) { goto L_00251994; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_00251990:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.budget -= 1;
L_00251994:
    c.r[6].d[0] = c.r[3].d[0] << 56;
    set32(c.r[3], 0u + 17u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);  if (t) { goto L_00251C28; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1725u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 18u);  if (t) { goto L_00251A90; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { mmi::paddub(c.r[4], c.r[16], c.r[0]);  goto L_00251A3C; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { mmi::paddub(c.r[4], c.r[16], c.r[0]);  goto L_002519EC; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], 0u + 60u);  goto L_002519E0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00251D7C; } }
    set32(c.r[2], 0u + 60u);
    c.budget -= 1;
L_002519E0:
    st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 1730u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
L_002519EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002519F4u);  if (depth < kMaxDepth) unit_0054(c, 116u, depth + 1u); else { c.pc = 0x00251D90u; return; } if (c.pc != 0x002519F4u) [[unlikely]] return; }
L_002519F4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1730u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 1520u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_00251A1C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1730u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_00251D78; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_00251A1C:
    st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = ld16((c.r[16].w[0] + 704u));
    set32(c.r[3], 0u + 45u);
    c.r[4].d[0] = c.r[4].d[0] | 256ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00251D78; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_00251A3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251A44u);  if (depth < kMaxDepth) unit_0054(c, 116u, depth + 1u); else { c.pc = 0x00251D90u; return; } if (c.pc != 0x00251A44u) [[unlikely]] return; }
L_00251A44:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00251A64; } }
    set32(c.r[3], 0u + 3u);
    st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1730u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00251D78; } }
L_00251A64:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1730u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_00251A84; }
    set32(c.r[3], 0u + 3u);
    st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1730u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00251D78; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_00251A84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00251D78; } }
    set32(c.r[3], 0u + 18u);
    c.budget -= 1;
L_00251A90:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00251C08; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 575u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00251B08; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 574u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1730u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00251B08; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 592u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00251B08; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 531u));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 531u));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00251B08; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    c.r[3].d[0] = c.r[6].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00251B08; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 514u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_00251B08; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 256ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 574u));
    st8((c.r[16].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
L_00251B08:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00251D78; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00251D78; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 592u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_00251B60; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[4], 0u + 1u);  if (t) { goto L_00251B54; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251B48u);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x00251B48u) [[unlikely]] return; }
L_00251B48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] & 3ull;  if (t) { goto L_00251B60; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_00251B54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 3u);  if (t) { goto L_00251B64; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_00251B60:
    set32(c.r[3], 0u + 3u);
    c.budget -= 1;
L_00251B64:
    c.budget -= 2;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 1024u);  goto L_00251BEC; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 2048u);  goto L_00251BCC; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 4096u);  goto L_00251BAC; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_00251B98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00251D78; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_00251B98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251BA0u);  if (depth < kMaxDepth) unit_0053(c, 68u, depth + 1u); else { c.pc = 0x0024D130u; return; } if (c.pc != 0x00251BA0u) [[unlikely]] return; }
L_00251BA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00251D78; } }
    set32(c.r[2], 0u + 4096u);
    c.budget -= 1;
L_00251BAC:
    st16((c.r[16].w[0] + 1830u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251BB8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0054(c, 202u, depth + 1u); else { c.pc = 0x002539A0u; return; } if (c.pc != 0x00251BB8u) [[unlikely]] return; }
L_00251BB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251BC0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 69u, depth + 1u); else { c.pc = 0x0024D140u; return; } if (c.pc != 0x00251BC0u) [[unlikely]] return; }
L_00251BC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00251D78; } }
    set32(c.r[2], 0u + 2048u);
    c.budget -= 1;
L_00251BCC:
    st16((c.r[16].w[0] + 1830u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251BD8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0054(c, 202u, depth + 1u); else { c.pc = 0x002539A0u; return; } if (c.pc != 0x00251BD8u) [[unlikely]] return; }
L_00251BD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251BE0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 69u, depth + 1u); else { c.pc = 0x0024D140u; return; } if (c.pc != 0x00251BE0u) [[unlikely]] return; }
L_00251BE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00251D78; } }
    set32(c.r[2], 0u + 1024u);
    c.budget -= 1;
L_00251BEC:
    st16((c.r[16].w[0] + 1830u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251BF8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0054(c, 202u, depth + 1u); else { c.pc = 0x002539A0u; return; } if (c.pc != 0x00251BF8u) [[unlikely]] return; }
L_00251BF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251C00u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 69u, depth + 1u); else { c.pc = 0x0024D140u; return; } if (c.pc != 0x00251C00u) [[unlikely]] return; }
L_00251C00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00251D78; } }
L_00251C08:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00251D78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251C20u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 68u, depth + 1u); else { c.pc = 0x0024D130u; return; } if (c.pc != 0x00251C20u) [[unlikely]] return; }
L_00251C20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00251D78; } }
L_00251C28:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1725u)));
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_00251C94; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00251C68; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00251C54; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  if (t) { goto L_00251CC4; } }
L_00251C54:
    st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 256ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00251CC0; } }
L_00251C68:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00251C8C; } }
    st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 256ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00251CC0; } }
L_00251C8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00251CC0; } }
L_00251C94:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00251CB4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251CACu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 68u, depth + 1u); else { c.pc = 0x0024D130u; return; } if (c.pc != 0x00251CACu) [[unlikely]] return; }
L_00251CAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00251D78; } }
L_00251CB4:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 256ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00251CC0:
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 1;
L_00251CC4:
    set32(c.r[3], ld32((c.r[16].w[0] + 1296u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.r[4].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[4].sd[0] < 12289ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00251CEC; } }
    c.r[3].d[0] = 0ull | 53248ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[4].sd[0] < 20480ll ? 1ull : 0ull;  if (t) { goto L_00251D00; } }
L_00251CEC:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 4096ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00251D24; } }
    c.r[3].d[0] = c.r[4].sd[0] < 20480ll ? 1ull : 0ull;
    c.budget -= 1;
L_00251D00:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[4].sd[0] < 4096ll ? 1ull : 0ull;  if (t) { goto L_00251D28; } }
    c.r[1].d[0] = 0ull | 45057ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00251D24; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 8192ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00251D24:
    c.r[3].d[0] = c.r[4].sd[0] < 4096ll ? 1ull : 0ull;
    c.budget -= 1;
L_00251D28:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = 0ull | 36864ull;  if (t) { goto L_00251D50; } }
    c.r[1].d[0] = c.r[4].sd[0] < 28673ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00251D4C; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 1024ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00251D78; } }
L_00251D4C:
    c.r[3].d[0] = 0ull | 36864ull;
    c.budget -= 1;
L_00251D50:
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00251D78; } }
    c.r[1].d[0] = 0ull | 61441ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00251D78; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 2048ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00251D78:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00251D7C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00251D90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 1824u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_00251E84; } }
    c.f[3] = ld32((c.r[3].w[0] + 32u));
    c.f[2] = ld32((c.r[16].w[0] + 32u));
    c.f[1] = ld32((c.r[3].w[0] + 40u));
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.f[12] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251DC4u); c.f[13] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x00251DC4u) [[unlikely]] return; }
L_00251DC4:
    mmi::paddub(c.r[4], c.r[2], c.r[0]);
    c.r[3].d[0] = 0ull | 65535ull;
    c.r[4].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[3], ld32((c.r[16].w[0] + 1296u)));
    set32(c.r[4], c.r[4].w[0] - c.r[3].w[0]);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[1].d[0] = c.r[4].sd[0] < 12289ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00251DF8; } }
    c.r[3].d[0] = 0ull | 53248ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[4].sd[0] < 20480ll ? 1ull : 0ull;  if (t) { goto L_00251E0C; } }
L_00251DF8:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 8192ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00251E30; } }
    c.r[3].d[0] = c.r[4].sd[0] < 20480ll ? 1ull : 0ull;
    c.budget -= 1;
L_00251E0C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[4].sd[0] < 4096ll ? 1ull : 0ull;  if (t) { goto L_00251E34; } }
    c.r[1].d[0] = 0ull | 45057ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00251E30; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 4096ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00251E30:
    c.r[3].d[0] = c.r[4].sd[0] < 4096ll ? 1ull : 0ull;
    c.budget -= 1;
L_00251E34:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = 0ull | 36864ull;  if (t) { goto L_00251E5C; } }
    c.r[1].d[0] = c.r[4].sd[0] < 28673ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00251E58; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 2048ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00251E84; } }
L_00251E58:
    c.r[3].d[0] = 0ull | 36864ull;
    c.budget -= 1;
L_00251E5C:
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00251E84; } }
    c.r[1].d[0] = 0ull | 61441ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00251E84; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 1024ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00251E84:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00251EA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1725u)));
    set32(c.r[5], 0u + 3u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_00251F98; } }
    set32(c.r[6], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_00251F68; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_00251EF4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00251EE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_00251FB4; } }
L_00251EE0:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 512ull;
    st16((c.r[4].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 1725u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_00251FB0; } }
L_00251EF4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00251F60; } }
    st8((c.r[4].w[0] + 1725u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 512ull;
    st16((c.r[4].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8387u)));
    c.r[1].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00251F28; } }
    mmi::paddub(c.r[3], c.r[6], c.r[0]);
    c.budget -= 1;
L_00251F28:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1848u)));
    c.r[5].d[0] = c.r[3].d[0] << 56;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    set32(c.r[3], c.r[3].w[0] - 15008u);
    set32(c.r[6], c.r[7].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].d[0] = c.r[5].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00251FB0; } }
L_00251F60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 1725u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00251FB0; } }
L_00251F68:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1730u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00251F7C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 1725u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_00251FB0; } }
L_00251F7C:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 512ull;
    st16((c.r[4].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1730u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00251FB0; } }
L_00251F98:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00251FB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251FB0u);  if (depth < kMaxDepth) unit_0053(c, 68u, depth + 1u); else { c.pc = 0x0024D130u; return; } if (c.pc != 0x00251FB0u) [[unlikely]] return; }
L_00251FB0:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_00251FB4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00251FC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1725u)));
    set32(c.r[7], 0u + 4u);
    c.budget -= 6;
    { const bool t = c.r[8].d[0] == c.r[7].d[0];  if (t) { goto L_0025218C; } }
    set32(c.r[6], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == c.r[6].d[0];  if (t) { goto L_0025210C; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == c.r[5].d[0];  if (t) { goto L_002520BC; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == c.r[3].d[0];  if (t) { goto L_00252044; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_0025200C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_002521B4; } }
L_0025200C:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    set32(c.r[3], 0u + 17u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0025202C; } }
    c.r[3].d[0] = ld16((c.r[4].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 768ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00252038; } }
L_0025202C:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 256ull;
    st16((c.r[4].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00252038:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002521B0; } }
L_00252044:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002520B4; } }
    st8((c.r[4].w[0] + 1725u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    set32(c.r[3], 0u + 17u);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00252078; } }
    c.r[3].d[0] = ld16((c.r[4].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 768ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00252084; } }
L_00252078:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 256ull;
    st16((c.r[4].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00252084:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1848u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8388u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] - 14928u);
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    c.r[5].d[0] = c.r[5].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002521B0; } }
L_002520B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 1725u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002521B0; } }
L_002520BC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1730u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002520D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 1725u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { goto L_002521B0; } }
L_002520D0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    set32(c.r[3], 0u + 17u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002520F0; } }
    c.r[3].d[0] = ld16((c.r[4].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 768ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002520FC; } }
L_002520F0:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 256ull;
    st16((c.r[4].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_002520FC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1730u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002521B0; } }
L_0025210C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0025212C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252124u);  if (depth < kMaxDepth) unit_0053(c, 68u, depth + 1u); else { c.pc = 0x0024D130u; return; } if (c.pc != 0x00252124u) [[unlikely]] return; }
L_00252124:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002521B0; } }
L_0025212C:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    set32(c.r[3], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_002521B0; } }
    c.f[1] = ld32((c.r[4].w[0] + 7756u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41980000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002521B0; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 575u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002521B0; } }
    c.r[3].d[0] = ld16((c.r[4].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 1024ull;
    st16((c.r[4].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 768ull;
    st16((c.r[4].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 1725u), static_cast<std::uint8_t>(c.r[7].w[0]));  if (t) { goto L_002521B0; } }
L_0025218C:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 1024ull;
    st16((c.r[4].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002521B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002521B0u);  if (depth < kMaxDepth) unit_0053(c, 68u, depth + 1u); else { c.pc = 0x0024D130u; return; } if (c.pc != 0x002521B0u) [[unlikely]] return; }
L_002521B0:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_002521B4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002521C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1725u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002522BC; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00252270; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00252248; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0025220C; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0025220C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_00252314; } }
L_0025220C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00252228; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252220u);  if (depth < kMaxDepth) unit_0054(c, 188u, depth + 1u); else { c.pc = 0x00253780u; return; } if (c.pc != 0x00252220u) [[unlikely]] return; }
L_00252220:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00252310; } }
L_00252228:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1725u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].d[0] = ld16((c.r[4].w[0] + 1830u));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00252310; } }
L_00252248:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[5].w[0] + 1u);  if (t) { goto L_00252268; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025225Cu);  if (depth < kMaxDepth) unit_0054(c, 188u, depth + 1u); else { c.pc = 0x00253780u; return; } if (c.pc != 0x0025225Cu) [[unlikely]] return; }
L_0025225C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00252310; } }
    set32(c.r[3], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_00252268:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00252310; } }
L_00252270:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[5].w[0] - 1u);  if (t) { goto L_002522B4; } }
    set32(c.r[3], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    set32(c.r[3], 0u + 18u);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 20u);  if (t) { goto L_002522A8; } }
    set32(c.r[3], 0u + 45u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00252310; } }
    set32(c.r[3], 0u + 20u);
    c.budget -= 1;
L_002522A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00252310; } }
    set32(c.r[3], c.r[5].w[0] - 1u);
    c.budget -= 1;
L_002522B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00252310; } }
L_002522BC:
    c.r[5].d[0] = ld16((c.r[4].w[0] + 1830u));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st16((c.r[4].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002522EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002522E4u);  if (depth < kMaxDepth) unit_0053(c, 68u, depth + 1u); else { c.pc = 0x0024D130u; return; } if (c.pc != 0x002522E4u) [[unlikely]] return; }
L_002522E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00252310; } }
L_002522EC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1730u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_0025230C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252300u);  if (depth < kMaxDepth) unit_0053(c, 68u, depth + 1u); else { c.pc = 0x0024D130u; return; } if (c.pc != 0x00252300u) [[unlikely]] return; }
L_00252300:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00252310; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_0025230C:
    st8((c.r[4].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_00252310:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_00252314:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00252320:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 12;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 1u);  goto L_0025235C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1725u)));  if (t) { goto L_00252360; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0025235C:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1725u)));
    c.budget -= 1;
L_00252360:
    c.r[17].d[0] = c.r[3].d[0] << 56;
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);  if (t) { goto L_00252C80; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], c.r[3].w[0] + 26208u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00250000u < 16384u) { entry = entries_0054[(t - 0x00250000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0025238C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002523A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002523A0u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 68u, depth + 1u); else { c.pc = 0x0024D130u; return; } if (c.pc != 0x002523A0u) [[unlikely]] return; }
L_002523A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);  if (t) { goto L_00252C84; } }
L_002523A8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1725u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[18].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = ld16((c.r[18].w[0] + 1830u));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00252C80; } }
L_002523C8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[5].w[0] + 1u);  if (t) { goto L_002523E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002523DCu); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 68u, depth + 1u); else { c.pc = 0x0024D130u; return; } if (c.pc != 0x002523DCu) [[unlikely]] return; }
L_002523DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00252C80; } }
    set32(c.r[3], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_002523E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00252C80; } }
L_002523F0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[5].w[0] - 1u);  if (t) { goto L_00252434; } }
    set32(c.r[3], c.r[5].w[0] + 1u);
    st8((c.r[18].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8386u)));
    set32(c.r[3], 0u + 18u);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 20u);  if (t) { goto L_00252428; } }
    set32(c.r[3], 0u + 45u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00252C80; } }
    set32(c.r[3], 0u + 20u);
    c.budget -= 1;
L_00252428:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00252C80; } }
    set32(c.r[3], c.r[5].w[0] - 1u);
    c.budget -= 1;
L_00252434:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00252C80; } }
L_0025243C:
    c.r[5].d[0] = ld16((c.r[18].w[0] + 1830u));
    c.r[4].d[0] = ld16((c.r[18].w[0] + 704u));
    set32(c.r[3], 0u + 17u);
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st16((c.r[18].w[0] + 704u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8386u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_00252534; } }
    set32(c.r[3], 0u + 18u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00252534; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 1736u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_00252530; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025247Cu); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 81u, depth + 1u); else { c.pc = 0x0024D300u; return; } if (c.pc != 0x0025247Cu) [[unlikely]] return; }
L_0025247C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8386u)));
    set32(c.r[2], 0u + 11u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002524A8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1848u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[2].w[0] + 13488u);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 88u);  if (t) { goto L_002524C0; } }
L_002524A8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1848u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[2].w[0] + 13488u);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 96u);
    c.budget -= 6;
L_002524C0:
    c.f[1] = ld32((c.r[2].w[0]));
    set32(c.r[5], 0u + 26624u);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002524E4u); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0053(c, 2u, depth + 1u); else { c.pc = 0x0024C040u; return; } if (c.pc != 0x002524E4u) [[unlikely]] return; }
L_002524E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[19], c.r[2], c.r[0]);  if (t) { goto L_00252534; } }
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002524F8u); mmi::paddub(c.r[5], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0055(c, 22u, depth + 1u); else { c.pc = 0x00254320u; return; } if (c.pc != 0x002524F8u) [[unlikely]] return; }
L_002524F8:
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00252534; } }
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252514u); st32((c.r[18].w[0] + 1824u), c.r[19].w[0]);  if (depth < kMaxDepth) unit_0054(c, 229u, depth + 1u); else { c.pc = 0x00253CE0u; return; } if (c.pc != 0x00252514u) [[unlikely]] return; }
L_00252514:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00252534; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252524u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0054(c, 204u, depth + 1u); else { c.pc = 0x002539C0u; return; } if (c.pc != 0x00252524u) [[unlikely]] return; }
L_00252524:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_00252534; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_00252530:
    st16((c.r[18].w[0] + 1736u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 1;
L_00252534:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_002527AC; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 1828u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_002527A8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252550u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 89u, depth + 1u); else { c.pc = 0x0024D410u; return; } if (c.pc != 0x00252550u) [[unlikely]] return; }
L_00252550:
    set32(c.r[5], ld32((c.r[18].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002527AC; } }
    c.f[1] = ld32((c.r[5].w[0] + 1068u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002525B4; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 532u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002525B4; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    c.r[3].d[0] = c.r[17].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002525B4; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 8192ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002525C4; } }
L_002525B4:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    set32(c.r[3], 0u + 16u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002527AC; } }
L_002525C4:
    st32((c.r[18].w[0] + 1824u), c.r[5].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002525D0u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0054(c, 229u, depth + 1u); else { c.pc = 0x00253CE0u; return; } if (c.pc != 0x002525D0u) [[unlikely]] return; }
L_002525D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002527AC; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 1520u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002525E4u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0055(c, 22u, depth + 1u); else { c.pc = 0x00254320u; return; } if (c.pc != 0x002525E4u) [[unlikely]] return; }
L_002525E4:
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002527AC; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1848u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] - 13616u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_002526D4; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8386u)));
    set32(c.r[3], 0u + 18u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002526A4; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 1580u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002527AC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[2], 0u + 5u);  if (t) { goto L_0025268C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8387u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00252688; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 1520u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252650u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 47u, depth + 1u); else { c.pc = 0x0024CEB0u; return; } if (c.pc != 0x00252650u) [[unlikely]] return; }
L_00252650:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42340000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002527AC; } }
    set32(c.r[3], 0u + 5u);
    st8((c.r[18].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 20u);
    st8((c.r[18].w[0] + 1726u), static_cast<std::uint8_t>(0u));
    set32(c.r[16], 0u + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1735u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002527AC; } }
L_00252688:
    set32(c.r[2], 0u + 5u);
    c.budget -= 1;
L_0025268C:
    st8((c.r[18].w[0] + 1725u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025269Cu); st8((c.r[18].w[0] + 1726u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0053(c, 75u, depth + 1u); else { c.pc = 0x0024D220u; return; } if (c.pc != 0x0025269Cu) [[unlikely]] return; }
L_0025269C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_002527AC; } }
L_002526A4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 1580u)));
    c.r[3].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002527AC; } }
    set32(c.r[2], 0u + 5u);
    st8((c.r[18].w[0] + 1725u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002526C8u); st8((c.r[18].w[0] + 1726u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0053(c, 75u, depth + 1u); else { c.pc = 0x0024D220u; return; } if (c.pc != 0x002526C8u) [[unlikely]] return; }
L_002526C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_002527AC; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_002526D4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_00252708; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 1592u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002527AC; } }
    set32(c.r[2], 0u + 6u);
    st8((c.r[18].w[0] + 1725u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002526FCu); st8((c.r[18].w[0] + 1726u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0053(c, 75u, depth + 1u); else { c.pc = 0x0024D220u; return; } if (c.pc != 0x002526FCu) [[unlikely]] return; }
L_002526FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_002527AC; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_00252708:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0025277C; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 1520u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025271Cu); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 47u, depth + 1u); else { c.pc = 0x0024CEB0u; return; } if (c.pc != 0x0025271Cu) [[unlikely]] return; }
L_0025271C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42340000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00252754; } }
    set32(c.r[3], 0u + 6u);
    st8((c.r[18].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 18u);
    st8((c.r[18].w[0] + 1726u), static_cast<std::uint8_t>(0u));
    set32(c.r[16], 0u + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1735u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002527AC; } }
L_00252754:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 1580u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002527AC; } }
    set32(c.r[2], 0u + 5u);
    st8((c.r[18].w[0] + 1725u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252774u); st8((c.r[18].w[0] + 1726u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0053(c, 75u, depth + 1u); else { c.pc = 0x0024D220u; return; } if (c.pc != 0x00252774u) [[unlikely]] return; }
L_00252774:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_002527AC; } }
L_0025277C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 1592u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002527AC; } }
    set32(c.r[2], 0u + 7u);
    st8((c.r[18].w[0] + 1725u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025279Cu); st8((c.r[18].w[0] + 1726u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0053(c, 75u, depth + 1u); else { c.pc = 0x0024D220u; return; } if (c.pc != 0x0025279Cu) [[unlikely]] return; }
L_0025279C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_002527AC; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_002527A8:
    st16((c.r[18].w[0] + 1828u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 1;
L_002527AC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_00252C80; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002527D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002527CCu); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 68u, depth + 1u); else { c.pc = 0x0024D130u; return; } if (c.pc != 0x002527CCu) [[unlikely]] return; }
L_002527CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00252C80; } }
L_002527D4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1730u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_002527F4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002527E8u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 68u, depth + 1u); else { c.pc = 0x0024D130u; return; } if (c.pc != 0x002527E8u) [[unlikely]] return; }
L_002527E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00252C80; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_002527F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00252C80; } }
L_002527FC:
    c.r[4].d[0] = ld16((c.r[18].w[0] + 1830u));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st16((c.r[18].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1735u)));
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_00252984; }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1726u)));
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_00252930; } }
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[4].d[0];  if (t) { goto L_002528E8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_002528B0; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00252850; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00252C80; } }
L_00252850:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 512ull;
    st16((c.r[18].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8387u)));
    c.r[1].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00252870; } }
    mmi::paddub(c.r[3], c.r[4], c.r[0]);
    c.budget -= 1;
L_00252870:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1848u)));
    c.r[5].d[0] = c.r[3].d[0] << 56;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[4], c.r[3].w[0] - 15008u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    set32(c.r[6], c.r[7].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].d[0] = c.r[5].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[3], 0u + 1u);
    st8((c.r[18].w[0] + 1730u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1726u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00252C80; } }
L_002528B0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1730u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002528CC; } }
    set32(c.r[3], 0u + 60u);
    st8((c.r[18].w[0] + 1726u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00252C80; } }
L_002528CC:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 512ull;
    st16((c.r[18].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1730u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00252C80; } }
L_002528E8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00252908; } }
    set32(c.r[3], 0u + 45u);
    st8((c.r[18].w[0] + 1726u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00252C80; } }
L_00252908:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1730u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_00252928; }
    set32(c.r[3], 0u + 45u);
    st8((c.r[18].w[0] + 1726u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00252C80; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_00252928:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00252C80; } }
L_00252930:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1730u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00252944; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[18].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00252944:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 812u)));
    c.r[3].d[0] = c.r[4].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00252C80; } }
    c.r[3].d[0] = c.r[4].d[0] & 128ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (t) { goto L_00252970; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1730u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00252C80; } }
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 1;
L_00252970:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252978u);  if (depth < kMaxDepth) unit_0053(c, 68u, depth + 1u); else { c.pc = 0x0024D130u; return; } if (c.pc != 0x00252978u) [[unlikely]] return; }
L_00252978:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00252C80; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_00252984:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1735u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00252C80; } }
L_0025298C:
    c.r[4].d[0] = ld16((c.r[18].w[0] + 1830u));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st16((c.r[18].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1735u)));
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_00252BC0; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1726u)));
    set32(c.r[6], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_00252B5C; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_00252AAC; } }
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00252A64; } }
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_00252A2C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002529EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00252C80; } }
L_002529EC:
    c.r[4].d[0] = ld16((c.r[18].w[0] + 704u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] - 14928u);
    c.r[4].d[0] = c.r[4].d[0] | 768ull;
    st16((c.r[18].w[0] + 704u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1848u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8388u)));
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.r[4].d[0] = c.r[4].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    st8((c.r[18].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1726u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { goto L_00252C80; } }
L_00252A2C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1730u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00252A48; } }
    set32(c.r[3], 0u + 60u);
    st8((c.r[18].w[0] + 1726u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00252C80; } }
L_00252A48:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 768ull;
    st16((c.r[18].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1730u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00252C80; } }
L_00252A64:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00252A84; } }
    set32(c.r[3], 0u + 45u);
    st8((c.r[18].w[0] + 1726u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00252C80; } }
L_00252A84:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1730u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_00252AA4; }
    set32(c.r[3], 0u + 45u);
    st8((c.r[18].w[0] + 1726u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00252C80; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_00252AA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00252C80; } }
L_00252AAC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1730u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00252B20; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[18].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8386u)));
    set32(c.r[3], 0u + 6u);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00252B20; } }
    c.f[1] = ld32((c.r[18].w[0] + 7756u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41980000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00252B20; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 575u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00252B20; } }
    st8((c.r[18].w[0] + 1726u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st16((c.r[18].w[0] + 704u), static_cast<std::uint16_t>(0u));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 1024ull;
    st16((c.r[18].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 768ull;
    st16((c.r[18].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 8;
L_00252B20:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 812u)));
    c.r[3].d[0] = c.r[4].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00252C80; } }
    c.r[3].d[0] = c.r[4].d[0] & 128ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (t) { goto L_00252B4C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1730u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00252C80; } }
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 1;
L_00252B4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252B54u);  if (depth < kMaxDepth) unit_0053(c, 68u, depth + 1u); else { c.pc = 0x0024D130u; return; } if (c.pc != 0x00252B54u) [[unlikely]] return; }
L_00252B54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00252C80; } }
L_00252B5C:
    st16((c.r[18].w[0] + 704u), static_cast<std::uint16_t>(0u));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 1024ull;
    st16((c.r[18].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1730u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00252B80; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[18].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00252B80:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 812u)));
    c.r[3].d[0] = c.r[4].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00252C80; } }
    c.r[3].d[0] = c.r[4].d[0] & 128ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (t) { goto L_00252BAC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1730u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00252C80; } }
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 1;
L_00252BAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252BB4u);  if (depth < kMaxDepth) unit_0053(c, 68u, depth + 1u); else { c.pc = 0x0024D130u; return; } if (c.pc != 0x00252BB4u) [[unlikely]] return; }
L_00252BB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00252C80; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_00252BC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1735u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00252C80; } }
L_00252BC8:
    c.r[4].d[0] = ld16((c.r[18].w[0] + 1830u));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st16((c.r[18].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1735u)));
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_00252C7C; }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1726u)));
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_00252C4C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00252C20; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00252C10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00252C80; } }
L_00252C10:
    st8((c.r[18].w[0] + 1726u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 30u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00252C80; } }
L_00252C20:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1730u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00252C44; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[18].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 256ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00252C80; } }
L_00252C44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1726u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00252C80; } }
L_00252C4C:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 812u)));
    c.r[3].d[0] = c.r[4].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00252C80; } }
    c.r[3].d[0] = c.r[4].d[0] & 128ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00252C80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252C70u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 68u, depth + 1u); else { c.pc = 0x0024D130u; return; } if (c.pc != 0x00252C70u) [[unlikely]] return; }
L_00252C70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00252C80; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_00252C7C:
    st8((c.r[18].w[0] + 1735u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_00252C80:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00252C84:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00252CA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 736u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00252CC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252CBCu);  if (depth < kMaxDepth) unit_0054(c, 188u, depth + 1u); else { c.pc = 0x00253780u; return; } if (c.pc != 0x00252CBCu) [[unlikely]] return; }
L_00252CBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_00252DC8; } }
L_00252CC4:
    c.r[5].d[0] = ld16((c.r[4].w[0] + 704u));
    set32(c.r[3], 0u + 4u);
    c.r[5].d[0] = c.r[5].d[0] | 128ull;
    st16((c.r[4].w[0] + 704u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1725u)));
    c.budget -= 7;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_00252D84; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_00252D40; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[3], c.r[6].w[0] + 1u);  if (t) { goto L_00252D38; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_00252D14; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00252D14; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00252DC4; } }
L_00252D14:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1725u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].d[0] = ld16((c.r[4].w[0] + 1830u));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00252DC4; } }
    set32(c.r[3], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_00252D38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00252DC4; } }
L_00252D40:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00252D60; } }
    c.r[5].d[0] = ld8((c.r[4].w[0] + 741u));
    set32(c.r[3], 0u + 14u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[3], c.r[6].w[0] - 1u);  if (t) { goto L_00252D7C; } }
L_00252D60:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1725u)));
    set32(c.r[3], 0u + 30u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 1725u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 1731u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00252DC4; } }
    set32(c.r[3], c.r[6].w[0] - 1u);
    c.budget -= 1;
L_00252D7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00252DC4; } }
L_00252D84:
    c.r[5].d[0] = ld16((c.r[4].w[0] + 1830u));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st16((c.r[4].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1731u)));
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_00252DC0; }
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 1724u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 3u);
    st8((c.r[4].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 5u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 1726u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00252DC4; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_00252DC0:
    st8((c.r[4].w[0] + 1731u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_00252DC4:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_00252DC8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00252DD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 9;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 1u);  goto L_00252E00; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[3].d[0] << 56;  if (t) { goto L_00252E04; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_00252E00:
    c.r[6].d[0] = c.r[3].d[0] << 56;
    c.budget -= 1;
L_00252E04:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 1830u));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    set32(c.r[4], 0u + 2u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1725u)));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);  if (t) { goto L_00253034; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00252FF0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00252E40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002530CC; } }
L_00252E40:
    c.f[1] = ld32((c.r[16].w[0] + 7796u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 848u)));
    c.f[1] = fp::add(c.f[0], c.f[1]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00252E8C; } }
    c.f[1] = ld32((c.r[16].w[0] + 1228u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00252FD0; } }
L_00252E8C:
    set32(c.r[5], ld32((c.r[16].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002530C8; } }
    c.f[1] = ld32((c.r[5].w[0] + 1068u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00252EF0; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 532u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00252EF0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    c.r[3].d[0] = c.r[6].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00252EF0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 8192ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00252F00; } }
L_00252EF0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    set32(c.r[3], 0u + 16u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002530C8; } }
L_00252F00:
    c.f[3] = ld32((c.r[5].w[0] + 32u));
    c.f[2] = ld32((c.r[16].w[0] + 32u));
    c.f[1] = ld32((c.r[5].w[0] + 40u));
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252F24u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x00252F24u) [[unlikely]] return; }
L_00252F24:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[3], 0u + 11u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00252F50; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1848u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[3].w[0] + 13488u);
    set32(c.r[4], c.r[4].w[0] << 7);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 88u);  if (t) { goto L_00252F68; } }
L_00252F50:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1848u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[3].w[0] + 13488u);
    set32(c.r[4], c.r[4].w[0] << 7);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + 96u);
    c.budget -= 6;
L_00252F68:
    c.f[2] = ld32((c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002530C8; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[3], 0u + 11u);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00252FB8; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 256ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00252FC4; } }
L_00252FB8:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 384ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00252FC4:
    set32(c.r[3], 0u + 45u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002530C8; } }
L_00252FD0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002530C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252FE8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 68u, depth + 1u); else { c.pc = 0x0024D130u; return; } if (c.pc != 0x00252FE8u) [[unlikely]] return; }
L_00252FE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002530C8; } }
L_00252FF0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0025300C; } }
    st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1730u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002530C8; } }
L_0025300C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1730u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_0025302C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253020u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 68u, depth + 1u); else { c.pc = 0x0024D130u; return; } if (c.pc != 0x00253020u) [[unlikely]] return; }
L_00253020:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002530C8; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_0025302C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002530C8; } }
L_00253034:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 575u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002530A4; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 574u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1730u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002530A4; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 592u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002530A4; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 531u));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 531u));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002530A4; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    c.r[3].d[0] = c.r[6].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002530A4; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 514u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_002530A4; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 256ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 574u));
    st8((c.r[16].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
L_002530A4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002530C8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002530C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002530C8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 68u, depth + 1u); else { c.pc = 0x0024D130u; return; } if (c.pc != 0x002530C8u) [[unlikely]] return; }
L_002530C8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002530CC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002530E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 9;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 1u);  goto L_00253110; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1725u)));  if (t) { goto L_00253114; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_00253110:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1725u)));
    c.budget -= 1;
L_00253114:
    c.r[5].d[0] = c.r[3].d[0] << 56;
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);  if (t) { goto L_002531E4; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { mmi::paddub(c.r[4], c.r[16], c.r[0]);  goto L_00253194; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { mmi::paddub(c.r[4], c.r[16], c.r[0]);  goto L_00253168; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_00253150; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0025331C; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_00253150:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253158u);  if (depth < kMaxDepth) unit_0054(c, 116u, depth + 1u); else { c.pc = 0x00251D90u; return; } if (c.pc != 0x00253158u) [[unlikely]] return; }
L_00253158:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00253318; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_00253168:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253170u);  if (depth < kMaxDepth) unit_0054(c, 116u, depth + 1u); else { c.pc = 0x00251D90u; return; } if (c.pc != 0x00253170u) [[unlikely]] return; }
L_00253170:
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = ld16((c.r[16].w[0] + 704u));
    set32(c.r[3], 0u + 45u);
    c.r[4].d[0] = c.r[4].d[0] | 384ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00253318; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_00253194:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025319Cu);  if (depth < kMaxDepth) unit_0054(c, 116u, depth + 1u); else { c.pc = 0x00251D90u; return; } if (c.pc != 0x0025319Cu) [[unlikely]] return; }
L_0025319C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002531BC; } }
    set32(c.r[3], 0u + 3u);
    st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1730u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00253318; } }
L_002531BC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1730u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_002531DC; }
    set32(c.r[3], 0u + 3u);
    st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1730u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00253318; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_002531DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00253318; } }
L_002531E4:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 575u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00253248; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1730u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00253248; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 592u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00253248; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 531u));
    c.r[3].d[0] = ld8((c.r[6].w[0] + 531u));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00253248; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 1u)));
    c.r[3].d[0] = c.r[5].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00253248; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 514u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_00253248; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 256ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00253248:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 575u));
    st8((c.r[16].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00253318; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00253318; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253274u);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x00253274u) [[unlikely]] return; }
L_00253274:
    set32(c.r[3], 0u + 3u);
    c.r[4].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 1024u);  goto L_00253304; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 2048u);  goto L_002532E4; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 4096u);  goto L_002532C4; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002532B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00253318; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002532B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002532B8u);  if (depth < kMaxDepth) unit_0053(c, 68u, depth + 1u); else { c.pc = 0x0024D130u; return; } if (c.pc != 0x002532B8u) [[unlikely]] return; }
L_002532B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00253318; } }
    set32(c.r[2], 0u + 4096u);
    c.budget -= 1;
L_002532C4:
    st16((c.r[16].w[0] + 1830u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002532D0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0054(c, 202u, depth + 1u); else { c.pc = 0x002539A0u; return; } if (c.pc != 0x002532D0u) [[unlikely]] return; }
L_002532D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002532D8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 69u, depth + 1u); else { c.pc = 0x0024D140u; return; } if (c.pc != 0x002532D8u) [[unlikely]] return; }
L_002532D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00253318; } }
    set32(c.r[2], 0u + 2048u);
    c.budget -= 1;
L_002532E4:
    st16((c.r[16].w[0] + 1830u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002532F0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0054(c, 202u, depth + 1u); else { c.pc = 0x002539A0u; return; } if (c.pc != 0x002532F0u) [[unlikely]] return; }
L_002532F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002532F8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 69u, depth + 1u); else { c.pc = 0x0024D140u; return; } if (c.pc != 0x002532F8u) [[unlikely]] return; }
L_002532F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00253318; } }
    set32(c.r[2], 0u + 1024u);
    c.budget -= 1;
L_00253304:
    st16((c.r[16].w[0] + 1830u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253310u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0054(c, 202u, depth + 1u); else { c.pc = 0x002539A0u; return; } if (c.pc != 0x00253310u) [[unlikely]] return; }
L_00253310:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253318u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 69u, depth + 1u); else { c.pc = 0x0024D140u; return; } if (c.pc != 0x00253318u) [[unlikely]] return; }
L_00253318:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0025331C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00253330:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1725u)));
    set32(c.r[7], 0u + 3u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[7].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002534B0; } }
    set32(c.r[6], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_0025348C; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_00253398; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00253374; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002534CC; } }
L_00253374:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002534C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_002534C8; } }
L_00253398:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 1528u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002533E0; } }
    st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1580u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002533D0; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 512ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002534C8; } }
L_002533D0:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 768ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002534C8; } }
L_002533E0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1836u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_002533F8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(c.r[7].w[0]));  if (t) { goto L_002534C8; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_002533F8:
    st16((c.r[16].w[0] + 1836u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 1824u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002534C8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBE4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    set32(c.r[5], c.r[3].w[0] + 32u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253420u); set32(c.r[6], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_005B(c, 162u, depth + 1u); else { c.pc = 0x0026E650u; return; } if (c.pc != 0x00253420u) [[unlikely]] return; }
L_00253420:
    c.f[1] = ld32((c.r[16].w[0] + 968u));
    c.f[0] = ld32((c.r[29].w[0] + 32u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00253448; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 1024ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00253454; } }
L_00253448:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 2048ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00253454:
    c.f[1] = ld32((c.r[16].w[0] + 972u));
    c.f[0] = ld32((c.r[29].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0025347C; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 8192ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002534C8; } }
L_0025347C:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 4096ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002534C8; } }
L_0025348C:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002534C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(c.r[7].w[0]));  if (t) { goto L_002534C8; } }
L_002534B0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002534C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002534C8u);  if (depth < kMaxDepth) unit_0053(c, 68u, depth + 1u); else { c.pc = 0x0024D130u; return; } if (c.pc != 0x002534C8u) [[unlikely]] return; }
L_002534C8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002534CC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002534E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1725u)));
    set32(c.r[6], 0u + 2u);
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == c.r[6].d[0];  if (t) { goto L_00253678; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0025361C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00253524; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);  if (t) { goto L_00253764; } }
L_00253524:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 812u)));
    c.r[3].d[0] = c.r[4].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[4].d[0] & 8192ull;  if (t) { goto L_00253550; } }
    st8((c.r[17].w[0] + 1734u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 1735u), static_cast<std::uint8_t>(0u));
    st16((c.r[17].w[0] + 1832u), static_cast<std::uint16_t>(0u));
    st8((c.r[17].w[0] + 1724u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 1732u), static_cast<std::uint16_t>(0u));  if (t) { goto L_00253760; } }
    c.r[3].d[0] = c.r[4].d[0] & 8192ull;
    c.budget -= 1;
L_00253550:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00253760; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253560u);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x00253560u) [[unlikely]] return; }
L_00253560:
    c.r[3].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_00253614; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253578u); st8((c.r[17].w[0] + 1725u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x00253578u) [[unlikely]] return; }
L_00253578:
    c.r[3].d[0] = c.r[2].d[0] & 3ull;
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 4096u);  if (t) { goto L_002535D8; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 8192u);  if (t) { goto L_002535CC; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1024u);  if (t) { goto L_002535C0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 2048u);  if (t) { goto L_002535B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 30u);  if (t) { goto L_002535E0; } }
    set32(c.r[2], 0u + 2048u);
    c.budget -= 1;
L_002535B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 1830u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_002535DC; } }
    set32(c.r[2], 0u + 1024u);
    c.budget -= 1;
L_002535C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 1830u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_002535DC; } }
    set32(c.r[2], 0u + 8192u);
    c.budget -= 1;
L_002535CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 1830u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_002535DC; } }
    set32(c.r[2], 0u + 4096u);
    c.budget -= 1;
L_002535D8:
    st16((c.r[17].w[0] + 1830u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_002535DC:
    set32(c.r[2], 0u + 30u);
    c.budget -= 1;
L_002535E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002535E8u); st8((c.r[17].w[0] + 1730u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x002535E8u) [[unlikely]] return; }
L_002535E8:
    c.r[4].d[0] = c.r[2].d[0] & 7ull;
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1730u)));
    set32(c.r[4], c.r[4].w[0] << 1);
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00253760; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_00253614:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00253760; } }
L_0025361C:
    c.r[5].d[0] = ld16((c.r[17].w[0] + 1830u));
    c.r[4].d[0] = ld16((c.r[17].w[0] + 704u));
    set32(c.r[3], 0u + 12u);
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st16((c.r[17].w[0] + 704u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[17].w[0] + 580u));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00253678; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1730u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_00253654; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 1725u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { goto L_00253678; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_00253654:
    st8((c.r[17].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 846u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00253678; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1730u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00253678; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[17].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00253678:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 812u)));
    c.r[3].d[0] = c.r[4].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00253760; } }
    c.r[3].d[0] = c.r[4].d[0] & 8192ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00253760; } }
    st8((c.r[17].w[0] + 1734u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 1735u), static_cast<std::uint8_t>(0u));
    st16((c.r[17].w[0] + 1832u), static_cast<std::uint16_t>(0u));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8386u)));
    set32(c.r[3], 0u + 17u);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00253754; } }
    set32(c.r[3], 0u + 18u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00253754; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1845u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00253754; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41E00000u);
    c.f[12] = c.r[2].w[0];
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.r[5].d[0] = 0ull | 32768ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002536E0u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 2u, depth + 1u); else { c.pc = 0x0024C040u; return; } if (c.pc != 0x002536E0u) [[unlikely]] return; }
L_002536E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[2], c.r[0]);  if (t) { goto L_00253754; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1848u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[2].w[0] - 14880u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1838u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[18], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[18].sd[0] < 47ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00253714; } }
    set32(c.r[18], 0u + 47u);
    c.budget -= 1;
L_00253714:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025371Cu);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x0025371Cu) [[unlikely]] return; }
L_0025371C:
    set32(c.r[3], c.r[18].w[0] << 4);
    c.r[4].d[0] = c.r[2].d[0] & 15ull;
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] - 14848u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00253754; } }
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025374Cu); st32((c.r[17].w[0] + 1824u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0054(c, 198u, depth + 1u); else { c.pc = 0x00253960u; return; } if (c.pc != 0x0025374Cu) [[unlikely]] return; }
L_0025374C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00253760; } }
L_00253754:
    st8((c.r[17].w[0] + 1724u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 1725u), static_cast<std::uint8_t>(0u));
    st16((c.r[17].w[0] + 1732u), static_cast<std::uint16_t>(0u));
    c.budget -= 3;
L_00253760:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00253764:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00253780:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[4].w[0] + 1724u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 300u);
    st8((c.r[4].w[0] + 1725u), static_cast<std::uint8_t>(0u));
    st16((c.r[4].w[0] + 1738u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[4].w[0] + 1824u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002537ACu); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0055(c, 85u, depth + 1u); else { c.pc = 0x00255680u; return; } if (c.pc != 0x002537ACu) [[unlikely]] return; }
L_002537AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002537B4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0055(c, 174u, depth + 1u); else { c.pc = 0x002562B0u; return; } if (c.pc != 0x002537B4u) [[unlikely]] return; }
L_002537B4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002537D0:
    set32(c.r[3], 0u + 2u);
    st8((c.r[4].w[0] + 1724u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 1727u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_002537E0:
    set32(c.r[3], 0u + 3u);
    st8((c.r[4].w[0] + 1724u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 1727u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_002537F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    set32(c.r[3], 0u + 17u);
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_00253930; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 1824u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x447A0000u);  if (t) { goto L_00253834; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253828u);  if (depth < kMaxDepth) unit_0053(c, 47u, depth + 1u); else { c.pc = 0x0024CEB0u; return; } if (c.pc != 0x00253828u) [[unlikely]] return; }
L_00253828:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));  if (t) { goto L_0025383C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    c.budget -= 1;
L_00253834:
    c.f[0] = c.r[3].w[0];
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.budget -= 2;
L_0025383C:
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.f[20] = c.f[0];  if (t) { goto L_00253888; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42340000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002538CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025386Cu);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x0025386Cu) [[unlikely]] return; }
L_0025386C:
    c.r[3].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002538CC; } }
    set32(c.r[3], 0u + 6u);
    st8((c.r[16].w[0] + 1724u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0025393C; } }
L_00253888:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002538CC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8387u)));
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002538CC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42340000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002538CC; } }
    set32(c.r[3], 0u + 5u);
    st8((c.r[16].w[0] + 1724u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0025393C; } }
L_002538CC:
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1848u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] - 14080u);
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 4u);  if (t) { goto L_00253934; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002538FCu);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x002538FCu) [[unlikely]] return; }
L_002538FC:
    set32(c.r[3], c.r[17].w[0] << 4);
    c.r[4].d[0] = c.r[2].d[0] & 15ull;
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] - 13984u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00253930; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253928u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0054(c, 205u, depth + 1u); else { c.pc = 0x002539D0u; return; } if (c.pc != 0x00253928u) [[unlikely]] return; }
L_00253928:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);  if (t) { goto L_00253940; } }
L_00253930:
    set32(c.r[3], 0u + 4u);
    c.budget -= 1;
L_00253934:
    st8((c.r[16].w[0] + 1724u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0025393C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00253940:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00253960:
    set32(c.r[3], 0u + 4u);
    st8((c.r[4].w[0] + 1724u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 1725u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_00253970:
    set32(c.r[3], 0u + 5u);
    st8((c.r[4].w[0] + 1724u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 1725u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_00253980:
    set32(c.r[3], 0u + 6u);
    st8((c.r[4].w[0] + 1724u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 1725u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_00253990:
    set32(c.r[3], 0u + 7u);
    st8((c.r[4].w[0] + 1724u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 1725u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_002539A0:
    set32(c.r[3], 0u + 8u);
    st8((c.r[4].w[0] + 1724u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 1725u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_002539B0:
    set32(c.r[3], 0u + 9u);
    st8((c.r[4].w[0] + 1724u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 1725u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_002539C0:
    set32(c.r[3], 0u + 10u);
    st8((c.r[4].w[0] + 1724u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 1725u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_002539D0:
    set32(c.r[3], 0u + 11u);
    st8((c.r[4].w[0] + 1724u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 1725u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_002539E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 12;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 1u);  goto L_00253A1C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[3].d[0] << 56;  if (t) { goto L_00253A20; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_00253A1C:
    c.r[17].d[0] = c.r[3].d[0] << 56;
    c.budget -= 1;
L_00253A20:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 1736u)));
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_00253B84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253A38u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 81u, depth + 1u); else { c.pc = 0x0024D300u; return; } if (c.pc != 0x00253A38u) [[unlikely]] return; }
L_00253A38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253A40u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 38u, depth + 1u); else { c.pc = 0x0024CAD0u; return; } if (c.pc != 0x00253A40u) [[unlikely]] return; }
L_00253A40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[1] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.f[12] = fp::mul(c.f[1], c.f[0]);  if (t) { goto L_00253AF0; } }
    set32(c.r[5], 0u + 26624u);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253A6Cu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 2u, depth + 1u); else { c.pc = 0x0024C040u; return; } if (c.pc != 0x00253A6Cu) [[unlikely]] return; }
L_00253A6C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[19], c.r[2], c.r[0]);  if (t) { goto L_00253B8C; } }
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253A80u); mmi::paddub(c.r[5], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0055(c, 22u, depth + 1u); else { c.pc = 0x00254320u; return; } if (c.pc != 0x00253A80u) [[unlikely]] return; }
L_00253A80:
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00253B8C; } }
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253A9Cu); st32((c.r[18].w[0] + 1824u), c.r[19].w[0]);  if (depth < kMaxDepth) unit_0054(c, 229u, depth + 1u); else { c.pc = 0x00253CE0u; return; } if (c.pc != 0x00253A9Cu) [[unlikely]] return; }
L_00253A9C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00253B8C; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8386u)));
    set32(c.r[3], 0u + 18u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00253ACC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253ABCu); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0054(c, 193u, depth + 1u); else { c.pc = 0x002537F0u; return; } if (c.pc != 0x00253ABCu) [[unlikely]] return; }
L_00253ABC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253AC4u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 69u, depth + 1u); else { c.pc = 0x0024D140u; return; } if (c.pc != 0x00253AC4u) [[unlikely]] return; }
L_00253AC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_00253B8C; } }
L_00253ACC:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 1592u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00253B8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253AE0u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0054(c, 193u, depth + 1u); else { c.pc = 0x002537F0u; return; } if (c.pc != 0x00253AE0u) [[unlikely]] return; }
L_00253AE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253AE8u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 69u, depth + 1u); else { c.pc = 0x0024D140u; return; } if (c.pc != 0x00253AE8u) [[unlikely]] return; }
L_00253AE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_00253B8C; } }
L_00253AF0:
    set32(c.r[5], 0u + 26624u);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253B00u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 2u, depth + 1u); else { c.pc = 0x0024C040u; return; } if (c.pc != 0x00253B00u) [[unlikely]] return; }
L_00253B00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[19], c.r[2], c.r[0]);  if (t) { goto L_00253B8C; } }
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253B14u); mmi::paddub(c.r[5], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0055(c, 22u, depth + 1u); else { c.pc = 0x00254320u; return; } if (c.pc != 0x00253B14u) [[unlikely]] return; }
L_00253B14:
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00253B8C; } }
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253B30u); st32((c.r[18].w[0] + 1824u), c.r[19].w[0]);  if (depth < kMaxDepth) unit_0054(c, 229u, depth + 1u); else { c.pc = 0x00253CE0u; return; } if (c.pc != 0x00253B30u) [[unlikely]] return; }
L_00253B30:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00253B8C; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8386u)));
    set32(c.r[3], 0u + 18u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00253B60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253B50u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0054(c, 193u, depth + 1u); else { c.pc = 0x002537F0u; return; } if (c.pc != 0x00253B50u) [[unlikely]] return; }
L_00253B50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253B58u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 69u, depth + 1u); else { c.pc = 0x0024D140u; return; } if (c.pc != 0x00253B58u) [[unlikely]] return; }
L_00253B58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_00253B8C; } }
L_00253B60:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 1592u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00253B8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253B74u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0054(c, 193u, depth + 1u); else { c.pc = 0x002537F0u; return; } if (c.pc != 0x00253B74u) [[unlikely]] return; }
L_00253B74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253B7Cu); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 69u, depth + 1u); else { c.pc = 0x0024D140u; return; } if (c.pc != 0x00253B7Cu) [[unlikely]] return; }
L_00253B7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_00253B8C; } }
L_00253B84:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[18].w[0] + 1736u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00253B8C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_00253CBC; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 1828u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_00253CB8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253BA8u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 89u, depth + 1u); else { c.pc = 0x0024D410u; return; } if (c.pc != 0x00253BA8u) [[unlikely]] return; }
L_00253BA8:
    set32(c.r[5], ld32((c.r[18].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00253CBC; } }
    c.f[1] = ld32((c.r[5].w[0] + 1068u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00253C0C; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 532u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00253C0C; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    c.r[3].d[0] = c.r[17].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00253C0C; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 8192ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00253C1C; } }
L_00253C0C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    set32(c.r[3], 0u + 16u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00253CBC; } }
L_00253C1C:
    st32((c.r[18].w[0] + 1824u), c.r[5].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253C28u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0054(c, 229u, depth + 1u); else { c.pc = 0x00253CE0u; return; } if (c.pc != 0x00253C28u) [[unlikely]] return; }
L_00253C28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00253CBC; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 1520u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253C3Cu); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0055(c, 22u, depth + 1u); else { c.pc = 0x00254320u; return; } if (c.pc != 0x00253C3Cu) [[unlikely]] return; }
L_00253C3C:
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00253CBC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8386u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (t) { goto L_00253CA4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8387u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00253CA0; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 1520u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253C74u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 47u, depth + 1u); else { c.pc = 0x0024CEB0u; return; } if (c.pc != 0x00253C74u) [[unlikely]] return; }
L_00253C74:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42340000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00253CBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253C98u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0054(c, 239u, depth + 1u); else { c.pc = 0x00253EF0u; return; } if (c.pc != 0x00253C98u) [[unlikely]] return; }
L_00253C98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);  if (t) { goto L_00253CC0; } }
L_00253CA0:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 1;
L_00253CA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253CACu);  if (depth < kMaxDepth) unit_0054(c, 239u, depth + 1u); else { c.pc = 0x00253EF0u; return; } if (c.pc != 0x00253CACu) [[unlikely]] return; }
L_00253CAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00253CBC; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_00253CB8:
    st16((c.r[18].w[0] + 1828u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 1;
L_00253CBC:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00253CC0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00253CE0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[4].w[0] + 1824u)));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[20], c.r[4], c.r[0]);  if (t) { goto L_00253EB0; } }
    c.f[5] = ld32((c.r[2].w[0] + 32u));
    c.f[4] = ld32((c.r[20].w[0] + 32u));
    c.f[1] = ld32((c.r[2].w[0] + 40u));
    c.f[0] = ld32((c.r[20].w[0] + 40u));
    c.f[3] = ld32((c.r[2].w[0] + 36u));
    c.f[2] = ld32((c.r[20].w[0] + 36u));
    c.f[20] = fp::sub(c.f[5], c.f[4]);
    c.f[22] = fp::sub(c.f[1], c.f[0]);
    c.f[21] = fp::sub(c.f[3], c.f[2]);
    c.f[12] = c.f[20];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253D48u); c.f[13] = c.f[22];  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x00253D48u) [[unlikely]] return; }
L_00253D48:
    c.facc = fp::mul(c.f[20], c.f[20]);
    c.f[12] = fp::add(c.facc, fp::mul(c.f[22], c.f[22]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253D58u); mmi::paddub(c.r[18], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x00253D58u) [[unlikely]] return; }
L_00253D58:
    c.f[20] = c.f[0];
    c.f[12] = c.f[21];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253D68u); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x00253D68u) [[unlikely]] return; }
L_00253D68:
    c.facc = fp::mul(c.f[20], c.f[20]);
    c.f[12] = fp::add(c.facc, fp::mul(c.f[21], c.f[21]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253D78u); mmi::paddub(c.r[16], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x00253D78u) [[unlikely]] return; }
L_00253D78:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[17], c.r[2].w[0] + 26144u);
    c.f[20] = c.f[0];
    c.r[19].d[0] = c.r[16].d[0] & 65535ull;
    c.r[2].d[0] = 0ull | 65535ull;
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[18].d[0] & c.r[2].d[0];  if (t) { goto L_00253E98; } }
L_00253D98:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[16].w[0] + 1u);  if (t) { goto L_00253E88; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 531u));
    c.r[2].d[0] = ld8((c.r[20].w[0] + 531u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00253E84; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[20].d[0];  if (t) { goto L_00253E84; } }
    c.f[5] = ld32((c.r[17].w[0] + 32u));
    c.f[4] = ld32((c.r[20].w[0] + 32u));
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = ld32((c.r[20].w[0] + 40u));
    c.f[3] = ld32((c.r[17].w[0] + 36u));
    c.f[2] = ld32((c.r[20].w[0] + 36u));
    c.f[21] = fp::sub(c.f[5], c.f[4]);
    c.f[23] = fp::sub(c.f[1], c.f[0]);
    c.f[22] = fp::sub(c.f[3], c.f[2]);
    c.f[12] = c.f[21];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253DF0u); c.f[13] = c.f[23];  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x00253DF0u) [[unlikely]] return; }
L_00253DF0:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] - c.r[18].w[0]);
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[1].d[0] = c.r[3].sd[0] < 1025ll ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] != 0ull) { c.facc = fp::mul(c.f[21], c.f[21]);  goto L_00253E1C; }
    c.r[2].d[0] = 0ull | 64512ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00253E84; } }
    c.facc = fp::mul(c.f[21], c.f[21]);
    c.budget -= 1;
L_00253E1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253E24u); c.f[12] = fp::add(c.facc, fp::mul(c.f[23], c.f[23]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x00253E24u) [[unlikely]] return; }
L_00253E24:
    c.f[21] = c.f[0];
    c.f[12] = c.f[22];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253E34u); c.f[13] = c.f[21];  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x00253E34u) [[unlikely]] return; }
L_00253E34:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] - c.r[19].w[0]);
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[1].d[0] = c.r[3].sd[0] < 1025ll ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] != 0ull) { c.facc = fp::mul(c.f[21], c.f[21]);  goto L_00253E64; }
    c.r[2].d[0] = 0ull | 64512ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00253E84; } }
    c.facc = fp::mul(c.f[21], c.f[21]);
    c.budget -= 2;
L_00253E64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253E6Cu); c.f[12] = fp::add(c.facc, fp::mul(c.f[22], c.f[22]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x00253E6Cu) [[unlikely]] return; }
L_00253E6C:
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00253E84; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00253EB4; } }
L_00253E84:
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00253E88:
    c.r[16].d[0] = c.r[2].d[0] << 56;
    set32(c.r[17], c.r[17].w[0] + 8448u);
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);
    c.budget -= 4;
L_00253E98:
    c.r[2].d[0] = c.r[16].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[2].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00253D98u | kUnwind; return; } goto L_00253D98; } }
    c.budget -= 1;
L_00253EB0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00253EB4:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00253EF0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    set32(c.r[3], 0u + 18u);
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { [[clang::musttail]] return unit_0055(c, 4u, depth); } }
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 1580u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[3], 0u + 19u);  if (t) { [[clang::musttail]] return unit_0055(c, 3u, depth); } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 1592u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0055(c, 2u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253F34u); c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1848u)));  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x00253F34u) [[unlikely]] return; }
L_00253F34:
    set32(c.r[3], c.r[16].w[0] << 4);
    c.r[4].d[0] = c.r[2].d[0] & 15ull;
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 736u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);  if (t) { goto L_00253F68; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] - 17216u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[16], 0u + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; if (c.r[3].d[0] != 0) c.r[16].d[0] = 0ull;  if (t) { goto L_00253F7C; } }
L_00253F68:
    set32(c.r[3], c.r[3].w[0] - 16864u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[16], 0u + 1u);
    if (c.r[3].d[0] != 0) c.r[16].d[0] = 0ull;
    c.budget -= 5;
L_00253F7C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8386u)));
    set32(c.r[3], 0u + 16u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { [[clang::musttail]] return unit_0055(c, 8u, depth); } }
    set32(c.r[3], ld32((c.r[17].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0055(c, 8u, depth); } }
    c.f[5] = ld32((c.r[3].w[0] + 32u));
    c.f[0] = ld32((c.r[17].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[4] = ld32((c.r[3].w[0] + 36u));
    c.f[3] = c.r[2].w[0];
    c.f[1] = ld32((c.r[3].w[0] + 40u));
    c.f[2] = ld32((c.r[17].w[0] + 36u));
    c.f[5] = fp::sub(c.f[5], c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    c.f[3] = fp::add(c.f[3], c.f[4]);
    c.f[20] = fp::sub(c.f[3], c.f[2]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[5], c.f[5]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253FD4u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x00253FD4u) [[unlikely]] return; }
L_00253FD4:
    c.f[12] = c.f[20] ^ fp::kSign;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253FE0u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x00253FE0u) [[unlikely]] return; }
L_00253FE0:
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    c.r[3].d[0] = 0ull | 38912ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = 0ull | 59393ull;  if (t) { [[clang::musttail]] return unit_0055(c, 8u, depth); } }
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0055(c, 8u, depth); } }
    [[clang::musttail]] return unit_0055(c, 1u, depth);
}

}
