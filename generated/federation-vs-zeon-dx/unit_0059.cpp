#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0059[4096] = {
    1, 0, 2, 0, 0, 3, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0,
    0, 0, 0, 0, 0, 0, 7, 0, 8, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0,
    11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 13, 0, 0, 14, 0, 0, 0, 0, 0, 0,
    15, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 18, 0, 0, 19, 0, 0, 0, 0, 20, 0, 0, 0,
    21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 23, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 28, 0, 0, 29, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 34, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 45, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 50, 0, 0, 51, 0, 0, 52, 0, 0,
    0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59,
    0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 61, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0,
    64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 67, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 72, 0, 73,
    0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 76, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 78, 0, 79, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 82, 0,
    0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 84, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 89, 0, 0, 0,
    0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0,
    0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    104, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 119, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 135, 0, 136, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0,
    138, 0, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 145, 0, 0, 146, 0, 0, 147, 0, 0, 0,
    148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 151, 0, 0, 152, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 154, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 166, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 171, 0, 0, 0, 0, 172, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 175, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 179, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0,
    181, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 184, 0, 0, 0, 0, 0, 185, 0, 0,
    0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 198, 0, 0, 199, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 206, 0, 0,
    207, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 210, 0, 0, 0, 0, 0, 211, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 215, 0, 0, 0, 216, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0,
    218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 225, 0, 0, 226, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 233, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 236, 0, 237, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 243, 0, 244, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 247, 0, 0, 0, 0, 248, 0, 249, 0, 250, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 255, 0, 0, 0, 256, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0,
    0, 0, 0, 0, 259, 0, 0, 260, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0,
    0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268,
    0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 273, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 276, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    282, 0, 283, 0, 284, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0,
    0, 287, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0,
    0, 291, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 295,
    0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 300, 0, 0, 301,
    0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 308, 0, 0, 0, 0,
    309, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 312, 0, 313, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0059(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00264000;
    case 2u: goto L_00264008;
    case 3u: goto L_00264014;
    case 4u: goto L_00264030;
    case 5u: goto L_00264040;
    case 6u: goto L_00264074;
    case 7u: goto L_00264098;
    case 8u: goto L_002640A0;
    case 9u: goto L_002640AC;
    case 10u: goto L_002640EC;
    case 11u: goto L_00264100;
    case 12u: goto L_00264150;
    case 13u: goto L_00264158;
    case 14u: goto L_00264164;
    case 15u: goto L_00264180;
    case 16u: goto L_00264190;
    case 17u: goto L_002641C8;
    case 18u: goto L_002641D0;
    case 19u: goto L_002641DC;
    case 20u: goto L_002641F0;
    case 21u: goto L_00264200;
    case 22u: goto L_0026423C;
    case 23u: goto L_00264244;
    case 24u: goto L_00264250;
    case 25u: goto L_00264260;
    case 26u: goto L_00264270;
    case 27u: goto L_002642A8;
    case 28u: goto L_002642B0;
    case 29u: goto L_002642BC;
    case 30u: goto L_002642D0;
    case 31u: goto L_00264310;
    case 32u: goto L_00264390;
    case 33u: goto L_00264460;
    case 34u: goto L_0026448C;
    case 35u: goto L_00264498;
    case 36u: goto L_002644E4;
    case 37u: goto L_0026452C;
    case 38u: goto L_00264550;
    case 39u: goto L_0026459C;
    case 40u: goto L_002645D4;
    case 41u: goto L_002645E0;
    case 42u: goto L_002645F0;
    case 43u: goto L_00264688;
    case 44u: goto L_002646B0;
    case 45u: goto L_00264704;
    case 46u: goto L_00264710;
    case 47u: goto L_0026474C;
    case 48u: goto L_00264760;
    case 49u: goto L_002647D0;
    case 50u: goto L_002647DC;
    case 51u: goto L_002647E8;
    case 52u: goto L_002647F4;
    case 53u: goto L_00264814;
    case 54u: goto L_00264840;
    case 55u: goto L_0026486C;
    case 56u: goto L_00264898;
    case 57u: goto L_002648B0;
    case 58u: goto L_002648D0;
    case 59u: goto L_002648FC;
    case 60u: goto L_0026491C;
    case 61u: goto L_00264928;
    case 62u: goto L_00264940;
    case 63u: goto L_00264960;
    case 64u: goto L_00264980;
    case 65u: goto L_002649B4;
    case 66u: goto L_002649DC;
    case 67u: goto L_002649E4;
    case 68u: goto L_00264A18;
    case 69u: goto L_00264AA0;
    case 70u: goto L_00264AB0;
    case 71u: goto L_00264AE0;
    case 72u: goto L_00264AF4;
    case 73u: goto L_00264AFC;
    case 74u: goto L_00264B20;
    case 75u: goto L_00264B2C;
    case 76u: goto L_00264B88;
    case 77u: goto L_00264BA0;
    case 78u: goto L_00264BB4;
    case 79u: goto L_00264BBC;
    case 80u: goto L_00264BC4;
    case 81u: goto L_00264BEC;
    case 82u: goto L_00264BF8;
    case 83u: goto L_00264C10;
    case 84u: goto L_00264C2C;
    case 85u: goto L_00264C34;
    case 86u: goto L_00264CA0;
    case 87u: goto L_00264CB4;
    case 88u: goto L_00264CDC;
    case 89u: goto L_00264CF0;
    case 90u: goto L_00264D10;
    case 91u: goto L_00264E88;
    case 92u: goto L_00264EC4;
    case 93u: goto L_00264EF0;
    case 94u: goto L_00264FAC;
    case 95u: goto L_00264FC8;
    case 96u: goto L_00264FE0;
    case 97u: goto L_00265020;
    case 98u: goto L_00265074;
    case 99u: goto L_00265090;
    case 100u: goto L_002650B0;
    case 101u: goto L_002650F0;
    case 102u: goto L_00265154;
    case 103u: goto L_002651B8;
    case 104u: goto L_00265200;
    case 105u: goto L_00265220;
    case 106u: goto L_002654C0;
    case 107u: goto L_00265554;
    case 108u: goto L_002655C0;
    case 109u: goto L_00265614;
    case 110u: goto L_00265634;
    case 111u: goto L_002656C4;
    case 112u: goto L_002656E4;
    case 113u: goto L_0026571C;
    case 114u: goto L_002657B8;
    case 115u: goto L_002657DC;
    case 116u: goto L_00265874;
    case 117u: goto L_002658A8;
    case 118u: goto L_002658D8;
    case 119u: goto L_00265904;
    case 120u: goto L_00265924;
    case 121u: goto L_00265990;
    case 122u: goto L_002659D4;
    case 123u: goto L_00265A38;
    case 124u: goto L_00265BE0;
    case 125u: goto L_00265C74;
    case 126u: goto L_00265CE0;
    case 127u: goto L_00265DB0;
    case 128u: goto L_00265DD0;
    case 129u: goto L_00265E08;
    case 130u: goto L_00265E78;
    case 131u: goto L_00265EF0;
    case 132u: goto L_00265F30;
    case 133u: goto L_00265F60;
    case 134u: goto L_00265FB0;
    case 135u: goto L_00265FC4;
    case 136u: goto L_00265FCC;
    case 137u: goto L_00265FE0;
    case 138u: goto L_00266000;
    case 139u: goto L_00266014;
    case 140u: goto L_00266024;
    case 141u: goto L_00266030;
    case 142u: goto L_00266078;
    case 143u: goto L_002660AC;
    case 144u: goto L_002660C0;
    case 145u: goto L_002660D8;
    case 146u: goto L_002660E4;
    case 147u: goto L_002660F0;
    case 148u: goto L_00266100;
    case 149u: goto L_00266138;
    case 150u: goto L_002661B4;
    case 151u: goto L_0026620C;
    case 152u: goto L_00266218;
    case 153u: goto L_00266230;
    case 154u: goto L_00266284;
    case 155u: goto L_0026629C;
    case 156u: goto L_0026631C;
    case 157u: goto L_00266338;
    case 158u: goto L_00266350;
    case 159u: goto L_002663E4;
    case 160u: goto L_00266424;
    case 161u: goto L_00266438;
    case 162u: goto L_00266480;
    case 163u: goto L_002664A8;
    case 164u: goto L_002664C0;
    case 165u: goto L_002664D8;
    case 166u: goto L_002664F0;
    case 167u: goto L_0026653C;
    case 168u: goto L_00266568;
    case 169u: goto L_00266590;
    case 170u: goto L_002665D4;
    case 171u: goto L_002665E0;
    case 172u: goto L_002665F4;
    case 173u: goto L_0026661C;
    case 174u: goto L_00266658;
    case 175u: goto L_00266670;
    case 176u: goto L_002666AC;
    case 177u: goto L_002666C4;
    case 178u: goto L_002666D8;
    case 179u: goto L_002666F0;
    case 180u: goto L_00266768;
    case 181u: goto L_00266780;
    case 182u: goto L_0026678C;
    case 183u: goto L_002667CC;
    case 184u: goto L_002667DC;
    case 185u: goto L_002667F4;
    case 186u: goto L_00266810;
    case 187u: goto L_00266858;
    case 188u: goto L_00266868;
    case 189u: goto L_002668CC;
    case 190u: goto L_0026692C;
    case 191u: goto L_00266948;
    case 192u: goto L_002669B0;
    case 193u: goto L_002669BC;
    case 194u: goto L_002669F4;
    case 195u: goto L_00266A4C;
    case 196u: goto L_00266A6C;
    case 197u: goto L_00266AB4;
    case 198u: goto L_00266AC8;
    case 199u: goto L_00266AD4;
    case 200u: goto L_00266AE8;
    case 201u: goto L_00266B64;
    case 202u: goto L_00266B8C;
    case 203u: goto L_00266BB0;
    case 204u: goto L_00266C20;
    case 205u: goto L_00266C5C;
    case 206u: goto L_00266C74;
    case 207u: goto L_00266C80;
    case 208u: goto L_00266C98;
    case 209u: goto L_00266CD0;
    case 210u: goto L_00266CD8;
    case 211u: goto L_00266CF0;
    case 212u: goto L_00266DB0;
    case 213u: goto L_00266DF4;
    case 214u: goto L_00266E28;
    case 215u: goto L_00266E34;
    case 216u: goto L_00266E44;
    case 217u: goto L_00266E5C;
    case 218u: goto L_00266E80;
    case 219u: goto L_00266EBC;
    case 220u: goto L_00266ECC;
    case 221u: goto L_00266EE8;
    case 222u: goto L_00266F30;
    case 223u: goto L_00266F3C;
    case 224u: goto L_00266FA4;
    case 225u: goto L_00266FB8;
    case 226u: goto L_00266FC4;
    case 227u: goto L_00266FD8;
    case 228u: goto L_0026702C;
    case 229u: goto L_00267068;
    case 230u: goto L_00267090;
    case 231u: goto L_002670B0;
    case 232u: goto L_0026712C;
    case 233u: goto L_00267140;
    case 234u: goto L_0026714C;
    case 235u: goto L_00267170;
    case 236u: goto L_00267198;
    case 237u: goto L_002671A0;
    case 238u: goto L_002671B0;
    case 239u: goto L_00267290;
    case 240u: goto L_002672D0;
    case 241u: goto L_002672E4;
    case 242u: goto L_00267320;
    case 243u: goto L_00267330;
    case 244u: goto L_00267338;
    case 245u: goto L_00267350;
    case 246u: goto L_002673A4;
    case 247u: goto L_002673B0;
    case 248u: goto L_002673C4;
    case 249u: goto L_002673CC;
    case 250u: goto L_002673D4;
    case 251u: goto L_002673F0;
    case 252u: goto L_002674A0;
    case 253u: goto L_002674AC;
    case 254u: goto L_002674D8;
    case 255u: goto L_002674E0;
    case 256u: goto L_002674F0;
    case 257u: goto L_002675A4;
    case 258u: goto L_002675F8;
    case 259u: goto L_00267610;
    case 260u: goto L_0026761C;
    case 261u: goto L_00267634;
    case 262u: goto L_00267650;
    case 263u: goto L_0026769C;
    case 264u: goto L_002676AC;
    case 265u: goto L_00267710;
    case 266u: goto L_00267770;
    case 267u: goto L_0026778C;
    case 268u: goto L_002677FC;
    case 269u: goto L_00267808;
    case 270u: goto L_00267840;
    case 271u: goto L_00267898;
    case 272u: goto L_002678B8;
    case 273u: goto L_002678CC;
    case 274u: goto L_002678E0;
    case 275u: goto L_0026795C;
    case 276u: goto L_00267984;
    case 277u: goto L_0026798C;
    case 278u: goto L_002679C0;
    case 279u: goto L_00267A1C;
    case 280u: goto L_00267A30;
    case 281u: goto L_00267A48;
    case 282u: goto L_00267A80;
    case 283u: goto L_00267A88;
    case 284u: goto L_00267A90;
    case 285u: goto L_00267AA0;
    case 286u: goto L_00267B64;
    case 287u: goto L_00267B84;
    case 288u: goto L_00267B9C;
    case 289u: goto L_00267BB0;
    case 290u: goto L_00267BF0;
    case 291u: goto L_00267C04;
    case 292u: goto L_00267C18;
    case 293u: goto L_00267C30;
    case 294u: goto L_00267C6C;
    case 295u: goto L_00267C7C;
    case 296u: goto L_00267C98;
    case 297u: goto L_00267CCC;
    case 298u: goto L_00267CD8;
    case 299u: goto L_00267D5C;
    case 300u: goto L_00267D70;
    case 301u: goto L_00267D7C;
    case 302u: goto L_00267D90;
    case 303u: goto L_00267DE4;
    case 304u: goto L_00267E20;
    case 305u: goto L_00267E48;
    case 306u: goto L_00267E60;
    case 307u: goto L_00267ED8;
    case 308u: goto L_00267EEC;
    case 309u: goto L_00267F00;
    case 310u: goto L_00267F18;
    case 311u: goto L_00267F40;
    case 312u: goto L_00267F48;
    case 313u: goto L_00267F50;
    case 314u: goto L_00267F60;
    default: bad_entry(c, 0x00264000u); return;
    }
L_00264000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264008u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 31u, depth + 1u); else { c.pc = 0x00264310u; return; } if (c.pc != 0x00264008u) [[unlikely]] return; }
L_00264008:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264014u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_0023(c, 144u, depth + 1u); else { c.pc = 0x0018DAB0u; return; } if (c.pc != 0x00264014u) [[unlikely]] return; }
L_00264014:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00264030:
    set32(c.r[3], 0u + 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00264040:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_00264100; } }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264074u); st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x00264074u) [[unlikely]] return; }
L_00264074:
    c.r[3].d[0] = c.r[2].d[0] & 31ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 12672u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264098u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x00264098u) [[unlikely]] return; }
L_00264098:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002640A0u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 16u, depth + 1u); else { c.pc = 0x0013C860u; return; } if (c.pc != 0x002640A0u) [[unlikely]] return; }
L_002640A0:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002640ACu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_002A(c, 386u, depth + 1u); else { c.pc = 0x001AB460u; return; } if (c.pc != 0x002640ACu) [[unlikely]] return; }
L_002640AC:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00264100; } }
    set32(c.r[2], 0u + 2u);
    st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 640u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 9u);  if (t) { goto L_002640F8; } }
    set32(c.r[5], 0u + 9u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002640ECu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x00197670u; return; } if (c.pc != 0x002640ECu) [[unlikely]] return; }
L_002640EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[2] = ld32((c.r[16].w[0] + 1200u));  if (t) { goto L_00264104; } }
    set32(c.r[5], 0u + 9u);
    c.budget -= 1;
L_002640F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264100u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x00264100u) [[unlikely]] return; }
L_00264100:
    c.f[2] = ld32((c.r[16].w[0] + 1200u));
    c.budget -= 1;
L_00264104:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 1200u), c.f[1]);  if (t) { goto L_00264164; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 1260u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[3], 0u - 3u);
    set32(c.r[5], c.r[2].w[0] + 12464u);
    c.r[2].d[0] = c.r[6].d[0] & c.r[3].d[0];
    set32(c.r[6], 0u + 2u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264150u); st32((c.r[16].w[0] + 1260u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0059(c, 33u, depth + 1u); else { c.pc = 0x00264460u; return; } if (c.pc != 0x00264150u) [[unlikely]] return; }
L_00264150:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264158u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 31u, depth + 1u); else { c.pc = 0x00264310u; return; } if (c.pc != 0x00264158u) [[unlikely]] return; }
L_00264158:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264164u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_0023(c, 144u, depth + 1u); else { c.pc = 0x0018DAB0u; return; } if (c.pc != 0x00264164u) [[unlikely]] return; }
L_00264164:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00264180:
    set32(c.r[3], 0u + 255u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 532u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00264190:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 1260u)));
    set32(c.r[2], 0u - 3u);
    set32(c.r[5], c.r[28].w[0] - 29064u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[4].w[0] + 1260u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 369u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002641C8u); set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0059(c, 33u, depth + 1u); else { c.pc = 0x00264460u; return; } if (c.pc != 0x002641C8u) [[unlikely]] return; }
L_002641C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002641D0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 31u, depth + 1u); else { c.pc = 0x00264310u; return; } if (c.pc != 0x002641D0u) [[unlikely]] return; }
L_002641D0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002641DCu); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_0023(c, 144u, depth + 1u); else { c.pc = 0x0018DAB0u; return; } if (c.pc != 0x002641DCu) [[unlikely]] return; }
L_002641DC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002641F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00264200:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], ld32((c.r[4].w[0] + 1260u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[3], 0u - 3u);
    set32(c.r[5], c.r[2].w[0] + 12488u);
    c.r[2].d[0] = c.r[6].d[0] & c.r[3].d[0];
    st32((c.r[4].w[0] + 1260u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 369u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026423Cu); set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0059(c, 33u, depth + 1u); else { c.pc = 0x00264460u; return; } if (c.pc != 0x0026423Cu) [[unlikely]] return; }
L_0026423C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264244u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 31u, depth + 1u); else { c.pc = 0x00264310u; return; } if (c.pc != 0x00264244u) [[unlikely]] return; }
L_00264244:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264250u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_0023(c, 144u, depth + 1u); else { c.pc = 0x0018DAB0u; return; } if (c.pc != 0x00264250u) [[unlikely]] return; }
L_00264250:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00264260:
    set32(c.r[3], 0u + 255u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 532u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00264270:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 1260u)));
    set32(c.r[2], 0u - 3u);
    set32(c.r[5], c.r[28].w[0] - 29056u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[4].w[0] + 1260u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 369u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002642A8u); set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0059(c, 33u, depth + 1u); else { c.pc = 0x00264460u; return; } if (c.pc != 0x002642A8u) [[unlikely]] return; }
L_002642A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002642B0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 31u, depth + 1u); else { c.pc = 0x00264310u; return; } if (c.pc != 0x002642B0u) [[unlikely]] return; }
L_002642B0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002642BCu); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_0023(c, 144u, depth + 1u); else { c.pc = 0x0018DAB0u; return; } if (c.pc != 0x002642BCu) [[unlikely]] return; }
L_002642BC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002642D0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002642E8; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00264308; } }
L_002642E8:
    st32((c.r[4].w[0] + 108u), 0u);
    st32((c.r[4].w[0] + 104u), 0u);
    st8((c.r[4].w[0] + 7775u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 3u);
    st8((c.r[4].w[0] + 7815u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 1260u), 0u);
    c.budget -= 8;
L_00264308:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00264310:
    st32((c.r[4].w[0] + 108u), 0u);
    st32((c.r[4].w[0] + 104u), 0u);
    st8((c.r[4].w[0] + 7775u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 11u);
    st8((c.r[4].w[0] + 7815u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 583u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 30u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 1260u), 0u);
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 640u)));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00264354; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 584u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_00264354; } }
    st8((c.r[5].w[0] + 642u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00264354:
    set32(c.r[5], ld32((c.r[4].w[0] + 604u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    c.r[1].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00264384; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00264384; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8384u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << (c.r[4].w[0] & 31u));
    st32((c.r[5].w[0] + 1272u), c.r[3].w[0]);
    c.budget -= 4;
L_00264384:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00264390:
    c.f[1] = ld32((c.r[4].w[0] + 1200u));
    c.f[2] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002643CC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 1200u), c.f[0]);  if (t) { goto L_0026444C; } }
L_002643CC:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0026444C; } }
    set32(c.r[3], 0u + 3u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0026444C; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    set32(c.r[3], 0u + 33u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0026444C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 604u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 8391u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0026444C; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 144u)));
    set32(c.r[5], c.r[5].w[0] - 32u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] << (c.r[5].w[0] & 31u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 144u);  if (t) { goto L_0026444C; } }
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st32((c.r[6].w[0]), c.r[3].w[0]);
    c.budget -= 3;
L_0026444C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00264460:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[16], c.r[6], c.r[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026448Cu); mmi::paddub(c.r[18], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 38u, depth + 1u); else { c.pc = 0x00264550u; return; } if (c.pc != 0x0026448Cu) [[unlikely]] return; }
L_0026448C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));  if (t) { goto L_00264504; } }
    c.r[3].d[0] = c.r[4].d[0] & 128ull;
    c.budget -= 1;
L_00264498:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[6].d[0] = c.r[4].d[0] & 127ull;  if (t) { goto L_002644C0; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 1260u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] << (c.r[6].w[0] & 31u));
    c.r[4].d[0] = ~(c.r[4].d[0] | 0ull);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 1260u), c.r[3].w[0]);  if (t) { goto L_00264500; } }
L_002644C0:
    set32(c.r[3], ld32((c.r[18].w[0] + 1260u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[19], c.r[4].w[0] << (c.r[6].w[0] & 31u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[19].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002644E8; } }
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002644E4u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_004C(c, 118u, depth + 1u); else { c.pc = 0x002320C0u; return; } if (c.pc != 0x002644E4u) [[unlikely]] return; }
L_002644E4:
    c.budget -= 1;
L_002644E8:
    set32(c.r[3], ld32((c.r[18].w[0] + 1260u)));
    c.r[4].d[0] = ~(c.r[19].d[0] | 0ull);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    st32((c.r[18].w[0] + 1260u), c.r[3].w[0]);
    c.budget -= 6;
L_00264500:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 1;
L_00264504:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[3].d[0] = c.r[4].d[0] & 128ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00264498u | kUnwind; return; } goto L_00264498; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 369u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0026452C; } }
    set32(c.r[5], c.r[18].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026452Cu); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_004B(c, 27u, depth + 1u); else { c.pc = 0x0022C720u; return; } if (c.pc != 0x0026452Cu) [[unlikely]] return; }
L_0026452C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00264550:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], c.r[5].w[0] << 6);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[0] = ld32((c.r[3].w[0] + 2032u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 12672u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    st32((c.r[29].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 2036u));
    st32((c.r[29].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 2040u));
    st32((c.r[29].w[0] + 40u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026459Cu); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_002A(c, 386u, depth + 1u); else { c.pc = 0x001AB460u; return; } if (c.pc != 0x0026459Cu) [[unlikely]] return; }
L_0026459C:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 331u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 10u);  if (t) { goto L_002645D8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 6u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002645D4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8391u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002645D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002645D4u);  if (depth < kMaxDepth) unit_0024(c, 186u, depth + 1u); else { c.pc = 0x00193000u; return; } if (c.pc != 0x002645D4u) [[unlikely]] return; }
L_002645D4:
    set32(c.r[5], 0u + 10u);
    c.budget -= 1;
L_002645D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002645E0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x00197670u; return; } if (c.pc != 0x002645E0u) [[unlikely]] return; }
L_002645E0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002645F0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0] + 612u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 736u)));
    mmi::paddub(c.r[20], c.r[4], c.r[0]);
    set32(c.r[16], ld32((c.r[5].w[0] + 264u)));
    c.r[6].d[0] = ld8((c.r[17].w[0] + 6u));
    c.r[4].d[0] = ld8((c.r[17].w[0] + 5u));
    c.r[4].d[0] = c.r[4].d[0] & 3ull;
    c.budget -= 16;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[18], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 1));  if (t) { goto L_00264634; } }
    set32(c.r[18], 0u + 1u);
    c.budget -= 1;
L_00264634:
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] > 0; mmi::paddub(c.r[19], c.r[18], c.r[0]);  if (t) { goto L_00264640; } }
    set32(c.r[6], 0u + 1u);
    c.budget -= 1;
L_00264640:
    st8((c.r[20].w[0] + 582u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[5].w[0] + 582u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 576u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00264660; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 264u)));
    st8((c.r[3].w[0] + 582u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 2;
L_00264660:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 514u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00264690; } }
    set32(c.r[2], 0u + 14u);
    st8((c.r[20].w[0] + 580u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[20].w[0] + 590u), static_cast<std::uint8_t>(c.r[18].w[0]));
    st8((c.r[20].w[0] + 7775u), static_cast<std::uint8_t>(0u));
    mmi::paddub(c.r[4], c.r[20], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264688u); st8((c.r[20].w[0] + 7815u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0058(c, 374u, depth + 1u); else { c.pc = 0x00263640u; return; } if (c.pc != 0x00264688u) [[unlikely]] return; }
L_00264688:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);  if (t) { goto L_00264818; } }
L_00264690:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 842u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_002646B8; } }
    mmi::paddub(c.r[19], c.r[18], c.r[0]);
    set32(c.r[5], 0u + 17u);
    set32(c.r[18], 0u + 15u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002646B0u); mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x002646B0u) [[unlikely]] return; }
L_002646B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 1u)));  if (t) { goto L_002646C8; } }
L_002646B8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 840u)));
    st16((c.r[20].w[0] + 842u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[20].w[0] + 838u), static_cast<std::uint16_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 1u)));
    c.budget -= 4;
L_002646C8:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[4].d[0]) { set32(c.r[2], 0u + 15u);  goto L_002646F0; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 8386u)));
    set32(c.r[3], c.r[3].w[0] - 32u);
    set32(c.r[3], c.r[4].w[0] << (c.r[3].w[0] & 31u));
    c.r[3].d[0] = c.r[3].d[0] & 514ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], 0u + 15u);  if (t) { goto L_0026471C; } }
    set32(c.r[2], 0u + 15u);
    c.budget -= 1;
L_002646F0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (t) { goto L_00264708; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 8384u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264704u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_0023(c, 144u, depth + 1u); else { c.pc = 0x0018DAB0u; return; } if (c.pc != 0x00264704u) [[unlikely]] return; }
L_00264704:
    mmi::paddub(c.r[4], c.r[20], c.r[0]);
    c.budget -= 1;
L_00264708:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264710u);  if (depth < kMaxDepth) unit_0059(c, 89u, depth + 1u); else { c.pc = 0x00264CF0u; return; } if (c.pc != 0x00264710u) [[unlikely]] return; }
L_00264710:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00264814; } }
    set32(c.r[5], 0u + 15u);
    c.budget -= 1;
L_0026471C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[5].d[0];  if (t) { goto L_00264814; } }
    st8((c.r[20].w[0] + 7775u), static_cast<std::uint8_t>(0u));
    st8((c.r[20].w[0] + 7815u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = ld8((c.r[20].w[0] + 531u));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 531u));
    c.budget -= 6;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[5], 0u + 9u);  goto L_00264758; }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[20].d[0];  if (t) { goto L_00264754; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026474Cu); mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x0026474Cu) [[unlikely]] return; }
L_0026474C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 800u)));  if (t) { goto L_00264764; } }
L_00264754:
    set32(c.r[5], 0u + 9u);
    c.budget -= 1;
L_00264758:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264760u); mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x00264760u) [[unlikely]] return; }
L_00264760:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 800u)));
    c.budget -= 1;
L_00264764:
    c.r[2].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00264790; } }
    set32(c.r[2], 0u - 1u);
    st8((c.r[20].w[0] + 800u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 128u);
    st8((c.r[20].w[0] + 532u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[19], c.r[18], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[18], 0u + 1u);
    st32((c.r[20].w[0] + 1068u), c.r[2].w[0]);
    c.budget -= 8;
L_00264790:
    st8((c.r[20].w[0] + 580u), static_cast<std::uint8_t>(c.r[18].w[0]));
    st8((c.r[20].w[0] + 590u), static_cast<std::uint8_t>(c.r[19].w[0]));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 812u)));
    set32(c.r[3], 0u - 29184u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    set32(c.r[5], 0u + 32u);
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    st16((c.r[20].w[0] + 812u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 812u)));
    mmi::paddub(c.r[4], c.r[20], c.r[0]);
    c.r[3].d[0] = c.r[3].d[0] | 4096ull;
    st16((c.r[20].w[0] + 812u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[20].w[0] + 792u), static_cast<std::uint8_t>(0u));
    st32((c.r[20].w[0] + 1240u), c.r[2].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002647D0u); st32((c.r[20].w[0] + 1244u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005B(c, 88u, depth + 1u); else { c.pc = 0x0026D880u; return; } if (c.pc != 0x002647D0u) [[unlikely]] return; }
L_002647D0:
    set32(c.r[5], 0u + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002647DCu); mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 87u, depth + 1u); else { c.pc = 0x0026D7B0u; return; } if (c.pc != 0x002647DCu) [[unlikely]] return; }
L_002647DC:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002647E8u); mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_003C(c, 227u, depth + 1u); else { c.pc = 0x001F3160u; return; } if (c.pc != 0x002647E8u) [[unlikely]] return; }
L_002647E8:
    mmi::paddub(c.r[4], c.r[20], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002647F4u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 40u, depth + 1u); else { c.pc = 0x002CCAD0u; return; } if (c.pc != 0x002647F4u) [[unlikely]] return; }
L_002647F4:
    c.r[3].d[0] = ld8((c.r[20].w[0] + 580u));
    set32(c.r[2], c.r[28].w[0] - 29048u);
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00264814u); mmi::paddub(c.r[4], c.r[20], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00264814u) [[unlikely]] return; }
L_00264814:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00264818:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00264840:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    set32(c.r[16], 0u + 16u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026486Cu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 6u, depth + 1u); else { c.pc = 0x002CC360u; return; } if (c.pc != 0x0026486Cu) [[unlikely]] return; }
L_0026486C:
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], 0u + 18u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; st8((c.r[18].w[0] + 591u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00264884; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[18].w[0] + 591u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00264884:
    set32(c.r[2], 0u + 2u);
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    st8((c.r[18].w[0] + 741u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264898u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 7u, depth + 1u); else { c.pc = 0x002CC3E0u; return; } if (c.pc != 0x00264898u) [[unlikely]] return; }
L_00264898:
    c.f[12] = 0u;
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    mmi::paddub(c.r[6], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002648B0u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 90u, depth + 1u); else { c.pc = 0x00264D10u; return; } if (c.pc != 0x002648B0u) [[unlikely]] return; }
L_002648B0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002648D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    set32(c.r[16], 0u + 16u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002648FCu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 6u, depth + 1u); else { c.pc = 0x002CC360u; return; } if (c.pc != 0x002648FCu) [[unlikely]] return; }
L_002648FC:
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], 0u + 18u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; st8((c.r[18].w[0] + 591u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00264914; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[18].w[0] + 591u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00264914:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026491Cu); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 26u, depth + 1u); else { c.pc = 0x002CC6F0u; return; } if (c.pc != 0x0026491Cu) [[unlikely]] return; }
L_0026491C:
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264928u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 20u, depth + 1u); else { c.pc = 0x002CC590u; return; } if (c.pc != 0x00264928u) [[unlikely]] return; }
L_00264928:
    c.f[12] = 0u;
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    mmi::paddub(c.r[6], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264940u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 90u, depth + 1u); else { c.pc = 0x00264D10u; return; } if (c.pc != 0x00264940u) [[unlikely]] return; }
L_00264940:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00264960:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 580u));
    set32(c.r[2], c.r[28].w[0] - 29040u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00264000u < 16384u) { entry = entries_0059[(t - 0x00264000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00264980:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 580u));
    set32(c.r[2], 0u + 17u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002649AC; } }
    set32(c.r[2], 0u + 128u);
    st8((c.r[16].w[0] + 532u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st32((c.r[16].w[0] + 1068u), c.r[2].w[0]);
    c.budget -= 4;
L_002649AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002649B4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 93u, depth + 1u); else { c.pc = 0x00264EF0u; return; } if (c.pc != 0x002649B4u) [[unlikely]] return; }
L_002649B4:
    c.f[1] = ld32((c.r[16].w[0] + 7796u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[3].sd[0] = static_cast<std::int32_t>(0x3ED10000u);  if (t) { goto L_00264A24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002649DCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 8u, depth + 1u); else { c.pc = 0x002CC460u; return; } if (c.pc != 0x002649DCu) [[unlikely]] return; }
L_002649DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002649E4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 28u, depth + 1u); else { c.pc = 0x002CC780u; return; } if (c.pc != 0x002649E4u) [[unlikely]] return; }
L_002649E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00264A20; } }
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBD730000u);
    st32((c.r[16].w[0] + 108u), 0u);
    c.r[2].d[0] = c.r[2].d[0] | 46662ull;
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 580u));
    set32(c.r[2], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    st8((c.r[16].w[0] + 590u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264A18u); st8((c.r[16].w[0] + 580u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0073(c, 26u, depth + 1u); else { c.pc = 0x002CC6F0u; return; } if (c.pc != 0x00264A18u) [[unlikely]] return; }
L_00264A18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00264AA4; } }
L_00264A20:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3ED10000u);
    c.budget -= 1;
L_00264A24:
    c.r[3].d[0] = c.r[3].d[0] | 60293ull;
    c.f[2] = c.r[3].w[0];
    set32(c.r[3], ld32((c.r[16].w[0] + 612u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 9u));
    c.r[1].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00264A6C; } }
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[4], c.r[3].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], c.r[3].w[0] - 27120u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42000000u);
    c.f[0] = c.r[3].w[0];
    fpu_div(c, 2u, c.f[1], c.f[0]);
    c.budget -= 11;
L_00264A6C:
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00264A88; } }
    st32((c.r[16].w[0] + 104u), c.f[2]);
    st32((c.r[16].w[0] + 108u), 0u);
    c.budget -= 2;
L_00264A88:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7813u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00264AA0; } }
    set32(c.r[5], 0u + 11u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264AA0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 89u, depth + 1u); else { c.pc = 0x0026D960u; return; } if (c.pc != 0x00264AA0u) [[unlikely]] return; }
L_00264AA0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00264AA4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00264AB0:
    set32(c.r[2], 0u + 128u);
    st8((c.r[4].w[0] + 532u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st32((c.r[4].w[0] + 1068u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 12824u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 12;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00264000u < 16384u) { entry = entries_0059[(t - 0x00264000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00264AE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264AF4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 23u, depth + 1u); else { c.pc = 0x002CC650u; return; } if (c.pc != 0x00264AF4u) [[unlikely]] return; }
L_00264AF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264AFCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 30u, depth + 1u); else { c.pc = 0x002CC870u; return; } if (c.pc != 0x00264AFCu) [[unlikely]] return; }
L_00264AFC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00264B34; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBCF30000u);
    c.r[2].d[0] = c.r[2].d[0] | 46662ull;
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264B20u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 27u, depth + 1u); else { c.pc = 0x002CC730u; return; } if (c.pc != 0x00264B20u) [[unlikely]] return; }
L_00264B20:
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264B2Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_004B(c, 27u, depth + 1u); else { c.pc = 0x0022C720u; return; } if (c.pc != 0x00264B2Cu) [[unlikely]] return; }
L_00264B2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00264B8C; } }
L_00264B34:
    c.f[1] = ld32((c.r[16].w[0] + 7796u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], 0u + 1u);  if (t) { goto L_00264B58; } }
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 1;
L_00264B58:
    c.f[1] = ld32((c.r[16].w[0] + 52u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00264B78; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_00264B78:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00264B88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264B88u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 93u, depth + 1u); else { c.pc = 0x00264EF0u; return; } if (c.pc != 0x00264B88u) [[unlikely]] return; }
L_00264B88:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00264B8C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00264BA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264BB4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 93u, depth + 1u); else { c.pc = 0x00264EF0u; return; } if (c.pc != 0x00264BB4u) [[unlikely]] return; }
L_00264BB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264BBCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 23u, depth + 1u); else { c.pc = 0x002CC650u; return; } if (c.pc != 0x00264BBCu) [[unlikely]] return; }
L_00264BBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264BC4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 30u, depth + 1u); else { c.pc = 0x002CC870u; return; } if (c.pc != 0x00264BC4u) [[unlikely]] return; }
L_00264BC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00264BF8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBDAE0000u);
    c.r[2].d[0] = c.r[2].d[0] | 5243ull;
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264BECu); st32((c.r[16].w[0] + 108u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0073(c, 27u, depth + 1u); else { c.pc = 0x002CC730u; return; } if (c.pc != 0x00264BECu) [[unlikely]] return; }
L_00264BEC:
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264BF8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_004B(c, 27u, depth + 1u); else { c.pc = 0x0022C720u; return; } if (c.pc != 0x00264BF8u) [[unlikely]] return; }
L_00264BF8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00264C10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264C2Cu); mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 8u, depth + 1u); else { c.pc = 0x002CC460u; return; } if (c.pc != 0x00264C2Cu) [[unlikely]] return; }
L_00264C2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264C34u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 93u, depth + 1u); else { c.pc = 0x00264EF0u; return; } if (c.pc != 0x00264C34u) [[unlikely]] return; }
L_00264C34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00264C40; } }
    c.r[16].d[0] = c.r[16].d[0] | 1ull;
    c.budget -= 1;
L_00264C40:
    c.f[1] = ld32((c.r[17].w[0] + 104u));
    c.f[0] = ld32((c.r[17].w[0] + 108u));
    c.f[2] = 0u;
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 3u);  if (t) { goto L_00264C70; } }
    st32((c.r[17].w[0] + 104u), 0u);
    st32((c.r[17].w[0] + 108u), 0u);
    c.r[16].d[0] = c.r[16].d[0] | 2ull;
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
L_00264C70:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_00264CAC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    st32((c.r[17].w[0] + 1068u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    st32((c.r[17].w[0] + 1052u), c.r[2].w[0]);
    st8((c.r[17].w[0] + 800u), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0] + 1240u), 0u);
    set32(c.r[5], 0u + 11u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264CA0u); st32((c.r[17].w[0] + 1244u), 0u);  if (depth < kMaxDepth) unit_005B(c, 89u, depth + 1u); else { c.pc = 0x0026D960u; return; } if (c.pc != 0x00264CA0u) [[unlikely]] return; }
L_00264CA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_00264CE0; } }
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_00264CAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264CB4u);  if (depth < kMaxDepth) unit_0073(c, 28u, depth + 1u); else { c.pc = 0x002CC780u; return; } if (c.pc != 0x00264CB4u) [[unlikely]] return; }
L_00264CB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00264CDC; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBDF30000u);
    st32((c.r[17].w[0] + 108u), 0u);
    c.r[2].d[0] = c.r[2].d[0] | 46662ull;
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264CDCu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 26u, depth + 1u); else { c.pc = 0x002CC6F0u; return; } if (c.pc != 0x00264CDCu) [[unlikely]] return; }
L_00264CDC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00264CE0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00264CF0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 840u)));
    st16((c.r[4].w[0] + 842u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 838u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 800u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 1240u), 0u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 1244u), 0u);  c.pc = t; return; }
L_00264D10:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    mmi::paddub(c.r[18], c.r[7], c.r[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 8000u)));
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    set32(c.r[16], c.r[19].w[0] + 7736u);
    c.f[20] = c.f[12];
    set32(c.r[17], c.r[19].w[0] + 7776u);
    c.budget -= 16;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[7].w[0] - 32u);  if (t) { goto L_00264D6C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[3], c.r[3].w[0] + 12848u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00264D7C; } }
L_00264D6C:
    set32(c.r[3], 0u + 2u);
    st8((c.r[19].w[0] + 7813u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 7773u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00264EC4; } }
L_00264D7C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 762u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[5].w[0] << 2);  if (t) { goto L_00264DB4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 12896u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[6].w[0] << 3);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[3].w[0] + c.r[2].w[0]);  if (t) { goto L_00264DC4; } }
    set32(c.r[2], c.r[5].w[0] << 2);
    c.budget -= 1;
L_00264DB4:
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[6].w[0] << 3);
    set32(c.r[7], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_00264DC4:
    st16((c.r[17].w[0] + 8u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[17].w[0] + 10u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st16((c.r[16].w[0] + 10u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[5].d[0] = ld8((c.r[7].w[0]));
    set32(c.r[6], ld32((c.r[16].w[0])));
    c.r[4].d[0] = ld8((c.r[7].w[0] + 1u));
    set32(c.r[3], 0u + 255u);
    set32(c.r[2], 0u + 2u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    st32((c.r[17].w[0] + 12u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[4].w[0]);
    c.r[4].d[0] = ld8((c.r[7].w[0]));
    st16((c.r[17].w[0] + 32u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st16((c.r[16].w[0] + 32u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[7].w[0] + 1u));
    st16((c.r[17].w[0] + 34u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st16((c.r[16].w[0] + 34u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[7].w[0] + 2u));
    st8((c.r[17].w[0] + 36u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 36u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[17].w[0] + 28u), 0u);
    st32((c.r[16].w[0] + 28u), 0u);
    st32((c.r[17].w[0] + 24u), 0u);
    st32((c.r[16].w[0] + 24u), 0u);
    st32((c.r[17].w[0] + 16u), 0u);
    st32((c.r[16].w[0] + 16u), 0u);
    st8((c.r[19].w[0] + 8056u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[7].w[0] + 4u));
    st8((c.r[19].w[0] + 8057u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 6u)));
    st8((c.r[19].w[0] + 8055u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[19].w[0] + 8054u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 5u)));
    c.budget -= 43;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00264E74; } }
    st8((c.r[19].w[0] + 758u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_00264E74:
    c.r[5].d[0] = ld8((c.r[7].w[0] + 7u));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00264E88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264E88u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_003C(c, 228u, depth + 1u); else { c.pc = 0x001F31E0u; return; } if (c.pc != 0x00264E88u) [[unlikely]] return; }
L_00264E88:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_00264EA4; } }
    st32((c.r[17].w[0] + 20u), c.f[20]);
    st32((c.r[16].w[0] + 20u), c.f[20]);
    st8((c.r[17].w[0] + 38u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 38u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00264EB4; } }
L_00264EA4:
    st32((c.r[17].w[0] + 20u), 0u);
    st32((c.r[16].w[0] + 20u), 0u);
    st8((c.r[17].w[0] + 38u), static_cast<std::uint8_t>(c.r[18].w[0]));
    st8((c.r[16].w[0] + 38u), static_cast<std::uint8_t>(c.r[18].w[0]));
    c.budget -= 4;
L_00264EB4:
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264EC4u); mmi::paddub(c.r[5], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 97u, depth + 1u); else { c.pc = 0x00265020u; return; } if (c.pc != 0x00264EC4u) [[unlikely]] return; }
L_00264EC4:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00264EF0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 8000u)));
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[3], c.r[3].w[0] + 12976u);
    set32(c.r[6], c.r[18].w[0] + 7736u);
    set32(c.r[4], c.r[5].w[0] - 32u);
    set32(c.r[4], c.r[4].w[0] << 5);
    set32(c.r[16], c.r[18].w[0] + 7776u);
    c.budget -= 17;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_00264F3C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_00265000; } }
L_00264F3C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 37u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00264F54; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);  if (t) { goto L_00265004; } }
L_00264F54:
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = ld32((c.r[6].w[0] + 16u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[6].w[0] + 16u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 16u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 38u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (t) { goto L_00264FA4; } }
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = ld32((c.r[6].w[0] + 20u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[6].w[0] + 20u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 20u), c.f[0]);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 9;
L_00264FA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264FACu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 121u, depth + 1u); else { c.pc = 0x00265990u; return; } if (c.pc != 0x00264FACu) [[unlikely]] return; }
L_00264FAC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 12912u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_00264FE8; } }
L_00264FC8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { goto L_00264FF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264FE0u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 124u, depth + 1u); else { c.pc = 0x00265BE0u; return; } if (c.pc != 0x00264FE0u) [[unlikely]] return; }
L_00264FE0:
    set32(c.r[2], c.r[19].w[0] + 1u);
    c.r[19].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 2;
L_00264FE8:
    c.r[5].d[0] = c.r[19].d[0] & 65535ull;
    c.r[2].d[0] = c.r[5].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00264FC8u | kUnwind; return; } goto L_00264FC8; } }
L_00264FF8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 37u)));
    c.budget -= 2;
L_00265000:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00265004:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00265020:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 12976u);
    c.f[20] = c.f[12];
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    set32(c.r[3], c.r[3].w[0] - 32u);
    set32(c.r[3], c.r[3].w[0] << 5);
    st8((c.r[4].w[0] + 7813u), static_cast<std::uint8_t>(0u));
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    mmi::paddub(c.r[6], c.r[17], c.r[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265074u); st8((c.r[4].w[0] + 7773u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0059(c, 101u, depth + 1u); else { c.pc = 0x002650F0u; return; } if (c.pc != 0x00265074u) [[unlikely]] return; }
L_00265074:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8386u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[3], c.r[3].w[0] + 12912u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = c.r[3].d[0] & 65535ull;  if (t) { goto L_002650B8; } }
L_00265090:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_002650C8; } }
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002650B0u); mmi::paddub(c.r[6], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 106u, depth + 1u); else { c.pc = 0x002654C0u; return; } if (c.pc != 0x002650B0u) [[unlikely]] return; }
L_002650B0:
    set32(c.r[3], c.r[19].w[0] + 1u);
    c.r[19].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 2;
L_002650B8:
    c.r[5].d[0] = c.r[19].d[0] & 65535ull;
    c.r[3].d[0] = c.r[5].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00265090u | kUnwind; return; } goto L_00265090; } }
L_002650C8:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002650F0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 7788u)));
    mmi::paddub(c.r[21], c.r[4], c.r[0]);
    mmi::paddub(c.r[16], c.r[6], c.r[0]);
    set32(c.r[6], c.r[5].w[0] << 2);
    set32(c.r[7], ld32((c.r[4].w[0] + 7776u)));
    set32(c.r[17], c.r[21].w[0] + 7736u);
    c.f[20] = c.f[12];
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[18], c.r[21].w[0] + 7776u);
    mmi::paddub(c.r[20], c.r[5], c.r[0]);
    set32(c.r[19], c.r[7].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[7], c.r[7].w[0] + c.r[3].w[0]);
    set32(c.r[3], 0u - 1u);
    c.budget -= 25;
L_00265154:
    set32(c.r[7], c.r[7].w[0] + 8u);
    set32(c.r[6], ld32((c.r[7].w[0])));
    c.budget -= 7;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00265154u | kUnwind; return; } goto L_00265154; } }
    c.f[0] = ld32((c.r[7].w[0] - 8u));
    c.f[1] = fp::cvt_s_w(c.f[0]);
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], c.r[20].w[0] << 3);  if (t) { goto L_002651D8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.f[20] = c.f[1];  goto L_002651D4; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[21] = fp::add(c.f[0], c.f[1]);
    fpu_div(c, 12u, c.f[20], c.f[21]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002651B8u);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002651B8u) [[unlikely]] return; }
L_002651B8:
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[21], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.f[20] = fp::sub(c.f[20], c.f[0]);  if (t) { goto L_002651D4; } }
    c.f[20] = c.f[1];
    c.budget -= 1;
L_002651D4:
    set32(c.r[3], c.r[20].w[0] << 3);
    c.budget -= 1;
L_002651D8:
    set32(c.r[5], c.r[3].w[0] - c.r[20].w[0]);
    set32(c.r[3], c.r[20].w[0] << 4);
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    set32(c.r[6], c.r[3].w[0] + 4928u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[21].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (t) { goto L_00265480; } }
L_00265200:
    set32(c.r[9], ld32((c.r[19].w[0])));
    set32(c.r[7], ld32((c.r[18].w[0])));
    set32(c.r[3], c.r[5].w[0] + 5216u);
    set32(c.r[8], 0u - 1u);
    set32(c.r[7], c.r[7].w[0] + c.r[9].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[10], c.r[7].w[0] + 8u);  if (t) { goto L_00265228; } }
    mmi::paddub(c.r[7], c.r[10], c.r[0]);
    c.budget -= 1;
L_00265220:
    set32(c.r[10], c.r[10].w[0] + 8u);
    c.budget -= 2;
L_00265228:
    set32(c.r[9], ld32((c.r[10].w[0])));
    c.f[0] = c.r[9].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00265250; } }
    c.budget -= 2;
    if (c.r[9].d[0] != c.r[8].d[0]) { mmi::paddub(c.r[7], c.r[10], c.r[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00265220u | kUnwind; return; } goto L_00265220; }
L_00265250:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[8], 0u + 1u);  if (t) { goto L_002653C0; } }
    st16((c.r[3].w[0] + 4u), static_cast<std::uint16_t>(0u));
    set32(c.r[9], ld32((c.r[10].w[0])));
    set32(c.r[8], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[9].d[0] == c.r[8].d[0];  if (t) { goto L_002652E0; } }
    set32(c.r[8], ld32((c.r[7].w[0])));
    set32(c.r[8], c.r[9].w[0] - c.r[8].w[0]);
    c.f[0] = c.r[8].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[3].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0]));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::sub(c.f[20], c.f[0]);
    st32((c.r[3].w[0] + 20u), c.f[0]);
    c.f[2] = ld32((c.r[10].w[0] + 4u));
    c.f[1] = ld32((c.r[7].w[0] + 4u));
    c.f[0] = ld32((c.r[3].w[0] + 16u));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[3].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 4u));
    st32((c.r[3].w[0] + 8u), c.f[0]);
    st32((c.r[3].w[0]), c.r[10].w[0]);
    c.f[0] = ld32((c.r[10].w[0]));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[3].w[0] + 24u), c.f[0]);
    c.f[2] = ld32((c.r[3].w[0] + 12u));
    c.f[1] = ld32((c.r[3].w[0] + 20u));
    c.f[0] = ld32((c.r[7].w[0] + 4u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 29;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.f[0]);  if (t) { goto L_00265468; } }
L_002652E0:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == 0ull; set32(c.r[8], 0u + 2u);  if (t) { goto L_00265300; } }
    set32(c.r[8], 0u + 1u);
    st8((c.r[18].w[0] + 37u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 37u), static_cast<std::uint8_t>(c.r[8].w[0]));  if (t) { goto L_00265308; } }
    set32(c.r[8], 0u + 2u);
    c.budget -= 1;
L_00265300:
    st8((c.r[18].w[0] + 37u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[17].w[0] + 37u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.budget -= 2;
L_00265308:
    c.f[0] = ld32((c.r[7].w[0]));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[18].w[0] + 20u), c.f[0]);
    st32((c.r[17].w[0] + 20u), c.f[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 36u)));
    c.budget -= 7;
    { const bool t = c.r[8].d[0] == 0ull; c.r[8].sd[0] = static_cast<std::int32_t>(0x461C0000u);  if (t) { goto L_00265388; } }
    set32(c.r[10], ld32((c.r[19].w[0])));
    set32(c.r[9], ld32((c.r[18].w[0])));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[3].w[0] + 16u), c.r[8].w[0]);
    c.f[0] = ld32((c.r[7].w[0]));
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::sub(c.f[20], c.f[0]);
    st32((c.r[3].w[0] + 20u), c.f[0]);
    st32((c.r[3].w[0] + 24u), 0u);
    c.f[1] = ld32((c.r[9].w[0] + 4u));
    c.f[0] = ld32((c.r[7].w[0] + 4u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[3].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 4u));
    st32((c.r[3].w[0] + 8u), c.f[0]);
    st32((c.r[3].w[0]), c.r[9].w[0]);
    c.f[2] = ld32((c.r[3].w[0] + 12u));
    c.f[1] = ld32((c.r[3].w[0] + 20u));
    c.f[0] = ld32((c.r[7].w[0] + 4u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 24;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.f[0]);  if (t) { goto L_00265468; } }
    c.r[8].sd[0] = static_cast<std::int32_t>(0x461C0000u);
    c.budget -= 1;
L_00265388:
    c.r[8].d[0] = c.r[8].d[0] | 15360ull;
    st32((c.r[3].w[0] + 16u), c.r[8].w[0]);
    st32((c.r[3].w[0] + 20u), 0u);
    st32((c.r[3].w[0] + 12u), 0u);
    c.f[0] = ld32((c.r[7].w[0] + 4u));
    st32((c.r[3].w[0] + 8u), c.f[0]);
    st32((c.r[3].w[0]), c.r[7].w[0]);
    c.f[0] = ld32((c.r[7].w[0]));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[3].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 4u));
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.f[0]);  if (t) { goto L_00265468; } }
    set32(c.r[8], 0u + 1u);
    c.budget -= 1;
L_002653C0:
    st16((c.r[3].w[0] + 4u), static_cast<std::uint16_t>(c.r[8].w[0]));
    set32(c.r[9], ld32((c.r[10].w[0])));
    set32(c.r[8], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[9].d[0] != c.r[8].d[0];  if (t) { goto L_002653E0; } }
    set32(c.r[9], ld32((c.r[19].w[0])));
    set32(c.r[8], ld32((c.r[18].w[0])));
    set32(c.r[10], c.r[8].w[0] + c.r[9].w[0]);
    c.budget -= 3;
L_002653E0:
    c.f[0] = c.r[16].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[3].w[0] + 16u), c.f[0]);
    st32((c.r[3].w[0] + 20u), 0u);
    set32(c.r[8], ld32((c.r[10].w[0])));
    set32(c.r[9], ld32((c.r[7].w[0])));
    c.budget -= 9;
    { const bool t = c.r[8].d[0] == c.r[9].d[0];  if (t) { goto L_0026543C; } }
    c.f[2] = ld32((c.r[10].w[0] + 4u));
    c.f[3] = ld32((c.r[7].w[0] + 4u));
    set32(c.r[8], c.r[8].w[0] - c.r[9].w[0]);
    c.f[1] = c.r[8].w[0];
    c.f[0] = c.r[9].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[2] = fp::sub(c.f[2], c.f[3]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::sub(c.f[20], c.f[0]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; c.f[1] = fp::add(c.f[3], c.f[0]);  if (t) { goto L_00265444; } }
L_0026543C:
    c.f[1] = ld32((c.r[7].w[0] + 4u));
    c.budget -= 2;
L_00265444:
    st32((c.r[3].w[0]), c.r[7].w[0]);
    st32((c.r[3].w[0] + 24u), c.f[20]);
    c.f[0] = ld32((c.r[6].w[0]));
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 16u));
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[3].w[0] + 12u), c.f[0]);
    c.budget -= 9;
L_00265468:
    set32(c.r[3], c.r[4].w[0] + 1u);
    set32(c.r[19], c.r[19].w[0] + 4u);
    set32(c.r[5], c.r[5].w[0] + 28u);
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.r[4].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 6;
L_00265480:
    c.r[3].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00265200u | kUnwind; return; } goto L_00265200; } }
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002654C0:
    set32(c.r[29], c.r[29].w[0] - 192u);
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
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    st32((c.r[29].w[0] + 188u), c.r[6].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    mmi::paddub(c.r[20], c.r[4], c.r[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[3], c.r[3].w[0] + 11952u);
    c.f[20] = c.f[12];
    set32(c.r[16], c.r[20].w[0] + 7736u);
    set32(c.r[6], c.r[6].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.r[18].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[17], c.r[20].w[0] + 7776u);
    set32(c.r[3], 0u - 2u);
    c.budget -= 28;
    { const bool t = c.r[18].d[0] == c.r[3].d[0]; mmi::paddub(c.r[21], c.r[5], c.r[0]);  if (t) { goto L_00265950; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[6], c.r[21].w[0] << 2);
    set32(c.r[7], ld32((c.r[17].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[19], c.r[7].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[7], c.r[7].w[0] + c.r[3].w[0]);
    set32(c.r[3], 0u - 1u);
    c.budget -= 9;
L_00265554:
    set32(c.r[7], c.r[7].w[0] + 4u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0])));
    c.budget -= 7;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00265554u | kUnwind; return; } goto L_00265554; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] - 4u)));
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[1]));
    c.budget -= 8;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[4], c.r[21].w[0] + 1u);  goto L_002655E0; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.f[20] = c.f[1];  goto L_002655DC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[21] = fp::add(c.f[0], c.f[1]);
    fpu_div(c, 12u, c.f[20], c.f[21]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002655C0u);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002655C0u) [[unlikely]] return; }
L_002655C0:
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[21], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.f[20] = fp::sub(c.f[20], c.f[0]);  if (t) { goto L_002655DC; } }
    c.f[20] = c.f[1];
    c.budget -= 1;
L_002655DC:
    set32(c.r[4], c.r[21].w[0] + 1u);
    c.budget -= 1;
L_002655E0:
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[4], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[23], c.r[20].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[18].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[20], c.r[20].w[0] + c.r[3].w[0]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[30], c.r[0], c.r[0]);  if (t) { goto L_00265940; } }
L_00265614:
    set32(c.r[5], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[18], c.r[23].w[0] + 5216u);
    set32(c.r[3], 0u - 1u);
    set32(c.r[21], c.r[4].w[0] + c.r[5].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[22], c.r[21].w[0] + 4u);  if (t) { goto L_00265638; } }
    mmi::paddub(c.r[21], c.r[22], c.r[0]);
    c.budget -= 1;
L_00265634:
    set32(c.r[22], c.r[22].w[0] + 4u);
    c.budget -= 1;
L_00265638:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0])));
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00265668; } }
    c.r[4].d[0] = c.r[4].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { mmi::paddub(c.r[21], c.r[22], c.r[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00265634u | kUnwind; return; } goto L_00265634; }
L_00265668:
    set32(c.r[3], ld32((c.r[29].w[0] + 188u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_00265830; }
    st16((c.r[18].w[0] + 4u), static_cast<std::uint16_t>(0u));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0])));
    set32(c.r[3], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0026572C; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0])));
    set32(c.r[2], c.r[4].w[0] - c.r[2].w[0]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[18].w[0] + 16u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0])));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::sub(c.f[20], c.f[0]);
    st32((c.r[18].w[0] + 20u), c.f[0]);
    c.r[5].d[0] = ld16((c.r[21].w[0] + 2u));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002656C4u); c.r[4].d[0] = ld16((c.r[22].w[0] + 2u));  if (depth < kMaxDepth) unit_0059(c, 132u, depth + 1u); else { c.pc = 0x00265F30u; return; } if (c.pc != 0x002656C4u) [[unlikely]] return; }
L_002656C4:
    c.f[1] = c.r[2].w[0];
    c.f[0] = ld32((c.r[18].w[0] + 16u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002656E4u);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002656E4u) [[unlikely]] return; }
L_002656E4:
    st32((c.r[18].w[0] + 12u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[21].w[0] + 2u));
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[18].w[0]), c.r[22].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0])));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[18].w[0] + 24u), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 12u));
    c.f[0] = ld32((c.r[18].w[0] + 20u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026571Cu); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x0026571Cu) [[unlikely]] return; }
L_0026571C:
    c.r[3].d[0] = ld16((c.r[21].w[0] + 2u));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 4544u), c.r[3].w[0]);  if (t) { goto L_00265928; } }
L_0026572C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_0026574C; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 37u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 37u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00265758; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_0026574C:
    st8((c.r[17].w[0] + 37u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 37u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00265758:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0])));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[17].w[0] + 20u), c.f[0]);
    st32((c.r[16].w[0] + 20u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 36u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x461C0000u);  if (t) { goto L_002657F0; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[18].w[0] + 16u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0])));
    set32(c.r[22], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::sub(c.f[20], c.f[0]);
    st32((c.r[18].w[0] + 20u), c.f[0]);
    st32((c.r[18].w[0] + 24u), 0u);
    c.r[5].d[0] = ld16((c.r[21].w[0] + 2u));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002657B8u); c.r[4].d[0] = ld16((c.r[22].w[0] + 2u));  if (depth < kMaxDepth) unit_0059(c, 132u, depth + 1u); else { c.pc = 0x00265F30u; return; } if (c.pc != 0x002657B8u) [[unlikely]] return; }
L_002657B8:
    st32((c.r[18].w[0] + 12u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[21].w[0] + 2u));
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[18].w[0]), c.r[22].w[0]);
    c.f[1] = ld32((c.r[18].w[0] + 12u));
    c.f[0] = ld32((c.r[18].w[0] + 20u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002657DCu); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002657DCu) [[unlikely]] return; }
L_002657DC:
    c.r[3].d[0] = ld16((c.r[21].w[0] + 2u));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 4544u), c.r[3].w[0]);  if (t) { goto L_00265928; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x461C0000u);
    c.budget -= 1;
L_002657F0:
    c.r[3].d[0] = c.r[3].d[0] | 15360ull;
    st32((c.r[18].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 20u), 0u);
    st32((c.r[18].w[0] + 12u), 0u);
    c.r[3].d[0] = ld16((c.r[21].w[0] + 2u));
    st32((c.r[18].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[18].w[0]), c.r[21].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0])));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[18].w[0] + 24u), c.f[0]);
    c.r[3].d[0] = ld16((c.r[21].w[0] + 2u));
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 4544u), c.r[3].w[0]);  if (t) { goto L_00265928; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00265830:
    st16((c.r[18].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0])));
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00265850; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[22], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 3;
L_00265850:
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[18].w[0] + 16u), c.f[0]);
    st32((c.r[18].w[0] + 20u), 0u);
    c.r[5].d[0] = ld16((c.r[21].w[0] + 2u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265874u); c.r[4].d[0] = ld16((c.r[22].w[0] + 2u));  if (depth < kMaxDepth) unit_0059(c, 132u, depth + 1u); else { c.pc = 0x00265F30u; return; } if (c.pc != 0x00265874u) [[unlikely]] return; }
L_00265874:
    c.f[0] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0])));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0])));
    c.f[1] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002658A8u);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002658A8u) [[unlikely]] return; }
L_002658A8:
    st32((c.r[18].w[0] + 12u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0])));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002658E4; } }
    c.f[0] = c.r[2].w[0];
    c.f[1] = ld32((c.r[18].w[0] + 12u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::sub(c.f[20], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002658D8u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002658D8u) [[unlikely]] return; }
L_002658D8:
    c.r[3].d[0] = ld16((c.r[21].w[0] + 2u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);  if (t) { goto L_002658EC; } }
L_002658E4:
    c.r[4].d[0] = ld16((c.r[21].w[0] + 2u));
    c.budget -= 2;
L_002658EC:
    st32((c.r[18].w[0]), c.r[21].w[0]);
    st32((c.r[18].w[0] + 24u), c.f[20]);
    set32(c.r[2], ld32((c.r[20].w[0] + 4544u)));
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265904u); set32(c.r[5], ld32((c.r[18].w[0] + 8u)));  if (depth < kMaxDepth) unit_0059(c, 132u, depth + 1u); else { c.pc = 0x00265F30u; return; } if (c.pc != 0x00265904u) [[unlikely]] return; }
L_00265904:
    c.f[1] = c.r[2].w[0];
    c.f[0] = ld32((c.r[18].w[0] + 16u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265924u);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x00265924u) [[unlikely]] return; }
L_00265924:
    st32((c.r[18].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 1;
L_00265928:
    set32(c.r[3], c.r[30].w[0] + 1u);
    set32(c.r[23], c.r[23].w[0] + 28u);
    set32(c.r[20], c.r[20].w[0] + 4u);
    set32(c.r[19], c.r[19].w[0] - 4u);
    c.r[30].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 6;
L_00265940:
    c.r[3].d[0] = c.r[30].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00265614u | kUnwind; return; } goto L_00265614; } }
L_00265950:
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
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_00265990:
    set32(c.r[8], c.r[5].w[0] << 3);
    set32(c.r[9], c.r[8].w[0] - c.r[5].w[0]);
    set32(c.r[8], c.r[9].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] - c.r[9].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + 7736u);
    set32(c.r[6], c.r[4].w[0] + 7776u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[8], c.r[4].w[0] + c.r[8].w[0]);
    set32(c.r[10], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[10].w[0]);
    set32(c.r[10], c.r[4].w[0] + 4928u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    mmi::paddub(c.r[9], c.r[0], c.r[0]);
    c.budget -= 17;
    { const bool t = 0ull == 0ull; set32(c.r[11], c.r[5].w[0] << 2);  if (t) { goto L_00265BB8; } }
L_002659D4:
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = ld32((c.r[8].w[0] + 5236u));
    c.f[2] = fp::add(c.f[0], c.f[1]);
    st32((c.r[8].w[0] + 5236u), c.f[2]);
    c.f[0] = ld32((c.r[8].w[0] + 5232u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[5], c.r[8].w[0] + 5216u);  if (t) { goto L_00265B88; } }
    set32(c.r[4], ld32((c.r[5].w[0])));
    set32(c.r[25], c.r[4].w[0] + 8u);
    st32((c.r[5].w[0]), c.r[25].w[0]);
    c.f[3] = ld32((c.r[5].w[0] + 20u));
    c.f[2] = ld32((c.r[5].w[0] + 16u));
    c.f[0] = ld32((c.r[4].w[0]));
    c.f[1] = ld32((c.r[5].w[0] + 24u));
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[2]);
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    set32(c.r[13], 0u + 1u);
    set32(c.r[12], 0u + 2u);
    set32(c.r[24], 0u - 1u);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 16;
L_00265A38:
    set32(c.r[31], ld32((c.r[25].w[0])));
    c.budget -= 3;
    { const bool t = c.r[31].d[0] == c.r[24].d[0];  if (t) { goto L_00265A58; } }
    set32(c.r[15], ld32((c.r[4].w[0])));
    set32(c.r[15], c.r[31].w[0] - c.r[15].w[0]);
    c.f[0] = c.r[15].w[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00265AA8; } }
L_00265A58:
    c.r[15].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[15].d[0] == 0ull;  if (t) { goto L_00265A94; } }
    set32(c.r[15], ld32((c.r[6].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[6].w[0])));
    c.f[2] = c.r[14].w[0];
    set32(c.r[15], c.r[11].w[0] + c.r[15].w[0]);
    set32(c.r[15], ld32((c.r[15].w[0])));
    set32(c.r[15], c.r[25].w[0] + c.r[15].w[0]);
    set32(c.r[15], c.r[9].w[0] + c.r[15].w[0]);
    set32(c.r[15], ld32((c.r[15].w[0])));
    st8((c.r[6].w[0] + 37u), static_cast<std::uint8_t>(c.r[13].w[0]));
    set32(c.r[25], c.r[25].w[0] + c.r[15].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 37u), static_cast<std::uint8_t>(c.r[13].w[0]));  if (t) { goto L_00265AA8; } }
L_00265A94:
    st8((c.r[6].w[0] + 37u), static_cast<std::uint8_t>(c.r[12].w[0]));
    c.f[1] = 0u;
    c.f[2] = c.r[14].w[0];
    st8((c.r[3].w[0] + 37u), static_cast<std::uint8_t>(c.r[12].w[0]));
    c.budget -= 5;
L_00265AA8:
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00265AC8; } }
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    mmi::paddub(c.r[4], c.r[25], c.r[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[25], c.r[25].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00265A38u | kUnwind; return; } goto L_00265A38; } }
L_00265AC8:
    c.f[0] = ld32((c.r[4].w[0]));
    set32(c.r[12], 0u - 1u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[6].w[0] + 20u), c.f[0]);
    st32((c.r[3].w[0] + 20u), c.f[0]);
    set32(c.r[13], ld32((c.r[25].w[0])));
    c.budget -= 9;
    { const bool t = c.r[13].d[0] == c.r[12].d[0]; c.r[12].sd[0] = static_cast<std::int32_t>(0x461C0000u);  if (t) { goto L_00265B44; } }
    st32((c.r[5].w[0] + 20u), c.f[1]);
    st32((c.r[5].w[0] + 16u), c.f[2]);
    c.f[2] = ld32((c.r[25].w[0] + 4u));
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = ld32((c.r[5].w[0] + 16u));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[5].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    st32((c.r[5].w[0] + 8u), c.f[0]);
    st32((c.r[5].w[0]), c.r[25].w[0]);
    c.f[0] = ld32((c.r[25].w[0]));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[5].w[0] + 24u), c.f[0]);
    c.f[2] = ld32((c.r[5].w[0] + 12u));
    c.f[1] = ld32((c.r[5].w[0] + 20u));
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 21;
    { const bool t = 0ull == 0ull; st32((c.r[10].w[0]), c.f[0]);  if (t) { goto L_00265B78; } }
    c.r[12].sd[0] = static_cast<std::int32_t>(0x461C0000u);
    c.budget -= 1;
L_00265B44:
    c.r[12].d[0] = c.r[12].d[0] | 15360ull;
    st32((c.r[5].w[0] + 16u), c.r[12].w[0]);
    st32((c.r[5].w[0] + 20u), 0u);
    st32((c.r[5].w[0] + 12u), 0u);
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    st32((c.r[5].w[0] + 8u), c.f[0]);
    st32((c.r[5].w[0]), c.r[4].w[0]);
    c.f[0] = ld32((c.r[4].w[0]));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[5].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    st32((c.r[10].w[0]), c.f[0]);
    c.budget -= 13;
L_00265B78:
    st16((c.r[5].w[0] + 4u), static_cast<std::uint16_t>(0u));
    st8((c.r[6].w[0] + 38u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 38u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00265BA0; } }
L_00265B88:
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[10].w[0]), c.f[0]);
    c.budget -= 6;
L_00265BA0:
    set32(c.r[4], c.r[7].w[0] + 1u);
    set32(c.r[8], c.r[8].w[0] + 28u);
    set32(c.r[9], c.r[9].w[0] + 4u);
    set32(c.r[10], c.r[10].w[0] + 4u);
    c.r[7].d[0] = c.r[4].d[0] & 65535ull;
    c.budget -= 6;
L_00265BB8:
    c.r[4].d[0] = c.r[7].d[0] & 65535ull;
    c.r[4].d[0] = c.r[4].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002659D4u | kUnwind; return; } goto L_002659D4; } }
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00265BE0:
    set32(c.r[29], c.r[29].w[0] - 176u);
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
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[3], c.r[3].w[0] + 11952u);
    set32(c.r[16], c.r[4].w[0] + 7736u);
    set32(c.r[6], c.r[6].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[3], 0u - 2u);
    c.budget -= 22;
    { const bool t = c.r[7].d[0] == c.r[3].d[0]; set32(c.r[17], c.r[4].w[0] + 7776u);  if (t) { goto L_00265EB4; } }
    set32(c.r[6], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[6].w[0] << 3);
    set32(c.r[6], c.r[3].w[0] - c.r[6].w[0]);
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[23], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[7].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[21], 0u + 8u);
    set32(c.r[30], c.r[4].w[0] + c.r[3].w[0]);
    st16((c.r[29].w[0] + 160u), static_cast<std::uint16_t>(0u));
    c.budget -= 15;
    { const bool t = 0ull == 0ull; set32(c.r[22], c.r[5].w[0] << 2);  if (t) { goto L_00265EA0; } }
L_00265C74:
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    c.f[0] = ld32((c.r[23].w[0] + 5236u));
    c.f[1] = fp::add(c.f[0], c.f[1]);
    st32((c.r[23].w[0] + 5236u), c.f[1]);
    c.f[0] = ld32((c.r[23].w[0] + 5232u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[20], c.r[23].w[0] + 5216u);  if (t) { goto L_00265E68; } }
    set32(c.r[18], ld32((c.r[20].w[0])));
    set32(c.r[19], c.r[18].w[0] + 4u);
    st32((c.r[20].w[0]), c.r[19].w[0]);
    c.f[2] = ld32((c.r[20].w[0] + 20u));
    c.f[1] = ld32((c.r[20].w[0] + 16u));
    c.f[0] = ld32((c.r[20].w[0] + 24u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.f[1] = fp::add(c.f[0], c.f[1]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    set32(c.r[7], 0u + 1u);
    set32(c.r[6], 0u + 2u);
    set32(c.r[3], 0u - 1u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 18;
L_00265CE0:
    c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[10].d[0] == c.r[3].d[0];  if (t) { goto L_00265D00; } }
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    set32(c.r[9], c.r[10].w[0] - c.r[9].w[0]);
    c.f[0] = c.r[9].w[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00265D50; } }
L_00265D00:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[9].d[0] == 0ull;  if (t) { goto L_00265D3C; } }
    set32(c.r[9], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[10], ld32((c.r[17].w[0])));
    c.f[2] = c.r[8].w[0];
    set32(c.r[9], c.r[22].w[0] + c.r[9].w[0]);
    set32(c.r[9], ld32((c.r[9].w[0])));
    set32(c.r[9], c.r[10].w[0] + c.r[9].w[0]);
    set32(c.r[9], c.r[21].w[0] + c.r[9].w[0]);
    set32(c.r[9], ld32((c.r[9].w[0] + 12u)));
    st8((c.r[17].w[0] + 37u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[19], c.r[10].w[0] + c.r[9].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 37u), static_cast<std::uint8_t>(c.r[7].w[0]));  if (t) { goto L_00265D50; } }
L_00265D3C:
    st8((c.r[17].w[0] + 37u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.f[1] = 0u;
    c.f[2] = c.r[8].w[0];
    st8((c.r[16].w[0] + 37u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 5;
L_00265D50:
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00265D70; } }
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    mmi::paddub(c.r[18], c.r[19], c.r[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[19].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00265CE0u | kUnwind; return; } goto L_00265CE0; } }
L_00265D70:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    set32(c.r[3], 0u - 1u);
    c.f[0] = c.r[6].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 20u), c.f[0]);
    st32((c.r[16].w[0] + 20u), c.f[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0])));
    c.budget -= 11;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x461C0000u);  if (t) { goto L_00265E1C; } }
    st32((c.r[20].w[0] + 20u), c.f[1]);
    st32((c.r[20].w[0] + 16u), c.f[2]);
    c.r[5].d[0] = ld16((c.r[18].w[0] + 2u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265DB0u); c.r[4].d[0] = ld16((c.r[19].w[0] + 2u));  if (depth < kMaxDepth) unit_0059(c, 132u, depth + 1u); else { c.pc = 0x00265F30u; return; } if (c.pc != 0x00265DB0u) [[unlikely]] return; }
L_00265DB0:
    c.f[1] = c.r[2].w[0];
    c.f[0] = ld32((c.r[20].w[0] + 16u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265DD0u);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x00265DD0u) [[unlikely]] return; }
L_00265DD0:
    st32((c.r[20].w[0] + 12u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[18].w[0] + 2u));
    st32((c.r[20].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[20].w[0]), c.r[19].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0])));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[20].w[0] + 24u), c.f[0]);
    c.f[1] = ld32((c.r[20].w[0] + 12u));
    c.f[0] = ld32((c.r[20].w[0] + 20u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265E08u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x00265E08u) [[unlikely]] return; }
L_00265E08:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 2u));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[30].w[0] + 4544u), c.r[3].w[0]);  if (t) { goto L_00265E58; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x461C0000u);
    c.budget -= 1;
L_00265E1C:
    c.r[3].d[0] = c.r[3].d[0] | 15360ull;
    st32((c.r[20].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[20].w[0] + 20u), 0u);
    st32((c.r[20].w[0] + 12u), 0u);
    c.r[3].d[0] = ld16((c.r[18].w[0] + 2u));
    st32((c.r[20].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[20].w[0]), c.r[18].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[20].w[0] + 24u), c.f[0]);
    c.r[3].d[0] = ld16((c.r[18].w[0] + 2u));
    st32((c.r[30].w[0] + 4544u), c.r[3].w[0]);
    c.budget -= 15;
L_00265E58:
    st16((c.r[20].w[0] + 4u), static_cast<std::uint16_t>(0u));
    st8((c.r[17].w[0] + 38u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 38u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00265E88; } }
L_00265E68:
    c.f[0] = ld32((c.r[20].w[0] + 12u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265E78u); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x00265E78u) [[unlikely]] return; }
L_00265E78:
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[30].w[0] + 4544u), c.r[3].w[0]);
    c.budget -= 4;
L_00265E88:
    c.r[3].d[0] = ld16((c.r[29].w[0] + 160u));
    set32(c.r[23], c.r[23].w[0] + 28u);
    set32(c.r[30], c.r[30].w[0] + 4u);
    set32(c.r[21], c.r[21].w[0] - 4u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[29].w[0] + 160u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 6;
L_00265EA0:
    c.r[3].d[0] = ld16((c.r[29].w[0] + 160u));
    mmi::paddub(c.r[3], c.r[3], c.r[0]);
    c.r[3].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00265C74u | kUnwind; return; } goto L_00265C74; } }
L_00265EB4:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_00265EF0:
    set32(c.r[6], ld32((c.r[4].w[0] + 8000u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], c.r[3].w[0] + 8112u);
    st32((c.r[4].w[0] + 7776u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 7736u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 976u), c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[4].w[0] + 980u), c.f[0]);
    st32((c.r[4].w[0] + 1004u), c.f[0]);
    st32((c.r[4].w[0] + 7780u), c.f[0]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 7740u), c.f[0]);  c.pc = t; return; }
L_00265F30:
    set32(c.r[2], c.r[4].w[0] - c.r[5].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[1].d[0] = 0ull | 32769ull;
    c.r[1].d[0] = c.r[2].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00265F50; } }
    set32(c.r[2], c.r[2].w[0] - 32768u);
    set32(c.r[2], c.r[2].w[0] - 32768u);
    c.budget -= 2;
L_00265F50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00265F60:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[3], c.r[3].w[0] + 12928u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4036u));
    st32((c.r[4].w[0] + 8016u), c.f[0]);
    c.f[3] = ld32((c.r[4].w[0] + 4928u));
    c.f[2] = ld32((c.r[4].w[0] + 4932u));
    c.f[1] = ld32((c.r[4].w[0] + 4936u));
    c.f[0] = ld32((c.r[4].w[0] + 4940u));
    st32((c.r[3].w[0] + 4032u), c.f[3]);
    st32((c.r[3].w[0] + 4036u), c.f[2]);
    st32((c.r[3].w[0] + 4040u), c.f[1]);
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 4044u), c.f[0]);  c.pc = t; return; }
L_00265FB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265FC4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 133u, depth + 1u); else { c.pc = 0x00265F60u; return; } if (c.pc != 0x00265FC4u) [[unlikely]] return; }
L_00265FC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265FCCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005C(c, 162u, depth + 1u); else { c.pc = 0x00270D00u; return; } if (c.pc != 0x00265FCCu) [[unlikely]] return; }
L_00265FCC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00265FE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; st128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0026601C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 7815u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[6], c.r[6].w[0] + 6u);  goto L_0026600C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266000u);  if (depth < kMaxDepth) unit_0059(c, 90u, depth + 1u); else { c.pc = 0x00264D10u; return; } if (c.pc != 0x00266000u) [[unlikely]] return; }
L_00266000:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_00266028; } }
    set32(c.r[6], c.r[6].w[0] + 6u);
    c.budget -= 1;
L_0026600C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266014u);  if (depth < kMaxDepth) unit_0059(c, 90u, depth + 1u); else { c.pc = 0x00264D10u; return; } if (c.pc != 0x00266014u) [[unlikely]] return; }
L_00266014:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00266024; } }
L_0026601C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266024u);  if (depth < kMaxDepth) unit_0059(c, 90u, depth + 1u); else { c.pc = 0x00264D10u; return; } if (c.pc != 0x00266024u) [[unlikely]] return; }
L_00266024:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_00266028:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00266030:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 732u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_0026606C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7814u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_00266070; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 275u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 276u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 277u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
L_0026606C:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_00266070:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266078u);  if (depth < kMaxDepth) unit_0059(c, 93u, depth + 1u); else { c.pc = 0x00264EF0u; return; } if (c.pc != 0x00266078u) [[unlikely]] return; }
L_00266078:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8433u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002660AC; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 641u)));
    c.r[1].d[0] = c.r[3].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002660AC; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002660ACu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 169u, depth + 1u); else { c.pc = 0x002D62A0u; return; } if (c.pc != 0x002660ACu) [[unlikely]] return; }
L_002660AC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002660C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002660D8u); c.r[5].d[0] = ld16((c.r[16].w[0] + 704u));  if (depth < kMaxDepth) unit_0075(c, 100u, depth + 1u); else { c.pc = 0x002D54D0u; return; } if (c.pc != 0x002660D8u) [[unlikely]] return; }
L_002660D8:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002660E4u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 165u, depth + 1u); else { c.pc = 0x002D61C0u; return; } if (c.pc != 0x002660E4u) [[unlikely]] return; }
L_002660E4:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002660F0u); st32((c.r[16].w[0] + 7816u), 0u);  if (depth < kMaxDepth) unit_0059(c, 93u, depth + 1u); else { c.pc = 0x00264EF0u; return; } if (c.pc != 0x002660F0u) [[unlikely]] return; }
L_002660F0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00266100:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[3] = ld32((c.r[4].w[0] + 144u));
    c.f[2] = ld32((c.r[4].w[0] + 128u));
    c.f[1] = ld32((c.r[4].w[0] + 152u));
    c.f[0] = ld32((c.r[4].w[0] + 136u));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266138u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x00266138u) [[unlikely]] return; }
L_00266138:
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 732u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.f[20] = c.f[0];  if (t) { goto L_002661A8; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[20] = ld32((c.r[16].w[0] + 104u));
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], 0u + 7u);
    set32(c.r[2], 0u - 65u);
    st8((c.r[16].w[0] + 736u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 741u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st16((c.r[16].w[0] + 812u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] | 8ull;
    st16((c.r[16].w[0] + 812u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 275u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 277u), static_cast<std::uint8_t>(0u));
    c.f[1] = ld32((c.r[16].w[0] + 104u));
    c.f[0] = ld32((c.r[16].w[0] + 1060u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 22;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002661A8; } }
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 1;
L_002661A8:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 704u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002661B4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 100u, depth + 1u); else { c.pc = 0x002D54D0u; return; } if (c.pc != 0x002661B4u) [[unlikely]] return; }
L_002661B4:
    set32(c.r[2], ld32((c.r[16].w[0] + 7816u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002661C4; } }
    st32((c.r[16].w[0] + 52u), 0u);
    c.budget -= 1;
L_002661C4:
    c.f[0] = ld32((c.r[16].w[0] + 1304u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[3] = c.r[2].w[0];
    c.f[2] = ld32((c.r[16].w[0] + 7820u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40E00000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[3]);
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    fpu_div(c, 12u, c.f[0], c.f[3]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026620Cu);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x0026620Cu) [[unlikely]] return; }
L_0026620C:
    st32((c.r[16].w[0] + 7820u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266218u); set32(c.r[4], ld32((c.r[16].w[0] + 7816u)));  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x00266218u) [[unlikely]] return; }
L_00266218:
    c.f[1] = ld32((c.r[16].w[0] + 996u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 108u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 7816u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266230u); set32(c.r[4], 0u - c.r[2].w[0]);  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x00266230u) [[unlikely]] return; }
L_00266230:
    c.f[2] = ld32((c.r[16].w[0] + 1064u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    st32((c.r[16].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[5], 0u + 1u);  if (t) { goto L_0026627C; } }
    fpu_div(c, 1u, c.f[20], c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 108u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 108u), c.f[0]);
    set32(c.r[5], 0u + 1u);
    c.budget -= 7;
L_0026627C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266284u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 165u, depth + 1u); else { c.pc = 0x002D61C0u; return; } if (c.pc != 0x00266284u) [[unlikely]] return; }
L_00266284:
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    c.f[12] = 0u;
    st32((c.r[16].w[0] + 1312u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026629Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 148u, depth + 1u); else { c.pc = 0x002D5E70u; return; } if (c.pc != 0x0026629Cu) [[unlikely]] return; }
L_0026629C:
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.f[2] = ld32((c.r[16].w[0] + 1060u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_00266314; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026630C; } }
    c.f[1] = ld32((c.r[16].w[0] + 108u));
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002662FC; } }
    c.f[1] = fp::sub(c.f[0], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.f[2], c.f[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 104u), c.f[0]);  if (t) { goto L_00266310; } }
L_002662FC:
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(0u));
    c.f[0] = ld32((c.r[16].w[0] + 1060u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 104u), c.f[0]);  if (t) { goto L_00266310; } }
L_0026630C:
    st32((c.r[16].w[0] + 104u), c.f[2]);
    c.budget -= 1;
L_00266310:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_00266314:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026631Cu);  if (depth < kMaxDepth) unit_0076(c, 39u, depth + 1u); else { c.pc = 0x002D8810u; return; } if (c.pc != 0x0026631Cu) [[unlikely]] return; }
L_0026631C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_00266330; } }
    st32((c.r[16].w[0] + 68u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
L_00266330:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266338u);  if (depth < kMaxDepth) unit_0059(c, 93u, depth + 1u); else { c.pc = 0x00264EF0u; return; } if (c.pc != 0x00266338u) [[unlikely]] return; }
L_00266338:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00266350:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 732u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002663B8; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 108u), 0u);
    st32((c.r[16].w[0] + 68u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 274u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 275u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 736u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 7u);
    st8((c.r[16].w[0] + 741u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    set32(c.r[2], 0u - 65u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st16((c.r[16].w[0] + 812u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] | 8ull;
    st16((c.r[16].w[0] + 812u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 20;
L_002663B8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002663CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = ld16((c.r[16].w[0] + 704u));  if (t) { goto L_002663DC; } }
L_002663CC:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    set32(c.r[2], 0u - 15361u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 4;
L_002663DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002663E4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 100u, depth + 1u); else { c.pc = 0x002D54D0u; return; } if (c.pc != 0x002663E4u) [[unlikely]] return; }
L_002663E4:
    c.f[1] = ld32((c.r[16].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F730000u);
    c.r[2].d[0] = c.r[2].d[0] | 13107ull;
    c.f[2] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    st32((c.r[16].w[0] + 104u), c.f[1]);
    c.f[1] = ld32((c.r[16].w[0] + 1304u));
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266424u);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x00266424u) [[unlikely]] return; }
L_00266424:
    set32(c.r[2], 0u - c.r[2].w[0]);
    set32(c.r[5], 0u + 1u);
    st32((c.r[16].w[0] + 7820u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266438u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 165u, depth + 1u); else { c.pc = 0x002D61C0u; return; } if (c.pc != 0x00266438u) [[unlikely]] return; }
L_00266438:
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    st32((c.r[16].w[0] + 1312u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 68u));
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 52u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 1064u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00266468; } }
    st32((c.r[16].w[0] + 52u), c.f[1]);
    c.budget -= 1;
L_00266468:
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266480u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 148u, depth + 1u); else { c.pc = 0x002D5E70u; return; } if (c.pc != 0x00266480u) [[unlikely]] return; }
L_00266480:
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.f[1] = ld32((c.r[16].w[0] + 1060u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002664A0; } }
    st32((c.r[16].w[0] + 104u), c.f[1]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 2;
L_002664A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002664A8u);  if (depth < kMaxDepth) unit_0076(c, 39u, depth + 1u); else { c.pc = 0x002D8810u; return; } if (c.pc != 0x002664A8u) [[unlikely]] return; }
L_002664A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002664C8; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002664C0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 169u, depth + 1u); else { c.pc = 0x002D62A0u; return; } if (c.pc != 0x002664C0u) [[unlikely]] return; }
L_002664C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002664D0; } }
L_002664C8:
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(0u));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 2;
L_002664D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002664D8u);  if (depth < kMaxDepth) unit_0059(c, 93u, depth + 1u); else { c.pc = 0x00264EF0u; return; } if (c.pc != 0x002664D8u) [[unlikely]] return; }
L_002664D8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002664F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.f[12] = 0u;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 1u);
    st8((c.r[4].w[0] + 741u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[17], c.r[16].w[0] + 320u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    st16((c.r[4].w[0] + 812u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[4].w[0] + 1136u));
    st32((c.r[4].w[0] + 104u), c.f[0]);
    c.r[2].d[0] = ld16((c.r[4].w[0] + 84u));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026653Cu); st32((c.r[4].w[0] + 1312u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0059(c, 137u, depth + 1u); else { c.pc = 0x00265FE0u; return; } if (c.pc != 0x0026653Cu) [[unlikely]] return; }
L_0026653C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7815u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_00266558; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0026655C; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_00266558:
    st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_0026655C:
    set32(c.r[5], 0u + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266568u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 88u, depth + 1u); else { c.pc = 0x0026D880u; return; } if (c.pc != 0x00266568u) [[unlikely]] return; }
L_00266568:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7815u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    st8((c.r[16].w[0] + 7815u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 1220u), 0u);
    st32((c.r[16].w[0] + 1216u), 0u);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00266590:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 732u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002665C8; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 741u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 1136u));
    st32((c.r[16].w[0] + 104u), c.f[0]);
    st32((c.r[16].w[0] + 108u), 0u);
    c.budget -= 7;
L_002665C8:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 704u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002665D4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 91u, depth + 1u); else { c.pc = 0x002D52F0u; return; } if (c.pc != 0x002665D4u) [[unlikely]] return; }
L_002665D4:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002665E0u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 165u, depth + 1u); else { c.pc = 0x002D61C0u; return; } if (c.pc != 0x002665E0u) [[unlikely]] return; }
L_002665E0:
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    st32((c.r[16].w[0] + 1312u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002665F4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 132u, depth + 1u); else { c.pc = 0x002D5BB0u; return; } if (c.pc != 0x002665F4u) [[unlikely]] return; }
L_002665F4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7813u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_00266650; } }
    c.f[12] = 0u;
    set32(c.r[6], 0u + 1u);
    set32(c.r[17], c.r[16].w[0] + 320u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026661Cu); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 137u, depth + 1u); else { c.pc = 0x00265FE0u; return; } if (c.pc != 0x0026661Cu) [[unlikely]] return; }
L_0026661C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7815u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_00266638; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0026663C; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_00266638:
    st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_0026663C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7815u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 7815u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00266658; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_00266650:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266658u);  if (depth < kMaxDepth) unit_0059(c, 93u, depth + 1u); else { c.pc = 0x00264EF0u; return; } if (c.pc != 0x00266658u) [[unlikely]] return; }
L_00266658:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00266670:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 732u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002666A4; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 3u);
    st8((c.r[16].w[0] + 741u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 96u), 0u);
    st32((c.r[16].w[0] + 1308u), 0u);
    st32((c.r[16].w[0] + 1304u), 0u);
    c.budget -= 7;
L_002666A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002666ACu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 93u, depth + 1u); else { c.pc = 0x00264EF0u; return; } if (c.pc != 0x002666ACu) [[unlikely]] return; }
L_002666AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002666CC; } }
    set32(c.r[5], 0u + 12u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002666C4u); st8((c.r[16].w[0] + 323u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_005B(c, 104u, depth + 1u); else { c.pc = 0x0026DB80u; return; } if (c.pc != 0x002666C4u) [[unlikely]] return; }
L_002666C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002666DC; } }
L_002666CC:
    set32(c.r[5], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002666D8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 132u, depth + 1u); else { c.pc = 0x002D5BB0u; return; } if (c.pc != 0x002666D8u) [[unlikely]] return; }
L_002666D8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002666DC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002666F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 732u)));
    set32(c.r[6], 0u + 2u);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[6].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002667D4; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { mmi::paddub(c.r[4], c.r[16], c.r[0]);  goto L_00266778; }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], c.r[5].w[0] + 1u);  goto L_0026672C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002667F8; } }
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_0026672C:
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 6u);
    st32((c.r[16].w[0] + 108u), 0u);
    st8((c.r[16].w[0] + 741u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00266770; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 732u)));
    c.f[12] = 0u;
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266768u); st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0059(c, 137u, depth + 1u); else { c.pc = 0x00265FE0u; return; } if (c.pc != 0x00266768u) [[unlikely]] return; }
L_00266768:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002667F4; } }
L_00266770:
    st8((c.r[16].w[0] + 323u), static_cast<std::uint8_t>(0u));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 2;
L_00266778:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266780u);  if (depth < kMaxDepth) unit_0059(c, 93u, depth + 1u); else { c.pc = 0x00264EF0u; return; } if (c.pc != 0x00266780u) [[unlikely]] return; }
L_00266780:
    set32(c.r[5], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026678Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 132u, depth + 1u); else { c.pc = 0x002D5BB0u; return; } if (c.pc != 0x0026678Cu) [[unlikely]] return; }
L_0026678C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7813u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002667F4; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 732u)));
    set32(c.r[2], 0u - 5u);
    c.f[12] = 0u;
    set32(c.r[6], 0u + 2u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002667CCu); st16((c.r[16].w[0] + 812u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0059(c, 137u, depth + 1u); else { c.pc = 0x00265FE0u; return; } if (c.pc != 0x002667CCu) [[unlikely]] return; }
L_002667CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002667F4; } }
L_002667D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002667DCu);  if (depth < kMaxDepth) unit_0059(c, 93u, depth + 1u); else { c.pc = 0x00264EF0u; return; } if (c.pc != 0x002667DCu) [[unlikely]] return; }
L_002667DC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7813u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002667F4; } }
    set32(c.r[5], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002667F4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 88u, depth + 1u); else { c.pc = 0x0026D880u; return; } if (c.pc != 0x002667F4u) [[unlikely]] return; }
L_002667F4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002667F8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00266810:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[3] = ld32((c.r[4].w[0] + 144u));
    c.f[2] = ld32((c.r[4].w[0] + 128u));
    c.f[1] = ld32((c.r[4].w[0] + 152u));
    c.f[0] = ld32((c.r[4].w[0] + 136u));
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266858u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x00266858u) [[unlikely]] return; }
L_00266858:
    c.f[20] = c.f[0];
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266868u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 164u, depth + 1u); else { c.pc = 0x002D6120u; return; } if (c.pc != 0x00266868u) [[unlikely]] return; }
L_00266868:
    set32(c.r[3], 0u + 2u);
    set32(c.r[4], 0u + 7u);
    st8((c.r[19].w[0] + 274u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[19].w[0] + 275u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 732u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00266A40; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002669D0; } }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[2].w[0] + 1u);  goto L_002668A4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 733u)));  if (t) { goto L_00266A78; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 1;
L_002668A4:
    st8((c.r[19].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[19].w[0] + 736u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[19].w[0] + 741u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] | 8ull;
    st16((c.r[19].w[0] + 812u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st8((c.r[19].w[0] + 323u), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = ld16((c.r[19].w[0] + 704u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002668CCu); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 91u, depth + 1u); else { c.pc = 0x002D52F0u; return; } if (c.pc != 0x002668CCu) [[unlikely]] return; }
L_002668CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00266900; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 1308u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 13));  if (t) { goto L_002668E8; } }
    set32(c.r[2], c.r[3].w[0] + 8191u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 13));
    c.budget -= 2;
L_002668E8:
    c.f[0] = ld32((c.r[19].w[0] + 1136u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[16].d[0] = c.r[2].d[0] << 56;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 104u), c.f[0]);  if (t) { goto L_00266910; } }
L_00266900:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 732u)));
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[19].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_00266910:
    c.r[18].d[0] = c.r[16].d[0] << 56;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 56);
    set32(c.r[2], c.r[18].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 856u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026692Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x0026692Cu) [[unlikely]] return; }
L_0026692C:
    c.f[2] = ld32((c.r[19].w[0] + 992u));
    c.f[1] = ld32((c.r[19].w[0] + 104u));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266948u); st32((c.r[19].w[0] + 104u), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x00266948u) [[unlikely]] return; }
L_00266948:
    c.f[1] = ld32((c.r[19].w[0] + 992u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[19].w[0] + 52u), c.f[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 1304u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 9;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[19].w[0] + 1312u), c.r[2].w[0]);  if (t) { goto L_0026699C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 13740u);
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 13772u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[19].w[0] + 1216u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 1228u), c.f[0]);  if (t) { goto L_002669A8; } }
L_0026699C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[19].w[0] + 1216u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 1228u), 0u);
    c.budget -= 3;
L_002669A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002669B0u); c.f[12] = ld32((c.r[19].w[0] + 1216u));  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002669B0u) [[unlikely]] return; }
L_002669B0:
    mmi::paddub(c.r[5], c.r[2], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002669BCu); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 95u, depth + 1u); else { c.pc = 0x002D9500u; return; } if (c.pc != 0x002669BCu) [[unlikely]] return; }
L_002669BC:
    c.f[20] = ld32((c.r[19].w[0] + 104u));
    c.r[2].d[0] = c.r[16].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 848u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00266A74; } }
L_002669D0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.f[21] = ld32((c.r[19].w[0] + 1004u));  if (t) { goto L_002669EC; } }
    c.f[0] = ld32((c.r[19].w[0] + 1228u));
    c.f[0] = fp::mul(c.f[21], c.f[0]);
    st32((c.r[19].w[0] + 1004u), c.f[0]);
    c.budget -= 3;
L_002669EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002669F4u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 96u, depth + 1u); else { c.pc = 0x002D9540u; return; } if (c.pc != 0x002669F4u) [[unlikely]] return; }
L_002669F4:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 848u)));
    c.f[2] = ld32((c.r[19].w[0] + 1004u));
    c.f[1] = ld32((c.r[19].w[0] + 1216u));
    c.f[0] = 0u;
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 856u)));
    st32((c.r[19].w[0] + 1216u), c.f[1]);
    st32((c.r[19].w[0] + 1004u), c.f[21]);
    c.f[1] = ld32((c.r[19].w[0] + 1216u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 15;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00266A74; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 732u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00266A74; } }
L_00266A40:
    c.r[5].d[0] = ld16((c.r[19].w[0] + 704u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266A4Cu); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 91u, depth + 1u); else { c.pc = 0x002D52F0u; return; } if (c.pc != 0x00266A4Cu) [[unlikely]] return; }
L_00266A4C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], 0u + 16384u);  if (t) { goto L_00266A60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 858u)));  if (t) { goto L_00266A60; } }
    set32(c.r[17], 0u + 16384u);
    c.budget -= 1;
L_00266A60:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266A6Cu); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 165u, depth + 1u); else { c.pc = 0x002D61C0u; return; } if (c.pc != 0x00266A6Cu) [[unlikely]] return; }
L_00266A6C:
    set32(c.r[2], ld32((c.r[19].w[0] + 84u)));
    st32((c.r[19].w[0] + 1312u), c.r[2].w[0]);
    c.budget -= 2;
L_00266A74:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 733u)));
    c.budget -= 1;
L_00266A78:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (t) { goto L_00266AC0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[3].w[0] + 1u);  if (t) { goto L_00266A98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_00266ACC; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_00266A98:
    c.f[12] = 0u;
    set32(c.r[6], 0u + 3u);
    st8((c.r[19].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266AB4u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 137u, depth + 1u); else { c.pc = 0x00265FE0u; return; } if (c.pc != 0x00266AB4u) [[unlikely]] return; }
L_00266AB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00266AC8; } }
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 1;
L_00266AC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266AC8u);  if (depth < kMaxDepth) unit_0059(c, 93u, depth + 1u); else { c.pc = 0x00264EF0u; return; } if (c.pc != 0x00266AC8u) [[unlikely]] return; }
L_00266AC8:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_00266ACC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266AD4u);  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x00266AD4u) [[unlikely]] return; }
L_00266AD4:
    c.f[1] = ld32((c.r[19].w[0] + 996u));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266AE8u); st32((c.r[19].w[0] + 108u), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x00266AE8u) [[unlikely]] return; }
L_00266AE8:
    c.f[2] = ld32((c.r[19].w[0] + 996u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    st32((c.r[19].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00266B30; } }
    fpu_div(c, 1u, c.f[20], c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 108u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 108u), c.f[0]);
    c.budget -= 6;
L_00266B30:
    c.f[1] = ld32((c.r[19].w[0] + 68u));
    c.f[0] = ld32((c.r[19].w[0] + 52u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 52u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 1064u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00266B58; } }
    st32((c.r[19].w[0] + 52u), c.f[1]);
    c.budget -= 1;
L_00266B58:
    set32(c.r[5], ld32((c.r[19].w[0] + 1312u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266B64u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 144u, depth + 1u); else { c.pc = 0x002D5DA0u; return; } if (c.pc != 0x00266B64u) [[unlikely]] return; }
L_00266B64:
    c.f[0] = ld32((c.r[19].w[0] + 104u));
    c.f[1] = ld32((c.r[19].w[0] + 1060u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (t) { goto L_00266B84; } }
    st32((c.r[19].w[0] + 104u), c.f[1]);
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 2;
L_00266B84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266B8Cu);  if (depth < kMaxDepth) unit_005B(c, 62u, depth + 1u); else { c.pc = 0x0026D320u; return; } if (c.pc != 0x00266B8Cu) [[unlikely]] return; }
L_00266B8C:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00266BB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], 0u + 4u);
    st8((c.r[4].w[0] + 274u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 275u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 732u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_00266BF4; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 96u), 0u);
    st32((c.r[16].w[0] + 1308u), 0u);
    st32((c.r[16].w[0] + 1304u), 0u);
    st32((c.r[16].w[0] + 108u), 0u);
    st8((c.r[16].w[0] + 736u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
L_00266BF4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_00266C6C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_00266C18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = ld16((c.r[16].w[0] + 704u));  if (t) { goto L_00266C78; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_00266C18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266C20u);  if (depth < kMaxDepth) unit_0059(c, 93u, depth + 1u); else { c.pc = 0x00264EF0u; return; } if (c.pc != 0x00266C20u) [[unlikely]] return; }
L_00266C20:
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    c.f[12] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[12]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00266C74; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 10u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266C5Cu); st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0059(c, 137u, depth + 1u); else { c.pc = 0x00265FE0u; return; } if (c.pc != 0x00266C5Cu) [[unlikely]] return; }
L_00266C5C:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 323u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00266C74; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_00266C6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266C74u);  if (depth < kMaxDepth) unit_0059(c, 93u, depth + 1u); else { c.pc = 0x00264EF0u; return; } if (c.pc != 0x00266C74u) [[unlikely]] return; }
L_00266C74:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 704u));
    c.budget -= 1;
L_00266C78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266C80u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 91u, depth + 1u); else { c.pc = 0x002D52F0u; return; } if (c.pc != 0x00266C80u) [[unlikely]] return; }
L_00266C80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00266C98; } }
    c.f[12] = ld32((c.r[16].w[0] + 1036u));
    set32(c.r[5], ld32((c.r[16].w[0] + 1304u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266C98u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 129u, depth + 1u); else { c.pc = 0x002D5B30u; return; } if (c.pc != 0x00266C98u) [[unlikely]] return; }
L_00266C98:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 368u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00266CC4; } }
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F7D0000u);
    c.r[2].d[0] = c.r[2].d[0] | 28836ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.budget -= 7;
L_00266CC4:
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266CD0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 144u, depth + 1u); else { c.pc = 0x002D5DA0u; return; } if (c.pc != 0x00266CD0u) [[unlikely]] return; }
L_00266CD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266CD8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 62u, depth + 1u); else { c.pc = 0x0026D320u; return; } if (c.pc != 0x00266CD8u) [[unlikely]] return; }
L_00266CD8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00266CF0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 732u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_00266E3C; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 68u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 108u), 0u);
    set32(c.r[2], 0u + 8u);
    st32((c.r[16].w[0] + 104u), 0u);
    st8((c.r[16].w[0] + 741u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    set32(c.r[4], 0u - 9u);
    set32(c.r[3], 0u + 4u);
    set32(c.r[2], 0u + 3u);
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    st16((c.r[16].w[0] + 812u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 274u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 275u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 785u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 736u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    st32((c.r[16].w[0] + 1312u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 96u), 0u);
    st32((c.r[16].w[0] + 1308u), 0u);
    st32((c.r[16].w[0] + 1304u), 0u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[4].d[0] & 3ull;
    c.budget -= 27;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u - 3u);  if (t) { goto L_00266D90; } }
    set32(c.r[2], 0u - 4u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 812u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00266D98; } }
    set32(c.r[2], 0u - 3u);
    c.budget -= 1;
L_00266D90:
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    st16((c.r[16].w[0] + 812u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00266D98:
    c.f[12] = 0u;
    set32(c.r[6], 0u + 5u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266DB0u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 137u, depth + 1u); else { c.pc = 0x00265FE0u; return; } if (c.pc != 0x00266DB0u) [[unlikely]] return; }
L_00266DB0:
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 323u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 2352u));
    set32(c.r[17], c.r[29].w[0] + 68u);
    set32(c.r[18], c.r[29].w[0] + 72u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 2356u));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 2360u));
    st32((c.r[18].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 8024u));
    c.f[0] = ld32((c.r[17].w[0]));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266DF4u); st32((c.r[17].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_004B(c, 27u, depth + 1u); else { c.pc = 0x0022C720u; return; } if (c.pc != 0x00266DF4u) [[unlikely]] return; }
L_00266DF4:
    c.f[0] = ld32((c.r[16].w[0] + 2544u));
    set32(c.r[5], c.r[29].w[0] + 64u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 2548u));
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 2552u));
    st32((c.r[18].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 8024u));
    c.f[0] = ld32((c.r[17].w[0]));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266E28u); st32((c.r[17].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_004B(c, 27u, depth + 1u); else { c.pc = 0x0022C720u; return; } if (c.pc != 0x00266E28u) [[unlikely]] return; }
L_00266E28:
    set32(c.r[5], 0u + 10u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266E34u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 33u, depth + 1u); else { c.pc = 0x00198530u; return; } if (c.pc != 0x00266E34u) [[unlikely]] return; }
L_00266E34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);  if (t) { goto L_00266E60; } }
L_00266E3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266E44u);  if (depth < kMaxDepth) unit_0059(c, 93u, depth + 1u); else { c.pc = 0x00264EF0u; return; } if (c.pc != 0x00266E44u) [[unlikely]] return; }
L_00266E44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00266E5C; } }
    set32(c.r[5], 0u + 4u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266E5Cu); st8((c.r[16].w[0] + 323u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_005B(c, 104u, depth + 1u); else { c.pc = 0x0026DB80u; return; } if (c.pc != 0x00266E5Cu) [[unlikely]] return; }
L_00266E5C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00266E60:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00266E80:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[3] = ld32((c.r[4].w[0] + 144u));
    c.f[2] = ld32((c.r[4].w[0] + 128u));
    c.f[1] = ld32((c.r[4].w[0] + 152u));
    c.f[0] = ld32((c.r[4].w[0] + 136u));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266EBCu); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x00266EBCu) [[unlikely]] return; }
L_00266EBC:
    c.f[20] = c.f[0];
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266ECCu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 164u, depth + 1u); else { c.pc = 0x002D6120u; return; } if (c.pc != 0x00266ECCu) [[unlikely]] return; }
L_00266ECC:
    set32(c.r[2], 0u + 2u);
    st8((c.r[17].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 7u);
    st8((c.r[17].w[0] + 275u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].d[0] = ld16((c.r[17].w[0] + 704u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266EE8u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 91u, depth + 1u); else { c.pc = 0x002D52F0u; return; } if (c.pc != 0x00266EE8u) [[unlikely]] return; }
L_00266EE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], 0u + 16384u);  if (t) { goto L_00266EFC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 858u)));  if (t) { goto L_00266EFC; } }
    set32(c.r[16], 0u + 16384u);
    c.budget -= 1;
L_00266EFC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 732u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_00266FB0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[3].w[0] + 1u);  if (t) { goto L_00266F20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_00266FBC; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_00266F20:
    st8((c.r[17].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266F30u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 164u, depth + 1u); else { c.pc = 0x002D6120u; return; } if (c.pc != 0x00266F30u) [[unlikely]] return; }
L_00266F30:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266F3Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 164u, depth + 1u); else { c.pc = 0x002D6120u; return; } if (c.pc != 0x00266F3Cu) [[unlikely]] return; }
L_00266F3C:
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 736u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 7u);
    st8((c.r[17].w[0] + 741u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] | 8ull;
    st16((c.r[17].w[0] + 812u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 323u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 1312u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 4096u);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[1].d[0] = c.r[2].sd[0] < 8193ll ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00266F84; } }
    st32((c.r[17].w[0] + 108u), 0u);
    st32((c.r[17].w[0] + 104u), 0u);
    c.budget -= 2;
L_00266F84:
    c.f[20] = ld32((c.r[17].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[6], 0u + 3u);
    set32(c.r[7], 0u + 15u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266FA4u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 137u, depth + 1u); else { c.pc = 0x00265FE0u; return; } if (c.pc != 0x00266FA4u) [[unlikely]] return; }
L_00266FA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00266FB8; } }
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_00266FB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266FB8u);  if (depth < kMaxDepth) unit_0059(c, 93u, depth + 1u); else { c.pc = 0x00264EF0u; return; } if (c.pc != 0x00266FB8u) [[unlikely]] return; }
L_00266FB8:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_00266FBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266FC4u);  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x00266FC4u) [[unlikely]] return; }
L_00266FC4:
    c.f[1] = ld32((c.r[17].w[0] + 996u));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266FD8u); st32((c.r[17].w[0] + 108u), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x00266FD8u) [[unlikely]] return; }
L_00266FD8:
    c.f[2] = ld32((c.r[17].w[0] + 996u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    st32((c.r[17].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[5], 0u + 1u);  if (t) { goto L_00267024; } }
    fpu_div(c, 1u, c.f[20], c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 108u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 108u), c.f[0]);
    set32(c.r[5], 0u + 1u);
    c.budget -= 7;
L_00267024:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026702Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 165u, depth + 1u); else { c.pc = 0x002D61C0u; return; } if (c.pc != 0x0026702Cu) [[unlikely]] return; }
L_0026702C:
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    st32((c.r[17].w[0] + 1312u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[17].w[0] + 68u));
    c.f[0] = ld32((c.r[17].w[0] + 52u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 52u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 1064u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0026705C; } }
    st32((c.r[17].w[0] + 52u), c.f[1]);
    c.budget -= 1;
L_0026705C:
    set32(c.r[5], ld32((c.r[17].w[0] + 1312u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267068u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 144u, depth + 1u); else { c.pc = 0x002D5DA0u; return; } if (c.pc != 0x00267068u) [[unlikely]] return; }
L_00267068:
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    c.f[1] = ld32((c.r[17].w[0] + 1060u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_00267088; } }
    st32((c.r[17].w[0] + 104u), c.f[1]);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 2;
L_00267088:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267090u);  if (depth < kMaxDepth) unit_005B(c, 62u, depth + 1u); else { c.pc = 0x0026D320u; return; } if (c.pc != 0x00267090u) [[unlikely]] return; }
L_00267090:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002670B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], 0u + 2u);
    set32(c.r[6], 0u + 4u);
    st8((c.r[4].w[0] + 274u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 275u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 732u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_00267138; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 96u), 0u);
    st32((c.r[16].w[0] + 1308u), 0u);
    st32((c.r[16].w[0] + 1304u), 0u);
    st32((c.r[16].w[0] + 108u), 0u);
    st8((c.r[16].w[0] + 736u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 7u);
    st8((c.r[16].w[0] + 741u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x420C0000u);
    set32(c.r[3], 0u - 5u);
    c.f[12] = c.r[2].w[0];
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.r[2].d[0] = c.r[7].d[0] & c.r[3].d[0];
    st16((c.r[16].w[0] + 812u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    set32(c.r[7], 0u + 20u);
    c.r[2].d[0] = c.r[2].d[0] | 8ull;
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026712Cu); st16((c.r[16].w[0] + 812u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0059(c, 137u, depth + 1u); else { c.pc = 0x00265FE0u; return; } if (c.pc != 0x0026712Cu) [[unlikely]] return; }
L_0026712C:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 323u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00267140; } }
L_00267138:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267140u);  if (depth < kMaxDepth) unit_0059(c, 93u, depth + 1u); else { c.pc = 0x00264EF0u; return; } if (c.pc != 0x00267140u) [[unlikely]] return; }
L_00267140:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 704u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026714Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 91u, depth + 1u); else { c.pc = 0x002D52F0u; return; } if (c.pc != 0x0026714Cu) [[unlikely]] return; }
L_0026714C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00267170; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 744u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00267170; } }
    c.f[12] = ld32((c.r[16].w[0] + 1036u));
    set32(c.r[5], ld32((c.r[16].w[0] + 1304u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267170u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 129u, depth + 1u); else { c.pc = 0x002D5B30u; return; } if (c.pc != 0x00267170u) [[unlikely]] return; }
L_00267170:
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F7A0000u);
    c.r[2].d[0] = c.r[2].d[0] | 57672ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267198u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 144u, depth + 1u); else { c.pc = 0x002D5DA0u; return; } if (c.pc != 0x00267198u) [[unlikely]] return; }
L_00267198:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002671A0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 62u, depth + 1u); else { c.pc = 0x0026D320u; return; } if (c.pc != 0x002671A0u) [[unlikely]] return; }
L_002671A0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002671B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    set32(c.r[2], 0u + 2u);
    st32((c.r[29].w[0]), c.f[20]);
    st8((c.r[4].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 732u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_00267298; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1308u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 13));  if (t) { goto L_002671EC; } }
    set32(c.r[2], c.r[3].w[0] + 8191u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 13));
    c.budget -= 2;
L_002671EC:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 732u)));
    c.r[6].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], 0u + 16u);
    set32(c.r[2], 0u + 4u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 741u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 275u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 13648u);
    set32(c.r[4], c.r[6].w[0] << 1);
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[16].w[0] + 104u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 13776u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 1u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 1136u));
    set32(c.r[3], c.r[5].w[0] - c.r[4].w[0]);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 1216u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[16].w[0] + 1228u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 1304u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    st32((c.r[16].w[0] + 1312u), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 1u)));
    c.budget -= 41;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267290u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 95u, depth + 1u); else { c.pc = 0x002D9500u; return; } if (c.pc != 0x00267290u) [[unlikely]] return; }
L_00267290:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_00267328; } }
L_00267298:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.f[21] = ld32((c.r[16].w[0] + 7780u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.f[20] = ld32((c.r[16].w[0] + 1004u));  if (t) { goto L_002672C8; } }
    c.f[0] = ld32((c.r[16].w[0] + 1228u));
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    st32((c.r[16].w[0] + 1004u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = ld32((c.r[16].w[0] + 1228u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 7780u), c.f[0]);
    c.budget -= 7;
L_002672C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002672D0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 96u, depth + 1u); else { c.pc = 0x002D9540u; return; } if (c.pc != 0x002672D0u) [[unlikely]] return; }
L_002672D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002672E4; } }
    set32(c.r[5], 0u + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002672E4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 88u, depth + 1u); else { c.pc = 0x0026D880u; return; } if (c.pc != 0x002672E4u) [[unlikely]] return; }
L_002672E4:
    st32((c.r[16].w[0] + 7780u), c.f[21]);
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00267314; } }
    c.f[0] = ld32((c.r[16].w[0] + 1004u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1216u), c.f[0]);  if (t) { goto L_00267320; } }
L_00267314:
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267320u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 132u, depth + 1u); else { c.pc = 0x002D5BB0u; return; } if (c.pc != 0x00267320u) [[unlikely]] return; }
L_00267320:
    st32((c.r[16].w[0] + 1004u), c.f[20]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 2;
L_00267328:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267330u);  if (depth < kMaxDepth) unit_0075(c, 169u, depth + 1u); else { c.pc = 0x002D62A0u; return; } if (c.pc != 0x00267330u) [[unlikely]] return; }
L_00267330:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267338u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 93u, depth + 1u); else { c.pc = 0x00264EF0u; return; } if (c.pc != 0x00267338u) [[unlikely]] return; }
L_00267338:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00267350:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 2u);
    st8((c.r[4].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 732u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_00267398; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 17u);
    st8((c.r[16].w[0] + 741u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    st16((c.r[16].w[0] + 812u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 1136u));
    st32((c.r[16].w[0] + 104u), c.f[0]);
    st32((c.r[16].w[0] + 108u), 0u);
    c.budget -= 10;
L_00267398:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 704u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002673A4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 91u, depth + 1u); else { c.pc = 0x002D52F0u; return; } if (c.pc != 0x002673A4u) [[unlikely]] return; }
L_002673A4:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002673B0u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 165u, depth + 1u); else { c.pc = 0x002D61C0u; return; } if (c.pc != 0x002673B0u) [[unlikely]] return; }
L_002673B0:
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    st32((c.r[16].w[0] + 1312u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002673C4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 132u, depth + 1u); else { c.pc = 0x002D5BB0u; return; } if (c.pc != 0x002673C4u) [[unlikely]] return; }
L_002673C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002673CCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 169u, depth + 1u); else { c.pc = 0x002D62A0u; return; } if (c.pc != 0x002673CCu) [[unlikely]] return; }
L_002673CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002673D4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 93u, depth + 1u); else { c.pc = 0x00264EF0u; return; } if (c.pc != 0x002673D4u) [[unlikely]] return; }
L_002673D4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002673F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 2u);
    st8((c.r[4].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 732u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_00267470; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 96u), 0u);
    st32((c.r[16].w[0] + 1308u), 0u);
    set32(c.r[2], 0u + 18u);
    st32((c.r[16].w[0] + 1304u), 0u);
    st8((c.r[16].w[0] + 741u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[3], c.r[2].w[0] + 13632u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = c.r[2].w[0];
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.f[1] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::add(c.f[3], c.f[2]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.budget -= 24;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1216u), c.f[2]);  if (t) { goto L_002674A0; } }
L_00267470:
    c.f[1] = ld32((c.r[16].w[0] + 1004u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    c.f[2] = 0u;
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 1216u), c.f[0]);  if (t) { goto L_002674A0; } }
    st32((c.r[16].w[0] + 108u), 0u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002674A0u); st32((c.r[16].w[0] + 104u), 0u);  if (depth < kMaxDepth) unit_005B(c, 104u, depth + 1u); else { c.pc = 0x0026DB80u; return; } if (c.pc != 0x002674A0u) [[unlikely]] return; }
L_002674A0:
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002674ACu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 132u, depth + 1u); else { c.pc = 0x002D5BB0u; return; } if (c.pc != 0x002674ACu) [[unlikely]] return; }
L_002674AC:
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002674D0; } }
    st32((c.r[16].w[0] + 104u), 0u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 2;
L_002674D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002674D8u);  if (depth < kMaxDepth) unit_0075(c, 169u, depth + 1u); else { c.pc = 0x002D62A0u; return; } if (c.pc != 0x002674D8u) [[unlikely]] return; }
L_002674D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002674E0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 93u, depth + 1u); else { c.pc = 0x00264EF0u; return; } if (c.pc != 0x002674E0u) [[unlikely]] return; }
L_002674E0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002674F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 732u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[5], 0u + 8u);  if (t) { goto L_002675F0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00267588; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], c.r[4].w[0] + 1u);  if (t) { goto L_00267530; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_00267614; } }
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_00267530:
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8433u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[2], 0u + 6u);  if (t) { goto L_00267548; } }
    st32((c.r[16].w[0] + 104u), 0u);
    set32(c.r[2], 0u + 6u);
    c.budget -= 2;
L_00267548:
    st32((c.r[16].w[0] + 108u), 0u);
    st8((c.r[16].w[0] + 741u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    set32(c.r[3], 0u - 389u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 13616u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st16((c.r[16].w[0] + 812u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 1216u), c.f[0]);
    c.budget -= 16;
L_00267588:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8433u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002675A4; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002675A4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 132u, depth + 1u); else { c.pc = 0x002D5BB0u; return; } if (c.pc != 0x002675A4u) [[unlikely]] return; }
L_002675A4:
    c.f[1] = ld32((c.r[16].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.r[2].d[0] = c.r[2].d[0] | 26214ull;
    c.f[2] = c.r[2].w[0];
    c.f[0] = 0u;
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    st32((c.r[16].w[0] + 104u), c.f[1]);
    c.f[2] = ld32((c.r[16].w[0] + 1004u));
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 15;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 1216u), c.f[1]);  if (t) { goto L_00267610; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 732u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 8u);
    c.budget -= 4;
L_002675F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002675F8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 88u, depth + 1u); else { c.pc = 0x0026D880u; return; } if (c.pc != 0x002675F8u) [[unlikely]] return; }
L_002675F8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8433u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00267610; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267610u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 179u, depth + 1u); else { c.pc = 0x002D6440u; return; } if (c.pc != 0x00267610u) [[unlikely]] return; }
L_00267610:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_00267614:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026761Cu);  if (depth < kMaxDepth) unit_0059(c, 93u, depth + 1u); else { c.pc = 0x00264EF0u; return; } if (c.pc != 0x0026761Cu) [[unlikely]] return; }
L_0026761C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8433u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00267634; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267634u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 169u, depth + 1u); else { c.pc = 0x002D62A0u; return; } if (c.pc != 0x00267634u) [[unlikely]] return; }
L_00267634:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00267650:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[3] = ld32((c.r[4].w[0] + 144u));
    c.f[2] = ld32((c.r[4].w[0] + 128u));
    c.f[1] = ld32((c.r[4].w[0] + 152u));
    c.f[0] = ld32((c.r[4].w[0] + 136u));
    mmi::paddub(c.r[20], c.r[4], c.r[0]);
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026769Cu); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 292u, depth + 1u); else { c.pc = 0x0013B4E0u; return; } if (c.pc != 0x0026769Cu) [[unlikely]] return; }
L_0026769C:
    c.f[20] = c.f[0];
    mmi::paddub(c.r[4], c.r[20], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002676ACu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 164u, depth + 1u); else { c.pc = 0x002D6120u; return; } if (c.pc != 0x002676ACu) [[unlikely]] return; }
L_002676AC:
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], 0u + 4u);
    st8((c.r[20].w[0] + 274u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[20].w[0] + 275u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 732u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0026788C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0026781C; } }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[2].w[0] + 1u);  goto L_002676E8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_002678C4; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 1;
L_002676E8:
    st8((c.r[20].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 7u);
    st8((c.r[20].w[0] + 736u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[20].w[0] + 741u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] | 8ull;
    st16((c.r[20].w[0] + 812u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[5].d[0] = ld16((c.r[20].w[0] + 704u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267710u); mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 91u, depth + 1u); else { c.pc = 0x002D52F0u; return; } if (c.pc != 0x00267710u) [[unlikely]] return; }
L_00267710:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00267744; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 1308u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 13));  if (t) { goto L_0026772C; } }
    set32(c.r[2], c.r[3].w[0] + 8191u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 13));
    c.budget -= 2;
L_0026772C:
    c.f[0] = ld32((c.r[20].w[0] + 1136u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[16].d[0] = c.r[2].d[0] << 56;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 104u), c.f[0]);  if (t) { goto L_00267754; } }
L_00267744:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 732u)));
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[20].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_00267754:
    c.r[19].d[0] = c.r[16].d[0] << 56;
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 56);
    set32(c.r[18], c.r[19].w[0] << 1);
    set32(c.r[2], c.r[18].w[0] + c.r[20].w[0]);
    c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 856u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267770u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x00267770u) [[unlikely]] return; }
L_00267770:
    c.f[2] = ld32((c.r[20].w[0] + 992u));
    c.f[1] = ld32((c.r[20].w[0] + 104u));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026778Cu); st32((c.r[20].w[0] + 104u), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x0026778Cu) [[unlikely]] return; }
L_0026778C:
    c.f[1] = ld32((c.r[20].w[0] + 992u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[20].w[0] + 52u), c.f[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 1304u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 9;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[20].w[0] + 1312u), c.r[2].w[0]);  if (t) { goto L_002677E8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 13647u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[3], c.r[19].w[0] << 2);
    c.f[0] = c.r[6].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], c.r[2].w[0] + 13772u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[20].w[0] + 1216u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 1228u), c.f[0]);  if (t) { goto L_002677F4; } }
L_002677E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[20].w[0] + 1216u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 1228u), 0u);
    c.budget -= 3;
L_002677F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002677FCu); c.f[12] = ld32((c.r[20].w[0] + 1216u));  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002677FCu) [[unlikely]] return; }
L_002677FC:
    mmi::paddub(c.r[5], c.r[2], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267808u); mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 95u, depth + 1u); else { c.pc = 0x002D9500u; return; } if (c.pc != 0x00267808u) [[unlikely]] return; }
L_00267808:
    c.f[20] = ld32((c.r[20].w[0] + 104u));
    c.r[2].d[0] = c.r[16].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 848u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_002678C0; } }
L_0026781C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.f[21] = ld32((c.r[20].w[0] + 1004u));  if (t) { goto L_00267838; } }
    c.f[0] = ld32((c.r[20].w[0] + 1228u));
    c.f[0] = fp::mul(c.f[21], c.f[0]);
    st32((c.r[20].w[0] + 1004u), c.f[0]);
    c.budget -= 3;
L_00267838:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267840u); mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 96u, depth + 1u); else { c.pc = 0x002D9540u; return; } if (c.pc != 0x00267840u) [[unlikely]] return; }
L_00267840:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 848u)));
    c.f[2] = ld32((c.r[20].w[0] + 1004u));
    c.f[1] = ld32((c.r[20].w[0] + 1216u));
    c.f[0] = 0u;
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 856u)));
    st32((c.r[20].w[0] + 1216u), c.f[1]);
    st32((c.r[20].w[0] + 1004u), c.f[21]);
    c.f[1] = ld32((c.r[20].w[0] + 1216u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 15;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002678C0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 732u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002678C0; } }
L_0026788C:
    c.r[5].d[0] = ld16((c.r[20].w[0] + 704u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267898u); mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 91u, depth + 1u); else { c.pc = 0x002D52F0u; return; } if (c.pc != 0x00267898u) [[unlikely]] return; }
L_00267898:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], 0u + 16384u);  if (t) { goto L_002678AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 858u)));  if (t) { goto L_002678AC; } }
    set32(c.r[17], 0u + 16384u);
    c.budget -= 1;
L_002678AC:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002678B8u); mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 165u, depth + 1u); else { c.pc = 0x002D61C0u; return; } if (c.pc != 0x002678B8u) [[unlikely]] return; }
L_002678B8:
    set32(c.r[2], ld32((c.r[20].w[0] + 84u)));
    st32((c.r[20].w[0] + 1312u), c.r[2].w[0]);
    c.budget -= 2;
L_002678C0:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_002678C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002678CCu);  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x002678CCu) [[unlikely]] return; }
L_002678CC:
    c.f[1] = ld32((c.r[20].w[0] + 996u));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002678E0u); st32((c.r[20].w[0] + 108u), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x002678E0u) [[unlikely]] return; }
L_002678E0:
    c.f[2] = ld32((c.r[20].w[0] + 996u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    st32((c.r[20].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00267928; } }
    fpu_div(c, 1u, c.f[20], c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 108u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[20].w[0] + 108u), c.f[0]);
    c.budget -= 6;
L_00267928:
    c.f[1] = ld32((c.r[20].w[0] + 68u));
    c.f[0] = ld32((c.r[20].w[0] + 52u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[20].w[0] + 52u), c.f[0]);
    c.f[1] = ld32((c.r[20].w[0] + 1064u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00267950; } }
    st32((c.r[20].w[0] + 52u), c.f[1]);
    c.budget -= 1;
L_00267950:
    set32(c.r[5], ld32((c.r[20].w[0] + 1312u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026795Cu); mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 144u, depth + 1u); else { c.pc = 0x002D5DA0u; return; } if (c.pc != 0x0026795Cu) [[unlikely]] return; }
L_0026795C:
    c.f[0] = ld32((c.r[20].w[0] + 104u));
    c.f[1] = ld32((c.r[20].w[0] + 1060u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (t) { goto L_0026797C; } }
    st32((c.r[20].w[0] + 104u), c.f[1]);
    mmi::paddub(c.r[4], c.r[20], c.r[0]);
    c.budget -= 2;
L_0026797C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267984u);  if (depth < kMaxDepth) unit_0076(c, 39u, depth + 1u); else { c.pc = 0x002D8810u; return; } if (c.pc != 0x00267984u) [[unlikely]] return; }
L_00267984:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026798Cu); mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 93u, depth + 1u); else { c.pc = 0x00264EF0u; return; } if (c.pc != 0x0026798Cu) [[unlikely]] return; }
L_0026798C:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002679C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 732u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_00267A08; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 96u), 0u);
    st32((c.r[16].w[0] + 1308u), 0u);
    st32((c.r[16].w[0] + 1304u), 0u);
    set32(c.r[2], 0u + 2u);
    st32((c.r[16].w[0] + 108u), 0u);
    st8((c.r[16].w[0] + 736u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    set32(c.r[2], 0u - 65u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st16((c.r[16].w[0] + 812u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 12;
L_00267A08:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 744u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00267A48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267A1Cu); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0075(c, 244u, depth + 1u); else { c.pc = 0x002D78B0u; return; } if (c.pc != 0x00267A1Cu) [[unlikely]] return; }
L_00267A1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00267A48; } }
    c.r[5].d[0] = ld16((c.r[16].w[0] + 704u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267A30u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 91u, depth + 1u); else { c.pc = 0x002D52F0u; return; } if (c.pc != 0x00267A30u) [[unlikely]] return; }
L_00267A30:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00267A48; } }
    c.f[12] = ld32((c.r[16].w[0] + 1036u));
    set32(c.r[5], ld32((c.r[16].w[0] + 1304u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267A48u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 129u, depth + 1u); else { c.pc = 0x002D5B30u; return; } if (c.pc != 0x00267A48u) [[unlikely]] return; }
L_00267A48:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 368u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00267A74; } }
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F7D0000u);
    c.r[2].d[0] = c.r[2].d[0] | 28836ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.budget -= 7;
L_00267A74:
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267A80u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 144u, depth + 1u); else { c.pc = 0x002D5DA0u; return; } if (c.pc != 0x00267A80u) [[unlikely]] return; }
L_00267A80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267A88u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 62u, depth + 1u); else { c.pc = 0x0026D320u; return; } if (c.pc != 0x00267A88u) [[unlikely]] return; }
L_00267A88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267A90u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 93u, depth + 1u); else { c.pc = 0x00264EF0u; return; } if (c.pc != 0x00267A90u) [[unlikely]] return; }
L_00267A90:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00267AA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8433u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00267AC8; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 274u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00267AC8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 732u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { mmi::paddub(c.r[4], c.r[16], c.r[0]);  goto L_00267BFC; }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[5].d[0]) { mmi::paddub(c.r[4], c.r[16], c.r[0]);  goto L_00267BA8; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], c.r[4].w[0] + 1u);  goto L_00267AF8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00267C1C; } }
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_00267AF8:
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 68u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 108u), 0u);
    set32(c.r[2], 0u + 8u);
    st32((c.r[16].w[0] + 104u), 0u);
    st8((c.r[16].w[0] + 741u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    set32(c.r[3], 0u - 73u);
    set32(c.r[2], 0u + 4u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st16((c.r[16].w[0] + 812u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 274u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 275u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 785u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 736u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    st32((c.r[16].w[0] + 1312u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 96u), 0u);
    st32((c.r[16].w[0] + 1308u), 0u);
    st32((c.r[16].w[0] + 1304u), 0u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8433u)));
    c.budget -= 24;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_00267B64; } }
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267B64u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_004B(c, 27u, depth + 1u); else { c.pc = 0x0022C720u; return; } if (c.pc != 0x00267B64u) [[unlikely]] return; }
L_00267B64:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[2], 0u + 33u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00267B84; } }
    set32(c.r[5], 0u + 18u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267B84u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 25u, depth + 1u); else { c.pc = 0x00198370u; return; } if (c.pc != 0x00267B84u) [[unlikely]] return; }
L_00267B84:
    c.f[12] = 0u;
    set32(c.r[6], 0u + 5u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267B9Cu); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 90u, depth + 1u); else { c.pc = 0x00264D10u; return; } if (c.pc != 0x00267B9Cu) [[unlikely]] return; }
L_00267B9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00267C18; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_00267BA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267BB0u);  if (depth < kMaxDepth) unit_0059(c, 93u, depth + 1u); else { c.pc = 0x00264EF0u; return; } if (c.pc != 0x00267BB0u) [[unlikely]] return; }
L_00267BB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00267C18; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 732u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 13617u);
    c.f[12] = 0u;
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267BF0u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 90u, depth + 1u); else { c.pc = 0x00264D10u; return; } if (c.pc != 0x00267BF0u) [[unlikely]] return; }
L_00267BF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00267C18; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_00267BFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267C04u);  if (depth < kMaxDepth) unit_0059(c, 93u, depth + 1u); else { c.pc = 0x00264EF0u; return; } if (c.pc != 0x00267C04u) [[unlikely]] return; }
L_00267C04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00267C18; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267C18u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 104u, depth + 1u); else { c.pc = 0x0026DB80u; return; } if (c.pc != 0x00267C18u) [[unlikely]] return; }
L_00267C18:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00267C1C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00267C30:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[3] = ld32((c.r[4].w[0] + 144u));
    c.f[2] = ld32((c.r[4].w[0] + 128u));
    c.f[1] = ld32((c.r[4].w[0] + 152u));
    c.f[0] = ld32((c.r[4].w[0] + 136u));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267C6Cu); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x00267C6Cu) [[unlikely]] return; }
L_00267C6C:
    c.f[20] = c.f[0];
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267C7Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 164u, depth + 1u); else { c.pc = 0x002D6120u; return; } if (c.pc != 0x00267C7Cu) [[unlikely]] return; }
L_00267C7C:
    set32(c.r[2], 0u + 2u);
    st8((c.r[17].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 4u);
    st8((c.r[17].w[0] + 275u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].d[0] = ld16((c.r[17].w[0] + 704u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267C98u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 91u, depth + 1u); else { c.pc = 0x002D52F0u; return; } if (c.pc != 0x00267C98u) [[unlikely]] return; }
L_00267C98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], 0u + 16384u);  if (t) { goto L_00267CAC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 858u)));  if (t) { goto L_00267CAC; } }
    set32(c.r[16], 0u + 16384u);
    c.budget -= 1;
L_00267CAC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 732u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_00267D68; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267CCCu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 164u, depth + 1u); else { c.pc = 0x002D6120u; return; } if (c.pc != 0x00267CCCu) [[unlikely]] return; }
L_00267CCC:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267CD8u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 164u, depth + 1u); else { c.pc = 0x002D6120u; return; } if (c.pc != 0x00267CD8u) [[unlikely]] return; }
L_00267CD8:
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 736u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 7u);
    st8((c.r[17].w[0] + 741u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 812u)));
    set32(c.r[2], 0u - 65u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st16((c.r[17].w[0] + 812u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] | 8ull;
    st16((c.r[17].w[0] + 812u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 1312u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 4096u);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[1].d[0] = c.r[2].sd[0] < 8193ll ? 1ull : 0ull;
    c.budget -= 19;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00267D2C; } }
    st32((c.r[17].w[0] + 108u), 0u);
    st32((c.r[17].w[0] + 104u), 0u);
    c.budget -= 2;
L_00267D2C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 13616u);
    c.f[20] = ld32((c.r[17].w[0] + 104u));
    c.f[12] = 0u;
    set32(c.r[6], 0u + 3u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267D5Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 90u, depth + 1u); else { c.pc = 0x00264D10u; return; } if (c.pc != 0x00267D5Cu) [[unlikely]] return; }
L_00267D5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_00267D74; } }
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_00267D68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267D70u);  if (depth < kMaxDepth) unit_0059(c, 93u, depth + 1u); else { c.pc = 0x00264EF0u; return; } if (c.pc != 0x00267D70u) [[unlikely]] return; }
L_00267D70:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_00267D74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267D7Cu);  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x00267D7Cu) [[unlikely]] return; }
L_00267D7C:
    c.f[1] = ld32((c.r[17].w[0] + 996u));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267D90u); st32((c.r[17].w[0] + 108u), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x00267D90u) [[unlikely]] return; }
L_00267D90:
    c.f[2] = ld32((c.r[17].w[0] + 996u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    st32((c.r[17].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[5], 0u + 1u);  if (t) { goto L_00267DDC; } }
    fpu_div(c, 1u, c.f[20], c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 108u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 108u), c.f[0]);
    set32(c.r[5], 0u + 1u);
    c.budget -= 7;
L_00267DDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267DE4u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 165u, depth + 1u); else { c.pc = 0x002D61C0u; return; } if (c.pc != 0x00267DE4u) [[unlikely]] return; }
L_00267DE4:
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    st32((c.r[17].w[0] + 1312u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[17].w[0] + 68u));
    c.f[0] = ld32((c.r[17].w[0] + 52u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 52u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 1064u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00267E14; } }
    st32((c.r[17].w[0] + 52u), c.f[1]);
    c.budget -= 1;
L_00267E14:
    set32(c.r[5], ld32((c.r[17].w[0] + 1312u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267E20u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 144u, depth + 1u); else { c.pc = 0x002D5DA0u; return; } if (c.pc != 0x00267E20u) [[unlikely]] return; }
L_00267E20:
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    c.f[1] = ld32((c.r[17].w[0] + 1060u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_00267E40; } }
    st32((c.r[17].w[0] + 104u), c.f[1]);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 2;
L_00267E40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267E48u);  if (depth < kMaxDepth) unit_0076(c, 39u, depth + 1u); else { c.pc = 0x002D8810u; return; } if (c.pc != 0x00267E48u) [[unlikely]] return; }
L_00267E48:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00267E60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 732u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_00267ED8; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 96u), 0u);
    st32((c.r[16].w[0] + 1308u), 0u);
    st32((c.r[16].w[0] + 1304u), 0u);
    set32(c.r[2], 0u + 2u);
    st32((c.r[16].w[0] + 108u), 0u);
    st8((c.r[16].w[0] + 736u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 7u);
    st8((c.r[16].w[0] + 741u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    set32(c.r[3], 0u - 453u);
    set32(c.r[2], 0u + 33u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    st16((c.r[16].w[0] + 812u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] | 8ull;
    st16((c.r[16].w[0] + 812u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.budget -= 21;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00267ED8; } }
    set32(c.r[5], 0u + 18u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267ED8u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 29u, depth + 1u); else { c.pc = 0x00198460u; return; } if (c.pc != 0x00267ED8u) [[unlikely]] return; }
L_00267ED8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 744u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00267F18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267EECu); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0075(c, 244u, depth + 1u); else { c.pc = 0x002D78B0u; return; } if (c.pc != 0x00267EECu) [[unlikely]] return; }
L_00267EEC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00267F18; } }
    c.r[5].d[0] = ld16((c.r[16].w[0] + 704u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267F00u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 91u, depth + 1u); else { c.pc = 0x002D52F0u; return; } if (c.pc != 0x00267F00u) [[unlikely]] return; }
L_00267F00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00267F18; } }
    c.f[12] = ld32((c.r[16].w[0] + 1036u));
    set32(c.r[5], ld32((c.r[16].w[0] + 1304u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267F18u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 129u, depth + 1u); else { c.pc = 0x002D5B30u; return; } if (c.pc != 0x00267F18u) [[unlikely]] return; }
L_00267F18:
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F7A0000u);
    c.r[2].d[0] = c.r[2].d[0] | 57672ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267F40u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 144u, depth + 1u); else { c.pc = 0x002D5DA0u; return; } if (c.pc != 0x00267F40u) [[unlikely]] return; }
L_00267F40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267F48u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 93u, depth + 1u); else { c.pc = 0x00264EF0u; return; } if (c.pc != 0x00267F48u) [[unlikely]] return; }
L_00267F48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267F50u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 62u, depth + 1u); else { c.pc = 0x0026D320u; return; } if (c.pc != 0x00267F50u) [[unlikely]] return; }
L_00267F50:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00267F60:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 2u);
    st32((c.r[29].w[0]), c.f[20]);
    st8((c.r[4].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 732u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_00267FE4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[3].w[0] + 1u);  if (t) { goto L_00267F9C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = ld16((c.r[16].w[0] + 704u));  if (t) { [[clang::musttail]] return unit_005A(c, 3u, depth); } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_00267F9C:
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 11u);
    st8((c.r[16].w[0] + 741u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    set32(c.r[2], 0u + 7u);
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    st16((c.r[16].w[0] + 812u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 275u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 277u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 778u), static_cast<std::uint8_t>(0u));
    c.f[0] = ld32((c.r[16].w[0] + 1048u));
    st32((c.r[16].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 1040u));
    st32((c.r[16].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 1044u));
    st32((c.r[16].w[0] + 1216u), c.f[0]);
    st32((c.r[16].w[0] + 108u), 0u);
    st32((c.r[16].w[0] + 68u), 0u);
    c.budget -= 18;
L_00267FE4:
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { [[clang::musttail]] return unit_005A(c, 2u, depth); } }
    [[clang::musttail]] return unit_005A(c, 1u, depth);
}

}
