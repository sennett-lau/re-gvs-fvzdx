#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0051[4096] = {
    1, 2, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 6, 7, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0,
    0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 14, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0,
    24, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 30, 0, 31, 0, 0, 0, 0,
    32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 35, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0,
    0, 39, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 49, 0, 0, 0, 0, 50, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 52, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 56, 0, 57, 0, 58, 0, 59, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 62, 0, 63, 0, 64, 0, 65, 0, 66, 0, 67, 0,
    68, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 72, 0, 0,
    0, 0, 0, 73, 0, 0, 0, 0, 74, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    76, 0, 77, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 84, 0, 0, 85, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    94, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    106, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0,
    109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    111, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    117, 0, 118, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 121, 0, 122, 0, 0, 0, 0, 0,
    123, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0,
    129, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0, 133, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0,
    143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 147, 0, 148, 0, 149, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 154, 0, 155, 0, 0, 0, 156, 0, 157, 0, 158, 0, 159, 0, 160, 0, 0, 0,
    0, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 165, 0, 166, 0, 167, 0, 168, 0, 169,
    0, 0, 170, 0, 0, 0, 171, 0, 172, 0, 173, 0, 174, 0, 0, 175, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181,
    0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 188, 0, 0, 0, 0, 189, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 191, 0, 0, 0, 0, 192, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 198, 0, 199, 0, 0, 0, 0, 0, 200, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0,
    0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 207, 0, 0,
    0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 219, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 224, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 226, 0, 227, 0, 228, 0, 0, 0, 229, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0,
    233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 234, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0,
    238, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    243, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 249, 0, 250, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253,
    0, 254, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 263, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0051(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00244000;
    case 2u: goto L_00244004;
    case 3u: goto L_00244008;
    case 4u: goto L_00244030;
    case 5u: goto L_002440F4;
    case 6u: goto L_0024411C;
    case 7u: goto L_00244120;
    case 8u: goto L_00244144;
    case 9u: goto L_00244168;
    case 10u: goto L_0024418C;
    case 11u: goto L_002441A8;
    case 12u: goto L_002441E4;
    case 13u: goto L_00244240;
    case 14u: goto L_00244250;
    case 15u: goto L_00244254;
    case 16u: goto L_002442C4;
    case 17u: goto L_002442E4;
    case 18u: goto L_00244358;
    case 19u: goto L_002443A8;
    case 20u: goto L_002443B8;
    case 21u: goto L_002443C4;
    case 22u: goto L_00244418;
    case 23u: goto L_0024446C;
    case 24u: goto L_00244480;
    case 25u: goto L_0024448C;
    case 26u: goto L_002444F8;
    case 27u: goto L_00244520;
    case 28u: goto L_00244580;
    case 29u: goto L_002445DC;
    case 30u: goto L_002445E4;
    case 31u: goto L_002445EC;
    case 32u: goto L_00244600;
    case 33u: goto L_0024463C;
    case 34u: goto L_0024465C;
    case 35u: goto L_00244688;
    case 36u: goto L_002446A0;
    case 37u: goto L_002446C0;
    case 38u: goto L_002446EC;
    case 39u: goto L_00244704;
    case 40u: goto L_00244724;
    case 41u: goto L_00244750;
    case 42u: goto L_002447CC;
    case 43u: goto L_0024486C;
    case 44u: goto L_002448F0;
    case 45u: goto L_00244924;
    case 46u: goto L_002449A0;
    case 47u: goto L_002449C0;
    case 48u: goto L_00244A54;
    case 49u: goto L_00244A5C;
    case 50u: goto L_00244A70;
    case 51u: goto L_00244AA4;
    case 52u: goto L_00244AC4;
    case 53u: goto L_00244ACC;
    case 54u: goto L_00244B18;
    case 55u: goto L_00244B9C;
    case 56u: goto L_00244BB0;
    case 57u: goto L_00244BB8;
    case 58u: goto L_00244BC0;
    case 59u: goto L_00244BC8;
    case 60u: goto L_00244BDC;
    case 61u: goto L_00244C48;
    case 62u: goto L_00244C50;
    case 63u: goto L_00244C58;
    case 64u: goto L_00244C60;
    case 65u: goto L_00244C68;
    case 66u: goto L_00244C70;
    case 67u: goto L_00244C78;
    case 68u: goto L_00244C80;
    case 69u: goto L_00244C88;
    case 70u: goto L_00244CE8;
    case 71u: goto L_00244D64;
    case 72u: goto L_00244D74;
    case 73u: goto L_00244D8C;
    case 74u: goto L_00244DA0;
    case 75u: goto L_00244DAC;
    case 76u: goto L_00244E00;
    case 77u: goto L_00244E08;
    case 78u: goto L_00244E10;
    case 79u: goto L_00244E40;
    case 80u: goto L_00244E60;
    case 81u: goto L_00244E70;
    case 82u: goto L_00244F00;
    case 83u: goto L_00244F28;
    case 84u: goto L_00244F34;
    case 85u: goto L_00244F40;
    case 86u: goto L_00244F50;
    case 87u: goto L_002450B0;
    case 88u: goto L_00245150;
    case 89u: goto L_00245164;
    case 90u: goto L_00245204;
    case 91u: goto L_002452B0;
    case 92u: goto L_00245408;
    case 93u: goto L_00245444;
    case 94u: goto L_00245480;
    case 95u: goto L_0024548C;
    case 96u: goto L_002454D4;
    case 97u: goto L_00245540;
    case 98u: goto L_002455B0;
    case 99u: goto L_002456A0;
    case 100u: goto L_002456AC;
    case 101u: goto L_002457C4;
    case 102u: goto L_002457F4;
    case 103u: goto L_0024587C;
    case 104u: goto L_002458B0;
    case 105u: goto L_002458E8;
    case 106u: goto L_00245A00;
    case 107u: goto L_00245A1C;
    case 108u: goto L_00245CE0;
    case 109u: goto L_00245D00;
    case 110u: goto L_00245D7C;
    case 111u: goto L_00245E00;
    case 112u: goto L_00245E20;
    case 113u: goto L_00245ED8;
    case 114u: goto L_00245EEC;
    case 115u: goto L_00245F30;
    case 116u: goto L_00245F70;
    case 117u: goto L_00246080;
    case 118u: goto L_00246088;
    case 119u: goto L_00246094;
    case 120u: goto L_002460D8;
    case 121u: goto L_002460E0;
    case 122u: goto L_002460E8;
    case 123u: goto L_00246100;
    case 124u: goto L_00246118;
    case 125u: goto L_0024612C;
    case 126u: goto L_00246150;
    case 127u: goto L_00246160;
    case 128u: goto L_002461F0;
    case 129u: goto L_00246200;
    case 130u: goto L_00246220;
    case 131u: goto L_00246250;
    case 132u: goto L_00246260;
    case 133u: goto L_0024626C;
    case 134u: goto L_002462A0;
    case 135u: goto L_002462C0;
    case 136u: goto L_00246300;
    case 137u: goto L_00246350;
    case 138u: goto L_002463A0;
    case 139u: goto L_002463C0;
    case 140u: goto L_002463FC;
    case 141u: goto L_00246430;
    case 142u: goto L_00246460;
    case 143u: goto L_00246480;
    case 144u: goto L_002465AC;
    case 145u: goto L_00246618;
    case 146u: goto L_00246640;
    case 147u: goto L_00246694;
    case 148u: goto L_0024669C;
    case 149u: goto L_002466A4;
    case 150u: goto L_002466BC;
    case 151u: goto L_002466D4;
    case 152u: goto L_002466F8;
    case 153u: goto L_00246724;
    case 154u: goto L_00246738;
    case 155u: goto L_00246740;
    case 156u: goto L_00246750;
    case 157u: goto L_00246758;
    case 158u: goto L_00246760;
    case 159u: goto L_00246768;
    case 160u: goto L_00246770;
    case 161u: goto L_00246790;
    case 162u: goto L_002467A0;
    case 163u: goto L_00246830;
    case 164u: goto L_0024684C;
    case 165u: goto L_0024685C;
    case 166u: goto L_00246864;
    case 167u: goto L_0024686C;
    case 168u: goto L_00246874;
    case 169u: goto L_0024687C;
    case 170u: goto L_00246888;
    case 171u: goto L_00246898;
    case 172u: goto L_002468A0;
    case 173u: goto L_002468A8;
    case 174u: goto L_002468B0;
    case 175u: goto L_002468BC;
    case 176u: goto L_002468D0;
    case 177u: goto L_00246990;
    case 178u: goto L_00246A44;
    case 179u: goto L_00246A90;
    case 180u: goto L_00246B54;
    case 181u: goto L_00246B7C;
    case 182u: goto L_00246BA0;
    case 183u: goto L_00246BDC;
    case 184u: goto L_00246C74;
    case 185u: goto L_00246D1C;
    case 186u: goto L_00246D4C;
    case 187u: goto L_00246E2C;
    case 188u: goto L_00246E40;
    case 189u: goto L_00246E54;
    case 190u: goto L_00246E60;
    case 191u: goto L_00246F88;
    case 192u: goto L_00246F9C;
    case 193u: goto L_00246FA8;
    case 194u: goto L_00247014;
    case 195u: goto L_00247040;
    case 196u: goto L_0024709C;
    case 197u: goto L_002470C8;
    case 198u: goto L_002470D0;
    case 199u: goto L_002470D8;
    case 200u: goto L_002470F0;
    case 201u: goto L_0024712C;
    case 202u: goto L_0024714C;
    case 203u: goto L_00247178;
    case 204u: goto L_00247190;
    case 205u: goto L_002471B0;
    case 206u: goto L_002471DC;
    case 207u: goto L_002471F4;
    case 208u: goto L_00247214;
    case 209u: goto L_00247240;
    case 210u: goto L_002472C0;
    case 211u: goto L_00247360;
    case 212u: goto L_002473F0;
    case 213u: goto L_00247424;
    case 214u: goto L_002474A0;
    case 215u: goto L_002474C0;
    case 216u: goto L_0024753C;
    case 217u: goto L_002475BC;
    case 218u: goto L_002475D0;
    case 219u: goto L_00247688;
    case 220u: goto L_0024769C;
    case 221u: goto L_002476E0;
    case 222u: goto L_00247720;
    case 223u: goto L_00247830;
    case 224u: goto L_00247838;
    case 225u: goto L_00247844;
    case 226u: goto L_00247888;
    case 227u: goto L_00247890;
    case 228u: goto L_00247898;
    case 229u: goto L_002478A8;
    case 230u: goto L_002478C0;
    case 231u: goto L_002478D4;
    case 232u: goto L_002478F0;
    case 233u: goto L_00247900;
    case 234u: goto L_00247990;
    case 235u: goto L_002479A0;
    case 236u: goto L_002479C0;
    case 237u: goto L_002479F0;
    case 238u: goto L_00247A00;
    case 239u: goto L_00247A0C;
    case 240u: goto L_00247A40;
    case 241u: goto L_00247A60;
    case 242u: goto L_00247B00;
    case 243u: goto L_00247B80;
    case 244u: goto L_00247BA0;
    case 245u: goto L_00247C54;
    case 246u: goto L_00247C68;
    case 247u: goto L_00247CAC;
    case 248u: goto L_00247CEC;
    case 249u: goto L_00247E0C;
    case 250u: goto L_00247E14;
    case 251u: goto L_00247E20;
    case 252u: goto L_00247E44;
    case 253u: goto L_00247E7C;
    case 254u: goto L_00247E84;
    case 255u: goto L_00247E8C;
    case 256u: goto L_00247EB4;
    case 257u: goto L_00247ECC;
    case 258u: goto L_00247EE0;
    case 259u: goto L_00247F0C;
    case 260u: goto L_00247F30;
    case 261u: goto L_00247F3C;
    case 262u: goto L_00247F60;
    case 263u: goto L_00247F70;
    default: bad_entry(c, 0x00244000u); return;
    }
L_00244000:
    st8((c.r[16].w[0] + 15u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_00244004:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00244008:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0024411C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 15u)));
    set32(c.r[2], 0u + 26u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0024411C; } }
    set32(c.r[2], 0u + 14u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 15u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0024411C; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_00244030:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; set32(c.r[4], 0u + 2u);  if (t) { goto L_00244058; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 15u)));
    set32(c.r[2], 0u + 12u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0024411C; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 15u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0024411C; } }
    set32(c.r[4], 0u + 2u);
    c.budget -= 1;
L_00244058:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_0024407C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 15u)));
    set32(c.r[2], 0u + 14u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0024411C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 15u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0024411C; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_0024407C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 5u);  if (t) { goto L_002440A0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 15u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0024411C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 15u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0024411C; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 1;
L_002440A0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 6u);  if (t) { goto L_00244100; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 15u)));
    set32(c.r[2], 0u + 12u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0024411C; } }
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_002440EC; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002440E8; } }
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 321u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    st8((c.r[3].w[0] + 321u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
L_002440E8:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_002440EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002440F4u);  if (depth < kMaxDepth) unit_0081(c, 9u, depth + 1u); else { c.pc = 0x00304280u; return; } if (c.pc != 0x002440F4u) [[unlikely]] return; }
L_002440F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), 0u);  if (t) { goto L_00244120; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 1;
L_00244100:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0024411C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 15u)));
    set32(c.r[2], 0u + 13u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0024411C; } }
    st8((c.r[16].w[0] + 15u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 1;
L_0024411C:
    st32((c.r[17].w[0] + 104u), 0u);
    c.budget -= 1;
L_00244120:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 530u));
    set32(c.r[2], 0u - 97u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00244250; } }
    set32(c.r[2], 0u + 3u);
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244144u); st32((c.r[17].w[0] + 104u), 0u);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x00244144u) [[unlikely]] return; }
L_00244144:
    c.r[3].d[0] = c.r[2].d[0] & 3ull;
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    st8((c.r[16].w[0] + 32u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + 30u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244168u); st8((c.r[16].w[0] + 32u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x00244168u) [[unlikely]] return; }
L_00244168:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 256u);  if (t) { goto L_00244184; } }
    set32(c.r[2], 0u - 256u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 96u), c.r[2].w[0]);  if (t) { goto L_00244250; } }
    set32(c.r[2], 0u + 256u);
    c.budget -= 1;
L_00244184:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 96u), c.r[2].w[0]);  if (t) { goto L_00244250; } }
L_0024418C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 32u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[2].w[0] - 1u);  goto L_002441DC; }
    set32(c.r[2], 0u + 4u);
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002441A8u); st32((c.r[17].w[0] + 96u), 0u);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x002441A8u) [[unlikely]] return; }
L_002441A8:
    c.r[3].d[0] = c.r[2].d[0] & 3ull;
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    st8((c.r[16].w[0] + 32u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 32u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3B830000u);
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    set32(c.r[3], c.r[3].w[0] + 30u);
    st8((c.r[16].w[0] + 32u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 108u), c.r[2].w[0]);  if (t) { goto L_00244250; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 1;
L_002441DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 32u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00244250; } }
L_002441E4:
    c.f[1] = ld32((c.r[17].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E750000u);
    c.r[2].d[0] = c.r[2].d[0] | 49807ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00244210; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), c.r[2].w[0]);  if (t) { goto L_0024421C; } }
L_00244210:
    c.f[0] = ld32((c.r[17].w[0] + 108u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.budget -= 3;
L_0024421C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 32u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[2].w[0] - 1u);  goto L_0024424C; }
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], c.r[16].w[0] + 16u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244240u); st32((c.r[17].w[0] + 104u), 0u);  if (depth < kMaxDepth) unit_0051(c, 44u, depth + 1u); else { c.pc = 0x002448F0u; return; } if (c.pc != 0x00244240u) [[unlikely]] return; }
L_00244240:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00244250; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 1;
L_0024424C:
    st8((c.r[16].w[0] + 32u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_00244250:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    c.budget -= 1;
L_00244254:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00244378; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00244300; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024427C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[17].w[0] + 84u)));  if (t) { goto L_0024442C; } }
L_0024427C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[2].w[0] - 1u);  goto L_002442F8; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 600u);  if (t) { goto L_002442A8; } }
    set32(c.r[2], 0u + 180u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_002442AC; } }
    set32(c.r[2], 0u + 600u);
    c.budget -= 1;
L_002442A8:
    st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_002442AC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 16384u);
    set32(c.r[6], 0u + 7680u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002442C4u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 22u, depth + 1u); else { c.pc = 0x0024C590u; return; } if (c.pc != 0x002442C4u) [[unlikely]] return; }
L_002442C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00244428; } }
    set32(c.r[5], c.r[2].w[0] + 32u);
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002442E4u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0051(c, 44u, depth + 1u); else { c.pc = 0x002448F0u; return; } if (c.pc != 0x002442E4u) [[unlikely]] return; }
L_002442E4:
    set32(c.r[2], 0u + 5u);
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), 0u);  if (t) { goto L_00244428; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 1;
L_002442F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00244428; } }
L_00244300:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[1].d[0] = c.r[3].sd[0] < 129ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0024432C; } }
    c.r[2].d[0] = 0ull | 65408ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00244428; } }
L_0024432C:
    st32((c.r[17].w[0] + 96u), 0u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_00244364; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], c.r[16].w[0] + 16u);
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244358u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0051(c, 44u, depth + 1u); else { c.pc = 0x002448F0u; return; } if (c.pc != 0x00244358u) [[unlikely]] return; }
L_00244358:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00244428; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_00244364:
    st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 3u);
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00244428; } }
L_00244378:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[2].w[0] - 1u);  goto L_00244424; }
    set32(c.r[2], 0u + 6u);
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002443A8; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002443A8u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 232u, depth + 1u); else { c.pc = 0x002DEAA0u; return; } if (c.pc != 0x002443A8u) [[unlikely]] return; }
L_002443A8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 14u)));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002443B8u); set32(c.r[5], c.r[2].w[0] + 111u);  if (depth < kMaxDepth) unit_0079(c, 263u, depth + 1u); else { c.pc = 0x002E6FD0u; return; } if (c.pc != 0x002443B8u) [[unlikely]] return; }
L_002443B8:
    set32(c.r[5], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002443C4u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 330u, depth + 1u); else { c.pc = 0x00197890u; return; } if (c.pc != 0x002443C4u) [[unlikely]] return; }
L_002443C4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 14u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 14u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[2].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002443E8; } }
    st8((c.r[16].w[0] + 14u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_002443E8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 13u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 13u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00244428; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], c.r[16].w[0] + 16u);
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244418u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0051(c, 44u, depth + 1u); else { c.pc = 0x002448F0u; return; } if (c.pc != 0x00244418u) [[unlikely]] return; }
L_00244418:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00244428; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 1;
L_00244424:
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_00244428:
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 1;
L_0024442C:
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[17].w[0] + 84u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 84u));
    st32((c.r[17].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 640u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_00244464; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 515u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024446C; } }
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_00244464:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024446Cu);  if (depth < kMaxDepth) unit_0052(c, 220u, depth + 1u); else { c.pc = 0x0024B120u; return; } if (c.pc != 0x0024446Cu) [[unlikely]] return; }
L_0024446C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 14626u)));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244480u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 285u, depth + 1u); else { c.pc = 0x001970F0u; return; } if (c.pc != 0x00244480u) [[unlikely]] return; }
L_00244480:
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024448Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0045(c, 199u, depth + 1u); else { c.pc = 0x00217650u; return; } if (c.pc != 0x0024448Cu) [[unlikely]] return; }
L_0024448C:
    c.f[1] = ld32((c.r[17].w[0] + 132u));
    c.f[20] = c.f[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40200000u);
    c.f[2] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[0] = fp::sub(c.f[20], c.f[1]);  if (t) { goto L_002444D8; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBCA30000u);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    st32((c.r[17].w[0] + 52u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBD750000u);
    c.r[3].d[0] = c.r[3].d[0] | 49807ull;
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 68u), c.r[3].w[0]);  if (t) { goto L_00244504; } }
    c.f[0] = fp::sub(c.f[20], c.f[1]);
    c.budget -= 1;
L_002444D8:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_002444F0; } }
    st32((c.r[17].w[0] + 36u), c.f[20]);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 2;
L_002444F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002444F8u);  if (depth < kMaxDepth) unit_0051(c, 32u, depth + 1u); else { c.pc = 0x00244600u; return; } if (c.pc != 0x002444F8u) [[unlikely]] return; }
L_002444F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00244504; } }
    st32((c.r[17].w[0] + 36u), c.f[20]);
    c.budget -= 1;
L_00244504:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00244520:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[1] = ld32((c.r[4].w[0] + 52u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC0A00000u);
    c.f[0] = c.r[2].w[0];
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[17], c.r[16].w[0] + 320u);  if (t) { goto L_00244558; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_00244564; } }
L_00244558:
    c.f[0] = ld32((c.r[16].w[0] + 68u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 52u), c.f[0]);
    c.budget -= 3;
L_00244564:
    c.f[1] = ld32((c.r[16].w[0] + 52u));
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    set32(c.r[5], c.r[16].w[0] + 32u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244580u); st32((c.r[16].w[0] + 36u), c.f[0]);  if (depth < kMaxDepth) unit_0045(c, 199u, depth + 1u); else { c.pc = 0x00217650u; return; } if (c.pc != 0x00244580u) [[unlikely]] return; }
L_00244580:
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002445EC; } }
    st32((c.r[16].w[0] + 36u), c.f[0]);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_002445D0; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002445CC; } }
    c.r[2].d[0] = c.r[3].d[0] ^ 1ull;
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 321u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    st8((c.r[4].w[0] + 321u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
L_002445CC:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_002445D0:
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002445DCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 9u, depth + 1u); else { c.pc = 0x00304280u; return; } if (c.pc != 0x002445DCu) [[unlikely]] return; }
L_002445DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002445E4u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0047(c, 216u, depth + 1u); else { c.pc = 0x0021EE00u; return; } if (c.pc != 0x002445E4u) [[unlikely]] return; }
L_002445E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002445ECu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0052(c, 251u, depth + 1u); else { c.pc = 0x0024BA20u; return; } if (c.pc != 0x002445ECu) [[unlikely]] return; }
L_002445EC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00244600:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 84u)));
    c.r[5].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = 0ull | 65535ull;
    mmi::paddub(c.r[20], c.r[4], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.r[16].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024463Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x0024463Cu) [[unlikely]] return; }
L_0024463C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40F00000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = ld32((c.r[20].w[0] + 32u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024465Cu); st32((c.r[29].w[0] + 128u), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x0024465Cu) [[unlikely]] return; }
L_0024465C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40F00000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = ld32((c.r[20].w[0] + 40u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    set32(c.r[17], c.r[29].w[0] + 132u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 136u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 36u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244688u); st32((c.r[17].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0045(c, 192u, depth + 1u); else { c.pc = 0x00217510u; return; } if (c.pc != 0x00244688u) [[unlikely]] return; }
L_00244688:
    st32((c.r[17].w[0]), c.f[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 84u)));
    set32(c.r[2], c.r[2].w[0] + 5637u);
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002446A0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x002446A0u) [[unlikely]] return; }
L_002446A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x410C0000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = ld32((c.r[20].w[0] + 32u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002446C0u); st32((c.r[29].w[0] + 96u), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x002446C0u) [[unlikely]] return; }
L_002446C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x410C0000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = ld32((c.r[20].w[0] + 40u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    set32(c.r[18], c.r[29].w[0] + 100u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 36u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002446ECu); st32((c.r[18].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0045(c, 192u, depth + 1u); else { c.pc = 0x00217510u; return; } if (c.pc != 0x002446ECu) [[unlikely]] return; }
L_002446EC:
    st32((c.r[18].w[0]), c.f[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 84u)));
    set32(c.r[2], c.r[2].w[0] - 5637u);
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244704u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x00244704u) [[unlikely]] return; }
L_00244704:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x410C0000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = ld32((c.r[20].w[0] + 32u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244724u); st32((c.r[29].w[0] + 112u), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x00244724u) [[unlikely]] return; }
L_00244724:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x410C0000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = ld32((c.r[20].w[0] + 40u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    set32(c.r[19], c.r[29].w[0] + 116u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 120u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 36u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244750u); st32((c.r[19].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0045(c, 192u, depth + 1u); else { c.pc = 0x00217510u; return; } if (c.pc != 0x00244750u) [[unlikely]] return; }
L_00244750:
    st32((c.r[19].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[20].w[0] + 36u));
    c.f[0] = ld32((c.r[17].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40200000u);
    c.f[2] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_002447B4; } }
    c.f[0] = ld32((c.r[18].w[0]));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002447B0; } }
    c.f[0] = ld32((c.r[19].w[0]));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002447B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_002447B4; } }
L_002447B0:
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 1;
L_002447B4:
    c.f[1] = ld32((c.r[18].w[0]));
    c.f[0] = ld32((c.r[19].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41100000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002447CCu); c.f[12] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x002447CCu) [[unlikely]] return; }
L_002447CC:
    st32((c.r[20].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 88u)));
    c.r[3].d[0] = 0ull | 65535ull;
    c.r[4].d[0] = 0ull | 61440ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st32((c.r[20].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 88u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[3].sd[0] < 4097ll ? 1ull : 0ull;  if (t) { goto L_00244810; } }
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024480C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 88u), c.r[4].w[0]);  if (t) { goto L_00244830; } }
L_0024480C:
    c.r[1].d[0] = c.r[3].sd[0] < 4097ll ? 1ull : 0ull;
    c.budget -= 1;
L_00244810:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00244830; } }
    c.r[1].d[0] = 0ull | 32768ull;
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00244830; } }
    set32(c.r[2], 0u + 4096u);
    st32((c.r[20].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 2;
L_00244830:
    c.f[0] = ld32((c.r[19].w[0]));
    c.f[2] = ld32((c.r[18].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[13] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[2], c.f[0]);
    st32((c.r[18].w[0]), c.f[0]);
    c.f[0] = c.f[0];
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[18].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[0] = ld32((c.r[18].w[0]));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024486Cu); c.f[12] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x0024486Cu) [[unlikely]] return; }
L_0024486C:
    st32((c.r[20].w[0] + 80u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[20].w[0] + 80u));
    c.r[1].d[0] = 0ull | 61440ull;
    st32((c.r[20].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 80u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[3].sd[0] < 4097ll ? 1ull : 0ull;  if (t) { goto L_002448AC; } }
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002448A8; } }
    c.r[2].d[0] = 0ull | 61440ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 80u), c.r[2].w[0]);  if (t) { goto L_002448CC; } }
L_002448A8:
    c.r[1].d[0] = c.r[3].sd[0] < 4097ll ? 1ull : 0ull;
    c.budget -= 1;
L_002448AC:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull; mmi::paddub(c.r[2], c.r[16], c.r[0]);  if (t) { goto L_002448D0; } }
    c.r[1].d[0] = 0ull | 32768ull;
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002448CC; } }
    set32(c.r[2], 0u + 4096u);
    st32((c.r[20].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 2;
L_002448CC:
    mmi::paddub(c.r[2], c.r[16], c.r[0]);
    c.budget -= 1;
L_002448D0:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_002448F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[3] = ld32((c.r[5].w[0]));
    c.f[2] = ld32((c.r[4].w[0] + 32u));
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = ld32((c.r[4].w[0] + 40u));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[17], c.r[16].w[0] + 320u);
    c.f[12] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244924u); c.f[13] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x00244924u) [[unlikely]] return; }
L_00244924:
    c.r[3].d[0] = 0ull | 65535ull;
    c.r[3].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.r[4].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[4].sd[0] < 129ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0024495C; } }
    c.r[3].d[0] = 0ull | 65408ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = 0ull | 32768ull;  if (t) { goto L_00244968; } }
L_0024495C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 96u), 0u);  if (t) { goto L_00244988; } }
    c.r[3].d[0] = 0ull | 32768ull;
    c.budget -= 1;
L_00244968:
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 256u);  if (t) { goto L_00244984; } }
    set32(c.r[3], 0u - 256u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_00244988; } }
    set32(c.r[3], 0u + 256u);
    c.budget -= 1;
L_00244984:
    st32((c.r[16].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 1;
L_00244988:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002449A0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 9024u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00244000u < 16384u) { entry = entries_0051[(t - 0x00244000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002449C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00300000u);
    set32(c.r[3], c.r[2].w[0] + 24976u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[2], 0u + 64u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[4].w[0] + 168u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 104u), 0u);
    st32((c.r[4].w[0] + 92u), 0u);
    st32((c.r[4].w[0] + 96u), 0u);
    st32((c.r[4].w[0] + 100u), 0u);
    st8((c.r[4].w[0] + 530u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3CA30000u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    st32((c.r[4].w[0] + 332u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBA830000u);
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    st32((c.r[4].w[0] + 336u), c.r[2].w[0]);
    st8((c.r[4].w[0] + 350u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 30u);
    st16((c.r[4].w[0] + 346u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 348u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.budget -= 29;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], c.r[16].w[0] + 320u);  if (t) { goto L_00244A48; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 532u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00244A54; } }
L_00244A48:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244A54u); st8((c.r[6].w[0] + 1u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0081(c, 16u, depth + 1u); else { c.pc = 0x003044E0u; return; } if (c.pc != 0x00244A54u) [[unlikely]] return; }
L_00244A54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244A5Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0051(c, 50u, depth + 1u); else { c.pc = 0x00244A70u; return; } if (c.pc != 0x00244A5Cu) [[unlikely]] return; }
L_00244A5C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00244A70:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 321u)));
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[17], c.r[18].w[0] + 320u);  if (t) { goto L_00244B50; } }
    set32(c.r[16], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244AA4u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x00244AA4u) [[unlikely]] return; }
L_00244AA4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    c.f[13] = c.r[2].w[0];
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBFE60000u);
    c.r[2].d[0] = c.r[2].d[0] | 26214ull;
    c.f[14] = c.r[2].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244AC4u);  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00244AC4u) [[unlikely]] return; }
L_00244AC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244ACCu); set32(c.r[4], c.r[18].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00244ACCu) [[unlikely]] return; }
L_00244ACC:
    set32(c.r[2], ld32((c.r[16].w[0] + 80u)));
    st32((c.r[18].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    st32((c.r[18].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    st32((c.r[18].w[0] + 88u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[18].w[0] + 240u));
    st32((c.r[18].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 244u));
    st32((c.r[18].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 248u));
    st32((c.r[18].w[0] + 40u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 320u)));
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00244B18; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244B18u); st32((c.r[18].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0051(c, 82u, depth + 1u); else { c.pc = 0x00244F00u; return; } if (c.pc != 0x00244B18u) [[unlikely]] return; }
L_00244B18:
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st8((c.r[18].w[0] + 6u), static_cast<std::uint8_t>(0u));
    st8((c.r[18].w[0] + 7u), static_cast<std::uint8_t>(0u));
    st32((c.r[18].w[0] + 104u), 0u);
    st32((c.r[18].w[0] + 92u), 0u);
    st32((c.r[18].w[0] + 96u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3CA30000u);
    st32((c.r[18].w[0] + 100u), 0u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBA830000u);
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_00244DA0; } }
L_00244B50:
    c.f[3] = ld32((c.r[18].w[0] + 32u));
    c.f[2] = ld32((c.r[18].w[0] + 36u));
    c.f[1] = ld32((c.r[18].w[0] + 40u));
    c.f[0] = ld32((c.r[18].w[0] + 44u));
    st32((c.r[18].w[0] + 128u), c.f[3]);
    st32((c.r[18].w[0] + 132u), c.f[2]);
    st32((c.r[18].w[0] + 136u), c.f[1]);
    st32((c.r[18].w[0] + 140u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00244CE8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] + 25408u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00244000u < 16384u) { entry = entries_0051[(t - 0x00244000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00244B9C:
    set32(c.r[5], 0u + 1u);
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[18].w[0] + 532u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244BB0u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 16u, depth + 1u); else { c.pc = 0x003044E0u; return; } if (c.pc != 0x00244BB0u) [[unlikely]] return; }
L_00244BB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244BB8u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0051(c, 86u, depth + 1u); else { c.pc = 0x00244F50u; return; } if (c.pc != 0x00244BB8u) [[unlikely]] return; }
L_00244BB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244BC0u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0051(c, 88u, depth + 1u); else { c.pc = 0x00245150u; return; } if (c.pc != 0x00244BC0u) [[unlikely]] return; }
L_00244BC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));  if (t) { goto L_00244CEC; } }
L_00244BC8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 164u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[2].w[0] - 1u);  goto L_00244C40; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244BDCu);  if (depth < kMaxDepth) unit_0052(c, 180u, depth + 1u); else { c.pc = 0x0024A530u; return; } if (c.pc != 0x00244BDCu) [[unlikely]] return; }
L_00244BDC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[18].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_00244C30; } }
    set32(c.r[2], 0u + 3u);
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[18].w[0] + 6u), static_cast<std::uint8_t>(0u));
    st32((c.r[18].w[0] + 92u), 0u);
    st32((c.r[18].w[0] + 96u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3C750000u);
    st32((c.r[18].w[0] + 100u), 0u);
    c.r[2].d[0] = c.r[2].d[0] | 49807ull;
    st32((c.r[18].w[0] + 108u), c.r[2].w[0]);
    set32(c.r[2], 0u + 900u);
    st16((c.r[17].w[0] + 24u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00244CE8; } }
    set32(c.r[2], 0u + 5u);
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 24u), static_cast<std::uint16_t>(0u));  if (t) { goto L_00244CE8; } }
L_00244C30:
    set32(c.r[2], 0u + 60u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00244CE8; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 1;
L_00244C40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244C48u); st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0051(c, 87u, depth + 1u); else { c.pc = 0x002450B0u; return; } if (c.pc != 0x00244C48u) [[unlikely]] return; }
L_00244C48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244C50u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0051(c, 88u, depth + 1u); else { c.pc = 0x00245150u; return; } if (c.pc != 0x00244C50u) [[unlikely]] return; }
L_00244C50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00244CE8; } }
L_00244C58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244C60u);  if (depth < kMaxDepth) unit_0051(c, 91u, depth + 1u); else { c.pc = 0x002452B0u; return; } if (c.pc != 0x00244C60u) [[unlikely]] return; }
L_00244C60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244C68u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0051(c, 106u, depth + 1u); else { c.pc = 0x00245A00u; return; } if (c.pc != 0x00244C68u) [[unlikely]] return; }
L_00244C68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00244CE8; } }
L_00244C70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244C78u);  if (depth < kMaxDepth) unit_0051(c, 98u, depth + 1u); else { c.pc = 0x002455B0u; return; } if (c.pc != 0x00244C78u) [[unlikely]] return; }
L_00244C78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244C80u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0051(c, 106u, depth + 1u); else { c.pc = 0x00245A00u; return; } if (c.pc != 0x00244C80u) [[unlikely]] return; }
L_00244C80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00244CE8; } }
L_00244C88:
    c.f[1] = ld32((c.r[18].w[0] + 108u));
    c.f[0] = ld32((c.r[18].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F590000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.f[2] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[18].w[0] + 104u), c.f[0]);  if (t) { goto L_00244CBC; } }
    st32((c.r[18].w[0] + 104u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 108u), 0u);  if (t) { goto L_00244CDC; } }
L_00244CBC:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (t) { goto L_00244CE0; } }
    st32((c.r[18].w[0] + 104u), 0u);
    st32((c.r[18].w[0] + 108u), 0u);
    c.budget -= 2;
L_00244CDC:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 1;
L_00244CE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244CE8u);  if (depth < kMaxDepth) unit_0051(c, 106u, depth + 1u); else { c.pc = 0x00245A00u; return; } if (c.pc != 0x00244CE8u) [[unlikely]] return; }
L_00244CE8:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 1;
L_00244CEC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 641u)));
    c.r[2].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00244D04; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 280u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_00244D04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (t) { goto L_00244D98; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 92u)));
    c.r[5].d[0] = 0ull | 65535ull;
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[18].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    st32((c.r[18].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 96u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[18].w[0] + 84u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[18].w[0] + 84u));
    st32((c.r[18].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 100u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[18].w[0] + 88u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[18].w[0] + 88u));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244D64u); st32((c.r[18].w[0] + 88u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 232u, depth + 1u); else { c.pc = 0x0024B250u; return; } if (c.pc != 0x00244D64u) [[unlikely]] return; }
L_00244D64:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244D74u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0052(c, 243u, depth + 1u); else { c.pc = 0x0024B3F0u; return; } if (c.pc != 0x00244D74u) [[unlikely]] return; }
L_00244D74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00244D94; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244D8Cu); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 9u, depth + 1u); else { c.pc = 0x00304280u; return; } if (c.pc != 0x00244D8Cu) [[unlikely]] return; }
L_00244D8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);  if (t) { goto L_00244E4C; } }
L_00244D94:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 1;
L_00244D98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244DA0u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_005D(c, 694u, depth + 1u); else { c.pc = 0x002763B0u; return; } if (c.pc != 0x00244DA0u) [[unlikely]] return; }
L_00244DA0:
    set32(c.r[5], c.r[18].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244DACu); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0045(c, 199u, depth + 1u); else { c.pc = 0x00217650u; return; } if (c.pc != 0x00244DACu) [[unlikely]] return; }
L_00244DAC:
    c.f[1] = ld32((c.r[18].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[2], 0u + 2u);  goto L_00244DF0; }
    c.r[4].d[0] = ld8((c.r[18].w[0] + 530u));
    set32(c.r[3], 0u - 97u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00244DE0; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 532u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00244DEC; } }
L_00244DE0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 514u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_00244E18; } }
L_00244DEC:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_00244DF0:
    st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244E00u); st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0081(c, 9u, depth + 1u); else { c.pc = 0x00304280u; return; } if (c.pc != 0x00244E00u) [[unlikely]] return; }
L_00244E00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244E08u); set32(c.r[4], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0047(c, 216u, depth + 1u); else { c.pc = 0x0021EE00u; return; } if (c.pc != 0x00244E08u) [[unlikely]] return; }
L_00244E08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244E10u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0052(c, 251u, depth + 1u); else { c.pc = 0x0024BA20u; return; } if (c.pc != 0x00244E10u) [[unlikely]] return; }
L_00244E10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00244E48; } }
L_00244E18:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00244E44; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00244E40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244E40u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_003D(c, 21u, depth + 1u); else { c.pc = 0x001F45D0u; return; } if (c.pc != 0x00244E40u) [[unlikely]] return; }
L_00244E40:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_00244E44:
    st8((c.r[18].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_00244E48:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00244E4C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00244E60:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00244E70:
    set32(c.r[5], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00244EC4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 529u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00244EAC; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 531u));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 324u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 324u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00244EEC; } }
L_00244EAC:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 531u));
    set32(c.r[3], c.r[2].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 384u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 384u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00244EEC; } }
L_00244EC4:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 531u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] + 324u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 324u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00244EEC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00244EEC:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_00244F00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_00244F28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244F28u); set32(c.r[5], ld32((c.r[16].w[0] + 24u)));  if (depth < kMaxDepth) unit_0077(c, 232u, depth + 1u); else { c.pc = 0x002DEAA0u; return; } if (c.pc != 0x00244F28u) [[unlikely]] return; }
L_00244F28:
    set32(c.r[5], 0u + 57u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244F34u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_007A(c, 8u, depth + 1u); else { c.pc = 0x002E8110u; return; } if (c.pc != 0x00244F34u) [[unlikely]] return; }
L_00244F34:
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244F40u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 330u, depth + 1u); else { c.pc = 0x00197890u; return; } if (c.pc != 0x00244F40u) [[unlikely]] return; }
L_00244F40:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00244F50:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 6u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[7], c.r[4].w[0] + 320u);  if (t) { goto L_00245020; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00244FEC; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00244FB8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);  if (t) { goto L_00244F8C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[4].w[0] + 68u));  if (t) { goto L_00245064; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.budget -= 1;
L_00244F8C:
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    st32((c.r[4].w[0] + 52u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3CF50000u);
    c.r[3].d[0] = c.r[3].d[0] | 49807ull;
    st32((c.r[4].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[3], 0u + 20u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 6u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00245060; } }
L_00244FB8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_00244FE4; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBC230000u);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    st32((c.r[4].w[0] + 68u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 6u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00245060; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_00244FE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00245060; } }
L_00244FEC:
    c.f[1] = ld32((c.r[4].w[0] + 52u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3CA30000u);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00245060; } }
    set32(c.r[3], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 68u), 0u);  if (t) { goto L_00245060; } }
L_00245020:
    c.f[0] = ld32((c.r[4].w[0] + 36u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3CA30000u);
    c.r[6].d[0] = c.r[3].d[0] | 55050ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBA830000u);
    c.r[5].d[0] = c.r[3].d[0] | 4719ull;
    set32(c.r[3], 0u + 2u);
    st32((c.r[7].w[0] + 20u), c.f[0]);
    st32((c.r[4].w[0] + 52u), 0u);
    st32((c.r[4].w[0] + 68u), 0u);
    st32((c.r[7].w[0] + 12u), c.r[6].w[0]);
    st32((c.r[7].w[0] + 16u), c.r[5].w[0]);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 90u);
    st8((c.r[4].w[0] + 6u), static_cast<std::uint8_t>(0u));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 532u), static_cast<std::uint8_t>(0u));
    c.budget -= 16;
L_00245060:
    c.f[1] = ld32((c.r[4].w[0] + 68u));
    c.budget -= 1;
L_00245064:
    c.f[0] = ld32((c.r[4].w[0] + 52u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3ECC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[2] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[4].w[0] + 52u), c.f[0]);  if (t) { goto L_00245090; } }
    st32((c.r[4].w[0] + 52u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 68u), 0u);
    c.budget -= 2;
L_00245090:
    c.f[1] = ld32((c.r[4].w[0] + 52u));
    c.f[0] = ld32((c.r[4].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 36u), c.f[0]);  c.pc = t; return; }
L_002450B0:
    c.f[1] = ld32((c.r[4].w[0] + 36u));
    c.f[0] = ld32((c.r[4].w[0] + 340u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[5], c.r[4].w[0] + 320u);  if (t) { goto L_002450D8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBA830000u);
    c.r[3].d[0] = c.r[3].d[0] | 4719ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 16u), c.r[3].w[0]);  if (t) { goto L_002450E4; } }
L_002450D8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[3].d[0] = c.r[3].d[0] | 4719ull;
    st32((c.r[5].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 3;
L_002450E4:
    c.f[1] = ld32((c.r[5].w[0] + 16u));
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3CA30000u);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    c.f[2] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[5].w[0] + 12u), c.f[0]);  if (t) { goto L_00245114; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_00245138; } }
L_00245114:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBCA30000u);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00245138; } }
    st32((c.r[5].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 1;
L_00245138:
    c.f[1] = ld32((c.r[5].w[0] + 12u));
    c.f[0] = ld32((c.r[4].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 36u), c.f[0]);  c.pc = t; return; }
L_00245150:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245164u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x00245164u) [[unlikely]] return; }
L_00245164:
    c.r[3].d[0] = c.r[2].d[0] & 7ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 92u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002451B8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    c.r[2].d[0] = c.r[4].sd[0] < 512ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 8u);  if (t) { goto L_002451A4; } }
    c.r[1].d[0] = 0ull | 32769ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002451A0; } }
    set32(c.r[2], 0u - 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 92u), c.r[2].w[0]);  if (t) { goto L_002451FC; } }
L_002451A0:
    set32(c.r[2], 0u + 8u);
    c.budget -= 1;
L_002451A4:
    st32((c.r[16].w[0] + 92u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 92u), c.r[2].w[0]);  if (t) { goto L_002451FC; } }
L_002451B8:
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    c.r[1].d[0] = 0ull | 65025ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u - 8u);  if (t) { goto L_002451EC; } }
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002451E8; } }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 92u), c.r[2].w[0]);  if (t) { goto L_002451FC; } }
L_002451E8:
    set32(c.r[2], 0u - 8u);
    c.budget -= 1;
L_002451EC:
    st32((c.r[16].w[0] + 92u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[16].w[0] + 92u), c.r[2].w[0]);
    c.budget -= 4;
L_002451FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245204u);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x00245204u) [[unlikely]] return; }
L_00245204:
    set32(c.r[3], ld32((c.r[16].w[0] + 100u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0; c.r[5].d[0] = c.r[2].d[0] & 7ull;  if (t) { goto L_00245254; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    c.r[3].d[0] = c.r[4].sd[0] < 512ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 8u);  if (t) { goto L_00245240; } }
    c.r[1].d[0] = 0ull | 32769ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0024523C; } }
    set32(c.r[3], 0u - 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 100u), c.r[3].w[0]);  if (t) { goto L_00245298; } }
L_0024523C:
    set32(c.r[3], 0u + 8u);
    c.budget -= 1;
L_00245240:
    st32((c.r[16].w[0] + 100u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 100u), c.r[3].w[0]);  if (t) { goto L_00245298; } }
L_00245254:
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    c.r[1].d[0] = 0ull | 65025ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u - 8u);  if (t) { goto L_00245288; } }
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00245284; } }
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 100u), c.r[3].w[0]);  if (t) { goto L_00245298; } }
L_00245284:
    set32(c.r[3], 0u - 8u);
    c.budget -= 1;
L_00245288:
    st32((c.r[16].w[0] + 100u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    st32((c.r[16].w[0] + 100u), c.r[3].w[0]);
    c.budget -= 4;
L_00245298:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002452B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[1] = ld32((c.r[4].w[0] + 108u));
    c.f[0] = ld32((c.r[4].w[0] + 104u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F590000u);
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.f[2] = c.r[3].w[0];
    set32(c.r[5], c.r[16].w[0] + 320u);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 16;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[4].w[0] + 104u), c.f[0]);  if (t) { goto L_002452FC; } }
    st32((c.r[16].w[0] + 104u), c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), 0u);  if (t) { goto L_0024531C; } }
L_002452FC:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0024531C; } }
    st32((c.r[16].w[0] + 104u), 0u);
    st32((c.r[16].w[0] + 108u), 0u);
    c.budget -= 2;
L_0024531C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00245330; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[5].w[0] + 24u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00245330:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 6u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { mmi::paddub(c.r[4], c.r[16], c.r[0]);  goto L_00245538; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { mmi::paddub(c.r[4], c.r[16], c.r[0]);  goto L_002454CC; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024535C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_002455A0; } }
L_0024535C:
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_00245398; } }
    set32(c.r[3], c.r[3].w[0] - 16u);
    st32((c.r[16].w[0] + 96u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] > 0; set32(c.r[3], 0u + 256u);  if (t) { goto L_00245390; } }
    st32((c.r[16].w[0] + 96u), 0u);
    st32((c.r[16].w[0] + 88u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 100u), 0u);  if (t) { goto L_0024559C; } }
    set32(c.r[3], 0u + 256u);
    c.budget -= 1;
L_00245390:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 100u), c.r[3].w[0]);  if (t) { goto L_0024559C; } }
L_00245398:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_002453D0; } }
    set32(c.r[3], c.r[3].w[0] + 16u);
    st32((c.r[16].w[0] + 96u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] < 0; set32(c.r[3], 0u - 256u);  if (t) { goto L_002453C8; } }
    st32((c.r[16].w[0] + 96u), 0u);
    st32((c.r[16].w[0] + 88u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 100u), 0u);  if (t) { goto L_0024559C; } }
    set32(c.r[3], 0u - 256u);
    c.budget -= 1;
L_002453C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 100u), c.r[3].w[0]);  if (t) { goto L_0024559C; } }
L_002453D0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002453F4; } }
    set32(c.r[3], 0u + 5u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3C750000u);
    c.r[3].d[0] = c.r[3].d[0] | 49807ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_0024559C; } }
L_002453F4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_00245414; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245408u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0051(c, 104u, depth + 1u); else { c.pc = 0x002458B0u; return; } if (c.pc != 0x00245408u) [[unlikely]] return; }
L_00245408:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024559C; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_00245414:
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 28u)));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_002454C0; }
    set32(c.r[2], 0u + 30u);
    st16((c.r[5].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x433E0000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 6144u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245444u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 2u, depth + 1u); else { c.pc = 0x0024C040u; return; } if (c.pc != 0x00245444u) [[unlikely]] return; }
L_00245444:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024559C; } }
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    c.f[5] = ld32((c.r[2].w[0] + 32u));
    c.f[4] = ld32((c.r[16].w[0] + 32u));
    c.f[1] = ld32((c.r[2].w[0] + 40u));
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.f[3] = ld32((c.r[2].w[0] + 36u));
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.f[4] = fp::sub(c.f[5], c.f[4]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[4], c.f[4]);
    c.f[20] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245480u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x00245480u) [[unlikely]] return; }
L_00245480:
    c.facc = fp::mul(c.f[20], c.f[20]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024548Cu); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x0024548Cu) [[unlikely]] return; }
L_0024548C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42F00000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0024559C; } }
    set32(c.r[3], 0u + 4u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0024559C; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_002454C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[5].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0024559C; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002454CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002454D4u);  if (depth < kMaxDepth) unit_0051(c, 104u, depth + 1u); else { c.pc = 0x002458B0u; return; } if (c.pc != 0x002454D4u) [[unlikely]] return; }
L_002454D4:
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    c.r[3].d[0] = c.r[4].sd[0] < 512ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[4].w[0] + 16u);  if (t) { goto L_002454F4; } }
    set32(c.r[3], 0u + 512u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_002454F8; } }
    set32(c.r[3], c.r[4].w[0] + 16u);
    c.budget -= 1;
L_002454F4:
    st32((c.r[16].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 1;
L_002454F8:
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    c.r[5].d[0] = 0ull | 57344ull;
    c.r[1].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], 0u - 256u);  if (t) { goto L_0024552C; } }
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00245528; } }
    st32((c.r[16].w[0] + 88u), c.r[5].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 100u), 0u);  if (t) { goto L_0024559C; } }
L_00245528:
    set32(c.r[3], 0u - 256u);
    c.budget -= 1;
L_0024552C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 100u), c.r[3].w[0]);  if (t) { goto L_0024559C; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_00245538:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245540u);  if (depth < kMaxDepth) unit_0051(c, 104u, depth + 1u); else { c.pc = 0x002458B0u; return; } if (c.pc != 0x00245540u) [[unlikely]] return; }
L_00245540:
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    c.r[1].d[0] = c.r[3].sd[0] < -511ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], c.r[3].w[0] - 16u);  goto L_00245560; }
    set32(c.r[3], 0u - 512u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_00245564; } }
    set32(c.r[3], c.r[3].w[0] - 16u);
    c.budget -= 1;
L_00245560:
    st32((c.r[16].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 1;
L_00245564:
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    c.r[3].d[0] = c.r[4].sd[0] < 8192ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 256u);  if (t) { goto L_00245598; } }
    c.r[1].d[0] = 0ull | 32769ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00245594; } }
    set32(c.r[3], 0u + 8192u);
    st32((c.r[16].w[0] + 88u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 100u), 0u);  if (t) { goto L_0024559C; } }
L_00245594:
    set32(c.r[3], 0u + 256u);
    c.budget -= 1;
L_00245598:
    st32((c.r[16].w[0] + 100u), c.r[3].w[0]);
    c.budget -= 1;
L_0024559C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002455A0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002455B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[1] = ld32((c.r[4].w[0] + 108u));
    c.f[0] = ld32((c.r[4].w[0] + 104u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F590000u);
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.f[2] = c.r[3].w[0];
    set32(c.r[16], c.r[17].w[0] + 320u);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 17;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[4].w[0] + 104u), c.f[0]);  if (t) { goto L_00245600; } }
    st32((c.r[17].w[0] + 104u), c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 108u), 0u);  if (t) { goto L_00245620; } }
L_00245600:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00245620; } }
    st32((c.r[17].w[0] + 104u), 0u);
    st32((c.r[17].w[0] + 108u), 0u);
    c.budget -= 2;
L_00245620:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 6u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00245858; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00245824; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002457D8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00245744; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], c.r[4].w[0] + 1u);  goto L_00245668; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);  if (t) { goto L_00245890; } }
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_00245668:
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    c.f[4] = ld32((c.r[17].w[0] + 32u));
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    c.f[2] = ld32((c.r[17].w[0] + 36u));
    c.f[5] = ld32((c.r[2].w[0] + 32u));
    c.f[1] = ld32((c.r[2].w[0] + 40u));
    c.f[3] = ld32((c.r[2].w[0] + 36u));
    c.f[4] = fp::sub(c.f[5], c.f[4]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[4], c.f[4]);
    c.f[20] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002456A0u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002456A0u) [[unlikely]] return; }
L_002456A0:
    c.f[12] = c.f[20] ^ fp::kSign;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002456ACu); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x002456ACu) [[unlikely]] return; }
L_002456AC:
    mmi::paddub(c.r[4], c.r[2], c.r[0]);
    c.r[3].d[0] = 0ull | 65535ull;
    c.r[4].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].d[0] = 0ull | 63488ull;  if (t) { goto L_002456E0; } }
    c.r[3].d[0] = c.r[4].sd[0] < 2048ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002456F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 2048u);  if (t) { goto L_002456F0; } }
    c.r[5].d[0] = 0ull | 63488ull;
    c.budget -= 1;
L_002456E0:
    c.r[3].d[0] = c.r[4].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002456F0; } }
    mmi::paddub(c.r[4], c.r[5], c.r[0]);
    c.budget -= 1;
L_002456F0:
    st32((c.r[16].w[0] + 8u), c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    c.r[3].d[0] = 0ull | 32768ull;
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 192u);  if (t) { goto L_00245724; } }
    set32(c.r[3], 0u - 192u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[3].w[0]);  if (t) { goto L_00245728; } }
    set32(c.r[3], 0u + 192u);
    c.budget -= 1;
L_00245724:
    st32((c.r[17].w[0] + 92u), c.r[3].w[0]);
    c.budget -= 1;
L_00245728:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBC030000u);
    c.r[3].d[0] = c.r[3].d[0] | 4719ull;
    st32((c.r[17].w[0] + 108u), c.r[3].w[0]);
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 30u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 60u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 7;
L_00245744:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.r[4].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[4].sd[0] < 257ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00245770; } }
    c.r[3].d[0] = 0ull | 65280ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002457A0; } }
L_00245770:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 6u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBE190000u);
    set32(c.r[4], 0u + 2u);
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st32((c.r[17].w[0] + 108u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 92u)));
    st16((c.r[17].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), 0u);  if (t) { goto L_0024588C; } }
L_002457A0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_002457D0; }
    set32(c.r[2], 0u + 3u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(0u));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002457C4u); st8((c.r[17].w[0] + 7u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0051(c, 104u, depth + 1u); else { c.pc = 0x002458B0u; return; } if (c.pc != 0x002457C4u) [[unlikely]] return; }
L_002457C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024588C; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_002457D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0024588C; } }
L_002457D8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_0024581C; }
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002457F4u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0051(c, 82u, depth + 1u); else { c.pc = 0x00244F00u; return; } if (c.pc != 0x002457F4u) [[unlikely]] return; }
L_002457F4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3CF50000u);
    c.r[3].d[0] = c.r[3].d[0] | 49807ull;
    st32((c.r[17].w[0] + 108u), c.r[3].w[0]);
    set32(c.r[3], 0u + 2u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 166u)));
    set32(c.r[3], 0u - c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[3].w[0]);  if (t) { goto L_0024588C; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_0024581C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0024588C; } }
L_00245824:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_00245850; }
    set32(c.r[3], c.r[4].w[0] + 1u);
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 30u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[17].w[0] + 92u), 0u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 30u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0024588C; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_00245850:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0024588C; } }
L_00245858:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_00245888; }
    set32(c.r[2], 0u + 3u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(0u));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024587Cu); st8((c.r[17].w[0] + 7u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0051(c, 104u, depth + 1u); else { c.pc = 0x002458B0u; return; } if (c.pc != 0x0024587Cu) [[unlikely]] return; }
L_0024587C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024588C; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_00245888:
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 1;
L_0024588C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00245890:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002458B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.f[2] = ld32((c.r[4].w[0] + 32u));
    c.f[0] = ld32((c.r[4].w[0] + 40u));
    set32(c.r[16], c.r[17].w[0] + 320u);
    c.f[3] = ld32((c.r[2].w[0] + 32u));
    c.f[1] = ld32((c.r[2].w[0] + 40u));
    c.f[12] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002458E8u); c.f[13] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x002458E8u) [[unlikely]] return; }
L_002458E8:
    c.r[3].d[0] = 0ull | 65535ull;
    c.r[3].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    c.r[1].d[0] = 0ull | 57344ull;
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], 0u + 240u);  goto L_00245924; }
    c.r[1].d[0] = c.r[3].sd[0] < 8193ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = 0ull | 32769ull;  if (t) { goto L_00245938; } }
    set32(c.r[3], 0u + 240u);
    c.budget -= 1;
L_00245924:
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(0u));
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(0u));  if (t) { goto L_002459E0; } }
    c.r[1].d[0] = 0ull | 32769ull;
    c.budget -= 1;
L_00245938:
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00245994; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 6u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_00245988; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    c.r[3].d[0] = c.r[3].sd[0] < 160ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00245980; } }
    set32(c.r[3], 0u + 240u);
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002459E0; } }
L_00245980:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_002459E0; } }
L_00245988:
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(0u));  if (t) { goto L_002459E0; } }
L_00245994:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 6u)));
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_002459D8; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    c.r[3].d[0] = c.r[3].sd[0] < 160ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002459D0; } }
    set32(c.r[3], 0u + 240u);
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002459E0; } }
L_002459D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_002459E0; } }
L_002459D8:
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_002459E0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00245A00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[12] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245A1Cu); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0052(c, 239u, depth + 1u); else { c.pc = 0x0024B350u; return; } if (c.pc != 0x00245A1Cu) [[unlikely]] return; }
L_00245A1C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x45FA0000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00245CC4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[1] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.f[2] = c.r[3].w[0];
    set32(c.r[3], 0u + 2u);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[5], c.r[16].w[0] + 320u);  if (t) { goto L_00245A90; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 28022u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00245A90; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 28020u)));
    set32(c.r[3], 0u + 35u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00245A90; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42780000u);
    c.f[1] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42900000u);
    c.f[2] = c.r[3].w[0];
    c.budget -= 4;
L_00245A90:
    c.f[3] = ld32((c.r[16].w[0] + 36u));
    c.f[1] = fp::add(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[1]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = fp::add(c.f[0], c.f[2]);  goto L_00245B38; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D230000u);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00245ADC; } }
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 68u), 0u);
    c.budget -= 2;
L_00245ADC:
    c.f[1] = ld32((c.r[16].w[0] + 68u));
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 52u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 30u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00245CC4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    c.r[5].d[0] = 0ull | 63488ull;
    c.r[1].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], 0u - 128u);  if (t) { goto L_00245B2C; } }
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00245B28; } }
    st32((c.r[16].w[0] + 80u), c.r[5].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 92u), 0u);  if (t) { goto L_00245CC4; } }
L_00245B28:
    set32(c.r[3], 0u - 128u);
    c.budget -= 1;
L_00245B2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 92u), c.r[3].w[0]);  if (t) { goto L_00245CC4; } }
    c.f[0] = fp::add(c.f[0], c.f[2]);
    c.budget -= 1;
L_00245B38:
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00245BD4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBD230000u);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00245B7C; } }
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 68u), 0u);
    c.budget -= 2;
L_00245B7C:
    c.f[1] = ld32((c.r[16].w[0] + 68u));
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 52u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 30u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00245CC4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    c.r[3].d[0] = c.r[4].sd[0] < 2048ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 128u);  if (t) { goto L_00245BCC; } }
    c.r[1].d[0] = 0ull | 32769ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00245BC8; } }
    set32(c.r[3], 0u + 2048u);
    st32((c.r[16].w[0] + 80u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 92u), 0u);  if (t) { goto L_00245CC4; } }
L_00245BC8:
    set32(c.r[3], 0u + 128u);
    c.budget -= 1;
L_00245BCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 92u), c.r[3].w[0]);  if (t) { goto L_00245CC4; } }
L_00245BD4:
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    c.f[2] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00245C28; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBD230000u);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 52u), c.f[0]);  if (t) { goto L_00245C6C; } }
    st32((c.r[16].w[0] + 52u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 68u), 0u);  if (t) { goto L_00245C6C; } }
L_00245C28:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00245C6C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D230000u);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[16].w[0] + 52u), c.f[0]);  if (t) { goto L_00245C6C; } }
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 68u), 0u);
    c.budget -= 2;
L_00245C6C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 30u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00245CC4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 80u)));
    c.r[1].d[0] = 0ull | 65024ull;
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00245C98; } }
    c.r[1].d[0] = c.r[3].sd[0] < 513ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = 0ull | 32768ull;  if (t) { goto L_00245CA4; } }
L_00245C98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 92u), 0u);  if (t) { goto L_00245CC4; } }
    c.r[1].d[0] = 0ull | 32768ull;
    c.budget -= 1;
L_00245CA4:
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u + 128u);  if (t) { goto L_00245CC0; } }
    set32(c.r[3], 0u - 128u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 92u), c.r[3].w[0]);  if (t) { goto L_00245CC4; } }
    set32(c.r[3], 0u + 128u);
    c.budget -= 1;
L_00245CC0:
    st32((c.r[16].w[0] + 92u), c.r[3].w[0]);
    c.budget -= 1;
L_00245CC4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00245CE0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 9088u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00244000u < 16384u) { entry = entries_0051[(t - 0x00244000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00245D00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 104u), 0u);
    st32((c.r[4].w[0] + 52u), 0u);
    st32((c.r[4].w[0] + 92u), 0u);
    st32((c.r[4].w[0] + 96u), 0u);
    st32((c.r[4].w[0] + 100u), 0u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00300000u);
    set32(c.r[3], c.r[2].w[0] + 24976u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3CA30000u);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    st32((c.r[4].w[0] + 168u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 108u), c.r[2].w[0]);
    set32(c.r[2], 0u + 64u);
    st8((c.r[4].w[0] + 530u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42700000u);
    st32((c.r[4].w[0] + 344u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    st32((c.r[4].w[0] + 348u), c.r[2].w[0]);
    st8((c.r[4].w[0] + 354u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 355u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], 0u + 2u);
    set32(c.r[16], c.r[17].w[0] + 320u);
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245D7Cu); st8((c.r[4].w[0] + 358u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0081(c, 16u, depth + 1u); else { c.pc = 0x003044E0u; return; } if (c.pc != 0x00245D7Cu) [[unlikely]] return; }
L_00245D7C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00245D9C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_00245DF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00245DF4; } }
L_00245D9C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[4], c.r[2].w[0] + 9040u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[3], c.r[2].w[0] + 9072u);
    c.r[2].d[0] = c.r[5].d[0] & 15ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[17].w[0] + 160u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 4));
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 16u));
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 22;
L_00245DF4:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_00245DF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245E00u);  if (depth < kMaxDepth) unit_0051(c, 112u, depth + 1u); else { c.pc = 0x00245E20u; return; } if (c.pc != 0x00245E00u) [[unlikely]] return; }
L_00245E00:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00245E20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[3] = ld32((c.r[4].w[0] + 32u));
    c.f[2] = ld32((c.r[4].w[0] + 36u));
    c.f[1] = ld32((c.r[4].w[0] + 40u));
    c.f[0] = ld32((c.r[4].w[0] + 44u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FE60000u);
    c.r[2].d[0] = c.r[2].d[0] | 26214ull;
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.f[4] = c.r[2].w[0];
    set32(c.r[16], c.r[17].w[0] + 320u);
    st32((c.r[4].w[0] + 128u), c.f[3]);
    st32((c.r[4].w[0] + 132u), c.f[2]);
    st32((c.r[4].w[0] + 136u), c.f[1]);
    st32((c.r[4].w[0] + 140u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 108u));
    c.f[0] = ld32((c.r[4].w[0] + 104u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[4]));
    c.budget -= 24;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[4].w[0] + 104u), c.f[0]);  if (t) { goto L_00245E8C; } }
    st32((c.r[17].w[0] + 104u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 108u), 0u);  if (t) { goto L_00245EAC; } }
L_00245E8C:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00245EAC; } }
    st32((c.r[17].w[0] + 104u), 0u);
    st32((c.r[17].w[0] + 108u), 0u);
    c.budget -= 2;
L_00245EAC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_00245EE4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_00245ED0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 34u)));  if (t) { goto L_00245EF0; } }
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_00245ED0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245ED8u);  if (depth < kMaxDepth) unit_0051(c, 128u, depth + 1u); else { c.pc = 0x002461F0u; return; } if (c.pc != 0x00245ED8u) [[unlikely]] return; }
L_00245ED8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00245EEC; } }
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_00245EE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245EECu);  if (depth < kMaxDepth) unit_0051(c, 129u, depth + 1u); else { c.pc = 0x00246200u; return; } if (c.pc != 0x00245EECu) [[unlikely]] return; }
L_00245EEC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 34u)));
    c.budget -= 1;
L_00245EF0:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00245FA8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00245F54; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x430C0000u);  if (t) { goto L_00245F1C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));  if (t) { goto L_00245FC8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x430C0000u);
    c.budget -= 1;
L_00245F1C:
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 6144u);
    set32(c.r[6], 0u + 4608u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245F30u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 22u, depth + 1u); else { c.pc = 0x0024C590u; return; } if (c.pc != 0x00245F30u) [[unlikely]] return; }
L_00245F30:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00245FC4; } }
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 34u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 36u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 37u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00245FC4; } }
L_00245F54:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[2].w[0] - 1u);  goto L_00245FA0; }
    set32(c.r[2], 0u + 3u);
    st8((c.r[16].w[0] + 36u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245F70u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0051(c, 130u, depth + 1u); else { c.pc = 0x00246220u; return; } if (c.pc != 0x00245F70u) [[unlikely]] return; }
L_00245F70:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 37u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[16].w[0] + 37u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 37u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00245FC4; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 34u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 60u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 36u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00245FC4; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 1;
L_00245FA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 36u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00245FC4; } }
L_00245FA8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[2].w[0] - 1u);  goto L_00245FC0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 34u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00245FC4; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 1;
L_00245FC0:
    st8((c.r[16].w[0] + 36u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_00245FC4:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 1;
L_00245FC8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 641u)));
    c.r[2].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00245FE0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 280u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_00245FE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_00246124; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 92u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[2].w[0];
    c.r[5].d[0] = 0ull | 65535ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBD230000u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.f[16] = c.r[2].w[0];
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D230000u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    c.f[14] = c.r[2].w[0];
    set32(c.r[3], ld32((c.r[17].w[0] + 80u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[17] = c.r[2].w[0];
    set32(c.r[6], 0u - 256u);
    set32(c.r[7], 0u + 4096u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[5].d[0];
    st32((c.r[17].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[8], 0u + 256u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[17].w[0] + 84u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 84u));
    st32((c.r[17].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[17].w[0] + 88u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 88u));
    st32((c.r[17].w[0] + 88u), c.r[2].w[0]);
    c.f[12] = ld32((c.r[16].w[0] + 24u));
    c.f[13] = ld32((c.r[16].w[0] + 28u));
    c.budget -= 38;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00246080u); c.r[5].d[0] = 0ull | 61440ull;  if (depth < kMaxDepth) unit_0052(c, 257u, depth + 1u); else { c.pc = 0x0024BDC0u; return; } if (c.pc != 0x00246080u) [[unlikely]] return; }
L_00246080:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00246088u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0052(c, 232u, depth + 1u); else { c.pc = 0x0024B250u; return; } if (c.pc != 0x00246088u) [[unlikely]] return; }
L_00246088:
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00246094u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0045(c, 199u, depth + 1u); else { c.pc = 0x00217650u; return; } if (c.pc != 0x00246094u) [[unlikely]] return; }
L_00246094:
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 2u);  if (t) { goto L_002460CC; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 530u));
    set32(c.r[2], 0u - 97u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002460C8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 514u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);  if (t) { goto L_002460F4; } }
L_002460C8:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_002460CC:
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002460D8u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 9u, depth + 1u); else { c.pc = 0x00304280u; return; } if (c.pc != 0x002460D8u) [[unlikely]] return; }
L_002460D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002460E0u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0047(c, 216u, depth + 1u); else { c.pc = 0x0021EE00u; return; } if (c.pc != 0x002460E0u) [[unlikely]] return; }
L_002460E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002460E8u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0052(c, 251u, depth + 1u); else { c.pc = 0x0024BA20u; return; } if (c.pc != 0x002460E8u) [[unlikely]] return; }
L_002460E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_00246138; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.budget -= 1;
L_002460F4:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00246100u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0052(c, 243u, depth + 1u); else { c.pc = 0x0024B3F0u; return; } if (c.pc != 0x00246100u) [[unlikely]] return; }
L_00246100:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00246120; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00246118u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 9u, depth + 1u); else { c.pc = 0x00304280u; return; } if (c.pc != 0x00246118u) [[unlikely]] return; }
L_00246118:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00246134; } }
L_00246120:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_00246124:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024612Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_005D(c, 694u, depth + 1u); else { c.pc = 0x002763B0u; return; } if (c.pc != 0x0024612Cu) [[unlikely]] return; }
L_0024612C:
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00246134:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00246138:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00246150:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00246160:
    set32(c.r[5], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002461B4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 529u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024619C; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 531u));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 324u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 324u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002461DC; } }
L_0024619C:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 531u));
    set32(c.r[3], c.r[2].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 384u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 384u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002461DC; } }
L_002461B4:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 531u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] + 324u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 324u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002461DC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_002461DC:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_002461F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00246200:
    set32(c.r[5], ld32((c.r[4].w[0] + 336u)));
    set32(c.r[6], 0u + 16u);
    set32(c.r[7], 0u + 512u);
    set32(c.r[8], 0u + 256u);
    c.budget -= 6;
    { set32(c.r[9], 0u + 8192u);  [[clang::musttail]] return unit_0052(c, 256u, depth); }
L_00246220:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[16], c.r[17].w[0] + 320u);  if (t) { goto L_00246250; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00246250u); set32(c.r[5], ld32((c.r[17].w[0] + 24u)));  if (depth < kMaxDepth) unit_0077(c, 232u, depth + 1u); else { c.pc = 0x002DEAA0u; return; } if (c.pc != 0x00246250u) [[unlikely]] return; }
L_00246250:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 38u)));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00246260u); set32(c.r[5], c.r[2].w[0] + 114u);  if (depth < kMaxDepth) unit_0079(c, 263u, depth + 1u); else { c.pc = 0x002E6FD0u; return; } if (c.pc != 0x00246260u) [[unlikely]] return; }
L_00246260:
    set32(c.r[5], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024626Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 330u, depth + 1u); else { c.pc = 0x00197890u; return; } if (c.pc != 0x0024626Cu) [[unlikely]] return; }
L_0024626C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 38u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 38u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 38u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    st8((c.r[16].w[0] + 38u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002462A0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 10352u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00244000u < 16384u) { entry = entries_0051[(t - 0x00244000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002462C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00240000u);
    set32(c.r[2], c.r[2].w[0] + 26672u);
    set32(c.r[5], c.r[17].w[0] + 32u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 168u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 88u), 0u);
    set32(c.r[16], c.r[17].w[0] + 320u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00246300u); st32((c.r[4].w[0] + 80u), 0u);  if (depth < kMaxDepth) unit_0045(c, 199u, depth + 1u); else { c.pc = 0x00217650u; return; } if (c.pc != 0x00246300u) [[unlikely]] return; }
L_00246300:
    st32((c.r[17].w[0] + 36u), c.f[0]);
    st32((c.r[17].w[0] + 104u), 0u);
    st32((c.r[17].w[0] + 108u), 0u);
    set32(c.r[2], 0u + 2u);
    st32((c.r[17].w[0] + 96u), 0u);
    st8((c.r[17].w[0] + 518u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 48u), 0u);
    st16((c.r[16].w[0] + 36u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 34u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 32u), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40700000u);
    st32((c.r[16].w[0]), 0u);
    c.r[2].d[0] = c.r[2].d[0] | 2886ull;
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBFC90000u);
    c.r[2].d[0] = c.r[2].d[0] | 642ull;
    set32(c.r[5], 0u + 3u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00246350u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 16u, depth + 1u); else { c.pc = 0x003044E0u; return; } if (c.pc != 0x00246350u) [[unlikely]] return; }
L_00246350:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00246380; } }
    st32((c.r[16].w[0] + 40u), 0u);
    set32(c.r[2], 0u + 180u);
    st32((c.r[16].w[0] + 44u), 0u);
    st16((c.r[16].w[0] + 52u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    st8((c.r[16].w[0] + 56u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 59u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00246454; } }
L_00246380:
    st32((c.r[16].w[0] + 40u), 0u);
    st32((c.r[16].w[0] + 44u), 0u);
    c.f[0] = ld32((c.r[17].w[0] + 32u));
    st32((c.r[16].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    st32((c.r[16].w[0] + 24u), c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002463A0u); set32(c.r[4], ld32((c.r[17].w[0] + 84u)));  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x002463A0u) [[unlikely]] return; }
L_002463A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44FA0000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = ld32((c.r[16].w[0] + 16u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 16u), c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002463C0u); set32(c.r[4], ld32((c.r[17].w[0] + 84u)));  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x002463C0u) [[unlikely]] return; }
L_002463C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44FA0000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = ld32((c.r[16].w[0] + 24u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    set32(c.r[2], 0u + 1u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 24u), c.f[0]);
    st8((c.r[16].w[0] + 58u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 59u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 180u);  if (t) { goto L_00246428; } }
    set32(c.r[2], 0u + 600u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002463FCu); st16((c.r[16].w[0] + 52u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x002463FCu) [[unlikely]] return; }
L_002463FC:
    c.r[3].d[0] = c.r[2].d[0] & 63ull;
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 52u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 52u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00246454; } }
    set32(c.r[2], 0u + 180u);
    c.budget -= 1;
L_00246428:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00246430u); st16((c.r[16].w[0] + 52u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x00246430u) [[unlikely]] return; }
L_00246430:
    c.r[3].d[0] = c.r[2].d[0] & 3ull;
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 52u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st16((c.r[16].w[0] + 52u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 9;
L_00246454:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00246460u); st8((c.r[16].w[0] + 60u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0051(c, 143u, depth + 1u); else { c.pc = 0x00246480u; return; } if (c.pc != 0x00246460u) [[unlikely]] return; }
L_00246460:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00246480:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[3] = ld32((c.r[4].w[0] + 32u));
    c.f[2] = ld32((c.r[4].w[0] + 36u));
    c.f[1] = ld32((c.r[4].w[0] + 40u));
    c.f[0] = ld32((c.r[4].w[0] + 44u));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[2], 0u + 4u);
    st32((c.r[4].w[0] + 128u), c.f[3]);
    st32((c.r[4].w[0] + 132u), c.f[2]);
    st32((c.r[4].w[0] + 136u), c.f[1]);
    st32((c.r[4].w[0] + 140u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 17;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[16], c.r[17].w[0] + 320u);  if (t) { goto L_00246678; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 58u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024653C; } }
    c.f[0] = ld32((c.r[17].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43F40000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002465B4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44B50000u);
    c.f[2] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002465B4; } }
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002465B4; } }
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002465B4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 58u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002465B4; } }
L_0024653C:
    c.f[0] = ld32((c.r[17].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42B00000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 2u);  if (t) { goto L_002465A0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44E70000u);
    c.f[2] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0024659C; } }
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0024659C; } }
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002465B4; } }
L_0024659C:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_002465A0:
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002465ACu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 9u, depth + 1u); else { c.pc = 0x00304280u; return; } if (c.pc != 0x002465ACu) [[unlikely]] return; }
L_002465AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_0024677C; } }
L_002465B4:
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[4], 0u + 2u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_00246678; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 529u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00246678; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 59u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00246678; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00246678; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x43160000u);  if (t) { goto L_00246634; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);  if (t) { goto L_0024660C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 514u)));  if (t) { goto L_0024667C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.budget -= 1;
L_0024660C:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00246618u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0014(c, 151u, depth + 1u); else { c.pc = 0x00152F90u; return; } if (c.pc != 0x00246618u) [[unlikely]] return; }
L_00246618:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00246678; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 60u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 60u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00246678; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43160000u);
    c.budget -= 1;
L_00246634:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00246640u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0014(c, 156u, depth + 1u); else { c.pc = 0x001530A0u; return; } if (c.pc != 0x00246640u) [[unlikely]] return; }
L_00246640:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00246678; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 60u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 29598u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 60u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[17].w[0] + 532u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 531u));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 12;
L_00246678:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 514u)));
    c.budget -= 1;
L_0024667C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);  if (t) { goto L_002466B0; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00246694u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 9u, depth + 1u); else { c.pc = 0x00304280u; return; } if (c.pc != 0x00246694u) [[unlikely]] return; }
L_00246694:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024669Cu); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0047(c, 216u, depth + 1u); else { c.pc = 0x0021EE00u; return; } if (c.pc != 0x0024669Cu) [[unlikely]] return; }
L_0024669C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002466A4u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0052(c, 251u, depth + 1u); else { c.pc = 0x0024BA20u; return; } if (c.pc != 0x002466A4u) [[unlikely]] return; }
L_002466A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));  if (t) { goto L_002466FC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.budget -= 1;
L_002466B0:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002466BCu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0052(c, 243u, depth + 1u); else { c.pc = 0x0024B3F0u; return; } if (c.pc != 0x002466BCu) [[unlikely]] return; }
L_002466BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002466DC; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002466D4u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 9u, depth + 1u); else { c.pc = 0x00304280u; return; } if (c.pc != 0x002466D4u) [[unlikely]] return; }
L_002466D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00246778; } }
L_002466DC:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002466F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002466F8u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_003D(c, 21u, depth + 1u); else { c.pc = 0x001F45D0u; return; } if (c.pc != 0x002466F8u) [[unlikely]] return; }
L_002466F8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    c.budget -= 1;
L_002466FC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_00246730; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_0024671C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00246738; } }
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_0024671C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00246724u);  if (depth < kMaxDepth) unit_0051(c, 176u, depth + 1u); else { c.pc = 0x002468D0u; return; } if (c.pc != 0x00246724u) [[unlikely]] return; }
L_00246724:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00246738; } }
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_00246730:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00246738u);  if (depth < kMaxDepth) unit_0051(c, 195u, depth + 1u); else { c.pc = 0x00247040u; return; } if (c.pc != 0x00246738u) [[unlikely]] return; }
L_00246738:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00246740u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x00246740u) [[unlikely]] return; }
L_00246740:
    c.f[13] = ld32((c.r[17].w[0] + 36u));
    c.f[14] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00246750u); c.f[12] = ld32((c.r[17].w[0] + 32u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00246750u) [[unlikely]] return; }
L_00246750:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00246758u); set32(c.r[4], ld32((c.r[17].w[0] + 84u)));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00246758u) [[unlikely]] return; }
L_00246758:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00246760u); set32(c.r[4], ld32((c.r[17].w[0] + 88u)));  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00246760u) [[unlikely]] return; }
L_00246760:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00246768u); set32(c.r[4], ld32((c.r[17].w[0] + 80u)));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00246768u) [[unlikely]] return; }
L_00246768:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00246770u); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00246770u) [[unlikely]] return; }
L_00246770:
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00246778:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0024677C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00246790:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_002467A0:
    set32(c.r[5], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002467F4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 529u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002467DC; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 531u));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 324u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 324u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0024681C; } }
L_002467DC:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 531u));
    set32(c.r[3], c.r[2].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 384u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 384u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0024681C; } }
L_002467F4:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 531u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] + 324u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 324u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024681C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0024681C:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_00246830:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024684Cu); set32(c.r[16], c.r[17].w[0] + 320u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x0024684Cu) [[unlikely]] return; }
L_0024684C:
    c.f[13] = ld32((c.r[17].w[0] + 36u));
    c.f[14] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024685Cu); c.f[12] = ld32((c.r[17].w[0] + 32u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x0024685Cu) [[unlikely]] return; }
L_0024685C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00246864u); set32(c.r[4], ld32((c.r[17].w[0] + 84u)));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00246864u) [[unlikely]] return; }
L_00246864:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024686Cu); set32(c.r[4], ld32((c.r[17].w[0] + 88u)));  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x0024686Cu) [[unlikely]] return; }
L_0024686C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00246874u); set32(c.r[4], ld32((c.r[17].w[0] + 80u)));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00246874u) [[unlikely]] return; }
L_00246874:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024687Cu); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0024687Cu) [[unlikely]] return; }
L_0024687C:
    set32(c.r[2], ld32((c.r[17].w[0] + 184u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00246888u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_000F(c, 36u, depth + 1u); else { c.pc = 0x0013CD20u; return; } if (c.pc != 0x00246888u) [[unlikely]] return; }
L_00246888:
    c.f[13] = ld32((c.r[16].w[0] + 4u));
    c.f[14] = ld32((c.r[16].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00246898u); c.f[12] = ld32((c.r[16].w[0]));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00246898u) [[unlikely]] return; }
L_00246898:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002468A0u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 34u)));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002468A0u) [[unlikely]] return; }
L_002468A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002468A8u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 36u)));  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002468A8u) [[unlikely]] return; }
L_002468A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002468B0u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 32u)));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002468B0u) [[unlikely]] return; }
L_002468B0:
    set32(c.r[2], ld32((c.r[17].w[0] + 184u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002468BCu); set32(c.r[4], ld32((c.r[2].w[0] + 4u)));  if (depth < kMaxDepth) unit_000F(c, 36u, depth + 1u); else { c.pc = 0x0013CD20u; return; } if (c.pc != 0x002468BCu) [[unlikely]] return; }
L_002468BC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002468D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 6u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[16], c.r[17].w[0] + 320u);  if (t) { goto L_00246C18; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00246BC4; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_002469E8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00246998; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], c.r[4].w[0] + 1u);  if (t) { goto L_00246934; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 38u)));  if (t) { goto L_00246C88; } }
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_00246934:
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[5], c.r[16].w[0] + 16u);  if (t) { goto L_00246988; } }
    set32(c.r[4], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[3], c.r[2].w[0] + 10320u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.f[3] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[16].w[0] + 16u), c.f[3]);
    st32((c.r[16].w[0] + 20u), c.f[2]);
    st32((c.r[16].w[0] + 24u), c.f[1]);
    st32((c.r[16].w[0] + 28u), c.f[0]);
    set32(c.r[5], c.r[16].w[0] + 16u);
    c.budget -= 17;
L_00246988:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00246990u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0051(c, 212u, depth + 1u); else { c.pc = 0x002473F0u; return; } if (c.pc != 0x00246990u) [[unlikely]] return; }
L_00246990:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00246C84; } }
L_00246998:
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[1].d[0] = c.r[3].sd[0] < 129ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002469C4; } }
    c.r[2].d[0] = 0ull | 65408ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00246C84; } }
L_002469C4:
    st32((c.r[17].w[0] + 96u), 0u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 6u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3B830000u);
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[17].w[0] + 104u), 0u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 108u), c.r[2].w[0]);  if (t) { goto L_00246C84; } }
L_002469E8:
    c.f[1] = ld32((c.r[17].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E610000u);
    c.r[2].d[0] = c.r[2].d[0] | 18350ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00246A14; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), c.r[2].w[0]);  if (t) { goto L_00246A20; } }
L_00246A14:
    c.f[0] = ld32((c.r[17].w[0] + 108u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.budget -= 3;
L_00246A20:
    c.f[3] = ld32((c.r[16].w[0] + 16u));
    c.f[2] = ld32((c.r[17].w[0] + 32u));
    c.f[1] = ld32((c.r[16].w[0] + 24u));
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    c.f[20] = fp::sub(c.f[3], c.f[2]);
    c.f[21] = fp::sub(c.f[1], c.f[0]);
    c.f[12] = c.f[20];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00246A44u); c.f[13] = c.f[21];  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x00246A44u) [[unlikely]] return; }
L_00246A44:
    c.r[3].d[0] = 0ull | 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    c.r[2].d[0] = 0ull | 32768ull;
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 16u);  if (t) { goto L_00246A80; } }
    set32(c.r[2], 0u - 16u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 96u), c.r[2].w[0]);  if (t) { goto L_00246A84; } }
    set32(c.r[2], 0u + 16u);
    c.budget -= 1;
L_00246A80:
    st32((c.r[17].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 1;
L_00246A84:
    c.facc = fp::mul(c.f[20], c.f[20]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00246A90u); c.f[12] = fp::add(c.facc, fp::mul(c.f[21], c.f[21]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x00246A90u) [[unlikely]] return; }
L_00246A90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00246B58; } }
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 56u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 56u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; set32(c.r[4], 0u + 2u);  if (t) { goto L_00246AE8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 56u)));
    set32(c.r[2], 0u + 9u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00246B54; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 56u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00246B54; } }
    set32(c.r[4], 0u + 2u);
    c.budget -= 1;
L_00246AE8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_00246B0C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 56u)));
    set32(c.r[2], 0u + 15u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00246B54; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 56u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00246B54; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_00246B0C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 5u);  if (t) { goto L_00246B30; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 56u)));
    set32(c.r[2], 0u + 7u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00246B54; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 56u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_00246B54; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 1;
L_00246B30:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00246B54; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 56u)));
    set32(c.r[2], 0u + 13u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00246B54; } }
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00246B54u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 9u, depth + 1u); else { c.pc = 0x00304280u; return; } if (c.pc != 0x00246B54u) [[unlikely]] return; }
L_00246B54:
    st32((c.r[17].w[0] + 104u), 0u);
    c.budget -= 1;
L_00246B58:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 530u));
    set32(c.r[2], 0u - 97u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00246C84; } }
    set32(c.r[2], 0u + 3u);
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00246B7Cu); st32((c.r[17].w[0] + 104u), 0u);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x00246B7Cu) [[unlikely]] return; }
L_00246B7C:
    c.r[3].d[0] = c.r[2].d[0] & 3ull;
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    st8((c.r[16].w[0] + 57u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 57u)));
    set32(c.r[2], c.r[2].w[0] + 30u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00246BA0u); st8((c.r[16].w[0] + 57u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x00246BA0u) [[unlikely]] return; }
L_00246BA0:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 256u);  if (t) { goto L_00246BBC; } }
    set32(c.r[2], 0u - 256u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 96u), c.r[2].w[0]);  if (t) { goto L_00246C84; } }
    set32(c.r[2], 0u + 256u);
    c.budget -= 1;
L_00246BBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 96u), c.r[2].w[0]);  if (t) { goto L_00246C84; } }
L_00246BC4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 57u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[2].w[0] - 1u);  goto L_00246C10; }
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00246BDCu); st32((c.r[17].w[0] + 96u), 0u);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x00246BDCu) [[unlikely]] return; }
L_00246BDC:
    c.r[3].d[0] = c.r[2].d[0] & 3ull;
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    st8((c.r[16].w[0] + 57u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 57u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3B830000u);
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    set32(c.r[3], c.r[3].w[0] + 30u);
    st8((c.r[16].w[0] + 57u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 108u), c.r[2].w[0]);  if (t) { goto L_00246C84; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 1;
L_00246C10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 57u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00246C84; } }
L_00246C18:
    c.f[1] = ld32((c.r[17].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E610000u);
    c.r[2].d[0] = c.r[2].d[0] | 18350ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00246C44; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), c.r[2].w[0]);  if (t) { goto L_00246C50; } }
L_00246C44:
    c.f[0] = ld32((c.r[17].w[0] + 108u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.budget -= 3;
L_00246C50:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 57u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[2].w[0] - 1u);  goto L_00246C80; }
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], c.r[16].w[0] + 16u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00246C74u); st32((c.r[17].w[0] + 104u), 0u);  if (depth < kMaxDepth) unit_0051(c, 212u, depth + 1u); else { c.pc = 0x002473F0u; return; } if (c.pc != 0x00246C74u) [[unlikely]] return; }
L_00246C74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00246C84; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 1;
L_00246C80:
    st8((c.r[16].w[0] + 57u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_00246C84:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 38u)));
    c.budget -= 1;
L_00246C88:
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00246F00; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00246E78; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00246DE0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00246CBC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[17].w[0] + 84u)));  if (t) { goto L_00246F38; } }
L_00246CBC:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 52u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[2].w[0] - 1u);  goto L_00246DD8; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00246CE4; } }
    set32(c.r[2], 0u + 180u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 52u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00246D04; } }
L_00246CE4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 180u);  if (t) { goto L_00246D00; } }
    set32(c.r[2], 0u + 600u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 52u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00246D04; } }
    set32(c.r[2], 0u + 180u);
    c.budget -= 1;
L_00246D00:
    st16((c.r[16].w[0] + 52u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_00246D04:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42BE0000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[6], 0u + 7680u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00246D1Cu); c.r[5].d[0] = 0ull | 40960ull;  if (depth < kMaxDepth) unit_0053(c, 22u, depth + 1u); else { c.pc = 0x0024C590u; return; } if (c.pc != 0x00246D1Cu) [[unlikely]] return; }
L_00246D1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00246F34; } }
    set32(c.r[3], 0u + 1u);
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    st8((c.r[16].w[0] + 38u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[3] = ld32((c.r[2].w[0] + 32u));
    c.f[2] = ld32((c.r[17].w[0] + 32u));
    c.f[1] = ld32((c.r[2].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    c.f[12] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00246D4Cu); c.f[13] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x00246D4Cu) [[unlikely]] return; }
L_00246D4C:
    c.r[3].d[0] = 0ull | 65535ull;
    c.r[5].d[0] = c.r[2].d[0] & c.r[3].d[0];
    set32(c.r[4], ld32((c.r[17].w[0] + 84u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 34u)));
    set32(c.r[3], c.r[5].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], c.r[5].w[0] - c.r[2].w[0]);
    c.r[2].d[0] = c.r[3].d[0] & 65535ull;
    st32((c.r[16].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 34u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[1].d[0] = c.r[3].sd[0] < 129ll ? 1ull : 0ull;
    c.budget -= 17;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00246DA0; } }
    c.r[2].d[0] = 0ull | 65408ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = c.r[4].d[0] & 65535ull;  if (t) { goto L_00246DAC; } }
L_00246DA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 48u), 0u);  if (t) { goto L_00246F34; } }
    c.r[3].d[0] = c.r[4].d[0] & 65535ull;
    c.budget -= 1;
L_00246DAC:
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 256u);  if (t) { goto L_00246DCC; } }
    set32(c.r[2], 0u - 256u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 48u), c.r[2].w[0]);  if (t) { goto L_00246F34; } }
    set32(c.r[2], 0u + 256u);
    c.budget -= 1;
L_00246DCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 48u), c.r[2].w[0]);  if (t) { goto L_00246F34; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 1;
L_00246DD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 52u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00246F34; } }
L_00246DE0:
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 34u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[1].d[0] = c.r[3].sd[0] < 129ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00246E0C; } }
    c.r[2].d[0] = 0ull | 65408ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00246F34; } }
L_00246E0C:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[5], 0u + 58u);  if (t) { goto L_00246E30; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00246E2Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 232u, depth + 1u); else { c.pc = 0x002DEAA0u; return; } if (c.pc != 0x00246E2Cu) [[unlikely]] return; }
L_00246E2C:
    set32(c.r[5], 0u + 58u);
    c.budget -= 1;
L_00246E30:
    set32(c.r[7], c.r[16].w[0] + 32u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00246E40u); mmi::paddub(c.r[6], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_007A(c, 13u, depth + 1u); else { c.pc = 0x002E81F0u; return; } if (c.pc != 0x00246E40u) [[unlikely]] return; }
L_00246E40:
    set32(c.r[5], 0u + 59u);
    set32(c.r[7], c.r[16].w[0] + 32u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00246E54u); mmi::paddub(c.r[6], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_007A(c, 13u, depth + 1u); else { c.pc = 0x002E81F0u; return; } if (c.pc != 0x00246E54u) [[unlikely]] return; }
L_00246E54:
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00246E60u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 330u, depth + 1u); else { c.pc = 0x00197890u; return; } if (c.pc != 0x00246E60u) [[unlikely]] return; }
L_00246E60:
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 38u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 30u);
    st32((c.r[16].w[0] + 48u), 0u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 54u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00246F34; } }
L_00246E78:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 54u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[2].w[0] - 1u);  goto L_00246EF8; }
    st32((c.r[16].w[0] + 44u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 34u)));
    c.r[5].d[0] = 0ull | 65535ull;
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.r[3].d[0] = c.r[2].d[0] & c.r[5].d[0];
    c.r[1].d[0] = c.r[3].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00246EB8; } }
    c.r[2].d[0] = 0ull | 65472ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00246EC4; } }
L_00246EB8:
    st8((c.r[16].w[0] + 38u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 48u), 0u);  if (t) { goto L_00246F34; } }
L_00246EC4:
    st8((c.r[16].w[0] + 38u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 34u));
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 128u);  if (t) { goto L_00246EEC; } }
    set32(c.r[2], 0u + 128u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 48u), c.r[2].w[0]);  if (t) { goto L_00246F34; } }
    set32(c.r[2], 0u - 128u);
    c.budget -= 1;
L_00246EEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 48u), c.r[2].w[0]);  if (t) { goto L_00246F34; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 1;
L_00246EF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 54u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00246F34; } }
L_00246F00:
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 34u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[1].d[0] = c.r[3].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00246F2C; } }
    c.r[2].d[0] = 0ull | 65472ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00246F34; } }
L_00246F2C:
    st8((c.r[16].w[0] + 38u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 48u), 0u);
    c.budget -= 2;
L_00246F34:
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 1;
L_00246F38:
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[17].w[0] + 84u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 84u));
    st32((c.r[17].w[0] + 84u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 48u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 34u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st16((c.r[16].w[0] + 34u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 640u)));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_00246F80; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 515u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00246F88; } }
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_00246F80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00246F88u);  if (depth < kMaxDepth) unit_0052(c, 220u, depth + 1u); else { c.pc = 0x0024B120u; return; } if (c.pc != 0x00246F88u) [[unlikely]] return; }
L_00246F88:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 14530u)));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00246F9Cu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 285u, depth + 1u); else { c.pc = 0x001970F0u; return; } if (c.pc != 0x00246F9Cu) [[unlikely]] return; }
L_00246F9C:
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00246FA8u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0045(c, 199u, depth + 1u); else { c.pc = 0x00217650u; return; } if (c.pc != 0x00246FA8u) [[unlikely]] return; }
L_00246FA8:
    c.f[1] = ld32((c.r[17].w[0] + 132u));
    c.f[20] = c.f[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[0] = fp::sub(c.f[20], c.f[1]);  if (t) { goto L_00246FF4; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBCA30000u);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    st32((c.r[17].w[0] + 52u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBD750000u);
    c.r[3].d[0] = c.r[3].d[0] | 49807ull;
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 68u), c.r[3].w[0]);  if (t) { goto L_00247020; } }
    c.f[0] = fp::sub(c.f[20], c.f[1]);
    c.budget -= 1;
L_00246FF4:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_0024700C; } }
    st32((c.r[17].w[0] + 36u), c.f[20]);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 2;
L_0024700C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247014u);  if (depth < kMaxDepth) unit_0051(c, 200u, depth + 1u); else { c.pc = 0x002470F0u; return; } if (c.pc != 0x00247014u) [[unlikely]] return; }
L_00247014:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00247020; } }
    st32((c.r[17].w[0] + 36u), c.f[20]);
    c.budget -= 1;
L_00247020:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00247040:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[1] = ld32((c.r[4].w[0] + 52u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC0A00000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_00247074; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_00247080; } }
L_00247074:
    c.f[0] = ld32((c.r[16].w[0] + 68u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 52u), c.f[0]);
    c.budget -= 3;
L_00247080:
    c.f[1] = ld32((c.r[16].w[0] + 52u));
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    set32(c.r[5], c.r[16].w[0] + 32u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024709Cu); st32((c.r[16].w[0] + 36u), c.f[0]);  if (depth < kMaxDepth) unit_0045(c, 199u, depth + 1u); else { c.pc = 0x00217650u; return; } if (c.pc != 0x0024709Cu) [[unlikely]] return; }
L_0024709C:
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002470D8; } }
    st32((c.r[16].w[0] + 36u), c.f[0]);
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002470C8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 9u, depth + 1u); else { c.pc = 0x00304280u; return; } if (c.pc != 0x002470C8u) [[unlikely]] return; }
L_002470C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002470D0u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0047(c, 216u, depth + 1u); else { c.pc = 0x0021EE00u; return; } if (c.pc != 0x002470D0u) [[unlikely]] return; }
L_002470D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002470D8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0052(c, 251u, depth + 1u); else { c.pc = 0x0024BA20u; return; } if (c.pc != 0x002470D8u) [[unlikely]] return; }
L_002470D8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002470F0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 84u)));
    c.r[5].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = 0ull | 65535ull;
    mmi::paddub(c.r[20], c.r[4], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.r[16].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024712Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x0024712Cu) [[unlikely]] return; }
L_0024712C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = ld32((c.r[20].w[0] + 32u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024714Cu); st32((c.r[29].w[0] + 128u), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x0024714Cu) [[unlikely]] return; }
L_0024714C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = ld32((c.r[20].w[0] + 40u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    set32(c.r[17], c.r[29].w[0] + 132u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 136u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 36u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247178u); st32((c.r[17].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0045(c, 192u, depth + 1u); else { c.pc = 0x00217510u; return; } if (c.pc != 0x00247178u) [[unlikely]] return; }
L_00247178:
    st32((c.r[17].w[0]), c.f[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 84u)));
    set32(c.r[2], c.r[2].w[0] + 5637u);
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247190u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x00247190u) [[unlikely]] return; }
L_00247190:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40E00000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = ld32((c.r[20].w[0] + 32u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002471B0u); st32((c.r[29].w[0] + 96u), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x002471B0u) [[unlikely]] return; }
L_002471B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40E00000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = ld32((c.r[20].w[0] + 40u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    set32(c.r[18], c.r[29].w[0] + 100u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 36u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002471DCu); st32((c.r[18].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0045(c, 192u, depth + 1u); else { c.pc = 0x00217510u; return; } if (c.pc != 0x002471DCu) [[unlikely]] return; }
L_002471DC:
    st32((c.r[18].w[0]), c.f[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 84u)));
    set32(c.r[2], c.r[2].w[0] - 5637u);
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002471F4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x002471F4u) [[unlikely]] return; }
L_002471F4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40E00000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = ld32((c.r[20].w[0] + 32u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247214u); st32((c.r[29].w[0] + 112u), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x00247214u) [[unlikely]] return; }
L_00247214:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40E00000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = ld32((c.r[20].w[0] + 40u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    set32(c.r[19], c.r[29].w[0] + 116u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 120u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 36u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247240u); st32((c.r[19].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0045(c, 192u, depth + 1u); else { c.pc = 0x00217510u; return; } if (c.pc != 0x00247240u) [[unlikely]] return; }
L_00247240:
    st32((c.r[19].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[20].w[0] + 36u));
    c.f[0] = ld32((c.r[17].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_002472A4; } }
    c.f[0] = ld32((c.r[18].w[0]));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002472A0; } }
    c.f[0] = ld32((c.r[19].w[0]));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002472A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_002472A4; } }
L_002472A0:
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 1;
L_002472A4:
    c.f[1] = ld32((c.r[18].w[0]));
    c.f[0] = ld32((c.r[19].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40E60000u);
    c.r[2].d[0] = c.r[2].d[0] | 26214ull;
    c.f[13] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002472C0u); c.f[12] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x002472C0u) [[unlikely]] return; }
L_002472C0:
    st32((c.r[20].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 88u)));
    c.r[3].d[0] = 0ull | 65535ull;
    c.r[4].d[0] = 0ull | 61440ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st32((c.r[20].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 88u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[3].sd[0] < 4097ll ? 1ull : 0ull;  if (t) { goto L_00247304; } }
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00247300; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 88u), c.r[4].w[0]);  if (t) { goto L_00247324; } }
L_00247300:
    c.r[1].d[0] = c.r[3].sd[0] < 4097ll ? 1ull : 0ull;
    c.budget -= 1;
L_00247304:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00247324; } }
    c.r[1].d[0] = 0ull | 32768ull;
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00247324; } }
    set32(c.r[2], 0u + 4096u);
    st32((c.r[20].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 2;
L_00247324:
    c.f[0] = ld32((c.r[19].w[0]));
    c.f[2] = ld32((c.r[18].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.f[13] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[2], c.f[0]);
    st32((c.r[18].w[0]), c.f[0]);
    c.f[0] = c.f[0];
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[18].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[0] = ld32((c.r[18].w[0]));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247360u); c.f[12] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x00247360u) [[unlikely]] return; }
L_00247360:
    st32((c.r[20].w[0] + 80u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[20].w[0] + 80u));
    c.r[1].d[0] = 0ull | 61440ull;
    st32((c.r[20].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 80u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[3].sd[0] < 4097ll ? 1ull : 0ull;  if (t) { goto L_002473A0; } }
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024739C; } }
    c.r[2].d[0] = 0ull | 61440ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 80u), c.r[2].w[0]);  if (t) { goto L_002473C0; } }
L_0024739C:
    c.r[1].d[0] = c.r[3].sd[0] < 4097ll ? 1ull : 0ull;
    c.budget -= 1;
L_002473A0:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull; mmi::paddub(c.r[2], c.r[16], c.r[0]);  if (t) { goto L_002473C4; } }
    c.r[1].d[0] = 0ull | 32768ull;
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002473C0; } }
    set32(c.r[2], 0u + 4096u);
    st32((c.r[20].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 2;
L_002473C0:
    mmi::paddub(c.r[2], c.r[16], c.r[0]);
    c.budget -= 1;
L_002473C4:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_002473F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[3] = ld32((c.r[5].w[0]));
    c.f[2] = ld32((c.r[4].w[0] + 32u));
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = ld32((c.r[4].w[0] + 40u));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[17], c.r[16].w[0] + 320u);
    c.f[12] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247424u); c.f[13] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x00247424u) [[unlikely]] return; }
L_00247424:
    c.r[3].d[0] = 0ull | 65535ull;
    c.r[3].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st32((c.r[17].w[0] + 40u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.r[4].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[4].sd[0] < 129ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0024745C; } }
    c.r[3].d[0] = 0ull | 65408ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = 0ull | 32768ull;  if (t) { goto L_00247468; } }
L_0024745C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 96u), 0u);  if (t) { goto L_00247488; } }
    c.r[3].d[0] = 0ull | 32768ull;
    c.budget -= 1;
L_00247468:
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 256u);  if (t) { goto L_00247484; } }
    set32(c.r[3], 0u - 256u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_00247488; } }
    set32(c.r[3], 0u + 256u);
    c.budget -= 1;
L_00247484:
    st32((c.r[16].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 1;
L_00247488:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002474A0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 10384u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00244000u < 16384u) { entry = entries_0051[(t - 0x00244000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002474C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 104u), 0u);
    st32((c.r[4].w[0] + 52u), 0u);
    st32((c.r[4].w[0] + 92u), 0u);
    st32((c.r[4].w[0] + 96u), 0u);
    st32((c.r[4].w[0] + 100u), 0u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00300000u);
    set32(c.r[3], c.r[2].w[0] + 24976u);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[2], 0u + 64u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[4].w[0] + 168u), c.r[3].w[0]);
    st8((c.r[4].w[0] + 530u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3CCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    st32((c.r[4].w[0] + 108u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x428C0000u);
    st32((c.r[4].w[0] + 344u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42AA0000u);
    st32((c.r[4].w[0] + 348u), c.r[2].w[0]);
    st8((c.r[4].w[0] + 354u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 355u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], 0u + 4u);
    set32(c.r[16], c.r[17].w[0] + 320u);
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024753Cu); st8((c.r[4].w[0] + 358u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0081(c, 16u, depth + 1u); else { c.pc = 0x003044E0u; return; } if (c.pc != 0x0024753Cu) [[unlikely]] return; }
L_0024753C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0024755C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_002475B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002475B0; } }
L_0024755C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 10368u);
    set32(c.r[3], c.r[28].w[0] - 29232u);
    c.r[4].d[0] = c.r[4].d[0] & 15ull;
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[17].w[0] + 160u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 4));
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 16u));
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 21;
L_002475B0:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_002475B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002475BCu);  if (depth < kMaxDepth) unit_0051(c, 218u, depth + 1u); else { c.pc = 0x002475D0u; return; } if (c.pc != 0x002475BCu) [[unlikely]] return; }
L_002475BC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002475D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[3] = ld32((c.r[4].w[0] + 32u));
    c.f[2] = ld32((c.r[4].w[0] + 36u));
    c.f[1] = ld32((c.r[4].w[0] + 40u));
    c.f[0] = ld32((c.r[4].w[0] + 44u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FEC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.f[4] = c.r[2].w[0];
    set32(c.r[16], c.r[17].w[0] + 320u);
    st32((c.r[4].w[0] + 128u), c.f[3]);
    st32((c.r[4].w[0] + 132u), c.f[2]);
    st32((c.r[4].w[0] + 136u), c.f[1]);
    st32((c.r[4].w[0] + 140u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 108u));
    c.f[0] = ld32((c.r[4].w[0] + 104u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[4]));
    c.budget -= 24;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[4].w[0] + 104u), c.f[0]);  if (t) { goto L_0024763C; } }
    st32((c.r[17].w[0] + 104u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 108u), 0u);  if (t) { goto L_0024765C; } }
L_0024763C:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0024765C; } }
    st32((c.r[17].w[0] + 104u), 0u);
    st32((c.r[17].w[0] + 108u), 0u);
    c.budget -= 2;
L_0024765C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_00247694; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_00247680; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 34u)));  if (t) { goto L_002476A0; } }
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_00247680:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247688u);  if (depth < kMaxDepth) unit_0051(c, 234u, depth + 1u); else { c.pc = 0x00247990u; return; } if (c.pc != 0x00247688u) [[unlikely]] return; }
L_00247688:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024769C; } }
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_00247694:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024769Cu);  if (depth < kMaxDepth) unit_0051(c, 235u, depth + 1u); else { c.pc = 0x002479A0u; return; } if (c.pc != 0x0024769Cu) [[unlikely]] return; }
L_0024769C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 34u)));
    c.budget -= 1;
L_002476A0:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00247758; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00247704; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x43110000u);  if (t) { goto L_002476CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));  if (t) { goto L_00247778; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43110000u);
    c.budget -= 1;
L_002476CC:
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 6144u);
    set32(c.r[6], 0u + 4608u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002476E0u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 22u, depth + 1u); else { c.pc = 0x0024C590u; return; } if (c.pc != 0x002476E0u) [[unlikely]] return; }
L_002476E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00247774; } }
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 34u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 36u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 37u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00247774; } }
L_00247704:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[2].w[0] - 1u);  goto L_00247750; }
    set32(c.r[2], 0u + 3u);
    st8((c.r[16].w[0] + 36u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247720u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0051(c, 236u, depth + 1u); else { c.pc = 0x002479C0u; return; } if (c.pc != 0x00247720u) [[unlikely]] return; }
L_00247720:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 37u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[16].w[0] + 37u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 37u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00247774; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 34u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 60u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 36u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00247774; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 1;
L_00247750:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 36u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00247774; } }
L_00247758:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[2].w[0] - 1u);  goto L_00247770; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 34u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00247774; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 1;
L_00247770:
    st8((c.r[16].w[0] + 36u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_00247774:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 1;
L_00247778:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 641u)));
    c.r[2].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00247790; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 280u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_00247790:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_002478CC; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 92u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[2].w[0];
    c.r[5].d[0] = 0ull | 65535ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBD230000u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.f[16] = c.r[2].w[0];
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D230000u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    c.f[14] = c.r[2].w[0];
    set32(c.r[3], ld32((c.r[17].w[0] + 80u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[17] = c.r[2].w[0];
    set32(c.r[6], 0u - 204u);
    set32(c.r[7], 0u + 4096u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[5].d[0];
    st32((c.r[17].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[8], 0u + 204u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[17].w[0] + 84u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 84u));
    st32((c.r[17].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[17].w[0] + 88u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 88u));
    st32((c.r[17].w[0] + 88u), c.r[2].w[0]);
    c.f[12] = ld32((c.r[16].w[0] + 24u));
    c.f[13] = ld32((c.r[16].w[0] + 28u));
    c.budget -= 38;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247830u); c.r[5].d[0] = 0ull | 61440ull;  if (depth < kMaxDepth) unit_0052(c, 257u, depth + 1u); else { c.pc = 0x0024BDC0u; return; } if (c.pc != 0x00247830u) [[unlikely]] return; }
L_00247830:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247838u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0052(c, 232u, depth + 1u); else { c.pc = 0x0024B250u; return; } if (c.pc != 0x00247838u) [[unlikely]] return; }
L_00247838:
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247844u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0045(c, 199u, depth + 1u); else { c.pc = 0x00217650u; return; } if (c.pc != 0x00247844u) [[unlikely]] return; }
L_00247844:
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 2u);  if (t) { goto L_0024787C; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 530u));
    set32(c.r[2], 0u - 97u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00247878; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 514u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);  if (t) { goto L_0024789C; } }
L_00247878:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_0024787C:
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247888u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 9u, depth + 1u); else { c.pc = 0x00304280u; return; } if (c.pc != 0x00247888u) [[unlikely]] return; }
L_00247888:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247890u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0047(c, 216u, depth + 1u); else { c.pc = 0x0021EE00u; return; } if (c.pc != 0x00247890u) [[unlikely]] return; }
L_00247890:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247898u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0052(c, 251u, depth + 1u); else { c.pc = 0x0024BA20u; return; } if (c.pc != 0x00247898u) [[unlikely]] return; }
L_00247898:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.budget -= 1;
L_0024789C:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002478A8u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0052(c, 243u, depth + 1u); else { c.pc = 0x0024B3F0u; return; } if (c.pc != 0x002478A8u) [[unlikely]] return; }
L_002478A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002478C8; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002478C0u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 9u, depth + 1u); else { c.pc = 0x00304280u; return; } if (c.pc != 0x002478C0u) [[unlikely]] return; }
L_002478C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_002478E0; } }
L_002478C8:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_002478CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002478D4u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_005D(c, 694u, depth + 1u); else { c.pc = 0x002763B0u; return; } if (c.pc != 0x002478D4u) [[unlikely]] return; }
L_002478D4:
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 3;
L_002478E0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002478F0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00247900:
    set32(c.r[5], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00247954; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 529u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024793C; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 531u));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 324u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 324u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0024797C; } }
L_0024793C:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 531u));
    set32(c.r[3], c.r[2].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 384u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 384u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0024797C; } }
L_00247954:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 531u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] + 324u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 324u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024797C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0024797C:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_00247990:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002479A0:
    set32(c.r[5], ld32((c.r[4].w[0] + 336u)));
    set32(c.r[6], 0u + 16u);
    set32(c.r[7], 0u + 512u);
    set32(c.r[8], 0u + 256u);
    c.budget -= 6;
    { set32(c.r[9], 0u + 8192u);  [[clang::musttail]] return unit_0052(c, 256u, depth); }
L_002479C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[16], c.r[17].w[0] + 320u);  if (t) { goto L_002479F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002479F0u); set32(c.r[5], ld32((c.r[17].w[0] + 24u)));  if (depth < kMaxDepth) unit_0077(c, 232u, depth + 1u); else { c.pc = 0x002DEAA0u; return; } if (c.pc != 0x002479F0u) [[unlikely]] return; }
L_002479F0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 38u)));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247A00u); set32(c.r[5], c.r[2].w[0] + 116u);  if (depth < kMaxDepth) unit_0079(c, 263u, depth + 1u); else { c.pc = 0x002E6FD0u; return; } if (c.pc != 0x00247A00u) [[unlikely]] return; }
L_00247A00:
    set32(c.r[5], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247A0Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 330u, depth + 1u); else { c.pc = 0x00197890u; return; } if (c.pc != 0x00247A0Cu) [[unlikely]] return; }
L_00247A0C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 38u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 38u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 38u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    st8((c.r[16].w[0] + 38u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00247A40:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 10416u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00244000u < 16384u) { entry = entries_0051[(t - 0x00244000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00247A60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 104u), 0u);
    st32((c.r[4].w[0] + 52u), 0u);
    st32((c.r[4].w[0] + 92u), 0u);
    st32((c.r[4].w[0] + 96u), 0u);
    st32((c.r[4].w[0] + 100u), 0u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00300000u);
    set32(c.r[3], c.r[2].w[0] + 24976u);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[2], 0u + 64u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[4].w[0] + 168u), c.r[3].w[0]);
    st8((c.r[4].w[0] + 530u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3CCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    st32((c.r[4].w[0] + 108u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 369u)));
    c.budget -= 25;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[17].w[0] + 320u);  if (t) { goto L_00247AD0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 40u), c.r[2].w[0]);  if (t) { goto L_00247AD8; } }
L_00247AD0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    st32((c.r[16].w[0] + 40u), c.r[2].w[0]);
    c.budget -= 2;
L_00247AD8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42700000u);
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    st8((c.r[16].w[0] + 34u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 35u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], 0u + 5u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247B00u); st8((c.r[16].w[0] + 38u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0081(c, 16u, depth + 1u); else { c.pc = 0x003044E0u; return; } if (c.pc != 0x00247B00u) [[unlikely]] return; }
L_00247B00:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00247B20; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_00247B78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00247B74; } }
L_00247B20:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 10400u);
    set32(c.r[3], c.r[28].w[0] - 29224u);
    c.r[4].d[0] = c.r[4].d[0] & 15ull;
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[17].w[0] + 160u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 4));
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 16u));
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 21;
L_00247B74:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_00247B78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247B80u);  if (depth < kMaxDepth) unit_0051(c, 244u, depth + 1u); else { c.pc = 0x00247BA0u; return; } if (c.pc != 0x00247B80u) [[unlikely]] return; }
L_00247B80:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00247BA0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[3] = ld32((c.r[4].w[0] + 32u));
    c.f[2] = ld32((c.r[4].w[0] + 36u));
    c.f[1] = ld32((c.r[4].w[0] + 40u));
    c.f[0] = ld32((c.r[4].w[0] + 44u));
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    st32((c.r[4].w[0] + 128u), c.f[3]);
    st32((c.r[4].w[0] + 132u), c.f[2]);
    st32((c.r[4].w[0] + 136u), c.f[1]);
    st32((c.r[4].w[0] + 140u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 108u));
    c.f[0] = ld32((c.r[4].w[0] + 104u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 104u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 360u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 23;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[16], c.r[18].w[0] + 320u);  if (t) { goto L_00247C08; } }
    st32((c.r[18].w[0] + 104u), c.f[1]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 108u), 0u);  if (t) { goto L_00247C28; } }
L_00247C08:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00247C28; } }
    st32((c.r[18].w[0] + 104u), 0u);
    st32((c.r[18].w[0] + 108u), 0u);
    c.budget -= 2;
L_00247C28:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (t) { goto L_00247C60; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (t) { goto L_00247C4C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 34u)));  if (t) { goto L_00247C6C; } }
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 1;
L_00247C4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247C54u);  if (depth < kMaxDepth) unit_0052(c, 1u, depth + 1u); else { c.pc = 0x00248000u; return; } if (c.pc != 0x00247C54u) [[unlikely]] return; }
L_00247C54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00247C68; } }
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 1;
L_00247C60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247C68u);  if (depth < kMaxDepth) unit_0052(c, 2u, depth + 1u); else { c.pc = 0x00248010u; return; } if (c.pc != 0x00247C68u) [[unlikely]] return; }
L_00247C68:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 34u)));
    c.budget -= 1;
L_00247C6C:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00247D24; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00247CD0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x43110000u);  if (t) { goto L_00247C98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));  if (t) { goto L_00247D44; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43110000u);
    c.budget -= 1;
L_00247C98:
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 6144u);
    set32(c.r[6], 0u + 4608u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247CACu); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 22u, depth + 1u); else { c.pc = 0x0024C590u; return; } if (c.pc != 0x00247CACu) [[unlikely]] return; }
L_00247CAC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00247D40; } }
    st32((c.r[18].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 34u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 36u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 37u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00247D40; } }
L_00247CD0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[2].w[0] - 1u);  goto L_00247D1C; }
    set32(c.r[2], 0u + 3u);
    st8((c.r[16].w[0] + 36u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247CECu); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0052(c, 3u, depth + 1u); else { c.pc = 0x00248030u; return; } if (c.pc != 0x00247CECu) [[unlikely]] return; }
L_00247CEC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 37u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[16].w[0] + 37u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 37u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00247D40; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 34u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 60u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 36u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00247D40; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 1;
L_00247D1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 36u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00247D40; } }
L_00247D24:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[2].w[0] - 1u);  goto L_00247D3C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 34u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00247D40; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 1;
L_00247D3C:
    st8((c.r[16].w[0] + 36u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_00247D40:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 1;
L_00247D44:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 641u)));
    c.r[2].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00247D5C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 280u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_00247D5C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (t) { goto L_00247F34; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 92u)));
    c.r[4].d[0] = 0ull | 65535ull;
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[18].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    st32((c.r[18].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 96u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[18].w[0] + 84u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[18].w[0] + 84u));
    st32((c.r[18].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 100u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[18].w[0] + 88u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[18].w[0] + 88u));
    st32((c.r[18].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 369u)));
    c.budget -= 24;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[17], c.r[0], c.r[0]);  if (t) { goto L_00247E3C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[2].w[0];
    c.f[12] = ld32((c.r[16].w[0] + 24u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBD230000u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    c.f[16] = c.r[2].w[0];
    c.f[13] = ld32((c.r[16].w[0] + 28u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D230000u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    c.f[14] = c.r[2].w[0];
    set32(c.r[6], 0u - 256u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[17] = c.r[2].w[0];
    set32(c.r[7], 0u + 4096u);
    set32(c.r[8], 0u + 256u);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247E0Cu); c.r[5].d[0] = 0ull | 61440ull;  if (depth < kMaxDepth) unit_0052(c, 257u, depth + 1u); else { c.pc = 0x0024BDC0u; return; } if (c.pc != 0x00247E0Cu) [[unlikely]] return; }
L_00247E0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247E14u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0052(c, 232u, depth + 1u); else { c.pc = 0x0024B250u; return; } if (c.pc != 0x00247E14u) [[unlikely]] return; }
L_00247E14:
    set32(c.r[5], c.r[18].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247E20u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0045(c, 199u, depth + 1u); else { c.pc = 0x00217650u; return; } if (c.pc != 0x00247E20u) [[unlikely]] return; }
L_00247E20:
    c.f[1] = ld32((c.r[18].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00247E44; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_00247E44; } }
L_00247E3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247E44u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0052(c, 235u, depth + 1u); else { c.pc = 0x0024B2C0u; return; } if (c.pc != 0x00247E44u) [[unlikely]] return; }
L_00247E44:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_00247E70; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 530u));
    set32(c.r[2], 0u - 97u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00247E6C; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 514u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_00247E94; } }
L_00247E6C:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_00247E70:
    st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247E7Cu); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 9u, depth + 1u); else { c.pc = 0x00304280u; return; } if (c.pc != 0x00247E7Cu) [[unlikely]] return; }
L_00247E7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247E84u); set32(c.r[4], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0047(c, 216u, depth + 1u); else { c.pc = 0x0021EE00u; return; } if (c.pc != 0x00247E84u) [[unlikely]] return; }
L_00247E84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247E8Cu); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0052(c, 251u, depth + 1u); else { c.pc = 0x0024BA20u; return; } if (c.pc != 0x00247E8Cu) [[unlikely]] return; }
L_00247E8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);  if (t) { goto L_00247F48; } }
L_00247E94:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 369u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[3].w[0] + 592u);  if (t) { goto L_00247ED8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247EB4u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0052(c, 243u, depth + 1u); else { c.pc = 0x0024B3F0u; return; } if (c.pc != 0x00247EB4u) [[unlikely]] return; }
L_00247EB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00247F30; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247ECCu); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 9u, depth + 1u); else { c.pc = 0x00304280u; return; } if (c.pc != 0x00247ECCu) [[unlikely]] return; }
L_00247ECC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00247F44; } }
    set32(c.r[4], c.r[3].w[0] + 592u);
    c.budget -= 1;
L_00247ED8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247EE0u); set32(c.r[5], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x00247EE0u) [[unlikely]] return; }
L_00247EE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x442F0000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00247F14; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247F0Cu); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 9u, depth + 1u); else { c.pc = 0x00304280u; return; } if (c.pc != 0x00247F0Cu) [[unlikely]] return; }
L_00247F0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00247F44; } }
L_00247F14:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00247F30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247F30u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_003D(c, 21u, depth + 1u); else { c.pc = 0x001F45D0u; return; } if (c.pc != 0x00247F30u) [[unlikely]] return; }
L_00247F30:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 1;
L_00247F34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247F3Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_005D(c, 694u, depth + 1u); else { c.pc = 0x002763B0u; return; } if (c.pc != 0x00247F3Cu) [[unlikely]] return; }
L_00247F3C:
    set32(c.r[3], 0u + 1u);
    st8((c.r[18].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00247F44:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00247F48:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00247F60:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00247F70:
    set32(c.r[5], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00247FC4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 529u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00247FAC; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 531u));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 324u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 324u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00247FEC; } }
L_00247FAC:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 531u));
    set32(c.r[3], c.r[2].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 384u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 384u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00247FEC; } }
L_00247FC4:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 531u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] + 324u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 324u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00247FEC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00247FEC:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
}

}
