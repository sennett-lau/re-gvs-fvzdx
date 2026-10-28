#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00A6[4096] = {
    1, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 10, 0, 0, 0, 0, 11, 0, 0, 0, 0, 12, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 15, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 24,
    0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 27, 0,
    28, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0,
    0, 0, 32, 0, 0, 0, 33, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 36, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 38,
    0, 0, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 43, 0, 0,
    0, 0, 0, 44, 0, 0, 0, 45, 0, 46, 0, 47, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0,
    0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 55, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 60, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 73, 0, 74, 0, 0, 75, 0, 0, 0, 0, 76, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 79, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 87, 0, 0, 88, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90,
    0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0,
    0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 130, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0,
    138, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    142, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146,
    0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 149, 0, 0, 150, 0, 151, 0, 0, 0, 0, 0,
    152, 0, 0, 0, 0, 0, 153, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 161, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 163, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 165, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 172, 0, 173, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 175, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00A6(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00398000;
    case 2u: goto L_0039801C;
    case 3u: goto L_00398050;
    case 4u: goto L_00398070;
    case 5u: goto L_003980D0;
    case 6u: goto L_003980EC;
    case 7u: goto L_00398114;
    case 8u: goto L_00398170;
    case 9u: goto L_003981B4;
    case 10u: goto L_003981C4;
    case 11u: goto L_003981D8;
    case 12u: goto L_003981EC;
    case 13u: goto L_00398240;
    case 14u: goto L_0039825C;
    case 15u: goto L_00398278;
    case 16u: goto L_003982C0;
    case 17u: goto L_003982E0;
    case 18u: goto L_00398314;
    case 19u: goto L_00398328;
    case 20u: goto L_0039834C;
    case 21u: goto L_00398358;
    case 22u: goto L_003983B0;
    case 23u: goto L_003983E0;
    case 24u: goto L_003983FC;
    case 25u: goto L_00398418;
    case 26u: goto L_00398458;
    case 27u: goto L_00398478;
    case 28u: goto L_00398480;
    case 29u: goto L_00398490;
    case 30u: goto L_003984C4;
    case 31u: goto L_003984F0;
    case 32u: goto L_00398508;
    case 33u: goto L_00398518;
    case 34u: goto L_0039852C;
    case 35u: goto L_00398558;
    case 36u: goto L_00398578;
    case 37u: goto L_003985EC;
    case 38u: goto L_003985FC;
    case 39u: goto L_00398614;
    case 40u: goto L_00398624;
    case 41u: goto L_00398640;
    case 42u: goto L_00398660;
    case 43u: goto L_00398674;
    case 44u: goto L_0039868C;
    case 45u: goto L_0039869C;
    case 46u: goto L_003986A4;
    case 47u: goto L_003986AC;
    case 48u: goto L_003986C4;
    case 49u: goto L_003986E8;
    case 50u: goto L_0039870C;
    case 51u: goto L_00398744;
    case 52u: goto L_00398758;
    case 53u: goto L_00398788;
    case 54u: goto L_003987D8;
    case 55u: goto L_0039880C;
    case 56u: goto L_00398820;
    case 57u: goto L_00398858;
    case 58u: goto L_003988A8;
    case 59u: goto L_003988DC;
    case 60u: goto L_003988F0;
    case 61u: goto L_00398928;
    case 62u: goto L_00398978;
    case 63u: goto L_003989AC;
    case 64u: goto L_003989C0;
    case 65u: goto L_003989F8;
    case 66u: goto L_00398A68;
    case 67u: goto L_00398A9C;
    case 68u: goto L_00398AB0;
    case 69u: goto L_00398AE8;
    case 70u: goto L_00398B30;
    case 71u: goto L_00398B80;
    case 72u: goto L_00398BD0;
    case 73u: goto L_00398C0C;
    case 74u: goto L_00398C14;
    case 75u: goto L_00398C20;
    case 76u: goto L_00398C34;
    case 77u: goto L_00398C44;
    case 78u: goto L_00398C60;
    case 79u: goto L_00398C70;
    case 80u: goto L_00398CB4;
    case 81u: goto L_00398CD8;
    case 82u: goto L_00398D08;
    case 83u: goto L_00398D30;
    case 84u: goto L_00398DD8;
    case 85u: goto L_00398E48;
    case 86u: goto L_00398E90;
    case 87u: goto L_00398EA8;
    case 88u: goto L_00398EB4;
    case 89u: goto L_00398ED0;
    case 90u: goto L_00398EFC;
    case 91u: goto L_00398F18;
    case 92u: goto L_00398F34;
    case 93u: goto L_00398FA8;
    case 94u: goto L_00398FF4;
    case 95u: goto L_00399058;
    case 96u: goto L_00399088;
    case 97u: goto L_00399128;
    case 98u: goto L_00399188;
    case 99u: goto L_003991E0;
    case 100u: goto L_00399208;
    case 101u: goto L_00399258;
    case 102u: goto L_003992A8;
    case 103u: goto L_003992D0;
    case 104u: goto L_003992F8;
    case 105u: goto L_00399318;
    case 106u: goto L_00399338;
    case 107u: goto L_00399358;
    case 108u: goto L_003993C0;
    case 109u: goto L_003993F0;
    case 110u: goto L_00399460;
    case 111u: goto L_003994C8;
    case 112u: goto L_00399558;
    case 113u: goto L_003995A0;
    case 114u: goto L_003995B8;
    case 115u: goto L_00399618;
    case 116u: goto L_003996B8;
    case 117u: goto L_003996F4;
    case 118u: goto L_00399740;
    case 119u: goto L_00399770;
    case 120u: goto L_003997B0;
    case 121u: goto L_00399820;
    case 122u: goto L_00399868;
    case 123u: goto L_0039989C;
    case 124u: goto L_003998B0;
    case 125u: goto L_00399900;
    case 126u: goto L_003999E0;
    case 127u: goto L_003999F0;
    case 128u: goto L_00399A38;
    case 129u: goto L_00399A64;
    case 130u: goto L_00399A90;
    case 131u: goto L_00399A98;
    case 132u: goto L_00399AC0;
    case 133u: goto L_00399AF0;
    case 134u: goto L_00399B20;
    case 135u: goto L_00399B38;
    case 136u: goto L_00399B50;
    case 137u: goto L_00399B70;
    case 138u: goto L_00399B80;
    case 139u: goto L_00399BA0;
    case 140u: goto L_00399BB0;
    case 141u: goto L_00399BEC;
    case 142u: goto L_00399C80;
    case 143u: goto L_00399C9C;
    case 144u: goto L_00399CE8;
    case 145u: goto L_00399D1C;
    case 146u: goto L_00399D7C;
    case 147u: goto L_00399DA0;
    case 148u: goto L_00399DC8;
    case 149u: goto L_00399DD4;
    case 150u: goto L_00399DE0;
    case 151u: goto L_00399DE8;
    case 152u: goto L_00399E00;
    case 153u: goto L_00399E18;
    case 154u: goto L_00399E28;
    case 155u: goto L_00399E50;
    case 156u: goto L_00399F10;
    case 157u: goto L_00399F20;
    case 158u: goto L_00399F70;
    case 159u: goto L_0039A040;
    case 160u: goto L_0039A060;
    case 161u: goto L_0039A06C;
    case 162u: goto L_0039A0B0;
    case 163u: goto L_0039A194;
    case 164u: goto L_0039A1A0;
    case 165u: goto L_0039A28C;
    case 166u: goto L_0039A298;
    case 167u: goto L_0039A2D0;
    case 168u: goto L_0039A3A0;
    case 169u: goto L_0039A3AC;
    case 170u: goto L_0039A488;
    case 171u: goto L_0039A560;
    case 172u: goto L_0039A568;
    case 173u: goto L_0039A570;
    case 174u: goto L_0039A5D0;
    case 175u: goto L_0039A610;
    case 176u: goto L_0039A618;
    case 177u: goto L_0039A688;
    case 178u: goto L_0039A6C0;
    default: bad_entry(c, 0x00398000u); return;
    }
L_00398000:
    set32(c.r[6], c.r[2].w[0] - 11088u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24572u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_00398024; } }
    set32(c.r[4], 0u + 21u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039801Cu); set32(c.r[5], 0u + 17u);  if (depth < kMaxDepth) unit_000D(c, 103u, depth + 1u); else { c.pc = 0x00135520u; return; } if (c.pc != 0x0039801Cu) [[unlikely]] return; }
L_0039801C:
    set32(c.r[2], 0u + 1u);
    st8((c.r[28].w[0] - 24572u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00398024:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00398050:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24576u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_003980B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398070u); set32(c.r[4], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_00A6(c, 26u, depth + 1u); else { c.pc = 0x00398458u; return; } if (c.pc != 0x00398070u) [[unlikely]] return; }
L_00398070:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00398084; } }
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_003980C0; } }
L_00398084:
    set32(c.r[2], ld32((c.r[29].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003980A0; } }
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_003980C0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003980A0:
    st32((c.r[28].w[0] - 24564u), 0u);
    st8((c.r[28].w[0] - 24576u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003980C0; } }
L_003980B8:
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 2;
L_003980C0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003980D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003980ECu); set32(c.r[4], c.r[2].w[0] - 13632u);  if (depth < kMaxDepth) unit_00A6(c, 49u, depth + 1u); else { c.pc = 0x003986E8u; return; } if (c.pc != 0x003980ECu) [[unlikely]] return; }
L_003980EC:
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 44u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[29].w[0] + 44u);  if (t) { goto L_0039810C; } }
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0039815C; } }
    set32(c.r[5], c.r[29].w[0] + 44u);
    c.budget -= 1;
L_0039810C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398114u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_00A6(c, 72u, depth + 1u); else { c.pc = 0x00398BD0u; return; } if (c.pc != 0x00398114u) [[unlikely]] return; }
L_00398114:
    st32((c.r[28].w[0] - 24564u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 24564u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0039815C; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00398158; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 13628u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0039814C; } }
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0039815C; } }
L_0039814C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00398158:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0039815C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00398170:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 13624u));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[19], c.r[4], c.r[0]);  if (t) { goto L_003981A4; } }
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0039821C; } }
L_003981A4:
    set32(c.r[5], 0u + 45u);
    set32(c.r[6], 0u + 5u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003981B4u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_00A6(c, 69u, depth + 1u); else { c.pc = 0x00398AE8u; return; } if (c.pc != 0x003981B4u) [[unlikely]] return; }
L_003981B4:
    mmi::paddub(c.r[16], c.r[2], c.r[0]);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003981C4u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_00A6(c, 70u, depth + 1u); else { c.pc = 0x00398B30u; return; } if (c.pc != 0x003981C4u) [[unlikely]] return; }
L_003981C4:
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[17], c.r[2], c.r[0]);
    st32((c.r[28].w[0] - 24556u), c.r[5].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003981D8u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_00A6(c, 71u, depth + 1u); else { c.pc = 0x00398B80u; return; } if (c.pc != 0x003981D8u) [[unlikely]] return; }
L_003981D8:
    mmi::paddub(c.r[18], c.r[2], c.r[0]);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003981ECu); st32((c.r[28].w[0] - 24560u), 0u);  if (depth < kMaxDepth) unit_00A6(c, 120u, depth + 1u); else { c.pc = 0x003997B0u; return; } if (c.pc != 0x003981ECu) [[unlikely]] return; }
L_003981EC:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_0039821C; }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_00398218; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_00398218; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00398218; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00398218:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0039821C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00398240:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[5], 0u + 2u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039825Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_00A6(c, 65u, depth + 1u); else { c.pc = 0x003989F8u; return; } if (c.pc != 0x0039825Cu) [[unlikely]] return; }
L_0039825C:
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 44u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003982A0; } }
    set32(c.r[5], c.r[29].w[0] + 44u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398278u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_00A6(c, 72u, depth + 1u); else { c.pc = 0x00398BD0u; return; } if (c.pc != 0x00398278u) [[unlikely]] return; }
L_00398278:
    st32((c.r[28].w[0] - 24564u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 24564u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003982A0; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003982A0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_003982A0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003982C0:
    set32(c.r[2], 0u + 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    st16((c.r[28].w[0] - 24584u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; mmi::paddub(c.r[2], c.r[0], c.r[0]);  c.pc = t; return; }
L_003982E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 24584u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (t) { goto L_00398320; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24580u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] + 1296u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00398314u); set32(c.r[4], c.r[28].w[0] - 24580u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00398314u) [[unlikely]] return; }
L_00398314:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_003983D4; } }
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 1;
L_00398320:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398328u);  if (depth < kMaxDepth) unit_00A6(c, 23u, depth + 1u); else { c.pc = 0x003983E0u; return; } if (c.pc != 0x00398328u) [[unlikely]] return; }
L_00398328:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0039833C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_003983D4; } }
L_0039833C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[5], c.r[2].w[0] - 13776u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039834Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_00A6(c, 53u, depth + 1u); else { c.pc = 0x00398788u; return; } if (c.pc != 0x0039834Cu) [[unlikely]] return; }
L_0039834C:
    set32(c.r[5], c.r[29].w[0] + 28u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398358u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_00A6(c, 72u, depth + 1u); else { c.pc = 0x00398BD0u; return; } if (c.pc != 0x00398358u) [[unlikely]] return; }
L_00398358:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 13768u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00398370; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_003983D4; } }
L_00398370:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    c.r[5].d[0] = ld8((c.r[1].w[0] - 13772u));
    set32(c.r[3], c.r[28].w[0] - 24568u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    c.r[4].d[0] = ld8((c.r[1].w[0] - 13776u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    st8((c.r[1].w[0] - 13792u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    st8((c.r[1].w[0] - 13791u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    st32((c.r[1].w[0] - 13784u), c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] - 13776u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[4], c.r[2].w[0] - 13792u);
    c.budget -= 16;
L_003983B0:
    c.r[2].d[0] = ld8((c.r[3].w[0] + 12u));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[1].d[0] = c.r[6].sd[0] < 7ll ? 1ull : 0ull;
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[3].w[0] + 2u);
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003983B0u | kUnwind; return; } goto L_003983B0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[2], c.r[2].w[0] - 13792u);
    c.budget -= 2;
L_003983D4:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003983E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003983FCu); set32(c.r[4], c.r[2].w[0] - 13632u);  if (depth < kMaxDepth) unit_00A6(c, 49u, depth + 1u); else { c.pc = 0x003986E8u; return; } if (c.pc != 0x003983FCu) [[unlikely]] return; }
L_003983FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[29].w[0] + 44u);  if (t) { goto L_00398410; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00398444; } }
    set32(c.r[5], c.r[29].w[0] + 44u);
    c.budget -= 1;
L_00398410:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398418u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_00A6(c, 72u, depth + 1u); else { c.pc = 0x00398BD0u; return; } if (c.pc != 0x00398418u) [[unlikely]] return; }
L_00398418:
    set32(c.r[2], ld32((c.r[29].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0039842C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00398444; } }
L_0039842C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[2], c.r[2].w[0] - 13624u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[2], 0u - 1u);
    if (c.r[3].d[0] != 0) c.r[2].d[0] = 0ull;
    c.budget -= 6;
L_00398444:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00398458:
    set32(c.r[29], c.r[29].w[0] - 256u);
    st64((c.r[29].w[0] + 224u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 208u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 192u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 240u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398478u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 282u, depth + 1u); else { c.pc = 0x00106448u; return; } if (c.pc != 0x00398478u) [[unlikely]] return; }
L_00398478:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].sd[0] = static_cast<std::int32_t>(0x00AB0000u);  if (t) { goto L_003984AC; } }
L_00398480:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 4;
L_00398490:
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00398490u | kUnwind; return; } goto L_00398490; } }
L_003984AC:
    set32(c.r[16], c.r[17].w[0] - 13272u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 529ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003984C4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 330u, depth + 1u); else { c.pc = 0x00106AB8u; return; } if (c.pc != 0x003984C4u) [[unlikely]] return; }
L_003984C4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_0039860C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00398480u | kUnwind; return; } goto L_00398480; } }
    set32(c.r[4], c.r[29].w[0] + 144u);
    st32((c.r[29].w[0] + 148u), c.r[2].w[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    st32((c.r[29].w[0] + 152u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003984F0u); set32(c.r[17], c.r[16].w[0] - 13440u);  if (depth < kMaxDepth) unit_0000(c, 444u, depth + 1u); else { c.pc = 0x00103BA0u; return; } if (c.pc != 0x003984F0u) [[unlikely]] return; }
L_003984F0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; st32((c.r[17].w[0] + 160u), c.r[2].w[0]);  if (t) { goto L_00398510; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398508u); set32(c.r[4], c.r[4].w[0] - 11048u);  if (depth < kMaxDepth) unit_0005(c, 313u, depth + 1u); else { c.pc = 0x00117F48u; return; } if (c.pc != 0x00398508u) [[unlikely]] return; }
L_00398508:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00398628; } }
L_00398510:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398518u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 49u, depth + 1u); else { c.pc = 0x003986E8u; return; } if (c.pc != 0x00398518u) [[unlikely]] return; }
L_00398518:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00398628; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039852Cu); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_00A6(c, 72u, depth + 1u); else { c.pc = 0x00398BD0u; return; } if (c.pc != 0x0039852Cu) [[unlikely]] return; }
L_0039852C:
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00398628; } }
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { set32(c.r[2], 0u - 1u);  goto L_00398628; }
    set32(c.r[4], 0u + 56u);
    st32((c.r[16].w[0] - 13440u), c.r[2].w[0]);
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398558u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0005(c, 199u, depth + 1u); else { c.pc = 0x001160A0u; return; } if (c.pc != 0x00398558u) [[unlikely]] return; }
L_00398558:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00398508u | kUnwind; return; } goto L_00398508; } }
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_003985D8; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[3], 0u + 56u);
    c.budget -= 3;
L_00398578:
    set32(c.r[2], c.r[16].w[0] - 13440u);
    mmi::mult(c, 0, c.r[6].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0] + 8u), c.r[4].w[0]);
    st32((c.r[3].w[0] + 52u), 0u);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[3].w[0] + 12u), 0u);
    st32((c.r[3].w[0] + 16u), 0u);
    st32((c.r[3].w[0] + 20u), 0u);
    st32((c.r[3].w[0] + 24u), 0u);
    st32((c.r[3].w[0] + 28u), 0u);
    st32((c.r[3].w[0] + 44u), 0u);
    st32((c.r[3].w[0] + 48u), 0u);
    st16((c.r[3].w[0] + 32u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.r[2].d[0] = c.r[6].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 22;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u + 56u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00398578u | kUnwind; return; } goto L_00398578; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] - 13440u);  if (t) { goto L_003985E0; } }
L_003985D8:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[16], c.r[16].w[0] - 13440u);
    c.budget -= 2;
L_003985E0:
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003985ECu); st32((c.r[16].w[0] + 16u), 0u);  if (depth < kMaxDepth) unit_0001(c, 45u, depth + 1u); else { c.pc = 0x001045C8u; return; } if (c.pc != 0x003985ECu) [[unlikely]] return; }
L_003985EC:
    set32(c.r[5], c.r[17].w[0] - 27848u);
    set32(c.r[4], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003985FCu); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0000(c, 344u, depth + 1u); else { c.pc = 0x00103880u; return; } if (c.pc != 0x003985FCu) [[unlikely]] return; }
L_003985FC:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; st32((c.r[16].w[0] + 156u), c.r[2].w[0]);  if (t) { goto L_0039861C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00398628; } }
L_0039860C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398614u); set32(c.r[4], c.r[4].w[0] - 11072u);  if (depth < kMaxDepth) unit_0005(c, 313u, depth + 1u); else { c.pc = 0x00117F48u; return; } if (c.pc != 0x00398614u) [[unlikely]] return; }
L_00398614:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00398628; } }
L_0039861C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398624u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0001(c, 49u, depth + 1u); else { c.pc = 0x00104630u; return; } if (c.pc != 0x00398624u) [[unlikely]] return; }
L_00398624:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00398628:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 240u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 224u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 208u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 192u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 256u);  c.pc = t; return; }
L_00398640:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[4], 0u + 3u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398660u); c.r[18].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 45u, depth + 1u); else { c.pc = 0x001045C8u; return; } if (c.pc != 0x00398660u) [[unlikely]] return; }
L_00398660:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[4], 0u + 3u);
    set32(c.r[17], c.r[3].w[0] - 13440u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398674u); set32(c.r[5], ld32((c.r[17].w[0] + 156u)));  if (depth < kMaxDepth) unit_0000(c, 348u, depth + 1u); else { c.pc = 0x001038A0u; return; } if (c.pc != 0x00398674u) [[unlikely]] return; }
L_00398674:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] >= 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_0039868C; } }
    set32(c.r[18], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039868Cu); set32(c.r[4], c.r[4].w[0] - 11016u);  if (depth < kMaxDepth) unit_0005(c, 313u, depth + 1u); else { c.pc = 0x00117F48u; return; } if (c.pc != 0x0039868Cu) [[unlikely]] return; }
L_0039868C:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] <= 0;  if (t) { goto L_0039869C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039869Cu); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0001(c, 49u, depth + 1u); else { c.pc = 0x00104630u; return; } if (c.pc != 0x0039869Cu) [[unlikely]] return; }
L_0039869C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003986A4u); set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  if (depth < kMaxDepth) unit_0005(c, 201u, depth + 1u); else { c.pc = 0x001160C8u; return; } if (c.pc != 0x003986A4u) [[unlikely]] return; }
L_003986A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003986ACu); set32(c.r[4], ld32((c.r[17].w[0] + 160u)));  if (depth < kMaxDepth) unit_0000(c, 446u, depth + 1u); else { c.pc = 0x00103BB0u; return; } if (c.pc != 0x003986ACu) [[unlikely]] return; }
L_003986AC:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[2], 0u - 1u);  if (t) { goto L_003986C8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003986C4u); set32(c.r[4], c.r[4].w[0] - 10968u);  if (depth < kMaxDepth) unit_0005(c, 313u, depth + 1u); else { c.pc = 0x00117F48u; return; } if (c.pc != 0x003986C4u) [[unlikely]] return; }
L_003986C4:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_003986C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    if (c.r[18].d[0] == 0) c.r[2].d[0] = 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003986E8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[16], c.r[2].w[0] - 13440u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039870Cu); set32(c.r[4], ld32((c.r[16].w[0] + 160u)));  if (depth < kMaxDepth) unit_0000(c, 452u, depth + 1u); else { c.pc = 0x00103BE0u; return; } if (c.pc != 0x0039870Cu) [[unlikely]] return; }
L_0039870C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[4], c.r[4].w[0] - 13272u);
    set32(c.r[7], c.r[7].w[0] - 13184u);
    set32(c.r[9], c.r[9].w[0] - 13120u);
    set32(c.r[11], c.r[11].w[0] - 29600u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[8], 0u + 16u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398744u); set32(c.r[10], 0u + 144u);  if (depth < kMaxDepth) unit_0001(c, 342u, depth + 1u); else { c.pc = 0x00106C88u; return; } if (c.pc != 0x00398744u) [[unlikely]] return; }
L_00398744:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_00398760; } }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398758u); set32(c.r[4], c.r[4].w[0] - 10928u);  if (depth < kMaxDepth) unit_0005(c, 313u, depth + 1u); else { c.pc = 0x00117F48u; return; } if (c.pc != 0x00398758u) [[unlikely]] return; }
L_00398758:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 2u);  if (t) { goto L_00398770; } }
L_00398760:
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 152u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 144u), c.r[2].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_00398770:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00398788:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    set32(c.r[2], ld32((c.r[3].w[0] - 13440u)));
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[18], c.r[3].w[0] - 13440u);
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0] + 16u), c.r[16].d[0]);  if (t) { goto L_003987C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_0039883C; } }
L_003987C4:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[4], ld32((c.r[18].w[0] + 160u)));
    st8((c.r[16].w[0] - 13184u), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003987D8u); set32(c.r[16], c.r[16].w[0] - 13184u);  if (depth < kMaxDepth) unit_0000(c, 452u, depth + 1u); else { c.pc = 0x00103BE0u; return; } if (c.pc != 0x003987D8u) [[unlikely]] return; }
L_003987D8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[4], c.r[4].w[0] - 13272u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[9], c.r[9].w[0] - 13120u);
    set32(c.r[11], c.r[11].w[0] - 29600u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[8], 0u + 16u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039880Cu); set32(c.r[10], 0u + 80u);  if (depth < kMaxDepth) unit_0001(c, 342u, depth + 1u); else { c.pc = 0x00106C88u; return; } if (c.pc != 0x0039880Cu) [[unlikely]] return; }
L_0039880C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_00398828; } }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398820u); set32(c.r[4], c.r[4].w[0] - 10888u);  if (depth < kMaxDepth) unit_0005(c, 313u, depth + 1u); else { c.pc = 0x00117F48u; return; } if (c.pc != 0x00398820u) [[unlikely]] return; }
L_00398820:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 2u);  if (t) { goto L_0039883C; } }
L_00398828:
    set32(c.r[2], 0u + 2u);
    st32((c.r[18].w[0] + 152u), c.r[19].w[0]);
    st32((c.r[18].w[0] + 144u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 148u), c.r[17].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 5;
L_0039883C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00398858:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    set32(c.r[2], ld32((c.r[3].w[0] - 13440u)));
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[18], c.r[3].w[0] - 13440u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0] + 16u), c.r[16].d[0]);  if (t) { goto L_00398894; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_0039890C; } }
L_00398894:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[4], ld32((c.r[18].w[0] + 160u)));
    st8((c.r[16].w[0] - 13184u), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003988A8u); set32(c.r[16], c.r[16].w[0] - 13184u);  if (depth < kMaxDepth) unit_0000(c, 452u, depth + 1u); else { c.pc = 0x00103BE0u; return; } if (c.pc != 0x003988A8u) [[unlikely]] return; }
L_003988A8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[4], c.r[4].w[0] - 13272u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[9], c.r[9].w[0] - 13120u);
    set32(c.r[11], c.r[11].w[0] - 29600u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[8], 0u + 16u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003988DCu); set32(c.r[10], 0u + 16u);  if (depth < kMaxDepth) unit_0001(c, 342u, depth + 1u); else { c.pc = 0x00106C88u; return; } if (c.pc != 0x003988DCu) [[unlikely]] return; }
L_003988DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_003988F8; } }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003988F0u); set32(c.r[4], c.r[4].w[0] - 10848u);  if (depth < kMaxDepth) unit_0005(c, 313u, depth + 1u); else { c.pc = 0x00117F48u; return; } if (c.pc != 0x003988F0u) [[unlikely]] return; }
L_003988F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 2u);  if (t) { goto L_0039890C; } }
L_003988F8:
    set32(c.r[2], 0u + 3u);
    st32((c.r[18].w[0] + 152u), c.r[19].w[0]);
    st32((c.r[18].w[0] + 144u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 148u), c.r[17].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 5;
L_0039890C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00398928:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[2], ld32((c.r[3].w[0] - 13440u)));
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[18], c.r[3].w[0] - 13440u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0] + 16u), c.r[16].d[0]);  if (t) { goto L_00398960; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_003989DC; } }
L_00398960:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[4], ld32((c.r[18].w[0] + 160u)));
    set32(c.r[16], c.r[2].w[0] - 13184u);
    st8((c.r[2].w[0] - 13184u), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398978u); st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (depth < kMaxDepth) unit_0000(c, 452u, depth + 1u); else { c.pc = 0x00103BE0u; return; } if (c.pc != 0x00398978u) [[unlikely]] return; }
L_00398978:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[4], c.r[4].w[0] - 13272u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[9], c.r[9].w[0] - 13120u);
    set32(c.r[11], c.r[11].w[0] - 29600u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 4u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[8], 0u + 16u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003989ACu); set32(c.r[10], 0u + 16u);  if (depth < kMaxDepth) unit_0001(c, 342u, depth + 1u); else { c.pc = 0x00106C88u; return; } if (c.pc != 0x003989ACu) [[unlikely]] return; }
L_003989AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_003989C8; } }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003989C0u); set32(c.r[4], c.r[4].w[0] - 10800u);  if (depth < kMaxDepth) unit_0005(c, 313u, depth + 1u); else { c.pc = 0x00117F48u; return; } if (c.pc != 0x003989C0u) [[unlikely]] return; }
L_003989C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 2u);  if (t) { goto L_003989DC; } }
L_003989C8:
    set32(c.r[2], 0u + 4u);
    st32((c.r[18].w[0] + 148u), c.r[17].w[0]);
    st32((c.r[18].w[0] + 144u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 152u), 0u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 5;
L_003989DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003989F8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    set32(c.r[2], ld32((c.r[3].w[0] - 13440u)));
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[18], c.r[3].w[0] - 13440u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0] + 16u), c.r[16].d[0]);  if (t) { goto L_00398A2C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_00398ACC; } }
L_00398A2C:
    c.r[2].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 56u);  if (t) { goto L_00398A40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 12u);  if (t) { goto L_00398ACC; } }
L_00398A40:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    mmi::mult(c, 0, c.r[17].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[16], c.r[3].w[0] - 13184u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0]), c.r[5].w[0]);
    st8((c.r[3].w[0] - 13184u), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[4], ld32((c.r[18].w[0] + 160u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398A68u); st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (depth < kMaxDepth) unit_0000(c, 452u, depth + 1u); else { c.pc = 0x00103BE0u; return; } if (c.pc != 0x00398A68u) [[unlikely]] return; }
L_00398A68:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[4], c.r[4].w[0] - 13272u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[9], c.r[9].w[0] - 13120u);
    set32(c.r[11], c.r[11].w[0] - 29600u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 5u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[8], 0u + 16u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398A9Cu); set32(c.r[10], 0u + 16u);  if (depth < kMaxDepth) unit_0001(c, 342u, depth + 1u); else { c.pc = 0x00106C88u; return; } if (c.pc != 0x00398A9Cu) [[unlikely]] return; }
L_00398A9C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_00398AB8; } }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398AB0u); set32(c.r[4], c.r[4].w[0] - 10752u);  if (depth < kMaxDepth) unit_0005(c, 313u, depth + 1u); else { c.pc = 0x00117F48u; return; } if (c.pc != 0x00398AB0u) [[unlikely]] return; }
L_00398AB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 2u);  if (t) { goto L_00398ACC; } }
L_00398AB8:
    set32(c.r[2], 0u + 5u);
    st32((c.r[18].w[0] + 148u), c.r[17].w[0]);
    st32((c.r[18].w[0] + 144u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 152u), 0u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 5;
L_00398ACC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00398AE8:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] < 0; set32(c.r[2], 0u - 11u);  if (t) { goto L_00398B24; } }
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] >= 0; set32(c.r[3], 0u + 56u);  if (t) { goto L_00398B00; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u - 12u);  c.pc = t; return; }
L_00398B00:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], ld32((c.r[2].w[0] - 13436u)));
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0] + 28u), c.r[6].w[0]);
    st32((c.r[3].w[0] + 24u), c.r[5].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 20u), 0u);  c.pc = t; return; }
L_00398B24:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00398B30:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] - 13440u)));
    c.r[2].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[3].w[0] - 13440u);  if (t) { goto L_00398B50; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u - 11u);  c.pc = t; return; }
L_00398B50:
    c.r[2].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u + 56u);  if (t) { goto L_00398B64; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u - 12u);  c.pc = t; return; }
L_00398B64:
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    mmi::mult(c, 0, c.r[6].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 4u), c.r[5].w[0]);  c.pc = t; return; }
L_00398B80:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] - 13440u)));
    c.r[2].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[3].w[0] - 13440u);  if (t) { goto L_00398BA0; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u - 11u);  c.pc = t; return; }
L_00398BA0:
    c.r[2].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u + 56u);  if (t) { goto L_00398BB4; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u - 12u);  c.pc = t; return; }
L_00398BB4:
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    mmi::mult(c, 0, c.r[6].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 8u), c.r[5].w[0]);  c.pc = t; return; }
L_00398BD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; st64((c.r[29].w[0]), c.r[16].d[0]);  if (t) { goto L_00398BFC; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u - 11u);  if (t) { goto L_00398C28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00398C50; } }
L_00398BFC:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[16], c.r[16].w[0] - 13440u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398C0Cu); set32(c.r[4], ld32((c.r[16].w[0] + 160u)));  if (depth < kMaxDepth) unit_0000(c, 452u, depth + 1u); else { c.pc = 0x00103BE0u; return; } if (c.pc != 0x00398C0Cu) [[unlikely]] return; }
L_00398C0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398C14u);  if (depth < kMaxDepth) unit_00A6(c, 79u, depth + 1u); else { c.pc = 0x00398C70u; return; } if (c.pc != 0x00398C14u) [[unlikely]] return; }
L_00398C14:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398C20u); set32(c.r[4], ld32((c.r[16].w[0] + 160u)));  if (depth < kMaxDepth) unit_0000(c, 448u, depth + 1u); else { c.pc = 0x00103BC0u; return; } if (c.pc != 0x00398C20u) [[unlikely]] return; }
L_00398C20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00398C4C; } }
L_00398C28:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398C34u); set32(c.r[4], c.r[4].w[0] - 13272u);  if (depth < kMaxDepth) unit_0001(c, 355u, depth + 1u); else { c.pc = 0x00106E78u; return; } if (c.pc != 0x00398C34u) [[unlikely]] return; }
L_00398C34:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_00398C4C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398C44u);  if (depth < kMaxDepth) unit_00A6(c, 79u, depth + 1u); else { c.pc = 0x00398C70u; return; } if (c.pc != 0x00398C44u) [[unlikely]] return; }
L_00398C44:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00398C4C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00398C50:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00398C60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    c.budget -= 3;
    { set32(c.r[4], ld32((c.r[2].w[0] - 13280u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00103BD0u | kUnwind; return; } [[clang::musttail]] return unit_0000(c, 450u, depth); }
L_00398C70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[16], c.r[2].w[0] - 13440u);
    set32(c.r[3], ld32((c.r[16].w[0] + 144u)));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00398CB8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 1328u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00398CB4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00398CB4u) [[unlikely]] return; }
L_00398CB4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00398CB8:
    st32((c.r[16].w[0] + 152u), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[16].w[0] + 144u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00398CD8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[7], ld32((c.r[2].w[0] - 13288u)));
    set32(c.r[8], c.r[3].w[0] - 13120u);
    c.r[4].d[0] = ld8((c.r[3].w[0] - 13120u));
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[7].w[0]), c.r[4].w[0]);
    c.r[2].d[0] = ld8((c.r[8].w[0] + 1u));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[7].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_00398D28; } }
    set32(c.r[6], c.r[7].w[0] + 8u);
    set32(c.r[2], c.r[5].w[0] + c.r[8].w[0]);
    c.budget -= 2;
L_00398D08:
    set32(c.r[4], c.r[6].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0] + 2u));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[7].w[0])));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[5].w[0] + c.r[8].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00398D08u | kUnwind; return; } goto L_00398D08; } }
L_00398D28:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_00398D30:
    set32(c.r[29], c.r[29].w[0] - 416u);
    set32(c.r[5], 0u + 56u);
    st64((c.r[29].w[0] + 368u), c.r[21].d[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    st64((c.r[29].w[0] + 352u), c.r[20].d[0]);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    st64((c.r[29].w[0] + 336u), c.r[19].d[0]);
    set32(c.r[20], c.r[6].w[0] - 13120u);
    st64((c.r[29].w[0] + 320u), c.r[18].d[0]);
    set32(c.r[19], c.r[21].w[0] - 13440u);
    st64((c.r[29].w[0] + 288u), c.r[16].d[0]);
    set32(c.r[4], 0u + 255u);
    st64((c.r[29].w[0] + 400u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 384u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 304u), c.r[17].d[0]);
    set32(c.r[17], ld32((c.r[19].w[0] + 152u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 148u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[5].d[0] = ld8((c.r[20].w[0] + 1u));
    set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[18], c.r[16].w[0] + 16u);
    c.budget -= 24;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[2], 0u - 1u);  if (t) { goto L_0039927C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[4].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 16u)));  goto L_00398E50; }
    c.r[2].d[0] = ld8((c.r[6].w[0] - 13120u));
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[20].w[0] + 1u));
    st32((c.r[17].w[0] + 8u), c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[20].w[0] + 2u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_00399278; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_00398E0C; } }
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[16], c.r[17].w[0] + 12u);
    set32(c.r[3], c.r[6].w[0] + c.r[20].w[0]);
    c.budget -= 4;
L_00398DD8:
    c.r[2].d[0] = ld8((c.r[3].w[0] + 4u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[7].w[0] << 1);  if (t) { goto L_00398DF4; } }
    c.r[3].d[0] = ld8((c.r[3].w[0] + 4u));
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_00398DF4:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[6].w[0] + c.r[20].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00398DD8u | kUnwind; return; } goto L_00398DD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.r[7].w[0]);  if (t) { goto L_00398E14; } }
L_00398E0C:
    set32(c.r[16], c.r[17].w[0] + 12u);
    st32((c.r[17].w[0] + 8u), c.r[7].w[0]);
    c.budget -= 2;
L_00398E14:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull; set32(c.r[2], c.r[21].w[0] - 13440u);  if (t) { goto L_00398E2C; } }
    set32(c.r[2], 0u + 1u);
    st16((c.r[17].w[0] + 12u), static_cast<std::uint16_t>(0u));
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], c.r[21].w[0] - 13440u);
    c.budget -= 4;
L_00398E2C:
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 148u)));
    c.r[9].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[17].w[0] + 8u)));
    c.r[5].d[0] = ld8((c.r[17].w[0] + 4u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398E48u); c.r[6].d[0] = ld8((c.r[17].w[0]));  if (depth < kMaxDepth) unit_00A6(c, 111u, depth + 1u); else { c.pc = 0x003994C8u; return; } if (c.pc != 0x00398E48u) [[unlikely]] return; }
L_00398E48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0039927C; } }
L_00398E50:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; c.r[2].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_00398E70; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_00398F1C; } }
    c.budget -= 2;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[18].w[0] + 4u)));  goto L_00398EDC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00398F1C; } }
L_00398E70:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00398F1C; } }
    st32((c.r[18].w[0] + 4u), 0u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398E90u); set32(c.r[4], ld32((c.r[19].w[0] + 148u)));  if (depth < kMaxDepth) unit_00A6(c, 108u, depth + 1u); else { c.pc = 0x003993C0u; return; } if (c.pc != 0x00398E90u) [[unlikely]] return; }
L_00398E90:
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], ld32((c.r[19].w[0] + 148u)));  if (t) { goto L_00398EAC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398EA8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 109u, depth + 1u); else { c.pc = 0x003993F0u; return; } if (c.pc != 0x00398EA8u) [[unlikely]] return; }
L_00398EA8:
    set32(c.r[4], ld32((c.r[19].w[0] + 148u)));
    c.budget -= 1;
L_00398EAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398EB4u); c.r[5].d[0] = ld16((c.r[18].w[0] + 16u));  if (depth < kMaxDepth) unit_00A6(c, 109u, depth + 1u); else { c.pc = 0x003993F0u; return; } if (c.pc != 0x00398EB4u) [[unlikely]] return; }
L_00398EB4:
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_00398ED4; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 148u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398ED0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 109u, depth + 1u); else { c.pc = 0x003993F0u; return; } if (c.pc != 0x00398ED0u) [[unlikely]] return; }
L_00398ED0:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_00398ED4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_00398F18; } }
L_00398EDC:
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00398F1C; } }
    st32((c.r[18].w[0] + 4u), 0u);
    c.r[5].d[0] = ld16((c.r[18].w[0] + 16u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398EFCu); set32(c.r[4], ld32((c.r[19].w[0] + 148u)));  if (depth < kMaxDepth) unit_00A6(c, 109u, depth + 1u); else { c.pc = 0x003993F0u; return; } if (c.pc != 0x00398EFCu) [[unlikely]] return; }
L_00398EFC:
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[5].d[0] = ld8((c.r[20].w[0] + 1u));  goto L_00398F1C; }
    set32(c.r[4], ld32((c.r[19].w[0] + 148u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398F18u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 109u, depth + 1u); else { c.pc = 0x003993F0u; return; } if (c.pc != 0x00398F18u) [[unlikely]] return; }
L_00398F18:
    c.r[5].d[0] = ld8((c.r[20].w[0] + 1u));
    c.budget -= 1;
L_00398F1C:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[20].w[0] + 4u));  goto L_00398F60; }
    set32(c.r[16], c.r[21].w[0] - 13440u);
    set32(c.r[5], c.r[29].w[0] + 272u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398F34u); set32(c.r[4], ld32((c.r[16].w[0] + 148u)));  if (depth < kMaxDepth) unit_00A6(c, 110u, depth + 1u); else { c.pc = 0x00399460u; return; } if (c.pc != 0x00398F34u) [[unlikely]] return; }
L_00398F34:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[17].w[0] + 8u), 0u);  goto L_00399278; }
    c.r[3].d[0] = ld16((c.r[29].w[0] + 272u));
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    st16((c.r[17].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_00399278; } }
L_00398F60:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[3].d[0] = ld8((c.r[20].w[0]));  goto L_00398F7C; }
    st32((c.r[18].w[0]), 0u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), 0u);  if (t) { goto L_0039927C; } }
L_00398F7C:
    c.r[7].d[0] = 0ull + 0ull;
    c.r[4].d[0] = ld8((c.r[20].w[0] + 1u));
    c.r[6].d[0] = 0ull + 0ull;
    c.r[2].d[0] = ld8((c.r[20].w[0] + 2u));
    st32((c.r[29].w[0]), c.r[3].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 8u), c.r[4].w[0]);  if (t) { goto L_00398FE0; } }
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[3], c.r[6].w[0] + c.r[20].w[0]);
    c.budget -= 3;
L_00398FA8:
    c.r[2].d[0] = ld8((c.r[3].w[0] + 4u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[7].w[0] << 1);  if (t) { goto L_00398FC8; } }
    c.r[3].d[0] = ld8((c.r[3].w[0] + 4u));
    set32(c.r[5], c.r[29].w[0] + 12u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
L_00398FC8:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[6].w[0] + c.r[20].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00398FA8u | kUnwind; return; } goto L_00398FA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 8u), c.r[7].w[0]);  if (t) { goto L_00398FE8; } }
L_00398FE0:
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    st32((c.r[29].w[0] + 8u), c.r[7].w[0]);
    c.budget -= 2;
L_00398FE8:
    set32(c.r[16], c.r[21].w[0] - 13440u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00398FF4u); set32(c.r[4], ld32((c.r[16].w[0] + 148u)));  if (depth < kMaxDepth) unit_00A6(c, 108u, depth + 1u); else { c.pc = 0x003993C0u; return; } if (c.pc != 0x00398FF4u) [[unlikely]] return; }
L_00398FF4:
    c.r[3].d[0] = ld16((c.r[29].w[0] + 12u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 4u)));  if (t) { goto L_0039900C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[2].d[0] = ld16((c.r[16].w[0] + 20u));  goto L_00399034; }
L_0039900C:
    st16((c.r[17].w[0] + 12u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    st16((c.r[18].w[0] + 16u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[29].w[0])));
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), 0u);  if (t) { goto L_00399248; } }
L_00399034:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 8u)));  if (t) { goto L_00399114; } }
    c.r[11].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].sd[0] <= 0; c.r[12].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00399108; } }
    set32(c.r[16], c.r[17].w[0] + 12u);
    set32(c.r[3], c.r[21].w[0] - 13440u);
    c.budget -= 3;
L_00399058:
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003990BC; } }
    set32(c.r[5], c.r[29].w[0] + 12u);
    set32(c.r[9], c.r[6].w[0] << 1);
    c.r[10].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].d[0] = ld16((c.r[3].w[0] + 20u));
    set32(c.r[3], c.r[10].w[0] + c.r[9].w[0]);
    c.r[4].d[0] = ld16((c.r[3].w[0]));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[8], c.r[6].w[0] + 1u);  if (t) { goto L_003990BC; } }
    set32(c.r[5], c.r[21].w[0] - 13440u);
    c.budget -= 1;
L_00399088:
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[2], ld32((c.r[5].w[0] + 16u)));
    c.r[2].d[0] = c.r[7].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[7].w[0] << 1);  if (t) { goto L_003990C0; } }
    set32(c.r[4], c.r[10].w[0] + c.r[9].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = ld16((c.r[4].w[0]));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 20u));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; set32(c.r[5], c.r[21].w[0] - 13440u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00399088u | kUnwind; return; } goto L_00399088; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[21].w[0] - 13440u);  if (t) { goto L_003990C4; } }
L_003990BC:
    set32(c.r[8], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_003990C0:
    set32(c.r[2], c.r[21].w[0] - 13440u);
    c.budget -= 1;
L_003990C4:
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[7].d[0] != c.r[3].d[0]) { c.r[6].d[0] = c.r[8].d[0] + 0ull;  goto L_003990F4; }
    set32(c.r[4], c.r[6].w[0] << 1);
    set32(c.r[2], c.r[29].w[0] + 12u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[11].w[0] << 1);
    c.r[4].d[0] = ld16((c.r[2].w[0]));
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[11], c.r[11].w[0] + 1u);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[6].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 9;
L_003990F4:
    c.r[2].d[0] = c.r[6].sd[0] < c.r[12].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[21].w[0] - 13440u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00399058u | kUnwind; return; } goto L_00399058; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.r[11].w[0]);  if (t) { goto L_00399158; } }
L_00399108:
    set32(c.r[16], c.r[17].w[0] + 12u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.r[11].w[0]);  if (t) { goto L_00399158; } }
L_00399114:
    set32(c.r[7], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[7].sd[0] <= 0; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_00399150; } }
    set32(c.r[16], c.r[17].w[0] + 12u);
    set32(c.r[5], c.r[29].w[0] + 12u);
    c.budget -= 2;
L_00399128:
    set32(c.r[2], c.r[6].w[0] << 1);
    set32(c.r[3], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[4].d[0] = ld16((c.r[3].w[0]));
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = c.r[6].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00399128u | kUnwind; return; } goto L_00399128; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.r[6].w[0]);  if (t) { goto L_00399158; } }
L_00399150:
    set32(c.r[16], c.r[17].w[0] + 12u);
    st32((c.r[17].w[0] + 8u), c.r[6].w[0]);
    c.budget -= 2;
L_00399158:
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[19], c.r[21].w[0] - 13440u);
    set32(c.r[7], ld32((c.r[17].w[0] + 8u)));
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.r[6].d[0] = ld8((c.r[17].w[0]));
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 148u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399188u); c.r[5].d[0] = ld8((c.r[17].w[0] + 4u));  if (depth < kMaxDepth) unit_00A6(c, 111u, depth + 1u); else { c.pc = 0x003994C8u; return; } if (c.pc != 0x00399188u) [[unlikely]] return; }
L_00399188:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[2], c.r[2].w[0] - 1u);  if (t) { goto L_003991C0; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 6;
    { const bool t = c.r[4].sd[0] <= 0; st16((c.r[18].w[0] + 16u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00399248; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_00399248; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[2].w[0]);  if (t) { goto L_00399248; } }
L_003991C0:
    set32(c.r[16], c.r[29].w[0] + 144u);
    c.r[5].d[0] = ld8((c.r[29].w[0] + 4u));
    set32(c.r[4], ld32((c.r[19].w[0] + 148u)));
    c.r[8].d[0] = c.r[29].d[0] | 12ull;
    c.r[6].d[0] = ld8((c.r[29].w[0]));
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003991E0u); set32(c.r[7], ld32((c.r[29].w[0] + 8u)));  if (depth < kMaxDepth) unit_00A6(c, 111u, depth + 1u); else { c.pc = 0x003994C8u; return; } if (c.pc != 0x003991E0u) [[unlikely]] return; }
L_003991E0:
    set32(c.r[4], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] <= 0; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_00399220; } }
    c.r[2].d[0] = ld16((c.r[29].w[0] + 144u));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 16u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[5].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_00399220; } }
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 3;
L_00399208:
    c.r[2].d[0] = c.r[6].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[9], c.r[9].w[0] + 2u);  if (t) { goto L_00399220; } }
    c.r[2].d[0] = ld16((c.r[9].w[0]));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[6], c.r[6].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00399208u | kUnwind; return; } goto L_00399208; }
L_00399220:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[4].d[0]; set32(c.r[5], c.r[22].w[0] - 13432u);  if (t) { goto L_0039924C; } }
    st32((c.r[18].w[0]), 0u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    st16((c.r[17].w[0] + 12u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[29].w[0])));
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 8;
L_00399248:
    set32(c.r[5], c.r[22].w[0] - 13432u);
    c.budget -= 1;
L_0039924C:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_00399258:
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(136ll) ? 1ull : 0ull;
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00399258u | kUnwind; return; } goto L_00399258; } }
L_00399278:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0039927C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 400u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 384u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 368u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 352u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 336u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 320u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 304u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 288u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 416u);  c.pc = t; return; }
L_003992A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[4], c.r[2].w[0] - 13120u);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 6u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], ld32((c.r[3].w[0] - 13288u)));  if (t) { goto L_003992C8; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u - 1u);  c.pc = t; return; }
L_003992C8:
    set32(c.r[5], 0u + 6u);
    c.budget -= 2;
L_003992D0:
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[5], c.r[5].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003992D0u | kUnwind; return; } goto L_003992D0; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003992F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    c.r[3].d[0] = ld8((c.r[2].w[0] - 13119u));
    c.r[4].d[0] = ld8((c.r[5].w[0] - 13183u));
    set32(c.r[2], 0u - 1u);
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[4].d[0];
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; if (c.r[3].d[0] == 0) c.r[2].d[0] = 0ull;  c.pc = t; return; }
L_00399318:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    c.r[3].d[0] = ld8((c.r[2].w[0] - 13119u));
    c.r[4].d[0] = ld8((c.r[5].w[0] - 13183u));
    set32(c.r[2], 0u - 1u);
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[4].d[0];
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; if (c.r[3].d[0] == 0) c.r[2].d[0] = 0ull;  c.pc = t; return; }
L_00399338:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[2], ld32((c.r[5].w[0] - 13440u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003993AC; } }
    set32(c.r[2], c.r[5].w[0] - 13440u);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 16u);
    c.budget -= 4;
L_00399358:
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[2], ld32((c.r[5].w[0] - 13440u)));  if (t) { goto L_0039939C; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[2], ld32((c.r[5].w[0] - 13440u)));  if (t) { goto L_0039939C; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[5].w[0] - 13440u)));  goto L_0039939C; }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[2].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;  if (t) { goto L_00399398; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], ld32((c.r[5].w[0] - 13440u)));  if (t) { goto L_0039939C; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 3;
L_00399398:
    set32(c.r[2], ld32((c.r[5].w[0] - 13440u)));
    c.budget -= 1;
L_0039939C:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 56u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00399358u | kUnwind; return; } goto L_00399358; } }
L_003993AC:
    set_interrupts(c, true);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003993C0:
    set32(c.r[2], 0u + 56u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], ld32((c.r[5].w[0] - 13436u)));
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + 16u);
    st32((c.r[3].w[0] + 4u), 0u);
    st32((c.r[3].w[0] + 36u), 0u);
    st32((c.r[3].w[0] + 28u), 0u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 32u), 0u);  c.pc = t; return; }
L_003993F0:
    set32(c.r[2], 0u + 56u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[6], ld32((c.r[3].w[0] - 13436u)));
    set32(c.r[6], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[6].w[0] + 16u);
    set32(c.r[2], ld32((c.r[4].w[0] + 36u)));
    c.r[2].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[5].d[0] & 65535ull;  if (t) { goto L_00399420; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u - 1u);  c.pc = t; return; }
L_00399420:
    set32(c.r[3], ld32((c.r[6].w[0] + 44u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[2].w[0] + 34u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st32((c.r[6].w[0] + 44u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    c.r[2].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 10;
    if (c.r[2].d[0] == 0ull) { st32((c.r[4].w[0] + 28u), 0u);  goto L_00399448; }
L_00399448:
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 36u), c.r[3].w[0]);  c.pc = t; return; }
L_00399460:
    set32(c.r[2], 0u + 56u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[6], ld32((c.r[3].w[0] - 13436u)));
    set32(c.r[6], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[7], c.r[6].w[0] + 16u);
    set32(c.r[2], ld32((c.r[7].w[0] + 36u)));
    c.budget -= 9;
    if (c.r[2].sd[0] > 0) { set32(c.r[4], ld32((c.r[6].w[0] + 48u)));  goto L_0039948C; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u - 1u);  c.pc = t; return; }
L_0039948C:
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[3].d[0] = ld16((c.r[2].w[0] + 34u));
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[6].w[0] + 48u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[7].w[0] + 32u)));
    c.r[2].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 10;
    if (c.r[2].d[0] == 0ull) { st32((c.r[7].w[0] + 32u), 0u);  goto L_003994B4; }
L_003994B4:
    set32(c.r[3], ld32((c.r[7].w[0] + 36u)));
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[7].w[0] + 36u), c.r[3].w[0]);  c.pc = t; return; }
L_003994C8:
    set32(c.r[2], 0u + 56u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[29], c.r[29].w[0] - 144u);
    set32(c.r[10], ld32((c.r[3].w[0] - 13436u)));
    st64((c.r[29].w[0] + 112u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[22].d[0]);
    c.r[23].d[0] = c.r[5].d[0] & 255ull;
    st64((c.r[29].w[0] + 80u), c.r[21].d[0]);
    c.r[22].d[0] = c.r[6].d[0] & 255ull;
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    c.r[21].d[0] = c.r[9].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    set32(c.r[19], c.r[10].w[0] + c.r[4].w[0]);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 23;
    { const bool t = c.r[3].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00399538; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));  if (t) { goto L_00399588; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003995EC; } }
L_00399538:
    c.budget -= 2;
    { const bool t = c.r[20].sd[0] <= 0; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003995E0; } }
    c.r[2].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003995E0; } }
    set32(c.r[2], c.r[16].w[0] + c.r[18].w[0]);
    set32(c.r[4], c.r[16].w[0] + c.r[21].w[0]);
    c.budget -= 3;
L_00399558:
    c.r[3].d[0] = ld16((c.r[2].w[0]));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003995E0; } }
    set32(c.r[16], c.r[17].w[0] << 1);
    set32(c.r[2], c.r[16].w[0] + c.r[18].w[0]);
    c.r[3].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + c.r[21].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00399558u | kUnwind; return; } goto L_00399558; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003995E4; } }
L_00399588:
    c.budget -= 2;
    { const bool t = c.r[20].sd[0] <= 0; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003995E0; } }
    c.r[2].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003995E0; } }
    set32(c.r[2], c.r[16].w[0] + c.r[18].w[0]);
    c.budget -= 1;
L_003995A0:
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    c.r[7].d[0] = ld16((c.r[2].w[0]));
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003995B8u); set32(c.r[17], c.r[17].w[0] + 1u);  if (depth < kMaxDepth) unit_00A6(c, 115u, depth + 1u); else { c.pc = 0x00399618u; return; } if (c.pc != 0x003995B8u) [[unlikely]] return; }
L_003995B8:
    set32(c.r[3], c.r[16].w[0] + c.r[21].w[0]);
    c.r[4].d[0] = c.r[17].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003995E0; } }
    set32(c.r[2], c.r[17].w[0] << 1);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[16].w[0] + c.r[18].w[0]);
    c.r[2].d[0] = ld16((c.r[3].w[0]));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] + c.r[18].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003995A0u | kUnwind; return; } goto L_003995A0; } }
L_003995E0:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003995E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 2;
L_003995EC:
    c.r[23].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00399618:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].d[0] = c.r[5].d[0] & 34ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[7].d[0] & 65535ull;  if (t) { goto L_00399688; } }
    c.r[2].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 2u);  goto L_00399664; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_00399674; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003996B0; } }
L_00399664:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_0039969C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003996B0; } }
L_00399674:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[3].w[0] << 9);
    set32(c.r[2], c.r[2].w[0] - 10680u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[3].w[0] + c.r[2].w[0]);  if (t) { goto L_003996B8; } }
L_00399688:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[3].w[0] << 9);
    set32(c.r[2], c.r[2].w[0] - 9656u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[3].w[0] + c.r[2].w[0]);  if (t) { goto L_003996B8; } }
L_0039969C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[3].w[0] << 9);
    set32(c.r[2], c.r[2].w[0] - 8632u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[3].w[0] + c.r[2].w[0]);  if (t) { goto L_003996B8; } }
L_003996B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003996B8u); set32(c.r[4], c.r[4].w[0] - 10704u);  if (depth < kMaxDepth) unit_0005(c, 313u, depth + 1u); else { c.pc = 0x00117F48u; return; } if (c.pc != 0x003996B8u) [[unlikely]] return; }
L_003996B8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00399728; } }
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(256ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] << 1);  if (t) { goto L_003996D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00399728; } }
L_003996D4:
    set32(c.r[3], 0u + 16384u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[5].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[2].d[0] = 0ull | 32768ull;  if (t) { goto L_003996FC; } }
    c.r[4].d[0] = c.r[18].d[0] & 255ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003996F4u); c.r[5].d[0] = c.r[16].d[0] & 255ull;  if (depth < kMaxDepth) unit_00A6(c, 118u, depth + 1u); else { c.pc = 0x00399740u; return; } if (c.pc != 0x003996F4u) [[unlikely]] return; }
L_003996F4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = 0ull | 32768ull;
    c.budget -= 2;
L_003996FC:
    c.budget -= 2;
    if (c.r[5].d[0] == c.r[2].d[0]) { c.r[5].d[0] = c.r[16].d[0] | 32768ull;  goto L_00399704; }
L_00399704:
    set32(c.r[2], c.r[5].w[0] - 97u);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(26ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[18].d[0] & 2ull;  if (t) { goto L_00399724; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[5].w[0] - 32u);  if (t) { goto L_00399724; } }
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_00399724:
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_00399728:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00399740:
    set32(c.r[2], 0u + 84u);
    c.r[8].d[0] = c.r[4].d[0] & 1ull;
    mmi::mult(c, 0, c.r[8].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[6], c.r[9].w[0] - 7608u);
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    c.r[10].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], c.r[4].w[0] + c.r[6].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 11;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0039979C; } }
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_00399770:
    c.r[2].d[0] = c.r[7].d[0] < static_cast<std::uint64_t>(21ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 84u);  if (t) { goto L_003997A8; } }
    set32(c.r[4], c.r[7].w[0] << 2);
    mmi::mult(c, 0, c.r[8].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[6], c.r[9].w[0] - 7608u);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[6].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 8;
    { const bool t = c.r[10].d[0] != c.r[3].d[0]; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00399770u | kUnwind; return; } goto L_00399770; } }
L_0039979C:
    set32(c.r[2], c.r[6].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld16((c.r[2].w[0] + 2u));
    c.r[5].d[0] = c.r[3].d[0] | 16384ull;
    c.budget -= 3;
L_003997A8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[5].d[0] + 0ull;  c.pc = t; return; }
L_003997B0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] - 13440u)));
    c.r[2].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], c.r[3].w[0] - 13440u);  if (t) { goto L_003997D0; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u - 11u);  c.pc = t; return; }
L_003997D0:
    c.r[2].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 56u);  if (t) { goto L_003997E4; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u - 12u);  c.pc = t; return; }
L_003997E4:
    set32(c.r[4], ld32((c.r[7].w[0] + 4u)));
    mmi::mult(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    if (c.r[5].d[0] == c.r[3].d[0]) { st32((c.r[2].w[0] + 12u), c.r[5].w[0]);  goto L_00399814; }
    st32((c.r[2].w[0] + 20u), 0u);
    st32((c.r[2].w[0] + 44u), 0u);
    st32((c.r[2].w[0] + 48u), 0u);
    st32((c.r[7].w[0] + 16u), 0u);
    st16((c.r[2].w[0] + 32u), static_cast<std::uint16_t>(0u));
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    c.budget -= 6;
L_00399814:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_00399820:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    set32(c.r[2], ld32((c.r[3].w[0] - 13440u)));
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[18], c.r[3].w[0] - 13440u);
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0] + 16u), c.r[16].d[0]);  if (t) { goto L_00399854; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_003998E4; } }
L_00399854:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[4], ld32((c.r[18].w[0] + 160u)));
    st8((c.r[16].w[0] - 13184u), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399868u); set32(c.r[16], c.r[16].w[0] - 13184u);  if (depth < kMaxDepth) unit_0000(c, 452u, depth + 1u); else { c.pc = 0x00103BE0u; return; } if (c.pc != 0x00399868u) [[unlikely]] return; }
L_00399868:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[4], c.r[4].w[0] - 13272u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[9], c.r[9].w[0] - 13120u);
    set32(c.r[11], c.r[11].w[0] - 29600u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 6u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[8], 0u + 16u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039989Cu); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 342u, depth + 1u); else { c.pc = 0x00106C88u; return; } if (c.pc != 0x0039989Cu) [[unlikely]] return; }
L_0039989C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_003998B8; } }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003998B0u); set32(c.r[4], c.r[4].w[0] - 10888u);  if (depth < kMaxDepth) unit_0005(c, 313u, depth + 1u); else { c.pc = 0x00117F48u; return; } if (c.pc != 0x003998B0u) [[unlikely]] return; }
L_003998B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 2u);  if (t) { goto L_003998E4; } }
L_003998B8:
    set32(c.r[4], 0u + 56u);
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    mmi::mult(c, 0, c.r[17].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0] + 52u), 0u);
    st32((c.r[3].w[0] + 16u), 0u);
    st32((c.r[3].w[0] + 20u), 0u);
    st16((c.r[3].w[0] + 32u), static_cast<std::uint16_t>(0u));
    st32((c.r[3].w[0] + 44u), 0u);
    st32((c.r[3].w[0] + 48u), 0u);
    c.budget -= 11;
L_003998E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00399900:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    st32((c.r[1].w[0] - 12976u), c.r[4].w[0]);
    set32(c.r[16], c.r[2].w[0] - 12976u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01510000u);
    c.r[2].d[0] = c.r[3].d[0] | 36864ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    st32((c.r[1].w[0] - 12972u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[3].d[0] | 37120ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    st32((c.r[1].w[0] - 12968u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[3].d[0] | 37376ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    st32((c.r[1].w[0] - 12964u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[3].d[0] | 37888ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    st32((c.r[1].w[0] - 12960u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    st32((c.r[1].w[0] - 12948u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    st32((c.r[1].w[0] - 12944u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    st32((c.r[1].w[0] - 12940u), c.r[5].w[0]);
    set32(c.r[2], 0u + 24u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    st32((c.r[1].w[0] - 12932u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    st32((c.r[1].w[0] - 12936u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    st32((c.r[1].w[0] - 12924u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    st32((c.r[1].w[0] - 12928u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    st32((c.r[1].w[0] - 12920u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    st32((c.r[1].w[0] - 12916u), 0u);
    set32(c.r[2], 0u - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    st32((c.r[1].w[0] - 12912u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    st32((c.r[1].w[0] - 12908u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80800000u);
    c.r[2].d[0] = c.r[2].d[0] | 32896ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    st32((c.r[1].w[0] - 12904u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[8], c.r[28].w[0] - 26880u);
    st32((c.r[1].w[0] - 12900u), c.r[3].w[0]);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    mmi::paddub(c.r[9], c.r[16], c.r[0]);
    c.budget -= 56;
L_003999E0:
    set32(c.r[7], ld32((c.r[8].w[0])));
    set32(c.r[6], ld32((c.r[9].w[0] + 4u)));
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 4;
L_003999F0:
    c.r[3].d[0] = ld8((c.r[7].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < 16ll ? 1ull : 0ull;
    st8((c.r[6].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[7].w[0] + 1u));
    st8((c.r[6].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[6].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[7], c.r[7].w[0] + 2u);
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003999F0u | kUnwind; return; } goto L_003999F0; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[8], c.r[8].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[9], c.r[9].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003999E0u | kUnwind; return; } goto L_003999E0; } }
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    mmi::paddub(c.r[17], c.r[16], c.r[0]);
    c.budget -= 2;
L_00399A38:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[2], 0u + 2u);
    set32(c.r[6], 0u + 16288u);
    set32(c.r[7], 0u + 1u);
    st64((c.r[29].w[0]), c.r[2].d[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[11], 0u + 8u);
    mmi::paddub(c.r[8], c.r[0], c.r[0]);
    mmi::paddub(c.r[9], c.r[0], c.r[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399A64u); mmi::paddub(c.r[10], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_00A6(c, 162u, depth + 1u); else { c.pc = 0x0039A0B0u; return; } if (c.pc != 0x00399A64u) [[unlikely]] return; }
L_00399A64:
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0]), c.r[3].d[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[6], 0u + 16289u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[11], 0u + 8u);
    mmi::paddub(c.r[4], c.r[2], c.r[0]);
    mmi::paddub(c.r[8], c.r[0], c.r[0]);
    mmi::paddub(c.r[9], c.r[0], c.r[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399A90u); mmi::paddub(c.r[10], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_00A6(c, 162u, depth + 1u); else { c.pc = 0x0039A0B0u; return; } if (c.pc != 0x00399A90u) [[unlikely]] return; }
L_00399A90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399A98u); mmi::paddub(c.r[4], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_00A6(c, 159u, depth + 1u); else { c.pc = 0x0039A040u; return; } if (c.pc != 0x00399A98u) [[unlikely]] return; }
L_00399A98:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00399A38u | kUnwind; return; } goto L_00399A38; } }
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00399AC0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A30000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 10416u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[2], c.r[2].w[0] - 12964u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { set32(c.r[5], 0u + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00134A60u | kUnwind; return; } [[clang::musttail]] return unit_000D(c, 49u, depth); }
L_00399AF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    st32((c.r[1].w[0] - 12928u), c.f[12]);
    c.f[0] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    c.f[12] = fp::mul(c.f[0], c.f[12]);
    st32((c.r[1].w[0] - 12924u), c.f[13]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399B20u); c.f[20] = c.f[13];  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x00399B20u) [[unlikely]] return; }
L_00399B20:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    st32((c.r[1].w[0] - 12936u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399B38u); c.f[12] = fp::mul(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x00399B38u) [[unlikely]] return; }
L_00399B38:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    st32((c.r[1].w[0] - 12932u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00399B50:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    st32((c.r[1].w[0] - 12920u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[1].w[0] - 12916u), c.r[5].w[0]);  c.pc = t; return; }
L_00399B70:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[1].w[0] - 12908u), c.r[4].w[0]);  c.pc = t; return; }
L_00399B80:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], c.r[3].w[0] + 1424u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[1].w[0] - 12904u), c.r[3].w[0]);  c.pc = t; return; }
L_00399BA0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[1].w[0] - 12900u), c.f[12]);  c.pc = t; return; }
L_00399BB0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[16], ld32((c.r[1].w[0] - 12920u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[18], c.r[2].w[0] - 12976u);
    mmi::paddub(c.r[20], c.r[4], c.r[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[19], ld32((c.r[1].w[0] - 12952u)));
    c.budget -= 15;
L_00399BEC:
    c.r[2].d[0] = ld8((c.r[20].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[20], c.r[20].w[0] + 1u);  if (t) { goto L_00399D70; } }
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[3].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(128ll) ? 1ull : 0ull;  if (t) { goto L_00399C20; } }
    st32((c.r[18].w[0] + 56u), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 60u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00399BECu | kUnwind; return; } goto L_00399BEC; } }
    c.r[3].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(128ll) ? 1ull : 0ull;
    c.budget -= 1;
L_00399C20:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(224ll) ? 1ull : 0ull;  if (t) { goto L_00399C3C; } }
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(160ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00399C50; } }
    c.r[3].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(224ll) ? 1ull : 0ull;
    c.budget -= 2;
L_00399C3C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_00399C78; } }
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(256ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00399C74; } }
L_00399C50:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (t) { goto L_00399D74; } }
    c.r[3].d[0] = ld8((c.r[20].w[0]));
    set32(c.r[2], c.r[2].w[0] << 8);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];  if (t) { goto L_00399C88; } }
L_00399C74:
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_00399C78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399C80u);  if (depth < kMaxDepth) unit_00A6(c, 158u, depth + 1u); else { c.pc = 0x00399F70u; return; } if (c.pc != 0x00399C80u) [[unlikely]] return; }
L_00399C80:
    set32(c.r[17], 0u + 1u);
    c.budget -= 2;
L_00399C88:
    c.r[3].d[0] = 0ull | 33088ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00399D30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399C9Cu); mmi::paddub(c.r[4], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_00A6(c, 156u, depth + 1u); else { c.pc = 0x00399F10u; return; } if (c.pc != 0x00399C9Cu) [[unlikely]] return; }
L_00399C9C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_00399D30; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 36u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00399D70; } }
    set32(c.r[11], 0u + 22u);
    st64((c.r[29].w[0]), c.r[11].d[0]);
    set32(c.r[3], c.r[2].w[0] << 8);
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[6], 0u + 16256u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[8], 0u + 20u);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    mmi::paddub(c.r[9], c.r[0], c.r[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399CE8u); mmi::paddub(c.r[10], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_00A6(c, 162u, depth + 1u); else { c.pc = 0x0039A0B0u; return; } if (c.pc != 0x00399CE8u) [[unlikely]] return; }
L_00399CE8:
    set32(c.r[3], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[5], 0u + 16256u);
    st64((c.r[29].w[0]), c.r[3].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[10], ld32((c.r[18].w[0] + 64u)));
    set32(c.r[6], ld32((c.r[18].w[0] + 68u)));
    set32(c.r[7], ld32((c.r[18].w[0] + 72u)));
    c.f[12] = ld32((c.r[18].w[0] + 76u));
    set32(c.r[8], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[9], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[11], ld32((c.r[18].w[0] + 40u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399D1Cu); mmi::paddub(c.r[4], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_00A6(c, 167u, depth + 1u); else { c.pc = 0x0039A2D0u; return; } if (c.pc != 0x00399D1Cu) [[unlikely]] return; }
L_00399D1C:
    mmi::paddub(c.r[19], c.r[2], c.r[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 5;
L_00399D30:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_00399D4C; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 40u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 56u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00399BECu | kUnwind; return; } goto L_00399BEC; } }
L_00399D4C:
    set32(c.r[2], ld32((c.r[18].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));  if (t) { goto L_00399D60; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_00399D60:
    set32(c.r[2], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 56u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00399BECu | kUnwind; return; } goto L_00399BEC; } }
L_00399D70:
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 1;
L_00399D74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399D7Cu);  if (depth < kMaxDepth) unit_00A6(c, 159u, depth + 1u); else { c.pc = 0x0039A040u; return; } if (c.pc != 0x00399D7Cu) [[unlikely]] return; }
L_00399D7C:
    st32((c.r[18].w[0] + 24u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00399DA0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[21] = c.f[13];
    c.f[20] = c.f[14];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399DC8u); mmi::paddub(c.r[17], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x00399DC8u) [[unlikely]] return; }
L_00399DC8:
    c.f[12] = c.f[21];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399DD4u); mmi::paddub(c.r[16], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x00399DD4u) [[unlikely]] return; }
L_00399DD4:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399DE0u); mmi::paddub(c.r[5], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_00A6(c, 136u, depth + 1u); else { c.pc = 0x00399B50u; return; } if (c.pc != 0x00399DE0u) [[unlikely]] return; }
L_00399DE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399DE8u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0038(c, 50u, depth + 1u); else { c.pc = 0x001E06B0u; return; } if (c.pc != 0x00399DE8u) [[unlikely]] return; }
L_00399DE8:
    set32(c.r[3], 0u - 1u);
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_00399E28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399E00u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0038(c, 53u, depth + 1u); else { c.pc = 0x001E08B0u; return; } if (c.pc != 0x00399E00u) [[unlikely]] return; }
L_00399E00:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    st32((c.r[1].w[0] - 12952u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399E18u); st32((c.r[1].w[0] - 12948u), 0u);  if (depth < kMaxDepth) unit_00A6(c, 140u, depth + 1u); else { c.pc = 0x00399BB0u; return; } if (c.pc != 0x00399E18u) [[unlikely]] return; }
L_00399E18:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[5], ld32((c.r[1].w[0] - 12948u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399E28u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0038(c, 54u, depth + 1u); else { c.pc = 0x001E0920u; return; } if (c.pc != 0x00399E28u) [[unlikely]] return; }
L_00399E28:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00399E50:
    set32(c.r[2], c.r[4].w[0] >> 8);
    c.r[5].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[5].sd[0] < 129ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_00399E78; } }
    c.r[1].d[0] = c.r[5].sd[0] < 160ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = c.r[5].sd[0] < 224ll ? 1ull : 0ull;  if (t) { goto L_00399E7C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] - 129u);  if (t) { goto L_00399E94; } }
L_00399E78:
    c.r[2].d[0] = c.r[5].sd[0] < 224ll ? 1ull : 0ull;
    c.budget -= 1;
L_00399E7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[3].d[0] << 32;  if (t) { goto L_00399E98; } }
    c.r[1].d[0] = c.r[5].sd[0] < 240ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00399E94; } }
    set32(c.r[5], c.r[5].w[0] - 193u);
    c.budget -= 1;
L_00399E94:
    c.r[4].d[0] = c.r[3].d[0] << 32;
    c.budget -= 1;
L_00399E98:
    c.r[4].d[0] = c.r[4].d[0] >> 32;
    c.r[2].d[0] = c.r[4].sd[0] < 64ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] << 1);  if (t) { goto L_00399EBC; } }
    c.r[1].d[0] = c.r[4].sd[0] < 127ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = c.r[4].sd[0] < 128ll ? 1ull : 0ull;  if (t) { goto L_00399EC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] - 64u);  if (t) { goto L_00399EFC; } }
L_00399EBC:
    c.r[2].d[0] = c.r[4].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 1;
L_00399EC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[4].sd[0] < 159ll ? 1ull : 0ull;  if (t) { goto L_00399EE0; } }
    c.r[1].d[0] = c.r[4].sd[0] < 159ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00399EDC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[4].w[0] - 65u);  if (t) { goto L_00399EFC; } }
L_00399EDC:
    c.r[2].d[0] = c.r[4].sd[0] < 159ll ? 1ull : 0ull;
    c.budget -= 1;
L_00399EE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[5].w[0] + 1u);  if (t) { goto L_00399F00; } }
    c.r[1].d[0] = c.r[4].sd[0] < 253ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00399EFC; } }
    set32(c.r[3], c.r[3].w[0] - 159u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 2;
L_00399EFC:
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_00399F00:
    set32(c.r[2], c.r[2].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 8225u);  c.pc = t; return; }
L_00399F10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00399F20u);  if (depth < kMaxDepth) unit_00A6(c, 155u, depth + 1u); else { c.pc = 0x00399E50u; return; } if (c.pc != 0x00399F20u) [[unlikely]] return; }
L_00399F20:
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 8));
    set32(c.r[4], c.r[3].w[0] - 33u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] - 33u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = c.r[2].sd[0] < 8836ll ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00399F58; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_00399F58:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00399F70:
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    c.r[1].d[0] = c.r[3].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[3].sd[0] < 127ll ? 1ull : 0ull;  if (t) { goto L_00399F8C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull | 33088ull;  if (t) { goto L_0039A02C; } }
    c.r[1].d[0] = c.r[3].sd[0] < 127ll ? 1ull : 0ull;
    c.budget -= 1;
L_00399F8C:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[3].sd[0] < 161ll ? 1ull : 0ull;  if (t) { goto L_00399FA4; } }
    set32(c.r[2], c.r[3].w[0] + 32767u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 28031u);  if (t) { goto L_0039A02C; } }
    c.r[1].d[0] = c.r[3].sd[0] < 161ll ? 1ull : 0ull;
    c.budget -= 1;
L_00399FA4:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[3].sd[0] < 166ll ? 1ull : 0ull;  if (t) { goto L_00399FB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull | 33088ull;  if (t) { goto L_0039A02C; } }
    c.r[1].d[0] = c.r[3].sd[0] < 166ll ? 1ull : 0ull;
    c.budget -= 1;
L_00399FB8:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 176u);  if (t) { goto L_00399FDC; } }
    set32(c.r[2], c.r[28].w[0] - 27033u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[2], c.r[2].w[0] + 32767u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 28161u);  if (t) { goto L_0039A02C; } }
    set32(c.r[2], 0u + 176u);
    c.budget -= 1;
L_00399FDC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 222u);  if (t) { goto L_00399FF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull | 61114ull;  if (t) { goto L_0039A02C; } }
    set32(c.r[2], 0u + 222u);
    c.budget -= 1;
L_00399FF0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 223u);  if (t) { goto L_0039A004; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull | 61098ull;  if (t) { goto L_0039A02C; } }
    set32(c.r[2], 0u + 223u);
    c.budget -= 1;
L_0039A004:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0039A014; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull | 61097ull;  if (t) { goto L_0039A02C; } }
L_0039A014:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] + 1402u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[2], c.r[2].w[0] + 32767u);
    set32(c.r[2], c.r[2].w[0] + 28417u);
    c.budget -= 6;
L_0039A02C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0039A040:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 1u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A060u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000D(c, 67u, depth + 1u); else { c.pc = 0x00135080u; return; } if (c.pc != 0x0039A060u) [[unlikely]] return; }
L_0039A060:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A06Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000D(c, 70u, depth + 1u); else { c.pc = 0x00135120u; return; } if (c.pc != 0x0039A06Cu) [[unlikely]] return; }
L_0039A06C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] | 32769ull;
    st64((c.r[16].w[0] + 16u), c.r[2].d[0]);
    set32(c.r[2], 0u + 14u);
    st64((c.r[16].w[0] + 24u), c.r[2].d[0]);
    set32(c.r[2], 0u + 63u);
    st64((c.r[16].w[0] + 32u), 0ull);
    st64((c.r[16].w[0] + 40u), c.r[2].d[0]);
    set32(c.r[2], c.r[16].w[0] + 48u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0039A0B0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[22], c.r[4], c.r[0]);
    c.r[4].d[0] = c.r[8].d[0] & 7ull;
    set32(c.r[3], 0u + 8u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[21], c.r[5], c.r[0]);
    mmi::paddub(c.r[20], c.r[6], c.r[0]);
    mmi::paddub(c.r[19], c.r[7], c.r[0]);
    mmi::paddub(c.r[23], c.r[9], c.r[0]);
    mmi::paddub(c.r[30], c.r[10], c.r[0]);
    mmi::paddub(c.r[17], c.r[11], c.r[0]);
    mmi::paddub(c.r[18], c.r[8], c.r[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 24;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_0039A118; } }
    set32(c.r[3], 0u + 6u);
    set32(c.r[2], 0u + 2u);
    c.budget -= 2;
L_0039A118:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_0039A128; } }
    set32(c.r[3], 0u + 4u);
    set32(c.r[2], 0u + 3u);
    c.budget -= 2;
L_0039A128:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 4u);  if (t) { goto L_0039A138; } }
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], 0u + 4u);
    c.budget -= 2;
L_0039A138:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_0039A144; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0039A144:
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    mmi::mult(c, 0, c.r[17].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));  if (t) { goto L_0039A160; } }
    set32(c.r[2], c.r[3].w[0] + 31u);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.budget -= 2;
L_0039A160:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] >= 0; c.r[2].d[0] = c.r[3].d[0] & 31ull;  if (t) { goto L_0039A174; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0039A174; } }
    set32(c.r[2], c.r[2].w[0] - 32u);
    c.budget -= 1;
L_0039A174:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 7u);  if (t) { goto L_0039A184; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[5], 0u + 7u);
    c.budget -= 2;
L_0039A184:
    mmi::paddub(c.r[4], c.r[22], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A194u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000D(c, 63u, depth + 1u); else { c.pc = 0x00134EF0u; return; } if (c.pc != 0x0039A194u) [[unlikely]] return; }
L_0039A194:
    set32(c.r[5], 0u + 7u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A1A0u); mmi::paddub(c.r[4], c.r[22], c.r[0]);  if (depth < kMaxDepth) unit_000D(c, 70u, depth + 1u); else { c.pc = 0x00135120u; return; } if (c.pc != 0x0039A1A0u) [[unlikely]] return; }
L_0039A1A0:
    c.r[2].d[0] = c.r[20].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[19].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[18].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[4].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[23].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[30].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] | 5ull;
    st64((c.r[22].w[0] + 16u), c.r[3].d[0]);
    set32(c.r[3], 0u + 14u);
    st64((c.r[22].w[0] + 24u), c.r[3].d[0]);
    set32(c.r[3], 0u + 63u);
    st64((c.r[22].w[0] + 32u), 0ull);
    st64((c.r[22].w[0] + 40u), c.r[3].d[0]);
    st64((c.r[22].w[0] + 48u), c.r[4].d[0]);
    set32(c.r[3], 0u + 80u);
    st64((c.r[22].w[0] + 56u), c.r[3].d[0]);
    st64((c.r[22].w[0] + 64u), c.r[2].d[0]);
    set32(c.r[2], 0u + 81u);
    st64((c.r[22].w[0] + 72u), c.r[2].d[0]);
    set32(c.r[5], ld32((c.r[29].w[0] + 160u)));
    c.r[7].d[0] = c.r[17].d[0] << 32;
    c.r[3].d[0] = c.r[16].d[0] << 32;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    set32(c.r[4], 0u + 82u);
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.r[5].d[0] = c.r[7].d[0] | c.r[5].d[0];
    st64((c.r[22].w[0] + 80u), c.r[5].d[0]);
    st64((c.r[22].w[0] + 88u), c.r[4].d[0]);
    set32(c.r[2], 0u + 83u);
    st64((c.r[22].w[0] + 96u), 0ull);
    st64((c.r[22].w[0] + 104u), c.r[2].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    set32(c.r[17], c.r[22].w[0] + 128u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st64((c.r[22].w[0] + 112u), c.r[2].d[0]);
    mmi::paddub(c.r[6], c.r[21], c.r[0]);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    mmi::paddub(c.r[8], c.r[0], c.r[0]);
    c.budget -= 59;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A28Cu); st64((c.r[22].w[0] + 120u), 0ull);  if (depth < kMaxDepth) unit_000D(c, 65u, depth + 1u); else { c.pc = 0x00134FB0u; return; } if (c.pc != 0x0039A28Cu) [[unlikely]] return; }
L_0039A28C:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A298u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000D(c, 70u, depth + 1u); else { c.pc = 0x00135120u; return; } if (c.pc != 0x0039A298u) [[unlikely]] return; }
L_0039A298:
    set32(c.r[2], c.r[22].w[0] + 144u);
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
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0039A2D0:
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
    set32(c.r[2], c.r[8].w[0] + 1728u);
    set32(c.r[3], ld32((c.r[29].w[0] + 216u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[2], c.r[9].w[0] + 1936u);
    c.f[20] = c.f[12];
    set32(c.r[2], c.r[2].w[0] << 4);
    mmi::paddub(c.r[22], c.r[4], c.r[0]);
    mmi::paddub(c.r[21], c.r[5], c.r[0]);
    mmi::paddub(c.r[20], c.r[6], c.r[0]);
    mmi::paddub(c.r[19], c.r[7], c.r[0]);
    mmi::paddub(c.r[18], c.r[10], c.r[0]);
    c.budget -= 26;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[29].w[0] + 192u), c.r[2].w[0]);  if (t) { goto L_0039A348; } }
    set32(c.r[2], c.r[8].w[0] + c.r[11].w[0]);
    set32(c.r[2], c.r[2].w[0] + 1728u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[2].w[0] << 4);  if (t) { goto L_0039A364; } }
L_0039A348:
    c.budget -= 2;
    { const bool t = c.r[11].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[11].w[0]) >> 1));  if (t) { goto L_0039A358; } }
    set32(c.r[2], c.r[11].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_0039A358:
    set32(c.r[2], c.r[8].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 1728u);
    set32(c.r[16], c.r[2].w[0] << 4);
    c.budget -= 3;
L_0039A364:
    set32(c.r[4], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 216u)));
    set32(c.r[17], 0u + 336u);
    set32(c.r[2], 0u + 176u);
    set32(c.r[4], c.r[4].w[0] >> 1);
    set32(c.r[4], c.r[9].w[0] + c.r[4].w[0]);
    if (c.r[3].d[0] != 0) c.r[17].d[0] = c.r[2].d[0];
    set32(c.r[2], c.r[4].w[0] + 1936u);
    set32(c.r[5], 0u + 8u);
    set32(c.r[30], c.r[2].w[0] << 4);
    mmi::paddub(c.r[4], c.r[22], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A3A0u); mmi::paddub(c.r[23], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000D(c, 63u, depth + 1u); else { c.pc = 0x00134EF0u; return; } if (c.pc != 0x0039A3A0u) [[unlikely]] return; }
L_0039A3A0:
    set32(c.r[5], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A3ACu); mmi::paddub(c.r[4], c.r[22], c.r[0]);  if (depth < kMaxDepth) unit_000D(c, 70u, depth + 1u); else { c.pc = 0x00135120u; return; } if (c.pc != 0x0039A3ACu) [[unlikely]] return; }
L_0039A3AC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] | 3ull;
    st64((c.r[22].w[0] + 16u), c.r[3].d[0]);
    set32(c.r[3], 0u + 14u);
    st64((c.r[22].w[0] + 24u), c.r[3].d[0]);
    set32(c.r[3], 0u + 63u);
    st64((c.r[22].w[0] + 32u), 0ull);
    st64((c.r[22].w[0] + 40u), c.r[3].d[0]);
    set32(c.r[3], 0u + 5u);
    set32(c.r[2], c.r[20].w[0] + 16288u);
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] | 21824ull;
    c.r[4].d[0] = c.r[21].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    c.r[2].d[0] = c.r[2].d[0] << 37;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st64((c.r[22].w[0] + 48u), c.r[2].d[0]);
    set32(c.r[2], 0u + 6u);
    st64((c.r[22].w[0] + 56u), c.r[2].d[0]);
    set32(c.r[2], 0u + 96u);
    st64((c.r[22].w[0] + 64u), c.r[2].d[0]);
    set32(c.r[2], 0u + 20u);
    st64((c.r[22].w[0] + 72u), c.r[2].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x64000000u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] | 32769ull;
    st64((c.r[22].w[0] + 80u), c.r[2].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[2].d[0] = c.r[2].d[0] | 21264ull;
    st64((c.r[22].w[0] + 88u), c.r[2].d[0]);
    c.r[20].d[0] = c.r[19].d[0] << 40;
    set32(c.r[2], c.r[19].w[0] >> 24);
    c.budget -= 43;
    { const bool t = c.r[2].sd[0] < 0; c.r[20].d[0] = c.r[20].d[0] >> 40;  if (t) { goto L_0039A464; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0039A480; } }
L_0039A464:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_0039A480:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039A488u); c.f[12] = fp::mul(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x0039A488u) [[unlikely]] return; }
L_0039A488:
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[4], c.r[23].w[0] + c.r[16].w[0]);
    c.r[4].d[0] = c.r[4].d[0] << 32;
    set32(c.r[2], c.r[2].w[0] << 24);
    c.r[20].d[0] = c.r[20].d[0] | c.r[2].d[0];
    set32(c.r[3], c.r[23].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = c.r[3].d[0] << 32;
    set32(c.r[3], ld32((c.r[29].w[0] + 192u)));
    c.r[2].d[0] = c.r[20].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    mmi::paddub(c.r[3], c.r[3], c.r[0]);
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.r[3].d[0] = c.r[18].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[7].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = c.r[30].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    set32(c.r[4], 0u + 342u);
    st64((c.r[22].w[0] + 96u), c.r[4].d[0]);
    st64((c.r[22].w[0] + 104u), c.r[2].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[6].d[0] = c.r[7].d[0] | c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st64((c.r[22].w[0] + 112u), c.r[2].d[0]);
    c.r[5].d[0] = c.r[17].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01500000u);
    st64((c.r[22].w[0] + 120u), c.r[6].d[0]);
    c.r[2].d[0] = c.r[5].d[0] | c.r[2].d[0];
    st64((c.r[22].w[0] + 128u), c.r[2].d[0]);
    c.r[3].d[0] = c.r[7].d[0] | c.r[3].d[0];
    st64((c.r[22].w[0] + 136u), c.r[3].d[0]);
    set32(c.r[2], c.r[22].w[0] + 144u);
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
    c.budget -= 51;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_0039A560:
    mmi::paddub(c.r[7], c.r[5], c.r[0]);
    c.r[3].d[0] = ld64((c.r[4].w[0]));
    c.budget -= 2;
L_0039A568:
    set32(c.r[6], 0u + 32u);
    set32(c.r[4], c.r[4].w[0] + 8u);
    c.budget -= 2;
L_0039A570:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] < 0; mmi::paddub(c.r[2], c.r[4], c.r[0]);  if (t) { goto L_0039A590; } }
    c.r[2].d[0] = ld64((c.r[4].w[0]));
    st64((c.r[7].w[0]), c.r[2].d[0]);
    set32(c.r[4], c.r[4].w[0] + 8u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 8u);  if (t) { goto L_0039A5F0; } }
    mmi::paddub(c.r[2], c.r[4], c.r[0]);
    c.budget -= 1;
L_0039A590:
    c.r[8].d[0] = ld64((c.r[2].w[0]));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] != 0ull; set32(c.r[4], c.r[2].w[0] + 8u);  if (t) { goto L_0039A5B4; } }
    c.r[3].d[0] = c.r[7].d[0] << 32;
    c.r[2].d[0] = c.r[5].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] - c.r[2].d[0];  if (t) { goto L_0039A604; } }
L_0039A5B4:
    c.r[2].d[0] = c.r[8].d[0] << 40;
    c.r[2].d[0] = c.r[2].d[0] >> 40;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[9], c.r[7].w[0] - c.r[2].w[0]);
    c.r[8].d[0] = c.r[8].d[0] >> 24;
    c.budget -= 7;
L_0039A5D0:
    c.r[2].d[0] = ld64((c.r[9].w[0]));
    c.r[8].d[0] = c.r[8].d[0] + static_cast<std::uint64_t>(-1ll);
    st64((c.r[7].w[0]), c.r[2].d[0]);
    set32(c.r[9], c.r[9].w[0] + 8u);
    set32(c.r[7], c.r[7].w[0] + 8u);
    c.budget -= 7;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039A5D0u | kUnwind; return; } goto L_0039A5D0; } }
    c.budget -= 1;
L_0039A5F0:
    c.r[6].d[0] = c.r[6].d[0] + static_cast<std::uint64_t>(-1ll);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull; c.r[3].d[0] = c.r[3].d[0] << 1;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039A570u | kUnwind; return; } goto L_0039A570; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld64((c.r[4].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039A568u | kUnwind; return; } goto L_0039A568; } }
L_0039A604:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0039A610:
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    mmi::paddub(c.r[7], c.r[5], c.r[0]);
    c.budget -= 2;
L_0039A618:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull; c.r[2].d[0] = c.r[3].d[0] & c.r[6].d[0];  if (t) { goto L_0039A634; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    c.r[6].d[0] = 0ull | 32768ull;
    set32(c.r[4], c.r[4].w[0] + 2u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[6].d[0];
    c.budget -= 5;
L_0039A634:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0039A6E4; } }
    c.r[2].d[0] = ld16((c.r[4].w[0]));
    c.r[8].d[0] = c.r[2].d[0] >> 11;
    c.budget -= 4;
    { const bool t = c.r[8].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] + 2u);  if (t) { goto L_0039A654; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 2047ull;  if (t) { goto L_0039A660; } }
L_0039A654:
    c.r[8].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[4], c.r[4].w[0] + 2u);
    c.budget -= 3;
L_0039A660:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[2].d[0] << 32;  goto L_0039A6B0; }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { goto L_0039A688; } }
    c.r[3].d[0] = c.r[7].d[0] << 32;
    c.r[2].d[0] = c.r[5].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] - c.r[2].d[0];  if (t) { goto L_0039A704; } }
L_0039A688:
    st16((c.r[7].w[0]), static_cast<std::uint16_t>(0u));
    set32(c.r[7], c.r[7].w[0] + 2u);
    c.r[8].d[0] = c.r[8].d[0] + static_cast<std::uint64_t>(-1ll);
    c.budget -= 7;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039A688u | kUnwind; return; } goto L_0039A688; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 1);  if (t) { goto L_0039A6FC; } }
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.budget -= 1;
L_0039A6B0:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[9], c.r[7].w[0] - c.r[2].w[0]);
    c.budget -= 4;
L_0039A6C0:
    c.r[2].d[0] = ld16((c.r[9].w[0]));
    c.r[8].d[0] = c.r[8].d[0] + static_cast<std::uint64_t>(-1ll);
    st16((c.r[7].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[9], c.r[9].w[0] + 2u);
    set32(c.r[7], c.r[7].w[0] + 2u);
    c.budget -= 7;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039A6C0u | kUnwind; return; } goto L_0039A6C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039A6F8; } }
L_0039A6E4:
    c.r[2].d[0] = ld16((c.r[4].w[0]));
    st16((c.r[7].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[4].w[0] + 2u);
    set32(c.r[7], c.r[7].w[0] + 2u);
    c.budget -= 5;
L_0039A6F8:
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 1);
    c.budget -= 1;
L_0039A6FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039A618u | kUnwind; return; } goto L_0039A618; } }
L_0039A704:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
}

}
