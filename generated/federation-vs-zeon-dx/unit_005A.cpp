#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_005A[4096] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 4, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0,
    0, 0, 0, 8, 0, 0, 0, 0, 0, 9, 0, 0, 0, 10, 0, 11, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 14,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0,
    18, 0, 0, 0, 0, 19, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 22, 0, 0, 23, 0, 0,
    0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 26, 0,
    0, 27, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    30, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0, 0, 0, 33, 0, 34, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 37, 0, 0, 0, 0, 38, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 40, 0, 0, 41, 0, 0, 0, 0, 42, 0, 0, 0, 0, 43, 0,
    0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0,
    0, 46, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 48, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 51, 0, 0, 0,
    0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0,
    56, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 60,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 64, 0, 65, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0,
    0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 73, 0,
    0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78,
    0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    82, 0, 0, 83, 0, 0, 84, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 86, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    91, 0, 0, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    99, 0, 0, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 109, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110,
    0, 0, 111, 0, 0, 0, 0, 112, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0,
    0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    127, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 130, 0, 0, 0, 0, 0,
    131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 134, 0, 0, 0, 0,
    135, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 142, 0, 0, 0, 0, 0, 143, 0, 144, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 147, 0, 148, 0, 0, 0, 0, 0, 149, 0, 150, 0, 0, 151, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 157, 0, 158,
    0, 0, 0, 0, 0, 159, 0, 160, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 167, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 170, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 173, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 182, 0, 0, 183, 0, 184, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 188, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 189, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 192, 0, 193, 0, 0, 0, 194, 0, 0, 195, 0, 196, 0, 0, 0, 197,
    0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 205, 0, 206, 0, 207, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0,
    0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 212, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 218, 0, 219, 0, 220, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 224, 0, 225, 0, 0, 0, 0, 226, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0,
    0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0,
};

void unit_005A(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00268000;
    case 2u: goto L_00268010;
    case 3u: goto L_0026805C;
    case 4u: goto L_00268064;
    case 5u: goto L_002680BC;
    case 6u: goto L_002680CC;
    case 7u: goto L_002680F4;
    case 8u: goto L_0026810C;
    case 9u: goto L_00268124;
    case 10u: goto L_00268134;
    case 11u: goto L_0026813C;
    case 12u: goto L_00268144;
    case 13u: goto L_002681E0;
    case 14u: goto L_002681FC;
    case 15u: goto L_00268230;
    case 16u: goto L_00268250;
    case 17u: goto L_00268264;
    case 18u: goto L_00268280;
    case 19u: goto L_00268294;
    case 20u: goto L_002682A0;
    case 21u: goto L_0026835C;
    case 22u: goto L_00268368;
    case 23u: goto L_00268374;
    case 24u: goto L_00268388;
    case 25u: goto L_002683EC;
    case 26u: goto L_002683F8;
    case 27u: goto L_00268404;
    case 28u: goto L_00268420;
    case 29u: goto L_00268434;
    case 30u: goto L_00268500;
    case 31u: goto L_0026850C;
    case 32u: goto L_00268520;
    case 33u: goto L_00268534;
    case 34u: goto L_0026853C;
    case 35u: goto L_00268550;
    case 36u: goto L_002685DC;
    case 37u: goto L_00268604;
    case 38u: goto L_00268618;
    case 39u: goto L_0026862C;
    case 40u: goto L_00268644;
    case 41u: goto L_00268650;
    case 42u: goto L_00268664;
    case 43u: goto L_00268678;
    case 44u: goto L_00268690;
    case 45u: goto L_002686F8;
    case 46u: goto L_00268704;
    case 47u: goto L_00268724;
    case 48u: goto L_00268804;
    case 49u: goto L_00268810;
    case 50u: goto L_00268858;
    case 51u: goto L_00268870;
    case 52u: goto L_0026888C;
    case 53u: goto L_00268970;
    case 54u: goto L_002689A4;
    case 55u: goto L_00268A74;
    case 56u: goto L_00268A80;
    case 57u: goto L_00268A88;
    case 58u: goto L_00268ACC;
    case 59u: goto L_00268AE0;
    case 60u: goto L_00268AFC;
    case 61u: goto L_00268BB0;
    case 62u: goto L_00268C00;
    case 63u: goto L_00268CA8;
    case 64u: goto L_00268CB4;
    case 65u: goto L_00268CBC;
    case 66u: goto L_00268CD0;
    case 67u: goto L_00268D0C;
    case 68u: goto L_00268D50;
    case 69u: goto L_00268D78;
    case 70u: goto L_00268D88;
    case 71u: goto L_00268DFC;
    case 72u: goto L_00268E6C;
    case 73u: goto L_00268E78;
    case 74u: goto L_00268E90;
    case 75u: goto L_00268EAC;
    case 76u: goto L_00268F1C;
    case 77u: goto L_00268F28;
    case 78u: goto L_00268F7C;
    case 79u: goto L_00268F90;
    case 80u: goto L_00269030;
    case 81u: goto L_00269038;
    case 82u: goto L_00269080;
    case 83u: goto L_0026908C;
    case 84u: goto L_00269098;
    case 85u: goto L_002690B0;
    case 86u: goto L_002690CC;
    case 87u: goto L_002690D4;
    case 88u: goto L_0026910C;
    case 89u: goto L_00269160;
    case 90u: goto L_00269170;
    case 91u: goto L_00269280;
    case 92u: goto L_00269298;
    case 93u: goto L_002692A8;
    case 94u: goto L_002692D4;
    case 95u: goto L_002692DC;
    case 96u: goto L_00269304;
    case 97u: goto L_0026932C;
    case 98u: goto L_00269340;
    case 99u: goto L_00269380;
    case 100u: goto L_00269398;
    case 101u: goto L_002693A8;
    case 102u: goto L_002693B4;
    case 103u: goto L_002693E4;
    case 104u: goto L_00269418;
    case 105u: goto L_00269430;
    case 106u: goto L_00269470;
    case 107u: goto L_002694B0;
    case 108u: goto L_002694E4;
    case 109u: goto L_002694F0;
    case 110u: goto L_002695FC;
    case 111u: goto L_00269608;
    case 112u: goto L_0026961C;
    case 113u: goto L_00269630;
    case 114u: goto L_002697A4;
    case 115u: goto L_002697B0;
    case 116u: goto L_002697DC;
    case 117u: goto L_00269814;
    case 118u: goto L_002698EC;
    case 119u: goto L_0026992C;
    case 120u: goto L_00269960;
    case 121u: goto L_00269A30;
    case 122u: goto L_00269A74;
    case 123u: goto L_00269A90;
    case 124u: goto L_00269AAC;
    case 125u: goto L_00269B0C;
    case 126u: goto L_00269B30;
    case 127u: goto L_00269B80;
    case 128u: goto L_00269BA0;
    case 129u: goto L_00269BE0;
    case 130u: goto L_00269BE8;
    case 131u: goto L_00269C00;
    case 132u: goto L_00269C40;
    case 133u: goto L_00269C60;
    case 134u: goto L_00269C6C;
    case 135u: goto L_00269C80;
    case 136u: goto L_00269CA0;
    case 137u: goto L_00269D4C;
    case 138u: goto L_00269D54;
    case 139u: goto L_00269F50;
    case 140u: goto L_00269F5C;
    case 141u: goto L_00269FAC;
    case 142u: goto L_00269FB4;
    case 143u: goto L_00269FCC;
    case 144u: goto L_00269FD4;
    case 145u: goto L_00269FF0;
    case 146u: goto L_0026A0A8;
    case 147u: goto L_0026A0B0;
    case 148u: goto L_0026A0B8;
    case 149u: goto L_0026A0D0;
    case 150u: goto L_0026A0D8;
    case 151u: goto L_0026A0E4;
    case 152u: goto L_0026A110;
    case 153u: goto L_0026A148;
    case 154u: goto L_0026A150;
    case 155u: goto L_0026A194;
    case 156u: goto L_0026A2E8;
    case 157u: goto L_0026A2F4;
    case 158u: goto L_0026A2FC;
    case 159u: goto L_0026A314;
    case 160u: goto L_0026A31C;
    case 161u: goto L_0026A334;
    case 162u: goto L_0026A34C;
    case 163u: goto L_0026A364;
    case 164u: goto L_0026A38C;
    case 165u: goto L_0026A3B8;
    case 166u: goto L_0026A3D8;
    case 167u: goto L_0026A3F0;
    case 168u: goto L_0026A424;
    case 169u: goto L_0026A448;
    case 170u: goto L_0026A450;
    case 171u: goto L_0026A458;
    case 172u: goto L_0026A4A4;
    case 173u: goto L_0026A504;
    case 174u: goto L_0026A520;
    case 175u: goto L_0026A540;
    case 176u: goto L_0026A5DC;
    case 177u: goto L_0026A610;
    case 178u: goto L_0026A630;
    case 179u: goto L_0026A664;
    case 180u: goto L_0026A6A0;
    case 181u: goto L_0026A6CC;
    case 182u: goto L_0026A6E0;
    case 183u: goto L_0026A6EC;
    case 184u: goto L_0026A6F4;
    case 185u: goto L_0026A728;
    case 186u: goto L_0026A750;
    case 187u: goto L_0026A7DC;
    case 188u: goto L_0026A7E8;
    case 189u: goto L_0026A810;
    case 190u: goto L_0026A81C;
    case 191u: goto L_0026A9AC;
    case 192u: goto L_0026A9C0;
    case 193u: goto L_0026A9C8;
    case 194u: goto L_0026A9D8;
    case 195u: goto L_0026A9E4;
    case 196u: goto L_0026A9EC;
    case 197u: goto L_0026A9FC;
    case 198u: goto L_0026AA0C;
    case 199u: goto L_0026AA1C;
    case 200u: goto L_0026AB3C;
    case 201u: goto L_0026AB8C;
    case 202u: goto L_0026ABB0;
    case 203u: goto L_0026AC24;
    case 204u: goto L_0026ACBC;
    case 205u: goto L_0026ACC4;
    case 206u: goto L_0026ACCC;
    case 207u: goto L_0026ACD4;
    case 208u: goto L_0026ACF0;
    case 209u: goto L_0026ADF4;
    case 210u: goto L_0026AE04;
    case 211u: goto L_0026AE5C;
    case 212u: goto L_0026AE6C;
    case 213u: goto L_0026AF1C;
    case 214u: goto L_0026AF48;
    case 215u: goto L_0026AF58;
    case 216u: goto L_0026AF68;
    case 217u: goto L_0026AF90;
    case 218u: goto L_0026AFB0;
    case 219u: goto L_0026AFB8;
    case 220u: goto L_0026AFC0;
    case 221u: goto L_0026AFDC;
    case 222u: goto L_0026B008;
    case 223u: goto L_0026B03C;
    case 224u: goto L_0026B054;
    case 225u: goto L_0026B05C;
    case 226u: goto L_0026B070;
    case 227u: goto L_0026B1B4;
    case 228u: goto L_0026B1C4;
    case 229u: goto L_0026B1F0;
    case 230u: goto L_0026B214;
    case 231u: goto L_0026B304;
    case 232u: goto L_0026B328;
    case 233u: goto L_0026B408;
    case 234u: goto L_0026B4A0;
    case 235u: goto L_0026B590;
    case 236u: goto L_0026B624;
    case 237u: goto L_0026B800;
    case 238u: goto L_0026B910;
    case 239u: goto L_0026B958;
    case 240u: goto L_0026B9A0;
    case 241u: goto L_0026B9E4;
    case 242u: goto L_0026BB1C;
    case 243u: goto L_0026BB4C;
    case 244u: goto L_0026BB70;
    case 245u: goto L_0026BC24;
    case 246u: goto L_0026BC5C;
    case 247u: goto L_0026BC94;
    case 248u: goto L_0026BCD8;
    case 249u: goto L_0026BDE0;
    case 250u: goto L_0026BE10;
    case 251u: goto L_0026BE38;
    case 252u: goto L_0026BFD0;
    case 253u: goto L_0026BFF0;
    default: bad_entry(c, 0x00268000u); return;
    }
L_00268000:
    st32((c.r[16].w[0] + 108u), 0u);
    st32((c.r[16].w[0] + 104u), 0u);
    st32((c.r[16].w[0] + 64u), 0u);
    st32((c.r[16].w[0] + 48u), 0u);
    c.budget -= 4;
L_00268010:
    c.f[2] = ld32((c.r[16].w[0] + 1216u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 1216u), c.f[1]);  if (t) { goto L_00268058; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 732u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 778u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 108u), 0u);
    st32((c.r[16].w[0] + 68u), 0u);
    st32((c.r[16].w[0] + 64u), 0u);
    c.budget -= 8;
L_00268058:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 704u));
    c.budget -= 1;
L_0026805C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268064u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 100u, depth + 1u); else { c.pc = 0x002D54D0u; return; } if (c.pc != 0x00268064u) [[unlikely]] return; }
L_00268064:
    set32(c.r[2], ld32((c.r[16].w[0] + 7816u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00268074; } }
    st32((c.r[16].w[0] + 52u), 0u);
    c.budget -= 1;
L_00268074:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002680BCu);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002680BCu) [[unlikely]] return; }
L_002680BC:
    set32(c.r[5], 0u + 2u);
    st32((c.r[16].w[0] + 7820u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002680CCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 165u, depth + 1u); else { c.pc = 0x002D61C0u; return; } if (c.pc != 0x002680CCu) [[unlikely]] return; }
L_002680CC:
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    st32((c.r[16].w[0] + 1312u), c.r[2].w[0]);
    c.f[2] = ld32((c.r[16].w[0] + 64u));
    c.f[1] = ld32((c.r[16].w[0] + 1004u));
    c.f[0] = ld32((c.r[16].w[0] + 48u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 48u), c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002680F4u); set32(c.r[4], ld32((c.r[16].w[0] + 7816u)));  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x002680F4u) [[unlikely]] return; }
L_002680F4:
    c.f[1] = ld32((c.r[16].w[0] + 48u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 7816u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026810Cu); set32(c.r[4], 0u - c.r[2].w[0]);  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x0026810Cu) [[unlikely]] return; }
L_0026810C:
    c.f[1] = ld32((c.r[16].w[0] + 48u));
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268124u); st32((c.r[16].w[0] + 52u), c.f[0]);  if (depth < kMaxDepth) unit_0075(c, 164u, depth + 1u); else { c.pc = 0x002D6120u; return; } if (c.pc != 0x00268124u) [[unlikely]] return; }
L_00268124:
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.f[12] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268134u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 148u, depth + 1u); else { c.pc = 0x002D5E70u; return; } if (c.pc != 0x00268134u) [[unlikely]] return; }
L_00268134:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026813Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 39u, depth + 1u); else { c.pc = 0x002D8810u; return; } if (c.pc != 0x0026813Cu) [[unlikely]] return; }
L_0026813C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268144u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 93u, depth + 1u); else { c.pc = 0x00264EF0u; return; } if (c.pc != 0x00268144u) [[unlikely]] return; }
L_00268144:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[3], 0u + 40u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_00268160; } }
    set32(c.r[3], 0u + 42u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_00268264; } }
L_00268160:
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 260u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00268264; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 512ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00268264; } }
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00268264; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 256u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 450ull;
    set32(c.r[4], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] << (c.r[5].w[0] & 31u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00268264; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 13232u);
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[20] = ld32((c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002681E0u); set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x002681E0u) [[unlikely]] return; }
L_002681E0:
    c.f[1] = fp::mul(c.f[20], c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 48u), c.f[0]);
    st32((c.r[29].w[0] + 52u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002681FCu); set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x002681FCu) [[unlikely]] return; }
L_002681FC:
    c.f[1] = fp::mul(c.f[20], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    st32((c.r[29].w[0] + 64u), c.f[0]);
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268230u); st32((c.r[29].w[0] + 72u), c.f[0]);  if (depth < kMaxDepth) unit_0045(c, 199u, depth + 1u); else { c.pc = 0x00217650u; return; } if (c.pc != 0x00268230u) [[unlikely]] return; }
L_00268230:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00268264; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268250u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0075(c, 244u, depth + 1u); else { c.pc = 0x002D78B0u; return; } if (c.pc != 0x00268250u) [[unlikely]] return; }
L_00268250:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00268264; } }
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268264u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_004D(c, 313u, depth + 1u); else { c.pc = 0x00237910u; return; } if (c.pc != 0x00268264u) [[unlikely]] return; }
L_00268264:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00268280:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268294u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 93u, depth + 1u); else { c.pc = 0x00264EF0u; return; } if (c.pc != 0x00268294u) [[unlikely]] return; }
L_00268294:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002682A0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 164u, depth + 1u); else { c.pc = 0x002D6120u; return; } if (c.pc != 0x002682A0u) [[unlikely]] return; }
L_002682A0:
    set32(c.r[7], 0u + 10u);
    st8((c.r[16].w[0] + 785u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 732u)));
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    if (c.r[2].d[0] == c.r[6].d[0]) { mmi::paddub(c.r[4], c.r[16], c.r[0]);  goto L_0026836C; }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[2].w[0] + 1u);  goto L_002682CC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002683FC; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 1;
L_002682CC:
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[2].w[0];
    c.r[2].d[0] = c.r[3].d[0] | 64ull;
    st16((c.r[16].w[0] + 812u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 741u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[16].w[0] + 736u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 52u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 1308u)));
    c.budget -= 17;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 13));  if (t) { goto L_00268318; } }
    set32(c.r[2], c.r[2].w[0] + 8191u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 13));
    c.budget -= 2;
L_00268318:
    set32(c.r[2], c.r[28].w[0] - 29032u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_0026833C; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[12] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00268354; } }
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.budget -= 1;
L_0026833C:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[12] = fp::cvt_s_w(c.f[0]);
    c.f[12] = fp::add(c.f[12], c.f[12]);
    c.budget -= 6;
L_00268354:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026835Cu); st32((c.r[16].w[0] + 1216u), c.f[12]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x0026835Cu) [[unlikely]] return; }
L_0026835C:
    mmi::paddub(c.r[5], c.r[2], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268368u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D9610u; return; } if (c.pc != 0x00268368u) [[unlikely]] return; }
L_00268368:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_0026836C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268374u);  if (depth < kMaxDepth) unit_0076(c, 102u, depth + 1u); else { c.pc = 0x002D9640u; return; } if (c.pc != 0x00268374u) [[unlikely]] return; }
L_00268374:
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E000000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268388u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 148u, depth + 1u); else { c.pc = 0x002D5E70u; return; } if (c.pc != 0x00268388u) [[unlikely]] return; }
L_00268388:
    c.f[1] = ld32((c.r[16].w[0] + 1004u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    c.f[12] = 0u;
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[12]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 1216u), c.f[0]);  if (t) { goto L_002683F8; } }
    c.f[0] = ld32((c.r[16].w[0] + 1048u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 13648u);
    set32(c.r[6], 0u + 6u);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 1040u));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    st32((c.r[16].w[0] + 108u), c.f[0]);
    st32((c.r[16].w[0] + 52u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    st32((c.r[16].w[0] + 1312u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002683ECu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 90u, depth + 1u); else { c.pc = 0x00264D10u; return; } if (c.pc != 0x002683ECu) [[unlikely]] return; }
L_002683EC:
    set32(c.r[5], 0u + 15u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002683F8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 88u, depth + 1u); else { c.pc = 0x0026D880u; return; } if (c.pc != 0x002683F8u) [[unlikely]] return; }
L_002683F8:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002683FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268404u);  if (depth < kMaxDepth) unit_0076(c, 39u, depth + 1u); else { c.pc = 0x002D8810u; return; } if (c.pc != 0x00268404u) [[unlikely]] return; }
L_00268404:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00268420:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268434u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 93u, depth + 1u); else { c.pc = 0x00264EF0u; return; } if (c.pc != 0x00268434u) [[unlikely]] return; }
L_00268434:
    set32(c.r[4], 0u + 2u);
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 274u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 275u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 10u);
    st8((c.r[16].w[0] + 785u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 732u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_002684F4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00268490; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[3].w[0] + 1u);  if (t) { goto L_00268478; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = ld16((c.r[16].w[0] + 704u));  if (t) { goto L_002684F8; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_00268478:
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 11u);
    st8((c.r[16].w[0] + 741u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 1044u));
    st32((c.r[16].w[0] + 1216u), c.f[0]);
    st8((c.r[16].w[0] + 778u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
L_00268490:
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002684B4; } }
    st32((c.r[16].w[0] + 108u), 0u);
    st32((c.r[16].w[0] + 104u), 0u);
    c.budget -= 2;
L_002684B4:
    c.f[2] = ld32((c.r[16].w[0] + 1216u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 1216u), c.f[1]);  if (t) { goto L_002684F4; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 732u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 778u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 108u), 0u);
    c.budget -= 6;
L_002684F4:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 704u));
    c.budget -= 1;
L_002684F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268500u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 91u, depth + 1u); else { c.pc = 0x002D52F0u; return; } if (c.pc != 0x00268500u) [[unlikely]] return; }
L_00268500:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026850Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 165u, depth + 1u); else { c.pc = 0x002D61C0u; return; } if (c.pc != 0x0026850Cu) [[unlikely]] return; }
L_0026850C:
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268520u); st32((c.r[16].w[0] + 1312u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0075(c, 164u, depth + 1u); else { c.pc = 0x002D6120u; return; } if (c.pc != 0x00268520u) [[unlikely]] return; }
L_00268520:
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E000000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268534u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 148u, depth + 1u); else { c.pc = 0x002D5E70u; return; } if (c.pc != 0x00268534u) [[unlikely]] return; }
L_00268534:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026853Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 62u, depth + 1u); else { c.pc = 0x0026D320u; return; } if (c.pc != 0x0026853Cu) [[unlikely]] return; }
L_0026853C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00268550:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 732u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002685E4; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.f[12] = 0u;
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 96u), 0u);
    st32((c.r[16].w[0] + 1308u), 0u);
    st32((c.r[16].w[0] + 1304u), 0u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 836u)));
    set32(c.r[2], 0u + 4u);
    set32(c.r[6], 0u + 7u);
    set32(c.r[7], 0u - 65u);
    st16((c.r[16].w[0] + 834u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 274u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 275u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 741u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[3], 0u + 10u);
    c.r[7].d[0] = c.r[8].d[0] & c.r[7].d[0];
    st16((c.r[16].w[0] + 812u), static_cast<std::uint16_t>(c.r[7].w[0]));
    st8((c.r[16].w[0] + 736u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 785u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[2], c.r[2].w[0] + 13649u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002685DCu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 90u, depth + 1u); else { c.pc = 0x00264D10u; return; } if (c.pc != 0x002685DCu) [[unlikely]] return; }
L_002685DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002685FC; } }
L_002685E4:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 785u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002685F8; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[16].w[0] + 785u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002685F8:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002685FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268604u);  if (depth < kMaxDepth) unit_0059(c, 93u, depth + 1u); else { c.pc = 0x00264EF0u; return; } if (c.pc != 0x00268604u) [[unlikely]] return; }
L_00268604:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 744u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00268644; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268618u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0075(c, 244u, depth + 1u); else { c.pc = 0x002D78B0u; return; } if (c.pc != 0x00268618u) [[unlikely]] return; }
L_00268618:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00268644; } }
    c.r[5].d[0] = ld16((c.r[16].w[0] + 704u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026862Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 91u, depth + 1u); else { c.pc = 0x002D52F0u; return; } if (c.pc != 0x0026862Cu) [[unlikely]] return; }
L_0026862C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00268644; } }
    c.f[12] = ld32((c.r[16].w[0] + 1036u));
    set32(c.r[5], ld32((c.r[16].w[0] + 1304u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268644u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 129u, depth + 1u); else { c.pc = 0x002D5B30u; return; } if (c.pc != 0x00268644u) [[unlikely]] return; }
L_00268644:
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268650u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 144u, depth + 1u); else { c.pc = 0x002D5DA0u; return; } if (c.pc != 0x00268650u) [[unlikely]] return; }
L_00268650:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7813u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_00268670; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268664u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 62u, depth + 1u); else { c.pc = 0x0026D320u; return; } if (c.pc != 0x00268664u) [[unlikely]] return; }
L_00268664:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0026867C; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_00268670:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268678u);  if (depth < kMaxDepth) unit_0076(c, 39u, depth + 1u); else { c.pc = 0x002D8810u; return; } if (c.pc != 0x00268678u) [[unlikely]] return; }
L_00268678:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0026867C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00268690:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 732u)));
    set32(c.r[6], 0u + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[6].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_0026872C; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], c.r[3].w[0] + 1u);  goto L_002686C0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0026885C; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_002686C0:
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 1216u), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    set32(c.r[3], 0u - 261u);
    set32(c.r[2], 0u + 9u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    st16((c.r[16].w[0] + 812u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[16].w[0] + 812u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 741u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002686F8u); st8((c.r[16].w[0] + 756u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (depth < kMaxDepth) unit_0075(c, 179u, depth + 1u); else { c.pc = 0x002D6440u; return; } if (c.pc != 0x002686F8u) [[unlikely]] return; }
L_002686F8:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268704u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 234u, depth + 1u); else { c.pc = 0x002DEB00u; return; } if (c.pc != 0x00268704u) [[unlikely]] return; }
L_00268704:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[3], 0u + 33u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00268858; } }
    set32(c.r[5], 0u + 18u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268724u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 29u, depth + 1u); else { c.pc = 0x00198460u; return; } if (c.pc != 0x00268724u) [[unlikely]] return; }
L_00268724:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00268858; } }
L_0026872C:
    c.f[1] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    c.f[2] = 0u;
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 1216u), c.f[0]);  if (t) { goto L_00268858; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 732u)));
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 1308u)));
    c.budget -= 8;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 14));  if (t) { goto L_00268774; } }
    set32(c.r[2], c.r[3].w[0] + 16383u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 14));
    c.budget -= 2;
L_00268774:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    st16((c.r[16].w[0] + 848u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 848u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[2].w[0] - 704u);
    c.f[12] = 0u;
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    st32((c.r[16].w[0] + 104u), c.f[0]);
    st32((c.r[16].w[0] + 108u), 0u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 6u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 1216u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 7u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 1220u), c.f[0]);
    st32((c.r[16].w[0] + 28u), c.r[6].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1304u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 84u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st16((c.r[16].w[0] + 892u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    st32((c.r[16].w[0] + 1312u), c.r[2].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 848u)));
    c.budget -= 36;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268804u); set32(c.r[6], c.r[2].w[0] + 8u);  if (depth < kMaxDepth) unit_0059(c, 90u, depth + 1u); else { c.pc = 0x00264D10u; return; } if (c.pc != 0x00268804u) [[unlikely]] return; }
L_00268804:
    set32(c.r[5], 0u + 18u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268810u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 88u, depth + 1u); else { c.pc = 0x0026D880u; return; } if (c.pc != 0x00268810u) [[unlikely]] return; }
L_00268810:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 848u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_00268830; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 275u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0026884C; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_00268830:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 4u);  if (t) { goto L_00268848; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 275u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0026884C; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_00268848:
    st8((c.r[16].w[0] + 275u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_0026884C:
    set32(c.r[5], 0u + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268858u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x00268858u) [[unlikely]] return; }
L_00268858:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0026885C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00268870:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], 0u + 2u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026888Cu); st8((c.r[4].w[0] + 274u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (depth < kMaxDepth) unit_0075(c, 164u, depth + 1u); else { c.pc = 0x002D6120u; return; } if (c.pc != 0x0026888Cu) [[unlikely]] return; }
L_0026888C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 732u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[5], 0u + 19u);  if (t) { goto L_00268968; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00268920; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002688B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 850u)));  if (t) { goto L_00268974; } }
L_002688B8:
    c.f[1] = ld32((c.r[16].w[0] + 1004u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    c.f[2] = 0u;
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 1216u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 1004u));
    c.f[0] = ld32((c.r[16].w[0] + 1220u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 1220u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00268970; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 732u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 1220u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00268970; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 732u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00268970; } }
L_00268920:
    c.f[2] = ld32((c.r[16].w[0] + 1004u));
    c.f[1] = ld32((c.r[16].w[0] + 1220u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[16].w[0] + 1220u), c.f[1]);  if (t) { goto L_00268958; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 850u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00268970; } }
L_00268958:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 732u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 19u);
    c.budget -= 4;
L_00268968:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268970u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 88u, depth + 1u); else { c.pc = 0x0026D880u; return; } if (c.pc != 0x00268970u) [[unlikely]] return; }
L_00268970:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 850u)));
    c.budget -= 1;
L_00268974:
    c.r[2].d[0] = c.r[2].d[0] & 3072ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_00268A6C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + 32u);  if (t) { goto L_0026899C; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 892u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1312u), c.r[2].w[0]);  if (t) { goto L_00268A68; } }
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 1;
L_0026899C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002689A4u); set32(c.r[5], c.r[16].w[0] + 1328u);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x002689A4u) [[unlikely]] return; }
L_002689A4:
    c.f[1] = ld32((c.r[16].w[0] + 1248u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002689E8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 850u)));
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002689D8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1296u)));
    set32(c.r[2], c.r[2].w[0] + 15360u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1312u), c.r[2].w[0]);  if (t) { goto L_00268A68; } }
L_002689D8:
    set32(c.r[2], ld32((c.r[16].w[0] + 1296u)));
    set32(c.r[2], c.r[2].w[0] - 15360u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1312u), c.r[2].w[0]);  if (t) { goto L_00268A68; } }
L_002689E8:
    c.f[1] = ld32((c.r[16].w[0] + 1252u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00268A34; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 850u)));
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00268A20; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1256u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 1296u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1312u), c.r[2].w[0]);  if (t) { goto L_00268A68; } }
L_00268A20:
    set32(c.r[3], ld32((c.r[16].w[0] + 1296u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1256u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1312u), c.r[2].w[0]);  if (t) { goto L_00268A68; } }
L_00268A34:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 850u)));
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00268A58; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1258u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 1296u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1312u), c.r[2].w[0]);  if (t) { goto L_00268A68; } }
L_00268A58:
    set32(c.r[3], ld32((c.r[16].w[0] + 1296u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1258u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    st32((c.r[16].w[0] + 1312u), c.r[2].w[0]);
    c.budget -= 4;
L_00268A68:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_00268A6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268A74u);  if (depth < kMaxDepth) unit_0059(c, 93u, depth + 1u); else { c.pc = 0x00264EF0u; return; } if (c.pc != 0x00268A74u) [[unlikely]] return; }
L_00268A74:
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268A80u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 132u, depth + 1u); else { c.pc = 0x002D5BB0u; return; } if (c.pc != 0x00268A80u) [[unlikely]] return; }
L_00268A80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268A88u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 169u, depth + 1u); else { c.pc = 0x002D62A0u; return; } if (c.pc != 0x00268A88u) [[unlikely]] return; }
L_00268A88:
    set32(c.r[7], ld32((c.r[16].w[0] + 1312u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 1308u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[1] = c.r[2].w[0];
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    c.f[0] = ld32((c.r[16].w[0] + 84u));
    set32(c.r[2], c.r[7].w[0] - c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.f[2] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268ACCu); c.f[12] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x00268ACCu) [[unlikely]] return; }
L_00268ACC:
    st32((c.r[16].w[0] + 84u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00268AE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], 0u + 2u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268AFCu); st8((c.r[4].w[0] + 274u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (depth < kMaxDepth) unit_0075(c, 164u, depth + 1u); else { c.pc = 0x002D6120u; return; } if (c.pc != 0x00268AFCu) [[unlikely]] return; }
L_00268AFC:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 732u)));
    set32(c.r[5], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_00268C78; } }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[4].d[0];  if (t) { goto L_00268C48; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_00268BF4; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[2], c.r[6].w[0] + 1u);  if (t) { goto L_00268BBC; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[2], c.r[6].w[0] + 1u);  if (t) { goto L_00268B44; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));  if (t) { goto L_00268CAC; } }
    set32(c.r[2], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_00268B44:
    c.f[12] = 0u;
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 1216u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 1220u), c.f[0]);
    st8((c.r[16].w[0] + 274u), static_cast<std::uint8_t>(0u));
    c.f[2] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268BB0u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 90u, depth + 1u); else { c.pc = 0x00264D10u; return; } if (c.pc != 0x00268BB0u) [[unlikely]] return; }
L_00268BB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00268CA8; } }
    set32(c.r[2], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_00268BBC:
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 848u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00268BD8; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 275u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00268BF0; } }
L_00268BD8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_00268BEC; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 275u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00268BF0; } }
L_00268BEC:
    st8((c.r[16].w[0] + 275u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 1;
L_00268BF0:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_00268BF4:
    st8((c.r[16].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268C00u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 93u, depth + 1u); else { c.pc = 0x00264EF0u; return; } if (c.pc != 0x00268C00u) [[unlikely]] return; }
L_00268C00:
    c.f[1] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    c.f[2] = 0u;
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 1216u), c.f[0]);  if (t) { goto L_00268CA8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7813u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00268CA8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 732u)));
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 108u), 0u);
    st32((c.r[16].w[0] + 104u), 0u);
    st8((c.r[16].w[0] + 275u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
L_00268C48:
    c.f[2] = ld32((c.r[16].w[0] + 7780u));
    c.f[1] = ld32((c.r[16].w[0] + 1220u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 1220u), c.f[1]);  if (t) { goto L_00268CA8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 732u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00268C78:
    st32((c.r[16].w[0] + 1308u), 0u);
    st32((c.r[16].w[0] + 1304u), 0u);
    st8((c.r[16].w[0] + 741u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    set32(c.r[2], 0u - 129u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st16((c.r[16].w[0] + 812u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 108u), 0u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268CA8u); st32((c.r[16].w[0] + 104u), 0u);  if (depth < kMaxDepth) unit_005B(c, 104u, depth + 1u); else { c.pc = 0x0026DB80u; return; } if (c.pc != 0x00268CA8u) [[unlikely]] return; }
L_00268CA8:
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.budget -= 1;
L_00268CAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268CB4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 132u, depth + 1u); else { c.pc = 0x002D5BB0u; return; } if (c.pc != 0x00268CB4u) [[unlikely]] return; }
L_00268CB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268CBCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 169u, depth + 1u); else { c.pc = 0x002D62A0u; return; } if (c.pc != 0x00268CBCu) [[unlikely]] return; }
L_00268CBC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00268CD0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
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
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268D0Cu); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 292u, depth + 1u); else { c.pc = 0x0013B4E0u; return; } if (c.pc != 0x00268D0Cu) [[unlikely]] return; }
L_00268D0C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 732u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.f[20] = c.f[0];  if (t) { goto L_00268D20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = ld16((c.r[16].w[0] + 704u));  if (t) { goto L_00268D48; } }
L_00268D20:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 736u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 7u);
    st8((c.r[16].w[0] + 741u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] | 8ull;
    st16((c.r[16].w[0] + 812u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[5].d[0] = ld16((c.r[16].w[0] + 704u));
    c.budget -= 10;
L_00268D48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268D50u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 91u, depth + 1u); else { c.pc = 0x002D52F0u; return; } if (c.pc != 0x00268D50u) [[unlikely]] return; }
L_00268D50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00268E1C; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 858u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));  if (t) { goto L_00268D6C; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_00268D6C:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268D78u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 165u, depth + 1u); else { c.pc = 0x002D61C0u; return; } if (c.pc != 0x00268D78u) [[unlikely]] return; }
L_00268D78:
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268D88u); st32((c.r[16].w[0] + 1312u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x00268D88u) [[unlikely]] return; }
L_00268D88:
    c.f[1] = ld32((c.r[16].w[0] + 996u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[2] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 52u));
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    st32((c.r[16].w[0] + 52u), c.f[1]);
    st32((c.r[16].w[0] + 68u), 0u);
    c.f[1] = ld32((c.r[16].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 19;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00268DEC; } }
    fpu_div(c, 1u, c.f[20], c.f[1]);
    c.f[0] = ld32((c.r[16].w[0] + 108u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.budget -= 6;
L_00268DEC:
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.f[12] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268DFCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 148u, depth + 1u); else { c.pc = 0x002D5E70u; return; } if (c.pc != 0x00268DFCu) [[unlikely]] return; }
L_00268DFC:
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.f[1] = ld32((c.r[16].w[0] + 1060u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_00268E70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 104u), c.f[1]);  if (t) { goto L_00268E6C; } }
L_00268E1C:
    st32((c.r[16].w[0] + 96u), 0u);
    st32((c.r[16].w[0] + 1308u), 0u);
    st32((c.r[16].w[0] + 1304u), 0u);
    set32(c.r[2], 0u + 2u);
    st32((c.r[16].w[0] + 108u), 0u);
    st8((c.r[16].w[0] + 736u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 368u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00268E60; } }
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F7D0000u);
    c.r[2].d[0] = c.r[2].d[0] | 28836ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.budget -= 7;
L_00268E60:
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268E6Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 144u, depth + 1u); else { c.pc = 0x002D5DA0u; return; } if (c.pc != 0x00268E6Cu) [[unlikely]] return; }
L_00268E6C:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_00268E70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268E78u);  if (depth < kMaxDepth) unit_005B(c, 62u, depth + 1u); else { c.pc = 0x0026D320u; return; } if (c.pc != 0x00268E78u) [[unlikely]] return; }
L_00268E78:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00268E90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 2u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268EACu); st8((c.r[4].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0075(c, 169u, depth + 1u); else { c.pc = 0x002D62A0u; return; } if (c.pc != 0x00268EACu) [[unlikely]] return; }
L_00268EAC:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 732u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { mmi::paddub(c.r[4], c.r[16], c.r[0]);  goto L_00269028; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { mmi::paddub(c.r[4], c.r[16], c.r[0]);  goto L_00268F88; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { mmi::paddub(c.r[4], c.r[16], c.r[0]);  goto L_00268F20; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], c.r[4].w[0] + 1u);  goto L_00268EE8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002690A4; } }
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_00268EE8:
    c.f[12] = 0u;
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[16].w[0] + 1216u), c.r[2].w[0]);
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 275u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 277u), static_cast<std::uint8_t>(0u));
    set32(c.r[7], 0u + 10u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268F1Cu); st8((c.r[16].w[0] + 276u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0059(c, 90u, depth + 1u); else { c.pc = 0x00264D10u; return; } if (c.pc != 0x00268F1Cu) [[unlikely]] return; }
L_00268F1C:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_00268F20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268F28u);  if (depth < kMaxDepth) unit_0059(c, 93u, depth + 1u); else { c.pc = 0x00264EF0u; return; } if (c.pc != 0x00268F28u) [[unlikely]] return; }
L_00268F28:
    c.f[2] = ld32((c.r[16].w[0] + 1216u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 1216u), c.f[1]);  if (t) { goto L_002690A0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 732u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[5], 0u + 5u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 791u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 739u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_00268F7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268F7Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_003C(c, 227u, depth + 1u); else { c.pc = 0x001F3160u; return; } if (c.pc != 0x00268F7Cu) [[unlikely]] return; }
L_00268F7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 791u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002690A0; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_00268F88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268F90u);  if (depth < kMaxDepth) unit_0059(c, 93u, depth + 1u); else { c.pc = 0x00264EF0u; return; } if (c.pc != 0x00268F90u) [[unlikely]] return; }
L_00268F90:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 732u)));
    set32(c.r[3], 0u - 389u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 741u), static_cast<std::uint8_t>(0u));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st16((c.r[16].w[0] + 812u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 759u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[16].w[0] + 1284u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    st32((c.r[16].w[0] + 1304u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 1284u)));
    st32((c.r[16].w[0] + 1312u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 1304u)));
    c.budget -= 20;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_00269000; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[3].w[0] + 8448u);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_002690A0; } }
L_00269000:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[3].w[0] + 8448u);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    set32(c.r[3], 0u - c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_002690A0; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_00269028:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269030u);  if (depth < kMaxDepth) unit_0059(c, 93u, depth + 1u); else { c.pc = 0x00264EF0u; return; } if (c.pc != 0x00269030u) [[unlikely]] return; }
L_00269030:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269038u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 96u, depth + 1u); else { c.pc = 0x002D9540u; return; } if (c.pc != 0x00269038u) [[unlikely]] return; }
L_00269038:
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002690A0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 739u)));
    set32(c.r[3], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002690A0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 732u)));
    set32(c.r[5], 0u + 21u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 1308u), 0u);
    st32((c.r[16].w[0] + 1304u), 0u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] | 32ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269080u); st16((c.r[16].w[0] + 812u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_005B(c, 88u, depth + 1u); else { c.pc = 0x0026D880u; return; } if (c.pc != 0x00269080u) [[unlikely]] return; }
L_00269080:
    set32(c.r[5], 0u + 21u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026908Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 87u, depth + 1u); else { c.pc = 0x0026D7B0u; return; } if (c.pc != 0x0026908Cu) [[unlikely]] return; }
L_0026908C:
    set32(c.r[5], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269098u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_003C(c, 227u, depth + 1u); else { c.pc = 0x001F3160u; return; } if (c.pc != 0x00269098u) [[unlikely]] return; }
L_00269098:
    st32((c.r[16].w[0] + 972u), 0u);
    st32((c.r[16].w[0] + 968u), 0u);
    c.budget -= 2;
L_002690A0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002690A4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002690B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 2u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002690CCu); st8((c.r[4].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0075(c, 169u, depth + 1u); else { c.pc = 0x002D62A0u; return; } if (c.pc != 0x002690CCu) [[unlikely]] return; }
L_002690CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002690D4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 93u, depth + 1u); else { c.pc = 0x00264EF0u; return; } if (c.pc != 0x002690D4u) [[unlikely]] return; }
L_002690D4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 732u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_00269114; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], c.r[3].w[0] + 1u);  goto L_002690F8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00269164; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_002690F8:
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    st32((c.r[16].w[0] + 1216u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026910Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_003C(c, 227u, depth + 1u); else { c.pc = 0x001F3160u; return; } if (c.pc != 0x0026910Cu) [[unlikely]] return; }
L_0026910C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00269160; } }
L_00269114:
    c.f[2] = ld32((c.r[16].w[0] + 1216u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 1216u), c.f[1]);  if (t) { goto L_00269160; } }
    st8((c.r[16].w[0] + 741u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    set32(c.r[2], 0u - 33u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st16((c.r[16].w[0] + 812u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269160u); st8((c.r[16].w[0] + 755u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_005B(c, 89u, depth + 1u); else { c.pc = 0x0026D960u; return; } if (c.pc != 0x00269160u) [[unlikely]] return; }
L_00269160:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00269164:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00269170:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 2u);
    st8((c.r[4].w[0] + 738u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 732u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002692B0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1308u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 13));  if (t) { goto L_002691A4; } }
    set32(c.r[2], c.r[3].w[0] + 8191u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 13));
    c.budget -= 2;
L_002691A4:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 732u)));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 741u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[3], c.r[3].w[0] + 13648u);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = c.r[5].d[0] | 4ull;
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st16((c.r[16].w[0] + 812u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[2].w[0] + 1072u));
    st32((c.r[16].w[0] + 104u), c.f[0]);
    st32((c.r[16].w[0] + 108u), 0u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 1216u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 1220u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 1304u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    st32((c.r[16].w[0] + 1312u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 1304u)));
    c.r[1].d[0] = c.r[2].sd[0] < 24576ll ? 1ull : 0ull;
    c.budget -= 37;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], c.r[2].w[0] + 32767u);  goto L_00269248; }
    c.r[1].d[0] = c.r[2].sd[0] < -24575ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00269270; } }
    set32(c.r[2], c.r[2].w[0] + 32767u);
    c.budget -= 1;
L_00269248:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    st32((c.r[16].w[0] + 1304u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st16((c.r[16].w[0] + 848u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] | 256ull;
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 812u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00269274; } }
L_00269270:
    st16((c.r[16].w[0] + 848u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_00269274:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269280u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D9610u; return; } if (c.pc != 0x00269280u) [[unlikely]] return; }
L_00269280:
    c.f[12] = 0u;
    set32(c.r[6], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269298u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 90u, depth + 1u); else { c.pc = 0x00264D10u; return; } if (c.pc != 0x00269298u) [[unlikely]] return; }
L_00269298:
    set32(c.r[5], 0u + 19u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002692A8u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 25u, depth + 1u); else { c.pc = 0x00198370u; return; } if (c.pc != 0x002692A8u) [[unlikely]] return; }
L_002692A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00269330; } }
L_002692B0:
    c.f[1] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 1216u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = ld32((c.r[16].w[0] + 1220u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002692D4u); st32((c.r[16].w[0] + 1220u), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 102u, depth + 1u); else { c.pc = 0x002D9640u; return; } if (c.pc != 0x002692D4u) [[unlikely]] return; }
L_002692D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002692DCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 93u, depth + 1u); else { c.pc = 0x00264EF0u; return; } if (c.pc != 0x002692DCu) [[unlikely]] return; }
L_002692DC:
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0026932C; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269304u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 132u, depth + 1u); else { c.pc = 0x002D5BB0u; return; } if (c.pc != 0x00269304u) [[unlikely]] return; }
L_00269304:
    c.f[1] = ld32((c.r[16].w[0] + 1220u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0026932C; } }
    set32(c.r[5], 0u + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026932Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 88u, depth + 1u); else { c.pc = 0x0026D880u; return; } if (c.pc != 0x0026932Cu) [[unlikely]] return; }
L_0026932C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00269330:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00269340:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], 0u + 2u);
    st8((c.r[4].w[0] + 738u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 732u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002693A0; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 741u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 1136u));
    set32(c.r[5], 0u + 1u);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269380u); st32((c.r[16].w[0] + 108u), 0u);  if (depth < kMaxDepth) unit_003C(c, 227u, depth + 1u); else { c.pc = 0x001F3160u; return; } if (c.pc != 0x00269380u) [[unlikely]] return; }
L_00269380:
    c.f[12] = 0u;
    set32(c.r[6], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269398u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 90u, depth + 1u); else { c.pc = 0x00264D10u; return; } if (c.pc != 0x00269398u) [[unlikely]] return; }
L_00269398:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = ld16((c.r[16].w[0] + 704u));  if (t) { goto L_002693AC; } }
L_002693A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002693A8u);  if (depth < kMaxDepth) unit_0059(c, 93u, depth + 1u); else { c.pc = 0x00264EF0u; return; } if (c.pc != 0x002693A8u) [[unlikely]] return; }
L_002693A8:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 704u));
    c.budget -= 1;
L_002693AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002693B4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 91u, depth + 1u); else { c.pc = 0x002D52F0u; return; } if (c.pc != 0x002693B4u) [[unlikely]] return; }
L_002693B4:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 848u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002693DC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1304u)));
    set32(c.r[2], c.r[2].w[0] + 32767u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    st32((c.r[16].w[0] + 1304u), c.r[2].w[0]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 7;
L_002693DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002693E4u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 165u, depth + 1u); else { c.pc = 0x002D61C0u; return; } if (c.pc != 0x002693E4u) [[unlikely]] return; }
L_002693E4:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 848u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00269404; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[2], c.r[2].w[0] + 32767u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1312u), c.r[2].w[0]);  if (t) { goto L_0026940C; } }
L_00269404:
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    st32((c.r[16].w[0] + 1312u), c.r[2].w[0]);
    c.budget -= 2;
L_0026940C:
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269418u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 132u, depth + 1u); else { c.pc = 0x002D5BB0u; return; } if (c.pc != 0x00269418u) [[unlikely]] return; }
L_00269418:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00269430:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 732u)));
    set32(c.r[3], 0u + 3u);
    set32(c.r[2], 0u - 261u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 732u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[4].w[0] + 96u), 0u);
    st32((c.r[4].w[0] + 1308u), 0u);
    st32((c.r[4].w[0] + 1304u), 0u);
    st32((c.r[4].w[0] + 108u), 0u);
    st32((c.r[4].w[0] + 104u), 0u);
    st8((c.r[4].w[0] + 741u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 16;
    { st16((c.r[4].w[0] + 812u), static_cast<std::uint16_t>(c.r[2].w[0]));  [[clang::musttail]] return unit_005B(c, 104u, depth); }
L_00269470:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 732u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002694F8; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], c.r[3].w[0] + 1u);  goto L_002694A0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00269620; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_002694A0:
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002694B0u); st32((c.r[16].w[0] + 1216u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003C(c, 227u, depth + 1u); else { c.pc = 0x001F3160u; return; } if (c.pc != 0x002694B0u) [[unlikely]] return; }
L_002694B0:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    set32(c.r[4], 0u - 261u);
    set32(c.r[3], 0u + 9u);
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    st16((c.r[16].w[0] + 812u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.r[5].d[0] = c.r[5].d[0] | 128ull;
    st16((c.r[16].w[0] + 812u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 741u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002694E4u); st8((c.r[16].w[0] + 756u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0075(c, 179u, depth + 1u); else { c.pc = 0x002D6440u; return; } if (c.pc != 0x002694E4u) [[unlikely]] return; }
L_002694E4:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002694F0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 234u, depth + 1u); else { c.pc = 0x002DEB00u; return; } if (c.pc != 0x002694F0u) [[unlikely]] return; }
L_002694F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026961C; } }
L_002694F8:
    c.f[1] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    c.f[2] = 0u;
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 1216u), c.f[0]);  if (t) { goto L_0026961C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 732u)));
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 1308u)));
    c.budget -= 8;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 14));  if (t) { goto L_00269540; } }
    set32(c.r[2], c.r[3].w[0] + 16383u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 14));
    c.budget -= 2;
L_00269540:
    c.r[4].d[0] = c.r[2].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[2], c.r[4].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[2].w[0] - 640u);
    c.f[12] = 0u;
    set32(c.r[7], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[7].w[0] + 12u));
    set32(c.r[6], c.r[4].w[0] + 8u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    st32((c.r[16].w[0] + 108u), 0u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 2u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 1216u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 7u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 1220u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 8u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 1224u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 10u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 1228u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 6u)));
    st16((c.r[16].w[0] + 848u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 28u), c.r[7].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1304u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 84u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st16((c.r[16].w[0] + 892u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    st32((c.r[16].w[0] + 1312u), c.r[2].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.budget -= 47;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002695FCu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 90u, depth + 1u); else { c.pc = 0x00264D10u; return; } if (c.pc != 0x002695FCu) [[unlikely]] return; }
L_002695FC:
    set32(c.r[5], 0u + 18u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269608u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 88u, depth + 1u); else { c.pc = 0x0026D880u; return; } if (c.pc != 0x00269608u) [[unlikely]] return; }
L_00269608:
    set32(c.r[2], 0u + 7u);
    set32(c.r[5], 0u + 12u);
    st8((c.r[16].w[0] + 275u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026961Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x0026961Cu) [[unlikely]] return; }
L_0026961C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00269620:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00269630:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], 0u + 2u);
    st8((c.r[4].w[0] + 274u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 732u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002697B0; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026974C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_00269708; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002696C4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00269684; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));  if (t) { goto L_002697E0; } }
L_00269684:
    c.f[1] = ld32((c.r[16].w[0] + 7796u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002697DC; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.f[0] = ld32((c.r[2].w[0] + 16u));
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 3u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 1216u), c.f[0]);
    c.budget -= 10;
L_002696C4:
    c.f[1] = ld32((c.r[16].w[0] + 7796u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002697DC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 732u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.f[0] = ld32((c.r[2].w[0] + 20u));
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 4u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 1216u), c.f[0]);
    c.budget -= 11;
L_00269708:
    c.f[1] = ld32((c.r[16].w[0] + 7796u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002697DC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 732u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.f[0] = ld32((c.r[2].w[0] + 24u));
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 5u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 1216u), c.f[0]);
    c.budget -= 11;
L_0026974C:
    c.f[1] = ld32((c.r[16].w[0] + 7796u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002697DC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 732u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8433u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00269788; } }
    st32((c.r[16].w[0] + 104u), 0u);
    st8((c.r[16].w[0] + 735u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00269788:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[2], 0u + 41u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 4u);  if (t) { goto L_002697B4; } }
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002697A4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_004B(c, 27u, depth + 1u); else { c.pc = 0x0022C720u; return; } if (c.pc != 0x002697A4u) [[unlikely]] return; }
L_002697A4:
    set32(c.r[5], 0u + 10u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002697B0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 33u, depth + 1u); else { c.pc = 0x00198530u; return; } if (c.pc != 0x002697B0u) [[unlikely]] return; }
L_002697B0:
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_002697B4:
    st8((c.r[16].w[0] + 274u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 275u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 836u)));
    st16((c.r[16].w[0] + 834u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7813u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002697DC; } }
    set32(c.r[5], 0u + 19u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002697DCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 88u, depth + 1u); else { c.pc = 0x0026D880u; return; } if (c.pc != 0x002697DCu) [[unlikely]] return; }
L_002697DC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.budget -= 1;
L_002697E0:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026989C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00269838; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_0026980C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002698E4; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_0026980C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269814u);  if (depth < kMaxDepth) unit_0059(c, 93u, depth + 1u); else { c.pc = 0x00264EF0u; return; } if (c.pc != 0x00269814u) [[unlikely]] return; }
L_00269814:
    c.f[1] = ld32((c.r[16].w[0] + 7796u));
    c.f[0] = ld32((c.r[16].w[0] + 1220u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002698EC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00269838:
    c.f[1] = ld32((c.r[16].w[0] + 1004u));
    c.f[0] = ld32((c.r[16].w[0] + 1224u));
    c.f[2] = 0u;
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 1224u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 1004u));
    c.f[0] = ld32((c.r[16].w[0] + 1228u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 1228u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 1224u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002698EC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 1228u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002698EC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0026989C:
    c.f[2] = ld32((c.r[16].w[0] + 1004u));
    c.f[1] = ld32((c.r[16].w[0] + 1228u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[16].w[0] + 1228u), c.f[1]);  if (t) { goto L_002698D4; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 850u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002698EC; } }
L_002698D4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
L_002698E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002698ECu);  if (depth < kMaxDepth) unit_0059(c, 93u, depth + 1u); else { c.pc = 0x00264EF0u; return; } if (c.pc != 0x002698ECu) [[unlikely]] return; }
L_002698EC:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 848u)));
    c.f[1] = ld32((c.r[16].w[0] + 7796u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00269914; } }
    st8((c.r[16].w[0] + 756u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00269914:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 274u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026992C; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026992Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 164u, depth + 1u); else { c.pc = 0x002D6120u; return; } if (c.pc != 0x0026992Cu) [[unlikely]] return; }
L_0026992C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 850u)));
    c.r[2].d[0] = c.r[2].d[0] & 3072ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00269A24; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + 32u);  if (t) { goto L_00269958; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 892u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1312u), c.r[2].w[0]);  if (t) { goto L_00269A24; } }
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 1;
L_00269958:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269960u); set32(c.r[5], c.r[16].w[0] + 1328u);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x00269960u) [[unlikely]] return; }
L_00269960:
    c.f[1] = ld32((c.r[16].w[0] + 1248u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002699A4; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 850u)));
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00269994; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1296u)));
    set32(c.r[2], c.r[2].w[0] + 15360u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1312u), c.r[2].w[0]);  if (t) { goto L_00269A24; } }
L_00269994:
    set32(c.r[2], ld32((c.r[16].w[0] + 1296u)));
    set32(c.r[2], c.r[2].w[0] - 15360u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1312u), c.r[2].w[0]);  if (t) { goto L_00269A24; } }
L_002699A4:
    c.f[1] = ld32((c.r[16].w[0] + 1252u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002699F0; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 850u)));
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002699DC; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1256u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 1296u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1312u), c.r[2].w[0]);  if (t) { goto L_00269A24; } }
L_002699DC:
    set32(c.r[3], ld32((c.r[16].w[0] + 1296u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1256u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1312u), c.r[2].w[0]);  if (t) { goto L_00269A24; } }
L_002699F0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 850u)));
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00269A14; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1258u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 1296u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1312u), c.r[2].w[0]);  if (t) { goto L_00269A24; } }
L_00269A14:
    set32(c.r[3], ld32((c.r[16].w[0] + 1296u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1258u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    st32((c.r[16].w[0] + 1312u), c.r[2].w[0]);
    c.budget -= 4;
L_00269A24:
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269A30u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 132u, depth + 1u); else { c.pc = 0x002D5BB0u; return; } if (c.pc != 0x00269A30u) [[unlikely]] return; }
L_00269A30:
    set32(c.r[7], ld32((c.r[16].w[0] + 1312u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 1308u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[1] = c.r[2].w[0];
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    c.f[0] = ld32((c.r[16].w[0] + 84u));
    set32(c.r[2], c.r[7].w[0] - c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.f[2] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269A74u); c.f[12] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x00269A74u) [[unlikely]] return; }
L_00269A74:
    st32((c.r[16].w[0] + 84u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00269A90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269AACu); set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));  if (depth < kMaxDepth) unit_0075(c, 132u, depth + 1u); else { c.pc = 0x002D5BB0u; return; } if (c.pc != 0x00269AACu) [[unlikely]] return; }
L_00269AAC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 732u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_00269B28; } }
    set32(c.r[17], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00269AF0; } }
    c.f[1] = c.r[2].w[0];
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.f[0]);  if (t) { goto L_00269AF4; } }
L_00269AF0:
    st32((c.r[16].w[0] + 108u), 0u);
    c.budget -= 1;
L_00269AF4:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.f[12] = 0u;
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269B0Cu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 90u, depth + 1u); else { c.pc = 0x00264D10u; return; } if (c.pc != 0x00269B0Cu) [[unlikely]] return; }
L_00269B0C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1216u), c.f[0]);  if (t) { goto L_00269B80; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_00269B28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269B30u);  if (depth < kMaxDepth) unit_0059(c, 93u, depth + 1u); else { c.pc = 0x00264EF0u; return; } if (c.pc != 0x00269B30u) [[unlikely]] return; }
L_00269B30:
    c.f[1] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    c.f[2] = 0u;
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 1216u), c.f[0]);  if (t) { goto L_00269B80; } }
    st32((c.r[16].w[0] + 1308u), 0u);
    st32((c.r[16].w[0] + 1304u), 0u);
    st8((c.r[16].w[0] + 741u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    set32(c.r[2], 0u - 129u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st16((c.r[16].w[0] + 812u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 108u), 0u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269B80u); st32((c.r[16].w[0] + 104u), 0u);  if (depth < kMaxDepth) unit_005B(c, 88u, depth + 1u); else { c.pc = 0x0026D880u; return; } if (c.pc != 0x00269B80u) [[unlikely]] return; }
L_00269B80:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00269BA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 732u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_00269BE0; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 13472u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00269BE0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00269BE0u) [[unlikely]] return; }
L_00269BE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269BE8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 63u, depth + 1u); else { c.pc = 0x00264960u; return; } if (c.pc != 0x00269BE8u) [[unlikely]] return; }
L_00269BE8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00269C00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 732u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_00269C60; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 13472u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00269C40u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00269C40u) [[unlikely]] return; }
L_00269C40:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[2], 0u + 32u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_00269C64; } }
    set32(c.r[5], 0u + 9u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269C60u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 29u, depth + 1u); else { c.pc = 0x00198460u; return; } if (c.pc != 0x00269C60u) [[unlikely]] return; }
L_00269C60:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_00269C64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269C6Cu);  if (depth < kMaxDepth) unit_0058(c, 381u, depth + 1u); else { c.pc = 0x002637C0u; return; } if (c.pc != 0x00269C6Cu) [[unlikely]] return; }
L_00269C6C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00269C80:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 14048u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00268000u < 16384u) { entry = entries_005A[(t - 0x00268000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00269CA0:
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
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    st8((c.r[4].w[0] + 762u), static_cast<std::uint8_t>(0u));
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269D4Cu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0016(c, 134u, depth + 1u); else { c.pc = 0x0015B550u; return; } if (c.pc != 0x00269D4Cu) [[unlikely]] return; }
L_00269D4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269D54u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_001E(c, 118u, depth + 1u); else { c.pc = 0x0017A940u; return; } if (c.pc != 0x00269D54u) [[unlikely]] return; }
L_00269D54:
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
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00269DD4; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00269DD4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 742u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00269DFC; } }
L_00269DD4:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00269DF8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 29658u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 742u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00269DFC; } }
L_00269DF8:
    st8((c.r[19].w[0] + 742u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00269DFC:
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[7], c.r[2].w[0] << 1);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[2].w[0] + 7488u);
    set32(c.r[6], c.r[2].w[0] + c.r[7].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[2].w[0] + 7489u);
    set32(c.r[4], c.r[2].w[0] + c.r[7].w[0]);
    st8((c.r[19].w[0] + 8432u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 1u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[2].w[0] + 7490u);
    set32(c.r[3], c.r[2].w[0] + c.r[7].w[0]);
    st8((c.r[19].w[0] + 8433u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 2u)));
    set32(c.r[2], 0u + 3u);
    st8((c.r[19].w[0] + 8425u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 3u)));
    st8((c.r[19].w[0] + 8427u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 4u)));
    st8((c.r[19].w[0] + 8428u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 5u)));
    st8((c.r[19].w[0] + 8429u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    st8((c.r[19].w[0] + 8432u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    st8((c.r[19].w[0] + 8433u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    st8((c.r[19].w[0] + 8425u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8433u)));
    c.budget -= 34;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00269E90; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00269ED4; } }
L_00269E90:
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[2].w[0] - 4416u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[2].w[0] - 4412u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 256u)));
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[19].w[0] + 1232u), c.f[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 256u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 1236u), c.f[0]);  if (t) { goto L_00269F14; } }
L_00269ED4:
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[2].w[0] - 4608u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[2].w[0] - 4604u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 256u)));
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[19].w[0] + 1232u), c.f[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 256u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[19].w[0] + 1236u), c.f[0]);
    c.budget -= 16;
L_00269F14:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8389u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[2].w[0] + 4720u);
    set32(c.r[3], c.r[2].w[0] + c.r[18].w[0]);
    st8((c.r[19].w[0] + 531u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 2u)));
    set32(c.r[5], 0u + 21u);
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    st16((c.r[19].w[0] + 842u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[19].w[0] + 840u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 4u)));
    st16((c.r[19].w[0] + 844u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 6u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269F50u); st8((c.r[19].w[0] + 518u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0080(c, 309u, depth + 1u); else { c.pc = 0x00303FD0u; return; } if (c.pc != 0x00269F50u) [[unlikely]] return; }
L_00269F50:
    set32(c.r[5], 0u + 21u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269F5Cu); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 310u, depth + 1u); else { c.pc = 0x00303FF0u; return; } if (c.pc != 0x00269F5Cu) [[unlikely]] return; }
L_00269F5C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8384u)));
    set32(c.r[3], 0u + 128u);
    set32(c.r[2], 0u + 38u);
    st8((c.r[19].w[0] + 268u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8391u)));
    st8((c.r[19].w[0] + 269u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 1u)));
    st8((c.r[19].w[0] + 270u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[19].w[0] + 264u), c.r[19].w[0]);
    st8((c.r[19].w[0] + 576u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8386u)));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 240u);  if (t) { goto L_00269FA0; } }
    set32(c.r[2], 0u + 232u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 579u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00269FA4; } }
    set32(c.r[2], 0u + 240u);
    c.budget -= 1;
L_00269FA0:
    st8((c.r[19].w[0] + 579u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_00269FA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269FACu); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 142u, depth + 1u); else { c.pc = 0x002CF1D0u; return; } if (c.pc != 0x00269FACu) [[unlikely]] return; }
L_00269FAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269FB4u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0078(c, 47u, depth + 1u); else { c.pc = 0x002E0670u; return; } if (c.pc != 0x00269FB4u) [[unlikely]] return; }
L_00269FB4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 13808u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00269FCCu); mmi::paddub(c.r[4], c.r[19], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00269FCCu) [[unlikely]] return; }
L_00269FCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269FD4u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_005A(c, 145u, depth + 1u); else { c.pc = 0x00269FF0u; return; } if (c.pc != 0x00269FD4u) [[unlikely]] return; }
L_00269FD4:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00269FF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[3] = ld32((c.r[4].w[0] + 128u));
    c.f[2] = ld32((c.r[4].w[0] + 132u));
    c.f[1] = ld32((c.r[4].w[0] + 136u));
    c.f[0] = ld32((c.r[4].w[0] + 140u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 14064u);
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
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A0A8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026A0A8u) [[unlikely]] return; }
L_0026A0A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A0B0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 133u, depth + 1u); else { c.pc = 0x00265F60u; return; } if (c.pc != 0x0026A0B0u) [[unlikely]] return; }
L_0026A0B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A0B8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005C(c, 162u, depth + 1u); else { c.pc = 0x00270D00u; return; } if (c.pc != 0x0026A0B8u) [[unlikely]] return; }
L_0026A0B8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[2], 0u + 38u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_0026A0DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A0D0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 119u, depth + 1u); else { c.pc = 0x0026DE00u; return; } if (c.pc != 0x0026A0D0u) [[unlikely]] return; }
L_0026A0D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A0D8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005C(c, 163u, depth + 1u); else { c.pc = 0x00270D30u; return; } if (c.pc != 0x0026A0D8u) [[unlikely]] return; }
L_0026A0D8:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_0026A0DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A0E4u);  if (depth < kMaxDepth) unit_005D(c, 709u, depth + 1u); else { c.pc = 0x00276490u; return; } if (c.pc != 0x0026A0E4u) [[unlikely]] return; }
L_0026A0E4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 760u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0026A0F8; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0026A0F8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0026A110:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A148u); st8((c.r[4].w[0] + 795u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_005A(c, 235u, depth + 1u); else { c.pc = 0x0026B590u; return; } if (c.pc != 0x0026A148u) [[unlikely]] return; }
L_0026A148:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A150u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005A(c, 244u, depth + 1u); else { c.pc = 0x0026BB70u; return; } if (c.pc != 0x0026A150u) [[unlikely]] return; }
L_0026A150:
    set32(c.r[2], 0u - 1u);
    st8((c.r[16].w[0] + 739u), static_cast<std::uint8_t>(c.r[2].w[0]));
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
    c.budget -= 17;
L_0026A194:
    set32(c.r[3], c.r[3].w[0] + 2u);
    st16((c.r[4].w[0] + 540u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 542u), static_cast<std::uint16_t>(0u));
    c.r[2].d[0] = c.r[3].sd[0] < 16ll ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026A194u | kUnwind; return; } goto L_0026A194; } }
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
    st8((c.r[16].w[0] + 740u), static_cast<std::uint8_t>(0u));
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
    st8((c.r[16].w[0] + 1601u), static_cast<std::uint8_t>(0u));
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
    c.budget -= 78;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A2E8u); st32((c.r[16].w[0] + 1260u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005B(c, 88u, depth + 1u); else { c.pc = 0x0026D880u; return; } if (c.pc != 0x0026A2E8u) [[unlikely]] return; }
L_0026A2E8:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A2F4u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 87u, depth + 1u); else { c.pc = 0x0026D7B0u; return; } if (c.pc != 0x0026A2F4u) [[unlikely]] return; }
L_0026A2F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A2FCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 131u, depth + 1u); else { c.pc = 0x00265EF0u; return; } if (c.pc != 0x0026A2FCu) [[unlikely]] return; }
L_0026A2FC:
    c.f[12] = 0u;
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A314u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 90u, depth + 1u); else { c.pc = 0x00264D10u; return; } if (c.pc != 0x0026A314u) [[unlikely]] return; }
L_0026A314:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A31Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 134u, depth + 1u); else { c.pc = 0x00265FB0u; return; } if (c.pc != 0x0026A31Cu) [[unlikely]] return; }
L_0026A31C:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[2], 0u + 33u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0026A334; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A334u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0047(c, 168u, depth + 1u); else { c.pc = 0x0021E520u; return; } if (c.pc != 0x0026A334u) [[unlikely]] return; }
L_0026A334:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[2], 0u + 41u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);  if (t) { goto L_0026A350; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A34Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0047(c, 168u, depth + 1u); else { c.pc = 0x0021E520u; return; } if (c.pc != 0x0026A34Cu) [[unlikely]] return; }
L_0026A34C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.budget -= 1;
L_0026A350:
    set32(c.r[4], c.r[16].w[0] + 704u);
    set32(c.r[6], 0u + 20u);
    st32((c.r[16].w[0] + 1068u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A364u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x0026A364u) [[unlikely]] return; }
L_0026A364:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 3u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026A394; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8391u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026A3B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A38Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0052(c, 177u, depth + 1u); else { c.pc = 0x0024A480u; return; } if (c.pc != 0x0026A38Cu) [[unlikely]] return; }
L_0026A38C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));  if (t) { goto L_0026A3BC; } }
L_0026A394:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8391u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_0026A3B0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8440u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026A3B8; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_0026A3B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A3B8u);  if (depth < kMaxDepth) unit_0052(c, 177u, depth + 1u); else { c.pc = 0x0024A480u; return; } if (c.pc != 0x0026A3B8u) [[unlikely]] return; }
L_0026A3B8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.budget -= 1;
L_0026A3BC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 13728u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A3D8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026A3D8u) [[unlikely]] return; }
L_0026A3D8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0026A3F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 640u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_0026A430; } }
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[16].w[0] + 704u);
    set32(c.r[6], 0u + 20u);
    st8((c.r[16].w[0] + 532u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A424u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x0026A424u) [[unlikely]] return; }
L_0026A424:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 790u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 962u), static_cast<std::uint16_t>(0u));
    c.budget -= 3;
L_0026A430:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[16].w[0] + 1068u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 704u));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A448u); st16((c.r[16].w[0] + 706u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_005B(c, 7u, depth + 1u); else { c.pc = 0x0026C0D0u; return; } if (c.pc != 0x0026A448u) [[unlikely]] return; }
L_0026A448:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A450u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 41u, depth + 1u); else { c.pc = 0x002D4610u; return; } if (c.pc != 0x0026A450u) [[unlikely]] return; }
L_0026A450:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A458u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005A(c, 217u, depth + 1u); else { c.pc = 0x0026AF90u; return; } if (c.pc != 0x0026A458u) [[unlikely]] return; }
L_0026A458:
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 739u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 4000u);
    st8((c.r[16].w[0] + 740u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 816u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 512u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0026A4D0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 891u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0026A4D0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[4], c.r[16].w[0] + 704u);
    set32(c.r[6], 0u + 20u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A4A4u); st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x0026A4A4u) [[unlikely]] return; }
L_0026A4A4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8391u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0026A4D0; } }
    c.f[3] = ld32((c.r[16].w[0] + 32u));
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = ld32((c.r[16].w[0] + 44u));
    st32((c.r[16].w[0] + 1776u), c.f[3]);
    st32((c.r[16].w[0] + 1780u), c.f[2]);
    st32((c.r[16].w[0] + 1784u), c.f[1]);
    st32((c.r[16].w[0] + 1788u), c.f[0]);
    c.budget -= 8;
L_0026A4D0:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 640u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0026A510; } }
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[16].w[0] + 704u);
    set32(c.r[6], 0u + 20u);
    st8((c.r[16].w[0] + 532u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A504u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x0026A504u) [[unlikely]] return; }
L_0026A504:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 790u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 962u), static_cast<std::uint16_t>(0u));
    c.budget -= 3;
L_0026A510:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0026A520:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A540u); st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_005A(c, 237u, depth + 1u); else { c.pc = 0x0026B800u; return; } if (c.pc != 0x0026A540u) [[unlikely]] return; }
L_0026A540:
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
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026A5A8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8391u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_0026A5D4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 789u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026A5D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 790u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0026A5D0; } }
L_0026A5A8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8391u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026A5D0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8440u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026A5D0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 789u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026A5D0; } }
    st8((c.r[16].w[0] + 790u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0026A5D0:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_0026A5D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A5DCu);  if (depth < kMaxDepth) unit_0059(c, 93u, depth + 1u); else { c.pc = 0x00264EF0u; return; } if (c.pc != 0x0026A5DCu) [[unlikely]] return; }
L_0026A5DC:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 640u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0026A61C; } }
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[16].w[0] + 704u);
    set32(c.r[6], 0u + 20u);
    st8((c.r[16].w[0] + 532u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A610u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x0026A610u) [[unlikely]] return; }
L_0026A610:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 790u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 962u), static_cast<std::uint16_t>(0u));
    c.budget -= 3;
L_0026A61C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0026A630:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 640u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_0026A670; } }
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[16].w[0] + 704u);
    set32(c.r[6], 0u + 20u);
    st8((c.r[16].w[0] + 532u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A664u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x0026A664u) [[unlikely]] return; }
L_0026A664:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 790u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 962u), static_cast<std::uint16_t>(0u));
    c.budget -= 3;
L_0026A670:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    set32(c.r[2], 0u + 3u);
    st16((c.r[16].w[0] + 706u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026A6A8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8391u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026A6CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A6A0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0055(c, 201u, depth + 1u); else { c.pc = 0x00256D40u; return; } if (c.pc != 0x0026A6A0u) [[unlikely]] return; }
L_0026A6A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 789u)));  if (t) { goto L_0026A6D0; } }
L_0026A6A8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8391u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_0026A6C4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8440u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026A6CC; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_0026A6C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A6CCu);  if (depth < kMaxDepth) unit_0055(c, 201u, depth + 1u); else { c.pc = 0x00256D40u; return; } if (c.pc != 0x0026A6CCu) [[unlikely]] return; }
L_0026A6CC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 789u)));
    c.budget -= 1;
L_0026A6D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_0026A6E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A6E0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 24u, depth + 1u); else { c.pc = 0x0026C7C0u; return; } if (c.pc != 0x0026A6E0u) [[unlikely]] return; }
L_0026A6E0:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_0026A6E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A6ECu);  if (depth < kMaxDepth) unit_0075(c, 41u, depth + 1u); else { c.pc = 0x002D4610u; return; } if (c.pc != 0x0026A6ECu) [[unlikely]] return; }
L_0026A6EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A6F4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005A(c, 217u, depth + 1u); else { c.pc = 0x0026AF90u; return; } if (c.pc != 0x0026A6F4u) [[unlikely]] return; }
L_0026A6F4:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 640u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0026A734; } }
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[16].w[0] + 704u);
    set32(c.r[6], 0u + 20u);
    st8((c.r[16].w[0] + 532u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A728u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x0026A728u) [[unlikely]] return; }
L_0026A728:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 790u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 962u), static_cast<std::uint16_t>(0u));
    c.budget -= 3;
L_0026A734:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0026A750:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 280u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[18], c.r[4], c.r[0]);  if (t) { goto L_0026A8DC; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 641u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0026A794; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0026A8DC; } }
L_0026A794:
    c.f[0] = ld32((c.r[18].w[0] + 2032u));
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[17], c.r[29].w[0] + 84u);
    set32(c.r[16], c.r[29].w[0] + 88u);
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 2036u));
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 2040u));
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 2000u));
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 2004u));
    st32((c.r[29].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 2008u));
    st32((c.r[29].w[0] + 104u), c.f[0]);
    c.f[12] = ld32((c.r[18].w[0] + 260u));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A7DCu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x0026A7DCu) [[unlikely]] return; }
L_0026A7DC:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A7E8u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x0026A7E8u) [[unlikely]] return; }
L_0026A7E8:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 28448u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 78u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A810u); set32(c.r[4], c.r[2].w[0] + 80u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x0026A810u) [[unlikely]] return; }
L_0026A810:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A81Cu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x0026A81Cu) [[unlikely]] return; }
L_0026A81C:
    c.f[4] = ld32((c.r[16].w[0]));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0026A8DC; } }
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[2] = ld32((c.r[29].w[0] + 80u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBE4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[3] = c.r[3].w[0];
    c.f[0] = ld32((c.r[18].w[0] + 256u));
    c.f[1] = fp::mul(c.f[3], c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    fpu_div(c, 3u, c.f[1], c.f[4]);
    fpu_div(c, 1u, c.f[0], c.f[4]);
    fpu_div(c, 2u, c.f[2], c.f[4]);
    c.f[0] = c.r[3].w[0];
    c.f[4] = fp::add(c.f[0], c.f[1]);
    c.f[0] = c.f[4] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 22;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0026A8DC; } }
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[4]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0026A8DC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D990000u);
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[0], c.f[1]);
    c.f[0] = c.f[1] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0026A8DC; } }
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0026A8DC; } }
    st8((c.r[18].w[0] + 280u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0026A8DC:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 641u)));
    c.r[1].d[0] = c.r[4].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { c.r[2].d[0] = c.r[4].sd[0] < 6ll ? 1ull : 0ull;  goto L_0026A900; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 280u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0026AB8C; } }
    c.r[2].d[0] = c.r[4].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 1;
L_0026A900:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (t) { goto L_0026AB84; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 6u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026AA70; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 14096u);
    c.f[0] = 0u;
    ld128((c.r[2].w[0]) & ~15u, c.r[4]);
    set32(c.r[5], c.r[29].w[0] + 112u);
    st128((c.r[5].w[0]) & ~15u, c.r[4]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[2].w[0] + 28928u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 6u)));
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[1] = ld32((c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[18].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[29].w[0] + 120u), c.f[1]);
    st32((c.r[18].w[0] + 108u), 0u);
    st32((c.r[18].w[0] + 104u), 0u);
    c.f[1] = ld32((c.r[18].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 25;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0026A97C; } }
    st32((c.r[18].w[0] + 52u), 0u);
    c.budget -= 1;
L_0026A97C:
    c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 84u)));
    c.f[3] = ld32((c.r[18].w[0] + 32u));
    c.f[2] = ld32((c.r[18].w[0] + 36u));
    c.f[1] = ld32((c.r[18].w[0] + 40u));
    c.f[0] = ld32((c.r[18].w[0] + 44u));
    set32(c.r[5], c.r[29].w[0] + 144u);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    st32((c.r[5].w[0]), c.f[3]);
    st32((c.r[5].w[0] + 4u), c.f[2]);
    st32((c.r[5].w[0] + 8u), c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A9ACu); st32((c.r[5].w[0] + 12u), c.f[0]);  if (depth < kMaxDepth) unit_0045(c, 199u, depth + 1u); else { c.pc = 0x00217650u; return; } if (c.pc != 0x0026A9ACu) [[unlikely]] return; }
L_0026A9AC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 148u), c.f[0]);
    c.budget -= 5;
L_0026A9C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A9C8u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x0026A9C8u) [[unlikely]] return; }
L_0026A9C8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A9D8u); set32(c.r[4], c.r[2].w[0] - 4096u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x0026A9D8u) [[unlikely]] return; }
L_0026A9D8:
    mmi::paddub(c.r[19], c.r[0], c.r[0]);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
L_0026A9E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A9ECu); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x0026A9ECu) [[unlikely]] return; }
L_0026A9EC:
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A9FCu); set32(c.r[6], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x0026A9FCu) [[unlikely]] return; }
L_0026A9FC:
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AA0Cu); set32(c.r[6], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0046(c, 159u, depth + 1u); else { c.pc = 0x0021B030u; return; } if (c.pc != 0x0026AA0Cu) [[unlikely]] return; }
L_0026AA0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_0026AA34; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AA1Cu); set32(c.r[4], 0u + 4096u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x0026AA1Cu) [[unlikely]] return; }
L_0026AA1C:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 112u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026A9E4u | kUnwind; return; } goto L_0026A9E4; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 2;
L_0026AA34:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 16u);  if (t) { goto L_0026AA5C; } }
    set32(c.r[2], c.r[16].w[0] + 4096u);
    c.r[16].d[0] = c.r[2].d[0] << 48;
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026A9C0u | kUnwind; return; } goto L_0026A9C0; } }
    set32(c.r[2], 0u + 16u);
    c.budget -= 2;
L_0026AA5C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0026AA70; } }
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    st32((c.r[18].w[0] + 84u), c.r[2].w[0]);
    c.budget -= 3;
L_0026AA70:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 760u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026AB80; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1603u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026AB80; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], c.r[2].w[0] - 28448u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 78u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 330u)));
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 7);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_0026AAF4; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 6u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026AB80; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026AB80; } }
    st8((c.r[18].w[0] + 803u), static_cast<std::uint8_t>(0u));
    st8((c.r[18].w[0] + 274u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[18].w[0] + 1260u)));
    set32(c.r[3], 0u - 33u);
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[18].w[0] + 1260u), c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 760u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0026AB80; } }
L_0026AAF4:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[2], c.r[2].w[0] - 31003u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8389u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 6u)));
    set32(c.r[3], c.r[4].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 12;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0026AB60; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8384u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_0026AB80; } }
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AB3Cu); set32(c.r[5], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x0026AB3Cu) [[unlikely]] return; }
L_0026AB3C:
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0026AB80; } }
L_0026AB60:
    st8((c.r[18].w[0] + 803u), static_cast<std::uint8_t>(0u));
    st8((c.r[18].w[0] + 274u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[18].w[0] + 1260u)));
    set32(c.r[3], 0u - 33u);
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[18].w[0] + 1260u), c.r[3].w[0]);
    st8((c.r[18].w[0] + 760u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
L_0026AB80:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 1;
L_0026AB84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AB8Cu);  if (depth < kMaxDepth) unit_005A(c, 217u, depth + 1u); else { c.pc = 0x0026AF90u; return; } if (c.pc != 0x0026AB8Cu) [[unlikely]] return; }
L_0026AB8C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_0026ABB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 640u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_0026AC2C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 641u)));
    c.r[2].d[0] = c.r[2].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026AC2C; } }
    c.r[2].d[0] = c.r[3].d[0] << 56;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8389u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0026AC2C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 648u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026AC2C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8391u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026AC2C; } }
    set32(c.r[2], 0u + 3u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AC24u); st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_005A(c, 208u, depth + 1u); else { c.pc = 0x0026ACF0u; return; } if (c.pc != 0x0026AC24u) [[unlikely]] return; }
L_0026AC24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0026ACE0; } }
L_0026AC2C:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026ACBCu); st32((c.r[16].w[0] + 7804u), c.f[0]);  if (depth < kMaxDepth) unit_005A(c, 178u, depth + 1u); else { c.pc = 0x0026A630u; return; } if (c.pc != 0x0026ACBCu) [[unlikely]] return; }
L_0026ACBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026ACC4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 133u, depth + 1u); else { c.pc = 0x00265F60u; return; } if (c.pc != 0x0026ACC4u) [[unlikely]] return; }
L_0026ACC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026ACCCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005C(c, 162u, depth + 1u); else { c.pc = 0x00270D00u; return; } if (c.pc != 0x0026ACCCu) [[unlikely]] return; }
L_0026ACCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026ACD4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005D(c, 709u, depth + 1u); else { c.pc = 0x00276490u; return; } if (c.pc != 0x0026ACD4u) [[unlikely]] return; }
L_0026ACD4:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 3;
L_0026ACE0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0026ACF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 640u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0026AD54; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 641u)));
    c.r[3].d[0] = c.r[3].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[4].d[0] << 56;  if (t) { goto L_0026AF78; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8389u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0026AF78; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 648u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0026AF78; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8391u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0026AD54; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0026AF7C; } }
L_0026AD54:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 95u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_0026AF50; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8391u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0026AE2C; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0026AE2C; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_0026ADC8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 529u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026ADB0; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 531u));
    set32(c.r[3], c.r[2].w[0] + c.r[6].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 384u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 384u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0026ADE8; } }
L_0026ADB0:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 531u));
    set32(c.r[3], c.r[2].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 326u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 326u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0026ADE8; } }
L_0026ADC8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 529u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_0026ADEC; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 531u));
    set32(c.r[3], c.r[2].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 326u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[3].w[0] + 326u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
L_0026ADE8:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_0026ADEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026ADF4u);  if (depth < kMaxDepth) unit_0081(c, 9u, depth + 1u); else { c.pc = 0x00304280u; return; } if (c.pc != 0x0026ADF4u) [[unlikely]] return; }
L_0026ADF4:
    set32(c.r[6], 0u + 8384u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AE04u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x0026AE04u) [[unlikely]] return; }
L_0026AE04:
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0026AE1C; } }
    st8((c.r[16].w[0] + 8438u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0026AE1C:
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0026AF78; } }
L_0026AE2C:
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0026AE90; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 29658u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);  if (t) { goto L_0026AE8C; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AE5Cu); st8((c.r[1].w[0] + 29658u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0016(c, 116u, depth + 1u); else { c.pc = 0x0015AB20u; return; } if (c.pc != 0x0026AE5Cu) [[unlikely]] return; }
L_0026AE5C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0026AE74; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AE6Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 274u, depth + 1u); else { c.pc = 0x002D7E50u; return; } if (c.pc != 0x0026AE6Cu) [[unlikely]] return; }
L_0026AE6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));  if (t) { goto L_0026AEA8; } }
L_0026AE74:
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u - 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 739u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 891u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0026AEA4; } }
L_0026AE8C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0026AE90:
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u - 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 739u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 891u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
L_0026AEA4:
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    c.budget -= 1;
L_0026AEA8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 6u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[6].d[0];  if (t) { goto L_0026AF78; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 640u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0026AF78; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0026AF78; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 260u)));
    c.r[3].d[0] = c.r[3].d[0] & 7ull;
    c.r[3].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[6].w[0] + c.r[5].w[0]);  if (t) { goto L_0026AF28; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8389u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0026AF24; } }
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 692u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0026AF78; } }
    set32(c.r[2], 0u + 3u);
    st8((c.r[5].w[0] + 701u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 13u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AF1Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 45u, depth + 1u); else { c.pc = 0x00198720u; return; } if (c.pc != 0x0026AF1Cu) [[unlikely]] return; }
L_0026AF1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026AF78; } }
L_0026AF24:
    set32(c.r[3], c.r[6].w[0] + c.r[5].w[0]);
    c.budget -= 1;
L_0026AF28:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 688u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0026AF78; } }
    set32(c.r[2], 0u + 3u);
    st8((c.r[5].w[0] + 700u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 13u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AF48u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x0026AF48u) [[unlikely]] return; }
L_0026AF48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026AF78; } }
L_0026AF50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AF58u);  if (depth < kMaxDepth) unit_0081(c, 9u, depth + 1u); else { c.pc = 0x00304280u; return; } if (c.pc != 0x0026AF58u) [[unlikely]] return; }
L_0026AF58:
    set32(c.r[6], 0u + 8384u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AF68u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x0026AF68u) [[unlikely]] return; }
L_0026AF68:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u - 1u);
    st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_0026AF78:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0026AF7C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0026AF90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AFB0u); set32(c.r[16], c.r[2].w[0] - 32u);  if (depth < kMaxDepth) unit_0075(c, 192u, depth + 1u); else { c.pc = 0x002D6630u; return; } if (c.pc != 0x0026AFB0u) [[unlikely]] return; }
L_0026AFB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AFB8u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_005A(c, 226u, depth + 1u); else { c.pc = 0x0026B070u; return; } if (c.pc != 0x0026AFB8u) [[unlikely]] return; }
L_0026AFB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AFC0u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0058(c, 212u, depth + 1u); else { c.pc = 0x00262010u; return; } if (c.pc != 0x0026AFC0u) [[unlikely]] return; }
L_0026AFC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 13952u);
    set32(c.r[16], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AFDCu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026AFDCu) [[unlikely]] return; }
L_0026AFDC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 811u)));
    set32(c.r[2], 0u - 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026B008; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 13408u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B008u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026B008u) [[unlikely]] return; }
L_0026B008:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 810u)));
    set32(c.r[2], 0u - 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026B03C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 13904u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B03Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026B03Cu) [[unlikely]] return; }
L_0026B03C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 14000u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B054u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026B054u) [[unlikely]] return; }
L_0026B054:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B05Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 160u, depth + 1u); else { c.pc = 0x002DDAF0u; return; } if (c.pc != 0x0026B05Cu) [[unlikely]] return; }
L_0026B05C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0026B070:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 764u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_0026B158; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_0026B0D8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8433u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0026B0B8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026B0D8; } }
L_0026B0B8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8432u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0026B170; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026B170; } }
L_0026B0D8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 834u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[2].w[0] - 1u);  goto L_0026B150; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0026B10C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8432u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0026B120; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026B120; } }
L_0026B10C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 816u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 830u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 816u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0026B130; } }
L_0026B120:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 816u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 832u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st16((c.r[16].w[0] + 816u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_0026B130:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 816u)));
    c.r[1].d[0] = c.r[2].sd[0] < 4001ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0026B170; } }
    set32(c.r[2], 0u + 4000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 816u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0026B170; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 1;
L_0026B150:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 834u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0026B170; } }
L_0026B158:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026B170; } }
    set32(c.r[2], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 764u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0026B170:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 274u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026B1F8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 278u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026B1C4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026B1C4; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[2], 0u + 33u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[6], 0u + 3u);  if (t) { goto L_0026B1B8; } }
    set32(c.r[5], 0u + 18u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B1B4u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 29u, depth + 1u); else { c.pc = 0x00198460u; return; } if (c.pc != 0x0026B1B4u) [[unlikely]] return; }
L_0026B1B4:
    set32(c.r[6], 0u + 3u);
    c.budget -= 1;
L_0026B1B8:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B1C4u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 25u, depth + 1u); else { c.pc = 0x00198370u; return; } if (c.pc != 0x0026B1C4u) [[unlikely]] return; }
L_0026B1C4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 274u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[16].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026B214; } }
    set32(c.r[6], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B1F0u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 29u, depth + 1u); else { c.pc = 0x00198460u; return; } if (c.pc != 0x0026B1F0u) [[unlikely]] return; }
L_0026B1F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 274u)));  if (t) { goto L_0026B218; } }
L_0026B1F8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 278u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026B214; } }
    set32(c.r[6], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B214u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 29u, depth + 1u); else { c.pc = 0x00198460u; return; } if (c.pc != 0x0026B214u) [[unlikely]] return; }
L_0026B214:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 274u)));
    c.budget -= 1;
L_0026B218:
    st8((c.r[16].w[0] + 278u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 744u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026B230; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[16].w[0] + 744u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0026B230:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 780u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026B244; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[16].w[0] + 780u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0026B244:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 784u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026B274; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[16].w[0] + 784u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026B274; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    set32(c.r[2], 0u - 4u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st16((c.r[16].w[0] + 812u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_0026B274:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 783u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026B288; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[16].w[0] + 783u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0026B288:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 538u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026B2A0; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 538u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0026B2A4; } }
L_0026B2A0:
    st16((c.r[16].w[0] + 536u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_0026B2A4:
    c.f[1] = ld32((c.r[16].w[0] + 1052u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0026B2CC; } }
    c.f[0] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 1052u), c.f[0]);
    c.budget -= 3;
L_0026B2CC:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 838u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_0026B2FC; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0] + 838u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026B2F8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 840u)));
    st16((c.r[16].w[0] + 842u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0026B2F8:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_0026B2FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B304u);  if (depth < kMaxDepth) unit_0077(c, 65u, depth + 1u); else { c.pc = 0x002DC880u; return; } if (c.pc != 0x0026B304u) [[unlikely]] return; }
L_0026B304:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 891u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0026B4A0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 789u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0026B4A0; } }
    set32(c.r[5], c.r[29].w[0] + 44u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B328u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 88u, depth + 1u); else { c.pc = 0x002DCED0u; return; } if (c.pc != 0x0026B328u) [[unlikely]] return; }
L_0026B328:
    st8((c.r[16].w[0] + 802u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 802u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0026B4A0; } }
    c.f[1] = ld32((c.r[29].w[0] + 44u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0026B4A0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8391u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0026B374; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1844u)));
    c.r[1].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0026B4A0; } }
L_0026B374:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 12288ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_0026B394; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 789u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0026B3A0; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_0026B394:
    st8((c.r[16].w[0] + 789u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[16].w[0] + 1068u), c.r[3].w[0]);
    c.budget -= 3;
L_0026B3A0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[3], 0u + 38u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0026B408; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    set32(c.r[3], 0u + 3u);
    c.r[4].d[0] = c.r[4].d[0] & 3ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0026B408; } }
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
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[5], 0u + 10u);  if (t) { goto L_0026B400; } }
    st32((c.r[16].w[0] + 52u), 0u);
    set32(c.r[5], 0u + 10u);
    c.budget -= 2;
L_0026B400:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B408u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 89u, depth + 1u); else { c.pc = 0x0026D960u; return; } if (c.pc != 0x0026B408u) [[unlikely]] return; }
L_0026B408:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 784u));
    c.r[1].d[0] = c.r[3].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0026B420; } }
    set32(c.r[3], 0u + 10u);
    st8((c.r[16].w[0] + 784u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0026B420:
    st8((c.r[16].w[0] + 766u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 888u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], 0u + 1u);
    st8((c.r[16].w[0] + 889u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 790u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0026B4A0; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0026B4A0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 6u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0026B4A0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8389u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 692u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0026B484; } }
    set32(c.r[3], 0u + 4u);
    st8((c.r[4].w[0] + 701u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0026B484:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 640u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0026B4A0; } }
    set32(c.r[5], 0u + 9u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B4A0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 45u, depth + 1u); else { c.pc = 0x00198720u; return; } if (c.pc != 0x0026B4A0u) [[unlikely]] return; }
L_0026B4A0:
    c.f[2] = ld32((c.r[16].w[0] + 1068u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0026B4E8; } }
    c.f[0] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 1068u), c.f[0]);  if (t) { goto L_0026B4E0; } }
    st8((c.r[16].w[0] + 532u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1068u), 0u);  if (t) { goto L_0026B4E8; } }
L_0026B4E0:
    set32(c.r[3], 0u + 128u);
    st8((c.r[16].w[0] + 532u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0026B4E8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0026B56C; } }
    c.f[2] = ld32((c.r[16].w[0] + 1240u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0026B534; } }
    c.f[0] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 1240u), c.f[0]);  if (t) { goto L_0026B534; } }
    st32((c.r[16].w[0] + 1240u), 0u);
    st8((c.r[16].w[0] + 800u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0026B534:
    c.f[2] = ld32((c.r[16].w[0] + 1244u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0026B56C; } }
    c.f[0] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 1244u), c.f[0]);  if (t) { goto L_0026B56C; } }
    st32((c.r[16].w[0] + 1244u), 0u);
    c.budget -= 1;
L_0026B56C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1601u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0026B580; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 1601u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0026B580:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0026B590:
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
    set32(c.r[16], c.r[6].w[0] - 32u);
    set32(c.r[6], c.r[16].w[0] << 3);
    set32(c.r[7], c.r[5].w[0] + c.r[6].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 2u)));
    set32(c.r[5], c.r[16].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[16].w[0]);
    set32(c.r[17], c.r[5].w[0] << 2);
    set32(c.r[8], c.r[3].w[0] + c.r[17].w[0]);
    st16((c.r[4].w[0] + 842u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st16((c.r[4].w[0] + 840u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 4u)));
    set32(c.r[3], 0u + 2u);
    st16((c.r[4].w[0] + 844u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 6u)));
    st8((c.r[4].w[0] + 518u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.f[0] = ld32((c.r[8].w[0]));
    st32((c.r[4].w[0] + 8008u), c.f[0]);
    c.f[0] = ld32((c.r[8].w[0] + 4u));
    st32((c.r[4].w[0] + 8024u), c.f[0]);
    c.f[0] = ld32((c.r[8].w[0] + 8u));
    st32((c.r[4].w[0] + 8028u), c.f[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 26304u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 35;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; mmi::paddub(c.r[18], c.r[4], c.r[0]);  if (t) { goto L_0026B62C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B624u);  if (depth < kMaxDepth) unit_0014(c, 149u, depth + 1u); else { c.pc = 0x00152E20u; return; } if (c.pc != 0x0026B624u) [[unlikely]] return; }
L_0026B624:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));  if (t) { goto L_0026B65C; } }
L_0026B62C:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8391u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[3].w[0] + 5024u);
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    st16((c.r[18].w[0] + 516u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[18].w[0] + 514u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[18].w[0] + 512u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    c.budget -= 12;
L_0026B65C:
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0026B69C; } }
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
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);  if (t) { goto L_0026B6A8; } }
L_0026B69C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[3].w[0] + 6048u);
    set32(c.r[6], c.r[3].w[0] + c.r[17].w[0]);
    c.budget -= 3;
L_0026B6A8:
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
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_0026B740; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 25608u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_0026B738; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0026B728; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026B740; } }
L_0026B728:
    st16((c.r[18].w[0] + 1588u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 1576u), static_cast<std::uint16_t>(c.r[5].w[0]));  if (t) { goto L_0026B740; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_0026B738:
    st16((c.r[18].w[0] + 1588u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[18].w[0] + 1576u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0026B740:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[3].w[0] + 6624u);
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[7], c.r[3].w[0] - 27888u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[6], c.r[3].w[0] - 27884u);
    st32((c.r[18].w[0] + 8408u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], c.r[3].w[0] + 11200u);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8386u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[4], c.r[3].w[0] + 11200u);
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
    c.budget -= 48;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0026B800:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[6], c.r[2].w[0] + 960u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[2].w[0] + 2336u);
    set32(c.r[2], c.r[7].w[0] - 32u);
    set32(c.r[8], c.r[2].w[0] << 3);
    set32(c.r[7], c.r[6].w[0] + c.r[8].w[0]);
    c.f[0] = ld32((c.r[7].w[0]));
    set32(c.r[6], c.r[2].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[4].w[0] + 1060u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 4u));
    st32((c.r[4].w[0] + 1064u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[4].w[0] + 992u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    st32((c.r[4].w[0] + 996u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    st32((c.r[4].w[0] + 1000u), c.f[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 368u)));
    c.budget -= 28;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_0026B88C; } }
    c.f[0] = ld32((c.r[16].w[0] + 1000u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3ECC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 1000u), c.f[0]);
    c.budget -= 7;
L_0026B88C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[6], c.r[6].w[0] + 2608u);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[10], c.r[6].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[10].w[0])));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[6], c.r[6].w[0] + 1552u);
    set32(c.r[9], c.r[6].w[0] + c.r[3].w[0]);
    st16((c.r[16].w[0] + 852u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[10].w[0] + 2u)));
    set32(c.r[6], c.r[2].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[7], c.r[7].w[0] + 1312u);
    st16((c.r[16].w[0] + 854u), static_cast<std::uint16_t>(c.r[10].w[0]));
    c.f[0] = ld32((c.r[9].w[0]));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[10], c.r[7].w[0] + c.r[6].w[0]);
    set32(c.r[7], c.r[2].w[0] << 3);
    set32(c.r[7], c.r[7].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 1036u), c.f[0]);
    c.f[0] = ld32((c.r[10].w[0]));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[9], c.r[9].w[0] + 3040u);
    set32(c.r[7], c.r[7].w[0] << 1);
    set32(c.r[13], c.r[9].w[0] + c.r[7].w[0]);
    st32((c.r[16].w[0] + 1048u), c.f[0]);
    c.f[0] = ld32((c.r[10].w[0] + 4u));
    mmi::paddub(c.r[11], c.r[0], c.r[0]);
    mmi::paddub(c.r[12], c.r[16], c.r[0]);
    st32((c.r[16].w[0] + 1040u), c.f[0]);
    c.f[0] = ld32((c.r[10].w[0] + 8u));
    st32((c.r[16].w[0] + 1044u), c.f[0]);
    c.budget -= 33;
L_0026B910:
    c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[13].w[0])));
    set32(c.r[11], c.r[11].w[0] + 1u);
    c.r[9].d[0] = c.r[11].sd[0] < 9ll ? 1ull : 0ull;
    st16((c.r[12].w[0] + 856u), static_cast<std::uint16_t>(c.r[10].w[0]));
    set32(c.r[13], c.r[13].w[0] + 2u);
    c.budget -= 7;
    { const bool t = c.r[9].d[0] != 0ull; set32(c.r[12], c.r[12].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026B910u | kUnwind; return; } goto L_0026B910; } }
    c.r[9].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[9], c.r[9].w[0] - 4128u);
    set32(c.r[9], c.r[9].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[9].w[0]));
    set32(c.r[11], c.r[2].w[0] << 5);
    mmi::paddub(c.r[13], c.r[0], c.r[0]);
    mmi::paddub(c.r[10], c.r[16], c.r[0]);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[9], c.r[9].w[0] - 3408u);
    set32(c.r[12], c.r[9].w[0] + c.r[11].w[0]);
    st32((c.r[16].w[0] + 1136u), c.f[0]);
    c.budget -= 11;
L_0026B958:
    c.f[0] = ld32((c.r[12].w[0]));
    set32(c.r[13], c.r[13].w[0] + 1u);
    c.r[9].d[0] = c.r[13].sd[0] < 8ll ? 1ull : 0ull;
    st32((c.r[10].w[0] + 1072u), c.f[0]);
    set32(c.r[12], c.r[12].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[9].d[0] != 0ull; set32(c.r[10], c.r[10].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026B958u | kUnwind; return; } goto L_0026B958; } }
    c.r[9].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[9], c.r[9].w[0] - 432u);
    set32(c.r[9], c.r[9].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[9].w[0]));
    mmi::paddub(c.r[12], c.r[0], c.r[0]);
    mmi::paddub(c.r[10], c.r[16], c.r[0]);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[9], c.r[9].w[0] + 432u);
    set32(c.r[9], c.r[9].w[0] + c.r[11].w[0]);
    set32(c.r[11], c.r[9].w[0] + 32u);
    st32((c.r[16].w[0] + 1140u), c.f[0]);
    c.budget -= 11;
L_0026B9A0:
    c.f[0] = ld32((c.r[11].w[0]));
    set32(c.r[12], c.r[12].w[0] + 1u);
    c.r[9].d[0] = c.r[12].sd[0] < 8ll ? 1ull : 0ull;
    st32((c.r[10].w[0] + 1104u), c.f[0]);
    set32(c.r[11], c.r[11].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[9].d[0] != 0ull; set32(c.r[10], c.r[10].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026B9A0u | kUnwind; return; } goto L_0026B9A0; } }
    c.r[9].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[9], c.r[9].w[0] - 288u);
    set32(c.r[3], c.r[9].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    mmi::paddub(c.r[10], c.r[0], c.r[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[3].w[0] + 1856u);
    set32(c.r[9], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[16].w[0] + 1144u), c.f[0]);
    mmi::paddub(c.r[6], c.r[16], c.r[0]);
    c.budget -= 10;
L_0026B9E4:
    c.f[0] = ld32((c.r[9].w[0]));
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.r[3].d[0] = c.r[10].sd[0] < 3ll ? 1ull : 0ull;
    st32((c.r[6].w[0] + 1024u), c.f[0]);
    set32(c.r[9], c.r[9].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026B9E4u | kUnwind; return; } goto L_0026B9E4; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u + 2u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_0026BA4C; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8437u)));
    set32(c.r[3], c.r[2].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[6].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[2].w[0] << 1);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[2], c.r[2].w[0] - 19776u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[6].w[0] + c.r[2].w[0]);  if (t) { goto L_0026BA58; } }
L_0026BA4C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[2].w[0] + 3632u);
    set32(c.r[7], c.r[2].w[0] + c.r[7].w[0]);
    c.budget -= 3;
L_0026BA58:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[2].w[0] + 9344u);
    set32(c.r[6], c.r[2].w[0] + c.r[8].w[0]);
    st16((c.r[16].w[0] + 818u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 816u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 2u)));
    set32(c.r[2], 0u + 33u);
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
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 16u)));
    st16((c.r[16].w[0] + 828u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[6].w[0]));
    st32((c.r[16].w[0] + 1148u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    st32((c.r[16].w[0] + 1152u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.budget -= 30;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0026BADC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[2].w[0] + 4176u);  if (t) { goto L_0026BAE4; } }
L_0026BADC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[17], c.r[2].w[0] + 4192u);
    c.budget -= 2;
L_0026BAE4:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BB1Cu); c.f[12] = fp::mul(c.f[2], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x0026BB1Cu) [[unlikely]] return; }
L_0026BB1C:
    st16((c.r[16].w[0] + 1256u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[1] = ld32((c.r[17].w[0] + 12u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.f[2] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47800000u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 1u, c.f[1], c.f[2]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BB4Cu); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x0026BB4Cu) [[unlikely]] return; }
L_0026BB4C:
    st16((c.r[16].w[0] + 1258u), static_cast<std::uint16_t>(c.r[2].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0026BB70:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
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
    c.budget -= 45;
L_0026BC24:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[2].d[0] = c.r[7].sd[0] < 9ll ? 1ull : 0ull;
    st16((c.r[9].w[0] + 856u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[6], c.r[6].w[0] + 2u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[9], c.r[9].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026BC24u | kUnwind; return; } goto L_0026BC24; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.f[0] = ld32((c.r[1].w[0] - 2512u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], c.r[2].w[0] + 6800u);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    mmi::paddub(c.r[6], c.r[16], c.r[0]);
    st32((c.r[16].w[0] + 1136u), c.f[0]);
    c.budget -= 7;
L_0026BC5C:
    c.f[0] = ld32((c.r[3].w[0]));
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[2].d[0] = c.r[7].sd[0] < 8ll ? 1ull : 0ull;
    st32((c.r[6].w[0] + 1072u), c.f[0]);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026BC5Cu | kUnwind; return; } goto L_0026BC5C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.f[0] = ld32((c.r[1].w[0] - 2508u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[6], c.r[2].w[0] + 6832u);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    mmi::paddub(c.r[3], c.r[16], c.r[0]);
    st32((c.r[16].w[0] + 1140u), c.f[0]);
    c.budget -= 7;
L_0026BC94:
    c.f[0] = ld32((c.r[6].w[0]));
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[2].d[0] = c.r[7].sd[0] < 8ll ? 1ull : 0ull;
    st32((c.r[3].w[0] + 1104u), c.f[0]);
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026BC94u | kUnwind; return; } goto L_0026BC94; } }
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
L_0026BCD8:
    c.f[0] = ld32((c.r[6].w[0]));
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[2].d[0] = c.r[7].sd[0] < 3ll ? 1ull : 0ull;
    st32((c.r[3].w[0] + 1024u), c.f[0]);
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026BCD8u | kUnwind; return; } goto L_0026BCD8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 6720u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[2].w[0] + 9344u);
    set32(c.r[3], c.r[8].w[0] << 3);
    set32(c.r[7], c.r[2].w[0] + c.r[3].w[0]);
    st16((c.r[16].w[0] + 818u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st16((c.r[16].w[0] + 816u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 6722u)));
    set32(c.r[2], 0u + 33u);
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
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 6736u)));
    st16((c.r[16].w[0] + 828u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[7].w[0]));
    st32((c.r[16].w[0] + 1148u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 4u));
    st32((c.r[16].w[0] + 1152u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.budget -= 40;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0026BDA0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[2].w[0] + 4176u);  if (t) { goto L_0026BDA8; } }
L_0026BDA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[17], c.r[2].w[0] + 4192u);
    c.budget -= 2;
L_0026BDA8:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BDE0u); c.f[12] = fp::mul(c.f[2], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x0026BDE0u) [[unlikely]] return; }
L_0026BDE0:
    st16((c.r[16].w[0] + 1256u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[1] = ld32((c.r[17].w[0] + 12u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.f[2] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47800000u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 1u, c.f[1], c.f[2]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BE10u); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x0026BE10u) [[unlikely]] return; }
L_0026BE10:
    set32(c.r[4], 0u + 1u);
    st16((c.r[16].w[0] + 1258u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 790u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0026BE40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BE38u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0014(c, 143u, depth + 1u); else { c.pc = 0x001529F0u; return; } if (c.pc != 0x0026BE38u) [[unlikely]] return; }
L_0026BE38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 884u), static_cast<std::uint8_t>(0u));  if (t) { [[clang::musttail]] return unit_005B(c, 4u, depth); } }
L_0026BE40:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 95u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_005B(c, 3u, depth); } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8391u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026BE64; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { [[clang::musttail]] return unit_005B(c, 3u, depth); } }
L_0026BE64:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 801u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0026BEAC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[2], 0u + 32u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026BEA8; } }
    set32(c.r[2], c.r[3].w[0] - 34u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0026BEA8; } }
    set32(c.r[2], 0u + 42u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026BEA8; } }
    set32(c.r[2], 0u + 40u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_0026BFFC; } }
L_0026BEA8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0026BEAC:
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
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[5], c.r[28].w[0] - 26520u);
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[6], c.r[5].w[0] + c.r[6].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.r[7].d[0] = c.r[3].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8389u)));
    c.r[7].d[0] = c.r[3].d[0] << 56;
    set32(c.r[3], c.r[5].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 33;
    { const bool t = c.r[2].d[0] != 0ull; c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);  if (t) { goto L_0026BF34; } }
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0026BF34:
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[4], c.r[2].w[0] + 6608u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[3].d[0] = c.r[7].d[0] << 56;
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 256u)));
    set32(c.r[2], c.r[2].w[0] + 6512u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.f[3] = ld32((c.r[4].w[0]));
    c.f[2] = ld32((c.r[4].w[0] + 4u));
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    st32((c.r[16].w[0] + 32u), c.f[3]);
    st32((c.r[16].w[0] + 36u), c.f[2]);
    st32((c.r[16].w[0] + 40u), c.f[1]);
    st32((c.r[16].w[0] + 44u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 16u)));
    st8((c.r[16].w[0] + 890u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 30;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[2].w[0] << 8);  goto L_0026BFE0; }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.f[2] = ld32((c.r[1].w[0] - 21936u));
    c.f[3] = ld32((c.r[16].w[0] + 32u));
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.f[0] = ld32((c.r[1].w[0] - 21928u));
    c.f[12] = fp::sub(c.f[2], c.f[3]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BFD0u); c.f[13] = fp::sub(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x0026BFD0u) [[unlikely]] return; }
L_0026BFD0:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 84u), c.r[2].w[0]);  if (t) { goto L_0026BFE4; } }
    set32(c.r[2], c.r[2].w[0] << 8);
    c.budget -= 1;
L_0026BFE0:
    st32((c.r[16].w[0] + 84u), c.r[2].w[0]);
    c.budget -= 1;
L_0026BFE4:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BFF0u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_003C(c, 229u, depth + 1u); else { c.pc = 0x001F3280u; return; } if (c.pc != 0x0026BFF0u) [[unlikely]] return; }
L_0026BFF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_005B(c, 3u, depth); } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_0026BFFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C004u);  if (depth < kMaxDepth) unit_0070(c, 204u, depth + 1u); else { c.pc = 0x002C3370u; return; } if (c.pc != 0x0026C004u) [[unlikely]] return; }
    [[clang::musttail]] return unit_005B(c, 2u, depth);
}

}
