#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0053[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 13, 0,
    0, 14, 0, 15, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0,
    19, 0, 20, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0,
    25, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 31, 0,
    0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 36, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 40, 0, 41, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0,
    0, 49, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 52, 0, 53, 0, 0, 0, 54,
    0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 57, 0, 0, 0, 0, 0, 0, 0, 58, 0, 59, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 63, 0, 64, 0, 65, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 67, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 71, 0, 72, 73, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 76, 0, 77, 0, 78, 79, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 83,
    0, 84, 0, 0, 85, 0, 0, 86, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 91, 0, 92, 0, 0, 93, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 103, 0, 0,
    0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 112, 0, 113, 0, 114, 0, 0, 0, 115, 0, 116, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 118, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    120, 0, 0, 0, 121, 0, 0, 0, 0, 0, 122, 0, 123, 0, 0, 124, 0, 125, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 127, 0, 128, 0, 0, 129, 0, 130, 0, 0, 131, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133,
    0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 136, 0, 0, 0, 137, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 140, 0, 0, 141, 0, 142, 0, 0,
    143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 147, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 151, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 154, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 162, 0, 0, 163, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 166, 0,
    0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 169, 0, 0, 170, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0,
    178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    182, 0, 0, 0, 183, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 187, 0, 0, 0, 188, 0, 189, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0,
    192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0,
    0, 0, 0, 0, 197, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 203, 0, 0,
    204, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 207, 0, 208, 0, 209, 0, 0, 0, 0, 0, 210, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 212, 0, 213, 0, 214, 0, 0, 215, 0, 216, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 218, 0, 219, 0, 220, 0, 221, 0, 222, 0, 223, 0, 224, 0, 225, 0, 226, 0, 227, 0, 228, 0, 229, 0, 230,
    0, 231, 0, 232, 0, 233, 0, 234, 0, 235, 0, 236, 0, 237, 0, 238, 0, 239, 0, 240, 0, 241, 0, 242, 0, 243, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250,
    0, 0, 251, 0, 0, 0, 0, 252, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0053(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0024C000;
    case 2u: goto L_0024C040;
    case 3u: goto L_0024C0F8;
    case 4u: goto L_0024C1A0;
    case 5u: goto L_0024C1AC;
    case 6u: goto L_0024C1D0;
    case 7u: goto L_0024C224;
    case 8u: goto L_0024C2C0;
    case 9u: goto L_0024C370;
    case 10u: goto L_0024C434;
    case 11u: goto L_0024C448;
    case 12u: goto L_0024C468;
    case 13u: goto L_0024C478;
    case 14u: goto L_0024C484;
    case 15u: goto L_0024C48C;
    case 16u: goto L_0024C498;
    case 17u: goto L_0024C4E4;
    case 18u: goto L_0024C4F4;
    case 19u: goto L_0024C500;
    case 20u: goto L_0024C508;
    case 21u: goto L_0024C514;
    case 22u: goto L_0024C590;
    case 23u: goto L_0024C630;
    case 24u: goto L_0024C6F0;
    case 25u: goto L_0024C700;
    case 26u: goto L_0024C71C;
    case 27u: goto L_0024C758;
    case 28u: goto L_0024C7E0;
    case 29u: goto L_0024C8A8;
    case 30u: goto L_0024C8D8;
    case 31u: goto L_0024C8F8;
    case 32u: goto L_0024C918;
    case 33u: goto L_0024C9F0;
    case 34u: goto L_0024CA24;
    case 35u: goto L_0024CA50;
    case 36u: goto L_0024CA94;
    case 37u: goto L_0024CAA0;
    case 38u: goto L_0024CAD0;
    case 39u: goto L_0024CB0C;
    case 40u: goto L_0024CB2C;
    case 41u: goto L_0024CB34;
    case 42u: goto L_0024CB3C;
    case 43u: goto L_0024CBD0;
    case 44u: goto L_0024CC1C;
    case 45u: goto L_0024CD0C;
    case 46u: goto L_0024CDFC;
    case 47u: goto L_0024CEB0;
    case 48u: goto L_0024CEF8;
    case 49u: goto L_0024CF04;
    case 50u: goto L_0024CF20;
    case 51u: goto L_0024CF5C;
    case 52u: goto L_0024CF64;
    case 53u: goto L_0024CF6C;
    case 54u: goto L_0024CF7C;
    case 55u: goto L_0024CF94;
    case 56u: goto L_0024CFC0;
    case 57u: goto L_0024CFC8;
    case 58u: goto L_0024CFE8;
    case 59u: goto L_0024CFF0;
    case 60u: goto L_0024D018;
    case 61u: goto L_0024D040;
    case 62u: goto L_0024D0B4;
    case 63u: goto L_0024D0BC;
    case 64u: goto L_0024D0C4;
    case 65u: goto L_0024D0CC;
    case 66u: goto L_0024D0D8;
    case 67u: goto L_0024D0F8;
    case 68u: goto L_0024D130;
    case 69u: goto L_0024D140;
    case 70u: goto L_0024D1B0;
    case 71u: goto L_0024D1B8;
    case 72u: goto L_0024D1C0;
    case 73u: goto L_0024D1C4;
    case 74u: goto L_0024D1E4;
    case 75u: goto L_0024D220;
    case 76u: goto L_0024D290;
    case 77u: goto L_0024D298;
    case 78u: goto L_0024D2A0;
    case 79u: goto L_0024D2A4;
    case 80u: goto L_0024D2C4;
    case 81u: goto L_0024D300;
    case 82u: goto L_0024D374;
    case 83u: goto L_0024D37C;
    case 84u: goto L_0024D384;
    case 85u: goto L_0024D390;
    case 86u: goto L_0024D39C;
    case 87u: goto L_0024D3A0;
    case 88u: goto L_0024D3D0;
    case 89u: goto L_0024D410;
    case 90u: goto L_0024D4A4;
    case 91u: goto L_0024D4AC;
    case 92u: goto L_0024D4B4;
    case 93u: goto L_0024D4C0;
    case 94u: goto L_0024D4CC;
    case 95u: goto L_0024D4FC;
    case 96u: goto L_0024D540;
    case 97u: goto L_0024D5A0;
    case 98u: goto L_0024D5E0;
    case 99u: goto L_0024D640;
    case 100u: goto L_0024D644;
    case 101u: goto L_0024D680;
    case 102u: goto L_0024D6F0;
    case 103u: goto L_0024D6F4;
    case 104u: goto L_0024D714;
    case 105u: goto L_0024D750;
    case 106u: goto L_0024D794;
    case 107u: goto L_0024D7D0;
    case 108u: goto L_0024D814;
    case 109u: goto L_0024D850;
    case 110u: goto L_0024D8E8;
    case 111u: goto L_0024D914;
    case 112u: goto L_0024D928;
    case 113u: goto L_0024D930;
    case 114u: goto L_0024D938;
    case 115u: goto L_0024D948;
    case 116u: goto L_0024D950;
    case 117u: goto L_0024D968;
    case 118u: goto L_0024DA04;
    case 119u: goto L_0024DA14;
    case 120u: goto L_0024DA80;
    case 121u: goto L_0024DA90;
    case 122u: goto L_0024DAA8;
    case 123u: goto L_0024DAB0;
    case 124u: goto L_0024DABC;
    case 125u: goto L_0024DAC4;
    case 126u: goto L_0024DAD0;
    case 127u: goto L_0024DB0C;
    case 128u: goto L_0024DB14;
    case 129u: goto L_0024DB20;
    case 130u: goto L_0024DB28;
    case 131u: goto L_0024DB34;
    case 132u: goto L_0024DB44;
    case 133u: goto L_0024DB7C;
    case 134u: goto L_0024DB8C;
    case 135u: goto L_0024DC10;
    case 136u: goto L_0024DC94;
    case 137u: goto L_0024DCA4;
    case 138u: goto L_0024DCB0;
    case 139u: goto L_0024DCD8;
    case 140u: goto L_0024DCE0;
    case 141u: goto L_0024DCEC;
    case 142u: goto L_0024DCF4;
    case 143u: goto L_0024DD00;
    case 144u: goto L_0024DD8C;
    case 145u: goto L_0024DDC8;
    case 146u: goto L_0024DE64;
    case 147u: goto L_0024DE74;
    case 148u: goto L_0024DEA0;
    case 149u: goto L_0024DF24;
    case 150u: goto L_0024DF64;
    case 151u: goto L_0024DF74;
    case 152u: goto L_0024DFD8;
    case 153u: goto L_0024E058;
    case 154u: goto L_0024E064;
    case 155u: goto L_0024E090;
    case 156u: goto L_0024E0B0;
    case 157u: goto L_0024E120;
    case 158u: goto L_0024E17C;
    case 159u: goto L_0024E1B0;
    case 160u: goto L_0024E290;
    case 161u: goto L_0024E3AC;
    case 162u: goto L_0024E3B8;
    case 163u: goto L_0024E3C4;
    case 164u: goto L_0024E3DC;
    case 165u: goto L_0024E3F0;
    case 166u: goto L_0024E3F8;
    case 167u: goto L_0024E404;
    case 168u: goto L_0024E450;
    case 169u: goto L_0024E45C;
    case 170u: goto L_0024E468;
    case 171u: goto L_0024E530;
    case 172u: goto L_0024E5C8;
    case 173u: goto L_0024E5D0;
    case 174u: goto L_0024E8A8;
    case 175u: goto L_0024E91C;
    case 176u: goto L_0024EB54;
    case 177u: goto L_0024EB64;
    case 178u: goto L_0024EB80;
    case 179u: goto L_0024ECB0;
    case 180u: goto L_0024ECBC;
    case 181u: goto L_0024ECF0;
    case 182u: goto L_0024ED80;
    case 183u: goto L_0024ED90;
    case 184u: goto L_0024ED94;
    case 185u: goto L_0024EFE0;
    case 186u: goto L_0024F038;
    case 187u: goto L_0024F090;
    case 188u: goto L_0024F0A0;
    case 189u: goto L_0024F0A8;
    case 190u: goto L_0024F0C0;
    case 191u: goto L_0024F0F8;
    case 192u: goto L_0024F100;
    case 193u: goto L_0024F154;
    case 194u: goto L_0024F330;
    case 195u: goto L_0024F33C;
    case 196u: goto L_0024F370;
    case 197u: goto L_0024F390;
    case 198u: goto L_0024F3A0;
    case 199u: goto L_0024F3F0;
    case 200u: goto L_0024F434;
    case 201u: goto L_0024F4A0;
    case 202u: goto L_0024F4EC;
    case 203u: goto L_0024F4F4;
    case 204u: goto L_0024F500;
    case 205u: goto L_0024F510;
    case 206u: goto L_0024F52C;
    case 207u: goto L_0024F548;
    case 208u: goto L_0024F550;
    case 209u: goto L_0024F558;
    case 210u: goto L_0024F570;
    case 211u: goto L_0024F644;
    case 212u: goto L_0024F64C;
    case 213u: goto L_0024F654;
    case 214u: goto L_0024F65C;
    case 215u: goto L_0024F668;
    case 216u: goto L_0024F670;
    case 217u: goto L_0024F6F0;
    case 218u: goto L_0024F71C;
    case 219u: goto L_0024F724;
    case 220u: goto L_0024F72C;
    case 221u: goto L_0024F734;
    case 222u: goto L_0024F73C;
    case 223u: goto L_0024F744;
    case 224u: goto L_0024F74C;
    case 225u: goto L_0024F754;
    case 226u: goto L_0024F75C;
    case 227u: goto L_0024F764;
    case 228u: goto L_0024F76C;
    case 229u: goto L_0024F774;
    case 230u: goto L_0024F77C;
    case 231u: goto L_0024F784;
    case 232u: goto L_0024F78C;
    case 233u: goto L_0024F794;
    case 234u: goto L_0024F79C;
    case 235u: goto L_0024F7A4;
    case 236u: goto L_0024F7AC;
    case 237u: goto L_0024F7B4;
    case 238u: goto L_0024F7BC;
    case 239u: goto L_0024F7C4;
    case 240u: goto L_0024F7CC;
    case 241u: goto L_0024F7D4;
    case 242u: goto L_0024F7DC;
    case 243u: goto L_0024F7E4;
    case 244u: goto L_0024F824;
    case 245u: goto L_0024F854;
    case 246u: goto L_0024F870;
    case 247u: goto L_0024F908;
    case 248u: goto L_0024FC14;
    case 249u: goto L_0024FCAC;
    case 250u: goto L_0024FCFC;
    case 251u: goto L_0024FD08;
    case 252u: goto L_0024FD1C;
    case 253u: goto L_0024FD28;
    case 254u: goto L_0024FDDC;
    case 255u: goto L_0024FE20;
    default: bad_entry(c, 0x0024C000u); return;
    }
L_0024C000:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0024C040:
    set32(c.r[29], c.r[29].w[0] - 176u);
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
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.f[23] = c.f[12];
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 22;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[16], c.r[5], c.r[0]);  if (t) { goto L_0024C0A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[2].d[0] << 56;  if (t) { goto L_0024C0A8; } }
L_0024C0A0:
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.budget -= 2;
L_0024C0A8:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 531u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);  if (t) { goto L_0024C0C4; } }
    c.r[21].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 26312u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[2].w[0] - 24608u);  if (t) { goto L_0024C0D0; } }
L_0024C0C4:
    c.r[21].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 26308u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[19], c.r[2].w[0] - 23296u);
    c.budget -= 3;
L_0024C0D0:
    c.budget -= 2;
    { const bool t = c.r[21].sd[0] <= 0; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0024C274; } }
    c.r[1].d[0] = 0ll < c.r[21].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[20], c.r[0], c.r[0]);  if (t) { goto L_0024C270; } }
    c.r[30].d[0] = c.r[3].d[0] << 56;
    c.r[22].d[0] = c.r[6].d[0] << 56;
    c.r[30].d[0] = static_cast<std::uint64_t>(c.r[30].sd[0] >> 56);
    c.r[22].d[0] = static_cast<std::uint64_t>(c.r[22].sd[0] >> 56);
    set32(c.r[23], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 1));
    c.budget -= 5;
L_0024C0F8:
    set32(c.r[18], ld32((c.r[19].w[0])));
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[19], c.r[19].w[0] + 4u);  if (t) { goto L_0024C25C; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 532u));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[20], c.r[20].w[0] + 1u);  goto L_0024C260; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1u)));
    c.r[1].d[0] = c.r[30].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 16u);  if (t) { goto L_0024C164; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 8192ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024C160; } }
    c.f[1] = ld32((c.r[18].w[0] + 1068u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0024C170; } }
    c.budget -= 1;
L_0024C160:
    set32(c.r[2], 0u + 16u);
    c.budget -= 1;
L_0024C164:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0024C25C; } }
    c.budget -= 1;
L_0024C170:
    c.f[5] = ld32((c.r[18].w[0] + 32u));
    c.f[4] = ld32((c.r[17].w[0] + 32u));
    c.f[1] = ld32((c.r[18].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    c.f[3] = ld32((c.r[18].w[0] + 36u));
    c.f[2] = ld32((c.r[17].w[0] + 36u));
    c.f[20] = fp::sub(c.f[5], c.f[4]);
    c.f[22] = fp::sub(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[20], c.f[20]);
    c.f[21] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C1A0u); c.f[12] = fp::add(c.facc, fp::mul(c.f[22], c.f[22]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x0024C1A0u) [[unlikely]] return; }
L_0024C1A0:
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C1ACu); c.f[12] = fp::add(c.facc, fp::mul(c.f[21], c.f[21]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x0024C1ACu) [[unlikely]] return; }
L_0024C1AC:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] != 0ull;  if (t) { goto L_0024C208; } }
    fpu_compare(c, fp::key(c.f[23]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0024C25C; } }
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C1D0u); c.f[13] = c.f[22];  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x0024C1D0u) [[unlikely]] return; }
L_0024C1D0:
    c.r[3].d[0] = 0ull | 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[3].d[0] = ld16((c.r[17].w[0] + 84u));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] + c.r[23].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0024C25C; } }
    c.r[1].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0024C25C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[18], c.r[0]);  if (t) { goto L_0024C274; } }
L_0024C208:
    fpu_compare(c, fp::key(c.f[23]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0024C25C; } }
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C224u); c.f[13] = c.f[22];  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x0024C224u) [[unlikely]] return; }
L_0024C224:
    c.r[3].d[0] = 0ull | 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[3].d[0] = ld16((c.r[17].w[0] + 84u));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] + c.r[23].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0024C25C; } }
    c.r[1].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0024C25C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[18], c.r[0]);  if (t) { goto L_0024C274; } }
L_0024C25C:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_0024C260:
    c.r[2].d[0] = c.r[20].sd[0] < c.r[21].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024C0F8u | kUnwind; return; } goto L_0024C0F8; } }
    c.budget -= 1;
L_0024C270:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_0024C274:
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
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_0024C2C0:
    set32(c.r[29], c.r[29].w[0] - 208u);
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
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.f[20] = c.f[12];
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 19;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[16], c.r[5], c.r[0]);  if (t) { goto L_0024C314; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[2].d[0] << 56;  if (t) { goto L_0024C31C; } }
L_0024C314:
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.budget -= 2;
L_0024C31C:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 531u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);  if (t) { goto L_0024C338; } }
    c.r[23].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 26312u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[2].w[0] - 24608u);  if (t) { goto L_0024C344; } }
L_0024C338:
    c.r[23].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 26308u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[19], c.r[2].w[0] - 23296u);
    c.budget -= 3;
L_0024C344:
    c.budget -= 2;
    { const bool t = c.r[23].sd[0] <= 0; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0024C55C; } }
    c.r[1].d[0] = 0ll < c.r[23].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[20], c.r[0], c.r[0]);  if (t) { goto L_0024C558; } }
    c.r[2].d[0] = c.r[3].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[30].d[0] = c.r[6].d[0] << 56;
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    c.r[30].d[0] = static_cast<std::uint64_t>(c.r[30].sd[0] >> 56);
    set32(c.r[21], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 1));
    c.budget -= 6;
L_0024C370:
    set32(c.r[18], ld32((c.r[19].w[0])));
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[19], c.r[19].w[0] + 4u);  if (t) { goto L_0024C548; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 532u));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[20], c.r[20].w[0] + 1u);  goto L_0024C54C; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 16u);  if (t) { goto L_0024C3DC; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 8192ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024C3D8; } }
    c.f[1] = ld32((c.r[18].w[0] + 1068u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0024C3E8; } }
L_0024C3D8:
    set32(c.r[2], 0u + 16u);
    c.budget -= 1;
L_0024C3DC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0024C548; } }
    c.budget -= 1;
L_0024C3E8:
    c.f[1] = ld32((c.r[18].w[0] + 32u));
    c.f[0] = ld32((c.r[17].w[0] + 32u));
    set32(c.r[2], c.r[29].w[0] + 196u);
    set32(c.r[22], c.r[29].w[0] + 200u);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 192u), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 36u));
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[2].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[22].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 192u));
    c.f[0] = ld32((c.r[22].w[0]));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C434u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x0024C434u) [[unlikely]] return; }
L_0024C434:
    set32(c.r[2], c.r[29].w[0] + 196u);
    c.f[1] = ld32((c.r[2].w[0]));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C448u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x0024C448u) [[unlikely]] return; }
L_0024C448:
    c.budget -= 2;
    { const bool t = c.r[30].d[0] != 0ull;  if (t) { goto L_0024C4CC; } }
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0024C548; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C468u); set32(c.r[4], c.r[17].w[0] + 8320u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x0024C468u) [[unlikely]] return; }
L_0024C468:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C478u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 211u, depth + 1u); else { c.pc = 0x00102548u; return; } if (c.pc != 0x0024C478u) [[unlikely]] return; }
L_0024C478:
    set32(c.r[4], c.r[18].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C484u); set32(c.r[5], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x0024C484u) [[unlikely]] return; }
L_0024C484:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C48Cu); set32(c.r[4], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x0024C48Cu) [[unlikely]] return; }
L_0024C48C:
    c.f[12] = ld32((c.r[29].w[0] + 192u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C498u); c.f[13] = ld32((c.r[22].w[0]));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x0024C498u) [[unlikely]] return; }
L_0024C498:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[3].d[0] = 0ull | 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0024C548; } }
    c.r[1].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0024C548; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[18], c.r[0]);  if (t) { goto L_0024C55C; } }
L_0024C4CC:
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0024C548; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C4E4u); set32(c.r[4], c.r[17].w[0] + 8320u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x0024C4E4u) [[unlikely]] return; }
L_0024C4E4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C4F4u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 211u, depth + 1u); else { c.pc = 0x00102548u; return; } if (c.pc != 0x0024C4F4u) [[unlikely]] return; }
L_0024C4F4:
    set32(c.r[4], c.r[18].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C500u); set32(c.r[5], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x0024C500u) [[unlikely]] return; }
L_0024C500:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C508u); set32(c.r[4], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x0024C508u) [[unlikely]] return; }
L_0024C508:
    c.f[12] = ld32((c.r[29].w[0] + 192u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C514u); c.f[13] = ld32((c.r[22].w[0]));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x0024C514u) [[unlikely]] return; }
L_0024C514:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[2].d[0] = 0ull | 65535ull;
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[21].w[0]);
    c.r[2].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0024C548; } }
    c.r[1].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0024C548; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[18], c.r[0]);  if (t) { goto L_0024C55C; } }
L_0024C548:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_0024C54C:
    c.r[2].d[0] = c.r[20].sd[0] < c.r[23].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024C370u | kUnwind; return; } goto L_0024C370; } }
L_0024C558:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_0024C55C:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_0024C590:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 531u));
    c.f[20] = c.f[12];
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    c.budget -= 21;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { goto L_0024C5F4; } }
    c.r[21].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 26312u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[2].w[0] - 24608u);  if (t) { goto L_0024C600; } }
L_0024C5F4:
    c.r[21].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 26308u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[19], c.r[2].w[0] - 23296u);
    c.budget -= 3;
L_0024C600:
    c.budget -= 2;
    { const bool t = c.r[21].sd[0] <= 0; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0024C79C; } }
    c.r[1].d[0] = 0ll < c.r[21].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[20], c.r[0], c.r[0]);  if (t) { goto L_0024C798; } }
    set32(c.r[30], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 1));
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] >= 0; set32(c.r[23], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 1));  if (t) { goto L_0024C628; } }
    set32(c.r[2], c.r[6].w[0] + 1u);
    set32(c.r[23], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_0024C628:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[22], c.r[2].w[0] - c.r[23].w[0]);
    c.budget -= 2;
L_0024C630:
    set32(c.r[18], ld32((c.r[19].w[0])));
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[19], c.r[19].w[0] + 4u);  if (t) { goto L_0024C784; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 532u));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[20], c.r[20].w[0] + 1u);  goto L_0024C788; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0024C684; } }
    c.f[1] = ld32((c.r[18].w[0] + 1068u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0024C6C0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0024C684:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 16u);  if (t) { goto L_0024C6B4; } }
    c.f[1] = ld32((c.r[18].w[0] + 1068u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0024C6C0; } }
    set32(c.r[2], 0u + 16u);
    c.budget -= 1;
L_0024C6B4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0024C784; } }
    c.budget -= 1;
L_0024C6C0:
    c.f[5] = ld32((c.r[18].w[0] + 32u));
    c.f[4] = ld32((c.r[17].w[0] + 32u));
    c.f[1] = ld32((c.r[18].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    c.f[3] = ld32((c.r[18].w[0] + 36u));
    c.f[2] = ld32((c.r[17].w[0] + 36u));
    c.f[22] = fp::sub(c.f[5], c.f[4]);
    c.f[24] = fp::sub(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[22], c.f[22]);
    c.f[23] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C6F0u); c.f[12] = fp::add(c.facc, fp::mul(c.f[24], c.f[24]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x0024C6F0u) [[unlikely]] return; }
L_0024C6F0:
    c.f[21] = c.f[0];
    c.facc = fp::mul(c.f[21], c.f[21]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C700u); c.f[12] = fp::add(c.facc, fp::mul(c.f[23], c.f[23]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x0024C700u) [[unlikely]] return; }
L_0024C700:
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0024C784; } }
    c.f[12] = c.f[22];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C71Cu); c.f[13] = c.f[24];  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x0024C71Cu) [[unlikely]] return; }
L_0024C71C:
    c.r[3].d[0] = 0ull | 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[3].d[0] = ld16((c.r[17].w[0] + 84u));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] + c.r[30].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0024C784; } }
    c.r[1].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0024C784; } }
    c.f[12] = c.f[23] ^ fp::kSign;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C758u); c.f[13] = c.f[21];  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x0024C758u) [[unlikely]] return; }
L_0024C758:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[1].d[0] = c.r[23].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { mmi::paddub(c.r[2], c.r[18], c.r[0]);  goto L_0024C77C; }
    c.r[2].d[0] = c.r[2].sd[0] < c.r[22].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024C784; } }
    mmi::paddub(c.r[2], c.r[18], c.r[0]);
    c.budget -= 2;
L_0024C77C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 176u) & ~15u, c.r[31]);  if (t) { goto L_0024C7A0; } }
L_0024C784:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_0024C788:
    c.r[2].d[0] = c.r[20].sd[0] < c.r[21].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024C630u | kUnwind; return; } goto L_0024C630; } }
    c.budget -= 1;
L_0024C798:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_0024C79C:
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0024C7A0:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_0024C7E0:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 20u), c.f[25]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.f[25] = c.f[12];
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    mmi::paddub(c.r[23], c.r[6], c.r[0]);
    mmi::paddub(c.r[30], c.r[7], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 640u)));
    st32((c.r[29].w[0] + 204u), c.r[8].w[0]);
    c.budget -= 27;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 200u), c.r[9].w[0]);  if (t) { goto L_0024C854; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0024C9A4; } }
L_0024C854:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 531u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024C870; } }
    c.r[21].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 26312u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[2].w[0] - 24608u);  if (t) { goto L_0024C87C; } }
L_0024C870:
    c.r[21].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 26308u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[19], c.r[2].w[0] - 23296u);
    c.budget -= 3;
L_0024C87C:
    c.budget -= 2;
    { const bool t = c.r[21].sd[0] <= 0; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0024C9A4; } }
    c.r[2].d[0] = c.r[10].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.f[21] = ld32((c.r[2].w[0] + 2032u));
    c.f[22] = ld32((c.r[2].w[0] + 2040u));
    c.r[1].d[0] = 0ll < c.r[21].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[20], c.r[0], c.r[0]);  if (t) { goto L_0024C9A0; } }
L_0024C8A8:
    set32(c.r[18], ld32((c.r[19].w[0])));
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[19], c.r[19].w[0] + 4u);  if (t) { goto L_0024C990; } }
    c.f[1] = ld32((c.r[18].w[0] + 32u));
    c.f[0] = ld32((c.r[18].w[0] + 40u));
    c.f[24] = fp::sub(c.f[1], c.f[21]);
    c.f[23] = fp::sub(c.f[0], c.f[22]);
    c.facc = fp::mul(c.f[24], c.f[24]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C8D8u); c.f[12] = fp::add(c.facc, fp::mul(c.f[23], c.f[23]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x0024C8D8u) [[unlikely]] return; }
L_0024C8D8:
    c.f[20] = c.f[0];
    fpu_compare(c, fp::key(c.f[25]) < fp::key(c.f[20]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[20], c.r[20].w[0] + 1u);  goto L_0024C994; }
    c.f[13] = c.f[23];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C8F8u); c.f[12] = c.f[24];  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x0024C8F8u) [[unlikely]] return; }
L_0024C8F8:
    mmi::paddub(c.r[22], c.r[2], c.r[0]);
    c.r[2].d[0] = 0ull | 65535ull;
    c.r[22].d[0] = c.r[22].d[0] & c.r[2].d[0];
    c.r[2].d[0] = ld16((c.r[17].w[0] + 84u));
    c.f[12] = c.f[24];
    c.f[13] = c.f[20];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C918u); set32(c.r[22], c.r[22].w[0] - c.r[2].w[0]);  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x0024C918u) [[unlikely]] return; }
L_0024C918:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024C938; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 3;
L_0024C938:
    set32(c.r[3], ld32((c.r[29].w[0] + 200u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0024C990; } }
    c.r[3].d[0] = c.r[22].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[3].sd[0] < c.r[30].sd[0] ? 1ull : 0ull;  if (t) { goto L_0024C970; } }
    c.r[1].d[0] = c.r[23].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0024C96C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[18], c.r[0]);  if (t) { goto L_0024C9A4; } }
L_0024C96C:
    c.r[2].d[0] = c.r[3].sd[0] < c.r[30].sd[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0024C970:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024C990; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 204u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0024C990; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[18], c.r[0]);  if (t) { goto L_0024C9A4; } }
L_0024C990:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_0024C994:
    c.r[2].d[0] = c.r[20].sd[0] < c.r[21].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024C8A8u | kUnwind; return; } goto L_0024C8A8; } }
L_0024C9A0:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_0024C9A4:
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_0024C9F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[3] = ld32((c.r[4].w[0] + 1760u));
    c.f[2] = ld32((c.r[4].w[0] + 32u));
    c.f[1] = ld32((c.r[4].w[0] + 1768u));
    c.f[0] = ld32((c.r[4].w[0] + 40u));
    c.f[20] = c.f[12];
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CA24u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x0024CA24u) [[unlikely]] return; }
L_0024CA24:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0024CA38; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_0024CA38:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0024CA50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[5] = ld32((c.r[4].w[0] + 1760u));
    c.f[4] = ld32((c.r[4].w[0] + 32u));
    c.f[1] = ld32((c.r[4].w[0] + 1768u));
    c.f[0] = ld32((c.r[4].w[0] + 40u));
    c.f[3] = ld32((c.r[4].w[0] + 1764u));
    c.f[2] = ld32((c.r[4].w[0] + 36u));
    c.f[21] = c.f[12];
    c.f[4] = fp::sub(c.f[5], c.f[4]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[4], c.f[4]);
    c.f[20] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CA94u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x0024CA94u) [[unlikely]] return; }
L_0024CA94:
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CAA0u); c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x0024CAA0u) [[unlikely]] return; }
L_0024CAA0:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[21]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0024CAB4; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_0024CAB4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0024CAD0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0024CB9C; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 741u));
    set32(c.r[2], c.r[2].w[0] - 7u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0024CB44; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] + 25440u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0024C000u < 16384u) { entry = entries_0053[(t - 0x0024C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0024CB0C:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 785u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_0024CB24; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 7u);  if (t) { goto L_0024CB6C; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_0024CB24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));  if (t) { goto L_0024CB70; } }
L_0024CB2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 10u);  if (t) { goto L_0024CB6C; } }
L_0024CB34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 9u);  if (t) { goto L_0024CB6C; } }
L_0024CB3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 11u);  if (t) { goto L_0024CB6C; } }
L_0024CB44:
    c.f[1] = ld32((c.r[4].w[0] + 1052u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0024CB6C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 6u);  if (t) { goto L_0024CB6C; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_0024CB6C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    c.budget -= 1;
L_0024CB70:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[3], c.r[3].w[0] + 13488u);
    set32(c.r[4], c.r[4].w[0] << 7);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[2].w[0]));  if (t) { goto L_0024CBC8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0024CB9C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0024CBC4; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[2].w[0] + 16176u);
    set32(c.r[3], c.r[3].w[0] - 32u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[2].w[0]));  if (t) { goto L_0024CBC8; } }
L_0024CBC4:
    c.f[0] = 0u;
    c.budget -= 1;
L_0024CBC8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024CBD0:
    set32(c.r[6], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[28].w[0] - 26532u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[28].w[0] - 26308u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 26312u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 26531u), static_cast<std::uint8_t>(0u));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[5], 0u + 2u);
    set32(c.r[3], c.r[3].w[0] - 23296u);
    c.budget -= 12;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[4], c.r[4].w[0] - 24608u);  if (t) { goto L_0024CCF0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[8], c.r[5].w[0] + 26144u);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[5].d[0] = c.r[5].d[0] | 52429ull;
    c.f[1] = c.r[5].w[0];
    set32(c.r[6], 0u + 1u);
    c.budget -= 7;
L_0024CC1C:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] != c.r[6].d[0]) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_0024CCDC; }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[6].d[0];  if (t) { goto L_0024CCD8; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 1u)));
    c.r[1].d[0] = c.r[5].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0024CCD8; } }
    c.r[5].d[0] = ld8((c.r[8].w[0] + 531u));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0024CC90; } }
    st32((c.r[3].w[0]), c.r[8].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 26308u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[28].w[0] - 26308u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.f[0] = ld32((c.r[8].w[0] + 1068u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], c.r[3].w[0] + 4u);  if (t) { goto L_0024CCD8; } }
    c.r[5].d[0] = ld8((c.r[8].w[0] + 532u));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0024CCD8; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 26532u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 26532u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_0024CCD8; } }
L_0024CC90:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[6].d[0];  if (t) { goto L_0024CCD8; } }
    st32((c.r[4].w[0]), c.r[8].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 26312u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[28].w[0] - 26312u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.f[0] = ld32((c.r[8].w[0] + 1068u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { goto L_0024CCD8; } }
    c.r[5].d[0] = ld8((c.r[8].w[0] + 532u));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0024CCD8; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 26531u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[28].w[0] - 26531u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 4;
L_0024CCD8:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_0024CCDC:
    c.r[5].d[0] = c.r[7].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] + 8448u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024CC1Cu | kUnwind; return; } goto L_0024CC1C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024CEA8; } }
L_0024CCF0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[8], c.r[6].w[0] + 26144u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[6].d[0] = c.r[6].d[0] | 52429ull;
    c.f[1] = c.r[6].w[0];
    set32(c.r[7], 0u + 1u);
    c.budget -= 7;
L_0024CD0C:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    c.budget -= 3;
    if (c.r[6].d[0] != c.r[7].d[0]) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_0024CDD4; }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[7].d[0];  if (t) { goto L_0024CDD0; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 644u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0024CDD0; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 1u)));
    c.r[1].d[0] = c.r[6].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0024CDD0; } }
    c.r[6].d[0] = ld8((c.r[8].w[0] + 531u));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_0024CD8C; } }
    st32((c.r[3].w[0]), c.r[8].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 26308u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[28].w[0] - 26308u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.f[0] = ld32((c.r[8].w[0] + 1068u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], c.r[3].w[0] + 4u);  if (t) { goto L_0024CDD0; } }
    c.r[6].d[0] = ld8((c.r[8].w[0] + 532u));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_0024CDD0; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 26532u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 26532u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { goto L_0024CDD0; } }
L_0024CD8C:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[7].d[0];  if (t) { goto L_0024CDD0; } }
    st32((c.r[4].w[0]), c.r[8].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 26312u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[28].w[0] - 26312u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.f[0] = ld32((c.r[8].w[0] + 1068u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { goto L_0024CDD0; } }
    c.r[6].d[0] = ld8((c.r[8].w[0] + 532u));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_0024CDD0; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 26531u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[28].w[0] - 26531u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 3;
L_0024CDD0:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_0024CDD4:
    c.r[6].d[0] = c.r[5].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] + 8448u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024CD0Cu | kUnwind; return; } goto L_0024CD0C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[10], ld32((c.r[1].w[0] - 3616u)));
    c.budget -= 4;
    { const bool t = c.r[10].d[0] == 0ull;  if (t) { goto L_0024CEA8; } }
    set32(c.r[9], 0u + 11u);
    set32(c.r[8], 0u + 15u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 3;
L_0024CDFC:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0])));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0024CE98; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 644u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0024CE98; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 519u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[9].d[0];  if (t) { goto L_0024CE30; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[8].d[0];  if (t) { goto L_0024CE98; } }
    c.budget -= 1;
L_0024CE30:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 9u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0024CE98; } }
    c.r[5].d[0] = ld8((c.r[10].w[0] + 531u));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0024CE6C; } }
    st32((c.r[3].w[0]), c.r[10].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 26308u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 26532u)));
    set32(c.r[3], c.r[3].w[0] + 4u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[28].w[0] - 26308u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 26532u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_0024CE98; } }
L_0024CE6C:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[7].d[0];  if (t) { goto L_0024CE98; } }
    st32((c.r[4].w[0]), c.r[10].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 26312u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 26531u)));
    set32(c.r[4], c.r[4].w[0] + 4u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[28].w[0] - 26312u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[28].w[0] - 26531u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 9;
L_0024CE98:
    set32(c.r[10], ld32((c.r[10].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[10].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024CDFCu | kUnwind; return; } goto L_0024CDFC; } }
    c.budget -= 1;
L_0024CEA8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024CEB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43FA0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.f[0] = c.r[2].w[0];
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[29].w[0]), c.f[20]);  if (t) { goto L_0024CF04; } }
    c.f[5] = ld32((c.r[5].w[0] + 32u));
    c.f[4] = ld32((c.r[4].w[0] + 32u));
    c.f[1] = ld32((c.r[5].w[0] + 40u));
    c.f[0] = ld32((c.r[4].w[0] + 40u));
    c.f[3] = ld32((c.r[5].w[0] + 36u));
    c.f[2] = ld32((c.r[4].w[0] + 36u));
    c.f[4] = fp::sub(c.f[5], c.f[4]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[4], c.f[4]);
    c.f[20] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CEF8u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x0024CEF8u) [[unlikely]] return; }
L_0024CEF8:
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CF04u); c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x0024CF04u) [[unlikely]] return; }
L_0024CF04:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0024CF20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1842u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(13ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_0024D008; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[5], c.r[5].w[0] + 25488u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0024C000u < 16384u) { entry = entries_0053[(t - 0x0024C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0024CF5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (t) { goto L_0024D008; } }
L_0024CF64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CF6Cu);  if (depth < kMaxDepth) unit_0052(c, 196u, depth + 1u); else { c.pc = 0x0024AA20u; return; } if (c.pc != 0x0024CF6Cu) [[unlikely]] return; }
L_0024CF6C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[17], c.r[2], c.r[0]);  if (t) { goto L_0024CFB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CF7Cu);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x0024CF7Cu) [[unlikely]] return; }
L_0024CF7C:
    c.r[3].d[0] = c.r[2].d[0] & 7ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024CFAC; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CF94u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0052(c, 188u, depth + 1u); else { c.pc = 0x0024A7A0u; return; } if (c.pc != 0x0024CF94u) [[unlikely]] return; }
L_0024CF94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024CFA4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1824u), c.r[2].w[0]);  if (t) { goto L_0024CFB0; } }
L_0024CFA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1824u), c.r[17].w[0]);  if (t) { goto L_0024CFB0; } }
L_0024CFAC:
    st32((c.r[16].w[0] + 1824u), c.r[17].w[0]);
    c.budget -= 1;
L_0024CFB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_0024D008; } }
L_0024CFB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (t) { goto L_0024D008; } }
L_0024CFC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CFC8u);  if (depth < kMaxDepth) unit_0052(c, 208u, depth + 1u); else { c.pc = 0x0024ADA0u; return; } if (c.pc != 0x0024CFC8u) [[unlikely]] return; }
L_0024CFC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (t) { goto L_0024CFE0; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1824u), c.r[2].w[0]);  if (t) { goto L_0024D008; } }
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 1;
L_0024CFE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024D008; } }
L_0024CFE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CFF0u);  if (depth < kMaxDepth) unit_0052(c, 214u, depth + 1u); else { c.pc = 0x0024AF60u; return; } if (c.pc != 0x0024CFF0u) [[unlikely]] return; }
L_0024CFF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (t) { goto L_0024D008; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1824u), c.r[2].w[0]);  if (t) { goto L_0024D008; } }
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 1;
L_0024D008:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0024D024; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D018u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0052(c, 180u, depth + 1u); else { c.pc = 0x0024A530u; return; } if (c.pc != 0x0024D018u) [[unlikely]] return; }
L_0024D018:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024D024; } }
    st32((c.r[16].w[0] + 1824u), c.r[2].w[0]);
    c.budget -= 1;
L_0024D024:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0024D040:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 1724u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 1725u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { goto L_0024D074; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 8u);  if (t) { goto L_0024D08C; } }
L_0024D074:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1848u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 15648u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 6;
L_0024D08C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1842u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(13ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);  if (t) { goto L_0024D0D8; } }
    set32(c.r[3], c.r[3].w[0] + 25552u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0024C000u < 16384u) { entry = entries_0053[(t - 0x0024C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0024D0B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 6u);  if (t) { goto L_0024D0D8; } }
L_0024D0BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 2u);  if (t) { goto L_0024D0D8; } }
L_0024D0C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_0024D0D8; } }
L_0024D0CC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1843u)));
    set32(c.r[16], c.r[16].w[0] + 2u);
    if (c.r[2].d[0] == 0) c.r[16].d[0] = 0ull;
    c.budget -= 3;
L_0024D0D8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1838u)));
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].sd[0] < 47ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024D0F0; } }
    set32(c.r[16], 0u + 47u);
    c.budget -= 1;
L_0024D0F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D0F8u);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x0024D0F8u) [[unlikely]] return; }
L_0024D0F8:
    set32(c.r[3], c.r[16].w[0] << 2);
    c.r[4].d[0] = c.r[2].d[0] & 3ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[3].w[0] << 1);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] - 15616u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    st16((c.r[17].w[0] + 1732u), static_cast<std::uint16_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0024D130:
    st8((c.r[4].w[0] + 1724u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 1725u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_0024D140:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { goto L_0024D16C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 12u);  if (t) { goto L_0024D184; } }
L_0024D16C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1848u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 16512u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 6;
L_0024D184:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1842u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(13ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0024D1C4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] + 25616u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0024C000u < 16384u) { entry = entries_0053[(t - 0x0024C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0024D1B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 6u);  if (t) { goto L_0024D1C4; } }
L_0024D1B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { goto L_0024D1C4; } }
L_0024D1C0:
    set32(c.r[16], c.r[16].w[0] + 2u);
    c.budget -= 1;
L_0024D1C4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1838u)));
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].sd[0] < 47ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024D1DC; } }
    set32(c.r[16], 0u + 47u);
    c.budget -= 1;
L_0024D1DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D1E4u);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x0024D1E4u) [[unlikely]] return; }
L_0024D1E4:
    set32(c.r[3], c.r[16].w[0] << 2);
    c.r[4].d[0] = c.r[2].d[0] & 3ull;
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] - 16480u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    st8((c.r[17].w[0] + 1734u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0024D220:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { goto L_0024D24C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 12u);  if (t) { goto L_0024D264; } }
L_0024D24C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1848u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 16512u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 6;
L_0024D264:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1842u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(13ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0024D2A4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] + 25680u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0024C000u < 16384u) { entry = entries_0053[(t - 0x0024C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0024D290:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 6u);  if (t) { goto L_0024D2A4; } }
L_0024D298:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { goto L_0024D2A4; } }
L_0024D2A0:
    set32(c.r[16], c.r[16].w[0] + 2u);
    c.budget -= 1;
L_0024D2A4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1838u)));
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].sd[0] < 47ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024D2BC; } }
    set32(c.r[16], 0u + 47u);
    c.budget -= 1;
L_0024D2BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D2C4u);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x0024D2C4u) [[unlikely]] return; }
L_0024D2C4:
    set32(c.r[3], c.r[16].w[0] << 2);
    c.r[4].d[0] = c.r[2].d[0] & 3ull;
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] - 16480u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    st8((c.r[17].w[0] + 1735u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0024D300:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0024D330; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 6u);  if (t) { goto L_0024D348; } }
L_0024D330:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1848u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] - 18848u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 6;
L_0024D348:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1842u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(13ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0024D3A0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], c.r[4].w[0] + 25744u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0024C000u < 16384u) { entry = entries_0053[(t - 0x0024C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0024D374:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] - 4u);  if (t) { goto L_0024D3A0; } }
L_0024D37C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 6u);  if (t) { goto L_0024D3A0; } }
L_0024D384:
    set32(c.r[3], 0u + 600u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 1736u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0024D3F4; } }
L_0024D390:
    set32(c.r[3], 0u + 480u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 1736u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0024D3F4; } }
L_0024D39C:
    set32(c.r[16], c.r[16].w[0] - 4u);
    c.budget -= 1;
L_0024D3A0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1838u)));
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].sd[0] < 47ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024D3BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 47u);  if (t) { goto L_0024D3C8; } }
L_0024D3BC:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { goto L_0024D3C8; } }
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 1;
L_0024D3C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D3D0u);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x0024D3D0u) [[unlikely]] return; }
L_0024D3D0:
    set32(c.r[3], c.r[16].w[0] << 2);
    c.r[4].d[0] = c.r[2].d[0] & 3ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[3].w[0] << 1);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] - 18784u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    st16((c.r[17].w[0] + 1736u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 9;
L_0024D3F4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0024D410:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0024D460; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1844u)));
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], 0u + 6u);  if (t) { goto L_0024D458; } }
    set32(c.r[3], 0u + 90u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 1828u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0024D520; } }
    set32(c.r[16], 0u + 6u);
    c.budget -= 1;
L_0024D458:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1842u)));  if (t) { goto L_0024D47C; } }
L_0024D460:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1848u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] - 18816u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1842u)));
    c.budget -= 7;
L_0024D47C:
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(13ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0024D4CC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], c.r[4].w[0] + 25808u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0024C000u < 16384u) { entry = entries_0053[(t - 0x0024C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0024D4A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 2u);  if (t) { goto L_0024D4CC; } }
L_0024D4AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] - 8u);  if (t) { goto L_0024D4CC; } }
L_0024D4B4:
    set32(c.r[3], 0u + 600u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 1828u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0024D520; } }
L_0024D4C0:
    set32(c.r[3], 0u + 480u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 1828u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0024D520; } }
L_0024D4CC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1838u)));
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].sd[0] < 47ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024D4E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 47u);  if (t) { goto L_0024D4F4; } }
L_0024D4E8:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { goto L_0024D4F4; } }
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 1;
L_0024D4F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D4FCu);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x0024D4FCu) [[unlikely]] return; }
L_0024D4FC:
    set32(c.r[3], c.r[16].w[0] << 2);
    c.r[4].d[0] = c.r[2].d[0] & 3ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[3].w[0] << 1);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] - 18400u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    st16((c.r[17].w[0] + 1828u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 9;
L_0024D520:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0024D540:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0024D568; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 10u);  if (t) { goto L_0024D580; } }
L_0024D568:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1848u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 18016u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 6;
L_0024D580:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1838u)));
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].sd[0] < 47ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024D598; } }
    set32(c.r[16], 0u + 47u);
    c.budget -= 1;
L_0024D598:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D5A0u);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x0024D5A0u) [[unlikely]] return; }
L_0024D5A0:
    c.r[3].d[0] = c.r[2].d[0] & 15ull;
    set32(c.r[2], c.r[16].w[0] << 4);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 17984u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0024D5D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0024D5D0; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_0024D5D0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0024D5E0:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0024D5FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 8u);  if (t) { goto L_0024D614; } }
L_0024D5FC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1848u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 16288u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 6;
L_0024D614:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1842u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(13ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0024D644; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] + 25872u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0024C000u < 16384u) { entry = entries_0053[(t - 0x0024C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0024D640:
    set32(c.r[5], c.r[5].w[0] + 6u);
    c.budget -= 1;
L_0024D644:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1838u)));
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[5].sd[0] < 47ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024D65C; } }
    set32(c.r[5], 0u + 47u);
    c.budget -= 1;
L_0024D65C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 16256u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0])));  c.pc = t; return; }
L_0024D680:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { goto L_0024D6AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 10u);  if (t) { goto L_0024D6C4; } }
L_0024D6AC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1848u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 16064u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 6;
L_0024D6C4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1842u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(13ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0024D6F4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] + 25936u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0024C000u < 16384u) { entry = entries_0053[(t - 0x0024C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0024D6F0:
    set32(c.r[16], c.r[16].w[0] + 6u);
    c.budget -= 1;
L_0024D6F4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1838u)));
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].sd[0] < 47ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024D70C; } }
    set32(c.r[16], 0u + 47u);
    c.budget -= 1;
L_0024D70C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D714u);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x0024D714u) [[unlikely]] return; }
L_0024D714:
    set32(c.r[3], c.r[16].w[0] << 2);
    c.r[4].d[0] = c.r[2].d[0] & 3ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[3].w[0] << 1);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] - 16032u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    st16((c.r[17].w[0] + 1832u), static_cast<std::uint16_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0024D750:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] - 13440u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1838u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[17], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[17].sd[0] < 47ll ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_0024D78C; } }
    set32(c.r[17], 0u + 47u);
    c.budget -= 1;
L_0024D78C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D794u);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x0024D794u) [[unlikely]] return; }
L_0024D794:
    set32(c.r[3], c.r[17].w[0] << 2);
    c.r[4].d[0] = c.r[2].d[0] & 3ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[3].w[0] << 1);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] - 13392u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    st16((c.r[16].w[0] + 1736u), static_cast<std::uint16_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0024D7D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] - 13040u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1838u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[17], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[17].sd[0] < 47ll ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_0024D80C; } }
    set32(c.r[17], 0u + 47u);
    c.budget -= 1;
L_0024D80C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D814u);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x0024D814u) [[unlikely]] return; }
L_0024D814:
    set32(c.r[3], c.r[17].w[0] << 2);
    c.r[4].d[0] = c.r[2].d[0] & 3ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[3].w[0] << 1);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] - 12992u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    st16((c.r[16].w[0] + 1732u), static_cast<std::uint16_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0024D850:
    set32(c.r[29], c.r[29].w[0] - 320u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], c.r[2].w[0] - 28448u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8384u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    mmi::paddub(c.r[21], c.r[4], c.r[0]);
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 369u)));
    set32(c.r[4], c.r[4].w[0] << 7);
    c.budget -= 22;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_0024DD4C; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 1832u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[2].w[0] - 1u);  goto L_0024DD3C; }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[2].w[0] - 12640u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 1838u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[17], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[17].sd[0] < 47ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024D8E0; } }
    set32(c.r[17], 0u + 47u);
    c.budget -= 1;
L_0024D8E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D8E8u);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x0024D8E8u) [[unlikely]] return; }
L_0024D8E8:
    c.r[3].d[0] = c.r[2].d[0] & 3ull;
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 1);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 12592u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    set32(c.r[4], c.r[21].w[0] + 8320u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D914u); st16((c.r[21].w[0] + 1832u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x0024D914u) [[unlikely]] return; }
L_0024D914:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[2].d[0] = c.r[2].d[0] | 244ull;
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D928u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 211u, depth + 1u); else { c.pc = 0x00102548u; return; } if (c.pc != 0x0024D928u) [[unlikely]] return; }
L_0024D928:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D930u); set32(c.r[4], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0024D930u) [[unlikely]] return; }
L_0024D930:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D938u); set32(c.r[4], c.r[16].w[0] + 144u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x0024D938u) [[unlikely]] return; }
L_0024D938:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D948u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 211u, depth + 1u); else { c.pc = 0x00102548u; return; } if (c.pc != 0x0024D948u) [[unlikely]] return; }
L_0024D948:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D950u); set32(c.r[4], c.r[29].w[0] + 256u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0024D950u) [[unlikely]] return; }
L_0024D950:
    c.r[2].d[0] = ld16((c.r[21].w[0] + 846u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024DBF8; } }
    mmi::paddub(c.r[20], c.r[0], c.r[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[17], c.r[0], c.r[0]);  if (t) { goto L_0024DBD0; } }
L_0024D968:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[2], c.r[2].w[0] - 5920u);
    set32(c.r[3], c.r[4].w[0] << 10);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 8;
    if (c.r[16].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 4u);  goto L_0024DBC8; }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 2u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024DBC4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 532u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024DBC4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[21].d[0];  if (t) { goto L_0024DBC4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[21].d[0];  if (t) { goto L_0024DBC4; } }
    c.f[1] = ld32((c.r[16].w[0] + 80u));
    c.f[0] = ld32((c.r[21].w[0] + 32u));
    set32(c.r[23], c.r[29].w[0] + 164u);
    set32(c.r[18], c.r[29].w[0] + 168u);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 160u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 84u));
    c.f[0] = ld32((c.r[21].w[0] + 36u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[23].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 88u));
    c.f[0] = ld32((c.r[21].w[0] + 40u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[18].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 160u));
    c.f[0] = ld32((c.r[18].w[0]));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DA04u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x0024DA04u) [[unlikely]] return; }
L_0024DA04:
    c.f[1] = ld32((c.r[23].w[0]));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DA14u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x0024DA14u) [[unlikely]] return; }
L_0024DA14:
    c.f[20] = c.f[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43160000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0024DBC4; } }
    c.f[1] = ld32((c.r[16].w[0] + 96u));
    c.f[0] = ld32((c.r[21].w[0] + 32u));
    set32(c.r[19], c.r[29].w[0] + 180u);
    set32(c.r[22], c.r[29].w[0] + 184u);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 176u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 100u));
    c.f[0] = ld32((c.r[21].w[0] + 36u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[19].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 104u));
    c.f[0] = ld32((c.r[21].w[0] + 40u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[22].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 176u));
    c.f[0] = ld32((c.r[22].w[0]));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DA80u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x0024DA80u) [[unlikely]] return; }
L_0024DA80:
    c.f[1] = ld32((c.r[19].w[0]));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DA90u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x0024DA90u) [[unlikely]] return; }
L_0024DA90:
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0024DBC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DAA8u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x0024DAA8u) [[unlikely]] return; }
L_0024DAA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DAB0u); set32(c.r[4], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x0024DAB0u) [[unlikely]] return; }
L_0024DAB0:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DABCu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x0024DABCu) [[unlikely]] return; }
L_0024DABC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DAC4u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x0024DAC4u) [[unlikely]] return; }
L_0024DAC4:
    c.f[13] = ld32((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DAD0u); c.f[12] = ld32((c.r[29].w[0] + 160u));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x0024DAD0u) [[unlikely]] return; }
L_0024DAD0:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] + 32767u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[3].d[0] = 0ull | 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0024DBC4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[1].d[0] | 1ull;
    c.r[1].d[0] = c.r[2].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0024DBC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DB0Cu); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x0024DB0Cu) [[unlikely]] return; }
L_0024DB0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DB14u); set32(c.r[4], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x0024DB14u) [[unlikely]] return; }
L_0024DB14:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DB20u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x0024DB20u) [[unlikely]] return; }
L_0024DB20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DB28u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x0024DB28u) [[unlikely]] return; }
L_0024DB28:
    c.f[12] = ld32((c.r[29].w[0] + 160u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DB34u); c.f[13] = ld32((c.r[18].w[0]));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x0024DB34u) [[unlikely]] return; }
L_0024DB34:
    c.f[13] = ld32((c.r[22].w[0]));
    c.f[12] = ld32((c.r[29].w[0] + 176u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DB44u); mmi::paddub(c.r[16], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x0024DB44u) [[unlikely]] return; }
L_0024DB44:
    c.r[3].d[0] = c.r[16].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[1].d[0] = c.r[3].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0024DB70; } }
    c.r[2].d[0] = 0ull | 65520ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024DBC4; } }
L_0024DB70:
    c.f[12] = ld32((c.r[29].w[0] + 160u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DB7Cu); c.f[13] = ld32((c.r[23].w[0]));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x0024DB7Cu) [[unlikely]] return; }
L_0024DB7C:
    c.f[13] = ld32((c.r[19].w[0]));
    c.f[12] = ld32((c.r[29].w[0] + 176u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DB8Cu); mmi::paddub(c.r[16], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x0024DB8Cu) [[unlikely]] return; }
L_0024DB8C:
    c.r[3].d[0] = c.r[16].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[1].d[0] = c.r[3].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0024DBBC; } }
    c.r[2].d[0] = 0ull | 65520ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024DBC4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0024DBBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 144u) & ~15u, c.r[31]);  if (t) { goto L_0024E0E8; } }
L_0024DBC4:
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.budget -= 1;
L_0024DBC8:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 2;
L_0024DBD0:
    set32(c.r[3], ld32((c.r[28].w[0] - 26476u)));
    set32(c.r[2], c.r[28].w[0] - 26440u);
    c.r[4].d[0] = c.r[3].d[0] ^ 1ull;
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.r[2].d[0] = c.r[20].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024D968u | kUnwind; return; } goto L_0024D968; } }
    c.budget -= 1;
L_0024DBF8:
    c.r[2].d[0] = ld16((c.r[21].w[0] + 846u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { mmi::paddub(c.r[2], c.r[0], c.r[0]);  goto L_0024DD44; }
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    mmi::paddub(c.r[3], c.r[0], c.r[0]);
    c.budget -= 3;
L_0024DC10:
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[5].w[0] << 5);  if (t) { goto L_0024DC34; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] >> 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024DC10u | kUnwind; return; } goto L_0024DC10; } }
    set32(c.r[2], c.r[5].w[0] << 5);
    c.budget -= 1;
L_0024DC34:
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[21].w[0] + 32u));
    set32(c.r[3], c.r[2].w[0] << 8);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[2], c.r[2].w[0] + 26144u);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 32u));
    set32(c.r[18], c.r[29].w[0] + 164u);
    set32(c.r[17], c.r[29].w[0] + 168u);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 160u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = ld32((c.r[21].w[0] + 36u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[18].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 40u));
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[17].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 160u));
    c.f[0] = ld32((c.r[17].w[0]));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DC94u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x0024DC94u) [[unlikely]] return; }
L_0024DC94:
    c.f[1] = ld32((c.r[18].w[0]));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DCA4u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x0024DCA4u) [[unlikely]] return; }
L_0024DCA4:
    c.f[20] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DCB0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 38u, depth + 1u); else { c.pc = 0x0024CAD0u; return; } if (c.pc != 0x0024DCB0u) [[unlikely]] return; }
L_0024DCB0:
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0024DD40; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024DD40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DCD8u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x0024DCD8u) [[unlikely]] return; }
L_0024DCD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DCE0u); set32(c.r[4], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x0024DCE0u) [[unlikely]] return; }
L_0024DCE0:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DCECu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x0024DCECu) [[unlikely]] return; }
L_0024DCEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DCF4u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x0024DCF4u) [[unlikely]] return; }
L_0024DCF4:
    c.f[12] = ld32((c.r[29].w[0] + 160u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DD00u); c.f[13] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x0024DD00u) [[unlikely]] return; }
L_0024DD00:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] + 32767u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0024DD40; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[1].d[0] | 1ull;
    c.r[1].d[0] = c.r[2].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0024DD40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0024E0E4; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 1;
L_0024DD3C:
    st16((c.r[21].w[0] + 1832u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_0024DD40:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_0024DD44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024E0E4; } }
L_0024DD4C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 1832u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[2].w[0] - 1u);  goto L_0024E0DC; }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[2].w[0] - 12640u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 1838u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].sd[0] < 47ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024DD84; } }
    set32(c.r[16], 0u + 47u);
    c.budget -= 1;
L_0024DD84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DD8Cu);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x0024DD8Cu) [[unlikely]] return; }
L_0024DD8C:
    c.r[3].d[0] = c.r[2].d[0] & 3ull;
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 1);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 12592u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    st16((c.r[21].w[0] + 1832u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[21].w[0] + 846u));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024DFC0; } }
    mmi::paddub(c.r[19], c.r[0], c.r[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_0024DF98; } }
L_0024DDC8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[2], c.r[2].w[0] - 5920u);
    set32(c.r[3], c.r[4].w[0] << 10);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[20], ld32((c.r[2].w[0])));
    c.budget -= 8;
    if (c.r[20].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 4u);  goto L_0024DF90; }
    c.r[2].d[0] = ld8((c.r[20].w[0] + 2u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024DF8C; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 20u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 532u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024DF8C; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[21].d[0];  if (t) { goto L_0024DF8C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[21].d[0];  if (t) { goto L_0024DF8C; } }
    c.f[1] = ld32((c.r[20].w[0] + 80u));
    c.f[0] = ld32((c.r[21].w[0] + 32u));
    set32(c.r[18], c.r[29].w[0] + 164u);
    set32(c.r[17], c.r[29].w[0] + 168u);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 160u), c.f[0]);
    c.f[1] = ld32((c.r[20].w[0] + 84u));
    c.f[0] = ld32((c.r[21].w[0] + 36u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[18].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[20].w[0] + 88u));
    c.f[0] = ld32((c.r[21].w[0] + 40u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[17].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 160u));
    c.f[0] = ld32((c.r[17].w[0]));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DE64u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x0024DE64u) [[unlikely]] return; }
L_0024DE64:
    c.f[1] = ld32((c.r[18].w[0]));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DE74u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x0024DE74u) [[unlikely]] return; }
L_0024DE74:
    c.f[20] = c.f[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43160000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0024DF8C; } }
    c.f[12] = ld32((c.r[29].w[0] + 160u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DEA0u); c.f[13] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x0024DEA0u) [[unlikely]] return; }
L_0024DEA0:
    c.r[3].d[0] = 0ull | 65535ull;
    c.r[18].d[0] = c.r[2].d[0] & c.r[3].d[0];
    set32(c.r[2], ld32((c.r[21].w[0] + 84u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    set32(c.r[2], c.r[18].w[0] - c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] + 32767u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 11;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0024DF8C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[1].d[0] | 1ull;
    c.r[1].d[0] = c.r[2].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0024DF8C; } }
    c.f[1] = ld32((c.r[20].w[0] + 96u));
    c.f[0] = ld32((c.r[21].w[0] + 32u));
    set32(c.r[22], c.r[29].w[0] + 180u);
    set32(c.r[17], c.r[29].w[0] + 184u);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 176u), c.f[0]);
    c.f[1] = ld32((c.r[20].w[0] + 100u));
    c.f[0] = ld32((c.r[21].w[0] + 36u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[22].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[20].w[0] + 104u));
    c.f[0] = ld32((c.r[21].w[0] + 40u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[17].w[0]), c.f[0]);
    c.f[13] = ld32((c.r[17].w[0]));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DF24u); c.f[12] = ld32((c.r[29].w[0] + 176u));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x0024DF24u) [[unlikely]] return; }
L_0024DF24:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] - c.r[18].w[0]);
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[1].d[0] = c.r[3].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0024DF50; } }
    c.r[2].d[0] = 0ull | 65472ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024DF8C; } }
    c.budget -= 1;
L_0024DF50:
    c.f[1] = ld32((c.r[29].w[0] + 176u));
    c.f[0] = ld32((c.r[17].w[0]));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DF64u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x0024DF64u) [[unlikely]] return; }
L_0024DF64:
    c.f[1] = ld32((c.r[22].w[0]));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DF74u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x0024DF74u) [[unlikely]] return; }
L_0024DF74:
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0024DF8C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0024E0E4; } }
L_0024DF8C:
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_0024DF90:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 2;
L_0024DF98:
    set32(c.r[3], ld32((c.r[28].w[0] - 26476u)));
    set32(c.r[2], c.r[28].w[0] - 26440u);
    c.r[4].d[0] = c.r[3].d[0] ^ 1ull;
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024DDC8u | kUnwind; return; } goto L_0024DDC8; } }
    c.budget -= 1;
L_0024DFC0:
    c.r[2].d[0] = ld16((c.r[21].w[0] + 846u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { mmi::paddub(c.r[2], c.r[0], c.r[0]);  goto L_0024E0E4; }
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    mmi::paddub(c.r[3], c.r[0], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 3;
L_0024DFD8:
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] << 5);  if (t) { goto L_0024DFFC; } }
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < 5ll ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] >> 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024DFD8u | kUnwind; return; } goto L_0024DFD8; } }
    set32(c.r[2], c.r[3].w[0] << 5);
    c.budget -= 1;
L_0024DFFC:
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[21].w[0] + 32u));
    set32(c.r[3], c.r[2].w[0] << 8);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[2], c.r[2].w[0] + 26144u);
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    c.f[1] = ld32((c.r[17].w[0] + 32u));
    set32(c.r[16], c.r[29].w[0] + 168u);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 160u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[21].w[0] + 36u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 164u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = ld32((c.r[21].w[0] + 40u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[16].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 160u));
    c.f[0] = ld32((c.r[16].w[0]));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E058u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x0024E058u) [[unlikely]] return; }
L_0024E058:
    c.f[20] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E064u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 38u, depth + 1u); else { c.pc = 0x0024CAD0u; return; } if (c.pc != 0x0024E064u) [[unlikely]] return; }
L_0024E064:
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0024E0E0; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024E0E0; } }
    c.f[12] = ld32((c.r[29].w[0] + 160u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E090u); c.f[13] = ld32((c.r[16].w[0]));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x0024E090u) [[unlikely]] return; }
L_0024E090:
    set32(c.r[3], ld32((c.r[21].w[0] + 84u)));
    c.r[5].d[0] = 0ull | 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    mmi::paddub(c.r[4], c.r[21], c.r[0]);
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    set32(c.r[16], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E0B0u); c.r[16].d[0] = c.r[16].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0053(c, 98u, depth + 1u); else { c.pc = 0x0024D5E0u; return; } if (c.pc != 0x0024E0B0u) [[unlikely]] return; }
L_0024E0B0:
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    set32(c.r[16], c.r[16].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[16].d[0] & 65535ull;
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_0024E0E0; } }
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0024E0E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0024E0E4; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 1;
L_0024E0DC:
    st16((c.r[21].w[0] + 1832u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_0024E0E0:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_0024E0E4:
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0024E0E8:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 320u);  c.pc = t; return; }
L_0024E120:
    set32(c.r[29], c.r[29].w[0] - 176u);
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
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[23], c.r[3].w[0] - 26192u);
    set32(c.r[20], c.r[28].w[0] - 26548u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 324u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 325u)));
    set32(c.r[21], c.r[28].w[0] - 26536u);
    mmi::paddub(c.r[19], c.r[0], c.r[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[30].d[0] = c.r[3].d[0] << 56;
    c.r[30].d[0] = static_cast<std::uint64_t>(c.r[30].sd[0] >> 56);
    c.budget -= 23;
L_0024E17C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0])));
    c.budget -= 3;
    if (c.r[3].sd[0] < 0) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_0024E4E4; }
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_0024E19C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0024E1A8; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_0024E19C:
    st16((c.r[20].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    mmi::paddub(c.r[3], c.r[0], c.r[0]);
    c.budget -= 3;
L_0024E1A8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0024E4E0; } }
L_0024E1B0:
    set32(c.r[7], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0])));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 256u)));
    set32(c.r[5], c.r[3].w[0] << 5);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 264u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 265u)));
    set32(c.r[6], c.r[6].w[0] << 3);
    set32(c.r[6], c.r[23].w[0] + c.r[6].w[0]);
    set32(c.r[16], ld32((c.r[6].w[0])));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[17], c.r[16].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[22], c.r[0], c.r[0]);  if (t) { goto L_0024E490; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0024E210; } }
    set32(c.r[3], c.r[19].w[0] + c.r[7].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 324u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0024E490; } }
L_0024E210:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0024E230; } }
    c.r[1].d[0] = c.r[30].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0024E490; } }
    c.budget -= 1;
L_0024E230:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 21976u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0024E490; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0024E490; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 6u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 21975u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0024E490; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 7u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0024E490; } }
    set32(c.r[4], 0u + 1u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E290u); mmi::paddub(c.r[6], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x0024E290u) [[unlikely]] return; }
L_0024E290:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[18], c.r[2], c.r[0]);  if (t) { goto L_0024E490; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[11], c.r[3].w[0] - 13456u);
    set32(c.r[4], 0u + 16u);
    set32(c.r[3], c.r[5].w[0] + 1u);
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[9], c.r[3].w[0] - 13424u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[5], c.r[3].w[0] + 10752u);
    st8((c.r[18].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[2].d[0] = 0ull | 65535ull;
    set32(c.r[10], 0u + 224u);
    set32(c.r[8], 0u + 1u);
    st8((c.r[18].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] - 14640u);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    st8((c.r[18].w[0] + 10u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.f[3] = ld32((c.r[17].w[0] + 16u));
    c.f[2] = ld32((c.r[17].w[0] + 20u));
    c.f[1] = ld32((c.r[17].w[0] + 24u));
    c.f[0] = ld32((c.r[17].w[0] + 28u));
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    st32((c.r[18].w[0] + 32u), c.f[3]);
    st32((c.r[18].w[0] + 36u), c.f[2]);
    st32((c.r[18].w[0] + 40u), c.f[1]);
    st32((c.r[18].w[0] + 44u), c.f[0]);
    c.r[12].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 14u)));
    set32(c.r[12], c.r[12].w[0] << 8);
    st32((c.r[18].w[0] + 84u), c.r[12].w[0]);
    set32(c.r[12], ld32((c.r[18].w[0] + 84u)));
    c.r[2].d[0] = c.r[12].d[0] & c.r[2].d[0];
    st32((c.r[18].w[0] + 84u), c.r[2].w[0]);
    st8((c.r[18].w[0] + 531u), static_cast<std::uint8_t>(c.r[19].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[11].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    st16((c.r[18].w[0] + 512u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 512u)));
    st16((c.r[18].w[0] + 514u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 512u)));
    st16((c.r[18].w[0] + 516u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st8((c.r[18].w[0] + 579u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 2u)));
    set32(c.r[2], c.r[9].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    st8((c.r[18].w[0] + 519u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 2u)));
    st8((c.r[18].w[0] + 268u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1u)));
    st8((c.r[18].w[0] + 270u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[18].w[0] + 264u), c.r[18].w[0]);
    st8((c.r[18].w[0] + 269u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[18].w[0] + 12u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] << 5);
    c.budget -= 69;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E3ACu); set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0016(c, 134u, depth + 1u); else { c.pc = 0x0015B550u; return; } if (c.pc != 0x0024E3ACu) [[unlikely]] return; }
L_0024E3AC:
    set32(c.r[5], 0u + 22u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E3B8u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 309u, depth + 1u); else { c.pc = 0x00303FD0u; return; } if (c.pc != 0x0024E3B8u) [[unlikely]] return; }
L_0024E3B8:
    set32(c.r[5], 0u + 22u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E3C4u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 310u, depth + 1u); else { c.pc = 0x00303FF0u; return; } if (c.pc != 0x0024E3C4u) [[unlikely]] return; }
L_0024E3C4:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 369u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0024E478; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E3DCu);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x0024E3DCu) [[unlikely]] return; }
L_0024E3DC:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.f[13] = ld32((c.r[2].w[0] + 596u));
    c.f[14] = ld32((c.r[2].w[0] + 600u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E3F0u); c.f[12] = ld32((c.r[2].w[0] + 592u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x0024E3F0u) [[unlikely]] return; }
L_0024E3F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E3F8u); set32(c.r[4], ld32((c.r[18].w[0] + 84u)));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x0024E3F8u) [[unlikely]] return; }
L_0024E3F8:
    set32(c.r[4], c.r[18].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E404u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x0024E404u) [[unlikely]] return; }
L_0024E404:
    set32(c.r[2], ld32((c.r[18].w[0] + 84u)));
    set32(c.r[2], c.r[2].w[0] + 32767u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] + 84u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[18].w[0] + 84u));
    st32((c.r[18].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.f[4] = ld32((c.r[18].w[0] + 32u));
    c.f[0] = ld32((c.r[18].w[0] + 40u));
    c.f[2] = ld32((c.r[18].w[0] + 36u));
    c.f[5] = ld32((c.r[2].w[0] + 592u));
    c.f[1] = ld32((c.r[2].w[0] + 600u));
    c.f[3] = ld32((c.r[2].w[0] + 596u));
    c.f[4] = fp::sub(c.f[5], c.f[4]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[4], c.f[4]);
    c.f[20] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E450u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x0024E450u) [[unlikely]] return; }
L_0024E450:
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E45Cu); c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x0024E45Cu) [[unlikely]] return; }
L_0024E45C:
    c.f[12] = c.f[20] ^ fp::kSign;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E468u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x0024E468u) [[unlikely]] return; }
L_0024E468:
    st32((c.r[18].w[0] + 80u), c.r[2].w[0]);
    c.r[3].d[0] = ld16((c.r[18].w[0] + 80u));
    st32((c.r[18].w[0] + 80u), c.r[3].w[0]);
    c.budget -= 4;
L_0024E478:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], c.r[19].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 324u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 324u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_0024E490:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0])));
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    st16((c.r[20].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0])));
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    st16((c.r[20].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0])));
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024E4D8; } }
    set32(c.r[22], 0u + 1u);
    c.budget -= 2;
L_0024E4D8:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024E1B0u | kUnwind; return; } goto L_0024E1B0; } }
L_0024E4E0:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_0024E4E4:
    c.r[3].d[0] = c.r[19].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[20], c.r[20].w[0] + 2u);
    set32(c.r[23], c.r[23].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[21], c.r[21].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024E17Cu | kUnwind; return; } goto L_0024E17C; } }
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_0024E530:
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
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 21976u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] - 7888u);
    set32(c.r[6], ld32((c.r[28].w[0] - 26300u)));
    st32((c.r[29].w[0] + 176u), c.r[3].w[0]);
    set32(c.r[19], c.r[28].w[0] - 26540u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 21975u)));
    set32(c.r[20], c.r[29].w[0] + 232u);
    set32(c.r[22], c.r[28].w[0] - 26552u);
    set32(c.r[30], c.r[29].w[0] + 248u);
    set32(c.r[3], c.r[5].w[0] - c.r[4].w[0]);
    st8((c.r[29].w[0] + 252u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[4].w[0] - c.r[5].w[0]);
    st8((c.r[29].w[0] + 253u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 296u)));
    set32(c.r[21], c.r[28].w[0] - 26544u);
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    st16((c.r[29].w[0] + 244u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 290u)));
    set32(c.r[3], c.r[29].w[0] + 252u);
    st32((c.r[29].w[0] + 192u), c.r[3].w[0]);
    set32(c.r[3], c.r[29].w[0] + 244u);
    st32((c.r[29].w[0] + 208u), c.r[3].w[0]);
    st16((c.r[29].w[0] + 246u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 38;
L_0024E5C8:
    set32(c.r[23], 0u + 1u);
    c.budget -= 2;
L_0024E5D0:
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], c.r[4].w[0] + 272u);
    st32((c.r[29].w[0] + 232u), c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] + 280u);
    st32((c.r[29].w[0] + 236u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 256u)));
    set32(c.r[5], c.r[3].w[0] << 3);
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[9], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[17], c.r[9].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.r[3].d[0] = c.r[4].d[0] & 128ull;
    c.budget -= 19;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[10], c.r[0], c.r[0]);  if (t) { goto L_0024E648; } }
    set32(c.r[5], c.r[4].w[0] << 1);
    set32(c.r[4], ld32((c.r[20].w[0])));
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[20].w[0]), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0])));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0024E670; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[10], 0u + 1u);  if (t) { goto L_0024E670; } }
L_0024E648:
    set32(c.r[3], ld32((c.r[20].w[0])));
    set32(c.r[3], c.r[3].w[0] + 4u);
    st32((c.r[20].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0])));
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.r[4].d[0] = c.r[4].d[0] & 127ull;
    c.budget -= 9;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0024E670; } }
    set32(c.r[10], 0u + 1u);
    c.budget -= 1;
L_0024E670:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    c.budget -= 3;
    if (c.r[3].sd[0] < 0) { mmi::paddub(c.r[23], c.r[0], c.r[0]);  goto L_0024EC2C; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024E888; } }
    set32(c.r[11], ld32((c.r[28].w[0] - 26300u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0] + 266u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0] + 326u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    st8((c.r[29].w[0] + 248u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0] + 267u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0] + 327u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    st8((c.r[29].w[0] + 249u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 12u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 14u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0] + 264u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0] + 265u)));
    c.r[13].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 6u)));
    mmi::paddub(c.r[8], c.r[6], c.r[0]);
    mmi::paddub(c.r[6], c.r[5], c.r[0]);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 4));
    c.r[7].d[0] = c.r[5].d[0] << 56;
    set32(c.r[12], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 4));
    c.r[5].d[0] = c.r[5].d[0] << 56;
    c.r[12].d[0] = c.r[13].sd[0] < c.r[12].sd[0] ? 1ull : 0ull;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    c.budget -= 25;
    { const bool t = c.r[12].d[0] != 0ull; c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);  if (t) { goto L_0024E87C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));
    c.r[13].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 21976u)));
    c.r[1].d[0] = c.r[13].sd[0] < c.r[12].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0024E87C; } }
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[1].d[0] = c.r[12].sd[0] < c.r[13].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0024E87C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    c.r[13].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 21975u)));
    c.r[1].d[0] = c.r[13].sd[0] < c.r[12].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0024E87C; } }
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    c.r[1].d[0] = c.r[12].sd[0] < c.r[13].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0024E87C; } }
    set32(c.r[12], ld32((c.r[29].w[0] + 192u)));
    c.r[14].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8u)));
    c.r[13].sd[0] = static_cast<std::int8_t>(ld8((c.r[12].w[0])));
    c.r[1].d[0] = c.r[13].sd[0] < c.r[14].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0024E87C; } }
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 9u)));
    c.r[12].d[0] = c.r[12].sd[0] < c.r[13].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[12].d[0] != 0ull;  if (t) { goto L_0024E87C; } }
    set32(c.r[12], ld32((c.r[29].w[0] + 208u)));
    c.r[13].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 10u)));
    c.r[12].sd[0] = static_cast<std::int16_t>(ld16((c.r[12].w[0])));
    c.r[12].d[0] = c.r[13].sd[0] < c.r[12].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[12].d[0] != 0ull;  if (t) { goto L_0024E87C; } }
    c.r[7].d[0] = c.r[7].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    c.r[1].d[0] = c.r[4].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0024E87C; } }
    c.r[7].d[0] = c.r[8].d[0] & 15ull;
    c.r[7].d[0] = c.r[7].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    c.r[4].d[0] = c.r[7].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0024E87C; } }
    c.r[4].d[0] = c.r[5].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0024E87C; } }
    c.r[4].d[0] = c.r[6].d[0] & 15ull;
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024E87C; } }
    c.budget -= 2;
    { const bool t = c.r[10].d[0] == 0ull;  if (t) { goto L_0024E87C; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 7u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[30].w[0])));
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 4));
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0024E858; } }
    c.r[3].d[0] = c.r[5].d[0] & 15ull;
    c.r[4].d[0] = c.r[3].d[0] << 56;
    set32(c.r[3], c.r[18].w[0] + c.r[11].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 326u)));
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024E858; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[4], c.r[9].w[0] + c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    st16((c.r[21].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0])));
    set32(c.r[4], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    st16((c.r[21].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st8((c.r[22].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0024E888; } }
L_0024E858:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0024E86C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[23], c.r[0], c.r[0]);  if (t) { goto L_0024E888; } }
L_0024E86C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0024E888; } }
L_0024E87C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0024E888:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0024EC30; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_0024EC1C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E8A8u);  if (depth < kMaxDepth) unit_0053(c, 179u, depth + 1u); else { c.pc = 0x0024ECB0u; return; } if (c.pc != 0x0024E8A8u) [[unlikely]] return; }
L_0024E8A8:
    mmi::paddub(c.r[16], c.r[2], c.r[0]);
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { mmi::paddub(c.r[23], c.r[0], c.r[0]);  goto L_0024EC10; }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], 0u + 4u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 8391u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 8440u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 790u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 8389u), static_cast<std::uint8_t>(c.r[18].w[0]));
    st8((c.r[16].w[0] + 531u), static_cast<std::uint8_t>(c.r[18].w[0]));
    set32(c.r[5], ld32((c.r[20].w[0])));
    set32(c.r[4], c.r[5].w[0] + 1u);
    st32((c.r[20].w[0]), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    st8((c.r[16].w[0] + 8386u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[20].w[0])));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    st8((c.r[16].w[0] + 8387u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.budget -= 21;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0024E928; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8387u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024E928; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E91Cu);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x0024E91Cu) [[unlikely]] return; }
L_0024E91C:
    c.r[3].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 8388u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0024E930; } }
L_0024E928:
    st8((c.r[16].w[0] + 8388u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0024E930:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 20u)));
    st8((c.r[16].w[0] + 890u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    st32((c.r[16].w[0] + 84u), c.r[3].w[0]);
    c.f[3] = ld32((c.r[17].w[0] + 32u));
    c.f[2] = ld32((c.r[17].w[0] + 36u));
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 44u));
    st32((c.r[16].w[0] + 32u), c.f[3]);
    st32((c.r[16].w[0] + 36u), c.f[2]);
    st32((c.r[16].w[0] + 40u), c.f[1]);
    st32((c.r[16].w[0] + 44u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[1].d[0] = c.r[3].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[3].sd[0] < 48ll ? 1ull : 0ull;  if (t) { goto L_0024E97C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0024E9A0; } }
    c.r[1].d[0] = c.r[3].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 1;
L_0024E97C:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0024E990; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0024E9A0; } }
L_0024E990:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 890u)));
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_0024E9A0:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 531u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024EA78; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 21976u)));
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = c.r[4].d[0] & 31ull;
    st8((c.r[16].w[0] + 8390u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 264u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0024EA64; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 265u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024EA64; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 21976u)));
    c.r[3].d[0] = c.r[3].d[0] & 31ull;
    st8((c.r[16].w[0] + 1838u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024EA1C; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[4], c.r[3].w[0] + 10816u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1838u)));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1838u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0024EA50; } }
L_0024EA1C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[3], 0u + 33u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0024EA44; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1838u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 10837u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1838u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0024EA50; } }
L_0024EA44:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1838u)));
    set32(c.r[3], c.r[3].w[0] - 6u);
    st8((c.r[16].w[0] + 1838u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0024EA50:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1838u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0024EB20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1838u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0024EB20; } }
L_0024EA64:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 21975u)));
    c.r[3].d[0] = c.r[3].d[0] & 31ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1838u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0024EB20; } }
L_0024EA78:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 21975u)));
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = c.r[4].d[0] & 31ull;
    st8((c.r[16].w[0] + 8390u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 265u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0024EB0C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 264u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024EB0C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 21975u)));
    c.r[3].d[0] = c.r[3].d[0] & 31ull;
    st8((c.r[16].w[0] + 1838u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024EAE8; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[4], c.r[3].w[0] + 10816u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1838u)));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1838u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0024EAF8; } }
L_0024EAE8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1838u)));
    set32(c.r[3], c.r[3].w[0] - 6u);
    st8((c.r[16].w[0] + 1838u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_0024EAF8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1838u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0024EB20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1838u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0024EB20; } }
L_0024EB0C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 21976u)));
    c.r[3].d[0] = c.r[3].d[0] & 31ull;
    st8((c.r[16].w[0] + 1838u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
L_0024EB20:
    c.f[1] = ld32((c.r[16].w[0] + 32u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0024EB80; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 369u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_0024EB78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EB54u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0070(c, 204u, depth + 1u); else { c.pc = 0x002C3370u; return; } if (c.pc != 0x0024EB54u) [[unlikely]] return; }
L_0024EB54:
    c.f[20] = ld32((c.r[16].w[0] + 36u));
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EB64u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0045(c, 199u, depth + 1u); else { c.pc = 0x00217650u; return; } if (c.pc != 0x0024EB64u) [[unlikely]] return; }
L_0024EB64:
    st32((c.r[16].w[0] + 36u), c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[20]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 36u), c.f[0]);  if (t) { goto L_0024EB80; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_0024EB78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EB80u);  if (depth < kMaxDepth) unit_0090(c, 165u, depth + 1u); else { c.pc = 0x00342960u; return; } if (c.pc != 0x0024EB80u) [[unlikely]] return; }
L_0024EB80:
    st8((c.r[16].w[0] + 1842u), static_cast<std::uint8_t>(0u));
    c.f[3] = ld32((c.r[16].w[0] + 32u));
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = ld32((c.r[16].w[0] + 44u));
    st32((c.r[16].w[0] + 1776u), c.f[3]);
    st32((c.r[16].w[0] + 1780u), c.f[2]);
    st32((c.r[16].w[0] + 1784u), c.f[1]);
    st32((c.r[16].w[0] + 1788u), c.f[0]);
    st8((c.r[16].w[0] + 1843u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 1852u), static_cast<std::uint16_t>(0u));
    st8((c.r[16].w[0] + 1844u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1845u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1846u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1847u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1860u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 1862u), static_cast<std::uint16_t>(0u));
    st8((c.r[16].w[0] + 1865u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 30u)));
    c.budget -= 21;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0024EBE0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 529u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0024EBF8; } }
L_0024EBE0:
    st8((c.r[16].w[0] + 529u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], c.r[18].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 326u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 326u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_0024EBF8:
    st8((c.r[22].w[0]), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0024EC30; } }
    mmi::paddub(c.r[23], c.r[0], c.r[0]);
    c.budget -= 1;
L_0024EC10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024EC30; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_0024EC1C:
    st16((c.r[21].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[23], c.r[0], c.r[0]);  if (t) { goto L_0024EC30; } }
    mmi::paddub(c.r[23], c.r[0], c.r[0]);
    c.budget -= 1;
L_0024EC2C:
    c.budget -= 1;
L_0024EC30:
    c.budget -= 2;
    { const bool t = c.r[23].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024E5D0u | kUnwind; return; } goto L_0024E5D0; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[20], c.r[20].w[0] + 4u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    st32((c.r[29].w[0] + 176u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[22], c.r[22].w[0] + 1u);
    set32(c.r[30], c.r[30].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 192u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[3], c.r[3].w[0] + 2u);
    st32((c.r[29].w[0] + 208u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 17;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[21], c.r[21].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024E5C8u | kUnwind; return; } goto L_0024E5C8; } }
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
L_0024ECB0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[2], c.r[2].w[0] + 26144u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 3;
L_0024ECBC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], c.r[4].w[0] + 1u);  goto L_0024ECD4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024ECE4; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_0024ECD4:
    c.r[3].d[0] = c.r[4].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], c.r[2].w[0] + 8448u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024ECBCu | kUnwind; return; } goto L_0024ECBC; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_0024ECE4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024ECF0:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 324u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[28].w[0] - 26536u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 325u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[28].w[0] - 26535u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 326u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[28].w[0] - 26540u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 327u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st16((c.r[28].w[0] - 26544u), static_cast<std::uint16_t>(0u));
    st8((c.r[28].w[0] - 26552u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 26539u), static_cast<std::uint8_t>(0u));
    st16((c.r[28].w[0] - 26542u), static_cast<std::uint16_t>(0u));
    st8((c.r[28].w[0] - 26551u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 141u)));
    c.budget -= 20;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024ED4C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 3984u);  if (t) { goto L_0024ED54; } }
L_0024ED4C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 4368u);
    c.budget -= 2;
L_0024ED54:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    st16((c.r[28].w[0] - 26544u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 26544u)));
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 8;
    { st16((c.r[28].w[0] - 26544u), static_cast<std::uint16_t>(c.r[2].w[0]));  goto L_0024ED90; }
L_0024ED80:
    c.budget -= 2;
    {  goto L_0024ED90; }
L_0024ED90:
    set32(c.r[6], 0u + 1u);
    c.budget -= 1;
L_0024ED94:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 141u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024EDB0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[3].w[0] + 3984u);  if (t) { goto L_0024EDB8; } }
L_0024EDB0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[4], c.r[3].w[0] + 4368u);
    c.budget -= 2;
L_0024EDB8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 26540u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[5], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 6;
    if (c.r[3].sd[0] < 0) { mmi::paddub(c.r[6], c.r[0], c.r[0]);  goto L_0024EFCC; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 26544u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_0024EFBC; }
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[3], c.r[3].w[0] + 26144u);
    c.r[8].d[0] = c.r[7].d[0] & 15ull;
    set32(c.r[7], c.r[8].w[0] << 5);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 8);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 11;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_0024EE18; } }
    set32(c.r[7], 0u + 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_0024EE18:
    st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[7], 0u - 1u);
    st8((c.r[3].w[0] + 7u), static_cast<std::uint8_t>(0u));
    st8((c.r[3].w[0] + 739u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 4u)));
    set32(c.r[7], 0u + 3u);
    c.budget -= 9;
    { const bool t = c.r[8].d[0] == c.r[7].d[0]; set32(c.r[7], 0u + 1u);  if (t) { goto L_0024EED8; } }
    set32(c.r[7], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == c.r[7].d[0]; set32(c.r[7], 0u + 1u);  if (t) { goto L_0024EEB4; } }
    set32(c.r[7], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == c.r[7].d[0];  if (t) { goto L_0024EEB0; } }
    set32(c.r[7], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == c.r[7].d[0];  if (t) { goto L_0024EE90; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_0024EE70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 6u)));  if (t) { goto L_0024EEFC; } }
L_0024EE70:
    st8((c.r[3].w[0] + 8389u), static_cast<std::uint8_t>(0u));
    st8((c.r[3].w[0] + 531u), static_cast<std::uint8_t>(0u));
    set32(c.r[7], ld32((c.r[28].w[0] - 26300u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 336u)));
    st8((c.r[3].w[0] + 8386u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[3].w[0] + 8387u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 8388u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0024EEF8; } }
L_0024EE90:
    st8((c.r[3].w[0] + 8389u), static_cast<std::uint8_t>(0u));
    st8((c.r[3].w[0] + 531u), static_cast<std::uint8_t>(0u));
    set32(c.r[7], ld32((c.r[28].w[0] - 26300u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 337u)));
    st8((c.r[3].w[0] + 8386u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[3].w[0] + 8387u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 8388u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0024EEF8; } }
L_0024EEB0:
    set32(c.r[7], 0u + 1u);
    c.budget -= 1;
L_0024EEB4:
    st8((c.r[3].w[0] + 8389u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[3].w[0] + 531u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[7], ld32((c.r[28].w[0] - 26300u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 338u)));
    st8((c.r[3].w[0] + 8386u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[3].w[0] + 8387u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 8388u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0024EEF8; } }
    set32(c.r[7], 0u + 1u);
    c.budget -= 1;
L_0024EED8:
    st8((c.r[3].w[0] + 8389u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[3].w[0] + 531u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[7], ld32((c.r[28].w[0] - 26300u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 339u)));
    st8((c.r[3].w[0] + 8386u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[3].w[0] + 8387u), static_cast<std::uint8_t>(0u));
    st8((c.r[3].w[0] + 8388u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
L_0024EEF8:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 6u)));
    c.budget -= 1;
L_0024EEFC:
    set32(c.r[7], 0u + 1u);
    st8((c.r[3].w[0] + 890u), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[8], ld32((c.r[5].w[0] + 12u)));
    st32((c.r[3].w[0] + 84u), c.r[8].w[0]);
    c.f[3] = ld32((c.r[5].w[0] + 16u));
    c.f[2] = ld32((c.r[5].w[0] + 20u));
    c.f[1] = ld32((c.r[5].w[0] + 24u));
    c.f[0] = ld32((c.r[5].w[0] + 28u));
    st32((c.r[3].w[0] + 32u), c.f[3]);
    st32((c.r[3].w[0] + 36u), c.f[2]);
    st32((c.r[3].w[0] + 40u), c.f[1]);
    st32((c.r[3].w[0] + 44u), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 8u)));
    st16((c.r[3].w[0] + 516u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[3].w[0] + 514u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[3].w[0] + 512u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st8((c.r[3].w[0] + 529u), static_cast<std::uint8_t>(0u));
    st8((c.r[3].w[0] + 790u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[3].w[0] + 1842u), static_cast<std::uint8_t>(0u));
    st8((c.r[3].w[0] + 1843u), static_cast<std::uint8_t>(0u));
    st16((c.r[3].w[0] + 1852u), static_cast<std::uint16_t>(0u));
    st8((c.r[3].w[0] + 1844u), static_cast<std::uint8_t>(0u));
    st8((c.r[3].w[0] + 1845u), static_cast<std::uint8_t>(0u));
    st8((c.r[3].w[0] + 1846u), static_cast<std::uint8_t>(0u));
    st8((c.r[3].w[0] + 1847u), static_cast<std::uint8_t>(0u));
    st8((c.r[3].w[0] + 1860u), static_cast<std::uint8_t>(0u));
    st16((c.r[3].w[0] + 1862u), static_cast<std::uint16_t>(0u));
    st8((c.r[3].w[0] + 8440u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 26540u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[28].w[0] - 26540u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 26540u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    st16((c.r[28].w[0] - 26544u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 26544u)));
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    st16((c.r[28].w[0] - 26544u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 26544u)));
    c.budget -= 45;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0024EFD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (t) { goto L_0024EFD0; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_0024EFBC:
    st16((c.r[28].w[0] - 26544u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (t) { goto L_0024EFD0; } }
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 1;
L_0024EFCC:
    c.budget -= 1;
L_0024EFD0:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024ED94u | kUnwind; return; } goto L_0024ED94; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024EFE0:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[8], c.r[28].w[0] - 26548u);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    st8((c.r[2].w[0] + 324u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[28].w[0] - 26536u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 325u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[28].w[0] - 26535u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 326u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[28].w[0] - 26540u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 327u), static_cast<std::uint8_t>(0u));
    set32(c.r[9], ld32((c.r[28].w[0] - 26300u)));
    st16((c.r[28].w[0] - 26544u), static_cast<std::uint16_t>(0u));
    st8((c.r[28].w[0] - 26552u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 26539u), static_cast<std::uint8_t>(0u));
    st16((c.r[28].w[0] - 26542u), static_cast<std::uint16_t>(0u));
    st8((c.r[28].w[0] - 26551u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[5], c.r[2].w[0] - 28944u);
    c.budget -= 22;
L_0024F038:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 110u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[7], c.r[7].w[0] + 4u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    st16((c.r[8].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0])));
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    st16((c.r[8].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 17;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024F038u | kUnwind; return; } goto L_0024F038; } }
    c.budget -= 2;
    {  goto L_0024F0C0; }
L_0024F090:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F0A0u);  if (depth < kMaxDepth) unit_0053(c, 43u, depth + 1u); else { c.pc = 0x0024CBD0u; return; } if (c.pc != 0x0024F0A0u) [[unlikely]] return; }
L_0024F0A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F0A8u);  if (depth < kMaxDepth) unit_0053(c, 190u, depth + 1u); else { c.pc = 0x0024F0C0u; return; } if (c.pc != 0x0024F0A8u) [[unlikely]] return; }
L_0024F0A8:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0024F0C0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[20], c.r[3].w[0] - 28944u);
    set32(c.r[21], c.r[28].w[0] - 26540u);
    set32(c.r[22], c.r[28].w[0] - 26544u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[19], c.r[0], c.r[0]);
    c.budget -= 14;
L_0024F0F8:
    set32(c.r[18], 0u + 1u);
    c.budget -= 2;
L_0024F100:
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0])));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 110u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[4], c.r[20].w[0] + c.r[4].w[0]);
    set32(c.r[16], ld32((c.r[4].w[0])));
    set32(c.r[17], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 11;
    { const bool t = c.r[3].sd[0] < 0; set32(c.r[3], 0u + 2u);  if (t) { goto L_0024F2D0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_0024F2C0; }
    set32(c.r[3], c.r[19].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 326u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { mmi::paddub(c.r[18], c.r[0], c.r[0]);  goto L_0024F2B4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F154u);  if (depth < kMaxDepth) unit_0053(c, 194u, depth + 1u); else { c.pc = 0x0024F330u; return; } if (c.pc != 0x0024F154u) [[unlikely]] return; }
L_0024F154:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { mmi::paddub(c.r[18], c.r[0], c.r[0]);  goto L_0024F2A8; }
    set32(c.r[5], 0u + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 8391u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 8440u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 790u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 8389u), static_cast<std::uint8_t>(c.r[19].w[0]));
    st8((c.r[2].w[0] + 531u), static_cast<std::uint8_t>(c.r[19].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 336u)));
    st8((c.r[2].w[0] + 8386u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 342u)));
    st8((c.r[2].w[0] + 8387u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[2].w[0] + 8388u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8u)));
    st8((c.r[2].w[0] + 890u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    st32((c.r[2].w[0] + 84u), c.r[3].w[0]);
    c.f[3] = ld32((c.r[17].w[0] + 16u));
    c.f[2] = ld32((c.r[17].w[0] + 20u));
    c.f[1] = ld32((c.r[17].w[0] + 24u));
    c.f[0] = ld32((c.r[17].w[0] + 28u));
    st32((c.r[2].w[0] + 32u), c.f[3]);
    st32((c.r[2].w[0] + 36u), c.f[2]);
    st32((c.r[2].w[0] + 40u), c.f[1]);
    st32((c.r[2].w[0] + 44u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 8386u)));
    c.r[1].d[0] = c.r[3].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 34;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[3].sd[0] < 48ll ? 1ull : 0ull;  if (t) { goto L_0024F1F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0024F210; } }
    c.r[1].d[0] = c.r[3].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 1;
L_0024F1F0:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0024F200; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_0024F210; } }
L_0024F200:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 890u)));
    set32(c.r[3], 0u + 2u);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_0024F210:
    set32(c.r[3], 0u + 18u);
    st8((c.r[2].w[0] + 529u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 1838u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 16u);
    st8((c.r[2].w[0] + 8390u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[2].w[0] + 1842u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 1843u), static_cast<std::uint8_t>(0u));
    st16((c.r[2].w[0] + 1852u), static_cast<std::uint16_t>(0u));
    st8((c.r[2].w[0] + 1844u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 1845u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 1846u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 1847u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 1860u), static_cast<std::uint8_t>(0u));
    st16((c.r[2].w[0] + 1862u), static_cast<std::uint16_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0])));
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    st16((c.r[22].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0])));
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    st16((c.r[22].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], c.r[19].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 326u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 326u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0])));
    c.budget -= 35;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0024F2E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[18], c.r[0], c.r[0]);  if (t) { goto L_0024F2E0; } }
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    c.budget -= 1;
L_0024F2A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024F2E0; } }
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    c.budget -= 1;
L_0024F2B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024F2E0; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_0024F2C0:
    st16((c.r[22].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[18], c.r[0], c.r[0]);  if (t) { goto L_0024F2E0; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_0024F2D0:
    st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    st16((c.r[22].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 4;
L_0024F2E0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024F100u | kUnwind; return; } goto L_0024F100; } }
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[3].d[0] = c.r[19].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[20], c.r[20].w[0] + 4u);
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[22], c.r[22].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024F0F8u | kUnwind; return; } goto L_0024F0F8; } }
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0024F330:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[2], c.r[2].w[0] + 26144u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 3;
L_0024F33C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], c.r[4].w[0] + 1u);  goto L_0024F354; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024F364; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_0024F354:
    c.r[3].d[0] = c.r[4].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], c.r[2].w[0] + 8448u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024F33Cu | kUnwind; return; } goto L_0024F33C; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_0024F364:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024F370:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_0024F398; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F390u);  if (depth < kMaxDepth) unit_0052(c, 173u, depth + 1u); else { c.pc = 0x0024A3C0u; return; } if (c.pc != 0x0024F390u) [[unlikely]] return; }
L_0024F390:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0024F3A4; } }
L_0024F398:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F3A0u);  if (depth < kMaxDepth) unit_0052(c, 177u, depth + 1u); else { c.pc = 0x0024A480u; return; } if (c.pc != 0x0024F3A0u) [[unlikely]] return; }
L_0024F3A0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0024F3A4:
    st8((c.r[16].w[0] + 8440u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 790u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 8u);
    st8((c.r[16].w[0] + 529u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1838u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 1842u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1843u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 1852u), static_cast<std::uint16_t>(0u));
    st8((c.r[16].w[0] + 1844u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1845u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1846u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1847u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1860u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 1862u), static_cast<std::uint16_t>(0u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0024F3F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00730000u);
    st32((c.r[1].w[0] - 14480u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00730000u);
    st32((c.r[1].w[0] - 14476u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00730000u);
    st32((c.r[1].w[0] - 14472u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    st32((c.r[1].w[0] - 14468u), 0u);
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 15;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0024F440; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F434u);  if (depth < kMaxDepth) unit_0014(c, 79u, depth + 1u); else { c.pc = 0x00151900u; return; } if (c.pc != 0x0024F434u) [[unlikely]] return; }
L_0024F434:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0024F4F8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0024F440:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0024F4F4; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[8], c.r[28].w[0] - 26548u);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    st8((c.r[2].w[0] + 324u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[28].w[0] - 26536u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 325u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[28].w[0] - 26535u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 326u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[28].w[0] - 26540u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 327u), static_cast<std::uint8_t>(0u));
    set32(c.r[9], ld32((c.r[28].w[0] - 26300u)));
    st16((c.r[28].w[0] - 26544u), static_cast<std::uint16_t>(0u));
    st8((c.r[28].w[0] - 26552u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 26539u), static_cast<std::uint8_t>(0u));
    st16((c.r[28].w[0] - 26542u), static_cast<std::uint16_t>(0u));
    st8((c.r[28].w[0] - 26551u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], c.r[2].w[0] - 26192u);
    c.budget -= 22;
L_0024F4A0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 256u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[7], c.r[7].w[0] + 4u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    st16((c.r[8].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0])));
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    st16((c.r[8].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 17;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024F4A0u | kUnwind; return; } goto L_0024F4A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F4ECu);  if (depth < kMaxDepth) unit_0053(c, 171u, depth + 1u); else { c.pc = 0x0024E530u; return; } if (c.pc != 0x0024F4ECu) [[unlikely]] return; }
L_0024F4EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F4F4u);  if (depth < kMaxDepth) unit_0053(c, 157u, depth + 1u); else { c.pc = 0x0024E120u; return; } if (c.pc != 0x0024F4F4u) [[unlikely]] return; }
L_0024F4F4:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_0024F4F8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0024F500:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F510u);  if (depth < kMaxDepth) unit_0053(c, 43u, depth + 1u); else { c.pc = 0x0024CBD0u; return; } if (c.pc != 0x0024F510u) [[unlikely]] return; }
L_0024F510:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0024F538; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F52Cu);  if (depth < kMaxDepth) unit_0014(c, 79u, depth + 1u); else { c.pc = 0x00151900u; return; } if (c.pc != 0x0024F52Cu) [[unlikely]] return; }
L_0024F52C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024F550; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0024F538:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0024F550; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F548u);  if (depth < kMaxDepth) unit_0053(c, 171u, depth + 1u); else { c.pc = 0x0024E530u; return; } if (c.pc != 0x0024F548u) [[unlikely]] return; }
L_0024F548:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F550u);  if (depth < kMaxDepth) unit_0053(c, 157u, depth + 1u); else { c.pc = 0x0024E120u; return; } if (c.pc != 0x0024F550u) [[unlikely]] return; }
L_0024F550:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F558u);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x0024F558u) [[unlikely]] return; }
L_0024F558:
    st8((c.r[28].w[0] - 26528u), static_cast<std::uint8_t>(c.r[2].w[0]));
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0024F570:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st16((c.r[4].w[0] + 704u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 712u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 714u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 716u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 718u), static_cast<std::uint16_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[4], 0u + 1u);
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0024F854; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1842u)));  if (t) { goto L_0024F5DC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8438u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_0024F628; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 531u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 396u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1842u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0024F628; } }
L_0024F5DC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0024F608; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 531u));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 264u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024F628; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 396u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1842u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0024F628; } }
L_0024F608:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 531u));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 264u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_0024F628; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 396u)));
    st8((c.r[16].w[0] + 1842u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0024F628:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1842u)));
    c.r[3].d[0] = c.r[5].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0024F670; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F644u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 50u, depth + 1u); else { c.pc = 0x0024CF20u; return; } if (c.pc != 0x0024F644u) [[unlikely]] return; }
L_0024F644:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F64Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 81u, depth + 1u); else { c.pc = 0x0024D300u; return; } if (c.pc != 0x0024F64Cu) [[unlikely]] return; }
L_0024F64C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F654u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 89u, depth + 1u); else { c.pc = 0x0024D410u; return; } if (c.pc != 0x0024F654u) [[unlikely]] return; }
L_0024F654:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F65Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 101u, depth + 1u); else { c.pc = 0x0024D680u; return; } if (c.pc != 0x0024F65Cu) [[unlikely]] return; }
L_0024F65C:
    set32(c.r[5], ld32((c.r[16].w[0] + 1824u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F668u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0055(c, 85u, depth + 1u); else { c.pc = 0x00255680u; return; } if (c.pc != 0x0024F668u) [[unlikely]] return; }
L_0024F668:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F670u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0055(c, 174u, depth + 1u); else { c.pc = 0x002562B0u; return; } if (c.pc != 0x0024F670u) [[unlikely]] return; }
L_0024F670:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 578u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024F6A0; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024F6A0; } }
    set32(c.r[2], 0u + 13u);
    st8((c.r[16].w[0] + 1724u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1734u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1735u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
L_0024F6A0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1845u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024F6B4; } }
    set32(c.r[2], 0u + 100u);
    st16((c.r[16].w[0] + 1736u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0024F6B4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1846u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024F6C8; } }
    set32(c.r[2], 0u + 100u);
    st16((c.r[16].w[0] + 1828u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0024F6C8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1847u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024F6DC; } }
    set32(c.r[2], 0u + 100u);
    st16((c.r[16].w[0] + 1832u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0024F6DC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1734u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[2].w[0] - 1u);  goto L_0024F7F0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F6F0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 255u, depth + 1u); else { c.pc = 0x0024FE20u; return; } if (c.pc != 0x0024F6F0u) [[unlikely]] return; }
L_0024F6F0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1724u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(14ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0024F7F4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] + 26000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0024C000u < 16384u) { entry = entries_0053[(t - 0x0024C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0024F71C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F724u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0054(c, 8u, depth + 1u); else { c.pc = 0x002500F0u; return; } if (c.pc != 0x0024F724u) [[unlikely]] return; }
L_0024F724:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1842u)));  if (t) { goto L_0024F7F8; } }
L_0024F72C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F734u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0054(c, 28u, depth + 1u); else { c.pc = 0x00250490u; return; } if (c.pc != 0x0024F734u) [[unlikely]] return; }
L_0024F734:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024F7F4; } }
L_0024F73C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F744u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0054(c, 69u, depth + 1u); else { c.pc = 0x00250D80u; return; } if (c.pc != 0x0024F744u) [[unlikely]] return; }
L_0024F744:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024F7F4; } }
L_0024F74C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F754u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0054(c, 103u, depth + 1u); else { c.pc = 0x00251960u; return; } if (c.pc != 0x0024F754u) [[unlikely]] return; }
L_0024F754:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024F7F4; } }
L_0024F75C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F764u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0054(c, 118u, depth + 1u); else { c.pc = 0x00251EA0u; return; } if (c.pc != 0x0024F764u) [[unlikely]] return; }
L_0024F764:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024F7F4; } }
L_0024F76C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F774u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0054(c, 120u, depth + 1u); else { c.pc = 0x00251FC0u; return; } if (c.pc != 0x0024F774u) [[unlikely]] return; }
L_0024F774:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024F7F4; } }
L_0024F77C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F784u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0054(c, 123u, depth + 1u); else { c.pc = 0x002521C0u; return; } if (c.pc != 0x0024F784u) [[unlikely]] return; }
L_0024F784:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024F7F4; } }
L_0024F78C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F794u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0054(c, 128u, depth + 1u); else { c.pc = 0x00252320u; return; } if (c.pc != 0x0024F794u) [[unlikely]] return; }
L_0024F794:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024F7F4; } }
L_0024F79C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F7A4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0054(c, 159u, depth + 1u); else { c.pc = 0x00252CA0u; return; } if (c.pc != 0x0024F7A4u) [[unlikely]] return; }
L_0024F7A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024F7F4; } }
L_0024F7AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F7B4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0054(c, 161u, depth + 1u); else { c.pc = 0x00252DD0u; return; } if (c.pc != 0x0024F7B4u) [[unlikely]] return; }
L_0024F7B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024F7F4; } }
L_0024F7BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F7C4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0054(c, 166u, depth + 1u); else { c.pc = 0x002530E0u; return; } if (c.pc != 0x0024F7C4u) [[unlikely]] return; }
L_0024F7C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024F7F4; } }
L_0024F7CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F7D4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0054(c, 178u, depth + 1u); else { c.pc = 0x00253330u; return; } if (c.pc != 0x0024F7D4u) [[unlikely]] return; }
L_0024F7D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024F7F4; } }
L_0024F7DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F7E4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0054(c, 181u, depth + 1u); else { c.pc = 0x002534E0u; return; } if (c.pc != 0x0024F7E4u) [[unlikely]] return; }
L_0024F7E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024F7F4; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 1;
L_0024F7F0:
    st8((c.r[16].w[0] + 1734u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_0024F7F4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1842u)));
    c.budget -= 1;
L_0024F7F8:
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_0024F84C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1843u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024F848; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 1824u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0024F848; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F824u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 47u, depth + 1u); else { c.pc = 0x0024CEB0u; return; } if (c.pc != 0x0024F824u) [[unlikely]] return; }
L_0024F824:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0024F848; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 1843u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0024F848:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_0024F84C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F854u);  if (depth < kMaxDepth) unit_0053(c, 246u, depth + 1u); else { c.pc = 0x0024F870u; return; } if (c.pc != 0x0024F854u) [[unlikely]] return; }
L_0024F854:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0024F870:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[6], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[6].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_0024FE10; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1844u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0024FC64; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0024FC64; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[6].d[0];  if (t) { goto L_0024FBF0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0024F8D0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0024FE10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0024FE14; } }
L_0024F8D0:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1852u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0024FBA0; } }
    st8((c.r[16].w[0] + 1844u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[16].w[0] + 1845u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 1792u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0024F908; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F908u);  if (depth < kMaxDepth) unit_0014(c, 159u, depth + 1u); else { c.pc = 0x00153200u; return; } if (c.pc != 0x0024F908u) [[unlikely]] return; }
L_0024F908:
    c.f[3] = ld32((c.r[16].w[0] + 1792u));
    c.f[2] = ld32((c.r[16].w[0] + 1796u));
    c.f[1] = ld32((c.r[16].w[0] + 1800u));
    c.f[0] = ld32((c.r[16].w[0] + 1804u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44720000u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.f[4] = c.r[3].w[0];
    st32((c.r[16].w[0] + 1808u), c.f[3]);
    st32((c.r[16].w[0] + 1812u), c.f[2]);
    st32((c.r[16].w[0] + 1816u), c.f[1]);
    st32((c.r[16].w[0] + 1820u), c.f[0]);
    c.f[3] = ld32((c.r[16].w[0] + 1792u));
    c.f[2] = ld32((c.r[16].w[0] + 1796u));
    c.f[1] = ld32((c.r[16].w[0] + 1800u));
    c.f[0] = ld32((c.r[16].w[0] + 1804u));
    st32((c.r[4].w[0]), c.f[3]);
    st32((c.r[4].w[0] + 4u), c.f[2]);
    st32((c.r[4].w[0] + 8u), c.f[1]);
    st32((c.r[4].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 32u));
    fpu_compare(c, fp::key(c.f[4]) == fp::key(c.f[0]));
    c.budget -= 24;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[29].w[0] + 40u);  if (t) { goto L_0024F978; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44750000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 32u), c.r[3].w[0]);  if (t) { goto L_0024F994; } }
    set32(c.r[4], c.r[29].w[0] + 40u);
    c.budget -= 1;
L_0024F978:
    c.f[0] = ld32((c.r[4].w[0]));
    fpu_compare(c, fp::key(c.f[4]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0024F994; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44750000u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_0024F994:
    c.f[5] = ld32((c.r[29].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44720000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = 0u;
    c.f[2] = fp::sub(c.f[5], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[2]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x38D10000u);  if (t) { goto L_0024F9D0; } }
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[5], c.r[29].w[0] + 40u);  if (t) { goto L_0024F9DC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x38D10000u);
    c.budget -= 1;
L_0024F9D0:
    c.r[3].d[0] = c.r[3].d[0] | 46871ull;
    c.f[2] = c.r[3].w[0];
    set32(c.r[5], c.r[29].w[0] + 40u);
    c.budget -= 3;
L_0024F9DC:
    c.f[0] = 0u;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44720000u);
    c.f[1] = c.r[3].w[0];
    c.f[4] = ld32((c.r[5].w[0]));
    c.f[3] = fp::sub(c.f[1], c.f[5]);
    c.f[1] = fp::sub(c.f[4], c.f[1]);
    fpu_div(c, 6u, c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[3]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x38D10000u);  if (t) { goto L_0024FA24; } }
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[3]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[1] = fp::sub(c.f[4], c.f[5]);  if (t) { goto L_0024FA30; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x38D10000u);
    c.budget -= 1;
L_0024FA24:
    c.r[3].d[0] = c.r[3].d[0] | 46871ull;
    c.f[3] = c.r[3].w[0];
    c.f[1] = fp::sub(c.f[4], c.f[5]);
    c.budget -= 3;
L_0024FA30:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x44720000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43F40000u);
    c.f[0] = c.r[4].w[0];
    c.f[2] = c.r[3].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    fpu_div(c, 3u, c.f[0], c.f[3]);
    fpu_compare(c, fp::key(c.f[5]) < fp::key(c.f[2]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[3].sd[0] = static_cast<std::int32_t>(0x44B50000u);  if (t) { goto L_0024FA88; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43FC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[6]);
    c.f[0] = fp::add(c.f[0], c.f[3]);
    st32((c.r[5].w[0]), c.f[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 32u), c.r[3].w[0]);  if (t) { goto L_0024FAC0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44B50000u);
    c.budget -= 1;
L_0024FA88:
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[5]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0024FAC0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44B20000u);
    c.r[3].d[0] = c.r[3].d[0] | 57344ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[6]);
    c.f[0] = fp::add(c.f[0], c.f[3]);
    st32((c.r[5].w[0]), c.f[0]);
    st32((c.r[29].w[0] + 32u), c.r[3].w[0]);
    c.budget -= 8;
L_0024FAC0:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[6]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x38D10000u);  if (t) { goto L_0024FAEC; } }
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[6]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0024FAF4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x38D10000u);
    c.budget -= 1;
L_0024FAEC:
    c.r[3].d[0] = c.r[3].d[0] | 46871ull;
    c.f[6] = c.r[3].w[0];
    c.budget -= 2;
L_0024FAF4:
    c.f[1] = ld32((c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43F40000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[3].sd[0] = static_cast<std::int32_t>(0x44B50000u);  if (t) { goto L_0024FB40; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43FC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[3]);
    fpu_div(c, 0u, c.f[0], c.f[6]);
    st32((c.r[29].w[0] + 32u), c.f[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.r[3].w[0]);  if (t) { goto L_0024FB78; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44B50000u);
    c.budget -= 1;
L_0024FB40:
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], c.r[29].w[0] + 32u);  if (t) { goto L_0024FB7C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44B20000u);
    c.r[3].d[0] = c.r[3].d[0] | 57344ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[3]);
    fpu_div(c, 0u, c.f[0], c.f[6]);
    st32((c.r[29].w[0] + 32u), c.f[0]);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.budget -= 8;
L_0024FB78:
    set32(c.r[3], c.r[29].w[0] + 32u);
    c.budget -= 1;
L_0024FB7C:
    c.f[3] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[16].w[0] + 1792u), c.f[3]);
    st32((c.r[16].w[0] + 1796u), c.f[2]);
    st32((c.r[16].w[0] + 1800u), c.f[1]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1804u), c.f[0]);  if (t) { goto L_0024FE10; } }
L_0024FBA0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1860u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0024FBC4; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 789u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024FBC4; } }
    set32(c.r[3], c.r[5].w[0] - 1u);
    st16((c.r[16].w[0] + 1852u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0024FBC4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1860u)));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0024FE10; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 514u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1862u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0024FE10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1852u), static_cast<std::uint16_t>(0u));  if (t) { goto L_0024FE10; } }
L_0024FBF0:
    c.f[3] = ld32((c.r[16].w[0] + 1792u));
    c.f[2] = ld32((c.r[16].w[0] + 32u));
    c.f[1] = ld32((c.r[16].w[0] + 1800u));
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FC14u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x0024FC14u) [[unlikely]] return; }
L_0024FC14:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0024FE10; } }
    set32(c.r[3], 0u + 3u);
    st8((c.r[16].w[0] + 1844u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[3] = ld32((c.r[16].w[0] + 1808u));
    c.f[2] = ld32((c.r[16].w[0] + 1812u));
    c.f[1] = ld32((c.r[16].w[0] + 1816u));
    c.f[0] = ld32((c.r[16].w[0] + 1820u));
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 1792u), c.f[3]);
    st32((c.r[16].w[0] + 1796u), c.f[2]);
    st32((c.r[16].w[0] + 1800u), c.f[1]);
    st32((c.r[16].w[0] + 1804u), c.f[0]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1846u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0024FE10; } }
L_0024FC64:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[2].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024FC88; } }
    c.r[2].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024FC88; } }
    set32(c.r[2], 0u + 4000u);
    st16((c.r[16].w[0] + 816u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0024FC88:
    c.f[3] = ld32((c.r[16].w[0] + 1792u));
    c.f[2] = ld32((c.r[16].w[0] + 32u));
    c.f[1] = ld32((c.r[16].w[0] + 1800u));
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FCACu); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x0024FCACu) [[unlikely]] return; }
L_0024FCAC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0024FDA0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024FDA0; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 12u);
    st8((c.r[16].w[0] + 583u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 33u);  if (t) { goto L_0024FD14; } }
    set32(c.r[5], 0u + 49u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FCFCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 55u, depth + 1u); else { c.pc = 0x002D8DE0u; return; } if (c.pc != 0x0024FCFCu) [[unlikely]] return; }
L_0024FCFC:
    set32(c.r[5], 0u + 49u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FD08u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 54u, depth + 1u); else { c.pc = 0x002D8D10u; return; } if (c.pc != 0x0024FD08u) [[unlikely]] return; }
L_0024FD08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));  if (t) { goto L_0024FD2C; } }
    set32(c.r[5], 0u + 33u);
    c.budget -= 1;
L_0024FD14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FD1Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 88u, depth + 1u); else { c.pc = 0x0026D880u; return; } if (c.pc != 0x0024FD1Cu) [[unlikely]] return; }
L_0024FD1C:
    set32(c.r[5], 0u + 33u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FD28u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 87u, depth + 1u); else { c.pc = 0x0026D7B0u; return; } if (c.pc != 0x0024FD28u) [[unlikely]] return; }
L_0024FD28:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.budget -= 1;
L_0024FD2C:
    set32(c.r[4], 0u - 29184u);
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    st16((c.r[16].w[0] + 812u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[4].d[0] = c.r[4].d[0] | 20480ull;
    st16((c.r[16].w[0] + 812u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 532u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 529u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0024FE10; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1844u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0024FE10; } }
    set32(c.r[3], 0u + 4u);
    st8((c.r[16].w[0] + 1844u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 531u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[3], c.r[3].w[0] + 29598u);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st32((c.r[3].w[0] + 580u), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 584u), c.r[16].w[0]);  if (t) { goto L_0024FE10; } }
L_0024FDA0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 529u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0024FE10; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1844u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0024FE10; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 12288ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024FE10; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FDDCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0014(c, 156u, depth + 1u); else { c.pc = 0x001530A0u; return; } if (c.pc != 0x0024FDDCu) [[unlikely]] return; }
L_0024FDDC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024FE10; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 532u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 4u);
    st8((c.r[16].w[0] + 1844u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 531u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[3], c.r[3].w[0] + 29598u);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 11;
L_0024FE10:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0024FE14:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0024FE20:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 531u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { goto L_0024FE48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 26531u)));  if (t) { goto L_0024FE50; } }
L_0024FE48:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 26532u)));
    c.budget -= 2;
L_0024FE50:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0054(c, 6u, depth); } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1840u)));
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_0024FEEC; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_0024FEAC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0024FE84; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);  if (t) { [[clang::musttail]] return unit_0054(c, 7u, depth); } }
L_0024FE84:
    set32(c.r[3], ld32((c.r[17].w[0] + 1524u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0024FE98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 1840u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { [[clang::musttail]] return unit_0054(c, 6u, depth); } }
L_0024FE98:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    st16((c.r[17].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 1840u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { [[clang::musttail]] return unit_0054(c, 6u, depth); } }
L_0024FEAC:
    set32(c.r[4], ld32((c.r[17].w[0] + 1524u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024FEE4; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { [[clang::musttail]] return unit_0054(c, 6u, depth); } }
    st8((c.r[17].w[0] + 1840u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { [[clang::musttail]] return unit_0054(c, 6u, depth); } }
    set32(c.r[3], 0u + 300u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 1870u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_0054(c, 6u, depth); } }
L_0024FEE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 1840u), static_cast<std::uint8_t>(0u));  if (t) { [[clang::musttail]] return unit_0054(c, 6u, depth); } }
L_0024FEEC:
    set32(c.r[4], ld32((c.r[17].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { [[clang::musttail]] return unit_0054(c, 5u, depth); } }
    set32(c.r[3], ld32((c.r[17].w[0] + 1824u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0054(c, 5u, depth); } }
    c.f[1] = ld32((c.r[4].w[0] + 1068u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (t) { goto L_0024FF48; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 532u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024FF48; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 8192ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024FF48; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_0024FF48:
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0024FF80; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 1870u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_0024FF7C; }
    set32(c.r[3], 0u + 300u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 1870u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0024FF80; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_0024FF7C:
    st16((c.r[17].w[0] + 1870u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 1;
L_0024FF80:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0054(c, 5u, depth); } }
    set32(c.r[5], ld32((c.r[17].w[0] + 1824u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 1520u)));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_0024FFA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { [[clang::musttail]] return unit_0054(c, 5u, depth); } }
L_0024FFA0:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_0024FFB8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[3].d[0];  if (t) { goto L_0024FFFC; } }
L_0024FFB8:
    c.f[1] = ld32((c.r[5].w[0] + 1068u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 7;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[16], 0u + 1u);  goto L_0024FFF4; }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 532u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024FFF0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 8192ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0024FFFC; } }
L_0024FFF0:
    set32(c.r[16], 0u + 1u);
    c.budget -= 1;
L_0024FFF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0054(c, 5u, depth); } }
L_0024FFFC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 644u)));
    c.budget -= 1;
    [[clang::musttail]] return unit_0054(c, 1u, depth);
}

}
