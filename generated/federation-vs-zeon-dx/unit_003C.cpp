#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_003C[4096] = {
    1, 0, 0, 0, 0, 0, 2, 0, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0,
    0, 0, 0, 24, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0,
    0, 0, 32, 0, 33, 0, 0, 34, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    37, 0, 38, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 42, 0, 43, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 45, 0, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 49, 0, 0, 50, 0, 0, 0, 0, 0, 51, 0, 0, 0,
    0, 0, 0, 52, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 56, 0, 0, 57, 0, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 61, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0,
    64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0,
    0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0,
    69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0,
    72, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 75, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 85, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 89, 0, 0, 90, 0, 0, 0, 91, 0, 0, 92, 0,
    0, 93, 0, 0, 94, 0, 0, 95, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0,
    103, 0, 0, 0, 104, 0, 0, 105, 0, 106, 0, 0, 107, 0, 0, 108, 0, 109, 0, 0, 0, 110, 0, 111, 0, 0, 112, 0, 113, 0, 0, 0,
    114, 0, 115, 0, 0, 116, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 126, 0, 0, 127, 0, 0, 0, 128, 0, 0, 129, 0, 0, 130, 0, 0, 0, 0, 0, 131, 0, 132,
    0, 0, 133, 0, 0, 0, 134, 0, 135, 0, 0, 136, 0, 0, 137, 0, 0, 0, 138, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    141, 0, 0, 0, 0, 0, 142, 0, 0, 143, 0, 0, 0, 144, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 153, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 161,
    0, 0, 0, 0, 162, 0, 0, 0, 163, 0, 0, 0, 164, 0, 165, 0, 166, 0, 0, 167, 0, 0, 0, 168, 0, 0, 0, 169, 0, 0, 0, 0,
    0, 170, 0, 0, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0, 0, 0, 173, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0,
    0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 183, 0, 0, 0, 184, 0, 0, 0, 185, 0, 186, 0, 187, 0, 0, 188, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 0, 0, 191,
    0, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0,
    198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 203, 0, 0,
    0, 204, 0, 205, 0, 206, 0, 0, 207, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 211, 0, 0, 0, 212,
    0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 217, 0, 0, 218, 0, 219, 0, 0, 0, 0, 0, 0, 0,
    220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0,
    0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 243, 0, 0, 244, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 247, 0, 248, 0, 0, 249, 0, 0, 250, 0, 0, 0, 251, 0, 0, 252, 0, 253, 0, 254, 0, 0, 255, 0, 0, 0, 256, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    257, 0, 0, 0, 0, 0, 0, 258, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 263, 0, 0, 0, 264, 0, 265, 0, 266, 0, 0, 267,
    0, 0, 0, 268, 0, 0, 0, 269, 0, 0, 0, 0, 0, 270, 0, 0, 0, 271, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 274, 0, 0, 275, 0, 0, 276, 0, 277, 0, 278, 0, 0, 279, 0, 0, 0,
    280, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0,
};

void unit_003C(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001F0000;
    case 2u: goto L_001F0018;
    case 3u: goto L_001F0020;
    case 4u: goto L_001F0024;
    case 5u: goto L_001F0028;
    case 6u: goto L_001F002C;
    case 7u: goto L_001F0030;
    case 8u: goto L_001F0034;
    case 9u: goto L_001F0038;
    case 10u: goto L_001F003C;
    case 11u: goto L_001F0040;
    case 12u: goto L_001F0044;
    case 13u: goto L_001F0048;
    case 14u: goto L_001F004C;
    case 15u: goto L_001F0050;
    case 16u: goto L_001F0054;
    case 17u: goto L_001F0058;
    case 18u: goto L_001F005C;
    case 19u: goto L_001F00A8;
    case 20u: goto L_001F00C4;
    case 21u: goto L_001F0130;
    case 22u: goto L_001F0238;
    case 23u: goto L_001F0278;
    case 24u: goto L_001F028C;
    case 25u: goto L_001F02A0;
    case 26u: goto L_001F02F8;
    case 27u: goto L_001F040C;
    case 28u: goto L_001F0580;
    case 29u: goto L_001F0674;
    case 30u: goto L_001F06D4;
    case 31u: goto L_001F06EC;
    case 32u: goto L_001F0708;
    case 33u: goto L_001F0710;
    case 34u: goto L_001F071C;
    case 35u: goto L_001F0728;
    case 36u: goto L_001F0750;
    case 37u: goto L_001F0780;
    case 38u: goto L_001F0788;
    case 39u: goto L_001F07A0;
    case 40u: goto L_001F080C;
    case 41u: goto L_001F0880;
    case 42u: goto L_001F0988;
    case 43u: goto L_001F0990;
    case 44u: goto L_001F09B0;
    case 45u: goto L_001F09C0;
    case 46u: goto L_001F09D4;
    case 47u: goto L_001F09E4;
    case 48u: goto L_001F0A44;
    case 49u: goto L_001F0A4C;
    case 50u: goto L_001F0A58;
    case 51u: goto L_001F0A70;
    case 52u: goto L_001F0A8C;
    case 53u: goto L_001F0AA0;
    case 54u: goto L_001F0C44;
    case 55u: goto L_001F0C70;
    case 56u: goto L_001F0D10;
    case 57u: goto L_001F0D1C;
    case 58u: goto L_001F0D2C;
    case 59u: goto L_001F0D3C;
    case 60u: goto L_001F0D58;
    case 61u: goto L_001F0D90;
    case 62u: goto L_001F0DA4;
    case 63u: goto L_001F0E64;
    case 64u: goto L_001F0E80;
    case 65u: goto L_001F0EF8;
    case 66u: goto L_001F0F08;
    case 67u: goto L_001F10CC;
    case 68u: goto L_001F10E0;
    case 69u: goto L_001F1100;
    case 70u: goto L_001F11D0;
    case 71u: goto L_001F126C;
    case 72u: goto L_001F1280;
    case 73u: goto L_001F12A0;
    case 74u: goto L_001F12E0;
    case 75u: goto L_001F12E8;
    case 76u: goto L_001F1498;
    case 77u: goto L_001F1510;
    case 78u: goto L_001F1538;
    case 79u: goto L_001F1540;
    case 80u: goto L_001F16E0;
    case 81u: goto L_001F1714;
    case 82u: goto L_001F180C;
    case 83u: goto L_001F1850;
    case 84u: goto L_001F1918;
    case 85u: goto L_001F1930;
    case 86u: goto L_001F1938;
    case 87u: goto L_001F1990;
    case 88u: goto L_001F1A40;
    case 89u: goto L_001F1A50;
    case 90u: goto L_001F1A5C;
    case 91u: goto L_001F1A6C;
    case 92u: goto L_001F1A78;
    case 93u: goto L_001F1A84;
    case 94u: goto L_001F1A90;
    case 95u: goto L_001F1A9C;
    case 96u: goto L_001F1AB8;
    case 97u: goto L_001F1B50;
    case 98u: goto L_001F1B84;
    case 99u: goto L_001F1C20;
    case 100u: goto L_001F1C54;
    case 101u: goto L_001F1CC0;
    case 102u: goto L_001F1D74;
    case 103u: goto L_001F1D80;
    case 104u: goto L_001F1D90;
    case 105u: goto L_001F1D9C;
    case 106u: goto L_001F1DA4;
    case 107u: goto L_001F1DB0;
    case 108u: goto L_001F1DBC;
    case 109u: goto L_001F1DC4;
    case 110u: goto L_001F1DD4;
    case 111u: goto L_001F1DDC;
    case 112u: goto L_001F1DE8;
    case 113u: goto L_001F1DF0;
    case 114u: goto L_001F1E00;
    case 115u: goto L_001F1E08;
    case 116u: goto L_001F1E14;
    case 117u: goto L_001F1E30;
    case 118u: goto L_001F1EC8;
    case 119u: goto L_001F1EFC;
    case 120u: goto L_001F1F98;
    case 121u: goto L_001F1FCC;
    case 122u: goto L_001F2030;
    case 123u: goto L_001F20A8;
    case 124u: goto L_001F20C0;
    case 125u: goto L_001F2120;
    case 126u: goto L_001F2128;
    case 127u: goto L_001F2134;
    case 128u: goto L_001F2144;
    case 129u: goto L_001F2150;
    case 130u: goto L_001F215C;
    case 131u: goto L_001F2174;
    case 132u: goto L_001F217C;
    case 133u: goto L_001F2188;
    case 134u: goto L_001F2198;
    case 135u: goto L_001F21A0;
    case 136u: goto L_001F21AC;
    case 137u: goto L_001F21B8;
    case 138u: goto L_001F21C8;
    case 139u: goto L_001F21D8;
    case 140u: goto L_001F2200;
    case 141u: goto L_001F2280;
    case 142u: goto L_001F2298;
    case 143u: goto L_001F22A4;
    case 144u: goto L_001F22B4;
    case 145u: goto L_001F22C0;
    case 146u: goto L_001F22E0;
    case 147u: goto L_001F2318;
    case 148u: goto L_001F2360;
    case 149u: goto L_001F23E4;
    case 150u: goto L_001F2444;
    case 151u: goto L_001F245C;
    case 152u: goto L_001F246C;
    case 153u: goto L_001F2478;
    case 154u: goto L_001F24A0;
    case 155u: goto L_001F24AC;
    case 156u: goto L_001F2510;
    case 157u: goto L_001F252C;
    case 158u: goto L_001F253C;
    case 159u: goto L_001F2548;
    case 160u: goto L_001F2570;
    case 161u: goto L_001F257C;
    case 162u: goto L_001F2590;
    case 163u: goto L_001F25A0;
    case 164u: goto L_001F25B0;
    case 165u: goto L_001F25B8;
    case 166u: goto L_001F25C0;
    case 167u: goto L_001F25CC;
    case 168u: goto L_001F25DC;
    case 169u: goto L_001F25EC;
    case 170u: goto L_001F2604;
    case 171u: goto L_001F2618;
    case 172u: goto L_001F2628;
    case 173u: goto L_001F2640;
    case 174u: goto L_001F2650;
    case 175u: goto L_001F2700;
    case 176u: goto L_001F2740;
    case 177u: goto L_001F27B4;
    case 178u: goto L_001F27C0;
    case 179u: goto L_001F2874;
    case 180u: goto L_001F2898;
    case 181u: goto L_001F28C0;
    case 182u: goto L_001F2950;
    case 183u: goto L_001F2988;
    case 184u: goto L_001F2998;
    case 185u: goto L_001F29A8;
    case 186u: goto L_001F29B0;
    case 187u: goto L_001F29B8;
    case 188u: goto L_001F29C4;
    case 189u: goto L_001F29D4;
    case 190u: goto L_001F29E4;
    case 191u: goto L_001F29FC;
    case 192u: goto L_001F2A10;
    case 193u: goto L_001F2A20;
    case 194u: goto L_001F2A38;
    case 195u: goto L_001F2AB8;
    case 196u: goto L_001F2B00;
    case 197u: goto L_001F2B74;
    case 198u: goto L_001F2B80;
    case 199u: goto L_001F2C34;
    case 200u: goto L_001F2C58;
    case 201u: goto L_001F2CC4;
    case 202u: goto L_001F2CE4;
    case 203u: goto L_001F2CF4;
    case 204u: goto L_001F2D04;
    case 205u: goto L_001F2D0C;
    case 206u: goto L_001F2D14;
    case 207u: goto L_001F2D20;
    case 208u: goto L_001F2D30;
    case 209u: goto L_001F2D40;
    case 210u: goto L_001F2D58;
    case 211u: goto L_001F2D6C;
    case 212u: goto L_001F2D7C;
    case 213u: goto L_001F2D94;
    case 214u: goto L_001F2E14;
    case 215u: goto L_001F2E60;
    case 216u: goto L_001F2EB4;
    case 217u: goto L_001F2ECC;
    case 218u: goto L_001F2ED8;
    case 219u: goto L_001F2EE0;
    case 220u: goto L_001F2F00;
    case 221u: goto L_001F2FA0;
    case 222u: goto L_001F2FB4;
    case 223u: goto L_001F303C;
    case 224u: goto L_001F3054;
    case 225u: goto L_001F3080;
    case 226u: goto L_001F3120;
    case 227u: goto L_001F3160;
    case 228u: goto L_001F31E0;
    case 229u: goto L_001F3280;
    case 230u: goto L_001F32E0;
    case 231u: goto L_001F3320;
    case 232u: goto L_001F3360;
    case 233u: goto L_001F33A8;
    case 234u: goto L_001F33C0;
    case 235u: goto L_001F33E8;
    case 236u: goto L_001F3460;
    case 237u: goto L_001F349C;
    case 238u: goto L_001F35A0;
    case 239u: goto L_001F35F0;
    case 240u: goto L_001F3614;
    case 241u: goto L_001F36A0;
    case 242u: goto L_001F36D8;
    case 243u: goto L_001F36E4;
    case 244u: goto L_001F36F0;
    case 245u: goto L_001F3750;
    case 246u: goto L_001F37C4;
    case 247u: goto L_001F380C;
    case 248u: goto L_001F3814;
    case 249u: goto L_001F3820;
    case 250u: goto L_001F382C;
    case 251u: goto L_001F383C;
    case 252u: goto L_001F3848;
    case 253u: goto L_001F3850;
    case 254u: goto L_001F3858;
    case 255u: goto L_001F3864;
    case 256u: goto L_001F3874;
    case 257u: goto L_001F3900;
    case 258u: goto L_001F391C;
    case 259u: goto L_001F3928;
    case 260u: goto L_001F3970;
    case 261u: goto L_001F399C;
    case 262u: goto L_001F39B8;
    case 263u: goto L_001F39D0;
    case 264u: goto L_001F39E0;
    case 265u: goto L_001F39E8;
    case 266u: goto L_001F39F0;
    case 267u: goto L_001F39FC;
    case 268u: goto L_001F3A0C;
    case 269u: goto L_001F3A1C;
    case 270u: goto L_001F3A34;
    case 271u: goto L_001F3A44;
    case 272u: goto L_001F3A54;
    case 273u: goto L_001F3B34;
    case 274u: goto L_001F3B3C;
    case 275u: goto L_001F3B48;
    case 276u: goto L_001F3B54;
    case 277u: goto L_001F3B5C;
    case 278u: goto L_001F3B64;
    case 279u: goto L_001F3B70;
    case 280u: goto L_001F3B80;
    case 281u: goto L_001F3B90;
    case 282u: goto L_001F3C20;
    case 283u: goto L_001F3C30;
    case 284u: goto L_001F3CC0;
    case 285u: goto L_001F3D0C;
    case 286u: goto L_001F3D94;
    case 287u: goto L_001F3DEC;
    case 288u: goto L_001F3E40;
    case 289u: goto L_001F3EE8;
    case 290u: goto L_001F3F94;
    case 291u: goto L_001F3FF4;
    default: bad_entry(c, 0x001F0000u); return;
    }
L_001F0000:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001F0064; } }
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001F001C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[29].w[0] + 112u);  if (t) { goto L_001F00B4; } }
    goto L_001F001C;
L_001F0018:
    set32(c.r[6], c.r[29].w[0] + 112u);
    c.budget -= 1;
L_001F001C:
    c.f[1] = ld32((c.r[18].w[0] + 36u));
    c.budget -= 1;
L_001F0020:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42340000u);
    c.budget -= 1;
L_001F0024:
    c.f[0] = c.r[3].w[0];
    c.budget -= 1;
L_001F0028:
    c.budget -= 1;
L_001F002C:
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 1;
L_001F0030:
    c.budget -= 1;
L_001F0034:
    c.budget -= 2;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[6], c.r[29].w[0] + 112u);  if (t) { goto L_001F004C; } }
    goto L_001F003C;
L_001F0038:
    set32(c.r[6], c.r[29].w[0] + 112u);
    c.budget -= 1;
L_001F003C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 789u)));
    c.budget -= 1;
L_001F0040:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[29].w[0] + 112u);  if (t) { goto L_001F00C8; } }
    goto L_001F0048;
L_001F0044:
    set32(c.r[3], c.r[29].w[0] + 112u);
    c.budget -= 1;
L_001F0048:
    set32(c.r[6], c.r[29].w[0] + 112u);
    c.budget -= 1;
L_001F004C:
    set32(c.r[7], c.r[19].w[0] + 48u);
    c.budget -= 1;
L_001F0050:
    mmi::paddub(c.r[5], c.r[18], c.r[0]);
    c.budget -= 1;
L_001F0054:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F005Cu); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_003C(c, 146u, depth + 1u); else { c.pc = 0x001F22E0u; return; } if (c.pc != 0x001F005Cu) [[unlikely]] return; }
    goto L_001F005C;
L_001F0058:
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 1;
L_001F005C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F00C4; } }
L_001F0064:
    c.f[1] = ld32((c.r[18].w[0] + 36u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44CE0000u);
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[6], c.r[29].w[0] + 112u);  if (t) { goto L_001F0098; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 789u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F00C4; } }
    set32(c.r[6], c.r[29].w[0] + 112u);
    c.budget -= 1;
L_001F0098:
    set32(c.r[7], c.r[19].w[0] + 48u);
    mmi::paddub(c.r[5], c.r[18], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F00A8u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_003C(c, 146u, depth + 1u); else { c.pc = 0x001F22E0u; return; } if (c.pc != 0x001F00A8u) [[unlikely]] return; }
L_001F00A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F00C4; } }
    set32(c.r[6], c.r[29].w[0] + 112u);
    c.budget -= 1;
L_001F00B4:
    set32(c.r[7], c.r[19].w[0] + 48u);
    mmi::paddub(c.r[5], c.r[18], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F00C4u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_003C(c, 146u, depth + 1u); else { c.pc = 0x001F22E0u; return; } if (c.pc != 0x001F00C4u) [[unlikely]] return; }
L_001F00C4:
    set32(c.r[3], c.r[29].w[0] + 112u);
    c.budget -= 1;
L_001F00C8:
    c.f[3] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[19].w[0] + 32u), c.f[3]);
    st32((c.r[19].w[0] + 36u), c.f[2]);
    st32((c.r[19].w[0] + 40u), c.f[1]);
    st32((c.r[19].w[0] + 44u), c.f[0]);
    c.f[3] = ld32((c.r[19].w[0] + 32u));
    c.f[2] = ld32((c.r[19].w[0] + 36u));
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = ld32((c.r[19].w[0] + 44u));
    st32((c.r[19].w[0] + 16u), c.f[3]);
    st32((c.r[19].w[0] + 20u), c.f[2]);
    st32((c.r[19].w[0] + 24u), c.f[1]);
    st32((c.r[19].w[0] + 28u), c.f[0]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 25;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001F0130:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.f[4] = ld32((c.r[4].w[0] + 16u));
    c.f[3] = ld32((c.r[4].w[0] + 20u));
    c.f[1] = ld32((c.r[4].w[0] + 24u));
    c.f[0] = ld32((c.r[4].w[0] + 28u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[7], c.r[3].w[0] + 27192u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40E00000u);
    c.f[2] = c.r[3].w[0];
    st32((c.r[4].w[0] + 32u), c.f[4]);
    st32((c.r[4].w[0] + 36u), c.f[3]);
    st32((c.r[4].w[0] + 40u), c.f[1]);
    st32((c.r[4].w[0] + 44u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8386u)));
    c.f[0] = c.r[3].w[0];
    c.f[1] = ld32((c.r[4].w[0] + 348u));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 758u)));
    set32(c.r[3], c.r[8].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[8].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[3].w[0]);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    c.f[2] = ld32((c.r[3].w[0]));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 348u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 32u));
    st32((c.r[4].w[0] + 48u), c.f[0]);
    c.f[1] = ld32((c.r[5].w[0] + 36u));
    c.f[0] = ld32((c.r[4].w[0] + 348u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 40u));
    st32((c.r[4].w[0] + 56u), c.f[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 789u)));
    c.budget -= 43;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_001F028C; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 9u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 256u)));
    c.budget -= 5;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_001F0240; } }
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_001F0204; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[4].w[0] + 16u);  if (t) { goto L_001F0284; } }
L_001F0204:
    c.f[1] = ld32((c.r[5].w[0] + 36u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42340000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[6], c.r[4].w[0] + 16u);  if (t) { goto L_001F0230; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_001F028C; } }
    set32(c.r[6], c.r[4].w[0] + 16u);
    c.budget -= 1;
L_001F0230:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0238u); set32(c.r[7], c.r[4].w[0] + 48u);  if (depth < kMaxDepth) unit_003C(c, 146u, depth + 1u); else { c.pc = 0x001F22E0u; return; } if (c.pc != 0x001F0238u) [[unlikely]] return; }
L_001F0238:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_001F0290; } }
L_001F0240:
    c.f[1] = ld32((c.r[5].w[0] + 36u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44CE0000u);
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[6], c.r[4].w[0] + 16u);  if (t) { goto L_001F0270; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_001F028C; } }
    set32(c.r[6], c.r[4].w[0] + 16u);
    c.budget -= 1;
L_001F0270:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0278u); set32(c.r[7], c.r[4].w[0] + 48u);  if (depth < kMaxDepth) unit_003C(c, 146u, depth + 1u); else { c.pc = 0x001F22E0u; return; } if (c.pc != 0x001F0278u) [[unlikely]] return; }
L_001F0278:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F028C; } }
    set32(c.r[6], c.r[4].w[0] + 16u);
    c.budget -= 1;
L_001F0284:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F028Cu); set32(c.r[7], c.r[4].w[0] + 48u);  if (depth < kMaxDepth) unit_003C(c, 146u, depth + 1u); else { c.pc = 0x001F22E0u; return; } if (c.pc != 0x001F028Cu) [[unlikely]] return; }
L_001F028C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_001F0290:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001F02A0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    set32(c.r[16], ld32((c.r[6].w[0] + 580u)));
    set32(c.r[17], ld32((c.r[6].w[0] + 584u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8384u)));
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F02F8u); st8((c.r[4].w[0] + 8u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_003C(c, 238u, depth + 1u); else { c.pc = 0x001F35A0u; return; } if (c.pc != 0x001F02F8u) [[unlikely]] return; }
L_001F02F8:
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 6u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_001F0374; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001F0370; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F0334; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 522u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F0370; } }
L_001F0334:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], 0u + 15u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 651u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 45u);  if (t) { goto L_001F0364; } }
    set32(c.r[2], 0u + 17u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001F0360; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F0370; } }
L_001F0360:
    set32(c.r[2], 0u + 45u);
    c.budget -= 1;
L_001F0364:
    st8((c.r[19].w[0] + 358u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 359u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001F037C; } }
L_001F0370:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001F0374:
    st8((c.r[19].w[0] + 358u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[19].w[0] + 359u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_001F037C:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F0468; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 29593u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F0468; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 28022u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[3], c.r[28].w[0] - 31920u);
    set32(c.r[2], c.r[2].w[0] + 5504u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 28020u)));
    set32(c.r[5], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 9u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 21;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F0468; } }
    set32(c.r[7], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[6], c.r[2].w[0] + 26144u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[4], 0u + 1u);
    c.budget -= 5;
L_001F040C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_001F0458; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_001F0454; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 8389u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 640u)));
    set32(c.r[2], c.r[4].w[0] << (c.r[2].w[0] & 31u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F0454; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 529u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F0454; } }
    mmi::paddub(c.r[17], c.r[6], c.r[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[16], c.r[6], c.r[0]);  if (t) { goto L_001F0468; } }
L_001F0454:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_001F0458:
    c.r[2].d[0] = c.r[5].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 8448u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F040Cu | kUnwind; return; } goto L_001F040C; } }
    c.budget -= 1;
L_001F0468:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_001F047C; } }
    st32((c.r[19].w[0] + 364u), c.r[18].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[17], c.r[18], c.r[0]);  if (t) { goto L_001F0480; } }
L_001F047C:
    st32((c.r[19].w[0] + 364u), c.r[17].w[0]);
    c.budget -= 1;
L_001F0480:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_001F0494; } }
    st32((c.r[19].w[0] + 360u), c.r[17].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[16], c.r[17], c.r[0]);  if (t) { goto L_001F0498; } }
L_001F0494:
    st32((c.r[19].w[0] + 360u), c.r[16].w[0]);
    c.budget -= 1;
L_001F0498:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001F04C8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 28928u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_001F04D0; } }
L_001F04C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[18], c.r[2].w[0] + 29672u);
    c.budget -= 2;
L_001F04D0:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 515u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F0538; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[19].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], 0u + 11u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 256u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F051C; } }
    c.f[0] = ld32((c.r[18].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 320u), c.f[0]);  if (t) { goto L_001F0540; } }
L_001F051C:
    c.f[0] = ld32((c.r[18].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 320u), c.f[0]);  if (t) { goto L_001F0540; } }
L_001F0538:
    c.f[0] = ld32((c.r[18].w[0] + 4u));
    st32((c.r[19].w[0] + 320u), c.f[0]);
    c.budget -= 2;
L_001F0540:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[17].d[0];  if (t) { goto L_001F0558; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001F0568; } }
L_001F0558:
    st8((c.r[19].w[0] + 356u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 514u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001F0640; } }
L_001F0568:
    st8((c.r[19].w[0] + 356u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], c.r[16].w[0] + 32u);
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0580u); st8((c.r[2].w[0] + 514u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x001F0580u) [[unlikely]] return; }
L_001F0580:
    c.f[1] = ld32((c.r[19].w[0] + 320u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001F0640; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 280u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F05C8; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 745u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001F05C8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8387u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F05C8; } }
    st8((c.r[16].w[0] + 280u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_001F05C8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[2], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F05EC; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 745u));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F05EC; } }
    st8((c.r[16].w[0] + 280u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_001F05EC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F0640; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F0640; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 616u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F0640; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    set32(c.r[2], 0u + 40u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_001F063C; } }
    set32(c.r[2], 0u + 42u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F0640; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001F063C:
    st8((c.r[4].w[0] + 280u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_001F0640:
    c.f[0] = ld32((c.r[17].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = c.r[2].w[0];
    set32(c.r[4], c.r[19].w[0] + 48u);
    st32((c.r[19].w[0] + 48u), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 8u));
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0674u); st32((c.r[19].w[0] + 56u), c.f[0]);  if (depth < kMaxDepth) unit_0045(c, 192u, depth + 1u); else { c.pc = 0x00217510u; return; } if (c.pc != 0x001F0674u) [[unlikely]] return; }
L_001F0674:
    c.f[1] = ld32((c.r[19].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001F06A4; } }
    c.f[1] = ld32((c.r[18].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 52u), c.f[0]);
    c.budget -= 7;
L_001F06A4:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 356u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F06F4; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 515u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001F06F4; } }
    set32(c.r[6], c.r[17].w[0] + 32u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F06D4u); set32(c.r[5], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001F06D4u) [[unlikely]] return; }
L_001F06D4:
    st32((c.r[29].w[0] + 84u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[2], c.r[2].w[0] + 32767u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F06ECu); set32(c.r[5], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_003C(c, 215u, depth + 1u); else { c.pc = 0x001F2E60u; return; } if (c.pc != 0x001F06ECu) [[unlikely]] return; }
L_001F06EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[29].w[0] + 80u);  if (t) { goto L_001F0720; } }
L_001F06F4:
    st32((c.r[29].w[0] + 84u), 0u);
    st32((c.r[29].w[0] + 80u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0708u); st32((c.r[29].w[0] + 88u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x001F0708u) [[unlikely]] return; }
L_001F0708:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0710u); set32(c.r[4], ld32((c.r[17].w[0] + 84u)));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x001F0710u) [[unlikely]] return; }
L_001F0710:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F071Cu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x001F071Cu) [[unlikely]] return; }
L_001F071C:
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 1;
L_001F0720:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0728u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_003C(c, 245u, depth + 1u); else { c.pc = 0x001F3750u; return; } if (c.pc != 0x001F0728u) [[unlikely]] return; }
L_001F0728:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001F0750:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 30400u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 12;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0780u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F0780u) [[unlikely]] return; }
L_001F0780:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0788u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_003C(c, 232u, depth + 1u); else { c.pc = 0x001F3360u; return; } if (c.pc != 0x001F0788u) [[unlikely]] return; }
L_001F0788:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F07A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[8], ld32((c.r[4].w[0] + 364u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 1u)));
    c.r[1].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001F07DC; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 8386u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 28928u);
    set32(c.r[6], c.r[7].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[3].w[0] + c.r[6].w[0]);  if (t) { goto L_001F07E4; } }
L_001F07DC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[7], c.r[3].w[0] + 29672u);
    c.budget -= 2;
L_001F07E4:
    set32(c.r[6], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 4u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 641u)));
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_001F0814; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F080Cu); st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_003C(c, 41u, depth + 1u); else { c.pc = 0x001F0880u; return; } if (c.pc != 0x001F080Cu) [[unlikely]] return; }
L_001F080C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_001F0874; } }
L_001F0814:
    c.f[2] = ld32((c.r[4].w[0] + 48u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x421C0000u);
    c.f[3] = c.r[3].w[0];
    c.f[0] = ld32((c.r[8].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.f[4] = c.r[3].w[0];
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = fp::add(c.f[2], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[4]);
    st32((c.r[4].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 8u));
    c.f[1] = c.r[3].w[0];
    c.f[2] = ld32((c.r[8].w[0] + 36u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::add(c.f[2], c.f[0]);
    st32((c.r[4].w[0] + 52u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 56u));
    c.f[0] = ld32((c.r[8].w[0] + 40u));
    c.f[1] = fp::mul(c.f[3], c.f[1]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[4]);
    st32((c.r[4].w[0] + 56u), c.f[0]);
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 24;
L_001F0874:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001F0880:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 360u)));
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[19], c.r[4], c.r[0]);  if (t) { goto L_001F08D0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 28928u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_001F08D8; } }
L_001F08D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[17], c.r[2].w[0] + 29672u);
    c.budget -= 2;
L_001F08D8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F0AC8; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[19].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[4] = ld32((c.r[19].w[0] + 48u));
    c.f[3] = ld32((c.r[19].w[0] + 52u));
    c.f[1] = ld32((c.r[19].w[0] + 56u));
    c.f[0] = ld32((c.r[19].w[0] + 60u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42200000u);
    set32(c.r[6], c.r[29].w[0] + 80u);
    c.f[2] = c.r[2].w[0];
    st32((c.r[19].w[0] + 272u), c.f[4]);
    st32((c.r[19].w[0] + 276u), c.f[3]);
    st32((c.r[19].w[0] + 280u), c.f[1]);
    st32((c.r[19].w[0] + 284u), c.f[0]);
    c.f[4] = ld32((c.r[19].w[0] + 16u));
    c.f[3] = ld32((c.r[19].w[0] + 20u));
    c.f[1] = ld32((c.r[19].w[0] + 24u));
    c.f[0] = ld32((c.r[19].w[0] + 28u));
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[19].w[0] + 48u);
    st32((c.r[19].w[0] + 288u), c.f[4]);
    st32((c.r[19].w[0] + 292u), c.f[3]);
    st32((c.r[19].w[0] + 296u), c.f[1]);
    st32((c.r[19].w[0] + 300u), c.f[0]);
    st32((c.r[19].w[0] + 316u), 0u);
    st32((c.r[19].w[0] + 336u), c.r[3].w[0]);
    c.f[4] = ld32((c.r[16].w[0] + 32u));
    c.f[3] = ld32((c.r[16].w[0] + 36u));
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = ld32((c.r[16].w[0] + 44u));
    st32((c.r[6].w[0]), c.f[4]);
    st32((c.r[6].w[0] + 4u), c.f[3]);
    st32((c.r[6].w[0] + 8u), c.f[1]);
    st32((c.r[6].w[0] + 12u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = ld32((c.r[29].w[0] + 84u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 41;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0988u); st32((c.r[29].w[0] + 84u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001F0988u) [[unlikely]] return; }
L_001F0988:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0990u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000F(c, 20u, depth + 1u); else { c.pc = 0x0013C9E0u; return; } if (c.pc != 0x001F0990u) [[unlikely]] return; }
L_001F0990:
    c.f[12] = ld32((c.r[17].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[12]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001F0AA8; } }
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F09B0u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x001F09B0u) [[unlikely]] return; }
L_001F09B0:
    set32(c.r[4], c.r[19].w[0] + 32u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F09C0u); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x001F09C0u) [[unlikely]] return; }
L_001F09C0:
    set32(c.r[6], c.r[19].w[0] + 32u);
    set32(c.r[7], c.r[29].w[0] + 80u);
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F09D4u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_003C(c, 146u, depth + 1u); else { c.pc = 0x001F22E0u; return; } if (c.pc != 0x001F09D4u) [[unlikely]] return; }
L_001F09D4:
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[19].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F09E4u); set32(c.r[6], c.r[19].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001F09E4u) [[unlikely]] return; }
L_001F09E4:
    set32(c.r[3], c.r[29].w[0] + 104u);
    c.f[2] = ld32((c.r[29].w[0] + 96u));
    c.f[1] = ld32((c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    c.f[0] = c.r[2].w[0];
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001F0AC8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x38D10000u);
    c.r[2].d[0] = c.r[2].d[0] | 46871ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);  if (t) { goto L_001F0A5C; } }
    st32((c.r[29].w[0] + 100u), 0u);
    st32((c.r[29].w[0] + 96u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0A44u); st32((c.r[3].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x001F0A44u) [[unlikely]] return; }
L_001F0A44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0A4Cu); set32(c.r[4], ld32((c.r[18].w[0] + 84u)));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x001F0A4Cu) [[unlikely]] return; }
L_001F0A4C:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0A58u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x001F0A58u) [[unlikely]] return; }
L_001F0A58:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.budget -= 1;
L_001F0A5C:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.f[12] = c.r[2].w[0];
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0A70u); st32((c.r[29].w[0] + 100u), 0u);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x001F0A70u) [[unlikely]] return; }
L_001F0A70:
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    set32(c.r[4], c.r[19].w[0] + 32u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    st32((c.r[19].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 88u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0A8Cu); st32((c.r[19].w[0] + 40u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x001F0A8Cu) [[unlikely]] return; }
L_001F0A8C:
    set32(c.r[6], c.r[19].w[0] + 32u);
    set32(c.r[7], c.r[29].w[0] + 80u);
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0AA0u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_003C(c, 146u, depth + 1u); else { c.pc = 0x001F22E0u; return; } if (c.pc != 0x001F0AA0u) [[unlikely]] return; }
L_001F0AA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[19].w[0] + 316u));  if (t) { goto L_001F0ACC; } }
L_001F0AA8:
    c.f[3] = ld32((c.r[19].w[0] + 48u));
    c.f[2] = ld32((c.r[19].w[0] + 52u));
    c.f[1] = ld32((c.r[19].w[0] + 56u));
    c.f[0] = ld32((c.r[19].w[0] + 60u));
    st32((c.r[19].w[0] + 32u), c.f[3]);
    st32((c.r[19].w[0] + 36u), c.f[2]);
    st32((c.r[19].w[0] + 40u), c.f[1]);
    st32((c.r[19].w[0] + 44u), c.f[0]);
    c.budget -= 8;
L_001F0AC8:
    c.f[1] = ld32((c.r[19].w[0] + 316u));
    c.budget -= 1;
L_001F0ACC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::add(c.f[1], c.f[0]);
    st32((c.r[19].w[0] + 316u), c.f[1]);
    c.f[0] = ld32((c.r[19].w[0] + 336u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001F0B04; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[19].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[19].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_001F0B04:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 515u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[4], c.r[19].w[0] + 16u);  if (t) { goto L_001F0C3C; } }
    c.f[4] = ld32((c.r[16].w[0] + 32u));
    c.f[3] = ld32((c.r[16].w[0] + 36u));
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = ld32((c.r[16].w[0] + 44u));
    set32(c.r[3], c.r[29].w[0] + 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[2] = c.r[2].w[0];
    st32((c.r[3].w[0]), c.f[4]);
    st32((c.r[3].w[0] + 4u), c.f[3]);
    st32((c.r[3].w[0] + 8u), c.f[1]);
    st32((c.r[3].w[0] + 12u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    set32(c.r[2], c.r[29].w[0] + 84u);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[2].w[0]), c.f[0]);
    c.f[3] = ld32((c.r[19].w[0] + 288u));
    c.f[2] = ld32((c.r[19].w[0] + 32u));
    c.f[1] = ld32((c.r[19].w[0] + 336u));
    c.f[0] = ld32((c.r[19].w[0] + 316u));
    c.f[2] = fp::sub(c.f[2], c.f[3]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.f[3], c.f[0]);
    st32((c.r[19].w[0] + 16u), c.f[0]);
    c.f[3] = ld32((c.r[19].w[0] + 292u));
    c.f[2] = ld32((c.r[19].w[0] + 36u));
    c.f[1] = ld32((c.r[19].w[0] + 336u));
    c.f[0] = ld32((c.r[19].w[0] + 316u));
    c.f[2] = fp::sub(c.f[2], c.f[3]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.f[3], c.f[0]);
    st32((c.r[19].w[0] + 20u), c.f[0]);
    c.f[3] = ld32((c.r[19].w[0] + 296u));
    c.f[2] = ld32((c.r[19].w[0] + 40u));
    c.f[1] = ld32((c.r[19].w[0] + 336u));
    c.f[0] = ld32((c.r[19].w[0] + 316u));
    c.f[2] = fp::sub(c.f[2], c.f[3]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.f[3], c.f[0]);
    st32((c.r[19].w[0] + 24u), c.f[0]);
    c.f[3] = ld32((c.r[19].w[0] + 272u));
    c.f[2] = ld32((c.r[29].w[0] + 80u));
    c.f[1] = ld32((c.r[19].w[0] + 336u));
    c.f[0] = ld32((c.r[19].w[0] + 316u));
    c.f[2] = fp::sub(c.f[2], c.f[3]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.f[3], c.f[0]);
    st32((c.r[19].w[0] + 48u), c.f[0]);
    c.f[2] = ld32((c.r[2].w[0]));
    c.f[3] = ld32((c.r[19].w[0] + 276u));
    c.f[1] = ld32((c.r[19].w[0] + 336u));
    c.f[0] = ld32((c.r[19].w[0] + 316u));
    c.f[2] = fp::sub(c.f[2], c.f[3]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.f[3], c.f[0]);
    st32((c.r[19].w[0] + 52u), c.f[0]);
    c.f[3] = ld32((c.r[19].w[0] + 280u));
    c.f[2] = ld32((c.r[29].w[0] + 88u));
    c.f[1] = ld32((c.r[19].w[0] + 336u));
    c.f[0] = ld32((c.r[19].w[0] + 316u));
    c.f[2] = fp::sub(c.f[2], c.f[3]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.f[3], c.f[0]);
    st32((c.r[19].w[0] + 56u), c.f[0]);
    set32(c.r[4], c.r[19].w[0] + 16u);
    c.budget -= 73;
L_001F0C3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0C44u); set32(c.r[5], c.r[19].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x001F0C44u) [[unlikely]] return; }
L_001F0C44:
    st32((c.r[19].w[0] + 320u), c.f[0]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001F0C70:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 360u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { goto L_001F0CB8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 28928u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_001F0CC0; } }
L_001F0CB8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[18], c.r[2].w[0] + 29672u);
    c.budget -= 2;
L_001F0CC0:
    c.f[4] = ld32((c.r[16].w[0] + 32u));
    c.f[3] = ld32((c.r[16].w[0] + 36u));
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = ld32((c.r[16].w[0] + 44u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[2] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 80u);
    st32((c.r[17].w[0] + 48u), c.f[4]);
    st32((c.r[17].w[0] + 52u), c.f[3]);
    st32((c.r[17].w[0] + 56u), c.f[1]);
    st32((c.r[17].w[0] + 60u), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 8u));
    c.f[0] = ld32((c.r[17].w[0] + 52u));
    set32(c.r[5], c.r[17].w[0] + 16u);
    set32(c.r[6], c.r[17].w[0] + 48u);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0D10u); st32((c.r[17].w[0] + 52u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001F0D10u) [[unlikely]] return; }
L_001F0D10:
    set32(c.r[5], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0D1Cu); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_003C(c, 215u, depth + 1u); else { c.pc = 0x001F2E60u; return; } if (c.pc != 0x001F0D1Cu) [[unlikely]] return; }
L_001F0D1C:
    c.f[12] = ld32((c.r[18].w[0]));
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0D2Cu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x001F0D2Cu) [[unlikely]] return; }
L_001F0D2C:
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[17].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0D3Cu); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x001F0D3Cu) [[unlikely]] return; }
L_001F0D3C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001F0D78; } }
    c.f[0] = ld32((c.r[18].w[0]));
    c.f[1] = ld32((c.r[17].w[0] + 320u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0D58u); c.f[12] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 291u, depth + 1u); else { c.pc = 0x0013B4D0u; return; } if (c.pc != 0x001F0D58u) [[unlikely]] return; }
L_001F0D58:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[29].w[0] + 64u);  if (t) { goto L_001F0D9C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001F0D78:
    set32(c.r[6], c.r[29].w[0] + 64u);
    set32(c.r[7], c.r[17].w[0] + 48u);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0D90u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_003C(c, 146u, depth + 1u); else { c.pc = 0x001F22E0u; return; } if (c.pc != 0x001F0D90u) [[unlikely]] return; }
L_001F0D90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));  if (t) { goto L_001F0DDC; } }
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 1;
L_001F0D9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0DA4u);  if (depth < kMaxDepth) unit_0045(c, 192u, depth + 1u); else { c.pc = 0x00217510u; return; } if (c.pc != 0x001F0DA4u) [[unlikely]] return; }
L_001F0DA4:
    set32(c.r[2], c.r[29].w[0] + 84u);
    st32((c.r[2].w[0]), c.f[0]);
    set32(c.r[3], c.r[29].w[0] + 68u);
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001F0DD8; } }
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    st32((c.r[3].w[0]), c.f[0]);
    c.budget -= 3;
L_001F0DD8:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.budget -= 1;
L_001F0DDC:
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 515u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F0DFC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[4], c.r[17].w[0] + 16u);  if (t) { goto L_001F0E5C; } }
L_001F0DFC:
    c.f[1] = ld32((c.r[17].w[0] + 16u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[2] = c.r[2].w[0];
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[3] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[3]);
    st32((c.r[17].w[0] + 16u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 24u));
    c.f[0] = ld32((c.r[29].w[0] + 72u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[3]);
    st32((c.r[17].w[0] + 24u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 20u));
    c.f[0] = ld32((c.r[29].w[0] + 68u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[3]);
    st32((c.r[17].w[0] + 20u), c.f[0]);
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 24;
L_001F0E5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0E64u); set32(c.r[5], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x001F0E64u) [[unlikely]] return; }
L_001F0E64:
    st32((c.r[17].w[0] + 320u), c.f[0]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001F0E80:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[7], c.r[2].w[0] + 28928u);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[0] = c.r[2].w[0];
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    set32(c.r[2], c.r[8].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[16], c.r[7].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8384u)));
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    c.f[20] = ld32((c.r[16].w[0] + 8u));
    fpu_div(c, 12u, c.f[20], c.f[0]);
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0EF8u);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x001F0EF8u) [[unlikely]] return; }
L_001F0EF8:
    st8((c.r[18].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0F08u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_003C(c, 238u, depth + 1u); else { c.pc = 0x001F35A0u; return; } if (c.pc != 0x001F0F08u) [[unlikely]] return; }
L_001F0F08:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 531u));
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], c.r[2].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 640u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F0FCC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 648u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F0FCC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    st8((c.r[18].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    set32(c.r[2], 0u + 4u);
    st32((c.r[18].w[0] + 348u), c.f[0]);
    st32((c.r[18].w[0] + 344u), c.f[20]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 256u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);  if (t) { goto L_001F0F7C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F590000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 292u), c.f[0]);  if (t) { goto L_001F0F90; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.budget -= 1;
L_001F0F7C:
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    st32((c.r[18].w[0] + 292u), c.f[0]);
    c.budget -= 5;
L_001F0F90:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 260u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u - 30720u);  if (t) { goto L_001F0FB4; } }
    set32(c.r[2], 0u + 30720u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001F0FB8; } }
    set32(c.r[2], 0u - 30720u);
    c.budget -= 1;
L_001F0FB4:
    st16((c.r[18].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_001F0FB8:
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[18].w[0] + 320u), c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 324u), c.r[2].w[0]);  if (t) { goto L_001F1074; } }
L_001F0FCC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 2u);  goto L_001F103C; }
    st8((c.r[18].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[3].d[0] = c.r[2].d[0] | 52429ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E990000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    st32((c.r[18].w[0] + 348u), c.f[0]);
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[20]);
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    st32((c.r[18].w[0] + 344u), c.f[1]);
    st32((c.r[18].w[0] + 292u), c.f[0]);
    st16((c.r[18].w[0] + 12u), static_cast<std::uint16_t>(0u));
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    st32((c.r[18].w[0] + 320u), c.f[0]);
    c.budget -= 23;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 324u), c.r[3].w[0]);  if (t) { goto L_001F1074; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_001F103C:
    st8((c.r[18].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    set32(c.r[2], 0u - 32768u);
    st32((c.r[18].w[0] + 348u), c.f[0]);
    st32((c.r[18].w[0] + 344u), 0u);
    st32((c.r[18].w[0] + 292u), c.f[0]);
    st16((c.r[18].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    st32((c.r[18].w[0] + 320u), c.f[0]);
    st32((c.r[18].w[0] + 324u), 0u);
    c.budget -= 14;
L_001F1074:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 260u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[2].d[0] = c.r[2].d[0] & 8191ull;
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[2].d[0] = c.r[3].sd[0] < 4096ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] - 4608u);  if (t) { goto L_001F10AC; } }
    set32(c.r[2], c.r[3].w[0] - 3584u);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);  if (t) { goto L_001F10B4; } }
    set32(c.r[2], c.r[3].w[0] - 4608u);
    c.budget -= 1;
L_001F10AC:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 2;
L_001F10B4:
    set32(c.r[6], c.r[18].w[0] + 48u);
    set32(c.r[7], c.r[18].w[0] + 16u);
    st16((c.r[18].w[0] + 312u), static_cast<std::uint16_t>(c.r[2].w[0]));
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F10CCu); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_003C(c, 140u, depth + 1u); else { c.pc = 0x001F2200u; return; } if (c.pc != 0x001F10CCu) [[unlikely]] return; }
L_001F10CC:
    set32(c.r[6], c.r[18].w[0] + 16u);
    set32(c.r[7], c.r[18].w[0] + 48u);
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F10E0u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_003C(c, 146u, depth + 1u); else { c.pc = 0x001F22E0u; return; } if (c.pc != 0x001F10E0u) [[unlikely]] return; }
L_001F10E0:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001F1100:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[2].w[0] + 28928u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[2].w[0];
    c.f[2] = ld32((c.r[4].w[0] + 324u));
    c.f[0] = ld32((c.r[4].w[0] + 320u));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[2], c.r[6].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.f[2] = fp::sub(c.f[0], c.f[2]);
    set32(c.r[6], c.r[3].w[0] + c.r[2].w[0]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    st32((c.r[4].w[0] + 320u), c.f[2]);
    c.f[0] = ld32((c.r[6].w[0]));
    fpu_div(c, 0u, c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 27;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001F1170; } }
    st32((c.r[17].w[0] + 320u), c.f[0]);
    c.budget -= 1;
L_001F1170:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001F1218; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001F11D8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F119C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[17].w[0] + 48u);  if (t) { goto L_001F125C; } }
L_001F119C:
    c.f[0] = ld32((c.r[17].w[0] + 344u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F6B0000u);
    c.r[2].d[0] = c.r[2].d[0] | 34079ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 344u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 12u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F11D0u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x001F11D0u) [[unlikely]] return; }
L_001F11D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001F1258; } }
L_001F11D8:
    c.f[2] = ld32((c.r[17].w[0] + 344u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[1] = c.r[2].w[0];
    c.f[2] = fp::add(c.f[2], c.f[0]);
    st32((c.r[17].w[0] + 344u), c.f[2]);
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 14;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001F1258; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 344u), c.f[0]);  if (t) { goto L_001F1258; } }
L_001F1218:
    c.f[1] = ld32((c.r[17].w[0] + 344u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 344u), c.f[0]);
    c.f[1] = ld32((c.r[6].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001F124C; } }
    st32((c.r[17].w[0] + 344u), c.f[1]);
    c.budget -= 1;
L_001F124C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + 16u);
    st16((c.r[17].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_001F1258:
    set32(c.r[6], c.r[17].w[0] + 48u);
    c.budget -= 1;
L_001F125C:
    set32(c.r[7], c.r[17].w[0] + 16u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F126Cu); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_003C(c, 140u, depth + 1u); else { c.pc = 0x001F2200u; return; } if (c.pc != 0x001F126Cu) [[unlikely]] return; }
L_001F126C:
    set32(c.r[6], c.r[17].w[0] + 16u);
    set32(c.r[7], c.r[17].w[0] + 48u);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1280u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_003C(c, 146u, depth + 1u); else { c.pc = 0x001F22E0u; return; } if (c.pc != 0x001F1280u) [[unlikely]] return; }
L_001F1280:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F12A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 524u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[19], c.r[4], c.r[0]);  if (t) { goto L_001F14AC; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 640u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F12E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F12E0u);  if (depth < kMaxDepth) unit_003D(c, 24u, depth + 1u); else { c.pc = 0x001F4710u; return; } if (c.pc != 0x001F12E0u) [[unlikely]] return; }
L_001F12E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F12E8u);  if (depth < kMaxDepth) unit_003D(c, 29u, depth + 1u); else { c.pc = 0x001F4B10u; return; } if (c.pc != 0x001F12E8u) [[unlikely]] return; }
L_001F12E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[5], c.r[2].w[0] + 26144u);
    set32(c.r[7], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[4], c.r[2].w[0] - 5568u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], 0u - 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 525u)));
    set32(c.r[6], c.r[2].w[0] << 5);
    set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] << 8);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.f[3] = ld32((c.r[5].w[0] + 32u));
    c.f[2] = ld32((c.r[5].w[0] + 36u));
    c.f[1] = ld32((c.r[5].w[0] + 40u));
    c.f[0] = ld32((c.r[5].w[0] + 44u));
    st32((c.r[4].w[0]), c.f[3]);
    st32((c.r[4].w[0] + 4u), c.f[2]);
    st32((c.r[4].w[0] + 8u), c.f[1]);
    st32((c.r[4].w[0] + 12u), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 26565u)));
    c.budget -= 23;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], c.r[2].w[0] << 5);  if (t) { goto L_001F1394; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 526u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F1390; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 640u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F1390; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 4u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_001F1384; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 5u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 4u);  goto L_001F1390; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_001F1384:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_001F1390; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_001F1390:
    set32(c.r[3], c.r[2].w[0] << 5);
    c.budget -= 1;
L_001F1394:
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[3].w[0] << 8);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[3], c.r[3].w[0] + 26932u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[2].w[0] << 1);  if (t) { goto L_001F1434; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[3], c.r[3].w[0] + 26939u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F1430; } }
    set32(c.r[5], c.r[2].w[0] + 5u);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[4].w[0] << 7);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[4].w[0] - 28448u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[6], c.r[4].w[0] + 80u);
    st32((c.r[3].w[0] + 100u), c.r[6].w[0]);
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], c.r[2].w[0] << 7);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], c.r[2].w[0] - 26528u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[5].w[0] + 96u), c.r[6].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], c.r[3].w[0] + 5u);
    st8((c.r[2].w[0] + 105u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 25;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 104u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001F1470; } }
L_001F1430:
    set32(c.r[3], c.r[2].w[0] << 1);
    c.budget -= 1;
L_001F1434:
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[3].w[0] << 7);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], c.r[3].w[0] - 28448u);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] + 80u);
    st32((c.r[2].w[0] + 100u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st32((c.r[2].w[0] + 96u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 105u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 104u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 15;
L_001F1470:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 28448u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 104u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1498u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0075(c, 244u, depth + 1u); else { c.pc = 0x002D78B0u; return; } if (c.pc != 0x001F1498u) [[unlikely]] return; }
L_001F1498:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 107u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 106u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001F1828; } }
L_001F14AC:
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 95u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F1524; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] - 28368u);
    st32((c.r[5].w[0] + 100u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 28448u);
    st32((c.r[3].w[0] + 96u), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 28448u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 105u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 104u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 104u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1510u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0075(c, 244u, depth + 1u); else { c.pc = 0x002D78B0u; return; } if (c.pc != 0x001F1510u) [[unlikely]] return; }
L_001F1510:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 107u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 106u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001F1828; } }
L_001F1524:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 89u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F16F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1538u);  if (depth < kMaxDepth) unit_003C(c, 236u, depth + 1u); else { c.pc = 0x001F3460u; return; } if (c.pc != 0x001F1538u) [[unlikely]] return; }
L_001F1538:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1540u);  if (depth < kMaxDepth) unit_003D(c, 29u, depth + 1u); else { c.pc = 0x001F4B10u; return; } if (c.pc != 0x001F1540u) [[unlikely]] return; }
L_001F1540:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[5], c.r[2].w[0] + 26144u);
    set32(c.r[7], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[4], c.r[2].w[0] - 5568u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], 0u - 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 525u)));
    set32(c.r[6], c.r[2].w[0] << 5);
    set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] << 8);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.f[3] = ld32((c.r[5].w[0] + 32u));
    c.f[2] = ld32((c.r[5].w[0] + 36u));
    c.f[1] = ld32((c.r[5].w[0] + 40u));
    c.f[0] = ld32((c.r[5].w[0] + 44u));
    st32((c.r[4].w[0]), c.f[3]);
    st32((c.r[4].w[0] + 4u), c.f[2]);
    st32((c.r[4].w[0] + 8u), c.f[1]);
    st32((c.r[4].w[0] + 12u), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 26565u)));
    c.budget -= 23;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], c.r[2].w[0] << 5);  if (t) { goto L_001F15DC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 526u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F15D8; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 4u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_001F15CC; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 5u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 4u);  goto L_001F15D8; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_001F15CC:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_001F15D8; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_001F15D8:
    set32(c.r[3], c.r[2].w[0] << 5);
    c.budget -= 1;
L_001F15DC:
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[3].w[0] << 8);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[3], c.r[3].w[0] + 26932u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[2].w[0] << 1);  if (t) { goto L_001F167C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[3], c.r[3].w[0] + 26939u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F1678; } }
    set32(c.r[5], c.r[2].w[0] + 5u);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[4].w[0] << 7);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[4].w[0] - 28448u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[6], c.r[4].w[0] + 80u);
    st32((c.r[3].w[0] + 100u), c.r[6].w[0]);
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], c.r[2].w[0] << 7);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], c.r[2].w[0] - 26528u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[5].w[0] + 96u), c.r[6].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], c.r[3].w[0] + 5u);
    st8((c.r[2].w[0] + 105u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 25;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 104u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001F16B8; } }
L_001F1678:
    set32(c.r[3], c.r[2].w[0] << 1);
    c.budget -= 1;
L_001F167C:
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[3].w[0] << 7);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], c.r[3].w[0] - 28448u);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] + 80u);
    st32((c.r[2].w[0] + 100u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st32((c.r[2].w[0] + 96u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 105u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 104u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 15;
L_001F16B8:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 28448u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 104u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F16E0u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0075(c, 244u, depth + 1u); else { c.pc = 0x002D78B0u; return; } if (c.pc != 0x001F16E0u) [[unlikely]] return; }
L_001F16E0:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 107u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 106u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001F1828; } }
L_001F16F4:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 330u)));
    set32(c.r[17], 0u + 2u);
    set32(c.r[3], 0u + 1u);
    if (c.r[4].d[0] == 0) c.r[17].d[0] = c.r[3].d[0];
    c.r[1].d[0] = 0ll < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_001F1828; } }
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    c.budget -= 1;
L_001F1714:
    set32(c.r[2], c.r[19].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[2].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[3].w[0] << 8);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[3], c.r[3].w[0] + 26144u);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 788u));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[2].w[0] << 1);  if (t) { goto L_001F17A8; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 795u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F17A4; } }
    set32(c.r[5], c.r[2].w[0] + 5u);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[4].w[0] << 7);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[4].w[0] - 28448u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] + 80u);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    st32((c.r[3].w[0] + 96u), c.r[4].w[0]);
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[3].w[0] << 7);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], c.r[3].w[0] - 28448u);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1920u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + 5u);
    c.budget -= 23;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 104u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001F17E0; } }
L_001F17A4:
    set32(c.r[3], c.r[2].w[0] << 1);
    c.budget -= 1;
L_001F17A8:
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], c.r[3].w[0] << 7);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], c.r[3].w[0] - 28448u);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[3], c.r[4].w[0] + 80u);
    st32((c.r[2].w[0] + 96u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st8((c.r[2].w[0] + 104u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 14;
L_001F17E0:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 28448u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 104u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F180Cu); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0075(c, 244u, depth + 1u); else { c.pc = 0x002D78B0u; return; } if (c.pc != 0x001F180Cu) [[unlikely]] return; }
L_001F180C:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    st8((c.r[3].w[0] + 106u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F1714u | kUnwind; return; } goto L_001F1714; } }
L_001F1828:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001F1850:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40E00000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = ld32((c.r[4].w[0] + 336u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 758u)));
    c.f[0] = c.r[2].w[0];
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.f[2] = ld32((c.r[2].w[0] + 8u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 336u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 32u));
    st32((c.r[4].w[0] + 48u), c.f[0]);
    c.f[1] = ld32((c.r[5].w[0] + 36u));
    c.f[0] = ld32((c.r[4].w[0] + 336u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 40u));
    st32((c.r[4].w[0] + 56u), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 758u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 330u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.f[20] = ld32((c.r[3].w[0] + 4u));
    c.f[21] = ld32((c.r[3].w[0]));
    c.budget -= 41;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[5], c.r[0]);  if (t) { goto L_001F1908; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[0] = c.r[2].w[0];
    c.f[20] = fp::mul(c.f[20], c.f[0]);
    c.f[21] = fp::mul(c.f[21], c.f[0]);
    c.budget -= 5;
L_001F1908:
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[17].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1918u); set32(c.r[6], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001F1918u) [[unlikely]] return; }
L_001F1918:
    st32((c.r[29].w[0] + 68u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 1296u)));
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[2], c.r[2].w[0] + 32767u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1930u); set32(c.r[5], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_003C(c, 215u, depth + 1u); else { c.pc = 0x001F2E60u; return; } if (c.pc != 0x001F1930u) [[unlikely]] return; }
L_001F1930:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1938u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 29u, depth + 1u); else { c.pc = 0x0013CBB0u; return; } if (c.pc != 0x001F1938u) [[unlikely]] return; }
L_001F1938:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001F1950; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 332u), c.f[20]);  if (t) { goto L_001F196C; } }
L_001F1950:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[21]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001F1968; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 332u), c.f[21]);  if (t) { goto L_001F196C; } }
L_001F1968:
    st32((c.r[17].w[0] + 332u), c.f[0]);
    c.budget -= 1;
L_001F196C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001F1990:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[5].w[0] + 1524u)));
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[18], c.r[5], c.r[0]);  if (t) { goto L_001F1C94; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001F19E4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 758u)));
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);  if (t) { goto L_001F19F4; } }
L_001F19E4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 758u)));
    set32(c.r[2], c.r[2].w[0] << 1);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
L_001F19F4:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 30192u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[20] = ld32((c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 30196u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == 0ull; c.f[21] = ld32((c.r[2].w[0]));  if (t) { goto L_001F1A30; } }
    set32(c.r[16], 0u + 4096u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u - 7168u);  if (t) { goto L_001F1A38; } }
L_001F1A30:
    set32(c.r[16], 0u + 12288u);
    set32(c.r[17], 0u - 4608u);
    c.budget -= 2;
L_001F1A38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1A40u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x001F1A40u) [[unlikely]] return; }
L_001F1A40:
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[19].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1A50u); set32(c.r[6], c.r[19].w[0] + 16u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001F1A50u) [[unlikely]] return; }
L_001F1A50:
    set32(c.r[5], ld32((c.r[18].w[0] + 1296u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1A5Cu); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_003C(c, 215u, depth + 1u); else { c.pc = 0x001F2E60u; return; } if (c.pc != 0x001F1A5Cu) [[unlikely]] return; }
L_001F1A5C:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[18].w[0] + 1344u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1A6Cu); set32(c.r[6], c.r[19].w[0] + 16u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001F1A6Cu) [[unlikely]] return; }
L_001F1A6C:
    set32(c.r[5], ld32((c.r[18].w[0] + 1296u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1A78u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_003C(c, 215u, depth + 1u); else { c.pc = 0x001F2E60u; return; } if (c.pc != 0x001F1A78u) [[unlikely]] return; }
L_001F1A78:
    set32(c.r[2], ld32((c.r[18].w[0] + 1296u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1A84u); set32(c.r[4], 0u - c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x001F1A84u) [[unlikely]] return; }
L_001F1A84:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1A90u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x001F1A90u) [[unlikely]] return; }
L_001F1A90:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1A9Cu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x001F1A9Cu) [[unlikely]] return; }
L_001F1A9C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBE4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    set32(c.r[5], c.r[18].w[0] + 1344u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[6], c.r[29].w[0] + 96u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1AB8u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 174u, depth + 1u); else { c.pc = 0x0026E870u; return; } if (c.pc != 0x001F1AB8u) [[unlikely]] return; }
L_001F1AB8:
    c.f[0] = ld32((c.r[29].w[0] + 100u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001F1B8C; } }
    c.f[1] = fp::sub(c.f[0], c.f[20]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D990000u);
    c.r[3].d[0] = c.r[2].d[0] | 39322ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[3] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[20]);
    fpu_div(c, 2u, c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[3]));
    c.budget -= 14;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001F1B08; } }
    c.f[2] = c.f[3];
    c.budget -= 1;
L_001F1B08:
    c.f[1] = ld32((c.r[29].w[0] + 120u));
    c.f[0] = ld32((c.r[29].w[0] + 136u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001F1B58; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 10u)));
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.f[1] = c.r[2].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1B50u); c.f[12] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x001F1B50u) [[unlikely]] return; }
L_001F1B50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001F1C58; } }
L_001F1B58:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 10u)));
    set32(c.r[2], 0u - 4096u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.f[1] = c.r[2].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1B84u); c.f[12] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x001F1B84u) [[unlikely]] return; }
L_001F1B84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001F1C58; } }
L_001F1B8C:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[21]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001F1C58; } }
    c.f[1] = fp::sub(c.f[21], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBD990000u);
    c.r[3].d[0] = c.r[2].d[0] | 39322ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[2] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[21], c.f[0]);
    fpu_div(c, 3u, c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[2]));
    c.budget -= 14;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001F1BD8; } }
    c.f[3] = c.f[2];
    c.budget -= 1;
L_001F1BD8:
    c.f[1] = ld32((c.r[29].w[0] + 120u));
    c.f[0] = ld32((c.r[29].w[0] + 136u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001F1C28; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 10u)));
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.f[1] = c.r[2].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::mul(c.f[3], c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1C20u); c.f[12] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x001F1C20u) [[unlikely]] return; }
L_001F1C20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001F1C58; } }
L_001F1C28:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 10u)));
    set32(c.r[2], 0u + 4096u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.f[1] = c.r[2].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::mul(c.f[1], c.f[3]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1C54u); c.f[12] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x001F1C54u) [[unlikely]] return; }
L_001F1C54:
    st16((c.r[19].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_001F1C58:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 10u)));
    c.r[3].d[0] = c.r[16].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001F1C74; } }
    st16((c.r[19].w[0] + 10u), static_cast<std::uint16_t>(c.r[16].w[0]));
    c.budget -= 1;
L_001F1C74:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 10u)));
    c.r[3].d[0] = c.r[17].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001F1C9C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 10u), static_cast<std::uint16_t>(c.r[17].w[0]));  if (t) { goto L_001F1C9C; } }
L_001F1C94:
    set32(c.r[3], 0u - 1536u);
    st16((c.r[19].w[0] + 10u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001F1C9C:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_001F1CC0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    mmi::paddub(c.r[20], c.r[4], c.r[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 736u)));
    mmi::paddub(c.r[18], c.r[6], c.r[0]);
    c.budget -= 14;
    { const bool t = c.r[4].d[0] == 0ull; mmi::paddub(c.r[19], c.r[5], c.r[0]);  if (t) { goto L_001F1D10; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 758u)));
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);  if (t) { goto L_001F1D20; } }
L_001F1D10:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 758u)));
    set32(c.r[2], c.r[2].w[0] << 1);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
L_001F1D20:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 30192u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[20] = ld32((c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 30196u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == 0ull; c.f[21] = ld32((c.r[2].w[0]));  if (t) { goto L_001F1D5C; } }
    set32(c.r[16], 0u + 4096u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u - 7168u);  if (t) { goto L_001F1D64; } }
L_001F1D5C:
    set32(c.r[16], 0u + 12288u);
    set32(c.r[17], 0u - 4608u);
    c.budget -= 2;
L_001F1D64:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[20].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1D74u); set32(c.r[6], c.r[20].w[0] + 16u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001F1D74u) [[unlikely]] return; }
L_001F1D74:
    set32(c.r[5], ld32((c.r[19].w[0] + 1296u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1D80u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_003C(c, 215u, depth + 1u); else { c.pc = 0x001F2E60u; return; } if (c.pc != 0x001F1D80u) [[unlikely]] return; }
L_001F1D80:
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[6], c.r[20].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1D90u); mmi::paddub(c.r[5], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001F1D90u) [[unlikely]] return; }
L_001F1D90:
    set32(c.r[5], ld32((c.r[19].w[0] + 1296u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1D9Cu); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_003C(c, 215u, depth + 1u); else { c.pc = 0x001F2E60u; return; } if (c.pc != 0x001F1D9Cu) [[unlikely]] return; }
L_001F1D9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1DA4u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x001F1DA4u) [[unlikely]] return; }
L_001F1DA4:
    set32(c.r[2], ld32((c.r[19].w[0] + 1296u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1DB0u); set32(c.r[4], 0u - c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x001F1DB0u) [[unlikely]] return; }
L_001F1DB0:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1DBCu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x001F1DBCu) [[unlikely]] return; }
L_001F1DBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1DC4u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x001F1DC4u) [[unlikely]] return; }
L_001F1DC4:
    set32(c.r[18], c.r[29].w[0] + 152u);
    c.f[13] = ld32((c.r[18].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1DD4u); c.f[12] = ld32((c.r[29].w[0] + 144u));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x001F1DD4u) [[unlikely]] return; }
L_001F1DD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1DDCu); set32(c.r[4], 0u - c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x001F1DDCu) [[unlikely]] return; }
L_001F1DDC:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1DE8u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x001F1DE8u) [[unlikely]] return; }
L_001F1DE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1DF0u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x001F1DF0u) [[unlikely]] return; }
L_001F1DF0:
    c.f[13] = ld32((c.r[20].w[0] + 20u));
    c.f[14] = ld32((c.r[20].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1E00u); c.f[12] = ld32((c.r[20].w[0] + 16u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x001F1E00u) [[unlikely]] return; }
L_001F1E00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1E08u); set32(c.r[4], ld32((c.r[19].w[0] + 1296u)));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x001F1E08u) [[unlikely]] return; }
L_001F1E08:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1E14u); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x001F1E14u) [[unlikely]] return; }
L_001F1E14:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBE4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], c.r[29].w[0] + 160u);
    set32(c.r[6], c.r[29].w[0] + 112u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1E30u); mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 174u, depth + 1u); else { c.pc = 0x0026E870u; return; } if (c.pc != 0x001F1E30u) [[unlikely]] return; }
L_001F1E30:
    c.f[0] = ld32((c.r[29].w[0] + 116u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001F1F04; } }
    c.f[1] = fp::sub(c.f[0], c.f[20]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D990000u);
    c.r[3].d[0] = c.r[2].d[0] | 39322ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[3] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[20]);
    fpu_div(c, 2u, c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[3]));
    c.budget -= 14;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001F1E80; } }
    c.f[2] = c.f[3];
    c.budget -= 1;
L_001F1E80:
    c.f[0] = ld32((c.r[18].w[0]));
    c.f[1] = ld32((c.r[29].w[0] + 136u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001F1ED0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 10u)));
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.f[1] = c.r[2].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1EC8u); c.f[12] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x001F1EC8u) [[unlikely]] return; }
L_001F1EC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001F1FD0; } }
L_001F1ED0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 10u)));
    set32(c.r[2], 0u - 4096u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.f[1] = c.r[2].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1EFCu); c.f[12] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x001F1EFCu) [[unlikely]] return; }
L_001F1EFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001F1FD0; } }
L_001F1F04:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[21]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001F1FD0; } }
    c.f[1] = fp::sub(c.f[21], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBD990000u);
    c.r[3].d[0] = c.r[2].d[0] | 39322ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[2] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[21], c.f[0]);
    fpu_div(c, 3u, c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[2]));
    c.budget -= 14;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001F1F50; } }
    c.f[3] = c.f[2];
    c.budget -= 1;
L_001F1F50:
    c.f[0] = ld32((c.r[18].w[0]));
    c.f[1] = ld32((c.r[29].w[0] + 136u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001F1FA0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 10u)));
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.f[1] = c.r[2].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::mul(c.f[3], c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1F98u); c.f[12] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x001F1F98u) [[unlikely]] return; }
L_001F1F98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001F1FD0; } }
L_001F1FA0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 10u)));
    set32(c.r[2], 0u + 4096u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.f[1] = c.r[2].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::mul(c.f[1], c.f[3]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1FCCu); c.f[12] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x001F1FCCu) [[unlikely]] return; }
L_001F1FCC:
    st16((c.r[20].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_001F1FD0:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 10u)));
    c.r[3].d[0] = c.r[16].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001F1FEC; } }
    st16((c.r[20].w[0] + 10u), static_cast<std::uint16_t>(c.r[16].w[0]));
    c.budget -= 1;
L_001F1FEC:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 10u)));
    c.r[3].d[0] = c.r[17].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001F2008; } }
    st16((c.r[20].w[0] + 10u), static_cast<std::uint16_t>(c.r[17].w[0]));
    c.budget -= 1;
L_001F2008:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_001F2030:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[7], c.r[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8386u)));
    c.f[0] = ld32((c.r[5].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 27184u);
    set32(c.r[3], c.r[7].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[6].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    c.f[1] = ld32((c.r[5].w[0] + 36u));
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    mmi::paddub(c.r[17], c.r[6], c.r[0]);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[6].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 40u));
    st32((c.r[6].w[0] + 8u), c.f[0]);
    set32(c.r[6], c.r[18].w[0] + 1328u);
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F20A8u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001F20A8u) [[unlikely]] return; }
L_001F20A8:
    set32(c.r[20], c.r[29].w[0] + 104u);
    c.f[1] = ld32((c.r[29].w[0] + 96u));
    c.f[0] = ld32((c.r[20].w[0]));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F20C0u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x001F20C0u) [[unlikely]] return; }
L_001F20C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001F2110; } }
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 100u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0]));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0]), c.f[0]);  if (t) { goto L_001F2134; } }
L_001F2110:
    st32((c.r[29].w[0] + 100u), 0u);
    st32((c.r[29].w[0] + 96u), 0u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2120u); st32((c.r[20].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x001F2120u) [[unlikely]] return; }
L_001F2120:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2128u); set32(c.r[4], ld32((c.r[18].w[0] + 84u)));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x001F2128u) [[unlikely]] return; }
L_001F2128:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2134u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x001F2134u) [[unlikely]] return; }
L_001F2134:
    c.f[12] = ld32((c.r[19].w[0] + 328u));
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2144u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x001F2144u) [[unlikely]] return; }
L_001F2144:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2150u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x001F2150u) [[unlikely]] return; }
L_001F2150:
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F215Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 25u, depth + 1u); else { c.pc = 0x0013CB10u; return; } if (c.pc != 0x001F215Cu) [[unlikely]] return; }
L_001F215C:
    st32((c.r[29].w[0] + 120u), 0u);
    st32((c.r[29].w[0] + 112u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 116u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2174u); st32((c.r[29].w[0] + 100u), 0u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x001F2174u) [[unlikely]] return; }
L_001F2174:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F217Cu); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 12u)));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x001F217Cu) [[unlikely]] return; }
L_001F217C:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2188u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x001F2188u) [[unlikely]] return; }
L_001F2188:
    set32(c.r[5], c.r[29].w[0] + 112u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2198u); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 34u, depth + 1u); else { c.pc = 0x0013CCC0u; return; } if (c.pc != 0x001F2198u) [[unlikely]] return; }
L_001F2198:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F21A0u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x001F21A0u) [[unlikely]] return; }
L_001F21A0:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 10u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F21ACu); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0013C000u; return; } if (c.pc != 0x001F21ACu) [[unlikely]] return; }
L_001F21AC:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F21B8u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x001F21B8u) [[unlikely]] return; }
L_001F21B8:
    c.f[12] = ld32((c.r[19].w[0] + 320u));
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F21C8u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x001F21C8u) [[unlikely]] return; }
L_001F21C8:
    set32(c.r[6], c.r[29].w[0] + 96u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F21D8u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x001F21D8u) [[unlikely]] return; }
L_001F21D8:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001F2200:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[0] = ld32((c.r[5].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    mmi::paddub(c.r[17], c.r[7], c.r[0]);
    st32((c.r[7].w[0]), c.f[0]);
    st32((c.r[6].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 36u));
    st32((c.r[7].w[0] + 4u), c.f[0]);
    st32((c.r[6].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 40u));
    st32((c.r[7].w[0] + 8u), c.f[0]);
    st32((c.r[6].w[0] + 8u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 348u));
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[6].w[0] + 4u), c.f[0]);
    c.f[2] = ld32((c.r[4].w[0] + 292u));
    c.f[1] = ld32((c.r[4].w[0] + 344u));
    c.f[0] = ld32((c.r[7].w[0] + 4u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[7].w[0] + 4u), c.f[0]);
    st32((c.r[29].w[0] + 68u), 0u);
    st32((c.r[29].w[0] + 64u), 0u);
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2280u); st32((c.r[29].w[0] + 72u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x001F2280u) [[unlikely]] return; }
L_001F2280:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 312u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 84u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2298u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x001F2298u) [[unlikely]] return; }
L_001F2298:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F22A4u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x001F22A4u) [[unlikely]] return; }
L_001F22A4:
    c.f[12] = ld32((c.r[16].w[0] + 320u));
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F22B4u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x001F22B4u) [[unlikely]] return; }
L_001F22B4:
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F22C0u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x001F22C0u) [[unlikely]] return; }
L_001F22C0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001F22E0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 208u));
    mmi::paddub(c.r[20], c.r[5], c.r[0]);
    mmi::paddub(c.r[19], c.r[6], c.r[0]);
    mmi::paddub(c.r[18], c.r[7], c.r[0]);
    mmi::paddub(c.r[21], c.r[4], c.r[0]);
    c.budget -= 14;
L_001F2318:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_001F2338; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 640u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F2338; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001F2718; } }
L_001F2338:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 1u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[20].w[0] + 32u);  if (t) { goto L_001F2358; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 812u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 512ull;  if (t) { goto L_001F2360; } }
    set32(c.r[4], c.r[20].w[0] + 32u);
    c.budget -= 1;
L_001F2358:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2360u);  if (depth < kMaxDepth) unit_0075(c, 244u, depth + 1u); else { c.pc = 0x002D78B0u; return; } if (c.pc != 0x001F2360u) [[unlikely]] return; }
L_001F2360:
    c.f[3] = ld32((c.r[19].w[0]));
    c.f[2] = ld32((c.r[19].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0] + 8u));
    mmi::paddub(c.r[22], c.r[2], c.r[0]);
    c.f[0] = ld32((c.r[19].w[0] + 12u));
    set32(c.r[2], c.r[29].w[0] + 144u);
    set32(c.r[17], c.r[29].w[0] + 148u);
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    c.f[1] = ld32((c.r[21].w[0] + 4u));
    c.f[0] = ld32((c.r[17].w[0]));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 16;
    { const bool t = c.r[22].d[0] == 0ull; st32((c.r[17].w[0]), c.f[0]);  if (t) { goto L_001F23D4; } }
    c.f[1] = ld32((c.r[19].w[0] + 4u));
    c.f[2] = ld32((c.r[21].w[0] + 4u));
    c.f[0] = 0u;
    c.f[1] = fp::add(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001F23D4; } }
    c.f[0] = c.f[2] ^ fp::kSign;
    set32(c.r[16], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 4u), c.f[0]);  if (t) { goto L_001F23F8; } }
L_001F23D4:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] != 0ull;  if (t) { goto L_001F23F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F23E4u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0075(c, 244u, depth + 1u); else { c.pc = 0x002D78B0u; return; } if (c.pc != 0x001F23E4u) [[unlikely]] return; }
L_001F23E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F23F8; } }
    c.f[0] = ld32((c.r[21].w[0] + 4u));
    set32(c.r[16], 0u + 1u);
    st32((c.r[19].w[0] + 4u), c.f[0]);
    c.budget -= 3;
L_001F23F8:
    c.f[3] = ld32((c.r[21].w[0] + 48u));
    c.f[2] = ld32((c.r[21].w[0] + 52u));
    c.f[1] = ld32((c.r[21].w[0] + 56u));
    c.f[0] = ld32((c.r[21].w[0] + 60u));
    set32(c.r[4], c.r[29].w[0] + 144u);
    mmi::paddub(c.r[5], c.r[19], c.r[0]);
    mmi::paddub(c.r[6], c.r[4], c.r[0]);
    st32((c.r[4].w[0]), c.f[3]);
    st32((c.r[4].w[0] + 4u), c.f[2]);
    st32((c.r[4].w[0] + 8u), c.f[1]);
    st32((c.r[4].w[0] + 12u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 8u)));
    c.f[0] = ld32((c.r[17].w[0]));
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2444u); st32((c.r[17].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0046(c, 159u, depth + 1u); else { c.pc = 0x0021B030u; return; } if (c.pc != 0x001F2444u) [[unlikely]] return; }
L_001F2444:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F24B0; } }
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    mmi::paddub(c.r[5], c.r[19], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F245Cu); mmi::paddub(c.r[6], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0046(c, 159u, depth + 1u); else { c.pc = 0x0021B030u; return; } if (c.pc != 0x001F245Cu) [[unlikely]] return; }
L_001F245C:
    set32(c.r[4], c.r[29].w[0] + 128u);
    mmi::paddub(c.r[5], c.r[18], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F246Cu); mmi::paddub(c.r[6], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001F246Cu) [[unlikely]] return; }
L_001F246C:
    set32(c.r[5], ld32((c.r[20].w[0] + 1296u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2478u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_003C(c, 215u, depth + 1u); else { c.pc = 0x001F2E60u; return; } if (c.pc != 0x001F2478u) [[unlikely]] return; }
L_001F2478:
    c.f[0] = ld32((c.r[21].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 128u);
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    fpu_div(c, 12u, c.f[0], c.f[1]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F24A0u);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x001F24A0u) [[unlikely]] return; }
L_001F24A0:
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F24ACu); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x001F24ACu) [[unlikely]] return; }
L_001F24AC:
    set32(c.r[16], 0u + 1u);
    c.budget -= 1;
L_001F24B0:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 256u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[29].w[0] + 128u);  if (t) { goto L_001F2584; } }
    c.f[3] = ld32((c.r[21].w[0] + 48u));
    c.f[2] = ld32((c.r[21].w[0] + 52u));
    c.f[1] = ld32((c.r[21].w[0] + 56u));
    c.f[0] = ld32((c.r[21].w[0] + 60u));
    set32(c.r[4], c.r[29].w[0] + 144u);
    mmi::paddub(c.r[5], c.r[19], c.r[0]);
    mmi::paddub(c.r[6], c.r[4], c.r[0]);
    st32((c.r[4].w[0]), c.f[3]);
    st32((c.r[4].w[0] + 4u), c.f[2]);
    st32((c.r[4].w[0] + 8u), c.f[1]);
    st32((c.r[4].w[0] + 12u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 8u)));
    c.f[0] = ld32((c.r[17].w[0]));
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2510u); st32((c.r[17].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_002D(c, 110u, depth + 1u); else { c.pc = 0x001B58A0u; return; } if (c.pc != 0x001F2510u) [[unlikely]] return; }
L_001F2510:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001F2580; } }
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    mmi::paddub(c.r[5], c.r[19], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F252Cu); mmi::paddub(c.r[6], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_002D(c, 110u, depth + 1u); else { c.pc = 0x001B58A0u; return; } if (c.pc != 0x001F252Cu) [[unlikely]] return; }
L_001F252C:
    set32(c.r[4], c.r[29].w[0] + 128u);
    mmi::paddub(c.r[5], c.r[18], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F253Cu); mmi::paddub(c.r[6], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001F253Cu) [[unlikely]] return; }
L_001F253C:
    set32(c.r[5], ld32((c.r[20].w[0] + 1296u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2548u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_003C(c, 215u, depth + 1u); else { c.pc = 0x001F2E60u; return; } if (c.pc != 0x001F2548u) [[unlikely]] return; }
L_001F2548:
    c.f[0] = ld32((c.r[21].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 128u);
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    fpu_div(c, 12u, c.f[0], c.f[1]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2570u);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x001F2570u) [[unlikely]] return; }
L_001F2570:
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F257Cu); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x001F257Cu) [[unlikely]] return; }
L_001F257C:
    set32(c.r[16], 0u + 1u);
    c.budget -= 1;
L_001F2580:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 1;
L_001F2584:
    mmi::paddub(c.r[5], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2590u); mmi::paddub(c.r[6], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001F2590u) [[unlikely]] return; }
L_001F2590:
    st32((c.r[29].w[0] + 132u), 0u);
    set32(c.r[5], ld32((c.r[20].w[0] + 1296u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F25A0u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_003C(c, 215u, depth + 1u); else { c.pc = 0x001F2E60u; return; } if (c.pc != 0x001F25A0u) [[unlikely]] return; }
L_001F25A0:
    c.f[12] = ld32((c.r[21].w[0] + 4u));
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F25B0u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x001F25B0u) [[unlikely]] return; }
L_001F25B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F25B8u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x001F25B8u) [[unlikely]] return; }
L_001F25B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F25C0u); set32(c.r[4], 0u + 16384u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x001F25C0u) [[unlikely]] return; }
L_001F25C0:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F25CCu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x001F25CCu) [[unlikely]] return; }
L_001F25CC:
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[6], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F25DCu); mmi::paddub(c.r[5], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x001F25DCu) [[unlikely]] return; }
L_001F25DC:
    set32(c.r[4], c.r[29].w[0] + 144u);
    mmi::paddub(c.r[5], c.r[19], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F25ECu); mmi::paddub(c.r[6], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0046(c, 159u, depth + 1u); else { c.pc = 0x0021B030u; return; } if (c.pc != 0x001F25ECu) [[unlikely]] return; }
L_001F25EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 144u);  if (t) { goto L_001F260C; } }
    set32(c.r[5], c.r[29].w[0] + 144u);
    set32(c.r[6], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2604u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001F2604u) [[unlikely]] return; }
L_001F2604:
    set32(c.r[16], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 2;
L_001F260C:
    set32(c.r[6], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2618u); mmi::paddub(c.r[5], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001F2618u) [[unlikely]] return; }
L_001F2618:
    set32(c.r[4], c.r[29].w[0] + 144u);
    mmi::paddub(c.r[5], c.r[19], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2628u); mmi::paddub(c.r[6], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0046(c, 159u, depth + 1u); else { c.pc = 0x0021B030u; return; } if (c.pc != 0x001F2628u) [[unlikely]] return; }
L_001F2628:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (t) { goto L_001F2648; } }
    set32(c.r[5], c.r[29].w[0] + 144u);
    set32(c.r[6], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2640u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x001F2640u) [[unlikely]] return; }
L_001F2640:
    set32(c.r[16], 0u + 1u);
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 2;
L_001F2648:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2650u);  if (depth < kMaxDepth) unit_0045(c, 192u, depth + 1u); else { c.pc = 0x00217510u; return; } if (c.pc != 0x001F2650u) [[unlikely]] return; }
L_001F2650:
    st32((c.r[17].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 4u));
    c.f[2] = ld32((c.r[21].w[0] + 4u));
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001F2684; } }
    c.f[0] = ld32((c.r[17].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != 0ull; st32((c.r[19].w[0] + 4u), c.f[0]);  if (t) { goto L_001F2684; } }
    set32(c.r[16], 0u + 2u);
    c.budget -= 1;
L_001F2684:
    c.f[3] = ld32((c.r[19].w[0]));
    c.f[2] = ld32((c.r[19].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0] + 8u));
    c.f[0] = ld32((c.r[19].w[0] + 12u));
    set32(c.r[2], c.r[29].w[0] + 144u);
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    c.f[1] = ld32((c.r[21].w[0] + 4u));
    c.f[0] = ld32((c.r[17].w[0]));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 14;
    { const bool t = c.r[22].d[0] == 0ull; st32((c.r[17].w[0]), c.f[0]);  if (t) { goto L_001F26F0; } }
    c.f[1] = ld32((c.r[19].w[0] + 4u));
    c.f[2] = ld32((c.r[21].w[0] + 4u));
    c.f[0] = 0u;
    c.f[1] = fp::add(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001F26F0; } }
    c.f[0] = c.f[2] ^ fp::kSign;
    set32(c.r[16], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 4u), c.f[0]);  if (t) { goto L_001F2714; } }
L_001F26F0:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] != 0ull; mmi::paddub(c.r[2], c.r[16], c.r[0]);  if (t) { goto L_001F2718; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2700u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0075(c, 244u, depth + 1u); else { c.pc = 0x002D78B0u; return; } if (c.pc != 0x001F2700u) [[unlikely]] return; }
L_001F2700:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F2714; } }
    c.f[0] = ld32((c.r[21].w[0] + 4u));
    set32(c.r[16], 0u + 1u);
    st32((c.r[19].w[0] + 4u), c.f[0]);
    c.budget -= 3;
L_001F2714:
    mmi::paddub(c.r[2], c.r[16], c.r[0]);
    c.budget -= 1;
L_001F2718:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_001F2740:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 208u));
    mmi::paddub(c.r[20], c.r[5], c.r[0]);
    mmi::paddub(c.r[19], c.r[6], c.r[0]);
    mmi::paddub(c.r[22], c.r[7], c.r[0]);
    mmi::paddub(c.r[21], c.r[4], c.r[0]);
    c.budget -= 17;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_001F278C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001F2AD0; } }
L_001F278C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 1u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[20].w[0] + 32u);  if (t) { goto L_001F27AC; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 812u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 512ull;  if (t) { goto L_001F27B4; } }
    set32(c.r[4], c.r[20].w[0] + 32u);
    c.budget -= 1;
L_001F27AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F27B4u);  if (depth < kMaxDepth) unit_0075(c, 244u, depth + 1u); else { c.pc = 0x002D78B0u; return; } if (c.pc != 0x001F27B4u) [[unlikely]] return; }
L_001F27B4:
    mmi::paddub(c.r[17], c.r[2], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F27C0u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0045(c, 192u, depth + 1u); else { c.pc = 0x00217510u; return; } if (c.pc != 0x001F27C0u) [[unlikely]] return; }
L_001F27C0:
    set32(c.r[18], c.r[29].w[0] + 148u);
    st32((c.r[18].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 4u));
    c.f[2] = ld32((c.r[21].w[0] + 4u));
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001F27F4; } }
    c.f[0] = ld32((c.r[18].w[0]));
    set32(c.r[16], 0u + 2u);
    c.f[0] = fp::add(c.f[0], c.f[2]);
    st32((c.r[19].w[0] + 4u), c.f[0]);
    c.budget -= 4;
L_001F27F4:
    c.f[3] = ld32((c.r[19].w[0]));
    c.f[2] = ld32((c.r[19].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0] + 8u));
    c.f[0] = ld32((c.r[19].w[0] + 12u));
    set32(c.r[2], c.r[29].w[0] + 160u);
    set32(c.r[23], c.r[29].w[0] + 164u);
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    c.f[1] = ld32((c.r[21].w[0] + 4u));
    c.f[0] = ld32((c.r[23].w[0]));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 15;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[23].w[0]), c.f[0]);  if (t) { goto L_001F2864; } }
    c.f[1] = ld32((c.r[19].w[0] + 4u));
    c.f[2] = ld32((c.r[21].w[0] + 4u));
    c.f[0] = 0u;
    c.f[1] = fp::add(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001F2864; } }
    c.f[0] = c.f[2] ^ fp::kSign;
    set32(c.r[16], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 4u), c.f[0]);  if (t) { goto L_001F2888; } }
L_001F2864:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[6], c.r[29].w[0] + 144u);  if (t) { goto L_001F288C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2874u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0075(c, 244u, depth + 1u); else { c.pc = 0x002D78B0u; return; } if (c.pc != 0x001F2874u) [[unlikely]] return; }
L_001F2874:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F2888; } }
    c.f[0] = ld32((c.r[21].w[0] + 4u));
    set32(c.r[16], 0u + 1u);
    st32((c.r[19].w[0] + 4u), c.f[0]);
    c.budget -= 3;
L_001F2888:
    set32(c.r[6], c.r[29].w[0] + 144u);
    c.budget -= 1;
L_001F288C:
    mmi::paddub(c.r[4], c.r[22], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2898u); mmi::paddub(c.r[5], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0046(c, 159u, depth + 1u); else { c.pc = 0x0021B030u; return; } if (c.pc != 0x001F2898u) [[unlikely]] return; }
L_001F2898:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F28F0; } }
    c.f[0] = ld32((c.r[21].w[0] + 32u));
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    st32((c.r[19].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 36u));
    st32((c.r[19].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 40u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F28C0u); st32((c.r[19].w[0] + 8u), c.f[0]);  if (depth < kMaxDepth) unit_0045(c, 192u, depth + 1u); else { c.pc = 0x00217510u; return; } if (c.pc != 0x001F28C0u) [[unlikely]] return; }
L_001F28C0:
    st32((c.r[18].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 4u));
    c.f[2] = ld32((c.r[21].w[0] + 4u));
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[16], 0u + 1u);  if (t) { goto L_001F28F0; } }
    c.f[0] = ld32((c.r[18].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    st32((c.r[19].w[0] + 4u), c.f[0]);
    set32(c.r[16], 0u + 1u);
    c.budget -= 4;
L_001F28F0:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 256u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[29].w[0] + 144u);  if (t) { goto L_001F297C; } }
    c.f[3] = ld32((c.r[21].w[0] + 48u));
    c.f[2] = ld32((c.r[21].w[0] + 52u));
    c.f[1] = ld32((c.r[21].w[0] + 56u));
    c.f[0] = ld32((c.r[21].w[0] + 60u));
    set32(c.r[4], c.r[29].w[0] + 160u);
    mmi::paddub(c.r[5], c.r[19], c.r[0]);
    mmi::paddub(c.r[6], c.r[4], c.r[0]);
    st32((c.r[4].w[0]), c.f[3]);
    st32((c.r[4].w[0] + 4u), c.f[2]);
    st32((c.r[4].w[0] + 8u), c.f[1]);
    st32((c.r[4].w[0] + 12u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 8u)));
    c.f[0] = ld32((c.r[23].w[0]));
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2950u); st32((c.r[23].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_002D(c, 110u, depth + 1u); else { c.pc = 0x001B58A0u; return; } if (c.pc != 0x001F2950u) [[unlikely]] return; }
L_001F2950:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001F2978; } }
    c.f[0] = ld32((c.r[21].w[0] + 32u));
    mmi::paddub(c.r[16], c.r[3], c.r[0]);
    st32((c.r[19].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 36u));
    st32((c.r[19].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 40u));
    st32((c.r[19].w[0] + 8u), c.f[0]);
    c.budget -= 7;
L_001F2978:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 1;
L_001F297C:
    mmi::paddub(c.r[5], c.r[22], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2988u); mmi::paddub(c.r[6], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001F2988u) [[unlikely]] return; }
L_001F2988:
    st32((c.r[18].w[0]), 0u);
    set32(c.r[5], ld32((c.r[20].w[0] + 1296u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2998u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_003C(c, 215u, depth + 1u); else { c.pc = 0x001F2E60u; return; } if (c.pc != 0x001F2998u) [[unlikely]] return; }
L_001F2998:
    c.f[12] = ld32((c.r[21].w[0] + 4u));
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F29A8u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x001F29A8u) [[unlikely]] return; }
L_001F29A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F29B0u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x001F29B0u) [[unlikely]] return; }
L_001F29B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F29B8u); set32(c.r[4], 0u + 16384u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x001F29B8u) [[unlikely]] return; }
L_001F29B8:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F29C4u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x001F29C4u) [[unlikely]] return; }
L_001F29C4:
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[6], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F29D4u); mmi::paddub(c.r[5], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x001F29D4u) [[unlikely]] return; }
L_001F29D4:
    set32(c.r[4], c.r[29].w[0] + 160u);
    mmi::paddub(c.r[5], c.r[19], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F29E4u); mmi::paddub(c.r[6], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0046(c, 159u, depth + 1u); else { c.pc = 0x0021B030u; return; } if (c.pc != 0x001F29E4u) [[unlikely]] return; }
L_001F29E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 160u);  if (t) { goto L_001F2A04; } }
    set32(c.r[5], c.r[29].w[0] + 160u);
    set32(c.r[6], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F29FCu); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001F29FCu) [[unlikely]] return; }
L_001F29FC:
    set32(c.r[16], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 2;
L_001F2A04:
    set32(c.r[6], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2A10u); mmi::paddub(c.r[5], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001F2A10u) [[unlikely]] return; }
L_001F2A10:
    set32(c.r[4], c.r[29].w[0] + 160u);
    mmi::paddub(c.r[5], c.r[19], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2A20u); mmi::paddub(c.r[6], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0046(c, 159u, depth + 1u); else { c.pc = 0x0021B030u; return; } if (c.pc != 0x001F2A20u) [[unlikely]] return; }
L_001F2A20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F2A3C; } }
    set32(c.r[5], c.r[29].w[0] + 160u);
    set32(c.r[6], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2A38u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x001F2A38u) [[unlikely]] return; }
L_001F2A38:
    set32(c.r[16], 0u + 1u);
    c.budget -= 1;
L_001F2A3C:
    c.f[3] = ld32((c.r[19].w[0]));
    c.f[2] = ld32((c.r[19].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0] + 8u));
    c.f[0] = ld32((c.r[19].w[0] + 12u));
    set32(c.r[2], c.r[29].w[0] + 144u);
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    c.f[1] = ld32((c.r[21].w[0] + 4u));
    c.f[0] = ld32((c.r[18].w[0]));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 14;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[18].w[0]), c.f[0]);  if (t) { goto L_001F2AA8; } }
    c.f[1] = ld32((c.r[19].w[0] + 4u));
    c.f[2] = ld32((c.r[21].w[0] + 4u));
    c.f[0] = 0u;
    c.f[1] = fp::add(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001F2AA8; } }
    c.f[0] = c.f[2] ^ fp::kSign;
    set32(c.r[16], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 4u), c.f[0]);  if (t) { goto L_001F2ACC; } }
L_001F2AA8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; mmi::paddub(c.r[2], c.r[16], c.r[0]);  if (t) { goto L_001F2AD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2AB8u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0075(c, 244u, depth + 1u); else { c.pc = 0x002D78B0u; return; } if (c.pc != 0x001F2AB8u) [[unlikely]] return; }
L_001F2AB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F2ACC; } }
    c.f[0] = ld32((c.r[21].w[0] + 4u));
    set32(c.r[16], 0u + 1u);
    st32((c.r[19].w[0] + 4u), c.f[0]);
    c.budget -= 3;
L_001F2ACC:
    mmi::paddub(c.r[2], c.r[16], c.r[0]);
    c.budget -= 1;
L_001F2AD0:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_001F2B00:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 208u));
    mmi::paddub(c.r[20], c.r[5], c.r[0]);
    mmi::paddub(c.r[19], c.r[6], c.r[0]);
    mmi::paddub(c.r[18], c.r[7], c.r[0]);
    mmi::paddub(c.r[21], c.r[4], c.r[0]);
    c.budget -= 17;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_001F2B4C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001F2E2C; } }
L_001F2B4C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 1u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[20].w[0] + 32u);  if (t) { goto L_001F2B6C; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 812u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 512ull;  if (t) { goto L_001F2B74; } }
    set32(c.r[4], c.r[20].w[0] + 32u);
    c.budget -= 1;
L_001F2B6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2B74u);  if (depth < kMaxDepth) unit_0075(c, 244u, depth + 1u); else { c.pc = 0x002D78B0u; return; } if (c.pc != 0x001F2B74u) [[unlikely]] return; }
L_001F2B74:
    mmi::paddub(c.r[17], c.r[2], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2B80u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0045(c, 192u, depth + 1u); else { c.pc = 0x00217510u; return; } if (c.pc != 0x001F2B80u) [[unlikely]] return; }
L_001F2B80:
    set32(c.r[22], c.r[29].w[0] + 148u);
    st32((c.r[22].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 4u));
    c.f[2] = ld32((c.r[21].w[0] + 4u));
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001F2BB4; } }
    c.f[0] = ld32((c.r[22].w[0]));
    c.r[16].d[0] = c.r[16].d[0] | 2ull;
    c.f[0] = fp::add(c.f[0], c.f[2]);
    st32((c.r[19].w[0] + 4u), c.f[0]);
    c.budget -= 4;
L_001F2BB4:
    c.f[3] = ld32((c.r[19].w[0]));
    c.f[2] = ld32((c.r[19].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0] + 8u));
    c.f[0] = ld32((c.r[19].w[0] + 12u));
    set32(c.r[2], c.r[29].w[0] + 160u);
    set32(c.r[23], c.r[29].w[0] + 164u);
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    c.f[1] = ld32((c.r[21].w[0] + 4u));
    c.f[0] = ld32((c.r[23].w[0]));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 15;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[23].w[0]), c.f[0]);  if (t) { goto L_001F2C24; } }
    c.f[1] = ld32((c.r[19].w[0] + 4u));
    c.f[2] = ld32((c.r[21].w[0] + 4u));
    c.f[0] = 0u;
    c.f[1] = fp::add(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001F2C24; } }
    c.f[0] = c.f[2] ^ fp::kSign;
    st32((c.r[19].w[0] + 4u), c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[16].d[0] | 4ull;  if (t) { goto L_001F2C48; } }
L_001F2C24:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[6], c.r[29].w[0] + 144u);  if (t) { goto L_001F2C4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2C34u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0075(c, 244u, depth + 1u); else { c.pc = 0x002D78B0u; return; } if (c.pc != 0x001F2C34u) [[unlikely]] return; }
L_001F2C34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F2C48; } }
    c.f[0] = ld32((c.r[21].w[0] + 4u));
    c.r[16].d[0] = c.r[16].d[0] | 4ull;
    st32((c.r[19].w[0] + 4u), c.f[0]);
    c.budget -= 3;
L_001F2C48:
    set32(c.r[6], c.r[29].w[0] + 144u);
    c.budget -= 1;
L_001F2C4C:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2C58u); mmi::paddub(c.r[5], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0046(c, 159u, depth + 1u); else { c.pc = 0x0021B030u; return; } if (c.pc != 0x001F2C58u) [[unlikely]] return; }
L_001F2C58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F2C64; } }
    c.r[16].d[0] = c.r[16].d[0] | 2ull;
    c.budget -= 1;
L_001F2C64:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 256u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[29].w[0] + 144u);  if (t) { goto L_001F2CD8; } }
    c.f[3] = ld32((c.r[21].w[0] + 48u));
    c.f[2] = ld32((c.r[21].w[0] + 52u));
    c.f[1] = ld32((c.r[21].w[0] + 56u));
    c.f[0] = ld32((c.r[21].w[0] + 60u));
    set32(c.r[4], c.r[29].w[0] + 160u);
    mmi::paddub(c.r[5], c.r[19], c.r[0]);
    mmi::paddub(c.r[6], c.r[4], c.r[0]);
    st32((c.r[4].w[0]), c.f[3]);
    st32((c.r[4].w[0] + 4u), c.f[2]);
    st32((c.r[4].w[0] + 8u), c.f[1]);
    st32((c.r[4].w[0] + 12u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 8u)));
    c.f[0] = ld32((c.r[23].w[0]));
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2CC4u); st32((c.r[23].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_002D(c, 110u, depth + 1u); else { c.pc = 0x001B58A0u; return; } if (c.pc != 0x001F2CC4u) [[unlikely]] return; }
L_001F2CC4:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001F2CD4; } }
    c.r[16].d[0] = c.r[16].d[0] | 2ull;
    c.budget -= 1;
L_001F2CD4:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 1;
L_001F2CD8:
    mmi::paddub(c.r[5], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2CE4u); mmi::paddub(c.r[6], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001F2CE4u) [[unlikely]] return; }
L_001F2CE4:
    st32((c.r[22].w[0]), 0u);
    set32(c.r[5], ld32((c.r[20].w[0] + 1296u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2CF4u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_003C(c, 215u, depth + 1u); else { c.pc = 0x001F2E60u; return; } if (c.pc != 0x001F2CF4u) [[unlikely]] return; }
L_001F2CF4:
    c.f[12] = ld32((c.r[21].w[0] + 4u));
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2D04u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x001F2D04u) [[unlikely]] return; }
L_001F2D04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2D0Cu);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x001F2D0Cu) [[unlikely]] return; }
L_001F2D0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2D14u); set32(c.r[4], 0u + 16384u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x001F2D14u) [[unlikely]] return; }
L_001F2D14:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2D20u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x001F2D20u) [[unlikely]] return; }
L_001F2D20:
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[6], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2D30u); mmi::paddub(c.r[5], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x001F2D30u) [[unlikely]] return; }
L_001F2D30:
    set32(c.r[4], c.r[29].w[0] + 160u);
    mmi::paddub(c.r[5], c.r[19], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2D40u); mmi::paddub(c.r[6], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0046(c, 159u, depth + 1u); else { c.pc = 0x0021B030u; return; } if (c.pc != 0x001F2D40u) [[unlikely]] return; }
L_001F2D40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 160u);  if (t) { goto L_001F2D60; } }
    set32(c.r[5], c.r[29].w[0] + 160u);
    set32(c.r[6], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2D58u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001F2D58u) [[unlikely]] return; }
L_001F2D58:
    c.r[16].d[0] = c.r[16].d[0] | 1ull;
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 2;
L_001F2D60:
    set32(c.r[6], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2D6Cu); mmi::paddub(c.r[5], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001F2D6Cu) [[unlikely]] return; }
L_001F2D6C:
    set32(c.r[4], c.r[29].w[0] + 160u);
    mmi::paddub(c.r[5], c.r[19], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2D7Cu); mmi::paddub(c.r[6], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0046(c, 159u, depth + 1u); else { c.pc = 0x0021B030u; return; } if (c.pc != 0x001F2D7Cu) [[unlikely]] return; }
L_001F2D7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F2D98; } }
    set32(c.r[5], c.r[29].w[0] + 160u);
    set32(c.r[6], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2D94u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x001F2D94u) [[unlikely]] return; }
L_001F2D94:
    c.r[16].d[0] = c.r[16].d[0] | 1ull;
    c.budget -= 1;
L_001F2D98:
    c.f[3] = ld32((c.r[19].w[0]));
    c.f[2] = ld32((c.r[19].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0] + 8u));
    c.f[0] = ld32((c.r[19].w[0] + 12u));
    set32(c.r[2], c.r[29].w[0] + 144u);
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    c.f[1] = ld32((c.r[21].w[0] + 4u));
    c.f[0] = ld32((c.r[22].w[0]));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 14;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[22].w[0]), c.f[0]);  if (t) { goto L_001F2E04; } }
    c.f[1] = ld32((c.r[19].w[0] + 4u));
    c.f[2] = ld32((c.r[21].w[0] + 4u));
    c.f[0] = 0u;
    c.f[1] = fp::add(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001F2E04; } }
    c.f[0] = c.f[2] ^ fp::kSign;
    st32((c.r[19].w[0] + 4u), c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[16].d[0] | 4ull;  if (t) { goto L_001F2E28; } }
L_001F2E04:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; mmi::paddub(c.r[2], c.r[16], c.r[0]);  if (t) { goto L_001F2E2C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2E14u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0075(c, 244u, depth + 1u); else { c.pc = 0x002D78B0u; return; } if (c.pc != 0x001F2E14u) [[unlikely]] return; }
L_001F2E14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F2E28; } }
    c.f[0] = ld32((c.r[21].w[0] + 4u));
    c.r[16].d[0] = c.r[16].d[0] | 4ull;
    st32((c.r[19].w[0] + 4u), c.f[0]);
    c.budget -= 3;
L_001F2E28:
    mmi::paddub(c.r[2], c.r[16], c.r[0]);
    c.budget -= 1;
L_001F2E2C:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_001F2E60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.f[3] = 0u;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[1] = ld32((c.r[4].w[0]));
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    c.f[2] = ld32((c.r[4].w[0] + 8u));
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.facc = fp::add(c.f[1], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[3]));
    c.budget -= 17;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { goto L_001F2EAC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001F2EE4; } }
L_001F2EAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2EB4u);  if (depth < kMaxDepth) unit_000E(c, 321u, depth + 1u); else { c.pc = 0x0013BA40u; return; } if (c.pc != 0x001F2EB4u) [[unlikely]] return; }
L_001F2EB4:
    st32((c.r[17].w[0] + 4u), 0u);
    st32((c.r[17].w[0]), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2ECCu); st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x001F2ECCu) [[unlikely]] return; }
L_001F2ECC:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2ED8u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x001F2ED8u) [[unlikely]] return; }
L_001F2ED8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2EE0u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x001F2EE0u) [[unlikely]] return; }
L_001F2EE0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001F2EE4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F2F00:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 758u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 330u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.f[20] = ld32((c.r[3].w[0]));
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull; c.f[0] = ld32((c.r[3].w[0] + 4u));  if (t) { goto L_001F2F50; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[20] = fp::mul(c.f[20], c.f[1]);
    c.budget -= 5;
L_001F2F50:
    c.f[1] = ld32((c.r[16].w[0] + 332u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[20]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001F2F6C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 48u);  if (t) { goto L_001F2F94; } }
L_001F2F6C:
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001F2F88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = c.f[0];  if (t) { goto L_001F2F90; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_001F2F88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_001F306C; } }
L_001F2F90:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 1;
L_001F2F94:
    set32(c.r[5], c.r[16].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2FA0u); set32(c.r[6], c.r[16].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001F2FA0u) [[unlikely]] return; }
L_001F2FA0:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.f[12] = c.f[20];
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2FB4u); st32((c.r[29].w[0] + 52u), 0u);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x001F2FB4u) [[unlikely]] return; }
L_001F2FB4:
    c.f[1] = ld32((c.r[16].w[0] + 48u));
    c.f[0] = ld32((c.r[29].w[0] + 48u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[2] = c.r[2].w[0];
    set32(c.r[3], c.r[29].w[0] + 56u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 56u));
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[3] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[3].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 16u));
    c.f[0] = ld32((c.r[29].w[0] + 48u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[3]);
    st32((c.r[16].w[0] + 16u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 24u));
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[3]);
    st32((c.r[16].w[0] + 24u), c.f[0]);
    c.f[3] = ld32((c.r[16].w[0] + 16u));
    c.f[2] = ld32((c.r[16].w[0] + 48u));
    c.f[1] = ld32((c.r[16].w[0] + 24u));
    c.f[0] = ld32((c.r[16].w[0] + 56u));
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.budget -= 34;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F303Cu); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x001F303Cu) [[unlikely]] return; }
L_001F303C:
    st32((c.r[16].w[0] + 332u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    c.f[13] = ld32((c.r[16].w[0] + 332u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3054u); c.f[12] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x001F3054u) [[unlikely]] return; }
L_001F3054:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[2], 0u - c.r[2].w[0]);
    st16((c.r[16].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 6;
L_001F306C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001F3080:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 812u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[5], c.r[0]);  if (t) { goto L_001F30AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001F314C; } }
L_001F30AC:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 788u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001F30CC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 739u)));
    set32(c.r[2], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F30D4; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_001F30CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_001F3150; } }
L_001F30D4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8425u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001F30FC; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 708u));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_001F3118; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001F314C; } }
L_001F30FC:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 708u));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F3114; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001F314C; } }
L_001F3114:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_001F3118:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3120u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_003C(c, 284u, depth + 1u); else { c.pc = 0x001F3CC0u; return; } if (c.pc != 0x001F3120u) [[unlikely]] return; }
L_001F3120:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[2], 0u + 5u);  if (t) { goto L_001F3138; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001F314C; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 1;
L_001F3138:
    st8((c.r[16].w[0] + 739u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[17].w[0] + 2u), static_cast<std::uint16_t>(0u));
    st8((c.r[16].w[0] + 792u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 348u), static_cast<std::uint8_t>(0u));
    mmi::paddub(c.r[2], c.r[3], c.r[0]);
    c.budget -= 5;
L_001F314C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_001F3150:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F3160:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 739u)));
    set32(c.r[2], 0u + 9u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[2].d[0]; c.r[3].d[0] = c.r[5].d[0] << 56;  if (t) { goto L_001F3188; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 789u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F3184; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001F31D8; } }
L_001F3184:
    c.r[3].d[0] = c.r[5].d[0] << 56;
    c.budget -= 1;
L_001F3188:
    set32(c.r[2], 0u + 9u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001F31AC; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { goto L_001F31AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001F31D8; } }
L_001F31AC:
    st8((c.r[4].w[0] + 739u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], c.r[2].w[0] - 28448u);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 7);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st16((c.r[3].w[0] + 2u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 740u), static_cast<std::uint8_t>(0u));
    c.budget -= 11;
L_001F31D8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F31E0:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], c.r[2].w[0] - 28448u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 28239u);
    set32(c.r[7], c.r[8].w[0] + 5u);
    set32(c.r[6], c.r[7].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 7);
    set32(c.r[6], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[8].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 17;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001F3240; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 788u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F323C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F3248; } }
L_001F323C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001F3240:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F3270; } }
L_001F3248:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001F3260; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001F3270; } }
L_001F3260:
    st8((c.r[4].w[0] + 788u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 795u), static_cast<std::uint8_t>(0u));
    st8((c.r[6].w[0] + 1u), static_cast<std::uint8_t>(0u));
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 4;
L_001F3270:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F3280:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 788u)));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    st8((c.r[4].w[0] + 788u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_001F32D4; } }
    c.r[5].d[0] = ld8((c.r[4].w[0] + 788u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], c.r[3].w[0] - 26527u);
    set32(c.r[6], 0u + 3u);
    c.r[5].d[0] = c.r[5].d[0] | 64ull;
    st8((c.r[4].w[0] + 788u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[4].w[0] + 795u));
    c.r[5].d[0] = c.r[5].d[0] | 64ull;
    st8((c.r[4].w[0] + 795u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8384u)));
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 7);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 15;
L_001F32D4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F32E0:
    c.r[5].d[0] = ld8((c.r[4].w[0] + 788u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], c.r[3].w[0] - 26527u);
    set32(c.r[6], 0u + 5u);
    c.r[5].d[0] = c.r[5].d[0] | 128ull;
    st8((c.r[4].w[0] + 788u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[4].w[0] + 795u));
    c.r[5].d[0] = c.r[5].d[0] | 128ull;
    st8((c.r[4].w[0] + 795u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8384u)));
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 7);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));  c.pc = t; return; }
L_001F3320:
    c.r[5].d[0] = ld8((c.r[4].w[0] + 788u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], c.r[3].w[0] - 26527u);
    set32(c.r[6], 0u + 7u);
    c.r[5].d[0] = c.r[5].d[0] | 128ull;
    st8((c.r[4].w[0] + 788u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[4].w[0] + 795u));
    c.r[5].d[0] = c.r[5].d[0] | 128ull;
    st8((c.r[4].w[0] + 795u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8384u)));
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 7);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));  c.pc = t; return; }
L_001F3360:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 358u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F33A8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 359u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[4].w[0] + 359u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F33A8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 358u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 358u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[4].w[0] + 364u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F33A8u); set32(c.r[5], 0u + 25u);  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x00197670u; return; } if (c.pc != 0x001F33A8u) [[unlikely]] return; }
L_001F33A8:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001F33C0:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[4], 0u + 180u);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    st8((c.r[3].w[0] + 525u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[3].w[0] + 526u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    st16((c.r[3].w[0] + 528u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[4], c.r[3].w[0] + 26144u);
    c.budget -= 10;
L_001F33E8:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[7], c.r[3].w[0] + 525u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 525u)));
    set32(c.r[5], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = c.r[5].sd[0] >= 0; c.r[3].d[0] = c.r[5].d[0] & 3ull;  if (t) { goto L_001F340C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F340C; } }
    set32(c.r[3], c.r[3].w[0] - 4u);
    c.budget -= 1;
L_001F340C:
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 525u)));
    set32(c.r[3], c.r[5].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[5], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 10;
    if (c.r[3].d[0] == 0ull) { set32(c.r[6], c.r[6].w[0] + 1u);  goto L_001F344C; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8386u)));
    c.r[1].d[0] = c.r[3].sd[0] < 22ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001F3458; } }
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 2;
L_001F344C:
    c.r[3].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F33E8u | kUnwind; return; } goto L_001F33E8; } }
L_001F3458:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F3460:
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 528u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 528u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 8;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_001F3590; } }
    mmi::paddub(c.r[3], c.r[0], c.r[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[7], c.r[4].w[0] + 26144u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[9], c.r[4].w[0] + 26144u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 7;
L_001F349C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F34FC; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 525u)));
    set32(c.r[10], c.r[4].w[0] + 525u);
    set32(c.r[4], c.r[8].w[0] << 5);
    set32(c.r[4], c.r[4].w[0] + c.r[8].w[0]);
    set32(c.r[4], c.r[4].w[0] << 8);
    set32(c.r[4], c.r[9].w[0] + c.r[4].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1520u)));
    c.budget -= 10;
    if (c.r[11].d[0] == 0ull) { set32(c.r[3], c.r[3].w[0] + 1u);  goto L_001F356C; }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0] + 1u)));
    c.r[1].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001F3568; } }
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0] + 8384u)));
    c.budget -= 3;
    { const bool t = c.r[8].sd[0] >= 0; c.r[4].d[0] = c.r[8].d[0] & 3ull;  if (t) { goto L_001F34F4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001F34F4; } }
    set32(c.r[4], c.r[4].w[0] - 4u);
    c.budget -= 1;
L_001F34F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[10].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_001F3540; } }
L_001F34FC:
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[10], c.r[4].w[0] + 525u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 525u)));
    set32(c.r[8], c.r[4].w[0] + 1u);
    c.budget -= 6;
    { const bool t = c.r[8].sd[0] >= 0; c.r[4].d[0] = c.r[8].d[0] & 3ull;  if (t) { goto L_001F3520; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001F3520; } }
    set32(c.r[4], c.r[4].w[0] - 4u);
    c.budget -= 1;
L_001F3520:
    st8((c.r[10].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 525u)));
    set32(c.r[4], c.r[8].w[0] << 5);
    set32(c.r[4], c.r[4].w[0] + c.r[8].w[0]);
    set32(c.r[4], c.r[4].w[0] << 8);
    set32(c.r[11], c.r[7].w[0] + c.r[4].w[0]);
    c.budget -= 8;
L_001F3540:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001F3568; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[6].d[0];  if (t) { goto L_001F3568; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0] + 5u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_001F3578; } }
    c.budget -= 1;
L_001F3568:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_001F356C:
    c.r[4].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F349Cu | kUnwind; return; } goto L_001F349C; } }
L_001F3578:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[5], 0u + 180u);
    set32(c.r[4], 0u + 1u);
    st16((c.r[3].w[0] + 528u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[3].w[0] + 527u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 6;
L_001F3590:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F35A0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8391u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_001F35D0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 111u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F35CC; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 524u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F35D8; } }
L_001F35CC:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_001F35D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 208u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001F35DC; } }
L_001F35D8:
    st8((c.r[4].w[0] + 208u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_001F35DC:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 208u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 209u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_001F35F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBE4C0000u);
    mmi::paddub(c.r[16], c.r[6], c.r[0]);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3614u); set32(c.r[6], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_005B(c, 174u, depth + 1u); else { c.pc = 0x0026E870u; return; } if (c.pc != 0x001F3614u) [[unlikely]] return; }
L_001F3614:
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[1] = ld32((c.r[29].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { goto L_001F3634; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001F368C; } }
L_001F3634:
    c.f[0] = ld32((c.r[16].w[0]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { goto L_001F3650; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001F368C; } }
L_001F3650:
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[1] = ld32((c.r[29].w[0] + 32u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { goto L_001F3670; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001F368C; } }
L_001F3670:
    c.f[0] = ld32((c.r[16].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_001F3688; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_001F3688:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 1;
L_001F368C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F36A0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[16], c.r[2].w[0] + 26144u);
    mmi::paddub(c.r[19], c.r[5], c.r[0]);
    set32(c.r[5], c.r[16].w[0] + 32u);
    mmi::paddub(c.r[20], c.r[4], c.r[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F36D8u); mmi::paddub(c.r[17], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x001F36D8u) [[unlikely]] return; }
L_001F36D8:
    set32(c.r[16], c.r[16].w[0] + 8448u);
    set32(c.r[18], 0u + 1u);
    st32((c.r[19].w[0]), c.f[0]);
    c.budget -= 3;
L_001F36E4:
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F36F0u); mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x001F36F0u) [[unlikely]] return; }
L_001F36F0:
    c.f[1] = ld32((c.r[19].w[0]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_001F3714; }
    st32((c.r[19].w[0]), c.f[0]);
    mmi::paddub(c.r[17], c.r[16], c.r[0]);
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 4;
L_001F3714:
    c.r[2].d[0] = c.r[18].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 8448u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F36E4u | kUnwind; return; } goto L_001F36E4; } }
    mmi::paddub(c.r[2], c.r[17], c.r[0]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001F3750:
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
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.f[20] = ld32((c.r[1].w[0] - 21936u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43EB0000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[22], c.r[28].w[0] - 29824u);
    set32(c.r[18], c.r[29].w[0] + 180u);
    c.f[22] = fp::add(c.f[0], c.f[20]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.f[21] = ld32((c.r[1].w[0] - 21928u));
    mmi::paddub(c.r[21], c.r[4], c.r[0]);
    mmi::paddub(c.r[20], c.r[5], c.r[0]);
    mmi::paddub(c.r[30], c.r[0], c.r[0]);
    mmi::paddub(c.r[23], c.r[0], c.r[0]);
    c.f[23] = fp::add(c.f[0], c.f[21]);
    c.budget -= 29;
L_001F37C4:
    c.f[3] = ld32((c.r[20].w[0]));
    c.f[2] = ld32((c.r[20].w[0] + 4u));
    c.f[1] = ld32((c.r[20].w[0] + 8u));
    c.f[0] = ld32((c.r[20].w[0] + 12u));
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[5], c.r[29].w[0] + 208u);
    set32(c.r[2], c.r[29].w[0] + 216u);
    st32((c.r[4].w[0]), c.f[3]);
    st32((c.r[4].w[0] + 4u), c.f[2]);
    st32((c.r[4].w[0] + 8u), c.f[1]);
    st32((c.r[4].w[0] + 12u), c.f[0]);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[19], c.r[29].w[0] + 212u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 208u), 0u);
    mmi::paddub(c.r[6], c.r[5], c.r[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F380Cu); st32((c.r[19].w[0]), c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 34u, depth + 1u); else { c.pc = 0x0013CCC0u; return; } if (c.pc != 0x001F380Cu) [[unlikely]] return; }
L_001F380C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3814u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x001F3814u) [[unlikely]] return; }
L_001F3814:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3820u); set32(c.r[4], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0013C000u; return; } if (c.pc != 0x001F3820u) [[unlikely]] return; }
L_001F3820:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F382Cu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x001F382Cu) [[unlikely]] return; }
L_001F382C:
    c.f[12] = ld32((c.r[21].w[0] + 320u));
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F383Cu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x001F383Cu) [[unlikely]] return; }
L_001F383C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[17], c.r[2].w[0] + 30416u);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 3;
L_001F3848:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3850u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x001F3850u) [[unlikely]] return; }
L_001F3850:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3858u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x001F3858u) [[unlikely]] return; }
L_001F3858:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3864u); set32(c.r[5], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x001F3864u) [[unlikely]] return; }
L_001F3864:
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[21].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3874u); set32(c.r[6], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x001F3874u) [[unlikely]] return; }
L_001F3874:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 515u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F3910; } }
    c.f[1] = ld32((c.r[29].w[0] + 176u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[22]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x43EB0000u);  if (t) { goto L_001F38A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 176u), c.f[22]);  if (t) { goto L_001F38C8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43EB0000u);
    c.budget -= 1;
L_001F38A8:
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[20], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], c.r[29].w[0] + 184u);  if (t) { goto L_001F38CC; } }
    st32((c.r[29].w[0] + 176u), c.f[0]);
    c.budget -= 1;
L_001F38C8:
    set32(c.r[3], c.r[29].w[0] + 184u);
    c.budget -= 1;
L_001F38CC:
    c.f[1] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[23]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x43EB0000u);  if (t) { goto L_001F38EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.f[23]);  if (t) { goto L_001F3910; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43EB0000u);
    c.budget -= 1;
L_001F38EC:
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[21], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
L_001F3900:
    c.budget -= 2;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001F3910; } }
    st32((c.r[3].w[0]), c.f[0]);
    c.budget -= 2;
L_001F3910:
    c.f[12] = ld32((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F391Cu); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 273u, depth + 1u); else { c.pc = 0x002D7D90u; return; } if (c.pc != 0x001F391Cu) [[unlikely]] return; }
L_001F391C:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3928u); set32(c.r[5], c.r[29].w[0] + 252u);  if (depth < kMaxDepth) unit_003C(c, 241u, depth + 1u); else { c.pc = 0x001F36A0u; return; } if (c.pc != 0x001F3928u) [[unlikely]] return; }
L_001F3928:
    set32(c.r[3], ld32((c.r[21].w[0] + 360u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[21].w[0] + 48u);  if (t) { goto L_001F3964; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 364u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001F3960; } }
    c.f[1] = ld32((c.r[29].w[0] + 252u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_001F3AC0; }
L_001F3960:
    set32(c.r[4], c.r[21].w[0] + 48u);
    c.budget -= 1;
L_001F3964:
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3970u); set32(c.r[6], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_0046(c, 159u, depth + 1u); else { c.pc = 0x0021B030u; return; } if (c.pc != 0x001F3970u) [[unlikely]] return; }
L_001F3970:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F3ABC; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 256u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[29].w[0] + 208u);  if (t) { goto L_001F39AC; } }
    set32(c.r[4], c.r[21].w[0] + 48u);
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F399Cu); set32(c.r[6], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_002D(c, 110u, depth + 1u); else { c.pc = 0x001B58A0u; return; } if (c.pc != 0x001F399Cu) [[unlikely]] return; }
L_001F399C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001F3ABC; } }
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 1;
L_001F39AC:
    set32(c.r[5], c.r[21].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F39B8u); set32(c.r[6], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001F39B8u) [[unlikely]] return; }
L_001F39B8:
    st32((c.r[19].w[0]), 0u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 12u)));
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[2], c.r[2].w[0] + 32767u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F39D0u); set32(c.r[5], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_003C(c, 215u, depth + 1u); else { c.pc = 0x001F2E60u; return; } if (c.pc != 0x001F39D0u) [[unlikely]] return; }
L_001F39D0:
    c.f[12] = ld32((c.r[21].w[0] + 4u));
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F39E0u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x001F39E0u) [[unlikely]] return; }
L_001F39E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F39E8u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x001F39E8u) [[unlikely]] return; }
L_001F39E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F39F0u); set32(c.r[4], 0u + 16384u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x001F39F0u) [[unlikely]] return; }
L_001F39F0:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F39FCu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x001F39FCu) [[unlikely]] return; }
L_001F39FC:
    set32(c.r[4], c.r[29].w[0] + 224u);
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3A0Cu); set32(c.r[6], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x001F3A0Cu) [[unlikely]] return; }
L_001F3A0C:
    set32(c.r[4], c.r[29].w[0] + 224u);
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3A1Cu); mmi::paddub(c.r[6], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0046(c, 159u, depth + 1u); else { c.pc = 0x0021B030u; return; } if (c.pc != 0x001F3A1Cu) [[unlikely]] return; }
L_001F3A1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F3ABC; } }
    set32(c.r[4], c.r[29].w[0] + 224u);
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3A34u); set32(c.r[6], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001F3A34u) [[unlikely]] return; }
L_001F3A34:
    set32(c.r[4], c.r[29].w[0] + 224u);
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3A44u); mmi::paddub(c.r[6], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0046(c, 159u, depth + 1u); else { c.pc = 0x0021B030u; return; } if (c.pc != 0x001F3A44u) [[unlikely]] return; }
L_001F3A44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F3ABC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3A54u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0045(c, 192u, depth + 1u); else { c.pc = 0x00217510u; return; } if (c.pc != 0x001F3A54u) [[unlikely]] return; }
L_001F3A54:
    c.f[2] = ld32((c.r[18].w[0]));
    c.f[1] = ld32((c.r[21].w[0] + 4u));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001F3ABC; } }
    set32(c.r[2], c.r[29].w[0] + 176u);
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    set32(c.r[30], 0u + 1u);
    st32((c.r[21].w[0] + 32u), c.f[3]);
    st32((c.r[21].w[0] + 36u), c.f[2]);
    st32((c.r[21].w[0] + 40u), c.f[1]);
    st32((c.r[21].w[0] + 44u), c.f[0]);
    c.f[3] = ld32((c.r[21].w[0] + 32u));
    c.f[2] = ld32((c.r[21].w[0] + 36u));
    c.f[1] = ld32((c.r[21].w[0] + 40u));
    c.f[0] = ld32((c.r[21].w[0] + 44u));
    st32((c.r[21].w[0] + 16u), c.f[3]);
    st32((c.r[21].w[0] + 20u), c.f[2]);
    st32((c.r[21].w[0] + 24u), c.f[1]);
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 28u), c.f[0]);  if (t) { goto L_001F3AD0; } }
L_001F3ABC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001F3AC0:
    c.r[2].d[0] = c.r[16].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F3848u | kUnwind; return; } goto L_001F3848; } }
    c.budget -= 1;
L_001F3AD0:
    c.budget -= 2;
    if (c.r[30].d[0] == 0ull) { set32(c.r[23], c.r[23].w[0] + 1u);  goto L_001F3AE4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[30], c.r[0]);  if (t) { goto L_001F3C78; } }
    set32(c.r[23], c.r[23].w[0] + 1u);
    c.budget -= 1;
L_001F3AE4:
    c.r[2].d[0] = c.r[23].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[22], c.r[22].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F37C4u | kUnwind; return; } goto L_001F37C4; } }
    c.f[3] = ld32((c.r[20].w[0]));
    c.f[2] = ld32((c.r[20].w[0] + 4u));
    c.f[1] = ld32((c.r[20].w[0] + 8u));
    c.f[0] = ld32((c.r[20].w[0] + 12u));
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[5], c.r[29].w[0] + 208u);
    set32(c.r[2], c.r[29].w[0] + 216u);
    st32((c.r[4].w[0]), c.f[3]);
    st32((c.r[4].w[0] + 4u), c.f[2]);
    st32((c.r[4].w[0] + 8u), c.f[1]);
    st32((c.r[4].w[0] + 12u), c.f[0]);
    st32((c.r[2].w[0]), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 208u), 0u);
    mmi::paddub(c.r[6], c.r[5], c.r[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3B34u); st32((c.r[19].w[0]), c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 34u, depth + 1u); else { c.pc = 0x0013CCC0u; return; } if (c.pc != 0x001F3B34u) [[unlikely]] return; }
L_001F3B34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3B3Cu);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x001F3B3Cu) [[unlikely]] return; }
L_001F3B3C:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3B48u); set32(c.r[5], 0u + 2048u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0013C000u; return; } if (c.pc != 0x001F3B48u) [[unlikely]] return; }
L_001F3B48:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3B54u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x001F3B54u) [[unlikely]] return; }
L_001F3B54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3B5Cu);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x001F3B5Cu) [[unlikely]] return; }
L_001F3B5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3B64u); set32(c.r[4], 0u + 16384u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x001F3B64u) [[unlikely]] return; }
L_001F3B64:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3B70u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x001F3B70u) [[unlikely]] return; }
L_001F3B70:
    c.f[12] = ld32((c.r[21].w[0] + 320u));
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3B80u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x001F3B80u) [[unlikely]] return; }
L_001F3B80:
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[21].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3B90u); set32(c.r[6], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x001F3B90u) [[unlikely]] return; }
L_001F3B90:
    c.f[1] = ld32((c.r[29].w[0] + 176u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[22]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x43EB0000u);  if (t) { goto L_001F3BB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 176u), c.f[22]);  if (t) { goto L_001F3BD0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43EB0000u);
    c.budget -= 1;
L_001F3BB0:
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[20], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], c.r[29].w[0] + 184u);  if (t) { goto L_001F3BD4; } }
    st32((c.r[29].w[0] + 176u), c.f[0]);
    c.budget -= 1;
L_001F3BD0:
    set32(c.r[3], c.r[29].w[0] + 184u);
    c.budget -= 1;
L_001F3BD4:
    c.f[1] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[23]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x43EB0000u);  if (t) { goto L_001F3BF4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.f[23]);  if (t) { goto L_001F3C14; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43EB0000u);
    c.budget -= 1;
L_001F3BF4:
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[21], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001F3C14; } }
    st32((c.r[3].w[0]), c.f[0]);
    c.budget -= 1;
L_001F3C14:
    c.f[12] = ld32((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3C20u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 273u, depth + 1u); else { c.pc = 0x002D7D90u; return; } if (c.pc != 0x001F3C20u) [[unlikely]] return; }
L_001F3C20:
    set32(c.r[5], c.r[29].w[0] + 176u);
    set32(c.r[4], c.r[21].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3C30u); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0046(c, 159u, depth + 1u); else { c.pc = 0x0021B030u; return; } if (c.pc != 0x001F3C30u) [[unlikely]] return; }
L_001F3C30:
    set32(c.r[2], c.r[29].w[0] + 176u);
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[21].w[0] + 16u), c.f[3]);
    st32((c.r[21].w[0] + 20u), c.f[2]);
    st32((c.r[21].w[0] + 24u), c.f[1]);
    st32((c.r[21].w[0] + 28u), c.f[0]);
    c.f[3] = ld32((c.r[21].w[0] + 16u));
    c.f[2] = ld32((c.r[21].w[0] + 20u));
    c.f[1] = ld32((c.r[21].w[0] + 24u));
    c.f[0] = ld32((c.r[21].w[0] + 28u));
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    st32((c.r[21].w[0] + 32u), c.f[3]);
    st32((c.r[21].w[0] + 36u), c.f[2]);
    st32((c.r[21].w[0] + 40u), c.f[1]);
    st32((c.r[21].w[0] + 44u), c.f[0]);
    c.budget -= 18;
L_001F3C78:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 256u);  c.pc = t; return; }
L_001F3CC0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[6], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 17;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[20], c.r[0], c.r[0]);  if (t) { goto L_001F3D14; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3D0Cu);  if (depth < kMaxDepth) unit_003D(c, 7u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x001F3D0Cu) [[unlikely]] return; }
L_001F3D0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 128u) & ~15u, c.r[31]);  if (t) { [[clang::musttail]] return unit_003D(c, 6u, depth); } }
L_001F3D14:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 111u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F3D30; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 524u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F3D44; } }
L_001F3D30:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 791u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F3D44; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[16].w[0] + 791u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001F3D44:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 791u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F3D58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { [[clang::musttail]] return unit_003D(c, 5u, depth); } }
L_001F3D58:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 111u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 30u);  if (t) { goto L_001F3D7C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 524u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F3D80; } }
    set32(c.r[2], 0u + 30u);
    c.budget -= 1;
L_001F3D7C:
    st8((c.r[16].w[0] + 791u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_001F3D80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[18], c.r[2].w[0] + 26144u);
    mmi::paddub(c.r[22], c.r[0], c.r[0]);
    mmi::paddub(c.r[21], c.r[0], c.r[0]);
    mmi::paddub(c.r[19], c.r[0], c.r[0]);
    c.budget -= 5;
L_001F3D94:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8385u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 279u)));
    c.r[3].d[0] = ~(c.r[3].d[0] | 0ull);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st8((c.r[18].w[0] + 279u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_001F3E0C; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F3E08; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 531u));
    c.r[2].d[0] = ld8((c.r[18].w[0] + 531u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001F3E08; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 762u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[21], c.r[21].w[0] + 1u);  if (t) { goto L_001F3E00; } }
    set32(c.r[5], c.r[18].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3DECu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 168u, depth + 1u); else { c.pc = 0x002D6270u; return; } if (c.pc != 0x001F3DECu) [[unlikely]] return; }
L_001F3DEC:
    c.f[1] = ld32((c.r[16].w[0] + 1604u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001F3E08; } }
L_001F3E00:
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.budget -= 2;
L_001F3E08:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_001F3E0C:
    c.r[2].d[0] = c.r[19].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 8448u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F3D94u | kUnwind; return; } goto L_001F3D94; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1524u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x47C30000u);  if (t) { goto L_001F3F7C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001F3F78; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 8384u)));
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    st8((c.r[16].w[0] + 787u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_001F3E40:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 787u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 787u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F3E60; } }
    st8((c.r[16].w[0] + 787u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_001F3E60:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 787u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[2], c.r[2].w[0] + 26144u);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 531u));
    set32(c.r[4], c.r[5].w[0] << 5);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 8);
    set32(c.r[17], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = ld8((c.r[17].w[0] + 531u));
    c.budget -= 11;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_001F3F30; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F3F2C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1524u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_001F3F2C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001F3F2C; } }
    c.r[2].d[0] = c.r[21].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F3F10; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 762u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F3F00; } }
    c.r[2].d[0] = c.r[22].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F3F00; } }
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3EE8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 168u, depth + 1u); else { c.pc = 0x002D6270u; return; } if (c.pc != 0x001F3EE8u) [[unlikely]] return; }
L_001F3EE8:
    c.f[1] = ld32((c.r[16].w[0] + 1604u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001F3F2C; } }
    c.budget -= 1;
L_001F3F00:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 644u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F3F2C; } }
    c.budget -= 1;
L_001F3F10:
    st32((c.r[16].w[0] + 1532u), c.r[17].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 279u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8385u)));
    set32(c.r[20], 0u + 1u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 279u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001F3F40; } }
L_001F3F2C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_001F3F30:
    c.r[2].d[0] = c.r[18].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F3E40u | kUnwind; return; } goto L_001F3E40; } }
    c.budget -= 1;
L_001F3F40:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_001F3F50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { [[clang::musttail]] return unit_003D(c, 5u, depth); } }
L_001F3F50:
    set32(c.r[5], ld32((c.r[16].w[0] + 1524u)));
    set32(c.r[2], 0u + 2u);
    st32((c.r[16].w[0] + 1532u), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8384u)));
    st8((c.r[16].w[0] + 787u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8385u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 279u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 279u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_003D(c, 5u, depth); } }
L_001F3F78:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47C30000u);
    c.budget -= 1;
L_001F3F7C:
    c.r[2].d[0] = c.r[2].d[0] | 20480ull;
    c.f[20] = c.r[2].w[0];
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[19], c.r[2].w[0] + 26144u);
    mmi::paddub(c.r[22], c.r[0], c.r[0]);
    c.budget -= 6;
L_001F3F94:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 531u));
    c.r[2].d[0] = ld8((c.r[19].w[0] + 531u));
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[22], c.r[22].w[0] + 1u);  [[clang::musttail]] return unit_003D(c, 4u, depth); }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 4u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_003D(c, 3u, depth); } }
    c.r[1].d[0] = c.r[21].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001F3FD8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 348u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F3FD8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1532u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_003D(c, 3u, depth); } }
L_001F3FD8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 1u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_003D(c, 3u, depth); } }
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3FF4u); set32(c.r[5], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x001F3FF4u) [[unlikely]] return; }
L_001F3FF4:
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { [[clang::musttail]] return unit_003D(c, 3u, depth); } }
    [[clang::musttail]] return unit_003D(c, 2u, depth);
}

}
