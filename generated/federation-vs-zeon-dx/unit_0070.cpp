#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0070[4096] = {
    1, 0, 0, 0, 2, 0, 0, 3, 0, 4, 5, 0, 0, 0, 6, 7, 0, 0, 0, 0, 0, 8, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 10, 0, 11, 0, 0, 0, 12, 13, 0, 14, 0, 0, 15, 16, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 19,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 24, 25, 0, 0, 26, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 31, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 48, 0, 0, 0,
    0, 0, 0, 49, 0, 0, 0, 50, 0, 0, 0, 51, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 56, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0,
    58, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0,
    0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    72, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 75,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 79, 0, 0, 0, 0, 0, 0,
    0, 80, 0, 81, 0, 0, 0, 82, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 85, 0, 86, 0,
    87, 0, 88, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0,
    92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 95, 0, 96, 0, 0, 97, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 105, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 108, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 117, 0, 0, 118, 0, 119, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 123, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 124, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 127, 0, 128, 0, 0, 0, 129, 0, 0, 130, 0, 131, 0, 0, 0, 132,
    0, 0, 0, 133, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0,
    0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 139, 0, 140, 0, 141, 0, 142, 0, 143, 0, 144, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 147, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0,
    0, 155, 0, 156, 0, 157, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 160, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0,
    0, 0, 0, 0, 166, 0, 167, 0, 168, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0,
    0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 179, 0, 180, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0,
    192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0,
    0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0,
    0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 212, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0070(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002C0000;
    case 2u: goto L_002C0010;
    case 3u: goto L_002C001C;
    case 4u: goto L_002C0024;
    case 5u: goto L_002C0028;
    case 6u: goto L_002C0038;
    case 7u: goto L_002C003C;
    case 8u: goto L_002C0054;
    case 9u: goto L_002C0058;
    case 10u: goto L_002C008C;
    case 11u: goto L_002C0094;
    case 12u: goto L_002C00A4;
    case 13u: goto L_002C00A8;
    case 14u: goto L_002C00B0;
    case 15u: goto L_002C00BC;
    case 16u: goto L_002C00C0;
    case 17u: goto L_002C00D0;
    case 18u: goto L_002C00EC;
    case 19u: goto L_002C00FC;
    case 20u: goto L_002C0128;
    case 21u: goto L_002C0130;
    case 22u: goto L_002C0170;
    case 23u: goto L_002C01C0;
    case 24u: goto L_002C01C4;
    case 25u: goto L_002C01C8;
    case 26u: goto L_002C01D4;
    case 27u: goto L_002C01DC;
    case 28u: goto L_002C0210;
    case 29u: goto L_002C0264;
    case 30u: goto L_002C02E0;
    case 31u: goto L_002C02F4;
    case 32u: goto L_002C0354;
    case 33u: goto L_002C0370;
    case 34u: goto L_002C03A0;
    case 35u: goto L_002C0470;
    case 36u: goto L_002C0530;
    case 37u: goto L_002C0568;
    case 38u: goto L_002C05BC;
    case 39u: goto L_002C05C8;
    case 40u: goto L_002C0658;
    case 41u: goto L_002C06B0;
    case 42u: goto L_002C0758;
    case 43u: goto L_002C0790;
    case 44u: goto L_002C08B0;
    case 45u: goto L_002C0990;
    case 46u: goto L_002C09A8;
    case 47u: goto L_002C09DC;
    case 48u: goto L_002C09F0;
    case 49u: goto L_002C0A0C;
    case 50u: goto L_002C0A1C;
    case 51u: goto L_002C0A2C;
    case 52u: goto L_002C0A34;
    case 53u: goto L_002C0A60;
    case 54u: goto L_002C0A9C;
    case 55u: goto L_002C0ACC;
    case 56u: goto L_002C0AD4;
    case 57u: goto L_002C0AF0;
    case 58u: goto L_002C0B00;
    case 59u: goto L_002C0B08;
    case 60u: goto L_002C0B30;
    case 61u: goto L_002C0B50;
    case 62u: goto L_002C0B60;
    case 63u: goto L_002C0B70;
    case 64u: goto L_002C0B94;
    case 65u: goto L_002C0BC8;
    case 66u: goto L_002C0BE4;
    case 67u: goto L_002C0C2C;
    case 68u: goto L_002C0C4C;
    case 69u: goto L_002C0C88;
    case 70u: goto L_002C0CB0;
    case 71u: goto L_002C0CBC;
    case 72u: goto L_002C0D00;
    case 73u: goto L_002C0D20;
    case 74u: goto L_002C0DF4;
    case 75u: goto L_002C0DFC;
    case 76u: goto L_002C101C;
    case 77u: goto L_002C1028;
    case 78u: goto L_002C105C;
    case 79u: goto L_002C1064;
    case 80u: goto L_002C1084;
    case 81u: goto L_002C108C;
    case 82u: goto L_002C109C;
    case 83u: goto L_002C10B0;
    case 84u: goto L_002C1168;
    case 85u: goto L_002C1170;
    case 86u: goto L_002C1178;
    case 87u: goto L_002C1180;
    case 88u: goto L_002C1188;
    case 89u: goto L_002C1190;
    case 90u: goto L_002C11C0;
    case 91u: goto L_002C11F8;
    case 92u: goto L_002C1200;
    case 93u: goto L_002C1248;
    case 94u: goto L_002C13A8;
    case 95u: goto L_002C13C0;
    case 96u: goto L_002C13C8;
    case 97u: goto L_002C13D4;
    case 98u: goto L_002C13EC;
    case 99u: goto L_002C1414;
    case 100u: goto L_002C1440;
    case 101u: goto L_002C1460;
    case 102u: goto L_002C1470;
    case 103u: goto L_002C14A4;
    case 104u: goto L_002C14C8;
    case 105u: goto L_002C14D0;
    case 106u: goto L_002C14D8;
    case 107u: goto L_002C1524;
    case 108u: goto L_002C1584;
    case 109u: goto L_002C15A0;
    case 110u: goto L_002C15C0;
    case 111u: goto L_002C165C;
    case 112u: goto L_002C1690;
    case 113u: goto L_002C16B0;
    case 114u: goto L_002C16E4;
    case 115u: goto L_002C1720;
    case 116u: goto L_002C174C;
    case 117u: goto L_002C1760;
    case 118u: goto L_002C176C;
    case 119u: goto L_002C1774;
    case 120u: goto L_002C17A8;
    case 121u: goto L_002C17D0;
    case 122u: goto L_002C185C;
    case 123u: goto L_002C1868;
    case 124u: goto L_002C1890;
    case 125u: goto L_002C189C;
    case 126u: goto L_002C1A2C;
    case 127u: goto L_002C1A40;
    case 128u: goto L_002C1A48;
    case 129u: goto L_002C1A58;
    case 130u: goto L_002C1A64;
    case 131u: goto L_002C1A6C;
    case 132u: goto L_002C1A7C;
    case 133u: goto L_002C1A8C;
    case 134u: goto L_002C1A9C;
    case 135u: goto L_002C1BB0;
    case 136u: goto L_002C1C70;
    case 137u: goto L_002C1C90;
    case 138u: goto L_002C1D04;
    case 139u: goto L_002C1D9C;
    case 140u: goto L_002C1DA4;
    case 141u: goto L_002C1DAC;
    case 142u: goto L_002C1DB4;
    case 143u: goto L_002C1DBC;
    case 144u: goto L_002C1DC4;
    case 145u: goto L_002C1DE0;
    case 146u: goto L_002C1EE4;
    case 147u: goto L_002C1EF4;
    case 148u: goto L_002C1F48;
    case 149u: goto L_002C1F58;
    case 150u: goto L_002C2008;
    case 151u: goto L_002C2034;
    case 152u: goto L_002C2044;
    case 153u: goto L_002C2054;
    case 154u: goto L_002C2070;
    case 155u: goto L_002C2084;
    case 156u: goto L_002C208C;
    case 157u: goto L_002C2094;
    case 158u: goto L_002C20B4;
    case 159u: goto L_002C20E0;
    case 160u: goto L_002C2114;
    case 161u: goto L_002C2124;
    case 162u: goto L_002C214C;
    case 163u: goto L_002C2180;
    case 164u: goto L_002C21BC;
    case 165u: goto L_002C21F0;
    case 166u: goto L_002C2210;
    case 167u: goto L_002C2218;
    case 168u: goto L_002C2220;
    case 169u: goto L_002C2230;
    case 170u: goto L_002C2354;
    case 171u: goto L_002C236C;
    case 172u: goto L_002C23A8;
    case 173u: goto L_002C23C0;
    case 174u: goto L_002C23F4;
    case 175u: goto L_002C240C;
    case 176u: goto L_002C24FC;
    case 177u: goto L_002C25C0;
    case 178u: goto L_002C26A4;
    case 179u: goto L_002C26B8;
    case 180u: goto L_002C26C0;
    case 181u: goto L_002C26E0;
    case 182u: goto L_002C2778;
    case 183u: goto L_002C2870;
    case 184u: goto L_002C290C;
    case 185u: goto L_002C2B40;
    case 186u: goto L_002C2C64;
    case 187u: goto L_002C2CB8;
    case 188u: goto L_002C2D10;
    case 189u: goto L_002C2D6C;
    case 190u: goto L_002C2EB0;
    case 191u: goto L_002C2EE0;
    case 192u: goto L_002C2F00;
    case 193u: goto L_002C2FA8;
    case 194u: goto L_002C2FE0;
    case 195u: goto L_002C3018;
    case 196u: goto L_002C3044;
    case 197u: goto L_002C3134;
    case 198u: goto L_002C3274;
    case 199u: goto L_002C3294;
    case 200u: goto L_002C32A8;
    case 201u: goto L_002C32C8;
    case 202u: goto L_002C32EC;
    case 203u: goto L_002C334C;
    case 204u: goto L_002C3370;
    case 205u: goto L_002C33B8;
    case 206u: goto L_002C3444;
    case 207u: goto L_002C346C;
    case 208u: goto L_002C3568;
    case 209u: goto L_002C3588;
    case 210u: goto L_002C362C;
    case 211u: goto L_002C3640;
    case 212u: goto L_002C3690;
    case 213u: goto L_002C36A0;
    case 214u: goto L_002C36C4;
    case 215u: goto L_002C3714;
    case 216u: goto L_002C3754;
    case 217u: goto L_002C37A0;
    case 218u: goto L_002C3858;
    case 219u: goto L_002C389C;
    case 220u: goto L_002C38A8;
    case 221u: goto L_002C38D4;
    case 222u: goto L_002C3984;
    case 223u: goto L_002C3A18;
    case 224u: goto L_002C3AB0;
    case 225u: goto L_002C3B44;
    case 226u: goto L_002C3BD8;
    case 227u: goto L_002C3C64;
    case 228u: goto L_002C3CFC;
    case 229u: goto L_002C3D94;
    case 230u: goto L_002C3E24;
    case 231u: goto L_002C3EB0;
    case 232u: goto L_002C3F44;
    case 233u: goto L_002C3FD8;
    default: bad_entry(c, 0x002C0000u); return;
    }
L_002C0000:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 724u), c.r[3].w[0]);  if (t) { goto L_002C00A4; } }
L_002C0010:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 766u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C0024; } }
L_002C001C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002C00A4; } }
L_002C0024:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 766u));
    c.budget -= 1;
L_002C0028:
    c.r[2].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C0048; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 724u)));
    c.budget -= 1;
L_002C0038:
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_002C003C:
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 724u), c.r[2].w[0]);  if (t) { goto L_002C0060; } }
L_002C0048:
    set32(c.r[2], ld32((c.r[4].w[0] + 724u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_002C0064; } }
    goto L_002C0058;
L_002C0054:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_002C0058:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002C00A4; } }
L_002C0060:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_002C0064:
    st8((c.r[4].w[0] + 766u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 745u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[3], c.r[2].w[0] + 28384u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8429u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], ld32((c.r[3].w[0])));  if (t) { goto L_002C009C; } }
L_002C008C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0094u);  if (depth < kMaxDepth) unit_0070(c, 14u, depth + 1u); else { c.pc = 0x002C00B0u; return; } if (c.pc != 0x002C0094u) [[unlikely]] return; }
L_002C0094:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C00A4; } }
L_002C009C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C00A4u);  if (depth < kMaxDepth) unit_0070(c, 35u, depth + 1u); else { c.pc = 0x002C0470u; return; } if (c.pc != 0x002C00A4u) [[unlikely]] return; }
L_002C00A4:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_002C00A8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002C00B0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.budget -= 3;
L_002C00BC:
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.budget -= 1;
L_002C00C0:
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
L_002C00D0:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 741u));
    set32(c.r[2], 0u + 8u);
    mmi::paddub(c.r[20], c.r[5], c.r[0]);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; mmi::paddub(c.r[21], c.r[4], c.r[0]);  if (t) { goto L_002C00F8; } }
    c.r[2].d[0] = ld8((c.r[21].w[0] + 784u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C00F8; } }
    goto L_002C00F0;
L_002C00EC:
    c.budget -= 1;
L_002C00F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002C044C; } }
L_002C00F8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 812u)));
    c.budget -= 1;
L_002C00FC:
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C0110; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002C044C; } }
L_002C0110:
    set32(c.r[16], ld32((c.r[21].w[0] + 1304u)));
    set32(c.r[17], ld32((c.r[21].w[0] + 1308u)));
    set32(c.r[18], ld32((c.r[21].w[0] + 96u)));
    c.r[2].d[0] = 0ull & 255ull;
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 6;
L_002C0128:
    st8((c.r[21].w[0] + 746u), static_cast<std::uint8_t>(0u));
    st8((c.r[21].w[0] + 747u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_002C0130:
    st32((c.r[21].w[0] + 1300u), c.r[2].w[0]);
    st32((c.r[21].w[0] + 96u), c.r[2].w[0]);
    st32((c.r[21].w[0] + 1308u), c.r[2].w[0]);
    st32((c.r[21].w[0] + 1304u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[21].w[0] + 741u));
    set32(c.r[2], c.r[2].w[0] - 7u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[4], c.r[21], c.r[0]);  if (t) { goto L_002C02EC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] + 26480u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002C0000u < 16384u) { entry = entries_0070[(t - 0x002C0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002C0170:
    c.r[2].d[0] = ld8((c.r[21].w[0] + 745u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C0198; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 724u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C0198; } }
    set32(c.r[2], 0u + 13u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[21].w[0] + 746u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002C01B8; } }
L_002C0198:
    c.r[2].d[0] = ld8((c.r[21].w[0] + 785u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_002C01B4; } }
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[21].w[0] + 746u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002C01B8; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_002C01B4:
    st8((c.r[21].w[0] + 746u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_002C01B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C01C0u); mmi::paddub(c.r[4], c.r[21], c.r[0]);  if (depth < kMaxDepth) unit_0070(c, 45u, depth + 1u); else { c.pc = 0x002C0990u; return; } if (c.pc != 0x002C01C0u) [[unlikely]] return; }
L_002C01C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[5], c.r[20], c.r[0]);  if (t) { goto L_002C034C; } }
    goto L_002C01C8;
L_002C01C4:
    mmi::paddub(c.r[5], c.r[20], c.r[0]);
    c.budget -= 1;
L_002C01C8:
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[21].w[0] + 746u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002C0348; } }
L_002C01D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C01DCu); mmi::paddub(c.r[4], c.r[21], c.r[0]);  if (depth < kMaxDepth) unit_0070(c, 45u, depth + 1u); else { c.pc = 0x002C0990u; return; } if (c.pc != 0x002C01DCu) [[unlikely]] return; }
L_002C01DC:
    c.r[2].d[0] = ld8((c.r[21].w[0] + 745u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 9u);  if (t) { goto L_002C0208; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 724u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C0204; } }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[21].w[0] + 746u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002C0348; } }
L_002C0204:
    set32(c.r[2], 0u + 9u);
    c.budget -= 1;
L_002C0208:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[21].w[0] + 746u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002C0348; } }
L_002C0210:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 756u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C02E8; } }
    c.f[1] = ld32((c.r[21].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C02E8; } }
    c.r[2].d[0] = ld8((c.r[21].w[0] + 745u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 11u);  if (t) { goto L_002C0274; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 724u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C0270; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0264u); mmi::paddub(c.r[4], c.r[21], c.r[0]);  if (depth < kMaxDepth) unit_0070(c, 45u, depth + 1u); else { c.pc = 0x002C0990u; return; } if (c.pc != 0x002C0264u) [[unlikely]] return; }
L_002C0264:
    set32(c.r[2], 0u + 12u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[21].w[0] + 746u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002C0348; } }
L_002C0270:
    set32(c.r[2], 0u + 11u);
    c.budget -= 1;
L_002C0274:
    st8((c.r[21].w[0] + 746u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[21].w[0] + 1308u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 14));  if (t) { goto L_002C028C; } }
    set32(c.r[2], c.r[3].w[0] + 16383u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 14));
    c.budget -= 2;
L_002C028C:
    c.r[5].d[0] = ld8((c.r[21].w[0] + 746u));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[19].d[0] = c.r[2].d[0] << 56;
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 3);
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 56);
    set32(c.r[4], c.r[4].w[0] + c.r[20].w[0]);
    set32(c.r[3], c.r[19].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0] + 2u));
    c.r[2].d[0] = 0ull | 65535ull;
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[4], c.r[21], c.r[0]);  if (t) { goto L_002C02D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002C044C; } }
    mmi::paddub(c.r[4], c.r[21], c.r[0]);
    c.budget -= 1;
L_002C02D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C02E0u);  if (depth < kMaxDepth) unit_0070(c, 45u, depth + 1u); else { c.pc = 0x002C0990u; return; } if (c.pc != 0x002C02E0u) [[unlikely]] return; }
L_002C02E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[21].w[0] + 747u), static_cast<std::uint8_t>(c.r[19].w[0]));  if (t) { goto L_002C0348; } }
L_002C02E8:
    mmi::paddub(c.r[4], c.r[21], c.r[0]);
    c.budget -= 1;
L_002C02EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C02F4u);  if (depth < kMaxDepth) unit_0070(c, 45u, depth + 1u); else { c.pc = 0x002C0990u; return; } if (c.pc != 0x002C02F4u) [[unlikely]] return; }
L_002C02F4:
    c.f[1] = ld32((c.r[21].w[0] + 1052u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C031C; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[21].w[0] + 746u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002C0348; } }
L_002C031C:
    c.r[2].d[0] = ld8((c.r[21].w[0] + 745u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C0344; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 724u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C0344; } }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[21].w[0] + 746u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002C0348; } }
L_002C0344:
    st8((c.r[21].w[0] + 746u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_002C0348:
    mmi::paddub(c.r[5], c.r[20], c.r[0]);
    c.budget -= 1;
L_002C034C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0354u); mmi::paddub(c.r[4], c.r[21], c.r[0]);  if (depth < kMaxDepth) unit_0070(c, 43u, depth + 1u); else { c.pc = 0x002C0790u; return; } if (c.pc != 0x002C0354u) [[unlikely]] return; }
L_002C0354:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; mmi::paddub(c.r[19], c.r[2], c.r[0]);  if (t) { goto L_002C043C; } }
    c.r[5].d[0] = ld16((c.r[21].w[0] + 704u));
    set32(c.r[6], c.r[29].w[0] + 124u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0370u); mmi::paddub(c.r[4], c.r[21], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 98u, depth + 1u); else { c.pc = 0x002D5450u; return; } if (c.pc != 0x002C0370u) [[unlikely]] return; }
L_002C0370:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C0394; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 124u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 14));  if (t) { goto L_002C038C; } }
    set32(c.r[2], c.r[3].w[0] + 16383u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 14));
    c.budget -= 2;
L_002C038C:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 124u), c.r[2].w[0]);
    c.budget -= 2;
L_002C0394:
    set32(c.r[5], ld32((c.r[29].w[0] + 124u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C03A0u); mmi::paddub(c.r[4], c.r[21], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 145u, depth + 1u); else { c.pc = 0x002DA750u; return; } if (c.pc != 0x002C03A0u) [[unlikely]] return; }
L_002C03A0:
    set32(c.r[2], ld32((c.r[21].w[0] + 1536u)));
    st32((c.r[21].w[0] + 1520u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 1548u)));
    st32((c.r[21].w[0] + 520u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 1548u)));
    st32((c.r[21].w[0] + 524u), c.r[2].w[0]);
    c.f[3] = ld32((c.r[21].w[0] + 1376u));
    c.f[2] = ld32((c.r[21].w[0] + 1380u));
    c.f[1] = ld32((c.r[21].w[0] + 1384u));
    c.f[0] = ld32((c.r[21].w[0] + 1388u));
    st32((c.r[21].w[0] + 1328u), c.f[3]);
    st32((c.r[21].w[0] + 1332u), c.f[2]);
    st32((c.r[21].w[0] + 1336u), c.f[1]);
    st32((c.r[21].w[0] + 1340u), c.f[0]);
    st32((c.r[29].w[0] + 124u), 0u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 736u)));
    c.budget -= 18;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C03F0; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 124u), c.r[2].w[0]);
    c.budget -= 2;
L_002C03F0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 124u)));
    set32(c.r[2], c.r[2].w[0] + 16352u);
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[21].w[0] + 1156u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[21].w[0] + 1160u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 1164u), c.f[0]);  if (t) { goto L_002C0448; } }
L_002C043C:
    st32((c.r[21].w[0] + 1304u), c.r[16].w[0]);
    st32((c.r[21].w[0] + 1308u), c.r[17].w[0]);
    st32((c.r[21].w[0] + 96u), c.r[18].w[0]);
    c.budget -= 3;
L_002C0448:
    mmi::paddub(c.r[2], c.r[19], c.r[0]);
    c.budget -= 1;
L_002C044C:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002C0470:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 741u));
    set32(c.r[2], 0u + 8u);
    mmi::paddub(c.r[19], c.r[5], c.r[0]);
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; mmi::paddub(c.r[20], c.r[4], c.r[0]);  if (t) { goto L_002C04B4; } }
    c.r[2].d[0] = ld8((c.r[20].w[0] + 784u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C04B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002C0770; } }
L_002C04B4:
    set32(c.r[16], ld32((c.r[20].w[0] + 1304u)));
    set32(c.r[17], ld32((c.r[20].w[0] + 1308u)));
    set32(c.r[18], ld32((c.r[20].w[0] + 96u)));
    c.r[2].d[0] = 0ull & 255ull;
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    st8((c.r[20].w[0] + 746u), static_cast<std::uint8_t>(0u));
    st8((c.r[20].w[0] + 747u), static_cast<std::uint8_t>(0u));
    st32((c.r[20].w[0] + 1300u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 96u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 1308u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 1304u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 16;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C0500; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 746u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002C073C; } }
L_002C0500:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 741u));
    set32(c.r[2], c.r[2].w[0] - 7u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002C0658; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] + 26528u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002C0000u < 16384u) { entry = entries_0070[(t - 0x002C0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002C0530:
    c.r[3].d[0] = ld8((c.r[20].w[0] + 745u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_002C0560; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 724u)));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C055C; } }
    set32(c.r[2], 0u + 13u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 746u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002C06A4; } }
L_002C055C:
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_002C0560:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 746u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002C06A4; } }
L_002C0568:
    c.r[3].d[0] = ld8((c.r[20].w[0] + 745u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002C0594; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 724u)));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C0594; } }
    set32(c.r[2], 0u + 13u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 746u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002C06A4; } }
L_002C0594:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 8386u)));
    set32(c.r[2], 0u + 18u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_002C05B4; } }
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 746u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002C06A4; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_002C05B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 746u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002C06A4; } }
L_002C05BC:
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 746u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002C06A4; } }
L_002C05C8:
    c.r[3].d[0] = ld8((c.r[20].w[0] + 745u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 11u);  if (t) { goto L_002C05F8; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 724u)));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C05F4; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 746u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002C06A4; } }
L_002C05F4:
    set32(c.r[2], 0u + 11u);
    c.budget -= 1;
L_002C05F8:
    st8((c.r[20].w[0] + 746u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[20].w[0] + 1308u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 14));  if (t) { goto L_002C0610; } }
    set32(c.r[2], c.r[3].w[0] + 16383u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 14));
    c.budget -= 2;
L_002C0610:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[20].w[0] + 747u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].d[0] = ld8((c.r[20].w[0] + 746u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 747u)));
    c.r[2].d[0] = 0ull | 65535ull;
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] + c.r[19].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0] + 2u));
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[5], 0u + 1u);  if (t) { goto L_002C06A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002C0770; } }
L_002C0658:
    c.r[3].d[0] = ld8((c.r[20].w[0] + 745u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002C0684; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 724u)));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C0684; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 746u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002C06A4; } }
L_002C0684:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] & 15360ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_002C06A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 746u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002C06A4; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_002C06A0:
    st8((c.r[20].w[0] + 746u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_002C06A4:
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_002C06A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C06B0u); mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 186u, depth + 1u); else { c.pc = 0x002DB3A0u; return; } if (c.pc != 0x002C06B0u) [[unlikely]] return; }
L_002C06B0:
    set32(c.r[3], 0u - 2u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[2].d[0] = 0ull | 32768ull;  goto L_002C071C; }
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002C0718; } }
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[4].d[0]) { set32(c.r[2], 0u - 16384u);  goto L_002C0700; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[2], 0u + 16384u);  if (t) { goto L_002C06EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 761u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002C0740; } }
    set32(c.r[2], 0u + 16384u);
    c.budget -= 1;
L_002C06EC:
    st32((c.r[20].w[0] + 1308u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 1304u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 747u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_002C073C; } }
    set32(c.r[2], 0u - 16384u);
    c.budget -= 1;
L_002C0700:
    st32((c.r[20].w[0] + 1304u), c.r[2].w[0]);
    c.r[2].d[0] = 0ull | 49152ull;
    st32((c.r[20].w[0] + 1308u), c.r[2].w[0]);
    set32(c.r[2], 0u + 4u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 747u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002C073C; } }
L_002C0718:
    c.r[2].d[0] = 0ull | 32768ull;
    c.budget -= 1;
L_002C071C:
    st32((c.r[20].w[0] + 1308u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 1304u), c.r[2].w[0]);
    set32(c.r[2], 0u + 3u);
    st8((c.r[20].w[0] + 747u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 812u)));
    set32(c.r[2], 0u - 193u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st16((c.r[20].w[0] + 812u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 8;
L_002C073C:
    st8((c.r[20].w[0] + 761u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_002C0740:
    st32((c.r[20].w[0] + 1504u), 0u);
    st32((c.r[20].w[0] + 1508u), 0u);
    mmi::paddub(c.r[5], c.r[19], c.r[0]);
    mmi::paddub(c.r[4], c.r[20], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0758u); st32((c.r[20].w[0] + 1512u), 0u);  if (depth < kMaxDepth) unit_0070(c, 43u, depth + 1u); else { c.pc = 0x002C0790u; return; } if (c.pc != 0x002C0758u) [[unlikely]] return; }
L_002C0758:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002C0770; } }
    st32((c.r[20].w[0] + 1304u), c.r[16].w[0]);
    st32((c.r[20].w[0] + 1308u), c.r[17].w[0]);
    st32((c.r[20].w[0] + 96u), c.r[18].w[0]);
    c.budget -= 3;
L_002C0770:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002C0790:
    c.r[7].d[0] = ld8((c.r[4].w[0] + 746u));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 747u)));
    c.r[3].d[0] = 0ull | 65535ull;
    set32(c.r[2], c.r[7].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[6].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.r[5].d[0] = ld16((c.r[5].w[0] + 2u));
    c.budget -= 12;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[6].d[0] = c.r[5].d[0] << 48;  if (t) { goto L_002C07CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002C08A8; } }
    c.r[6].d[0] = c.r[5].d[0] << 48;
    c.budget -= 1;
L_002C07CC:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    set32(c.r[3], 0u - 1u);
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st16((c.r[4].w[0] + 812u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 747u)));
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    c.budget -= 11;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002C07FC; } }
    st16((c.r[4].w[0] + 806u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 1;
L_002C07FC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 747u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 810u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_002C0848; } }
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002C0848; } }
    st8((c.r[4].w[0] + 810u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[4].w[0] + 728u), 0u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 747u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    st8((c.r[4].w[0] + 728u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 8059u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 784u), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
L_002C0848:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 747u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 811u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 6u)));
    c.budget -= 7;
    if (c.r[6].d[0] == c.r[5].d[0]) { set32(c.r[2], 0u + 1u);  goto L_002C089C; }
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002C0898; } }
    st8((c.r[4].w[0] + 811u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[4].w[0] + 732u), 0u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 747u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 7u)));
    st8((c.r[4].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[4].w[0] + 274u), static_cast<std::uint8_t>(0u));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 785u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002C08A4; } }
L_002C0898:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002C089C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C08A8; } }
L_002C08A4:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_002C08A8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C08B0:
    c.r[2].d[0] = c.r[6].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[9], c.r[2].w[0] << 3);
    set32(c.r[7], c.r[9].w[0] + c.r[5].w[0]);
    st8((c.r[4].w[0] + 747u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[3].d[0] = ld16((c.r[7].w[0] + 2u));
    c.r[2].d[0] = 0ull | 65535ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[8], c.r[7].w[0] + 2u);  if (t) { goto L_002C08DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002C097C; } }
L_002C08DC:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    set32(c.r[3], 0u - 4u);
    set32(c.r[2], 0u - 1u);
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    st16((c.r[4].w[0] + 812u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0])));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    st16((c.r[4].w[0] + 812u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0])));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[6], c.r[9].w[0] + c.r[5].w[0]);  if (t) { goto L_002C0914; } }
    st16((c.r[4].w[0] + 806u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[6], c.r[9].w[0] + c.r[5].w[0]);
    c.budget -= 2;
L_002C0914:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 4u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[5], c.r[9].w[0] + c.r[5].w[0]);  goto L_002C0940; }
    st8((c.r[4].w[0] + 810u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 728u), 0u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 5u)));
    st8((c.r[4].w[0] + 728u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[4].w[0] + 8059u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 784u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], c.r[9].w[0] + c.r[5].w[0]);
    c.budget -= 7;
L_002C0940:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 6u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_002C0970; } }
    st8((c.r[4].w[0] + 811u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 732u), 0u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 7u)));
    st8((c.r[4].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[4].w[0] + 274u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 785u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002C0978; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002C0970:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C097C; } }
L_002C0978:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_002C097C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C0990:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C09A8u); c.r[5].d[0] = ld16((c.r[16].w[0] + 704u));  if (depth < kMaxDepth) unit_0075(c, 91u, depth + 1u); else { c.pc = 0x002D52F0u; return; } if (c.pc != 0x002C09A8u) [[unlikely]] return; }
L_002C09A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_002C09D0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1308u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 14));  if (t) { goto L_002C09C4; } }
    set32(c.r[2], c.r[3].w[0] + 16383u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 14));
    c.budget -= 2;
L_002C09C4:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 747u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
L_002C09D0:
    st8((c.r[16].w[0] + 755u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C09DCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 172u, depth + 1u); else { c.pc = 0x002DAD30u; return; } if (c.pc != 0x002C09DCu) [[unlikely]] return; }
L_002C09DC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C09F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00860000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], c.r[2].w[0] + 26144u);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 7;
L_002C0A0C:
    set32(c.r[6], 0u + 8384u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0A1Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x002C0A1Cu) [[unlikely]] return; }
L_002C0A1C:
    set32(c.r[2], 0u - 1u);
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0A2Cu); st8((c.r[17].w[0] + 9u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002C0A2Cu) [[unlikely]] return; }
L_002C0A2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0A34u); set32(c.r[4], c.r[17].w[0] + 8320u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002C0A34u) [[unlikely]] return; }
L_002C0A34:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 8448u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C0A0Cu | kUnwind; return; } goto L_002C0A0C; } }
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C0A60:
    set32(c.r[2], c.r[4].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], c.r[2].w[0] << 8);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[2], c.r[2].w[0] + 26144u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[6], 0u + 8448u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0A9Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x002C0A9Cu) [[unlikely]] return; }
L_002C0A9C:
    set32(c.r[2], 0u - 1u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[28].w[0] - 28704u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[2], c.r[28].w[0] - 28696u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st8((c.r[16].w[0] + 8384u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0ACCu); st8((c.r[16].w[0] + 8385u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002C0ACCu) [[unlikely]] return; }
L_002C0ACC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0AD4u); set32(c.r[4], c.r[16].w[0] + 8320u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002C0AD4u) [[unlikely]] return; }
L_002C0AD4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C0AF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 4;
L_002C0B00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0B08u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0070(c, 53u, depth + 1u); else { c.pc = 0x002C0A60u; return; } if (c.pc != 0x002C0B08u) [[unlikely]] return; }
L_002C0B08:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C0B00u | kUnwind; return; } goto L_002C0B00; } }
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C0B30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 369u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C0B58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0B50u);  if (depth < kMaxDepth) unit_0090(c, 41u, depth + 1u); else { c.pc = 0x00340710u; return; } if (c.pc != 0x002C0B50u) [[unlikely]] return; }
L_002C0B50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_002C0B64; } }
L_002C0B58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0B60u);  if (depth < kMaxDepth) unit_0070(c, 63u, depth + 1u); else { c.pc = 0x002C0B70u; return; } if (c.pc != 0x002C0B60u) [[unlikely]] return; }
L_002C0B60:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_002C0B64:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002C0B70:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00860000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[18], c.r[3].w[0] + 26144u);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 9;
L_002C0B94:
    st8((c.r[18].w[0] + 272u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    set32(c.r[4], 0u + 1u);
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[4].d[0]) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_002C0BCC; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8386u)));
    c.r[3].d[0] = c.r[3].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C0BC8; } }
    set32(c.r[2], c.r[4].w[0] << (c.r[16].w[0] & 31u));
    c.r[17].d[0] = c.r[17].d[0] | c.r[2].d[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0BC8u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0045(c, 119u, depth + 1u); else { c.pc = 0x00216410u; return; } if (c.pc != 0x002C0BC8u) [[unlikely]] return; }
L_002C0BC8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002C0BCC:
    c.r[3].d[0] = c.r[16].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 8448u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C0B94u | kUnwind; return; } goto L_002C0B94; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[16], c.r[3].w[0] + 26144u);
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    c.budget -= 3;
L_002C0BE4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[5].d[0]) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_002C0C34; }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[3].d[0] = c.r[4].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C0C30; } }
    c.r[1].d[0] = c.r[4].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002C0C30; } }
    set32(c.r[4], c.r[5].w[0] << (c.r[18].w[0] & 31u));
    c.r[3].d[0] = c.r[17].d[0] & c.r[4].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C0C30; } }
    c.r[17].d[0] = c.r[17].d[0] | c.r[4].d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0C2Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005A(c, 135u, depth + 1u); else { c.pc = 0x00269C80u; return; } if (c.pc != 0x002C0C2Cu) [[unlikely]] return; }
L_002C0C2C:
    c.budget -= 1;
L_002C0C30:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_002C0C34:
    c.r[3].d[0] = c.r[18].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 8448u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C0BE4u | kUnwind; return; } goto L_002C0BE4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[16], c.r[3].w[0] + 26144u);
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    c.budget -= 3;
L_002C0C4C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[4].d[0]) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_002C0C8C; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[1].d[0] = c.r[3].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002C0C88; } }
    set32(c.r[4], c.r[4].w[0] << (c.r[18].w[0] & 31u));
    c.r[3].d[0] = c.r[17].d[0] & c.r[4].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C0C88; } }
    c.r[17].d[0] = c.r[17].d[0] | c.r[4].d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0C88u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0070(c, 72u, depth + 1u); else { c.pc = 0x002C0D00u; return; } if (c.pc != 0x002C0C88u) [[unlikely]] return; }
L_002C0C88:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_002C0C8C:
    c.r[3].d[0] = c.r[18].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 8448u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C0C4Cu | kUnwind; return; } goto L_002C0C4C; } }
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002C0CB0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[4], c.r[3].w[0] + 26144u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 3;
L_002C0CBC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 272u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_002C0CEC; }
    set32(c.r[3], ld32((c.r[28].w[0] - 26388u)));
    st32((c.r[4].w[0] + 172u), 0u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[28].w[0] - 26388u), c.r[4].w[0]);  if (t) { goto L_002C0CE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 26384u), c.r[4].w[0]);  if (t) { goto L_002C0CE8; } }
L_002C0CE0:
    st32((c.r[3].w[0] + 172u), c.r[4].w[0]);
    c.budget -= 2;
L_002C0CE8:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_002C0CEC:
    c.r[3].d[0] = c.r[5].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 8448u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C0CBCu | kUnwind; return; } goto L_002C0CBC; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C0D00:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 29056u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002C0000u < 16384u) { entry = entries_0070[(t - 0x002C0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002C0D20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[5], c.r[2].w[0] + 20448u);
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[4].w[0] + 739u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 280u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 760u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 795u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 788u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 762u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[3], c.r[2].w[0] - 4768u);
    set32(c.r[6], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[8], c.r[2].w[0] + 8992u);
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
    c.budget -= 53;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0DF4u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0016(c, 134u, depth + 1u); else { c.pc = 0x0015B550u; return; } if (c.pc != 0x002C0DF4u) [[unlikely]] return; }
L_002C0DF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0DFCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_001E(c, 118u, depth + 1u); else { c.pc = 0x0017A940u; return; } if (c.pc != 0x002C0DFCu) [[unlikely]] return; }
L_002C0DFC:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8389u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], c.r[2].w[0] + 13504u);
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
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C0E4C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8387u)));
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8400u), c.r[2].w[0]);  if (t) { goto L_002C0E50; } }
L_002C0E4C:
    st32((c.r[16].w[0] + 8400u), 0u);
    c.budget -= 1;
L_002C0E50:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[4], c.r[2].w[0] + 19248u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[2].w[0] + 7712u);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    st32((c.r[16].w[0] + 8404u), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[2].w[0] + 7744u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    st8((c.r[16].w[0] + 1600u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    st8((c.r[16].w[0] + 770u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8391u)));
    c.budget -= 22;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C0EC4; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002C0EC4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 742u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_002C0EEC; } }
L_002C0EC4:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002C0EE8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 29658u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 742u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002C0EEC; } }
L_002C0EE8:
    st8((c.r[16].w[0] + 742u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_002C0EEC:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[2].w[0] + 7360u);
    set32(c.r[2], 0u + 4u);
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    st8((c.r[16].w[0] + 8432u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    st8((c.r[16].w[0] + 8433u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    st8((c.r[16].w[0] + 8425u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    st8((c.r[16].w[0] + 8427u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    st8((c.r[16].w[0] + 8428u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    st8((c.r[16].w[0] + 8429u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.budget -= 23;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 19u);  if (t) { goto L_002C0F5C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8387u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_002C0F78; } }
    set32(c.r[2], 0u + 19u);
    c.budget -= 1;
L_002C0F5C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_002C0F7C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8387u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002C0F7C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002C0F78:
    st8((c.r[16].w[0] + 8425u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_002C0F7C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8389u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[6], c.r[2].w[0] - 4608u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], c.r[2].w[0] - 4604u);
    st8((c.r[16].w[0] + 531u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[2].w[0] + 4544u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[2].w[0] + 7568u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 256u)));
    set32(c.r[7], c.r[7].w[0] << 3);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.f[0] = ld32((c.r[6].w[0]));
    st32((c.r[16].w[0] + 1232u), c.f[0]);
    set32(c.r[6], ld32((c.r[28].w[0] - 26300u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 256u)));
    set32(c.r[6], c.r[6].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[16].w[0] + 1236u), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 2u)));
    st16((c.r[16].w[0] + 842u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 840u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 4u)));
    st16((c.r[16].w[0] + 844u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 6u)));
    st8((c.r[16].w[0] + 518u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[16].w[0] + 1276u), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.budget -= 40;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C101Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 309u, depth + 1u); else { c.pc = 0x00303FD0u; return; } if (c.pc != 0x002C101Cu) [[unlikely]] return; }
L_002C101C:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1028u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 310u, depth + 1u); else { c.pc = 0x00303FF0u; return; } if (c.pc != 0x002C1028u) [[unlikely]] return; }
L_002C1028:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    set32(c.r[3], 0u + 128u);
    set32(c.r[2], 0u + 240u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    st8((c.r[16].w[0] + 268u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8391u)));
    st8((c.r[16].w[0] + 269u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    st8((c.r[16].w[0] + 270u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[16].w[0] + 264u), c.r[16].w[0]);
    st8((c.r[16].w[0] + 576u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C105Cu); st8((c.r[16].w[0] + 579u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0073(c, 142u, depth + 1u); else { c.pc = 0x002CF1D0u; return; } if (c.pc != 0x002C105Cu) [[unlikely]] return; }
L_002C105C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1064u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0078(c, 47u, depth + 1u); else { c.pc = 0x002E0670u; return; } if (c.pc != 0x002C1064u) [[unlikely]] return; }
L_002C1064:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 28480u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1084u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C1084u) [[unlikely]] return; }
L_002C1084:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C108Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0070(c, 83u, depth + 1u); else { c.pc = 0x002C10B0u; return; } if (c.pc != 0x002C108Cu) [[unlikely]] return; }
L_002C108C:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C109Cu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 12u, depth + 1u); else { c.pc = 0x00304300u; return; } if (c.pc != 0x002C109Cu) [[unlikely]] return; }
L_002C109C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C10B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[3] = ld32((c.r[4].w[0] + 128u));
    c.f[2] = ld32((c.r[4].w[0] + 132u));
    c.f[1] = ld32((c.r[4].w[0] + 136u));
    c.f[0] = ld32((c.r[4].w[0] + 140u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 29072u);
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
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1168u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C1168u) [[unlikely]] return; }
L_002C1168:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1170u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 235u, depth + 1u); else { c.pc = 0x002CFB80u; return; } if (c.pc != 0x002C1170u) [[unlikely]] return; }
L_002C1170:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1178u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 153u, depth + 1u); else { c.pc = 0x002CF340u; return; } if (c.pc != 0x002C1178u) [[unlikely]] return; }
L_002C1178:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1180u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 47u, depth + 1u); else { c.pc = 0x002D47F0u; return; } if (c.pc != 0x002C1180u) [[unlikely]] return; }
L_002C1180:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1188u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 316u, depth + 1u); else { c.pc = 0x0026FC50u; return; } if (c.pc != 0x002C1188u) [[unlikely]] return; }
L_002C1188:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1190u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005D(c, 709u, depth + 1u); else { c.pc = 0x00276490u; return; } if (c.pc != 0x002C1190u) [[unlikely]] return; }
L_002C1190:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 760u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C11A4; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002C11A4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C11C0:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C11F8u); st8((c.r[4].w[0] + 795u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0070(c, 183u, depth + 1u); else { c.pc = 0x002C2870u; return; } if (c.pc != 0x002C11F8u) [[unlikely]] return; }
L_002C11F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1200u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0070(c, 192u, depth + 1u); else { c.pc = 0x002C2F00u; return; } if (c.pc != 0x002C1200u) [[unlikely]] return; }
L_002C1200:
    set32(c.r[2], 0u - 1u);
    st8((c.r[16].w[0] + 739u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 740u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 80u), 0u);
    st32((c.r[16].w[0] + 88u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002D0000u);
    st32((c.r[16].w[0] + 104u), 0u);
    set32(c.r[2], c.r[2].w[0] + 20688u);
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
L_002C1248:
    set32(c.r[3], c.r[3].w[0] + 2u);
    st16((c.r[4].w[0] + 540u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 542u), static_cast<std::uint16_t>(0u));
    c.r[2].d[0] = c.r[3].sd[0] < 16ll ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C1248u | kUnwind; return; } goto L_002C1248; } }
    st8((c.r[16].w[0] + 574u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 575u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 577u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 578u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 582u), static_cast<std::uint8_t>(0u));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], 0u + 255u);
    st8((c.r[16].w[0] + 268u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8391u)));
    set32(c.r[2], c.r[2].w[0] - 27424u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    st8((c.r[16].w[0] + 269u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    st8((c.r[16].w[0] + 270u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[16].w[0] + 264u), c.r[16].w[0]);
    st8((c.r[16].w[0] + 736u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 741u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 758u), static_cast<std::uint8_t>(c.r[5].w[0]));
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
    st8((c.r[16].w[0] + 793u), static_cast<std::uint8_t>(0u));
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
    st32((c.r[16].w[0] + 1260u), c.r[2].w[0]);
    st8((c.r[16].w[0] + 8051u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 8050u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 772u), static_cast<std::uint8_t>(0u));
    c.budget -= 81;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C13A8u); st8((c.r[16].w[0] + 773u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0073(c, 141u, depth + 1u); else { c.pc = 0x002CF190u; return; } if (c.pc != 0x002C13A8u) [[unlikely]] return; }
L_002C13A8:
    c.f[12] = 0u;
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C13C0u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002C13C0u) [[unlikely]] return; }
L_002C13C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C13C8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 66u, depth + 1u); else { c.pc = 0x002D0680u; return; } if (c.pc != 0x002C13C8u) [[unlikely]] return; }
L_002C13C8:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C13D4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0047(c, 168u, depth + 1u); else { c.pc = 0x0021E520u; return; } if (c.pc != 0x002C13D4u) [[unlikely]] return; }
L_002C13D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    set32(c.r[4], c.r[16].w[0] + 704u);
    set32(c.r[6], 0u + 20u);
    st32((c.r[16].w[0] + 1068u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C13ECu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x002C13ECu) [[unlikely]] return; }
L_002C13EC:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 3u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002C141C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8391u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C1440; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1414u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0052(c, 173u, depth + 1u); else { c.pc = 0x0024A3C0u; return; } if (c.pc != 0x002C1414u) [[unlikely]] return; }
L_002C1414:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));  if (t) { goto L_002C1444; } }
L_002C141C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8391u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002C1438; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8440u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C1440; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002C1438:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1440u);  if (depth < kMaxDepth) unit_0052(c, 173u, depth + 1u); else { c.pc = 0x0024A3C0u; return; } if (c.pc != 0x002C1440u) [[unlikely]] return; }
L_002C1440:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.budget -= 1;
L_002C1444:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 28576u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1460u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C1460u) [[unlikely]] return; }
L_002C1460:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C1470:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 640u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002C14B0; } }
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[16].w[0] + 704u);
    set32(c.r[6], 0u + 20u);
    st8((c.r[16].w[0] + 532u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C14A4u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x002C14A4u) [[unlikely]] return; }
L_002C14A4:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 790u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 962u), static_cast<std::uint16_t>(0u));
    c.budget -= 3;
L_002C14B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[16].w[0] + 1068u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 704u));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C14C8u); st16((c.r[16].w[0] + 706u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0071(c, 18u, depth + 1u); else { c.pc = 0x002C4510u; return; } if (c.pc != 0x002C14C8u) [[unlikely]] return; }
L_002C14C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C14D0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 41u, depth + 1u); else { c.pc = 0x002D4610u; return; } if (c.pc != 0x002C14D0u) [[unlikely]] return; }
L_002C14D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C14D8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0070(c, 154u, depth + 1u); else { c.pc = 0x002C2070u; return; } if (c.pc != 0x002C14D8u) [[unlikely]] return; }
L_002C14D8:
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 739u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 4000u);
    st8((c.r[16].w[0] + 740u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 816u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 512u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C1550; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 891u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C1550; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[4], c.r[16].w[0] + 704u);
    set32(c.r[6], 0u + 20u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1524u); st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x002C1524u) [[unlikely]] return; }
L_002C1524:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8391u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C1550; } }
    c.f[3] = ld32((c.r[16].w[0] + 32u));
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = ld32((c.r[16].w[0] + 44u));
    st32((c.r[16].w[0] + 1776u), c.f[3]);
    st32((c.r[16].w[0] + 1780u), c.f[2]);
    st32((c.r[16].w[0] + 1784u), c.f[1]);
    st32((c.r[16].w[0] + 1788u), c.f[0]);
    c.budget -= 8;
L_002C1550:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 640u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C1590; } }
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[16].w[0] + 704u);
    set32(c.r[6], 0u + 20u);
    st8((c.r[16].w[0] + 532u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1584u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x002C1584u) [[unlikely]] return; }
L_002C1584:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 790u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 962u), static_cast<std::uint16_t>(0u));
    c.budget -= 3;
L_002C1590:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C15A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C15C0u); st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0070(c, 185u, depth + 1u); else { c.pc = 0x002C2B40u; return; } if (c.pc != 0x002C15C0u) [[unlikely]] return; }
L_002C15C0:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 739u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 740u), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 788u));
    set32(c.r[4], 0u + 4000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42200000u);
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
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002C1628; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8391u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002C1654; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 789u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C1650; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 790u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002C1650; } }
L_002C1628:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8391u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C1650; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8440u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C1650; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 789u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C1650; } }
    st8((c.r[16].w[0] + 790u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_002C1650:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002C1654:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C165Cu);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002C165Cu) [[unlikely]] return; }
L_002C165C:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 640u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C169C; } }
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[16].w[0] + 704u);
    set32(c.r[6], 0u + 20u);
    st8((c.r[16].w[0] + 532u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1690u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x002C1690u) [[unlikely]] return; }
L_002C1690:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 790u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 962u), static_cast<std::uint16_t>(0u));
    c.budget -= 3;
L_002C169C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C16B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 640u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002C16F0; } }
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[16].w[0] + 704u);
    set32(c.r[6], 0u + 20u);
    st8((c.r[16].w[0] + 532u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C16E4u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x002C16E4u) [[unlikely]] return; }
L_002C16E4:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 790u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 962u), static_cast<std::uint16_t>(0u));
    c.budget -= 3;
L_002C16F0:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    set32(c.r[2], 0u + 3u);
    st16((c.r[16].w[0] + 706u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002C1728; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8391u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C174C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1720u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 210u, depth + 1u); else { c.pc = 0x0024F570u; return; } if (c.pc != 0x002C1720u) [[unlikely]] return; }
L_002C1720:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 789u)));  if (t) { goto L_002C1750; } }
L_002C1728:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8391u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002C1744; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8440u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C174C; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002C1744:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C174Cu);  if (depth < kMaxDepth) unit_0053(c, 210u, depth + 1u); else { c.pc = 0x0024F570u; return; } if (c.pc != 0x002C174Cu) [[unlikely]] return; }
L_002C174C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 789u)));
    c.budget -= 1;
L_002C1750:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002C1764; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1760u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0071(c, 113u, depth + 1u); else { c.pc = 0x002C5920u; return; } if (c.pc != 0x002C1760u) [[unlikely]] return; }
L_002C1760:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002C1764:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C176Cu);  if (depth < kMaxDepth) unit_0075(c, 41u, depth + 1u); else { c.pc = 0x002D4610u; return; } if (c.pc != 0x002C176Cu) [[unlikely]] return; }
L_002C176C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1774u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0070(c, 154u, depth + 1u); else { c.pc = 0x002C2070u; return; } if (c.pc != 0x002C1774u) [[unlikely]] return; }
L_002C1774:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 640u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C17B4; } }
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[16].w[0] + 704u);
    set32(c.r[6], 0u + 20u);
    st8((c.r[16].w[0] + 532u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C17A8u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x002C17A8u) [[unlikely]] return; }
L_002C17A8:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 790u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 962u), static_cast<std::uint16_t>(0u));
    c.budget -= 3;
L_002C17B4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C17D0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 280u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[18], c.r[4], c.r[0]);  if (t) { goto L_002C195C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 641u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002C1814; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002C195C; } }
L_002C1814:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C185Cu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x002C185Cu) [[unlikely]] return; }
L_002C185C:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1868u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x002C1868u) [[unlikely]] return; }
L_002C1868:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 28448u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 78u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1890u); set32(c.r[4], c.r[2].w[0] + 80u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002C1890u) [[unlikely]] return; }
L_002C1890:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C189Cu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002C189Cu) [[unlikely]] return; }
L_002C189C:
    c.f[4] = ld32((c.r[16].w[0]));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C195C; } }
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
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C195C; } }
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[4]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C195C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D990000u);
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[0], c.f[1]);
    c.f[0] = c.f[1] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C195C; } }
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C195C; } }
    st8((c.r[18].w[0] + 280u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_002C195C:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 641u)));
    c.r[1].d[0] = c.r[4].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { c.r[2].d[0] = c.r[4].sd[0] < 6ll ? 1ull : 0ull;  goto L_002C1980; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 280u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C1C70; } }
    c.r[2].d[0] = c.r[4].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 1;
L_002C1980:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C1BF4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 6u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C1AF0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 29104u);
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
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C19FC; } }
    st32((c.r[18].w[0] + 52u), 0u);
    c.budget -= 1;
L_002C19FC:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1A2Cu); st32((c.r[5].w[0] + 12u), c.f[0]);  if (depth < kMaxDepth) unit_0045(c, 199u, depth + 1u); else { c.pc = 0x00217650u; return; } if (c.pc != 0x002C1A2Cu) [[unlikely]] return; }
L_002C1A2C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 148u), c.f[0]);
    c.budget -= 5;
L_002C1A40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1A48u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002C1A48u) [[unlikely]] return; }
L_002C1A48:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1A58u); set32(c.r[4], c.r[2].w[0] - 4096u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002C1A58u) [[unlikely]] return; }
L_002C1A58:
    mmi::paddub(c.r[19], c.r[0], c.r[0]);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
L_002C1A64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1A6Cu); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x002C1A6Cu) [[unlikely]] return; }
L_002C1A6C:
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1A7Cu); set32(c.r[6], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x002C1A7Cu) [[unlikely]] return; }
L_002C1A7C:
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1A8Cu); set32(c.r[6], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0046(c, 159u, depth + 1u); else { c.pc = 0x0021B030u; return; } if (c.pc != 0x002C1A8Cu) [[unlikely]] return; }
L_002C1A8C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_002C1AB4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1A9Cu); set32(c.r[4], 0u + 4096u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002C1A9Cu) [[unlikely]] return; }
L_002C1A9C:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 112u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C1A64u | kUnwind; return; } goto L_002C1A64; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 2;
L_002C1AB4:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 16u);  if (t) { goto L_002C1ADC; } }
    set32(c.r[2], c.r[16].w[0] + 4096u);
    c.r[16].d[0] = c.r[2].d[0] << 48;
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C1A40u | kUnwind; return; } goto L_002C1A40; } }
    set32(c.r[2], 0u + 16u);
    c.budget -= 2;
L_002C1ADC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_002C1AF0; } }
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    st32((c.r[18].w[0] + 84u), c.r[2].w[0]);
    c.budget -= 3;
L_002C1AF0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 760u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C1BF4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], c.r[2].w[0] - 28448u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 78u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 330u)));
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 7);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_002C1B68; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 6u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002C1BF4; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002C1BF4; } }
    st8((c.r[18].w[0] + 803u), static_cast<std::uint8_t>(0u));
    st8((c.r[18].w[0] + 274u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[18].w[0] + 1260u)));
    set32(c.r[3], 0u - 33u);
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[18].w[0] + 1260u), c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 760u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002C1BF4; } }
L_002C1B68:
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
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_002C1BD4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8384u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_002C1BF4; } }
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1BB0u); set32(c.r[5], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x002C1BB0u) [[unlikely]] return; }
L_002C1BB0:
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C1BF4; } }
L_002C1BD4:
    st8((c.r[18].w[0] + 803u), static_cast<std::uint8_t>(0u));
    st8((c.r[18].w[0] + 274u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[18].w[0] + 1260u)));
    set32(c.r[3], 0u - 33u);
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[18].w[0] + 1260u), c.r[3].w[0]);
    st8((c.r[18].w[0] + 760u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
L_002C1BF4:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (t) { goto L_002C1C68; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], 0u + 11u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 256u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002C1C64; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8391u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C1C64; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1844u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002C1C64; } }
    st32((c.r[18].w[0] + 52u), 0u);
    c.f[1] = ld32((c.r[18].w[0] + 36u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C1C64; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42D20000u);
    st32((c.r[18].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 2;
L_002C1C64:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 1;
L_002C1C68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1C70u);  if (depth < kMaxDepth) unit_0070(c, 154u, depth + 1u); else { c.pc = 0x002C2070u; return; } if (c.pc != 0x002C1C70u) [[unlikely]] return; }
L_002C1C70:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_002C1C90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 640u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002C1D0C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 641u)));
    c.r[2].d[0] = c.r[2].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C1D0C; } }
    c.r[2].d[0] = c.r[3].d[0] << 56;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8389u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002C1D0C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 648u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C1D0C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8391u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C1D0C; } }
    set32(c.r[2], 0u + 3u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1D04u); st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0070(c, 145u, depth + 1u); else { c.pc = 0x002C1DE0u; return; } if (c.pc != 0x002C1D04u) [[unlikely]] return; }
L_002C1D04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002C1DD0; } }
L_002C1D0C:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1D9Cu); st32((c.r[16].w[0] + 7804u), c.f[0]);  if (depth < kMaxDepth) unit_0070(c, 113u, depth + 1u); else { c.pc = 0x002C16B0u; return; } if (c.pc != 0x002C1D9Cu) [[unlikely]] return; }
L_002C1D9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1DA4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 235u, depth + 1u); else { c.pc = 0x002CFB80u; return; } if (c.pc != 0x002C1DA4u) [[unlikely]] return; }
L_002C1DA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1DACu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 153u, depth + 1u); else { c.pc = 0x002CF340u; return; } if (c.pc != 0x002C1DACu) [[unlikely]] return; }
L_002C1DAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1DB4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 47u, depth + 1u); else { c.pc = 0x002D47F0u; return; } if (c.pc != 0x002C1DB4u) [[unlikely]] return; }
L_002C1DB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1DBCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 316u, depth + 1u); else { c.pc = 0x0026FC50u; return; } if (c.pc != 0x002C1DBCu) [[unlikely]] return; }
L_002C1DBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1DC4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005D(c, 709u, depth + 1u); else { c.pc = 0x00276490u; return; } if (c.pc != 0x002C1DC4u) [[unlikely]] return; }
L_002C1DC4:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 3;
L_002C1DD0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C1DE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 640u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C1E44; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 641u)));
    c.r[3].d[0] = c.r[3].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[4].d[0] << 56;  if (t) { goto L_002C2060; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8389u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002C2060; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 648u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C2060; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8391u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C1E44; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002C2064; } }
L_002C1E44:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 95u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002C203C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8391u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C1F18; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002C1F18; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_002C1EB8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 529u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C1EA0; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 531u));
    set32(c.r[3], c.r[2].w[0] + c.r[6].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 384u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 384u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002C1ED8; } }
L_002C1EA0:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 531u));
    set32(c.r[3], c.r[2].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 326u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 326u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002C1ED8; } }
L_002C1EB8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 529u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002C1EDC; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 531u));
    set32(c.r[3], c.r[2].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 326u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[3].w[0] + 326u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
L_002C1ED8:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002C1EDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1EE4u);  if (depth < kMaxDepth) unit_0081(c, 9u, depth + 1u); else { c.pc = 0x00304280u; return; } if (c.pc != 0x002C1EE4u) [[unlikely]] return; }
L_002C1EE4:
    set32(c.r[6], 0u + 8384u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1EF4u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x002C1EF4u) [[unlikely]] return; }
L_002C1EF4:
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u - 1u);  if (t) { goto L_002C1F0C; } }
    st8((c.r[16].w[0] + 8438u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_002C1F0C:
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002C2060; } }
L_002C1F18:
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_002C1F7C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 29658u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);  if (t) { goto L_002C1F78; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1F48u); st8((c.r[1].w[0] + 29658u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0016(c, 116u, depth + 1u); else { c.pc = 0x0015AB20u; return; } if (c.pc != 0x002C1F48u) [[unlikely]] return; }
L_002C1F48:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_002C1F60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1F58u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 274u, depth + 1u); else { c.pc = 0x002D7E50u; return; } if (c.pc != 0x002C1F58u) [[unlikely]] return; }
L_002C1F58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));  if (t) { goto L_002C1F94; } }
L_002C1F60:
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u - 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 739u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 891u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002C1F90; } }
L_002C1F78:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_002C1F7C:
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u - 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 739u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 891u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
L_002C1F90:
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    c.budget -= 1;
L_002C1F94:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 6u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[6].d[0];  if (t) { goto L_002C2060; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 640u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C2060; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002C2060; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 260u)));
    c.r[3].d[0] = c.r[3].d[0] & 7ull;
    c.r[3].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[6].w[0] + c.r[5].w[0]);  if (t) { goto L_002C2014; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8389u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C2010; } }
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 692u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C2060; } }
    set32(c.r[2], 0u + 3u);
    st8((c.r[5].w[0] + 701u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 13u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2008u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 45u, depth + 1u); else { c.pc = 0x00198720u; return; } if (c.pc != 0x002C2008u) [[unlikely]] return; }
L_002C2008:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C2060; } }
L_002C2010:
    set32(c.r[3], c.r[6].w[0] + c.r[5].w[0]);
    c.budget -= 1;
L_002C2014:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 688u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C2060; } }
    set32(c.r[2], 0u + 3u);
    st8((c.r[5].w[0] + 700u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 13u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2034u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x002C2034u) [[unlikely]] return; }
L_002C2034:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C2060; } }
L_002C203C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2044u);  if (depth < kMaxDepth) unit_0081(c, 9u, depth + 1u); else { c.pc = 0x00304280u; return; } if (c.pc != 0x002C2044u) [[unlikely]] return; }
L_002C2044:
    set32(c.r[6], 0u + 8384u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2054u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x002C2054u) [[unlikely]] return; }
L_002C2054:
    set32(c.r[3], 0u - 1u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_002C2060:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002C2064:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C2070:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2084u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 192u, depth + 1u); else { c.pc = 0x002D6630u; return; } if (c.pc != 0x002C2084u) [[unlikely]] return; }
L_002C2084:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C208Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0070(c, 169u, depth + 1u); else { c.pc = 0x002C2230u; return; } if (c.pc != 0x002C208Cu) [[unlikely]] return; }
L_002C208C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2094u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0071(c, 144u, depth + 1u); else { c.pc = 0x002C6040u; return; } if (c.pc != 0x002C2094u) [[unlikely]] return; }
L_002C2094:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 28864u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C20B4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C20B4u) [[unlikely]] return; }
L_002C20B4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 811u)));
    c.r[1].d[0] = c.r[2].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002C20E8; } }
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 31248u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C20E0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C20E0u) [[unlikely]] return; }
L_002C20E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 810u)));  if (t) { goto L_002C2118; } }
L_002C20E8:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[3], c.r[3].w[0] + 28768u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] - 192u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2114u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C2114u) [[unlikely]] return; }
L_002C2114:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 810u)));
    c.budget -= 1;
L_002C2118:
    set32(c.r[2], 0u - 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002C2180; } }
L_002C2124:
    c.r[1].d[0] = c.r[3].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002C2154; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 31056u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C214Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C214Cu) [[unlikely]] return; }
L_002C214C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 804u)));  if (t) { goto L_002C2184; } }
L_002C2154:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[3], c.r[3].w[0] + 28672u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] - 192u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2180u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C2180u) [[unlikely]] return; }
L_002C2180:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 804u)));
    c.budget -= 1;
L_002C2184:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C21F0; } }
    st8((c.r[16].w[0] + 804u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 811u)));
    c.r[1].d[0] = c.r[2].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002C21C4; } }
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 31248u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C21BCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C21BCu) [[unlikely]] return; }
L_002C21BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));  if (t) { goto L_002C21F4; } }
L_002C21C4:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[3], c.r[3].w[0] + 28768u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] - 192u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C21F0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C21F0u) [[unlikely]] return; }
L_002C21F0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.budget -= 1;
L_002C21F4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 28960u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2210u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C2210u) [[unlikely]] return; }
L_002C2210:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2218u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 193u, depth + 1u); else { c.pc = 0x002D6AB0u; return; } if (c.pc != 0x002C2218u) [[unlikely]] return; }
L_002C2218:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2220u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 160u, depth + 1u); else { c.pc = 0x002DDAF0u; return; } if (c.pc != 0x002C2220u) [[unlikely]] return; }
L_002C2220:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C2230:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 764u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002C22F8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_002C2278; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8432u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002C2310; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C2310; } }
L_002C2278:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 834u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[2].w[0] - 1u);  goto L_002C22F0; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C22AC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8432u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002C22C0; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C22C0; } }
L_002C22AC:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 816u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 830u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 816u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_002C22D0; } }
L_002C22C0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 816u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 832u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st16((c.r[16].w[0] + 816u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_002C22D0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 816u)));
    c.r[1].d[0] = c.r[2].sd[0] < 4001ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002C2310; } }
    set32(c.r[2], 0u + 4000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 816u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_002C2310; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 1;
L_002C22F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 834u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_002C2310; } }
L_002C22F8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C2310; } }
    set32(c.r[2], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 764u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002C2310:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 274u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C23C8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 278u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C236C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C236C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[2], 0u + 18u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[6], 0u + 3u);  if (t) { goto L_002C2360; } }
    set32(c.r[5], 0u + 8u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2354u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 25u, depth + 1u); else { c.pc = 0x00198370u; return; } if (c.pc != 0x002C2354u) [[unlikely]] return; }
L_002C2354:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 274u)));  if (t) { goto L_002C2370; } }
    set32(c.r[6], 0u + 3u);
    c.budget -= 1;
L_002C2360:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C236Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 25u, depth + 1u); else { c.pc = 0x00198370u; return; } if (c.pc != 0x002C236Cu) [[unlikely]] return; }
L_002C236C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 274u)));
    c.budget -= 1;
L_002C2370:
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[16].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C240C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[2], 0u + 18u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[6], 0u + 3u);  if (t) { goto L_002C23B4; } }
    set32(c.r[5], 0u + 8u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C23A8u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 29u, depth + 1u); else { c.pc = 0x00198460u; return; } if (c.pc != 0x002C23A8u) [[unlikely]] return; }
L_002C23A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 274u)));  if (t) { goto L_002C2410; } }
    set32(c.r[6], 0u + 3u);
    c.budget -= 1;
L_002C23B4:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C23C0u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 29u, depth + 1u); else { c.pc = 0x00198460u; return; } if (c.pc != 0x002C23C0u) [[unlikely]] return; }
L_002C23C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C240C; } }
L_002C23C8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 278u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C240C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[2], 0u + 18u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[6], 0u + 3u);  if (t) { goto L_002C2400; } }
    set32(c.r[5], 0u + 8u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C23F4u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 29u, depth + 1u); else { c.pc = 0x00198460u; return; } if (c.pc != 0x002C23F4u) [[unlikely]] return; }
L_002C23F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C240C; } }
    set32(c.r[6], 0u + 3u);
    c.budget -= 1;
L_002C2400:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C240Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 29u, depth + 1u); else { c.pc = 0x00198460u; return; } if (c.pc != 0x002C240Cu) [[unlikely]] return; }
L_002C240C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 274u)));
    c.budget -= 1;
L_002C2410:
    st8((c.r[16].w[0] + 278u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 744u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C2428; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[16].w[0] + 744u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002C2428:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 780u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C243C; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[16].w[0] + 780u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002C243C:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 784u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C246C; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[16].w[0] + 784u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C246C; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    set32(c.r[2], 0u - 4u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st16((c.r[16].w[0] + 812u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_002C246C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 783u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C2480; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[16].w[0] + 783u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002C2480:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 538u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C2498; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 538u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002C249C; } }
L_002C2498:
    st16((c.r[16].w[0] + 536u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_002C249C:
    c.f[1] = ld32((c.r[16].w[0] + 1052u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C24C4; } }
    c.f[0] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 1052u), c.f[0]);
    c.budget -= 3;
L_002C24C4:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 838u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002C24F4; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0] + 838u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C24F0; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 840u)));
    st16((c.r[16].w[0] + 842u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002C24F0:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002C24F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C24FCu);  if (depth < kMaxDepth) unit_0077(c, 65u, depth + 1u); else { c.pc = 0x002DC880u; return; } if (c.pc != 0x002C24FCu) [[unlikely]] return; }
L_002C24FC:
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u + 2u);
    c.f[1] = 0u;
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002C2584; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 1024ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C2584; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 616u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C2584; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002C2584; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8386u)));
    set32(c.r[3], 0u + 40u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002C2584; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8391u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C2584; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1865u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C2584; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1844u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002C2584; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    c.budget -= 2;
L_002C2584:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C2778; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 891u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C2778; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 789u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C2778; } }
    set32(c.r[5], c.r[29].w[0] + 44u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C25C0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 88u, depth + 1u); else { c.pc = 0x002DCED0u; return; } if (c.pc != 0x002C25C0u) [[unlikely]] return; }
L_002C25C0:
    st8((c.r[16].w[0] + 802u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 802u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C2778; } }
    c.f[1] = ld32((c.r[29].w[0] + 44u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C2778; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8391u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C260C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1844u)));
    c.r[1].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002C2778; } }
L_002C260C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 12288ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_002C262C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 789u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002C2638; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_002C262C:
    st8((c.r[16].w[0] + 789u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[16].w[0] + 1068u), c.r[3].w[0]);
    c.budget -= 3;
L_002C2638:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    set32(c.r[3], 0u + 3u);
    c.r[4].d[0] = c.r[4].d[0] & 3ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002C26E0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 10u);  if (t) { goto L_002C26B0; } }
    set32(c.r[2], 0u + 30u);
    c.f[0] = 0u;
    st8((c.r[16].w[0] + 744u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[1] = ld32((c.r[16].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    st32((c.r[16].w[0] + 104u), c.f[1]);
    st32((c.r[16].w[0] + 108u), 0u);
    c.f[1] = ld32((c.r[16].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 15;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002C269C; } }
    st32((c.r[16].w[0] + 52u), 0u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 2;
L_002C269C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C26A4u);  if (depth < kMaxDepth) unit_0076(c, 72u, depth + 1u); else { c.pc = 0x002D9110u; return; } if (c.pc != 0x002C26A4u) [[unlikely]] return; }
L_002C26A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));  if (t) { goto L_002C26C4; } }
    set32(c.r[5], 0u + 10u);
    c.budget -= 1;
L_002C26B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C26B8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002C26B8u) [[unlikely]] return; }
L_002C26B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C26C0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x002C26C0u) [[unlikely]] return; }
L_002C26C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.budget -= 1;
L_002C26C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 31440u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C26E0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C26E0u) [[unlikely]] return; }
L_002C26E0:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 784u));
    c.r[1].d[0] = c.r[3].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002C26F8; } }
    set32(c.r[3], 0u + 10u);
    st8((c.r[16].w[0] + 784u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002C26F8:
    st8((c.r[16].w[0] + 766u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 888u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], 0u + 1u);
    st8((c.r[16].w[0] + 889u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 790u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_002C2778; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002C2778; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 6u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002C2778; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8389u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 692u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C275C; } }
    set32(c.r[3], 0u + 4u);
    st8((c.r[4].w[0] + 701u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002C275C:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 640u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C2778; } }
    set32(c.r[5], 0u + 9u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2778u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 45u, depth + 1u); else { c.pc = 0x00198720u; return; } if (c.pc != 0x002C2778u) [[unlikely]] return; }
L_002C2778:
    c.f[2] = ld32((c.r[16].w[0] + 1068u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C27C0; } }
    c.f[0] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 1068u), c.f[0]);  if (t) { goto L_002C27B8; } }
    st8((c.r[16].w[0] + 532u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1068u), 0u);  if (t) { goto L_002C27C0; } }
L_002C27B8:
    set32(c.r[3], 0u + 128u);
    st8((c.r[16].w[0] + 532u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002C27C0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C2844; } }
    c.f[2] = ld32((c.r[16].w[0] + 1240u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C280C; } }
    c.f[0] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 1240u), c.f[0]);  if (t) { goto L_002C280C; } }
    st32((c.r[16].w[0] + 1240u), 0u);
    st8((c.r[16].w[0] + 800u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_002C280C:
    c.f[2] = ld32((c.r[16].w[0] + 1244u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C2844; } }
    c.f[0] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 1244u), c.f[0]);  if (t) { goto L_002C2844; } }
    st32((c.r[16].w[0] + 1244u), 0u);
    c.budget -= 1;
L_002C2844:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1601u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C2858; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 1601u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002C2858:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C2870:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], c.r[3].w[0] + 4544u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[3].w[0] + 6960u);
    set32(c.r[6], c.r[6].w[0] << 3);
    set32(c.r[6], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 2u)));
    st16((c.r[4].w[0] + 842u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[4].w[0] + 840u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 4u)));
    st16((c.r[4].w[0] + 844u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 6u)));
    st8((c.r[4].w[0] + 518u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[4].w[0] + 8008u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    st32((c.r[4].w[0] + 8024u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    st32((c.r[4].w[0] + 8028u), c.f[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 95u)));
    c.budget -= 32;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002C2944; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u + 2u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_002C2914; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C290Cu);  if (depth < kMaxDepth) unit_0014(c, 148u, depth + 1u); else { c.pc = 0x00152CB0u; return; } if (c.pc != 0x002C290Cu) [[unlikely]] return; }
L_002C290C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));  if (t) { goto L_002C2948; } }
L_002C2914:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[4], c.r[3].w[0] + 4928u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8391u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    st16((c.r[16].w[0] + 516u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 514u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 512u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 12;
L_002C2944:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.budget -= 1;
L_002C2948:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[3].d[0]; c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8387u)));  if (t) { goto L_002C2968; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8388u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002C2968; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 1;
L_002C2968:
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], c.r[6].w[0] << 2);  if (t) { goto L_002C29B8; } }
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8437u)));
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[3].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[3], c.r[3].w[0] - 15728u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);  if (t) { goto L_002C29D8; } }
    set32(c.r[3], c.r[6].w[0] << 2);
    c.budget -= 1;
L_002C29B8:
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[3].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[3].w[0] + 5616u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0])));
    c.budget -= 8;
L_002C29D8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    set32(c.r[5], 0u + 3u);
    st16((c.r[16].w[0] + 1576u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 2u)));
    st16((c.r[16].w[0] + 1582u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 1580u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 1578u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 4u)));
    st16((c.r[16].w[0] + 1584u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 1586u), static_cast<std::uint16_t>(0u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 6u)));
    st16((c.r[16].w[0] + 1588u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 8u)));
    st16((c.r[16].w[0] + 1594u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 1592u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 1590u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 10u)));
    st16((c.r[16].w[0] + 1596u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 1598u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 23;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_002C2A70; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 25608u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_002C2A68; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002C2A58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C2A70; } }
L_002C2A58:
    st16((c.r[16].w[0] + 1588u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1576u), static_cast<std::uint16_t>(c.r[5].w[0]));  if (t) { goto L_002C2A70; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_002C2A68:
    st16((c.r[16].w[0] + 1588u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 1576u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002C2A70:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[4], c.r[3].w[0] - 27808u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[7], c.r[3].w[0] - 27804u);
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[6], c.r[3].w[0] + 6192u);
    st32((c.r[16].w[0] + 256u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], c.r[3].w[0] + 11200u);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[4], c.r[3].w[0] + 11200u);
    set32(c.r[3], c.r[8].w[0] << 3);
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[16].w[0] + 260u), c.f[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8387u)));
    set32(c.r[7], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[16].w[0] + 8408u), c.f[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8387u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[3].w[0] << 3);
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[16].w[0] + 1604u), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8387u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    st32((c.r[16].w[0] + 1608u), c.f[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 52;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C2B40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[2].w[0] + 784u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[2].w[0] + 2000u);
    set32(c.r[6], c.r[6].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[4].w[0] + 1060u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    st32((c.r[4].w[0] + 1064u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[4].w[0] + 992u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[4].w[0] + 996u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[4].w[0] + 1000u), c.f[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 368u)));
    c.budget -= 28;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002C2BCC; } }
    c.f[0] = ld32((c.r[16].w[0] + 1000u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3ECC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 1000u), c.f[0]);
    c.budget -= 7;
L_002C2BCC:
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
L_002C2C64:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[2].d[0] = c.r[8].sd[0] < 9ll ? 1ull : 0ull;
    st16((c.r[9].w[0] + 856u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[6], c.r[6].w[0] + 2u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[9], c.r[9].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C2C64u | kUnwind; return; } goto L_002C2C64; } }
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
L_002C2CB8:
    c.f[0] = ld32((c.r[3].w[0]));
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[2].d[0] = c.r[7].sd[0] < 8ll ? 1ull : 0ull;
    st32((c.r[6].w[0] + 1072u), c.f[0]);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C2CB8u | kUnwind; return; } goto L_002C2CB8; } }
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
L_002C2D10:
    c.f[0] = ld32((c.r[3].w[0]));
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[2].d[0] = c.r[7].sd[0] < 8ll ? 1ull : 0ull;
    st32((c.r[6].w[0] + 1104u), c.f[0]);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C2D10u | kUnwind; return; } goto L_002C2D10; } }
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
L_002C2D6C:
    c.f[0] = ld32((c.r[3].w[0]));
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[2].d[0] = c.r[8].sd[0] < 3ll ? 1ull : 0ull;
    st32((c.r[7].w[0] + 1024u), c.f[0]);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C2D6Cu | kUnwind; return; } goto L_002C2D6C; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002C2DD8; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8437u)));
    set32(c.r[2], c.r[2].w[0] - 23360u);
    set32(c.r[6], c.r[7].w[0] << 4);
    set32(c.r[7], c.r[6].w[0] - c.r[7].w[0]);
    set32(c.r[6], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] - c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[6], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[2].w[0] + c.r[6].w[0]);  if (t) { goto L_002C2DF4; } }
L_002C2DD8:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[2].w[0] + 3248u);
    set32(c.r[3], c.r[6].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[8], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
L_002C2DF4:
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[6], c.r[2].w[0] + 9168u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[2].w[0] + 3840u);
    st16((c.r[16].w[0] + 818u), static_cast<std::uint16_t>(c.r[7].w[0]));
    st16((c.r[16].w[0] + 816u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0] + 2u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.f[1] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47800000u);
    c.f[2] = c.r[2].w[0];
    st16((c.r[16].w[0] + 830u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0] + 4u)));
    st16((c.r[16].w[0] + 832u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0] + 6u)));
    st16((c.r[16].w[0] + 836u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0] + 8u)));
    st16((c.r[16].w[0] + 820u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0] + 10u)));
    st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0] + 12u)));
    st16((c.r[16].w[0] + 824u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0] + 14u)));
    st16((c.r[16].w[0] + 826u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0] + 16u)));
    st16((c.r[16].w[0] + 828u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[16].w[0] + 1148u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[16].w[0] + 1152u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[17], c.r[3].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[17].w[0]));
    st32((c.r[16].w[0] + 1248u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    st32((c.r[16].w[0] + 1252u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.budget -= 47;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2EB0u); c.f[12] = fp::mul(c.f[2], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002C2EB0u) [[unlikely]] return; }
L_002C2EB0:
    st16((c.r[16].w[0] + 1256u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[1] = ld32((c.r[17].w[0] + 12u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.f[2] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47800000u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 1u, c.f[1], c.f[2]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2EE0u); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002C2EE0u) [[unlikely]] return; }
L_002C2EE0:
    st16((c.r[16].w[0] + 1258u), static_cast<std::uint16_t>(c.r[2].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C2F00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.f[0] = ld32((c.r[1].w[0] - 2528u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[5], c.r[2].w[0] + 6768u);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    st32((c.r[4].w[0] + 1060u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.f[0] = ld32((c.r[1].w[0] - 2524u));
    mmi::paddub(c.r[7], c.r[16], c.r[0]);
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
    c.budget -= 42;
L_002C2FA8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < 9ll ? 1ull : 0ull;
    st16((c.r[7].w[0] + 856u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[5], c.r[5].w[0] + 2u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C2FA8u | kUnwind; return; } goto L_002C2FA8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.f[0] = ld32((c.r[1].w[0] - 2512u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], c.r[2].w[0] + 6800u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    st32((c.r[16].w[0] + 1136u), c.f[0]);
    c.budget -= 7;
L_002C2FE0:
    c.f[0] = ld32((c.r[3].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < 8ll ? 1ull : 0ull;
    st32((c.r[4].w[0] + 1072u), c.f[0]);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C2FE0u | kUnwind; return; } goto L_002C2FE0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.f[0] = ld32((c.r[1].w[0] - 2508u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[4], c.r[2].w[0] + 6832u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    mmi::paddub(c.r[3], c.r[16], c.r[0]);
    st32((c.r[16].w[0] + 1140u), c.f[0]);
    c.budget -= 7;
L_002C3018:
    c.f[0] = ld32((c.r[4].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < 8ll ? 1ull : 0ull;
    st32((c.r[3].w[0] + 1104u), c.f[0]);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C3018u | kUnwind; return; } goto L_002C3018; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[4], c.r[2].w[0] + 6864u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    mmi::paddub(c.r[3], c.r[16], c.r[0]);
    c.budget -= 4;
L_002C3044:
    c.f[0] = ld32((c.r[4].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < 3ll ? 1ull : 0ull;
    st32((c.r[3].w[0] + 1024u), c.f[0]);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C3044u | kUnwind; return; } goto L_002C3044; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 6720u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], c.r[2].w[0] + 9168u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[2].w[0] - 384u);
    st16((c.r[16].w[0] + 818u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st16((c.r[16].w[0] + 816u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 6722u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], 0u + 2u);
    st16((c.r[16].w[0] + 830u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 6724u)));
    st16((c.r[16].w[0] + 832u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 6726u)));
    st16((c.r[16].w[0] + 836u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 6728u)));
    st16((c.r[16].w[0] + 820u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 6730u)));
    st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 6732u)));
    st16((c.r[16].w[0] + 824u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 6734u)));
    st16((c.r[16].w[0] + 826u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 6736u)));
    st16((c.r[16].w[0] + 828u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[6], c.r[6].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[16].w[0] + 1148u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[16].w[0] + 1152u), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[16].w[0] + 1144u), c.f[0]);
    st8((c.r[16].w[0] + 790u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 51;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002C313C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3134u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0014(c, 143u, depth + 1u); else { c.pc = 0x001529F0u; return; } if (c.pc != 0x002C3134u) [[unlikely]] return; }
L_002C3134:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 884u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002C32CC; } }
L_002C313C:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 95u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C32C8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8391u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C3160; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_002C32C8; } }
L_002C3160:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 801u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002C32A0; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 801u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], c.r[2].w[0] - 7232u);
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
    c.budget -= 57;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[2].w[0] << 8);  goto L_002C3284; }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.f[2] = ld32((c.r[1].w[0] - 21936u));
    c.f[3] = ld32((c.r[16].w[0] + 32u));
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.f[0] = ld32((c.r[1].w[0] - 21928u));
    c.f[12] = fp::sub(c.f[2], c.f[3]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3274u); c.f[13] = fp::sub(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x002C3274u) [[unlikely]] return; }
L_002C3274:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 84u), c.r[2].w[0]);  if (t) { goto L_002C3288; } }
    set32(c.r[2], c.r[2].w[0] << 8);
    c.budget -= 1;
L_002C3284:
    st32((c.r[16].w[0] + 84u), c.r[2].w[0]);
    c.budget -= 1;
L_002C3288:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3294u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_003C(c, 229u, depth + 1u); else { c.pc = 0x001F3280u; return; } if (c.pc != 0x002C3294u) [[unlikely]] return; }
L_002C3294:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C32C8; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002C32A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C32A8u);  if (depth < kMaxDepth) unit_0070(c, 204u, depth + 1u); else { c.pc = 0x002C3370u; return; } if (c.pc != 0x002C32A8u) [[unlikely]] return; }
L_002C32A8:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], 0u + 11u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 256u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002C32C8; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C32C8u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_003C(c, 229u, depth + 1u); else { c.pc = 0x001F3280u; return; } if (c.pc != 0x002C32C8u) [[unlikely]] return; }
L_002C32C8:
    st8((c.r[16].w[0] + 884u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_002C32CC:
    st8((c.r[16].w[0] + 885u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 891u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 880u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 882u), static_cast<std::uint16_t>(0u));
    c.f[20] = ld32((c.r[16].w[0] + 36u));
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C32ECu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0045(c, 199u, depth + 1u); else { c.pc = 0x00217650u; return; } if (c.pc != 0x002C32ECu) [[unlikely]] return; }
L_002C32EC:
    st32((c.r[16].w[0] + 36u), c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[20]);
    set32(c.r[3], 0u + 2u);
    st32((c.r[16].w[0] + 36u), c.f[0]);
    st32((c.r[16].w[0] + 104u), 0u);
    st32((c.r[16].w[0] + 1004u), 0u);
    st32((c.r[16].w[0] + 48u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 56u), 0u);
    st32((c.r[16].w[0] + 108u), 0u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 890u)));
    c.budget -= 13;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[5], c.r[16].w[0] + 1192u);  if (t) { goto L_002C3344; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0xC0600000u);  if (t) { goto L_002C3338; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_002C3354; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC0600000u);
    c.budget -= 1;
L_002C3338:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_002C3350; } }
    set32(c.r[5], c.r[16].w[0] + 1192u);
    c.budget -= 1;
L_002C3344:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C334Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 88u, depth + 1u); else { c.pc = 0x002DCED0u; return; } if (c.pc != 0x002C334Cu) [[unlikely]] return; }
L_002C334C:
    st32((c.r[16].w[0] + 1196u), 0u);
    c.budget -= 1;
L_002C3350:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002C3354:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C3370:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00860000u);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    set32(c.r[6], 0u + 32767u);
    set32(c.r[7], c.r[2].w[0] + 26144u);
    st32((c.r[29].w[0]), c.f[20]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[3], 0u + 1u);
    c.budget -= 18;
L_002C33B8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_002C340C; }
    c.r[4].d[0] = ld8((c.r[18].w[0] + 531u));
    c.r[2].d[0] = ld8((c.r[7].w[0] + 531u));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_002C3408; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[7].d[0];  if (t) { goto L_002C3408; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 514u)));
    c.r[2].d[0] = c.r[6].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C3408; } }
    c.r[6].d[0] = c.r[4].d[0] << 48;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    mmi::paddub(c.r[16], c.r[7], c.r[0]);
    mmi::paddub(c.r[17], c.r[3], c.r[0]);
    c.budget -= 5;
L_002C3408:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_002C340C:
    c.r[2].d[0] = c.r[5].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 8448u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C33B8u | kUnwind; return; } goto L_002C33B8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], 0u + 11u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 256u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[17].d[0] << 56;  if (t) { goto L_002C3658; } }
    c.r[2].d[0] = c.r[17].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] << 56;  if (t) { goto L_002C3574; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3444u);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x002C3444u) [[unlikely]] return; }
L_002C3444:
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    c.r[6].d[0] = c.r[2].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[3], c.r[2].w[0] + 29120u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43F40000u);
    c.f[2] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44B50000u);
    c.f[3] = c.r[2].w[0];
    c.budget -= 10;
L_002C346C:
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].d[0] = c.r[6].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 515u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[6].d[0] << 56;  if (t) { goto L_002C34A4; } }
    set32(c.r[2], c.r[6].w[0] + 1u);
    c.r[6].d[0] = c.r[2].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.r[2].d[0] = c.r[6].d[0] & 7ull;
    c.r[6].d[0] = c.r[2].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.r[2].d[0] = c.r[6].d[0] << 56;
    c.budget -= 8;
L_002C34A4:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 40u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 32u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 16;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], c.r[6].w[0] + 1u);  if (t) { goto L_002C351C; } }
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[3]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C3518; } }
    c.f[0] = ld32((c.r[18].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C3518; } }
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[3]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C3544; } }
L_002C3518:
    set32(c.r[2], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_002C351C:
    c.r[6].d[0] = c.r[2].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.r[2].d[0] = c.r[6].d[0] & 7ull;
    c.r[6].d[0] = c.r[2].d[0] << 56;
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C346Cu | kUnwind; return; } goto L_002C346C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[17], c.r[0], c.r[0]);  if (t) { goto L_002C3570; } }
L_002C3544:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 515u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.f[3] = ld32((c.r[16].w[0] + 32u));
    c.f[2] = ld32((c.r[18].w[0] + 32u));
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = ld32((c.r[18].w[0] + 40u));
    c.f[12] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3568u); c.f[13] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x002C3568u) [[unlikely]] return; }
L_002C3568:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    st32((c.r[18].w[0] + 84u), c.r[2].w[0]);
    c.budget -= 2;
L_002C3570:
    c.r[2].d[0] = c.r[17].d[0] << 56;
    c.budget -= 1;
L_002C3574:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (t) { goto L_002C3638; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3588u);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x002C3588u) [[unlikely]] return; }
L_002C3588:
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    c.r[3].d[0] = c.r[2].d[0] << 56;
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 515u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[2].d[0] = c.r[3].d[0] << 56;  if (t) { goto L_002C35C0; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[2].d[0] = c.r[3].d[0] & 7ull;
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[2].d[0] = c.r[3].d[0] << 56;
    c.budget -= 7;
L_002C35C0:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[3], c.r[2].w[0] << 3);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 29120u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.f[0] = ld32((c.r[1].w[0] - 21936u));
    c.f[1] = ld32((c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    set32(c.r[2], c.r[2].w[0] + 29124u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 32u), c.f[0]);
    c.f[1] = ld32((c.r[1].w[0] - 21928u));
    c.f[0] = ld32((c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 40u), c.f[0]);
    c.f[2] = ld32((c.r[1].w[0] - 21936u));
    c.f[3] = ld32((c.r[18].w[0] + 32u));
    c.f[1] = ld32((c.r[18].w[0] + 40u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.f[0] = ld32((c.r[1].w[0] - 21928u));
    c.f[12] = fp::sub(c.f[2], c.f[3]);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C362Cu); c.f[13] = fp::sub(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x002C362Cu) [[unlikely]] return; }
L_002C362C:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    st32((c.r[18].w[0] + 84u), c.r[2].w[0]);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
L_002C3638:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3640u);  if (depth < kMaxDepth) unit_0070(c, 217u, depth + 1u); else { c.pc = 0x002C37A0u; return; } if (c.pc != 0x002C3640u) [[unlikely]] return; }
L_002C3640:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    st32((c.r[18].w[0] + 36u), c.r[3].w[0]);
    set32(c.r[3], 0u + 3u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 890u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002C376C; } }
    c.r[2].d[0] = c.r[17].d[0] << 56;
    c.budget -= 1;
L_002C3658:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x44720000u);  if (t) { goto L_002C3724; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.f[24] = ld32((c.r[1].w[0] + 29184u));
    c.f[1] = ld32((c.r[16].w[0] + 32u));
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.f[20] = ld32((c.r[1].w[0] + 29188u));
    c.f[1] = fp::sub(c.f[1], c.f[24]);
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.f[0] = fp::sub(c.f[0], c.f[20]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3690u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002C3690u) [[unlikely]] return; }
L_002C3690:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[19], 0u + 1u);
    c.f[23] = c.f[0];
    set32(c.r[17], c.r[2].w[0] + 29192u);
    c.budget -= 4;
L_002C36A0:
    c.f[21] = ld32((c.r[17].w[0]));
    c.f[1] = ld32((c.r[16].w[0] + 32u));
    c.f[22] = ld32((c.r[17].w[0] + 4u));
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.f[1] = fp::sub(c.f[1], c.f[21]);
    c.f[0] = fp::sub(c.f[0], c.f[22]);
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C36C4u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002C36C4u) [[unlikely]] return; }
L_002C36C4:
    fpu_compare(c, fp::key(c.f[23]) <= fp::key(c.f[0]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_002C36E4; }
    c.f[23] = c.f[0];
    c.f[24] = c.f[21];
    c.f[20] = c.f[22];
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 4;
L_002C36E4:
    c.r[2].d[0] = c.r[19].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C36A0u | kUnwind; return; } goto L_002C36A0; } }
    st32((c.r[18].w[0] + 32u), c.f[24]);
    st32((c.r[18].w[0] + 40u), c.f[20]);
    c.f[3] = ld32((c.r[16].w[0] + 32u));
    c.f[2] = ld32((c.r[18].w[0] + 32u));
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = ld32((c.r[18].w[0] + 40u));
    c.f[12] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3714u); c.f[13] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x002C3714u) [[unlikely]] return; }
L_002C3714:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 84u), c.r[3].w[0]);  if (t) { goto L_002C375C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44720000u);
    c.budget -= 1;
L_002C3724:
    st32((c.r[18].w[0] + 32u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44390000u);
    st32((c.r[18].w[0] + 40u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.f[2] = ld32((c.r[1].w[0] - 21936u));
    c.f[3] = ld32((c.r[18].w[0] + 32u));
    c.f[1] = ld32((c.r[18].w[0] + 40u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.f[0] = ld32((c.r[1].w[0] - 21928u));
    c.f[12] = fp::sub(c.f[2], c.f[3]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3754u); c.f[13] = fp::sub(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x002C3754u) [[unlikely]] return; }
L_002C3754:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    st32((c.r[18].w[0] + 84u), c.r[3].w[0]);
    c.budget -= 2;
L_002C375C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43660000u);
    st32((c.r[18].w[0] + 36u), c.r[3].w[0]);
    set32(c.r[3], 0u + 3u);
    st8((c.r[18].w[0] + 890u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_002C376C:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002C37A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[3], 0u + 10u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 256u)));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { [[clang::musttail]] return unit_0071(c, 10u, depth); } }
    set32(c.r[3], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { [[clang::musttail]] return unit_0071(c, 6u, depth); } }
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002C3D04; } }
    set32(c.r[3], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002C3C6C; } }
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002C3A20; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002C38FC; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002C3818; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { [[clang::musttail]] return unit_0071(c, 16u, depth); } }
L_002C3818:
    set32(c.r[3], ld32((c.r[5].w[0] + 588u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0071(c, 15u, depth); } }
    c.f[1] = ld32((c.r[16].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44750000u);
    c.r[2].d[0] = c.r[2].d[0] | 49152ull;
    c.f[2] = c.r[2].w[0];
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44630000u);
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3858u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002C3858u) [[unlikely]] return; }
L_002C3858:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x438C0000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { [[clang::musttail]] return unit_0071(c, 15u, depth); } }
    c.f[2] = ld32((c.r[16].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44750000u);
    c.r[2].d[0] = c.r[2].d[0] | 49152ull;
    c.f[0] = c.r[2].w[0];
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44630000u);
    c.f[12] = fp::sub(c.f[2], c.f[0]);
    c.f[0] = c.r[2].w[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C389Cu); c.f[13] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x002C389Cu) [[unlikely]] return; }
L_002C389C:
    c.r[17].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C38A8u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x002C38A8u) [[unlikely]] return; }
L_002C38A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x438C0000u);
    c.f[1] = c.r[2].w[0];
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44750000u);
    c.r[2].d[0] = c.r[2].d[0] | 49152ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C38D4u); st32((c.r[16].w[0] + 32u), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x002C38D4u) [[unlikely]] return; }
L_002C38D4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x438C0000u);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44630000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 40u), c.f[0]);  if (t) { [[clang::musttail]] return unit_0071(c, 15u, depth); } }
L_002C38FC:
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x442F0000u);
    c.f[12] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[12]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x44630000u);  if (t) { goto L_002C3990; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x443E0000u);
    c.f[13] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[13]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C398C; } }
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44430000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.f[14] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[14]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C398C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44520000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.f[15] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[15]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C398C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3984u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0071(c, 17u, depth + 1u); else { c.pc = 0x002C4410u; return; } if (c.pc != 0x002C3984u) [[unlikely]] return; }
L_002C3984:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0071(c, 15u, depth); } }
L_002C398C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44630000u);
    c.budget -= 1;
L_002C3990:
    c.r[3].d[0] = c.r[3].d[0] | 49152ull;
    c.f[12] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[12]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { [[clang::musttail]] return unit_0071(c, 15u, depth); } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44720000u);
    c.r[3].d[0] = c.r[3].d[0] | 49152ull;
    c.f[13] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[13]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { [[clang::musttail]] return unit_0071(c, 15u, depth); } }
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x441D0000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.f[14] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[14]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { [[clang::musttail]] return unit_0071(c, 15u, depth); } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x442C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.f[15] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[15]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { [[clang::musttail]] return unit_0071(c, 15u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3A18u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0071(c, 17u, depth + 1u); else { c.pc = 0x002C4410u; return; } if (c.pc != 0x002C3A18u) [[unlikely]] return; }
L_002C3A18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0071(c, 15u, depth); } }
L_002C3A20:
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44870000u);
    c.r[3].d[0] = c.r[3].d[0] | 24576ull;
    c.f[12] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[12]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x443C0000u);  if (t) { goto L_002C3ABC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44900000u);
    c.r[3].d[0] = c.r[3].d[0] | 8192ull;
    c.f[13] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[13]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C3AB8; } }
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x442E0000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.f[14] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[14]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C3AB8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44410000u);
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    c.f[15] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[15]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C3AB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3AB0u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0071(c, 17u, depth + 1u); else { c.pc = 0x002C4410u; return; } if (c.pc != 0x002C3AB0u) [[unlikely]] return; }
L_002C3AB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0071(c, 15u, depth); } }
L_002C3AB8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x443C0000u);
    c.budget -= 1;
L_002C3ABC:
    c.r[3].d[0] = c.r[3].d[0] | 49152ull;
    c.f[12] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[12]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x44420000u);  if (t) { goto L_002C3B50; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44500000u);
    c.r[3].d[0] = c.r[3].d[0] | 49152ull;
    c.f[13] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[13]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C3B4C; } }
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44520000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.f[14] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[14]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C3B4C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44660000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.f[15] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[15]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C3B4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3B44u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0071(c, 17u, depth + 1u); else { c.pc = 0x002C4410u; return; } if (c.pc != 0x002C3B44u) [[unlikely]] return; }
L_002C3B44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0071(c, 15u, depth); } }
L_002C3B4C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44420000u);
    c.budget -= 1;
L_002C3B50:
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.f[12] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[12]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C3BD8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44810000u);
    c.r[3].d[0] = c.r[3].d[0] | 49152ull;
    c.f[13] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[13]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C3BD8; } }
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44280000u);
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    c.f[14] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[14]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C3BD8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x443C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    c.f[15] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[15]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C3BD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3BD8u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0071(c, 17u, depth + 1u); else { c.pc = 0x002C4410u; return; } if (c.pc != 0x002C3BD8u) [[unlikely]] return; }
L_002C3BD8:
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44460000u);
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    c.f[12] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[12]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { [[clang::musttail]] return unit_0071(c, 15u, depth); } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x447F0000u);
    c.r[3].d[0] = c.r[3].d[0] | 49152ull;
    c.f[13] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[13]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { [[clang::musttail]] return unit_0071(c, 15u, depth); } }
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43EF0000u);
    c.f[14] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[14]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { [[clang::musttail]] return unit_0071(c, 15u, depth); } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44520000u);
    c.r[3].d[0] = c.r[3].d[0] | 49152ull;
    c.f[15] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[15]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { [[clang::musttail]] return unit_0071(c, 15u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3C64u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0071(c, 17u, depth + 1u); else { c.pc = 0x002C4410u; return; } if (c.pc != 0x002C3C64u) [[unlikely]] return; }
L_002C3C64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0071(c, 15u, depth); } }
L_002C3C6C:
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x447E0000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.f[12] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[12]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { [[clang::musttail]] return unit_0071(c, 15u, depth); } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44A30000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.f[13] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[13]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { [[clang::musttail]] return unit_0071(c, 15u, depth); } }
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44950000u);
    c.r[3].d[0] = c.r[3].d[0] | 49152ull;
    c.f[14] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[14]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { [[clang::musttail]] return unit_0071(c, 15u, depth); } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44CA0000u);
    c.r[3].d[0] = c.r[3].d[0] | 57344ull;
    c.f[15] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[15]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { [[clang::musttail]] return unit_0071(c, 15u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3CFCu); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0071(c, 17u, depth + 1u); else { c.pc = 0x002C4410u; return; } if (c.pc != 0x002C3CFCu) [[unlikely]] return; }
L_002C3CFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0071(c, 15u, depth); } }
L_002C3D04:
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x442D0000u);
    c.r[3].d[0] = c.r[3].d[0] | 49152ull;
    c.f[12] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[12]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x44530000u);  if (t) { goto L_002C3DA0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44410000u);
    c.r[3].d[0] = c.r[3].d[0] | 49152ull;
    c.f[13] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[13]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C3D9C; } }
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44080000u);
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    c.f[14] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[14]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C3D9C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x441C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    c.f[15] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[15]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C3D9C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3D94u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0071(c, 17u, depth + 1u); else { c.pc = 0x002C4410u; return; } if (c.pc != 0x002C3D94u) [[unlikely]] return; }
L_002C3D94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0071(c, 15u, depth); } }
L_002C3D9C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44530000u);
    c.budget -= 1;
L_002C3DA0:
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    c.f[12] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[12]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x44A00000u);  if (t) { goto L_002C3E30; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44930000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.f[13] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[13]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C3E2C; } }
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x445A0000u);
    c.r[3].d[0] = c.r[3].d[0] | 49152ull;
    c.f[14] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[14]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C3E2C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    c.f[15] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[15]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C3E2C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3E24u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0071(c, 17u, depth + 1u); else { c.pc = 0x002C4410u; return; } if (c.pc != 0x002C3E24u) [[unlikely]] return; }
L_002C3E24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0071(c, 15u, depth); } }
L_002C3E2C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44A00000u);
    c.budget -= 1;
L_002C3E30:
    c.f[12] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[12]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x445A0000u);  if (t) { goto L_002C3EBC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44DA0000u);
    c.r[3].d[0] = c.r[3].d[0] | 49152ull;
    c.f[13] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[13]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C3EB8; } }
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x440C0000u);
    c.f[14] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[14]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C3EB8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x447C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.f[15] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[15]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C3EB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3EB0u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0071(c, 17u, depth + 1u); else { c.pc = 0x002C4410u; return; } if (c.pc != 0x002C3EB0u) [[unlikely]] return; }
L_002C3EB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0071(c, 15u, depth); } }
L_002C3EB8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x445A0000u);
    c.budget -= 1;
L_002C3EBC:
    c.r[3].d[0] = c.r[3].d[0] | 49152ull;
    c.f[12] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[12]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x444F0000u);  if (t) { goto L_002C3F50; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44720000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.f[13] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[13]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C3F4C; } }
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44890000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.f[14] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[14]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C3F4C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44950000u);
    c.r[3].d[0] = c.r[3].d[0] | 24576ull;
    c.f[15] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[15]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C3F4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3F44u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0071(c, 17u, depth + 1u); else { c.pc = 0x002C4410u; return; } if (c.pc != 0x002C3F44u) [[unlikely]] return; }
L_002C3F44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0071(c, 15u, depth); } }
L_002C3F4C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x444F0000u);
    c.budget -= 1;
L_002C3F50:
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.f[12] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[12]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x44820000u);  if (t) { goto L_002C3FE4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44670000u);
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    c.f[13] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[13]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C3FE0; } }
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44A10000u);
    c.r[3].d[0] = c.r[3].d[0] | 57344ull;
    c.f[14] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[14]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C3FE0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44AD0000u);
    c.r[3].d[0] = c.r[3].d[0] | 49152ull;
    c.f[15] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[15]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C3FE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3FD8u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0071(c, 17u, depth + 1u); else { c.pc = 0x002C4410u; return; } if (c.pc != 0x002C3FD8u) [[unlikely]] return; }
L_002C3FD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0071(c, 15u, depth); } }
L_002C3FE0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44820000u);
    c.budget -= 1;
L_002C3FE4:
    c.f[12] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[12]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x43160000u);  if (t) { [[clang::musttail]] return unit_0071(c, 3u, depth); } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x448C0000u);
    c.budget -= 1;
    [[clang::musttail]] return unit_0071(c, 1u, depth);
}

}
