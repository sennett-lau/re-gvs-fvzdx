#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_004A[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 38, 0, 39, 0, 40, 0, 41, 0, 42, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 45, 0, 0, 0, 46,
    0, 47, 0, 48, 0, 49, 0, 50, 0, 51, 0, 52, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 55, 0, 0, 0, 56, 0, 0, 0, 0, 57, 0, 0, 58, 0, 0,
    59, 0, 0, 0, 60, 0, 61, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 65, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 67, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 69, 0, 70, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 74,
    0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 83, 0, 0, 0, 84, 0, 85, 0, 86, 0, 0, 87, 0, 88, 0, 89, 0, 0, 0, 90, 0, 91, 0, 92, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0,
    105, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 0, 111, 0,
    0, 112, 0, 0, 113, 0, 0, 0, 114, 0, 115, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 118, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 129, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    131, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 134, 0, 135, 0, 0, 136, 0, 0, 0, 0, 137, 0, 138, 0, 139, 0, 0,
    0, 140, 0, 141, 0, 0, 0, 0, 142, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 146, 0, 0, 0, 0, 0, 0,
    0, 147, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    160, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 171, 0, 172, 0, 0,
    0, 0, 0, 173, 0, 174, 0, 0, 0, 0, 175, 0, 176, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0,
    0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 181, 0, 0, 0, 182, 0,
    183, 0, 0, 0, 0, 184, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 190, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 193, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 204, 0, 0, 0, 205, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0,
    0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 211, 0, 212, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    217, 0, 0, 0, 218, 0, 0, 0, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242,
    243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274,
    275, 276, 277, 278, 279, 280, 281, 282, 283, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_004A(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00228000;
    case 2u: goto L_0022810C;
    case 3u: goto L_00228170;
    case 4u: goto L_002281D4;
    case 5u: goto L_00228304;
    case 6u: goto L_00228354;
    case 7u: goto L_002283A4;
    case 8u: goto L_00228450;
    case 9u: goto L_00228470;
    case 10u: goto L_002285AC;
    case 11u: goto L_00228610;
    case 12u: goto L_00228674;
    case 13u: goto L_002287A4;
    case 14u: goto L_002287F4;
    case 15u: goto L_00228844;
    case 16u: goto L_00228910;
    case 17u: goto L_00228930;
    case 18u: goto L_00228990;
    case 19u: goto L_002289B0;
    case 20u: goto L_00228AD0;
    case 21u: goto L_00228BE0;
    case 22u: goto L_00228C5C;
    case 23u: goto L_00228C90;
    case 24u: goto L_00228CF8;
    case 25u: goto L_00228E00;
    case 26u: goto L_00228E58;
    case 27u: goto L_00228F30;
    case 28u: goto L_00228F88;
    case 29u: goto L_00229070;
    case 30u: goto L_002290C8;
    case 31u: goto L_002291B0;
    case 32u: goto L_00229208;
    case 33u: goto L_002292F0;
    case 34u: goto L_00229348;
    case 35u: goto L_00229430;
    case 36u: goto L_00229440;
    case 37u: goto L_00229450;
    case 38u: goto L_00229498;
    case 39u: goto L_002294A0;
    case 40u: goto L_002294A8;
    case 41u: goto L_002294B0;
    case 42u: goto L_002294B8;
    case 43u: goto L_002294C0;
    case 44u: goto L_002294E4;
    case 45u: goto L_002294EC;
    case 46u: goto L_002294FC;
    case 47u: goto L_00229504;
    case 48u: goto L_0022950C;
    case 49u: goto L_00229514;
    case 50u: goto L_0022951C;
    case 51u: goto L_00229524;
    case 52u: goto L_0022952C;
    case 53u: goto L_0022954C;
    case 54u: goto L_002295B0;
    case 55u: goto L_002295C4;
    case 56u: goto L_002295D4;
    case 57u: goto L_002295E8;
    case 58u: goto L_002295F4;
    case 59u: goto L_00229600;
    case 60u: goto L_00229610;
    case 61u: goto L_00229618;
    case 62u: goto L_0022962C;
    case 63u: goto L_002296A8;
    case 64u: goto L_00229730;
    case 65u: goto L_0022973C;
    case 66u: goto L_00229758;
    case 67u: goto L_0022976C;
    case 68u: goto L_002297B8;
    case 69u: goto L_002297CC;
    case 70u: goto L_002297D4;
    case 71u: goto L_002297E8;
    case 72u: goto L_00229864;
    case 73u: goto L_002298EC;
    case 74u: goto L_002298FC;
    case 75u: goto L_00229918;
    case 76u: goto L_0022992C;
    case 77u: goto L_00229990;
    case 78u: goto L_002299B8;
    case 79u: goto L_00229A10;
    case 80u: goto L_00229A30;
    case 81u: goto L_00229A90;
    case 82u: goto L_00229AE8;
    case 83u: goto L_00229B14;
    case 84u: goto L_00229B24;
    case 85u: goto L_00229B2C;
    case 86u: goto L_00229B34;
    case 87u: goto L_00229B40;
    case 88u: goto L_00229B48;
    case 89u: goto L_00229B50;
    case 90u: goto L_00229B60;
    case 91u: goto L_00229B68;
    case 92u: goto L_00229B70;
    case 93u: goto L_00229BA4;
    case 94u: goto L_00229C20;
    case 95u: goto L_00229C30;
    case 96u: goto L_00229C40;
    case 97u: goto L_00229C50;
    case 98u: goto L_00229C70;
    case 99u: goto L_00229CD0;
    case 100u: goto L_00229CF0;
    case 101u: goto L_00229D2C;
    case 102u: goto L_00229DA0;
    case 103u: goto L_00229DC0;
    case 104u: goto L_00229FF0;
    case 105u: goto L_0022A000;
    case 106u: goto L_0022A010;
    case 107u: goto L_0022A078;
    case 108u: goto L_0022A0C0;
    case 109u: goto L_0022A0D4;
    case 110u: goto L_0022A0E4;
    case 111u: goto L_0022A0F8;
    case 112u: goto L_0022A104;
    case 113u: goto L_0022A110;
    case 114u: goto L_0022A120;
    case 115u: goto L_0022A128;
    case 116u: goto L_0022A13C;
    case 117u: goto L_0022A170;
    case 118u: goto L_0022A178;
    case 119u: goto L_0022A1CC;
    case 120u: goto L_0022A230;
    case 121u: goto L_0022A278;
    case 122u: goto L_0022A2F0;
    case 123u: goto L_0022A318;
    case 124u: goto L_0022A3A0;
    case 125u: goto L_0022A3C0;
    case 126u: goto L_0022A400;
    case 127u: goto L_0022A450;
    case 128u: goto L_0022A548;
    case 129u: goto L_0022A550;
    case 130u: goto L_0022A558;
    case 131u: goto L_0022A580;
    case 132u: goto L_0022A590;
    case 133u: goto L_0022A5A0;
    case 134u: goto L_0022A5BC;
    case 135u: goto L_0022A5C4;
    case 136u: goto L_0022A5D0;
    case 137u: goto L_0022A5E4;
    case 138u: goto L_0022A5EC;
    case 139u: goto L_0022A5F4;
    case 140u: goto L_0022A604;
    case 141u: goto L_0022A60C;
    case 142u: goto L_0022A620;
    case 143u: goto L_0022A628;
    case 144u: goto L_0022A6A4;
    case 145u: goto L_0022A6DC;
    case 146u: goto L_0022A6E4;
    case 147u: goto L_0022A704;
    case 148u: goto L_0022A70C;
    case 149u: goto L_0022A778;
    case 150u: goto L_0022A7B0;
    case 151u: goto L_0022A854;
    case 152u: goto L_0022A888;
    case 153u: goto L_0022A91C;
    case 154u: goto L_0022A944;
    case 155u: goto L_0022A970;
    case 156u: goto L_0022A998;
    case 157u: goto L_0022A9D0;
    case 158u: goto L_0022A9F0;
    case 159u: goto L_0022AA40;
    case 160u: goto L_0022AB00;
    case 161u: goto L_0022AB10;
    case 162u: goto L_0022AB20;
    case 163u: goto L_0022AB30;
    case 164u: goto L_0022AB9C;
    case 165u: goto L_0022ABB0;
    case 166u: goto L_0022AC24;
    case 167u: goto L_0022AC5C;
    case 168u: goto L_0022AC98;
    case 169u: goto L_0022ACBC;
    case 170u: goto L_0022ACD4;
    case 171u: goto L_0022ACEC;
    case 172u: goto L_0022ACF4;
    case 173u: goto L_0022AD0C;
    case 174u: goto L_0022AD14;
    case 175u: goto L_0022AD28;
    case 176u: goto L_0022AD30;
    case 177u: goto L_0022AD4C;
    case 178u: goto L_0022AD70;
    case 179u: goto L_0022AD94;
    case 180u: goto L_0022AE60;
    case 181u: goto L_0022AE68;
    case 182u: goto L_0022AE78;
    case 183u: goto L_0022AE80;
    case 184u: goto L_0022AE94;
    case 185u: goto L_0022AE9C;
    case 186u: goto L_0022AEC0;
    case 187u: goto L_0022AED0;
    case 188u: goto L_0022AF40;
    case 189u: goto L_0022AF50;
    case 190u: goto L_0022B010;
    case 191u: goto L_0022B018;
    case 192u: goto L_0022B040;
    case 193u: goto L_0022B048;
    case 194u: goto L_0022B054;
    case 195u: goto L_0022B080;
    case 196u: goto L_0022B0A8;
    case 197u: goto L_0022B140;
    case 198u: goto L_0022B160;
    case 199u: goto L_0022B1D0;
    case 200u: goto L_0022B1F0;
    case 201u: goto L_0022B244;
    case 202u: goto L_0022B2FC;
    case 203u: goto L_0022B324;
    case 204u: goto L_0022B330;
    case 205u: goto L_0022B340;
    case 206u: goto L_0022B34C;
    case 207u: goto L_0022B370;
    case 208u: goto L_0022B390;
    case 209u: goto L_0022B3C8;
    case 210u: goto L_0022B400;
    case 211u: goto L_0022B49C;
    case 212u: goto L_0022B4A4;
    case 213u: goto L_0022B4AC;
    case 214u: goto L_0022B4E0;
    case 215u: goto L_0022B5C0;
    case 216u: goto L_0022B640;
    case 217u: goto L_0022B780;
    case 218u: goto L_0022B790;
    case 219u: goto L_0022B7A0;
    case 220u: goto L_0022B7A4;
    case 221u: goto L_0022B7A8;
    case 222u: goto L_0022B7AC;
    case 223u: goto L_0022B7B0;
    case 224u: goto L_0022B7B4;
    case 225u: goto L_0022B7B8;
    case 226u: goto L_0022B7BC;
    case 227u: goto L_0022B7C0;
    case 228u: goto L_0022B7C4;
    case 229u: goto L_0022B7C8;
    case 230u: goto L_0022B7CC;
    case 231u: goto L_0022B7D0;
    case 232u: goto L_0022B7D4;
    case 233u: goto L_0022B7D8;
    case 234u: goto L_0022B7DC;
    case 235u: goto L_0022B7E0;
    case 236u: goto L_0022B7E4;
    case 237u: goto L_0022B7E8;
    case 238u: goto L_0022B7EC;
    case 239u: goto L_0022B7F0;
    case 240u: goto L_0022B7F4;
    case 241u: goto L_0022B7F8;
    case 242u: goto L_0022B7FC;
    case 243u: goto L_0022B800;
    case 244u: goto L_0022B804;
    case 245u: goto L_0022B808;
    case 246u: goto L_0022B80C;
    case 247u: goto L_0022B810;
    case 248u: goto L_0022B814;
    case 249u: goto L_0022B818;
    case 250u: goto L_0022B81C;
    case 251u: goto L_0022B820;
    case 252u: goto L_0022B824;
    case 253u: goto L_0022B828;
    case 254u: goto L_0022B82C;
    case 255u: goto L_0022B830;
    case 256u: goto L_0022B834;
    case 257u: goto L_0022B838;
    case 258u: goto L_0022B83C;
    case 259u: goto L_0022B840;
    case 260u: goto L_0022B844;
    case 261u: goto L_0022B848;
    case 262u: goto L_0022B84C;
    case 263u: goto L_0022B850;
    case 264u: goto L_0022B854;
    case 265u: goto L_0022B858;
    case 266u: goto L_0022B85C;
    case 267u: goto L_0022B860;
    case 268u: goto L_0022B864;
    case 269u: goto L_0022B868;
    case 270u: goto L_0022B86C;
    case 271u: goto L_0022B870;
    case 272u: goto L_0022B874;
    case 273u: goto L_0022B878;
    case 274u: goto L_0022B87C;
    case 275u: goto L_0022B880;
    case 276u: goto L_0022B884;
    case 277u: goto L_0022B888;
    case 278u: goto L_0022B88C;
    case 279u: goto L_0022B890;
    case 280u: goto L_0022B894;
    case 281u: goto L_0022B898;
    case 282u: goto L_0022B89C;
    case 283u: goto L_0022B8A0;
    case 284u: goto L_0022B8AC;
    case 285u: goto L_0022B914;
    case 286u: goto L_0022B974;
    case 287u: goto L_0022B9A0;
    case 288u: goto L_0022BA20;
    case 289u: goto L_0022BA50;
    case 290u: goto L_0022BAD4;
    case 291u: goto L_0022BB00;
    case 292u: goto L_0022BB40;
    case 293u: goto L_0022BB58;
    case 294u: goto L_0022BBD0;
    case 295u: goto L_0022BBF0;
    case 296u: goto L_0022BF60;
    default: bad_entry(c, 0x00228000u); return;
    }
L_00228000:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 276u)));
    c.r[7].d[0] = c.r[6].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    c.r[3].d[0] = c.r[7].d[0] & 12ull;
    c.r[4].d[0] = c.r[3].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[3].d[0] = c.r[4].d[0] & 4ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] & 8ull;  if (t) { goto L_00228030; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0022803C; } }
L_00228030:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[3], c.r[0], c.r[0]);  if (t) { goto L_0022803C; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_0022803C:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 6u)));
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[4], 0u + 1u);  if (t) { goto L_00228298; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_002280A8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00228064; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_00228454; } }
L_00228064:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 245u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[4].d[0];  if (t) { goto L_00228450; } }
    st8((c.r[16].w[0] + 245u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 6u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_0022809C; } }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[4].d[0]; set32(c.r[4], 0u + 16u);  if (t) { goto L_002280A4; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_0022809C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 247u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_002280A8; } }
L_002280A4:
    st8((c.r[16].w[0] + 247u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 1;
L_002280A8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 245u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[4].d[0]; set32(c.r[4], 0u + 80u);  if (t) { goto L_002280C4; } }
    set32(c.r[4], 0u + 16u);
    st8((c.r[16].w[0] + 245u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[16].w[0] + 247u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], 0u + 80u);
    c.budget -= 4;
L_002280C4:
    c.r[5].d[0] = c.r[7].d[0] & 240ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[4], 0u + 64u);  if (t) { goto L_002281C0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[4], 0u + 32u);  if (t) { goto L_0022815C; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[4], 0u + 48u);  if (t) { goto L_002280F8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[4], 0u + 16u);  if (t) { goto L_002280F8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_002280F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 249u)));  if (t) { goto L_00228224; } }
L_002280F8:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 242u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 249u)));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022810Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0049(c, 176u, depth + 1u); else { c.pc = 0x00226010u; return; } if (c.pc != 0x0022810Cu) [[unlikely]] return; }
L_0022810C:
    set32(c.r[5], ld32((c.r[16].w[0] + 64u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 247u)));
    set32(c.r[4], c.r[2].w[0] - c.r[5].w[0]);
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 64u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 247u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 247u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00228450; } }
    st8((c.r[16].w[0] + 247u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00228450; } }
L_0022815C:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 242u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 249u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228170u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0049(c, 176u, depth + 1u); else { c.pc = 0x00226010u; return; } if (c.pc != 0x00228170u) [[unlikely]] return; }
L_00228170:
    set32(c.r[5], ld32((c.r[16].w[0] + 64u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 247u)));
    set32(c.r[4], c.r[2].w[0] - c.r[5].w[0]);
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 64u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 247u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 247u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00228450; } }
    st8((c.r[16].w[0] + 247u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00228450; } }
L_002281C0:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 242u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 249u)));
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002281D4u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0049(c, 176u, depth + 1u); else { c.pc = 0x00226010u; return; } if (c.pc != 0x002281D4u) [[unlikely]] return; }
L_002281D4:
    set32(c.r[5], ld32((c.r[16].w[0] + 64u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 247u)));
    set32(c.r[4], c.r[2].w[0] - c.r[5].w[0]);
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 64u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 247u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 247u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00228450; } }
    st8((c.r[16].w[0] + 247u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00228450; } }
L_00228224:
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[4], c.r[3].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[6], c.r[3].w[0] + 8896u);
    set32(c.r[5], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[7], c.r[8].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 247u)));
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 64u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 247u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 247u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 27;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00228450; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00228450; } }
L_00228298:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 245u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[4].d[0]; set32(c.r[4], 0u + 80u);  if (t) { goto L_002282BC; } }
    set32(c.r[4], 0u + 16u);
    st8((c.r[16].w[0] + 245u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[16].w[0] + 247u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], 0u + 1u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], 0u + 80u);
    c.budget -= 6;
L_002282BC:
    c.r[5].d[0] = c.r[7].d[0] & 240ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[4], 0u + 64u);  if (t) { goto L_00228390; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[4], 0u + 32u);  if (t) { goto L_00228340; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[4], 0u + 48u);  if (t) { goto L_002282F0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[4], 0u + 16u);  if (t) { goto L_002282F0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_002282F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 249u)));  if (t) { goto L_002283E0; } }
L_002282F0:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 242u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 249u)));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228304u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0049(c, 176u, depth + 1u); else { c.pc = 0x00226010u; return; } if (c.pc != 0x00228304u) [[unlikely]] return; }
L_00228304:
    set32(c.r[6], ld32((c.r[16].w[0] + 64u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 247u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], c.r[2].w[0] - c.r[6].w[0]);
    mmi::div(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    st32((c.r[16].w[0] + 64u), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 247u)));
    c.budget -= 13;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], c.r[4].w[0] - 1u);  if (t) { goto L_00228450; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 247u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00228450; } }
L_00228340:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 242u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 249u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228354u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0049(c, 176u, depth + 1u); else { c.pc = 0x00226010u; return; } if (c.pc != 0x00228354u) [[unlikely]] return; }
L_00228354:
    set32(c.r[6], ld32((c.r[16].w[0] + 64u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 247u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], c.r[2].w[0] - c.r[6].w[0]);
    mmi::div(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    st32((c.r[16].w[0] + 64u), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 247u)));
    c.budget -= 13;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], c.r[4].w[0] - 1u);  if (t) { goto L_00228450; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 247u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00228450; } }
L_00228390:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 242u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 249u)));
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002283A4u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0049(c, 176u, depth + 1u); else { c.pc = 0x00226010u; return; } if (c.pc != 0x002283A4u) [[unlikely]] return; }
L_002283A4:
    set32(c.r[6], ld32((c.r[16].w[0] + 64u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 247u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], c.r[2].w[0] - c.r[6].w[0]);
    mmi::div(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    st32((c.r[16].w[0] + 64u), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 247u)));
    c.budget -= 13;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], c.r[4].w[0] - 1u);  if (t) { goto L_00228450; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 247u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00228450; } }
L_002283E0:
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[4], c.r[3].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[6], c.r[3].w[0] + 8896u);
    set32(c.r[5], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[7], c.r[8].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 247u)));
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 64u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 247u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 247u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 27;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00228450; } }
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00228450:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00228454:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00228470:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 250u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[16], c.r[5], c.r[0]);  if (t) { goto L_002288F0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002288F0; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 276u)));
    c.r[7].d[0] = c.r[6].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    c.r[3].d[0] = c.r[7].d[0] & 3ull;
    c.r[4].d[0] = c.r[3].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[3].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] & 2ull;  if (t) { goto L_002284D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_002284DC; } }
L_002284D0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[3], c.r[0], c.r[0]);  if (t) { goto L_002284DC; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_002284DC:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 7u)));
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[4], 0u + 1u);  if (t) { goto L_00228738; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_00228548; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00228504; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_002288F4; } }
L_00228504:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 246u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[4].d[0];  if (t) { goto L_002288F0; } }
    st8((c.r[16].w[0] + 246u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 7u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[17].w[0] + 7u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_0022853C; } }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[4].d[0]; set32(c.r[4], 0u + 16u);  if (t) { goto L_00228544; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_0022853C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 248u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00228548; } }
L_00228544:
    st8((c.r[16].w[0] + 248u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 1;
L_00228548:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 246u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[4].d[0]; set32(c.r[4], 0u + 32u);  if (t) { goto L_00228564; } }
    set32(c.r[4], 0u + 16u);
    st8((c.r[16].w[0] + 246u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[16].w[0] + 248u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], 0u + 32u);
    c.budget -= 4;
L_00228564:
    c.r[5].d[0] = c.r[7].d[0] & 240ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[4], 0u + 48u);  if (t) { goto L_00228660; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[4], 0u + 80u);  if (t) { goto L_002285FC; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[4], 0u + 64u);  if (t) { goto L_00228598; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[4], 0u + 16u);  if (t) { goto L_00228598; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_00228598; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 250u)));  if (t) { goto L_002286C4; } }
L_00228598:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 242u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 250u)));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002285ACu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0049(c, 192u, depth + 1u); else { c.pc = 0x00226270u; return; } if (c.pc != 0x002285ACu) [[unlikely]] return; }
L_002285AC:
    set32(c.r[5], ld32((c.r[16].w[0] + 68u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 248u)));
    set32(c.r[4], c.r[2].w[0] - c.r[5].w[0]);
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 248u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 248u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_002288F0; } }
    st8((c.r[16].w[0] + 248u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 7u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002288F0; } }
L_002285FC:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 242u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 250u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228610u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0049(c, 192u, depth + 1u); else { c.pc = 0x00226270u; return; } if (c.pc != 0x00228610u) [[unlikely]] return; }
L_00228610:
    set32(c.r[5], ld32((c.r[16].w[0] + 68u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 248u)));
    set32(c.r[4], c.r[2].w[0] - c.r[5].w[0]);
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 248u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 248u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_002288F0; } }
    st8((c.r[16].w[0] + 248u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 7u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002288F0; } }
L_00228660:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 242u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 250u)));
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228674u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0049(c, 192u, depth + 1u); else { c.pc = 0x00226270u; return; } if (c.pc != 0x00228674u) [[unlikely]] return; }
L_00228674:
    set32(c.r[5], ld32((c.r[16].w[0] + 68u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 248u)));
    set32(c.r[4], c.r[2].w[0] - c.r[5].w[0]);
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 248u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 248u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_002288F0; } }
    st8((c.r[16].w[0] + 248u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 7u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002288F0; } }
L_002286C4:
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[4], c.r[3].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[6], c.r[3].w[0] + 8928u);
    set32(c.r[5], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[7], c.r[8].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 248u)));
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 248u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 248u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 27;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002288F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 7u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002288F0; } }
L_00228738:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 246u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[4].d[0]; set32(c.r[4], 0u + 32u);  if (t) { goto L_0022875C; } }
    set32(c.r[4], 0u + 16u);
    st8((c.r[16].w[0] + 246u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[16].w[0] + 248u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], 0u + 1u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], 0u + 32u);
    c.budget -= 6;
L_0022875C:
    c.r[5].d[0] = c.r[7].d[0] & 240ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[4], 0u + 48u);  if (t) { goto L_00228830; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[4], 0u + 80u);  if (t) { goto L_002287E0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[4], 0u + 64u);  if (t) { goto L_00228790; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[4], 0u + 16u);  if (t) { goto L_00228790; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_00228790; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 250u)));  if (t) { goto L_00228880; } }
L_00228790:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 242u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 250u)));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002287A4u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0049(c, 192u, depth + 1u); else { c.pc = 0x00226270u; return; } if (c.pc != 0x002287A4u) [[unlikely]] return; }
L_002287A4:
    set32(c.r[6], ld32((c.r[16].w[0] + 68u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 248u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], c.r[2].w[0] - c.r[6].w[0]);
    mmi::div(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    st32((c.r[16].w[0] + 68u), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 248u)));
    c.budget -= 13;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], c.r[4].w[0] - 1u);  if (t) { goto L_002288F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 248u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002288F0; } }
L_002287E0:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 242u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 250u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002287F4u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0049(c, 192u, depth + 1u); else { c.pc = 0x00226270u; return; } if (c.pc != 0x002287F4u) [[unlikely]] return; }
L_002287F4:
    set32(c.r[6], ld32((c.r[16].w[0] + 68u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 248u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], c.r[2].w[0] - c.r[6].w[0]);
    mmi::div(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    st32((c.r[16].w[0] + 68u), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 248u)));
    c.budget -= 13;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], c.r[4].w[0] - 1u);  if (t) { goto L_002288F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 248u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002288F0; } }
L_00228830:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 242u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 250u)));
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228844u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0049(c, 192u, depth + 1u); else { c.pc = 0x00226270u; return; } if (c.pc != 0x00228844u) [[unlikely]] return; }
L_00228844:
    set32(c.r[6], ld32((c.r[16].w[0] + 68u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 248u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], c.r[2].w[0] - c.r[6].w[0]);
    mmi::div(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    st32((c.r[16].w[0] + 68u), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 248u)));
    c.budget -= 13;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], c.r[4].w[0] - 1u);  if (t) { goto L_002288F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 248u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002288F0; } }
L_00228880:
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[4], c.r[3].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[6], c.r[3].w[0] + 8928u);
    set32(c.r[5], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[7], c.r[8].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 248u)));
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 248u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 248u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 27;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002288F0; } }
    st8((c.r[17].w[0] + 7u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_002288F0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002288F4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00228910:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 3u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228930u); mmi::paddub(c.r[6], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x00228930u) [[unlikely]] return; }
L_00228930:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00228978; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[5], 0u + 19u);
    set32(c.r[4], 0u + 14u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00230000u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[2].w[0] + 28u), c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[4], c.r[3].w[0] - 30320u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00230000u);
    set32(c.r[3], c.r[3].w[0] - 27568u);
    st32((c.r[2].w[0] + 24u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 16;
L_00228978:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00228990:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] + 9472u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00228000u < 16384u) { entry = entries_004A[(t - 0x00228000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002289B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], 0u + 7u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 8386u)));
    c.budget -= 11;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[10], c.r[4].w[0] + 320u);  if (t) { goto L_002289E8; } }
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 11u);  if (t) { goto L_002289FC; } }
L_002289E8:
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 10u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00228A84; } }
    set32(c.r[3], 0u + 11u);
    c.budget -= 1;
L_002289FC:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[3], c.r[5].w[0] - 3u);  if (t) { goto L_00228A18; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 10u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00228A84; } }
    set32(c.r[3], c.r[5].w[0] - 3u);
    c.budget -= 1;
L_00228A18:
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u + 6u);  if (t) { goto L_00228A3C; } }
    set32(c.r[3], 0u + 3u);
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00228A84; } }
    set32(c.r[3], 0u + 6u);
    c.budget -= 1;
L_00228A3C:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[3], c.r[5].w[0] - 9u);  if (t) { goto L_00228A5C; } }
    set32(c.r[3], 0u + 4u);
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00228A84; } }
    set32(c.r[3], c.r[5].w[0] - 9u);
    c.budget -= 1;
L_00228A5C:
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00228A7C; } }
    set32(c.r[3], 0u + 5u);
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00228A84; } }
L_00228A7C:
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 10u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00228A84:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[9], c.r[3].w[0] + 9488u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[8], c.r[3].w[0] + 9488u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[7], c.r[3].w[0] + 9488u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[6], c.r[3].w[0] + 9488u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[5], c.r[3].w[0] + 9488u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] + 9488u);
    set32(c.r[25], c.r[15].w[0] + 9488u);
    mmi::paddub(c.r[11], c.r[0], c.r[0]);
    mmi::paddub(c.r[12], c.r[10], c.r[0]);
    mmi::paddub(c.r[13], c.r[10], c.r[0]);
    c.budget -= 19;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[14], c.r[10], c.r[0]);  if (t) { goto L_00228BB8; } }
L_00228AD0:
    c.r[31].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[11], c.r[11].w[0] + 1u);
    c.r[11].d[0] = c.r[11].d[0] << 56;
    set32(c.r[24], c.r[10].w[0] + c.r[15].w[0]);
    set32(c.r[16], c.r[31].w[0] << 1);
    set32(c.r[16], c.r[16].w[0] + c.r[31].w[0]);
    set32(c.r[16], c.r[16].w[0] << 3);
    set32(c.r[16], c.r[9].w[0] + c.r[16].w[0]);
    c.f[0] = ld32((c.r[16].w[0]));
    c.r[11].d[0] = static_cast<std::uint64_t>(c.r[11].sd[0] >> 56);
    st32((c.r[12].w[0] + 64u), c.f[0]);
    c.r[31].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[16], c.r[31].w[0] << 1);
    set32(c.r[16], c.r[16].w[0] + c.r[31].w[0]);
    set32(c.r[16], c.r[16].w[0] << 3);
    set32(c.r[16], c.r[8].w[0] + c.r[16].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    st32((c.r[12].w[0] + 68u), c.f[0]);
    c.r[31].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[16], c.r[31].w[0] << 1);
    set32(c.r[16], c.r[16].w[0] + c.r[31].w[0]);
    set32(c.r[16], c.r[16].w[0] << 3);
    set32(c.r[16], c.r[7].w[0] + c.r[16].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    st32((c.r[12].w[0] + 72u), c.f[0]);
    c.r[31].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[12], c.r[12].w[0] + 16u);
    set32(c.r[16], c.r[31].w[0] << 1);
    set32(c.r[16], c.r[16].w[0] + c.r[31].w[0]);
    set32(c.r[16], c.r[16].w[0] << 3);
    set32(c.r[16], c.r[6].w[0] + c.r[16].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    st32((c.r[13].w[0] + 192u), c.f[0]);
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[13], c.r[13].w[0] + 4u);
    set32(c.r[31], c.r[16].w[0] << 1);
    set32(c.r[31], c.r[31].w[0] + c.r[16].w[0]);
    set32(c.r[31], c.r[31].w[0] << 3);
    set32(c.r[31], c.r[5].w[0] + c.r[31].w[0]);
    c.r[31].sd[0] = static_cast<std::int16_t>(ld16((c.r[31].w[0] + 16u)));
    mmi::mult(c, 0, c.r[15].w[0], c.r[31].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    st16((c.r[14].w[0] + 224u), static_cast<std::uint16_t>(c.r[15].w[0]));
    c.r[31].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[15], c.r[31].w[0] << 1);
    set32(c.r[15], c.r[15].w[0] + c.r[31].w[0]);
    set32(c.r[15], c.r[15].w[0] << 3);
    set32(c.r[15], c.r[3].w[0] + c.r[15].w[0]);
    c.r[15].sd[0] = static_cast<std::int16_t>(ld16((c.r[15].w[0] + 18u)));
    st16((c.r[14].w[0] + 240u), static_cast<std::uint16_t>(c.r[15].w[0]));
    c.r[31].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[14], c.r[14].w[0] + 2u);
    set32(c.r[15], c.r[31].w[0] << 1);
    set32(c.r[15], c.r[15].w[0] + c.r[31].w[0]);
    set32(c.r[15], c.r[15].w[0] << 3);
    set32(c.r[15], c.r[25].w[0] + c.r[15].w[0]);
    c.r[15].d[0] = ld8((c.r[15].w[0] + 20u));
    st8((c.r[24].w[0] + 256u), static_cast<std::uint8_t>(c.r[15].w[0]));
    c.budget -= 58;
L_00228BB8:
    c.r[15].d[0] = c.r[11].d[0] << 56;
    c.r[15].d[0] = static_cast<std::uint64_t>(c.r[15].sd[0] >> 56);
    c.r[24].d[0] = c.r[15].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[24].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00228AD0u | kUnwind; return; } goto L_00228AD0; } }
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00228BE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 24u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 28u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[17].w[0] + 320u);  if (t) { goto L_00228C1C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00228C1C:
    c.f[1] = ld32((c.r[4].w[0] + 116u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00228C70; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] + 9632u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00228C5Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00228C5Cu) [[unlikely]] return; }
L_00228C5C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 760u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00228C70; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00228C70:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00228C90:
    c.r[10].sd[0] = static_cast<std::int32_t>(0x3F730000u);
    c.r[13].d[0] = c.r[10].d[0] | 13107ull;
    c.r[10].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[10].d[0] = c.r[10].d[0] | 52429ull;
    c.f[4] = c.r[10].w[0];
    set32(c.r[11], 0u + 1u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x3BA30000u);
    c.r[10].d[0] = c.r[10].d[0] | 55053ull;
    c.f[3] = c.r[10].w[0];
    set32(c.r[4], 0u + 3u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x3CA30000u);
    c.r[10].d[0] = c.r[10].d[0] | 55053ull;
    c.f[5] = c.r[10].w[0];
    set32(c.r[3], 0u + 20u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x3B030000u);
    c.r[10].d[0] = c.r[10].d[0] | 4710ull;
    c.f[2] = c.r[10].w[0];
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.r[10].sd[0] = static_cast<std::int32_t>(0xBDCC0000u);
    c.r[10].d[0] = c.r[10].d[0] | 52429ull;
    c.f[1] = c.r[10].w[0];
    mmi::paddub(c.r[7], c.r[5], c.r[0]);
    mmi::paddub(c.r[8], c.r[5], c.r[0]);
    mmi::paddub(c.r[9], c.r[5], c.r[0]);
    c.budget -= 26;
    { const bool t = 0ull == 0ull; c.r[12].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_00228DD8; } }
L_00228CF8:
    c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 224u)));
    c.budget -= 3;
    { const bool t = c.r[10].d[0] == 0ull;  if (t) { goto L_00228D18; } }
    set32(c.r[10], c.r[10].w[0] - 1u);
    st16((c.r[7].w[0] + 224u), static_cast<std::uint16_t>(c.r[10].w[0]));
    set32(c.r[10], c.r[5].w[0] + c.r[15].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[10].w[0] + 264u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00228DC0; } }
L_00228D18:
    c.r[14].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 240u)));
    set32(c.r[10], c.r[14].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[14].d[0] != 0ull; st16((c.r[7].w[0] + 240u), static_cast<std::uint16_t>(c.r[10].w[0]));  if (t) { goto L_00228D4C; } }
    st16((c.r[7].w[0] + 224u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[10], c.r[5].w[0] + c.r[15].w[0]);
    st16((c.r[7].w[0] + 240u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[10].w[0] + 264u), static_cast<std::uint8_t>(0u));
    st32((c.r[8].w[0] + 64u), 0u);
    st32((c.r[8].w[0] + 68u), c.r[13].w[0]);
    st32((c.r[8].w[0] + 72u), 0u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[9].w[0] + 192u), c.r[12].w[0]);  if (t) { goto L_00228DC0; } }
L_00228D4C:
    set32(c.r[10], c.r[5].w[0] + c.r[15].w[0]);
    st8((c.r[10].w[0] + 264u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 240u)));
    c.r[1].d[0] = c.r[10].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00228D8C; } }
    c.f[0] = ld32((c.r[8].w[0] + 64u));
    c.f[0] = fp::add(c.f[0], c.f[4]);
    st32((c.r[8].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[8].w[0] + 68u));
    c.f[0] = fp::add(c.f[0], c.f[3]);
    st32((c.r[8].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[8].w[0] + 72u));
    c.f[0] = fp::add(c.f[0], c.f[4]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[8].w[0] + 72u), c.f[0]);  if (t) { goto L_00228DC0; } }
L_00228D8C:
    c.f[0] = ld32((c.r[8].w[0] + 64u));
    c.f[0] = fp::add(c.f[0], c.f[5]);
    st32((c.r[8].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[8].w[0] + 68u));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    st32((c.r[8].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[8].w[0] + 72u));
    c.f[0] = fp::add(c.f[0], c.f[5]);
    st32((c.r[8].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[9].w[0] + 192u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[9].w[0] + 192u), c.f[0]);
    c.budget -= 13;
L_00228DC0:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[6].d[0] = c.r[6].d[0] << 56;
    set32(c.r[7], c.r[7].w[0] + 2u);
    set32(c.r[8], c.r[8].w[0] + 16u);
    set32(c.r[9], c.r[9].w[0] + 4u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.budget -= 6;
L_00228DD8:
    c.r[15].d[0] = c.r[6].d[0] << 56;
    c.r[15].d[0] = static_cast<std::uint64_t>(c.r[15].sd[0] >> 56);
    c.r[10].d[0] = c.r[15].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[10].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00228CF8u | kUnwind; return; } goto L_00228CF8; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00228E00:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[12].d[0] = c.r[8].d[0] | 52429ull;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x3F730000u);
    c.r[11].d[0] = c.r[8].d[0] | 13107ull;
    c.r[8].sd[0] = static_cast<std::int32_t>(0xBE4C0000u);
    c.r[8].d[0] = c.r[8].d[0] | 52429ull;
    c.f[3] = c.r[8].w[0];
    set32(c.r[13], 0u + 10u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[8].d[0] = c.r[8].d[0] | 52428ull;
    c.f[2] = c.r[8].w[0];
    set32(c.r[9], 0u + 1u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[8].d[0] = c.r[8].d[0] | 55046ull;
    c.f[1] = c.r[8].w[0];
    mmi::paddub(c.r[3], c.r[0], c.r[0]);
    mmi::paddub(c.r[4], c.r[5], c.r[0]);
    mmi::paddub(c.r[6], c.r[5], c.r[0]);
    mmi::paddub(c.r[7], c.r[5], c.r[0]);
    c.budget -= 21;
    { const bool t = 0ull == 0ull; c.r[10].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_00228F08; } }
    c.r[8].d[0] = c.r[15].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 1;
L_00228E58:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { goto L_00228E6C; } }
    set32(c.r[8], c.r[5].w[0] + c.r[15].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[8].w[0] + 264u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00228EF0; } }
L_00228E6C:
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 224u)));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_00228E8C; } }
    set32(c.r[8], c.r[8].w[0] - 1u);
    st16((c.r[4].w[0] + 224u), static_cast<std::uint16_t>(c.r[8].w[0]));
    set32(c.r[8], c.r[5].w[0] + c.r[15].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[8].w[0] + 264u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00228EF0; } }
L_00228E8C:
    c.r[14].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 240u)));
    set32(c.r[8], c.r[14].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[14].d[0] != 0ull; st16((c.r[4].w[0] + 240u), static_cast<std::uint16_t>(c.r[8].w[0]));  if (t) { goto L_00228EB0; } }
    st16((c.r[4].w[0] + 240u), static_cast<std::uint16_t>(c.r[13].w[0]));
    st32((c.r[6].w[0] + 64u), c.r[12].w[0]);
    st32((c.r[6].w[0] + 68u), c.r[11].w[0]);
    st32((c.r[6].w[0] + 72u), c.r[12].w[0]);
    st32((c.r[7].w[0] + 192u), c.r[10].w[0]);
    c.budget -= 5;
L_00228EB0:
    set32(c.r[8], c.r[5].w[0] + c.r[15].w[0]);
    st8((c.r[8].w[0] + 264u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 240u)));
    c.r[1].d[0] = c.r[8].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00228ED8; } }
    c.f[0] = ld32((c.r[7].w[0] + 192u));
    c.f[0] = fp::add(c.f[0], c.f[3]);
    st32((c.r[7].w[0] + 192u), c.f[0]);
    c.budget -= 4;
L_00228ED8:
    c.f[0] = ld32((c.r[6].w[0] + 64u));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    st32((c.r[6].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 68u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[6].w[0] + 68u), c.f[0]);
    c.budget -= 6;
L_00228EF0:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[3].d[0] = c.r[3].d[0] << 56;
    set32(c.r[4], c.r[4].w[0] + 2u);
    set32(c.r[6], c.r[6].w[0] + 16u);
    set32(c.r[7], c.r[7].w[0] + 4u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 6;
L_00228F08:
    c.r[15].d[0] = c.r[3].d[0] << 56;
    c.r[15].d[0] = static_cast<std::uint64_t>(c.r[15].sd[0] >> 56);
    c.r[8].d[0] = c.r[15].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != 0ull; c.r[8].d[0] = c.r[15].sd[0] < 2ll ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00228E58u | kUnwind; return; } goto L_00228E58; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00228F30:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x3E990000u);
    c.r[12].d[0] = c.r[8].d[0] | 39322ull;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.r[11].d[0] = c.r[8].d[0] | 26214ull;
    c.r[8].sd[0] = static_cast<std::int32_t>(0xBE4C0000u);
    c.r[8].d[0] = c.r[8].d[0] | 52429ull;
    c.f[2] = c.r[8].w[0];
    set32(c.r[13], 0u + 10u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x3DE10000u);
    c.r[8].d[0] = c.r[8].d[0] | 18349ull;
    c.f[3] = c.r[8].w[0];
    set32(c.r[9], 0u + 1u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x3CA30000u);
    c.r[8].d[0] = c.r[8].d[0] | 55053ull;
    c.f[1] = c.r[8].w[0];
    mmi::paddub(c.r[3], c.r[0], c.r[0]);
    mmi::paddub(c.r[4], c.r[5], c.r[0]);
    mmi::paddub(c.r[6], c.r[5], c.r[0]);
    mmi::paddub(c.r[7], c.r[5], c.r[0]);
    c.budget -= 21;
    { const bool t = 0ull == 0ull; c.r[10].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_00229048; } }
    c.r[8].d[0] = c.r[15].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 1;
L_00228F88:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { goto L_00228F9C; } }
    set32(c.r[8], c.r[5].w[0] + c.r[15].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[8].w[0] + 264u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00229030; } }
L_00228F9C:
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 224u)));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_00228FBC; } }
    set32(c.r[8], c.r[8].w[0] - 1u);
    st16((c.r[4].w[0] + 224u), static_cast<std::uint16_t>(c.r[8].w[0]));
    set32(c.r[8], c.r[5].w[0] + c.r[15].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[8].w[0] + 264u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00229030; } }
L_00228FBC:
    c.r[14].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 240u)));
    set32(c.r[8], c.r[14].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[14].d[0] != 0ull; st16((c.r[4].w[0] + 240u), static_cast<std::uint16_t>(c.r[8].w[0]));  if (t) { goto L_00228FE0; } }
    st16((c.r[4].w[0] + 240u), static_cast<std::uint16_t>(c.r[13].w[0]));
    st32((c.r[6].w[0] + 64u), c.r[12].w[0]);
    st32((c.r[6].w[0] + 68u), c.r[11].w[0]);
    st32((c.r[6].w[0] + 72u), c.r[12].w[0]);
    st32((c.r[7].w[0] + 192u), c.r[10].w[0]);
    c.budget -= 5;
L_00228FE0:
    set32(c.r[8], c.r[5].w[0] + c.r[15].w[0]);
    st8((c.r[8].w[0] + 264u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 240u)));
    c.r[1].d[0] = c.r[8].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00229008; } }
    c.f[0] = ld32((c.r[7].w[0] + 192u));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    st32((c.r[7].w[0] + 192u), c.f[0]);
    c.budget -= 4;
L_00229008:
    c.f[0] = ld32((c.r[6].w[0] + 64u));
    c.f[0] = fp::add(c.f[0], c.f[3]);
    st32((c.r[6].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 68u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[6].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 72u));
    c.f[0] = fp::add(c.f[0], c.f[3]);
    st32((c.r[6].w[0] + 72u), c.f[0]);
    c.budget -= 10;
L_00229030:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[3].d[0] = c.r[3].d[0] << 56;
    set32(c.r[4], c.r[4].w[0] + 2u);
    set32(c.r[6], c.r[6].w[0] + 16u);
    set32(c.r[7], c.r[7].w[0] + 4u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 6;
L_00229048:
    c.r[15].d[0] = c.r[3].d[0] << 56;
    c.r[15].d[0] = static_cast<std::uint64_t>(c.r[15].sd[0] >> 56);
    c.r[8].d[0] = c.r[15].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != 0ull; c.r[8].d[0] = c.r[15].sd[0] < 2ll ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00228F88u | kUnwind; return; } goto L_00228F88; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00229070:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x3F190000u);
    c.r[12].d[0] = c.r[8].d[0] | 39322ull;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[11].d[0] = c.r[8].d[0] | 52429ull;
    c.r[8].sd[0] = static_cast<std::int32_t>(0xBE4C0000u);
    c.r[8].d[0] = c.r[8].d[0] | 52429ull;
    c.f[2] = c.r[8].w[0];
    set32(c.r[13], 0u + 10u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x3D750000u);
    c.r[8].d[0] = c.r[8].d[0] | 49808ull;
    c.f[3] = c.r[8].w[0];
    set32(c.r[9], 0u + 1u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x3CF50000u);
    c.r[8].d[0] = c.r[8].d[0] | 49808ull;
    c.f[1] = c.r[8].w[0];
    mmi::paddub(c.r[3], c.r[0], c.r[0]);
    mmi::paddub(c.r[4], c.r[5], c.r[0]);
    mmi::paddub(c.r[6], c.r[5], c.r[0]);
    mmi::paddub(c.r[7], c.r[5], c.r[0]);
    c.budget -= 21;
    { const bool t = 0ull == 0ull; c.r[10].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_00229188; } }
    c.r[8].d[0] = c.r[15].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 1;
L_002290C8:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { goto L_002290DC; } }
    set32(c.r[8], c.r[5].w[0] + c.r[15].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[8].w[0] + 264u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00229170; } }
L_002290DC:
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 224u)));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_002290FC; } }
    set32(c.r[8], c.r[8].w[0] - 1u);
    st16((c.r[4].w[0] + 224u), static_cast<std::uint16_t>(c.r[8].w[0]));
    set32(c.r[8], c.r[5].w[0] + c.r[15].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[8].w[0] + 264u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00229170; } }
L_002290FC:
    c.r[14].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 240u)));
    set32(c.r[8], c.r[14].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[14].d[0] != 0ull; st16((c.r[4].w[0] + 240u), static_cast<std::uint16_t>(c.r[8].w[0]));  if (t) { goto L_00229120; } }
    st16((c.r[4].w[0] + 240u), static_cast<std::uint16_t>(c.r[13].w[0]));
    st32((c.r[6].w[0] + 64u), c.r[12].w[0]);
    st32((c.r[6].w[0] + 68u), c.r[11].w[0]);
    st32((c.r[6].w[0] + 72u), c.r[12].w[0]);
    st32((c.r[7].w[0] + 192u), c.r[10].w[0]);
    c.budget -= 5;
L_00229120:
    set32(c.r[8], c.r[5].w[0] + c.r[15].w[0]);
    st8((c.r[8].w[0] + 264u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 240u)));
    c.r[1].d[0] = c.r[8].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00229148; } }
    c.f[0] = ld32((c.r[7].w[0] + 192u));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    st32((c.r[7].w[0] + 192u), c.f[0]);
    c.budget -= 4;
L_00229148:
    c.f[0] = ld32((c.r[6].w[0] + 64u));
    c.f[0] = fp::add(c.f[0], c.f[3]);
    st32((c.r[6].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 68u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[6].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 72u));
    c.f[0] = fp::add(c.f[0], c.f[3]);
    st32((c.r[6].w[0] + 72u), c.f[0]);
    c.budget -= 10;
L_00229170:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[3].d[0] = c.r[3].d[0] << 56;
    set32(c.r[4], c.r[4].w[0] + 2u);
    set32(c.r[6], c.r[6].w[0] + 16u);
    set32(c.r[7], c.r[7].w[0] + 4u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 6;
L_00229188:
    c.r[15].d[0] = c.r[3].d[0] << 56;
    c.r[15].d[0] = static_cast<std::uint64_t>(c.r[15].sd[0] >> 56);
    c.r[8].d[0] = c.r[15].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != 0ull; c.r[8].d[0] = c.r[15].sd[0] < 2ll ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002290C8u | kUnwind; return; } goto L_002290C8; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002291B0:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x3F190000u);
    c.r[12].d[0] = c.r[8].d[0] | 39322ull;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.r[11].d[0] = c.r[8].d[0] | 26214ull;
    c.r[8].sd[0] = static_cast<std::int32_t>(0xBE4C0000u);
    c.r[8].d[0] = c.r[8].d[0] | 52429ull;
    c.f[2] = c.r[8].w[0];
    set32(c.r[13], 0u + 10u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x3D750000u);
    c.r[8].d[0] = c.r[8].d[0] | 49808ull;
    c.f[3] = c.r[8].w[0];
    set32(c.r[9], 0u + 1u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x3CA30000u);
    c.r[8].d[0] = c.r[8].d[0] | 55053ull;
    c.f[1] = c.r[8].w[0];
    mmi::paddub(c.r[3], c.r[0], c.r[0]);
    mmi::paddub(c.r[4], c.r[5], c.r[0]);
    mmi::paddub(c.r[6], c.r[5], c.r[0]);
    mmi::paddub(c.r[7], c.r[5], c.r[0]);
    c.budget -= 21;
    { const bool t = 0ull == 0ull; c.r[10].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_002292C8; } }
    c.r[8].d[0] = c.r[15].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 1;
L_00229208:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { goto L_0022921C; } }
    set32(c.r[8], c.r[5].w[0] + c.r[15].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[8].w[0] + 264u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002292B0; } }
L_0022921C:
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 224u)));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_0022923C; } }
    set32(c.r[8], c.r[8].w[0] - 1u);
    st16((c.r[4].w[0] + 224u), static_cast<std::uint16_t>(c.r[8].w[0]));
    set32(c.r[8], c.r[5].w[0] + c.r[15].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[8].w[0] + 264u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002292B0; } }
L_0022923C:
    c.r[14].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 240u)));
    set32(c.r[8], c.r[14].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[14].d[0] != 0ull; st16((c.r[4].w[0] + 240u), static_cast<std::uint16_t>(c.r[8].w[0]));  if (t) { goto L_00229260; } }
    st16((c.r[4].w[0] + 240u), static_cast<std::uint16_t>(c.r[13].w[0]));
    st32((c.r[6].w[0] + 64u), c.r[12].w[0]);
    st32((c.r[6].w[0] + 68u), c.r[11].w[0]);
    st32((c.r[6].w[0] + 72u), c.r[12].w[0]);
    st32((c.r[7].w[0] + 192u), c.r[10].w[0]);
    c.budget -= 5;
L_00229260:
    set32(c.r[8], c.r[5].w[0] + c.r[15].w[0]);
    st8((c.r[8].w[0] + 264u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 240u)));
    c.r[1].d[0] = c.r[8].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00229288; } }
    c.f[0] = ld32((c.r[7].w[0] + 192u));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    st32((c.r[7].w[0] + 192u), c.f[0]);
    c.budget -= 4;
L_00229288:
    c.f[0] = ld32((c.r[6].w[0] + 64u));
    c.f[0] = fp::add(c.f[0], c.f[3]);
    st32((c.r[6].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 68u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[6].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 72u));
    c.f[0] = fp::add(c.f[0], c.f[3]);
    st32((c.r[6].w[0] + 72u), c.f[0]);
    c.budget -= 10;
L_002292B0:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[3].d[0] = c.r[3].d[0] << 56;
    set32(c.r[4], c.r[4].w[0] + 2u);
    set32(c.r[6], c.r[6].w[0] + 16u);
    set32(c.r[7], c.r[7].w[0] + 4u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 6;
L_002292C8:
    c.r[15].d[0] = c.r[3].d[0] << 56;
    c.r[15].d[0] = static_cast<std::uint64_t>(c.r[15].sd[0] >> 56);
    c.r[8].d[0] = c.r[15].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != 0ull; c.r[8].d[0] = c.r[15].sd[0] < 2ll ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00229208u | kUnwind; return; } goto L_00229208; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002292F0:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x3F190000u);
    c.r[12].d[0] = c.r[8].d[0] | 39322ull;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x3F730000u);
    c.r[11].d[0] = c.r[8].d[0] | 13107ull;
    c.r[8].sd[0] = static_cast<std::int32_t>(0xBE4C0000u);
    c.r[8].d[0] = c.r[8].d[0] | 52429ull;
    c.f[2] = c.r[8].w[0];
    set32(c.r[13], 0u + 10u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x3DB80000u);
    c.r[8].d[0] = c.r[8].d[0] | 20971ull;
    c.f[3] = c.r[8].w[0];
    set32(c.r[9], 0u + 1u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x3CCC0000u);
    c.r[8].d[0] = c.r[8].d[0] | 52432ull;
    c.f[1] = c.r[8].w[0];
    mmi::paddub(c.r[3], c.r[0], c.r[0]);
    mmi::paddub(c.r[4], c.r[5], c.r[0]);
    mmi::paddub(c.r[6], c.r[5], c.r[0]);
    mmi::paddub(c.r[7], c.r[5], c.r[0]);
    c.budget -= 21;
    { const bool t = 0ull == 0ull; c.r[10].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_00229408; } }
    c.r[8].d[0] = c.r[15].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 1;
L_00229348:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { goto L_0022935C; } }
    set32(c.r[8], c.r[5].w[0] + c.r[15].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[8].w[0] + 264u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002293F0; } }
L_0022935C:
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 224u)));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_0022937C; } }
    set32(c.r[8], c.r[8].w[0] - 1u);
    st16((c.r[4].w[0] + 224u), static_cast<std::uint16_t>(c.r[8].w[0]));
    set32(c.r[8], c.r[5].w[0] + c.r[15].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[8].w[0] + 264u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002293F0; } }
L_0022937C:
    c.r[14].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 240u)));
    set32(c.r[8], c.r[14].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[14].d[0] != 0ull; st16((c.r[4].w[0] + 240u), static_cast<std::uint16_t>(c.r[8].w[0]));  if (t) { goto L_002293A0; } }
    st16((c.r[4].w[0] + 240u), static_cast<std::uint16_t>(c.r[13].w[0]));
    st32((c.r[6].w[0] + 64u), c.r[12].w[0]);
    st32((c.r[6].w[0] + 68u), c.r[11].w[0]);
    st32((c.r[6].w[0] + 72u), c.r[12].w[0]);
    st32((c.r[7].w[0] + 192u), c.r[10].w[0]);
    c.budget -= 5;
L_002293A0:
    set32(c.r[8], c.r[5].w[0] + c.r[15].w[0]);
    st8((c.r[8].w[0] + 264u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 240u)));
    c.r[1].d[0] = c.r[8].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002293C8; } }
    c.f[0] = ld32((c.r[7].w[0] + 192u));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    st32((c.r[7].w[0] + 192u), c.f[0]);
    c.budget -= 4;
L_002293C8:
    c.f[0] = ld32((c.r[6].w[0] + 64u));
    c.f[0] = fp::add(c.f[0], c.f[3]);
    st32((c.r[6].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 68u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[6].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 72u));
    c.f[0] = fp::add(c.f[0], c.f[3]);
    st32((c.r[6].w[0] + 72u), c.f[0]);
    c.budget -= 10;
L_002293F0:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[3].d[0] = c.r[3].d[0] << 56;
    set32(c.r[4], c.r[4].w[0] + 2u);
    set32(c.r[6], c.r[6].w[0] + 16u);
    set32(c.r[7], c.r[7].w[0] + 4u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 6;
L_00229408:
    c.r[15].d[0] = c.r[3].d[0] << 56;
    c.r[15].d[0] = static_cast<std::uint64_t>(c.r[15].sd[0] >> 56);
    c.r[8].d[0] = c.r[15].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != 0ull; c.r[8].d[0] = c.r[15].sd[0] < 2ll ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00229348u | kUnwind; return; } goto L_00229348; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00229430:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00229440:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_00229450:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[22], ld32((c.r[4].w[0] + 28u)));
    mmi::paddub(c.r[21], c.r[4], c.r[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[2], 0u + 3u);
    set32(c.r[17], ld32((c.r[22].w[0] + 28u)));
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[16], c.r[21].w[0] + 320u);  if (t) { goto L_002294F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229498u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x00229498u) [[unlikely]] return; }
L_00229498:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002294A0u); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 330u, depth + 1u); else { c.pc = 0x0013BF40u; return; } if (c.pc != 0x002294A0u) [[unlikely]] return; }
L_002294A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002294A8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002294A8u) [[unlikely]] return; }
L_002294A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002294B0u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002294B0u) [[unlikely]] return; }
L_002294B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002294B8u); set32(c.r[4], c.r[22].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 17u, depth + 1u); else { c.pc = 0x0013C880u; return; } if (c.pc != 0x002294B8u) [[unlikely]] return; }
L_002294B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002294C0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 331u, depth + 1u); else { c.pc = 0x0013BF80u; return; } if (c.pc != 0x002294C0u) [[unlikely]] return; }
L_002294C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x400F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 23593ull;
    c.f[13] = c.r[2].w[0];
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E750000u);
    c.r[2].d[0] = c.r[2].d[0] | 49807ull;
    c.f[14] = c.r[2].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002294E4u);  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002294E4u) [[unlikely]] return; }
L_002294E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002294ECu); set32(c.r[4], c.r[21].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002294ECu) [[unlikely]] return; }
L_002294EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[29].w[0] + 144u);  if (t) { goto L_00229530; } }
L_002294F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002294FCu);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002294FCu) [[unlikely]] return; }
L_002294FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229504u); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 330u, depth + 1u); else { c.pc = 0x0013BF40u; return; } if (c.pc != 0x00229504u) [[unlikely]] return; }
L_00229504:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022950Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0022950Cu) [[unlikely]] return; }
L_0022950C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229514u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x00229514u) [[unlikely]] return; }
L_00229514:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022951Cu); set32(c.r[4], c.r[22].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 17u, depth + 1u); else { c.pc = 0x0013C880u; return; } if (c.pc != 0x0022951Cu) [[unlikely]] return; }
L_0022951C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229524u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 331u, depth + 1u); else { c.pc = 0x0013BF80u; return; } if (c.pc != 0x00229524u) [[unlikely]] return; }
L_00229524:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022952Cu); set32(c.r[4], c.r[21].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0022952Cu) [[unlikely]] return; }
L_0022952C:
    set32(c.r[2], c.r[29].w[0] + 144u);
    c.budget -= 1;
L_00229530:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20400u), c.r[2].w[0]);
    set32(c.r[2], c.r[28].w[0] - 29556u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], 0u + 2u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022954Cu); st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001E(c, 201u, depth + 1u); else { c.pc = 0x0017BBC0u; return; } if (c.pc != 0x0022954Cu) [[unlikely]] return; }
L_0022954C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[2].w[0]);
    set32(c.r[4], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[4].w[0]);
    set32(c.r[3], 0u + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20352u), 0u);
    set32(c.r[3], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 10u)));
    c.budget -= 16;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; mmi::paddub(c.r[20], c.r[0], c.r[0]);  if (t) { goto L_002297A8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[17], c.r[0], c.r[0]);  if (t) { goto L_002295A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);  if (t) { goto L_00229964; } }
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 1;
L_002295A0:
    mmi::paddub(c.r[18], c.r[16], c.r[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[19], c.r[16], c.r[0]);  if (t) { goto L_00229788; } }
    set32(c.r[3], c.r[16].w[0] + c.r[20].w[0]);
    c.budget -= 1;
L_002295B0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 264u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[17].w[0] + 1u);  if (t) { goto L_00229774; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002295C4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002295C4u) [[unlikely]] return; }
L_002295C4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002295D4u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 210u, depth + 1u); else { c.pc = 0x00102500u; return; } if (c.pc != 0x002295D4u) [[unlikely]] return; }
L_002295D4:
    set32(c.r[2], ld32((c.r[28].w[0] - 26224u)));
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[6], c.r[22].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002295E8u); set32(c.r[5], c.r[2].w[0] + 384u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002295E8u) [[unlikely]] return; }
L_002295E8:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002295F4u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x002295F4u) [[unlikely]] return; }
L_002295F4:
    c.f[13] = ld32((c.r[29].w[0] + 136u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229600u); c.f[12] = ld32((c.r[29].w[0] + 128u));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x00229600u) [[unlikely]] return; }
L_00229600:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], c.r[21].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229610u); st32((c.r[21].w[0] + 84u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x00229610u) [[unlikely]] return; }
L_00229610:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229618u); set32(c.r[4], ld32((c.r[21].w[0] + 84u)));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00229618u) [[unlikely]] return; }
L_00229618:
    c.f[0] = ld32((c.r[18].w[0] + 192u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022962Cu); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x0022962Cu) [[unlikely]] return; }
L_0022962C:
    c.r[1].d[0] = c.r[20].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; st8((c.r[28].w[0] - 29553u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002296B0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20348u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[2].w[0] + 10048u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[4], c.r[2].w[0] + 9856u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[1].w[0] - 20368u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[2].w[0] + 9664u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[5].w[0] << 4);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st32((c.r[1].w[0] - 20388u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 3u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[1].w[0] - 20384u), c.r[2].w[0]);
    c.f[13] = ld32((c.r[19].w[0] + 68u));
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002296A8u); c.f[12] = ld32((c.r[19].w[0] + 64u));  if (depth < kMaxDepth) unit_000F(c, 18u, depth + 1u); else { c.pc = 0x0013C8A0u; return; } if (c.pc != 0x002296A8u) [[unlikely]] return; }
L_002296A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 144u);  if (t) { goto L_00229734; } }
L_002296B0:
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20348u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[2].w[0] + 10048u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[4], c.r[2].w[0] + 9856u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[5].w[0] + 6u);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[1].w[0] - 20368u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[2].w[0] + 9664u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[5].w[0] + 6u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st32((c.r[1].w[0] - 20388u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 3u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] + 6u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[1].w[0] - 20384u), c.r[2].w[0]);
    c.f[13] = ld32((c.r[19].w[0] + 72u));
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229730u); c.f[12] = ld32((c.r[19].w[0] + 64u));  if (depth < kMaxDepth) unit_000F(c, 18u, depth + 1u); else { c.pc = 0x0013C8A0u; return; } if (c.pc != 0x00229730u) [[unlikely]] return; }
L_00229730:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 1;
L_00229734:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022973Cu);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0022973Cu) [[unlikely]] return; }
L_0022973C:
    set32(c.r[2], ld32((c.r[28].w[0] - 26224u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 432u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00229760; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229758u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001C(c, 101u, depth + 1u); else { c.pc = 0x00171F20u; return; } if (c.pc != 0x00229758u) [[unlikely]] return; }
L_00229758:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00229770; } }
L_00229760:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022976Cu); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001C(c, 77u, depth + 1u); else { c.pc = 0x001719F0u; return; } if (c.pc != 0x0022976Cu) [[unlikely]] return; }
L_0022976C:
    c.budget -= 1;
L_00229770:
    set32(c.r[3], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00229774:
    c.r[17].d[0] = c.r[3].d[0] << 56;
    set32(c.r[18], c.r[18].w[0] + 4u);
    set32(c.r[19], c.r[19].w[0] + 16u);
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);
    c.budget -= 5;
L_00229788:
    c.r[20].d[0] = c.r[17].d[0] << 56;
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 56);
    c.r[3].d[0] = c.r[20].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[16].w[0] + c.r[20].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002295B0u | kUnwind; return; } goto L_002295B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00229960; } }
    mmi::paddub(c.r[20], c.r[0], c.r[0]);
    c.budget -= 1;
L_002297A8:
    mmi::paddub(c.r[17], c.r[16], c.r[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[18], c.r[16], c.r[0]);  if (t) { goto L_00229948; } }
    set32(c.r[3], c.r[16].w[0] + c.r[19].w[0]);
    c.budget -= 1;
L_002297B8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 264u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[20].w[0] + 1u);  if (t) { goto L_00229934; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002297CCu); set32(c.r[4], c.r[21].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002297CCu) [[unlikely]] return; }
L_002297CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002297D4u); set32(c.r[4], 0u + 16384u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002297D4u) [[unlikely]] return; }
L_002297D4:
    c.f[0] = ld32((c.r[17].w[0] + 192u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002297E8u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x002297E8u) [[unlikely]] return; }
L_002297E8:
    c.r[1].d[0] = c.r[19].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; st8((c.r[28].w[0] - 29553u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0022986C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20348u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[2].w[0] + 10048u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[4], c.r[2].w[0] + 9856u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[1].w[0] - 20368u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[2].w[0] + 9664u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[5].w[0] << 4);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st32((c.r[1].w[0] - 20388u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 3u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[1].w[0] - 20384u), c.r[2].w[0]);
    c.f[13] = ld32((c.r[18].w[0] + 68u));
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229864u); c.f[12] = ld32((c.r[18].w[0] + 64u));  if (depth < kMaxDepth) unit_000F(c, 18u, depth + 1u); else { c.pc = 0x0013C8A0u; return; } if (c.pc != 0x00229864u) [[unlikely]] return; }
L_00229864:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 144u);  if (t) { goto L_002298F4; } }
L_0022986C:
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20348u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[2].w[0] + 10048u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[4], c.r[2].w[0] + 9856u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[5].w[0] + 6u);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[1].w[0] - 20368u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[2].w[0] + 9664u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[5].w[0] + 6u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st32((c.r[1].w[0] - 20388u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 3u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] + 6u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[1].w[0] - 20384u), c.r[2].w[0]);
    c.f[13] = ld32((c.r[18].w[0] + 72u));
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002298ECu); c.f[12] = ld32((c.r[18].w[0] + 64u));  if (depth < kMaxDepth) unit_000F(c, 18u, depth + 1u); else { c.pc = 0x0013C8A0u; return; } if (c.pc != 0x002298ECu) [[unlikely]] return; }
L_002298EC:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 2;
L_002298F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002298FCu);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002298FCu) [[unlikely]] return; }
L_002298FC:
    set32(c.r[2], ld32((c.r[28].w[0] - 26224u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 432u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00229920; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229918u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001C(c, 101u, depth + 1u); else { c.pc = 0x00171F20u; return; } if (c.pc != 0x00229918u) [[unlikely]] return; }
L_00229918:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00229930; } }
L_00229920:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022992Cu); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001C(c, 77u, depth + 1u); else { c.pc = 0x001719F0u; return; } if (c.pc != 0x0022992Cu) [[unlikely]] return; }
L_0022992C:
    c.budget -= 1;
L_00229930:
    set32(c.r[3], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_00229934:
    c.r[20].d[0] = c.r[3].d[0] << 56;
    set32(c.r[17], c.r[17].w[0] + 4u);
    set32(c.r[18], c.r[18].w[0] + 16u);
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 56);
    c.budget -= 5;
L_00229948:
    c.r[19].d[0] = c.r[20].d[0] << 56;
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 56);
    c.r[3].d[0] = c.r[19].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[16].w[0] + c.r[19].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002297B8u | kUnwind; return; } goto L_002297B8; } }
    c.budget -= 1;
L_00229960:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00229964:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_00229990:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002299B8u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x002299B8u) [[unlikely]] return; }
L_002299B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002299FC; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00230000u);
    set32(c.r[5], 0u + 19u);
    set32(c.r[4], 0u + 15u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[16].w[0]));
    set32(c.r[3], c.r[3].w[0] - 26096u);
    st32((c.r[2].w[0] + 28u), c.r[17].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00230000u);
    set32(c.r[3], c.r[3].w[0] - 25536u);
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 15;
L_002299FC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00229A10:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] + 10144u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00228000u < 16384u) { entry = entries_004A[(t - 0x00228000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00229A30:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[2], 0u + 128u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[5].w[0] + 112u));
    st32((c.r[4].w[0] + 112u), c.f[0]);
    st32((c.r[4].w[0] + 116u), 0u);
    c.f[0] = ld32((c.r[5].w[0] + 120u));
    st32((c.r[4].w[0] + 120u), c.f[0]);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[4].w[0] + 112u));
    st32((c.r[4].w[0] + 160u), c.f[0]);
    c.f[3] = ld32((c.r[5].w[0] + 128u));
    c.f[2] = ld32((c.r[5].w[0] + 132u));
    c.f[1] = ld32((c.r[5].w[0] + 136u));
    c.f[0] = ld32((c.r[5].w[0] + 140u));
    st32((c.r[4].w[0] + 128u), c.f[3]);
    st32((c.r[4].w[0] + 132u), c.f[2]);
    st32((c.r[4].w[0] + 136u), c.f[1]);
    c.budget -= 22;
    { st32((c.r[4].w[0] + 140u), c.f[0]);  goto L_00229A90; }
L_00229A90:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 28u)));
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[18].w[0] + 320u);  if (t) { goto L_00229ACC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00229BFC; } }
L_00229ACC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] + 10160u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[29].w[0] + 64u);
    set32(c.r[4], c.r[16].w[0] + 192u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229AE8u); st128((c.r[3].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x00229AE8u) [[unlikely]] return; }
L_00229AE8:
    st32((c.r[18].w[0] + 40u), 0u);
    st32((c.r[18].w[0] + 32u), 0u);
    c.f[0] = ld32((c.r[16].w[0] + 116u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40600000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[4], c.r[18].w[0] + 32u);
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229B14u); st32((c.r[18].w[0] + 36u), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x00229B14u) [[unlikely]] return; }
L_00229B14:
    set32(c.r[4], c.r[18].w[0] + 48u);
    set32(c.r[5], c.r[18].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229B24u); set32(c.r[6], c.r[18].w[0] + 128u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x00229B24u) [[unlikely]] return; }
L_00229B24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229B2Cu); set32(c.r[4], c.r[18].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x00229B2Cu) [[unlikely]] return; }
L_00229B2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229B34u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x00229B34u) [[unlikely]] return; }
L_00229B34:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229B40u); set32(c.r[5], c.r[18].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 15u, depth + 1u); else { c.pc = 0x0013C690u; return; } if (c.pc != 0x00229B40u) [[unlikely]] return; }
L_00229B40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229B48u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00229B48u) [[unlikely]] return; }
L_00229B48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229B50u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x00229B50u) [[unlikely]] return; }
L_00229B50:
    c.f[13] = ld32((c.r[18].w[0] + 36u));
    c.f[14] = ld32((c.r[18].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229B60u); c.f[12] = ld32((c.r[18].w[0] + 32u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00229B60u) [[unlikely]] return; }
L_00229B60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229B68u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 331u, depth + 1u); else { c.pc = 0x0013BF80u; return; } if (c.pc != 0x00229B68u) [[unlikely]] return; }
L_00229B68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229B70u); set32(c.r[4], c.r[18].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00229B70u) [[unlikely]] return; }
L_00229B70:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 164u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[18].w[0] + 32u);  if (t) { goto L_00229B9C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[18].w[0] + 32u);
    c.budget -= 4;
L_00229B9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229BA4u); set32(c.r[5], c.r[18].w[0] + 128u);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x00229BA4u) [[unlikely]] return; }
L_00229BA4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);  if (t) { goto L_00229BC8; } }
    c.f[0] = c.f[1];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.budget -= 2;
L_00229BC8:
    c.f[1] = c.r[3].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x43000000u);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    set32(c.r[3], 0u + 1u);
    st32((c.r[18].w[0] + 116u), c.f[0]);
    c.f[0] = c.r[4].w[0];
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 164u)));
    c.f[1] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 112u), c.f[0]);
    st8((c.r[18].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 13;
L_00229BFC:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00229C20:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00229C30:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_00229C40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00229C50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229C70u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x00229C70u) [[unlikely]] return; }
L_00229C70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00229CB8; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[5], 0u + 19u);
    set32(c.r[4], 0u + 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00230000u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[5], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[4], c.r[3].w[0] - 25392u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00230000u);
    set32(c.r[3], c.r[3].w[0] - 24560u);
    st32((c.r[2].w[0] + 24u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 28u), c.r[16].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 16;
L_00229CB8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00229CD0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] + 10176u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00228000u < 16384u) { entry = entries_004A[(t - 0x00228000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00229CF0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[8], c.r[4].w[0] + 320u);
    set32(c.r[6], ld32((c.r[4].w[0] + 28u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[10], c.r[2].w[0] + 10192u);
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[7], c.r[6].w[0] + 320u);
    mmi::paddub(c.r[9], c.r[0], c.r[0]);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    mmi::paddub(c.r[11], c.r[8], c.r[0]);
    mmi::paddub(c.r[12], c.r[8], c.r[0]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_00229D78; } }
    set32(c.r[13], c.r[8].w[0] + c.r[5].w[0]);
    c.budget -= 1;
L_00229D2C:
    c.r[5].d[0] = ld8((c.r[10].w[0]));
    set32(c.r[2], c.r[9].w[0] + 1u);
    c.r[9].d[0] = c.r[2].d[0] << 56;
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 56);
    st8((c.r[13].w[0] + 88u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[2].d[0] = ld8((c.r[10].w[0] + 1u));
    st8((c.r[13].w[0] + 84u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[10].w[0] + 2u));
    st8((c.r[13].w[0] + 80u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[10].w[0] + 3u));
    st8((c.r[13].w[0] + 92u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[11].w[0]), 0u);
    st32((c.r[11].w[0] + 4u), 0u);
    st32((c.r[11].w[0] + 8u), 0u);
    st32((c.r[12].w[0] + 64u), c.r[3].w[0]);
    set32(c.r[10], c.r[10].w[0] + 4u);
    set32(c.r[11], c.r[11].w[0] + 16u);
    set32(c.r[12], c.r[12].w[0] + 4u);
    c.budget -= 19;
L_00229D78:
    c.r[5].d[0] = c.r[9].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.r[2].d[0] = c.r[5].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[13], c.r[8].w[0] + c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00229D2Cu | kUnwind; return; } goto L_00229D2C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 172u)));
    st8((c.r[8].w[0] + 96u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[6].w[0] + 80u)));
    c.budget -= 5;
    { st32((c.r[4].w[0] + 80u), c.r[2].w[0]);  goto L_00229DA0; }
L_00229DA0:
    set32(c.r[5], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], c.r[4].w[0] + 320u);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    mmi::paddub(c.r[8], c.r[3], c.r[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[9], c.r[3], c.r[0]);  if (t) { goto L_00229F98; } }
    set32(c.r[13], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 1;
L_00229DC0:
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[13].w[0] + 92u)));
    c.budget -= 3;
    { const bool t = c.r[11].d[0] != 0ull; set32(c.r[10], c.r[13].w[0] + 92u);  if (t) { goto L_00229E00; } }
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[13].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[11].d[0] == 0ull; set32(c.r[12], c.r[13].w[0] + 80u);  if (t) { goto L_00229E00; } }
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[12].w[0])));
    set32(c.r[11], c.r[11].w[0] - 1u);
    st8((c.r[12].w[0]), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[11].d[0] = c.r[11].d[0] << 56;
    c.r[11].d[0] = static_cast<std::uint64_t>(c.r[11].sd[0] >> 56);
    c.budget -= 7;
    if (c.r[11].d[0] != 0ull) { set32(c.r[6], c.r[6].w[0] + 1u);  goto L_00229F84; }
    set32(c.r[11], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[10].w[0]), static_cast<std::uint8_t>(c.r[11].w[0]));  if (t) { goto L_00229F80; } }
L_00229E00:
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[13].w[0] + 84u)));
    set32(c.r[14], c.r[13].w[0] + 84u);
    set32(c.r[11], c.r[12].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[12].d[0] != 0ull; st8((c.r[13].w[0] + 84u), static_cast<std::uint8_t>(c.r[11].w[0]));  if (t) { goto L_00229E18; } }
    st8((c.r[10].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00229E18:
    c.r[12].d[0] = ld8((c.r[13].w[0] + 88u));
    set32(c.r[11], 0u + 170u);
    c.budget -= 4;
    { const bool t = c.r[12].d[0] != c.r[11].d[0];  if (t) { goto L_00229ED8; } }
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[14].w[0])));
    c.r[11].d[0] = c.r[11].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[11].d[0] != 0ull;  if (t) { goto L_00229E70; } }
    c.f[1] = ld32((c.r[8].w[0]));
    c.r[11].sd[0] = static_cast<std::int32_t>(0x3E2A0000u);
    c.r[11].d[0] = c.r[11].d[0] | 43691ull;
    c.f[0] = c.r[11].w[0];
    c.r[11].sd[0] = static_cast<std::int32_t>(0x40150000u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.r[11].d[0] = c.r[11].d[0] | 21845ull;
    st32((c.r[8].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[8].w[0] + 4u));
    c.f[0] = c.r[11].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[8].w[0] + 4u), c.f[0]);  if (t) { goto L_00229EA8; } }
L_00229E70:
    c.f[1] = ld32((c.r[8].w[0]));
    c.r[11].sd[0] = static_cast<std::int32_t>(0xBE120000u);
    c.r[11].d[0] = c.r[11].d[0] | 18725ull;
    c.f[0] = c.r[11].w[0];
    c.r[11].sd[0] = static_cast<std::int32_t>(0x3E920000u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.r[11].d[0] = c.r[11].d[0] | 18725ull;
    st32((c.r[8].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[8].w[0] + 4u));
    c.f[0] = c.r[11].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[8].w[0] + 4u), c.f[0]);
    c.budget -= 14;
L_00229EA8:
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[14].w[0])));
    c.r[1].d[0] = c.r[11].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00229F68; } }
    c.f[1] = ld32((c.r[9].w[0] + 64u));
    c.r[11].sd[0] = static_cast<std::int32_t>(0xBE4C0000u);
    c.r[11].d[0] = c.r[11].d[0] | 52429ull;
    c.f[0] = c.r[11].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[9].w[0] + 64u), c.f[0]);  if (t) { goto L_00229F68; } }
L_00229ED8:
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[14].w[0])));
    c.r[11].d[0] = c.r[11].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[11].d[0] != 0ull;  if (t) { goto L_00229F20; } }
    c.f[1] = ld32((c.r[8].w[0]));
    c.r[11].sd[0] = static_cast<std::int32_t>(0x3ECC0000u);
    c.r[11].d[0] = c.r[11].d[0] | 52429ull;
    c.f[0] = c.r[11].w[0];
    c.r[11].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.r[11].d[0] = c.r[11].d[0] | 26214ull;
    st32((c.r[8].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[8].w[0] + 4u));
    c.f[0] = c.r[11].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[8].w[0] + 4u), c.f[0]);  if (t) { goto L_00229F68; } }
L_00229F20:
    c.f[2] = ld32((c.r[8].w[0]));
    c.r[11].sd[0] = static_cast<std::int32_t>(0xBE4C0000u);
    c.r[11].d[0] = c.r[11].d[0] | 52429ull;
    c.f[0] = c.r[11].w[0];
    c.r[11].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = fp::add(c.f[2], c.f[0]);
    st32((c.r[8].w[0]), c.f[0]);
    c.f[2] = ld32((c.r[8].w[0] + 4u));
    c.f[1] = c.r[11].w[0];
    c.r[11].sd[0] = static_cast<std::int32_t>(0xBDCC0000u);
    c.r[11].d[0] = c.r[11].d[0] | 52429ull;
    c.f[0] = c.r[11].w[0];
    c.f[1] = fp::add(c.f[2], c.f[1]);
    st32((c.r[8].w[0] + 4u), c.f[1]);
    c.f[1] = ld32((c.r[9].w[0] + 64u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[9].w[0] + 64u), c.f[0]);
    c.budget -= 18;
L_00229F68:
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0])));
    c.budget -= 3;
    { const bool t = c.r[10].d[0] != 0ull;  if (t) { goto L_00229F80; } }
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[7].d[0] = c.r[7].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    c.budget -= 3;
L_00229F80:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_00229F84:
    c.r[6].d[0] = c.r[6].d[0] << 56;
    set32(c.r[8], c.r[8].w[0] + 16u);
    set32(c.r[9], c.r[9].w[0] + 4u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.budget -= 5;
L_00229F98:
    c.r[11].d[0] = c.r[6].d[0] << 56;
    c.r[11].d[0] = static_cast<std::uint64_t>(c.r[11].sd[0] >> 56);
    c.r[10].d[0] = c.r[11].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[10].d[0] != 0ull; set32(c.r[13], c.r[3].w[0] + c.r[11].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00229DC0u | kUnwind; return; } goto L_00229DC0; } }
    c.r[6].d[0] = c.r[7].d[0] << 56;
    set32(c.r[3], 0u + 4u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_00229FCC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00229FCC:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00229FE4; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 760u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00229FE8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_00229FE4:
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_00229FE8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00229FF0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0022A000:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_0022A010:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0] + 28u)));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], c.r[29].w[0] + 160u);
    set32(c.r[2], c.r[28].w[0] - 29552u);
    st8((c.r[1].w[0] - 20348u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20400u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], 0u + 3u);
    set32(c.r[22], c.r[16].w[0] + 320u);
    set32(c.r[23], c.r[17].w[0] + 320u);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A078u); st32((c.r[1].w[0] - 20372u), 0u);  if (depth < kMaxDepth) unit_001E(c, 201u, depth + 1u); else { c.pc = 0x0017BBC0u; return; } if (c.pc != 0x0022A078u) [[unlikely]] return; }
L_0022A078:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[3].w[0]);
    set32(c.r[3], 0u + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20352u), 0u);
    set32(c.r[3], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[3].w[0]));
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    mmi::paddub(c.r[20], c.r[22], c.r[0]);
    c.budget -= 17;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[21], c.r[22], c.r[0]);  if (t) { goto L_0022A1E8; } }
    set32(c.r[19], c.r[22].w[0] + c.r[4].w[0]);
    c.budget -= 1;
L_0022A0C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 92u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[18].w[0] + 1u);  if (t) { goto L_0022A1D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A0D4u); mmi::paddub(c.r[4], c.r[23], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x0022A0D4u) [[unlikely]] return; }
L_0022A0D4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A0E4u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 210u, depth + 1u); else { c.pc = 0x00102500u; return; } if (c.pc != 0x0022A0E4u) [[unlikely]] return; }
L_0022A0E4:
    set32(c.r[2], ld32((c.r[28].w[0] - 26224u)));
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[6], c.r[17].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A0F8u); set32(c.r[5], c.r[2].w[0] + 384u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x0022A0F8u) [[unlikely]] return; }
L_0022A0F8:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A104u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x0022A104u) [[unlikely]] return; }
L_0022A104:
    c.f[13] = ld32((c.r[29].w[0] + 152u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A110u); c.f[12] = ld32((c.r[29].w[0] + 144u));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x0022A110u) [[unlikely]] return; }
L_0022A110:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], c.r[17].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A120u); st32((c.r[16].w[0] + 84u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x0022A120u) [[unlikely]] return; }
L_0022A120:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A128u); set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x0022A128u) [[unlikely]] return; }
L_0022A128:
    c.f[0] = ld32((c.r[20].w[0] + 64u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A13Cu); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x0022A13Cu) [[unlikely]] return; }
L_0022A13C:
    st8((c.r[28].w[0] - 29549u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[3] = ld32((c.r[17].w[0] + 112u));
    c.f[2] = ld32((c.r[21].w[0]));
    c.f[1] = ld32((c.r[17].w[0] + 116u));
    c.f[0] = ld32((c.r[21].w[0] + 4u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 88u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.f[12] = fp::mul(c.f[3], c.f[2]);
    set32(c.r[2], c.r[3].w[0] - 170u);
    c.f[13] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A170u); c.r[19].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_000F(c, 18u, depth + 1u); else { c.pc = 0x0013C8A0u; return; } if (c.pc != 0x0022A170u) [[unlikely]] return; }
L_0022A170:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A178u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0022A178u) [[unlikely]] return; }
L_0022A178:
    c.r[2].d[0] = c.r[19].d[0] & 255ull;
    set32(c.r[4], c.r[2].w[0] << 4);
    set32(c.r[3], c.r[2].w[0] << 3);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] + 10240u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20388u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] + 10208u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20384u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] + 10272u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20368u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A1CCu); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001C(c, 77u, depth + 1u); else { c.pc = 0x001719F0u; return; } if (c.pc != 0x0022A1CCu) [[unlikely]] return; }
L_0022A1CC:
    set32(c.r[3], c.r[18].w[0] + 1u);
    c.budget -= 2;
L_0022A1D4:
    c.r[18].d[0] = c.r[3].d[0] << 56;
    set32(c.r[20], c.r[20].w[0] + 4u);
    set32(c.r[21], c.r[21].w[0] + 16u);
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 56);
    c.budget -= 5;
L_0022A1E8:
    c.r[4].d[0] = c.r[18].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[3].d[0] = c.r[4].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[19], c.r[22].w[0] + c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022A0C0u | kUnwind; return; } goto L_0022A0C0; } }
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_0022A230:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 10u);
    set32(c.r[4], ld32((c.r[4].w[0] + 260u)));
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[16], c.r[5], c.r[0]);  if (t) { goto L_0022A2DC; } }
    set32(c.r[5], 0u + 3u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A278u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x0022A278u) [[unlikely]] return; }
L_0022A278:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022A2DC; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[5], 0u + 19u);
    set32(c.r[4], 0u + 17u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00230000u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.f[3] = ld32((c.r[16].w[0]));
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    set32(c.r[4], c.r[3].w[0] - 23648u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00230000u);
    set32(c.r[3], c.r[3].w[0] - 23136u);
    st32((c.r[2].w[0] + 32u), c.f[3]);
    st32((c.r[2].w[0] + 36u), c.f[2]);
    st32((c.r[2].w[0] + 40u), c.f[1]);
    st32((c.r[2].w[0] + 44u), c.f[0]);
    st32((c.r[2].w[0] + 24u), c.r[17].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 23;
L_0022A2DC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0022A2F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[5], 0u + 3u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A318u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x0022A318u) [[unlikely]] return; }
L_0022A318:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022A380; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[4], 0u + 19u);
    set32(c.r[3], 0u + 17u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[3] = ld32((c.r[17].w[0]));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00230000u);
    set32(c.r[4], c.r[3].w[0] - 23648u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00230000u);
    set32(c.r[3], c.r[3].w[0] - 23136u);
    st32((c.r[2].w[0] + 32u), c.f[3]);
    st32((c.r[2].w[0] + 36u), c.f[2]);
    st32((c.r[2].w[0] + 40u), c.f[1]);
    st32((c.r[2].w[0] + 44u), c.f[0]);
    st32((c.r[2].w[0] + 24u), c.r[16].w[0]);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[2].w[0] + 12u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 24;
L_0022A380:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0022A3A0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] + 10432u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00228000u < 16384u) { entry = entries_004A[(t - 0x00228000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0022A3C0:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], 0u + 40u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[9], c.r[4].w[0] + 320u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[4].w[0] + 320u), c.r[6].w[0]);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st32((c.r[4].w[0] + 112u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 116u), 0u);
    st32((c.r[4].w[0] + 120u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[4], c.r[3].w[0] + 10384u);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[8], c.r[0], c.r[0]);  if (t) { goto L_0022A430; } }
L_0022A400:
    c.f[0] = ld32((c.r[4].w[0]));
    set32(c.r[3], c.r[8].w[0] + 1u);
    c.r[8].d[0] = c.r[3].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    st32((c.r[9].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    st32((c.r[9].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    st32((c.r[9].w[0] + 24u), c.f[0]);
    set32(c.r[4], c.r[4].w[0] + 12u);
    set32(c.r[9], c.r[9].w[0] + 16u);
    c.budget -= 12;
L_0022A430:
    c.r[3].d[0] = c.r[8].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[3].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022A400u | kUnwind; return; } goto L_0022A400; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0022A450:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[16], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[6], c.r[17].w[0] + 320u);
    set32(c.r[3], c.r[5].w[0] - 1u);
    c.budget -= 11;
    { const bool t = c.r[5].d[0] != 0ull; st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0022A48C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0022A56C; } }
L_0022A48C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.r[1].d[0] = c.r[2].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0022A4B8; } }
    c.f[1] = ld32((c.r[6].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBD4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[6].w[0]), c.f[0]);
    c.budget -= 7;
L_0022A4B8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.r[1].d[0] = c.r[2].sd[0] < 26ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0022A50C; } }
    c.f[0] = ld32((c.r[17].w[0] + 112u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3BDA0000u);
    c.r[2].d[0] = c.r[2].d[0] | 29713ull;
    c.f[2] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D230000u);
    c.f[0] = fp::add(c.f[0], c.f[2]);
    c.r[2].d[0] = c.r[2].d[0] | 55051ull;
    st32((c.r[17].w[0] + 112u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 116u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 116u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 120u));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 120u), c.f[0]);  if (t) { goto L_0022A540; } }
L_0022A50C:
    c.f[0] = ld32((c.r[17].w[0] + 112u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3C830000u);
    c.r[2].d[0] = c.r[2].d[0] | 4718ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 116u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 116u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 120u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 120u), c.f[0]);
    c.budget -= 13;
L_0022A540:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A548u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x0022A548u) [[unlikely]] return; }
L_0022A548:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A550u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 17u, depth + 1u); else { c.pc = 0x0013C880u; return; } if (c.pc != 0x0022A550u) [[unlikely]] return; }
L_0022A550:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A558u); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0022A558u) [[unlikely]] return; }
L_0022A558:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 760u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0022A56C; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0022A56C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0022A580:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0022A590:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_0022A5A0:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A5BCu); set32(c.r[16], c.r[17].w[0] + 320u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x0022A5BCu) [[unlikely]] return; }
L_0022A5BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A5C4u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0022A5C4u) [[unlikely]] return; }
L_0022A5C4:
    set32(c.r[2], ld32((c.r[28].w[0] - 26224u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A5D0u); set32(c.r[4], c.r[2].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x0022A5D0u) [[unlikely]] return; }
L_0022A5D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[2].d[0] = c.r[2].d[0] | 244ull;
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A5E4u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 210u, depth + 1u); else { c.pc = 0x00102500u; return; } if (c.pc != 0x0022A5E4u) [[unlikely]] return; }
L_0022A5E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A5ECu); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_000E(c, 328u, depth + 1u); else { c.pc = 0x0013BEC0u; return; } if (c.pc != 0x0022A5ECu) [[unlikely]] return; }
L_0022A5EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A5F4u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x0022A5F4u) [[unlikely]] return; }
L_0022A5F4:
    c.f[13] = ld32((c.r[17].w[0] + 36u));
    c.f[14] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A604u); c.f[12] = ld32((c.r[17].w[0] + 32u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x0022A604u) [[unlikely]] return; }
L_0022A604:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A60Cu); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_000E(c, 331u, depth + 1u); else { c.pc = 0x0013BF80u; return; } if (c.pc != 0x0022A60Cu) [[unlikely]] return; }
L_0022A60C:
    c.f[0] = ld32((c.r[17].w[0] + 116u));
    c.f[12] = ld32((c.r[17].w[0] + 112u));
    c.f[14] = ld32((c.r[17].w[0] + 120u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A620u); c.f[13] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_000F(c, 18u, depth + 1u); else { c.pc = 0x0013C8A0u; return; } if (c.pc != 0x0022A620u) [[unlikely]] return; }
L_0022A620:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A628u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0022A628u) [[unlikely]] return; }
L_0022A628:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.f[0] = ld32((c.r[16].w[0]));
    set32(c.r[2], c.r[2].w[0] + 10288u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 256u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[8].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[8], c.f[0]);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], c.r[29].w[0] + 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20400u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 256u)));
    set32(c.r[3], c.r[2].w[0] + 10288u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[1].w[0] - 20380u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A6A4u); st32((c.r[1].w[0] - 20352u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001E(c, 201u, depth + 1u); else { c.pc = 0x0017BBC0u; return; } if (c.pc != 0x0022A6A4u) [[unlikely]] return; }
L_0022A6A4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[2].w[0]);
    set32(c.r[4], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[4].w[0]);
    set32(c.r[3], 0u + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20348u), static_cast<std::uint8_t>(0u));
    c.budget -= 14;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[17], c.r[0], c.r[0]);  if (t) { goto L_0022A788; } }
L_0022A6DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A6E4u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x0022A6E4u) [[unlikely]] return; }
L_0022A6E4:
    c.r[2].d[0] = c.r[17].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.f[13] = ld32((c.r[2].w[0] + 20u));
    c.f[14] = ld32((c.r[2].w[0] + 24u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A704u); c.f[12] = ld32((c.r[2].w[0] + 16u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x0022A704u) [[unlikely]] return; }
L_0022A704:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A70Cu); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0022A70Cu) [[unlikely]] return; }
L_0022A70C:
    set32(c.r[3], c.r[29].w[0] + 48u);
    set32(c.r[2], c.r[29].w[0] + 112u);
    ld128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[4]);
    vu::move(c.vu0, 1u, 4u, 0u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    c.r[2].d[0] = c.r[17].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[4], c.r[2].w[0] << 4);
    set32(c.r[3], c.r[2].w[0] << 3);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] + 10496u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20388u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] + 10448u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20384u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] + 10544u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20368u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A778u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001C(c, 77u, depth + 1u); else { c.pc = 0x001719F0u; return; } if (c.pc != 0x0022A778u) [[unlikely]] return; }
L_0022A778:
    set32(c.r[3], c.r[17].w[0] + 1u);
    c.r[17].d[0] = c.r[3].d[0] << 56;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);
    c.budget -= 4;
L_0022A788:
    c.r[3].d[0] = c.r[17].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[3].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022A6DCu | kUnwind; return; } goto L_0022A6DC; } }
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_0022A7B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 14u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 256u)));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 15u);  if (t) { goto L_0022A7E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0022A824; } }
    set32(c.r[3], 0u + 15u);
    c.budget -= 1;
L_0022A7E8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 16u);  if (t) { goto L_0022A7FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_0022A824; } }
    set32(c.r[3], 0u + 16u);
    c.budget -= 1;
L_0022A7FC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 10u);  if (t) { goto L_0022A810; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 3u);  if (t) { goto L_0022A824; } }
    set32(c.r[3], 0u + 10u);
    c.budget -= 1;
L_0022A810:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; mmi::paddub(c.r[3], c.r[0], c.r[0]);  if (t) { goto L_0022A824; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 4u);  if (t) { goto L_0022A824; } }
    mmi::paddub(c.r[3], c.r[0], c.r[0]);
    c.budget -= 1;
L_0022A824:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0022A9B0; } }
    set32(c.r[4], c.r[3].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] + 10896u);
    set32(c.r[19], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[17], ld32((c.r[19].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] + 10576u);
    set32(c.r[4], c.r[17].w[0] << 5);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_0022A9A0; } }
L_0022A854:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 514u)));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], 0u + 3u);  if (t) { goto L_0022A87C; } }
    c.r[1].d[0] = c.r[17].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 32u);  goto L_0022A99C; }
    set32(c.r[5], 0u + 3u);
    c.budget -= 2;
L_0022A87C:
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A888u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x0022A888u) [[unlikely]] return; }
L_0022A888:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[2], c.r[0]);  if (t) { goto L_0022A998; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00230000u);
    set32(c.r[4], 0u + 19u);
    set32(c.r[3], 0u + 18u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] - 22064u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00230000u);
    set32(c.r[2], c.r[2].w[0] - 21584u);
    st32((c.r[16].w[0] + 168u), c.r[2].w[0]);
    c.f[3] = ld32((c.r[18].w[0] + 16u));
    c.f[2] = ld32((c.r[18].w[0] + 20u));
    c.f[1] = ld32((c.r[18].w[0] + 24u));
    c.f[0] = ld32((c.r[18].w[0] + 28u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[2].w[0] - 16336u);
    set32(c.r[6], 0u + 3u);
    st32((c.r[16].w[0] + 32u), c.f[3]);
    st32((c.r[16].w[0] + 36u), c.f[2]);
    st32((c.r[16].w[0] + 40u), c.f[1]);
    st32((c.r[16].w[0] + 44u), c.f[0]);
    st32((c.r[16].w[0] + 88u), 0u);
    st32((c.r[16].w[0] + 84u), 0u);
    st32((c.r[16].w[0] + 80u), 0u);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 256u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    c.budget -= 35;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A91Cu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0016(c, 134u, depth + 1u); else { c.pc = 0x0015B550u; return; } if (c.pc != 0x0022A91Cu) [[unlikely]] return; }
L_0022A91C:
    set32(c.r[4], ld32((c.r[18].w[0])));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0022A948; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 184u)));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A944u); c.r[5].d[0] = 0ull | 32772ull;  if (depth < kMaxDepth) unit_001B(c, 184u, depth + 1u); else { c.pc = 0x0016F1E0u; return; } if (c.pc != 0x0022A944u) [[unlikely]] return; }
L_0022A944:
    c.budget -= 1;
L_0022A948:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0022A970; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 184u)));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A970u); c.r[5].d[0] = 0ull | 32772ull;  if (depth < kMaxDepth) unit_001B(c, 184u, depth + 1u); else { c.pc = 0x0016F1E0u; return; } if (c.pc != 0x0022A970u) [[unlikely]] return; }
L_0022A970:
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0022A998; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 184u)));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A998u); c.r[5].d[0] = 0ull | 32772ull;  if (depth < kMaxDepth) unit_001B(c, 184u, depth + 1u); else { c.pc = 0x0016F1E0u; return; } if (c.pc != 0x0022A998u) [[unlikely]] return; }
L_0022A998:
    set32(c.r[18], c.r[18].w[0] + 32u);
    c.budget -= 1;
L_0022A99C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0022A9A0:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022A854u | kUnwind; return; } goto L_0022A854; } }
L_0022A9B0:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0022A9D0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] + 10928u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00228000u < 16384u) { entry = entries_004A[(t - 0x00228000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0022A9F0:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[6], c.r[3].w[0] + 10576u);
    set32(c.r[3], 0u - 1u);
    set32(c.r[7], c.r[7].w[0] << 5);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[5], ld32((c.r[6].w[0] + 4u)));
    c.budget -= 12;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0022AA30; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    st32((c.r[4].w[0] + 48u), 0u);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    st32((c.r[4].w[0] + 64u), c.r[3].w[0]);
    c.budget -= 4;
L_0022AA30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0022AA40:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[5], c.r[3].w[0] + 10576u);
    set32(c.r[3], 0u - 1u);
    set32(c.r[6], c.r[6].w[0] << 5);
    set32(c.r[6], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[6].w[0] + 4u)));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0022AAC8; } }
    c.f[1] = ld32((c.r[4].w[0] + 64u));
    c.f[0] = ld32((c.r[4].w[0] + 48u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[4].w[0] + 48u), c.f[0]);  if (t) { goto L_0022AA9C; } }
    st32((c.r[4].w[0] + 48u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBC230000u);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 64u), c.r[3].w[0]);  if (t) { goto L_0022AAC8; } }
L_0022AA9C:
    c.f[0] = ld32((c.r[4].w[0] + 48u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0022AAC8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    st32((c.r[4].w[0] + 48u), 0u);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    st32((c.r[4].w[0] + 64u), c.r[3].w[0]);
    c.budget -= 4;
L_0022AAC8:
    set32(c.r[5], ld32((c.r[6].w[0] + 8u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0022AAEC; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 16u);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    st32((c.r[4].w[0] + 88u), c.r[3].w[0]);
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
L_0022AAEC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0022AB00:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0022AB10:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_0022AB20:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AB30u); set32(c.r[4], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0022AB30u) [[unlikely]] return; }
L_0022AB30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[2].w[0] + 10944u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00800000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 20000u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20340u), c.r[3].w[0]);
    set32(c.r[3], c.r[29].w[0] + 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20400u), c.r[3].w[0]);
    set32(c.r[3], c.r[28].w[0] - 29548u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20352u), 0u);
    set32(c.r[2], 0u + 61u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20354u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] - 20416u);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AB9Cu); st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_001B(c, 162u, depth + 1u); else { c.pc = 0x0016EA60u; return; } if (c.pc != 0x0022AB9Cu) [[unlikely]] return; }
L_0022AB9C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0022ABB0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 184u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { goto L_0022AD4C; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[5], c.r[2].w[0] - 28448u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[4], c.r[2].w[0] + 26144u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 78u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] + 10576u);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[6].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] << 7);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[2], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 8);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AC24u); set32(c.r[18], c.r[4].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x0022AC24u) [[unlikely]] return; }
L_0022AC24:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 369u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022AC64; } }
    c.f[5] = ld32((c.r[18].w[0] + 32u));
    c.f[4] = ld32((c.r[17].w[0] + 32u));
    c.f[3] = ld32((c.r[18].w[0] + 36u));
    c.f[2] = ld32((c.r[17].w[0] + 36u));
    c.f[1] = ld32((c.r[18].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    c.f[12] = fp::add(c.f[5], c.f[4]);
    c.f[13] = fp::add(c.f[3], c.f[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AC5Cu); c.f[14] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x0022AC5Cu) [[unlikely]] return; }
L_0022AC5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0])));  if (t) { goto L_0022AC9C; } }
L_0022AC64:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.f[4] = ld32((c.r[1].w[0] - 21936u));
    c.f[5] = ld32((c.r[17].w[0] + 32u));
    c.f[3] = ld32((c.r[17].w[0] + 36u));
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.f[2] = ld32((c.r[1].w[0] - 21932u));
    c.f[12] = fp::add(c.f[4], c.f[5]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.f[0] = ld32((c.r[1].w[0] - 21928u));
    c.f[13] = fp::add(c.f[2], c.f[3]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AC98u); c.f[14] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x0022AC98u) [[unlikely]] return; }
L_0022AC98:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_0022AC9C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0022ACBC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 184u)));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022ACBCu); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_000F(c, 36u, depth + 1u); else { c.pc = 0x0013CD20u; return; } if (c.pc != 0x0022ACBCu) [[unlikely]] return; }
L_0022ACBC:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0022ACD4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022ACD4u);  if (depth < kMaxDepth) unit_004A(c, 162u, depth + 1u); else { c.pc = 0x0022AB20u; return; } if (c.pc != 0x0022ACD4u) [[unlikely]] return; }
L_0022ACD4:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0022AD14; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022ACECu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x0022ACECu) [[unlikely]] return; }
L_0022ACEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022ACF4u); set32(c.r[4], ld32((c.r[17].w[0] + 88u)));  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x0022ACF4u) [[unlikely]] return; }
L_0022ACF4:
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 184u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AD0Cu); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_000F(c, 36u, depth + 1u); else { c.pc = 0x0013CD20u; return; } if (c.pc != 0x0022AD0Cu) [[unlikely]] return; }
L_0022AD0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AD14u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x0022AD14u) [[unlikely]] return; }
L_0022AD14:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0022AD3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AD28u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_004A(c, 178u, depth + 1u); else { c.pc = 0x0022AD70u; return; } if (c.pc != 0x0022AD28u) [[unlikely]] return; }
L_0022AD28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AD30u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_004A(c, 186u, depth + 1u); else { c.pc = 0x0022AEC0u; return; } if (c.pc != 0x0022AD30u) [[unlikely]] return; }
L_0022AD30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);  if (t) { goto L_0022AD50; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0022AD3C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0022AD4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AD4Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_004A(c, 189u, depth + 1u); else { c.pc = 0x0022AF50u; return; } if (c.pc != 0x0022AD4Cu) [[unlikely]] return; }
L_0022AD4C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0022AD50:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0022AD70:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[0] = ld32((c.r[4].w[0] + 48u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AD94u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x0022AD94u) [[unlikely]] return; }
L_0022AD94:
    st8((c.r[29].w[0] + 78u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[29].w[0] + 77u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[29].w[0] + 76u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00800000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 20000u)));
    set32(c.r[3], 0u + 128u);
    st8((c.r[29].w[0] + 79u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[29].w[0] + 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] + 14912u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20388u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] + 14928u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20384u), c.r[3].w[0]);
    set32(c.r[3], c.r[29].w[0] + 76u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20372u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20404u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20408u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20412u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20416u), c.r[3].w[0]);
    set32(c.r[3], c.r[28].w[0] - 29544u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20368u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[2].w[0]);
    set32(c.r[2], 0u + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[17], c.r[2].w[0] + 14944u);
    st32((c.r[1].w[0] - 20352u), 0u);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 51;
L_0022AE60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AE68u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x0022AE68u) [[unlikely]] return; }
L_0022AE68:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AE78u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x0022AE78u) [[unlikely]] return; }
L_0022AE78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AE80u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 16u, depth + 1u); else { c.pc = 0x0013C860u; return; } if (c.pc != 0x0022AE80u) [[unlikely]] return; }
L_0022AE80:
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] - 20416u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AE94u); st32((c.r[29].w[0] + 60u), c.f[0]);  if (depth < kMaxDepth) unit_001C(c, 51u, depth + 1u); else { c.pc = 0x001712A0u; return; } if (c.pc != 0x0022AE94u) [[unlikely]] return; }
L_0022AE94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AE9Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x0022AE9Cu) [[unlikely]] return; }
L_0022AE9C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022AE60u | kUnwind; return; } goto L_0022AE60; } }
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0022AEC0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AED0u); set32(c.r[4], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0022AED0u) [[unlikely]] return; }
L_0022AED0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[2].w[0] + 15008u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00800000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 20000u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20340u), c.r[3].w[0]);
    set32(c.r[3], c.r[29].w[0] + 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20400u), c.r[3].w[0]);
    set32(c.r[3], c.r[28].w[0] - 29536u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20352u), 0u);
    set32(c.r[2], 0u + 60u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20354u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AF40u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001B(c, 162u, depth + 1u); else { c.pc = 0x0016EA60u; return; } if (c.pc != 0x0022AF40u) [[unlikely]] return; }
L_0022AF40:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0022AF50:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], c.r[2].w[0] - 28448u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[9], c.r[2].w[0] + 26144u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 78u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[8], c.r[2].w[0] + 18848u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00800000u);
    set32(c.r[5], ld32((c.r[1].w[0] - 19996u)));
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 7);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[7], c.r[29].w[0] + 64u);
    set32(c.r[6], c.r[28].w[0] - 29532u);
    st32((c.r[1].w[0] - 20340u), c.r[8].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20400u), c.r[7].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[5].w[0]);
    set32(c.r[4], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20352u), 0u);
    set32(c.r[3], 0u + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20354u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[10].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[10].w[0]);
    set32(c.r[2], c.r[2].w[0] << 8);
    set32(c.r[16], c.r[9].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[18], c.r[2].w[0] + 19104u);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 48;
L_0022B010:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B018u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x0022B018u) [[unlikely]] return; }
L_0022B018:
    c.f[5] = ld32((c.r[16].w[0] + 32u));
    c.f[4] = ld32((c.r[18].w[0]));
    c.f[3] = ld32((c.r[16].w[0] + 36u));
    c.f[2] = ld32((c.r[18].w[0] + 4u));
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = ld32((c.r[18].w[0] + 8u));
    c.f[12] = fp::add(c.f[5], c.f[4]);
    c.f[13] = fp::add(c.f[3], c.f[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B040u); c.f[14] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x0022B040u) [[unlikely]] return; }
L_0022B040:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B048u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0022B048u) [[unlikely]] return; }
L_0022B048:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B054u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001B(c, 162u, depth + 1u); else { c.pc = 0x0016EA60u; return; } if (c.pc != 0x0022B054u) [[unlikely]] return; }
L_0022B054:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022B010u | kUnwind; return; } goto L_0022B010; } }
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0022B080:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 3u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B0A8u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x0022B0A8u) [[unlikely]] return; }
L_0022B0A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022B124; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00230000u);
    set32(c.r[4], c.r[3].w[0] - 20016u);
    set32(c.r[5], 0u + 19u);
    set32(c.r[3], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(0u));
    c.f[3] = ld32((c.r[17].w[0]));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00230000u);
    set32(c.r[3], c.r[3].w[0] - 18528u);
    st32((c.r[2].w[0] + 32u), c.f[3]);
    st32((c.r[2].w[0] + 36u), c.f[2]);
    st32((c.r[2].w[0] + 40u), c.f[1]);
    st32((c.r[2].w[0] + 44u), c.f[0]);
    st32((c.r[2].w[0] + 12u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    c.f[3] = ld32((c.r[16].w[0]));
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    st32((c.r[2].w[0] + 320u), c.f[3]);
    st32((c.r[2].w[0] + 324u), c.f[2]);
    st32((c.r[2].w[0] + 328u), c.f[1]);
    st32((c.r[2].w[0] + 332u), c.f[0]);
    c.budget -= 29;
L_0022B124:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0022B140:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 3u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B160u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x0022B160u) [[unlikely]] return; }
L_0022B160:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022B1C0; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[5], 0u + 19u);
    set32(c.r[4], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00230000u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.f[3] = ld32((c.r[16].w[0]));
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    set32(c.r[4], c.r[3].w[0] - 20016u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00230000u);
    set32(c.r[3], c.r[3].w[0] - 18528u);
    st32((c.r[2].w[0] + 32u), c.f[3]);
    st32((c.r[2].w[0] + 36u), c.f[2]);
    st32((c.r[2].w[0] + 40u), c.f[1]);
    st32((c.r[2].w[0] + 44u), c.f[0]);
    st32((c.r[2].w[0] + 12u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 22;
L_0022B1C0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0022B1D0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] + 19392u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00228000u < 16384u) { entry = entries_004A[(t - 0x00228000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0022B1F0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[6], c.r[2].w[0] + 19168u);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[16], c.r[17].w[0] + 320u);
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[10], c.r[2].w[0] + 19408u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    mmi::paddub(c.r[7], c.r[16], c.r[0]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[8], c.r[16], c.r[0]);
    c.budget -= 20;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[9], c.r[16], c.r[0]);  if (t) { goto L_0022B2C8; } }
    set32(c.r[11], c.r[16].w[0] + c.r[3].w[0]);
    c.budget -= 1;
L_0022B244:
    c.r[3].d[0] = ld8((c.r[6].w[0]));
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.r[5].d[0] = c.r[2].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    st8((c.r[11].w[0] + 112u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 1u)));
    st8((c.r[11].w[0] + 115u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    st32((c.r[7].w[0] + 88u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    st32((c.r[4].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 12u));
    st32((c.r[4].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 16u));
    set32(c.r[4], c.r[4].w[0] + 8u);
    st32((c.r[8].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 20u));
    st32((c.r[8].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 24u));
    st32((c.r[8].w[0] + 24u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 28u)));
    set32(c.r[8], c.r[8].w[0] + 16u);
    st16((c.r[9].w[0] + 100u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 30u)));
    st16((c.r[9].w[0] + 106u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 32u)));
    set32(c.r[9], c.r[9].w[0] + 2u);
    st8((c.r[11].w[0] + 118u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[10].w[0])));
    set32(c.r[6], c.r[6].w[0] + 36u);
    st32((c.r[7].w[0] + 124u), c.r[2].w[0]);
    set32(c.r[7], c.r[7].w[0] + 4u);
    set32(c.r[10], c.r[10].w[0] + 4u);
    c.budget -= 33;
L_0022B2C8:
    c.r[3].d[0] = c.r[5].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[2].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[11], c.r[16].w[0] + c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022B244u | kUnwind; return; } goto L_0022B244; } }
    st32((c.r[29].w[0] + 64u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 68u), 0u);
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 84u), 0u);
    st32((c.r[29].w[0] + 72u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B2FCu); st32((c.r[29].w[0] + 88u), 0u);  if (depth < kMaxDepth) unit_0016(c, 129u, depth + 1u); else { c.pc = 0x0015B440u; return; } if (c.pc != 0x0022B2FCu) [[unlikely]] return; }
L_0022B2FC:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[4].d[0] = 0ull | 65535ull;
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    st32((c.r[17].w[0] + 88u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0022B370; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B324u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x0022B324u) [[unlikely]] return; }
L_0022B324:
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B330u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x0022B330u) [[unlikely]] return; }
L_0022B330:
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.f[20] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B340u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x0022B340u) [[unlikely]] return; }
L_0022B340:
    c.f[12] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B34Cu); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x0022B34Cu) [[unlikely]] return; }
L_0022B34C:
    st32((c.r[17].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[4], c.r[17].w[0] + 32u);
    set32(c.r[5], c.r[29].w[0] + 108u);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 16384u);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B370u); st32((c.r[29].w[0] + 108u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 15u, depth + 1u); else { c.pc = 0x002241A0u; return; } if (c.pc != 0x0022B370u) [[unlikely]] return; }
L_0022B370:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0022B390:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[21], c.r[4], c.r[0]);
    set32(c.r[16], c.r[21].w[0] + 320u);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[19], c.r[16], c.r[0]);  if (t) { goto L_0022B460; } }
L_0022B3C8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 106u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[2].w[0] - 1u);  goto L_0022B40C; }
    set32(c.r[2], c.r[16].w[0] + c.r[20].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 115u)));
    mmi::paddub(c.r[4], c.r[21], c.r[0]);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] + 19432u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B400u); mmi::paddub(c.r[6], c.r[18], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0022B400u) [[unlikely]] return; }
L_0022B400:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[16].w[0] + c.r[20].w[0]);  if (t) { goto L_0022B434; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 1;
L_0022B40C:
    st16((c.r[19].w[0] + 106u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0022B430; } }
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[16].w[0] + c.r[20].w[0]);
    st8((c.r[2].w[0] + 118u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_0022B430:
    set32(c.r[2], c.r[16].w[0] + c.r[20].w[0]);
    c.budget -= 1;
L_0022B434:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 118u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[18].w[0] + 1u);  if (t) { goto L_0022B454; } }
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.r[17].d[0] = c.r[2].d[0] << 56;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);
    set32(c.r[2], c.r[18].w[0] + 1u);
    c.budget -= 5;
L_0022B454:
    c.r[18].d[0] = c.r[2].d[0] << 56;
    set32(c.r[19], c.r[19].w[0] + 2u);
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 56);
    c.budget -= 3;
L_0022B460:
    c.r[20].d[0] = c.r[18].d[0] << 56;
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 56);
    c.r[2].d[0] = c.r[20].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022B3C8u | kUnwind; return; } goto L_0022B3C8; } }
    c.r[3].d[0] = c.r[17].d[0] << 56;
    set32(c.r[2], 0u + 3u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0022B494; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[21].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0022B494:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B49Cu);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x0022B49Cu) [[unlikely]] return; }
L_0022B49C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B4A4u); set32(c.r[4], c.r[21].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 17u, depth + 1u); else { c.pc = 0x0013C880u; return; } if (c.pc != 0x0022B4A4u) [[unlikely]] return; }
L_0022B4A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B4ACu); set32(c.r[4], c.r[21].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0022B4ACu) [[unlikely]] return; }
L_0022B4AC:
    set32(c.r[3], 0u + 1u);
    st8((c.r[21].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0022B4E0:
    c.r[7].d[0] = c.r[6].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    set32(c.r[3], c.r[7].w[0] << 1);
    set32(c.r[6], c.r[3].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 100u)));
    set32(c.r[8], c.r[6].w[0] + 100u);
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] != 0ull; st16((c.r[6].w[0] + 100u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0022B50C; } }
    set32(c.r[3], c.r[7].w[0] + c.r[5].w[0]);
    st8((c.r[3].w[0] + 118u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0022B50C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0])));
    c.r[3].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[7].w[0] << 3);  if (t) { goto L_0022B554; } }
    set32(c.r[3], c.r[7].w[0] << 3);
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 64u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.r[3].d[0] = c.r[3].d[0] | 26214ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 68u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 68u), c.f[0]);  if (t) { goto L_0022B57C; } }
    set32(c.r[3], c.r[7].w[0] << 3);
    c.budget -= 1;
L_0022B554:
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 64u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F200000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 68u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 68u), c.f[0]);
    c.budget -= 10;
L_0022B57C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0])));
    c.r[1].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0022B5B0; } }
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    c.f[1] = ld32((c.r[4].w[0] + 88u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBE4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 88u), c.f[0]);
    c.budget -= 9;
L_0022B5B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0022B5C0:
    c.r[7].d[0] = c.r[6].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    set32(c.r[3], c.r[7].w[0] << 1);
    set32(c.r[6], c.r[3].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 100u)));
    set32(c.r[8], c.r[6].w[0] + 100u);
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] != 0ull; st16((c.r[6].w[0] + 100u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0022B5EC; } }
    set32(c.r[3], c.r[7].w[0] + c.r[5].w[0]);
    st8((c.r[3].w[0] + 118u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0022B5EC:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] >= 0; c.r[3].d[0] = c.r[4].d[0] & 1ull;  if (t) { goto L_0022B604; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0022B604; } }
    set32(c.r[3], c.r[3].w[0] - 2u);
    c.budget -= 1;
L_0022B604:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0022B634; } }
    set32(c.r[5], c.r[7].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 112u));
    set32(c.r[3], 0u + 92u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[5].w[0] + 112u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 112u));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[6], c.r[5].w[0] + 112u);  if (t) { goto L_0022B634; } }
    set32(c.r[3], 0u + 91u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0022B634:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0022B640:
    c.r[8].d[0] = c.r[6].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    set32(c.r[3], c.r[8].w[0] << 1);
    set32(c.r[7], c.r[3].w[0] + c.r[5].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 100u)));
    set32(c.r[4], c.r[7].w[0] + 100u);
    set32(c.r[3], c.r[6].w[0] - 1u);
    c.budget -= 9;
    { const bool t = c.r[6].d[0] != 0ull; st16((c.r[7].w[0] + 100u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0022B670; } }
    set32(c.r[3], c.r[8].w[0] + c.r[5].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 118u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0022B778; } }
L_0022B670:
    set32(c.r[7], c.r[8].w[0] << 3);
    set32(c.r[11], c.r[7].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[11].w[0] + 64u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3B880000u);
    c.r[3].d[0] = c.r[3].d[0] | 34953ull;
    c.f[1] = c.r[3].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[6], c.r[6].w[0] + 19440u);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    set32(c.r[3], c.r[8].w[0] << 4);
    set32(c.r[10], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[11].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[11].w[0] + 68u));
    set32(c.r[9], c.r[6].w[0] + c.r[7].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[6], c.r[6].w[0] + 19444u);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    set32(c.r[7], c.r[6].w[0] + c.r[7].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[11].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[9].w[0]));
    c.f[1] = ld32((c.r[10].w[0] + 16u));
    set32(c.r[3], c.r[8].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + 19480u);
    set32(c.r[8], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    st32((c.r[10].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0]));
    c.f[1] = ld32((c.r[10].w[0] + 20u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[10].w[0] + 20u), c.f[0]);
    set32(c.r[6], ld32((c.r[6].w[0])));
    set32(c.r[7], ld32((c.r[8].w[0] + 124u)));
    set32(c.r[6], c.r[7].w[0] + c.r[6].w[0]);
    st32((c.r[8].w[0] + 124u), c.r[6].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    c.r[6].d[0] = c.r[6].sd[0] < 115ll ? 1ull : 0ull;
    c.budget -= 40;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_0022B72C; } }
    c.f[1] = ld32((c.r[8].w[0] + 88u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.r[6].d[0] = c.r[6].d[0] | 52429ull;
    c.f[0] = c.r[6].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[8].w[0] + 88u), c.f[0]);
    c.budget -= 7;
L_0022B72C:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    c.r[1].d[0] = c.r[6].sd[0] < 50ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], 0u + 115u);  if (t) { goto L_0022B764; } }
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    c.f[1] = ld32((c.r[4].w[0] + 88u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBCA30000u);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 88u), c.f[0]);  if (t) { goto L_0022B778; } }
    set32(c.r[4], 0u + 115u);
    c.budget -= 1;
L_0022B764:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[4].d[0];  if (t) { goto L_0022B778; } }
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[3].w[0] + 88u), c.r[4].w[0]);
    c.budget -= 3;
L_0022B778:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0022B780:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0022B790:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_0022B7A0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.budget -= 1;
L_0022B7A4:
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0022B7A8:
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.budget -= 1;
L_0022B7AC:
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.budget -= 1;
L_0022B7B0:
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 1;
L_0022B7B4:
    set32(c.r[3], c.r[29].w[0] + 144u);
    c.budget -= 1;
L_0022B7B8:
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 1;
L_0022B7BC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 1;
L_0022B7C0:
    st32((c.r[1].w[0] - 20396u), c.r[3].w[0]);
    c.budget -= 1;
L_0022B7C4:
    set32(c.r[3], c.r[28].w[0] - 29512u);
    c.budget -= 1;
L_0022B7C8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 1;
L_0022B7CC:
    st32((c.r[1].w[0] - 20380u), c.r[3].w[0]);
    c.budget -= 1;
L_0022B7D0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0022B7D4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 1;
L_0022B7D8:
    st32((c.r[1].w[0] - 20360u), c.r[3].w[0]);
    c.budget -= 1;
L_0022B7DC:
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    c.budget -= 1;
L_0022B7E0:
    set32(c.r[3], 0u + 10u);
    c.budget -= 1;
L_0022B7E4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 1;
L_0022B7E8:
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 1;
L_0022B7EC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 1;
L_0022B7F0:
    set32(c.r[16], c.r[18].w[0] + 320u);
    c.budget -= 1;
L_0022B7F4:
    st32((c.r[1].w[0] - 20352u), 0u);
    c.budget -= 1;
L_0022B7F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[17], c.r[0], c.r[0]);  if (t) { goto L_0022BB10; } }
    goto L_0022B800;
L_0022B7FC:
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 1;
L_0022B800:
    c.r[3].d[0] = c.r[17].d[0] << 56;
    c.budget -= 1;
L_0022B804:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 1;
L_0022B808:
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 1;
L_0022B80C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 118u)));
    c.budget -= 1;
L_0022B810:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[17].w[0] + 1u);  if (t) { goto L_0022BB04; } }
    goto L_0022B818;
L_0022B814:
    set32(c.r[3], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0022B818:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B820u); set32(c.r[4], c.r[18].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x0022B820u) [[unlikely]] return; }
    goto L_0022B820;
L_0022B81C:
    set32(c.r[4], c.r[18].w[0] + 192u);
    c.budget -= 1;
L_0022B820:
    c.r[2].d[0] = c.r[17].d[0] << 56;
    c.budget -= 1;
L_0022B824:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 1;
L_0022B828:
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 1;
L_0022B82C:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 1;
L_0022B830:
    c.f[13] = ld32((c.r[2].w[0] + 20u));
    c.budget -= 1;
L_0022B834:
    c.f[14] = ld32((c.r[2].w[0] + 24u));
    c.budget -= 1;
L_0022B838:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B840u); c.f[12] = ld32((c.r[2].w[0] + 16u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x0022B840u) [[unlikely]] return; }
    goto L_0022B840;
L_0022B83C:
    c.f[12] = ld32((c.r[2].w[0] + 16u));
    c.budget -= 1;
L_0022B840:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B848u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0022B848u) [[unlikely]] return; }
    goto L_0022B848;
L_0022B844:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 1;
L_0022B848:
    set32(c.r[3], c.r[29].w[0] + 80u);
    c.budget -= 1;
L_0022B84C:
    set32(c.r[2], c.r[29].w[0] + 144u);
    c.budget -= 1;
L_0022B850:
    ld128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[4]);
    c.budget -= 1;
L_0022B854:
    vu::move(c.vu0, 1u, 4u, 0u);
    c.budget -= 1;
L_0022B858:
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    c.budget -= 1;
L_0022B85C:
    c.r[4].d[0] = c.r[17].d[0] << 56;
    c.budget -= 1;
L_0022B860:
    set32(c.r[2], c.r[28].w[0] - 29512u);
    c.budget -= 1;
L_0022B864:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 1;
L_0022B868:
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    c.budget -= 1;
L_0022B86C:
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 1;
L_0022B870:
    set32(c.r[2], c.r[4].w[0] << 3);
    c.budget -= 1;
L_0022B874:
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 1;
L_0022B878:
    c.f[0] = ld32((c.r[3].w[0] + 64u));
    c.budget -= 1;
L_0022B87C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 1;
L_0022B880:
    set32(c.r[2], c.r[4].w[0] << 2);
    c.budget -= 1;
L_0022B884:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 1;
L_0022B888:
    st32((c.r[1].w[0] - 20416u), c.f[0]);
    c.budget -= 1;
L_0022B88C:
    c.f[0] = ld32((c.r[3].w[0] + 68u));
    c.budget -= 1;
L_0022B890:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 1;
L_0022B894:
    st32((c.r[1].w[0] - 20412u), c.f[0]);
    c.budget -= 1;
L_0022B898:
    set32(c.r[3], ld32((c.r[2].w[0] + 124u)));
    c.budget -= 1;
L_0022B89C:
    set32(c.r[2], ld32((c.r[18].w[0] + 88u)));
    c.budget -= 1;
L_0022B8A0:
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B8ACu); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_000E(c, 277u, depth + 1u); else { c.pc = 0x0013B2D0u; return; } if (c.pc != 0x0022B8ACu) [[unlikely]] return; }
L_0022B8AC:
    c.r[4].d[0] = c.r[17].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[3], c.r[4].w[0] << 2);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[1].w[0] - 20372u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 88u));
    set32(c.r[5], c.r[28].w[0] - 29512u);
    c.f[1] = 0u;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[0] = fp::max(c.f[1], c.f[0]);
    c.f[1] = c.r[8].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[8], c.f[0]);
    st8((c.r[5].w[0] + 3u), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[3], c.r[4].w[0] + c.r[16].w[0]);
    c.r[4].d[0] = ld8((c.r[3].w[0] + 112u));
    set32(c.r[3], 0u + 6u);
    c.budget -= 23;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[3].d[0] = c.r[4].sd[0] < 76ll ? 1ull : 0ull;  if (t) { goto L_0022B980; } }
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B914u); mmi::paddub(c.r[19], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_001E(c, 201u, depth + 1u); else { c.pc = 0x0017BBC0u; return; } if (c.pc != 0x0022B914u) [[unlikely]] return; }
L_0022B914:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[19].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[3], c.r[2].w[0] << 4);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] + 19552u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20388u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] + 19504u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20384u), c.r[2].w[0]);
    set32(c.r[2], c.r[28].w[0] - 29528u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20368u), c.r[2].w[0]);
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B974u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001C(c, 64u, depth + 1u); else { c.pc = 0x00171620u; return; } if (c.pc != 0x0022B974u) [[unlikely]] return; }
L_0022B974:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022BB00; } }
    c.r[3].d[0] = c.r[4].sd[0] < 76ll ? 1ull : 0ull;
    c.budget -= 1;
L_0022B980:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[17].d[0] << 56;  if (t) { goto L_0022BA2C; } }
    c.r[1].d[0] = c.r[4].sd[0] < 92ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0022BA28; } }
    set32(c.r[19], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B9A0u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_001E(c, 201u, depth + 1u); else { c.pc = 0x0017BBC0u; return; } if (c.pc != 0x0022B9A0u) [[unlikely]] return; }
L_0022B9A0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[19].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[3], c.r[2].w[0] << 4);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] + 19552u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20388u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] + 19504u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20384u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[17].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[4].d[0] = ld8((c.r[2].w[0] + 112u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[4], c.r[4].w[0] - 76u);
    set32(c.r[3], c.r[2].w[0] + 19600u);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[1].w[0] - 20368u), c.r[3].w[0]);
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022BA20u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001C(c, 51u, depth + 1u); else { c.pc = 0x001712A0u; return; } if (c.pc != 0x0022BA20u) [[unlikely]] return; }
L_0022BA20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022BB00; } }
L_0022BA28:
    c.r[3].d[0] = c.r[17].d[0] << 56;
    c.budget -= 1;
L_0022BA2C:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[4].d[0] = ld8((c.r[3].w[0] + 112u));
    set32(c.r[3], 0u + 9u);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0022BB00; } }
    set32(c.r[19], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022BA50u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_001E(c, 201u, depth + 1u); else { c.pc = 0x0017BBC0u; return; } if (c.pc != 0x0022BA50u) [[unlikely]] return; }
L_0022BA50:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[19].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[3], c.r[2].w[0] << 4);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] + 19552u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20388u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] + 19504u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20384u), c.r[2].w[0]);
    set32(c.r[2], c.r[28].w[0] - 29520u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20368u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[29].w[0] + 144u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20352u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[17].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 88u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42000000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 33;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022BAD4u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x0022BAD4u) [[unlikely]] return; }
L_0022BAD4:
    st8((c.r[29].w[0] + 174u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[29].w[0] + 173u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[29].w[0] + 172u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[28].w[0] - 29509u));
    set32(c.r[2], c.r[29].w[0] + 172u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] - 20416u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022BB00u); st8((c.r[29].w[0] + 175u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_001C(c, 51u, depth + 1u); else { c.pc = 0x001712A0u; return; } if (c.pc != 0x0022BB00u) [[unlikely]] return; }
L_0022BB00:
    set32(c.r[3], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0022BB04:
    c.r[17].d[0] = c.r[3].d[0] << 56;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);
    c.budget -= 3;
L_0022BB10:
    c.r[3].d[0] = c.r[17].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[3].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[17].d[0] << 56;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022B804u | kUnwind; return; } goto L_0022B804; } }
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_0022BB40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], 0u + 3u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022BB58u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x0022BB58u) [[unlikely]] return; }
L_0022BB58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022BBC4; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00230000u);
    set32(c.r[5], 0u + 19u);
    set32(c.r[4], 0u + 20u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], c.r[3].w[0] - 17456u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 6u)));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 694u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[6], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 6u)));
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 260u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 698u)));
    st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 273u), static_cast<std::uint8_t>(0u));
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 25;
L_0022BBC4:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0022BBD0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] + 20704u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00228000u < 16384u) { entry = entries_004A[(t - 0x00228000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0022BBF0:
    set32(c.r[9], ld32((c.r[28].w[0] - 26304u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00230000u);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[6], c.r[5].w[0] - 15408u);
    set32(c.r[7], 0u + 180u);
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 6u)));
    set32(c.r[3], c.r[4].w[0] + 320u);
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[5], c.r[10].w[0] + c.r[9].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 260u)));
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[7].w[0]));
    st32((c.r[4].w[0] + 320u), 0u);
    st16((c.r[4].w[0] + 332u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 338u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 340u), static_cast<std::uint8_t>(0u));
    st16((c.r[4].w[0] + 334u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 336u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 341u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 342u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 88u), 0u);
    st32((c.r[4].w[0] + 84u), 0u);
    st32((c.r[4].w[0] + 80u), 0u);
    c.budget -= 26;
    { const bool t = c.r[5].d[0] != 0ull; st32((c.r[4].w[0] + 168u), c.r[6].w[0]);  if (t) { goto L_0022BC68; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 26300u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 644u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 23u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { goto L_0022BC78; } }
L_0022BC68:
    set32(c.r[6], ld32((c.r[28].w[0] - 26300u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 644u)));
    set32(c.r[6], c.r[6].w[0] - 4u);
    st8((c.r[3].w[0] + 23u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 4;
L_0022BC78:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[8], c.r[7].w[0] - 12688u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[6].d[0] = c.r[10].d[0] << 56;
    set32(c.r[9], c.r[9].w[0] << 5);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    st32((c.r[4].w[0] + 176u), c.r[8].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    set32(c.r[7], c.r[7].w[0] - 12688u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    set32(c.r[8], c.r[8].w[0] << 5);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    st32((c.r[4].w[0] + 176u), c.r[7].w[0]);
    set32(c.r[8], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[7], c.r[6].w[0] + c.r[8].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 694u)));
    c.r[1].d[0] = c.r[7].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 20;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0022BD7C; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0022BD7C; } }
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 336u)));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] != 0ull; set32(c.r[7], 0u + 1u);  if (t) { goto L_0022BCE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 12u), static_cast<std::uint16_t>(0u));  if (t) { goto L_0022BD7C; } }
    set32(c.r[7], 0u + 1u);
    c.budget -= 1;
L_0022BCE8:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != c.r[7].d[0]; set32(c.r[7], 0u + 2u);  if (t) { goto L_0022BD00; } }
    set32(c.r[7], 0u + 48u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 12u), static_cast<std::uint16_t>(c.r[7].w[0]));  if (t) { goto L_0022BD7C; } }
    set32(c.r[7], 0u + 2u);
    c.budget -= 1;
L_0022BD00:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != c.r[7].d[0]; set32(c.r[7], 0u + 17u);  if (t) { goto L_0022BD18; } }
    set32(c.r[7], 0u + 96u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 12u), static_cast<std::uint16_t>(c.r[7].w[0]));  if (t) { goto L_0022BD7C; } }
    set32(c.r[7], 0u + 17u);
    c.budget -= 1;
L_0022BD18:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != c.r[7].d[0]; set32(c.r[7], 0u + 19u);  if (t) { goto L_0022BD30; } }
    set32(c.r[7], 0u + 144u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 12u), static_cast<std::uint16_t>(c.r[7].w[0]));  if (t) { goto L_0022BD7C; } }
    set32(c.r[7], 0u + 19u);
    c.budget -= 1;
L_0022BD30:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != c.r[7].d[0]; set32(c.r[7], 0u + 20u);  if (t) { goto L_0022BD48; } }
    set32(c.r[7], 0u + 192u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 12u), static_cast<std::uint16_t>(c.r[7].w[0]));  if (t) { goto L_0022BD7C; } }
    set32(c.r[7], 0u + 20u);
    c.budget -= 1;
L_0022BD48:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != c.r[7].d[0]; set32(c.r[7], 0u + 33u);  if (t) { goto L_0022BD60; } }
    set32(c.r[7], 0u + 240u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 12u), static_cast<std::uint16_t>(c.r[7].w[0]));  if (t) { goto L_0022BD7C; } }
    set32(c.r[7], 0u + 33u);
    c.budget -= 1;
L_0022BD60:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != c.r[7].d[0]; set32(c.r[7], 0u + 336u);  if (t) { goto L_0022BD78; } }
    set32(c.r[7], 0u + 288u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 12u), static_cast<std::uint16_t>(c.r[7].w[0]));  if (t) { goto L_0022BD7C; } }
    set32(c.r[7], 0u + 336u);
    c.budget -= 1;
L_0022BD78:
    st16((c.r[3].w[0] + 12u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.budget -= 1;
L_0022BD7C:
    set32(c.r[8], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[7], 0u + 2u);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 373u)));
    st8((c.r[3].w[0] + 24u), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[9], ld32((c.r[28].w[0] - 26300u)));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 373u)));
    c.budget -= 8;
    { const bool t = c.r[8].d[0] != c.r[7].d[0];  if (t) { goto L_0022BDD0; } }
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 256u)));
    set32(c.r[7], 0u + 7u);
    c.budget -= 4;
    { const bool t = c.r[8].d[0] != c.r[7].d[0];  if (t) { goto L_0022BDB4; } }
    set32(c.r[7], 0u + 10u);
    st8((c.r[3].w[0] + 24u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 2;
L_0022BDB4:
    set32(c.r[8], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[7], 0u + 15u);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 256u)));
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != c.r[7].d[0];  if (t) { goto L_0022BDD0; } }
    set32(c.r[7], 0u + 11u);
    st8((c.r[3].w[0] + 24u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 2;
L_0022BDD0:
    set32(c.r[9], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[8], 0u + 3u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 373u)));
    c.budget -= 5;
    { const bool t = c.r[7].d[0] != c.r[8].d[0];  if (t) { goto L_0022BE30; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 256u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[8].d[0];  if (t) { goto L_0022BDF8; } }
    set32(c.r[7], 0u + 12u);
    st8((c.r[3].w[0] + 24u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 2;
L_0022BDF8:
    set32(c.r[8], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[7], 0u + 7u);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 256u)));
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != c.r[7].d[0];  if (t) { goto L_0022BE14; } }
    set32(c.r[7], 0u + 13u);
    st8((c.r[3].w[0] + 24u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 2;
L_0022BE14:
    set32(c.r[8], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[7], 0u + 15u);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 256u)));
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != c.r[7].d[0];  if (t) { goto L_0022BE30; } }
    set32(c.r[7], 0u + 14u);
    st8((c.r[3].w[0] + 24u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 2;
L_0022BE30:
    set32(c.r[7], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[7], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[8], c.r[7].w[0] + 694u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 694u)));
    c.budget -= 6;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_0022BE5C; } }
    set32(c.r[7], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[7].d[0];  if (t) { goto L_0022BE5C; } }
    set32(c.r[5], 0u + 18u);
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 2;
L_0022BE5C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[9], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[10], c.r[5].w[0] - 24864u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 23u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 24u)));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 12u)));
    set32(c.r[6], c.r[6].w[0] + c.r[9].w[0]);
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 694u)));
    set32(c.r[9], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[7].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[8].w[0] + c.r[5].w[0]);
    set32(c.r[6], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[11].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] - c.r[11].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[10].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[9].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    set32(c.r[6], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[6].w[0])));
    st32((c.r[3].w[0] + 4u), c.r[6].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 12u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    st16((c.r[3].w[0] + 12u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 18u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    st16((c.r[3].w[0] + 18u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 23u)));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 12u)));
    set32(c.r[6], c.r[7].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[8].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[6].w[0])));
    st32((c.r[3].w[0] + 8u), c.r[6].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 12u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    st16((c.r[3].w[0] + 12u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 18u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    st16((c.r[3].w[0] + 18u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 23u)));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 12u)));
    set32(c.r[6], c.r[7].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[8].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 12u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st16((c.r[3].w[0] + 12u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 18u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 62;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[3].w[0] + 18u), static_cast<std::uint16_t>(c.r[4].w[0]));  c.pc = t; return; }
L_0022BF60:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[8], ld32((c.r[28].w[0] - 26304u)));
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[7], c.r[3].w[0] - 24864u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 344u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[9], ld32((c.r[28].w[0] - 26300u)));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 6u)));
    set32(c.r[3], 0u + 3u);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[8].w[0] + c.r[9].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 694u)));
    set32(c.r[5], c.r[8].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] - c.r[8].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[7].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[17], ld32((c.r[4].w[0])));
    c.budget -= 25;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[16], c.r[18].w[0] + 320u);  if (t) { [[clang::musttail]] return unit_004B(c, 12u, depth); } }
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[4].d[0];  if (t) { [[clang::musttail]] return unit_004B(c, 5u, depth); } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { [[clang::musttail]] return unit_004B(c, 2u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0022BFEC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);  if (t) { [[clang::musttail]] return unit_004B(c, 13u, depth); } }
L_0022BFEC:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 5;
    [[clang::musttail]] return unit_004B(c, 1u, depth);
}

}
