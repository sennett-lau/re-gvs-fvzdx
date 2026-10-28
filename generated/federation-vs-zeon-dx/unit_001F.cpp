#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_001F[4096] = {
    1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0,
    0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 17, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 21,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 24, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0,
    42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0,
    0, 0, 45, 0, 0, 0, 0, 0, 0, 46, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0,
    53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0,
    0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0,
    64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0,
    0, 0, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 72, 0, 0, 0, 0,
    73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 77, 0, 0,
    0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 80, 0, 0,
    81, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 83, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0,
    0, 0, 89, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0,
    114, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    118, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 124, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 126, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 135, 0,
    0, 0, 0, 0, 136, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 140, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 146, 0, 0, 0, 147, 0, 0, 0,
    0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 152, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0,
    155, 0, 0, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 159, 0, 0, 0, 160, 0, 0, 0, 0, 0, 161, 0, 0, 0,
    0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    167, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0,
    170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0,
    0, 0, 0, 182, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 186,
    0, 0, 0, 0, 0, 0, 0, 187, 0, 188, 0, 189, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 192,
    0, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 198, 0,
    0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 201, 0, 0, 0, 202, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 205, 0, 0, 206, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 209,
    0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 220, 0, 0, 0, 221, 0, 0, 0, 222, 0, 0, 0, 223, 0, 0, 0, 224, 0, 0, 0, 225, 0,
    0, 0, 226, 0, 0, 0, 227, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 233, 0,
    0, 0, 0, 234, 0, 0, 0, 0, 235, 0, 0, 0, 236, 0, 0, 0, 0, 237, 0, 0, 0, 238, 0, 0, 0, 239, 0, 0, 240, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 242, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 244, 0, 0, 0, 0, 0, 245, 0, 246, 0, 0, 0, 0, 0, 247, 0, 0, 0, 248, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 250, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0,
    254, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 257, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 263, 0,
    264, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268,
    0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 270, 0, 0, 0, 271, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 274,
    0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 278, 0, 279, 0,
    0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 282, 0, 283, 0, 284, 0,
    285, 0, 0, 0, 286, 0, 287, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 291, 0, 292, 0, 293, 0, 294, 0, 295, 0, 296, 0,
    297, 0, 298, 0, 299, 0, 300, 0, 0, 0, 0, 0, 301, 0, 0, 0, 302, 0, 303, 0, 304, 0, 305, 0, 306, 0, 0, 307, 0, 0, 0, 0,
    308, 0, 309, 0, 0, 0, 0, 0, 0, 0, 310, 0, 311, 0, 312, 0, 313, 0, 314, 0, 315, 0, 316, 0, 0, 0, 0, 317, 0, 0, 0, 318,
    0, 0, 0, 319, 0, 0, 0, 320, 0, 321, 0, 322, 0, 323, 0, 324, 0, 325, 0, 0, 0, 0, 326, 0, 327, 0, 328, 0, 329, 0, 330, 0,
    331, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 335, 0, 336, 0, 0, 0, 0,
    337, 0, 338, 0, 0, 339, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 342,
    0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 344, 0, 345, 0, 346, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 350, 0, 0, 0,
    351, 352, 0, 353, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 357, 0, 358, 0, 0, 0,
    0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 371, 0, 372, 0, 0, 0,
};

void unit_001F(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0017C000;
    case 2u: goto L_0017C008;
    case 3u: goto L_0017C030;
    case 4u: goto L_0017C054;
    case 5u: goto L_0017C070;
    case 6u: goto L_0017C084;
    case 7u: goto L_0017C0A8;
    case 8u: goto L_0017C0C0;
    case 9u: goto L_0017C120;
    case 10u: goto L_0017C150;
    case 11u: goto L_0017C160;
    case 12u: goto L_0017C170;
    case 13u: goto L_0017C1A0;
    case 14u: goto L_0017C1B0;
    case 15u: goto L_0017C1C0;
    case 16u: goto L_0017C1E0;
    case 17u: goto L_0017C1F4;
    case 18u: goto L_0017C224;
    case 19u: goto L_0017C238;
    case 20u: goto L_0017C268;
    case 21u: goto L_0017C27C;
    case 22u: goto L_0017C2AC;
    case 23u: goto L_0017C2C0;
    case 24u: goto L_0017C308;
    case 25u: goto L_0017C31C;
    case 26u: goto L_0017C344;
    case 27u: goto L_0017C370;
    case 28u: goto L_0017C3A8;
    case 29u: goto L_0017C3BC;
    case 30u: goto L_0017C3E0;
    case 31u: goto L_0017C44C;
    case 32u: goto L_0017C460;
    case 33u: goto L_0017C49C;
    case 34u: goto L_0017C4B0;
    case 35u: goto L_0017C4D8;
    case 36u: goto L_0017C508;
    case 37u: goto L_0017C54C;
    case 38u: goto L_0017C5A0;
    case 39u: goto L_0017C5C4;
    case 40u: goto L_0017C604;
    case 41u: goto L_0017C660;
    case 42u: goto L_0017C680;
    case 43u: goto L_0017C6D0;
    case 44u: goto L_0017C6F0;
    case 45u: goto L_0017C708;
    case 46u: goto L_0017C724;
    case 47u: goto L_0017C730;
    case 48u: goto L_0017C750;
    case 49u: goto L_0017C760;
    case 50u: goto L_0017C7AC;
    case 51u: goto L_0017C7C8;
    case 52u: goto L_0017C7E0;
    case 53u: goto L_0017C800;
    case 54u: goto L_0017C854;
    case 55u: goto L_0017C890;
    case 56u: goto L_0017C91C;
    case 57u: goto L_0017C9B8;
    case 58u: goto L_0017C9E4;
    case 59u: goto L_0017CA14;
    case 60u: goto L_0017CA38;
    case 61u: goto L_0017CA70;
    case 62u: goto L_0017CA90;
    case 63u: goto L_0017CAE4;
    case 64u: goto L_0017CB00;
    case 65u: goto L_0017CB30;
    case 66u: goto L_0017CB50;
    case 67u: goto L_0017CB74;
    case 68u: goto L_0017CB90;
    case 69u: goto L_0017CBA0;
    case 70u: goto L_0017CBC0;
    case 71u: goto L_0017CBD8;
    case 72u: goto L_0017CBEC;
    case 73u: goto L_0017CC00;
    case 74u: goto L_0017CC4C;
    case 75u: goto L_0017CCB0;
    case 76u: goto L_0017CD58;
    case 77u: goto L_0017CD74;
    case 78u: goto L_0017CD88;
    case 79u: goto L_0017CDE0;
    case 80u: goto L_0017CDF4;
    case 81u: goto L_0017CE00;
    case 82u: goto L_0017CE24;
    case 83u: goto L_0017CE2C;
    case 84u: goto L_0017CE48;
    case 85u: goto L_0017CF08;
    case 86u: goto L_0017CF80;
    case 87u: goto L_0017CFC4;
    case 88u: goto L_0017CFF0;
    case 89u: goto L_0017D008;
    case 90u: goto L_0017D018;
    case 91u: goto L_0017D028;
    case 92u: goto L_0017D060;
    case 93u: goto L_0017D0B8;
    case 94u: goto L_0017D0C0;
    case 95u: goto L_0017D0F8;
    case 96u: goto L_0017D140;
    case 97u: goto L_0017D158;
    case 98u: goto L_0017D180;
    case 99u: goto L_0017D1A8;
    case 100u: goto L_0017D200;
    case 101u: goto L_0017D228;
    case 102u: goto L_0017D250;
    case 103u: goto L_0017D280;
    case 104u: goto L_0017D358;
    case 105u: goto L_0017D400;
    case 106u: goto L_0017D53C;
    case 107u: goto L_0017D710;
    case 108u: goto L_0017D800;
    case 109u: goto L_0017D8D4;
    case 110u: goto L_0017D9D4;
    case 111u: goto L_0017DA80;
    case 112u: goto L_0017DB30;
    case 113u: goto L_0017DBE0;
    case 114u: goto L_0017DC00;
    case 115u: goto L_0017DC10;
    case 116u: goto L_0017DC54;
    case 117u: goto L_0017DC58;
    case 118u: goto L_0017DD00;
    case 119u: goto L_0017DD0C;
    case 120u: goto L_0017DD40;
    case 121u: goto L_0017DD4C;
    case 122u: goto L_0017DD80;
    case 123u: goto L_0017DDBC;
    case 124u: goto L_0017DDCC;
    case 125u: goto L_0017DDD0;
    case 126u: goto L_0017DE04;
    case 127u: goto L_0017DE24;
    case 128u: goto L_0017DE80;
    case 129u: goto L_0017DEA8;
    case 130u: goto L_0017DED0;
    case 131u: goto L_0017DF70;
    case 132u: goto L_0017DFC0;
    case 133u: goto L_0017E044;
    case 134u: goto L_0017E068;
    case 135u: goto L_0017E078;
    case 136u: goto L_0017E090;
    case 137u: goto L_0017E0A0;
    case 138u: goto L_0017E0BC;
    case 139u: goto L_0017E0E4;
    case 140u: goto L_0017E0F8;
    case 141u: goto L_0017E134;
    case 142u: goto L_0017E1C8;
    case 143u: goto L_0017E26C;
    case 144u: goto L_0017E2B0;
    case 145u: goto L_0017E2C8;
    case 146u: goto L_0017E2E0;
    case 147u: goto L_0017E2F0;
    case 148u: goto L_0017E314;
    case 149u: goto L_0017E340;
    case 150u: goto L_0017E38C;
    case 151u: goto L_0017E3E0;
    case 152u: goto L_0017E408;
    case 153u: goto L_0017E424;
    case 154u: goto L_0017E460;
    case 155u: goto L_0017E480;
    case 156u: goto L_0017E498;
    case 157u: goto L_0017E4A8;
    case 158u: goto L_0017E4B8;
    case 159u: goto L_0017E4C8;
    case 160u: goto L_0017E4D8;
    case 161u: goto L_0017E4F0;
    case 162u: goto L_0017E510;
    case 163u: goto L_0017E554;
    case 164u: goto L_0017E594;
    case 165u: goto L_0017E5F0;
    case 166u: goto L_0017E618;
    case 167u: goto L_0017E680;
    case 168u: goto L_0017E6A0;
    case 169u: goto L_0017E6E0;
    case 170u: goto L_0017E700;
    case 171u: goto L_0017E790;
    case 172u: goto L_0017E7BC;
    case 173u: goto L_0017E858;
    case 174u: goto L_0017E890;
    case 175u: goto L_0017E8B0;
    case 176u: goto L_0017E904;
    case 177u: goto L_0017E928;
    case 178u: goto L_0017E998;
    case 179u: goto L_0017E9C0;
    case 180u: goto L_0017EA50;
    case 181u: goto L_0017EA68;
    case 182u: goto L_0017EA8C;
    case 183u: goto L_0017EAA0;
    case 184u: goto L_0017EAC4;
    case 185u: goto L_0017EAEC;
    case 186u: goto L_0017EAFC;
    case 187u: goto L_0017EB1C;
    case 188u: goto L_0017EB24;
    case 189u: goto L_0017EB2C;
    case 190u: goto L_0017EB40;
    case 191u: goto L_0017EB58;
    case 192u: goto L_0017EB7C;
    case 193u: goto L_0017EB90;
    case 194u: goto L_0017EBA0;
    case 195u: goto L_0017EBC0;
    case 196u: goto L_0017EBD8;
    case 197u: goto L_0017EBE8;
    case 198u: goto L_0017EBF8;
    case 199u: goto L_0017EC08;
    case 200u: goto L_0017EC18;
    case 201u: goto L_0017EC28;
    case 202u: goto L_0017EC38;
    case 203u: goto L_0017EC50;
    case 204u: goto L_0017ECA0;
    case 205u: goto L_0017ECB4;
    case 206u: goto L_0017ECC0;
    case 207u: goto L_0017ECD0;
    case 208u: goto L_0017ED70;
    case 209u: goto L_0017ED7C;
    case 210u: goto L_0017ED90;
    case 211u: goto L_0017EDAC;
    case 212u: goto L_0017EE10;
    case 213u: goto L_0017EE40;
    case 214u: goto L_0017EE7C;
    case 215u: goto L_0017EEB0;
    case 216u: goto L_0017EEEC;
    case 217u: goto L_0017EF78;
    case 218u: goto L_0017F01C;
    case 219u: goto L_0017F090;
    case 220u: goto L_0017F0A8;
    case 221u: goto L_0017F0B8;
    case 222u: goto L_0017F0C8;
    case 223u: goto L_0017F0D8;
    case 224u: goto L_0017F0E8;
    case 225u: goto L_0017F0F8;
    case 226u: goto L_0017F108;
    case 227u: goto L_0017F118;
    case 228u: goto L_0017F130;
    case 229u: goto L_0017F150;
    case 230u: goto L_0017F1A8;
    case 231u: goto L_0017F23C;
    case 232u: goto L_0017F2E0;
    case 233u: goto L_0017F2F8;
    case 234u: goto L_0017F30C;
    case 235u: goto L_0017F320;
    case 236u: goto L_0017F330;
    case 237u: goto L_0017F344;
    case 238u: goto L_0017F354;
    case 239u: goto L_0017F364;
    case 240u: goto L_0017F370;
    case 241u: goto L_0017F3BC;
    case 242u: goto L_0017F3CC;
    case 243u: goto L_0017F3E0;
    case 244u: goto L_0017F408;
    case 245u: goto L_0017F420;
    case 246u: goto L_0017F428;
    case 247u: goto L_0017F440;
    case 248u: goto L_0017F450;
    case 249u: goto L_0017F460;
    case 250u: goto L_0017F488;
    case 251u: goto L_0017F4A0;
    case 252u: goto L_0017F4D0;
    case 253u: goto L_0017F4F4;
    case 254u: goto L_0017F500;
    case 255u: goto L_0017F50C;
    case 256u: goto L_0017F530;
    case 257u: goto L_0017F54C;
    case 258u: goto L_0017F558;
    case 259u: goto L_0017F5C0;
    case 260u: goto L_0017F5CC;
    case 261u: goto L_0017F61C;
    case 262u: goto L_0017F660;
    case 263u: goto L_0017F678;
    case 264u: goto L_0017F680;
    case 265u: goto L_0017F6A0;
    case 266u: goto L_0017F6B0;
    case 267u: goto L_0017F6D4;
    case 268u: goto L_0017F6FC;
    case 269u: goto L_0017F710;
    case 270u: goto L_0017F728;
    case 271u: goto L_0017F738;
    case 272u: goto L_0017F740;
    case 273u: goto L_0017F770;
    case 274u: goto L_0017F77C;
    case 275u: goto L_0017F788;
    case 276u: goto L_0017F7C0;
    case 277u: goto L_0017F7E8;
    case 278u: goto L_0017F7F0;
    case 279u: goto L_0017F7F8;
    case 280u: goto L_0017F81C;
    case 281u: goto L_0017F84C;
    case 282u: goto L_0017F868;
    case 283u: goto L_0017F870;
    case 284u: goto L_0017F878;
    case 285u: goto L_0017F880;
    case 286u: goto L_0017F890;
    case 287u: goto L_0017F898;
    case 288u: goto L_0017F8B8;
    case 289u: goto L_0017F918;
    case 290u: goto L_0017F940;
    case 291u: goto L_0017F950;
    case 292u: goto L_0017F958;
    case 293u: goto L_0017F960;
    case 294u: goto L_0017F968;
    case 295u: goto L_0017F970;
    case 296u: goto L_0017F978;
    case 297u: goto L_0017F980;
    case 298u: goto L_0017F988;
    case 299u: goto L_0017F990;
    case 300u: goto L_0017F998;
    case 301u: goto L_0017F9B0;
    case 302u: goto L_0017F9C0;
    case 303u: goto L_0017F9C8;
    case 304u: goto L_0017F9D0;
    case 305u: goto L_0017F9D8;
    case 306u: goto L_0017F9E0;
    case 307u: goto L_0017F9EC;
    case 308u: goto L_0017FA00;
    case 309u: goto L_0017FA08;
    case 310u: goto L_0017FA28;
    case 311u: goto L_0017FA30;
    case 312u: goto L_0017FA38;
    case 313u: goto L_0017FA40;
    case 314u: goto L_0017FA48;
    case 315u: goto L_0017FA50;
    case 316u: goto L_0017FA58;
    case 317u: goto L_0017FA6C;
    case 318u: goto L_0017FA7C;
    case 319u: goto L_0017FA8C;
    case 320u: goto L_0017FA9C;
    case 321u: goto L_0017FAA4;
    case 322u: goto L_0017FAAC;
    case 323u: goto L_0017FAB4;
    case 324u: goto L_0017FABC;
    case 325u: goto L_0017FAC4;
    case 326u: goto L_0017FAD8;
    case 327u: goto L_0017FAE0;
    case 328u: goto L_0017FAE8;
    case 329u: goto L_0017FAF0;
    case 330u: goto L_0017FAF8;
    case 331u: goto L_0017FB00;
    case 332u: goto L_0017FB10;
    case 333u: goto L_0017FB38;
    case 334u: goto L_0017FB5C;
    case 335u: goto L_0017FB64;
    case 336u: goto L_0017FB6C;
    case 337u: goto L_0017FB80;
    case 338u: goto L_0017FB88;
    case 339u: goto L_0017FB94;
    case 340u: goto L_0017FBB0;
    case 341u: goto L_0017FBE0;
    case 342u: goto L_0017FBFC;
    case 343u: goto L_0017FC20;
    case 344u: goto L_0017FC30;
    case 345u: goto L_0017FC38;
    case 346u: goto L_0017FC40;
    case 347u: goto L_0017FC50;
    case 348u: goto L_0017FC70;
    case 349u: goto L_0017FCE0;
    case 350u: goto L_0017FCF0;
    case 351u: goto L_0017FD00;
    case 352u: goto L_0017FD04;
    case 353u: goto L_0017FD0C;
    case 354u: goto L_0017FD28;
    case 355u: goto L_0017FD38;
    case 356u: goto L_0017FD60;
    case 357u: goto L_0017FD68;
    case 358u: goto L_0017FD70;
    case 359u: goto L_0017FD8C;
    case 360u: goto L_0017FDB0;
    case 361u: goto L_0017FDC0;
    case 362u: goto L_0017FDE0;
    case 363u: goto L_0017FE20;
    case 364u: goto L_0017FE40;
    case 365u: goto L_0017FEAC;
    case 366u: goto L_0017FEC8;
    case 367u: goto L_0017FF30;
    case 368u: goto L_0017FF50;
    case 369u: goto L_0017FF70;
    case 370u: goto L_0017FFD4;
    case 371u: goto L_0017FFE8;
    case 372u: goto L_0017FFF0;
    default: bad_entry(c, 0x0017C000u); return;
    }
L_0017C000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C008u); c.r[5].d[0] = c.r[2].d[0] | 22528ull;  if (depth < kMaxDepth) unit_0094(c, 27u, depth + 1u); else { c.pc = 0x00350270u; return; } if (c.pc != 0x0017C008u) [[unlikely]] return; }
L_0017C008:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[3], c.r[3].w[0] + 30880u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    st32((c.r[1].w[0] + 30876u), c.r[3].w[0]);
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0017C030:
    set32(c.r[2], c.r[28].w[0] - 31112u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x010C0000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C054u); c.r[5].d[0] = c.r[2].d[0] | 8192ull;  if (depth < kMaxDepth) unit_0094(c, 27u, depth + 1u); else { c.pc = 0x00350270u; return; } if (c.pc != 0x0017C054u) [[unlikely]] return; }
L_0017C054:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[3], c.r[3].w[0] + 30880u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    st32((c.r[1].w[0] + 30876u), c.r[3].w[0]);
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0017C070:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], c.r[28].w[0] - 31104u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C084u); set32(c.r[4], 0u + 274u);  if (depth < kMaxDepth) unit_0094(c, 42u, depth + 1u); else { c.pc = 0x003503F0u; return; } if (c.pc != 0x0017C084u) [[unlikely]] return; }
L_0017C084:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00130000u);
    set32(c.r[4], c.r[2].w[0] + 31888u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F30000u);
    c.r[6].d[0] = c.r[2].d[0] | 22528ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], c.r[2].w[0] + 30176u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C0A8u); mmi::paddub(c.r[8], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 253u, depth + 1u); else { c.pc = 0x0034F7F0u; return; } if (c.pc != 0x0017C0A8u) [[unlikely]] return; }
L_0017C0A8:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0017C0C0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C10000u);
    c.r[3].d[0] = c.r[3].d[0] | 14336ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00700000u);
    st32((c.r[1].w[0] - 7632u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00F30000u);
    c.r[3].d[0] = c.r[3].d[0] | 22528ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00700000u);
    st32((c.r[1].w[0] - 7628u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x010A0000u);
    c.r[3].d[0] = c.r[3].d[0] | 6144ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00700000u);
    st32((c.r[1].w[0] - 7624u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x011C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 38912ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00700000u);
    st32((c.r[1].w[0] - 7620u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01430000u);
    c.r[3].d[0] = c.r[3].d[0] | 55296ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.budget -= 21;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[1].w[0] - 7616u), c.r[3].w[0]);  c.pc = t; return; }
L_0017C120:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 28022u)));
    set32(c.r[16], 0u + 275u);
    set32(c.r[3], 0u + 276u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00180000u);
    if (c.r[4].d[0] != 0) c.r[16].d[0] = c.r[3].d[0];
    set32(c.r[4], c.r[2].w[0] - 16192u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C150u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 253u, depth + 1u); else { c.pc = 0x0034F7F0u; return; } if (c.pc != 0x0017C150u) [[unlikely]] return; }
L_0017C150:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[5], c.r[2].w[0] - 7632u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C160u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0094(c, 42u, depth + 1u); else { c.pc = 0x003503F0u; return; } if (c.pc != 0x0017C160u) [[unlikely]] return; }
L_0017C160:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0017C170:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 28022u)));
    set32(c.r[16], 0u + 277u);
    set32(c.r[3], 0u + 278u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00180000u);
    if (c.r[4].d[0] != 0) c.r[16].d[0] = c.r[3].d[0];
    set32(c.r[4], c.r[2].w[0] - 16192u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C1A0u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 253u, depth + 1u); else { c.pc = 0x0034F7F0u; return; } if (c.pc != 0x0017C1A0u) [[unlikely]] return; }
L_0017C1A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[5], c.r[2].w[0] - 7632u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C1B0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0094(c, 42u, depth + 1u); else { c.pc = 0x003503F0u; return; } if (c.pc != 0x0017C1B0u) [[unlikely]] return; }
L_0017C1B0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0017C1C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C10000u);
    c.r[4].d[0] = c.r[2].d[0] | 14336ull;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[5], c.r[2].w[0] - 13664u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C1E0u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000D(c, 266u, depth + 1u); else { c.pc = 0x00137B60u; return; } if (c.pc != 0x0017C1E0u) [[unlikely]] return; }
L_0017C1E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] - 18592u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], 0u + 7u);
    set32(c.r[5], c.r[2].w[0] - 13636u);
    c.budget -= 5;
L_0017C1F4:
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[5].w[0]), c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] + 64u);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(29ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017C1F4u | kUnwind; return; } goto L_0017C1F4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F30000u);
    c.r[4].d[0] = c.r[2].d[0] | 22528ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C224u); set32(c.r[5], c.r[2].w[0] - 13636u);  if (depth < kMaxDepth) unit_000E(c, 8u, depth + 1u); else { c.pc = 0x00138140u; return; } if (c.pc != 0x0017C224u) [[unlikely]] return; }
L_0017C224:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], c.r[2].w[0] - 17184u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[5], 0u + 29u);
    set32(c.r[4], c.r[2].w[0] - 13548u);
    c.budget -= 5;
L_0017C238:
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + 64u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.r[2].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(65ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017C238u | kUnwind; return; } goto L_0017C238; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x010A0000u);
    c.r[4].d[0] = c.r[2].d[0] | 6144ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C268u); set32(c.r[5], c.r[2].w[0] - 13548u);  if (depth < kMaxDepth) unit_000E(c, 8u, depth + 1u); else { c.pc = 0x00138140u; return; } if (c.pc != 0x0017C268u) [[unlikely]] return; }
L_0017C268:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], c.r[2].w[0] - 14368u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[5], 0u + 73u);
    set32(c.r[4], c.r[2].w[0] - 13372u);
    c.budget -= 5;
L_0017C27C:
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + 64u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.r[2].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(84ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017C27Cu | kUnwind; return; } goto L_0017C27C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x011C0000u);
    c.r[4].d[0] = c.r[2].d[0] | 38912ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C2ACu); set32(c.r[5], c.r[2].w[0] - 13372u);  if (depth < kMaxDepth) unit_000E(c, 8u, depth + 1u); else { c.pc = 0x00138140u; return; } if (c.pc != 0x0017C2ACu) [[unlikely]] return; }
L_0017C2AC:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0017C2C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C10000u);
    c.r[16].d[0] = c.r[3].d[0] | 14336ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[4], c.r[3].w[0] - 20912u);
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[17], c.r[3].w[0] - 13644u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 256u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[19], ld32((c.r[3].w[0])));
    c.budget -= 18;
L_0017C308:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_0017C354; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C31Cu); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0094(c, 27u, depth + 1u); else { c.pc = 0x00350270u; return; } if (c.pc != 0x0017C31Cu) [[unlikely]] return; }
L_0017C31C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; mmi::paddub(c.r[18], c.r[2], c.r[0]);  if (t) { goto L_0017C348; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00130000u);
    set32(c.r[4], c.r[2].w[0] + 31472u);
    set32(c.r[5], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    mmi::paddub(c.r[6], c.r[16], c.r[0]);
    mmi::paddub(c.r[8], c.r[0], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C344u); mmi::paddub(c.r[9], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 253u, depth + 1u); else { c.pc = 0x0034F7F0u; return; } if (c.pc != 0x0017C344u) [[unlikely]] return; }
L_0017C344:
    set32(c.r[16], c.r[16].w[0] + c.r[18].w[0]);
    c.budget -= 1;
L_0017C348:
    set32(c.r[19], c.r[19].w[0] + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017C308u | kUnwind; return; } goto L_0017C308; } }
L_0017C354:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0017C370:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[4], c.r[3].w[0] - 20912u);
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[17], c.r[3].w[0] - 13644u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 256u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.budget -= 14;
L_0017C3A8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_0017C3C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C3BCu); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_000E(c, 100u, depth + 1u); else { c.pc = 0x00139720u; return; } if (c.pc != 0x0017C3BCu) [[unlikely]] return; }
L_0017C3BC:
    set32(c.r[16], c.r[16].w[0] + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017C3A8u | kUnwind; return; } goto L_0017C3A8; } }
L_0017C3C8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0017C3E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 28022u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0017C418; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[2], c.r[2].w[0] - 20816u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 256u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));  if (t) { goto L_0017C438; } }
L_0017C418:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[2], c.r[2].w[0] - 20768u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 256u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 8;
L_0017C438:
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01140000u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C44Cu); c.r[5].d[0] = c.r[2].d[0] | 6144ull;  if (depth < kMaxDepth) unit_0094(c, 27u, depth + 1u); else { c.pc = 0x00350270u; return; } if (c.pc != 0x0017C44Cu) [[unlikely]] return; }
L_0017C44C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] - 14880u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], 0u + 65u);
    set32(c.r[2], c.r[2].w[0] - 13404u);
    c.budget -= 5;
L_0017C460:
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] + 64u);
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(73ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017C460u | kUnwind; return; } goto L_0017C460; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00140000u);
    set32(c.r[4], c.r[2].w[0] - 32448u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01140000u);
    c.r[6].d[0] = c.r[2].d[0] | 6144ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C49Cu); set32(c.r[7], c.r[2].w[0] - 13404u);  if (depth < kMaxDepth) unit_0093(c, 253u, depth + 1u); else { c.pc = 0x0034F7F0u; return; } if (c.pc != 0x0017C49Cu) [[unlikely]] return; }
L_0017C49C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0017C4B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00700000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    set32(c.r[5], c.r[3].w[0] - 9968u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 10;
L_0017C4D8:
    st32((c.r[5].w[0]), 0u);
    set32(c.r[4], c.r[4].w[0] + 2u);
    st32((c.r[5].w[0] + 4u), 0u);
    set32(c.r[5], c.r[5].w[0] + 8u);
    c.r[3].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(28ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017C4D8u | kUnwind; return; } goto L_0017C4D8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01A40000u);
    c.r[16].d[0] = c.r[3].d[0] | 23552ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[18], 0u + 6u);
    set32(c.r[17], c.r[3].w[0] - 9976u);
    c.budget -= 5;
L_0017C508:
    c.r[4].d[0] = ld8((c.r[19].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[3], c.r[3].w[0] - 9968u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 8;
    if (c.r[3].d[0] != 0ull) { set32(c.r[18], c.r[18].w[0] - 1u);  goto L_0017C574; }
    st32((c.r[17].w[0] - 4u), c.r[16].w[0]);
    c.r[3].d[0] = ld8((c.r[19].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[2], c.r[2].w[0] - 20400u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C54Cu); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0094(c, 27u, depth + 1u); else { c.pc = 0x00350270u; return; } if (c.pc != 0x0017C54Cu) [[unlikely]] return; }
L_0017C54C:
    c.r[4].d[0] = ld8((c.r[19].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[3], c.r[3].w[0] - 9968u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    st32((c.r[3].w[0]), c.r[5].w[0]);
    set32(c.r[18], c.r[18].w[0] - 1u);
    c.budget -= 10;
L_0017C574:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] - 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017C508u | kUnwind; return; } goto L_0017C508; } }
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0017C5A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[16], 0u + 6u);
    set32(c.r[17], c.r[3].w[0] - 9976u);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    c.budget -= 9;
L_0017C5C4:
    c.r[6].d[0] = ld8((c.r[18].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[4], c.r[3].w[0] - 9968u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 9;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[16], c.r[16].w[0] - 1u);  goto L_0017C634; }
    set32(c.r[4], ld32((c.r[17].w[0] - 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[2], c.r[2].w[0] - 9856u);
    set32(c.r[3], c.r[6].w[0] << 6);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C604u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 17u, depth + 1u); else { c.pc = 0x001383D0u; return; } if (c.pc != 0x0017C604u) [[unlikely]] return; }
L_0017C604:
    c.r[6].d[0] = ld8((c.r[18].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[4], c.r[3].w[0] - 9856u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[3], c.r[3].w[0] - 9968u);
    set32(c.r[5], c.r[6].w[0] << 6);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[5].w[0]);
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 12;
L_0017C634:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] - 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017C5C4u | kUnwind; return; } goto L_0017C5C4; } }
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0017C660:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[2], c.r[2].w[0] - 9968u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0])));  c.pc = t; return; }
L_0017C680:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C10000u);
    c.r[2].d[0] = c.r[2].d[0] | 14336ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00700000u);
    st32((c.r[1].w[0] - 7608u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00700000u);
    st32((c.r[1].w[0] - 7604u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00700000u);
    st32((c.r[1].w[0] - 7600u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[3], c.r[2].w[0] - 20720u);
    set32(c.r[4], ld32((c.r[1].w[0] + 29648u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[5], c.r[2].w[0] - 7608u);
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 18;
    { c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));  [[clang::musttail]] return unit_0094(c, 42u, depth); }
L_0017C6D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 7608u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    set32(c.r[5], c.r[2].w[0] - 16704u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C6F0u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000D(c, 266u, depth + 1u); else { c.pc = 0x00137B60u; return; } if (c.pc != 0x0017C6F0u) [[unlikely]] return; }
L_0017C6F0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 7604u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    set32(c.r[5], c.r[2].w[0] - 16720u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C708u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000D(c, 266u, depth + 1u); else { c.pc = 0x00137B60u; return; } if (c.pc != 0x0017C708u) [[unlikely]] return; }
L_0017C708:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 7600u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    set32(c.r[7], c.r[2].w[0] - 16692u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C724u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000D(c, 263u, depth + 1u); else { c.pc = 0x00137AF0u; return; } if (c.pc != 0x0017C724u) [[unlikely]] return; }
L_0017C724:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0017C730:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F30000u);
    set32(c.r[4], 0u + 238u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C750u); c.r[5].d[0] = c.r[2].d[0] | 22528ull;  if (depth < kMaxDepth) unit_0094(c, 27u, depth + 1u); else { c.pc = 0x00350270u; return; } if (c.pc != 0x0017C750u) [[unlikely]] return; }
L_0017C750:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F30000u);
    set32(c.r[4], 0u + 533u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C760u); c.r[5].d[0] = c.r[2].d[0] | 59392ull;  if (depth < kMaxDepth) unit_0094(c, 27u, depth + 1u); else { c.pc = 0x00350270u; return; } if (c.pc != 0x0017C760u) [[unlikely]] return; }
L_0017C760:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 29496u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[16].d[0] & 1ull;  if (t) { goto L_0017C774; } }
    set32(c.r[16], c.r[16].w[0] + 2u);
    c.budget -= 1;
L_0017C774:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[2], c.r[2].w[0] - 20512u);
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F60000u);
    c.r[5].d[0] = c.r[2].d[0] | 26624ull;
    st32((c.r[28].w[0] - 26688u), c.r[3].w[0]);
    st32((c.r[1].w[0] - 10048u), c.r[5].w[0]);
    st32((c.r[5].w[0]), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 26688u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C7ACu); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0094(c, 32u, depth + 1u); else { c.pc = 0x003502F0u; return; } if (c.pc != 0x0017C7ACu) [[unlikely]] return; }
L_0017C7AC:
    set32(c.r[3], ld32((c.r[28].w[0] - 26688u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x011F0000u);
    c.r[5].d[0] = c.r[2].d[0] | 2048ull;
    set32(c.r[4], 0u + 541u);
    set32(c.r[2], c.r[3].w[0] + 2u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C7C8u); st32((c.r[28].w[0] - 26688u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0094(c, 27u, depth + 1u); else { c.pc = 0x00350270u; return; } if (c.pc != 0x0017C7C8u) [[unlikely]] return; }
L_0017C7C8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0017C7E0:
    set32(c.r[29], c.r[29].w[0] - 1056u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[2].w[0] - 11824u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[3], c.r[0], c.r[0]);
    c.budget -= 8;
L_0017C800:
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 28u), 0u);
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017C800u | kUnwind; return; } goto L_0017C800; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[16], c.r[2].w[0] - 8576u);
    set32(c.r[2], 0u + 7u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 8574u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F30000u);
    c.r[3].d[0] = c.r[2].d[0] | 22528ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 8568u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 59392ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 8564u), c.r[2].w[0]);
    mmi::paddub(c.r[3], c.r[0], c.r[0]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 14;
L_0017C854:
    st32((c.r[4].w[0] + 3856u), 0u);
    set32(c.r[3], c.r[3].w[0] + 2u);
    st32((c.r[4].w[0] + 3860u), 0u);
    set32(c.r[4], c.r[4].w[0] + 8u);
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017C854u | kUnwind; return; } goto L_0017C854; } }
    set32(c.r[8], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[9], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[4], c.r[16].w[0] + 3856u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    set32(c.r[6], c.r[29].w[0] + 64u);
    set32(c.r[7], c.r[16].w[0] + 16u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C890u); set32(c.r[10], 0u + 1u);  if (depth < kMaxDepth) unit_000D(c, 201u, depth + 1u); else { c.pc = 0x00136DA0u; return; } if (c.pc != 0x0017C890u) [[unlikely]] return; }
L_0017C890:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 2u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[11], c.r[8].w[0] - 19312u);
    set32(c.r[2], c.r[2].w[0] - 11816u);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[4], c.r[16].w[0] + 3920u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[2].w[0] - 11796u);
    c.r[4].d[0] = ld16((c.r[16].w[0] + 2u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], c.r[2].w[0] - 11810u);
    set32(c.r[6], c.r[16].w[0] + 3856u);
    set32(c.r[2], c.r[4].w[0] << 5);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.r[6].w[0]);
    c.r[6].d[0] = ld16((c.r[16].w[0] + 2u));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[2], c.r[16].w[0] + 3924u);
    set32(c.r[9], c.r[8].w[0] - 19312u);
    set32(c.r[6], c.r[6].w[0] << 5);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 3920u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[2], c.r[2].w[0] - 19760u);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    mmi::paddub(c.r[3], c.r[16], c.r[0]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 34;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[6], c.r[16], c.r[0]);  if (t) { goto L_0017C990; } }
    set32(c.r[8], c.r[3].w[0] + 3988u);
    c.budget -= 1;
L_0017C91C:
    st32((c.r[4].w[0] + 3924u), c.r[8].w[0]);
    c.r[10].d[0] = ld16((c.r[16].w[0] + 2u));
    set32(c.r[8], c.r[6].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    set32(c.r[10], c.r[10].w[0] << 5);
    set32(c.r[10], c.r[2].w[0] + c.r[10].w[0]);
    set32(c.r[10], c.r[5].w[0] + c.r[10].w[0]);
    c.r[10].d[0] = ld8((c.r[10].w[0]));
    st8((c.r[3].w[0] + 3988u), static_cast<std::uint8_t>(c.r[10].w[0]));
    st8((c.r[3].w[0] + 3989u), static_cast<std::uint8_t>(0u));
    st8((c.r[3].w[0] + 3992u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[10].d[0] = ld16((c.r[16].w[0] + 2u));
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[10], c.r[10].w[0] << 5);
    set32(c.r[10], c.r[11].w[0] + c.r[10].w[0]);
    set32(c.r[10], c.r[5].w[0] + c.r[10].w[0]);
    c.r[10].d[0] = ld8((c.r[10].w[0]));
    st8((c.r[3].w[0] + 3993u), static_cast<std::uint8_t>(c.r[10].w[0]));
    st32((c.r[3].w[0] + 3996u), c.r[8].w[0]);
    c.r[8].d[0] = ld16((c.r[16].w[0] + 2u));
    set32(c.r[3], c.r[3].w[0] + 16u);
    set32(c.r[8], c.r[8].w[0] << 5);
    set32(c.r[8], c.r[9].w[0] + c.r[8].w[0]);
    set32(c.r[8], c.r[5].w[0] + c.r[8].w[0]);
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0])));
    set32(c.r[5], c.r[5].w[0] + 2u);
    c.r[8].d[0] = c.r[8].d[0] & 65280ull;
    st16((c.r[6].w[0] + 114u), static_cast<std::uint16_t>(c.r[8].w[0]));
    set32(c.r[6], c.r[6].w[0] + 240u);
    c.budget -= 29;
L_0017C990:
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 64u)));
    c.r[8].d[0] = c.r[7].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[8].d[0] != 0ull; set32(c.r[8], c.r[3].w[0] + 3988u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017C91Cu | kUnwind; return; } goto L_0017C91C; } }
    c.r[1].d[0] = c.r[7].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0017C9D8; } }
    set32(c.r[2], c.r[7].w[0] << 2);
    set32(c.r[4], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
L_0017C9B8:
    set32(c.r[7], c.r[7].w[0] + 1u);
    st32((c.r[4].w[0] + 3924u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.r[2].d[0] = c.r[7].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017C9B8u | kUnwind; return; } goto L_0017C9B8; } }
    c.budget -= 1;
L_0017C9D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], c.r[2].w[0] - 13664u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 3;
L_0017C9E4:
    st32((c.r[3].w[0]), 0u);
    set32(c.r[4], c.r[4].w[0] + 2u);
    st32((c.r[3].w[0] + 4u), 0u);
    set32(c.r[3], c.r[3].w[0] + 8u);
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(84ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017C9E4u | kUnwind; return; } goto L_0017C9E4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[16], ld32((c.r[1].w[0] - 10048u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[18], 0u + 1u);
    set32(c.r[17], c.r[2].w[0] - 10044u);
    c.budget -= 5;
L_0017CA14:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00040000u);
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    st32((c.r[17].w[0]), c.r[16].w[0]);
    st32((c.r[16].w[0]), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 26688u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CA38u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0094(c, 32u, depth + 1u); else { c.pc = 0x003502F0u; return; } if (c.pc != 0x0017CA38u) [[unlikely]] return; }
L_0017CA38:
    set32(c.r[3], ld32((c.r[28].w[0] - 26688u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] + 2u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[28].w[0] - 26688u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017CA14u | kUnwind; return; } goto L_0017CA14; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[7], c.r[2].w[0] - 8948u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x011F0000u);
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[2].d[0] | 2048ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CA70u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000D(c, 263u, depth + 1u); else { c.pc = 0x00137AF0u; return; } if (c.pc != 0x0017CA70u) [[unlikely]] return; }
L_0017CA70:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1056u);  c.pc = t; return; }
L_0017CA90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    set32(c.r[2], c.r[2].w[0] - 10048u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0017CAC8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[1].w[0] - 13664u)));  if (t) { goto L_0017CAEC; } }
L_0017CAC8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 13664u);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CAE4u); mmi::paddub(c.r[7], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000D(c, 263u, depth + 1u); else { c.pc = 0x00137AF0u; return; } if (c.pc != 0x0017CAE4u) [[unlikely]] return; }
L_0017CAE4:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 2;
L_0017CAEC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0017CB00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    set32(c.r[3], c.r[3].w[0] - 13664u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0017CB34; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CB30u);  if (depth < kMaxDepth) unit_000E(c, 100u, depth + 1u); else { c.pc = 0x00139720u; return; } if (c.pc != 0x0017CB30u) [[unlikely]] return; }
L_0017CB30:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_0017CB34:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0017CB50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[4].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0017CB7C; } }
    c.r[2].d[0] = c.r[4].d[0] & 127ull;
    set32(c.r[4], c.r[2].w[0] + 736u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00B50000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CB74u); c.r[5].d[0] = c.r[2].d[0] | 8192ull;  if (depth < kMaxDepth) unit_000D(c, 94u, depth + 1u); else { c.pc = 0x00135450u; return; } if (c.pc != 0x0017CB74u) [[unlikely]] return; }
L_0017CB74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0017CB94; } }
L_0017CB7C:
    c.r[2].d[0] = c.r[4].d[0] & 127ull;
    set32(c.r[4], c.r[2].w[0] + 736u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00B50000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CB90u); c.r[5].d[0] = c.r[2].d[0] | 8192ull;  if (depth < kMaxDepth) unit_0094(c, 32u, depth + 1u); else { c.pc = 0x003502F0u; return; } if (c.pc != 0x0017CB90u) [[unlikely]] return; }
L_0017CB90:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_0017CB94:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0017CBA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C10000u);
    c.r[2].d[0] = c.r[2].d[0] | 14336ull;
    st32((c.r[28].w[0] - 26664u), c.r[2].w[0]);
    set32(c.r[5], c.r[28].w[0] - 26664u);
    set32(c.r[4], 0u + 279u);
    c.budget -= 7;
    { st32((c.r[28].w[0] - 26660u), 0u);  [[clang::musttail]] return unit_0094(c, 42u, depth); }
L_0017CBC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26664u)));
    set32(c.r[5], c.r[28].w[0] - 26272u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CBD8u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000D(c, 266u, depth + 1u); else { c.pc = 0x00137B60u; return; } if (c.pc != 0x0017CBD8u) [[unlikely]] return; }
L_0017CBD8:
    set32(c.r[4], ld32((c.r[28].w[0] - 26660u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[5], c.r[2].w[0] - 19376u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CBECu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000D(c, 266u, depth + 1u); else { c.pc = 0x00137B60u; return; } if (c.pc != 0x0017CBECu) [[unlikely]] return; }
L_0017CBEC:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0017CC00:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st64((c.r[29].w[0] + 184u), 0ull);
    st64((c.r[29].w[0] + 176u), 0ull);
    st64((c.r[29].w[0] + 168u), 0ull);
    st64((c.r[29].w[0] + 160u), 0ull);
    st64((c.r[29].w[0] + 152u), 0ull);
    st64((c.r[29].w[0] + 144u), 0ull);
    st64((c.r[29].w[0] + 136u), 0ull);
    st64((c.r[29].w[0] + 128u), 0ull);
    st64((c.r[29].w[0] + 120u), 0ull);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CC4Cu); st64((c.r[29].w[0] + 112u), 0ull);  if (depth < kMaxDepth) unit_001F(c, 88u, depth + 1u); else { c.pc = 0x0017CFF0u; return; } if (c.pc != 0x0017CC4Cu) [[unlikely]] return; }
L_0017CC4C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00F30000u);
    c.r[3].d[0] = c.r[3].d[0] | 22528ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A40000u);
    st32((c.r[1].w[0] + 28128u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x013D0000u);
    c.r[3].d[0] = c.r[3].d[0] | 38912ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A40000u);
    st32((c.r[1].w[0] + 28132u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[20].d[0] = 0ull << 56;
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 56);
    c.r[1].d[0] = c.r[20].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[1].d[0] == 0ull; st8((c.r[3].w[0] + 513u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0017CDB0; } }
    set32(c.r[3], 0u + 21728u);
    mmi::mult(c, 0, c.r[20].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], c.r[3].w[0] + 26848u);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[20].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[20].w[0]);
    set32(c.r[4], c.r[3].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[3], c.r[3].w[0] - 7520u);
    set32(c.r[17], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 11;
L_0017CCB0:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[20].w[0]);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 348u)));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 354u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 390u)));
    c.r[3].d[0] = c.r[9].d[0] & 63ull;
    c.budget -= 10;
    { const bool t = c.r[9].d[0] == c.r[4].d[0]; c.r[3].d[0] = c.r[5].d[0] << (c.r[3].w[0] & 63u);  if (t) { goto L_0017CD90; } }
    c.r[19].d[0] = c.r[7].d[0] << 56;
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 56);
    set32(c.r[4], c.r[19].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[19].w[0]);
    set32(c.r[4], c.r[4].w[0] << 3);
    c.r[18].d[0] = c.r[8].d[0] << 56;
    set32(c.r[6], c.r[4].w[0] + c.r[29].w[0]);
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 56);
    set32(c.r[4], c.r[18].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[10], c.r[4].w[0] + 112u);
    c.r[4].d[0] = ld64((c.r[10].w[0]));
    c.r[4].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 15;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0017CD90; } }
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[20].w[0]));
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[6].d[0] = ld64((c.r[10].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[2], c.r[2].w[0] - 22128u);
    set32(c.r[4], c.r[9].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = c.r[6].d[0] | c.r[3].d[0];
    st64((c.r[10].w[0]), c.r[3].d[0]);
    set32(c.r[21], ld32((c.r[2].w[0])));
    mmi::paddub(c.r[6], c.r[20], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00180000u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CD58u); set32(c.r[4], c.r[2].w[0] - 26544u);  if (depth < kMaxDepth) unit_0093(c, 253u, depth + 1u); else { c.pc = 0x0034F7F0u; return; } if (c.pc != 0x0017CD58u) [[unlikely]] return; }
L_0017CD58:
    set32(c.r[2], c.r[18].w[0] << 1);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CD74u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0094(c, 42u, depth + 1u); else { c.pc = 0x003503F0u; return; } if (c.pc != 0x0017CD74u) [[unlikely]] return; }
L_0017CD74:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00180000u);
    set32(c.r[4], c.r[2].w[0] - 26416u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CD88u); mmi::paddub(c.r[6], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 253u, depth + 1u); else { c.pc = 0x0034F7F0u; return; } if (c.pc != 0x0017CD88u) [[unlikely]] return; }
L_0017CD88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[20].w[0] + 1u);  if (t) { goto L_0017CD9C; } }
L_0017CD90:
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 3;
L_0017CD9C:
    c.r[3].d[0] = c.r[20].sd[0] < 6ll ? 1ull : 0ull;
    set32(c.r[16], c.r[16].w[0] + 21728u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017CCB0u | kUnwind; return; } goto L_0017CCB0; } }
    c.budget -= 1;
L_0017CDB0:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_0017CDE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CDF4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_001F(c, 88u, depth + 1u); else { c.pc = 0x0017CFF0u; return; } if (c.pc != 0x0017CDF4u) [[unlikely]] return; }
L_0017CDF4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[16], c.r[3].w[0] + 26848u);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 3;
L_0017CE00:
    c.r[3].d[0] = ld8((c.r[16].w[0]));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_0017CFCC; }
    set32(c.r[6], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CE24u); st16((c.r[16].w[0] + 21712u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000D(c, 209u, depth + 1u); else { c.pc = 0x00136EF0u; return; } if (c.pc != 0x0017CE24u) [[unlikely]] return; }
L_0017CE24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CE2Cu); set32(c.r[4], ld32((c.r[16].w[0] + 20u)));  if (depth < kMaxDepth) unit_000D(c, 168u, depth + 1u); else { c.pc = 0x00136A50u; return; } if (c.pc != 0x0017CE2Cu) [[unlikely]] return; }
L_0017CE2C:
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.r[1].d[0] = c.r[2].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[2].sd[0] < 48ll ? 1ull : 0ull;  if (t) { goto L_0017CEF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CE48u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_001F(c, 103u, depth + 1u); else { c.pc = 0x0017D280u; return; } if (c.pc != 0x0017CE48u) [[unlikely]] return; }
L_0017CE48:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[6], c.r[2].w[0] + 21168u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 6u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[5], c.r[2].w[0] - 16096u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[7].w[0] << 4);
    set32(c.r[7], c.r[2].w[0] - c.r[7].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[7].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[4], c.r[2].w[0] - 16032u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[3], c.r[2].w[0] - 14096u);
    set32(c.r[2], c.r[5].w[0] + c.r[6].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 43;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_0017CFB8; } }
    c.r[1].d[0] = c.r[2].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 1;
L_0017CEF8:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_0017CF78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CF08u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_001F(c, 108u, depth + 1u); else { c.pc = 0x0017D800u; return; } if (c.pc != 0x0017CF08u) [[unlikely]] return; }
L_0017CF08:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[5], c.r[2].w[0] + 21072u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 6u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[3], c.r[2].w[0] - 16096u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st32((c.r[2].w[0] - 128u), c.r[16].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[2], c.r[2].w[0] - 15936u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] - 128u)));
    c.budget -= 27;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0017CFB8; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_0017CF78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CF80u);  if (depth < kMaxDepth) unit_001F(c, 111u, depth + 1u); else { c.pc = 0x0017DA80u; return; } if (c.pc != 0x0017CF80u) [[unlikely]] return; }
L_0017CF80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[4], c.r[2].w[0] + 21008u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[3], c.r[2].w[0] - 16096u);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] - 192u), c.r[16].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 14;
L_0017CFB8:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CFC4u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));  if (depth < kMaxDepth) unit_0028(c, 94u, depth + 1u); else { c.pc = 0x001A1400u; return; } if (c.pc != 0x0017CFC4u) [[unlikely]] return; }
L_0017CFC4:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 2;
L_0017CFCC:
    c.r[3].d[0] = c.r[17].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 21728u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017CE00u | kUnwind; return; } goto L_0017CE00; } }
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0017CFF0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[10], c.r[3].w[0] + 11280u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[11], c.r[3].w[0] + 15728u);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    c.budget -= 6;
L_0017D008:
    set32(c.r[8], c.r[4].w[0] - 18864u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    mmi::paddub(c.r[7], c.r[10], c.r[0]);
    mmi::paddub(c.r[9], c.r[11], c.r[0]);
    c.budget -= 4;
L_0017D018:
    c.r[12].d[0] = ld8((c.r[8].w[0]));
    c.budget -= 3;
    { const bool t = c.r[12].d[0] == 0ull; set32(c.r[3], ld32((c.r[7].w[0])));  if (t) { goto L_0017D048; } }
    c.budget -= 1;
L_0017D028:
    st32((c.r[3].w[0] + 8u), 0u);
    set32(c.r[12], c.r[12].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 32u);
    c.budget -= 7;
    { const bool t = c.r[12].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017D028u | kUnwind; return; } goto L_0017D028; } }
    c.budget -= 1;
L_0017D048:
    set32(c.r[3], ld32((c.r[9].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_0017D084; }
    c.r[12].d[0] = ld8((c.r[8].w[0]));
    c.budget -= 3;
    { const bool t = c.r[12].d[0] == 0ull;  if (t) { goto L_0017D080; } }
L_0017D060:
    st32((c.r[3].w[0] + 8u), 0u);
    set32(c.r[12], c.r[12].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 32u);
    c.budget -= 7;
    { const bool t = c.r[12].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017D060u | kUnwind; return; } goto L_0017D060; } }
    c.budget -= 1;
L_0017D080:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_0017D084:
    set32(c.r[7], c.r[7].w[0] + 4u);
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[3].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(21ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[9], c.r[9].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017D018u | kUnwind; return; } goto L_0017D018; } }
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[10], c.r[10].w[0] + 84u);
    c.r[3].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[11], c.r[11].w[0] + 84u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017D008u | kUnwind; return; } goto L_0017D008; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[5], c.r[3].w[0] + 16672u);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 3;
L_0017D0B8:
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    mmi::paddub(c.r[4], c.r[5], c.r[0]);
    c.budget -= 2;
L_0017D0C0:
    st32((c.r[4].w[0] + 8u), 0u);
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017D0C0u | kUnwind; return; } goto L_0017D0C0; } }
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 384u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017D0B8u | kUnwind; return; } goto L_0017D0B8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[4], c.r[3].w[0] - 15120u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 3;
L_0017D0F8:
    st32((c.r[4].w[0] + 8u), 0u);
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017D0F8u | kUnwind; return; } goto L_0017D0F8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[5], c.r[3].w[0] + 27520u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[6], c.r[3].w[0] + 26720u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[7], c.r[3].w[0] + 26480u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[8], c.r[3].w[0] + 26240u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[9], c.r[3].w[0] + 27488u);
    mmi::paddub(c.r[10], c.r[0], c.r[0]);
    c.budget -= 11;
L_0017D140:
    st32((c.r[5].w[0]), 0u);
    st32((c.r[5].w[0] + 4u), 0u);
    st32((c.r[5].w[0] + 8u), 0u);
    mmi::paddub(c.r[11], c.r[0], c.r[0]);
    mmi::paddub(c.r[4], c.r[6], c.r[0]);
    c.budget -= 6;
L_0017D158:
    set32(c.r[11], c.r[11].w[0] + 1u);
    st32((c.r[4].w[0]), 0u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.r[3].d[0] = c.r[11].d[0] < static_cast<std::uint64_t>(32ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017D158u | kUnwind; return; } goto L_0017D158; } }
    mmi::paddub(c.r[11], c.r[0], c.r[0]);
    mmi::paddub(c.r[4], c.r[7], c.r[0]);
    c.budget -= 3;
L_0017D180:
    set32(c.r[11], c.r[11].w[0] + 1u);
    st32((c.r[4].w[0]), 0u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.r[3].d[0] = c.r[11].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017D180u | kUnwind; return; } goto L_0017D180; } }
    mmi::paddub(c.r[11], c.r[0], c.r[0]);
    mmi::paddub(c.r[4], c.r[8], c.r[0]);
    c.budget -= 3;
L_0017D1A8:
    set32(c.r[11], c.r[11].w[0] + 1u);
    st32((c.r[4].w[0]), 0u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.r[3].d[0] = c.r[11].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017D1A8u | kUnwind; return; } goto L_0017D1A8; } }
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[9].w[0]), 0u);
    set32(c.r[5], c.r[5].w[0] + 12u);
    set32(c.r[6], c.r[6].w[0] + 128u);
    set32(c.r[7], c.r[7].w[0] + 40u);
    set32(c.r[8], c.r[8].w[0] + 40u);
    c.r[3].d[0] = c.r[10].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[9], c.r[9].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017D140u | kUnwind; return; } goto L_0017D140; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[3], c.r[3].w[0] + 22016u);
    st32((c.r[28].w[0] - 26228u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[3], c.r[3].w[0] + 21168u);
    set32(c.r[4], 0u + 210u);
    c.budget -= 6;
L_0017D200:
    st32((c.r[3].w[0]), 0u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017D200u | kUnwind; return; } goto L_0017D200; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[4], c.r[3].w[0] + 21072u);
    set32(c.r[3], 0u + 22u);
    c.budget -= 3;
L_0017D228:
    st32((c.r[4].w[0]), 0u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017D228u | kUnwind; return; } goto L_0017D228; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[4], c.r[3].w[0] + 21008u);
    set32(c.r[3], 0u + 14u);
    c.budget -= 3;
L_0017D250:
    st32((c.r[4].w[0]), 0u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017D250u | kUnwind; return; } goto L_0017D250; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0017D280:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 6u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[7], c.r[3].w[0] + 11280u);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 1u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[8], c.r[9].w[0] << 3);
    set32(c.r[9], c.r[8].w[0] - c.r[9].w[0]);
    set32(c.r[8], c.r[9].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] - c.r[9].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[6].w[0])));
    set32(c.r[6], c.r[3].w[0] << 5);
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[3].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[3], c.r[3].w[0] + 27520u);
    set32(c.r[7], c.r[7].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[7].w[0] + 8u), c.r[3].w[0]);
    c.r[6].d[0] = ld8((c.r[4].w[0] + 1u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[8], c.r[3].w[0] - 13488u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[5], c.r[3].w[0] + 26720u);
    st16((c.r[7].w[0] + 14u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[7].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[3], c.r[3].w[0] + 27520u);
    set32(c.r[9], c.r[9].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[10], c.r[6].w[0] << 2);
    set32(c.r[9], ld32((c.r[8].w[0])));
    set32(c.r[6], c.r[7].w[0] << 7);
    set32(c.r[8], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[7].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[9].w[0] + c.r[10].w[0]);
    set32(c.r[7], ld32((c.r[6].w[0])));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[6], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[6].w[0]), c.r[8].w[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    mmi::paddub(c.r[3], c.r[4], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[12], 0u + 1u);
    set32(c.r[10], c.r[8].w[0] + 26720u);
    c.budget -= 54;
L_0017D358:
    set32(c.r[8], ld32((c.r[28].w[0] - 26228u)));
    set32(c.r[13], c.r[3].w[0] + 48u);
    set32(c.r[11], c.r[3].w[0] + 10640u);
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(0u));
    c.r[9].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[8], ld32((c.r[28].w[0] - 26228u)));
    st8((c.r[8].w[0] + 1u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[8], ld32((c.r[28].w[0] - 26228u)));
    st8((c.r[8].w[0] + 2u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[8], ld32((c.r[28].w[0] - 26228u)));
    st8((c.r[8].w[0] + 3u), static_cast<std::uint8_t>(c.r[9].w[0]));
    set32(c.r[8], ld32((c.r[28].w[0] - 26228u)));
    st8((c.r[8].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[9], ld32((c.r[28].w[0] - 26228u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[8].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(19ll) ? 1ull : 0ull;
    st32((c.r[9].w[0] + 8u), c.r[13].w[0]);
    set32(c.r[9], ld32((c.r[28].w[0] - 26228u)));
    st32((c.r[9].w[0] + 12u), c.r[11].w[0]);
    st16((c.r[3].w[0] + 146u), static_cast<std::uint16_t>(c.r[12].w[0]));
    st16((c.r[3].w[0] + 10738u), static_cast<std::uint16_t>(c.r[12].w[0]));
    c.r[9].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[11], ld32((c.r[28].w[0] - 26228u)));
    set32(c.r[3], c.r[3].w[0] + 240u);
    set32(c.r[9], c.r[9].w[0] << 7);
    set32(c.r[9], c.r[10].w[0] + c.r[9].w[0]);
    set32(c.r[9], c.r[6].w[0] + c.r[9].w[0]);
    st32((c.r[9].w[0]), c.r[11].w[0]);
    set32(c.r[9], ld32((c.r[28].w[0] - 26228u)));
    set32(c.r[6], c.r[6].w[0] + 4u);
    set32(c.r[9], c.r[9].w[0] + 16u);
    c.budget -= 35;
    { const bool t = c.r[8].d[0] != 0ull; st32((c.r[28].w[0] - 26228u), c.r[9].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017D358u | kUnwind; return; } goto L_0017D358; } }
    c.r[6].d[0] = ld8((c.r[7].w[0]));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { goto L_0017D4E0; } }
    set32(c.r[8], c.r[5].w[0] << 2);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[10], c.r[9].w[0] + 26720u);
    c.budget -= 4;
L_0017D400:
    set32(c.r[9], ld32((c.r[28].w[0] - 26228u)));
    set32(c.r[6], c.r[6].w[0] - 1u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(0u));
    c.r[11].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[9], ld32((c.r[28].w[0] - 26228u)));
    st8((c.r[9].w[0] + 1u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[9], ld32((c.r[28].w[0] - 26228u)));
    st8((c.r[9].w[0] + 2u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[9], ld32((c.r[28].w[0] - 26228u)));
    st8((c.r[9].w[0] + 3u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[11].d[0] = ld8((c.r[7].w[0]));
    set32(c.r[9], ld32((c.r[28].w[0] - 26228u)));
    st8((c.r[9].w[0] + 4u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[12].d[0] = ld8((c.r[7].w[0]));
    set32(c.r[9], ld32((c.r[28].w[0] - 26228u)));
    set32(c.r[11], c.r[12].w[0] << 4);
    set32(c.r[11], c.r[11].w[0] - c.r[12].w[0]);
    set32(c.r[11], c.r[11].w[0] << 4);
    set32(c.r[11], c.r[4].w[0] + c.r[11].w[0]);
    set32(c.r[11], c.r[11].w[0] + 48u);
    st32((c.r[9].w[0] + 8u), c.r[11].w[0]);
    c.r[12].d[0] = ld8((c.r[7].w[0]));
    set32(c.r[9], ld32((c.r[28].w[0] - 26228u)));
    set32(c.r[11], c.r[12].w[0] << 4);
    set32(c.r[11], c.r[11].w[0] - c.r[12].w[0]);
    set32(c.r[11], c.r[11].w[0] << 4);
    set32(c.r[11], c.r[4].w[0] + c.r[11].w[0]);
    set32(c.r[11], c.r[11].w[0] + 10640u);
    st32((c.r[9].w[0] + 12u), c.r[11].w[0]);
    c.r[11].d[0] = ld8((c.r[7].w[0]));
    set32(c.r[9], c.r[11].w[0] << 4);
    set32(c.r[9], c.r[9].w[0] - c.r[11].w[0]);
    set32(c.r[9], c.r[9].w[0] << 4);
    set32(c.r[9], c.r[4].w[0] + c.r[9].w[0]);
    st16((c.r[9].w[0] + 146u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[11].d[0] = ld8((c.r[7].w[0]));
    set32(c.r[9], c.r[11].w[0] << 4);
    set32(c.r[9], c.r[9].w[0] - c.r[11].w[0]);
    set32(c.r[9], c.r[9].w[0] << 4);
    set32(c.r[9], c.r[4].w[0] + c.r[9].w[0]);
    st16((c.r[9].w[0] + 10738u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[9].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[11], ld32((c.r[28].w[0] - 26228u)));
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[9], c.r[9].w[0] << 7);
    set32(c.r[9], c.r[10].w[0] + c.r[9].w[0]);
    set32(c.r[9], c.r[8].w[0] + c.r[9].w[0]);
    st32((c.r[9].w[0]), c.r[11].w[0]);
    set32(c.r[9], ld32((c.r[28].w[0] - 26228u)));
    set32(c.r[8], c.r[8].w[0] + 4u);
    set32(c.r[9], c.r[9].w[0] + 16u);
    c.budget -= 56;
    { const bool t = c.r[6].d[0] != 0ull; st32((c.r[28].w[0] - 26228u), c.r[9].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017D400u | kUnwind; return; } goto L_0017D400; } }
L_0017D4E0:
    c.r[8].d[0] = ld8((c.r[7].w[0]));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { goto L_0017D628; } }
    c.r[9].d[0] = ld8((c.r[4].w[0] + 1u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[5], c.r[3].w[0] + 26480u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[3], c.r[3].w[0] + 27524u);
    set32(c.r[6], c.r[9].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[9].w[0]);
    set32(c.r[6], c.r[6].w[0] << 3);
    set32(c.r[6], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[9].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[9].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0]), c.r[6].w[0]);
    c.budget -= 16;
    { const bool t = c.r[8].d[0] == 0ull; mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (t) { goto L_0017D628; } }
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[10], c.r[9].w[0] + 26480u);
    c.budget -= 4;
L_0017D53C:
    set32(c.r[9], ld32((c.r[28].w[0] - 26228u)));
    set32(c.r[8], c.r[8].w[0] - 1u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(0u));
    c.r[11].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[9], ld32((c.r[28].w[0] - 26228u)));
    st8((c.r[9].w[0] + 1u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[9], ld32((c.r[28].w[0] - 26228u)));
    st8((c.r[9].w[0] + 2u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[9], ld32((c.r[28].w[0] - 26228u)));
    st8((c.r[9].w[0] + 3u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[11].d[0] = ld8((c.r[7].w[0]));
    set32(c.r[9], ld32((c.r[28].w[0] - 26228u)));
    st8((c.r[9].w[0] + 4u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[12].d[0] = ld8((c.r[7].w[0]));
    set32(c.r[9], ld32((c.r[28].w[0] - 26228u)));
    set32(c.r[11], c.r[12].w[0] << 4);
    set32(c.r[11], c.r[11].w[0] - c.r[12].w[0]);
    set32(c.r[11], c.r[11].w[0] << 4);
    set32(c.r[11], c.r[4].w[0] + c.r[11].w[0]);
    set32(c.r[11], c.r[11].w[0] + 48u);
    st32((c.r[9].w[0] + 8u), c.r[11].w[0]);
    c.r[12].d[0] = ld8((c.r[7].w[0]));
    set32(c.r[9], ld32((c.r[28].w[0] - 26228u)));
    set32(c.r[11], c.r[12].w[0] << 4);
    set32(c.r[11], c.r[11].w[0] - c.r[12].w[0]);
    set32(c.r[11], c.r[11].w[0] << 4);
    set32(c.r[11], c.r[4].w[0] + c.r[11].w[0]);
    set32(c.r[11], c.r[11].w[0] + 10640u);
    st32((c.r[9].w[0] + 12u), c.r[11].w[0]);
    c.r[11].d[0] = ld8((c.r[7].w[0]));
    set32(c.r[9], c.r[11].w[0] << 4);
    set32(c.r[9], c.r[9].w[0] - c.r[11].w[0]);
    set32(c.r[9], c.r[9].w[0] << 4);
    set32(c.r[9], c.r[4].w[0] + c.r[9].w[0]);
    st16((c.r[9].w[0] + 146u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[11].d[0] = ld8((c.r[7].w[0]));
    set32(c.r[9], c.r[11].w[0] << 4);
    set32(c.r[9], c.r[9].w[0] - c.r[11].w[0]);
    set32(c.r[9], c.r[9].w[0] << 4);
    set32(c.r[9], c.r[4].w[0] + c.r[9].w[0]);
    st16((c.r[9].w[0] + 10738u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[11].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[12], ld32((c.r[28].w[0] - 26228u)));
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[9], c.r[11].w[0] << 2);
    set32(c.r[9], c.r[9].w[0] + c.r[11].w[0]);
    set32(c.r[9], c.r[9].w[0] << 3);
    set32(c.r[9], c.r[10].w[0] + c.r[9].w[0]);
    set32(c.r[9], c.r[5].w[0] + c.r[9].w[0]);
    st32((c.r[9].w[0]), c.r[12].w[0]);
    set32(c.r[9], ld32((c.r[28].w[0] - 26228u)));
    set32(c.r[5], c.r[5].w[0] + 4u);
    set32(c.r[9], c.r[9].w[0] + 16u);
    c.budget -= 58;
    { const bool t = c.r[8].d[0] != 0ull; st32((c.r[28].w[0] - 26228u), c.r[9].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017D53Cu | kUnwind; return; } goto L_0017D53C; } }
    c.budget -= 1;
L_0017D628:
    c.r[8].d[0] = ld8((c.r[7].w[0]));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { goto L_0017D7F8; } }
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 6u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[9], c.r[3].w[0] + 15728u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[10], c.r[11].w[0] << 3);
    set32(c.r[11], c.r[10].w[0] - c.r[11].w[0]);
    set32(c.r[10], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] - c.r[11].w[0]);
    set32(c.r[10], c.r[10].w[0] << 2);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[9].w[0]);
    set32(c.r[10], ld32((c.r[6].w[0])));
    set32(c.r[6], c.r[5].w[0] << 5);
    set32(c.r[5], c.r[3].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[3], c.r[3].w[0] + 27488u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[10], c.r[10].w[0] + c.r[6].w[0]);
    st32((c.r[10].w[0] + 8u), c.r[3].w[0]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 1u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[9], c.r[3].w[0] + 26240u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[6], c.r[3].w[0] + 27528u);
    st16((c.r[10].w[0] + 14u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[11].d[0] = ld8((c.r[4].w[0] + 1u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[5], c.r[3].w[0] + 26240u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[3], c.r[3].w[0] + 27488u);
    set32(c.r[10], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    set32(c.r[10], c.r[10].w[0] << 3);
    set32(c.r[10], c.r[9].w[0] + c.r[10].w[0]);
    set32(c.r[9], c.r[11].w[0] << 1);
    set32(c.r[9], c.r[9].w[0] + c.r[11].w[0]);
    set32(c.r[9], c.r[9].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[9].w[0]);
    st32((c.r[6].w[0]), c.r[10].w[0]);
    c.r[9].d[0] = ld8((c.r[4].w[0] + 1u));
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    set32(c.r[10], c.r[9].w[0] << 2);
    set32(c.r[9], c.r[10].w[0] + c.r[9].w[0]);
    set32(c.r[9], c.r[9].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[10].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[9].w[0]);
    c.budget -= 51;
    { const bool t = c.r[8].d[0] == 0ull; st32((c.r[3].w[0]), c.r[5].w[0]);  if (t) { goto L_0017D7F8; } }
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[10], c.r[9].w[0] + 26240u);
    c.budget -= 4;
L_0017D710:
    set32(c.r[9], ld32((c.r[28].w[0] - 26228u)));
    set32(c.r[8], c.r[8].w[0] - 1u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(0u));
    c.r[11].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[9], ld32((c.r[28].w[0] - 26228u)));
    st8((c.r[9].w[0] + 1u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[9], ld32((c.r[28].w[0] - 26228u)));
    st8((c.r[9].w[0] + 2u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[9], ld32((c.r[28].w[0] - 26228u)));
    st8((c.r[9].w[0] + 3u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[11].d[0] = ld8((c.r[7].w[0]));
    set32(c.r[9], ld32((c.r[28].w[0] - 26228u)));
    st8((c.r[9].w[0] + 4u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[12].d[0] = ld8((c.r[7].w[0]));
    set32(c.r[9], ld32((c.r[28].w[0] - 26228u)));
    set32(c.r[11], c.r[12].w[0] << 4);
    set32(c.r[11], c.r[11].w[0] - c.r[12].w[0]);
    set32(c.r[11], c.r[11].w[0] << 4);
    set32(c.r[11], c.r[4].w[0] + c.r[11].w[0]);
    set32(c.r[11], c.r[11].w[0] + 48u);
    st32((c.r[9].w[0] + 8u), c.r[11].w[0]);
    c.r[12].d[0] = ld8((c.r[7].w[0]));
    set32(c.r[9], ld32((c.r[28].w[0] - 26228u)));
    set32(c.r[11], c.r[12].w[0] << 4);
    set32(c.r[11], c.r[11].w[0] - c.r[12].w[0]);
    set32(c.r[11], c.r[11].w[0] << 4);
    set32(c.r[11], c.r[4].w[0] + c.r[11].w[0]);
    set32(c.r[11], c.r[11].w[0] + 10640u);
    st32((c.r[9].w[0] + 12u), c.r[11].w[0]);
    c.r[11].d[0] = ld8((c.r[7].w[0]));
    set32(c.r[9], c.r[11].w[0] << 4);
    set32(c.r[9], c.r[9].w[0] - c.r[11].w[0]);
    set32(c.r[9], c.r[9].w[0] << 4);
    set32(c.r[9], c.r[4].w[0] + c.r[9].w[0]);
    st16((c.r[9].w[0] + 146u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[11].d[0] = ld8((c.r[7].w[0]));
    set32(c.r[9], c.r[11].w[0] << 4);
    set32(c.r[9], c.r[9].w[0] - c.r[11].w[0]);
    set32(c.r[9], c.r[9].w[0] << 4);
    set32(c.r[9], c.r[4].w[0] + c.r[9].w[0]);
    st16((c.r[9].w[0] + 10738u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[11].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[12], ld32((c.r[28].w[0] - 26228u)));
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[9], c.r[11].w[0] << 2);
    set32(c.r[9], c.r[9].w[0] + c.r[11].w[0]);
    set32(c.r[9], c.r[9].w[0] << 3);
    set32(c.r[9], c.r[10].w[0] + c.r[9].w[0]);
    set32(c.r[9], c.r[5].w[0] + c.r[9].w[0]);
    st32((c.r[9].w[0]), c.r[12].w[0]);
    set32(c.r[9], ld32((c.r[28].w[0] - 26228u)));
    set32(c.r[5], c.r[5].w[0] + 4u);
    set32(c.r[9], c.r[9].w[0] + 16u);
    c.budget -= 58;
    { const bool t = c.r[8].d[0] != 0ull; st32((c.r[28].w[0] - 26228u), c.r[9].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017D710u | kUnwind; return; } goto L_0017D710; } }
L_0017D7F8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0017D800:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[8].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[5], c.r[3].w[0] + 27520u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 6u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[9], c.r[7].w[0] - 32u);
    set32(c.r[7], c.r[8].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] + 16680u);
    set32(c.r[5], c.r[5].w[0] << 7);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[10], c.r[9].w[0] << 5);
    set32(c.r[3], c.r[10].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.r[7].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[6], c.r[3].w[0] + 16686u);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 6u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[5], c.r[9].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] - 13392u);
    c.r[9].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[7], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[8].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[10].w[0] + c.r[3].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.r[8].d[0] = ld8((c.r[4].w[0] + 1u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[5], c.r[3].w[0] + 26720u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[6], c.r[8].w[0] << 7);
    set32(c.r[6], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[8].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[3].w[0] + 27520u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0]), c.r[6].w[0]);
    set32(c.r[3], 0u + 1u);
    set32(c.r[11], c.r[10].w[0] + 26720u);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    mmi::paddub(c.r[8], c.r[4], c.r[0]);
    c.budget -= 53;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[9], c.r[0], c.r[0]);  if (t) { goto L_0017D958; } }
L_0017D8D4:
    set32(c.r[10], ld32((c.r[28].w[0] - 26228u)));
    set32(c.r[13], c.r[8].w[0] + 48u);
    set32(c.r[12], c.r[8].w[0] + 10640u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[10].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[14].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[10], ld32((c.r[28].w[0] - 26228u)));
    st8((c.r[10].w[0] + 1u), static_cast<std::uint8_t>(c.r[14].w[0]));
    c.r[14].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[10], ld32((c.r[28].w[0] - 26228u)));
    st8((c.r[10].w[0] + 2u), static_cast<std::uint8_t>(c.r[14].w[0]));
    set32(c.r[10], ld32((c.r[28].w[0] - 26228u)));
    st8((c.r[10].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[10], ld32((c.r[28].w[0] - 26228u)));
    st8((c.r[10].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[10], ld32((c.r[28].w[0] - 26228u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    st32((c.r[10].w[0] + 8u), c.r[13].w[0]);
    set32(c.r[10], ld32((c.r[28].w[0] - 26228u)));
    st32((c.r[10].w[0] + 12u), c.r[12].w[0]);
    st16((c.r[8].w[0] + 146u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[8].w[0] + 10738u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[10].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[12], ld32((c.r[28].w[0] - 26228u)));
    set32(c.r[8], c.r[8].w[0] + 240u);
    set32(c.r[10], c.r[10].w[0] << 7);
    set32(c.r[10], c.r[11].w[0] + c.r[10].w[0]);
    set32(c.r[10], c.r[9].w[0] + c.r[10].w[0]);
    st32((c.r[10].w[0]), c.r[12].w[0]);
    set32(c.r[10], ld32((c.r[28].w[0] - 26228u)));
    set32(c.r[9], c.r[9].w[0] + 4u);
    set32(c.r[10], c.r[10].w[0] + 16u);
    st32((c.r[28].w[0] - 26228u), c.r[10].w[0]);
    c.budget -= 33;
L_0017D958:
    c.r[10].d[0] = ld8((c.r[7].w[0]));
    c.r[10].d[0] = c.r[5].d[0] < c.r[10].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[10].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017D8D4u | kUnwind; return; } goto L_0017D8D4; } }
    c.r[3].d[0] = ld8((c.r[7].w[0] + 1u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0017DA70; } }
    c.r[9].d[0] = ld8((c.r[4].w[0] + 1u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[5], c.r[3].w[0] + 26480u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[8], c.r[9].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[8], c.r[8].w[0] << 3);
    set32(c.r[8], c.r[5].w[0] + c.r[8].w[0]);
    set32(c.r[5], c.r[9].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[9].w[0]);
    set32(c.r[3], c.r[3].w[0] + 27524u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0]), c.r[8].w[0]);
    set32(c.r[3], c.r[6].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] - c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[5], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], 0u + 1u);
    set32(c.r[11], c.r[10].w[0] + 26480u);
    mmi::paddub(c.r[9], c.r[0], c.r[0]);
    c.budget -= 24;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[8], c.r[0], c.r[0]);  if (t) { goto L_0017DA60; } }
L_0017D9D4:
    set32(c.r[10], ld32((c.r[28].w[0] - 26228u)));
    set32(c.r[13], c.r[5].w[0] + 48u);
    set32(c.r[12], c.r[5].w[0] + 10640u);
    set32(c.r[9], c.r[9].w[0] + 1u);
    st8((c.r[10].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[14].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[10], ld32((c.r[28].w[0] - 26228u)));
    st8((c.r[10].w[0] + 1u), static_cast<std::uint8_t>(c.r[14].w[0]));
    c.r[14].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[10], ld32((c.r[28].w[0] - 26228u)));
    st8((c.r[10].w[0] + 2u), static_cast<std::uint8_t>(c.r[14].w[0]));
    set32(c.r[10], ld32((c.r[28].w[0] - 26228u)));
    st8((c.r[10].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[10], ld32((c.r[28].w[0] - 26228u)));
    st8((c.r[10].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[10], ld32((c.r[28].w[0] - 26228u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    st32((c.r[10].w[0] + 8u), c.r[13].w[0]);
    set32(c.r[10], ld32((c.r[28].w[0] - 26228u)));
    st32((c.r[10].w[0] + 12u), c.r[12].w[0]);
    st16((c.r[5].w[0] + 146u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[5].w[0] + 10738u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[12].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[13], ld32((c.r[28].w[0] - 26228u)));
    set32(c.r[5], c.r[5].w[0] + 240u);
    set32(c.r[10], c.r[12].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[12].w[0]);
    set32(c.r[10], c.r[10].w[0] << 3);
    set32(c.r[10], c.r[11].w[0] + c.r[10].w[0]);
    set32(c.r[10], c.r[8].w[0] + c.r[10].w[0]);
    st32((c.r[10].w[0]), c.r[13].w[0]);
    set32(c.r[10], ld32((c.r[28].w[0] - 26228u)));
    set32(c.r[8], c.r[8].w[0] + 4u);
    set32(c.r[10], c.r[10].w[0] + 16u);
    st32((c.r[28].w[0] - 26228u), c.r[10].w[0]);
    c.budget -= 35;
L_0017DA60:
    c.r[10].d[0] = ld8((c.r[7].w[0] + 1u));
    c.r[10].d[0] = c.r[9].d[0] < c.r[10].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[10].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017D9D4u | kUnwind; return; } goto L_0017D9D4; } }
L_0017DA70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0017DA80:
    c.r[8].d[0] = ld8((c.r[4].w[0] + 1u));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[5], c.r[3].w[0] + 27520u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[7], c.r[8].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] - 48u);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] - 15112u);
    set32(c.r[7], c.r[6].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    st32((c.r[3].w[0]), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[3].w[0] - 15106u);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[15], 0u + 6u);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[3].w[0] + 7800u);
    c.r[9].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[7], c.r[3].w[0] + c.r[6].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[3], c.r[3].w[0] + 26720u);
    set32(c.r[5], c.r[9].w[0] << 7);
    set32(c.r[8], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[9].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    set32(c.r[5], c.r[3].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[3], c.r[3].w[0] + 27520u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0]), c.r[8].w[0]);
    set32(c.r[3], 0u + 2u);
    set32(c.r[14], 0u + 1u);
    set32(c.r[11], c.r[10].w[0] + 26720u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    mmi::paddub(c.r[8], c.r[4], c.r[0]);
    mmi::paddub(c.r[9], c.r[0], c.r[0]);
    c.budget -= 44;
    { const bool t = 0ull == 0ull; c.r[13].d[0] = 0ull | 32769ull;  if (t) { goto L_0017DBC0; } }
L_0017DB30:
    set32(c.r[10], ld32((c.r[28].w[0] - 26228u)));
    set32(c.r[12], c.r[8].w[0] + 48u);
    st8((c.r[10].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[24].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[10], ld32((c.r[28].w[0] - 26228u)));
    st8((c.r[10].w[0] + 1u), static_cast<std::uint8_t>(c.r[24].w[0]));
    c.r[24].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[10], ld32((c.r[28].w[0] - 26228u)));
    st8((c.r[10].w[0] + 2u), static_cast<std::uint8_t>(c.r[24].w[0]));
    set32(c.r[10], ld32((c.r[28].w[0] - 26228u)));
    st8((c.r[10].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[10], ld32((c.r[28].w[0] - 26228u)));
    st8((c.r[10].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[10], ld32((c.r[28].w[0] - 26228u)));
    st32((c.r[10].w[0] + 8u), c.r[12].w[0]);
    set32(c.r[10], ld32((c.r[28].w[0] - 26228u)));
    c.budget -= 18;
    { const bool t = c.r[6].d[0] != c.r[15].d[0]; st32((c.r[10].w[0] + 12u), 0u);  if (t) { goto L_0017DB88; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0017DB88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[8].w[0] + 146u), static_cast<std::uint16_t>(c.r[14].w[0]));  if (t) { goto L_0017DB90; } }
L_0017DB88:
    st16((c.r[8].w[0] + 146u), static_cast<std::uint16_t>(c.r[13].w[0]));
    c.budget -= 2;
L_0017DB90:
    c.r[10].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[12], ld32((c.r[28].w[0] - 26228u)));
    set32(c.r[8], c.r[8].w[0] + 240u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[10], c.r[10].w[0] << 7);
    set32(c.r[10], c.r[11].w[0] + c.r[10].w[0]);
    set32(c.r[10], c.r[9].w[0] + c.r[10].w[0]);
    st32((c.r[10].w[0]), c.r[12].w[0]);
    set32(c.r[10], ld32((c.r[28].w[0] - 26228u)));
    set32(c.r[9], c.r[9].w[0] + 4u);
    set32(c.r[10], c.r[10].w[0] + 16u);
    st32((c.r[28].w[0] - 26228u), c.r[10].w[0]);
    c.budget -= 12;
L_0017DBC0:
    c.r[10].d[0] = ld8((c.r[7].w[0]));
    c.r[10].d[0] = c.r[5].d[0] < c.r[10].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[10].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017DB30u | kUnwind; return; } goto L_0017DB30; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0017DBE0:
    set32(c.r[5], ld32((c.r[28].w[0] - 26592u)));
    set32(c.r[3], 0u - 16u);
    set32(c.r[5], c.r[5].w[0] + 15u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    st32((c.r[28].w[0] - 26672u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26672u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4u), c.r[3].w[0]);  c.pc = t; return; }
L_0017DC00:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01340000u);
    c.r[3].d[0] = c.r[3].d[0] | 38912ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 26592u), c.r[3].w[0]);  c.pc = t; return; }
L_0017DC10:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st64((c.r[29].w[0] + 80u), 0ull);
    st64((c.r[29].w[0] + 72u), 0ull);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01340000u);
    st64((c.r[29].w[0] + 64u), 0ull);
    c.r[6].d[0] = c.r[2].d[0] | 38912ull;
    st64((c.r[29].w[0] + 56u), 0ull);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00180000u);
    st64((c.r[29].w[0] + 48u), 0ull);
    set32(c.r[4], c.r[2].w[0] - 9216u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DC54u); st32((c.r[3].w[0] + 516u), c.r[6].w[0]);  if (depth < kMaxDepth) unit_0093(c, 253u, depth + 1u); else { c.pc = 0x0034F7F0u; return; } if (c.pc != 0x0017DC54u) [[unlikely]] return; }
L_0017DC54:
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 1;
L_0017DC58:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 348u)));
    c.r[1].d[0] = c.r[7].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 354u)));  if (t) { goto L_0017DD50; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[4], c.r[4].w[0] - 21568u);
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[4].w[0])));
    c.budget -= 7;
    if (c.r[17].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_0017DD54; }
    c.r[6].d[0] = c.r[5].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    set32(c.r[4], c.r[6].w[0] << 1);
    set32(c.r[17], c.r[17].w[0] + c.r[4].w[0]);
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[7].d[0] & 63ull;
    c.r[8].d[0] = c.r[5].d[0] << (c.r[4].w[0] & 63u);
    set32(c.r[4], 0u - 1u);
    c.budget -= 10;
    { const bool t = c.r[7].d[0] == c.r[4].d[0];  if (t) { goto L_0017DD50; } }
    set32(c.r[10], c.r[6].w[0] << 3);
    set32(c.r[4], c.r[10].w[0] + c.r[29].w[0]);
    set32(c.r[9], c.r[4].w[0] + 48u);
    c.r[6].d[0] = ld64((c.r[9].w[0]));
    c.r[4].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0017DD50; } }
    c.r[1].d[0] = c.r[7].sd[0] < 32ll ? 1ull : 0ull;
    c.r[4].d[0] = c.r[6].d[0] | c.r[8].d[0];
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; st64((c.r[9].w[0]), c.r[4].d[0]);  if (t) { goto L_0017DD14; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00180000u);
    set32(c.r[4], c.r[2].w[0] - 9248u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[2], c.r[2].w[0] + 20960u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DD00u); set32(c.r[6], c.r[2].w[0] + c.r[10].w[0]);  if (depth < kMaxDepth) unit_0093(c, 253u, depth + 1u); else { c.pc = 0x0034F7F0u; return; } if (c.pc != 0x0017DD00u) [[unlikely]] return; }
L_0017DD00:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DD0Cu); set32(c.r[5], c.r[28].w[0] - 26672u);  if (depth < kMaxDepth) unit_0094(c, 37u, depth + 1u); else { c.pc = 0x00350370u; return; } if (c.pc != 0x0017DD0Cu) [[unlikely]] return; }
L_0017DD0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017DD50; } }
L_0017DD14:
    c.r[1].d[0] = c.r[7].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0017DD50; } }
    set32(c.r[2], c.r[7].w[0] - 32u);
    set32(c.r[3], c.r[2].w[0] << 3);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00180000u);
    set32(c.r[4], c.r[2].w[0] - 9248u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[2], c.r[2].w[0] + 21056u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DD40u); set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0093(c, 253u, depth + 1u); else { c.pc = 0x0034F7F0u; return; } if (c.pc != 0x0017DD40u) [[unlikely]] return; }
L_0017DD40:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DD4Cu); set32(c.r[5], c.r[28].w[0] - 26672u);  if (depth < kMaxDepth) unit_0094(c, 37u, depth + 1u); else { c.pc = 0x00350370u; return; } if (c.pc != 0x0017DD4Cu) [[unlikely]] return; }
L_0017DD4C:
    c.budget -= 1;
L_0017DD50:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0017DD54:
    c.r[3].d[0] = c.r[16].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017DC58u | kUnwind; return; } goto L_0017DC58; } }
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0017DD80:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    set32(c.r[18], c.r[2].w[0] - 27408u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00180000u);
    set32(c.r[4], c.r[2].w[0] - 2816u);
    set32(c.r[16], c.r[3].w[0] + 360u);
    set32(c.r[19], 0u - 1u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DDBCu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 253u, depth + 1u); else { c.pc = 0x0034F7F0u; return; } if (c.pc != 0x0017DDBCu) [[unlikely]] return; }
L_0017DDBC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00180000u);
    set32(c.r[4], c.r[2].w[0] - 18992u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DDCCu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 253u, depth + 1u); else { c.pc = 0x0034F7F0u; return; } if (c.pc != 0x0017DDCCu) [[unlikely]] return; }
L_0017DDCC:
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 1;
L_0017DDD0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0017DE44; } }
    set32(c.r[5], 0u + 1u);
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[18].w[0] + 2u), static_cast<std::uint16_t>(c.r[17].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00180000u);
    set32(c.r[4], c.r[2].w[0] - 19072u);
    mmi::paddub(c.r[6], c.r[17], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DE04u); st16((c.r[18].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0093(c, 253u, depth + 1u); else { c.pc = 0x0034F7F0u; return; } if (c.pc != 0x0017DE04u) [[unlikely]] return; }
L_0017DE04:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[2], c.r[2].w[0] - 21872u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DE24u); set32(c.r[5], c.r[28].w[0] - 26648u);  if (depth < kMaxDepth) unit_0094(c, 42u, depth + 1u); else { c.pc = 0x003503F0u; return; } if (c.pc != 0x0017DE24u) [[unlikely]] return; }
L_0017DE24:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], c.r[4].w[0] << (c.r[3].w[0] & 31u));
    c.r[3].d[0] = c.r[3].d[0] & 960ull;
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_0017DE4C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[19], c.r[4], c.r[0]);  if (t) { goto L_0017DE48; } }
L_0017DE44:
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_0017DE48:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0017DE4C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 2400u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017DDD0u | kUnwind; return; } goto L_0017DDD0; } }
    c.r[4].d[0] = c.r[19].d[0] << 48;
    set32(c.r[3], 0u - 1u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0017DEA8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01D30000u);
    set32(c.r[4], 0u + 288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DE80u); c.r[5].d[0] = c.r[2].d[0] | 60416ull;  if (depth < kMaxDepth) unit_0094(c, 27u, depth + 1u); else { c.pc = 0x00350270u; return; } if (c.pc != 0x0017DE80u) [[unlikely]] return; }
L_0017DE80:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01D30000u);
    c.r[6].d[0] = c.r[2].d[0] | 60416ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00250000u);
    set32(c.r[4], c.r[2].w[0] - 24960u);
    st32((c.r[3].w[0] + 520u), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 520u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DEA8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0093(c, 253u, depth + 1u); else { c.pc = 0x0034F7F0u; return; } if (c.pc != 0x0017DEA8u) [[unlikely]] return; }
L_0017DEA8:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0017DED0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01B90000u);
    c.r[3].d[0] = c.r[3].d[0] | 52224ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00700000u);
    st32((c.r[1].w[0] - 7552u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00700000u);
    st32((c.r[1].w[0] - 7548u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01C20000u);
    c.r[3].d[0] = c.r[3].d[0] | 11264ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00700000u);
    st32((c.r[1].w[0] - 7544u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00700000u);
    st32((c.r[1].w[0] - 7540u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01D00000u);
    c.r[3].d[0] = c.r[3].d[0] | 44032ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00700000u);
    st32((c.r[1].w[0] - 7536u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[3], 0u + 11u);
    c.budget -= 20;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; st32((c.r[1].w[0] - 7532u), 0u);  if (t) { goto L_0017DF5C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[3], c.r[3].w[0] - 21328u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x01D90000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 256u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[1].w[0] + 2052u), c.r[3].w[0]);  if (t) { goto L_0017DF64; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01E10000u);
    c.r[3].d[0] = c.r[3].d[0] | 19520ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] - 7532u), c.r[3].w[0]);  if (t) { goto L_0017DF64; } }
L_0017DF5C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x01D90000u);
    st32((c.r[1].w[0] + 2052u), 0u);
    c.budget -= 2;
L_0017DF64:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0017DF70:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[6], ld32((c.r[1].w[0] - 7552u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[5], ld32((c.r[1].w[0] - 7544u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 7548u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 7540u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 8568u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 8564u), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 4312u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[1].w[0] - 4308u), c.r[3].w[0]);  c.pc = t; return; }
L_0017DFC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[5], c.r[2].w[0] - 8576u);
    set32(c.r[4], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[16], c.r[3].w[0] + 364u);
    st16((c.r[1].w[0] - 8576u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 364u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[2], 0u - 1u);
    st16((c.r[1].w[0] - 8574u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 18;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[5], c.r[5].w[0] + 4256u);  if (t) { goto L_0017E018; } }
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[5].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0017E01C; } }
L_0017E018:
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_0017E01C:
    set32(c.r[5], c.r[5].w[0] + 4256u);
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(0u));
    set32(c.r[5], c.r[5].w[0] + 4256u);
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(0u));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00180000u);
    set32(c.r[4], c.r[2].w[0] - 8496u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E044u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0093(c, 253u, depth + 1u); else { c.pc = 0x0034F7F0u; return; } if (c.pc != 0x0017E044u) [[unlikely]] return; }
L_0017E044:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[3], c.r[2].w[0] - 20496u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[5], c.r[2].w[0] - 7552u);
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E068u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0094(c, 42u, depth + 1u); else { c.pc = 0x003503F0u; return; } if (c.pc != 0x0017E068u) [[unlikely]] return; }
L_0017E068:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00180000u);
    set32(c.r[4], c.r[2].w[0] - 8336u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E078u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 253u, depth + 1u); else { c.pc = 0x0034F7F0u; return; } if (c.pc != 0x0017E078u) [[unlikely]] return; }
L_0017E078:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00210000u);
    set32(c.r[4], c.r[2].w[0] + 29776u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01D00000u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E090u); c.r[6].d[0] = c.r[2].d[0] | 44032ull;  if (depth < kMaxDepth) unit_0093(c, 253u, depth + 1u); else { c.pc = 0x0034F7F0u; return; } if (c.pc != 0x0017E090u) [[unlikely]] return; }
L_0017E090:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0017E0A0:
    set32(c.r[29], c.r[29].w[0] - 1040u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[5], c.r[3].w[0] - 11824u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 7;
L_0017E0BC:
    st32((c.r[5].w[0] + 8u), 0u);
    st32((c.r[5].w[0] + 28u), 0u);
    set32(c.r[5], c.r[5].w[0] + 32u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017E0BCu | kUnwind; return; } goto L_0017E0BC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[16], c.r[3].w[0] - 8576u);
    set32(c.r[17], 0u + 4u);
    c.budget -= 3;
L_0017E0E4:
    c.r[3].d[0] = ld16((c.r[16].w[0]));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] - 1u);  goto L_0017E28C; }
    mmi::paddub(c.r[3], c.r[0], c.r[0]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 2;
L_0017E0F8:
    st32((c.r[4].w[0] + 3856u), 0u);
    set32(c.r[3], c.r[3].w[0] + 2u);
    st32((c.r[4].w[0] + 3860u), 0u);
    set32(c.r[4], c.r[4].w[0] + 8u);
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017E0F8u | kUnwind; return; } goto L_0017E0F8; } }
    set32(c.r[8], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[9], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[4], c.r[16].w[0] + 3856u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    set32(c.r[6], c.r[29].w[0] + 48u);
    set32(c.r[7], c.r[16].w[0] + 16u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E134u); set32(c.r[10], 0u + 1u);  if (depth < kMaxDepth) unit_000D(c, 201u, depth + 1u); else { c.pc = 0x00136DA0u; return; } if (c.pc != 0x0017E134u) [[unlikely]] return; }
L_0017E134:
    c.r[4].d[0] = ld16((c.r[16].w[0] + 2u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[12], c.r[9].w[0] - 19312u);
    set32(c.r[3], c.r[3].w[0] - 11824u);
    set32(c.r[4], c.r[4].w[0] << 5);
    set32(c.r[5], c.r[16].w[0] + 3920u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0] + 8u), c.r[5].w[0]);
    c.r[5].d[0] = ld16((c.r[16].w[0] + 2u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[4], c.r[3].w[0] - 11824u);
    set32(c.r[6], c.r[16].w[0] + 3856u);
    set32(c.r[5], c.r[5].w[0] << 5);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[4].w[0] + 28u), c.r[6].w[0]);
    c.r[5].d[0] = ld16((c.r[16].w[0] + 2u));
    set32(c.r[3], 0u + 4u);
    set32(c.r[6], c.r[3].w[0] - c.r[17].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[4], c.r[3].w[0] - 11824u);
    set32(c.r[5], c.r[5].w[0] << 5);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st16((c.r[4].w[0] + 14u), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[3], c.r[16].w[0] + 3924u);
    st32((c.r[16].w[0] + 3920u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[3], c.r[3].w[0] - 19760u);
    set32(c.r[10], c.r[9].w[0] - 19312u);
    mmi::paddub(c.r[8], c.r[0], c.r[0]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 36;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[7], c.r[16], c.r[0]);  if (t) { goto L_0017E240; } }
    set32(c.r[9], c.r[4].w[0] + 3988u);
    c.budget -= 1;
L_0017E1C8:
    st32((c.r[5].w[0] + 3924u), c.r[9].w[0]);
    c.r[11].d[0] = ld16((c.r[16].w[0] + 2u));
    set32(c.r[9], c.r[7].w[0] + 16u);
    set32(c.r[5], c.r[5].w[0] + 4u);
    set32(c.r[11], c.r[11].w[0] << 5);
    set32(c.r[11], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[11], c.r[6].w[0] + c.r[11].w[0]);
    c.r[11].d[0] = ld8((c.r[11].w[0]));
    st8((c.r[4].w[0] + 3988u), static_cast<std::uint8_t>(c.r[11].w[0]));
    st8((c.r[4].w[0] + 3989u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 3992u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[11].d[0] = ld16((c.r[16].w[0] + 2u));
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[11], c.r[11].w[0] << 5);
    set32(c.r[11], c.r[12].w[0] + c.r[11].w[0]);
    set32(c.r[11], c.r[6].w[0] + c.r[11].w[0]);
    c.r[11].d[0] = ld8((c.r[11].w[0]));
    st8((c.r[4].w[0] + 3993u), static_cast<std::uint8_t>(c.r[11].w[0]));
    st32((c.r[4].w[0] + 3996u), c.r[9].w[0]);
    c.r[9].d[0] = ld16((c.r[16].w[0] + 2u));
    set32(c.r[4], c.r[4].w[0] + 16u);
    set32(c.r[9], c.r[9].w[0] << 5);
    set32(c.r[9], c.r[10].w[0] + c.r[9].w[0]);
    set32(c.r[9], c.r[6].w[0] + c.r[9].w[0]);
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0])));
    set32(c.r[6], c.r[6].w[0] + 2u);
    c.r[9].d[0] = c.r[9].d[0] & 65280ull;
    st16((c.r[7].w[0] + 114u), static_cast<std::uint16_t>(c.r[9].w[0]));
    set32(c.r[7], c.r[7].w[0] + 240u);
    c.budget -= 30;
L_0017E240:
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 48u)));
    c.r[9].d[0] = c.r[8].d[0] < c.r[9].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[9].d[0] != 0ull; set32(c.r[9], c.r[4].w[0] + 3988u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017E1C8u | kUnwind; return; } goto L_0017E1C8; } }
    c.r[1].d[0] = c.r[8].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0017E288; } }
    set32(c.r[3], c.r[8].w[0] << 2);
    set32(c.r[5], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[4], 0u - 1u);
    c.budget -= 4;
L_0017E26C:
    set32(c.r[8], c.r[8].w[0] + 1u);
    st32((c.r[5].w[0] + 3924u), c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.r[3].d[0] = c.r[8].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017E26Cu | kUnwind; return; } goto L_0017E26C; } }
L_0017E288:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_0017E28C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4256u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017E0E4u | kUnwind; return; } goto L_0017E0E4; } }
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1040u);  c.pc = t; return; }
L_0017E2B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01D00000u);
    set32(c.r[4], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E2C8u); c.r[5].d[0] = c.r[2].d[0] | 44032ull;  if (depth < kMaxDepth) unit_0094(c, 27u, depth + 1u); else { c.pc = 0x00350270u; return; } if (c.pc != 0x0017E2C8u) [[unlikely]] return; }
L_0017E2C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00210000u);
    set32(c.r[4], c.r[2].w[0] + 29776u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01D00000u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E2E0u); c.r[6].d[0] = c.r[2].d[0] | 44032ull;  if (depth < kMaxDepth) unit_0093(c, 253u, depth + 1u); else { c.pc = 0x0034F7F0u; return; } if (c.pc != 0x0017E2E0u) [[unlikely]] return; }
L_0017E2E0:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0017E2F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00700000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[5], c.r[3].w[0] - 10176u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 9;
L_0017E314:
    st32((c.r[5].w[0]), 0u);
    set32(c.r[4], c.r[4].w[0] + 2u);
    st32((c.r[5].w[0] + 4u), 0u);
    set32(c.r[5], c.r[5].w[0] + 8u);
    c.r[3].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(32ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017E314u | kUnwind; return; } goto L_0017E314; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01D40000u);
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    c.r[16].d[0] = c.r[3].d[0] | 11264ull;
    mmi::paddub(c.r[19], c.r[0], c.r[0]);
    c.budget -= 4;
L_0017E340:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 694u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_0017E3B4; }
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], c.r[3].w[0] << (c.r[4].w[0] & 31u));
    c.r[3].d[0] = c.r[18].d[0] & c.r[5].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0017E3B0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[2], c.r[2].w[0] - 20336u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = ld16((c.r[2].w[0]));
    c.r[18].d[0] = c.r[18].d[0] | c.r[5].d[0];
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E38Cu); mmi::paddub(c.r[17], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0094(c, 27u, depth + 1u); else { c.pc = 0x00350270u; return; } if (c.pc != 0x0017E38Cu) [[unlikely]] return; }
L_0017E38C:
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[3], c.r[3].w[0] - 10176u);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[19].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 694u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[17].w[0]);
    c.budget -= 9;
L_0017E3B0:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_0017E3B4:
    c.r[3].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017E340u | kUnwind; return; } goto L_0017E340; } }
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0017E3E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00700000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], 0u + 6u);
    set32(c.r[18], c.r[3].w[0] - 10176u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_0017E430; } }
L_0017E408:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 4u);  goto L_0017E42C; }
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E424u); mmi::paddub(c.r[7], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_000D(c, 263u, depth + 1u); else { c.pc = 0x00137AF0u; return; } if (c.pc != 0x0017E424u) [[unlikely]] return; }
L_0017E424:
    set32(c.r[17], c.r[17].w[0] - 1u);
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.budget -= 2;
L_0017E42C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0017E430:
    c.r[1].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(32ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0017E448; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017E408u | kUnwind; return; } goto L_0017E408; } }
    c.budget -= 1;
L_0017E448:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0017E460:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[2], c.r[2].w[0] - 10176u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0])));  c.pc = t; return; }
L_0017E480:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01D30000u);
    set32(c.r[4], 0u + 244u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E498u); c.r[5].d[0] = c.r[2].d[0] | 60416ull;  if (depth < kMaxDepth) unit_0094(c, 27u, depth + 1u); else { c.pc = 0x00350270u; return; } if (c.pc != 0x0017E498u) [[unlikely]] return; }
L_0017E498:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01E20000u);
    set32(c.r[4], 0u + 539u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E4A8u); c.r[5].d[0] = c.r[2].d[0] | 11264ull;  if (depth < kMaxDepth) unit_0094(c, 27u, depth + 1u); else { c.pc = 0x00350270u; return; } if (c.pc != 0x0017E4A8u) [[unlikely]] return; }
L_0017E4A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01E10000u);
    set32(c.r[4], 0u + 245u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E4B8u); c.r[5].d[0] = c.r[2].d[0] | 60416ull;  if (depth < kMaxDepth) unit_0094(c, 27u, depth + 1u); else { c.pc = 0x00350270u; return; } if (c.pc != 0x0017E4B8u) [[unlikely]] return; }
L_0017E4B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01E50000u);
    set32(c.r[4], 0u + 540u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E4C8u); c.r[5].d[0] = c.r[2].d[0] | 11264ull;  if (depth < kMaxDepth) unit_0094(c, 27u, depth + 1u); else { c.pc = 0x00350270u; return; } if (c.pc != 0x0017E4C8u) [[unlikely]] return; }
L_0017E4C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01E50000u);
    set32(c.r[4], 0u + 541u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E4D8u); c.r[5].d[0] = c.r[2].d[0] | 60416ull;  if (depth < kMaxDepth) unit_0094(c, 27u, depth + 1u); else { c.pc = 0x00350270u; return; } if (c.pc != 0x0017E4D8u) [[unlikely]] return; }
L_0017E4D8:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0017E4F0:
    set32(c.r[29], c.r[29].w[0] - 800u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[16], c.r[2].w[0] - 13328u);
    mmi::paddub(c.r[3], c.r[0], c.r[0]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 8;
L_0017E510:
    st32((c.r[4].w[0] + 4336u), 0u);
    set32(c.r[3], c.r[3].w[0] + 2u);
    st32((c.r[4].w[0] + 4340u), 0u);
    set32(c.r[4], c.r[4].w[0] + 8u);
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(12ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017E510u | kUnwind; return; } goto L_0017E510; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01D30000u);
    c.r[8].d[0] = c.r[2].d[0] | 60416ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01E20000u);
    set32(c.r[4], c.r[16].w[0] + 4336u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    set32(c.r[6], c.r[29].w[0] + 48u);
    set32(c.r[7], c.r[16].w[0] + 16u);
    set32(c.r[10], 0u + 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E554u); c.r[9].d[0] = c.r[2].d[0] | 11264ull;  if (depth < kMaxDepth) unit_000D(c, 201u, depth + 1u); else { c.pc = 0x00136DA0u; return; } if (c.pc != 0x0017E554u) [[unlikely]] return; }
L_0017E554:
    set32(c.r[2], c.r[16].w[0] + 4384u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st32((c.r[1].w[0] - 10856u), c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] + 4336u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st32((c.r[1].w[0] - 10836u), c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] + 4392u);
    st32((c.r[16].w[0] + 4384u), c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] + 4428u);
    st32((c.r[16].w[0] + 4388u), c.r[2].w[0]);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    mmi::paddub(c.r[6], c.r[16], c.r[0]);
    set32(c.r[3], 0u + 19u);
    set32(c.r[10], 0u + 1u);
    c.budget -= 16;
L_0017E594:
    set32(c.r[2], c.r[4].w[0] + 4460u);
    st32((c.r[5].w[0] + 4392u), c.r[2].w[0]);
    st8((c.r[4].w[0] + 4460u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 4461u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 4464u), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[2], c.r[6].w[0] + 16u);
    st8((c.r[4].w[0] + 4465u), static_cast<std::uint8_t>(c.r[10].w[0]));
    st32((c.r[4].w[0] + 4468u), c.r[2].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.r[2].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 240u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017E594u | kUnwind; return; } goto L_0017E594; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01E10000u);
    c.r[8].d[0] = c.r[2].d[0] | 60416ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01E50000u);
    set32(c.r[4], c.r[16].w[0] + 4376u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    set32(c.r[6], c.r[29].w[0] + 48u);
    set32(c.r[7], c.r[16].w[0] + 2176u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E5F0u); c.r[9].d[0] = c.r[2].d[0] | 11264ull;  if (depth < kMaxDepth) unit_000D(c, 201u, depth + 1u); else { c.pc = 0x00136DA0u; return; } if (c.pc != 0x0017E5F0u) [[unlikely]] return; }
L_0017E5F0:
    c.r[1].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(17ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x01E50000u);  if (t) { goto L_0017E66C; } }
    set32(c.r[2], c.r[17].w[0] << 4);
    set32(c.r[7], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[8], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[6], 0u + 19u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], 0u + 3u);
    c.budget -= 7;
L_0017E618:
    set32(c.r[2], c.r[7].w[0] + 4460u);
    st32((c.r[8].w[0] + 4392u), c.r[2].w[0]);
    st8((c.r[7].w[0] + 4460u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[2], c.r[17].w[0] - 9u);
    st8((c.r[7].w[0] + 4461u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], c.r[17].w[0] + 1u);
    st8((c.r[7].w[0] + 4464u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 16u);
    st8((c.r[7].w[0] + 4465u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[7].w[0] + 4468u), c.r[2].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[7], c.r[7].w[0] + 16u);
    c.r[2].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(17ll) ? 1ull : 0ull;
    c.budget -= 19;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017E618u | kUnwind; return; } goto L_0017E618; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01E50000u);
    c.budget -= 2;
L_0017E66C:
    set32(c.r[7], c.r[16].w[0] + 4380u);
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[2].d[0] | 60416ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E680u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000D(c, 263u, depth + 1u); else { c.pc = 0x00137AF0u; return; } if (c.pc != 0x0017E680u) [[unlikely]] return; }
L_0017E680:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 800u);  c.pc = t; return; }
L_0017E6A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[6], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[4], c.r[2].w[0] - 20272u);
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C10000u);
    c.r[5].d[0] = c.r[2].d[0] | 14336ull;
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 256u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 301u)));
    set32(c.r[3], c.r[6].w[0] << 3);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E6E0u); c.r[4].d[0] = ld16((c.r[2].w[0]));  if (depth < kMaxDepth) unit_0094(c, 32u, depth + 1u); else { c.pc = 0x003502F0u; return; } if (c.pc != 0x0017E6E0u) [[unlikely]] return; }
L_0017E6E0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C10000u);
    c.r[3].d[0] = c.r[3].d[0] | 14336ull;
    st32((c.r[28].w[0] - 26692u), c.r[3].w[0]);
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0017E700:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st64((c.r[29].w[0] + 152u), 0ull);
    st64((c.r[29].w[0] + 144u), 0ull);
    st64((c.r[29].w[0] + 136u), 0ull);
    st64((c.r[29].w[0] + 128u), 0ull);
    st64((c.r[29].w[0] + 120u), 0ull);
    st64((c.r[29].w[0] + 112u), 0ull);
    st64((c.r[29].w[0] + 104u), 0ull);
    st64((c.r[29].w[0] + 96u), 0ull);
    st64((c.r[29].w[0] + 88u), 0ull);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C10000u);
    c.r[16].d[0] = c.r[3].d[0] | 14336ull;
    set32(c.r[6], ld32((c.r[28].w[0] - 26304u)));
    st64((c.r[29].w[0] + 80u), 0ull);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 301u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 692u)));
    c.budget -= 25;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0017E7A4; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0017E7A4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[2], c.r[2].w[0] - 20336u);
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E790u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0094(c, 27u, depth + 1u); else { c.pc = 0x00350270u; return; } if (c.pc != 0x0017E790u) [[unlikely]] return; }
L_0017E790:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C10000u);
    c.r[3].d[0] = c.r[3].d[0] | 14336ull;
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 26696u), c.r[3].w[0]);  if (t) { goto L_0017E7A8; } }
L_0017E7A4:
    st32((c.r[28].w[0] - 26696u), 0u);
    c.budget -= 1;
L_0017E7A8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[17], c.r[3].w[0] - 14288u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[18], c.r[3].w[0] - 10208u);
    mmi::paddub(c.r[19], c.r[0], c.r[0]);
    c.budget -= 5;
L_0017E7BC:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_0017E864; }
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 2u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[5], 0u + 1u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 14u)));
    c.r[7].d[0] = c.r[7].d[0] & 63ull;
    c.r[7].d[0] = c.r[5].d[0] << (c.r[7].w[0] & 63u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 301u)));
    set32(c.r[4], c.r[3].w[0] << 3);
    c.r[5].d[0] = c.r[6].d[0] ^ c.r[5].d[0];
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[6], c.r[3].w[0] + 80u);
    c.r[4].d[0] = ld64((c.r[6].w[0]));
    c.r[3].d[0] = c.r[7].d[0] & c.r[4].d[0];
    c.budget -= 20;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0017E860; } }
    c.r[2].d[0] = c.r[4].d[0] | c.r[7].d[0];
    st64((c.r[6].w[0]), c.r[2].d[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 2u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[4], c.r[3].w[0] - 20016u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 14u)));
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E858u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0094(c, 27u, depth + 1u); else { c.pc = 0x00350270u; return; } if (c.pc != 0x0017E858u) [[unlikely]] return; }
L_0017E858:
    st32((c.r[18].w[0]), c.r[16].w[0]);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_0017E860:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_0017E864:
    c.r[3].d[0] = c.r[19].sd[0] < 5ll ? 1ull : 0ull;
    set32(c.r[17], c.r[17].w[0] + 32u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017E7BCu | kUnwind; return; } goto L_0017E7BC; } }
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0017E890:
    set32(c.r[4], ld32((c.r[28].w[0] - 26692u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[5], c.r[2].w[0] - 19424u);
    c.budget -= 5;
    { mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00137B60u | kUnwind; return; } [[clang::musttail]] return unit_000D(c, 266u, depth); }
L_0017E8B0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st64((c.r[29].w[0] + 152u), 0ull);
    st64((c.r[29].w[0] + 144u), 0ull);
    st64((c.r[29].w[0] + 136u), 0ull);
    st64((c.r[29].w[0] + 128u), 0ull);
    st64((c.r[29].w[0] + 120u), 0ull);
    st64((c.r[29].w[0] + 112u), 0ull);
    st64((c.r[29].w[0] + 104u), 0ull);
    st64((c.r[29].w[0] + 96u), 0ull);
    st64((c.r[29].w[0] + 88u), 0ull);
    set32(c.r[4], ld32((c.r[28].w[0] - 26696u)));
    c.budget -= 18;
    { const bool t = c.r[4].d[0] == 0ull; st64((c.r[29].w[0] + 80u), 0ull);  if (t) { goto L_0017E90C; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E904u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000D(c, 260u, depth + 1u); else { c.pc = 0x00137A90u; return; } if (c.pc != 0x0017E904u) [[unlikely]] return; }
L_0017E904:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 19392u), c.r[2].w[0]);
    c.budget -= 2;
L_0017E90C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[17], c.r[3].w[0] - 14288u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[18], c.r[3].w[0] - 10208u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[19], c.r[3].w[0] - 19424u);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 7;
L_0017E928:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_0017EA1C; }
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 14u)));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 2u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 4u)));
    set32(c.r[5], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 301u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    c.r[7].d[0] = c.r[7].d[0] & 63ull;
    c.r[7].d[0] = c.r[5].d[0] << (c.r[7].w[0] & 63u);
    c.r[6].d[0] = c.r[6].d[0] ^ c.r[4].d[0];
    set32(c.r[4], c.r[6].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] + c.r[29].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[6], c.r[3].w[0] + 80u);
    c.r[4].d[0] = ld64((c.r[6].w[0]));
    c.r[3].d[0] = c.r[7].d[0] & c.r[4].d[0];
    c.budget -= 20;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = 0ll < c.r[16].sd[0] ? 1ull : 0ull;  if (t) { goto L_0017E9A4; } }
    c.r[2].d[0] = c.r[4].d[0] | c.r[7].d[0];
    st64((c.r[6].w[0]), c.r[2].d[0]);
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E998u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000D(c, 260u, depth + 1u); else { c.pc = 0x00137A90u; return; } if (c.pc != 0x0017E998u) [[unlikely]] return; }
L_0017E998:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0017EA18; } }
    c.r[1].d[0] = 0ll < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0017E9A4:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (t) { goto L_0017EA18; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[6], c.r[3].w[0] - 14288u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[7], c.r[3].w[0] - 19424u);
    c.budget -= 5;
L_0017E9C0:
    c.budget -= 2;
    if (c.r[5].d[0] == c.r[16].d[0]) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_0017EA04; }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 2u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0017EA00; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 14u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 14u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0017EA00; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0017EA00; } }
    set32(c.r[3], ld32((c.r[7].w[0] + 8u)));
    st32((c.r[19].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 2;
L_0017EA00:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_0017EA04:
    set32(c.r[6], c.r[6].w[0] + 32u);
    c.r[3].d[0] = c.r[5].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017E9C0u | kUnwind; return; } goto L_0017E9C0; } }
    c.budget -= 1;
L_0017EA18:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0017EA1C:
    c.r[3].d[0] = c.r[16].sd[0] < 5ll ? 1ull : 0ull;
    set32(c.r[17], c.r[17].w[0] + 32u);
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017E928u | kUnwind; return; } goto L_0017E928; } }
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0017EA50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C10000u);
    set32(c.r[4], 0u + 928u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017EA68u); c.r[5].d[0] = c.r[2].d[0] | 14336ull;  if (depth < kMaxDepth) unit_0094(c, 27u, depth + 1u); else { c.pc = 0x00350270u; return; } if (c.pc != 0x0017EA68u) [[unlikely]] return; }
L_0017EA68:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00130000u);
    set32(c.r[4], c.r[2].w[0] + 31584u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C10000u);
    c.r[6].d[0] = c.r[2].d[0] | 14336ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], c.r[2].w[0] - 19056u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017EA8Cu); mmi::paddub(c.r[8], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 253u, depth + 1u); else { c.pc = 0x0034F7F0u; return; } if (c.pc != 0x0017EA8Cu) [[unlikely]] return; }
L_0017EA8C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0017EAA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C10000u);
    c.r[17].d[0] = c.r[2].d[0] | 14336ull;
    set32(c.r[4], 0u + 928u);
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017EAC4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0094(c, 27u, depth + 1u); else { c.pc = 0x00350270u; return; } if (c.pc != 0x0017EAC4u) [[unlikely]] return; }
L_0017EAC4:
    mmi::paddub(c.r[16], c.r[2], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00130000u);
    set32(c.r[4], c.r[2].w[0] + 31584u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C10000u);
    c.r[6].d[0] = c.r[2].d[0] | 14336ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], c.r[2].w[0] - 19056u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017EAECu); mmi::paddub(c.r[8], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 256u, depth + 1u); else { c.pc = 0x0034F8A0u; return; } if (c.pc != 0x0017EAECu) [[unlikely]] return; }
L_0017EAEC:
    set32(c.r[17], c.r[17].w[0] + c.r[16].w[0]);
    set32(c.r[4], 0u + 746u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017EAFCu); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0094(c, 27u, depth + 1u); else { c.pc = 0x00350270u; return; } if (c.pc != 0x0017EAFCu) [[unlikely]] return; }
L_0017EAFC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00130000u);
    set32(c.r[4], c.r[2].w[0] + 31472u);
    set32(c.r[5], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[9], c.r[28].w[0] - 26280u);
    mmi::paddub(c.r[6], c.r[17], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017EB1Cu); mmi::paddub(c.r[8], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 256u, depth + 1u); else { c.pc = 0x0034F8A0u; return; } if (c.pc != 0x0017EB1Cu) [[unlikely]] return; }
L_0017EB1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017EB24u);  if (depth < kMaxDepth) unit_001F(c, 235u, depth + 1u); else { c.pc = 0x0017F320u; return; } if (c.pc != 0x0017EB24u) [[unlikely]] return; }
L_0017EB24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017EB2Cu);  if (depth < kMaxDepth) unit_001F(c, 236u, depth + 1u); else { c.pc = 0x0017F330u; return; } if (c.pc != 0x0017EB2Cu) [[unlikely]] return; }
L_0017EB2C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0017EB40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C10000u);
    set32(c.r[4], 0u + 930u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017EB58u); c.r[5].d[0] = c.r[2].d[0] | 14336ull;  if (depth < kMaxDepth) unit_0094(c, 27u, depth + 1u); else { c.pc = 0x00350270u; return; } if (c.pc != 0x0017EB58u) [[unlikely]] return; }
L_0017EB58:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00130000u);
    set32(c.r[4], c.r[2].w[0] + 31584u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C10000u);
    c.r[6].d[0] = c.r[2].d[0] | 14336ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], c.r[2].w[0] - 19476u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017EB7Cu); mmi::paddub(c.r[8], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 253u, depth + 1u); else { c.pc = 0x0034F7F0u; return; } if (c.pc != 0x0017EB7Cu) [[unlikely]] return; }
L_0017EB7C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0017EB90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F30000u);
    set32(c.r[4], 0u + 570u);
    c.budget -= 4;
    { c.r[5].d[0] = c.r[2].d[0] | 22528ull;  [[clang::musttail]] return unit_0094(c, 27u, depth); }
L_0017EBA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F30000u);
    c.r[4].d[0] = c.r[2].d[0] | 22528ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[5], c.r[2].w[0] - 20336u);
    c.budget -= 6;
    { mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00137B60u | kUnwind; return; } [[clang::musttail]] return unit_000D(c, 266u, depth); }
L_0017EBC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F30000u);
    set32(c.r[4], 0u + 935u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017EBD8u); c.r[5].d[0] = c.r[2].d[0] | 22528ull;  if (depth < kMaxDepth) unit_0094(c, 27u, depth + 1u); else { c.pc = 0x00350270u; return; } if (c.pc != 0x0017EBD8u) [[unlikely]] return; }
L_0017EBD8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FB0000u);
    set32(c.r[4], 0u + 934u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017EBE8u); c.r[5].d[0] = c.r[2].d[0] | 22528ull;  if (depth < kMaxDepth) unit_0094(c, 27u, depth + 1u); else { c.pc = 0x00350270u; return; } if (c.pc != 0x0017EBE8u) [[unlikely]] return; }
L_0017EBE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01210000u);
    set32(c.r[4], 0u + 243u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017EBF8u); c.r[5].d[0] = c.r[2].d[0] | 22528ull;  if (depth < kMaxDepth) unit_0094(c, 27u, depth + 1u); else { c.pc = 0x00350270u; return; } if (c.pc != 0x0017EBF8u) [[unlikely]] return; }
L_0017EBF8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01290000u);
    set32(c.r[4], 0u + 538u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017EC08u); c.r[5].d[0] = c.r[2].d[0] | 22528ull;  if (depth < kMaxDepth) unit_0094(c, 27u, depth + 1u); else { c.pc = 0x00350270u; return; } if (c.pc != 0x0017EC08u) [[unlikely]] return; }
L_0017EC08:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01300000u);
    set32(c.r[4], 0u + 286u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017EC18u); c.r[5].d[0] = c.r[2].d[0] | 38912ull;  if (depth < kMaxDepth) unit_0094(c, 27u, depth + 1u); else { c.pc = 0x00350270u; return; } if (c.pc != 0x0017EC18u) [[unlikely]] return; }
L_0017EC18:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01340000u);
    set32(c.r[4], 0u + 271u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017EC28u); c.r[5].d[0] = c.r[2].d[0] | 38912ull;  if (depth < kMaxDepth) unit_0094(c, 27u, depth + 1u); else { c.pc = 0x00350270u; return; } if (c.pc != 0x0017EC28u) [[unlikely]] return; }
L_0017EC28:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01380000u);
    set32(c.r[4], 0u + 931u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017EC38u); c.r[5].d[0] = c.r[2].d[0] | 38912ull;  if (depth < kMaxDepth) unit_0094(c, 27u, depth + 1u); else { c.pc = 0x00350270u; return; } if (c.pc != 0x0017EC38u) [[unlikely]] return; }
L_0017EC38:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0017EC50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 19872u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 19460u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 20000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 19468u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 19936u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 19464u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F30000u);
    c.r[4].d[0] = c.r[2].d[0] | 22528ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[5], c.r[2].w[0] - 19872u);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017ECA0u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 17u, depth + 1u); else { c.pc = 0x001383D0u; return; } if (c.pc != 0x0017ECA0u) [[unlikely]] return; }
L_0017ECA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FB0000u);
    c.r[4].d[0] = c.r[2].d[0] | 22528ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017ECB4u); set32(c.r[5], c.r[2].w[0] - 19468u);  if (depth < kMaxDepth) unit_000E(c, 8u, depth + 1u); else { c.pc = 0x00138140u; return; } if (c.pc != 0x0017ECB4u) [[unlikely]] return; }
L_0017ECB4:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0017ECC0:
    set32(c.r[29], c.r[29].w[0] - 272u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017ECD0u);  if (depth < kMaxDepth) unit_001F(c, 88u, depth + 1u); else { c.pc = 0x0017CFF0u; return; } if (c.pc != 0x0017ECD0u) [[unlikely]] return; }
L_0017ECD0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01210000u);
    c.r[3].d[0] = c.r[2].d[0] | 22528ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[5].d[0] = c.r[2].d[0] | 18528ull;
    c.r[4].d[0] = c.r[2].d[0] | 18532ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A30000u);
    set32(c.r[2], c.r[2].w[0] + 9600u);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01290000u);
    c.r[3].d[0] = c.r[2].d[0] | 22528ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A30000u);
    set32(c.r[2], c.r[2].w[0] + 9600u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A40000u);
    set32(c.r[8], ld32((c.r[1].w[0] + 28128u)));
    set32(c.r[10], 0u + 1u);
    set32(c.r[2], 0u + 4u);
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st8((c.r[1].w[0] + 26848u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st8((c.r[1].w[0] + 26849u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A40000u);
    set32(c.r[9], ld32((c.r[1].w[0] + 28132u)));
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st8((c.r[1].w[0] + 26852u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st8((c.r[1].w[0] + 26853u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], c.r[2].w[0] + 26864u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st8((c.r[1].w[0] + 26854u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00850000u);
    set32(c.r[7], c.r[2].w[0] + 26896u);
    c.budget -= 40;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017ED70u); st16((c.r[1].w[0] - 16976u), static_cast<std::uint16_t>(c.r[10].w[0]));  if (depth < kMaxDepth) unit_000D(c, 201u, depth + 1u); else { c.pc = 0x00136DA0u; return; } if (c.pc != 0x0017ED70u) [[unlikely]] return; }
L_0017ED70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017ED7Cu); set32(c.r[4], c.r[2].w[0] + 26848u);  if (depth < kMaxDepth) unit_001F(c, 103u, depth + 1u); else { c.pc = 0x0017D280u; return; } if (c.pc != 0x0017ED7Cu) [[unlikely]] return; }
L_0017ED7C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 26849u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017ED90u); c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 26852u)));  if (depth < kMaxDepth) unit_0028(c, 94u, depth + 1u); else { c.pc = 0x001A1400u; return; } if (c.pc != 0x0017ED90u) [[unlikely]] return; }
L_0017ED90:
    set32(c.r[5], ld32((c.r[29].w[0] + 20u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00850000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[4], c.r[2].w[0] - 17424u);
    set32(c.r[6], 0u + 64u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017EDACu); st8((c.r[1].w[0] + 26851u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0005(c, 230u, depth + 1u); else { c.pc = 0x00116C60u; return; } if (c.pc != 0x0017EDACu) [[unlikely]] return; }
L_0017EDAC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    c.r[7].d[0] = ld8((c.r[1].w[0] - 16092u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], c.r[3].w[0] + 26848u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00820000u);
    st32((c.r[1].w[0] + 21668u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[6], ld32((c.r[1].w[0] - 16016u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01300000u);
    c.r[4].d[0] = c.r[3].d[0] | 38912ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[5], ld32((c.r[1].w[0] - 14080u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st8((c.r[1].w[0] + 26855u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 20976u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 26856u), c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 26860u), c.r[5].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[4].w[0]);
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 25;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 272u);  c.pc = t; return; }
L_0017EE10:
    set32(c.r[29], c.r[29].w[0] - 1104u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[21], c.r[4], c.r[0]);
    set32(c.r[5], c.r[3].w[0] - 11824u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 12;
L_0017EE40:
    st32((c.r[5].w[0] + 8u), 0u);
    st32((c.r[5].w[0] + 28u), 0u);
    set32(c.r[5], c.r[5].w[0] + 32u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017EE40u | kUnwind; return; } goto L_0017EE40; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[17], c.r[3].w[0] - 8576u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[18], c.r[3].w[0] - 18624u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[16], c.r[28].w[0] - 31096u);
    set32(c.r[19], c.r[3].w[0] - 18640u);
    mmi::paddub(c.r[20], c.r[0], c.r[0]);
    c.budget -= 8;
L_0017EE7C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0017F040; } }
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], c.r[4].w[0] << (c.r[20].w[0] & 31u));
    c.r[3].d[0] = c.r[21].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0017F040; } }
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    mmi::paddub(c.r[3], c.r[0], c.r[0]);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 4;
L_0017EEB0:
    st32((c.r[4].w[0] + 3856u), 0u);
    set32(c.r[3], c.r[3].w[0] + 2u);
    st32((c.r[4].w[0] + 3860u), 0u);
    set32(c.r[4], c.r[4].w[0] + 8u);
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017EEB0u | kUnwind; return; } goto L_0017EEB0; } }
    set32(c.r[8], ld32((c.r[19].w[0])));
    set32(c.r[9], ld32((c.r[18].w[0])));
    set32(c.r[4], c.r[17].w[0] + 3856u);
    set32(c.r[5], c.r[29].w[0] + 144u);
    set32(c.r[6], c.r[29].w[0] + 112u);
    set32(c.r[7], c.r[17].w[0] + 16u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017EEECu); set32(c.r[10], 0u + 1u);  if (depth < kMaxDepth) unit_000D(c, 201u, depth + 1u); else { c.pc = 0x00136DA0u; return; } if (c.pc != 0x0017EEECu) [[unlikely]] return; }
L_0017EEEC:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[3], c.r[3].w[0] - 11824u);
    set32(c.r[5], c.r[17].w[0] + 3920u);
    set32(c.r[4], c.r[4].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0] + 8u), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], c.r[3].w[0] - 11824u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[4], c.r[3].w[0] - 11824u);
    set32(c.r[7], c.r[17].w[0] + 3856u);
    set32(c.r[3], c.r[6].w[0] << 5);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 28u), c.r[7].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[3], c.r[17].w[0] + 3924u);
    set32(c.r[11], c.r[10].w[0] - 19312u);
    mmi::paddub(c.r[9], c.r[0], c.r[0]);
    set32(c.r[7], c.r[7].w[0] << 5);
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    st16((c.r[4].w[0] + 14u), static_cast<std::uint16_t>(c.r[20].w[0]));
    st32((c.r[17].w[0] + 3920u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[4], c.r[3].w[0] - 19760u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[3], c.r[3].w[0] - 19312u);
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    mmi::paddub(c.r[6], c.r[17], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.budget -= 34;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[8], c.r[17], c.r[0]);  if (t) { goto L_0017EFF0; } }
    set32(c.r[10], c.r[5].w[0] + 3988u);
    c.budget -= 1;
L_0017EF78:
    st32((c.r[6].w[0] + 3924u), c.r[10].w[0]);
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[10], c.r[8].w[0] + 16u);
    set32(c.r[6], c.r[6].w[0] + 4u);
    set32(c.r[12], c.r[12].w[0] << 5);
    set32(c.r[12], c.r[4].w[0] + c.r[12].w[0]);
    set32(c.r[12], c.r[7].w[0] + c.r[12].w[0]);
    c.r[12].d[0] = ld8((c.r[12].w[0]));
    st8((c.r[5].w[0] + 3988u), static_cast<std::uint8_t>(c.r[12].w[0]));
    st8((c.r[5].w[0] + 3989u), static_cast<std::uint8_t>(0u));
    st8((c.r[5].w[0] + 3992u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[9], c.r[9].w[0] + 1u);
    set32(c.r[12], c.r[12].w[0] << 5);
    set32(c.r[12], c.r[3].w[0] + c.r[12].w[0]);
    set32(c.r[12], c.r[7].w[0] + c.r[12].w[0]);
    c.r[12].d[0] = ld8((c.r[12].w[0]));
    st8((c.r[5].w[0] + 3993u), static_cast<std::uint8_t>(c.r[12].w[0]));
    st32((c.r[5].w[0] + 3996u), c.r[10].w[0]);
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[10], c.r[10].w[0] << 5);
    set32(c.r[10], c.r[11].w[0] + c.r[10].w[0]);
    set32(c.r[10], c.r[7].w[0] + c.r[10].w[0]);
    c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[10].w[0])));
    set32(c.r[7], c.r[7].w[0] + 2u);
    c.r[10].d[0] = c.r[10].d[0] & 65280ull;
    st16((c.r[8].w[0] + 114u), static_cast<std::uint16_t>(c.r[10].w[0]));
    set32(c.r[8], c.r[8].w[0] + 240u);
    c.budget -= 30;
L_0017EFF0:
    c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 112u)));
    c.r[10].d[0] = c.r[9].d[0] < c.r[10].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[10].d[0] != 0ull; set32(c.r[10], c.r[5].w[0] + 3988u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017EF78u | kUnwind; return; } goto L_0017EF78; } }
    c.r[1].d[0] = c.r[9].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[20], c.r[20].w[0] + 1u);  goto L_0017F04C; }
    set32(c.r[3], c.r[9].w[0] << 2);
    set32(c.r[5], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[4], 0u - 1u);
    c.budget -= 4;
L_0017F01C:
    set32(c.r[9], c.r[9].w[0] + 1u);
    st32((c.r[5].w[0] + 3924u), c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.r[3].d[0] = c.r[9].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017F01Cu | kUnwind; return; } goto L_0017F01C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017F048; } }
L_0017F040:
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_0017F048:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_0017F04C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 4256u);
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.r[3].d[0] = c.r[20].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017EE7Cu | kUnwind; return; } goto L_0017EE7C; } }
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1104u);  c.pc = t; return; }
L_0017F090:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01060000u);
    set32(c.r[4], 0u + 242u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F0A8u); c.r[5].d[0] = c.r[2].d[0] | 22528ull;  if (depth < kMaxDepth) unit_0094(c, 27u, depth + 1u); else { c.pc = 0x00350270u; return; } if (c.pc != 0x0017F0A8u) [[unlikely]] return; }
L_0017F0A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01170000u);
    set32(c.r[4], 0u + 537u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F0B8u); c.r[5].d[0] = c.r[2].d[0] | 22528ull;  if (depth < kMaxDepth) unit_0094(c, 27u, depth + 1u); else { c.pc = 0x00350270u; return; } if (c.pc != 0x0017F0B8u) [[unlikely]] return; }
L_0017F0B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x011F0000u);
    set32(c.r[4], 0u + 287u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F0C8u); c.r[5].d[0] = c.r[2].d[0] | 22528ull;  if (depth < kMaxDepth) unit_0094(c, 27u, depth + 1u); else { c.pc = 0x00350270u; return; } if (c.pc != 0x0017F0C8u) [[unlikely]] return; }
L_0017F0C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FC0000u);
    set32(c.r[4], 0u + 735u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F0D8u); c.r[5].d[0] = c.r[2].d[0] | 22528ull;  if (depth < kMaxDepth) unit_0094(c, 27u, depth + 1u); else { c.pc = 0x00350270u; return; } if (c.pc != 0x0017F0D8u) [[unlikely]] return; }
L_0017F0D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01440000u);
    set32(c.r[4], 0u + 272u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F0E8u); c.r[5].d[0] = c.r[2].d[0] | 38912ull;  if (depth < kMaxDepth) unit_0094(c, 27u, depth + 1u); else { c.pc = 0x00350270u; return; } if (c.pc != 0x0017F0E8u) [[unlikely]] return; }
L_0017F0E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01480000u);
    set32(c.r[4], 0u + 932u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F0F8u); c.r[5].d[0] = c.r[2].d[0] | 38912ull;  if (depth < kMaxDepth) unit_0094(c, 27u, depth + 1u); else { c.pc = 0x00350270u; return; } if (c.pc != 0x0017F0F8u) [[unlikely]] return; }
L_0017F0F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01540000u);
    set32(c.r[4], 0u + 273u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F108u); c.r[5].d[0] = c.r[2].d[0] | 38912ull;  if (depth < kMaxDepth) unit_0094(c, 27u, depth + 1u); else { c.pc = 0x00350270u; return; } if (c.pc != 0x0017F108u) [[unlikely]] return; }
L_0017F108:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01580000u);
    set32(c.r[4], 0u + 933u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F118u); c.r[5].d[0] = c.r[2].d[0] | 38912ull;  if (depth < kMaxDepth) unit_0094(c, 27u, depth + 1u); else { c.pc = 0x00350270u; return; } if (c.pc != 0x0017F118u) [[unlikely]] return; }
L_0017F118:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0017F130:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FC0000u);
    c.r[4].d[0] = c.r[2].d[0] | 22528ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[5], c.r[2].w[0] - 19488u);
    c.budget -= 6;
    { mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00137B60u | kUnwind; return; } [[clang::musttail]] return unit_000D(c, 266u, depth); }
L_0017F150:
    set32(c.r[29], c.r[29].w[0] - 336u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00850000u);
    set32(c.r[16], c.r[2].w[0] - 16960u);
    set32(c.r[10], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[10].w[0]));
    set32(c.r[4], c.r[2].w[0] - 19456u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[10].w[0]));
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01060000u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.r[8].d[0] = c.r[2].d[0] | 22528ull;
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01170000u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[6], c.r[16].w[0] + 16u);
    set32(c.r[7], c.r[16].w[0] + 48u);
    st16((c.r[16].w[0] + 21712u), static_cast<std::uint16_t>(c.r[10].w[0]));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F1A8u); c.r[9].d[0] = c.r[2].d[0] | 22528ull;  if (depth < kMaxDepth) unit_000D(c, 201u, depth + 1u); else { c.pc = 0x00136DA0u; return; } if (c.pc != 0x0017F1A8u) [[unlikely]] return; }
L_0017F1A8:
    c.r[6].d[0] = ld8((c.r[16].w[0] + 1u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[8], c.r[3].w[0] - 10768u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[4], c.r[3].w[0] + 27520u);
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], c.r[3].w[0] - 19456u);
    st32((c.r[8].w[0] + 8u), c.r[4].w[0]);
    st32((c.r[8].w[0] + 28u), c.r[3].w[0]);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 1u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[7], c.r[3].w[0] + 26720u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[6], c.r[3].w[0] + 27520u);
    st16((c.r[8].w[0] + 14u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[9].d[0] = ld8((c.r[16].w[0] + 1u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[3], c.r[3].w[0] + 23040u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    set32(c.r[8], c.r[9].w[0] << 7);
    set32(c.r[8], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[9].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[9].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    st32((c.r[6].w[0]), c.r[8].w[0]);
    st32((c.r[28].w[0] - 26228u), c.r[3].w[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[3], 0u + 19u);
    set32(c.r[11], 0u + 2u);
    set32(c.r[9], c.r[7].w[0] + 26720u);
    c.budget -= 37;
L_0017F23C:
    set32(c.r[7], ld32((c.r[28].w[0] - 26228u)));
    set32(c.r[10], c.r[5].w[0] + 48u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[8].d[0] = ld8((c.r[16].w[0] + 1u));
    set32(c.r[7], ld32((c.r[28].w[0] - 26228u)));
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[7], ld32((c.r[28].w[0] - 26228u)));
    st8((c.r[7].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[7], ld32((c.r[28].w[0] - 26228u)));
    st8((c.r[7].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[7], ld32((c.r[28].w[0] - 26228u)));
    st8((c.r[7].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[8], ld32((c.r[28].w[0] - 26228u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[7].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(32ll) ? 1ull : 0ull;
    st32((c.r[8].w[0] + 8u), c.r[10].w[0]);
    set32(c.r[8], ld32((c.r[28].w[0] - 26228u)));
    st32((c.r[8].w[0] + 12u), 0u);
    st16((c.r[5].w[0] + 146u), static_cast<std::uint16_t>(c.r[11].w[0]));
    c.r[8].d[0] = ld8((c.r[16].w[0] + 1u));
    set32(c.r[10], ld32((c.r[28].w[0] - 26228u)));
    set32(c.r[5], c.r[5].w[0] + 240u);
    set32(c.r[8], c.r[8].w[0] << 7);
    set32(c.r[8], c.r[9].w[0] + c.r[8].w[0]);
    set32(c.r[8], c.r[6].w[0] + c.r[8].w[0]);
    st32((c.r[8].w[0]), c.r[10].w[0]);
    set32(c.r[8], ld32((c.r[28].w[0] - 26228u)));
    set32(c.r[6], c.r[6].w[0] + 4u);
    set32(c.r[8], c.r[8].w[0] + 16u);
    c.budget -= 31;
    { const bool t = c.r[7].d[0] != 0ull; st32((c.r[28].w[0] - 26228u), c.r[8].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017F23Cu | kUnwind; return; } goto L_0017F23C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x011F0000u);
    c.r[3].d[0] = c.r[3].d[0] | 22528ull;
    st32((c.r[28].w[0] - 27596u), c.r[3].w[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 336u);  c.pc = t; return; }
L_0017F2E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C10000u);
    set32(c.r[4], 0u + 348u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F2F8u); c.r[5].d[0] = c.r[2].d[0] | 14336ull;  if (depth < kMaxDepth) unit_000D(c, 71u, depth + 1u); else { c.pc = 0x00135140u; return; } if (c.pc != 0x0017F2F8u) [[unlikely]] return; }
L_0017F2F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C10000u);
    set32(c.r[5], c.r[28].w[0] - 26288u);
    c.r[4].d[0] = c.r[2].d[0] | 14336ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F30Cu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000D(c, 266u, depth + 1u); else { c.pc = 0x00137B60u; return; } if (c.pc != 0x0017F30Cu) [[unlikely]] return; }
L_0017F30C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0017F320:
    set32(c.r[4], 0u + 347u);
    c.budget -= 3;
    { c.r[5].sd[0] = static_cast<std::int32_t>(0x01E00000u);  [[clang::musttail]] return unit_0094(c, 27u, depth); }
L_0017F330:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1206u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F344u); c.r[5].sd[0] = static_cast<std::int32_t>(0x01C00000u);  if (depth < kMaxDepth) unit_0094(c, 27u, depth + 1u); else { c.pc = 0x00350270u; return; } if (c.pc != 0x0017F344u) [[unlikely]] return; }
L_0017F344:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    set32(c.r[4], c.r[2].w[0] - 14336u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F354u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 253u, depth + 1u); else { c.pc = 0x0034F7F0u; return; } if (c.pc != 0x0017F354u) [[unlikely]] return; }
L_0017F354:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    set32(c.r[4], c.r[2].w[0] - 14384u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F364u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 253u, depth + 1u); else { c.pc = 0x0034F7F0u; return; } if (c.pc != 0x0017F364u) [[unlikely]] return; }
L_0017F364:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0017F370:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01E00000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00700000u);
    st32((c.r[1].w[0] - 7712u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C10000u);
    c.r[2].d[0] = c.r[2].d[0] | 14336ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00700000u);
    st32((c.r[1].w[0] - 7708u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01C00000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00700000u);
    st32((c.r[1].w[0] - 7704u), c.r[2].w[0]);
    set32(c.r[2], c.r[28].w[0] - 31092u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = ld16((c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F3BCu); set32(c.r[5], c.r[2].w[0] - 7712u);  if (depth < kMaxDepth) unit_0094(c, 42u, depth + 1u); else { c.pc = 0x003503F0u; return; } if (c.pc != 0x0017F3BCu) [[unlikely]] return; }
L_0017F3BC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00180000u);
    set32(c.r[4], c.r[2].w[0] - 3104u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F3CCu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 253u, depth + 1u); else { c.pc = 0x0034F7F0u; return; } if (c.pc != 0x0017F3CCu) [[unlikely]] return; }
L_0017F3CC:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0017F3E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 7708u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0017F408; } }
    set32(c.r[7], c.r[28].w[0] - 26280u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F408u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000D(c, 263u, depth + 1u); else { c.pc = 0x00137AF0u; return; } if (c.pc != 0x0017F408u) [[unlikely]] return; }
L_0017F408:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 7704u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0017F428; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F420u);  if (depth < kMaxDepth) unit_002F(c, 59u, depth + 1u); else { c.pc = 0x001BC800u; return; } if (c.pc != 0x0017F420u) [[unlikely]] return; }
L_0017F420:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F428u);  if (depth < kMaxDepth) unit_002F(c, 57u, depth + 1u); else { c.pc = 0x001BC7D0u; return; } if (c.pc != 0x0017F428u) [[unlikely]] return; }
L_0017F428:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0017F440:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F450u);  if (depth < kMaxDepth) unit_001F(c, 235u, depth + 1u); else { c.pc = 0x0017F320u; return; } if (c.pc != 0x0017F450u) [[unlikely]] return; }
L_0017F450:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C10000u);
    set32(c.r[4], 0u + 927u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F460u); c.r[5].d[0] = c.r[2].d[0] | 14336ull;  if (depth < kMaxDepth) unit_0094(c, 27u, depth + 1u); else { c.pc = 0x00350270u; return; } if (c.pc != 0x0017F460u) [[unlikely]] return; }
L_0017F460:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00130000u);
    set32(c.r[4], c.r[2].w[0] + 31472u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C10000u);
    c.r[6].d[0] = c.r[2].d[0] | 14336ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[5], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[9], c.r[2].w[0] - 19044u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F488u); mmi::paddub(c.r[8], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 253u, depth + 1u); else { c.pc = 0x0034F7F0u; return; } if (c.pc != 0x0017F488u) [[unlikely]] return; }
L_0017F488:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0017F4A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; st128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0017F4B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 940u);  if (t) { goto L_0017F4B8; } }
L_0017F4B4:
    set32(c.r[2], 0u + 1050u);
    c.budget -= 1;
L_0017F4B8:
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    mmi::paddub(c.r[4], c.r[2], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C10000u);
    c.r[5].d[0] = c.r[2].d[0] | 14336ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F4D0u); st32((c.r[28].w[0] - 26296u), 0u);  if (depth < kMaxDepth) unit_0094(c, 27u, depth + 1u); else { c.pc = 0x00350270u; return; } if (c.pc != 0x0017F4D0u) [[unlikely]] return; }
L_0017F4D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00130000u);
    set32(c.r[4], c.r[2].w[0] + 31472u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C10000u);
    set32(c.r[5], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[9], c.r[28].w[0] - 26296u);
    c.r[6].d[0] = c.r[2].d[0] | 14336ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F4F4u); mmi::paddub(c.r[8], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 253u, depth + 1u); else { c.pc = 0x0034F7F0u; return; } if (c.pc != 0x0017F4F4u) [[unlikely]] return; }
L_0017F4F4:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0017F500:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[5], c.r[3].w[0] - 17600u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 3;
L_0017F50C:
    set32(c.r[4], c.r[4].w[0] + 2u);
    st32((c.r[5].w[0]), 0u);
    st32((c.r[5].w[0] + 4u), 0u);
    c.r[3].d[0] = c.r[4].sd[0] < 16ll ? 1ull : 0ull;
    set32(c.r[5], c.r[5].w[0] + 8u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017F50Cu | kUnwind; return; } goto L_0017F50C; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0017F530:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F54Cu); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0038(c, 37u, depth + 1u); else { c.pc = 0x001E0450u; return; } if (c.pc != 0x0017F54Cu) [[unlikely]] return; }
L_0017F54C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[4], c.r[2].w[0] - 7696u);
    mmi::paddub(c.r[3], c.r[0], c.r[0]);
    c.budget -= 3;
L_0017F558:
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0]), 0u);
    st32((c.r[4].w[0] + 24u), 0u);
    c.r[2].d[0] = c.r[3].sd[0] < 6ll ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017F558u | kUnwind; return; } goto L_0017F558; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F30000u);
    c.r[2].d[0] = c.r[2].d[0] | 22528ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00700000u);
    st32((c.r[1].w[0] - 7696u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01130000u);
    c.r[2].d[0] = c.r[2].d[0] | 22528ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00700000u);
    st32((c.r[1].w[0] - 7672u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C10000u);
    c.r[2].d[0] = c.r[2].d[0] | 14336ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00700000u);
    st32((c.r[1].w[0] - 7648u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01C00000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00700000u);
    st32((c.r[1].w[0] - 7644u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[5], c.r[2].w[0] - 7696u);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F5C0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000D(c, 79u, depth + 1u); else { c.pc = 0x001351E0u; return; } if (c.pc != 0x0017F5C0u) [[unlikely]] return; }
L_0017F5C0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[16], c.r[3].w[0] - 7696u);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 3;
L_0017F5CC:
    set32(c.r[4], 0u + 19280u);
    set32(c.r[3], ld32((c.r[16].w[0])));
    mmi::mult(c, 0, c.r[17].w[0], c.r[4].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x012B0000u);
    c.r[4].d[0] = c.r[4].d[0] | 22528ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[5].w[0] + c.r[4].w[0]);  if (t) { goto L_0017F5F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), 0u);  if (t) { goto L_0017F630; } }
L_0017F5F0:
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    st32((c.r[18].w[0] + 4u), c.r[17].w[0]);
    set32(c.r[8], ld32((c.r[16].w[0])));
    set32(c.r[9], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[4], c.r[18].w[0] + 19248u);
    set32(c.r[6], c.r[18].w[0] + 16u);
    set32(c.r[7], c.r[18].w[0] + 48u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F61Cu); mmi::paddub(c.r[10], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000D(c, 201u, depth + 1u); else { c.pc = 0x00136DA0u; return; } if (c.pc != 0x0017F61Cu) [[unlikely]] return; }
L_0017F61C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 16u)));
    st32((c.r[18].w[0] + 8u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 18u)));
    st32((c.r[18].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 5;
L_0017F630:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017F5CCu | kUnwind; return; } goto L_0017F5CC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 7648u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0017F660; } }
    set32(c.r[7], c.r[28].w[0] - 26280u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F660u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000D(c, 263u, depth + 1u); else { c.pc = 0x00137AF0u; return; } if (c.pc != 0x0017F660u) [[unlikely]] return; }
L_0017F660:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 7644u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0017F680; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F678u);  if (depth < kMaxDepth) unit_002F(c, 59u, depth + 1u); else { c.pc = 0x001BC800u; return; } if (c.pc != 0x0017F678u) [[unlikely]] return; }
L_0017F678:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F680u);  if (depth < kMaxDepth) unit_002F(c, 57u, depth + 1u); else { c.pc = 0x001BC7D0u; return; } if (c.pc != 0x0017F680u) [[unlikely]] return; }
L_0017F680:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0017F6A0:
    set32(c.r[4], 0u + 1207u);
    c.budget -= 3;
    { c.r[5].sd[0] = static_cast<std::int32_t>(0x012F0000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00135140u | kUnwind; return; } [[clang::musttail]] return unit_000D(c, 71u, depth); }
L_0017F6B0:
    set32(c.r[2], c.r[28].w[0] - 31088u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F30000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F6D4u); c.r[5].d[0] = c.r[2].d[0] | 22528ull;  if (depth < kMaxDepth) unit_0094(c, 27u, depth + 1u); else { c.pc = 0x00350270u; return; } if (c.pc != 0x0017F6D4u) [[unlikely]] return; }
L_0017F6D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00130000u);
    set32(c.r[4], c.r[2].w[0] + 31472u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    set32(c.r[9], c.r[2].w[0] - 16720u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F30000u);
    set32(c.r[5], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.r[6].d[0] = c.r[2].d[0] | 22528ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F6FCu); mmi::paddub(c.r[8], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 253u, depth + 1u); else { c.pc = 0x0034F7F0u; return; } if (c.pc != 0x0017F6FCu) [[unlikely]] return; }
L_0017F6FC:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0017F710:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A30000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F728u); set32(c.r[16], c.r[2].w[0] + 9600u);  if (depth < kMaxDepth) unit_001F(c, 290u, depth + 1u); else { c.pc = 0x0017F940u; return; } if (c.pc != 0x0017F728u) [[unlikely]] return; }
L_0017F728:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00160000u);
    set32(c.r[5], c.r[2].w[0] - 16800u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F738u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0022(c, 227u, depth + 1u); else { c.pc = 0x0018BC10u; return; } if (c.pc != 0x0017F738u) [[unlikely]] return; }
L_0017F738:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F740u);  if (depth < kMaxDepth) unit_001F(c, 361u, depth + 1u); else { c.pc = 0x0017FDC0u; return; } if (c.pc != 0x0017F740u) [[unlikely]] return; }
L_0017F740:
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x12000000u);
    c.r[5].d[0] = c.r[2].d[0] | 4096ull;
    set32(c.r[3], 0u + 8u);
    st8((c.r[4].w[0] + 62u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[16].w[0] + 832u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 832u), c.r[2].w[0]);
    st16((c.r[16].w[0] + 820u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(0u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F770u); st64((c.r[5].w[0]), c.r[3].d[0]);  if (depth < kMaxDepth) unit_0023(c, 97u, depth + 1u); else { c.pc = 0x0018D030u; return; } if (c.pc != 0x0017F770u) [[unlikely]] return; }
L_0017F770:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F77Cu); set32(c.r[4], c.r[2].w[0] + 3344u);  if (depth < kMaxDepth) unit_000E(c, 165u, depth + 1u); else { c.pc = 0x0013A4E0u; return; } if (c.pc != 0x0017F77Cu) [[unlikely]] return; }
L_0017F77C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F788u); set32(c.r[4], c.r[2].w[0] + 3364u);  if (depth < kMaxDepth) unit_000E(c, 165u, depth + 1u); else { c.pc = 0x0013A4E0u; return; } if (c.pc != 0x0017F788u) [[unlikely]] return; }
L_0017F788:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[3], c.r[2].w[0] + 3344u);
    ld128((c.r[3].w[0]) & ~15u, c.r[4]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[7], c.r[2].w[0] + 3264u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[6], c.r[2].w[0] + 3364u);
    c.f[3] = ld32((c.r[3].w[0] + 16u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[5], c.r[2].w[0] + 3284u);
    st128((c.r[7].w[0]) & ~15u, c.r[4]);
    set32(c.r[4], 0u + 5u);
    st32((c.r[7].w[0] + 16u), c.f[3]);
    c.budget -= 14;
L_0017F7C0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 2u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[5].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017F7C0u | kUnwind; return; } goto L_0017F7C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F7E8u);  if (depth < kMaxDepth) unit_0025(c, 227u, depth + 1u); else { c.pc = 0x001967C0u; return; } if (c.pc != 0x0017F7E8u) [[unlikely]] return; }
L_0017F7E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F7F0u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000D(c, 42u, depth + 1u); else { c.pc = 0x001348A0u; return; } if (c.pc != 0x0017F7F0u) [[unlikely]] return; }
L_0017F7F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F7F8u);  if (depth < kMaxDepth) unit_001F(c, 343u, depth + 1u); else { c.pc = 0x0017FC20u; return; } if (c.pc != 0x0017F7F8u) [[unlikely]] return; }
L_0017F7F8:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 330u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0017F824; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[4], c.r[2].w[0] + 9024u);
    set32(c.r[5], 0u + 15u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F81Cu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0027(c, 105u, depth + 1u); else { c.pc = 0x0019F1A0u; return; } if (c.pc != 0x0017F81Cu) [[unlikely]] return; }
L_0017F81C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017F868; } }
L_0017F824:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A30000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 10416u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017F854; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[4], c.r[2].w[0] + 9504u);
    set32(c.r[5], 0u + 15u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F84Cu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0027(c, 105u, depth + 1u); else { c.pc = 0x0019F1A0u; return; } if (c.pc != 0x0017F84Cu) [[unlikely]] return; }
L_0017F84C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017F868; } }
L_0017F854:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[4], c.r[2].w[0] + 9264u);
    set32(c.r[5], 0u + 15u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F868u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0027(c, 105u, depth + 1u); else { c.pc = 0x0019F1A0u; return; } if (c.pc != 0x0017F868u) [[unlikely]] return; }
L_0017F868:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F870u);  if (depth < kMaxDepth) unit_0022(c, 217u, depth + 1u); else { c.pc = 0x0018BAD0u; return; } if (c.pc != 0x0017F870u) [[unlikely]] return; }
L_0017F870:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F878u);  if (depth < kMaxDepth) unit_000E(c, 166u, depth + 1u); else { c.pc = 0x0013A540u; return; } if (c.pc != 0x0017F878u) [[unlikely]] return; }
L_0017F878:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F880u);  if (depth < kMaxDepth) unit_001F(c, 348u, depth + 1u); else { c.pc = 0x0017FC70u; return; } if (c.pc != 0x0017F880u) [[unlikely]] return; }
L_0017F880:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017F738u | kUnwind; return; } goto L_0017F738; } }
    c.budget -= 1;
L_0017F890:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F898u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000D(c, 50u, depth + 1u); else { c.pc = 0x00134B50u; return; } if (c.pc != 0x0017F898u) [[unlikely]] return; }
L_0017F898:
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017F890u | kUnwind; return; } goto L_0017F890; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 820u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017F8E8; } }
L_0017F8B8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x12000000u);
    c.r[2].d[0] = ld64((c.r[1].w[0] + 4096u));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017F8B8u | kUnwind; return; } goto L_0017F8B8; } }
    set32(c.r[2], 0u + 8u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x12000000u);
    st64((c.r[1].w[0] + 4096u), c.r[2].d[0]);
    st16((c.r[16].w[0] + 820u), static_cast<std::uint16_t>(0u));
    c.budget -= 5;
L_0017F8E8:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 830u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 8u);  if (t) { goto L_0017F90C; } }
    set32(c.r[2], 0u + 1u);
    st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 816u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    st32((c.r[16].w[0] + 816u), c.r[2].w[0]);
    set32(c.r[2], 0u + 8u);
    c.budget -= 6;
L_0017F90C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x12000000u);
    st64((c.r[1].w[0] + 4096u), c.r[2].d[0]);
    c.budget -= 3;
L_0017F918:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x12000000u);
    c.r[2].d[0] = ld64((c.r[1].w[0] + 4096u));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017F918u | kUnwind; return; } goto L_0017F918; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017F738u | kUnwind; return; } goto L_0017F738; } }
    c.budget -= 1;
L_0017F940:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F950u);  if (depth < kMaxDepth) unit_0029(c, 68u, depth + 1u); else { c.pc = 0x001A4F70u; return; } if (c.pc != 0x0017F950u) [[unlikely]] return; }
L_0017F950:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F958u);  if (depth < kMaxDepth) unit_0029(c, 60u, depth + 1u); else { c.pc = 0x001A4E70u; return; } if (c.pc != 0x0017F958u) [[unlikely]] return; }
L_0017F958:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F960u);  if (depth < kMaxDepth) unit_001F(c, 341u, depth + 1u); else { c.pc = 0x0017FBE0u; return; } if (c.pc != 0x0017F960u) [[unlikely]] return; }
L_0017F960:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F968u);  if (depth < kMaxDepth) unit_0099(c, 117u, depth + 1u); else { c.pc = 0x003656A0u; return; } if (c.pc != 0x0017F968u) [[unlikely]] return; }
L_0017F968:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F970u);  if (depth < kMaxDepth) unit_001F(c, 301u, depth + 1u); else { c.pc = 0x0017F9B0u; return; } if (c.pc != 0x0017F970u) [[unlikely]] return; }
L_0017F970:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F978u);  if (depth < kMaxDepth) unit_001F(c, 332u, depth + 1u); else { c.pc = 0x0017FB10u; return; } if (c.pc != 0x0017F978u) [[unlikely]] return; }
L_0017F978:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F980u);  if (depth < kMaxDepth) unit_000C(c, 416u, depth + 1u); else { c.pc = 0x00133580u; return; } if (c.pc != 0x0017F980u) [[unlikely]] return; }
L_0017F980:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F988u);  if (depth < kMaxDepth) unit_001F(c, 347u, depth + 1u); else { c.pc = 0x0017FC50u; return; } if (c.pc != 0x0017F988u) [[unlikely]] return; }
L_0017F988:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F990u);  if (depth < kMaxDepth) unit_000E(c, 169u, depth + 1u); else { c.pc = 0x0013A660u; return; } if (c.pc != 0x0017F990u) [[unlikely]] return; }
L_0017F990:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F998u);  if (depth < kMaxDepth) unit_0026(c, 294u, depth + 1u); else { c.pc = 0x0019B7A0u; return; } if (c.pc != 0x0017F998u) [[unlikely]] return; }
L_0017F998:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0017F9B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F9C0u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0001(c, 282u, depth + 1u); else { c.pc = 0x00106448u; return; } if (c.pc != 0x0017F9C0u) [[unlikely]] return; }
L_0017F9C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F9C8u);  if (depth < kMaxDepth) unit_0002(c, 340u, depth + 1u); else { c.pc = 0x0010AA30u; return; } if (c.pc != 0x0017F9C8u) [[unlikely]] return; }
L_0017F9C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F9D0u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0003(c, 189u, depth + 1u); else { c.pc = 0x0010DF30u; return; } if (c.pc != 0x0017F9D0u) [[unlikely]] return; }
L_0017F9D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F9D8u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0003(c, 223u, depth + 1u); else { c.pc = 0x0010E408u; return; } if (c.pc != 0x0017F9D8u) [[unlikely]] return; }
L_0017F9D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F9E0u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0003(c, 205u, depth + 1u); else { c.pc = 0x0010E210u; return; } if (c.pc != 0x0017F9E0u) [[unlikely]] return; }
L_0017F9E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F9ECu); set32(c.r[4], c.r[2].w[0] + 21616u);  if (depth < kMaxDepth) unit_0002(c, 442u, depth + 1u); else { c.pc = 0x0010BC30u; return; } if (c.pc != 0x0017F9ECu) [[unlikely]] return; }
L_0017F9EC:
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017F9E0u | kUnwind; return; } goto L_0017F9E0; } }
    c.budget -= 1;
L_0017FA00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FA08u);  if (depth < kMaxDepth) unit_0002(c, 439u, depth + 1u); else { c.pc = 0x0010BBF8u; return; } if (c.pc != 0x0017FA08u) [[unlikely]] return; }
L_0017FA08:
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017FA00u | kUnwind; return; } goto L_0017FA00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FA28u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0001(c, 282u, depth + 1u); else { c.pc = 0x00106448u; return; } if (c.pc != 0x0017FA28u) [[unlikely]] return; }
L_0017FA28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FA30u);  if (depth < kMaxDepth) unit_0002(c, 340u, depth + 1u); else { c.pc = 0x0010AA30u; return; } if (c.pc != 0x0017FA30u) [[unlikely]] return; }
L_0017FA30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FA38u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0003(c, 189u, depth + 1u); else { c.pc = 0x0010DF30u; return; } if (c.pc != 0x0017FA38u) [[unlikely]] return; }
L_0017FA38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FA40u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0003(c, 223u, depth + 1u); else { c.pc = 0x0010E408u; return; } if (c.pc != 0x0017FA40u) [[unlikely]] return; }
L_0017FA40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FA48u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0003(c, 205u, depth + 1u); else { c.pc = 0x0010E210u; return; } if (c.pc != 0x0017FA48u) [[unlikely]] return; }
L_0017FA48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FA50u);  if (depth < kMaxDepth) unit_0001(c, 450u, depth + 1u); else { c.pc = 0x00107C68u; return; } if (c.pc != 0x0017FA50u) [[unlikely]] return; }
L_0017FA50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FA58u);  if (depth < kMaxDepth) unit_00A5(c, 103u, depth + 1u); else { c.pc = 0x00394DA0u; return; } if (c.pc != 0x0017FA58u) [[unlikely]] return; }
L_0017FA58:
    st32((c.r[28].w[0] - 26220u), c.r[2].w[0]);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FA6Cu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000D(c, 103u, depth + 1u); else { c.pc = 0x00135520u; return; } if (c.pc != 0x0017FA6Cu) [[unlikely]] return; }
L_0017FA6C:
    set32(c.r[4], 0u + 1u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FA7Cu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000D(c, 103u, depth + 1u); else { c.pc = 0x00135520u; return; } if (c.pc != 0x0017FA7Cu) [[unlikely]] return; }
L_0017FA7C:
    set32(c.r[4], 0u + 7u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FA8Cu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000D(c, 103u, depth + 1u); else { c.pc = 0x00135520u; return; } if (c.pc != 0x0017FA8Cu) [[unlikely]] return; }
L_0017FA8C:
    set32(c.r[4], 0u + 8u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FA9Cu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000D(c, 103u, depth + 1u); else { c.pc = 0x00135520u; return; } if (c.pc != 0x0017FA9Cu) [[unlikely]] return; }
L_0017FA9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FAA4u);  if (depth < kMaxDepth) unit_009D(c, 68u, depth + 1u); else { c.pc = 0x00374FA0u; return; } if (c.pc != 0x0017FAA4u) [[unlikely]] return; }
L_0017FAA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FAACu);  if (depth < kMaxDepth) unit_00A5(c, 362u, depth + 1u); else { c.pc = 0x00397FC0u; return; } if (c.pc != 0x0017FAACu) [[unlikely]] return; }
L_0017FAAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FAB4u);  if (depth < kMaxDepth) unit_0028(c, 271u, depth + 1u); else { c.pc = 0x001A3AE0u; return; } if (c.pc != 0x0017FAB4u) [[unlikely]] return; }
L_0017FAB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FABCu);  if (depth < kMaxDepth) unit_0028(c, 258u, depth + 1u); else { c.pc = 0x001A39C0u; return; } if (c.pc != 0x0017FABCu) [[unlikely]] return; }
L_0017FABC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FAC4u);  if (depth < kMaxDepth) unit_000D(c, 31u, depth + 1u); else { c.pc = 0x00134710u; return; } if (c.pc != 0x0017FAC4u) [[unlikely]] return; }
L_0017FAC4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00180000u);
    set32(c.r[6], c.r[2].w[0] - 27760u);
    set32(c.r[4], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FAD8u); set32(c.r[5], 0u + 1024u);  if (depth < kMaxDepth) unit_000D(c, 37u, depth + 1u); else { c.pc = 0x00134790u; return; } if (c.pc != 0x0017FAD8u) [[unlikely]] return; }
L_0017FAD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FAE0u);  if (depth < kMaxDepth) unit_0028(c, 277u, depth + 1u); else { c.pc = 0x001A3B50u; return; } if (c.pc != 0x0017FAE0u) [[unlikely]] return; }
L_0017FAE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FAE8u);  if (depth < kMaxDepth) unit_0028(c, 259u, depth + 1u); else { c.pc = 0x001A39D0u; return; } if (c.pc != 0x0017FAE8u) [[unlikely]] return; }
L_0017FAE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FAF0u);  if (depth < kMaxDepth) unit_0023(c, 92u, depth + 1u); else { c.pc = 0x0018CEF0u; return; } if (c.pc != 0x0017FAF0u) [[unlikely]] return; }
L_0017FAF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FAF8u);  if (depth < kMaxDepth) unit_000D(c, 138u, depth + 1u); else { c.pc = 0x00135D00u; return; } if (c.pc != 0x0017FAF8u) [[unlikely]] return; }
L_0017FAF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FB00u);  if (depth < kMaxDepth) unit_0022(c, 214u, depth + 1u); else { c.pc = 0x0018BA50u; return; } if (c.pc != 0x0017FB00u) [[unlikely]] return; }
L_0017FB00:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0017FB10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    set32(c.r[5], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A30000u);
    set32(c.r[16], c.r[2].w[0] + 9600u);
    set32(c.r[6], 0u + 2u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FB38u); mmi::paddub(c.r[7], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 42u, depth + 1u); else { c.pc = 0x00100170u; return; } if (c.pc != 0x0017FB38u) [[unlikely]] return; }
L_0017FB38:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x12000000u);
    c.r[2].d[0] = ld64((c.r[1].w[0] + 4096u));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017FB38u | kUnwind; return; } goto L_0017FB38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FB5Cu);  if (depth < kMaxDepth) unit_000E(c, 20u, depth + 1u); else { c.pc = 0x001384D0u; return; } if (c.pc != 0x0017FB5Cu) [[unlikely]] return; }
L_0017FB5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FB64u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_001E(c, 66u, depth + 1u); else { c.pc = 0x00179730u; return; } if (c.pc != 0x0017FB64u) [[unlikely]] return; }
L_0017FB64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FB6Cu);  if (depth < kMaxDepth) unit_0000(c, 301u, depth + 1u); else { c.pc = 0x00103520u; return; } if (c.pc != 0x0017FB6Cu) [[unlikely]] return; }
L_0017FB6C:
    set32(c.r[7], 0u + 128u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FB80u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 293u, depth + 1u); else { c.pc = 0x0019B750u; return; } if (c.pc != 0x0017FB80u) [[unlikely]] return; }
L_0017FB80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FB88u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 525u, depth + 1u); else { c.pc = 0x00103E20u; return; } if (c.pc != 0x0017FB88u) [[unlikely]] return; }
L_0017FB88:
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FB94u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 77u, depth + 1u); else { c.pc = 0x00100BE0u; return; } if (c.pc != 0x0017FB94u) [[unlikely]] return; }
L_0017FB94:
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 816u), 0u);
    st32((c.r[16].w[0] + 824u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00180000u);
    set32(c.r[4], c.r[2].w[0] - 27904u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FBB0u); st16((c.r[16].w[0] + 836u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0000(c, 114u, depth + 1u); else { c.pc = 0x00101260u; return; } if (c.pc != 0x0017FBB0u) [[unlikely]] return; }
L_0017FBB0:
    set32(c.r[3], 0u + 139u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[1].w[0] + 16u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[1].w[0]), 0u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0017FBE0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A30000u);
    set32(c.r[3], c.r[3].w[0] + 9600u);
    st32((c.r[28].w[0] - 26176u), c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[28].w[0] - 26176u)));
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[4].d[0] = c.r[3].d[0] | 18544ull;
    c.budget -= 7;
L_0017FBFC:
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[5], c.r[5].w[0] + 2u);
    st8((c.r[6].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], c.r[6].w[0] + 2u);
    c.r[3].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017FBFCu | kUnwind; return; } goto L_0017FBFC; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0017FC20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FC30u);  if (depth < kMaxDepth) unit_0027(c, 104u, depth + 1u); else { c.pc = 0x0019F160u; return; } if (c.pc != 0x0017FC30u) [[unlikely]] return; }
L_0017FC30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FC38u);  if (depth < kMaxDepth) unit_000E(c, 125u, depth + 1u); else { c.pc = 0x00139D10u; return; } if (c.pc != 0x0017FC38u) [[unlikely]] return; }
L_0017FC38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FC40u);  if (depth < kMaxDepth) unit_0026(c, 295u, depth + 1u); else { c.pc = 0x0019B860u; return; } if (c.pc != 0x0017FC40u) [[unlikely]] return; }
L_0017FC40:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0017FC50:
    st32((c.r[28].w[0] - 26624u), 0u);
    st32((c.r[28].w[0] - 26620u), 0u);
    st32((c.r[28].w[0] - 26188u), 0u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 26184u), 0u);  c.pc = t; return; }
L_0017FC70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26176u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 18542u));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017FC9C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0017FD44; } }
L_0017FC9C:
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 3u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017FCB4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0017FD44; } }
L_0017FCB4:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 63u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26184u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0017FCD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0017FD44; } }
L_0017FCD0:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FCE0u); st8((c.r[2].w[0] + 63u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0093(c, 246u, depth + 1u); else { c.pc = 0x0034F730u; return; } if (c.pc != 0x0017FCE0u) [[unlikely]] return; }
L_0017FCE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0017FD44; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FCF0u);  if (depth < kMaxDepth) unit_0099(c, 39u, depth + 1u); else { c.pc = 0x00364650u; return; } if (c.pc != 0x0017FCF0u) [[unlikely]] return; }
L_0017FCF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017FD40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FD00u);  if (depth < kMaxDepth) unit_001F(c, 347u, depth + 1u); else { c.pc = 0x0017FC50u; return; } if (c.pc != 0x0017FD00u) [[unlikely]] return; }
L_0017FD00:
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 1;
L_0017FD04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FD0Cu); c.r[4].d[0] = c.r[16].d[0] & 255ull;  if (depth < kMaxDepth) unit_0022(c, 234u, depth + 1u); else { c.pc = 0x0018BCF0u; return; } if (c.pc != 0x0017FD0Cu) [[unlikely]] return; }
L_0017FD0C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017FD04u | kUnwind; return; } goto L_0017FD04; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FD28u);  if (depth < kMaxDepth) unit_001F(c, 356u, depth + 1u); else { c.pc = 0x0017FD60u; return; } if (c.pc != 0x0017FD28u) [[unlikely]] return; }
L_0017FD28:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00160000u);
    set32(c.r[5], c.r[2].w[0] - 16560u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FD38u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0022(c, 227u, depth + 1u); else { c.pc = 0x0018BC10u; return; } if (c.pc != 0x0017FD38u) [[unlikely]] return; }
L_0017FD38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0017FD44; } }
L_0017FD40:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_0017FD44:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0017FD60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 2;
L_0017FD68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FD70u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000D(c, 50u, depth + 1u); else { c.pc = 0x00134B50u; return; } if (c.pc != 0x0017FD70u) [[unlikely]] return; }
L_0017FD70:
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017FD68u | kUnwind; return; } goto L_0017FD68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FD8Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000D(c, 41u, depth + 1u); else { c.pc = 0x00134850u; return; } if (c.pc != 0x0017FD8Cu) [[unlikely]] return; }
L_0017FD8C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x12000000u);
    c.r[2].d[0] = ld64((c.r[1].w[0] + 4096u));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017FD8Cu | kUnwind; return; } goto L_0017FD8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FDB0u);  if (depth < kMaxDepth) unit_0026(c, 294u, depth + 1u); else { c.pc = 0x0019B7A0u; return; } if (c.pc != 0x0017FDB0u) [[unlikely]] return; }
L_0017FDB0:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0017FDC0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[3].d[0] = c.r[3].d[0] | 6768ull;
    st32((c.r[28].w[0] - 26628u), c.r[3].w[0]);
    set32(c.r[3], 0u + 601u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 26632u), c.r[3].w[0]);  c.pc = t; return; }
L_0017FDE0:
    set32(c.r[3], ld32((c.r[28].w[0] - 26632u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0017FE10; } }
    set32(c.r[2], c.r[3].w[0] - c.r[4].w[0]);
    st32((c.r[28].w[0] - 26632u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26628u)));
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 26628u), c.r[3].w[0]);  if (t) { goto L_0017FE10; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_0017FE10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0017FE20:
    set32(c.r[3], ld32((c.r[28].w[0] - 26632u)));
    set32(c.r[6], ld32((c.r[28].w[0] - 26628u)));
    set32(c.r[5], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[6].w[0] - c.r[5].w[0]);
    st32((c.r[28].w[0] - 26628u), c.r[5].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 26632u), c.r[3].w[0]);  c.pc = t; return; }
L_0017FE40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], 0u + 2u);
    set32(c.r[5], c.r[3].w[0] + 6u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 6u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_0017FF28; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_0017FED0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0017FE80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[16], c.r[0]);  if (t) { goto L_0017FF38; } }
L_0017FE80:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u - 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 188u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0017FE9C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_0017FF34; } }
L_0017FE9C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FEACu); st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0020(c, 192u, depth + 1u); else { c.pc = 0x00181F50u; return; } if (c.pc != 0x0017FEACu) [[unlikely]] return; }
L_0017FEAC:
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    st32((c.r[2].w[0] + 136u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 144u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FEC8u); set32(c.r[6], c.r[2].w[0] + 136u);  if (depth < kMaxDepth) unit_0037(c, 109u, depth + 1u); else { c.pc = 0x001DD620u; return; } if (c.pc != 0x0017FEC8u) [[unlikely]] return; }
L_0017FEC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017FF34; } }
L_0017FED0:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[2] = c.r[4].w[0];
    c.f[1] = ld32((c.r[3].w[0] + 136u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[3].w[0] + 136u), c.f[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 14;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[2].w[0] + 156u), c.f[0]);  if (t) { goto L_0017FF28; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 6u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st32((c.r[2].w[0] + 156u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st32((c.r[2].w[0] + 136u), c.r[4].w[0]);
    c.budget -= 8;
L_0017FF28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FF30u);  if (depth < kMaxDepth) unit_001F(c, 368u, depth + 1u); else { c.pc = 0x0017FF50u; return; } if (c.pc != 0x0017FF30u) [[unlikely]] return; }
L_0017FF30:
    mmi::paddub(c.r[16], c.r[2], c.r[0]);
    c.budget -= 1;
L_0017FF34:
    mmi::paddub(c.r[2], c.r[16], c.r[0]);
    c.budget -= 1;
L_0017FF38:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0017FF50:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[2], c.r[28].w[0] - 31080u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0017C000u < 16384u) { entry = entries_001F[(t - 0x0017C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0017FF70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[3].d[0] = c.r[2].d[0] | 18542ull;
    c.r[4].d[0] = c.r[2].d[0] | 18543ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 26176u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26176u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 18;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[5], c.r[2].w[0] + 1u);  if (t) { [[clang::musttail]] return unit_0020(c, 76u, depth); } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], c.r[4].w[0] + 21728u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0017C000u < 16384u) { entry = entries_001F[(t - 0x0017C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0017FFD4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[4], 0u + 61u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FFE8u); st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0021(c, 62u, depth + 1u); else { c.pc = 0x00184CD0u; return; } if (c.pc != 0x0017FFE8u) [[unlikely]] return; }
L_0017FFE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { [[clang::musttail]] return unit_0020(c, 77u, depth); } }
L_0017FFF0:
    set32(c.r[2], ld32((c.r[28].w[0] - 26176u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 4;
    [[clang::musttail]] return unit_0020(c, 1u, depth);
}

}
