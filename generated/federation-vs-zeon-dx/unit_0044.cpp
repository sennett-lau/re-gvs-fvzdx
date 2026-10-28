#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0044[4096] = {
    1, 0, 0, 0, 2, 3, 0, 4, 5, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 8, 0, 0, 0, 0, 0,
    9, 0, 0, 0, 0, 10, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 13, 0, 14, 15, 16, 0, 17, 18, 0, 0, 0, 0, 19,
    0, 0, 0, 0, 0, 20, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 23, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 24, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 27,
    28, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 34, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0,
    0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 42, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 46, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 50, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 57, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64,
    0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69,
    0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 72, 0, 0, 0, 0, 0, 0, 0, 73, 0, 74, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 82, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 88, 0, 0, 89, 0, 90, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 94, 0, 95, 0, 0, 0, 0, 96, 0, 0, 97, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98,
    0, 0, 99, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 104, 0, 0, 105, 0, 106, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 109, 0, 0, 110, 0, 111, 0, 0, 0, 0, 112, 0, 0, 113,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 114, 0, 0, 115, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 121, 0, 122, 0, 0, 123, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 126, 0, 0, 127, 0, 0, 128, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0, 133, 0, 134, 0, 0, 0, 0, 135, 0, 0, 136, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 138, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 143, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 148, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 152, 0, 0, 153, 0, 0, 154, 0, 0, 155, 0, 0, 156, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0,
    0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    191, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 197, 0, 198, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 203, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 211, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 218,
    0, 219, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 222, 0, 0, 223, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    227, 0, 0, 0, 0, 0, 228, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 233, 0,
    0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0044(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00210000;
    case 2u: goto L_00210010;
    case 3u: goto L_00210014;
    case 4u: goto L_0021001C;
    case 5u: goto L_00210020;
    case 6u: goto L_00210034;
    case 7u: goto L_0021005C;
    case 8u: goto L_00210068;
    case 9u: goto L_00210080;
    case 10u: goto L_00210094;
    case 11u: goto L_002100A0;
    case 12u: goto L_002100C4;
    case 13u: goto L_002100CC;
    case 14u: goto L_002100D4;
    case 15u: goto L_002100D8;
    case 16u: goto L_002100DC;
    case 17u: goto L_002100E4;
    case 18u: goto L_002100E8;
    case 19u: goto L_002100FC;
    case 20u: goto L_00210114;
    case 21u: goto L_00210120;
    case 22u: goto L_0021015C;
    case 23u: goto L_00210168;
    case 24u: goto L_00210194;
    case 25u: goto L_002101A0;
    case 26u: goto L_002101E0;
    case 27u: goto L_002101FC;
    case 28u: goto L_00210200;
    case 29u: goto L_0021020C;
    case 30u: goto L_00210270;
    case 31u: goto L_002102BC;
    case 32u: goto L_002102E4;
    case 33u: goto L_00210358;
    case 34u: goto L_00210360;
    case 35u: goto L_002103F0;
    case 36u: goto L_00210408;
    case 37u: goto L_0021044C;
    case 38u: goto L_00210454;
    case 39u: goto L_00210480;
    case 40u: goto L_002104B0;
    case 41u: goto L_002104DC;
    case 42u: goto L_002104E4;
    case 43u: goto L_00210510;
    case 44u: goto L_00210548;
    case 45u: goto L_00210570;
    case 46u: goto L_00210578;
    case 47u: goto L_002105D0;
    case 48u: goto L_002105D8;
    case 49u: goto L_002106E4;
    case 50u: goto L_002106F8;
    case 51u: goto L_00210730;
    case 52u: goto L_002107A0;
    case 53u: goto L_002107D8;
    case 54u: goto L_00210830;
    case 55u: goto L_00210870;
    case 56u: goto L_002108D8;
    case 57u: goto L_002108E4;
    case 58u: goto L_00210960;
    case 59u: goto L_00210A14;
    case 60u: goto L_00210A5C;
    case 61u: goto L_00210AA4;
    case 62u: goto L_00210AEC;
    case 63u: goto L_00210B34;
    case 64u: goto L_00210B7C;
    case 65u: goto L_00210B88;
    case 66u: goto L_00210BEC;
    case 67u: goto L_00210C58;
    case 68u: goto L_00210D50;
    case 69u: goto L_00210D7C;
    case 70u: goto L_00210D90;
    case 71u: goto L_00210DBC;
    case 72u: goto L_00210E04;
    case 73u: goto L_00210E24;
    case 74u: goto L_00210E2C;
    case 75u: goto L_00210E34;
    case 76u: goto L_00210EC0;
    case 77u: goto L_002110C8;
    case 78u: goto L_002110D4;
    case 79u: goto L_00211150;
    case 80u: goto L_0021115C;
    case 81u: goto L_00211360;
    case 82u: goto L_0021136C;
    case 83u: goto L_0021142C;
    case 84u: goto L_00211438;
    case 85u: goto L_00211500;
    case 86u: goto L_002115A8;
    case 87u: goto L_00211618;
    case 88u: goto L_0021162C;
    case 89u: goto L_00211638;
    case 90u: goto L_00211640;
    case 91u: goto L_00211650;
    case 92u: goto L_002116A8;
    case 93u: goto L_002116B8;
    case 94u: goto L_002116C4;
    case 95u: goto L_002116CC;
    case 96u: goto L_002116E0;
    case 97u: goto L_002116EC;
    case 98u: goto L_0021187C;
    case 99u: goto L_00211888;
    case 100u: goto L_00211894;
    case 101u: goto L_00211910;
    case 102u: goto L_002119B8;
    case 103u: goto L_00211A28;
    case 104u: goto L_00211A3C;
    case 105u: goto L_00211A48;
    case 106u: goto L_00211A50;
    case 107u: goto L_00211A60;
    case 108u: goto L_00211AB8;
    case 109u: goto L_00211AC8;
    case 110u: goto L_00211AD4;
    case 111u: goto L_00211ADC;
    case 112u: goto L_00211AF0;
    case 113u: goto L_00211AFC;
    case 114u: goto L_00211C8C;
    case 115u: goto L_00211C98;
    case 116u: goto L_00211CA4;
    case 117u: goto L_00211D20;
    case 118u: goto L_00211DC4;
    case 119u: goto L_00211E34;
    case 120u: goto L_00211E44;
    case 121u: goto L_00211E50;
    case 122u: goto L_00211E58;
    case 123u: goto L_00211E64;
    case 124u: goto L_00211F20;
    case 125u: goto L_00211F44;
    case 126u: goto L_00211F50;
    case 127u: goto L_00211F5C;
    case 128u: goto L_00211F68;
    case 129u: goto L_00211FA0;
    case 130u: goto L_00212044;
    case 131u: goto L_002120B4;
    case 132u: goto L_002120C4;
    case 133u: goto L_002120D0;
    case 134u: goto L_002120D8;
    case 135u: goto L_002120EC;
    case 136u: goto L_002120F8;
    case 137u: goto L_00212228;
    case 138u: goto L_00212234;
    case 139u: goto L_00212240;
    case 140u: goto L_002122B0;
    case 141u: goto L_00212348;
    case 142u: goto L_002123A0;
    case 143u: goto L_002123AC;
    case 144u: goto L_002123B8;
    case 145u: goto L_00212430;
    case 146u: goto L_002124C8;
    case 147u: goto L_00212520;
    case 148u: goto L_0021252C;
    case 149u: goto L_00212538;
    case 150u: goto L_002125B0;
    case 151u: goto L_00212648;
    case 152u: goto L_00212690;
    case 153u: goto L_0021269C;
    case 154u: goto L_002126A8;
    case 155u: goto L_002126B4;
    case 156u: goto L_002126C0;
    case 157u: goto L_002126CC;
    case 158u: goto L_00212710;
    case 159u: goto L_00212730;
    case 160u: goto L_0021273C;
    case 161u: goto L_002127F8;
    case 162u: goto L_00212860;
    case 163u: goto L_0021289C;
    case 164u: goto L_002128CC;
    case 165u: goto L_002128DC;
    case 166u: goto L_00212918;
    case 167u: goto L_00212948;
    case 168u: goto L_00212958;
    case 169u: goto L_00212994;
    case 170u: goto L_002129C4;
    case 171u: goto L_002129D4;
    case 172u: goto L_00212A18;
    case 173u: goto L_00212A50;
    case 174u: goto L_00212A84;
    case 175u: goto L_00212AB4;
    case 176u: goto L_00212AC4;
    case 177u: goto L_00212AEC;
    case 178u: goto L_00212B1C;
    case 179u: goto L_00212B40;
    case 180u: goto L_00212B7C;
    case 181u: goto L_00212BAC;
    case 182u: goto L_00212BBC;
    case 183u: goto L_00212C24;
    case 184u: goto L_00212C74;
    case 185u: goto L_00212CF0;
    case 186u: goto L_00212D04;
    case 187u: goto L_00212D30;
    case 188u: goto L_00212D80;
    case 189u: goto L_00212DD8;
    case 190u: goto L_00212E18;
    case 191u: goto L_00212E80;
    case 192u: goto L_00212E8C;
    case 193u: goto L_00212F14;
    case 194u: goto L_00212FC0;
    case 195u: goto L_00213010;
    case 196u: goto L_00213060;
    case 197u: goto L_0021306C;
    case 198u: goto L_00213074;
    case 199u: goto L_002130D8;
    case 200u: goto L_00213148;
    case 201u: goto L_00213240;
    case 202u: goto L_00213260;
    case 203u: goto L_0021328C;
    case 204u: goto L_0021329C;
    case 205u: goto L_00213328;
    case 206u: goto L_00213534;
    case 207u: goto L_00213540;
    case 208u: goto L_002135D0;
    case 209u: goto L_002135DC;
    case 210u: goto L_002137E4;
    case 211u: goto L_002137F0;
    case 212u: goto L_002138AC;
    case 213u: goto L_002138B8;
    case 214u: goto L_00213980;
    case 215u: goto L_00213A58;
    case 216u: goto L_00213AE0;
    case 217u: goto L_00213AF0;
    case 218u: goto L_00213AFC;
    case 219u: goto L_00213B04;
    case 220u: goto L_00213B10;
    case 221u: goto L_00213CA0;
    case 222u: goto L_00213CAC;
    case 223u: goto L_00213CB8;
    case 224u: goto L_00213CC4;
    case 225u: goto L_00213D10;
    case 226u: goto L_00213DA0;
    case 227u: goto L_00213E00;
    case 228u: goto L_00213E18;
    case 229u: goto L_00213E24;
    case 230u: goto L_00213E70;
    case 231u: goto L_00213F00;
    case 232u: goto L_00213F60;
    case 233u: goto L_00213F78;
    case 234u: goto L_00213F84;
    case 235u: goto L_00213FD0;
    default: bad_entry(c, 0x00210000u); return;
    }
L_00210000:
    st32((c.r[4].w[0] + 4u), c.f[2]);
    st32((c.r[4].w[0] + 8u), c.f[1]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210010u); st32((c.r[4].w[0] + 12u), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x00210010u) [[unlikely]] return; }
L_00210010:
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 1;
L_00210014:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021001Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_004A(c, 122u, depth + 1u); else { c.pc = 0x0022A2F0u; return; } if (c.pc != 0x0021001Cu) [[unlikely]] return; }
L_0021001C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_00210020:
    c.r[3].d[0] = c.r[18].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0020FFE4u | kUnwind; return; } [[clang::musttail]] return unit_0043(c, 242u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 87u)));  if (t) { goto L_00210044; } }
L_00210034:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 86u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 86u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 87u)));
    c.budget -= 4;
L_00210044:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_002100BC; }
    set32(c.r[2], 0u + 16u);
    set32(c.r[4], c.r[17].w[0] + 1984u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021005Cu); st8((c.r[16].w[0] + 87u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x0021005Cu) [[unlikely]] return; }
L_0021005C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[19], 0u + 4u);
    set32(c.r[18], c.r[2].w[0] - 6144u);
    c.budget -= 3;
L_00210068:
    c.f[3] = ld32((c.r[18].w[0]));
    c.f[2] = ld32((c.r[18].w[0] + 4u));
    c.f[1] = ld32((c.r[18].w[0] + 8u));
    c.f[0] = ld32((c.r[18].w[0] + 12u));
    set32(c.r[4], c.r[29].w[0] + 80u);
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    c.budget -= 6;
L_00210080:
    st32((c.r[4].w[0]), c.f[3]);
    st32((c.r[4].w[0] + 4u), c.f[2]);
    st32((c.r[4].w[0] + 8u), c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210094u); st32((c.r[4].w[0] + 12u), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x00210094u) [[unlikely]] return; }
L_00210094:
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002100A0u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_004A(c, 122u, depth + 1u); else { c.pc = 0x0022A2F0u; return; } if (c.pc != 0x002100A0u) [[unlikely]] return; }
L_002100A0:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[3].d[0] = c.r[19].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00210068u | kUnwind; return; } goto L_00210068; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 88u)));  if (t) { goto L_002100C4; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_002100BC:
    st8((c.r[16].w[0] + 87u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 88u)));
    c.budget -= 2;
L_002100C4:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_0021013C; }
L_002100CC:
    set32(c.r[2], 0u + 16u);
    set32(c.r[4], c.r[17].w[0] + 1984u);
    c.budget -= 2;
L_002100D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002100DCu); st8((c.r[16].w[0] + 88u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002100DCu) [[unlikely]] return; }
    goto L_002100DC;
L_002100D8:
    st8((c.r[16].w[0] + 88u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_002100DC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[19], 0u + 7u);
    c.budget -= 2;
L_002100E4:
    set32(c.r[18], c.r[2].w[0] - 6096u);
    c.budget -= 1;
L_002100E8:
    c.f[3] = ld32((c.r[18].w[0]));
    c.f[2] = ld32((c.r[18].w[0] + 4u));
    c.f[1] = ld32((c.r[18].w[0] + 8u));
    c.f[0] = ld32((c.r[18].w[0] + 12u));
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 5;
L_002100FC:
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    st32((c.r[4].w[0]), c.f[3]);
    st32((c.r[4].w[0] + 4u), c.f[2]);
    st32((c.r[4].w[0] + 8u), c.f[1]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210114u); st32((c.r[4].w[0] + 12u), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x00210114u) [[unlikely]] return; }
L_00210114:
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210120u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_004A(c, 122u, depth + 1u); else { c.pc = 0x0022A2F0u; return; } if (c.pc != 0x00210120u) [[unlikely]] return; }
L_00210120:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[3].d[0] = c.r[19].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002100E8u | kUnwind; return; } goto L_002100E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 89u)));  if (t) { goto L_00210144; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_0021013C:
    st8((c.r[16].w[0] + 88u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 89u)));
    c.budget -= 2;
L_00210144:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_002101BC; }
    set32(c.r[2], 0u + 16u);
    set32(c.r[4], c.r[17].w[0] + 1984u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021015Cu); st8((c.r[16].w[0] + 89u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x0021015Cu) [[unlikely]] return; }
L_0021015C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[18], 0u + 10u);
    set32(c.r[16], c.r[2].w[0] - 6048u);
    c.budget -= 3;
L_00210168:
    c.f[3] = ld32((c.r[16].w[0]));
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    set32(c.r[4], c.r[29].w[0] + 80u);
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    st32((c.r[4].w[0]), c.f[3]);
    st32((c.r[4].w[0] + 4u), c.f[2]);
    st32((c.r[4].w[0] + 8u), c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210194u); st32((c.r[4].w[0] + 12u), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x00210194u) [[unlikely]] return; }
L_00210194:
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002101A0u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_004A(c, 122u, depth + 1u); else { c.pc = 0x0022A2F0u; return; } if (c.pc != 0x002101A0u) [[unlikely]] return; }
L_002101A0:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 13ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00210168u | kUnwind; return; } goto L_00210168; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);  if (t) { goto L_002101C4; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_002101BC:
    st8((c.r[16].w[0] + 89u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    c.budget -= 2;
L_002101C4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002101E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], 0u + 13u);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.budget -= 7;
L_002101FC:
    c.r[5].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_00210200:
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021020Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_003D(c, 200u, depth + 1u); else { c.pc = 0x001F61F0u; return; } if (c.pc != 0x0021020Cu) [[unlikely]] return; }
L_0021020C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[16].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[5].d[0] = c.r[16].d[0] << 48;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00210200u | kUnwind; return; } goto L_00210200; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[16], c.r[17].w[0] + 7736u);  if (t) { goto L_00210264; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8390u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] - 6000u);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 2));
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    st16((c.r[17].w[0] + 516u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[17].w[0] + 514u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[17].w[0] + 512u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 13;
L_00210264:
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.budget -= 3;
L_00210270:
    set32(c.r[6], c.r[6].w[0] + 1u);
    st16((c.r[5].w[0] + 52u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[3].d[0] = c.r[6].sd[0] < 7ll ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] + 300u);
    set32(c.r[5], c.r[5].w[0] + 2u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00210270u | kUnwind; return; } goto L_00210270; } }
    st8((c.r[16].w[0] + 193u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00210664; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], c.r[4].w[0] + 25040u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00210000u < 16384u) { entry = entries_0044[(t - 0x00210000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002102BC:
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 192u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 66u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 190u), static_cast<std::uint16_t>(0u));
    st8((c.r[16].w[0] + 195u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 210u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 209u), static_cast<std::uint8_t>(0u));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 208u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00210664; } }
L_002102E4:
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 192u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 66u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 190u), static_cast<std::uint16_t>(0u));
    st8((c.r[16].w[0] + 195u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 210u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 209u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 208u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.f[1] = ld32((c.r[17].w[0] + 32u));
    set32(c.r[5], 0u + 22u);
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
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210358u); st8((c.r[17].w[0] + 274u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0026(c, 25u, depth + 1u); else { c.pc = 0x00198370u; return; } if (c.pc != 0x00210358u) [[unlikely]] return; }
L_00210358:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 195u)));  if (t) { goto L_00210668; } }
L_00210360:
    set32(c.r[4], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] - 5968u);
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[16].w[0] + 184u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] - 5920u);
    st32((c.r[16].w[0] + 180u), c.r[3].w[0]);
    set32(c.r[3], 0u + 16200u);
    st8((c.r[16].w[0] + 188u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 190u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 192u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 66u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 195u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 194u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 210u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 209u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 208u), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0] + 92u), 0u);
    st32((c.r[17].w[0] + 96u), 0u);
    st32((c.r[17].w[0] + 100u), 0u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 188u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 184u)));
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
    c.budget -= 36;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 189u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00210664; } }
L_002103F0:
    set32(c.r[3], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 5904u);
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 184u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.budget -= 6;
L_00210408:
    set32(c.r[2], c.r[2].w[0] - 5808u);
    st32((c.r[16].w[0] + 180u), c.r[2].w[0]);
    st8((c.r[16].w[0] + 188u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 190u), static_cast<std::uint16_t>(0u));
    st8((c.r[16].w[0] + 192u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 66u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 5u);
    st8((c.r[16].w[0] + 195u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 194u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 210u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 209u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 208u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], 0u + 22u);
    st8((c.r[17].w[0] + 274u), static_cast<std::uint8_t>(c.r[3].w[0]));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021044Cu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 25u, depth + 1u); else { c.pc = 0x00198370u; return; } if (c.pc != 0x0021044Cu) [[unlikely]] return; }
L_0021044C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00210664; } }
L_00210454:
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 195u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 66u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 192u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 193u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 209u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43160000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210480u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0014(c, 151u, depth + 1u); else { c.pc = 0x00152F90u; return; } if (c.pc != 0x00210480u) [[unlikely]] return; }
L_00210480:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);  if (t) { goto L_0021049C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E190000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), c.r[2].w[0]);  if (t) { goto L_002104A0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.budget -= 1;
L_0021049C:
    st32((c.r[17].w[0] + 104u), c.r[2].w[0]);
    c.budget -= 1;
L_002104A0:
    st32((c.r[17].w[0] + 52u), 0u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002104B0u); st32((c.r[16].w[0] + 196u), 0u);  if (depth < kMaxDepth) unit_0045(c, 186u, depth + 1u); else { c.pc = 0x002173D0u; return; } if (c.pc != 0x002104B0u) [[unlikely]] return; }
L_002104B0:
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 204u), c.f[0]);
    st8((c.r[16].w[0] + 210u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 208u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[5], 0u + 22u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    st8((c.r[2].w[0] + 652u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002104DCu); st8((c.r[17].w[0] + 274u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0026(c, 25u, depth + 1u); else { c.pc = 0x00198370u; return; } if (c.pc != 0x002104DCu) [[unlikely]] return; }
L_002104DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00210664; } }
L_002104E4:
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 195u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 66u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 192u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 193u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 209u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43160000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210510u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0014(c, 151u, depth + 1u); else { c.pc = 0x00152F90u; return; } if (c.pc != 0x00210510u) [[unlikely]] return; }
L_00210510:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);  if (t) { goto L_0021052C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E190000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), c.r[2].w[0]);  if (t) { goto L_00210530; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.budget -= 1;
L_0021052C:
    st32((c.r[17].w[0] + 104u), c.r[2].w[0]);
    c.budget -= 1;
L_00210530:
    st32((c.r[17].w[0] + 52u), 0u);
    set32(c.r[2], 0u + 2u);
    st32((c.r[16].w[0] + 196u), 0u);
    st8((c.r[16].w[0] + 210u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210548u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0045(c, 185u, depth + 1u); else { c.pc = 0x00217370u; return; } if (c.pc != 0x00210548u) [[unlikely]] return; }
L_00210548:
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 200u), c.f[0]);
    st8((c.r[16].w[0] + 208u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[5], 0u + 22u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    st8((c.r[2].w[0] + 652u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210570u); st8((c.r[17].w[0] + 274u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0026(c, 25u, depth + 1u); else { c.pc = 0x00198370u; return; } if (c.pc != 0x00210570u) [[unlikely]] return; }
L_00210570:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00210664; } }
L_00210578:
    set32(c.r[3], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 5776u);
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 184u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 5648u);
    st32((c.r[16].w[0] + 180u), c.r[2].w[0]);
    st8((c.r[16].w[0] + 188u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 190u), static_cast<std::uint16_t>(0u));
    st8((c.r[16].w[0] + 192u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 66u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 190u), static_cast<std::uint16_t>(0u));
    st8((c.r[16].w[0] + 195u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 210u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 209u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 208u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], 0u + 22u);
    st8((c.r[17].w[0] + 274u), static_cast<std::uint8_t>(c.r[3].w[0]));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002105D0u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 25u, depth + 1u); else { c.pc = 0x00198370u; return; } if (c.pc != 0x002105D0u) [[unlikely]] return; }
L_002105D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00210664; } }
L_002105D8:
    set32(c.r[4], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] - 5616u);
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[16].w[0] + 184u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] - 5568u);
    st32((c.r[16].w[0] + 180u), c.r[3].w[0]);
    set32(c.r[3], 0u + 10500u);
    st8((c.r[16].w[0] + 188u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 190u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 192u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 66u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 195u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 194u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 210u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 209u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 208u), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0] + 92u), 0u);
    st32((c.r[17].w[0] + 96u), 0u);
    st32((c.r[17].w[0] + 100u), 0u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 188u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 184u)));
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
    st8((c.r[16].w[0] + 189u), static_cast<std::uint8_t>(0u));
    c.budget -= 35;
L_00210664:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 195u)));
    c.budget -= 1;
L_00210668:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002106B8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0] + 104u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 92u), 0u);
    st32((c.r[17].w[0] + 96u), 0u);
    st32((c.r[17].w[0] + 100u), 0u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 188u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 184u)));
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
    st8((c.r[16].w[0] + 189u), static_cast<std::uint8_t>(0u));
    c.budget -= 18;
L_002106B8:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    set32(c.r[4], c.r[28].w[0] - 29608u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    st32((c.r[17].w[0] + 1260u), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00210710; } }
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    c.budget -= 1;
L_002106E4:
    set32(c.r[2], c.r[18].w[0] + 25u);
    c.r[5].d[0] = c.r[2].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002106F8u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0078(c, 319u, depth + 1u); else { c.pc = 0x002E3640u; return; } if (c.pc != 0x002106F8u) [[unlikely]] return; }
L_002106F8:
    set32(c.r[18], c.r[18].w[0] + 1u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[3].d[0] = c.r[18].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002106E4u | kUnwind; return; } goto L_002106E4; } }
    c.budget -= 1;
L_00210710:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00210730:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[16], c.r[17].w[0] + 7736u);  if (t) { goto L_00210764; } }
    set32(c.r[3], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002107A0; } }
L_00210764:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 190u));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], 0u + 1u);  goto L_00210780; }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 190u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002107A0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_00210780:
    st8((c.r[16].w[0] + 195u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0] + 104u), c.r[2].w[0]);
    set32(c.r[5], 0u + 22u);
    st8((c.r[17].w[0] + 274u), static_cast<std::uint8_t>(c.r[3].w[0]));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002107A0u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 25u, depth + 1u); else { c.pc = 0x00198370u; return; } if (c.pc != 0x002107A0u) [[unlikely]] return; }
L_002107A0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 195u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00210838; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 641u)));
    c.r[3].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002107C8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 280u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_002107C8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002109B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002107D8u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0044(c, 70u, depth + 1u); else { c.pc = 0x00210D90u; return; } if (c.pc != 0x002107D8u) [[unlikely]] return; }
L_002107D8:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210830u); st32((c.r[17].w[0] + 88u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 232u, depth + 1u); else { c.pc = 0x0024B250u; return; } if (c.pc != 0x00210830u) [[unlikely]] return; }
L_00210830:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 514u)));  if (t) { goto L_002109B4; } }
L_00210838:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 209u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00210968; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 641u)));
    c.r[3].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00210860; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 280u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_00210860:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00210870; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210870u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0052(c, 232u, depth + 1u); else { c.pc = 0x0024B250u; return; } if (c.pc != 0x00210870u) [[unlikely]] return; }
L_00210870:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 210u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002108A8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.f[3] = ld32((c.r[17].w[0] + 32u));
    c.f[2] = ld32((c.r[17].w[0] + 36u));
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 44u));
    st32((c.r[3].w[0] + 592u), c.f[3]);
    st32((c.r[3].w[0] + 596u), c.f[2]);
    st32((c.r[3].w[0] + 600u), c.f[1]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 604u), c.f[0]);  if (t) { goto L_002109B0; } }
L_002108A8:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002108D8u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002108D8u) [[unlikely]] return; }
L_002108D8:
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002108E4u); c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002108E4u) [[unlikely]] return; }
L_002108E4:
    c.f[1] = ld32((c.r[16].w[0] + 196u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 196u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 208u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00210938; } }
    c.f[1] = ld32((c.r[16].w[0] + 196u));
    c.f[0] = ld32((c.r[16].w[0] + 200u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002109B0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 210u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0021092C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 210u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002109B0; } }
L_0021092C:
    st8((c.r[16].w[0] + 209u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), 0u);  if (t) { goto L_002109B0; } }
L_00210938:
    c.f[1] = ld32((c.r[16].w[0] + 196u));
    c.f[0] = ld32((c.r[16].w[0] + 204u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002109B0; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210960u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 9u, depth + 1u); else { c.pc = 0x00304280u; return; } if (c.pc != 0x00210960u) [[unlikely]] return; }
L_00210960:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);  if (t) { goto L_00210D30; } }
L_00210968:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 66u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002109B0; } }
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
L_002109B0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 514u)));
    c.budget -= 1;
L_002109B4:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_00210B88; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00210B88; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00210A14; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 514u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_00210A0C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00210A08; } }
    st32((c.r[16].w[0]), 0u);
    set32(c.r[3], ld32((c.r[17].w[0] + 1260u)));
    set32(c.r[2], 0u - 385u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1260u), c.r[2].w[0]);  if (t) { goto L_00210A14; } }
L_00210A08:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_00210A0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210A14u);  if (depth < kMaxDepth) unit_0044(c, 85u, depth + 1u); else { c.pc = 0x00211500u; return; } if (c.pc != 0x00210A14u) [[unlikely]] return; }
L_00210A14:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00210A5C; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 514u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_00210A54; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00210A50; } }
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[3], ld32((c.r[17].w[0] + 1260u)));
    set32(c.r[2], 0u - 97u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1260u), c.r[2].w[0]);  if (t) { goto L_00210A5C; } }
L_00210A50:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_00210A54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210A5Cu);  if (depth < kMaxDepth) unit_0044(c, 101u, depth + 1u); else { c.pc = 0x00211910u; return; } if (c.pc != 0x00210A5Cu) [[unlikely]] return; }
L_00210A5C:
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00210AA4; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 514u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_00210A9C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00210A98; } }
    st32((c.r[16].w[0] + 8u), 0u);
    set32(c.r[3], ld32((c.r[17].w[0] + 1260u)));
    set32(c.r[2], 0u - 12289u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1260u), c.r[2].w[0]);  if (t) { goto L_00210AA4; } }
L_00210A98:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_00210A9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210AA4u);  if (depth < kMaxDepth) unit_0044(c, 117u, depth + 1u); else { c.pc = 0x00211D20u; return; } if (c.pc != 0x00210AA4u) [[unlikely]] return; }
L_00210AA4:
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00210AEC; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 514u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_00210AE4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00210AE0; } }
    st32((c.r[16].w[0] + 12u), 0u);
    set32(c.r[3], ld32((c.r[17].w[0] + 1260u)));
    set32(c.r[2], 0u - 513u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1260u), c.r[2].w[0]);  if (t) { goto L_00210AEC; } }
L_00210AE0:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_00210AE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210AECu);  if (depth < kMaxDepth) unit_0044(c, 129u, depth + 1u); else { c.pc = 0x00211FA0u; return; } if (c.pc != 0x00210AECu) [[unlikely]] return; }
L_00210AEC:
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00210B34; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 514u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_00210B2C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00210B28; } }
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[3], ld32((c.r[17].w[0] + 1260u)));
    set32(c.r[2], 0u - 1025u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1260u), c.r[2].w[0]);  if (t) { goto L_00210B34; } }
L_00210B28:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_00210B2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210B34u);  if (depth < kMaxDepth) unit_0044(c, 140u, depth + 1u); else { c.pc = 0x002122B0u; return; } if (c.pc != 0x00210B34u) [[unlikely]] return; }
L_00210B34:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_00210B80; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 514u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_00210B74; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00210B70; } }
    st32((c.r[16].w[0] + 20u), 0u);
    set32(c.r[3], ld32((c.r[17].w[0] + 1260u)));
    set32(c.r[2], 0u - 2049u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1260u), c.r[2].w[0]);  if (t) { goto L_00210B7C; } }
L_00210B70:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_00210B74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210B7Cu);  if (depth < kMaxDepth) unit_0044(c, 145u, depth + 1u); else { c.pc = 0x00212430u; return; } if (c.pc != 0x00210B7Cu) [[unlikely]] return; }
L_00210B7C:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_00210B80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210B88u);  if (depth < kMaxDepth) unit_0044(c, 150u, depth + 1u); else { c.pc = 0x002125B0u; return; } if (c.pc != 0x00210B88u) [[unlikely]] return; }
L_00210B88:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[5], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_00210D2C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 529u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00210D2C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 192u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00210D2C; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 193u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_00210C94; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00210C04; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x43160000u);  goto L_00210BE0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00210D2C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43160000u);
    c.budget -= 1;
L_00210BE0:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210BECu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0014(c, 151u, depth + 1u); else { c.pc = 0x00152F90u; return; } if (c.pc != 0x00210BECu) [[unlikely]] return; }
L_00210BEC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00210D2C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 193u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 193u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00210D2C; } }
L_00210C04:
    c.f[1] = ld32((c.r[17].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E190000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3CCC0000u);  goto L_00210C34; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), c.r[2].w[0]);  if (t) { goto L_00210C48; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3CCC0000u);
    c.budget -= 1;
L_00210C34:
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.budget -= 5;
L_00210C48:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210C58u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0014(c, 156u, depth + 1u); else { c.pc = 0x001530A0u; return; } if (c.pc != 0x00210C58u) [[unlikely]] return; }
L_00210C58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00210D2C; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 193u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 29598u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 193u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[17].w[0] + 532u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[17].w[0] + 531u));
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00210D2C; } }
L_00210C94:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 640u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00210CE8; } }
    c.f[1] = ld32((c.r[17].w[0] + 104u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[3].sd[0] = static_cast<std::int32_t>(0x3CCC0000u);  goto L_00210CD0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), c.r[3].w[0]);  if (t) { goto L_00210D2C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3CCC0000u);
    c.budget -= 1;
L_00210CD0:
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), c.f[0]);  if (t) { goto L_00210D2C; } }
L_00210CE8:
    c.f[1] = ld32((c.r[17].w[0] + 104u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E190000u);
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    if (!(c.fcr31 & kFpuCondition)) { c.r[3].sd[0] = static_cast<std::int32_t>(0x3CCC0000u);  goto L_00210D18; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), c.r[3].w[0]);  if (t) { goto L_00210D2C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3CCC0000u);
    c.budget -= 1;
L_00210D18:
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.budget -= 5;
L_00210D2C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00210D30:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00210D50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 274u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00210D7C; } }
    set32(c.r[5], 0u + 22u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210D7Cu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 29u, depth + 1u); else { c.pc = 0x00198460u; return; } if (c.pc != 0x00210D7Cu) [[unlikely]] return; }
L_00210D7C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00210D90:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.f[12] = c.r[2].w[0];
    set32(c.r[16], c.r[17].w[0] + 7736u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210DBCu); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0053(c, 33u, depth + 1u); else { c.pc = 0x0024C9F0u; return; } if (c.pc != 0x00210DBCu) [[unlikely]] return; }
L_00210DBC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00210E9C; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00210E2C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00210E2C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] + 25072u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00210000u < 16384u) { entry = entries_0044[(t - 0x00210000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00210E04:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 188u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 194u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00210E2C; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210E24u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 9u, depth + 1u); else { c.pc = 0x00304280u; return; } if (c.pc != 0x00210E24u) [[unlikely]] return; }
L_00210E24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);  if (t) { goto L_002114E0; } }
L_00210E2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210E34u);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x00210E34u) [[unlikely]] return; }
L_00210E34:
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 188u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 180u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    st8((c.r[16].w[0] + 188u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 188u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 184u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.f[3] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[17].w[0] + 1760u), c.f[3]);
    st32((c.r[17].w[0] + 1764u), c.f[2]);
    st32((c.r[17].w[0] + 1768u), c.f[1]);
    st32((c.r[17].w[0] + 1772u), c.f[0]);
    st8((c.r[16].w[0] + 189u), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0] + 52u), 0u);
    c.budget -= 26;
L_00210E9C:
    c.f[3] = ld32((c.r[17].w[0] + 1760u));
    c.f[2] = ld32((c.r[17].w[0] + 32u));
    c.f[1] = ld32((c.r[17].w[0] + 1768u));
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    c.f[20] = fp::sub(c.f[3], c.f[2]);
    c.f[21] = fp::sub(c.f[1], c.f[0]);
    c.f[12] = c.f[20];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210EC0u); c.f[13] = c.f[21];  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x00210EC0u) [[unlikely]] return; }
L_00210EC0:
    mmi::paddub(c.r[4], c.r[2], c.r[0]);
    c.r[3].d[0] = 0ull | 65535ull;
    c.r[4].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    c.r[6].d[0] = 0ull | 63488ull;
    set32(c.r[4], c.r[4].w[0] - c.r[3].w[0]);
    c.r[5].d[0] = c.r[4].d[0] & 65535ull;
    c.r[1].d[0] = c.r[5].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00210EF4; } }
    c.r[1].d[0] = c.r[5].sd[0] < 2049ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = 0ull | 32768ull;  if (t) { goto L_00210F5C; } }
L_00210EF4:
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_00210F0C; } }
    set32(c.r[3], c.r[3].w[0] - 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_00210F1C; } }
L_00210F0C:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_00210F1C; } }
    set32(c.r[3], c.r[3].w[0] + 4u);
    st32((c.r[17].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 2;
L_00210F1C:
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; c.r[3].d[0] = 0ull | 32768ull;  if (t) { goto L_00210F34; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), 0u);  if (t) { goto L_00211040; } }
    c.r[3].d[0] = 0ull | 32768ull;
    c.budget -= 1;
L_00210F34:
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u - 32u);  if (t) { goto L_00210F50; } }
    set32(c.r[3], 0u + 32u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), c.r[3].w[0]);  if (t) { goto L_00211040; } }
    set32(c.r[3], 0u - 32u);
    c.budget -= 1;
L_00210F50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), c.r[3].w[0]);  if (t) { goto L_00211040; } }
    c.r[3].d[0] = 0ull | 32768ull;
    c.budget -= 1;
L_00210F5C:
    c.r[1].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00210FD4; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    c.r[3].d[0] = c.r[4].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[4].w[0] + 4u);  if (t) { goto L_00210F88; } }
    set32(c.r[3], 0u + 128u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_00210F8C; } }
    set32(c.r[3], c.r[4].w[0] + 4u);
    c.budget -= 1;
L_00210F88:
    st32((c.r[17].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 1;
L_00210F8C:
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    c.r[6].d[0] = 0ull | 61440ull;
    c.r[1].d[0] = c.r[6].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].d[0] = c.r[5].sd[0] < 4096ll ? 1ull : 0ull;  if (t) { goto L_00210FC0; } }
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00210FBC; } }
    st32((c.r[17].w[0] + 88u), c.r[6].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), 0u);  if (t) { goto L_00211040; } }
L_00210FBC:
    c.r[3].d[0] = c.r[5].sd[0] < 4096ll ? 1ull : 0ull;
    c.budget -= 1;
L_00210FC0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00211040; } }
    set32(c.r[3], 0u - 32u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), c.r[3].w[0]);  if (t) { goto L_00211040; } }
L_00210FD4:
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    c.r[1].d[0] = c.r[3].sd[0] < -127ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], c.r[3].w[0] - 4u);  goto L_00210FF4; }
    set32(c.r[3], 0u - 128u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_00210FF8; } }
    set32(c.r[3], c.r[3].w[0] - 4u);
    c.budget -= 1;
L_00210FF4:
    st32((c.r[17].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 1;
L_00210FF8:
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    c.r[3].d[0] = c.r[4].sd[0] < 4096ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = 0ull | 61441ull;  if (t) { goto L_0021102C; } }
    c.r[1].d[0] = 0ull | 32769ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00211028; } }
    set32(c.r[3], 0u + 4096u);
    st32((c.r[17].w[0] + 88u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), 0u);  if (t) { goto L_00211040; } }
L_00211028:
    c.r[1].d[0] = 0ull | 61441ull;
    c.budget -= 1;
L_0021102C:
    c.r[1].d[0] = c.r[5].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00211040; } }
    set32(c.r[3], 0u + 32u);
    st32((c.r[17].w[0] + 100u), c.r[3].w[0]);
    c.budget -= 2;
L_00211040:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.r[3].d[0] = c.r[3].d[0] ^ 2ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00211060; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 192u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_00211060:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00211298; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 189u)));
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_00211244; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002111EC; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00211094; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002114DC; } }
L_00211094:
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[17].w[0] + 1764u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00211124; } }
    st8((c.r[16].w[0] + 189u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[1] = ld32((c.r[17].w[0] + 1764u));
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    c.facc = fp::mul(c.f[20], c.f[20]);
    c.f[12] = fp::add(c.facc, fp::mul(c.f[21], c.f[21]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002110C8u); c.f[20] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002110C8u) [[unlikely]] return; }
L_002110C8:
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002110D4u); c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002110D4u) [[unlikely]] return; }
L_002110D4:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x38D10000u);  if (t) { goto L_00211100; } }
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00211108; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x38D10000u);
    c.budget -= 1;
L_00211100:
    c.r[3].d[0] = c.r[3].d[0] | 46871ull;
    c.f[0] = c.r[3].w[0];
    c.budget -= 2;
L_00211108:
    fpu_div(c, 20u, c.f[20], c.f[0]);
    set32(c.r[3], 0u - 10u);
    st32((c.r[17].w[0] + 52u), c.f[20]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[3].w[0]);  if (t) { goto L_002114DC; } }
L_00211124:
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002111B0; } }
    st8((c.r[16].w[0] + 189u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[17].w[0] + 1764u));
    c.facc = fp::mul(c.f[20], c.f[20]);
    c.f[12] = fp::add(c.facc, fp::mul(c.f[21], c.f[21]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211150u); c.f[20] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x00211150u) [[unlikely]] return; }
L_00211150:
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021115Cu); c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x0021115Cu) [[unlikely]] return; }
L_0021115C:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x38D10000u);  if (t) { goto L_00211188; } }
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00211190; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x38D10000u);
    c.budget -= 1;
L_00211188:
    c.r[3].d[0] = c.r[3].d[0] | 46871ull;
    c.f[0] = c.r[3].w[0];
    c.budget -= 2;
L_00211190:
    fpu_div(c, 20u, c.f[20], c.f[0]);
    set32(c.r[3], 0u + 10u);
    c.f[0] = c.f[20] ^ fp::kSign;
    st32((c.r[17].w[0] + 52u), c.f[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[3].w[0]);  if (t) { goto L_002114DC; } }
L_002111B0:
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; c.r[3].d[0] = 0ull | 32768ull;  if (t) { goto L_002111C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), 0u);  if (t) { goto L_002114DC; } }
    c.r[3].d[0] = 0ull | 32768ull;
    c.budget -= 1;
L_002111C8:
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u - 10u);  if (t) { goto L_002111E4; } }
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[3].w[0]);  if (t) { goto L_002114DC; } }
    set32(c.r[3], 0u - 10u);
    c.budget -= 1;
L_002111E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[3].w[0]);  if (t) { goto L_002114DC; } }
L_002111EC:
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[17].w[0] + 1764u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00211210; } }
    st8((c.r[16].w[0] + 189u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 52u), 0u);  if (t) { goto L_002114DC; } }
L_00211210:
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    c.r[1].d[0] = 0ull | 63489ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002114DC; } }
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002114DC; } }
    c.r[3].d[0] = 0ull | 63488ull;
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), 0u);  if (t) { goto L_002114DC; } }
L_00211244:
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[17].w[0] + 1764u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00211268; } }
    st8((c.r[16].w[0] + 189u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 52u), 0u);  if (t) { goto L_002114DC; } }
L_00211268:
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    c.r[3].d[0] = c.r[4].sd[0] < 2048ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002114DC; } }
    c.r[1].d[0] = 0ull | 32769ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002114DC; } }
    set32(c.r[3], 0u + 2048u);
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), 0u);  if (t) { goto L_002114DC; } }
L_00211298:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 189u)));
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_00211414; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00211348; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002112C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002114DC; } }
L_002112C4:
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[17].w[0] + 1764u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002112EC; } }
    st8((c.r[16].w[0] + 189u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u - 10u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[3].w[0]);  if (t) { goto L_002114DC; } }
L_002112EC:
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0021130C; } }
    set32(c.r[3], 0u + 10u);
    st8((c.r[16].w[0] + 189u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[3].w[0]);  if (t) { goto L_002114DC; } }
L_0021130C:
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; c.r[3].d[0] = 0ull | 32768ull;  if (t) { goto L_00211324; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), 0u);  if (t) { goto L_002114DC; } }
    c.r[3].d[0] = 0ull | 32768ull;
    c.budget -= 1;
L_00211324:
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u - 10u);  if (t) { goto L_00211340; } }
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[3].w[0]);  if (t) { goto L_002114DC; } }
    set32(c.r[3], 0u - 10u);
    c.budget -= 1;
L_00211340:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[3].w[0]);  if (t) { goto L_002114DC; } }
L_00211348:
    c.f[1] = ld32((c.r[17].w[0] + 1764u));
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    c.facc = fp::mul(c.f[20], c.f[20]);
    c.f[12] = fp::add(c.facc, fp::mul(c.f[21], c.f[21]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211360u); c.f[20] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x00211360u) [[unlikely]] return; }
L_00211360:
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021136Cu); c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x0021136Cu) [[unlikely]] return; }
L_0021136C:
    c.f[1] = ld32((c.r[17].w[0] + 104u));
    c.f[2] = 0u;
    fpu_div(c, 0u, c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x38D10000u);  if (t) { goto L_002113A4; } }
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002113AC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x38D10000u);
    c.budget -= 1;
L_002113A4:
    c.r[3].d[0] = c.r[3].d[0] | 46871ull;
    c.f[0] = c.r[3].w[0];
    c.budget -= 2;
L_002113AC:
    fpu_div(c, 20u, c.f[20], c.f[0]);
    st32((c.r[17].w[0] + 52u), c.f[20]);
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[17].w[0] + 1764u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002113E0; } }
    st8((c.r[16].w[0] + 189u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 52u), 0u);  if (t) { goto L_002114DC; } }
L_002113E0:
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    c.r[1].d[0] = 0ull | 63489ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002114DC; } }
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002114DC; } }
    c.r[3].d[0] = 0ull | 63488ull;
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), 0u);  if (t) { goto L_002114DC; } }
L_00211414:
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[17].w[0] + 1764u));
    c.facc = fp::mul(c.f[20], c.f[20]);
    c.f[12] = fp::add(c.facc, fp::mul(c.f[21], c.f[21]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021142Cu); c.f[20] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x0021142Cu) [[unlikely]] return; }
L_0021142C:
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211438u); c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x00211438u) [[unlikely]] return; }
L_00211438:
    c.f[1] = ld32((c.r[17].w[0] + 104u));
    c.f[2] = 0u;
    fpu_div(c, 0u, c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x38D10000u);  if (t) { goto L_00211470; } }
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00211478; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x38D10000u);
    c.budget -= 1;
L_00211470:
    c.r[3].d[0] = c.r[3].d[0] | 46871ull;
    c.f[0] = c.r[3].w[0];
    c.budget -= 2;
L_00211478:
    fpu_div(c, 20u, c.f[20], c.f[0]);
    c.f[0] = c.f[20] ^ fp::kSign;
    st32((c.r[17].w[0] + 52u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[17].w[0] + 1764u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002114B0; } }
    st8((c.r[16].w[0] + 189u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 52u), 0u);  if (t) { goto L_002114DC; } }
L_002114B0:
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    c.r[3].d[0] = c.r[4].sd[0] < 2048ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002114DC; } }
    c.r[1].d[0] = 0ull | 32769ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002114DC; } }
    set32(c.r[3], 0u + 2048u);
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 92u), 0u);
    c.budget -= 3;
L_002114DC:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002114E0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00211500:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 7760u)));
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    set32(c.r[3], 0u + 3u);
    c.budget -= 10;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[16], c.r[18].w[0] + 7736u);  if (t) { goto L_002118D0; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_00211850; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_0021178C; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00211550; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);  if (t) { goto L_002118F0; } }
L_00211550:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 52u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_00211784; }
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[2], 0u + 600u);  if (t) { goto L_0021157C; } }
    set32(c.r[2], 0u + 600u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 52u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00211580; } }
    set32(c.r[2], 0u + 600u);
    c.budget -= 1;
L_0021157C:
    st16((c.r[16].w[0] + 52u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_00211580:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43FA0000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[9], 0u + 8192u);
    set32(c.r[10], 0u + 7u);
    c.r[6].d[0] = 0ull | 65535ull;
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002115A8u); mmi::paddub(c.r[8], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 28u, depth + 1u); else { c.pc = 0x0024C7E0u; return; } if (c.pc != 0x002115A8u) [[unlikely]] return; }
L_002115A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002118EC; } }
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 212u), c.r[2].w[0]);
    st8((c.r[16].w[0] + 24u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 369u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002115F8; } }
    c.f[1] = ld32((c.r[2].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 64u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 72u), c.f[0]);  if (t) { goto L_00211610; } }
L_002115F8:
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    st32((c.r[29].w[0] + 72u), c.f[0]);
    c.budget -= 6;
L_00211610:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211618u); set32(c.r[4], c.r[18].w[0] + 2432u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x00211618u) [[unlikely]] return; }
L_00211618:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[2].d[0] = c.r[2].d[0] | 244ull;
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021162Cu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 211u, depth + 1u); else { c.pc = 0x00102548u; return; } if (c.pc != 0x0021162Cu) [[unlikely]] return; }
L_0021162C:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211638u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x00211638u) [[unlikely]] return; }
L_00211638:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211640u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x00211640u) [[unlikely]] return; }
L_00211640:
    set32(c.r[17], c.r[29].w[0] + 88u);
    c.f[13] = ld32((c.r[17].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211650u); c.f[12] = ld32((c.r[29].w[0] + 80u));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x00211650u) [[unlikely]] return; }
L_00211650:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    set32(c.r[2], ld32((c.r[18].w[0] + 4632u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[4].d[0] = 0ull | 32768ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 96u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 96u));
    st32((c.r[16].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 4632u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 128u);  if (t) { goto L_0021169C; } }
    set32(c.r[2], 0u - 128u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 152u), c.r[2].w[0]);  if (t) { goto L_002116A0; } }
    set32(c.r[2], 0u + 128u);
    c.budget -= 1;
L_0021169C:
    st32((c.r[16].w[0] + 152u), c.r[2].w[0]);
    c.budget -= 1;
L_002116A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002116A8u); set32(c.r[4], c.r[18].w[0] + 2496u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002116A8u) [[unlikely]] return; }
L_002116A8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002116B8u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 211u, depth + 1u); else { c.pc = 0x00102548u; return; } if (c.pc != 0x002116B8u) [[unlikely]] return; }
L_002116B8:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002116C4u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002116C4u) [[unlikely]] return; }
L_002116C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002116CCu); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x002116CCu) [[unlikely]] return; }
L_002116CC:
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002116E0u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002116E0u) [[unlikely]] return; }
L_002116E0:
    c.f[12] = ld32((c.r[29].w[0] + 84u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002116ECu); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x002116ECu) [[unlikely]] return; }
L_002116EC:
    set32(c.r[3], ld32((c.r[18].w[0] + 4648u)));
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[1].d[0] = 0ull | 32768ull;
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[16].w[0] + 68u));
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = 0ull | 32768ull;  if (t) { goto L_00211728; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 68u), 0u);  if (t) { goto L_00211748; } }
    c.r[3].d[0] = 0ull | 32768ull;
    c.budget -= 1;
L_00211728:
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00211748; } }
    c.r[3].d[0] = 0ull | 54614ull;
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00211748; } }
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    c.budget -= 1;
L_00211748:
    set32(c.r[4], ld32((c.r[18].w[0] + 4648u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 68u)));
    c.r[3].d[0] = 0ull | 32768ull;
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 64u);  if (t) { goto L_00211778; } }
    set32(c.r[3], 0u - 64u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 124u), c.r[3].w[0]);  if (t) { goto L_002118EC; } }
    set32(c.r[3], 0u + 64u);
    c.budget -= 1;
L_00211778:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 124u), c.r[3].w[0]);  if (t) { goto L_002118EC; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_00211784:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 52u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002118EC; } }
L_0021178C:
    set32(c.r[6], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 4632u)));
    c.r[3].d[0] = 0ull | 65535ull;
    set32(c.r[7], c.r[6].w[0] - c.r[4].w[0]);
    c.r[7].d[0] = c.r[7].d[0] & c.r[3].d[0];
    c.r[1].d[0] = c.r[7].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull; mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (t) { goto L_002117BC; } }
    c.r[3].d[0] = 0ull | 65472ull;
    c.r[3].d[0] = c.r[7].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002117CC; } }
L_002117BC:
    st32((c.r[18].w[0] + 4632u), c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 152u), 0u);  if (t) { goto L_002117E0; } }
L_002117CC:
    set32(c.r[3], ld32((c.r[16].w[0] + 152u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 4632u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[18].w[0] + 4632u));
    st32((c.r[18].w[0] + 4632u), c.r[3].w[0]);
    c.budget -= 5;
L_002117E0:
    set32(c.r[6], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 4648u)));
    set32(c.r[3], c.r[6].w[0] - c.r[4].w[0]);
    c.r[7].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[7].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0021180C; } }
    c.r[3].d[0] = 0ull | 65504ull;
    c.r[3].d[0] = c.r[7].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0021181C; } }
L_0021180C:
    st32((c.r[18].w[0] + 4648u), c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 124u), 0u);  if (t) { goto L_00211830; } }
L_0021181C:
    set32(c.r[3], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 4648u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[18].w[0] + 4648u));
    st32((c.r[18].w[0] + 4648u), c.r[3].w[0]);
    c.budget -= 5;
L_00211830:
    c.r[3].d[0] = c.r[5].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002118EC; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 24u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 31u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 38u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002118EC; } }
L_00211850:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 31u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_002118C8; }
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 31u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[5], 0u + 99u);  if (t) { goto L_00211880; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021187Cu); set32(c.r[5], ld32((c.r[16].w[0] + 212u)));  if (depth < kMaxDepth) unit_0077(c, 232u, depth + 1u); else { c.pc = 0x002DEAA0u; return; } if (c.pc != 0x0021187Cu) [[unlikely]] return; }
L_0021187C:
    set32(c.r[5], 0u + 99u);
    c.budget -= 1;
L_00211880:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211888u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0079(c, 268u, depth + 1u); else { c.pc = 0x002E70C0u; return; } if (c.pc != 0x00211888u) [[unlikely]] return; }
L_00211888:
    set32(c.r[5], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211894u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 34u, depth + 1u); else { c.pc = 0x00198540u; return; } if (c.pc != 0x00211894u) [[unlikely]] return; }
L_00211894:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 38u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 38u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 38u)));
    c.r[3].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002118EC; } }
    set32(c.r[3], 0u + 3u);
    st8((c.r[16].w[0] + 24u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 30u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 31u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002118EC; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_002118C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 31u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002118EC; } }
L_002118D0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 31u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_002118E8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 24u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002118EC; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_002118E8:
    st8((c.r[16].w[0] + 31u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_002118EC:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002118F0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00211910:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 7761u)));
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    set32(c.r[3], 0u + 3u);
    c.budget -= 10;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[16], c.r[18].w[0] + 7736u);  if (t) { goto L_00211CE0; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_00211C60; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_00211B9C; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00211960; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);  if (t) { goto L_00211D00; } }
L_00211960:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 54u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_00211B94; }
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[2], 0u + 600u);  if (t) { goto L_0021198C; } }
    set32(c.r[2], 0u + 600u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 54u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00211990; } }
    set32(c.r[2], 0u + 600u);
    c.budget -= 1;
L_0021198C:
    st16((c.r[16].w[0] + 54u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_00211990:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43FA0000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[9], 0u + 8192u);
    set32(c.r[10], 0u + 5u);
    c.r[6].d[0] = 0ull | 65535ull;
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002119B8u); mmi::paddub(c.r[8], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 28u, depth + 1u); else { c.pc = 0x0024C7E0u; return; } if (c.pc != 0x002119B8u) [[unlikely]] return; }
L_002119B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00211CFC; } }
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 216u), c.r[2].w[0]);
    st8((c.r[16].w[0] + 25u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 369u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00211A08; } }
    c.f[1] = ld32((c.r[2].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 64u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 72u), c.f[0]);  if (t) { goto L_00211A20; } }
L_00211A08:
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    st32((c.r[29].w[0] + 72u), c.f[0]);
    c.budget -= 6;
L_00211A20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211A28u); set32(c.r[4], c.r[18].w[0] + 2304u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x00211A28u) [[unlikely]] return; }
L_00211A28:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[2].d[0] = c.r[2].d[0] | 244ull;
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211A3Cu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 211u, depth + 1u); else { c.pc = 0x00102548u; return; } if (c.pc != 0x00211A3Cu) [[unlikely]] return; }
L_00211A3C:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211A48u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x00211A48u) [[unlikely]] return; }
L_00211A48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211A50u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x00211A50u) [[unlikely]] return; }
L_00211A50:
    set32(c.r[17], c.r[29].w[0] + 88u);
    c.f[13] = ld32((c.r[17].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211A60u); c.f[12] = ld32((c.r[29].w[0] + 80u));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x00211A60u) [[unlikely]] return; }
L_00211A60:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    set32(c.r[2], ld32((c.r[18].w[0] + 4608u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[4].d[0] = 0ull | 32768ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 100u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 100u));
    st32((c.r[16].w[0] + 100u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 4608u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 128u);  if (t) { goto L_00211AAC; } }
    set32(c.r[2], 0u - 128u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 156u), c.r[2].w[0]);  if (t) { goto L_00211AB0; } }
    set32(c.r[2], 0u + 128u);
    c.budget -= 1;
L_00211AAC:
    st32((c.r[16].w[0] + 156u), c.r[2].w[0]);
    c.budget -= 1;
L_00211AB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211AB8u); set32(c.r[4], c.r[18].w[0] + 2368u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x00211AB8u) [[unlikely]] return; }
L_00211AB8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211AC8u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 211u, depth + 1u); else { c.pc = 0x00102548u; return; } if (c.pc != 0x00211AC8u) [[unlikely]] return; }
L_00211AC8:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211AD4u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x00211AD4u) [[unlikely]] return; }
L_00211AD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211ADCu); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x00211ADCu) [[unlikely]] return; }
L_00211ADC:
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211AF0u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x00211AF0u) [[unlikely]] return; }
L_00211AF0:
    c.f[12] = ld32((c.r[29].w[0] + 84u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211AFCu); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x00211AFCu) [[unlikely]] return; }
L_00211AFC:
    set32(c.r[3], ld32((c.r[18].w[0] + 4624u)));
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[1].d[0] = 0ull | 32768ull;
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    st32((c.r[16].w[0] + 72u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[16].w[0] + 72u));
    st32((c.r[16].w[0] + 72u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = 0ull | 32768ull;  if (t) { goto L_00211B38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 72u), 0u);  if (t) { goto L_00211B58; } }
    c.r[3].d[0] = 0ull | 32768ull;
    c.budget -= 1;
L_00211B38:
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00211B58; } }
    c.r[3].d[0] = 0ull | 54614ull;
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00211B58; } }
    st32((c.r[16].w[0] + 72u), c.r[3].w[0]);
    c.budget -= 1;
L_00211B58:
    set32(c.r[4], ld32((c.r[18].w[0] + 4624u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 72u)));
    c.r[3].d[0] = 0ull | 32768ull;
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 64u);  if (t) { goto L_00211B88; } }
    set32(c.r[3], 0u - 64u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 128u), c.r[3].w[0]);  if (t) { goto L_00211CFC; } }
    set32(c.r[3], 0u + 64u);
    c.budget -= 1;
L_00211B88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 128u), c.r[3].w[0]);  if (t) { goto L_00211CFC; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_00211B94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 54u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00211CFC; } }
L_00211B9C:
    set32(c.r[6], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 4608u)));
    c.r[3].d[0] = 0ull | 65535ull;
    set32(c.r[7], c.r[6].w[0] - c.r[4].w[0]);
    c.r[7].d[0] = c.r[7].d[0] & c.r[3].d[0];
    c.r[1].d[0] = c.r[7].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull; mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (t) { goto L_00211BCC; } }
    c.r[3].d[0] = 0ull | 65472ull;
    c.r[3].d[0] = c.r[7].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00211BDC; } }
L_00211BCC:
    st32((c.r[18].w[0] + 4608u), c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 156u), 0u);  if (t) { goto L_00211BF0; } }
L_00211BDC:
    set32(c.r[3], ld32((c.r[16].w[0] + 156u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 4608u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[18].w[0] + 4608u));
    st32((c.r[18].w[0] + 4608u), c.r[3].w[0]);
    c.budget -= 5;
L_00211BF0:
    set32(c.r[6], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 4624u)));
    set32(c.r[3], c.r[6].w[0] - c.r[4].w[0]);
    c.r[7].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[7].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00211C1C; } }
    c.r[3].d[0] = 0ull | 65504ull;
    c.r[3].d[0] = c.r[7].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00211C2C; } }
L_00211C1C:
    st32((c.r[18].w[0] + 4624u), c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 128u), 0u);  if (t) { goto L_00211C40; } }
L_00211C2C:
    set32(c.r[3], ld32((c.r[16].w[0] + 128u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 4624u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[18].w[0] + 4624u));
    st32((c.r[18].w[0] + 4624u), c.r[3].w[0]);
    c.budget -= 5;
L_00211C40:
    c.r[3].d[0] = c.r[5].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00211CFC; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 25u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 32u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 39u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00211CFC; } }
L_00211C60:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 32u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_00211CD8; }
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 32u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[5], 0u + 97u);  if (t) { goto L_00211C90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211C8Cu); set32(c.r[5], ld32((c.r[16].w[0] + 216u)));  if (depth < kMaxDepth) unit_0077(c, 232u, depth + 1u); else { c.pc = 0x002DEAA0u; return; } if (c.pc != 0x00211C8Cu) [[unlikely]] return; }
L_00211C8C:
    set32(c.r[5], 0u + 97u);
    c.budget -= 1;
L_00211C90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211C98u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0079(c, 268u, depth + 1u); else { c.pc = 0x002E70C0u; return; } if (c.pc != 0x00211C98u) [[unlikely]] return; }
L_00211C98:
    set32(c.r[5], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211CA4u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 34u, depth + 1u); else { c.pc = 0x00198540u; return; } if (c.pc != 0x00211CA4u) [[unlikely]] return; }
L_00211CA4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 39u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 39u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 39u)));
    c.r[3].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00211CFC; } }
    set32(c.r[3], 0u + 3u);
    st8((c.r[16].w[0] + 25u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 30u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 32u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00211CFC; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_00211CD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 32u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00211CFC; } }
L_00211CE0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 32u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_00211CF8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 25u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00211CFC; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_00211CF8:
    st8((c.r[16].w[0] + 32u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_00211CFC:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00211D00:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00211D20:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 7762u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[3], 0u + 3u);
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[16], c.r[17].w[0] + 7736u);  if (t) { goto L_00211F70; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[5].d[0]) { set32(c.r[2], 0u + 30u);  goto L_00211F24; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_00211EC4; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00211D6C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_00211F90; } }
L_00211D6C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_00211EBC; }
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[2], 0u + 600u);  if (t) { goto L_00211D98; } }
    set32(c.r[2], 0u + 600u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 56u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00211D9C; } }
    set32(c.r[2], 0u + 600u);
    c.budget -= 1;
L_00211D98:
    st16((c.r[16].w[0] + 56u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_00211D9C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44160000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[9], 0u + 8192u);
    set32(c.r[10], 0u + 13u);
    c.r[6].d[0] = 0ull | 65535ull;
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211DC4u); mmi::paddub(c.r[8], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 28u, depth + 1u); else { c.pc = 0x0024C7E0u; return; } if (c.pc != 0x00211DC4u) [[unlikely]] return; }
L_00211DC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00211F8C; } }
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 220u), c.r[2].w[0]);
    st8((c.r[16].w[0] + 26u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 369u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00211E14; } }
    c.f[1] = ld32((c.r[2].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 48u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 56u), c.f[0]);  if (t) { goto L_00211E2C; } }
L_00211E14:
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    st32((c.r[29].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    st32((c.r[29].w[0] + 56u), c.f[0]);
    c.budget -= 6;
L_00211E2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211E34u); set32(c.r[4], c.r[17].w[0] + 2816u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x00211E34u) [[unlikely]] return; }
L_00211E34:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211E44u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 211u, depth + 1u); else { c.pc = 0x00102548u; return; } if (c.pc != 0x00211E44u) [[unlikely]] return; }
L_00211E44:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211E50u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x00211E50u) [[unlikely]] return; }
L_00211E50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211E58u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x00211E58u) [[unlikely]] return; }
L_00211E58:
    c.f[13] = ld32((c.r[29].w[0] + 72u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211E64u); c.f[12] = ld32((c.r[29].w[0] + 64u));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x00211E64u) [[unlikely]] return; }
L_00211E64:
    set32(c.r[4], ld32((c.r[17].w[0] + 4704u)));
    c.r[5].d[0] = c.r[2].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.r[3].d[0] = 0ull | 32768ull;
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[16].w[0] + 104u), c.r[4].w[0]);
    c.r[4].d[0] = ld16((c.r[16].w[0] + 104u));
    st32((c.r[16].w[0] + 104u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 4704u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 128u);  if (t) { goto L_00211EB0; } }
    set32(c.r[3], 0u - 128u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 160u), c.r[3].w[0]);  if (t) { goto L_00211F8C; } }
    set32(c.r[3], 0u + 128u);
    c.budget -= 1;
L_00211EB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 160u), c.r[3].w[0]);  if (t) { goto L_00211F8C; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_00211EBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 56u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00211F8C; } }
L_00211EC4:
    set32(c.r[5], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 4704u)));
    c.r[3].d[0] = 0ull | 65535ull;
    set32(c.r[6], c.r[5].w[0] - c.r[4].w[0]);
    c.r[6].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[1].d[0] = c.r[6].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_00211EF8; } }
    c.r[3].d[0] = 0ull | 65472ull;
    c.r[3].d[0] = c.r[6].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00211F08; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_00211EF8:
    st32((c.r[17].w[0] + 4704u), c.r[5].w[0]);
    st8((c.r[16].w[0] + 26u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 160u), 0u);  if (t) { goto L_00211F8C; } }
L_00211F08:
    set32(c.r[3], ld32((c.r[16].w[0] + 160u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[17].w[0] + 4704u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[17].w[0] + 4704u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4704u), c.r[3].w[0]);  if (t) { goto L_00211F8C; } }
L_00211F20:
    set32(c.r[2], 0u + 30u);
    c.budget -= 1;
L_00211F24:
    st8((c.r[16].w[0] + 26u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 33u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[5], 0u + 51u);  if (t) { goto L_00211F48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211F44u); set32(c.r[5], ld32((c.r[16].w[0] + 220u)));  if (depth < kMaxDepth) unit_0077(c, 232u, depth + 1u); else { c.pc = 0x002DEAA0u; return; } if (c.pc != 0x00211F44u) [[unlikely]] return; }
L_00211F44:
    set32(c.r[5], 0u + 51u);
    c.budget -= 1;
L_00211F48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211F50u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_007A(c, 8u, depth + 1u); else { c.pc = 0x002E8110u; return; } if (c.pc != 0x00211F50u) [[unlikely]] return; }
L_00211F50:
    set32(c.r[5], 0u + 52u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211F5Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_007A(c, 8u, depth + 1u); else { c.pc = 0x002E8110u; return; } if (c.pc != 0x00211F5Cu) [[unlikely]] return; }
L_00211F5C:
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211F68u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 34u, depth + 1u); else { c.pc = 0x00198540u; return; } if (c.pc != 0x00211F68u) [[unlikely]] return; }
L_00211F68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00211F8C; } }
L_00211F70:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 33u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_00211F88; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 26u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00211F8C; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_00211F88:
    st8((c.r[16].w[0] + 33u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_00211F8C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00211F90:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00211FA0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 7763u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[3], 0u + 3u);
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[16], c.r[17].w[0] + 7736u);  if (t) { goto L_0021227C; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_002121FC; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_00212198; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00211FEC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_0021229C; } }
L_00211FEC:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 58u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_00212190; }
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[2], 0u + 600u);  if (t) { goto L_00212018; } }
    set32(c.r[2], 0u + 600u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 58u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0021201C; } }
    set32(c.r[2], 0u + 600u);
    c.budget -= 1;
L_00212018:
    st16((c.r[16].w[0] + 58u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_0021201C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43960000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[6], 0u + 4096u);
    set32(c.r[9], 0u + 8192u);
    set32(c.r[10], 0u + 9u);
    c.r[8].d[0] = 0ull | 65535ull;
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212044u); c.r[7].d[0] = 0ull | 61440ull;  if (depth < kMaxDepth) unit_0053(c, 28u, depth + 1u); else { c.pc = 0x0024C7E0u; return; } if (c.pc != 0x00212044u) [[unlikely]] return; }
L_00212044:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00212298; } }
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 224u), c.r[2].w[0]);
    st8((c.r[16].w[0] + 27u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 369u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00212094; } }
    c.f[1] = ld32((c.r[2].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 48u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 56u), c.f[0]);  if (t) { goto L_002120AC; } }
L_00212094:
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    st32((c.r[29].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    st32((c.r[29].w[0] + 56u), c.f[0]);
    c.budget -= 6;
L_002120AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002120B4u); set32(c.r[4], c.r[17].w[0] + 2560u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002120B4u) [[unlikely]] return; }
L_002120B4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002120C4u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 211u, depth + 1u); else { c.pc = 0x00102548u; return; } if (c.pc != 0x002120C4u) [[unlikely]] return; }
L_002120C4:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002120D0u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002120D0u) [[unlikely]] return; }
L_002120D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002120D8u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x002120D8u) [[unlikely]] return; }
L_002120D8:
    c.f[1] = ld32((c.r[29].w[0] + 72u));
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002120ECu); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002120ECu) [[unlikely]] return; }
L_002120EC:
    c.f[12] = ld32((c.r[29].w[0] + 68u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002120F8u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x002120F8u) [[unlikely]] return; }
L_002120F8:
    set32(c.r[3], ld32((c.r[17].w[0] + 4660u)));
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[5].d[0] = 0ull | 32768ull;
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    st32((c.r[16].w[0] + 80u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[16].w[0] + 80u));
    st32((c.r[16].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = 0ull | 32768ull;  if (t) { goto L_00212144; } }
    c.r[3].d[0] = c.r[4].sd[0] < 10922ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00212140; } }
    set32(c.r[3], 0u + 10922u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 80u), c.r[3].w[0]);  if (t) { goto L_00212154; } }
L_00212140:
    c.r[3].d[0] = 0ull | 32768ull;
    c.budget -= 1;
L_00212144:
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00212154; } }
    st32((c.r[16].w[0] + 80u), 0u);
    c.budget -= 1;
L_00212154:
    set32(c.r[4], ld32((c.r[17].w[0] + 4660u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 80u)));
    c.r[3].d[0] = 0ull | 32768ull;
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 64u);  if (t) { goto L_00212184; } }
    set32(c.r[3], 0u - 64u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 136u), c.r[3].w[0]);  if (t) { goto L_00212298; } }
    set32(c.r[3], 0u + 64u);
    c.budget -= 1;
L_00212184:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 136u), c.r[3].w[0]);  if (t) { goto L_00212298; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_00212190:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 58u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00212298; } }
L_00212198:
    set32(c.r[5], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 4660u)));
    c.r[3].d[0] = 0ull | 65535ull;
    set32(c.r[6], c.r[5].w[0] - c.r[4].w[0]);
    c.r[6].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[1].d[0] = c.r[6].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002121C8; } }
    c.r[3].d[0] = 0ull | 65504ull;
    c.r[3].d[0] = c.r[6].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002121E4; } }
L_002121C8:
    st32((c.r[17].w[0] + 4660u), c.r[5].w[0]);
    set32(c.r[3], 0u + 2u);
    st32((c.r[16].w[0] + 136u), 0u);
    st8((c.r[16].w[0] + 27u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 34u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 41u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00212298; } }
L_002121E4:
    set32(c.r[3], ld32((c.r[16].w[0] + 136u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[17].w[0] + 4660u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[17].w[0] + 4660u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4660u), c.r[3].w[0]);  if (t) { goto L_00212298; } }
L_002121FC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 34u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_00212274; }
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 34u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[5], 0u + 101u);  if (t) { goto L_0021222C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212228u); set32(c.r[5], ld32((c.r[16].w[0] + 224u)));  if (depth < kMaxDepth) unit_0077(c, 232u, depth + 1u); else { c.pc = 0x002DEAA0u; return; } if (c.pc != 0x00212228u) [[unlikely]] return; }
L_00212228:
    set32(c.r[5], 0u + 101u);
    c.budget -= 1;
L_0021222C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212234u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0079(c, 268u, depth + 1u); else { c.pc = 0x002E70C0u; return; } if (c.pc != 0x00212234u) [[unlikely]] return; }
L_00212234:
    set32(c.r[5], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212240u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 34u, depth + 1u); else { c.pc = 0x00198540u; return; } if (c.pc != 0x00212240u) [[unlikely]] return; }
L_00212240:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 41u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 41u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 41u)));
    c.r[3].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00212298; } }
    set32(c.r[3], 0u + 3u);
    st8((c.r[16].w[0] + 27u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 30u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 34u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00212298; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_00212274:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 34u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00212298; } }
L_0021227C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 34u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_00212294; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 27u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00212298; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_00212294:
    st8((c.r[16].w[0] + 34u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_00212298:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0021229C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002122B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 7764u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[5], 0u + 2u);
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[16], c.r[17].w[0] + 7736u);  if (t) { goto L_002123F4; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_00212374; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002122F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_00212414; } }
L_002122F0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 60u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_0021236C; }
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[2], 0u + 600u);  if (t) { goto L_0021231C; } }
    set32(c.r[2], 0u + 600u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 60u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00212320; } }
    set32(c.r[2], 0u + 600u);
    c.budget -= 1;
L_0021231C:
    st16((c.r[16].w[0] + 60u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_00212320:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43960000u);
    c.r[5].d[0] = 0ull | 57344ull;
    c.f[12] = c.r[2].w[0];
    set32(c.r[9], 0u + 8192u);
    set32(c.r[10], 0u + 10u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.r[6].d[0] = 0ull | 61440ull;
    mmi::paddub(c.r[7], c.r[5], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212348u); mmi::paddub(c.r[8], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 28u, depth + 1u); else { c.pc = 0x0024C7E0u; return; } if (c.pc != 0x00212348u) [[unlikely]] return; }
L_00212348:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00212410; } }
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 228u), c.r[2].w[0]);
    st8((c.r[16].w[0] + 28u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 35u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 42u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00212410; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_0021236C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 60u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00212410; } }
L_00212374:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 35u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_002123EC; }
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 35u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[5], 0u + 105u);  if (t) { goto L_002123A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002123A0u); set32(c.r[5], ld32((c.r[16].w[0] + 228u)));  if (depth < kMaxDepth) unit_0077(c, 232u, depth + 1u); else { c.pc = 0x002DEAA0u; return; } if (c.pc != 0x002123A0u) [[unlikely]] return; }
L_002123A0:
    set32(c.r[5], 0u + 105u);
    c.budget -= 1;
L_002123A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002123ACu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0079(c, 268u, depth + 1u); else { c.pc = 0x002E70C0u; return; } if (c.pc != 0x002123ACu) [[unlikely]] return; }
L_002123AC:
    set32(c.r[5], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002123B8u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 34u, depth + 1u); else { c.pc = 0x00198540u; return; } if (c.pc != 0x002123B8u) [[unlikely]] return; }
L_002123B8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 42u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 42u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 42u)));
    c.r[3].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00212410; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 28u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 30u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 35u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00212410; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_002123EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 35u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00212410; } }
L_002123F4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 35u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_0021240C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 28u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00212410; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_0021240C:
    st8((c.r[16].w[0] + 35u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_00212410:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00212414:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00212430:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 7765u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[5], 0u + 2u);
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[16], c.r[17].w[0] + 7736u);  if (t) { goto L_00212574; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_002124F4; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00212470; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_00212594; } }
L_00212470:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 62u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_002124EC; }
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[2], 0u + 600u);  if (t) { goto L_0021249C; } }
    set32(c.r[2], 0u + 600u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 62u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_002124A0; } }
    set32(c.r[2], 0u + 600u);
    c.budget -= 1;
L_0021249C:
    st16((c.r[16].w[0] + 62u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_002124A0:
    set32(c.r[6], 0u + 8192u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43960000u);
    set32(c.r[5], 0u + 4096u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[10], 0u + 11u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    mmi::paddub(c.r[7], c.r[5], c.r[0]);
    mmi::paddub(c.r[8], c.r[6], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002124C8u); mmi::paddub(c.r[9], c.r[6], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 28u, depth + 1u); else { c.pc = 0x0024C7E0u; return; } if (c.pc != 0x002124C8u) [[unlikely]] return; }
L_002124C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00212590; } }
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 232u), c.r[2].w[0]);
    st8((c.r[16].w[0] + 29u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 36u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 43u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00212590; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_002124EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 62u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00212590; } }
L_002124F4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_0021256C; }
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 36u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[5], 0u + 103u);  if (t) { goto L_00212524; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212520u); set32(c.r[5], ld32((c.r[16].w[0] + 232u)));  if (depth < kMaxDepth) unit_0077(c, 232u, depth + 1u); else { c.pc = 0x002DEAA0u; return; } if (c.pc != 0x00212520u) [[unlikely]] return; }
L_00212520:
    set32(c.r[5], 0u + 103u);
    c.budget -= 1;
L_00212524:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021252Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0079(c, 268u, depth + 1u); else { c.pc = 0x002E70C0u; return; } if (c.pc != 0x0021252Cu) [[unlikely]] return; }
L_0021252C:
    set32(c.r[5], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212538u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 34u, depth + 1u); else { c.pc = 0x00198540u; return; } if (c.pc != 0x00212538u) [[unlikely]] return; }
L_00212538:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 43u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 43u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 43u)));
    c.r[3].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00212590; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 29u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 30u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 36u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00212590; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_0021256C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 36u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00212590; } }
L_00212574:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_0021258C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 29u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00212590; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_0021258C:
    st8((c.r[16].w[0] + 36u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_00212590:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00212594:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002125B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 7766u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[5], 0u + 2u);
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[16], c.r[17].w[0] + 7736u);  if (t) { goto L_002126D4; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 30u);  goto L_00212670; }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002125F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_002126F4; } }
L_002125F0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 64u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_00212664; }
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[2], 0u + 600u);  if (t) { goto L_0021261C; } }
    set32(c.r[2], 0u + 300u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 64u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00212620; } }
    set32(c.r[2], 0u + 600u);
    c.budget -= 1;
L_0021261C:
    st16((c.r[16].w[0] + 64u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_00212620:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43FA0000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[6], 0u + 4096u);
    set32(c.r[9], 0u + 8192u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.r[7].d[0] = 0ull | 61440ull;
    c.r[8].d[0] = 0ull | 65535ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212648u); mmi::paddub(c.r[10], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 28u, depth + 1u); else { c.pc = 0x0024C7E0u; return; } if (c.pc != 0x00212648u) [[unlikely]] return; }
L_00212648:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002126F0; } }
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 236u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 30u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002126F0; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_00212664:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 64u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002126F0; } }
    set32(c.r[2], 0u + 30u);
    c.budget -= 1;
L_00212670:
    st8((c.r[16].w[0] + 30u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 37u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[5], 0u + 92u);  if (t) { goto L_00212694; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212690u); set32(c.r[5], ld32((c.r[16].w[0] + 236u)));  if (depth < kMaxDepth) unit_0077(c, 232u, depth + 1u); else { c.pc = 0x002DEAA0u; return; } if (c.pc != 0x00212690u) [[unlikely]] return; }
L_00212690:
    set32(c.r[5], 0u + 92u);
    c.budget -= 1;
L_00212694:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021269Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0079(c, 182u, depth + 1u); else { c.pc = 0x002E62A0u; return; } if (c.pc != 0x0021269Cu) [[unlikely]] return; }
L_0021269C:
    set32(c.r[5], 0u + 93u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002126A8u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0079(c, 182u, depth + 1u); else { c.pc = 0x002E62A0u; return; } if (c.pc != 0x002126A8u) [[unlikely]] return; }
L_002126A8:
    set32(c.r[5], 0u + 94u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002126B4u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0079(c, 182u, depth + 1u); else { c.pc = 0x002E62A0u; return; } if (c.pc != 0x002126B4u) [[unlikely]] return; }
L_002126B4:
    set32(c.r[5], 0u + 95u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002126C0u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0079(c, 182u, depth + 1u); else { c.pc = 0x002E62A0u; return; } if (c.pc != 0x002126C0u) [[unlikely]] return; }
L_002126C0:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002126CCu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 34u, depth + 1u); else { c.pc = 0x00198540u; return; } if (c.pc != 0x002126CCu) [[unlikely]] return; }
L_002126CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002126F0; } }
L_002126D4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 37u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_002126EC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 30u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002126F0; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_002126EC:
    st8((c.r[16].w[0] + 37u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_002126F0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002126F4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00212710:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], 0u + 17u);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.r[5].d[0] = c.r[16].d[0] << 48;
    c.budget -= 8;
L_00212730:
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021273Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_003D(c, 200u, depth + 1u); else { c.pc = 0x001F61F0u; return; } if (c.pc != 0x0021273Cu) [[unlikely]] return; }
L_0021273C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[16].sd[0] < 23ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[5].d[0] = c.r[16].d[0] << 48;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00212730u | kUnwind; return; } goto L_00212730; } }
    st8((c.r[17].w[0] + 366u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 367u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 368u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 369u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 370u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[16], c.r[17].w[0] + 320u);  if (t) { goto L_002127A8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8390u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 5552u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 2));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    st16((c.r[17].w[0] + 516u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[17].w[0] + 514u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[17].w[0] + 512u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 13;
L_002127A8:
    set32(c.r[2], 0u + 300u);
    st16((c.r[16].w[0] + 36u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 38u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 600u);
    st16((c.r[16].w[0] + 40u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 900u);
    st16((c.r[16].w[0] + 42u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1200u);
    st16((c.r[16].w[0] + 44u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(12ll) ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[5], 0u + 23u);  if (t) { goto L_00212C68; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] + 25104u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00210000u < 16384u) { entry = entries_0044[(t - 0x00210000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002127F8:
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 71u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 66u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.f[1] = ld32((c.r[17].w[0] + 32u));
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
    st8((c.r[16].w[0] + 67u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 68u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 69u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 70u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 94u), static_cast<std::uint8_t>(0u));
    c.budget -= 26;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 274u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00212C64; } }
L_00212860:
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 71u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], 0u + 1u);
    st8((c.r[16].w[0] + 66u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 67u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 68u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 69u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 70u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 94u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43480000u);
    c.f[12] = c.r[2].w[0];
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021289Cu); st8((c.r[3].w[0] + 652u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (depth < kMaxDepth) unit_0014(c, 151u, depth + 1u); else { c.pc = 0x00152F90u; return; } if (c.pc != 0x0021289Cu) [[unlikely]] return; }
L_0021289C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);  if (t) { goto L_002128B8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E190000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), c.r[2].w[0]);  if (t) { goto L_002128BC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.budget -= 1;
L_002128B8:
    st32((c.r[17].w[0] + 104u), c.r[2].w[0]);
    c.budget -= 1;
L_002128BC:
    st32((c.r[17].w[0] + 52u), 0u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002128CCu); st32((c.r[16].w[0] + 72u), 0u);  if (depth < kMaxDepth) unit_0045(c, 186u, depth + 1u); else { c.pc = 0x002173D0u; return; } if (c.pc != 0x002128CCu) [[unlikely]] return; }
L_002128CC:
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 80u), c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00212C64; } }
L_002128DC:
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 71u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], 0u + 1u);
    st8((c.r[16].w[0] + 66u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 67u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 68u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 69u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 70u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 94u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43480000u);
    c.f[12] = c.r[2].w[0];
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212918u); st8((c.r[3].w[0] + 652u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (depth < kMaxDepth) unit_0014(c, 151u, depth + 1u); else { c.pc = 0x00152F90u; return; } if (c.pc != 0x00212918u) [[unlikely]] return; }
L_00212918:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);  if (t) { goto L_00212934; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E190000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), c.r[2].w[0]);  if (t) { goto L_00212938; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.budget -= 1;
L_00212934:
    st32((c.r[17].w[0] + 104u), c.r[2].w[0]);
    c.budget -= 1;
L_00212938:
    st32((c.r[17].w[0] + 52u), 0u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212948u); st32((c.r[16].w[0] + 72u), 0u);  if (depth < kMaxDepth) unit_0045(c, 185u, depth + 1u); else { c.pc = 0x00217370u; return; } if (c.pc != 0x00212948u) [[unlikely]] return; }
L_00212948:
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 76u), c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00212C64; } }
L_00212958:
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 71u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], 0u + 1u);
    st8((c.r[16].w[0] + 66u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 67u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 68u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 69u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 70u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 94u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43480000u);
    c.f[12] = c.r[2].w[0];
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212994u); st8((c.r[3].w[0] + 652u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (depth < kMaxDepth) unit_0014(c, 151u, depth + 1u); else { c.pc = 0x00152F90u; return; } if (c.pc != 0x00212994u) [[unlikely]] return; }
L_00212994:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);  if (t) { goto L_002129B0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E190000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), c.r[2].w[0]);  if (t) { goto L_002129B4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.budget -= 1;
L_002129B0:
    st32((c.r[17].w[0] + 104u), c.r[2].w[0]);
    c.budget -= 1;
L_002129B4:
    st32((c.r[17].w[0] + 52u), 0u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002129C4u); st32((c.r[16].w[0] + 72u), 0u);  if (depth < kMaxDepth) unit_0045(c, 185u, depth + 1u); else { c.pc = 0x00217370u; return; } if (c.pc != 0x002129C4u) [[unlikely]] return; }
L_002129C4:
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 76u), c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00212C64; } }
L_002129D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 5520u);
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 84u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 5456u);
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    st8((c.r[16].w[0] + 92u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 66u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 71u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 67u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 69u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 70u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 94u), static_cast<std::uint8_t>(0u));
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00212C64; } }
L_00212A18:
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 71u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 66u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 67u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 68u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 69u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 70u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 94u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 70u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 652u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 274u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00212C64; } }
L_00212A50:
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 71u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 66u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 67u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 68u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 69u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43480000u);
    st8((c.r[16].w[0] + 70u), static_cast<std::uint8_t>(0u));
    c.f[12] = c.r[2].w[0];
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212A84u); st8((c.r[16].w[0] + 94u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0014(c, 151u, depth + 1u); else { c.pc = 0x00152F90u; return; } if (c.pc != 0x00212A84u) [[unlikely]] return; }
L_00212A84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);  if (t) { goto L_00212AA0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E190000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), c.r[2].w[0]);  if (t) { goto L_00212AA4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.budget -= 1;
L_00212AA0:
    st32((c.r[17].w[0] + 104u), c.r[2].w[0]);
    c.budget -= 1;
L_00212AA4:
    st32((c.r[17].w[0] + 52u), 0u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212AB4u); st32((c.r[16].w[0] + 72u), 0u);  if (depth < kMaxDepth) unit_0045(c, 186u, depth + 1u); else { c.pc = 0x002173D0u; return; } if (c.pc != 0x00212AB4u) [[unlikely]] return; }
L_00212AB4:
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 80u), c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00212C64; } }
L_00212AC4:
    st8((c.r[16].w[0] + 71u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 66u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 67u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 68u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 69u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43480000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212AECu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0014(c, 151u, depth + 1u); else { c.pc = 0x00152F90u; return; } if (c.pc != 0x00212AECu) [[unlikely]] return; }
L_00212AEC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);  if (t) { goto L_00212B08; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E190000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), c.r[2].w[0]);  if (t) { goto L_00212B0C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.budget -= 1;
L_00212B08:
    st32((c.r[17].w[0] + 104u), c.r[2].w[0]);
    c.budget -= 1;
L_00212B0C:
    st32((c.r[17].w[0] + 52u), 0u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212B1Cu); st32((c.r[16].w[0] + 72u), 0u);  if (depth < kMaxDepth) unit_0045(c, 185u, depth + 1u); else { c.pc = 0x00217370u; return; } if (c.pc != 0x00212B1Cu) [[unlikely]] return; }
L_00212B1C:
    set32(c.r[2], 0u + 2u);
    st32((c.r[16].w[0] + 76u), c.f[0]);
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 94u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 70u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 652u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 274u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00212C64; } }
L_00212B40:
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 71u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 66u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 67u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], 0u + 1u);
    st8((c.r[16].w[0] + 68u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 69u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 70u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 94u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43480000u);
    c.f[12] = c.r[2].w[0];
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212B7Cu); st8((c.r[3].w[0] + 652u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (depth < kMaxDepth) unit_0014(c, 151u, depth + 1u); else { c.pc = 0x00152F90u; return; } if (c.pc != 0x00212B7Cu) [[unlikely]] return; }
L_00212B7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);  if (t) { goto L_00212B98; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E190000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), c.r[2].w[0]);  if (t) { goto L_00212B9C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.budget -= 1;
L_00212B98:
    st32((c.r[17].w[0] + 104u), c.r[2].w[0]);
    c.budget -= 1;
L_00212B9C:
    st32((c.r[17].w[0] + 52u), 0u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212BACu); st32((c.r[16].w[0] + 72u), 0u);  if (depth < kMaxDepth) unit_0045(c, 186u, depth + 1u); else { c.pc = 0x002173D0u; return; } if (c.pc != 0x00212BACu) [[unlikely]] return; }
L_00212BAC:
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 80u), c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00212C64; } }
L_00212BBC:
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 71u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 66u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.f[1] = ld32((c.r[17].w[0] + 32u));
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
    st8((c.r[16].w[0] + 67u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 68u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 69u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 70u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 94u), static_cast<std::uint8_t>(0u));
    c.budget -= 26;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 274u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00212C64; } }
L_00212C24:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 5440u);
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 84u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 5376u);
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    st8((c.r[16].w[0] + 92u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 66u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 71u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 67u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 69u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 70u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 94u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 16;
L_00212C64:
    set32(c.r[5], 0u + 23u);
    c.budget -= 1;
L_00212C68:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212C74u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 25u, depth + 1u); else { c.pc = 0x00198370u; return; } if (c.pc != 0x00212C74u) [[unlikely]] return; }
L_00212C74:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 5360u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[17].w[0] + 1260u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 71u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[18], c.r[0], c.r[0]);  if (t) { goto L_00212CF0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    st32((c.r[17].w[0] + 104u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 92u), 0u);
    st32((c.r[17].w[0] + 96u), 0u);
    st32((c.r[17].w[0] + 100u), 0u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.f[3] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[17].w[0] + 1760u), c.f[3]);
    st32((c.r[17].w[0] + 1764u), c.f[2]);
    st32((c.r[17].w[0] + 1768u), c.f[1]);
    st32((c.r[17].w[0] + 1772u), c.f[0]);
    st8((c.r[16].w[0] + 93u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 68u), static_cast<std::uint8_t>(0u));
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    c.budget -= 21;
L_00212CF0:
    set32(c.r[2], c.r[18].w[0] + 56u);
    c.r[5].d[0] = c.r[2].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212D04u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0078(c, 319u, depth + 1u); else { c.pc = 0x002E3640u; return; } if (c.pc != 0x00212D04u) [[unlikely]] return; }
L_00212D04:
    set32(c.r[18], c.r[18].w[0] + 1u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[3].d[0] = c.r[18].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00212CF0u | kUnwind; return; } goto L_00212CF0; } }
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00212D30:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 391u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[16], c.r[17].w[0] + 320u);  if (t) { goto L_00212DE0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 641u)));
    c.r[3].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00212D70; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 280u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_00212D70:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00212F64; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212D80u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0044(c, 202u, depth + 1u); else { c.pc = 0x00213260u; return; } if (c.pc != 0x00212D80u) [[unlikely]] return; }
L_00212D80:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212DD8u); st32((c.r[17].w[0] + 88u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 232u, depth + 1u); else { c.pc = 0x0024B250u; return; } if (c.pc != 0x00212DD8u) [[unlikely]] return; }
L_00212DD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 514u)));  if (t) { goto L_00212F68; } }
L_00212DE0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 69u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00212F1C; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 641u)));
    c.r[3].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00212E08; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 280u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_00212E08:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00212E18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212E18u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0052(c, 232u, depth + 1u); else { c.pc = 0x0024B250u; return; } if (c.pc != 0x00212E18u) [[unlikely]] return; }
L_00212E18:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 94u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00212E50; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.f[3] = ld32((c.r[17].w[0] + 32u));
    c.f[2] = ld32((c.r[17].w[0] + 36u));
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 44u));
    st32((c.r[3].w[0] + 592u), c.f[3]);
    st32((c.r[3].w[0] + 596u), c.f[2]);
    st32((c.r[3].w[0] + 600u), c.f[1]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 604u), c.f[0]);  if (t) { goto L_00212F64; } }
L_00212E50:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212E80u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x00212E80u) [[unlikely]] return; }
L_00212E80:
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212E8Cu); c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x00212E8Cu) [[unlikely]] return; }
L_00212E8C:
    c.f[1] = ld32((c.r[16].w[0] + 72u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 72u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 70u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00212EE0; } }
    c.f[1] = ld32((c.r[16].w[0] + 72u));
    c.f[0] = ld32((c.r[16].w[0] + 76u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00212F64; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 94u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00212ED4; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 94u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00212F64; } }
L_00212ED4:
    st8((c.r[16].w[0] + 69u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), 0u);  if (t) { goto L_00212F64; } }
L_00212EE0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 67u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00212F64; } }
    c.f[1] = ld32((c.r[16].w[0] + 72u));
    c.f[0] = ld32((c.r[16].w[0] + 80u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00212F64; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212F14u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 9u, depth + 1u); else { c.pc = 0x00304280u; return; } if (c.pc != 0x00212F14u) [[unlikely]] return; }
L_00212F14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);  if (t) { goto L_00213220; } }
L_00212F1C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 66u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00212F64; } }
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
L_00212F64:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 514u)));
    c.budget -= 1;
L_00212F68:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_00213074; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00212FC0; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 514u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0; set32(c.r[6], 0u + 3u);  if (t) { goto L_00212FB0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00212FAC; } }
    st32((c.r[16].w[0]), 0u);
    set32(c.r[3], ld32((c.r[17].w[0] + 1260u)));
    set32(c.r[2], 0u - 9u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1260u), c.r[2].w[0]);  if (t) { goto L_00212FC0; } }
L_00212FAC:
    set32(c.r[6], 0u + 3u);
    c.budget -= 1;
L_00212FB0:
    set32(c.r[7], 0u + 139u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212FC0u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0044(c, 214u, depth + 1u); else { c.pc = 0x00213980u; return; } if (c.pc != 0x00212FC0u) [[unlikely]] return; }
L_00212FC0:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00213010; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 514u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0; set32(c.r[5], 0u + 1u);  if (t) { goto L_00213000; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00212FFC; } }
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[3], ld32((c.r[17].w[0] + 1260u)));
    set32(c.r[2], 0u - 17u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1260u), c.r[2].w[0]);  if (t) { goto L_00213010; } }
L_00212FFC:
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_00213000:
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 141u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00213010u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0044(c, 214u, depth + 1u); else { c.pc = 0x00213980u; return; } if (c.pc != 0x00213010u) [[unlikely]] return; }
L_00213010:
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_00213064; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 514u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0; set32(c.r[5], 0u + 2u);  if (t) { goto L_00213050; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0021304C; } }
    st32((c.r[16].w[0] + 8u), 0u);
    set32(c.r[3], ld32((c.r[17].w[0] + 1260u)));
    set32(c.r[2], 0u - 33u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1260u), c.r[2].w[0]);  if (t) { goto L_00213060; } }
L_0021304C:
    set32(c.r[5], 0u + 2u);
    c.budget -= 1;
L_00213050:
    set32(c.r[6], 0u + 5u);
    set32(c.r[7], 0u + 143u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00213060u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0044(c, 214u, depth + 1u); else { c.pc = 0x00213980u; return; } if (c.pc != 0x00213060u) [[unlikely]] return; }
L_00213060:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_00213064:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021306Cu);  if (depth < kMaxDepth) unit_0044(c, 225u, depth + 1u); else { c.pc = 0x00213D10u; return; } if (c.pc != 0x0021306Cu) [[unlikely]] return; }
L_0021306C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00213074u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0044(c, 230u, depth + 1u); else { c.pc = 0x00213E70u; return; } if (c.pc != 0x00213074u) [[unlikely]] return; }
L_00213074:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[5], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_0021321C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 529u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0021321C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 67u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0021321C; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_00213184; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002130F0; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x43480000u);  goto L_002130CC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021321C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43480000u);
    c.budget -= 1;
L_002130CC:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002130D8u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0014(c, 151u, depth + 1u); else { c.pc = 0x00152F90u; return; } if (c.pc != 0x002130D8u) [[unlikely]] return; }
L_002130D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0021321C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 68u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 68u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0021321C; } }
L_002130F0:
    c.f[1] = ld32((c.r[17].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E190000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3CCC0000u);  goto L_00213120; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), c.r[2].w[0]);  if (t) { goto L_00213134; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3CCC0000u);
    c.budget -= 1;
L_00213120:
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.budget -= 5;
L_00213134:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43AC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00213148u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0014(c, 156u, depth + 1u); else { c.pc = 0x001530A0u; return; } if (c.pc != 0x00213148u) [[unlikely]] return; }
L_00213148:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0021321C; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 68u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 29598u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 68u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[17].w[0] + 532u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[17].w[0] + 531u));
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0021321C; } }
L_00213184:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 640u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002131D8; } }
    c.f[1] = ld32((c.r[17].w[0] + 104u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[3].sd[0] = static_cast<std::int32_t>(0x3CCC0000u);  goto L_002131C0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), c.r[3].w[0]);  if (t) { goto L_0021321C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3CCC0000u);
    c.budget -= 1;
L_002131C0:
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), c.f[0]);  if (t) { goto L_0021321C; } }
L_002131D8:
    c.f[1] = ld32((c.r[17].w[0] + 104u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E190000u);
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    if (!(c.fcr31 & kFpuCondition)) { c.r[3].sd[0] = static_cast<std::int32_t>(0x3CCC0000u);  goto L_00213208; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), c.r[3].w[0]);  if (t) { goto L_0021321C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3CCC0000u);
    c.budget -= 1;
L_00213208:
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.budget -= 5;
L_0021321C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00213220:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00213240:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[5], 0u + 23u);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00198460u | kUnwind; return; } [[clang::musttail]] return unit_0026(c, 29u, depth); }
L_00213260:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.f[12] = c.r[2].w[0];
    set32(c.r[16], c.r[17].w[0] + 320u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021328Cu); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0053(c, 33u, depth + 1u); else { c.pc = 0x0024C9F0u; return; } if (c.pc != 0x0021328Cu) [[unlikely]] return; }
L_0021328C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00213304; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021329Cu);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x0021329Cu) [[unlikely]] return; }
L_0021329C:
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 92u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    st8((c.r[16].w[0] + 92u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.f[3] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[17].w[0] + 1760u), c.f[3]);
    st32((c.r[17].w[0] + 1764u), c.f[2]);
    st32((c.r[17].w[0] + 1768u), c.f[1]);
    st32((c.r[17].w[0] + 1772u), c.f[0]);
    st8((c.r[16].w[0] + 93u), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0] + 52u), 0u);
    c.budget -= 26;
L_00213304:
    c.f[3] = ld32((c.r[17].w[0] + 1760u));
    c.f[2] = ld32((c.r[17].w[0] + 32u));
    c.f[1] = ld32((c.r[17].w[0] + 1768u));
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    c.f[20] = fp::sub(c.f[3], c.f[2]);
    c.f[21] = fp::sub(c.f[1], c.f[0]);
    c.f[12] = c.f[20];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00213328u); c.f[13] = c.f[21];  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x00213328u) [[unlikely]] return; }
L_00213328:
    mmi::paddub(c.r[4], c.r[2], c.r[0]);
    c.r[3].d[0] = 0ull | 65535ull;
    c.r[4].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    c.r[6].d[0] = 0ull | 63488ull;
    set32(c.r[4], c.r[4].w[0] - c.r[3].w[0]);
    c.r[5].d[0] = c.r[4].d[0] & 65535ull;
    c.r[1].d[0] = c.r[5].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0021335C; } }
    c.r[1].d[0] = c.r[5].sd[0] < 2049ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = 0ull | 32768ull;  if (t) { goto L_002133C4; } }
L_0021335C:
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_00213374; } }
    set32(c.r[3], c.r[3].w[0] - 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_00213384; } }
L_00213374:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_00213384; } }
    set32(c.r[3], c.r[3].w[0] + 2u);
    st32((c.r[17].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 2;
L_00213384:
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; c.r[3].d[0] = 0ull | 32768ull;  if (t) { goto L_0021339C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), 0u);  if (t) { goto L_002134AC; } }
    c.r[3].d[0] = 0ull | 32768ull;
    c.budget -= 1;
L_0021339C:
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u - 8u);  if (t) { goto L_002133B8; } }
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), c.r[3].w[0]);  if (t) { goto L_002134AC; } }
    set32(c.r[3], 0u - 8u);
    c.budget -= 1;
L_002133B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), c.r[3].w[0]);  if (t) { goto L_002134AC; } }
    c.r[3].d[0] = 0ull | 32768ull;
    c.budget -= 1;
L_002133C4:
    c.r[1].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00213440; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    c.r[3].d[0] = c.r[4].sd[0] < 64ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[4].w[0] + 2u);  if (t) { goto L_002133F0; } }
    set32(c.r[3], 0u + 64u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_002133F4; } }
    set32(c.r[3], c.r[4].w[0] + 2u);
    c.budget -= 1;
L_002133F0:
    st32((c.r[17].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 1;
L_002133F4:
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    c.r[1].d[0] = 0ull | 63489ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = c.r[5].sd[0] < 2048ll ? 1ull : 0ull;  if (t) { goto L_0021342C; } }
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00213428; } }
    c.r[3].d[0] = 0ull | 63488ull;
    st32((c.r[17].w[0] + 88u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), 0u);  if (t) { goto L_002134AC; } }
L_00213428:
    c.r[3].d[0] = c.r[5].sd[0] < 2048ll ? 1ull : 0ull;
    c.budget -= 1;
L_0021342C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002134AC; } }
    set32(c.r[3], 0u - 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), c.r[3].w[0]);  if (t) { goto L_002134AC; } }
L_00213440:
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    c.r[1].d[0] = c.r[3].sd[0] < -63ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], c.r[3].w[0] - 2u);  goto L_00213460; }
    set32(c.r[3], 0u - 64u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_00213464; } }
    set32(c.r[3], c.r[3].w[0] - 2u);
    c.budget -= 1;
L_00213460:
    st32((c.r[17].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 1;
L_00213464:
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    c.r[3].d[0] = c.r[4].sd[0] < 2048ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = 0ull | 63489ull;  if (t) { goto L_00213498; } }
    c.r[1].d[0] = 0ull | 32769ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00213494; } }
    set32(c.r[3], 0u + 2048u);
    st32((c.r[17].w[0] + 88u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), 0u);  if (t) { goto L_002134AC; } }
L_00213494:
    c.r[1].d[0] = 0ull | 63489ull;
    c.budget -= 1;
L_00213498:
    c.r[1].d[0] = c.r[5].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002134AC; } }
    set32(c.r[3], 0u + 8u);
    st32((c.r[17].w[0] + 100u), c.r[3].w[0]);
    c.budget -= 2;
L_002134AC:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.r[3].d[0] = c.r[3].d[0] ^ 2ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002134CC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 67u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_002134CC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00213724; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 93u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002136D0; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_0021367C; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00213500; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);  if (t) { goto L_00213960; } }
L_00213500:
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[17].w[0] + 1764u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002135A4; } }
    st8((c.r[16].w[0] + 93u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.f[1] = ld32((c.r[17].w[0] + 1764u));
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    c.facc = fp::mul(c.f[20], c.f[20]);
    c.f[12] = fp::add(c.facc, fp::mul(c.f[21], c.f[21]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00213534u); c.f[20] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x00213534u) [[unlikely]] return; }
L_00213534:
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00213540u); c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x00213540u) [[unlikely]] return; }
L_00213540:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[1] = c.r[3].w[0];
    c.f[2] = 0u;
    fpu_div(c, 0u, c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x38D10000u);  if (t) { goto L_00213580; } }
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00213588; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x38D10000u);
    c.budget -= 1;
L_00213580:
    c.r[3].d[0] = c.r[3].d[0] | 46871ull;
    c.f[0] = c.r[3].w[0];
    c.budget -= 2;
L_00213588:
    fpu_div(c, 20u, c.f[20], c.f[0]);
    set32(c.r[3], 0u - 1u);
    st32((c.r[17].w[0] + 52u), c.f[20]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[3].w[0]);  if (t) { goto L_0021395C; } }
L_002135A4:
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00213644; } }
    st8((c.r[16].w[0] + 93u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[17].w[0] + 1764u));
    c.facc = fp::mul(c.f[20], c.f[20]);
    c.f[12] = fp::add(c.facc, fp::mul(c.f[21], c.f[21]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002135D0u); c.f[20] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002135D0u) [[unlikely]] return; }
L_002135D0:
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002135DCu); c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002135DCu) [[unlikely]] return; }
L_002135DC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[1] = c.r[3].w[0];
    c.f[2] = 0u;
    fpu_div(c, 0u, c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x38D10000u);  if (t) { goto L_0021361C; } }
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00213624; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x38D10000u);
    c.budget -= 1;
L_0021361C:
    c.r[3].d[0] = c.r[3].d[0] | 46871ull;
    c.f[0] = c.r[3].w[0];
    c.budget -= 2;
L_00213624:
    fpu_div(c, 20u, c.f[20], c.f[0]);
    set32(c.r[3], 0u + 1u);
    c.f[0] = c.f[20] ^ fp::kSign;
    st32((c.r[17].w[0] + 52u), c.f[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[3].w[0]);  if (t) { goto L_0021395C; } }
L_00213644:
    set32(c.r[5], ld32((c.r[17].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; c.r[3].d[0] = 0ull | 32768ull;  if (t) { goto L_0021365C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), 0u);  if (t) { goto L_0021395C; } }
    c.r[3].d[0] = 0ull | 32768ull;
    c.budget -= 1;
L_0021365C:
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_00213674; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[4].w[0]);  if (t) { goto L_0021395C; } }
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_00213674:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[3].w[0]);  if (t) { goto L_0021395C; } }
L_0021367C:
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[17].w[0] + 1764u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002136A0; } }
    st8((c.r[16].w[0] + 93u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 52u), 0u);  if (t) { goto L_0021395C; } }
L_002136A0:
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    c.r[5].d[0] = 0ull | 64512ull;
    c.r[1].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0021395C; } }
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0021395C; } }
    st32((c.r[17].w[0] + 80u), c.r[5].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), 0u);  if (t) { goto L_0021395C; } }
L_002136D0:
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[17].w[0] + 1764u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002136F4; } }
    st8((c.r[16].w[0] + 93u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 52u), 0u);  if (t) { goto L_0021395C; } }
L_002136F4:
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    c.r[3].d[0] = c.r[4].sd[0] < 1024ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0021395C; } }
    c.r[1].d[0] = 0ull | 32769ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0021395C; } }
    set32(c.r[3], 0u + 1024u);
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), 0u);  if (t) { goto L_0021395C; } }
L_00213724:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 93u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00213894; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_002137CC; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00213750; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021395C; } }
L_00213750:
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[17].w[0] + 1764u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00213778; } }
    set32(c.r[3], 0u - 1u);
    st8((c.r[16].w[0] + 93u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[3].w[0]);  if (t) { goto L_0021395C; } }
L_00213778:
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00213794; } }
    st8((c.r[16].w[0] + 93u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[4].w[0]);  if (t) { goto L_0021395C; } }
L_00213794:
    set32(c.r[5], ld32((c.r[17].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; c.r[3].d[0] = 0ull | 32768ull;  if (t) { goto L_002137AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), 0u);  if (t) { goto L_0021395C; } }
    c.r[3].d[0] = 0ull | 32768ull;
    c.budget -= 1;
L_002137AC:
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_002137C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[4].w[0]);  if (t) { goto L_0021395C; } }
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_002137C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[3].w[0]);  if (t) { goto L_0021395C; } }
L_002137CC:
    c.f[1] = ld32((c.r[17].w[0] + 1764u));
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    c.facc = fp::mul(c.f[20], c.f[20]);
    c.f[12] = fp::add(c.facc, fp::mul(c.f[21], c.f[21]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002137E4u); c.f[20] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002137E4u) [[unlikely]] return; }
L_002137E4:
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002137F0u); c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002137F0u) [[unlikely]] return; }
L_002137F0:
    c.f[1] = ld32((c.r[17].w[0] + 104u));
    c.f[2] = 0u;
    fpu_div(c, 0u, c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x38D10000u);  if (t) { goto L_00213828; } }
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00213830; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x38D10000u);
    c.budget -= 1;
L_00213828:
    c.r[3].d[0] = c.r[3].d[0] | 46871ull;
    c.f[0] = c.r[3].w[0];
    c.budget -= 2;
L_00213830:
    fpu_div(c, 20u, c.f[20], c.f[0]);
    st32((c.r[17].w[0] + 52u), c.f[20]);
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[17].w[0] + 1764u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00213864; } }
    st8((c.r[16].w[0] + 93u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 52u), 0u);  if (t) { goto L_0021395C; } }
L_00213864:
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    c.r[5].d[0] = 0ull | 64512ull;
    c.r[1].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0021395C; } }
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0021395C; } }
    st32((c.r[17].w[0] + 80u), c.r[5].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), 0u);  if (t) { goto L_0021395C; } }
L_00213894:
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[17].w[0] + 1764u));
    c.facc = fp::mul(c.f[20], c.f[20]);
    c.f[12] = fp::add(c.facc, fp::mul(c.f[21], c.f[21]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002138ACu); c.f[20] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002138ACu) [[unlikely]] return; }
L_002138AC:
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002138B8u); c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002138B8u) [[unlikely]] return; }
L_002138B8:
    c.f[1] = ld32((c.r[17].w[0] + 104u));
    c.f[2] = 0u;
    fpu_div(c, 0u, c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x38D10000u);  if (t) { goto L_002138F0; } }
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002138F8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x38D10000u);
    c.budget -= 1;
L_002138F0:
    c.r[3].d[0] = c.r[3].d[0] | 46871ull;
    c.f[0] = c.r[3].w[0];
    c.budget -= 2;
L_002138F8:
    fpu_div(c, 20u, c.f[20], c.f[0]);
    c.f[0] = c.f[20] ^ fp::kSign;
    st32((c.r[17].w[0] + 52u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[17].w[0] + 1764u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00213930; } }
    st8((c.r[16].w[0] + 93u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 52u), 0u);  if (t) { goto L_0021395C; } }
L_00213930:
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    c.r[3].d[0] = c.r[4].sd[0] < 1024ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0021395C; } }
    c.r[1].d[0] = 0ull | 32769ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0021395C; } }
    set32(c.r[3], 0u + 1024u);
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 92u), 0u);
    c.budget -= 3;
L_0021395C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00213960:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00213980:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.r[19].d[0] = c.r[5].d[0] << 56;
    set32(c.r[18], c.r[17].w[0] + 320u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[21], c.r[7], c.r[0]);
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 56);
    set32(c.r[7], c.r[19].w[0] + c.r[18].w[0]);
    mmi::paddub(c.r[16], c.r[6], c.r[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 46u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 19;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[20], c.r[7].w[0] + 46u);  if (t) { goto L_00213CCC; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[5].d[0]) { set32(c.r[2], 0u + 30u);  goto L_00213C78; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] << 56;  if (t) { goto L_00213BF0; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[3], c.r[19].w[0] << 1);  if (t) { goto L_002139F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);  if (t) { goto L_00213CF0; } }
    set32(c.r[3], c.r[19].w[0] << 1);
    c.budget -= 1;
L_002139F8:
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[4], c.r[3].w[0] + 36u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 36u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00213BDC; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[2], 0u + 1800u);  if (t) { goto L_00213A2C; } }
    set32(c.r[2], 0u + 300u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00213A30; } }
    set32(c.r[2], 0u + 1800u);
    c.budget -= 1;
L_00213A2C:
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_00213A30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[6], 0u + 16384u);
    set32(c.r[9], 0u + 8192u);
    c.r[7].d[0] = 0ull | 49152ull;
    c.r[8].d[0] = 0ull | 65535ull;
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00213A58u); mmi::paddub(c.r[10], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 28u, depth + 1u); else { c.pc = 0x0024C7E0u; return; } if (c.pc != 0x00213A58u) [[unlikely]] return; }
L_00213A58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00213CEC; } }
    set32(c.r[19], c.r[19].w[0] << 2);
    set32(c.r[3], c.r[19].w[0] + c.r[18].w[0]);
    st32((c.r[3].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 369u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00213AB0; } }
    c.f[1] = ld32((c.r[2].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 112u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 116u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 120u), c.f[0]);  if (t) { goto L_00213AC8; } }
L_00213AB0:
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    st32((c.r[29].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    st32((c.r[29].w[0] + 116u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    st32((c.r[29].w[0] + 120u), c.f[0]);
    c.budget -= 6;
L_00213AC8:
    c.r[16].d[0] = c.r[16].d[0] << 56;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);
    set32(c.r[2], c.r[16].w[0] << 6);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00213AE0u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x00213AE0u) [[unlikely]] return; }
L_00213AE0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00213AF0u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 211u, depth + 1u); else { c.pc = 0x00102548u; return; } if (c.pc != 0x00213AF0u) [[unlikely]] return; }
L_00213AF0:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00213AFCu); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x00213AFCu) [[unlikely]] return; }
L_00213AFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00213B04u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x00213B04u) [[unlikely]] return; }
L_00213B04:
    c.f[13] = ld32((c.r[29].w[0] + 136u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00213B10u); c.f[12] = ld32((c.r[29].w[0] + 128u));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x00213B10u) [[unlikely]] return; }
L_00213B10:
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[7], c.r[3].w[0] + 4548u);
    set32(c.r[3], ld32((c.r[3].w[0] + 4548u)));
    c.r[5].d[0] = c.r[2].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    set32(c.r[4], c.r[19].w[0] + c.r[18].w[0]);
    set32(c.r[6], c.r[4].w[0] + 12u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[4].w[0] + 12u));
    c.r[8].d[0] = 0ull | 32768ull;
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 19;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = 0ull | 32768ull;  if (t) { goto L_00213B78; } }
    c.r[3].d[0] = c.r[4].sd[0] < 16384ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00213B74; } }
    set32(c.r[3], 0u + 16384u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.r[3].w[0]);  if (t) { goto L_00213B9C; } }
L_00213B74:
    c.r[3].d[0] = 0ull | 32768ull;
    c.budget -= 1;
L_00213B78:
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00213B9C; } }
    c.r[1].d[0] = 0ull | 49153ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00213B9C; } }
    c.r[3].d[0] = 0ull | 49152ull;
    st32((c.r[6].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_00213B9C:
    set32(c.r[5], ld32((c.r[6].w[0])));
    set32(c.r[4], ld32((c.r[7].w[0])));
    c.r[3].d[0] = 0ull | 32768ull;
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[19].w[0] + c.r[18].w[0]);  if (t) { goto L_00213BD0; } }
    set32(c.r[3], c.r[19].w[0] + c.r[18].w[0]);
    set32(c.r[4], 0u - 128u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 24u), c.r[4].w[0]);  if (t) { goto L_00213CEC; } }
    set32(c.r[3], c.r[19].w[0] + c.r[18].w[0]);
    c.budget -= 1;
L_00213BD0:
    set32(c.r[4], 0u + 128u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 24u), c.r[4].w[0]);  if (t) { goto L_00213CEC; } }
L_00213BDC:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00213CEC; } }
    c.r[4].d[0] = c.r[16].d[0] << 56;
    c.budget -= 1;
L_00213BF0:
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[8], c.r[19].w[0] << 2);
    set32(c.r[5], c.r[8].w[0] + c.r[18].w[0]);
    set32(c.r[7], c.r[3].w[0] + 4548u);
    set32(c.r[6], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4548u)));
    c.r[4].d[0] = 0ull | 65535ull;
    set32(c.r[3], c.r[6].w[0] - c.r[3].w[0]);
    c.r[4].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[1].d[0] = c.r[4].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], c.r[8].w[0] + c.r[18].w[0]);  if (t) { goto L_00213C44; } }
    c.r[3].d[0] = 0ull | 65472ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00213C58; } }
    set32(c.r[3], c.r[8].w[0] + c.r[18].w[0]);
    c.budget -= 1;
L_00213C44:
    st32((c.r[7].w[0]), c.r[6].w[0]);
    st32((c.r[3].w[0] + 24u), 0u);
    set32(c.r[3], 0u + 2u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00213CEC; } }
L_00213C58:
    set32(c.r[3], ld32((c.r[5].w[0] + 24u)));
    set32(c.r[4], ld32((c.r[7].w[0])));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[7].w[0]), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[7].w[0]));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0]), c.r[3].w[0]);  if (t) { goto L_00213CEC; } }
    set32(c.r[2], 0u + 30u);
    c.budget -= 1;
L_00213C78:
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[7].w[0] + 51u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 6;
    if (c.r[2].d[0] != c.r[5].d[0]) { mmi::paddub(c.r[4], c.r[17], c.r[0]);  goto L_00213CA4; }
    set32(c.r[2], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00213CA0u); set32(c.r[5], ld32((c.r[2].w[0] + 96u)));  if (depth < kMaxDepth) unit_0077(c, 232u, depth + 1u); else { c.pc = 0x002DEAA0u; return; } if (c.pc != 0x00213CA0u) [[unlikely]] return; }
L_00213CA0:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_00213CA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00213CACu); mmi::paddub(c.r[5], c.r[21], c.r[0]);  if (depth < kMaxDepth) unit_0079(c, 182u, depth + 1u); else { c.pc = 0x002E62A0u; return; } if (c.pc != 0x00213CACu) [[unlikely]] return; }
L_00213CAC:
    set32(c.r[5], c.r[21].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00213CB8u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0079(c, 182u, depth + 1u); else { c.pc = 0x002E62A0u; return; } if (c.pc != 0x00213CB8u) [[unlikely]] return; }
L_00213CB8:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00213CC4u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 34u, depth + 1u); else { c.pc = 0x00198540u; return; } if (c.pc != 0x00213CC4u) [[unlikely]] return; }
L_00213CC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00213CEC; } }
L_00213CCC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 51u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[7].w[0] + 51u);  if (t) { goto L_00213CE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_00213CEC; } }
L_00213CE0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00213CEC:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00213CF0:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00213D10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 369u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[3], 0u + 1u);
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[16], c.r[17].w[0] + 320u);  if (t) { goto L_00213DD0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00213D44; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_00213E60; } }
L_00213D44:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 42u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_00213DC8; }
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1800u);  if (t) { goto L_00213D74; } }
    set32(c.r[2], 0u + 600u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 42u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00213D78; } }
    set32(c.r[2], 0u + 1800u);
    c.budget -= 1;
L_00213D74:
    st16((c.r[16].w[0] + 42u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_00213D78:
    set32(c.r[5], 0u + 512u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[6], 0u + 4096u);
    set32(c.r[9], 0u + 8192u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    mmi::paddub(c.r[7], c.r[5], c.r[0]);
    mmi::paddub(c.r[8], c.r[5], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00213DA0u); mmi::paddub(c.r[10], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 28u, depth + 1u); else { c.pc = 0x0024C7E0u; return; } if (c.pc != 0x00213DA0u) [[unlikely]] return; }
L_00213DA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00213E5C; } }
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    st8((c.r[16].w[0] + 49u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 54u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 59u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 64u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00213E5C; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_00213DC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 42u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00213E5C; } }
L_00213DD0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 59u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_00213E58; }
    set32(c.r[2], 0u + 10u);
    st8((c.r[16].w[0] + 59u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00213E00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00213E00u); set32(c.r[5], ld32((c.r[16].w[0] + 108u)));  if (depth < kMaxDepth) unit_0077(c, 232u, depth + 1u); else { c.pc = 0x002DEAA0u; return; } if (c.pc != 0x00213E00u) [[unlikely]] return; }
L_00213E00:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 54u)));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 55u);
    c.r[5].d[0] = c.r[2].d[0] << 56;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00213E18u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);  if (depth < kMaxDepth) unit_007E(c, 176u, depth + 1u); else { c.pc = 0x002F9760u; return; } if (c.pc != 0x00213E18u) [[unlikely]] return; }
L_00213E18:
    set32(c.r[5], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00213E24u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 34u, depth + 1u); else { c.pc = 0x00198540u; return; } if (c.pc != 0x00213E24u) [[unlikely]] return; }
L_00213E24:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 54u)));
    set32(c.r[3], c.r[3].w[0] + 2u);
    st8((c.r[16].w[0] + 54u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 64u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 64u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 64u)));
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00213E5C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 49u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00213E5C; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_00213E58:
    st8((c.r[16].w[0] + 59u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_00213E5C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00213E60:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00213E70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 370u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[3], 0u + 1u);
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[16], c.r[17].w[0] + 320u);  if (t) { goto L_00213F30; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00213EA4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_00213FC0; } }
L_00213EA4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_00213F28; }
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1800u);  if (t) { goto L_00213ED4; } }
    set32(c.r[2], 0u + 600u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 44u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00213ED8; } }
    set32(c.r[2], 0u + 1800u);
    c.budget -= 1;
L_00213ED4:
    st16((c.r[16].w[0] + 44u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_00213ED8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    c.r[6].d[0] = 0ull | 65024ull;
    c.f[12] = c.r[2].w[0];
    set32(c.r[9], 0u + 8192u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.r[5].d[0] = 0ull | 61440ull;
    mmi::paddub(c.r[7], c.r[6], c.r[0]);
    mmi::paddub(c.r[8], c.r[6], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00213F00u); mmi::paddub(c.r[10], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 28u, depth + 1u); else { c.pc = 0x0024C7E0u; return; } if (c.pc != 0x00213F00u) [[unlikely]] return; }
L_00213F00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00213FBC; } }
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 112u), c.r[2].w[0]);
    st8((c.r[16].w[0] + 50u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 55u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 60u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 65u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00213FBC; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_00213F28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00213FBC; } }
L_00213F30:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 60u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_00213FB8; }
    set32(c.r[2], 0u + 10u);
    st8((c.r[16].w[0] + 60u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00213F60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00213F60u); set32(c.r[5], ld32((c.r[16].w[0] + 112u)));  if (depth < kMaxDepth) unit_0077(c, 232u, depth + 1u); else { c.pc = 0x002DEAA0u; return; } if (c.pc != 0x00213F60u) [[unlikely]] return; }
L_00213F60:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 55u)));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 54u);
    c.r[5].d[0] = c.r[2].d[0] << 56;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00213F78u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);  if (depth < kMaxDepth) unit_007E(c, 176u, depth + 1u); else { c.pc = 0x002F9760u; return; } if (c.pc != 0x00213F78u) [[unlikely]] return; }
L_00213F78:
    set32(c.r[5], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00213F84u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 34u, depth + 1u); else { c.pc = 0x00198540u; return; } if (c.pc != 0x00213F84u) [[unlikely]] return; }
L_00213F84:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 55u)));
    set32(c.r[3], c.r[3].w[0] + 2u);
    st8((c.r[16].w[0] + 55u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 65u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 65u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 65u)));
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00213FBC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 50u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00213FBC; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_00213FB8:
    st8((c.r[16].w[0] + 60u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_00213FBC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00213FC0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00213FD0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[16], c.r[17].w[0] + 320u);  if (t) { [[clang::musttail]] return unit_0045(c, 3u, depth); } }
    [[clang::musttail]] return unit_0045(c, 2u, depth);
}

}
