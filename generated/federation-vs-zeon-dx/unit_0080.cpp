#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0080[4096] = {
    1, 0, 2, 3, 0, 0, 0, 0, 4, 0, 0, 5, 6, 0, 7, 0, 8, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 10, 0, 0, 0, 0,
    11, 0, 0, 0, 12, 0, 13, 0, 14, 0, 15, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0,
    19, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 22, 0, 23, 0, 0, 0, 0, 0, 0, 0,
    24, 0, 25, 0, 26, 0, 0, 0, 0, 0, 27, 0, 0, 0, 28, 0, 29, 0, 30, 0, 31, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    33, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 39, 0, 40, 0, 41, 0, 42, 0, 0, 0, 0, 43, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0,
    54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 56, 0, 57, 0, 58, 0, 59, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0,
    61, 0, 0, 0, 62, 0, 0, 0, 0, 0, 63, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 66, 0, 0, 0, 0, 0, 0,
    67, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 70, 0, 71, 0, 0, 0, 72, 0, 73, 0, 74, 0, 75, 0, 76,
    0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 82, 0, 0, 0, 83, 0, 0, 0, 0, 0,
    0, 0, 0, 84, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 91, 0, 92, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0,
    106, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 109, 0, 0, 110, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 116, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 119, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 124, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 128, 0, 129, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0,
    0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 142, 0, 143, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 151, 0, 152, 0, 153, 0, 154, 0, 0, 0, 0, 0, 0,
    155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 0, 159, 0, 160, 0, 0, 161, 0, 0, 0, 162, 0,
    163, 0, 164, 0, 0, 0, 165, 0, 166, 0, 0, 0, 0, 167, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0,
    172, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0,
    210, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0,
    0, 214, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217,
    0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    221, 0, 222, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 225, 0, 0, 0, 0, 0, 0, 226, 0,
    0, 0, 0, 227, 0, 228, 0, 229, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 232, 0, 233, 0,
    0, 0, 0, 234, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 240, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 247, 0, 0, 0, 0, 0,
    0, 0, 0, 248, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0, 252, 0, 253, 0, 0, 0, 254, 0, 255, 0, 256, 0, 257, 0, 258, 0, 0, 0, 0,
    0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 263, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0,
    266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 267, 0, 0, 0, 0, 268, 0, 0, 0, 269, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    274, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0,
    0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    282, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 285, 0, 0, 0,
    286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 294, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 300, 0, 0, 0, 0,
    0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0,
    0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 307, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0,
};

void unit_0080(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00300000;
    case 2u: goto L_00300008;
    case 3u: goto L_0030000C;
    case 4u: goto L_00300020;
    case 5u: goto L_0030002C;
    case 6u: goto L_00300030;
    case 7u: goto L_00300038;
    case 8u: goto L_00300040;
    case 9u: goto L_00300060;
    case 10u: goto L_0030006C;
    case 11u: goto L_00300080;
    case 12u: goto L_00300090;
    case 13u: goto L_00300098;
    case 14u: goto L_003000A0;
    case 15u: goto L_003000A8;
    case 16u: goto L_003000C0;
    case 17u: goto L_003000E0;
    case 18u: goto L_003000F0;
    case 19u: goto L_00300100;
    case 20u: goto L_00300120;
    case 21u: goto L_00300140;
    case 22u: goto L_00300158;
    case 23u: goto L_00300160;
    case 24u: goto L_00300180;
    case 25u: goto L_00300188;
    case 26u: goto L_00300190;
    case 27u: goto L_003001A8;
    case 28u: goto L_003001B8;
    case 29u: goto L_003001C0;
    case 30u: goto L_003001C8;
    case 31u: goto L_003001D0;
    case 32u: goto L_003001D8;
    case 33u: goto L_00300200;
    case 34u: goto L_00300210;
    case 35u: goto L_00300220;
    case 36u: goto L_00300264;
    case 37u: goto L_00300294;
    case 38u: goto L_003002B0;
    case 39u: goto L_003002C0;
    case 40u: goto L_003002C8;
    case 41u: goto L_003002D0;
    case 42u: goto L_003002D8;
    case 43u: goto L_003002EC;
    case 44u: goto L_00300314;
    case 45u: goto L_00300350;
    case 46u: goto L_00300370;
    case 47u: goto L_00300510;
    case 48u: goto L_00300534;
    case 49u: goto L_00300550;
    case 50u: goto L_0030056C;
    case 51u: goto L_003005A4;
    case 52u: goto L_003005D4;
    case 53u: goto L_003005DC;
    case 54u: goto L_00300600;
    case 55u: goto L_00300630;
    case 56u: goto L_00300638;
    case 57u: goto L_00300640;
    case 58u: goto L_00300648;
    case 59u: goto L_00300650;
    case 60u: goto L_00300670;
    case 61u: goto L_00300680;
    case 62u: goto L_00300690;
    case 63u: goto L_003006A8;
    case 64u: goto L_003006B4;
    case 65u: goto L_003006D8;
    case 66u: goto L_003006E4;
    case 67u: goto L_00300700;
    case 68u: goto L_00300720;
    case 69u: goto L_00300830;
    case 70u: goto L_00300844;
    case 71u: goto L_0030084C;
    case 72u: goto L_0030085C;
    case 73u: goto L_00300864;
    case 74u: goto L_0030086C;
    case 75u: goto L_00300874;
    case 76u: goto L_0030087C;
    case 77u: goto L_003008A0;
    case 78u: goto L_003008B0;
    case 79u: goto L_003008C0;
    case 80u: goto L_003008E0;
    case 81u: goto L_0030094C;
    case 82u: goto L_00300958;
    case 83u: goto L_00300968;
    case 84u: goto L_0030098C;
    case 85u: goto L_00300998;
    case 86u: goto L_003009D4;
    case 87u: goto L_00300A00;
    case 88u: goto L_00300AA0;
    case 89u: goto L_00300AC8;
    case 90u: goto L_00300B3C;
    case 91u: goto L_00300B44;
    case 92u: goto L_00300B4C;
    case 93u: goto L_00300B54;
    case 94u: goto L_00300B90;
    case 95u: goto L_00300C80;
    case 96u: goto L_00300D3C;
    case 97u: goto L_00300DD0;
    case 98u: goto L_00300F30;
    case 99u: goto L_00301070;
    case 100u: goto L_00301190;
    case 101u: goto L_003011A0;
    case 102u: goto L_003011B0;
    case 103u: goto L_00301218;
    case 104u: goto L_00301260;
    case 105u: goto L_003012F0;
    case 106u: goto L_00301300;
    case 107u: goto L_00301314;
    case 108u: goto L_00301354;
    case 109u: goto L_00301360;
    case 110u: goto L_0030136C;
    case 111u: goto L_003013B4;
    case 112u: goto L_003013D0;
    case 113u: goto L_003013FC;
    case 114u: goto L_00301450;
    case 115u: goto L_00301470;
    case 116u: goto L_00301510;
    case 117u: goto L_0030151C;
    case 118u: goto L_0030152C;
    case 119u: goto L_00301548;
    case 120u: goto L_00301554;
    case 121u: goto L_003015A4;
    case 122u: goto L_003015AC;
    case 123u: goto L_003015E0;
    case 124u: goto L_00301608;
    case 125u: goto L_00301620;
    case 126u: goto L_00301664;
    case 127u: goto L_0030168C;
    case 128u: goto L_00301704;
    case 129u: goto L_0030170C;
    case 130u: goto L_00301714;
    case 131u: goto L_00301750;
    case 132u: goto L_00301840;
    case 133u: goto L_00301940;
    case 134u: goto L_00301A50;
    case 135u: goto L_00301A60;
    case 136u: goto L_00301A70;
    case 137u: goto L_00301AD8;
    case 138u: goto L_00301B30;
    case 139u: goto L_00301BB0;
    case 140u: goto L_00301BF8;
    case 141u: goto L_00301C0C;
    case 142u: goto L_00301C8C;
    case 143u: goto L_00301C94;
    case 144u: goto L_00301CA0;
    case 145u: goto L_00301CCC;
    case 146u: goto L_00301D20;
    case 147u: goto L_00301D40;
    case 148u: goto L_00301DF0;
    case 149u: goto L_00301E18;
    case 150u: goto L_00301E30;
    case 151u: goto L_00301E4C;
    case 152u: goto L_00301E54;
    case 153u: goto L_00301E5C;
    case 154u: goto L_00301E64;
    case 155u: goto L_00301E80;
    case 156u: goto L_00301F20;
    case 157u: goto L_00301F30;
    case 158u: goto L_00301F40;
    case 159u: goto L_00301F54;
    case 160u: goto L_00301F5C;
    case 161u: goto L_00301F68;
    case 162u: goto L_00301F78;
    case 163u: goto L_00301F80;
    case 164u: goto L_00301F88;
    case 165u: goto L_00301F98;
    case 166u: goto L_00301FA0;
    case 167u: goto L_00301FB4;
    case 168u: goto L_00301FBC;
    case 169u: goto L_00301FE0;
    case 170u: goto L_00302038;
    case 171u: goto L_0030206C;
    case 172u: goto L_00302080;
    case 173u: goto L_003020A0;
    case 174u: goto L_00302150;
    case 175u: goto L_003021A4;
    case 176u: goto L_003021E0;
    case 177u: goto L_00302220;
    case 178u: goto L_00302230;
    case 179u: goto L_00302240;
    case 180u: goto L_00302250;
    case 181u: goto L_00302270;
    case 182u: goto L_00302300;
    case 183u: goto L_00302330;
    case 184u: goto L_00302350;
    case 185u: goto L_00302420;
    case 186u: goto L_003024CC;
    case 187u: goto L_00302504;
    case 188u: goto L_003025B0;
    case 189u: goto L_003025F0;
    case 190u: goto L_00302630;
    case 191u: goto L_00302688;
    case 192u: goto L_003026DC;
    case 193u: goto L_00302714;
    case 194u: goto L_003027B4;
    case 195u: goto L_003028E0;
    case 196u: goto L_00302910;
    case 197u: goto L_00302978;
    case 198u: goto L_003029F4;
    case 199u: goto L_00302A88;
    case 200u: goto L_00302AA8;
    case 201u: goto L_00302AC8;
    case 202u: goto L_00302B28;
    case 203u: goto L_00302B8C;
    case 204u: goto L_00302BC4;
    case 205u: goto L_00302BFC;
    case 206u: goto L_00302C34;
    case 207u: goto L_00302CA8;
    case 208u: goto L_00302CD4;
    case 209u: goto L_00302CF0;
    case 210u: goto L_00302D00;
    case 211u: goto L_00302D10;
    case 212u: goto L_00302D30;
    case 213u: goto L_00302D74;
    case 214u: goto L_00302D84;
    case 215u: goto L_00302DA0;
    case 216u: goto L_00302DB0;
    case 217u: goto L_00302DFC;
    case 218u: goto L_00302E04;
    case 219u: goto L_00302E2C;
    case 220u: goto L_00302E50;
    case 221u: goto L_00302E80;
    case 222u: goto L_00302E88;
    case 223u: goto L_00302E90;
    case 224u: goto L_00302ED4;
    case 225u: goto L_00302EDC;
    case 226u: goto L_00302EF8;
    case 227u: goto L_00302F0C;
    case 228u: goto L_00302F14;
    case 229u: goto L_00302F1C;
    case 230u: goto L_00302F24;
    case 231u: goto L_00302F68;
    case 232u: goto L_00302F70;
    case 233u: goto L_00302F78;
    case 234u: goto L_00302F8C;
    case 235u: goto L_00302FA0;
    case 236u: goto L_00302FC4;
    case 237u: goto L_00302FD4;
    case 238u: goto L_00303000;
    case 239u: goto L_00303030;
    case 240u: goto L_00303108;
    case 241u: goto L_00303120;
    case 242u: goto L_00303134;
    case 243u: goto L_003031EC;
    case 244u: goto L_00303230;
    case 245u: goto L_00303250;
    case 246u: goto L_0030335C;
    case 247u: goto L_00303368;
    case 248u: goto L_0030338C;
    case 249u: goto L_003033A0;
    case 250u: goto L_00303414;
    case 251u: goto L_00303424;
    case 252u: goto L_00303434;
    case 253u: goto L_0030343C;
    case 254u: goto L_0030344C;
    case 255u: goto L_00303454;
    case 256u: goto L_0030345C;
    case 257u: goto L_00303464;
    case 258u: goto L_0030346C;
    case 259u: goto L_00303490;
    case 260u: goto L_00303510;
    case 261u: goto L_00303560;
    case 262u: goto L_003035A0;
    case 263u: goto L_003035B0;
    case 264u: goto L_003035C0;
    case 265u: goto L_003035E0;
    case 266u: goto L_00303600;
    case 267u: goto L_0030368C;
    case 268u: goto L_003036A0;
    case 269u: goto L_003036B0;
    case 270u: goto L_003036C0;
    case 271u: goto L_003036E4;
    case 272u: goto L_00303720;
    case 273u: goto L_00303730;
    case 274u: goto L_00303780;
    case 275u: goto L_00303790;
    case 276u: goto L_003037F0;
    case 277u: goto L_0030380C;
    case 278u: goto L_003038C0;
    case 279u: goto L_003038DC;
    case 280u: goto L_00303970;
    case 281u: goto L_003039B8;
    case 282u: goto L_00303A00;
    case 283u: goto L_00303A20;
    case 284u: goto L_00303AE8;
    case 285u: goto L_00303AF0;
    case 286u: goto L_00303B00;
    case 287u: goto L_00303B80;
    case 288u: goto L_00303BB8;
    case 289u: goto L_00303C18;
    case 290u: goto L_00303C44;
    case 291u: goto L_00303C6C;
    case 292u: goto L_00303CB0;
    case 293u: goto L_00303CE0;
    case 294u: goto L_00303CE8;
    case 295u: goto L_00303D30;
    case 296u: goto L_00303D54;
    case 297u: goto L_00303E20;
    case 298u: goto L_00303E38;
    case 299u: goto L_00303E58;
    case 300u: goto L_00303E6C;
    case 301u: goto L_00303E90;
    case 302u: goto L_00303ED4;
    case 303u: goto L_00303EF4;
    case 304u: goto L_00303F18;
    case 305u: goto L_00303F38;
    case 306u: goto L_00303F58;
    case 307u: goto L_00303F78;
    case 308u: goto L_00303FA0;
    case 309u: goto L_00303FD0;
    case 310u: goto L_00303FF0;
    default: bad_entry(c, 0x00300000u); return;
    }
L_00300000:
    set32(c.r[2], c.r[2].w[0] - 14096u);
    st32((c.r[4].w[0] + 32u), c.f[0]);
    c.budget -= 2;
L_00300008:
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 1;
L_0030000C:
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    set32(c.r[9], c.r[10].w[0] << 2);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    set32(c.r[9], c.r[9].w[0] << 2);
    c.budget -= 5;
L_00300020:
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    c.f[0] = ld32((c.r[8].w[0]));
    st32((c.r[4].w[0] + 36u), c.f[0]);
    c.budget -= 3;
L_0030002C:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 1;
L_00300030:
    set32(c.r[8], c.r[9].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    c.budget -= 2;
L_00300038:
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[8].w[0]);
    c.budget -= 2;
L_00300040:
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[4].w[0] + 40u), c.f[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[5], c.r[8].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[8].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.budget -= 8;
L_00300060:
    st32((c.r[4].w[0] + 104u), c.f[0]);
    st32((c.r[4].w[0] + 48u), 0u);
    st32((c.r[4].w[0] + 52u), 0u);
    c.budget -= 3;
L_0030006C:
    st32((c.r[4].w[0] + 56u), 0u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300080u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0016(c, 134u, depth + 1u); else { c.pc = 0x0015B550u; return; } if (c.pc != 0x00300080u) [[unlikely]] return; }
L_00300080:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 4;
L_00300090:
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 520u)));
    c.budget -= 2;
L_00300098:
    st32((c.r[17].w[0] + 48u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 2;
L_003000A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003000A8u); st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (depth < kMaxDepth) unit_0052(c, 164u, depth + 1u); else { c.pc = 0x00249EB0u; return; } if (c.pc != 0x003000A8u) [[unlikely]] return; }
L_003000A8:
    set32(c.r[4], ld32((c.r[18].w[0] + 176u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[16].w[0]), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003000C8; } }
    goto L_003000C4;
L_003000C0:
    c.budget -= 1;
L_003000C4:
    mmi::paddub(c.r[3], c.r[0], c.r[0]);
    c.budget -= 1;
L_003000C8:
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] << 11);
    st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.budget -= 6;
L_003000E0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003000F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 4;
L_00300100:
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    set32(c.r[16], c.r[18].w[0] + 320u);
    set32(c.r[17], c.r[18].w[0] + 432u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.budget -= 8;
L_00300120:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 11));  if (t) { goto L_00300130; } }
    set32(c.r[2], c.r[3].w[0] + 2047u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 11));
    c.budget -= 2;
L_00300130:
    c.r[3].d[0] = c.r[2].d[0] & 3ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (t) { goto L_00300178; } }
L_00300140:
    c.r[5].d[0] = c.r[3].d[0] << 56;
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300158u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0052(c, 164u, depth + 1u); else { c.pc = 0x00249EB0u; return; } if (c.pc != 0x00300158u) [[unlikely]] return; }
L_00300158:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_00300160:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0030016C; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_0030016C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00300188; } }
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 1;
L_00300178:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300180u);  if (depth < kMaxDepth) unit_0052(c, 166u, depth + 1u); else { c.pc = 0x0024A020u; return; } if (c.pc != 0x00300180u) [[unlikely]] return; }
L_00300180:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300188u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0016(c, 131u, depth + 1u); else { c.pc = 0x0015B4E0u; return; } if (c.pc != 0x00300188u) [[unlikely]] return; }
L_00300188:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300190u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x00300190u) [[unlikely]] return; }
L_00300190:
    c.f[5] = ld32((c.r[18].w[0] + 32u));
    c.f[4] = ld32((c.r[17].w[0]));
    c.f[3] = ld32((c.r[18].w[0] + 36u));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.f[1] = ld32((c.r[18].w[0] + 40u));
    c.budget -= 6;
L_003001A8:
    c.f[12] = fp::add(c.f[5], c.f[4]);
    c.f[13] = fp::add(c.f[3], c.f[2]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003001B8u); c.f[14] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x003001B8u) [[unlikely]] return; }
L_003001B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003001C0u); set32(c.r[4], ld32((c.r[18].w[0] + 88u)));  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x003001C0u) [[unlikely]] return; }
L_003001C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003001C8u); set32(c.r[4], ld32((c.r[18].w[0] + 84u)));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x003001C8u) [[unlikely]] return; }
L_003001C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003001D0u); set32(c.r[4], ld32((c.r[18].w[0] + 80u)));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x003001D0u) [[unlikely]] return; }
L_003001D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003001D8u); set32(c.r[4], c.r[18].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x003001D8u) [[unlikely]] return; }
L_003001D8:
    set32(c.r[3], 0u + 1u);
    st8((c.r[18].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00300200:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00300210:
    c.budget -= 2;
    {  goto L_00303A20; }
L_00300220:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 324u));
    set32(c.r[2], ld32((c.r[4].w[0] + 180u)));
    mmi::paddub(c.r[20], c.r[4], c.r[0]);
    set32(c.r[18], c.r[20].w[0] + 432u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[4].w[0] + 184u), c.r[2].w[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300264u); set32(c.r[4], c.r[20].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x00300264u) [[unlikely]] return; }
L_00300264:
    set32(c.r[4], ld32((c.r[20].w[0] + 176u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    set32(c.r[3], c.r[3].w[0] - 27408u);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    mmi::paddub(c.r[19], c.r[0], c.r[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 14u)));
    set32(c.r[4], c.r[5].w[0] << 4);
    set32(c.r[5], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] << 5);
    set32(c.r[17], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 12;
L_00300294:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003002F0; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_003002B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003002B0u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x003002B0u) [[unlikely]] return; }
L_003002B0:
    c.f[13] = ld32((c.r[17].w[0] + 68u));
    c.f[14] = ld32((c.r[17].w[0] + 72u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003002C0u); c.f[12] = ld32((c.r[17].w[0] + 64u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x003002C0u) [[unlikely]] return; }
L_003002C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003002C8u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 14u)));  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x003002C8u) [[unlikely]] return; }
L_003002C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003002D0u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 12u)));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x003002D0u) [[unlikely]] return; }
L_003002D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003002D8u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 10u)));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x003002D8u) [[unlikely]] return; }
L_003002D8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[3].d[0];  if (t) { goto L_003002F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003002ECu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x003002ECu) [[unlikely]] return; }
L_003002EC:
    c.budget -= 1;
L_003002F0:
    set32(c.r[4], ld32((c.r[20].w[0] + 184u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], c.r[4].w[0] + c.r[19].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.budget -= 7;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_0030031C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300314u);  if (depth < kMaxDepth) unit_000F(c, 36u, depth + 1u); else { c.pc = 0x0013CD20u; return; } if (c.pc != 0x00300314u) [[unlikely]] return; }
L_00300314:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 2;
L_0030031C:
    c.r[3].d[0] = c.r[16].sd[0] < 6ll ? 1ull : 0ull;
    set32(c.r[17], c.r[17].w[0] + 240u);
    set32(c.r[18], c.r[18].w[0] + 6u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00300294u | kUnwind; return; } goto L_00300294; } }
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00300350:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] + 10368u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00300000u < 16384u) { entry = entries_0080[(t - 0x00300000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00300370:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[5], c.r[3].w[0] + 9808u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[10], c.r[3].w[0] + 9809u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[3], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 88u), 0u);
    st32((c.r[4].w[0] + 80u), 0u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[9], c.r[3].w[0] + 9810u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[8], c.r[3].w[0] + 9812u);
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    st8((c.r[4].w[0] + 10u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[7], c.r[3].w[0] + 9816u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[6], c.r[3].w[0] + 9820u);
    set32(c.r[11], c.r[12].w[0] << 1);
    set32(c.r[11], c.r[11].w[0] + c.r[12].w[0]);
    set32(c.r[11], c.r[11].w[0] << 3);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[5], c.r[3].w[0] + 9824u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], c.r[3].w[0] + 9828u);
    st8((c.r[4].w[0] + 323u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[10], c.r[11].w[0] << 1);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    set32(c.r[10], c.r[10].w[0] << 3);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0])));
    st8((c.r[4].w[0] + 322u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[9], c.r[10].w[0] << 1);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    set32(c.r[9], c.r[9].w[0] << 3);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0])));
    st16((c.r[4].w[0] + 320u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[8], c.r[9].w[0] << 1);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[8], c.r[8].w[0] << 3);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    c.f[0] = ld32((c.r[7].w[0]));
    st32((c.r[4].w[0] + 32u), c.f[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[7], c.r[8].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 3);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.f[0] = ld32((c.r[6].w[0]));
    st32((c.r[4].w[0] + 36u), c.f[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[6], c.r[7].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[4].w[0] + 40u), c.f[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[4].w[0] + 104u), c.f[0]);
    st32((c.r[4].w[0] + 48u), 0u);
    st32((c.r[4].w[0] + 52u), 0u);
    st32((c.r[4].w[0] + 56u), 0u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 323u)));
    c.budget -= 89;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] + 320u);  if (t) { goto L_003004E4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00300000u);
    set32(c.r[3], c.r[3].w[0] + 24976u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 168u), c.r[3].w[0]);  if (t) { goto L_003004F0; } }
L_003004E4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00300000u);
    set32(c.r[3], c.r[3].w[0] + 1680u);
    st32((c.r[16].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 3;
L_003004F0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00300510; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 14082u)));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300510u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 285u, depth + 1u); else { c.pc = 0x001970F0u; return; } if (c.pc != 0x00300510u) [[unlikely]] return; }
L_00300510:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[2].w[0] - 14096u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300534u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0016(c, 134u, depth + 1u); else { c.pc = 0x0015B550u; return; } if (c.pc != 0x00300534u) [[unlikely]] return; }
L_00300534:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00300550:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030056Cu); set32(c.r[17], c.r[16].w[0] + 320u);  if (depth < kMaxDepth) unit_0016(c, 131u, depth + 1u); else { c.pc = 0x0015B4E0u; return; } if (c.pc != 0x0030056Cu) [[unlikely]] return; }
L_0030056C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[1].d[0] = c.r[3].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003005B4; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00300598; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003005B4; } }
L_00300598:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 166u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003005A4u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0050(c, 30u, depth + 1u); else { c.pc = 0x002403C0u; return; } if (c.pc != 0x003005A4u) [[unlikely]] return; }
L_003005A4:
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_003005B4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003005D4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 14082u)));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003005D4u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 285u, depth + 1u); else { c.pc = 0x001970F0u; return; } if (c.pc != 0x003005D4u) [[unlikely]] return; }
L_003005D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003005DCu);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x003005DCu) [[unlikely]] return; }
L_003005DC:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], c.r[2].w[0] + 10144u);
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] + 10148u);
    c.f[4] = ld32((c.r[16].w[0] + 32u));
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 9;
L_00300600:
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = ld32((c.r[2].w[0]));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[3] = ld32((c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] + 10152u);
    c.f[13] = fp::add(c.f[2], c.f[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[12] = fp::add(c.f[4], c.f[3]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300630u); c.f[14] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00300630u) [[unlikely]] return; }
L_00300630:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300638u); set32(c.r[4], ld32((c.r[16].w[0] + 88u)));  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00300638u) [[unlikely]] return; }
L_00300638:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300640u); set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00300640u) [[unlikely]] return; }
L_00300640:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300648u); set32(c.r[4], ld32((c.r[16].w[0] + 80u)));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00300648u) [[unlikely]] return; }
L_00300648:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300650u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00300650u) [[unlikely]] return; }
L_00300650:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00300670:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00300680:
    c.budget -= 2;
    {  goto L_00303A20; }
L_00300690:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003006A8u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x003006A8u) [[unlikely]] return; }
L_003006A8:
    set32(c.r[2], ld32((c.r[16].w[0] + 184u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003006B4u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_000F(c, 36u, depth + 1u); else { c.pc = 0x0013CD20u; return; } if (c.pc != 0x003006B4u) [[unlikely]] return; }
L_003006B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40700000u);
    c.r[2].d[0] = c.r[2].d[0] | 2886ull;
    c.f[13] = c.r[2].w[0];
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBFC90000u);
    c.r[2].d[0] = c.r[2].d[0] | 642ull;
    c.f[14] = c.r[2].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003006D8u);  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x003006D8u) [[unlikely]] return; }
L_003006D8:
    set32(c.r[2], ld32((c.r[16].w[0] + 184u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003006E4u); set32(c.r[4], ld32((c.r[2].w[0] + 4u)));  if (depth < kMaxDepth) unit_000F(c, 36u, depth + 1u); else { c.pc = 0x0013CD20u; return; } if (c.pc != 0x003006E4u) [[unlikely]] return; }
L_003006E4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00300700:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] + 10624u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00300000u < 16384u) { entry = entries_0080[(t - 0x00300000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00300720:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00300000u);
    set32(c.r[5], c.r[2].w[0] + 24976u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], c.r[2].w[0] + 10384u);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    set32(c.r[2], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[4].w[0] + 168u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 88u), 0u);
    st32((c.r[4].w[0] + 80u), 0u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[9], c.r[2].w[0] + 10388u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[8], c.r[2].w[0] + 10392u);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    st8((c.r[4].w[0] + 10u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[5], c.r[2].w[0] + 10396u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], c.r[2].w[0] + 10400u);
    set32(c.r[10], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    set32(c.r[10], c.r[10].w[0] << 2);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    c.f[0] = ld32((c.r[9].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[2].w[0] - 14096u);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    st32((c.r[4].w[0] + 32u), c.f[0]);
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[9], c.r[10].w[0] << 2);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    set32(c.r[9], c.r[9].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    c.f[0] = ld32((c.r[8].w[0]));
    st32((c.r[4].w[0] + 36u), c.f[0]);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[8], c.r[9].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[8].w[0]);
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[4].w[0] + 40u), c.f[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[5], c.r[8].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[8].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[4].w[0] + 104u), c.f[0]);
    st32((c.r[4].w[0] + 48u), 0u);
    st32((c.r[4].w[0] + 52u), 0u);
    st32((c.r[4].w[0] + 56u), 0u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    c.budget -= 66;
    { set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0015B550u | kUnwind; return; } [[clang::musttail]] return unit_0016(c, 134u, depth); }
L_00300830:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300844u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0016(c, 131u, depth + 1u); else { c.pc = 0x0015B4E0u; return; } if (c.pc != 0x00300844u) [[unlikely]] return; }
L_00300844:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030084Cu);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x0030084Cu) [[unlikely]] return; }
L_0030084C:
    c.f[13] = ld32((c.r[16].w[0] + 36u));
    c.f[14] = ld32((c.r[16].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030085Cu); c.f[12] = ld32((c.r[16].w[0] + 32u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x0030085Cu) [[unlikely]] return; }
L_0030085C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300864u); set32(c.r[4], ld32((c.r[16].w[0] + 88u)));  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00300864u) [[unlikely]] return; }
L_00300864:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030086Cu); set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x0030086Cu) [[unlikely]] return; }
L_0030086C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300874u); set32(c.r[4], ld32((c.r[16].w[0] + 80u)));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00300874u) [[unlikely]] return; }
L_00300874:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030087Cu); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0030087Cu) [[unlikely]] return; }
L_0030087C:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003008A0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003008B0:
    c.budget -= 2;
    {  goto L_00303A20; }
L_003008C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] + 10784u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00300000u < 16384u) { entry = entries_0080[(t - 0x00300000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003008E0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00300000u);
    mmi::paddub(c.r[23], c.r[4], c.r[0]);
    set32(c.r[16], c.r[23].w[0] + 320u);
    set32(c.r[2], c.r[2].w[0] + 4528u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 168u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[19], c.r[2].w[0] + 10640u);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    mmi::paddub(c.r[18], c.r[16], c.r[0]);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(0u));
    mmi::paddub(c.r[20], c.r[16], c.r[0]);
    c.budget -= 26;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[21], c.r[16], c.r[0]);  if (t) { goto L_003009B8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_0030094C:
    st32((c.r[18].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300958u); c.f[12] = ld32((c.r[19].w[0]));  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x00300958u) [[unlikely]] return; }
L_00300958:
    set32(c.r[22], c.r[16].w[0] + c.r[22].w[0]);
    st8((c.r[22].w[0] + 100u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300968u); c.f[12] = ld32((c.r[19].w[0] + 4u));  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x00300968u) [[unlikely]] return; }
L_00300968:
    st8((c.r[22].w[0] + 105u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[19].w[0] + 8u));
    st32((c.r[20].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 12u));
    st32((c.r[20].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 16u));
    st32((c.r[18].w[0] + 40u), c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030098Cu); c.f[12] = ld32((c.r[19].w[0] + 20u));  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x0030098Cu) [[unlikely]] return; }
L_0030098C:
    st16((c.r[21].w[0] + 80u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300998u); c.f[12] = ld32((c.r[19].w[0] + 24u));  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x00300998u) [[unlikely]] return; }
L_00300998:
    st16((c.r[21].w[0] + 90u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.r[17].d[0] = c.r[2].d[0] << 56;
    set32(c.r[18], c.r[18].w[0] + 4u);
    set32(c.r[19], c.r[19].w[0] + 28u);
    set32(c.r[20], c.r[20].w[0] + 8u);
    set32(c.r[21], c.r[21].w[0] + 2u);
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);
    c.budget -= 8;
L_003009B8:
    c.r[22].d[0] = c.r[17].d[0] << 56;
    c.r[22].d[0] = static_cast<std::uint64_t>(c.r[22].sd[0] >> 56);
    c.r[2].d[0] = c.r[22].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030094Cu | kUnwind; return; } goto L_0030094C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003009D4u); mmi::paddub(c.r[4], c.r[23], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 87u, depth + 1u); else { c.pc = 0x00300A00u; return; } if (c.pc != 0x003009D4u) [[unlikely]] return; }
L_003009D4:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00300A00:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[22], c.r[4], c.r[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[5], c.r[3].w[0] + 26144u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 26486u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[16], c.r[22].w[0] + 320u);
    c.budget -= 17;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; mmi::paddub(c.r[18], c.r[0], c.r[0]);  if (t) { goto L_00300B5C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0] + 5u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00300A8C; } }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[2].w[0] + 1u);  goto L_00300A64; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00300B3C; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 1;
L_00300A64:
    st8((c.r[22].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[3] = ld32((c.r[5].w[0] + 32u));
    c.f[2] = ld32((c.r[5].w[0] + 36u));
    c.f[1] = ld32((c.r[5].w[0] + 40u));
    c.f[0] = ld32((c.r[5].w[0] + 44u));
    st32((c.r[22].w[0] + 32u), c.f[3]);
    st32((c.r[22].w[0] + 36u), c.f[2]);
    st32((c.r[22].w[0] + 40u), c.f[1]);
    st32((c.r[22].w[0] + 44u), c.f[0]);
    st32((c.r[22].w[0] + 36u), 0u);
    c.budget -= 10;
L_00300A8C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[20], c.r[2].w[0] + 10800u);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[19], c.r[16], c.r[0]);  if (t) { goto L_00300B00; } }
L_00300AA0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0] + 164u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 90u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[17].w[0] + 1u);  if (t) { goto L_00300AEC; } }
    set32(c.r[2], ld32((c.r[20].w[0])));
    mmi::paddub(c.r[4], c.r[22], c.r[0]);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00300AC8u); mmi::paddub(c.r[6], c.r[17], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00300AC8u) [[unlikely]] return; }
L_00300AC8:
    set32(c.r[2], c.r[16].w[0] + c.r[21].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 105u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00300AE8; } }
    set32(c.r[2], c.r[18].w[0] + 1u);
    c.r[18].d[0] = c.r[2].d[0] << 56;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 56);
    c.budget -= 4;
L_00300AE8:
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00300AEC:
    c.r[17].d[0] = c.r[2].d[0] << 56;
    set32(c.r[19], c.r[19].w[0] + 2u);
    set32(c.r[20], c.r[20].w[0] + 4u);
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);
    c.budget -= 5;
L_00300B00:
    c.r[21].d[0] = c.r[17].d[0] << 56;
    c.r[21].d[0] = static_cast<std::uint64_t>(c.r[21].sd[0] >> 56);
    c.r[2].d[0] = c.r[21].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00300AA0u | kUnwind; return; } goto L_00300AA0; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0] + 164u)));
    c.r[3].d[0] = c.r[18].d[0] << 56;
    set32(c.r[2], 0u + 5u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; st16((c.r[22].w[0] + 164u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_00300B3C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[22].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00300B3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300B44u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x00300B44u) [[unlikely]] return; }
L_00300B44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300B4Cu); set32(c.r[4], c.r[22].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 17u, depth + 1u); else { c.pc = 0x0013C880u; return; } if (c.pc != 0x00300B4Cu) [[unlikely]] return; }
L_00300B4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300B54u); set32(c.r[4], c.r[22].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00300B54u) [[unlikely]] return; }
L_00300B54:
    set32(c.r[3], 0u + 1u);
    st8((c.r[22].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00300B5C:
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
L_00300B90:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00300C74; } }
    c.r[8].d[0] = c.r[6].d[0] << 56;
    c.r[7].d[0] = c.r[3].d[0] << 48;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    set32(c.r[3], c.r[8].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 80u)));
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00300BCC; } }
    set32(c.r[3], c.r[8].w[0] + c.r[5].w[0]);
    st8((c.r[3].w[0] + 105u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00300BCC:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[1].d[0] = c.r[3].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[8].w[0] << 3);  if (t) { goto L_00300C14; } }
    set32(c.r[3], c.r[8].w[0] << 3);
    set32(c.r[6], c.r[5].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[6].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[6].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 4u), c.f[0]);  if (t) { goto L_00300C40; } }
    set32(c.r[3], c.r[8].w[0] << 3);
    c.budget -= 1;
L_00300C14:
    set32(c.r[6], c.r[5].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[6].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3CA30000u);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[6].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[6].w[0] + 4u), c.f[0]);
    c.budget -= 11;
L_00300C40:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[1].d[0] = c.r[3].sd[0] < 36ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00300C74; } }
    set32(c.r[3], c.r[8].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    c.f[1] = ld32((c.r[4].w[0] + 60u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBD230000u);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 60u), c.f[0]);
    c.budget -= 9;
L_00300C74:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00300C80:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00300DC8; } }
    c.r[7].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = c.r[6].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[6], c.r[3].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[5].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 80u)));
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    c.r[1].d[0] = c.r[6].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00300CBC; } }
    set32(c.r[6], c.r[3].w[0] + c.r[5].w[0]);
    st8((c.r[6].w[0] + 105u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00300CBC:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[1].d[0] = c.r[6].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[6].sd[0] < 11ll ? 1ull : 0ull;  if (t) { goto L_00300D10; } }
    set32(c.r[6], c.r[3].w[0] << 3);
    set32(c.r[7], c.r[5].w[0] + c.r[6].w[0]);
    c.f[1] = ld32((c.r[7].w[0]));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3DF50000u);
    c.r[6].d[0] = c.r[6].d[0] | 49808ull;
    c.f[0] = c.r[6].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3EF50000u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.r[6].d[0] = c.r[6].d[0] | 49808ull;
    st32((c.r[7].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[7].w[0] + 4u));
    c.f[0] = c.r[6].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0] + 4u), c.f[0]);  if (t) { goto L_00300D94; } }
    c.r[1].d[0] = c.r[6].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 1;
L_00300D10:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[6], c.r[3].w[0] << 3);  if (t) { goto L_00300D5C; } }
    set32(c.r[6], c.r[3].w[0] << 3);
    set32(c.r[7], c.r[5].w[0] + c.r[6].w[0]);
    c.f[1] = ld32((c.r[7].w[0]));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[6].d[0] = c.r[6].d[0] | 52429ull;
    c.f[0] = c.r[6].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3D750000u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.r[6].d[0] = c.r[6].d[0] | 49805ull;
    c.budget -= 9;
L_00300D3C:
    st32((c.r[7].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[7].w[0] + 4u));
    c.f[0] = c.r[6].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0] + 4u), c.f[0]);  if (t) { goto L_00300D94; } }
    set32(c.r[6], c.r[3].w[0] << 3);
    c.budget -= 1;
L_00300D5C:
    set32(c.r[7], c.r[5].w[0] + c.r[6].w[0]);
    c.f[1] = ld32((c.r[7].w[0]));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3CCC0000u);
    c.r[6].d[0] = c.r[6].d[0] | 52429ull;
    c.f[0] = c.r[6].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0xBDA80000u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.r[6].d[0] = c.r[6].d[0] | 62914ull;
    st32((c.r[7].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[7].w[0] + 4u));
    c.f[0] = c.r[6].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[7].w[0] + 4u), c.f[0]);
    c.budget -= 14;
L_00300D94:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[1].d[0] = c.r[4].sd[0] < 31ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00300DC8; } }
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    c.f[1] = ld32((c.r[4].w[0] + 60u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBDCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 60u), c.f[0]);
    c.budget -= 9;
L_00300DC8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00300DD0:
    c.r[3].d[0] = c.r[6].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[6], c.r[3].w[0] << 1);
    set32(c.r[7], c.r[6].w[0] + c.r[5].w[0]);
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 90u)));
    c.budget -= 8;
    { const bool t = c.r[8].d[0] != c.r[6].d[0];  if (t) { goto L_00300E00; } }
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 105u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00300F24; } }
L_00300E00:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 80u)));
    c.r[1].d[0] = c.r[6].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00300E18; } }
    set32(c.r[6], c.r[3].w[0] + c.r[5].w[0]);
    st8((c.r[6].w[0] + 105u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00300E18:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[1].d[0] = c.r[6].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[6].sd[0] < 16ll ? 1ull : 0ull;  if (t) { goto L_00300E6C; } }
    set32(c.r[6], c.r[3].w[0] << 3);
    set32(c.r[7], c.r[5].w[0] + c.r[6].w[0]);
    c.f[1] = ld32((c.r[7].w[0]));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3DF50000u);
    c.r[6].d[0] = c.r[6].d[0] | 49808ull;
    c.f[0] = c.r[6].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3EF50000u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.r[6].d[0] = c.r[6].d[0] | 49808ull;
    st32((c.r[7].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[7].w[0] + 4u));
    c.f[0] = c.r[6].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0] + 4u), c.f[0]);  if (t) { goto L_00300EF0; } }
    c.r[1].d[0] = c.r[6].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 1;
L_00300E6C:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[6], c.r[3].w[0] << 3);  if (t) { goto L_00300EB8; } }
    set32(c.r[6], c.r[3].w[0] << 3);
    set32(c.r[7], c.r[5].w[0] + c.r[6].w[0]);
    c.f[1] = ld32((c.r[7].w[0]));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[6].d[0] = c.r[6].d[0] | 52429ull;
    c.f[0] = c.r[6].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3D750000u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.r[6].d[0] = c.r[6].d[0] | 49805ull;
    st32((c.r[7].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[7].w[0] + 4u));
    c.f[0] = c.r[6].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0] + 4u), c.f[0]);  if (t) { goto L_00300EF0; } }
    set32(c.r[6], c.r[3].w[0] << 3);
    c.budget -= 1;
L_00300EB8:
    set32(c.r[7], c.r[5].w[0] + c.r[6].w[0]);
    c.f[1] = ld32((c.r[7].w[0]));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3D080000u);
    c.r[6].d[0] = c.r[6].d[0] | 34953ull;
    c.f[0] = c.r[6].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0xBDAA0000u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.r[6].d[0] = c.r[6].d[0] | 43691ull;
    st32((c.r[7].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[7].w[0] + 4u));
    c.f[0] = c.r[6].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[7].w[0] + 4u), c.f[0]);
    c.budget -= 14;
L_00300EF0:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[1].d[0] = c.r[4].sd[0] < 36ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00300F24; } }
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    c.f[1] = ld32((c.r[4].w[0] + 60u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBDCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 60u), c.f[0]);
    c.budget -= 9;
L_00300F24:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00300F30:
    c.r[9].d[0] = c.r[6].d[0] << 56;
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 56);
    set32(c.r[3], c.r[9].w[0] << 1);
    set32(c.r[6], c.r[3].w[0] + c.r[5].w[0]);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 90u)));
    c.budget -= 8;
    { const bool t = c.r[7].d[0] != c.r[3].d[0];  if (t) { goto L_00300F60; } }
    set32(c.r[3], c.r[9].w[0] + c.r[5].w[0]);
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 105u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0030105C; } }
L_00300F60:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 80u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00300F78; } }
    set32(c.r[3], c.r[9].w[0] + c.r[5].w[0]);
    st8((c.r[3].w[0] + 105u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00300F78:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[1].d[0] = c.r[3].sd[0] < 15ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[9].w[0] << 3);  if (t) { goto L_00300FCC; } }
    set32(c.r[3], c.r[9].w[0] << 3);
    set32(c.r[6], c.r[5].w[0] + c.r[3].w[0]);
    c.f[1] = ld32((c.r[6].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D6A0000u);
    c.r[3].d[0] = c.r[3].d[0] | 3746ull;
    c.f[0] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E920000u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | 18725ull;
    st32((c.r[6].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 4u), c.f[0]);  if (t) { goto L_00301028; } }
    set32(c.r[3], c.r[9].w[0] << 3);
    c.budget -= 1;
L_00300FCC:
    set32(c.r[8], c.r[5].w[0] + c.r[3].w[0]);
    c.f[1] = ld32((c.r[8].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3B460000u);
    c.r[3].d[0] = c.r[3].d[0] | 38912ull;
    c.f[0] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3C780000u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.r[7].d[0] = c.r[3].d[0] | 15888ull;
    set32(c.r[3], c.r[9].w[0] << 2);
    set32(c.r[6], c.r[3].w[0] + c.r[5].w[0]);
    c.f[1] = c.r[7].w[0];
    st32((c.r[8].w[0]), c.f[0]);
    c.f[2] = ld32((c.r[8].w[0] + 4u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3EE80000u);
    c.r[3].d[0] = c.r[3].d[0] | 47663ull;
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[2], c.f[1]);
    st32((c.r[8].w[0] + 4u), c.f[1]);
    c.f[1] = ld32((c.r[6].w[0] + 40u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[6].w[0] + 40u), c.f[0]);
    c.budget -= 23;
L_00301028:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[1].d[0] = c.r[3].sd[0] < 28ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0030105C; } }
    set32(c.r[3], c.r[9].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    c.f[1] = ld32((c.r[4].w[0] + 60u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBD4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 60u), c.f[0]);
    c.budget -= 9;
L_0030105C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00301070:
    c.r[8].d[0] = c.r[6].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    set32(c.r[3], c.r[8].w[0] << 1);
    set32(c.r[6], c.r[3].w[0] + c.r[5].w[0]);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 90u)));
    c.budget -= 8;
    { const bool t = c.r[7].d[0] != c.r[3].d[0];  if (t) { goto L_003010A0; } }
    set32(c.r[3], c.r[8].w[0] + c.r[5].w[0]);
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 105u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00301180; } }
L_003010A0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 80u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003010B8; } }
    set32(c.r[3], c.r[8].w[0] + c.r[5].w[0]);
    st8((c.r[3].w[0] + 105u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_003010B8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[1].d[0] = c.r[3].sd[0] < 22ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[8].w[0] << 3);  if (t) { goto L_0030110C; } }
    set32(c.r[3], c.r[8].w[0] << 3);
    set32(c.r[6], c.r[5].w[0] + c.r[3].w[0]);
    c.f[1] = ld32((c.r[6].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3CEA0000u);
    c.r[3].d[0] = c.r[3].d[0] | 3744ull;
    c.f[0] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E920000u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | 18725ull;
    st32((c.r[6].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 4u), c.f[0]);  if (t) { goto L_0030114C; } }
    set32(c.r[3], c.r[8].w[0] << 3);
    c.budget -= 1;
L_0030110C:
    set32(c.r[7], c.r[5].w[0] + c.r[3].w[0]);
    c.f[1] = ld32((c.r[7].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3BC60000u);
    c.r[3].d[0] = c.r[3].d[0] | 38928ull;
    c.f[0] = c.r[3].w[0];
    set32(c.r[3], c.r[8].w[0] << 2);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    set32(c.r[6], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E590000u);
    st32((c.r[7].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[6].w[0] + 40u));
    c.r[3].d[0] = c.r[3].d[0] | 13902ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[6].w[0] + 40u), c.f[0]);
    c.budget -= 16;
L_0030114C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[1].d[0] = c.r[3].sd[0] < 35ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00301180; } }
    set32(c.r[3], c.r[8].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    c.f[1] = ld32((c.r[4].w[0] + 60u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBD4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 60u), c.f[0]);
    c.budget -= 9;
L_00301180:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00301190:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003011A0:
    c.budget -= 2;
    {  goto L_00303A20; }
L_003011B0:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[29].w[0] + 112u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20348u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[29].w[0] + 128u);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20400u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20372u), 0u);
    set32(c.r[2], c.r[28].w[0] - 28220u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[18], c.r[17].w[0] + 320u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301218u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_001E(c, 201u, depth + 1u); else { c.pc = 0x0017BBC0u; return; } if (c.pc != 0x00301218u) [[unlikely]] return; }
L_00301218:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[2].w[0]);
    set32(c.r[6], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[6].w[0]);
    set32(c.r[3], 0u + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[29].w[0] + 112u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20352u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[6].w[0]));
    mmi::paddub(c.r[19], c.r[0], c.r[0]);
    mmi::paddub(c.r[20], c.r[18], c.r[0]);
    c.budget -= 17;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[21], c.r[18], c.r[0]);  if (t) { goto L_00301418; } }
    set32(c.r[8], c.r[18].w[0] + c.r[3].w[0]);
    c.budget -= 1;
L_00301260:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 105u)));
    c.budget -= 3;
    if (c.r[6].d[0] == 0ull) { set32(c.r[3], c.r[19].w[0] + 1u);  goto L_00301404; }
    c.r[6].d[0] = ld8((c.r[8].w[0] + 100u));
    set32(c.r[2], 0u + 164u);
    set32(c.r[16], c.r[8].w[0] + 100u);
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != c.r[2].d[0]; mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (t) { goto L_00301288; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], 0u + 1u);  if (t) { goto L_00301298; } }
L_00301288:
    set32(c.r[2], 0u + 165u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[7].d[0] << 56;  if (t) { goto L_0030129C; } }
    set32(c.r[7], 0u + 2u);
    c.budget -= 1;
L_00301298:
    c.r[2].d[0] = c.r[7].d[0] << 56;
    c.budget -= 1;
L_0030129C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[7], c.r[2].w[0] << 4);
    set32(c.r[6], c.r[2].w[0] << 3);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] + 10832u);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20384u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] + 10880u);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20388u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] + 10928u);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 19;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[1].w[0] - 20368u), c.r[2].w[0]);  if (t) { goto L_00301374; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003012F0u); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x003012F0u) [[unlikely]] return; }
L_003012F0:
    c.f[13] = ld32((c.r[20].w[0] + 40u));
    c.f[12] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301300u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00301300u) [[unlikely]] return; }
L_00301300:
    c.f[14] = ld32((c.r[21].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301314u); c.f[12] = ld32((c.r[21].w[0]));  if (depth < kMaxDepth) unit_000F(c, 18u, depth + 1u); else { c.pc = 0x0013C8A0u; return; } if (c.pc != 0x00301314u) [[unlikely]] return; }
L_00301314:
    c.f[0] = ld32((c.r[17].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    st32((c.r[29].w[0] + 112u), c.f[0]);
    c.f[2] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[20].w[0] + 40u));
    c.f[0] = fp::add(c.f[2], c.f[0]);
    st32((c.r[29].w[0] + 116u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    st32((c.r[29].w[0] + 120u), c.f[0]);
    st32((c.r[29].w[0] + 124u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[20].w[0] + 60u));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301354u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x00301354u) [[unlikely]] return; }
L_00301354:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301360u); st8((c.r[28].w[0] - 28217u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00301360u) [[unlikely]] return; }
L_00301360:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030136Cu); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001C(c, 163u, depth + 1u); else { c.pc = 0x00172AB0u; return; } if (c.pc != 0x0030136Cu) [[unlikely]] return; }
L_0030136C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00301400; } }
L_00301374:
    c.f[0] = ld32((c.r[17].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    st32((c.r[29].w[0] + 112u), c.f[0]);
    c.f[2] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[20].w[0] + 40u));
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    st32((c.r[29].w[0] + 116u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    st32((c.r[29].w[0] + 120u), c.f[0]);
    st32((c.r[29].w[0] + 124u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[20].w[0] + 60u));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003013B4u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x003013B4u) [[unlikely]] return; }
L_003013B4:
    st8((c.r[28].w[0] - 28217u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0]));
    set32(c.r[2], 0u + 165u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003013D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003013D0u); c.r[4].d[0] = 0ull | 32768ull;  if (depth < kMaxDepth) unit_000E(c, 277u, depth + 1u); else { c.pc = 0x0013B2D0u; return; } if (c.pc != 0x003013D0u) [[unlikely]] return; }
L_003013D0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20372u), c.f[0]);
    c.budget -= 2;
L_003013D8:
    c.f[0] = ld32((c.r[21].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] - 20416u);
    st32((c.r[1].w[0] - 20416u), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 4u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003013FCu); st32((c.r[1].w[0] - 20412u), c.f[0]);  if (depth < kMaxDepth) unit_001C(c, 51u, depth + 1u); else { c.pc = 0x001712A0u; return; } if (c.pc != 0x003013FCu) [[unlikely]] return; }
L_003013FC:
    c.budget -= 1;
L_00301400:
    set32(c.r[3], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_00301404:
    c.r[19].d[0] = c.r[3].d[0] << 56;
    set32(c.r[20], c.r[20].w[0] + 4u);
    set32(c.r[21], c.r[21].w[0] + 8u);
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 56);
    c.budget -= 5;
L_00301418:
    c.r[3].d[0] = c.r[19].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[6].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[8], c.r[18].w[0] + c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00301260u | kUnwind; return; } goto L_00301260; } }
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_00301450:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] + 11648u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00300000u < 16384u) { entry = entries_0080[(t - 0x00300000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00301470:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00300000u);
    set32(c.r[6], c.r[2].w[0] + 6768u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], c.r[2].w[0] + 11136u);
    mmi::paddub(c.r[23], c.r[4], c.r[0]);
    set32(c.r[16], c.r[23].w[0] + 320u);
    set32(c.r[2], c.r[7].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[4].w[0] + 168u), c.r[6].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[19], c.r[2].w[0] + 11056u);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    mmi::paddub(c.r[18], c.r[16], c.r[0]);
    mmi::paddub(c.r[20], c.r[16], c.r[0]);
    set32(c.r[2], c.r[6].w[0] << 4);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    mmi::paddub(c.r[21], c.r[16], c.r[0]);
    st32((c.r[4].w[0] + 32u), c.f[3]);
    st32((c.r[4].w[0] + 36u), c.f[2]);
    st32((c.r[4].w[0] + 40u), c.f[1]);
    st32((c.r[4].w[0] + 44u), c.f[0]);
    c.budget -= 39;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(0u));  if (t) { goto L_00301578; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_00301510:
    st32((c.r[18].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030151Cu); c.f[12] = ld32((c.r[19].w[0]));  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x0030151Cu) [[unlikely]] return; }
L_0030151C:
    set32(c.r[22], c.r[16].w[0] + c.r[22].w[0]);
    st8((c.r[22].w[0] + 48u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030152Cu); c.f[12] = ld32((c.r[19].w[0] + 4u));  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x0030152Cu) [[unlikely]] return; }
L_0030152C:
    st8((c.r[22].w[0] + 51u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[19].w[0] + 8u));
    st32((c.r[20].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 12u));
    st32((c.r[20].w[0] + 4u), c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301548u); c.f[12] = ld32((c.r[19].w[0] + 16u));  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x00301548u) [[unlikely]] return; }
L_00301548:
    st16((c.r[21].w[0] + 36u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301554u); c.f[12] = ld32((c.r[19].w[0] + 20u));  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x00301554u) [[unlikely]] return; }
L_00301554:
    st16((c.r[21].w[0] + 42u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.r[17].d[0] = c.r[2].d[0] << 56;
    set32(c.r[18], c.r[18].w[0] + 4u);
    set32(c.r[19], c.r[19].w[0] + 24u);
    set32(c.r[20], c.r[20].w[0] + 8u);
    set32(c.r[21], c.r[21].w[0] + 2u);
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);
    c.budget -= 9;
L_00301578:
    c.r[22].d[0] = c.r[17].d[0] << 56;
    c.r[22].d[0] = static_cast<std::uint64_t>(c.r[22].sd[0] >> 56);
    c.r[2].d[0] = c.r[22].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00301510u | kUnwind; return; } goto L_00301510; } }
    c.r[7].d[0] = ld8((c.r[16].w[0] + 48u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], c.r[2].w[0] - 11344u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003015A4u); mmi::paddub(c.r[4], c.r[23], c.r[0]);  if (depth < kMaxDepth) unit_0016(c, 134u, depth + 1u); else { c.pc = 0x0015B550u; return; } if (c.pc != 0x003015A4u) [[unlikely]] return; }
L_003015A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003015ACu); mmi::paddub(c.r[4], c.r[23], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 123u, depth + 1u); else { c.pc = 0x003015E0u; return; } if (c.pc != 0x003015ACu) [[unlikely]] return; }
L_003015AC:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_003015E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 26485u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00301608; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301608u);  if (depth < kMaxDepth) unit_0080(c, 125u, depth + 1u); else { c.pc = 0x00301620u; return; } if (c.pc != 0x00301608u) [[unlikely]] return; }
L_00301608:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00301620:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[22], c.r[4], c.r[0]);
    set32(c.r[16], c.r[22].w[0] + 320u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[20], c.r[2].w[0] + 11664u);
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 17;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[19], c.r[16], c.r[0]);  if (t) { goto L_003016C0; } }
L_00301664:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0] + 164u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 42u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[17].w[0] + 1u);  if (t) { goto L_003016AC; } }
    set32(c.r[2], ld32((c.r[20].w[0])));
    mmi::paddub(c.r[4], c.r[22], c.r[0]);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0030168Cu); mmi::paddub(c.r[6], c.r[17], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0030168Cu) [[unlikely]] return; }
L_0030168C:
    set32(c.r[2], c.r[16].w[0] + c.r[21].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 51u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003016A8; } }
    set32(c.r[2], c.r[18].w[0] + 1u);
    c.r[18].d[0] = c.r[2].d[0] << 56;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 56);
    c.budget -= 3;
L_003016A8:
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_003016AC:
    c.r[17].d[0] = c.r[2].d[0] << 56;
    set32(c.r[19], c.r[19].w[0] + 2u);
    set32(c.r[20], c.r[20].w[0] + 4u);
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);
    c.budget -= 5;
L_003016C0:
    c.r[21].d[0] = c.r[17].d[0] << 56;
    c.r[21].d[0] = static_cast<std::uint64_t>(c.r[21].sd[0] >> 56);
    c.r[2].d[0] = c.r[21].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00301664u | kUnwind; return; } goto L_00301664; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0] + 164u)));
    c.r[3].d[0] = c.r[18].d[0] << 56;
    set32(c.r[2], 0u + 3u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; st16((c.r[22].w[0] + 164u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_003016FC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[22].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_003016FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301704u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x00301704u) [[unlikely]] return; }
L_00301704:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030170Cu); set32(c.r[4], c.r[22].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 17u, depth + 1u); else { c.pc = 0x0013C880u; return; } if (c.pc != 0x0030170Cu) [[unlikely]] return; }
L_0030170C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301714u); set32(c.r[4], c.r[22].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00301714u) [[unlikely]] return; }
L_00301714:
    set32(c.r[3], 0u + 1u);
    st8((c.r[22].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00301750:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00301834; } }
    c.r[8].d[0] = c.r[6].d[0] << 56;
    c.r[7].d[0] = c.r[3].d[0] << 48;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    set32(c.r[3], c.r[8].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 36u)));
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0030178C; } }
    set32(c.r[3], c.r[8].w[0] + c.r[5].w[0]);
    st8((c.r[3].w[0] + 51u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0030178C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[1].d[0] = c.r[3].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[8].w[0] << 3);  if (t) { goto L_003017D4; } }
    set32(c.r[3], c.r[8].w[0] << 3);
    set32(c.r[6], c.r[5].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[6].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D080000u);
    c.r[3].d[0] = c.r[3].d[0] | 34953ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[6].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 4u), c.f[0]);  if (t) { goto L_00301800; } }
    set32(c.r[3], c.r[8].w[0] << 3);
    c.budget -= 1;
L_003017D4:
    set32(c.r[6], c.r[5].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[6].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3BDA0000u);
    c.r[3].d[0] = c.r[3].d[0] | 29713ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[6].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[6].w[0] + 4u), c.f[0]);
    c.budget -= 11;
L_00301800:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[1].d[0] = c.r[3].sd[0] < 21ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00301834; } }
    set32(c.r[3], c.r[8].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    c.f[1] = ld32((c.r[4].w[0] + 24u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBD230000u);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 24u), c.f[0]);
    c.budget -= 9;
L_00301834:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00301840:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00301930; } }
    c.r[8].d[0] = c.r[6].d[0] << 56;
    c.r[7].d[0] = c.r[3].d[0] << 48;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    set32(c.r[3], c.r[8].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 36u)));
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0030187C; } }
    set32(c.r[3], c.r[8].w[0] + c.r[5].w[0]);
    st8((c.r[3].w[0] + 51u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0030187C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[1].d[0] = c.r[3].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[8].w[0] << 3);  if (t) { goto L_003018C4; } }
    set32(c.r[3], c.r[8].w[0] << 3);
    set32(c.r[6], c.r[5].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[6].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D750000u);
    c.r[3].d[0] = c.r[3].d[0] | 49808ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[6].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 4u), c.f[0]);  if (t) { goto L_003018FC; } }
    set32(c.r[3], c.r[8].w[0] << 3);
    c.budget -= 1;
L_003018C4:
    set32(c.r[6], c.r[5].w[0] + c.r[3].w[0]);
    c.f[1] = ld32((c.r[6].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3C110000u);
    c.r[3].d[0] = c.r[3].d[0] | 41653ull;
    c.f[0] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D080000u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | 34953ull;
    st32((c.r[6].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[6].w[0] + 4u), c.f[0]);
    c.budget -= 14;
L_003018FC:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[1].d[0] = c.r[3].sd[0] < 26ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00301930; } }
    set32(c.r[3], c.r[8].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    c.f[1] = ld32((c.r[4].w[0] + 24u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBD230000u);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 24u), c.f[0]);
    c.budget -= 9;
L_00301930:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00301940:
    c.r[8].d[0] = c.r[6].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    set32(c.r[3], c.r[8].w[0] << 1);
    set32(c.r[6], c.r[3].w[0] + c.r[5].w[0]);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 42u)));
    c.budget -= 8;
    { const bool t = c.r[7].d[0] != c.r[3].d[0];  if (t) { goto L_00301970; } }
    set32(c.r[3], c.r[8].w[0] + c.r[5].w[0]);
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 51u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00301A3C; } }
L_00301970:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 36u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00301988; } }
    set32(c.r[3], c.r[8].w[0] + c.r[5].w[0]);
    st8((c.r[3].w[0] + 51u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00301988:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[1].d[0] = c.r[3].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[8].w[0] << 3);  if (t) { goto L_003019D0; } }
    set32(c.r[3], c.r[8].w[0] << 3);
    set32(c.r[6], c.r[5].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[6].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D750000u);
    c.r[3].d[0] = c.r[3].d[0] | 49808ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[6].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 4u), c.f[0]);  if (t) { goto L_00301A08; } }
    set32(c.r[3], c.r[8].w[0] << 3);
    c.budget -= 1;
L_003019D0:
    set32(c.r[6], c.r[5].w[0] + c.r[3].w[0]);
    c.f[1] = ld32((c.r[6].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3C110000u);
    c.r[3].d[0] = c.r[3].d[0] | 41653ull;
    c.f[0] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D080000u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | 34953ull;
    st32((c.r[6].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[6].w[0] + 4u), c.f[0]);
    c.budget -= 14;
L_00301A08:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[1].d[0] = c.r[3].sd[0] < 36ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00301A3C; } }
    set32(c.r[3], c.r[8].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    c.f[1] = ld32((c.r[4].w[0] + 24u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBD230000u);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 24u), c.f[0]);
    c.budget -= 9;
L_00301A3C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00301A50:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00301A60:
    c.budget -= 2;
    {  goto L_00303A20; }
L_00301A70:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20348u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[29].w[0] + 112u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20400u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 256u)));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[17], c.r[16].w[0] + 320u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] + 10952u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301AD8u); st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001E(c, 201u, depth + 1u); else { c.pc = 0x0017BBC0u; return; } if (c.pc != 0x00301AD8u) [[unlikely]] return; }
L_00301AD8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[2].w[0]);
    set32(c.r[6], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[6].w[0]);
    set32(c.r[3], 0u + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[29].w[0] + 176u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20352u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20372u), 0u);
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    mmi::paddub(c.r[19], c.r[17], c.r[0]);
    c.budget -= 21;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[20], c.r[17], c.r[0]);  if (t) { goto L_00301CE8; } }
    set32(c.r[3], c.r[17].w[0] + c.r[21].w[0]);
    c.budget -= 1;
L_00301B30:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 51u)));
    c.budget -= 3;
    if (c.r[6].d[0] == 0ull) { set32(c.r[3], c.r[18].w[0] + 1u);  goto L_00301CD4; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[6], c.r[2].w[0] + 11680u);
    c.r[8].d[0] = ld8((c.r[3].w[0] + 48u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[7], c.r[2].w[0] + 11776u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[8].w[0] - 103u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    st32((c.r[1].w[0] - 20384u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[6], c.r[2].w[0] + 11728u);
    c.r[8].d[0] = ld8((c.r[3].w[0] + 48u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[8].w[0] - 103u);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    st32((c.r[1].w[0] - 20368u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 48u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 103u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    st32((c.r[1].w[0] - 20388u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[19].w[0] + 24u));
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301BB0u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x00301BB0u) [[unlikely]] return; }
L_00301BB0:
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[4], c.r[3].w[0] + 10952u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 256u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    st32((c.r[29].w[0] + 176u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    st32((c.r[29].w[0] + 180u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    st32((c.r[29].w[0] + 184u), c.f[0]);
    c.budget -= 16;
    { const bool t = c.r[21].d[0] != 0ull; st32((c.r[29].w[0] + 188u), c.r[3].w[0]);  if (t) { goto L_00301CA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301BF8u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x00301BF8u) [[unlikely]] return; }
L_00301BF8:
    c.f[14] = ld32((c.r[20].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301C0Cu); c.f[12] = ld32((c.r[20].w[0]));  if (depth < kMaxDepth) unit_000F(c, 18u, depth + 1u); else { c.pc = 0x0013C8A0u; return; } if (c.pc != 0x00301C0Cu) [[unlikely]] return; }
L_00301C0C:
    c.f[12] = ld32((c.r[20].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00301C30; } }
    c.f[0] = c.f[12];
    c.budget -= 1;
L_00301C30:
    c.f[1] = ld32((c.r[20].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_00301C48; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_00301C48:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[12] = c.f[1];  goto L_00301C84; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[12] = c.f[0];  goto L_00301C78; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00301C78; } }
    c.f[12] = c.f[0];
    c.budget -= 1;
L_00301C78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00301C84; } }
    c.f[12] = c.f[1];
    c.budget -= 1;
L_00301C84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301C8Cu);  if (depth < kMaxDepth) unit_000F(c, 48u, depth + 1u); else { c.pc = 0x0013D010u; return; } if (c.pc != 0x00301C8Cu) [[unlikely]] return; }
L_00301C8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301C94u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00301C94u) [[unlikely]] return; }
L_00301C94:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301CA0u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001C(c, 77u, depth + 1u); else { c.pc = 0x001719F0u; return; } if (c.pc != 0x00301CA0u) [[unlikely]] return; }
L_00301CA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00301CD0; } }
L_00301CA8:
    c.f[0] = ld32((c.r[20].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] - 20416u);
    st32((c.r[1].w[0] - 20416u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 4u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301CCCu); st32((c.r[1].w[0] - 20412u), c.f[0]);  if (depth < kMaxDepth) unit_001C(c, 51u, depth + 1u); else { c.pc = 0x001712A0u; return; } if (c.pc != 0x00301CCCu) [[unlikely]] return; }
L_00301CCC:
    c.budget -= 1;
L_00301CD0:
    set32(c.r[3], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_00301CD4:
    c.r[18].d[0] = c.r[3].d[0] << 56;
    set32(c.r[19], c.r[19].w[0] + 4u);
    set32(c.r[20], c.r[20].w[0] + 8u);
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 56);
    c.budget -= 5;
L_00301CE8:
    c.r[21].d[0] = c.r[18].d[0] << 56;
    c.r[21].d[0] = static_cast<std::uint64_t>(c.r[21].sd[0] >> 56);
    c.r[3].d[0] = c.r[21].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[17].w[0] + c.r[21].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00301B30u | kUnwind; return; } goto L_00301B30; } }
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_00301D20:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] + 11840u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00300000u < 16384u) { entry = entries_0080[(t - 0x00300000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00301D40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00300000u);
    set32(c.r[3], c.r[2].w[0] + 8000u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[5], c.r[2].w[0] + 11808u);
    set32(c.r[2], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[4].w[0] + 168u), c.r[3].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[7], c.r[2].w[0] + 11824u);
    set32(c.r[3], 0u + 19u);
    set32(c.r[2], c.r[6].w[0] << 5);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[4].w[0] + 32u), c.f[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st32((c.r[4].w[0] + 36u), c.f[2]);
    st32((c.r[4].w[0] + 40u), c.f[1]);
    set32(c.r[5], c.r[2].w[0] - 11344u);
    st32((c.r[4].w[0] + 44u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[4].w[0] + 112u), c.f[3]);
    st32((c.r[4].w[0] + 116u), c.f[2]);
    st32((c.r[4].w[0] + 120u), c.f[1]);
    st32((c.r[4].w[0] + 124u), c.f[0]);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0] + 320u), 0u);
    st8((c.r[4].w[0] + 324u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[7].d[0] = ld8((c.r[4].w[0] + 324u));
    c.budget -= 41;
    { set32(c.r[6], 0u + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0015B550u | kUnwind; return; } [[clang::musttail]] return unit_0016(c, 134u, depth); }
L_00301DF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 26484u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00301E18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301E18u);  if (depth < kMaxDepth) unit_0080(c, 150u, depth + 1u); else { c.pc = 0x00301E30u; return; } if (c.pc != 0x00301E18u) [[unlikely]] return; }
L_00301E18:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00301E30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[5], c.r[16].w[0] + 320u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301E4Cu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 155u, depth + 1u); else { c.pc = 0x00301E80u; return; } if (c.pc != 0x00301E4Cu) [[unlikely]] return; }
L_00301E4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301E54u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x00301E54u) [[unlikely]] return; }
L_00301E54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301E5Cu); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 17u, depth + 1u); else { c.pc = 0x0013C880u; return; } if (c.pc != 0x00301E5Cu) [[unlikely]] return; }
L_00301E5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301E64u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00301E64u) [[unlikely]] return; }
L_00301E64:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00301E80:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[1].d[0] = c.r[3].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[3].sd[0] < 30ll ? 1ull : 0ull;  if (t) { goto L_00301EE4; } }
    c.f[1] = ld32((c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3CCC0000u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    st32((c.r[5].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 112u));
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 116u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 116u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 120u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 20;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 120u), c.f[0]);  if (t) { goto L_00301F08; } }
    c.r[1].d[0] = c.r[3].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 1;
L_00301EE4:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00301F08; } }
    c.f[1] = ld32((c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBD4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[5].w[0]), c.f[0]);
    c.budget -= 7;
L_00301F08:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00301F20:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00301F30:
    c.budget -= 2;
    {  goto L_00303A20; }
L_00301F40:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301F54u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x00301F54u) [[unlikely]] return; }
L_00301F54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301F5Cu); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00301F5Cu) [[unlikely]] return; }
L_00301F5C:
    set32(c.r[2], ld32((c.r[28].w[0] - 26224u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301F68u); set32(c.r[4], c.r[2].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x00301F68u) [[unlikely]] return; }
L_00301F68:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301F78u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 210u, depth + 1u); else { c.pc = 0x00102500u; return; } if (c.pc != 0x00301F78u) [[unlikely]] return; }
L_00301F78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301F80u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_000E(c, 328u, depth + 1u); else { c.pc = 0x0013BEC0u; return; } if (c.pc != 0x00301F80u) [[unlikely]] return; }
L_00301F80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301F88u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x00301F88u) [[unlikely]] return; }
L_00301F88:
    c.f[13] = ld32((c.r[16].w[0] + 36u));
    c.f[14] = ld32((c.r[16].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301F98u); c.f[12] = ld32((c.r[16].w[0] + 32u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00301F98u) [[unlikely]] return; }
L_00301F98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301FA0u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_000E(c, 331u, depth + 1u); else { c.pc = 0x0013BF80u; return; } if (c.pc != 0x00301FA0u) [[unlikely]] return; }
L_00301FA0:
    c.f[13] = ld32((c.r[16].w[0] + 116u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301FB4u); c.f[12] = ld32((c.r[16].w[0] + 112u));  if (depth < kMaxDepth) unit_000F(c, 18u, depth + 1u); else { c.pc = 0x0013C8A0u; return; } if (c.pc != 0x00301FB4u) [[unlikely]] return; }
L_00301FB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301FBCu); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00301FBCu) [[unlikely]] return; }
L_00301FBC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80800000u);
    c.r[3].d[0] = c.r[2].d[0] | 32896ull;
    set32(c.r[2], c.r[29].w[0] + 108u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 320u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301FE0u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x00301FE0u) [[unlikely]] return; }
L_00301FE0:
    st8((c.r[29].w[0] + 111u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20348u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[29].w[0] + 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20400u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] + 11872u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20388u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 108u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] + 11856u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20384u), c.r[2].w[0]);
    set32(c.r[2], c.r[28].w[0] - 28216u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], 0u + 3u);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302038u); st32((c.r[1].w[0] - 20368u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001E(c, 201u, depth + 1u); else { c.pc = 0x0017BBC0u; return; } if (c.pc != 0x00302038u) [[unlikely]] return; }
L_00302038:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[2].w[0]);
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] - 20416u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030206Cu); st32((c.r[1].w[0] - 20352u), 0u);  if (depth < kMaxDepth) unit_001C(c, 77u, depth + 1u); else { c.pc = 0x001719F0u; return; } if (c.pc != 0x0030206Cu) [[unlikely]] return; }
L_0030206C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00302080:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] + 13424u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00300000u < 16384u) { entry = entries_0080[(t - 0x00300000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003020A0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[5], c.r[3].w[0] + 11888u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[6], c.r[7].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] << 4);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(0u));
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(0u));
    c.f[3] = ld32((c.r[5].w[0]));
    c.f[2] = ld32((c.r[5].w[0] + 4u));
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    st32((c.r[4].w[0] + 32u), c.f[3]);
    st32((c.r[4].w[0] + 36u), c.f[2]);
    st32((c.r[4].w[0] + 40u), c.f[1]);
    st32((c.r[4].w[0] + 44u), c.f[0]);
    c.f[3] = ld32((c.r[5].w[0] + 16u));
    c.f[2] = ld32((c.r[5].w[0] + 20u));
    c.f[1] = ld32((c.r[5].w[0] + 24u));
    c.f[0] = ld32((c.r[5].w[0] + 28u));
    st32((c.r[4].w[0] + 48u), c.f[3]);
    st32((c.r[4].w[0] + 52u), c.f[2]);
    st32((c.r[4].w[0] + 56u), c.f[1]);
    st32((c.r[4].w[0] + 60u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 32u)));
    st32((c.r[4].w[0] + 80u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 34u)));
    st32((c.r[4].w[0] + 84u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 36u)));
    st32((c.r[4].w[0] + 88u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 38u)));
    st32((c.r[4].w[0] + 92u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 40u)));
    st32((c.r[4].w[0] + 96u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 42u)));
    c.budget -= 41;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 100u), c.r[3].w[0]);  c.pc = t; return; }
L_00302150:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 26484u)));
    set32(c.r[3], c.r[4].w[0] + 1u);
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00302220; } }
    set32(c.r[3], c.r[4].w[0] + 8u);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[16].w[0] + 32u);  if (t) { goto L_0030219C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00302220; } }
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 1;
L_0030219C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003021A4u); set32(c.r[5], c.r[16].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x003021A4u) [[unlikely]] return; }
L_003021A4:
    set32(c.r[3], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 92u)));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003021E0u); st32((c.r[16].w[0] + 88u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005D(c, 686u, depth + 1u); else { c.pc = 0x00276330u; return; } if (c.pc != 0x003021E0u) [[unlikely]] return; }
L_003021E0:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[3], c.r[4].w[0] + 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[4].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00302220; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    c.r[1].d[0] = c.r[3].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00302220; } }
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302220u); st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0050(c, 141u, depth + 1u); else { c.pc = 0x00240FA0u; return; } if (c.pc != 0x00302220u) [[unlikely]] return; }
L_00302220:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00302230:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00302240:
    c.budget -= 2;
    {  goto L_00303A20; }
L_00302250:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] + 14560u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00300000u < 16384u) { entry = entries_0080[(t - 0x00300000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00302270:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[5], c.r[2].w[0] + 13888u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00300000u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[6], c.r[7].w[0] << 1);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    st32((c.r[4].w[0] + 88u), 0u);
    st32((c.r[4].w[0] + 84u), 0u);
    set32(c.r[2], c.r[2].w[0] + 11536u);
    st32((c.r[4].w[0] + 80u), 0u);
    st32((c.r[4].w[0] + 168u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[3].d[0] = ld8((c.r[5].w[0] + 1u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] + 13440u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 2u));
    st8((c.r[4].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[4].w[0] + 32u), c.f[3]);
    st32((c.r[4].w[0] + 36u), c.f[2]);
    st32((c.r[4].w[0] + 40u), c.f[1]);
    c.budget -= 33;
    { st32((c.r[4].w[0] + 44u), c.f[0]);  goto L_00302300; }
L_00302300:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] + 14576u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 12;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00302330u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00302330u) [[unlikely]] return; }
L_00302330:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00302350:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 6u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003023F0; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003023C8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0030239C; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[3], c.r[5].w[0] + 1u);  if (t) { goto L_0030238C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00302418; } }
    set32(c.r[3], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_0030238C:
    st8((c.r[4].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 60u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_0030239C:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], 0u + 120u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = c.r[5].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.budget -= 8;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_00302418; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 6u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_003023C8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 166u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_00302418; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 6u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_003023F0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_00302418; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00302418:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00302420:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 6u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0030255C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003024CC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], c.r[4].w[0] + 1u);  if (t) { goto L_00302460; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[2] = ld32((c.r[16].w[0] + 32u));  if (t) { goto L_00302560; } }
    set32(c.r[3], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_00302460:
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], c.r[3].w[0] + 13920u);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    c.r[3].d[0] = c.r[3].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0030249C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 6u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0030249C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    set32(c.r[3], c.r[28].w[0] - 28186u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003024CC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[2].w[0] - 4968u);
    c.r[7].d[0] = c.r[3].d[0] & 255ull;
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003024CCu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 262u, depth + 1u); else { c.pc = 0x00196BF0u; return; } if (c.pc != 0x003024CCu) [[unlikely]] return; }
L_003024CC:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0030255C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 6u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 19u);
    mmi::paddub(c.r[6], c.r[4], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302504u); st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x00302504u) [[unlikely]] return; }
L_00302504:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030255C; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00300000u);
    set32(c.r[5], 0u + 18u);
    set32(c.r[4], 0u + 14u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], c.r[3].w[0] + 8784u);
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    set32(c.r[3], 0u + 255u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    st8((c.r[2].w[0] + 268u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1u)));
    st8((c.r[2].w[0] + 270u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[2].w[0] + 264u), c.r[2].w[0]);
    st8((c.r[2].w[0] + 531u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 20;
L_0030255C:
    c.f[2] = ld32((c.r[16].w[0] + 32u));
    c.budget -= 1;
L_00302560:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC4900000u);
    c.r[3].d[0] = c.r[3].d[0] | 40960ull;
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 32u), c.f[1]);  if (t) { goto L_00302598; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00302598:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003025B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 6u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(13ll) ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[16], c.r[17].w[0] + 320u);  if (t) { goto L_00302CC8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] + 26976u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00300000u < 16384u) { entry = entries_0080[(t - 0x00300000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003025F0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 6u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3A1D0000u);
    c.r[3].d[0] = c.r[2].d[0] | 18770ull;
    set32(c.r[2], 0u + 185u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[16].w[0] + 84u), 0u);
    st8((c.r[16].w[0] + 88u), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0] + 52u), c.r[3].w[0]);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[4], c.r[2].w[0] + 14536u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[7], c.r[2].w[0] + 14416u);
    mmi::paddub(c.r[6], c.r[16], c.r[0]);
    c.budget -= 16;
L_00302630:
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_0030264C; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00302664; } }
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.budget -= 1;
L_0030264C:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_00302664:
    st32((c.r[6].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < 10ll ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[6].w[0] + 40u), c.f[0]);
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00302630u | kUnwind; return; } goto L_00302630; } }
L_00302688:
    c.f[1] = ld32((c.r[17].w[0] + 52u));
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    c.f[2] = 0u;
    c.f[0] = fp::add(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[17].w[0] + 36u), c.f[0]);  if (t) { goto L_003026AC; } }
    st32((c.r[17].w[0] + 36u), 0u);
    c.budget -= 1;
L_003026AC:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] > 0; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_00302CCC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 6u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[28].w[0] - 26486u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
L_003026DC:
    c.f[1] = ld32((c.r[17].w[0] + 52u));
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    c.f[2] = 0u;
    c.f[0] = fp::add(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[17].w[0] + 36u), c.f[0]);  if (t) { goto L_00302CC8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 6u)));
    set32(c.r[2], 0u + 140u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[17].w[0] + 52u), 0u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 6;
L_00302714:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x430C0000u);
    c.f[0] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = c.r[2].w[0];
    c.f[1] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[0] = fp::sub(c.f[3], c.f[0]);
    c.f[2] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 16;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[16].w[0]), c.f[0]);  if (t) { goto L_00302770; } }
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::sub(c.f[3], c.f[0]);
    st32((c.r[16].w[0] + 12u), c.f[0]);
    c.budget -= 7;
L_00302770:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_00302CC8; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 6u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], 0u + 120u);
    set32(c.r[2], 0u + 110u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[16].w[0]), c.r[4].w[0]);
    st32((c.r[16].w[0] + 12u), 0u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[17].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 10;
L_003027B4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42F00000u);
    c.f[0] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = c.r[2].w[0];
    c.f[1] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[0] = fp::sub(c.f[3], c.f[0]);
    c.f[2] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 16;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[16].w[0] + 4u), c.f[0]);  if (t) { goto L_00302810; } }
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::sub(c.f[3], c.f[0]);
    st32((c.r[16].w[0] + 16u), c.f[0]);
    c.budget -= 7;
L_00302810:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.r[1].d[0] = c.r[2].sd[0] < 110ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0030289C; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 166u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42DC0000u);
    c.f[1] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[2].w[0];
    c.f[3] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[3] = fp::cvt_s_w(c.f[3]);
    fpu_div(c, 1u, c.f[3], c.f[1]);
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 16;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[16].w[0] + 8u), c.f[1]);  if (t) { goto L_0030287C; } }
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    st32((c.r[16].w[0] + 20u), c.f[0]);
    c.budget -= 7;
L_0030287C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 166u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[17].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0030289C; } }
    st16((c.r[17].w[0] + 166u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_0030289C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_00302CC8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 6u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[2], 0u + 60u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 20u), 0u);
    st32((c.r[16].w[0] + 16u), 0u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 10;
L_003028E0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_00302CC8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 6u)));
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
L_00302910:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[2] = c.r[5].w[0];
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    st32((c.r[16].w[0] + 28u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 18;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_00302CC8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 6u)));
    set32(c.r[3], 0u + 20u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[16].w[0] + 28u), c.r[5].w[0]);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 88u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
L_00302978:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[0] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = c.r[2].w[0];
    c.f[1] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[0] = fp::sub(c.f[3], c.f[0]);
    st32((c.r[16].w[0] + 32u), c.f[0]);
    st32((c.r[16].w[0] + 24u), c.f[0]);
    st32((c.r[16].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    c.f[2] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 20;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003029E4; } }
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::sub(c.f[3], c.f[0]);
    st32((c.r[16].w[0] + 28u), c.f[0]);
    c.budget -= 7;
L_003029E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], c.r[2].w[0] + 14416u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
L_003029F4:
    c.f[2] = ld32((c.r[3].w[0]));
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.f[0] = ld32((c.r[16].w[0] + 84u));
    c.r[2].d[0] = c.r[5].sd[0] < 10ll ? 1ull : 0ull;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    set32(c.r[3], c.r[3].w[0] + 12u);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.f[2], c.f[0]);
    st32((c.r[4].w[0] + 40u), c.f[0]);
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003029F4u | kUnwind; return; } goto L_003029F4; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_00302CC8; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 6u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F190000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], 0u + 2u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[16].w[0] + 24u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 28u), 0u);
    st32((c.r[16].w[0] + 32u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 84u), c.r[4].w[0]);
    st8((c.r[16].w[0] + 88u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 36u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 80u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[4], c.r[2].w[0] + 26144u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302A88u); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_0025(c, 365u, depth + 1u); else { c.pc = 0x00197E70u; return; } if (c.pc != 0x00302A88u) [[unlikely]] return; }
L_00302A88:
    set32(c.r[2], 0u + 50u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 70u);
    st16((c.r[17].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], c.r[2].w[0] + 14416u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 8;
L_00302AA8:
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < 10ll ? 1ull : 0ull;
    st32((c.r[4].w[0] + 40u), c.f[0]);
    set32(c.r[3], c.r[3].w[0] + 12u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00302AA8u | kUnwind; return; } goto L_00302AA8; } }
    c.budget -= 1;
L_00302AC8:
    c.f[1] = ld32((c.r[16].w[0] + 80u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBBFD0000u);
    c.r[2].d[0] = c.r[2].d[0] | 4101ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 80u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 166u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[17].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 17;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_00302CC8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 6u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 232u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[28].w[0] - 26481u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 7;
L_00302B28:
    c.f[1] = ld32((c.r[16].w[0] + 80u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBBFD0000u);
    c.r[2].d[0] = c.r[2].d[0] | 4101ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 80u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 166u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[17].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 17;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_00302CC8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 6u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D8E0000u);
    c.r[3].d[0] = c.r[2].d[0] | 8598ull;
    set32(c.r[2], 0u + 3u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[16].w[0] + 80u), c.r[3].w[0]);
    st8((c.r[16].w[0] + 88u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
L_00302B8C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_00302CC8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 6u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], 0u + 48u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[28].w[0] - 26481u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 7;
L_00302BC4:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_00302CC8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 6u)));
    set32(c.r[3], 0u + 20u);
    set32(c.r[2], 0u + 4u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 88u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
L_00302BFC:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[0] = c.r[2].w[0];
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    set32(c.r[3], c.r[2].w[0] + 14416u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    st32((c.r[16].w[0] + 84u), c.f[0]);
    c.budget -= 14;
L_00302C34:
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.f[0] = ld32((c.r[16].w[0] + 84u));
    c.r[2].d[0] = c.r[5].sd[0] < 10ll ? 1ull : 0ull;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    set32(c.r[3], c.r[3].w[0] + 12u);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.f[2], c.f[0]);
    st32((c.r[4].w[0] + 40u), c.f[0]);
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00302C34u | kUnwind; return; } goto L_00302C34; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_00302CC8; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 6u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], 0u + 5u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[16].w[0] + 84u), c.r[4].w[0]);
    st8((c.r[16].w[0] + 88u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[2].w[0] + 14416u);
    c.budget -= 10;
L_00302CA8:
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < 10ll ? 1ull : 0ull;
    st32((c.r[16].w[0] + 40u), c.f[0]);
    set32(c.r[3], c.r[3].w[0] + 12u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00302CA8u | kUnwind; return; } goto L_00302CA8; } }
    c.budget -= 1;
L_00302CC8:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_00302CCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302CD4u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_005D(c, 686u, depth + 1u); else { c.pc = 0x00276330u; return; } if (c.pc != 0x00302CD4u) [[unlikely]] return; }
L_00302CD4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00302CF0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00302D00:
    c.budget -= 2;
    {  goto L_00303A20; }
L_00302D10:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] + 14592u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00300000u < 16384u) { entry = entries_0080[(t - 0x00300000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00302D30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42F00000u);
    c.f[1] = c.r[2].w[0];
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[0] = c.r[2].w[0];
    c.f[2] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302D74u); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x00302D74u) [[unlikely]] return; }
L_00302D74:
    set32(c.r[6], 0u + 7u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302D84u); c.r[5].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0080(c, 239u, depth + 1u); else { c.pc = 0x00303030u; return; } if (c.pc != 0x00302D84u) [[unlikely]] return; }
L_00302D84:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00302DA0:
    set32(c.r[5], 0u + 128u);
    c.budget -= 3;
    { set32(c.r[6], 0u + 7u);  goto L_00303030; }
L_00302DB0:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] + 14608u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[3], c.r[29].w[0] + 208u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[16], c.r[17].w[0] + 320u);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302DFCu); st128((c.r[3].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0016(c, 140u, depth + 1u); else { c.pc = 0x0015B6C0u; return; } if (c.pc != 0x00302DFCu) [[unlikely]] return; }
L_00302DFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302E04u); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x00302E04u) [[unlikely]] return; }
L_00302E04:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[19], c.r[2].w[0] + 13936u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[20], c.r[2].w[0] + 14096u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[21], c.r[2].w[0] + 14256u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[22], c.r[2].w[0] - 1520u);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    mmi::paddub(c.r[18], c.r[16], c.r[0]);
    c.budget -= 10;
L_00302E2C:
    c.f[1] = ld32((c.r[18].w[0]));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_00302FDC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302E50u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x00302E50u) [[unlikely]] return; }
L_00302E50:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 88u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00302F78; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] + 27040u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00300000u < 16384u) { entry = entries_0080[(t - 0x00300000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00302E80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302E88u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 14u, depth + 1u); else { c.pc = 0x0013C650u; return; } if (c.pc != 0x00302E88u) [[unlikely]] return; }
L_00302E88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[12] = ld32((c.r[18].w[0] + 40u));  if (t) { goto L_00302F7C; } }
L_00302E90:
    c.f[6] = ld32((c.r[16].w[0] + 84u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[5] = ld32((c.r[19].w[0]));
    c.f[4] = ld32((c.r[20].w[0]));
    c.f[3] = ld32((c.r[19].w[0] + 4u));
    c.f[7] = fp::sub(c.f[0], c.f[6]);
    c.f[2] = ld32((c.r[20].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0] + 8u));
    c.f[0] = ld32((c.r[20].w[0] + 8u));
    c.facc = fp::mul(c.f[5], c.f[7]);
    c.f[12] = fp::add(c.facc, fp::mul(c.f[4], c.f[6]));
    c.facc = fp::mul(c.f[3], c.f[7]);
    c.f[13] = fp::add(c.facc, fp::mul(c.f[2], c.f[6]));
    c.facc = fp::mul(c.f[1], c.f[7]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302ED4u); c.f[14] = fp::add(c.facc, fp::mul(c.f[0], c.f[6]));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00302ED4u) [[unlikely]] return; }
L_00302ED4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00302F78; } }
L_00302EDC:
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (t) { goto L_00302F04; } }
    c.f[13] = ld32((c.r[20].w[0] + 4u));
    c.f[14] = ld32((c.r[20].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302EF8u); c.f[12] = ld32((c.r[16].w[0] + 80u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00302EF8u) [[unlikely]] return; }
L_00302EF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00302F78; } }
    mmi::paddub(c.r[4], c.r[20], c.r[0]);
    c.budget -= 1;
L_00302F04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302F0Cu);  if (depth < kMaxDepth) unit_000F(c, 14u, depth + 1u); else { c.pc = 0x0013C650u; return; } if (c.pc != 0x00302F0Cu) [[unlikely]] return; }
L_00302F0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00302F78; } }
L_00302F14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302F1Cu); mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 14u, depth + 1u); else { c.pc = 0x0013C650u; return; } if (c.pc != 0x00302F1Cu) [[unlikely]] return; }
L_00302F1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00302F78; } }
L_00302F24:
    c.f[6] = ld32((c.r[16].w[0] + 84u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[5] = ld32((c.r[20].w[0]));
    c.f[4] = ld32((c.r[21].w[0]));
    c.f[3] = ld32((c.r[20].w[0] + 4u));
    c.f[7] = fp::sub(c.f[0], c.f[6]);
    c.f[2] = ld32((c.r[21].w[0] + 4u));
    c.f[1] = ld32((c.r[20].w[0] + 8u));
    c.f[0] = ld32((c.r[21].w[0] + 8u));
    c.facc = fp::mul(c.f[5], c.f[7]);
    c.f[12] = fp::add(c.facc, fp::mul(c.f[4], c.f[6]));
    c.facc = fp::mul(c.f[3], c.f[7]);
    c.f[13] = fp::add(c.facc, fp::mul(c.f[2], c.f[6]));
    c.facc = fp::mul(c.f[1], c.f[7]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302F68u); c.f[14] = fp::add(c.facc, fp::mul(c.f[0], c.f[6]));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00302F68u) [[unlikely]] return; }
L_00302F68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00302F78; } }
L_00302F70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302F78u); mmi::paddub(c.r[4], c.r[21], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 14u, depth + 1u); else { c.pc = 0x0013C650u; return; } if (c.pc != 0x00302F78u) [[unlikely]] return; }
L_00302F78:
    c.f[12] = ld32((c.r[18].w[0] + 40u));
    c.budget -= 1;
L_00302F7C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302F8Cu); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_000F(c, 18u, depth + 1u); else { c.pc = 0x0013C8A0u; return; } if (c.pc != 0x00302F8Cu) [[unlikely]] return; }
L_00302F8C:
    set32(c.r[23], ld32((c.r[22].w[0])));
    c.budget -= 3;
    { const bool t = c.r[23].d[0] == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_00302FCC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302FA0u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00302FA0u) [[unlikely]] return; }
L_00302FA0:
    c.f[0] = ld32((c.r[18].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[5], c.r[29].w[0] + 144u);
    set32(c.r[6], c.r[29].w[0] + 208u);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    mmi::paddub(c.r[4], c.r[23], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302FC4u); st32((c.r[29].w[0] + 220u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 136u, depth + 1u); else { c.pc = 0x0016E520u; return; } if (c.pc != 0x00302FC4u) [[unlikely]] return; }
L_00302FC4:
    set32(c.r[4], 0u + 1u);
    c.budget -= 2;
L_00302FCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302FD4u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x00302FD4u) [[unlikely]] return; }
L_00302FD4:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 2;
L_00302FDC:
    c.r[2].d[0] = c.r[17].sd[0] < 10ll ? 1ull : 0ull;
    set32(c.r[18], c.r[18].w[0] + 4u);
    set32(c.r[19], c.r[19].w[0] + 16u);
    set32(c.r[20], c.r[20].w[0] + 16u);
    set32(c.r[21], c.r[21].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[22], c.r[22].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00302E2Cu | kUnwind; return; } goto L_00302E2C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303000u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 167u, depth + 1u); else { c.pc = 0x00306B90u; return; } if (c.pc != 0x00303000u) [[unlikely]] return; }
L_00303000:
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
L_00303030:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[7], c.r[3].w[0] + 13856u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], c.r[3].w[0] + 14624u);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    ld128((c.r[3].w[0]) & ~15u, c.r[9]);
    set32(c.r[16], ld32((c.r[7].w[0])));
    ld128((c.r[3].w[0] + 16u) & ~15u, c.r[8]);
    set32(c.r[11], c.r[29].w[0] + 96u);
    set32(c.r[10], c.r[29].w[0] + 136u);
    set32(c.r[7], c.r[29].w[0] + 132u);
    st128((c.r[11].w[0]) & ~15u, c.r[9]);
    st128((c.r[11].w[0] + 16u) & ~15u, c.r[8]);
    c.f[0] = ld32((c.r[28].w[0] - 28176u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[18], c.r[3].w[0] - 20416u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], c.r[3].w[0] - 19488u);
    st32((c.r[7].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[28].w[0] - 25224u));
    c.f[0] = ld32((c.r[28].w[0] - 25220u));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[9], 0u + 3u);
    st32((c.r[10].w[0]), c.f[1]);
    st32((c.r[10].w[0] + 4u), c.f[0]);
    st32((c.r[1].w[0] - 20392u), 0u);
    set32(c.r[10], ld32((c.r[3].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[8], 0u + 13u);
    set32(c.r[7], 0u + 1u);
    st32((c.r[1].w[0] - 20364u), c.r[10].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[9].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00800000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[6], c.r[5].w[0] << 24);
    c.r[3].d[0] = c.r[3].d[0] | 32896ull;
    mmi::paddub(c.r[20], c.r[4], c.r[0]);
    c.r[19].d[0] = c.r[6].d[0] | c.r[3].d[0];
    c.budget -= 54;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[7].w[0]));  if (t) { goto L_003031F8; } }
L_00303108:
    c.f[12] = ld32((c.r[20].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] + 13584u);
    set32(c.r[3], c.r[6].w[0] << 3);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303120u); set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x00303120u) [[unlikely]] return; }
L_00303120:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 2u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303134u); c.f[12] = ld32((c.r[20].w[0] + 36u));  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x00303134u) [[unlikely]] return; }
L_00303134:
    set32(c.r[7], c.r[29].w[0] + 100u);
    st32((c.r[7].w[0]), c.r[2].w[0]);
    c.r[6].d[0] = ld16((c.r[17].w[0] + 4u));
    set32(c.r[3], ld32((c.r[29].w[0] + 96u)));
    set32(c.r[8], c.r[29].w[0] + 112u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[8].w[0]), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[17].w[0] + 6u));
    c.budget -= 10;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));  if (t) { goto L_00303164; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    c.budget -= 2;
L_00303164:
    set32(c.r[3], ld32((c.r[7].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[29].w[0] + 116u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 96u)));
    c.r[1].d[0] = c.r[3].sd[0] < 640ll ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[1].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 4u);  goto L_003031F4; }
    set32(c.r[3], ld32((c.r[8].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_003031F0; } }
    c.r[6].d[0] = ld16((c.r[17].w[0]));
    set32(c.r[8], c.r[29].w[0] + 138u);
    set32(c.r[5], c.r[29].w[0] + 132u);
    set32(c.r[3], c.r[29].w[0] + 96u);
    st16((c.r[29].w[0] + 136u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld16((c.r[17].w[0] + 2u));
    set32(c.r[2], c.r[29].w[0] + 136u);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    st16((c.r[8].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 4u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 136u)));
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] - 1u);
    st16((c.r[29].w[0] + 140u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0])));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 6u)));
    set32(c.r[6], c.r[7].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[6].w[0] - 1u);
    st16((c.r[29].w[0] + 142u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st32((c.r[5].w[0]), c.r[19].w[0]);
    st32((c.r[18].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 36u), c.r[5].w[0]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003031ECu); st32((c.r[18].w[0] + 48u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x003031ECu) [[unlikely]] return; }
L_003031EC:
    c.budget -= 1;
L_003031F0:
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_003031F4:
    c.budget -= 1;
L_003031F8:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00303108u | kUnwind; return; } goto L_00303108; } }
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00303230:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] + 14736u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00300000u < 16384u) { entry = entries_0080[(t - 0x00300000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00303250:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00300000u);
    set32(c.r[5], c.r[2].w[0] + 24976u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], c.r[2].w[0] + 14656u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[2], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[4].w[0] + 168u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 88u), 0u);
    st32((c.r[4].w[0] + 80u), 0u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[8], c.r[2].w[0] + 14660u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[7], c.r[2].w[0] + 14664u);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    st8((c.r[4].w[0] + 10u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[6], c.r[2].w[0] + 14668u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], c.r[2].w[0] + 14672u);
    set32(c.r[9], c.r[10].w[0] << 2);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    set32(c.r[9], c.r[9].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    c.f[0] = ld32((c.r[8].w[0]));
    set32(c.r[2], 0u + 4u);
    set32(c.r[5], 0u + 135u);
    st32((c.r[4].w[0] + 32u), c.f[0]);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[8], c.r[9].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    c.f[0] = ld32((c.r[7].w[0]));
    st32((c.r[4].w[0] + 36u), c.f[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[7], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.f[0] = ld32((c.r[6].w[0]));
    st32((c.r[4].w[0] + 40u), c.f[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[6], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0]));
    st32((c.r[4].w[0] + 84u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 48u), 0u);
    st32((c.r[4].w[0] + 52u), 0u);
    st32((c.r[4].w[0] + 56u), 0u);
    st8((c.r[4].w[0] + 275u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 67;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030335Cu); st8((c.r[4].w[0] + 274u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0049(c, 74u, depth + 1u); else { c.pc = 0x00224FD0u; return; } if (c.pc != 0x0030335Cu) [[unlikely]] return; }
L_0030335C:
    set32(c.r[5], 0u + 136u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303368u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0049(c, 74u, depth + 1u); else { c.pc = 0x00224FD0u; return; } if (c.pc != 0x00303368u) [[unlikely]] return; }
L_00303368:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[2].w[0] - 14096u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030338Cu); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0016(c, 134u, depth + 1u); else { c.pc = 0x0015B550u; return; } if (c.pc != 0x0030338Cu) [[unlikely]] return; }
L_0030338C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003033A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[2], 0u + 3u);
    c.budget -= 8;
    { const bool t = c.r[6].d[0] == c.r[2].d[0]; set32(c.r[5], c.r[16].w[0] + 320u);  if (t) { goto L_0030342C; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_0030341C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_0030340C; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003033E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00303434; } }
L_003033E8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 26488u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00303434; } }
    set32(c.r[2], c.r[6].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00303434; } }
L_0030340C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303414u);  if (depth < kMaxDepth) unit_0080(c, 259u, depth + 1u); else { c.pc = 0x00303490u; return; } if (c.pc != 0x00303414u) [[unlikely]] return; }
L_00303414:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00303434; } }
L_0030341C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303424u);  if (depth < kMaxDepth) unit_0080(c, 260u, depth + 1u); else { c.pc = 0x00303510u; return; } if (c.pc != 0x00303424u) [[unlikely]] return; }
L_00303424:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00303434; } }
L_0030342C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303434u);  if (depth < kMaxDepth) unit_0080(c, 261u, depth + 1u); else { c.pc = 0x00303560u; return; } if (c.pc != 0x00303434u) [[unlikely]] return; }
L_00303434:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030343Cu);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x0030343Cu) [[unlikely]] return; }
L_0030343C:
    c.f[13] = ld32((c.r[16].w[0] + 36u));
    c.f[14] = ld32((c.r[16].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030344Cu); c.f[12] = ld32((c.r[16].w[0] + 32u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x0030344Cu) [[unlikely]] return; }
L_0030344C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303454u); set32(c.r[4], ld32((c.r[16].w[0] + 88u)));  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00303454u) [[unlikely]] return; }
L_00303454:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030345Cu); set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x0030345Cu) [[unlikely]] return; }
L_0030345C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303464u); set32(c.r[4], ld32((c.r[16].w[0] + 80u)));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00303464u) [[unlikely]] return; }
L_00303464:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030346Cu); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0030346Cu) [[unlikely]] return; }
L_0030346C:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00303490:
    c.f[1] = ld32((c.r[4].w[0] + 36u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E190000u);
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 36u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003034CC; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 84u)));
    set32(c.r[3], c.r[3].w[0] + 424u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 84u), c.r[3].w[0]);  if (t) { goto L_003034D8; } }
L_003034CC:
    set32(c.r[3], ld32((c.r[4].w[0] + 84u)));
    set32(c.r[3], c.r[3].w[0] - 424u);
    st32((c.r[4].w[0] + 84u), c.r[3].w[0]);
    c.budget -= 3;
L_003034D8:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[5].w[0] + 1u);
    c.r[1].d[0] = c.r[5].sd[0] < 31ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003034FC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 84u), 0u);
    c.budget -= 4;
L_003034FC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00303510:
    c.f[1] = ld32((c.r[4].w[0] + 36u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E190000u);
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 36u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 26488u)));
    c.r[3].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00303550; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[4].w[0] + 274u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
L_00303550:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00303560:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[5], c.r[3].w[0] + 14752u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = ld32((c.r[4].w[0] + 36u));
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.f[2] = ld32((c.r[3].w[0]));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[4].w[0] + 36u), c.f[1]);
    c.f[1] = ld32((c.r[4].w[0] + 40u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 40u), c.f[0]);  c.pc = t; return; }
L_003035A0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003035B0:
    c.budget -= 2;
    {  goto L_00303A20; }
L_003035C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] + 14768u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00300000u < 16384u) { entry = entries_0080[(t - 0x00300000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003035E0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(0u));  c.pc = t; return; }
L_00303600:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[6], c.r[3].w[0] + 26144u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 26483u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[7], c.r[8].w[0] << 5);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 8);
    c.budget -= 12;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);  if (t) { goto L_0030368C; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], 0u + 10u);
    mmi::div(c, 0, c.r[5].w[0], c.r[3].w[0]);
    set32(c.r[3], c.r[5].w[0] + 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0030368C; } }
    c.f[4] = ld32((c.r[6].w[0] + 32u));
    c.f[3] = ld32((c.r[6].w[0] + 36u));
    c.f[2] = ld32((c.r[6].w[0] + 40u));
    c.f[1] = ld32((c.r[6].w[0] + 44u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[5], c.r[4].w[0] + 32u);
    st32((c.r[4].w[0] + 32u), c.f[4]);
    st32((c.r[4].w[0] + 36u), c.f[3]);
    st32((c.r[4].w[0] + 40u), c.f[2]);
    st32((c.r[4].w[0] + 44u), c.f[1]);
    c.f[1] = ld32((c.r[4].w[0] + 40u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030368Cu); st32((c.r[4].w[0] + 40u), c.f[0]);  if (depth < kMaxDepth) unit_004A(c, 122u, depth + 1u); else { c.pc = 0x0022A2F0u; return; } if (c.pc != 0x0030368Cu) [[unlikely]] return; }
L_0030368C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003036A0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003036B0:
    c.budget -= 2;
    {  goto L_00303A20; }
L_003036C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[4], c.r[2].w[0] - 3872u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00730000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[5], c.r[2].w[0] - 3616u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[3], c.r[0], c.r[0]);
    c.budget -= 9;
L_003036E4:
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0]), 0u);
    st32((c.r[5].w[0]), 0u);
    c.r[2].d[0] = c.r[3].sd[0] < 64ll ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003036E4u | kUnwind; return; } goto L_003036E4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00780000u);
    set32(c.r[16], c.r[2].w[0] - 7456u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00780000u);
    set32(c.r[2], c.r[2].w[0] - 7456u);
    st32((c.r[28].w[0] - 26388u), 0u);
    st32((c.r[28].w[0] - 26384u), 0u);
    st32((c.r[28].w[0] - 26336u), c.r[2].w[0]);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 8;
L_00303720:
    set32(c.r[6], 0u + 512u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303730u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x00303730u) [[unlikely]] return; }
L_00303730:
    c.r[1].d[0] = c.r[17].sd[0] < 319ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00303748; } }
    set32(c.r[2], c.r[16].w[0] + 512u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_00303750; } }
L_00303748:
    st32((c.r[28].w[0] - 26320u), c.r[16].w[0]);
    c.budget -= 2;
L_00303750:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 320ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 512u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00303720u | kUnwind; return; } goto L_00303720; } }
    set32(c.r[2], 0u + 320u);
    st32((c.r[28].w[0] - 26460u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00740000u);
    set32(c.r[16], c.r[2].w[0] + 29408u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00740000u);
    set32(c.r[2], c.r[2].w[0] + 29408u);
    st32((c.r[28].w[0] - 26368u), c.r[2].w[0]);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 8;
L_00303780:
    set32(c.r[6], 0u + 704u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303790u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x00303790u) [[unlikely]] return; }
L_00303790:
    set32(c.r[3], 0u + 1u);
    c.r[1].d[0] = c.r[17].sd[0] < 319ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003037AC; } }
    set32(c.r[3], c.r[16].w[0] + 704u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 16u), c.r[3].w[0]);  if (t) { goto L_003037B0; } }
L_003037AC:
    st32((c.r[28].w[0] - 26352u), c.r[16].w[0]);
    c.budget -= 1;
L_003037B0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 320ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 704u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00303780u | kUnwind; return; } goto L_00303780; } }
    set32(c.r[3], 0u + 320u);
    st8((c.r[28].w[0] - 26308u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 26312u), static_cast<std::uint8_t>(0u));
    st32((c.r[28].w[0] - 26464u), c.r[3].w[0]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003037F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030380Cu); mmi::paddub(c.r[16], c.r[6], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 280u, depth + 1u); else { c.pc = 0x00303970u; return; } if (c.pc != 0x0030380Cu) [[unlikely]] return; }
L_0030380C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003038A0; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; st8((c.r[2].w[0] + 8u), static_cast<std::uint8_t>(c.r[17].w[0]));  if (t) { goto L_00303860; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[3], c.r[3].w[0] - 3616u);
    set32(c.r[5], c.r[17].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[2].w[0] + 16u), 0u);  if (t) { goto L_00303854; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[3], c.r[3].w[0] - 3872u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 20u), 0u);  if (t) { goto L_003038A0; } }
L_00303854:
    st32((c.r[2].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_003038A0; } }
L_00303860:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[3], c.r[3].w[0] - 3872u);
    set32(c.r[5], c.r[17].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[2].w[0] + 20u), 0u);  if (t) { goto L_00303898; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[3], c.r[3].w[0] - 3616u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 16u), 0u);  if (t) { goto L_003038A0; } }
L_00303898:
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[3].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 2;
L_003038A0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003038C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003038DCu); mmi::paddub(c.r[16], c.r[6], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 280u, depth + 1u); else { c.pc = 0x00303970u; return; } if (c.pc != 0x003038DCu) [[unlikely]] return; }
L_003038DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030395C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; st8((c.r[2].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00303928; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[2].w[0] + 20u), c.r[17].w[0]);  if (t) { goto L_00303920; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[3], c.r[3].w[0] - 3616u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[2].w[0]);  if (t) { goto L_0030395C; } }
L_00303920:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_0030395C; } }
L_00303928:
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[2].w[0] + 16u), c.r[17].w[0]);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[2].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_00303958; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[3], c.r[3].w[0] - 3872u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[2].w[0]);  if (t) { goto L_0030395C; } }
L_00303958:
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 1;
L_0030395C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00303970:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_003039C8; } }
    set32(c.r[16], ld32((c.r[28].w[0] - 26336u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; mmi::paddub(c.r[2], c.r[16], c.r[0]);  if (t) { goto L_003039C0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26460u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[28].w[0] - 26460u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[28].w[0] - 26336u), c.r[2].w[0]);  if (t) { goto L_003039A8; } }
    st32((c.r[28].w[0] - 26320u), 0u);
    c.budget -= 1;
L_003039A8:
    set32(c.r[6], 0u + 512u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003039B8u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x003039B8u) [[unlikely]] return; }
L_003039B8:
    st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(0u));
    mmi::paddub(c.r[2], c.r[16], c.r[0]);
    c.budget -= 2;
L_003039C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00303A10; } }
L_003039C8:
    set32(c.r[16], ld32((c.r[28].w[0] - 26368u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; mmi::paddub(c.r[2], c.r[16], c.r[0]);  if (t) { goto L_00303A0C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26464u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[28].w[0] - 26464u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[28].w[0] - 26368u), c.r[2].w[0]);  if (t) { goto L_003039F0; } }
    st32((c.r[28].w[0] - 26352u), 0u);
    c.budget -= 1;
L_003039F0:
    set32(c.r[6], 0u + 704u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303A00u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x00303A00u) [[unlikely]] return; }
L_00303A00:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[2], c.r[16], c.r[0]);
    c.budget -= 3;
L_00303A0C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00303A10:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00303A20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 16u)));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[4], ld32((c.r[4].w[0] + 20u)));  if (t) { goto L_00303A78; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00303A78; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[3], c.r[2].w[0] - 3616u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[2], c.r[2].w[0] - 3872u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), 0u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), 0u);  if (t) { goto L_00303AE0; } }
L_00303A78:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_00303AA8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00303AA8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[2], c.r[2].w[0] - 3616u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 16u), 0u);  if (t) { goto L_00303AE0; } }
L_00303AA8:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00303AD8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00303AD8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[2], c.r[2].w[0] - 3872u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), c.r[5].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 20u), 0u);  if (t) { goto L_00303AE0; } }
L_00303AD8:
    st32((c.r[5].w[0] + 20u), c.r[4].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[5].w[0]);
    c.budget -= 2;
L_00303AE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303AE8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 9u, depth + 1u); else { c.pc = 0x00304280u; return; } if (c.pc != 0x00303AE8u) [[unlikely]] return; }
L_00303AE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303AF0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 286u, depth + 1u); else { c.pc = 0x00303B00u; return; } if (c.pc != 0x00303AF0u) [[unlikely]] return; }
L_00303AF0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00303B00:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 9u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00303B3C; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26320u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00303B24; } }
    st32((c.r[28].w[0] - 26320u), c.r[4].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 26336u), c.r[4].w[0]);  if (t) { goto L_00303B2C; } }
L_00303B24:
    st32((c.r[3].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[28].w[0] - 26320u), c.r[4].w[0]);
    c.budget -= 2;
L_00303B2C:
    set32(c.r[3], ld32((c.r[28].w[0] - 26460u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 26460u), c.r[3].w[0]);  if (t) { goto L_00303B68; } }
L_00303B3C:
    set32(c.r[3], ld32((c.r[28].w[0] - 26352u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00303B54; } }
    st32((c.r[28].w[0] - 26352u), c.r[4].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 26368u), c.r[4].w[0]);  if (t) { goto L_00303B5C; } }
L_00303B54:
    st32((c.r[3].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[28].w[0] - 26352u), c.r[4].w[0]);
    c.budget -= 2;
L_00303B5C:
    set32(c.r[3], ld32((c.r[28].w[0] - 26464u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[28].w[0] - 26464u), c.r[3].w[0]);
    c.budget -= 3;
L_00303B68:
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 16u), 0u);  c.pc = t; return; }
L_00303B80:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00730000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[3].w[0] - 3616u);
    set32(c.r[5], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.budget -= 13;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00303C90; } }
    set32(c.r[19], c.r[4].w[0] - 4u);
    c.budget -= 1;
L_00303BB8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00303C80; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 642u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; c.r[18].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 9u)));  if (t) { goto L_00303BE8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 653u)));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;  if (t) { goto L_00303BFC; } }
L_00303BE8:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00303C08; } }
    c.r[1].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 2;
L_00303BFC:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = c.r[18].d[0] << 56;  if (t) { goto L_00303C1C; } }
    c.budget -= 1;
L_00303C08:
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00303C18u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00303C18u) [[unlikely]] return; }
L_00303C18:
    c.r[3].d[0] = c.r[18].d[0] << 56;
    c.budget -= 1;
L_00303C1C:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00303C70; } }
    c.r[3].d[0] = c.r[17].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[1].d[0] = c.r[3].sd[0] < 19ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00303C70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303C44u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 19u, depth + 1u); else { c.pc = 0x003045C0u; return; } if (c.pc != 0x00303C44u) [[unlikely]] return; }
L_00303C44:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 369u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00303C70; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 530u));
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00303C70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303C6Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0046(c, 137u, depth + 1u); else { c.pc = 0x0021AC90u; return; } if (c.pc != 0x00303C6Cu) [[unlikely]] return; }
L_00303C6C:
    c.budget -= 1;
L_00303C70:
    set32(c.r[3], ld32((c.r[28].w[0] - 26472u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[28].w[0] - 26472u), c.r[3].w[0]);
    c.budget -= 4;
L_00303C80:
    set32(c.r[16], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00303BB8u | kUnwind; return; } goto L_00303BB8; } }
    c.budget -= 1;
L_00303C90:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00303CB0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00730000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[3].w[0] - 3616u);
    set32(c.r[18], c.r[4].w[0] << 2);
    set32(c.r[17], c.r[3].w[0] + c.r[18].w[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[17].w[0])));
    c.budget -= 12;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00303D00; } }
L_00303CE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303CE8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 283u, depth + 1u); else { c.pc = 0x00303A20u; return; } if (c.pc != 0x00303CE8u) [[unlikely]] return; }
L_00303CE8:
    set32(c.r[16], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00303CE0u | kUnwind; return; } goto L_00303CE0; } }
    c.budget -= 1;
L_00303D00:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[3], c.r[3].w[0] - 3872u);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    st32((c.r[17].w[0]), 0u);
    st32((c.r[3].w[0]), 0u);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00303D30:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[3], c.r[3].w[0] - 3616u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00303E18; } }
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 2;
L_00303D54:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 272u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_00303D80; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26388u)));
    st32((c.r[6].w[0] + 172u), 0u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[28].w[0] - 26388u), c.r[6].w[0]);  if (t) { goto L_00303D78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 26384u), c.r[6].w[0]);  if (t) { goto L_00303E08; } }
L_00303D78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 172u), c.r[6].w[0]);  if (t) { goto L_00303E08; } }
L_00303D80:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_00303E08; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 273u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00303DEC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_00303DCC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00303DAC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[6].w[0] + 20u)));  if (t) { goto L_00303E0C; } }
L_00303DAC:
    set32(c.r[3], ld32((c.r[28].w[0] - 26396u)));
    st32((c.r[6].w[0] + 172u), 0u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[28].w[0] - 26396u), c.r[6].w[0]);  if (t) { goto L_00303DC4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 26392u), c.r[6].w[0]);  if (t) { goto L_00303E08; } }
L_00303DC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 172u), c.r[6].w[0]);  if (t) { goto L_00303E08; } }
L_00303DCC:
    set32(c.r[3], ld32((c.r[28].w[0] - 26404u)));
    st32((c.r[6].w[0] + 172u), 0u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[28].w[0] - 26404u), c.r[6].w[0]);  if (t) { goto L_00303DE4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 26400u), c.r[6].w[0]);  if (t) { goto L_00303E08; } }
L_00303DE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 172u), c.r[6].w[0]);  if (t) { goto L_00303E08; } }
L_00303DEC:
    set32(c.r[3], ld32((c.r[28].w[0] - 26412u)));
    st32((c.r[6].w[0] + 172u), 0u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[28].w[0] - 26412u), c.r[6].w[0]);  if (t) { goto L_00303E04; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 26408u), c.r[6].w[0]);  if (t) { goto L_00303E08; } }
L_00303E04:
    st32((c.r[3].w[0] + 172u), c.r[6].w[0]);
    c.budget -= 1;
L_00303E08:
    set32(c.r[6], ld32((c.r[6].w[0] + 20u)));
    c.budget -= 1;
L_00303E0C:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00303D54u | kUnwind; return; } goto L_00303D54; } }
    c.budget -= 1;
L_00303E18:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00303E20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[28].w[0] - 26384u)));
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00303E80; } }
L_00303E38:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00303E70; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 168u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00303E70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303E58u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 115u, depth + 1u); else { c.pc = 0x00305C60u; return; } if (c.pc != 0x00303E58u) [[unlikely]] return; }
L_00303E58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00303E70; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 168u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00303E6Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00303E6Cu) [[unlikely]] return; }
L_00303E6C:
    c.budget -= 1;
L_00303E70:
    set32(c.r[16], ld32((c.r[16].w[0] + 172u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00303E38u | kUnwind; return; } goto L_00303E38; } }
    c.budget -= 1;
L_00303E80:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00303E90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].d[0] = c.r[4].d[0] << 56;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    set32(c.r[3], 0u + 2u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_00303F4C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00303F0C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00303EC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00303F8C; } }
L_00303EC8:
    set32(c.r[16], ld32((c.r[28].w[0] - 26392u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00303F88; } }
L_00303ED4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00303EF8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 168u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00303EF8; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00303EF4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00303EF4u) [[unlikely]] return; }
L_00303EF4:
    c.budget -= 1;
L_00303EF8:
    set32(c.r[16], ld32((c.r[16].w[0] + 172u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00303ED4u | kUnwind; return; } goto L_00303ED4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00303F88; } }
L_00303F0C:
    set32(c.r[16], ld32((c.r[28].w[0] - 26400u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00303F88; } }
L_00303F18:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00303F38; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 168u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00303F38; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00303F38u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00303F38u) [[unlikely]] return; }
L_00303F38:
    set32(c.r[16], ld32((c.r[16].w[0] + 172u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00303F18u | kUnwind; return; } goto L_00303F18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00303F88; } }
L_00303F4C:
    set32(c.r[16], ld32((c.r[28].w[0] - 26408u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00303F88; } }
L_00303F58:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00303F78; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 168u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00303F78; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00303F78u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00303F78u) [[unlikely]] return; }
L_00303F78:
    set32(c.r[16], ld32((c.r[16].w[0] + 172u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00303F58u | kUnwind; return; } goto L_00303F58; } }
    c.budget -= 1;
L_00303F88:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00303F8C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00303FA0:
    st32((c.r[28].w[0] - 26388u), 0u);
    st32((c.r[28].w[0] - 26384u), 0u);
    st32((c.r[28].w[0] - 26396u), 0u);
    st32((c.r[28].w[0] - 26392u), 0u);
    st32((c.r[28].w[0] - 26404u), 0u);
    st32((c.r[28].w[0] - 26400u), 0u);
    st32((c.r[28].w[0] - 26412u), 0u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 26408u), 0u);  c.pc = t; return; }
L_00303FD0:
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[3].w[0] << 13);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00E70000u);
    c.r[3].d[0] = c.r[3].d[0] | 14336ull;
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 636u), c.r[3].w[0]);  c.pc = t; return; }
L_00303FF0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00F10000u);
    set32(c.r[5], c.r[5].w[0] << 12);
    c.r[3].d[0] = c.r[3].d[0] | 47104ull;
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    [[clang::musttail]] return unit_0081(c, 1u, depth);
}

}
